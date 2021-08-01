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
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	fLocal_15 = 7f;
	fLocal_16 = 0f;
	fLocal_17 = 0f;
	fLocal_18 = 100f;
	fLocal_19 = 100f;
	fLocal_20 = 0f;
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
		else
		{
			func_6();
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
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { fLocal_15, fLocal_16, fLocal_17 };
	vVar3 = { fLocal_18, fLocal_19, fLocal_20 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), 2638.8f, 1972.1f, 185.1f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_21 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_8(iLocal_21);
	iLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "m_volAnnesburg_Restriction");
	func_9(iLocal_22);
	iLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2350f, 1370f, 105f, 0f, 0f, 0f, 35f, 35f, 15f, "m_volBeaverHollow_Restriction");
	func_9(iLocal_23);
	iLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2590f, 827.5f, 85f, 0f, 0f, 0f, 80f, 80f, 20f, "m_volButchersCreek_Restriction");
	func_9(iLocal_24);
	iLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2270f, -95f, 45f, 0f, 0f, 0f, 65f, 65f, 15f, "m_volMacleansHouse_Restriction");
	func_8(iLocal_25);
	iLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3085f, 2232.5f, 210f, 0f, 0f, 7f, 130f, 150f, 75f, "m_volRockySeven_Restriction");
	func_10(iLocal_26, 0, 0);
	iLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2965f, 475f, 45f, 0f, 0f, 0f, 75f, 75f, 15f, "m_volTallulahJetty_Restriction");
	func_10(iLocal_27, 0, 0);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2518.25f, 2293f, 185.25f, 0f, 0f, 0f, 40f, 40f, 25f, "m_volTeslaLab_Restriction");
	func_10(iLocal_28, 0, 0);
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2964f, 780f, 52f, 0f, 0f, 0f, 45f, 35f, 25f, "m_volVanHornHorseShop_Restriction");
	func_10(iLocal_29, 0, 0);
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

void func_6()
{
	int iVar0;
	int iVar1;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND"));
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND_2"));
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0) || !PERSCHAR::_0x800DF3FC913355F3(iVar1))
	{
		return;
	}
	if (PERSCHAR::_0xEB98B38CA60742D7(iVar0) && PERSCHAR::_0xEB98B38CA60742D7(iVar1))
	{
		if (!func_12(2024769126))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(516817794, Global_34))
			{
				func_13(2024769126);
			}
		}
	}
	else if (func_12(2024769126))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(516817794, Global_34))
		{
			func_14(2024769126);
		}
	}
}

void func_7()
{
	func_15();
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
}

void func_8(int iParam0)
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
		func_16(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
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

bool func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_17(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_18(iVar1))
	{
		if (Global_1072032.f_19652.f_24 && !func_19(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072032.f_19652[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_114[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_114[iVar1], iVar2);
}

void func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_17(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_38.f_114[iVar1]), iVar2);
	DEBUG::_0xA308F935BDECCEC0(40, 218, "SET_WORLD_STATE_FLAG: setting world state - ", func_20(iParam0, 0));
	Global_1939807 = 0;
}

void func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_17(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_38.f_114[iVar1]), iVar2);
	DEBUG::_0xA308F935BDECCEC0(40, 218, "CLEAR_WORLD_STATE_FLAG: clearing world state - ", func_20(iParam0, 0));
	Global_1939807 = 0;
}

void func_15()
{
	DEBUG::_0xF0783374333FD8CE(8, 17, "CLEANUP_TRN4_WAGON");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_30))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_30);
		VOLUME::_DELETE_VOLUME(iLocal_30);
	}
}

void func_16(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", iParam0, ", returning '-1'");
	}
	return -1;
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", iParam0, ", returning '-1'");
	}
	return -1;
}

