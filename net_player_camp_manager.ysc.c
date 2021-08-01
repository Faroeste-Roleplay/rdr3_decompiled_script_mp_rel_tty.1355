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
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	while (!func_2(0, 0))
	{
		func_3(&Global_1138281, &uVar0, &Global_1138479, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT());
		func_4(&uVar0);
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1()
{
	int iVar0;

	if (func_7())
	{
		func_6();
	}
	DEBUG::_0xF0783374333FD8CE(8, 62, "NET_PLAYER_CAMP_MANAGER_PROCESS_PRE_GAME");
	iVar0 = MISC::GET_GAME_TIMER();
	func_8(32, -1);
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1138281, 198, 25);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Global_1138281), 198, "g_mpNetPlayerCampHost");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138479, 289, 26);
	func_11(NETWORK::_0xBA24095EA96DFE17(&Global_1138479), 289, "g_mpNetPlayerCampPlayer");
	func_12(0);
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_13(Global_1572887, 0), ", so skipping");
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

void func_3(var uParam0, var uParam1, var uParam2, bool bParam3)
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
				func_14(uParam0, uParam1, uParam2, iVar0, bParam3);
				break;
		}
		iVar0++;
	}
}

void func_4(var uParam0)
{
	func_15(uParam0);
}

void func_5()
{
}

void func_6()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
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

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_9()
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_16(iVar0));
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
		if (func_17() == 0)
		{
			if (func_18())
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

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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

char* func_13(int iParam0, int iParam1)
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

void func_14(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam3, &iVar0, 4))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 141, "NET_PLAYER_CAMP_MANAGER_HANDLE_EVENTS_PROCESSING - GET_EVENT_DATA - Returned false.");
		return;
	}
	switch (iVar0)
	{
		case 198:
			func_19(uParam0, uParam1, uParam2, iParam3, bParam4);
			break;
	}
}

void func_15(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (func_20(16))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 141, "NSM_CL_CAMPS locked for someone in session, aborting wilderness camp update");
		return;
	}
	if (func_21(1, iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 141, "IS NPCM_PLAYER_DATA_START_CAMP_SIGNALED: ", func_21(1, iVar0));
		func_22(uParam0, 1);
	}
	if (func_21(2, iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 141, "IS NPCM_PLAYER_DATA_START_CAMP_SIGNALED: ", func_21(2, iVar0));
		func_22(uParam0, 0);
	}
	if (func_21(32, iVar0))
	{
		func_23(uParam0);
	}
	if (func_21(4, iVar0))
	{
		func_24(uParam0, 1);
	}
	if (func_21(8, iVar0))
	{
		func_24(uParam0, 0);
	}
	if (func_21(16, iVar0))
	{
		func_25(uParam0);
	}
	if (func_26())
	{
		if (!func_21(2, iVar0) && !func_21(8, iVar0))
		{
			uParam0->f_4++;
			func_27(uParam0);
		}
	}
	if (func_21(64, iVar0))
	{
		func_28(5, iVar0, *uParam0, 1, 0);
		func_29(64, iVar0);
	}
}

char* func_16(int iParam0)
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

int func_17()
{
	return Global_1572887.f_13;
}

bool func_18()
{
	return Global_1051590.f_8;
}

