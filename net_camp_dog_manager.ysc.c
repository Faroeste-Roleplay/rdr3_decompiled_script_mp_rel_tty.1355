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
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	DEBUG::_0xA308F935BDECCEC0(8, 63, "net_camp_dog_manager.sc is starting...");
	func_1();
	while (!func_2(0, 0))
	{
		func_3(&Global_1137879, &Global_1137888, &Global_1137881, &Global_1138273);
		BUILTIN::WAIT(0);
	}
	func_4(&Global_1137879, &Global_1137888, &Global_1137881);
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
	DEBUG::_0xA308F935BDECCEC0(8, 63, "net_camp_dog_manager.sc is terminating...");
}

void func_1()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PROCESS_PRE_GAME");
	iVar0 = MISC::GET_GAME_TIMER();
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_6();
	}
	func_10();
	func_11(0);
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_12(Global_1572887, 0), ", so skipping");
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

int func_3(var uParam0, var uParam1, var uParam2, var uParam3)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_UPDATE");
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_13(uParam0, uParam1, uParam2);
	}
	func_14(uParam0, uParam1, uParam2, uParam3);
	func_15(uParam0, uParam1, uParam2, uParam3);
	func_16(uParam0, uParam1, uParam2, uParam3);
	return 1;
}

int func_4(var uParam0, var uParam1, var uParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_CLEANUP");
	return 1;
}

void func_5()
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_TERMINATE_CHILD_SCRIPTS");
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1137881.f_2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_TERMINATE_CHILD_SCRIPTS - Scripts have shut down.");
		return;
	}
	if (!Global_1137881.f_3)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1137881.f_2))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_TERMINATE_CHILD_SCRIPTS - Requesting thread exit: ", Global_1137881.f_2);
			SCRIPTS::_0x7DE4643157AD646C(Global_1137881.f_2);
		}
		Global_1137881.f_3 = 1;
	}
}

void func_6()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_8()
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_17(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_6();
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
					func_6();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_6();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_6();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_6();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_6();
		}
		if (func_18() == 0)
		{
			if (func_19())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_6();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

bool func_9()
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

void func_10()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_REGISTER_DATA");
	func_20(&Global_1137879);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1137879, 2, 48);
	func_21(NETWORK::_0xBA24095EA96DFE17(&Global_1137879), 2, "g_mpNetCampDogManagerHost");
	func_22(&Global_1137888);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1137888, 385, 49);
	func_23(NETWORK::_0x690806BC83BC8CA2(&(Global_1137888[0 /*12*/])), 385, "g_mpNetCampDogManagerPlayer");
	func_24(&Global_1137881);
}

void func_11(bool bParam0)
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
					func_6();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_6();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_6();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_6();
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
			func_6();
			return;
		}
		DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] STILL WAITING (frames: ", iVar9, " ) - ", &Var1);
		BUILTIN::WAIT(0);
	}
}

char* func_12(int iParam0, int iParam1)
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

void func_13(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_HOST_UPDATE");
	iVar0 = func_25(*uParam0);
	switch (iVar0)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			func_27(uParam0, 1);
			break;
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			break;
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			func_27(uParam0, 3);
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			break;
	}
}

int func_14(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_PLAYER_UPDATE");
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	iVar2 = func_28(*(uParam1[iVar1 /*12*/]));
	switch (iVar2)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_PLAYER_UPDATE - ePlayerState = ", func_29(iVar2, 0));
			func_30(uParam1[iVar1 /*12*/]);
			func_31(uParam1[iVar1 /*12*/]);
			func_32(uParam1[iVar1 /*12*/], 1);
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_PLAYER_UPDATE - ePlayerState = ", func_29(iVar2, 0));
			iVar3 = func_33(uParam0, uParam1, uParam2, uParam3);
			if (iVar3 != iVar2)
			{
				func_32(uParam1[iVar1 /*12*/], iVar3);
			}
			break;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE");
	iVar0 = 1;
	iVar1 = func_34(*uParam2);
	switch (iVar1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			if (func_36(uParam0, uParam1, uParam2))
			{
				func_37(uParam2, 1);
			}
			break;
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			bVar2 = true;
			if (bVar2)
			{
				if (!func_38())
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - Camp dog is not enabled.");
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_39(uParam2))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - Camp dog disabled this frame for optimization.");
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_40(uParam0, uParam1, uParam2))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - Can't spawn a dog.");
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				func_37(uParam2, 2);
			}
			break;
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			if (func_41(uParam0, uParam1, uParam2))
			{
				func_37(uParam2, 3);
			}
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			if (func_42(uParam0, uParam1, uParam2))
			{
				func_37(uParam2, 4);
			}
			break;
		case 4:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			if (func_43(uParam0, uParam1, uParam2))
			{
				func_37(uParam2, 5);
			}
			break;
		case 5:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			iVar3 = func_44(uParam0, uParam1, uParam2);
			if (iVar3 == 1)
			{
				func_37(uParam2, 0);
			}
			else if (iVar3 == 2)
			{
				func_37(uParam2, 6);
			}
			break;
		case 6:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			if (func_45(uParam0, uParam1, uParam2))
			{
				func_37(uParam2, 1);
			}
			break;
		case 7:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE - eState = ", func_35(iVar1, 0));
			break;
	}
	return iVar0;
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_46(uParam0, uParam1, uParam2, uParam3, iVar0);
				break;
		}
		iVar0++;
	}
}

char* func_17(int iParam0)
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

int func_18()
{
	return Global_1572887.f_13;
}

bool func_19()
{
	return Global_1051590.f_8;
}

