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
	DEBUG::_0xF0783374333FD8CE(8, 48, "Starting Train Manager script.");
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xF0783374333FD8CE(8, 48, "Terminating Train Manager script.");
	func_4();
}

void func_1()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 48, "NET_TRAIN_MANAGER_PROCESS_PRE_GAME");
	iVar0 = MISC::GET_GAME_TIMER();
	func_5(32, -1);
	func_6();
	if (func_7())
	{
		func_4();
	}
	func_8(&Global_1138768);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1138768, 106, 6);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Global_1138768), 106, "g_mpTrainManagerHostData");
	func_10(&Global_1138874);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138874, 417, 7);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Global_1138874[0 /*13*/])), 417, "g_mpTrainManagerPlayerData");
	func_12(&Global_1139291);
	func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	DEBUG::_0xF0783374333FD8CE(2216, 34, "{ss}", UNK_0x8F77B33B6A34D8BA(), " pre-process took ", (MISC::GET_GAME_TIMER() - iVar0), " ms.");
}

bool func_2()
{
	if (func_14(0, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 48, "NET_TRAIN_MANAGER_SHOULD_TERMINATE - KILL_EVENT_CAUGHT");
		return true;
	}
	return false;
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_15();
	}
	func_16();
}

void func_4()
{
	DEBUG::_0xF0783374333FD8CE(8, 48, "NET_TRAIN_MANAGER_TERMINATE");
	func_17();
}

void func_5(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_17();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_6()
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_18(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_17();
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
					func_17();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_17();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_17();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_17();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_17();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_17();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_17();
		}
		if (func_19() == 0)
		{
			if (func_20())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_17();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_17();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

bool func_7()
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

void func_8(var uParam0)
{
	struct<106> Var0;

	Var0.f_2 = 3;
	Var0.f_2.f_1.f_6 = -1;
	Var0.f_2.f_1.f_6.f_1 = -1;
	Var0.f_2.f_1.f_17.f_6 = -1;
	Var0.f_2.f_1.f_17.f_6.f_1 = -1;
	Var0.f_2.f_1.f_17.f_17.f_6 = -1;
	Var0.f_2.f_1.f_17.f_17.f_6.f_1 = -1;
	Var0.f_54 = 3;
	Var0.f_54.f_1.f_6 = -1;
	Var0.f_54.f_1.f_6.f_1 = -1;
	Var0.f_54.f_1.f_17.f_6 = -1;
	Var0.f_54.f_1.f_17.f_6.f_1 = -1;
	Var0.f_54.f_1.f_17.f_17.f_6 = -1;
	Var0.f_54.f_1.f_17.f_17.f_6.f_1 = -1;
	*uParam0 = { Var0 };
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_10(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_21(uParam0[iVar0 /*13*/]);
		iVar0++;
	}
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(var uParam0)
{
	struct<134> Var0;

	Var0.f_2 = 3;
	Var0.f_2.f_1.f_11 = 15;
	Var0.f_2.f_1.f_42.f_11 = 15;
	Var0.f_2.f_1.f_42.f_42.f_11 = 15;
	Var0.f_129 = 4;
	*uParam0 = { Var0 };
}

void func_13(bool bParam0)
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
					func_17();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_17();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_17();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_17();
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
			func_17();
			return;
		}
		DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] STILL WAITING (frames: ", iVar9, " ) - ", &Var1);
		BUILTIN::WAIT(0);
	}
}

bool func_14(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_22(Global_1572887, 0), ", so skipping");
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

void func_15()
{
	switch (Global_1138768)
	{
		case 0:
			func_23();
			break;
		case 1:
			func_24();
			break;
		case 2:
			func_25();
			break;
	}
}

void func_16()
{
	switch (Global_1139291)
	{
		case 0:
			func_26();
			break;
		case 1:
			func_27();
			break;
		case 2:
			func_28();
			break;
	}
}

void func_17()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_18(int iParam0)
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

int func_19()
{
	return Global_1572887.f_13;
}

bool func_20()
{
	return Global_1051590.f_8;
}

void func_21(var uParam0)
{
	struct<13> Var0;

	Var0 = 3;
	*uParam0 = { Var0 };
}

char* func_22(int iParam0, int iParam1)
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

void func_23()
{
	if (func_29())
	{
		func_30(2);
	}
	func_31();
	func_32(1);
}

void func_24()
{
	if (func_33())
	{
		func_32(2);
	}
}

void func_25()
{
	func_34();
}

void func_26()
{
	if (Global_1138768 > 0)
	{
		func_35();
		func_36(1);
	}
}

void func_27()
{
	if (func_33() && Global_1138768 > 1)
	{
		func_36(2);
	}
}

void func_28()
{
	func_37();
	func_38();
	func_39();
}

bool func_29()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_30(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(40, 48, "NET_TRAIN_MANAGER_HOST_SET_BIT - ", func_40(iParam0, 0));
	func_41(&(Global_1138768.f_1), iParam0);
}

int func_31()
{
	struct<13> Var0;

	DEBUG::_0x4DC69742196F818A(8, 48, "NET_TRAIN_MANAGER_CLIENT_REQUEST_CLEAR_ALL_JUNCTIONS");
	if (!func_42())
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 12;
		return func_44(&Var0, func_43(0, 8));
	}
	return 1;
}

void func_32(int iParam0)
{
	if (Global_1138768 != iParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 48, "NET_TRAIN_MANAGER_HOST_SET_STATE - from: ", func_45(Global_1138768, 0), " to: ", func_45(iParam0, 0));
		Global_1138768 = iParam0;
	}
}

bool func_33()
{
	if (!func_46())
	{
		return false;
	}
	if (!func_47())
	{
		return false;
	}
	return true;
}

void func_34()
{
	if (Global_1139291.f_129[0] >= 3)
	{
		Global_1139291.f_129[0] = 0;
	}
	func_48(Global_1139291.f_129[0]);
	Global_1139291.f_129[0]++;
}