void func_19(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<7> Var0;
	int iVar9;
	int iVar10;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam3, &Var0, 9))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 141, "NET_PLAYER_CAMP_MANAGER_PROCESS_EVENT - GET_EVENT_DATA - Returned false.");
		return;
	}
	iVar9 = Var0.f_5;
	switch (Var0.f_4)
	{
		case 0:
			if (!bParam4)
			{
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 141, "NET_PLAYER_CAMP_MANAGER_PROCESS_EVENT - NET_PLAYER_CAMP_EVENT_CAMP_TRIGGERED");
			if (func_30(uParam0, Var0.f_6))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 141, "NET_PLAYER_CAMP_MANAGER_PROCESS_EVENT - NET_PLAYER_CAMP_EVENT_CAMP_TRIGGERED: REQUEST SUCCESSFUL");
				uParam0->f_67[iVar9 /*3*/] = { Var0.f_6 };
				uParam0->f_164[iVar9] = 1;
				func_28(1, Var0.f_5, Var0.f_6, 0, 0);
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 141, "NET_PLAYER_CAMP_MANAGER_PROCESS_EVENT - NET_PLAYER_CAMP_EVENT_CAMP_TRIGGERED: REQUEST FAILED");
				uParam0->f_67[iVar9 /*3*/] = { func_31() };
				uParam0->f_164[iVar9] = 0;
				func_28(2, Var0.f_5, Var0.f_6, 0, 0);
				DEBUG::_0xA308F935BDECCEC0(8, 141, "NET_PLAYER_CAMP_MANAGER_PROCESS_EVENT - NET_PLAYER_CAMP_EVENT_CAMP_TRIGGERED: UNABLE TO START SCRIPT");
			}
			break;
		case 1:
			func_32(32, Var0.f_5);
			break;
		case 2:
			func_29(1, Var0.f_5);
			func_33("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_34(uParam1);
			break;
		case 5:
			if (!bParam4)
			{
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 141, "NET_PLAYER_CAMP_MANAGER_PROCESS_EVENT - NET_PLAYER_CAMP_EVENT_CAMP_SHUTDOWN");
			uParam0->f_67[iVar9 /*3*/] = { func_31() };
			uParam0->f_164[iVar9] = 0;
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
			{
				return;
			}
			iVar10 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::IS_ENTITY_DEAD(iVar10))
			{
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 141, "NET_PLAYER_CAMP_MANAGER_PROCESS_EVENT - NET_PLAYER_CAMP_CRAFT_CLEANUP for ", Var0.f_1);
			TASK::_0xFDECCA06E8B81346(iVar10);
			break;
	}
}

bool func_20(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1198211.f_1 && iParam0) != 0;
}

bool func_21(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return (Global_1138479[iVar0 /*9*/].f_7 && iParam0) != 0;
}

void func_22(var uParam0, bool bParam1)
{
	var uVar0;

	if (bParam1)
	{
		func_35(uParam0, &(uParam0->f_3), &uVar0, &(uParam0->f_6), &(uParam0->f_5), 0);
		if (func_36(uParam0))
		{
			func_29(1, PLAYER::PLAYER_ID());
			func_28(0, PLAYER::PLAYER_ID(), *uParam0, 1, 0);
		}
		else
		{
			func_34(uParam0);
			func_29(1, PLAYER::PLAYER_ID());
		}
	}
	else
	{
		func_29(2, PLAYER::PLAYER_ID());
		func_32(8, PLAYER::PLAYER_ID());
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_37(&(Global_1138479[iVar1 /*9*/]), *uParam0, uParam0->f_6);
	func_29(32, iVar0);
	func_32(16, iVar0);
}

void func_24(var uParam0, bool bParam1)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!func_38())
	{
		return;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 141, "NET WILDERNESS CAMP: NO FREE STACKS AVAILABLE!");
		if (bParam1)
		{
			func_29(4, iVar8);
		}
		else
		{
			func_29(8, PLAYER::PLAYER_ID());
		}
		func_34(uParam0);
		return;
	}
	if (bParam1)
	{
		iVar8 = PLAYER::PLAYER_ID();
		iVar9 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8);
		Var0 = iVar9;
		Var0.f_1 = iVar8;
		Var0.f_2 = uParam0->f_5;
		iVar10 = iVar8;
		Global_1138479[iVar10 /*9*/].f_4 = 1;
		func_39(&(Global_1959052.f_2));
		func_29(4, iVar8);
	}
	else
	{
		iVar8 = uParam0->f_4;
		iVar9 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8);
		Var0 = iVar9;
		Var0.f_1 = uParam0->f_4;
		func_29(8, PLAYER::PLAYER_ID());
	}
	Var0.f_7 = iVar8;
	Var0.f_3 = { *uParam0 };
	Var0.f_6 = uParam0->f_3;
	DEBUG::_0xA308F935BDECCEC0(8, 141, "STARTING CAMP SCRIPT");
	func_34(uParam0);
	uParam0->f_7 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_40(), &Var0, 8, 1024);
}

