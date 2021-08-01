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
	bool bLocal_19 = false;
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
		if (!bLocal_19)
		{
			if (func_5() || !func_6())
			{
				func_7(joaat("TUM_BARN_INT_DOOR_01"), 0, 1f, 1, 1, 0, 0, 0);
				func_7(joaat("TUM_BARN_INT_DOOR_02"), 0, -1f, 1, 1, 0, 0, 0);
				bLocal_19 = true;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_8();
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
		func_8();
		DEBUG::_0xF0783374333FD8CE(8, 17, "Force Cleanup called on this thread. Single Player.");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTumbleweed_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, -5534.95f, -2962.377f, 38.52466f, 0f, 0f, 40.25f, 100f, 100f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, -5620.958f, -2940.959f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, -5523.102f, -3041.372f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, -5486.511f, -2894.654f, 32.69263f, 0f, 0f, 0f, 75f, 75f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, -5426.396f, -2936.432f, 32.69263f, 0f, 0f, 0f, 43f, 25f, 50f);
	func_9(iLocal_15);
	iLocal_16 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5193.5f, -2122f, 17f, 0f, 0f, 45f, 87f, 77f, 25f, "m_volRathskellerFork_Restriction");
	func_10(iLocal_16, 0, 0);
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5409.035f, -3657.266f, -14.49665f, 0f, 0f, -24f, 36f, 30f, 30f, "m_volAbandonedBarn_Restriction");
	func_11(iLocal_17, 0, 0);
	iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5841.081f, -3740.558f, -25.90157f, 0f, 0f, 119.5362f, 24.82908f, 46.70603f, 12.83437f, "m_volScratchingPostAquatic_Restriction");
	func_12(iLocal_18);
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

bool func_5()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_6()
{
	return func_15(func_14(0));
}

void func_7(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_8()
{
}

void func_9(int iParam0)
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

void func_10(int iParam0, int iParam1, bool bParam2)
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
		func_24(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0, int iParam1, bool bParam2)
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
		func_24(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_12(int iParam0)
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

struct<2> func_14(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_15(struct<2> Param0)
{
	return func_25(Param0, 9, 12);
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
	if (func_26(bParam0))
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

void func_24(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_25(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_27(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_28(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_26(bool bParam0)
{
	return bParam0 != 0;
}

bool func_27(struct<2> Param0)
{
	if (!func_29(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_30(Param0))
	{
		return false;
	}
	return true;
}

int func_28(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_31(Param0);
	}
	return -1;
}

bool func_29(int iParam0)
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

int func_30(int iParam0)
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

int func_31(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_32(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_32(struct<2> Param0, int iParam2)
{
	if (!func_27(Param0))
	{
		return false;
	}
	func_33(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, &(Global_1072032.f_640[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(iParam2, &(Global_1072032.f_640.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(iParam2, &(Global_1072032.f_640.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(iParam2, &(Global_1072032.f_640.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(iParam2, &(Global_1072032.f_640.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(iParam2, &(Global_1072032.f_640.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(iParam2, &(Global_1072032.f_640.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

void func_33(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

