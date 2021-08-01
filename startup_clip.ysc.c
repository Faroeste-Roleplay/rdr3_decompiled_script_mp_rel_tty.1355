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
	bool bVar0;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::_GAME_TRANSITION_MANAGER_INIT(-1329374618);
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	REPLAY::_0x57C6525034E76EB0();
	BUILTIN::WAIT(1000);
	if (!REPLAY::_0x9EEB007317FA3B9C())
	{
		if (REPLAY::_0xB3F2829907403C13())
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "startup_clip - OPEN_VIDEO_EDITOR = TRUE");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "startup_clip - OPEN_VIDEO_EDITOR = FALSE");
		}
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "startup_clip - VIDEO EDITOR ALREADY RUNNING");
	}
	if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !NETWORK::_0xFC4165C9165C166F())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
		DEBUG::_0xF0783374333FD8CE(8, 0, "startup_clip - DO_SCREEN_FADE_IN");
	}
	bVar0 = true;
	if (bVar0)
	{
		func_1(0);
		func_2();
	}
	while (bVar0)
	{
		bVar0 = REPLAY::_0x9EEB007317FA3B9C();
		if (!bVar0)
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "startup_clip - IS_VIDEO_EDITOR_RUNNING = FALSE");
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "startup_clip - IS_THREAD_EXIT_REQUESTED = TRUE");
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_1(0);
	func_2();
	if (REPLAY::_0x9EEB007317FA3B9C())
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "startup_clip - CLOSE_VIDEO_EDITOR");
		REPLAY::_0xCEEC64BD27A59312(1);
	}
	MISC::_GAME_TRANSITION_MANAGER_SHUTDOWN();
	func_3(0, -1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<35> Var2;

	UNK_0x355E72323AEE83CC(22, 5);
	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bVar1 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)) == iVar0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 22, "NET_SESSION_MANAGER_CLEAR_REQUEST clearing data, sessionRequestID data below");
	DEBUG::_0xA308F935BDECCEC0(40, 22, "bByEvent      = ", MISC::_0xF216F74101968DB0(bParam0));
	DEBUG::_0xA308F935BDECCEC0(40, 22, "bIsGangLeader = ", MISC::_0xF216F74101968DB0(bVar1));
	if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887.f_366)) && (bParam0 || bVar1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 22, "Request was in progress, cancelling.");
		NETWORK::_0xE72E5C1289BD1F40(&(Global_1572887.f_366));
	}
	DEBUG::_0xA308F935BDECCEC0(8, 22, "sessionRequestID.AccountId = ", Global_1572887.f_366);
	DEBUG::_0xA308F935BDECCEC0(8, 22, "sessionRequestID.Index     = ", Global_1572887.f_366.f_1);
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887.f_366 = { Var2 };
}

void func_2()
{
	UNK_0x355E72323AEE83CC(66, 6);
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887.f_272.f_63 = 0;
	Global_1572887.f_272.f_90 = 0;
	Global_1572887.f_272.f_1 = -1;
	if (Global_1572887.f_272.f_86 == 2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 66, "RESET_LOCAL_INVITE_PROCESS Resetting nResult = IR_NONE");
		Global_1572887.f_272.f_86 = 0;
	}
}

void func_3(int iParam0, char* sParam1)
{
	if (iParam0 != 0)
	{
		func_7(iParam0, sParam1);
	}
	func_8(4);
	func_9();
	func_10(1);
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__INTERFACE");
}

void func_4()
{
	Global_1572887.f_272.f_62 = MISC::GET_GAME_TIMER();
	DEBUG::_0xF0783374333FD8CE(8, 66, "NET_INVITE_SET_FAIL_SAFE_TIMER setting to ", Global_1572887.f_272.f_62);
}

void func_5(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 66, "NET_INVITE_SET_FOLLOW_MODE setting ", func_11(iParam0, 0));
	Global_1572887.f_272.f_2 = iParam0;
}

void func_6(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 66, "NET_INVITE_SET_STATE set to ", func_12(iParam0, 0), " from ", func_12(Global_1572887.f_272, 0));
	Global_1572887.f_272 = iParam0;
}

void func_7(int iParam0, char* sParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 0, "SET_ALERT_MESSAGE_ON_INTERFACE_SCREEN - ignoring subsequent interface alert ", func_13(iParam0, 0));
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = sParam1;
	DEBUG::_0xD9911C7B5F8CD69C(35496, 0, "SET_ALERT_MESSAGE_ON_INTERFACE_SCREEN - Failed transition due to - ", func_14(iParam0), " - ", HUD::_GET_LABEL_TEXT_2(func_14(iParam0)), ", ", iParam0, ", ", sParam1);
}

