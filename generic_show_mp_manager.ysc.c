#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
#endregion

void __EntryFunction__()
{
	func_1();
	while (!func_2(0, 0))
	{
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1()
{
	DEBUG::_0xF0783374333FD8CE(8, 201, "GSMAN_PROCESS_PRE_GAME");
	func_4(32, -1);
	func_5();
	if (func_6())
	{
		func_3();
	}
	func_7();
	func_8(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

bool func_2(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and NETWORK_SESSION_IS_TRANSITIONING = TRUE, so skipping");
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and NETWORK_SESSION_IS_ACTIVE = TRUE, so skipping");
		}
		else if (bParam1 && Global_1572887 < 39)
		{
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_9(Global_1572887, 0), ", so skipping");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE");
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_SIGNED_ONLINE = FALSE");
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
				return true;
			case 1:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
				return true;
			case 2:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
				if (!bParam0)
				{
					return true;
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE - but bIgnoreSessionMerge = TRUE, so skipping");
				}
				break;
			case 4:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
				return true;
			case 3:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
				return true;
			default:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = UNKNOWN");
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			DEBUG::_0xF0783374333FD8CE(8, 32, "KILL_EVENT_CAUGHT - EVENT_NETWORK_NETWORK_BAIL caught.  Bailing from MP.");
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_3()
{
	DEBUG::_0xF0783374333FD8CE(8, 201, "GSMAN_TERMINATE");
	func_10();
}

void func_4(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_10();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	char cVar7[64];

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	StringCopy(&cVar3, "tID: ", 32);
	StringIntConCat(&cVar3, SCRIPTS::GET_ID_OF_THIS_THREAD(), 32);
	StringCopy(&cVar7, "sID: ", 64);
	StringConCat(&cVar7, UNK_0x8F77B33B6A34D8BA(), 64);
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_11(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_10();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
					break;
				case 1:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
					func_10();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_10();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_10();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_10();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_10();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_10();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_10();
		}
		if (func_12() == 0)
		{
			if (func_13())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_10();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_10();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

bool func_6()
{
	if (Global_1572887.f_9)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "SHOULD_THIS_MULTIPLAYER_SCRIPT_TERMINATE NETWORK_IS_GAME_IN_PROGRESS() = FALSE, bail.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "SHOULD_THIS_MULTIPLAYER_SCRIPT_TERMINATE - NETWORK_IS_SIGNED_ONLINE = FALSE");
		UNK_0x355E72323AEE83CC(-1, 6);
		return true;
	}
	return false;
}

void func_7()
{
	struct<36> Var0;
	var uVar36;

	DEBUG::_0xA308F935BDECCEC0(8, 201, "[REGISTER_NET_SHOW_MANAGER_BROADCAST_DATA] init show manager data");
	Var0.f_3 = 4;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_1 = -1;
	Var0.f_3.f_1.f_2 = -1;
	Var0.f_3.f_1.f_5 = -1;
	Var0.f_3.f_1.f_8 = -1;
	Var0.f_3.f_1.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_5 = -1;
	Global_1270114 = { Var0 };
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1270114, 36, 7);
	func_14(NETWORK::_0xBA24095EA96DFE17(&Global_1270114), 36, "g_mpShowHostData");
	if (func_15())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 201, "[REGISTER_NET_SHOW_MANAGER_BROADCAST_DATA] NETWORK_IS_MP_TRANSITION_COMPLETE");
		Global_1270081[func_16()] = uVar36;
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1270081, 33, 8);
		func_17(NETWORK::_0xBA24095EA96DFE17(&(Global_1270081[0])), 33, "g_mpShowPlayerData");
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 201, "[REGISTER_NET_SHOW_MANAGER_BROADCAST_DATA] is not NETWORK_IS_MP_TRANSITION_COMPLETE");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1270081, 33, 8);
		func_17(NETWORK::_0xBA24095EA96DFE17(&(Global_1270081[0])), 33, "g_mpShowPlayerData");
	}
}

void func_8(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
					break;
				case 1:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
					func_10();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_10();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_10();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_10();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(168, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] EXIT (Fail) - Network Game Not In Progress");
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] EXIT (Success) - First Network Broadcast Received after ", iVar9, " frames - ", &Var1);
			UNK_0x355E72323AEE83CC(-1, 6);
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(680, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] EXIT (Fail) - Waiting too long for first network broadcast - but allowing script to continue - ", &Var1);
			func_10();
			return;
		}
		DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] STILL WAITING (frames: ", iVar9, " ) - ", &Var1);
		BUILTIN::WAIT(0);
	}
}

