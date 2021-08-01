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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		if (func_3() != -1)
		{
			Global_1896634.f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896634.f_42);
			if (func_4(1, 1))
			{
				bVar0 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 17, "Someone called force clean up on this thread while in MP.  DON'T DO THAT!");
		}
		func_5();
		DEBUG::_0xF0783374333FD8CE(8, 17, "Force Cleanup called on this thread. Single Player.");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(4150f, -3650f, 105f, 0f, 0f, 0f, 95f, 95f, 35f, "m_volTemple_Restriction");
	func_6(iLocal_15);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3935f, -3340f, 65f, 0f, 0f, 0f, 125f, 125f, 35f, "m_volVilla_Restriction");
	func_6(iLocal_16);
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3900f, -3200f, 60f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volLightHouse_Restriction");
	func_6(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3910f, -3820f, 65f, 0f, 0f, 42f, 100f, 70f, 35f, "m_volManicato_Restriction");
	func_6(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquatic_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1198.392f, -6996.118f, 40.56991f, 0f, 0f, -13.19622f, 107.2032f, 48.4901f, 16.01354f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1122.764f, -6966.072f, 41.7932f, 0f, 0f, -13.23685f, 54.31777f, 34.31042f, 13.34025f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_19, 1061.422f, -6968.24f, 41.39648f, 0f, 0f, 0f, 46.10505f, 24.56085f, 7.935126f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1004.815f, -6902.04f, 40.91697f, 0f, 0f, 22.01897f, 20.89131f, 114.5361f, 13.15669f);
	func_7(iLocal_19);
}

int func_3()
{
	return Global_1572887.f_13;
}

bool func_4(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_8(Global_1572887, 0), ", so skipping");
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

void func_5()
{
}

void func_6(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 86, "Trying to add a new restriction with a volume that doesn't exist!");
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, false, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
}

void func_7(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 86, "Trying to add a new restriction with a volume that doesn't exist!");
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228767, 0, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228767, 0, false, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, iParam0);
}

char* func_8(int iParam0, int iParam1)
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