void func_25(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (!func_41(&(Global_1138479[iVar1 /*9*/]), uParam0))
	{
		return;
	}
	else
	{
		func_29(16, iVar0);
		func_32(4, iVar0);
	}
}

bool func_26()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1138479)
	{
		if (Global_1138479[iVar0 /*9*/].f_4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_4 < 0 || uParam0->f_4 == 32)
	{
		uParam0->f_4 = 0;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (iVar1 == uParam0->f_4)
	{
		return;
	}
	iVar2 = uParam0->f_4;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
	{
		return;
	}
	if (func_42(Global_1138479[uParam0->f_4 /*9*/]))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 141, "NO VALID VECTOR FOR THIS PLAYER: ", iVar1);
		return;
	}
	if (!Global_1138479[uParam0->f_4 /*9*/].f_4)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 141, "THIS PLAYER IS NOT RUNNING A CAMP: ", iVar1);
		return;
	}
	if (func_43(Global_33, Global_1138479[uParam0->f_4 /*9*/], 1) < 22500f)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 141, "Sending Non-Owner Launch request ");
		if (!SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_7, false))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 141, "Starting Non-Owner request ");
			*uParam0 = { Global_1138479[uParam0->f_4 /*9*/] };
			uParam0->f_3 = Global_1138479[uParam0->f_4 /*9*/].f_3;
			func_32(2, iVar0);
		}
	}
}

void func_28(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	struct<7> Var0;
	var uVar9;
	int iVar10;

	Var0 = 198;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = { vParam2 };
	if (bParam5)
	{
		iVar10 = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
		uVar9 = func_44(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar10));
	}
	else if (bParam6)
	{
		uVar9 = func_45(0, 8);
	}
	else
	{
		uVar9 = func_44(iParam1);
	}
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, 24, &uVar9);
	DEBUG::_0xA308F935BDECCEC0(40, 141, "PLAYER_CAMP send event of type ", func_46(iParam0, 0));
}

void func_29(int iParam0, int iParam1)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 141, "NET_PLAYER_CAMP_MANAGER_CLEAR_PLAYER_FLAG ", func_47(iParam0, 0));
	iVar0 = iParam1;
	Global_1138479[iVar0 /*9*/].f_7 = (Global_1138479[iVar0 /*9*/].f_7 - (Global_1138479[iVar0 /*9*/].f_7 && iParam0));
}

bool func_30(var uParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (func_48(vParam1, uParam0->f_67[iVar0 /*3*/]) || BUILTIN::VDIST2(vParam1, uParam0->f_67[iVar0 /*3*/]) < 75625f)
		{
			DEBUG::_0xA308F935BDECCEC0(680, 141, "NET_PLAYER_CAMP_MANAGER_IS_CAMP_AVAILABLE: Vectors are the same, Client Vector is: ", MISC::_0x6C4DBF553885F9EB(vParam1), " Host Vector is: ", MISC::_0x6C4DBF553885F9EB(uParam0->f_67[iVar0 /*3*/]));
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_31()
{
	return 0f, 0f, 0f;
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 141, "NET_PLAYER_CAMP_MANAGER_SET_PLAYER_FLAG ", func_47(iParam0, 0));
	iVar0 = iParam1;
	Global_1138479[iVar0 /*9*/].f_7 = (Global_1138479[iVar0 /*9*/].f_7 || iParam0);
}

int func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return iVar15;
}