char* func_9(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_STATE__INIT__STARTUP";
		case 1:
			return "MP_STATE__INIT__RESURRECT_PLAYER";
		case 2:
			return "MP_STATE__INIT__VERIFY_PLAYER_RESURRECTION";
		case 3:
			return "MP_STATE__INIT__KILL_EXISTING_THREADS";
		case 4:
			return "MP_STATE__INIT__WAIT_FOR_THREAD_TERMINATION";
		case 5:
			return "MP_STATE__INIT__KILL_EXISTING_SESSION";
		case 6:
			return "MP_STATE__INIT__WAIT_FOR_SESSION_END";
		case 7:
			return "MP_STATE__INIT__WIPE_ACCOUNT_DATA";
		case 8:
			return "MP_STATE__INIT__REINITIALIZE_GLOBAL_DATA";
		case 9:
			return "MP_STATE__INIT__START_TUNABLES_LOAD";
		case 10:
			return "MP_STATE__INIT__VALIDATE_TUNABLES_LOAD";
		case 11:
			return "MP_STATE__INIT__PREPARE_TRANSITION";
		case 12:
			return "MP_STATE__INIT__VALIDATE_GAMER_HANDLE";
		case 13:
			return "MP_STATE__INIT__GAME_FRAMEWORK_MANAGER_INIT";
		case 14:
			return "MP_STATE__TRANSITION__START";
		case 15:
			return "MP_STATE__TRANSITION__SAVE_DATA__WIPE_ON_LOAD";
		case 16:
			return "MP_STATE__TRANSITION__SAVE_DATA__END";
		case 17:
			return "MP_STATE__TRANSITION__SAVE_DATA__INITIALIZE_INVENTORY";
		case 18:
			return "MP_STATE__TRANSITION__SAVE_DATA__LOAD_INVENTORY";
		case 19:
			return "MP_STATE__TRANSITION__POSSE__SET_UP_POSSE_TRANSITION";
		case 20:
			return "MP_STATE__TRANSITION__UGC__START";
		case 21:
			return "MP_STATE__TRANSITION__UGC__CONFIRM_LOAD";
		case 22:
			return "MP_STATE__TRANSITION__SESSION__START";
		case 23:
			return "MP_STATE__TRANSITION__SESSION__WAIT_FOR_DEBUG_PROGRESSION";
		case 24:
			return "MP_STATE__TRANSITION__SESSION__PREPARE_FOR_SESSION_TRANSITION";
		case 25:
			return "MP_STATE__TRANSITION__SESSION__TERMINATE_EXISTING_SESSION";
		case 26:
			return "MP_STATE__TRANSITION__SESSION__REQUEST_SESSION";
		case 27:
			return "MP_STATE__TRANSITION__SESSION__CONFIRM_SESSION_REQUEST";
		case 28:
			return "MP_STATE__TRANSITION__THREAD__START";
		case 29:
			return "MP_STATE__TRANSITION__THREAD__LOAD_DEBUG_UPDATE";
		case 30:
			return "MP_STATE__TRANSITION__THREAD__LOAD_NET_MAIN_OFFLINE";
		case 31:
			return "MP_STATE__TRANSITION__THREAD__WAIT_FOR_NET_MAIN_OFFLINE";
		case 32:
			return "MP_STATE__TRANSITION__THREAD__LOAD_AUTO_START_THREAD";
		case 33:
			return "MP_STATE__TRANSITION__THREAD__LOAD_SP_MAIN_THREADS";
		case 34:
			return "MP_STATE__TRANSITION__THREAD__LOAD_MISSION_CREATOR";
		case 35:
			return "MP_STATE__TRANSITION__END";
		case 36:
			return "MP_STATE__BAIL__START";
		case 37:
			return "MP_STATE__BAIL__CONFIRM_BAIL_TO_FRONTEND";
		case 38:
			return "MP_STATE__BAIL__END";
		case 39:
			return "MP_STATE__MAIN__UPDATE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_10()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NETSCRIPT_NOT_ACTIVE";
		case 1:
			return "NETSCRIPT_JOINING";
		case 2:
			return "NETSCRIPT_PLAYING";
		case 3:
			return "NETSCRIPT_TERMINATED";
		case 4:
			return "NETSCRIPT_FAILED_SESSION_FULL";
		case 5:
			return "NETSCRIPT_FAILED_NO_JOIN_IN_PROGRESS";
		case 6:
			return "NETSCRIPT_FAILED_NO_JOIN_IN_PROGRESS";
		default:
			break;
	}
	return "";
}

int func_12()
{
	return Global_1572887.f_13;
}

bool func_13()
{
	return Global_1051590.f_8;
}

int func_14(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_15()
{
	return !Global_1572887.f_9;
}

int func_16()
{
	return Global_1102630.f_3672;
}

int func_17(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