void func_35()
{
	DEBUG::_0xA308F935BDECCEC0(8, 48, "NET_TRAIN_MANAGER_CLIENT_REQUEST_UPDATE_JUNCTIONS");
	if (!Global_1572887.f_6)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 48, "NET_TRAIN_MANAGER_CLIENT_REQUEST_UPDATE_JUNCTIONS - not in free roam, exiting.");
		return;
	}
	if (Global_2883584)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 48, "NET_TRAIN_MANAGER_CLIENT_REQUEST_UPDATE_JUNCTIONS - in mission creator, exiting.");
		return;
	}
	if (Global_1048577)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 48, "NET_TRAIN_MANAGER_CLIENT_REQUEST_UPDATE_JUNCTIONS - active mission controller, exiting.");
		return;
	}
	if (func_49(2))
	{
		func_50(joaat("FLATNECK_TO_VALENTINE"), 1);
	}
	else
	{
		func_50(joaat("FLATNECK_TO_VALENTINE"), 0);
	}
	func_50(1548096282 /* VALENTINE_TO_RHODES */, 1);
	func_50(-245962931 /* CORNWALL_TO_EMERALD_RANCH*/, 1);
	func_50(-500348165 /* EMERALD_RANCH_TO_CORNWALL*/, 1);
	func_50(joaat("EMERALD_RANCH_DEAD_END_TO_RHODES"), 1);
	func_50(-1420724065 /* SAINT_DENIS_TO_VAN_HORN */, 1);
	func_50(joaat("MACFARLANES_RANCH"), 1);
	func_50(1603023256 /* BENEDICT_PASS */, 1);
	func_50(joaat("BACCHUS_STATION"), 1);
	func_50(joaat("APPLESEED_TIMBER_FORK"), 1);
}

void func_36(int iParam0)
{
	if (Global_1139291 != iParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 48, "NET_TRAIN_MANAGER_CLIENT_SET_STATE - from: ", func_45(Global_1139291, 0), " to: ", func_45(iParam0, 0));
		Global_1139291 = iParam0;
	}
}

void func_37()
{
	if (func_51(64, 255) || (Global_1901988.f_312.f_273 > 0 && !func_52()))
	{
		if (!func_53(1))
		{
			func_54(1);
		}
	}
	else if (func_53(1))
	{
		func_55(1);
	}
}

void func_38()
{
	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	Global_1139291.f_129[2]++;
	if (Global_1139291.f_129[2] >= 300)
	{
		func_35();
		Global_1139291.f_129[2] = 0;
	}
}

void func_39()
{
	if (Global_1139291.f_129[1] >= 3)
	{
		Global_1139291.f_129[1] = 0;
	}
	func_56(Global_1139291.f_129[1]);
	Global_1139291.f_129[1]++;
}

char* func_40(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_TRAIN_MANAGER_BIT_IS_DISABLED";
		case 2:
			return "NET_TRAIN_MANAGER_BIT_IS_JUNCTION_FLATNECK_TO_VALENTINE";
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

void func_41(var uParam0, int iParam1)
{
	func_57(uParam0, iParam1);
}

bool func_42()
{
	if (!NETWORK::NETWORK_IS_HOST())
	{
		return false;
	}
	DEBUG::_0x4DC69742196F818A(8, 48, "NET_TRAIN_MANAGER_CLIENT_ON_REQUEST_CLEAR_ALL_JUNCTIONS");
	VEHICLE::_0x138398153824E332();
	return true;
}

var func_43(int iParam0, int iParam1)
{
	return func_58(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

int func_44(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 48, "NET_TRAIN_MANAGER_CLIENT_BROADCAST_EVENT - playerBits is 0");
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 0, &uParam1);
	return 1;
}

char* func_45(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_TRAIN_MANAGER_STATE_INIT";
		case 1:
			return "NET_TRAIN_MANAGER_STATE_STREAM";
		case 2:
			return "NET_TRAIN_MANAGER_STATE_MAIN";
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

bool func_46()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_3;
}

bool func_47()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_5;
}

void func_48(int iParam0)
{
	switch (Global_1138768.f_2[iParam0 /*17*/])
	{
		case 0:
			func_59(iParam0);
			break;
		case 1:
			func_60(iParam0);
			break;
		case 3:
			func_61(iParam0);
			break;
		case 4:
			func_62(iParam0);
			break;
	}
}

bool func_49(int iParam0)
{
	return func_63(Global_1138768.f_1, iParam0);
}