void func_34(var uParam0)
{
	*uParam0 = { func_31() };
	uParam0->f_3 = 0f;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	vector3 vVar16;
	vector3 vVar19;
	var uVar22;
	var uVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	int iVar27;
	vector3 vVar28[32];

	fVar25 = 999999.9f;
	bVar26 = false;
	Var0 = Global_1072032.f_28503[46 /*4*/].f_3;
	iVar5 = func_49();
	iVar6 = func_50(iVar5);
	Var0.f_2 = 1655936658;
	Var0.f_3 = iVar6;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1058386141;
		iVar7 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
		DEBUG::_0x1B08D1EB9D8C4931(168, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: ", func_51(iVar5), " district camp loc count = ", iVar7);
		uVar15 = Var0.f_1;
		iVar10 = 0;
		while (iVar10 < vVar28.x)
		{
			iVar27 = iVar10;
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar27) || iVar27 == PLAYER::PLAYER_ID())
			{
				vVar28[iVar10 /*3*/] = { func_31() };
			}
			else
			{
				vVar28[iVar10 /*3*/] = { func_52(iVar27) };
			}
			DEBUG::_0x1B08D1EB9D8C4931(904, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: player Coords of player ID ", iVar10, " are ", &(vVar28[iVar10 /*3*/]));
			iVar10++;
		}
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			Var0.f_1 = uVar15;
			bVar26 = false;
			Var0.f_2 = -738381918;
			Var0.f_3 = iVar8;
			DEBUG::_0x1B08D1EB9D8C4931(8, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: the current value of iLocIter is ", iVar8);
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: invalid Node");
			}
			else if (!(iVar9 == iParam5 || iParam5 == 0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: Type Error");
			}
			else
			{
				Var0.f_2 = 170329912;
				DATAFILE::_DATAFILE_GET_HASH(&iVar9, &Var0);
				DEBUG::_0x1B08D1EB9D8C4931(2184, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: iLocIter ", iVar8, " Type ", iVar9, " Looking for Type ", iParam5);
				Var0.f_2 = 519988399;
				if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: invalid Node at ", iVar8);
				}
				else
				{
					Var0.f_2 = -518277907;
					DATAFILE::_DATAFILE_GET_FLOAT(&vVar16, &Var0);
					Var0.f_2 = -1363423190;
					DATAFILE::_DATAFILE_GET_FLOAT(&(vVar16.f_1), &Var0);
					Var0.f_2 = 861329762;
					DATAFILE::_DATAFILE_GET_FLOAT(&(vVar16.f_2), &Var0);
					DEBUG::_0x1B08D1EB9D8C4931(56, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: Coords Camp being checked ", &vVar16);
					fVar24 = BUILTIN::VDIST2(vVar16, Global_34);
					DEBUG::_0x1B08D1EB9D8C4931(24, 141, "GET_CLOSEST_PLAYER_CAMP_LOCATION: Distance between Camp and player ", fVar24);
					if (fVar24 >= fVar25)
					{
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 32)
						{
							if (func_42(vVar28[iVar10 /*3*/]))
							{
							}
							else if ((func_48(vVar16, Global_1138479[iVar10 /*9*/]) || (!func_42(Global_1138479[iVar10 /*9*/]) && BUILTIN::VDIST2(vVar16, Global_1138479[iVar10 /*9*/]) < 75625f)) || BUILTIN::VDIST2(vVar28[iVar10 /*3*/], vVar16) < 100f)
							{
								bVar26 = true;
							}
							else
							{
								iVar10++;
							}
						}
						if (((!bVar26 && !func_53(vVar16, 1, 0, 0)) && !func_54(vVar16, 150f)) && !VOLUME::_0xAA9EE2AAFC717623(vVar16, 0, 0, 0))
						{
							Var0.f_2 = -1425398587;
							DATAFILE::_DATAFILE_GET_FLOAT(&uVar22, &Var0);
							Var0.f_2 = 1808799200;
							DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var0);
							Var0.f_2 = -1067565689;
							DATAFILE::_DATAFILE_GET_INT(&uVar13, &Var0);
							vVar19 = { vVar16 };
							uVar23 = uVar22;
							fVar25 = fVar24;
							uVar12 = uVar11;
							uVar14 = uVar13;
							if (fVar24 > 150f)
							{
								*uParam2 = 1;
							}
							else
							{
								*uParam2 = 0;
							}
						}
					}
				}
			}
			iVar8++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(24, 141, "DISTANCE FROM LOCATION IS: ", fVar25);
	if (func_42(*uParam0))
	{
		*uParam0 = { vVar19 };
		*uParam1 = uVar23;
		*uParam3 = uVar12;
		*uParam4 = uVar14;
		DEBUG::_0x1B08D1EB9D8C4931(8, 141, "ISOURCE IS : ", *uParam3);
	}
}

