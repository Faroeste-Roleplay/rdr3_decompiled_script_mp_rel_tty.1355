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
	char[] cVar0[8];
	var uVar1;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	cVar0 = "net_ambient_content_evaluator";
	func_2(&uVar1);
	while (!func_3(0, 0))
	{
		if (func_4())
		{
			func_5(&Global_1210632, cVar0);
		}
		else
		{
			func_6(&Global_1210632, cVar0, &uVar1);
		}
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		func_6(&Global_1210632, cVar0, &uVar1);
		BUILTIN::WAIT(0);
	}
	func_7();
}

void func_1()
{
	DEBUG::_0xF0783374333FD8CE(8, 60, "PROCESS_PRE_GAME STARTED for net_ace_thread_manager");
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_8();
	if (func_9())
	{
		DEBUG::_0xF0783374333FD8CE(8, 60, "Terminating net_ace_thread_manager");
		func_7();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	DEBUG::_0xF0783374333FD8CE(8, 60, "PROCESS_PRE_GAME COMPLETE net_ace_thread_manager");
}

void func_2(var uParam0)
{
	func_10(uParam0, 0);
}

bool func_3(bool bParam0, bool bParam1)
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

bool func_4()
{
	return !func_13(func_12(), 0, 0);
}

void func_5(var uParam0, char* sParam1)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
	{
		return;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
	{
		return;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam1);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2216, 60, "NET_ACE_MANAGE_THREAD_LAUNCH - Script has loaded, starting ", sParam1, " with stacksize ", 1024, ". Updating tiThreads");
		*uParam0 = SCRIPTS::START_NEW_SCRIPT(sParam1, 1024);
		DEBUG::_0xF0783374333FD8CE(136, 60, "NET_ACE_MANAGE_THREAD_LAUNCH - tiAceThread = ", *uParam0, ") started");
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam1);
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 60, "NET_ACE_MANAGE_THREAD_LAUNCH - Waiting for script to load, requesting ", sParam1);
	return;
}

void func_6(var uParam0, char* sParam1, var uParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 60, "NET_ACE_MANAGE_THREAD_SHUTDOWN - Script has shut down");
		*uParam0 = 0;
		return;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
	{
		return;
	}
	if (func_14(uParam2, 30000))
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
		{
			DEBUG::_0xF0783374333FD8CE(8, 60, "NET_ACE_MANAGE_THREAD_SHUTDOWN - Requesting thread exit: ", *uParam0);
			SCRIPTS::_0x7DE4643157AD646C(*uParam0);
		}
		func_2(uParam2);
	}
}

void func_7()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_15(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_7();
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
					func_7();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_7();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_7();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_7();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_7();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_7();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_7();
		}
		if (func_16() == 0)
		{
			if (func_17())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_7();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_7();
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

void func_10(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_18() - iParam1);
	func_19(uParam0, 1);
	func_20(uParam0, 2);
	uParam0->f_2 = 0;
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

struct<2> func_12()
{
	return Global_1131020.f_5.f_3;
}

bool func_13(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265378.f_131719.f_135 & 8 != 0)
	{
		Global_1072032.f_28392 = 1;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eLoaderFlags != UGC_GLOBAL_LOADER_FLAG_NONE");
		return true;
	}
	if (func_21(Global_1051214) && !func_22(Global_1051214, Param0))
	{
		Global_1072032.f_28392 = 2;
		return true;
	}
	if (iParam2 != 0 && func_23(iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_ANYONE");
		return true;
	}
	if (iParam3 != 0 && func_24(iParam3, 255))
	{
		Global_1072032.f_28392 = 4;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_PLAYER");
		return true;
	}
	if (Global_263042[Global_1275959 /*70*/] > 2)
	{
		Global_1072032.f_28392 = 5;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState > UGC_GLOBAL_LOADER_STATE_IDLE, ", func_25(Global_263042[Global_1275959 /*70*/], 0));
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1072032.f_28392 = 6;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState >= UGC_GLOBAL_LOADER_HS_MISSION_UPDATE, ", func_26(Global_262155, 0));
		return true;
	}
	if (func_27())
	{
		Global_1072032.f_28392 = 7;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NETWORK_IS_GLOBAL_UGC_MISSION_ACTIVE");
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_21(Global_1051214))
		{
			Global_1072032.f_28392 = 8;
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, TMF_IS_MATCHMAKING");
			return true;
		}
	}
	if (Global_265378.f_131877 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265378.f_131877))
	{
		Global_1072032.f_28392 = 9;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, g_UGCData.tiMissionController");
		return true;
	}
	Global_1072032.f_28392 = 0;
	return false;
}

