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
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	func_5();
}

void func_1()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 64, "NET_CREW_MANAGER_PROCESS_PRE_GAME");
	iVar0 = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	DEBUG::_0xF0783374333FD8CE(2216, 34, "{ss}", UNK_0x8F77B33B6A34D8BA(), " pre-process took ", (MISC::GET_GAME_TIMER() - iVar0), " ms.");
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_11(Global_1572887, 0), ", so skipping");
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
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12();
	}
	func_13();
}

void func_4()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 64, "NET_CREW_MANAGER_CLEANUP -  Networked crew thread cleanup!");
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1196566.f_1[iVar0 /*3*/].f_2 != 0)
		{
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(Global_1196566.f_1[iVar0 /*3*/]);
		}
		iVar0++;
	}
}

void func_5()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_7()
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_14(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_5();
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
					func_5();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_5();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_5();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_5();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_5();
		}
		if (func_15() == 0)
		{
			if (func_16())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_5();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

bool func_8()
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

void func_9()
{
	func_17(&Global_1196019);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1196019, 2, 5);
	func_18(NETWORK::_0xBA24095EA96DFE17(&Global_1196019), 2, "g_mpNetCrewHostData");
	func_19(&Global_1196021);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1196021, 545, 6);
	func_20(NETWORK::_0x690806BC83BC8CA2(&(Global_1196021[0 /*17*/])), 545, "g_mpNetCrewPlayerData");
	func_21(&Global_1196566);
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_5();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_5();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_5();
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
			func_5();
			return;
		}
		DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] STILL WAITING (frames: ", iVar9, " ) - ", &Var1);
		BUILTIN::WAIT(0);
	}
}

char* func_11(int iParam0, int iParam1)
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

void func_12()
{
	func_22();
}

void func_13()
{
	switch (Global_1196566)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 64, "NET_CREW_CLIENT_MAIN_INIT - waiting for local player to be active...");
				return;
			}
			if (func_23(2))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 64, "NET_CREW_MANAGER_CLIENT_MAIN_UPDATE - Active social club, marking");
				Global_1196021[PLAYER::PLAYER_ID() /*17*/].f_15 = 1;
			}
			func_24();
			func_25();
			DEBUG::_0xA308F935BDECCEC0(8, 64, "NET_CREW_MANAGER_CLIENT_MAIN_UPDATE - client main update moving to NET_CREW_CLIENT_MAIN_UPDATE");
			Global_1196566 = 1;
			break;
		case 1:
			func_26();
			break;
	}
}

char* func_14(int iParam0)
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

int func_15()
{
	return Global_1572887.f_13;
}

bool func_16()
{
	return Global_1051590.f_8;
}

void func_17(var uParam0)
{
	struct<2> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 64, "GLOBAL_NET_CREW_HOST_DATA_INIT - Initializing player data for networked crew thread");
	*uParam0 = { Var0 };
}

int func_18(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_19(var uParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 64, "GLOBAL_NET_CREW_PLAYER_DATA_ALL_INIT - Initializing player data for networked crew thread");
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_27(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
}

int func_20(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_21(var uParam0)
{
	struct<110> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 64, "GLOBAL_NET_CREW_LOCAL_DATA_INIT - Initializing local data for networked crew thread");
	Var0.f_1 = 32;
	*uParam0 = { Var0 };
}

void func_22()
{
	int iVar0;

	if (Global_1196566.f_108 == 0)
	{
		Global_1196019 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && Global_1196021[iVar0 /*17*/] != 0)
			{
				Global_1196019++;
			}
			iVar0++;
		}
	}
	else if (Global_1196566.f_108 < 100)
	{
		Global_1196566.f_108++;
	}
	else
	{
		Global_1196566.f_108 = 0;
	}
}

bool func_23(int iParam0)
{
	return func_28(Global_1195626.f_1, iParam0);
}

void func_24()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (Global_1196021[iVar0 /*17*/].f_9[iVar1] != Global_1195626.f_35[iVar1 /*22*/])
		{
			Global_1196021[iVar0 /*17*/].f_9[iVar1] = Global_1195626.f_35[iVar1 /*22*/];
		}
		iVar1++;
	}
}

void func_25()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 64, "NET_CREW_MANAGER_CLIENT_INIT_CREW_DATA_IN_SESSION - Caching full session data now");
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_29(iVar0);
		iVar0++;
	}
}

void func_26()
{
	if (!func_30())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 64, "NET_CREW_MANAGER_CLIENT_UPDATE - Crew service is down...");
		return;
	}
	func_31();
	func_32();
	if (func_33())
	{
		func_24();
		func_34();
	}
}

void func_27(var uParam0)
{
	struct<17> Var0;

	Var0.f_9 = 5;
	*uParam0 = { Var0 };
}

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_29(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 64, "NET_CREW_MANAGER_UPDATE_OFFLINE_SYNC_CACHE - Invalid player index: ", iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		Global_1195626.f_168[iParam0 /*7*/] = 0;
		return;
	}
	Global_1195626.f_168[iParam0 /*7*/] = Global_1196021[iParam0 /*17*/];
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1195626.f_168[iParam0 /*7*/].f_1[iVar0] = Global_1196021[iParam0 /*17*/].f_9[iVar0];
		iVar0++;
	}
}

bool func_30()
{
	return (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() && CREW::NETWORK_CLAN_SERVICE_IS_VALID());
}