void func_8(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 21, "SET_GAME_RESET_FLAG - Called.  Set DEBUG_ROUTER to debug 1 for more info.");
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
	DEBUG::_0xA308F935BDECCEC0(8, 21, "SET_GAME_RESET_FLAG - Done.");
}

void func_9()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 21, "CLEAR_ALL_LAUNCH_PARAM_ARGS");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_415.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 21, "SET_NEXT_ROUTER_CONTEXT - eNextRouterContext = ROUTER_CONTEXT_NONE.  That's BAD.  Defaulting to interface.  You should stop doing things and make an A/PT now.");
		iParam0 = 1;
	}
	DEBUG::_0xF0783374333FD8CE(680, 21, "SET_NEXT_ROUTER_CONTEXT - current next router context = ", func_15(Global_1572864.f_1, 0), ", next next router context = ", func_15(iParam0, 0));
	Global_1572864.f_1 = iParam0;
}

char* func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NIFM_INVALID";
		case 0:
			return "NIFM_ROCKSTAR_INVITE";
		case 1:
			return "NIFM_ROCKSTAR_JOIN";
		case 2:
			return "NIFM_PLATFORM_INVITE";
		case 3:
			return "NIFM_PLATFORM_JOIN";
		case 4:
			return "NIFM_EXTENDED_INVITE";
		case 5:
			return "NIFM_POSSE_JOIN";
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