bool func_14(var uParam0, int iParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_29(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

char* func_15(int iParam0)
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

int func_16()
{
	return Global_1572887.f_13;
}

bool func_17()
{
	return Global_1051590.f_8;
}

int func_18()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21(struct<2> Param0)
{
	if (!func_30(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_31(Param0))
	{
		return false;
	}
	return true;
}

bool func_22(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_23(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1198211.f_1 && iParam0) != 0;
}

bool func_24(int iParam0, int iParam1)
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

char* func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_GLOBAL_LOADER_STATE_INVALID";
		case 1:
			return "UGC_GLOBAL_LOADER_STATE_PRE_DOWNLOAD_DATA";
		case 2:
			return "UGC_GLOBAL_LOADER_STATE_IDLE";
		case 3:
			return "UGC_GLOBAL_LOADER_STATE_DOWNLOADING_DATA";
		case 4:
			return "UGC_GLOBAL_LOADER_STATE_DATA_DOWNLOADED";
		case 5:
			return "UGC_GLOBAL_LOADER_STATE_SESSIONING_PLAYERS";
		case 6:
			return "UGC_GLOBAL_LOADER_STATE_PLAYERS_SESSIONED";
		case 7:
			return "UGC_GLOBAL_LOADER_STATE_LAUNCHING_MISSION";
		case 8:
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_LAUNCH";
		case 9:
			return "UGC_GLOBAL_LOADER_STATE_MISSION_LAUNCHED";
		case 10:
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_RESTART";
		case 11:
			return "UGC_GLOBAL_LOADER_STATE_RESTART_MISSION";
		case 12:
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_TEAM_SORT";
		case 13:
			return "UGC_GLOBAL_LOADER_STATE_SET_UP_NEXT_MISSION";
		case 14:
			return "UGC_GLOBAL_LOADER_STATE_KICK_PLAYER";
		case 15:
			return "UGC_GLOBAL_LOADER_STATE_CLEAR_CONTENT";
		case 16:
			return "UGC_GLOBAL_LOADER_STATE_RESTART_FREEROAM";
		case 17:
			return "UGC_GLOBAL_LOADER_STATE_END_INSTANCED_SESSION";
		case 18:
			return "UGC_GLOBAL_LOADER_STATE_CLEAR_MISSION";
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

char* func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "UGC_GLOBAL_LOADER_HS_INVALID";
		case 0:
			return "UGC_GLOBAL_LOADER_HS_MANAGE_INSTIGATORS";
		case 1:
			return "UGC_GLOBAL_LOADER_HS_MISSION_UPDATE";
		case 2:
			return "UGC_GLOBAL_LOADER_HS_TEAM_SORT_AND_REBALANCE";
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

bool func_27()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_21(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_28(var uParam0)
{
	return func_32(*uParam0, 1);
}

int func_29(var uParam0)
{
	if (!func_28(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to get value of MS_TIMER that has not been started! Starting it");
		UNK_0x355E72323AEE83CC(0, 1);
		func_33(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_34(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_18() - uParam0->f_1);
}

bool func_30(int iParam0)
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

int func_31(int iParam0)
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

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1 || !func_28(uParam0))
	{
		func_2(uParam0);
	}
}

bool func_34(var uParam0)
{
	return func_32(*uParam0, 2);
}