int func_50(int iParam0, bool bParam1)
{
	struct<13> Var0;

	DEBUG::_0x4DC69742196F818A(680, 48, "NET_TRAIN_MANAGER_CLIENT_REQUEST_SET_JUNCTION - ", func_64(iParam0, 0), " bIsEnabled: ", MISC::_0xF216F74101968DB0(bParam1));
	if (!func_65(iParam0, bParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 11;
		Var0.f_7 = iParam0;
		Var0.f_11 = bParam1;
		return func_44(&Var0, func_43(0, 8));
	}
	return 1;
}

bool func_51(int iParam0, int iParam1)
{
	if (!Global_1072032.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197826[iParam1 /*12*/] && iParam0) != 0;
}

bool func_52()
{
	return func_66(Global_1572887.f_7, 1);
}

bool func_53(int iParam0)
{
	return func_63(Global_1139291.f_1, iParam0);
}

void func_54(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(40, 48, "NET_TRAIN_MANAGER_CLIENT_SET_BIT - ", func_40(iParam0, 0));
	func_41(&(Global_1139291.f_1), iParam0);
}

void func_55(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(40, 48, "NET_TRAIN_MANAGER_CLIENT_CLEAR_BIT - ", func_40(iParam0, 0));
	func_67(&(Global_1139291.f_1), iParam0);
}

void func_56(int iParam0)
{
	func_68(iParam0);
	switch (Global_1139291.f_2[iParam0 /*42*/])
	{
		case 0:
			func_69(iParam0);
			break;
		case 1:
			func_70(iParam0);
			break;
		case 2:
			func_71(iParam0);
			break;
		case 3:
			func_72(iParam0);
			break;
		case 4:
			func_73(iParam0);
			break;
	}
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_58(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - Not online.  This will return nothing now.");
		return uVar0;
	}
	if (func_74() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return just you at bit index ", iVar1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return nothing.");
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275959.f_10;
	iVar6 = Global_1275959.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_75());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_75());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_75());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_76(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - k_iNET_PQFLAG_PARTICIPANT but this thread is not a networked script.  Clearing k_iNET_PQFLAG_PARTICIPANT and setting NET_PQFLAG_ACTIVE_PLAYERS.");
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275959.f_154[iVar2]))
		{
			iVar10 = Global_1275959.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_77(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1275959.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_78(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_79(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

void func_59(int iParam0)
{
	if (func_53(1))
	{
		return;
	}
	if (Global_1138768.f_54[iParam0 /*17*/].f_1 != 0)
	{
		Global_1138768.f_2[iParam0 /*17*/] = { Global_1138768.f_54[iParam0 /*17*/] };
		func_80(&(Global_1138768.f_54[iParam0 /*17*/]));
		DEBUG::_0xA308F935BDECCEC0(40, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_INVALID - ", func_81(iParam0, 0));
		DEBUG::_0xA308F935BDECCEC0(40, 48, "eConfig: ", func_82(Global_1138768.f_2[iParam0 /*17*/].f_1, 0));
		DEBUG::_0xA308F935BDECCEC0(56, 48, "vPosition: ", &(Global_1138768.f_2[iParam0 /*17*/].f_2));
		DEBUG::_0xA308F935BDECCEC0(8, 48, "bDirection: ", Global_1138768.f_2[iParam0 /*17*/].f_5);
		DEBUG::_0xA308F935BDECCEC0(40, 48, "sUIDidx: ", func_83(Global_1138768.f_2[iParam0 /*17*/].f_6));
		func_84(iParam0, 1);
	}
	else
	{
		func_85(iParam0);
	}
}

void func_60(int iParam0)
{
	if (func_53(1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_INIT - ", func_81(iParam0, 0), " NET_TRAIN_MANAGER_BIT_IS_DISABLED");
		func_84(iParam0, 4);
		return;
	}
	func_84(iParam0, 3);
}

void func_61(int iParam0)
{
	if (func_53(1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " NET_TRAIN_MANAGER_BIT_IS_DISABLED");
		func_84(iParam0, 4);
		return;
	}
	else if (!func_86(iParam0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " No clients have NET_TRAIN_MANAGER_TRAIN_BIT_IS_INITIALIZED");
		func_84(iParam0, 4);
		return;
	}
	else if (Global_1138768.f_54[iParam0 /*17*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " a new train has been requested");
		func_84(iParam0, 4);
		return;
	}
	func_87(iParam0);
	if (!func_88(&(Global_1138768.f_2[iParam0 /*17*/].f_12)))
	{
		if (!func_86(iParam0, 2))
		{
			Global_1138768.f_2[iParam0 /*17*/].f_16 = MISC::GET_RANDOM_INT_IN_RANGE(180000, 300000);
			func_89(&(Global_1138768.f_2[iParam0 /*17*/].f_12));
			DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " Starting expiration timer ", Global_1138768.f_2[iParam0 /*17*/].f_16);
		}
	}
	else if (func_86(iParam0, 2))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " Stopping expiration timer!");
		func_90(&(Global_1138768.f_2[iParam0 /*17*/].f_12));
	}
	else if (func_91(&(Global_1138768.f_2[iParam0 /*17*/].f_12)) > Global_1138768.f_2[iParam0 /*17*/].f_16)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " expired! Destroying!");
		func_84(iParam0, 4);
		return;
	}
}

