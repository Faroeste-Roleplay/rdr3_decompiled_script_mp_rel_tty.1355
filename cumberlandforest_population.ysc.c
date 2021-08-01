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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	func_3();
	func_4();
	bVar0 = true;
	while (bVar0)
	{
		if (func_5() != -1)
		{
			Global_1896634.f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896634.f_42);
			if (func_6(1, 1))
			{
				bVar0 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_7();
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
		func_7();
		DEBUG::_0xF0783374333FD8CE(8, 17, "Force Cleanup called on this thread. Single Player.");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(352.5f, 1492.5f, 160f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volOldFortWallace_Restriction");
	func_8(iLocal_15);
	iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBacchusStation_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_16, 576.5f, 1692.5f, 190f, 0f, 0f, -45f, 40f, 22f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_16, 565f, 1713f, 190f, 0f, 0f, 0f, 33f, 33f, 15f);
	func_9(iLocal_16, 0, 0);
	iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_17, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	func_10(iLocal_17, 0, 0);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_11(iLocal_18);
}

void func_3()
{
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volThreatVolume Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 343.4911f, 1484.906f, 183.6585f, 0f, 0f, 125.4594f, 50.44129f, 27.58693f, 15.20348f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 366.8338f, 1481.555f, 183.3052f, 0f, 0f, 70.84903f, 9.450991f, 11.24788f, 14.86582f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 361.6927f, 1499.326f, 183.0759f, 0f, 0f, 14.50761f, 15.72725f, 35.53953f, 16.71587f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 327.8768f, 1483.835f, 182.8865f, 0f, 0f, -11.76057f, 17.00056f, 10.34268f, 16.34857f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 319.2722f, 1495.286f, 184.5413f, 0f, 0f, -53.96134f, 23.05555f, 18.03384f, 21.16078f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 320.7645f, 1509.291f, 188.6127f, 0f, 0f, -25.21897f, 4.516489f, 7.110216f, 18.25474f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 324.6142f, 1502.853f, 184.9036f, 0f, 0f, -24.95285f, 14.96967f, 13.84794f, 21.22798f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 350.3736f, 1501.781f, 184.2531f, 0f, 0f, 33.49929f, 9.61958f, 30.69061f, 13.84341f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 352.1387f, 1513.729f, 182.7722f, 0f, 0f, 24.7492f, 10.80241f, 11.25904f, 15.89185f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 355.6973f, 1518.419f, 184.7034f, 0f, 0f, 0f, 1.984145f, 5.500231f, 12.25786f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 357.9312f, 1517.985f, 184.7034f, 0f, 0f, -16.95034f, 4.391377f, 5.500231f, 12.25786f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_19, 362.5482f, 1516.343f, 182.8423f, 0f, 0f, 0f, 3.488632f, 3.541783f, 9.602388f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_19, 366.5602f, 1473.809f, 182.5569f, 0f, 0f, 0f, 4f, 4f, 7.516581f);
	iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRegistrationVolume Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_20, iLocal_19);
	VOLUME::_0xBCE668AAF83608BE(iLocal_20, 345.1969f, 1487.955f, 182.5569f, 0f, 0f, 0f, 63.65347f, 68.76788f, 13.83329f);
	sLocal_21 = "OLD_FORT_WALLACE";
	LAW::_CREATE_GUARD_ZONE(sLocal_21);
	LAW::_0x8C598A930F471938(sLocal_21, iLocal_20);
	LAW::_0xA1B0E6301E2E02A6(sLocal_21, iLocal_19);
	LAW::_0x35815F372D43E1E5(sLocal_21, iLocal_19);
	LAW::_0xAD3E07C37A7C1ADC(sLocal_21, iLocal_19);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_21, 346.9555f, 1488.217f, 182.0683f);
	LAW::_0xA8A74AA79FB67159(sLocal_21, iLocal_19);
}

void func_4()
{
	func_12(160425541, 1);
	func_12(-1127035680, 1);
}

int func_5()
{
	return Global_1572887.f_13;
}

bool func_6(bool bParam0, bool bParam1)
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

void func_7()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_21);
}

void func_8(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 86, "Trying to add a new restriction with a volume that doesn't exist!");
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, false, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
}

void func_9(int iParam0, int iParam1, bool bParam2)
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
		func_14(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
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
		func_14(&iParam1, 8192);
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
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, false, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, false, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
}

void func_12(bool bParam0, int iParam1)
{
	func_15(bParam0, 1, 0, 0, 0, 0, 0, 0);
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

void func_14(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_16(bParam0, 0, 0);
	if (func_17(bParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(bParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(bParam0, fParam5);
		}
		if (bParam3)
		{
			func_18(bParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_19(bParam0, 1);
				UNK_0x355E72323AEE83CC(183, 9);
				DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Locking Door ID ", func_20(bParam0, 0));
			}
			else
			{
				func_21(bParam0, 1);
				UNK_0x355E72323AEE83CC(183, 9);
				DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Locking and making unbreakable Door ID ", func_20(bParam0, 0));
			}
		}
		else
		{
			func_22(bParam0, 1);
			UNK_0x355E72323AEE83CC(183, 9);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Unlocking Door ID ", func_20(bParam0, 0));
		}
		if (bParam7)
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 183, "SET_STATE_OF_DOOR_ID - Treating Door ID ", func_20(bParam0, 0), " as shut.");
			OBJECT::_0x276AAF0F1C7F2494(bParam0, 1);
		}
	}
	else if (func_23())
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "SET_STATE_OF_DOOR_ID - Invalid Door ID");
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		DEBUG::_0xA308F935BDECCEC0(40, 183, "SET_STATE_OF_DOOR_ID: Door with ID not registered by host yet ", func_20(bParam0, 0));
	}
}

bool func_16(bool bParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_20(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, false, false, 0, 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add Door ", func_20(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(bParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_20(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(bParam0, 1);
		DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Set door ", func_20(bParam0, 0), " able to change open ratio while locked");
		UNK_0x355E72323AEE83CC(183, 7);
	}
	return bParam0;
}

bool func_17(bool bParam0)
{
	if (func_24(bParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0);
	}
	return false;
}

void func_18(bool bParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (func_17(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 1);
		}
		DEBUG::_0xA308F935BDECCEC0(24, 183, "HOLD_DOOR_OPEN: Successfully holding door open at ratio: ", sParam1);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(bParam0, sParam1, bParam3);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "HOLD_DOOR_OPEN - Invalid Door ID");
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (func_17(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 2);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "LOCK_DOOR_ID - Locking Door ID ", func_20(bParam0, 0));
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "LOCK_DOOR - Invalid Door ID");
	}
}

var func_20(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-411541292);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_21(bool bParam0, bool bParam1)
{
	if (func_17(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 1 || bParam1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(2216, 183, "SET_DOOR_ID_LOCKED_AND_UNBREAKABLE - Door ID ", func_20(bParam0, 0), " state = ", OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0), " pending state ", UNK_0x4BC2854478F3A749(bParam0));
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 1);
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "SET_DOOR_ID_LOCKED_AND_UNBREAKABLE - Invalid Door ID");
	}
}

void func_22(bool bParam0, bool bParam1)
{
	if (func_17(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 0);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "UNLOCK_DOOR_ID - Unlocking Door ID ", func_20(bParam0, 0));
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "UNLOCK_DOOR - Invalid Door ID");
	}
}

bool func_23()
{
	return true;
}

bool func_24(bool bParam0)
{
	return bParam0 != 0;
}