void func_20(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_HOST_DATA_INIT");
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

int func_21(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_22(var uParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PLAYER_DATA_INIT_ARRAY");
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_30(uParam0[iVar0 /*12*/]);
		iVar0++;
	}
}

int func_23(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_24(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_DATA_INIT");
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

var func_25(var uParam0, var uParam1)
{
	return uParam0;
}

char* func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDMHS_INIT";
		case 1:
			return "NCDMHS_RUNNING";
		case 2:
			return "NCDMHS_CLEANUP";
		case 3:
			return "NCDMHS_FINISHED";
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

void func_27(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	return uParam0;
}

char* func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDMPS_INIT";
		case 1:
			return "NCDMPS_RUNNING";
		case 2:
			return "NCDMPS_CLEANUP";
		case 3:
			return "NCDMPS_FINISHED";
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

void func_30(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PLAYER_DATA_INIT");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_10 = 0;
}

void func_31(var uParam0)
{
	bool bVar0;
	bool bVar1;
	struct<8> Var2;
	bool bVar10;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_POPULATE_DOG_PLAYER_DATA_FROM_INVENTORY");
	bVar0 = func_47();
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_POPULATE_DOG_PLAYER_DATA_FROM_INVENTORY - eItem = ", func_48(bVar0, 0));
	bVar1 = func_49();
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_POPULATE_DOG_PLAYER_DATA_FROM_INVENTORY - eEquippedItem = ", func_48(bVar1, 0));
	func_50(uParam0, bVar0);
	if (func_51(&Var2))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_POPULATE_DOG_PLAYER_DATA_FROM_INVENTORY - tlName = ", &Var2);
		func_52(uParam0, Var2);
		func_53(PLAYER::PLAYER_ID(), Var2);
	}
	bVar10 = false;
	if (func_54(bVar0, 0))
	{
		if (bVar0 == bVar1)
		{
			bVar10 = true;
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_POPULATE_DOG_PLAYER_DATA_FROM_INVENTORY - bEquipped = ", MISC::_0xF216F74101968DB0(bVar10));
	if (bVar10)
	{
		func_55(uParam0, 0);
	}
	else
	{
		func_56(uParam0, 0);
	}
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_33(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_PLAYER_UPDATE_RUNNING");
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_57(uParam1[iVar1 /*12*/], uParam3);
	func_58(uParam1[iVar1 /*12*/], uParam2);
	func_59(uParam1[iVar1 /*12*/], uParam2);
	return 1;
}

var func_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return uParam0;
}

char* func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDMLS_INIT";
		case 1:
			return "NCDMLS_WAITING";
		case 2:
			return "NCDMLS_REQUEST_DOG_SCRIPT";
		case 3:
			return "NCDMLS_LOADING_DOG_SCRIPT";
		case 4:
			return "NCDMLS_LAUNCH_DOG_SCRIPT";
		case 5:
			return "NCDMLS_RUNNING";
		case 6:
			return "NCDMLS_CLEANUP";
		case 7:
			return "NCDMLS_FINISHED";
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

bool func_36(var uParam0, var uParam1, var uParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_INIT");
	Global_1137881.f_6 = 0;
	return true;
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_38()
{
	return true;
}

bool func_39(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	switch (uParam0->f_5)
	{
		case 1:
			iVar0 = 1;
			break;
	}
	iVar1 = uParam0->f_5;
	iVar1++;
	if (iVar1 >= 10)
	{
		uParam0->f_5 = 0;
	}
	else
	{
		uParam0->f_5 = iVar1;
	}
	return iVar0;
}

bool func_40(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_60(uParam0, uParam1, uParam2, &uVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_SPAWN_DOG - No dog availibilty.");
		return false;
	}
	uParam2->f_1 = uVar0;
	return true;
}

bool func_41(var uParam0, var uParam1, var uParam2)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_REQUEST_SCRIPT");
	if (!SCRIPTS::DOES_SCRIPT_EXIST(func_61()))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_REQUEST_SCRIPT - Script doesn't exist. Script name = ", func_61());
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(func_61());
	return true;
}

bool func_42(var uParam0, var uParam1, var uParam2)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_IS_SCRIPT_LOADED");
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_61()))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_IS_SCRIPT_LOADED - Waiting for script to load...");
		SCRIPTS::REQUEST_SCRIPT(func_61());
		return false;
	}
	return true;
}

bool func_43(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_LAUNCH_DOG_SCRIPT");
	DEBUG::_0xA308F935BDECCEC0(168, 63, "NET_CAMP_DOG_MANAGER_LAUNCH_DOG_SCRIPT - Launching new thread ", func_61(), " with stacksize ", 600);
	iVar0 = uParam2->f_1;
	iVar1 = iVar0;
	func_62(&vVar2);
	vVar2.x = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	vVar2.f_1 = iVar0;
	vVar2.f_2 = (uParam1[iVar1 /*12*/])->f_1;
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_MANAGER_LAUNCH_DOG_SCRIPT - iInstanceId = ", vVar2.x);
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(600) <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_MANAGER_LAUNCH_DOG_SCRIPT - No stacks available for this thread!");
		return false;
	}
	Global_1137881.f_2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_61(), &vVar2, 3, 600);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_61());
	return true;
}

int func_44(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_UPDATE_RUNNING");
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_61(), iVar1, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_45(var uParam0, var uParam1, var uParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_LOCAL_CLEANUP");
	return true;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam4, &iVar0, 4))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_HANDLE_EVENT_PROCESSING - GET_EVENT_DATA - Returned false.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_HANDLE_EVENT_PROCESSING - sEventDetails.eEventType = ", func_63(iVar0, 0));
	switch (iVar0)
	{
		case 11:
			func_64(iParam4);
			break;
	}
}

bool func_47()
{
	struct<4> Var0;
	bool bVar4;

	Var0 = { func_66(joaat("KIT_CAMP"), func_65(0), 1084182731, 1) };
	bVar4 = func_67(Var0, -1911121386, 0, 1);
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_GET_DOG_FROM_PLAYER_INVENTORY - eItem = ", func_48(bVar4, 0));
	return bVar4;
}