char* func_12(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NIS_DORMANT";
		case 1:
			return "NIS_UPDATE_ALERT_SCREEN_CHECK";
		case 2:
			return "NIS_UPDATE_WARNING_ALERT_INPUT";
		case 3:
			return "NIS_INVITE_FOLLOW_FX";
		case 4:
			return "NIS_INVITE_FOLLOW_FX_WAIT";
		case 5:
			return "NIS_INVITE_POST_FOLLOW_FX";
		case 6:
			return "NIS_UPDATE_INVITE_ACTION";
		case 7:
			return "NIS_INIT_INVITE_FOLLOW";
		case 8:
			return "NIS_INIT_INVITE_FOLLOW_FROM_SP";
		case 9:
			return "NIS_START_INVITE_FOLLOW";
		case 10:
			return "NIS_INVITE_FOLLOW_IN_PROGRESS";
		case 11:
			return "NIS_WAIT_UNTIL_NETWORK_IS_ONLINE";
		case 12:
			return "NIS_ACCEPT_PLATFORM_INVITE";
		case 13:
			return "NIS_END_FAST_INSTANCES";
		case 14:
			return "NIS_START_SOLO_FULL_INSTANCE";
		case 15:
			return "NIS_WAIT_FOR_SOLO_FULL_INSTANCE";
		case 16:
			return "NIS_DISMOUNT_PLAYER";
		case 17:
			return "NIS_DROP_CARRIED_ENTITIES";
		case 18:
			return "NIS_WAIT_FOR_GAMER_IN_SESSION";
		case 19:
			return "NIS_JOIN_INVITING_PLAYER";
		case 20:
			return "NIS_WAIT_FOR_MAIN_THREAD";
		case 21:
			return "NIS_WAIT_FOR_UGC_DOWNLOAD";
		case 22:
			return "NIS_SPAWN_NEAR_INVITER";
		case 23:
			return "NIS_CLEANUP";
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

char* func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "INTERFACE_ALERT_MSG__NULL";
		case 0:
			return "INTERFACE_ALERT_MSG__NO_PROBLEMS";
		case 1:
			return "INTERFACE_ALERT_MSG__AFK";
		case 2:
			return "INTERFACE_ALERT_MSG__STANDBY";
		case 3:
			return "INTERFACE_ALERT_MSG__ONLINE_UGC_ACCESS_RESTRICTED";
		case 4:
			return "INTERFACE_ALERT_MSG__ONLINE_CREATOR_ACCESS_RESTRICTED";
		case 5:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__PRE_INTRO";
		case 6:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__FORCE_PROGRESSION";
		case 7:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__SHIFT_F_FLOW";
		case 8:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__SHIFT_F_CURRENCY";
		case 9:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__LAUNCH_FLOW_TO_MISSION";
		case 10:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__FORCE_RANK";
		case 11:
			return "INTERFACE_ALERT_MSG__DEBUG__FORCE_FAIL_ONLINE";
		case 12:
			return "INTERFACE_ALERT_MSG__ONLINE_CLOUD";
		case 13:
			return "INTERFACE_ALERT_MSG__ONLINE_SAVE_FAILED1";
		case 14:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__PLAYER_GENDER_FAILED";
		case 15:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__OUTFIT_CRITICAL_COMPONENT_FAILED";
		case 16:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__OUTFIT_COMPONENT_FAILED";
		case 17:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__TOOK_TOO_LONG";
		case 18:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__TOO_MANY_ATTEMPTS";
		case 19:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__CASHINVENTORY_IS_CONNECTION_FAULTED";
		case 20:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__INVENTORY_ROOT_GUID_FAILED";
		case 21:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__INVENTORY_WEAPON_WHEEL_GUID_FAILED";
		case 22:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__CRITICAL_AWARD_REQUEST_FAILED";
		case 23:
			return "INTERFACE_ALERT_MSG__ONLINE_MUGSHOT_FAILED__CREATOR_MUGSHOT";
		case 24:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL";
		case 25:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SP_THREADS";
		case 26:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__MAIN_THREAD_CRASHED";
		case 27:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SESSION_ACTIVE_FAIL";
		case 28:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SESSION_REQUEST_FAIL";
		case 29:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SESSION_REQUEST_FAIL_RESULT_FATAL";
		case 30:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__STATE_TIME_OUT";
		case 31:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SEAMLESS_FAILURE";
		case 32:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__NOT_NETWORK_HAVE_ONLINE_PRIVILEGES";
		case 33:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__NOT_NETWORK_IS_SIGNED_ONLINE";
		case 34:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__EVENT_NETWORK_PLAYER_SIGNED_OFFLINE";
		case 35:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__EVENT_NETWORK_NETWORK_BAIL";
		case 36:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__FRAMEWORK_INIT_FAIL";
		case 37:
			return "INTERFACE_ALERT_MSG__NODE_FAIL";
		case 38:
			return "INTERFACE_ALERT_MSG__UGC_DOWNLOAD";
		case 39:
			return "INTERFACE_ALERT_MSG__UGC_PRE_DOWNLOAD";
		case 40:
			return "INTERFACE_ALERT_MSG__INTRO_CRITICAL_FAILURE";
		case 41:
			return "INTERFACE_ALERT_MSG__ONLINE_FLOW_MISMATCH_ON_LOAD";
		case 42:
			return "INTERFACE_ALERT_MSG__ONLINE_FLOW_MISMATCH_ON_WIPE";
		case 43:
			return "INTERFACE_ALERT_MSG__ONLINE_FLOW_VARIANT_AWARD_FAIL";
		case 44:
			return "INTERFACE_ALERT_MSG__ONLINE_ROUTER_CONTEXT_NONE";
		case 45:
			return "INTERFACE_ALERT_MSG__ONLINE_INVITE_FALLBACK";
		case 46:
			return "INTERFACE_ALERT_MSG__ONLINE_INVITE_STARTUP_FAILED";
		case 47:
			return "INTERFACE_ALERT_MSG__ONLINE_ASYNC_FILE_LOAD_FAIL";
		case 48:
			return "INTERFACE_ALERT_MSG__ONLINE_MATCHMAKING_STARTED_DURING_MATCH";
		case 49:
			return "INTERFACE_ALERT_MSG__LANDING_PAGE_NO_DATA";
		case 50:
			return "INTERFACE_ALERT_MSG__LOBBY_FAILED_TO_ENTER";
		case 51:
			return "INTERFACE_ALERT_MSG__STALL_DETECTED";
		case 52:
			return "INTERFACE_ALERT_MSG__PLAYER_MODEL_NOT_SUPPORTED";
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

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "FEED_ERROR_AFK";
		case 2:
			return "FEED_ERROR_STANDBY";
		case 3:
			return "FEED_ERROR_ONLINE_UGC_ACCESS_RESTRICTED";
		case 4:
			return "FEED_ERROR_ONLINE_CREATOR_ACCESS_RESTRICTED";
		case 5:
			return "";
		case 6:
			return "";
		case 7:
			return "";
		case 8:
			return "";
		case 9:
			return "";
		case 10:
			return "";
		case 11:
			return "";
		case 12:
			return "FEED_ERROR_ONLINE_CLOUD";
		case 13:
			return "FEED_ERROR_ONLINE_SAVE_FAILED1";
		case 14:
			return "FEED_ERROR_ONLINE_CI_FAILED__PLAYER_GENDER_FAILED";
		case 16:
			return "FEED_ERROR_ONLINE_CI_FAILED__OUTFIT_COMPONENT_FAILED";
		case 15:
			return "FEED_ERROR_ONLINE_CI_FAILED__OUTFIT_CRITICAL_COMPONENT_FAILED";
		case 17:
			return "FEED_ERROR_ONLINE_CI_FAILED__TOOK_TOO_LONG";
		case 18:
			return "FEED_ERROR_ONLINE_CI_FAILED__TOO_MANY_ATTEMPTS";
		case 19:
			return "FEED_ERROR_ONLINE_CI_FAILED__CASHINVENTORY_IS_CONNECTION_FAULTED";
		case 20:
			return "FEED_ERROR_ONLINE_CI_FAILED__INVENTORY_ROOT_GUID_FAILED";
		case 21:
			return "FEED_ERROR_ONLINE_CI_FAILED__INVENTORY_WEAPON_WHEEL_GUID_FAILED";
		case 22:
			return "FEED_ERROR_ONLINE_CI_FAILED__CRITICAL_AWARD_REQUEST_FAILED";
		case 23:
			return "FEED_ERROR_ONLINE_MUGSHOT_FAILED__CREATOR_MUGSHOT";
		case 24:
			return "FEED_ERROR_SESSION_FAIL";
		case 25:
			return "FEED_ERROR_SESSION_FAIL__SP_THREADS";
		case 26:
			return "FEED_ERROR_SESSION_FAIL__MAIN_THREAD_CRASHED";
		case 27:
			return "FEED_ERROR_SESSION_FAIL__SESSION_ACTIVE_FAIL";
		case 28:
			return "FEED_ERROR_SESSION_FAIL__SESSION_REQUEST_FAIL";
		case 29:
			return "FEED_ERROR_SESSION_FAIL__SESSION_REQUEST_FAIL_RESULT_FATAL";
		case 30:
			return "FEED_ERROR_SESSION_FAIL__STATE_TIME_OUT";
		case 31:
			return "FEED_ERROR_SESSION_FAIL__SEAMLESS_FAILURE";
		case 32:
			return "FEED_ERROR_SESSION_FAIL__NOT_NETWORK_HAVE_ONLINE_PRIVILEGES";
		case 33:
			return "FEED_ERROR_SESSION_FAIL__NOT_NETWORK_IS_SIGNED_ONLINE";
		case 34:
			return "FEED_ERROR_SESSION_FAIL__EVENT_NETWORK_PLAYER_SIGNED_OFFLINE";
		case 35:
			return "FEED_ERROR_SESSION_FAIL__EVENT_NETWORK_NETWORK_BAIL";
		case 36:
			return "FEED_ERROR_SESSION_FAIL__FRAMEWORK_INIT_FAIL";
		case 37:
			return "FEED_ERROR_NODE_FAIL";
		case 38:
			return "FEED_ERROR_UGC_DOWNLOAD";
		case 39:
			return "FEED_ERROR_UGC_PRE_DOWNLOAD";
		case 40:
			return "FEED_ERROR_INTRO_CRITICAL_FAILURE";
		case 41:
			return "FEED_ERROR_ONLINE_FLOW_MISMATCH_ON_LOAD";
		case 42:
			return "FEED_ERROR_ONLINE_FLOW_MISMATCH_ON_WIPE";
		case 43:
			return "FEED_ERROR_ONLINE_FLOW_VARIANT_AWARD_FAIL";
		case 44:
			return "FEED_ERROR_ONLINE_ROUTER_CONTEXT_NONE";
		case 45:
			return "FEED_ERROR_ONLINE_INVITE_FALLBACK";
		case 46:
			return "FEED_ERROR_ONLINE_INVITE_FALLBACK";
		case 47:
			return "FEED_ERROR_ONLINE_ASYNC_FILE_LOAD_FAIL";
		case 48:
			return "FEED_ERROR_ONLINE_MATCHMAKING_STARTED_DURING_MATCH";
		case 49:
			return "FEED_ERROR_LANDING_PAGE_NO_DATA";
		case 50:
			return "FEED_ERROR_LOBBY_FAILED_TO_ENTER";
		case 51:
			return "FEED_ERROR_STALL_DETECTED";
		case 52:
			return "FEED_ERROR_PLAYER_MODEL_NOT_SUPPORTED";
	}
	return "";
}

char* func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ROUTER_CONTEXT_NONE";
		case 1:
			return "ROUTER_CONTEXT_INTERFACE";
		case 2:
			return "ROUTER_CONTEXT_SP";
		case 3:
			return "ROUTER_CONTEXT_MP";
		case 4:
			return "ROUTER_CONTEXT_TLG";
		case 5:
			return "ROUTER_CONTEXT_CLIP";
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