bool func_36(var uParam0)
{
	if (func_42(*uParam0) || BUILTIN::VDIST(*uParam0, func_52(PLAYER::PLAYER_ID())) > 150f)
	{
		func_33("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_37(var uParam0, vector3 vParam1, var uParam4)
{
	struct<8> Var0;

	Var0 = { vParam1 };
	Var0.f_4 = 7f;
	Var0.f_5 = 544;
	Var0.f_6 = -1975763068;
	Var0.f_7 = uParam4;
	uParam0->f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

bool func_38()
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_40()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_40());
		return false;
	}
	return true;
}

void func_39(var uParam0)
{
	func_55(uParam0, 0f);
}

char* func_40()
{
	return "player_camp";
}

bool func_41(var uParam0, var uParam1)
{
	int iVar0;

	if (!VOLUME::_0xA4A4359320345B34(uParam0->f_5))
	{
		func_33("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		func_34(uParam1);
		func_29(16, PLAYER::PLAYER_ID());
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(uParam0->f_5);
	switch (iVar0)
	{
		case 4:
			DEBUG::_0xA308F935BDECCEC0(8, 141, "PLAYER_CAMP_MANAGER: Volume lock-all request failed for local player");
			func_33("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_34(uParam1);
			func_29(16, PLAYER::PLAYER_ID());
			return false;
		case 1:
		case 2:
			DEBUG::_0xA308F935BDECCEC0(8, 141, "PLAYER_CAMP_MANAGER: VOLUME_LOCK is still awaiting volume lock request to complete for local player");
			return false;
		case 3:
			DEBUG::_0xA308F935BDECCEC0(8, 141, "PLAYER_CAMP_MANAGER: Volume lock request has completed.");
			uParam0->f_6 = VOLUME::_0x351D71B8B72B858B(uParam0->f_5);
			func_32(4, PLAYER::PLAYER_ID());
			func_29(16, PLAYER::PLAYER_ID());
			return true;
		default:
			break;
	}
	return false;
}

bool func_42(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_43(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_56(vVar0, vParam1);
}

var func_44(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	DEBUG::_0x4DC69742196F818A(680, 8, "NETWORK_GET_SPECIFIC_PLAYER_BIT_INDEX() - iPlayerFlags.m_bits[0] = ", func_57(SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&uVar0, 0)), ", iPlayerBits.m_bits[1] = ", func_57(SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&uVar0, 1)));
	return uVar0;
}

var func_45(int iParam0, int iParam1)
{
	return func_58(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

char* func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYER_CAMP_EVENT_CAMP_TRIGGERED";
		case 1:
			return "NET_PLAYER_CAMP_EVENT_START_CAMP";
		case 2:
			return "NET_PLAYER_CAMP_EVENT_GET_NEW_LOCATION";
		case 3:
			return "NET_PLAYER_CAMP_EVENT_CAMP_CLEAR_RUNNING_FLAG";
		case 4:
			return "NET_PLAYER_CAMP_EVENT_CLEAR_PROCESS_FLAG";
		case 5:
			return "NET_PLAYER_CAMP_EVENT_CAMP_SHUTDOWN";
		case 6:
			return "NET_PLAYER_CAMP_CRAFT_CLEANUP";
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

char* func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NPCM_PLAYER_DATA_FLAG_DEFAULT";
		case 1:
			return "NPCM_PLAYER_DATA_FLAG_START_CAMP_SIGNALED";
		case 2:
			return "NPCM_PLAYER_DATA_FLAG_START_NON_OWNER_SIGNALED";
		case 4:
			return "NPCM_PLAYER_DATA_FLAG_LAUNCH_OWNER_CAMP";
		case 8:
			return "NPCM_PLAYER_DATA_FLAG_LAUNCH_NON_OWNER_CAMP";
		case 16:
			return "NPCM_PLAYER_DATA_FLAG_REQUEST_VOLUME_LOCK";
		case 32:
			return "NPCM_PLAYER_DATA_FLAG_VALIDATED_BY_HOST";
		case 64:
			return "NPCM_PLAYER_DATA_FLAG_CLEAR_CAMP_DATA";
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

bool func_48(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_49()
{
	return Global_1896634.f_41;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return 1776960747;
}

char* func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		default:
			break;
	}
	return "";
}

Vector3 func_52(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_53(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_42(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 8192;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		DEBUG::_0xA308F935BDECCEC0(184, 86, "Pos ", &vParam0, " in volume lock");
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(184, 86, "Pos ", &vParam0, " NOT in volume lock");
	return false;
}

bool func_54(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_59(iVar0))
		{
			if (BUILTIN::VDIST(func_60(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_55(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_61() - fParam1);
	func_62(uParam0, 1);
	func_63(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_56(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

char* func_57(int iParam0)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, "BIT0 ", 64);
	iVar8 = 0;
	iVar8 = 1;
	while (iVar8 <= 32)
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			StringIntConCat(&cVar0, 1, 64);
		}
		else
		{
			StringIntConCat(&cVar0, 0, 64);
		}
		if ((iVar8 % 4) == 0)
		{
			StringConCat(&cVar0, " ", 64);
		}
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar8++;
	}
	StringConCat(&cVar0, "BIT31", 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
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
	if (func_64() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_65());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_65());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_65());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_66(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_67(iVar2))
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
				if (iVar9 & 8192 != 0 && func_68(iVar2) != 1)
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
					if (!func_69(iVar10))
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

bool func_59(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_70(Global_1835011[iParam0 /*72*/].f_1);
}

Vector3 func_60(int iParam0)
{
	return func_71(iParam0);
}

float func_61()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_63(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_64()
{
	return Global_1051590.f_12;
}

char* func_65()
{
	return "unnamed";
}

int func_66(int iParam0)
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

bool func_67(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_72(36, iParam0);
}

int func_68(int iParam0)
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

bool func_69(char* sParam0)
{
	if (func_73(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_74(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

bool func_70(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_75(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

Vector3 func_71(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

bool func_72(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_76(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_77())
	{
		return func_76(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_76(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_73(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_74(char* sParam0)
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
		func_78(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_79(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

int func_75(struct<2> Param0)
{
	int iVar0;

	if (!func_80(Param0))
	{
		return -1;
	}
	iVar0 = func_81(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072032.f_19554.f_1[iVar0 /*3*/].f_2;
}

bool func_76(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_77()
{
	return Global_1102630.f_3672;
}

void func_78(char* sParam0)
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
	func_79(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_79(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_80(struct<2> Param0)
{
	if (!func_82(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_83(Param0))
	{
		return false;
	}
	return true;
}

int func_81(struct<2> Param0)
{
	char* sVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	sVar0 = func_84(Param0);
	if (Global_1072032.f_19554 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - Trying to find ", sVar0, " but ths list is empty.");
		return -1;
	}
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	if (!func_85(Param0, &vVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - ", sVar0, " is invalid.");
		return -1;
	}
	iVar7 = 0;
	iVar8 = (Global_1072032.f_19554 - 1);
	iVar10 = 0;
	while (iVar7 <= iVar8)
	{
		iVar9 = (iVar7 + ((iVar8 - iVar7) / 2));
		func_85(Global_1072032.f_19554.f_1[iVar9 /*3*/], &vVar4);
		if (vVar4.x > vVar1.x)
		{
			iVar8 = (iVar9 - 1);
		}
		else if (vVar4.x < vVar1.x)
		{
			iVar7 = iVar9 + 1;
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(2696, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to find ", sVar0, " at index ", iVar9);
			return iVar9;
		}
		iVar10++;
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to NOT find ", sVar0);
	return -1;
}

bool func_82(int iParam0)
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

int func_83(int iParam0)
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

char* func_84(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_86(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_80(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_87(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

bool func_85(struct<2> Param0, bool bParam2)
{
	if (!func_80(Param0))
	{
		return false;
	}
	func_88(bParam2);
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

char* func_86(int iParam0)
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

int func_87(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_85(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_88(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