var func_48(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("GROUP_SNIPER"):
			return UNK_0x6D61F5AE2F9BCC97(-1104736125);
		case joaat("GROUP_REVOLVER"):
			return UNK_0x6D61F5AE2F9BCC97(-896458901);
		case joaat("GROUP_REPEATER"):
			return UNK_0x6D61F5AE2F9BCC97(-1666864451);
		case -1:
			return UNK_0x6D61F5AE2F9BCC97(-789220491);
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(joaat("INVALID_INVENTORY_ITEM"));
		case joaat("GROUP_PISTOL"):
			return UNK_0x6D61F5AE2F9BCC97(1248583318);
		case joaat("GROUP_SHOTGUN"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("WEAPONTYPE_SHOTGUN"));
		case joaat("GROUP_RIFLE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("WEAPONTYPE_RIFLE"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_49()
{
	struct<4> Var0;
	bool bVar4;

	Var0 = { func_66(joaat("KIT_CAMP"), func_65(0), 1084182731, 1) };
	bVar4 = func_68(Var0, -1911121386, 1, -1);
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_GET_EQUIPPED_DOG_FROM_PLAYER_INVENTORY - eItem = ", func_48(bVar4, 0));
	return bVar4;
}

void func_50(var uParam0, bool bParam1)
{
	uParam0->f_1 = bParam1;
}

bool func_51(var uParam0)
{
	struct<15> Var0;

	Var0.f_9 = -1591664384;
	if (!func_69(&Var0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_GET_DOG_NAME_FROM_PLAYER_INVENTORY - Unable to get inventory data for dog.");
		return false;
	}
	*uParam0 = { Var0.f_14 };
	return true;
}

void func_52(var uParam0, struct<8> Param1)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_SET_DOG_NAME_FOR_PLAYER");
	uParam0->f_2 = { Param1 };
}

void func_53(int iParam0, struct<8> Param1)
{
	struct<20> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "BROADCAST_CAMP_DOG_EVENT_DOG_NAME_CHANGED");
	Var0.f_4 = 1;
	Var0.f_8 = { Param1 };
	Var0.f_7 = iParam0;
	func_71(Var0, func_70(0, 8));
}

bool func_54(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_55(var uParam0, int iParam1)
{
	if (func_72(uParam0->f_10, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_PLAYER_SET_BIT - Setting bit ", func_73(iParam1, 0));
	func_74(&(uParam0->f_10), iParam1);
}

void func_56(var uParam0, int iParam1)
{
	if (!func_72(uParam0->f_10, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_PLAYER_SET_BIT - Clearing bit ", func_73(iParam1, 0));
	func_75(&(uParam0->f_10), iParam1);
}

void func_57(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_HANDLE_DOG_DIED");
	bVar0 = func_76(uParam0, 1);
	bVar1 = func_77(uParam1, 0);
	DEBUG::_0x1B08D1EB9D8C4931(680, 63, "NET_CAMP_DOG_MANAGER_HANDLE_DOG_DIED - bPlayerFlag = ", MISC::_0xF216F74101968DB0(bVar0), " bOfflineFlag = ", MISC::_0xF216F74101968DB0(bVar1));
	if (bVar0 != bVar1)
	{
		if (bVar1)
		{
			func_55(uParam0, 1);
		}
		else
		{
			func_56(uParam0, 1);
		}
	}
}

void func_58(var uParam0, var uParam1)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_HANDLE_INVENTORY_UPDATED");
	if (!func_78(uParam1, 0))
	{
		return;
	}
	func_31(uParam0);
	func_79(uParam1, 0);
}

void func_59(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_80(joaat("CAMP_RAID"), PLAYER::PLAYER_ID(), 0, 1);
	if (!func_81(iVar0))
	{
		func_56(uParam0, 2);
		func_56(uParam0, 3);
		func_56(uParam0, 4);
		return;
	}
	bVar1 = func_82(iVar0, 1);
	bVar2 = func_83(iVar0, 16, 255);
	bVar3 = func_83(iVar0, 32, 255);
	if (bVar1 && !bVar2)
	{
		func_55(uParam0, 2);
	}
	else
	{
		func_56(uParam0, 2);
	}
	if (bVar1 && (bVar2 || bVar3))
	{
		func_55(uParam0, 4);
	}
	else
	{
		func_56(uParam0, 4);
	}
	if (!bVar1)
	{
		func_56(uParam0, 3);
	}
}

bool func_60(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_84(iVar2, 0, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (!GANG::_0x424B17A7DC5C90BC(iVar0))
			{
			}
			else if (!func_85(uParam0, uParam1, uParam2, iVar0))
			{
			}
			else
			{
				*uParam3 = iVar0;
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

char* func_61()
{
	return "net_camp_dog";
}

void func_62(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_INSTANCE_DATA_INIT");
	*uParam0 = -1;
	uParam0->f_1 = 255;
	uParam0->f_2 = 0;
}

char* func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_EVENT_TICKER_MESSAGE";
		case 1:
			return "SCRIPT_EVENT_INVITE_TO_JOIN";
		case 2:
			return "SCRIPT_EVENT_INVITE_TO_JOIN_MP_MISSION";
		case 3:
			return "SCRIPT_EVENT_PLAYER_STATUS";
		case 4:
			return "SCRIPT_EVENT_AMBIENT_CONTENT_EVALUATOR";
		case 5:
			return "SCRIPT_EVENT_ACE_LAUNCHER";
		case 6:
			return "SCRIPT_EVENT_IMPROMPTU_RACE_MANAGER";
		case 7:
			return "SCRIPT_EVENT_TRAIN_ROBBERY_MANAGER";
		case 8:
			return "SCRIPT_EVENT_ANIMAL_ATTACK_MANAGER";
		case 9:
			return "SCRIPT_EVENT_GUN_FOR_HIRE_MANAGER";
		case 10:
			return "SCRIPT_EVENT_CAMP";
		case 11:
			return "SCRIPT_EVENT_CAMP_DOG";
		case 12:
			return "SCRIPT_EVENT_CAMP_DEFENSE";
		case 13:
			return "SCRIPT_EVENT_MOONSHINE";
		case 14:
			return "SCRIPT_EVENT_MOONSHINE_BAND";
		case 15:
			return "SCRIPT_EVENT_MOONSHINE_BAR";
		case 16:
			return "SCRIPT_EVENT_MOONSHINE_SCENARIO_TAKEN";
		case 17:
			return "SCRIPT_EVENT_MOONSHINE_SCENARIO_FREED";
		case 18:
			return "SCRIPT_EVENT_NET_ENTITY_BRAIN";
		case 19:
			return "SCRIPT_EVENT_GLOBAL_TRAIN";
		case 20:
			return "SCRIPT_EVENT_TRAIN_MANAGER";
		case 21:
			return "SCRIPT_EVENT_TEAM_ASSIGNMENT";
		case 22:
			return "SCRIPT_EVENT_NET_GANG";
		case 23:
			return "SCRIPT_EVENT_PERSISTENT_POSSE";
		case 24:
			return "SCRIPT_EVENT_FM_ACTIVITY_MANAGER";
		case 25:
			return "SCRIPT_EVENT_FM_ACTIVITY";
		case 26:
			return "SCRIPT_EVENT_FME_MANAGER";
		case 27:
			return "SCRIPT_EVENT_TRAIN_JOB";
		case 28:
			return "SCRIPT_EVENT_PARLEY";
		case 29:
			return "SCRIPT_EVENT_POSSE_VERSUS";
		case 30:
			return "SCRIPT_EVENT_NET_GANGFEUDS";
		case 31:
			return "SCRIPT_EVENT_NET_SHOW_MANAGEMENT";
		case 32:
			return "SCRIPT_EVENT_NET_SHOW_BITS";
		case 33:
			return "SCRIPT_EVENT_ABANDONED_LOOT_MANAGER";
		case 34:
			return "SCRIPT_EVENT_NET_PLAYER_BOUNTY";
		case 35:
			return "SCRIPT_EVENT_NOTORIETY_PRESS_CHARGES";
		case 36:
			return "SCRIPT_EVENT_NOTORIETY_FORCE_PASSIVE";
		case 37:
			return "SCRIPT_EVENT_NOTORIETY_FORCE_NOT_PASSIVE_HORSE";
		case 38:
			return "SCRIPT_EVENT_NOTORIETY_PASSIVE_REQUEST";
		case 39:
			return "SCRIPT_EVENT_COLLECTIBLE_DIG_START";
		case 40:
			return "SCRIPT_EVENT_COLLECTIBLE_DIG_COMPLETE";
		case 41:
			return "SCRIPT_EVENT_COLLECTIBLE_GIVE_ITEM_TO_POSSE_MEMBERS";
		case 42:
			return "SCRIPT_EVENT_COLLECTIBLE_BIRD_NEST_SHOT";
		case 43:
			return "SCRIPT_EVENT_COLLECTIBLE_BIRD_NEST_DESTROYED";
		case 44:
			return "SCRIPT_EVENT_NET_MINIGAME_MANAGER";
		case 45:
			return "SCRIPT_EVENT_NET_EMOTE";
		case 46:
			return "SCRIPT_EVENT_NET_STABLE";
		case 47:
			return "SCRIPT_EVENT_NET_STABLE_MOUNT";
		case 48:
			return "SCRIPT_EVENT_NET_ROLLING_PLAYLIST";
		case 49:
			return "SCRIPT_EVENT_NET_VS_MISSION_INTRO";
		case 50:
			return "SCRIPT_EVENT_NET_SHOPS";
		case 51:
			return "SCRIPT_EVENT_NET_SESSION_REQUEST";
		case 52:
			return "SCRIPT_EVENT_FM_COACH_HOLDUP";
		case 53:
			return "SCRIPT_EVENT_NET_ASSASSINATION";
		case 54:
			return "SCRIPT_EVENT_FME_ROYAL_RUMBLE";
		case 55:
			return "SCRIPT_EVENT_FME_WRECKAGE";
		case 56:
			return "SCRIPT_EVENT_FME_ANIMAL_TAGGING";
		case 57:
			return "SCRIPT_EVENT_FME_WILDLIFE_PHOTOGRAPHER";
		case 58:
			return "SCRIPT_EVENT_FME_PROTECT_LEGENDARY_ANIMAL";
		case 59:
			return "SCRIPT_EVENT_FME_BASE";
		case 60:
			return "SCRIPT_EVENT_FME_CHALLENGES";
		case 61:
			return "SCRIPT_EVENT_FM_DEAD_DROP";
		case 62:
			return "SCRIPT_EVENT_OHD_IN_MP_CUTSCENE";
		case 63:
			return "SCRIPT_EVENT_OHD_IS_WANTED";
		case 64:
			return "SCRIPT_EVENT_OHD_IS_CUFFED";
		case 65:
			return "SCRIPT_EVENT_OHD_IS_BEING_PROCESSED";
		case 66:
			return "SCRIPT_EVENT_OHD_IN_CUSTODY";
		case 67:
			return "SCRIPT_EVENT_OHD_IS_BEING_CUFFED";
		case 68:
			return "SCRIPT_EVENT_OHD_IS_BEING_UNCUFFED";
		case 69:
			return "SCRIPT_EVENT_OHD_TALKING";
		case 70:
			return "SCRIPT_EVENT_OHD_INVISIBLE";
		case 71:
			return "SCRIPT_EVENT_OHD_TELEPORT";
		case 72:
			return "SCRIPT_EVENT_OHD_PARTNER";
		case 73:
			return "SCRIPT_EVENT_OHD_IS_VOTING";
		case 74:
			return "SCRIPT_EVENT_OHD_IS_PLAYER_SPECTATING";
		case 75:
			return "SCRIPT_EVENT_OHD_IN_MP_CUTSCENE_RESET";
		case 76:
			return "SCRIPT_EVENT_OHD_IS_WANTED_RESET";
		case 77:
			return "SCRIPT_EVENT_OHD_IS_CUFFED_RESET";
		case 78:
			return "SCRIPT_EVENT_OHD_IS_BEING_PROCESSED_RESET";
		case 79:
			return "SCRIPT_EVENT_OHD_IN_CUSTODY_RESET";
		case 80:
			return "SCRIPT_EVENT_OHD_IS_BEING_CUFFED_RESET";
		case 81:
			return "SCRIPT_EVENT_OHD_IS_BEING_UNCUFFED_RESET";
		case 82:
			return "SCRIPT_EVENT_OHD_TALKING_RESET";
		case 83:
			return "SCRIPT_EVENT_OHD_INVISIBLE_RESET";
		case 84:
			return "SCRIPT_EVENT_OHD_TELEPORT_RESET";
		case 85:
			return "SCRIPT_EVENT_OHD_PARTNER_RESET";
		case 86:
			return "SCRIPT_EVENT_OHD_IS_VOTING_RESET";
		case 87:
			return "SCRIPT_EVENT_OHD_IS_PLAYER_SPECTATING_RESET";
		case 88:
			return "SCRIPT_EVENT_MGLIB_NET_REGISTRATION";
		case 89:
			return "SCRIPT_EVENT_MGLIB_NET_REPLY";
		case 90:
			return "SCRIPT_EVENT_MGLIB_PED_UPDATE";
		case 91:
			return "SCRIPT_EVENT_MGLIB_OBJECT_UPDATE";
		case 92:
			return "SCRIPT_EVENT_MGLIB_FULL_UPDATE";
		case 93:
			return "SCRIPT_EVENT_MC_OBJECTIVE_MID_POINT";
		case 94:
			return "SCRIPT_EVENT_MC_PED_GIVEN_GUNONRULE";
		case 95:
			return "SCRIPT_EVENT_MC_TRAIN_PLAYER_CONTROL_SPEED_CHANGE";
		case 96:
			return "SCRIPT_EVENT_MC_CREATE_TRAIN_DESTROYED_EXPLOSIONS";
		case 97:
			return "SCRIPT_EVENT_MC_TRAIN_PLAYER_CONTROL_BLOW_WHISTLE";
		case 98:
			return "SCRIPT_EVENT_MC_TRAIN_DAMAGE_EVENT";
		case 99:
			return "SCRIPT_EVENT_MC_OBJECTIVE_COMPLETE";
		case 100:
			return "SCRIPT_EVENT_MC_OBJECTIVE_COMPLETE_HOST";
		case 101:
			return "SCRIPT_EVENT_MC_PLAYER_SCORE";
		case 102:
			return "SCRIPT_EVENT_MC_DIALOGUE_LOOK";
		case 103:
			return "SCRIPT_EVENT_MC_DEBUG_OBJECTIVE_SKIP_FOR_TEAM";
		case 104:
			return "SCRIPT_EVENT_MC_DEBUG_SET_PED_INVINCIBILITY";
		case 105:
			return "SCRIPT_EVENT_MC_DEBUG_UPDATE_TO_ALERT_RECORD";
		case 106:
			return "SCRIPT_EVENT_MC_TEAM_CHANGE_REQUEST";
		case 107:
			return "SCRIPT_EVENT_MC_UPDATE_CUTSCENE_WIDGETS";
		case 108:
			return "SCRIPT_EVENT_MC_MISSION_RESTART";
		case 109:
			return "SCRIPT_EVENT_MC_ACTOR_ALERTED";
		case 110:
			return "SCRIPT_EVENT_MC_TEAM_DEBUG_SKIP_CUTSCENE";
		case 111:
			return "SCRIPT_EVENT_MC_OVERRIDE_LIVES_FAIL";
		case 112:
			return "SCRIPT_EVENT_MC_REMOVE_ACTOR_FROM_GROUP";
		case 113:
			return "SCRIPT_EVENT_MC_VEHICLE_DRAFT_ANIMALS_SET_UP";
		case 114:
			return "SCRIPT_EVENT_MC_TASK_OWNER_PROCESSED";
		case 115:
			return "SCRIPT_EVENT_MC_PED_CHANGED_REL_GROUP";
		case 116:
			return "SCRIPT_EVENT_MC_ANIMAL_CHANGED_REL_GROUP";
		case 117:
			return "SCRIPT_EVENT_MC_PED_SET_INTO_INVESTIGATION";
		case 118:
			return "SCRIPT_EVENT_MC_START_STREAMING_END_MOCAP";
		case 119:
			return "SCRIPT_EVENT_MC_SWAP_DOOR_FOR_DAMAGED_VERSION";
		case 120:
			return "SCRIPT_EVENT_MC_TEAM_HAS_FINISHED_CUSTOM_RULE";
		case 121:
			return "SCRIPT_EVENT_MC_ANIMAL_CANCEL_TASKS";
		case 122:
			return "SCRIPT_EVENT_MC_TNT_REQUEST_MINIGAME_LOCK";
		case 123:
			return "SCRIPT_EVENT_MC_MINIGAME_ROPE_BROKEN";
		case 124:
			return "SCRIPT_EVENT_MC_PLANT_DYNAMITE_REQUEST_MINIGAME_LOCK";
		case 125:
			return "SCRIPT_EVENT_MC_PLANT_DYNAMITE_REQUEST_MINIGAME_UNLOCK";
		case 126:
			return "SCRIPT_EVENT_MC_INTERACT_WITH_REQUEST_MINIGAME_LOCK";
		case 127:
			return "SCRIPT_EVENT_MC_SAFE_CRACK_REQUEST_MINIGAME_LOCK";
		case 128:
			return "SCRIPT_EVENT_MC_SAFE_CRACK_REMOVE_MINIGAME_LOCK";
		case 129:
			return "SCRIPT_EVENT_MC_DECISION_MINIGAME_OPTION_SELECTED";
		case 130:
			return "SCRIPT_EVENT_MC_DEBUG_KILL_ENTITY";
		case 131:
			return "SCRIPT_EVENT_MC_TRAIN_UNDRIVABLE";
		case 132:
			return "SCRIPT_EVENT_MC_TRAIN_CRUISE_SPEED_SET";
		case 133:
			return "SCRIPT_EVENT_MC_TRAIN_WHISTLE_START";
		case 134:
			return "SCRIPT_EVENT_MC_TRAIN_WHISTLE_DONE";
		case 135:
			return "SCRIPT_EVENT_MC_DAMAGE_MOONSHINE";
		case 136:
			return "SCRIPT_EVENT_MC_NEW_FOCUS_TEAM";
		case 137:
			return "SCRIPT_EVENT_MC_PLAYER_FAIL";
		case 138:
			return "SCRIPT_EVENT_MC_KILL_FOCUS_TEAM";
		case 139:
			return "SCRIPT_EVENT_MC_INCREMENT_CONTROL_KILLS";
		case 140:
			return "SCRIPT_EVENT_MC_PLAYER_BRANCH_REQUEST";
		case 141:
			return "SCRIPT_EVENT_MC_GET_AND_DELIVER_ENTITY_HELD";
		case 142:
			return "SCRIPT_EVENT_MC_GET_AND_DELIVER_ENTITY_DROPPED";
		case 143:
			return "SCRIPT_EVENT_MC_VEHICLE_DISABLE_DRIVING";
		case 144:
			return "SCRIPT_EVENT_MC_TEAM_EARLY_END_BAIL";
		case 145:
			return "SCRIPT_EVENT_MC_START_LOOP_PTFX";
		case 146:
			return "SCRIPT_EVENT_MC_STOP_LOOP_PTFX";
		case 147:
			return "SCRIPT_EVENT_MC_DELETE_NET_ID";
		case 148:
			return "SCRIPT_EVENT_MC_CLEANUP_NET_ID";
		case 149:
			return "SCRIPT_EVENT_MC_POSSE_LEADER_TIEBREAK";
		case 150:
			return "SCRIPT_EVENT_MC_OBJECT_FORCE_WARPED_TO_SPAWN";
		case 151:
			return "SCRIPT_EVENT_MC_OBJECT_NEEDS_WARPING_TO_SPAWN";
		case 152:
			return "SCRIPT_EVENT_MC_OBJECT_MINIGAME_PASSED";
		case 153:
			return "SCRIPT_EVENT_MC_HOST_DELETE_FMMC_PED";
		case 154:
			return "SCRIPT_EVENT_MC_PED_DROWNED";
		case 155:
			return "SCRIPT_EVENT_DEATHMATCH_MARKED_MAN_UPDATE";
		case 156:
			return "SCRIPT_EVENT_DEATHMATCH_PITP_KILL";
		case 157:
			return "SCRIPT_EVENT_DEATHMATCH_JIP_EVENT";
		case 158:
			return "SCRIPT_EVENT_DEATHMATCH_FIRST_KILL";
		case 159:
			return "SCRIPT_EVENT_DEATHMATCH_LAST_KILL";
		case 160:
			return "SCRIPT_EVENT_DEATHMATCH_OBJECT_MINIGAME_PASSED";
		case 161:
			return "SCRIPT_EVENT_RC_CHECKPOINT_HIT";
		case 162:
			return "SCRIPT_EVENT_UGC_GAMEPLAY_CHANGE";
		case 163:
			return "SCRIPT_EVENT_UGC_UPDATE_PLAYER_LOCAL_HUD_SETTINGS";
		case 164:
			return "SCRIPT_EVENT_UGC_TRIGGER_FIRED";
		case 165:
			return "SCRIPT_EVENT_UGC_TRIGGER_FRIENDLY_FIRED";
		case 166:
			return "SCRIPT_EVENT_UGC_TRIGGER_COMPLETE";
		case 167:
			return "SCRIPT_EVENT_UGC_JIP_PLAYER_JOIN";
		case 168:
			return "SCRIPT_EVENT_UGC_JIP_SPECTATOR_JOIN";
		case 169:
			return "SCRIPT_EVENT_UGC_CONSTRIG_BINDING_RESET";
		case 170:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_HOST";
		case 171:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_SESSION_HOST";
		case 172:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_PROCESSED_SESSION_HOST";
		case 173:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_OWNER";
		case 174:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_PROCESSED_OWNER";
		case 175:
			return "SCRIPT_EVENT_UGC_CONSTRIG_BINDING_TRIGGERED";
		case 176:
			return "SCRIPT_EVENT_FETCH_MANAGER";
		case 177:
			return "SCRIPT_EVENT_FETCH";
		case 178:
			return "SCRIPT_EVENT_FETCH_CUTSCENE";
		case 179:
			return "SCRIPT_EVENT_FETCH_DIALOGUE";
		case 180:
			return "SCRIPT_EVENT_FETCH_VOLUME";
		case 181:
			return "SCRIPT_EVENT_BEAT_MANAGER";
		case 182:
			return "SCRIPT_EVENT_SCAN_MANAGER";
		case 183:
			return "SCRIPT_EVENT_NET_BEAT";
		case 184:
			return "SCRIPT_EVENT_NET_HUD";
		case 185:
			return "SCRIPT_EVENT_AMBIENT_DM_MANAGER";
		case 186:
			return "SCRIPT_EVENT_PERSONA_HONOR";
		case 187:
			return "SCRIPT_EVENT_PERSONA_PEDSHOTS";
		case 188:
			return "SCRIPT_EVENT_STORY_MISSION_INTRO_CORE_DIALOGUE";
		case 189:
			return "SCRIPT_EVENT_STORY_MISSION_INTRO_WARP_TO_MISSION";
		case 190:
			return "SCRIPT_EVENT_LOBBY_TOGGLE_MATCHMAKING";
		case 191:
			return "SCRIPT_EVENT_LOBBY_REQUESTED_PLAYERS_HORSE_DATA";
		case 192:
			return "SCRIPT_EVENT_LOBBY_RECEIVED_PLAYERS_HORSE_DATA";
		case 193:
			return "SCRIPT_EVENT_BOUNTY_TARGET";
		case 194:
			return "SCRIPT_EVENT_UGC_MISSION_REQUEST";
		case 195:
			return "SCRIPT_EVENT_LA_PHEROMONE_VIAL";
		case 196:
			return "SCRIPT_EVENT_TURN_IN";
		case 197:
			return "SCRIPT_EVENT_FREE_FROM_HOGTIE";
		case 198:
			return "SCRIPT_EVENT_PLAYER_CAMP";
		case 199:
			return "SCRIPT_EVENT_BG_SCRIPT";
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

void func_64(int iParam0)
{
	struct<5> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PROCESS_EVENT");
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PROCESS_EVENT - GET_EVENT_DATA - Returned false.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_MANAGER_PROCESS_EVENT - sEventData.eEventType = ", func_86(Var0.f_4, 0));
	switch (Var0.f_4)
	{
		case 0:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PROCESS_EVENT - Camp dog has died.");
			break;
		case 1:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PROCESS_EVENT - Camp dog name has been changed.");
			break;
		case 2:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_PROCESS_EVENT - Camp dog has been patted.");
			break;
	}
}

struct<4> func_65(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_87(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_66(joaat("CHARACTER"), func_88(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_66(joaat("CHARACTER"), func_88(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_66(joaat("CHARACTER"), func_88(), -1591664384, bParam0);
}

struct<4> func_66(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_54(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_48(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_87(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_67(struct<4> Param0, bool bParam4, char* sParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_89(Param0, bParam4, &Var0, sParam5, bParam6))
	{
		DEBUG::_0xA308F935BDECCEC0(43688, 157, "PLAYER_INVENTORY_GET_ITEM_IN_SLOT - Found ", func_48(Var0.f_4, 0), " on item ", UNK_0xD2E4270E5D98EEE4(&Param0), " in slot ", func_90(bParam4, 0), ", index ", sParam5);
		return Var0.f_4;
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "PLAYER_INVENTORY_GET_ITEM_IN_SLOT - Found nothing on item ", UNK_0xD2E4270E5D98EEE4(&Param0), " in slot ", func_90(bParam4, 0), ", index ", sParam5);
	return 0;
}

int func_68(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_91(&uParam0, bParam4, bParam5, iParam6);
}

bool func_69(int iParam0)
{
	bool bVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	struct<4> Var10;
	struct<10> Var14;

	bVar0 = func_49();
	if (!func_54(bVar0, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_GET_DOG_INVENTORY_DATA - eItem is invalid. eItem = ", func_48(bVar0, 0));
		return false;
	}
	Var1 = { func_65(1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_GET_DOG_INVENTORY_DATA - Item sRootGUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&Var1));
		return false;
	}
	Var5 = { func_66(joaat("KIT_CAMP"), Var1, 1084182731, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_GET_DOG_INVENTORY_DATA - Item sParentGUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&Var5));
		return false;
	}
	iVar9 = func_87(1);
	Var10 = { func_66(bVar0, Var5, -1911121386, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_GET_DOG_INVENTORY_DATA - Item sItemGUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&Var10));
		return false;
	}
	Var14.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar9, &Var10, &Var14, 22, 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_DOG_INVENTORY_DATA - Failed to read data.");
		return false;
	}
	MISC::_COPY_MEMORY(iParam0, &Var14, 22);
	return true;
}

var func_70(int iParam0, int iParam1)
{
	return func_92(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_71(struct<8> Param0, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "BROADCAST_CAMP_DOG_EVENT");
	UNK_0x355E72323AEE83CC(63, 9);
	iVar0 = PLAYER::PLAYER_ID();
	DEBUG::_0xA308F935BDECCEC0(40, 63, "BROADCAST_CAMP_DOG_EVENT - eEventType = ", func_86(Param0.f_4, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 63, "BROADCAST_CAMP_DOG_EVENT - playerBroadcaster = ", PLAYER::GET_PLAYER_NAME(iVar0));
	DEBUG::_0xA308F935BDECCEC0(40, 63, "BROADCAST_CAMP_DOG_EVENT - playerDogOwner = ", PLAYER::GET_PLAYER_NAME(Param0.f_7));
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam20))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 32, "BROADCAST_CAMP_DOG_EVENT - playerflags = 0. Not broadcasting.");
		return;
	}
	Param0 = 11;
	Param0.f_1 = iVar0;
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 20, 6, &uParam20);
	DEBUG::_0x4DC69742196F818A(40, 32, "BROADCAST_CAMP_EVENT - event sent - ", func_86(Param0.f_4, 0));
}

bool func_72(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

char* func_73(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDMP_FLAG_DOG_IS_EQUIPPED";
		case 1:
			return "NCDMP_FLAG_DOG_HAS_DIED";
		case 2:
			return "NCDMP_FLAG_CAMP_RAID_PENDING";
		case 3:
			return "NCDMP_FLAG_CAMP_RAID_WARNING_DONE";
		case 4:
			return "NCDMP_FLAG_CAMP_RAID_RUNNING";
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

void func_74(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_75(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_76(var uParam0, int iParam1)
{
	if (func_72(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

int func_77(var uParam0, int iParam1)
{
	if (func_72(*uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_78(var uParam0, int iParam1)
{
	if (func_72(uParam0->f_4, iParam1))
	{
		return true;
	}
	return false;
}

void func_79(var uParam0, int iParam1)
{
	if (!func_72(uParam0->f_4, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_LOCAL_SET_BIT - Clearing bit ", func_93(iParam1, 0));
	func_75(&(uParam0->f_4), iParam1);
}

int func_80(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1226712[iVar0 /*699*/].f_565 != iParam0)
		{
		}
		else if (bParam2 && !func_83(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && Global_1216137[iVar0 /*27*/].f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_81(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_82(int iParam0, int iParam1)
{
	return (func_94(iParam0) && func_95(Global_1226712[iParam0 /*699*/].f_562, iParam1));
}

bool func_83(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_94(iParam0) && func_95(Global_1216712[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_84(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	return true;
}

bool func_85(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar9;
	var uVar10;
	vector3 vVar11;
	var uVar14;
	bool bVar15;

	iVar0 = iParam3;
	bVar1 = func_96(uParam1[iVar0 /*12*/]);
	if (!func_54(bVar1, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - eDogItem for dog owner is invalid.");
		return false;
	}
	if (!func_76(uParam1[iVar0 /*12*/], 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - Camp Dog isn't equipped.");
		return false;
	}
	if (func_76(uParam1[iVar0 /*12*/], 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - NCDMP_FLAG_DOG_HAS_DIED is set.");
		return false;
	}
	iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iParam3);
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_61(), iVar2, true, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - Script is already running.");
		return false;
	}
	iVar3 = PLAYER::PLAYER_ID();
	iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
	bVar9 = false;
	if (func_76(uParam1[iVar0 /*12*/], 2) && !func_76(uParam1[iVar0 /*12*/], 3))
	{
		bVar9 = true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - bCanSpawnForCampRaid = ", MISC::_0xF216F74101968DB0(bVar9));
	if (bVar9)
	{
		if (iVar0 == iVar5)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - Dog owner is the local player.");
			bVar9 = true;
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iParam3, func_61(), iVar2))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - Dog owner has this script running.");
			bVar9 = true;
		}
	}
	else
	{
		bVar15 = func_97(iParam3, &uVar10, &vVar11, &uVar14);
		if (!bVar15)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - Couldn't get spawn location data.");
			return false;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar6, vVar11, true) > 100f)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_MANAGER_CAN_START_A_DOG_SCRIPT_FOR_PLAYER - Local Player is away from scenario position.");
			return false;
		}
	}
	return true;
}

char* func_86(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_DOG_EVENT_TYPE_DOG_DIED";
		case 1:
			return "CAMP_DOG_EVENT_TYPE_DOG_NAME_CHANGED";
		case 2:
			return "CAMP_DOG_EVENT_TYPE_DOG_PATTED";
		case 3:
			return "CAMP_DOG_EVENT_TYPE_FIND_SPAWN_POSITION";
		case 4:
			return "CAMP_DOG_EVENT_TYPE_FOUND_SPAWN_POSITION";
		case 5:
			return "CAMP_DOG_EVENT_TYPE_IS_UNLOCK_LOCKED";
		case 6:
			return "CAMP_DOG_EVENT_TYPE_UNLOCK_LOCKED";
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

int func_87(bool bParam0)
{
	if (func_18() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<4> func_88()
{
	struct<4> Var0;

	return Var0;
}

bool func_89(var uParam0, bool bParam1, var uParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_87(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43176, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_IN_SLOT - Parent item with GUID ", UNK_0xD2E4270E5D98EEE4(&uParam0), " does not have ", iParam6 + 1, " child items in slot ", func_90(bParam4, 0), ", aborting");
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, iParam5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(43656, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_IN_SLOT - Could not retrieve item ", iParam6, " in slot ", func_90(bParam4, 0), "on parent item with GUID ", UNK_0xD2E4270E5D98EEE4(&uParam0), ", aborting");
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(166568, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_IN_SLOT - ", func_48(iParam5->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam5), ") is item ", iParam6, " in slot ", func_90(bParam4, 0));
	return true;
}

var func_90(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1767793931);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

int func_91(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_98(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_48(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

var func_92(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_99() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_100());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_100());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_100());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_101(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_102(iVar2))
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
				if (iVar9 & 8192 != 0 && func_103(iVar2) != 1)
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
					if (!func_104(iVar10))
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

char* func_93(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDML_FLAG_DOG_INVENTORY_UPDATED";
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

bool func_94(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_96(var uParam0)
{
	return uParam0->f_1;
}

int func_97(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_105(iParam0, &iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_CAMP_SPAWN_LOCATION_DATA - Couldn't find a scenario point.");
		return 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_CAMP_SPAWN_LOCATION_DATA - Returned scenario point doesn't exist.");
	}
	*uParam1 = iVar0;
	*uParam2 = { TASK::_GET_SCENARIO_POINT_COORDS(*uParam1, true) };
	*uParam3 = TASK::_GET_SCENARIO_POINT_HEADING(*uParam1, true);
	return 1;
}

bool func_98(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_87(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_90(bParam1, 0));
		return false;
	}
	if (!func_106(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_90(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_48(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_90(bParam1, 0));
	return true;
}

int func_99()
{
	return Global_1051590.f_12;
}

char* func_100()
{
	return "unnamed";
}

int func_101(int iParam0)
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

bool func_102(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_107(36, iParam0);
}

int func_103(int iParam0)
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

bool func_104(char* sParam0)
{
	if (func_108(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_109(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

bool func_105(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_110(iParam0, &vVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 62, "NET_CAMP_MANAGER_CLIENT_FIND_DOG_SCENARIO_FOR_PLAYER_TENT - Unable to find player tent data");
		return false;
	}
	if (func_111(vVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 62, "NET_CAMP_MANAGER_CLIENT_FIND_DOG_SCENARIO_FOR_PLAYER_TENT - Player tent pos is not defined");
		return false;
	}
	iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("WORLD_ANIMAL_DOG_PLAYER_TENT_TG"), 5.5f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3))
	{
		*uParam1 = iVar3;
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(696, 61, "Find Dog Scenario - Can't find scenario near tent position: ", &vVar0, " for player: ", PLAYER::GET_PLAYER_NAME(iParam0));
	return false;
}

bool func_106(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_87(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_48(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_90(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_107(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_112(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_113())
	{
		return func_112(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_112(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_108(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_109(char* sParam0)
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
		func_114(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_115(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

bool func_110(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	*uParam1 = { Global_1134820[iVar0 /*83*/].f_38.f_8 };
	return true;
}

bool func_111(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_112(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_113()
{
	return Global_1102630.f_3672;
}

void func_114(char* sParam0)
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
	func_115(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_115(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

