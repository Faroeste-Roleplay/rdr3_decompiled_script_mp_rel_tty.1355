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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	func_3();
	bVar0 = true;
	while (bVar0)
	{
		if (func_4() != -1)
		{
			Global_1896634.f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896634.f_42);
			if (func_5(1, 1))
			{
				bVar0 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_6();
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
		func_6();
		DEBUG::_0xF0783374333FD8CE(8, 17, "Force Cleanup called on this thread. Single Player.");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1765f, -1365f, 50f, 0f, 0f, 20f, 30f, 30f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1752.5f, -1332.5f, 50f, 0f, 0f, 7f, 100f, 150f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1850f, -1330f, 50f, 0f, 0f, 169f, 150f, 250f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1650f, -1465f, 50f, 0f, 0f, 26f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1647.5f, -1377.5f, 50f, 0f, 0f, 9f, 200f, 100f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1592.5f, -1282.5f, 50f, 0f, 0f, -2f, 100f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1660f, -1300f, 50f, 0f, 0f, 50f, 100f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1705f, -1532.5f, 50f, 0f, 0f, 53f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1810f, -1485f, 50f, 0f, 0f, 115f, 250f, 175f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1927.5f, -1447.5f, 50f, 0f, 0f, 146f, 150f, 175f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1975f, -1342.5f, 50f, 0f, 0f, 170f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1750f, -1582.5f, 50f, 0f, 0f, 86f, 100f, 75f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, 1977.5f, -1300f, 50f, 0f, 0f, 147f, 135f, 100f, 40f);
	func_7(iLocal_16);
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2090f, -1817.5f, 39f, 0f, 0f, 0f, 18f, 18f, 10f, "m_volCrawdadWilliesRestriction");
	func_7(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2125.35f, -597.55f, 45f, 0f, 0f, 45f, 50f, 70f, 10f, "m_volLagrasRestriction");
	POPULATION::_0xB56D41A694E42E86(iLocal_18, 4295, 4210688, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_18, 4295, 4210688, false, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(4295, 4210688, 0, -1, -1, iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakayRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_19, 2252.5f, -762.5f, 45f, 0f, 0f, 0f, 40f, 40f, 10f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_19, 2288f, -723f, 45f, 0f, 0f, -40f, 12f, 15f, 10f);
	func_7(iLocal_19);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2011.9f, -840.7f, 44.7f, 0f, 0f, 0f, 98.7f, 64.1f, 10f, "m_volOrangePlantationRestriction");
	func_7(iLocal_20);
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisFountainAquaticRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 2331.869f, -1216.261f, 45.5096f, 0f, 0f, 0f, 18f, 9f, 5f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 2401.408f, -1036.954f, 43.69143f, 0f, 0f, 0f, 3.15f, 3.15f, 3.297321f);
	func_8(iLocal_21, 512, 0);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisNorthShacksRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 2352.919f, -862.3568f, 45f, 0f, 0f, 18f, 7.5f, 7.5f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 2352.267f, -854.82f, 45f, 0f, 0f, 36f, 10f, 10f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 2370.363f, -861.704f, 45f, 0f, 0f, 21f, 15f, 20f, 30f);
	func_8(iLocal_22, 0, 0);
	iLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1789.165f, -815.8882f, 51f, 0f, 0f, 0f, 12.5f, 12.5f, 15f, "m_volBoardedHouseRestriction");
	func_9(iLocal_23, 0, 0);
	iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volMacombsEndRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1881.904f, -773.9849f, 50f, 0f, 0f, 0f, 24f, 10f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1884.927f, -749.2661f, 50f, 0f, 0f, 0f, 30f, 40f, 30f);
	func_9(iLocal_24, 0, 0);
	iLocal_25 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50f, 0f, 0f, 71.44212f, 52.13922f, 102.3606f, 40f, "m_volMeatFacotryRestriction");
	func_8(iLocal_25, 0, 0);
	iLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0f, 0f, -39f, 61f, 40f, 30f, "m_volShadyBelleCampRestriction");
	func_8(iLocal_26, 0, 0);
	iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisRuralHouse");
	VOLUME::_0x39816F6F94F385AD(iLocal_27, 2557.442f, -913.5541f, 43.8437f, 0f, 0f, 25.86927f, 21.31003f, 16.89607f, 13.63585f);
	VOLUME::_0x39816F6F94F385AD(iLocal_27, 2531.764f, -930.9406f, 41.67561f, 0f, 0f, 25.86927f, 19.01398f, 16.50291f, 13.63585f);
	VOLUME::_0x39816F6F94F385AD(iLocal_27, 2508.388f, -936.4707f, 43.20302f, 0f, 0f, 25.86927f, 10.15781f, 10.6119f, 10.52294f);
	func_10(iLocal_27, 0, 0);
	iLocal_28 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquaticRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2051.69f, -1716.667f, 45.47638f, 0f, 0f, -22.36101f, 43.12104f, 125.3801f, 18.72456f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2212.785f, -513.7505f, 42.64256f, 0f, 0f, 7.584539f, 120.1986f, 73.42303f, 13.12508f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2123.317f, -450.1633f, 42.35445f, 0f, 0f, 19.19169f, 52.02959f, 103.7867f, 11.12478f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 1774.63f, -754.3323f, 40.5518f, 0f, 0f, -48.02472f, 41.93194f, 15.1102f, 8.930059f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2079.136f, -508.0375f, 40.54353f, 0f, 0f, 32.83384f, 30.26976f, 12.10188f, 4.106483f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2072.09f, -541.5287f, 41.15696f, 0f, 0f, -50.04893f, 49.11419f, 29.08003f, 4.101138f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 1961.46f, -546.4242f, 41.59623f, 0f, 0f, 39.87652f, 7.433012f, 46.59014f, 14.38113f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 1943.024f, -490.1118f, 41.59623f, 0f, 0f, 7.680464f, 8.796555f, 80.45963f, 14.38113f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 1940.411f, -433.7933f, 41.75349f, 0f, 0f, -9.29702f, 7.885364f, 34.76966f, 14.38113f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2116.133f, -512.6361f, 40.47285f, 0f, 0f, -9.836303f, 46.08441f, 5.162654f, 4.285973f);
	func_11(iLocal_28);
}

void func_3()
{
}

int func_4()
{
	return Global_1572887.f_13;
}

bool func_5(bool bParam0, bool bParam1)
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

void func_6()
{
}

void func_7(int iParam0)
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

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 86, "Trying to add a new restriction with a volume that doesn't exist!");
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, false, -1, -1, 0);
	if (bParam2)
	{
		func_13(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 86, "Trying to add a new restriction with a volume that doesn't exist!");
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, false, -1, -1, 0);
	if (bParam2)
	{
		func_13(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 86, "Trying to add a new restriction with a volume that doesn't exist!");
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, false, -1, -1, 0);
	if (bParam2)
	{
		func_13(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0)
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

void func_13(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