void func_62(int iParam0)
{
	if (!func_92(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_CLEANUP - ", func_81(iParam0, 0), " NOT NET_TRAIN_MANAGER_GET_IS_TRAIN_BEYOND_CLEANUP_DELAY.");
		return;
	}
	if (!func_86(iParam0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_CLEANUP - ", func_81(iParam0, 0), " initializing data.");
		func_80(&(Global_1138768.f_2[iParam0 /*17*/]));
	}
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_64(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1420724065 /* SAINT_DENIS_TO_VAN_HORN */:
			return "NET_TRAIN_JUNCTION_SAINT_DENIS_TO_VAN_HORN";
		case joaat("MACFARLANES_RANCH"):
			return "NET_TRAIN_JUNCTION_MACFARLANES_RANCH";
		case joaat("FLATNECK_TO_VALENTINE"):
			return "NET_TRAIN_JUNCTION_FLATNECK_TO_VALENTINE";
		case -500348165 /* EMERALD_RANCH_TO_CORNWALL*/:
			return "NET_TRAIN_JUNCTION_EMERALD_RANCH_TO_CORNWALL";
		case joaat("BACCHUS_STATION"):
			return "NET_TRAIN_JUNCTION_BACCHUS_STATION";
		case -245962931 /* CORNWALL_TO_EMERALD_RANCH*/:
			return "NET_TRAIN_JUNCTION_CORNWALL_TO_EMERALD_RANCH";
		case 0:
			return "NET_TRAIN_JUNCTION_INVALID";
		case joaat("EMERALD_RANCH_DEAD_END_TO_RHODES"):
			return "NET_TRAIN_JUNCTION_EMERALD_RANCH_DEAD_END_TO_RHODES";
		case joaat("APPLESEED_TIMBER_FORK"):
			return "NET_TRAIN_JUNCTION_APPLESEED_TIMBER_FORK";
		case 1548096282 /* VALENTINE_TO_RHODES */:
			return "NET_TRAIN_JUNCTION_VALENTINE_TO_RHODES";
		case 1603023256 /* BENEDICT_PASS */:
			return "NET_TRAIN_JUNCTION_BENEDICT_PASS";
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

bool func_65(int iParam0, bool bParam1)
{
	bool bVar0;
	vector3 vVar1;
	char* sVar4;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("FLATNECK_TO_VALENTINE"):
			bVar0 = joaat("FREIGHT_GROUP");
			vVar1 = { -281.0263f, -319.5532f, 88.02095f };
			break;
		case -245962931 /* CORNWALL_TO_EMERALD_RANCH*/:
			bVar0 = joaat("TRAINS3");
			vVar1 = { 1481.509f, 648.3527f, 91.52025f };
			break;
		case -500348165 /* EMERALD_RANCH_TO_CORNWALL*/:
			bVar0 = joaat("BRAITHWAITES2_TRACK_CONFIG");
			vVar1 = { 1529.881f, 467.6379f, 89.20429f };
			break;
		case joaat("EMERALD_RANCH_DEAD_END_TO_RHODES"):
			bVar0 = joaat("TRAINS3");
			vVar1 = { 1692.865f, 544.3328f, 97.59906f };
			break;
		case -1420724065 /* SAINT_DENIS_TO_VAN_HORN */:
			bVar0 = joaat("TRAINS3");
			vVar1 = { 2659.843f, -435.6971f, 42.38826f };
			break;
		case 1548096282 /* VALENTINE_TO_RHODES */:
			bVar0 = joaat("TRAINS3");
			vVar1 = { 31.56687f, -29.40786f, 102.3233f };
			break;
		case joaat("MACFARLANES_RANCH"):
			bVar0 = joaat("TRAINS_OLD_WEST01");
			vVar1 = { -2174.342f, -2508.351f, 64.79848f };
			break;
		case 1603023256 /* BENEDICT_PASS */:
			bVar0 = joaat("TRAINS_OLD_WEST03");
			vVar1 = { -4916.622f, -3009.565f, -19.15694f };
			break;
		case joaat("BACCHUS_STATION"):
			bVar0 = joaat("FREIGHT_GROUP");
			vVar1 = { 610.215f, 1662.165f, 186.3704f };
			break;
		case joaat("APPLESEED_TIMBER_FORK"):
			bVar0 = joaat("FREIGHT_GROUP");
			vVar1 = { -1375.646f, -137.362f, 99.87008f };
			break;
	}
	if (!VEHICLE::_0x86AFC343CF7F0B34(bVar0, vVar1, &sVar4))
	{
		return false;
	}
	DEBUG::_0x4DC69742196F818A(43688, 48, "NET_TRAIN_MANAGER_CLIENT_ON_REQUEST_SET_JUNCTION - ", func_64(iParam0, 0), " bEnabled: ", MISC::_0xF216F74101968DB0(bParam1), " eTrack: ", func_93(bVar0, 0), " iJunction: ", sVar4);
	VEHICLE::_0xE6C5E2125EB210C1(bVar0, sVar4, bParam1);
	return true;
}

bool func_66(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_67(var uParam0, int iParam1)
{
	func_94(uParam0, iParam1);
}

void func_68(int iParam0)
{
	float fVar0;
	struct<2> Var1;

	fVar0 = func_95(iParam0);
	Var1 = { Global_1138768.f_2[iParam0 /*17*/].f_6 };
	if (func_96(Var1) && func_98(func_97(0), Var1))
	{
		fVar0 = -1f;
	}
	if (Global_1139291.f_2[iParam0 /*42*/].f_3 != fVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(424, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_LAUNCH_RADIUS - ", func_81(iParam0, 0), " fLaunchRadius: ", fVar0);
		DEBUG::_0xA308F935BDECCEC0(680, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_LAUNCH_RADIUS - ", func_81(iParam0, 0), " sUIDidx: ", func_83(Var1));
		Global_1139291.f_2[iParam0 /*42*/].f_3 = fVar0;
	}
}

void func_69(int iParam0)
{
	if (func_53(1))
	{
		return;
	}
	if (Global_1138768.f_2[iParam0 /*17*/] > 0 && Global_1138768.f_2[iParam0 /*17*/] < 4)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_INVALID - ", func_81(iParam0, 0));
		DEBUG::_0xA308F935BDECCEC0(40, 48, "eConfig: ", func_82(Global_1138768.f_2[iParam0 /*17*/].f_1, 0));
		DEBUG::_0xA308F935BDECCEC0(56, 48, "vPosition: ", &(Global_1138768.f_2[iParam0 /*17*/].f_2));
		DEBUG::_0xA308F935BDECCEC0(8, 48, "bDirection: ", Global_1138768.f_2[iParam0 /*17*/].f_5);
		DEBUG::_0xA308F935BDECCEC0(40, 48, "sUIDidx: ", func_83(Global_1138768.f_2[iParam0 /*17*/].f_6));
		func_99(iParam0, 1);
		func_100(iParam0, 1);
	}
}

void func_70(int iParam0)
{
	float fVar0;

	if (Global_1138768.f_2[iParam0 /*17*/] == 4)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_INIT - ", func_81(iParam0, 0), " Host in NET_TRAIN_MANAGER_TRAIN_STATE_CLEANUP");
		func_100(iParam0, 4);
		return;
	}
	else if (func_53(1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_INIT - ", func_81(iParam0, 0), " NET_TRAIN_MANAGER_BIT_IS_DISABLED");
		func_100(iParam0, 4);
		return;
	}
	if (Global_1138768.f_2[iParam0 /*17*/] > 1)
	{
		if (Global_1139291.f_2[iParam0 /*42*/].f_3 > 0f)
		{
			if (!func_101(Global_1138768.f_2[iParam0 /*17*/].f_2))
			{
				fVar0 = BUILTIN::VDIST(Global_1138768.f_2[iParam0 /*17*/].f_2, Global_34);
				if (fVar0 < Global_1139291.f_2[iParam0 /*42*/].f_3 || func_102(iParam0))
				{
					DEBUG::_0xA308F935BDECCEC0(952, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_INIT - vPlayer: ", &Global_34, " vTrain: ", &(Global_1138768.f_2[iParam0 /*17*/].f_2));
					DEBUG::_0xA308F935BDECCEC0(408, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_INIT - fDist: ", fVar0, " fLaunchRadius: ", Global_1139291.f_2[iParam0 /*42*/].f_3);
					func_100(iParam0, 2);
				}
			}
		}
		else if (Global_1139291.f_2[iParam0 /*42*/].f_3 == -1f)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_INIT - ", func_81(iParam0, 0), " -1 launch radius, automatically launch!");
			func_100(iParam0, 2);
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_INIT - ", func_81(iParam0, 0), " 0 launch radius, this should never happen!");
		}
	}
}

void func_71(int iParam0)
{
	struct<2> Var0;

	if (Global_1138768.f_2[iParam0 /*17*/] == 4)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_LAUNCH - ", func_81(iParam0, 0), " Host in NET_TRAIN_MANAGER_TRAIN_STATE_CLEANUP");
		func_100(iParam0, 4);
		return;
	}
	else if (func_53(1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_LAUNCH - ", func_81(iParam0, 0), " NET_TRAIN_MANAGER_BIT_IS_DISABLED");
		func_100(iParam0, 4);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1139291.f_2[iParam0 /*42*/].f_1))
	{
		SCRIPTS::REQUEST_SCRIPT("net_train");
		if (!SCRIPTS::HAS_SCRIPT_LOADED("net_train"))
		{
			return;
		}
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
		{
			return;
		}
		Var0 = iParam0;
		Var0.f_1 = Global_1138768.f_2[iParam0 /*17*/].f_1;
		Global_1139291.f_2[iParam0 /*42*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_train", &Var0, 2, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train");
		func_99(iParam0, 2);
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_LAUNCH - ", func_81(iParam0, 0), " launched net_train");
	}
	else
	{
		func_100(iParam0, 3);
	}
}

void func_72(int iParam0)
{
	if (Global_1138768.f_2[iParam0 /*17*/] == 4)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " Host in NET_TRAIN_MANAGER_TRAIN_STATE_CLEANUP");
		func_100(iParam0, 4);
	}
	else if (func_53(1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " NET_TRAIN_MANAGER_BIT_IS_DISABLED");
		func_100(iParam0, 4);
	}
	else if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1139291.f_2[iParam0 /*42*/].f_1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_MAIN - ", func_81(iParam0, 0), " thread does not exist");
		func_100(iParam0, 4);
	}
}

void func_73(int iParam0)
{
	struct<4> Var0;
	struct<42> Var4;

	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1139291.f_2[iParam0 /*42*/].f_1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_CLEANUP - ", func_81(iParam0, 0), " waiting for thread shutdown.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_CLEANUP - ", func_81(iParam0, 0), " initializing data.");
	Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/] = { Var0 };
	Var4.f_11 = 15;
	if (Global_1139291.f_2[iParam0 /*42*/].f_9 != 0)
	{
		Var4.f_9 = Global_1139291.f_2[iParam0 /*42*/].f_9;
	}
	if (!func_92(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_CLIENT_UPDATE_TRAIN_CLEANUP - ", func_81(iParam0, 0), " NOT NET_TRAIN_MANAGER_GET_IS_TRAIN_BEYOND_CLEANUP_DELAY.");
		return;
	}
	Global_1139291.f_2[iParam0 /*42*/] = { Var4 };
}

int func_74()
{
	return Global_1051590.f_12;
}

char* func_75()
{
	return "unnamed";
}

int func_76(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_77(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_103(36, iParam0);
}

int func_78(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102630.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_GET_PARENT_STATE invalid playerID, iPlayerID=", iParam0);
		return 26;
	}
	if (Global_1275959.f_22[iParam0])
	{
		return Global_1100880[iParam0 /*53*/].f_1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_GET_STATE - Player ", iParam0, " is not active!");
	return 26;
}

bool func_79(char* sParam0)
{
	if (func_104(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_105(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

void func_80(var uParam0)
{
	struct<17> Var0;

	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	*uParam0 = { Var0 };
}

char* func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_TRAIN_PRIMARY";
		case 1:
			return "NET_TRAIN_SECONDARY";
		case 2:
			return "NET_TRAIN_TROLLEY";
		case 3:
			return "NET_TRAIN_MAX";
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

var func_82(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1599294664);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_83(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_106(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_96(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_107(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_84(int iParam0, int iParam1)
{
	if (Global_1138768.f_2[iParam0 /*17*/] != iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(10920, 48, "NET_TRAIN_MANAGER_HOST_SET_TRAIN_STATE - ", func_81(iParam0, 0), " from: ", func_108(Global_1138768.f_2[iParam0 /*17*/], 0), " to: ", func_108(iParam1, 0));
		Global_1138768.f_2[iParam0 /*17*/] = iParam1;
	}
}

void func_85(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;

	Global_1139291.f_2[iParam0 /*42*/].f_7++;
	if (Global_1139291.f_2[iParam0 /*42*/].f_7 < 60)
	{
		return;
	}
	Global_1139291.f_2[iParam0 /*42*/].f_7 = 0;
	if (func_52())
	{
		return;
	}
	if (!func_88(&(Global_1138768.f_2[iParam0 /*17*/].f_9)))
	{
		iVar0 = func_109(iParam0);
		if (iVar0 > 0)
		{
			Global_1138768.f_2[iParam0 /*17*/].f_15 = iVar0;
			DEBUG::_0xA308F935BDECCEC0(168, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_DEFAULT_TRAIN - ", func_81(iParam0, 0), " iSpawnTime: ", iVar0);
			func_89(&(Global_1138768.f_2[iParam0 /*17*/].f_9));
		}
		return;
	}
	else if (func_91(&(Global_1138768.f_2[iParam0 /*17*/].f_9)) < Global_1138768.f_2[iParam0 /*17*/].f_15)
	{
		return;
	}
	bVar1 = func_110(iParam0);
	if (bVar1 == 0)
	{
		return;
	}
	iVar2 = func_111(iParam0);
	if (iVar2 == 0)
	{
		return;
	}
	vVar3 = { func_112(iVar2) };
	fVar6 = 0f;
	vVar7 = { VEHICLE::_0xBA958F68031DDBFC(vVar3.x, vVar3.y) };
	iVar13 = 0;
	while (iVar13 <= 30)
	{
		fVar6 = (200f + (IntToFloat(iVar13) * 10f));
		vVar10 = { VEHICLE::_0x35D302397E524939(vVar3.x, vVar7, fVar6, !vVar3.z) };
		if (func_113(iParam0, vVar10))
		{
			DEBUG::_0xA308F935BDECCEC0(15016, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_DEFAULT_TRAIN - ", func_81(iParam0, 0), " requesting at ", func_114(iVar2, 0), " vPosition: ", &vVar10);
			func_116(iParam0, bVar1, vVar10, vVar3.z, func_115());
			return;
		}
		iVar13++;
	}
}

bool func_86(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_63(Global_1138874[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = Global_1139291.f_2[iParam0 /*42*/].f_8;
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		vVar2 = { Global_1138874[iVar0 /*13*/][iParam0 /*4*/].f_1 };
		if (!func_101(vVar2))
		{
			if (BUILTIN::VDIST(vVar2, Global_1138768.f_2[iParam0 /*17*/].f_2) > 10f)
			{
				Global_1138768.f_2[iParam0 /*17*/].f_2 = { vVar2 };
				DEBUG::_0xA308F935BDECCEC0(936, 48, "NET_TRAIN_MANAGER_HOST_UPDATE_TRAIN_POSITION - ", func_81(iParam0, 0), " vPosition: ", &vVar2);
			}
		}
	}
	Global_1139291.f_2[iParam0 /*42*/].f_8++;
	if (Global_1139291.f_2[iParam0 /*42*/].f_8 >= 32)
	{
		Global_1139291.f_2[iParam0 /*42*/].f_8 = 0;
	}
}

bool func_88(var uParam0)
{
	return func_117(*uParam0, 1);
}

void func_89(var uParam0)
{
	func_118(uParam0, 0);
}

void func_90(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_91(var uParam0)
{
	if (!func_88(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to get value of NET_TIMER that has not been started! Starting it");
		UNK_0x355E72323AEE83CC(0, 1);
		return 0;
	}
	if (func_119(uParam0))
	{
		return uParam0->f_2;
	}
	return func_120(uParam0->f_1);
}

bool func_92(int iParam0)
{
	if (Global_1139291.f_2[iParam0 /*42*/].f_10 < Global_1275959.f_21)
	{
		DEBUG::_0x4DC69742196F818A(648, 84, "NET_TRAIN_MANAGER_GET_IS_TRAIN_BEYOND_CLEANUP_DELAY_THIS_FRAME: TRUE ", Global_1275959.f_21, " etrain: ", func_81(iParam0, 0));
		return true;
	}
	DEBUG::_0x4DC69742196F818A(10376, 84, "NET_TRAIN_MANAGER_GET_IS_TRAIN_BEYOND_CLEANUP_DELAY_THIS_FRAME: FALSE g_mpNPSInfoCache.iPosixTime", Global_1275959.f_21, " g_mpTrainManagerLocalData.trainData[eTrain].iDelayCleanupUntilThisFrame ", Global_1139291.f_2[iParam0 /*42*/].f_10, " etrain: ", func_81(iParam0, 0));
	return false;
}

var func_93(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1487573117);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_94(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

bool func_96(struct<2> Param0)
{
	if (!func_121(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_122(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_97(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_98(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_99(int iParam0, int iParam1)
{
	if (!func_63(Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 48, "NET_TRAIN_MANAGER_CLIENT_SET_TRAIN_BIT - ", func_81(iParam0, 0), " ", func_123(iParam1, 0));
		func_41(&(Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/]), iParam1);
	}
}

void func_100(int iParam0, int iParam1)
{
	if (Global_1139291.f_2[iParam0 /*42*/] != iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(10920, 48, "NET_TRAIN_MANAGER_CLIENT_SET_TRAIN_STATE - ", func_81(iParam0, 0), " from: ", func_108(Global_1139291.f_2[iParam0 /*42*/], 0), " to: ", func_108(iParam1, 0));
		Global_1139291.f_2[iParam0 /*42*/] = iParam1;
	}
}

bool func_101(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_102(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1139291.f_2[iParam0 /*42*/].f_9 == iVar0 || Global_1139291.f_2[iParam0 /*42*/].f_9 == (iVar0 - 1))
	{
		DEBUG::_0x4DC69742196F818A(648, 84, "NET_TRAIN_MANAGER_GET_DISABLE_DISTANCE_CLEANUP_THIS_FRAME: TRUE ", iVar0, " etrain: ", func_81(iParam0, 0));
		return true;
	}
	DEBUG::_0x4DC69742196F818A(10376, 84, "NET_TRAIN_MANAGER_GET_DISABLE_DISTANCE_CLEANUP_THIS_FRAME: FALSE iThisFrame", iVar0, " g_mpTrainManagerLocalData.trainData[eTrain].iIgnoreDistanceCleanupThisFrame ", Global_1139291.f_2[iParam0 /*42*/].f_9, " etrain: ", func_81(iParam0, 0));
	return false;
}

bool func_103(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_124(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_125())
	{
		return func_124(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_124(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_104(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_105(char* sParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1275959.f_22[iVar0])
	{
		func_126(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_127(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

char* func_106(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

int func_107(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_128(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

char* func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_INVALID";
		case 1:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_INIT";
		case 2:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_LAUNCH";
		case 3:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_MAIN";
		case 4:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_CLEANUP";
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

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901988.f_312.f_270;
		case 1:
			return Global_1901988.f_312.f_271;
		case 2:
			return Global_1901988.f_312.f_272;
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 48, "NET_TRAIN_MANAGER_GET_TRAIN_SPAWN_TIME - Undefined: ", func_81(iParam0, 0));
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 756707084;
			break;
		case 1:
			iVar0 = 756707084;
			break;
		case 2:
			iVar0 = -1083616881;
			break;
	}
	return iVar0;
}

int func_111(int iParam0)
{
	struct<2> Var0;
	float fVar41;
	int iVar42;

	DEBUG::_0xA308F935BDECCEC0(40, 48, "NET_TRAIN_MANAGER_HOST_FIND_PREFERRED_TRAIN_STATION - ", func_81(iParam0, 0));
	if (iParam0 == 2)
	{
		return func_129(iParam0);
	}
	Var0 = 20;
	Var0.f_1 = 1203982336;
	Var0.f_1.f_2 = 1203982336;
	Var0.f_1.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	iVar42 = func_130(iParam0);
	while (iVar42 <= func_131(iParam0))
	{
		fVar41 = func_132(iParam0, iVar42);
		if (fVar41 > 0f)
		{
			Var0[iVar42 /*2*/] = fVar41;
			Var0[iVar42 /*2*/].f_1 = iVar42;
		}
		DEBUG::_0xA308F935BDECCEC0(424, 48, "eStation: ", func_114(iVar42, 0), " fWeight: ", fVar41);
		iVar42++;
	}
	NETWORK::_0x7E300B5B86AB1D1A(&Var0, Var0, 2, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	DEBUG::_0xA308F935BDECCEC0(424, 48, "Choosing eStation: ", func_114(Var0[0 /*2*/].f_1, 0), " fWeight: ", Var0[0 /*2*/]);
	return Var0[0 /*2*/].f_1;
}

Vector3 func_112(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0.x = 0;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 2:
			vVar0.x = 0;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 3:
			vVar0.x = 0;
			vVar0.f_1 = 2;
			vVar0.f_2 = 0;
			break;
		case 4:
			vVar0.x = 0;
			vVar0.f_1 = 3;
			vVar0.f_2 = 0;
			break;
		case 5:
			vVar0.x = 0;
			vVar0.f_1 = 4;
			vVar0.f_2 = 0;
			break;
		case 6:
			vVar0.x = 0;
			vVar0.f_1 = 5;
			vVar0.f_2 = 0;
			break;
		case 7:
			vVar0.x = 1;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 8:
			vVar0.x = 2;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 9:
			vVar0.x = 24;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 10:
			vVar0.x = 24;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 11:
			vVar0.x = 23;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 12:
			vVar0.x = 3;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 13:
			vVar0.x = 3;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 14:
			vVar0.x = 3;
			vVar0.f_1 = 2;
			vVar0.f_2 = 1;
			break;
		case 15:
			vVar0.x = 3;
			vVar0.f_1 = 3;
			vVar0.f_2 = 1;
			break;
		case 16:
			vVar0.x = 3;
			vVar0.f_1 = 4;
			vVar0.f_2 = 1;
			break;
		case 17:
			vVar0.x = 3;
			vVar0.f_1 = 5;
			vVar0.f_2 = 1;
			break;
		case 18:
			vVar0.x = 3;
			vVar0.f_1 = 6;
			vVar0.f_2 = 1;
			break;
		case 19:
			vVar0.x = 3;
			vVar0.f_1 = 7;
			vVar0.f_2 = 1;
			break;
		default:
			DEBUG::_0x83407B92D46F25C3(40, 48, "NET_TRAIN_MANAGER_GET_TRAIN_STATION_DATA - Undefined data for ", func_114(iParam0, 0));
			break;
	}
	return vVar0;
}

bool func_113(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_101(vParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - IS_VECTOR_ZERO");
		return false;
	}
	if (func_133(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - NET_TRAIN_MANAGER_DOES_TRAIN_EXIST_FOR_ANY_PLAYER");
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_95(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - IS_SPHERE_VISIBLE_TO_PLAYER");
		return false;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE");
		return false;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - DOES_ENTITY_EXIST");
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_102(iParam0))
				{
					DEBUG::_0x1B08D1EB9D8C4931(2456, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - fvDist: ", fVar4, " < fDistance: ", fVar1, " - iPlayer: ", iVar5);
					return false;
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(2456, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - fvDist: ", fVar4, " >= fDistance: ", fVar1, " - iPlayer: ", iVar5);
				}
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - entity doesn't exist, iPlayer: ", iVar5);
			}
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_CAN_SPAWN_TRAIN - player is not active, iPlayer: ", iVar5);
		}
		iVar5++;
	}
	return true;
}

char* func_114(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_TRAIN_STATION_INVALID";
		case 1:
			return "NET_TRAIN_STATION_RHODES";
		case 2:
			return "NET_TRAIN_STATION_FLATNECK";
		case 3:
			return "NET_TRAIN_STATION_RIGGS";
		case 4:
			return "NET_TRAIN_STATION_WALLACE";
		case 5:
			return "NET_TRAIN_STATION_ANNESBURG";
		case 6:
			return "NET_TRAIN_STATION_SAINT_DENIS";
		case 7:
			return "NET_TRAIN_STATION_EMERALD_RANCH";
		case 8:
			return "NET_TRAIN_STATION_VALENTINE";
		case 9:
			return "NET_TRAIN_STATION_MACFARLANES_RANCH";
		case 10:
			return "NET_TRAIN_STATION_ARMADILLO";
		case 11:
			return "NET_TRAIN_STATION_BENEDICT_POINT";
		case 12:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_1";
		case 13:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_2";
		case 14:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_3";
		case 15:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_4";
		case 16:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_5";
		case 17:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_6";
		case 18:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_7";
		case 19:
			return "NET_TRAIN_STATION_TROLLEY_SAINT_DENIS_TRACK_1_STOP_8";
		case 20:
			return "NET_TRAIN_STATION_MAX";
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

struct<2> func_115()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_116(int iParam0, bool bParam1, vector3 vParam2, bool bParam5, struct<2> Param6)
{
	if (!func_134())
	{
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 48, "NET_TRAIN_MANAGER_HOST_ON_REQUEST_CREATE_TRAIN - ", func_81(iParam0, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 48, "eConfig: ", UNK_0x4379B6FA65D55295(bParam1));
	DEBUG::_0xA308F935BDECCEC0(56, 48, "vPosition: ", &vParam2);
	DEBUG::_0xA308F935BDECCEC0(40, 48, "bDirection: ", MISC::_0xF216F74101968DB0(bParam5));
	DEBUG::_0xA308F935BDECCEC0(40, 48, "sUIDidx: ", func_83(Param6));
	if (bParam1 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(680, 48, "NET_TRAIN_MANAGER_HOST_ON_REQUEST_CREATE_TRAIN - ", func_81(iParam0, 0), " eConfig: ", func_82(bParam1, 0));
		return 0;
	}
	else if (func_101(vParam2))
	{
		DEBUG::_0x83407B92D46F25C3(936, 48, "NET_TRAIN_MANAGER_HOST_ON_REQUEST_CREATE_TRAIN - ", func_81(iParam0, 0), " vPosition: ", &vParam2);
		return 0;
	}
	Global_1138768.f_54[iParam0 /*17*/].f_1 = bParam1;
	Global_1138768.f_54[iParam0 /*17*/].f_2 = { vParam2 };
	Global_1138768.f_54[iParam0 /*17*/].f_5 = bParam5;
	Global_1138768.f_54[iParam0 /*17*/].f_6 = { Param6 };
	return 1;
}

bool func_117(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_118(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_135(uParam0, 1);
	func_136(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_119(var uParam0)
{
	return func_117(*uParam0, 2);
}

int func_120(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_121(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1072032.f_640.f_601;
		case 3:
			return Global_1072032.f_640.f_2103;
		case 4:
			return Global_1072032.f_640.f_12605;
		case 5:
			return Global_1072032.f_640.f_12907;
		case 6:
			return Global_1072032.f_640.f_15909;
		case 7:
			return Global_1072032.f_640.f_16511;
		case 8:
			return Global_1072032.f_640.f_18913;
		default:
			break;
	}
	return -1;
}

char* func_123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_INITIALIZED";
		case 2:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_LAUNCHED";
		case 4:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_CREATED";
		case 8:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_TEMPORARY_STOP";
		case 16:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_BLIP_HIDDEN_REQUESTED";
		case 32:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_BLIP_HIDDEN";
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

bool func_124(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_125()
{
	return Global_1102630.f_3672;
}

void func_126(char* sParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_127(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_127(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_128(struct<2> Param0, bool bParam2)
{
	if (!func_96(Param0))
	{
		return false;
	}
	func_137(bParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_129(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_130(iParam0);
	iVar1 = func_131(iParam0);
	return MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1 + 1);
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 9;
		case 2:
			return 12;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 11;
		case 2:
			return 19;
	}
	return 0;
}

float func_132(int iParam0, int iParam1)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	fVar0 = 0f;
	vVar1 = { func_112(iParam1) };
	fVar4 = 0f;
	vVar5 = { VEHICLE::_0xBA958F68031DDBFC(vVar1.x, vVar1.y) };
	iVar15 = 0;
	while (iVar15 <= 30)
	{
		fVar4 = (200f + (IntToFloat(iVar15) * 10f));
		vVar8 = { VEHICLE::_0x35D302397E524939(vVar1.x, vVar5, fVar4, !vVar1.z) };
		if (func_113(iParam0, vVar8))
		{
			iVar14 = 0;
			while (iVar14 <= 31)
			{
				iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar14);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
				{
					iVar13 = PLAYER::GET_PLAYER_PED(iVar12);
					if (ENTITY::DOES_ENTITY_EXIST(iVar13))
					{
						fVar11 = (fVar11 + func_138(vVar8, ENTITY::GET_ENTITY_COORDS(iVar13, false, false)));
						DEBUG::_0x1B08D1EB9D8C4931(152, 48, "NET_TRAIN_MANAGER_HOST_FIND_TRAIN_STATION_WEIGHT - fTotalDistance: ", fVar11, " iPlayer, ", iVar14);
					}
					else
					{
						DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_HOST_FIND_TRAIN_STATION_WEIGHT - NOT DOES_ENTITY_EXIST: ", iVar14);
					}
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 48, "NET_TRAIN_MANAGER_HOST_FIND_TRAIN_STATION_WEIGHT - not NETWORK_IS_PLAYER_ACTIVE: ", iVar14);
				}
				iVar14++;
			}
			fVar0 = fVar11;
			DEBUG::_0xF0783374333FD8CE(24, 48, "NET_TRAIN_MANAGER_HOST_FIND_TRAIN_STATION_WEIGHT: CAN SPAWN - fWeight: ", fVar0);
		}
		else
		{
			iVar15++;
		}
	}
	return fVar0;
}

bool func_133(int iParam0)
{
	return func_86(iParam0, 4);
}

bool func_134()
{
	return (((SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[3]) && SCRIPTS::IS_THREAD_ACTIVE(Global_1051590.f_16[3], false)) && NETWORK::_0x31DAD2CD6D49546E(Global_1051590.f_16[3])) && NETWORK::_0xB4A25351D79B444C(Global_1051590.f_16[3]) == PLAYER::PLAYER_ID());
}

void func_135(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_137(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

float func_138(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