bool func_18(int iParam0)
{
	int iVar0;

	iVar0 = func_21(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_19(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

char* func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return "WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01";
		case -2141419899:
			return "WS_MP_TREASURE_MAP_INTRO_VALENTINE_03";
		case -2106445152:
			return "WS_MICAH_HIDEOUT_ABANDON";
		case -2106214197:
			return "WS_RIDE_THE_LIGHTNING_CHAIR";
		case -2101264851:
			return "WS_FAST_TRAVEL_MARKERS";
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return "WS_MP_TREASURE_MAP_EAST_WATSONS_02";
		case -2073072369:
			return "WS_RHODES_SADIE3_COVER_ON";
		case -2069570138:
			return "WS_SHOWS_SD_MOV_01";
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return "WS_MP_FETCH_OTH_TALL_TREES";
		case -2058120606:
			return "WS_CLAY_EXIST";
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return "WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04";
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return "WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK";
		case -2038424081:
			return "WS_COLTER_STAGE_THAWED_SNOW";
		case -2034257789:
			return "WS_HIDEOUT_SIX_POINT_LIGHTS";
		case -2022369555:
			return "WS_GRAND_KORRIGAN_LOW_RAILING";
		case -2021582629:
			return "WS_NBX_BUILDING_FUNDED";
		case -2020023971:
			return "WS_RHODES_BANK_WALL_INTACT";
		case -1957523409:
			return "WS_WAR_VETERAN_WOLF_TROPHY_ON";
		case -1952856164:
			return "WS_BOOBY_TRAP_ROANOKE_01_END";
		case -1949204933:
			return "WS_DEWCLM_DOMINOES_SEATS";
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return "WS_MP_CAMP_DEFEND_RADLEYS_PASTURE";
		case -1939389836:
			return "WS_MP_TREASURE_MAP_INTRO_BLACKWATER_05";
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return "WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04";
		case -1925798111:
			return "WS_CALIGA_HALL_TABACCO_DURING_MISSION";
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return "WS_MP_TREASURE_MAP_BURNT_TOWN_03";
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return "WS_MP_TREASURE_MAP_INTRO_VALENTINE_02";
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return "WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03";
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return "WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE";
		case -1852605133:
			return "WS_SHOWS_SD_VAUD_02";
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return "WS_MP_TREASURE_MAP_INTRO_RHODES_03";
		case -1847672446:
			return "WS_SAINT_DENIS_BOATS_FOUND";
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return "WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04";
		case -1840704908:
			return "WS_SWA_CHAIRS_CINEMATIC";
		case -1838712533:
			return "WS_SHOWS_SD_MOV_02";
		case -1838352012:
			return "WS_RHODES_GRAVE_OPEN";
		case -1835851517:
			return "WS_RHODES_GRAVE_FRESHLY_DUG";
		case -1831552326:
			return "WS_VALENTINE_BANK_WINDOWS";
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return "WS_MP_TREASURE_MAP_CATTAIL_POND_02";
		case -1825294305:
			return "WS_ANTENOR_DOCKED";
		case -1824738758:
			return "WS_GRZ_WEST_CAMP_SITE";
		case -1818850842:
			return "WS_FIN1_DISABLE_VANHORN_FIRE";
		case -1808329564:
			return "WS_MP_TREASURE_MAP_INTRO_RHODES_05";
		case -1799960545:
			return "WS_VALENTINE_BANK_SHUTTERS_CLOSED";
		case -1764522338:
			return "WS_FEUD1_WATER_TOWER_UP";
		case -1763509974:
			return "WS_VALENTINE_LOCKDOWN_SALOON_DOORS";
		case -1753769127:
			return "WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_02";
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return "WS_MP_TREASURE_MAP_HANGING_ROCK_03";
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return "WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04";
		case -1741667789:
			return "WS_RHODES_BANK_LIGHTS_OFF";
		case -1738165526:
			return "WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER";
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return "WS_MP_TREASURE_MAP_OCREAGHS_RUN_03";
		case -1718674470:
			return "WS_SHOWS_SD_MAG_04";
		case -1717960576:
			return "WS_RHODES_SALOON_TABLE_UP";
		case -1711895055:
			return "WS_SHOWS_SD_VAUD_05";
		case -1706438978:
			return "WS_INDUSTRY3_POKER_TABLES";
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return "WS_MP_TREASURE_MAP_BENEDICT_POINT_01";
		case -1700452710:
			return "WS_MP_PROPERTY_LOCATIONS";
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return "WS_MP_TREASURE_MAP_DIABLO_RIDGE_02";
		case -1674179981:
			return "WS_RHODES_GRAVE_NORMAL";
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return "WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03";
		case -1666278201:
			return "WS_GUARMA_RUIN1_FLOOR_INTACT";
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return "WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02";
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return "WS_MP_TREASURE_MAP_BURNT_TOWN_02";
		case -1612662716:
			return "WS_HERE_KITTY_3_CLUE_TRAIL_ON";
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return "WS_MP_HIDEOUT_CUMBERLAND_FALLS";
		case -1608141409:
			return "WS_MP_NET_BEATS_TIED_UP_PED_005";
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return "WS_MP_FORT_WALLACE_DOORS_UNLOCK";
		case -1582926490:
			return "WS_BLACKWATER_LOCKDOWN_SALOON";
		case -1579419919:
			return "WS_BLACKWATER_LOCKDOWN_SALOON_DOORS";
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return "WS_MP_TREASURE_MAP_BRANDYWINE_02";
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return "WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03";
		case -1558439474:
			return "WS_THOMAS_DOWNES";
		case -1556041029:
			return "WS_MP_TREASURE_MAP_INTRO_RHODES_04";
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return "WS_MP_TREASURE_MAP_OCREAGHS_RUN_02";
		case -1532284567:
			return "WS_BEAVER_HOLLOW_HIDEOUT";
		case -1530132748:
			return "WS_CRD_CHIMNEY_OFF";
		case -1524512402:
			return "WS_STRAWBERRY_JAIL_INTACT";
		case -1523910291:
			return "WS_TUMBLEWEED_LOCKDOWN_SALOON_DOORS";
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return "WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03";
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return "WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02";
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return "WS_MP_HIDEOUT_SEA_OF_CORONADO";
		case -1447311849:
			return "WS_MP_LAKAY";
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return "WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04";
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return "WS_MP_TREASURE_MAP_DIABLO_RIDGE_01";
		case -1436021162:
			return "WS_SAVAGE_AFTERMATH_WEEPING_02";
		case -1433686245:
			return "WS_SHOWS_SD_VAUD_04";
		case -1425209566:
			return "WS_ROCKY_SEVEN_ENDLESS";
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return "WS_MP_TREASURE_MAP_EAST_WATSONS_04";
		case -1419919497:
			return "WS_SHOWS_SD_MAG_03";
		case -1414537028:
			return "WS_NO_ANIMALS_GRIZZLIES";
		case -1405998267:
			return "WS_RIDE_THE_LIGHTNING_WAGON";
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return "WS_MP_TREASURE_MAP_HANGING_ROCK_02";
		case -1387772214:
			return "WS_MP_TREASURE_MAP_INTRO_RHODES_01";
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return "WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03";
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return "WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03";
		case -1344601768:
			return "WS_MP_HIDEOUT_HANGING_DOG";
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return "WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04";
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return "WS_MP_HIDEOUT_ROCKY_SEVEN";
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return "WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04";
		case -1329135070:
			return "WS_VALENTINE_LOCKDOWN_SALOON";
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return "WS_MP_TREASURE_MAP_BURNT_TOWN_01";
		case -1311865656:
			return "WS_OLDFORTWALLACE_WALL_BROKEN";
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return "WS_MP_HIDEOUT_QUAKERS_COVE";
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return "WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01";
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return "WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02";
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return "WS_MP_HIDEOUT_THE_LOFT";
		case -1282804314:
			return "WS_ON_THE_RUN_SHACK_HELPED_CONVICT";
		case -1278074582:
			return "WS_SAVAGE_AFTERMATH_WEEPING_01";
		case -1271608261:
			return "WS_UTOPIA_TREE_MISSION";
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return "WS_MP_TREASURE_MAP_BENEDICT_POINT_03";
		case -1257057567:
			return "WS_SHOWS_SD_MAG_02";
		case -1241340344:
			return "WS_GRAVE_SUSAN";
		case -1236261996:
			return "WS_VALENTINE_JAIL_INTACT";
		case -1232809834:
			return "WS_STD_GALA_BALCONY_HIGH_MEM";
		case -1230112817:
			return "WS_SAVAGE_AFTERMATH_LAST_WORDS_03";
		case -1223121209:
			return "WS_VALENTINE_BURIAL_DRUNK";
		case -1215445344:
			return "WS_VALENTINE_LOCKDOWN_BANK";
		case -1209597203:
			return "WS_MP_HIDEOUT_TWIN_ROCKS";
		case -1206122982:
			return "WS_VAN_HORN_LOCKDOWN_SALOON";
		case -1187950766:
			return "WS_COLTER_STAGE_CABIN_BURNING";
		case -1181950077:
			return "WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_04";
		case -1179948750:
			return "WS_VALENTINE_LOCKDOWN_JAIL";
		case -1170496998:
			return "WS_COLTER_STAGE_FIRES_LIT";
		case -1164215952:
			return "WS_RHODES_JAIL_INTACT";
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return "WS_MP_CAMP_DEFEND_BLUEWATER_MARSH";
		case -1151084372:
			return "WS_VALENTINE_SALOON_WINDOWS";
		case -1145519186:
			return "WS_UTOPIA_TREE_STUMP";
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return "WS_MP_JAIL_DOORS_BLACKWATER_LOCK";
		case -1124061431:
			return "WS_STRAWBERRY_HOUSE_STAGE_1";
		case -1123615607:
			return "WB_DISCO_ALCHEMIST_HOUSE";
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return "WS_MP_TREASURE_MAP_CALUMET_RAVINE_03";
		case -1095341658:
			return "WS_MP_TREASURE_MAP_INTRO_RHODES_02";
		case -1080627546:
			return "WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE";
		case -1077783786:
			return "WS_GUARMA3_ARTILLERY_01_DESTROYED";
		case -1063147448:
			return "WS_SAINT_DENIS_LOCKDOWN_SALOON_DOORS";
		case -1062490780:
			return "WS_ORCHIDS_APPLESEED";
		case -1060078174:
			return "WS_CHELONIAN_CAMP";
		case -1056767524:
			return "WS_PRONGHORN_RANCH_FENCE_FIXED";
		case -1053549743:
			return "WS_RHODES_GRAYS3_COVER_ON";
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return "WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE";
		case -1029225159:
			return "WS_RIDE_THE_LIGHTNING_BARRELS";
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return "WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03";
		case -1014145132:
			return "WS_SWA_CHAIRS_REGULAR";
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return "WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04";
		case -978957786:
			return "WS_THIEVES_LANDING_BOAT";
		case -959357075:
			return "WS_OLDFORTWALLACE_WALL_BROKEN_NTS3";
		case -950054349:
			return "WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS";
		case -947815572:
			return "WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_03";
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return "WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03";
		case -939420910:
			return "WS_COLTER_STAGE_WINTER1_INTRO";
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return "WS_MP_TREASURE_MAP_BENEDICT_POINT_04";
		case -925071604:
			return "WS_MP_NET_BEATS_TIED_UP_PED_008";
		case -919512195:
			return "WS_CALIGA_HALL_TABACCO_START";
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return "WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW";
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return "WS_MP_HIDEOUT_CUERA_SECO";
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return "WS_MP_TREASURE_MAP_LITTLE_CREEK_04";
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return "WS_MP_FETCH_OTH_SHEPHERDS_RISE";
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return "WS_MP_CAMP_DEFEND_TALL_TREES";
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return "WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01";
		case -879507474:
			return "WS_LAK_BUNKHOUSE_SHOOT_THROUGH";
		case -868076593:
			return "WS_HIDEOUT_SHADY_BELLE_INACTIVE";
		case -857964358:
			return "WS_HIDEOUT_HANGING_DOG_INACTIVE";
		case -853383233:
			return "WS_RHODES_SHERIFF_LOCKED";
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return "WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04";
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return "WS_MP_HIDEOUT_CHOLLA_SPRINGS";
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return "WS_MP_TREASURE_MAP_BARDS_CROSSING_03";
		case -828139293:
			return "WS_BACCHUS_BRIDGE_DESTROYED";
		case -812641169:
			return "WS_MP_NET_BEATS_TIED_UP_PED_001";
		case -811637947:
			return "WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER";
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return "WS_MP_TREASURE_MAP_LAKE_ISABELLA_01";
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return "WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02";
		case -796902762:
			return "WS_HIDEOUT_TWIN_ROCKS_INACTIVE";
		case -792853067:
			return "WS_SHADY_BELLE_DOMINO_SEATS";
		case -789397228:
			return "WS_GRAND_KORRIGAN_HIDE_ON_WATER";
		case -785605431:
			return "WS_SAINTDENIS_BOAT";
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return "WS_MP_INTRO_HIDEOUT_RHODES";
		case -764163380:
			return "WS_NEW_COM_BANK_VAULT_RF";
		case -748969569:
			return "WS_TAXIDERMY_NOTICES";
		case -741351766:
			return "WS_RHODES_SALOON_POST_BRAITHWAITES";
		case -736853952:
			return "WS_SEAN_1_TENT";
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return "WS_MP_HIDEOUT_OLD_BACCHUS_PLACE";
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return "WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02";
		case -699277634:
			return "WS_BRAITHWAITES_3_ACTIVE";
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return "WS_MP_HIDEOUT_FORT_RIGGS";
		case -683458244:
			return "WS_RARE_FISH_CABIN_END";
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return "WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02";
		case -666014935:
			return "WS_VAN_HORN_LOCKDOWN_SALOON_DOORS";
		case -664512648:
			return "WS_RHODES_ENDLESS_SUMMER";
		case -664252410:
			return "WS_GUARMA3_TOWER_FRAG";
		case -644722288:
			return "WS_RHODES_FENCE_OPEN";
		case -640663440:
			return "WS_MP_EVENT_AREAS";
		case -639037538:
			return "WS_BEECHERS_HOUSE_ABIGAIL3";
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return "WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04";
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return "WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK";
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return "WS_MP_TREASURE_MAP_LAKE_ISABELLA_02";
		case -628542779:
			return "WS_VALENTINE_GENSTORE_LIGHTS_OFF";
		case -622554983:
			return "WS_NATIVE1_ARMY_CAMP";
		case -618620429:
			return "WS_BEECHERS_HOUSE_FULLY_DECORATED";
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return "WS_MP_TREASURE_MAP_EAST_WATSONS_03";
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return "WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH";
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return "WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02";
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return "WS_MP_TREASURE_MAP_KAMASSA_RIVER_04";
		case -554519756:
			return "WS_MP_NET_BEATS_TIED_UP_PED_002";
		case -545450213:
			return "WS_BGV_SHACK_LADDER_DOWN";
		case -538889627:
			return "WS_PRONGHORN_RANCH_EXIST";
		case -538880323:
			return "WS_PRONGHORN_RANCH_EMPTY";
		case -534215902:
			return "WS_VALENTINE_SALOON_BED_BLOODY";
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return "WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE";
		case -524145696:
			return "WS_SHADY_BELLE_HIDEOUT";
		case -523522517:
			return "WS_POST_CARAVAN_SHADY";
		case -515561750:
			return "WS_VALENTINE_SHOOTOUT";
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return "WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN";
		case -503955743:
			return "WS_FLAG_BRONTE_ADD_SP_DRESSING";
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return "WS_MP_INTRO_JESSICA_CAMP_BLACKWATER";
		case -502324015:
			return "WS_DOWNS_RANCH_REPOPULATED";
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return "WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03";
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return "WS_MP_TREASURE_MAP_BARDS_CROSSING_02";
		case -491981251:
			return "WS_BEECHERS_HOUSE_DECORATED";
		case -489737721:
			return "WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_05";
		case -468693731:
			return "WS_NBX_MAUSOLEUM_PLUNDERED";
		case -464836488:
			return "WS_LONE_MULE_CELLAR_DOORS_OPEN";
		case -460024530:
			return "WS_MP_HIDEOUT_MILLESANI_CLAIM";
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return "WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03";
		case -441204543:
			return "WS_MP_FME_WK_FIL_BOAT";
		case -434590080:
			return "WS_NEW_COM_BANK_SHOOTOUT";
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return "WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03";
		case -404698347:
			return "WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP";
		case -397760715:
			return "WS_VALENTINE_LOCKDOWN_SALOON_SLUMS_DOORS";
		case -396624371:
			return "WS_MP_HIDEOUT_CAMP_CHOLLA";
		case -389056691:
			return "WS_WAPITI_TENT_OPEN";
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return "WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03";
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return "WS_MP_CAMP_DEFEND_HENNIGANS_STEAD";
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return "WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01";
		case -360036154:
			return "WS_MOB3_TROLLEY_DAMAGE";
		case -356975260:
			return "WS_SERIAL_KILLER_CABIN_OPEN";
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return "WS_MP_HIDEOUT_REPENTANCE";
		case -350863510:
			return "WS_BOOBY_TRAP_GUAMA_01";
		case -349064220:
			return "WS_POST_CARAVAN_HORSESHOE";
		case -334729750:
			return "WS_WATSON_GRAVE";
		case -333135263:
			return "WS_SISIKA_WINDOW_COVER";
		case -330120947:
			return "WS_MP_SDS_WELL_COVER";
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return "WS_MP_TREASURE_MAP_KAMASSA_RIVER_03";
		case -311373772:
			return "WS_MP_NET_BEATS_TIED_UP_PED_006";
		case -306246697:
			return "WS_VANHORN_BOATS_FOUND";
		case -299522880:
			return "WS_MP_STRAWBERRY_DR_MILO";
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return "WS_MP_TREASURE_MAP_BRANDYWINE_01";
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return "WS_MP_JAIL_DOORS_VALENTINE_LOCK";
		case -270094635:
			return "WS_NEW_MRK_04_HIDEFORIND3";
		case -261141318:
			return "WS_DISCO_DEAD_SNAKE";
		case -259123672:
			return "WS_STRAWBERRY_HOUSE_STAGE_3";
		case -254562075:
			return "WS_VALENTINE_LOCKDOWN_DOCTOR";
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return "WS_MP_TREASURE_MAP_BARDS_CROSSING_01";
		case -238080464:
			return "WS_VALENTINE_WAGON";
		case -233743613:
			return "WS_CLM_DOMINOES_LANTERN";
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return "WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02";
		case -223469678:
			return "WS_HERE_KITTY_WAGONS_PART_FIXED";
		case -220282381:
			return "WS_VALENTINE_LOCKDOWN_RESTAURANT";
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return "WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04";
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return "WS_MP_JAIL_DOORS_VALENTINE_UNLOCK";
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return "WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02";
		case -191424539:
			return "WS_RHODES_LOCKDOWN_SALOON_DOORS";
		case -182889087:
			return "WS_PRONGHORN_RANCH_BURNED";
		case -154581735:
			return "WS_RID_CHIMNEY_OFF";
		case -150493654:
			return "WS_UTOPIA_TREE_STANDING";
		case -129643890:
			return "WS_SHOWS_SD_VAUD_03";
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return "WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02";
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return "WS_MP_HIDEOUT_FARMHOUSE";
		case -108307814:
			return "WS_DISCO_LOVE_MESSAGE_HEARTLAND";
		case -102827640:
			return "WS_MP_TREASURE_MAP_INTRO_VALENTINE_01";
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return "WS_MP_TREASURE_MAP_LITTLE_CREEK_02";
		case -99303535:
			return "WS_BOOBY_TRAP_ROANOKE_02_END";
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return "WS_MP_TREASURE_MAP_KAMASSA_RIVER_02";
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return "WS_MP_TREASURE_MAP_BENEDICT_POINT_02";
		case -86199844:
			return "WS_ARMADILLO_LOCKDOWN_SALOON_DOORS";
		case -80522843:
			return "WS_TUMBLEWEED_LOCKDOWN_SALOON";
		case -76237062:
			return "WS_TRAINROB1_SHOOTOUT";
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return "WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04";
		case -75024673:
			return "WS_VALENTINE_GENSTORE_ACTIVE";
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return "WS_MP_TREASURE_MAP_BURNT_TOWN_04";
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return "WS_MP_TREASURE_MAP_CITADEL_ROCK_04";
		case -63926460:
			return "WS_HIDEOUT_HANGING_DOG_ENDLESS";
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return "WS_MP_HIDEOUT_COLTER";
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return "WS_MP_TREASURE_MAP_DIABLO_RIDGE_03";
		case -35658630:
			return "WS_SHOWS_SD_MAG_05";
		case -25901845:
			return "WS_FIN2_EXT_P19_FRAMES";
		case -9438024:
			return "WS_VALENTINE_HOTEL_CURTAINS_MUD3";
		case -1:
			return "WS_WORLD_STATE_INVALID";
		case 0:
			return "WS_BRAITHWAITE_MANSION_INTACT";
		case 2639906:
			return "WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS_DOORS";
		case 8924991:
			return "WS_GRAVE_HOSEA";
		case 16844748:
			return "WS_MP_TREASURE_MAP_INTRO_VALENTINE_04";
		case 26054262:
			return "WS_FLAG_BRONTE_ADD_MP_DRESSING";
		case 26245360:
			return "WS_VALENTINE_SHOOTOUT_START";
		case 38162571:
			return "WS_LIGHT_ANIMALS_GRIZZLIES";
		case 52706132:
			return "WS_STRAWBERRY_HOUSE_STAGE_2";
		case 54073871:
			return "WS_NORMAL_ANIMALS_GRIZZLIES";
		case 61537448:
			return "WS_MP_NET_BEATS_TIED_UP_PED_007";
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return "WS_MP_CAMP_DEFEND_NEW_HANOVER";
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return "WS_MP_INTRO_HIDEOUT_TUMBLEWEED";
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return "WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01";
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return "WS_MP_FETCH_OTH_CASTORS";
		case 94263042:
			return "WS_MICAH_HIDEOUT";
		case 106479759:
			return "WS_UTP1_COVER01";
		case 141950038:
			return "WS_STD_DOCTORS_OFFICE";
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return "WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01";
		case 153152452:
			return "WS_HIDEOUT_SMUGGLER_DOCKS_INACTIVE";
		case 168171957:
			return "WS_BEECHERS_HOUSE_FINISHED";
		case 171499483:
			return "WS_ROANOKE_BOOBY_TRAP_HOLES";
		case 187862543:
			return "WS_SHOWS_VAL_MAG_03";
		case 192515737:
			return "WS_SHOWS_VAL_MAG_01";
		case 198200492:
			return "WS_STRAWBERRY_HOUSE_STAGE_0";
		case 210001842:
			return "WS_RHODES_SALOON_TABLE_DOWN";
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return "WS_MP_TREASURE_MAP_KAMASSA_RIVER_01";
		case 224551212:
			return "WS_VALENTINE_LOCKDOWN_SALOON_SLUMS";
		case 227918160:
			return "WS_BEECHERS_CAMP_WITH_SUPPLIES";
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return "WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED";
		case 235928616:
			return "WS_CRN1_BURNT_BARN";
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return "WS_MP_TREASURE_MAP_OCREAGHS_RUN_01";
		case 249726958:
			return "WS_BOOBY_TRAP_ROANOKE_01";
		case 269047710:
			return "WS_CARMODY_DELL_ABANDONED";
		case 273461605:
			return "WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE";
		case 280705402:
			return "WS_MICAH_CAMP";
		case 282809459:
			return "WS_SHADY_BELLE_ABANDON";
		case 299694527:
			return "WS_SHB_DOMINOES_LANTERN";
		case 300221584:
			return "WS_VALENTINE_LOCKDOWN_RENT";
		case 302205488:
			return "WS_MP_BLACKWATER";
		case 311708813:
			return "WS_SADIE_BEDROLL";
		case 320943355:
			return "WS_VALENTINE_LOCKDOWN_GENERAL_STORE";
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return "WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01";
		case 330026330:
			return "WS_RHODES_GUNSMITH_FIRE_OFF";
		case 345808947:
			return "WS_FIN1_BURNT_LADDER";
		case 356365161:
			return "WS_COLTER_STAGE_HIGH_SNOW";
		case 371850993:
			return "WS_FUSSAR2_LIGHTING";
		case 373691918:
			return "WS_GUARMA_EXISTS";
		case 374115931:
			return "WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS";
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return "WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04";
		case 405586984:
			return "WS_OLDFORTWALLACE_WALL_INTACT";
		case 407136781:
			return "WS_SAVAGE_AFTERMATH_WEEPING_03";
		case 409602249:
			return "WS_GRAVE_EAGLE_FLIES";
		case 417081698:
			return "WS_SHOWS_VAL_MAG_04";
		case 417525590:
			return "WS_HSO_TABLE_SEATS";
		case 420709909:
			return "WS_CALIGA_HALL_TABACCO_BURNING";
		case 424920933:
			return "WS_MP_MP005_ARMADILLO_ALLEY_DEBRIS";
		case 426191476:
			return "WS_SHOWS_VAL_MAG_02";
		case 434558613:
			return "WS_TANNERSREACH_BURNT";
		case 439465264:
			return "WS_NBX_ART_EXHIBIT_CANCELLED";
		case 440043364:
			return "WS_DROUGHT_ENDED";
		case 442317566:
			return "WS_HSO_DOMINOES_SEATS";
		case 449774763:
			return "WS_NEW_COM_BANK_POST";
		case 459290420:
			return "WS_COLTER_STAGE_MP";
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return "WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK";
		case 469053995:
			return "WS_RE_MUC_ROCK_SCENE";
		case 473295046:
			return "WS_BRAITHWAITE_MANSION_BURNED";
		case 476714362:
			return "WS_RE_MUC_KNIFE_SCENE";
		case 478884033:
			return "WS_RHODES_LOCKDOWN_SALOON";
		case 479419429:
			return "WS_COOTS_GRAVE_2_DUG";
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return "WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE";
		case 514932331:
			return "WS_STRAWBERRY_IGNORE_NEM_HOUSE";
		case 522677506:
			return "WS_SAINT_DENIS_DOCK_TRAINS";
		case 526003171:
			return "WS_MP_FETCH_OTH_MAC";
		case 527226204:
			return "WS_BLACKWATER_BURIAL";
		case 544152906:
			return "WS_STD_GAMBLING_DEN";
		case 559573222:
			return "WS_SAINTDENIS_MAGIC_LANTERN_ES";
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return "WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03";
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return "WS_MP_TREASURE_MAP_CATTAIL_POND_03";
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return "WS_MP_HIDEOUT_ABANDONED_MINING_STATION";
		case 588987611:
			return "WS_BEECHERS_SHACK_WITH_FIRE";
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return "WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK";
		case 618699440:
			return "WS_TAXIDERMY_MARITAL";
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return "WS_MP_HIDEOUT_GAPTOOTH";
		case 630808005:
			return "WS_VALENTINE_BURIAL_POST_DRUNK";
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return "WS_MP_TREASURE_MAP_EAST_WATSONS_01";
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return "WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01";
		case 651395116:
			return "WS_GRAVE_KIERAN";
		case 664571177:
			return "WS_NO_OIL_DELIVERY_WAGONS";
		case 665676602:
			return "WS_GRAVE_LENNY";
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return "WS_MP_TREASURE_MAP_LITTLE_CREEK_03";
		case 689024866:
			return "WS_VALENTINE_LOCKDOWN_GUNSMITH";
		case 689930684:
			return "WS_WAR_VETERAN_FISH_TROPHY_ON";
		case 704802028:
			return "WS_BEECHERS_SHACK";
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return "WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03";
		case 723021499:
			return "WS_GRAND_KORRIGAN_DOCKED_INTERIOR";
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return "WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02";
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return "WS_MP_CAMP_DEFEND_TWO_ROCKS";
		case 753127042:
			return "WS_COLTER_STAGE_MEDIUM_SNOW";
		case 757752139:
			return "WS_FOR_MY_ART_NOBARPROPS";
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return "WS_MP_HIDEOUT_SHIP_ROCK";
		case 791041526:
			return "WS_SHOWS_VAL_MAG_05";
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return "WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02";
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return "WS_MP_TREASURE_MAP_DIABLO_RIDGE_04";
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return "WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02";
		case 817925178:
			return "WS_ANNES_SETTLERS_CLOSED_OFF";
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return "WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01";
		case 831940854:
			return "WS_MP_TREASURE_MAP_INTRO_VALENTINE_05";
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return "WS_MP_TREASURE_MAP_CITADEL_ROCK_02";
		case 865557632:
			return "WS_MP_NET_BEATS_TIED_UP_PED_003";
		case 868326136:
			return "WS_RE_SP_SAVAGEWARNING_02";
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return "WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS";
		case 885203519:
			return "WS_BLACKWATER_PHOTOGRAPHER_FURNITURE";
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return "WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE";
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return "WS_MP_HIDEOUT_CAMP_PIKES";
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return "WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02";
		case 929582877:
			return "WS_MP_HIDEOUT_MANTECA_FALLS";
		case 931649776:
			return "WS_NEW_COM_BANK_START";
		case 932909855:
			return "WS_GRAVE_ARTHUR_GOOD";
		case 943561238:
			return "WS_MP_TREASURE_MAP_INTRO_BLACKWATER_04";
		case 945612176:
			return "WS_BRONTE_MANSION_CLOSE_SHUTTERS";
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return "WS_MP_JAIL_DOORS_STRAWBERRY_LOCK";
		case 965986934:
			return "WS_SHOWS_VAL_MAG_CLOSED";
		case 976539083:
			return "WS_PAI_CHIMNEY_OFF";
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return "WS_MP_TREASURE_MAP_CALUMET_RAVINE_02";
		case 1010885152:
			return "WS_DOWNS_RANCH_EMPTY";
		case 1015669983:
			return "WS_VALENTINE_MAGIC_LANTERN_DOOR";
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return "WS_MP_TREASURE_MAP_CATTAIL_POND_01";
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return "WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01";
		case 1050128548:
			return "WS_RE_SP_SAVAGEWARNING_01";
		case 1064154891:
			return "WS_NBX_ART_RC_MASON_PASSED";
		case 1074873669:
			return "WS_ARMADILLO_LOCKDOWN_SALOON";
		case 1112996351:
			return "WS_MP_NET_BEATS_TIED_UP_PED_004";
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return "WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01";
		case 1140218954:
			return "WS_SHOWS_SD_MOV_05";
		case 1151197909:
			return "WS_VALENTINE_RES_CURTAINS_CLOSED";
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return "WS_MP_TREASURE_MAP_CITADEL_ROCK_03";
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return "WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01";
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return "WS_MP_HIDEOUT_TALL_TREES";
		case 1160698568:
			return "WS_VALENTINE_LOCKDOWN_HOTEL";
		case 1164928979:
			return "WS_RHODES_BURIAL";
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return "WS_MP_INTRO_HIDEOUT_BLACKWATER";
		case 1167397384:
			return "WS_MFR_CHIMNEY_OFF";
		case 1177464213:
			return "WS_CINCO_TORRES_DOOR_INTACT";
		case 1186594126:
			return "WS_RE_MUC_TREE_SCENE";
		case 1193080109:
			return "WS_BEECHERS_BARN_FINISHED";
		case 1195508693:
			return "WS_MP_NET_BEATS_TIED_UP_PED_009";
		case 1203043430:
			return "WS_HSO_DOMINOES_LANTERN";
		case 1205826474:
			return "WS_HIDEOUT_SIX_POINT_INACTIVE";
		case 1207048789:
			return "WS_SAVAGE_AFTERMATH_LAST_WORDS_02";
		case 1213993593:
			return "WS_HORSESHOE_BARREL";
		case 1221801385:
			return "WS_PHONOGRAPH_BOAT_FOUND";
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return "WS_MP_TREASURE_MAP_HANGING_ROCK_04";
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return "WS_MP_HIDEOUT_LAKAY";
		case 1248935549:
			return "WS_MP_TREASURE_MAP_INTRO_BLACKWATER_03";
		case 1250636944:
			return "WS_VALENTINE_BUTCHER_ACTIVE";
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return "WS_MP_TREASURE_MAP_CATTAIL_POND_04";
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return "WS_MP_TREASURE_MAP_CALUMET_RAVINE_01";
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return "WS_MP_CAMP_DEFEND_LITTLE_CREEK";
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return "WS_MP_HIDEOUT_BEAVER_HOLLOW";
		case 1306158345:
			return "WS_HERE_KITTY_WAGONS_GONE";
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return "WS_MP_HIDEOUT_STILLWATER_STRANDS";
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return "WS_MP_TREASURE_MAP_BARDS_CROSSING_04";
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return "WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01";
		case 1350371763:
			return "WS_SHOWS_SD_MAG_01";
		case 1350391819:
			return "WS_MEDIUM_ANIMALS_GRIZZLIES";
		case 1352699670:
			return "WS_ON_THE_RUN_SHACK_REWARD_FOUND";
		case 1358491857:
			return "WS_GRAND_KORRIGAN_SHOW_DOCKED";
		case 1360745816:
			return "WS_HIDEOUT_FORT_MERCER_INACTIVE";
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return "WS_MP_TREASURE_MAP_LAKE_ISABELLA_04";
		case 1376646519:
			return "WS_NEW_COM_BANK_BEFORE";
		case 1399676951:
			return "WS_STRAWBERRY_JAIL_IGNORE";
		case 1410198831:
			return "WS_HUNTING_2_ABANDONED_CAMP";
		case 1421300489:
			return "WS_MP_TREASURE_MAP_INTRO_BLACKWATER_02";
		case 1433244935:
			return "WS_BOOBY_TRAP_ROANOKE_02";
		case 1441416901:
			return "WS_TRELAWNY_1_HOUSE_TRASHED";
		case 1453909576:
			return "WS_VALENTINE_BURIAL_MURDER";
		case 1466547629:
			return "WS_SHADY_BELLE_EXTRA_BLOCKER";
		case 1478132521:
			return "WS_SEAN_1_CAMP";
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return "WS_MP_TREASURE_MAP_CITADEL_ROCK_01";
		case 1485195808:
			return "WS_COLTER_STAGE_SCHOOL_INTERIOR";
		case 1485494263:
			return "WS_NATIVE_SON2_TREE_FALLEN";
		case 1488286867:
			return "WS_GRAVE_SEAN";
		case 1488453464:
			return "WS_MP_VALENTINE_AMBIENT";
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return "WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01";
		case 1497516462:
			return "WS_DOWNS_RANCH_DOWNS";
		case 1500064347:
			return "WS_VALENTINE_AUCTION_GATES_OPEN";
		case 1509509592:
			return "WS_OLDFORTWALLACE_WALL_INTACT_NTS3";
		case 1512816328:
			return "WS_SAVAGE_AFTERMATH_LAST_WORDS_01";
		case 1517904467:
			return "WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP";
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return "WS_MP_TREASURE_MAP_BRANDYWINE_03";
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return "WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01";
		case 1522511407:
			return "WS_SAINT_DENIS_DOCK_BOATS";
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return "WS_MP_INTRO_JESSICA_CAMP_VALENTINE";
		case 1557082963:
			return "WS_BOOBY_TRAP_GUAMA_01_END";
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return "WS_MP_CAMP_DEFEND_RIO_BRAVO";
		case 1582370975:
			return "WS_NEW_GAR_BRON_MPCOVER_01";
		case 1583012985:
			return "WS_COOTS_GRAVE_1_DUG";
		case 1591451572:
			return "WS_POST_CARAVAN_BEAVERHOLLOW";
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return "WS_MP_TREASURE_MAP_OCREAGHS_RUN_04";
		case 1607768502:
			return "WS_SHOWS_SD_VAUD_01";
		case 1609506757:
			return "WS_NBX_ART_EXHIBIT_OPEN";
		case 1626481264:
			return "WS_SHADY_BELLE_GANG_0_2";
		case 1643531967:
			return "WS_VALENTINE_BURIAL_POST_MURDER";
		case 1649996811:
			return "WS_BEECHERS_CAMP_WITH_RUBBLE";
		case 1660024373:
			return "WS_SAINT_DENIS_LOCKDOWN_SALOON";
		case 1665756137:
			return "WS_HIDEOUT_HANGING_DOG_MARSTON4";
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return "WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02";
		case 1691618738:
			return "WS_RHODES_TRELAWNY_WAGON_ABANDONED";
		case 1698972798:
			return "WS_MP_HIDEOUT_MOSSY_FLATS";
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return "WS_MP_HIDEOUT_SOLOMONS_FOLLY";
		case 1703426636:
			return "WS_CALIGA_HALL_TABACCO_BURNT";
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return "WS_MP_INTRO_HIDEOUT_VALENTINE";
		case 1713221411:
			return "WS_VALENTINE_LOCKDOWN_LAW_OFFICE";
		case 1743048395:
			return "WS_NEW_COM_BANK_AFTER";
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return "WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP";
		case 1766284049:
			return "WS_MICAH_CAMP_EMPTY";
		case 1774060092:
			return "WS_MP_MP005_WATERTOWER_ADDON";
		case 1776302352:
			return "WS_POST_CARAVAN_CLEMENS";
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return "WS_MP_TREASURE_MAP_CALUMET_RAVINE_04";
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return "WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01";
		case 1822001510:
			return "WS_HERE_KITTY_3_CLUE_TRAIL_OFF";
		case 1846061697:
			return "WS_UTOPIA_TREE_FALLEN";
		case 1850082804:
			return "WS_PRONGHORN_GEDDES_UNAVAILABLE";
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return "WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01";
		case 1867912207:
			return "WS_VALENTINE_POKER_LESS_CHAIRS";
		case 1881028477:
			return "WS_MP_HIDEOUT_CAMP_BACCHUS";
		case 1884271742:
			return "WS_COLTER_STAGE_MUDTOWN1";
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return "WS_MP_TREASURE_MAP_BRANDYWINE_04";
		case 1908151693:
			return "WS_MP_SAINT_DENIS_BOTH_SAFES";
		case 1926308480:
			return "WS_MICAH_CAMP_POST";
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return "WS_MP_HIDEOUT_CLEMENS_COVE";
		case 1944170089:
			return "WS_CLEMENS_POINT_BARREL";
		case 1947931439:
			return "WS_NBD1_ABANDONED_BUILDING_INTERIOR";
		case 1952610440:
			return "WS_HERE_KITTY_WAGONS_TRASHED";
		case 1954026328:
			return "WS_POISONED_WELL_BLOCKED_ENTRY";
		case 1982676972:
			return "WS_HIDEOUT_SIX_POINT_TABLE";
		case 2008888900:
			return "WS_BEECHERS_CAMP_WITH_SHACK";
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return "WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04";
		case 2016141805:
			return "WS_DOWNS_RANCH_EDITH";
		case 2019386373:
			return "WS_GUARMA3_TOWER_NORMAL";
		case 2024121624:
			return "WS_GUARMA3_GUARDS_DISABLED";
		case 2024383613:
			return "WS_NATIVE1_COH_DESTROYED";
		case 2024769126:
			return "WS_MAC_CHIMNEY_OFF";
		case 2037589949:
			return "WS_RHODES_SALOON2_GRAVE";
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return "WS_MP_TREASURE_MAP_LITTLE_CREEK_01";
		case 2051822093:
			return "WS_GRAVE_ARTHUR_BAD";
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return "WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03";
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return "WS_MP_TREASURE_MAP_HANGING_ROCK_01";
		case 2077022393:
			return "WS_COOTS_GRAVE_FILLED_IN";
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return "WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04";
		case 2080210939:
			return "WS_FUSSAR2_NOCLIMB";
		case 2091701359:
			return "WS_CRASHED_BOAT";
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return "WS_MP_ASSASSINATION_TRK_GRZ_CAMP";
		case 2109952320:
			return "WS_GUARMA3_TOWER_DESTROYED";
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return "WS_MP_INTRO_JESSICA_CAMP_RHODES";
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return "WS_MP_TREASURE_MAP_LAKE_ISABELLA_03";
		case 2127577956:
			return "WS_SHADY_BELLE_SHUTTERS_CLOSED";
		case 2136753624:
			return "WS_HIDEOUT_THIEVES_LANDING_INACTIVE";
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

int func_21(int iParam0)
{
	return func_22(iParam0) + 30;
}

int func_22(int iParam0)
{
	return iParam0 * 31;
}

