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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "Terminating Handheld Catalogue Early!!");
		func_1(joaat("CLOSING"));
	}
	if (Global_1572887.f_13 != 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 139, "@@ shop_handheld_event_handler.sc: THIS SHOULD NOT LAUNCH IN SP. PLEASE BUG DEFAULT DESIGN. Exiting...");
		return;
	}
	bVar0 = false;
	while (!func_2(1, 1))
	{
		bVar0 = false;
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			DEBUG::_0xF0783374333FD8CE(8, 139, " @@ NET_SHOP_HANDHELD: Closing... ");
			bVar0 = true;
		}
		if (!Global_1915867.f_22504)
		{
			DEBUG::_0xF0783374333FD8CE(8, 139, " @@ NET_SHOP_HANDHELD: Closing for handheld not ready... ");
			bVar0 = true;
		}
		if (func_3())
		{
			DEBUG::_0xF0783374333FD8CE(8, 139, " @@ NET_SHOP_HANDHELD: Closing for player damaged in the frame... ");
			bVar0 = true;
		}
		if (bVar0)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			func_1(joaat("CLOSING"));
		}
		else
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 407174929))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, " @@ SHOP_JOURNAL: NEED TO RESET VELOCITY HERE ");
				func_4(2);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1543672280))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, " @@ SHOP_JOURNAL: PRESSED NEXT PAGE ");
				func_1(-1543672280);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1441911379))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, " @@ SHOP_JOURNAL: PRESSED PREV PAGE ");
				func_1(-1441911379);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 562684602))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, " @@ SHOP_JOURNAL: PRESSED NEXT SECTION ");
				func_1(562684602);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1275814714))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, " @@ SHOP_JOURNAL: PRESSED PREV SECTION ");
				func_1(-1275814714);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -917343754))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, " @@ SHOP_JOURNAL: NEXT PAGE TURNING COMPLETE.");
				func_1(-917343754);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1308691423))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, " @@ SHOP_JOURNAL: PREV CHAPTER STARTS.");
				func_1(-1308691423);
			}
			BUILTIN::WAIT(0);
		}
	}
	func_1(joaat("CLOSING"));
}

void func_1(bool bParam0)
{
	Global_1915867.f_22504.f_4 = bParam0;
	DEBUG::_0xF0783374333FD8CE(40, 139, "[NET_SHOPS_SET_HANDHELD_EVENT_DATA] Setting event to: ", UNK_0x4379B6FA65D55295(bParam0));
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_5(Global_1572887, 0), ", so skipping");
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

bool func_3()
{
	return Global_1102630.f_3664;
}

void func_4(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 55, "[NET_SHOP_HANDHELD_LOCAL_SET_LAUNCH_FLAG] ", func_6(iParam0, 0));
	Global_1051777.f_3636 = (Global_1051777.f_3636 || iParam0);
}

char* func_5(int iParam0, int iParam1)
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

char* func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NSHL_FLAG_CLEAR";
		case 1:
			return "NSHL_FLAG_LAUNCH_HANDHELD";
		case 2:
			return "NSHL_FLAG_RESET_VELOCITY";
		case 4:
			return "NSHL_FLAG_OPEN_AT_REQUESTED";
		case 8:
			return "NSHL_FLAG_WAIT_FOR_SCENARIO_END";
		case 16:
			return "NSHL_FLAG_FORCE_SHUTDOWN_SCENARIO";
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