void func_31()
{
	struct<2> Var0;
	int iVar22;

	if (Global_1195626.f_146 != Global_1196021[PLAYER::PLAYER_ID() /*17*/])
	{
		DEBUG::_0xA308F935BDECCEC0(8, 64, "NET_CREW_MANAGER_CLIENT_SYNC_LOCAL_DATA - Updating our primary crew data for other players");
		if (Global_1195626.f_146 == 0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 64, "NET_CREW_MANAGER_CLIENT_SYNC_LOCAL_DATA - Setting that we have no active crew ID");
			Global_1196021[PLAYER::PLAYER_ID() /*17*/] = 0;
			return;
		}
		iVar22 = 0;
		while (iVar22 <= (CREW::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() - 1))
		{
			if (CREW::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Var0, iVar22) && Var0 == Global_1195626.f_146)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 64, "NET_CREW_MANAGER_CLIENT_SYNC_LOCAL_DATA - Found our matching crew, updating");
				Global_1196021[PLAYER::PLAYER_ID() /*17*/].f_1 = { Var0.f_1 };
				Global_1196021[PLAYER::PLAYER_ID() /*17*/] = Global_1195626.f_146;
			}
			else
			{
				iVar22++;
			}
		}
	}
}

void func_32()
{
	bool bVar0;

	bVar0 = (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1196566.f_109)) && Global_1196021[Global_1196566.f_109 /*17*/] != 0);
	func_35(Global_1196566.f_109, bVar0);
	func_29(Global_1196566.f_109);
	Global_1196566.f_109++;
	if (Global_1196566.f_109 >= 32)
	{
		Global_1196566.f_109 = 0;
	}
}

bool func_33()
{
	if (Global_1196566.f_107 == 0)
	{
		Global_1196566.f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Global_1196566.f_107, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 2000)
	{
		Global_1196566.f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}
	return false;
}

void func_34()
{
	int iVar0;

	if (Global_1196021[PLAYER::PLAYER_ID() /*17*/] == 0)
	{
		Global_1196021[PLAYER::PLAYER_ID() /*17*/].f_16 = 0;
	}
	else
	{
		Global_1196021[PLAYER::PLAYER_ID() /*17*/].f_16 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1196021[iVar0 /*17*/] == Global_1196021[PLAYER::PLAYER_ID() /*17*/])
			{
				Global_1196021[PLAYER::PLAYER_ID() /*17*/].f_16++;
			}
			iVar0++;
		}
	}
}

void func_35(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_1196566.f_1[iParam0 /*3*/].f_1 == 0)
		{
			if (Global_1196566.f_1[iParam0 /*3*/].f_2 == 0)
			{
				func_36(iParam0, 1);
			}
			else if (Global_1196566.f_1[iParam0 /*3*/] != Global_1196021[iParam0 /*17*/])
			{
				func_36(iParam0, 3);
			}
		}
	}
	else if (Global_1196566.f_1[iParam0 /*3*/].f_1 == 0 && (Global_1196566.f_1[iParam0 /*3*/].f_2 != 0 || Global_1196566.f_1[iParam0 /*3*/] != 0))
	{
		func_36(iParam0, 3);
	}
	switch (Global_1196566.f_1[iParam0 /*3*/].f_1)
	{
		case 0:
			break;
		case 1:
			Global_1196566.f_1[iParam0 /*3*/] = Global_1196021[iParam0 /*17*/];
			if (CREW::NETWORK_CLAN_REQUEST_EMBLEM(Global_1196566.f_1[iParam0 /*3*/]))
			{
				func_36(iParam0, 2);
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 64, "NET_CREW_MANAGER_UPDATE_CREW_DATA_FOR_PLAYER - Can't request emblem for player: ", iParam0);
				func_36(iParam0, 0);
			}
			break;
		case 2:
			if (func_37(iParam0))
			{
				func_36(iParam0, 0);
			}
			break;
		case 3:
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(Global_1196566.f_1[iParam0 /*3*/]);
			Global_1196566.f_1[iParam0 /*3*/].f_2 = 0;
			Global_1196566.f_1[iParam0 /*3*/] = 0;
			func_36(iParam0, 0);
			break;
	}
}

void func_36(int iParam0, int iParam1)
{
	DEBUG::_0x1B08D1EB9D8C4931(166568, 64, "NET_CREW_MANAGER_SET_EMBLEM_STATE - setting new state: ", func_38(iParam1, 0), " from old state: ", func_38(Global_1196566.f_1[iParam0 /*3*/].f_1, 0), " for player: ", iParam0, " name: ", PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iParam0)));
	Global_1196566.f_1[iParam0 /*3*/].f_1 = iParam1;
}

bool func_37(int iParam0)
{
	struct<8> Var0;
	char* sVar8;

	if (CREW::NETWORK_CLAN_IS_EMBLEM_READY(Global_1196566.f_1[iParam0 /*3*/], &Var0))
	{
		sVar8 = func_39(Var0);
		Global_1196566.f_1[iParam0 /*3*/].f_2 = MISC::GET_HASH_KEY(sVar8);
		DEBUG::_0x4DC69742196F818A(166056, 64, "NET_CREW_MANAGER_UPDATE_POSSE_EMBLEM_PROCESS_REQUEST - texture: ", &Var0, " with hash: ", Global_1196566.f_1[iParam0 /*3*/].f_2, " player: ", iParam0, " name: ", PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iParam0)));
		return true;
	}
	return false;
}

char* func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCPES_WAIT";
		case 1:
			return "NCPES_REQUEST_EMBLEM";
		case 2:
			return "NCPES_PROCESS_REQUEST";
		case 3:
			return "NCPES_RELEASE_DATA";
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

char* func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

