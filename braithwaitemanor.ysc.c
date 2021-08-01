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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	int iLocal_19[34] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_17 = -1;
	iLocal_57 = 20000;
	iLocal_60 = vScriptParam_0.x;
	iLocal_58 = vScriptParam_0.z;
	bLocal_62 = false;
	if (Global_1901988.f_1.f_26 > 0)
	{
		func_1();
	}
	DEBUG::_0xF0783374333FD8CE(43688, 17, "**** INITIALIZING REGION: ", &(Global_1887351[vScriptParam_0.x /*36*/].f_23), ", ", &(Global_1887351[iLocal_60 /*36*/].f_24), ", ", &(Global_1887351[iLocal_60 /*36*/].f_27), " ****");
	func_2();
	func_3();
	iLocal_59 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_59)
		{
			iLocal_59 = 0;
			func_5(iLocal_60, &iLocal_58);
			switch (iLocal_58)
			{
				case 0:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), " global init...");
					if (Global_1901988.f_1.f_26 > 0)
					{
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_WAIT_FOR_UGC_EARLY_QUIT");
						iLocal_61 = (MISC::GET_GAME_TIMER() + Global_1901988.f_1.f_26);
						iLocal_58 = 1;
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_INIT_REGION");
						iLocal_58 = 2;
					}
					break;
				case 1:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), " ugc early quit...");
					if (!func_1() || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						bLocal_62 = false;
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_INIT_REGION");
						iLocal_58 = 2;
					}
					break;
				case 2:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), " region init...");
					func_6(iLocal_60);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_60)))
					{
						func_11(func_9(iLocal_60), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_12(iLocal_60));
					Global_1896632 = -1;
					DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_INIT_VOLUME");
					iLocal_61 = (iLocal_57 + MISC::GET_GAME_TIMER());
					iLocal_58 = 3;
					break;
				case 3:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), " volume init...");
					if (func_13() || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_60);
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_LOAD_APPEARANCE");
						iLocal_61 = (MISC::GET_GAME_TIMER() + iLocal_57);
						iLocal_58 = 4;
					}
					break;
				case 4:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), " load appearance...");
					if (func_15(iLocal_60) || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_60);
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_LOAD_SPECIAL");
						iLocal_61 = (MISC::GET_GAME_TIMER() + iLocal_57);
						iLocal_58 = 5;
					}
					break;
				case 5:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), " load special...");
					if (func_17(iLocal_60) || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_60);
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_LOAD_PERS_CHARS");
						iLocal_61 = (iLocal_57 + MISC::GET_GAME_TIMER());
						iLocal_58 = 7;
					}
					break;
				case 7:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), " init regional chars...");
					if (func_10(func_9(iLocal_60)))
					{
						if (func_19(func_9(iLocal_60), 4) && !iLocal_61 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_60) || iLocal_61 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_60, 4);
								iLocal_61 = (MISC::GET_GAME_TIMER() + iLocal_57);
								DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_INIT_AMBIENT");
								iLocal_58 = 8;
							}
							Jump @1359; //curOff = 900
							func_22(iLocal_60);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							else
							{
								DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), " AMBIENT MINIGAMES ARE NOT BEING ENABLED AS A STORY OR RCM OR MISSION RETRY IS HAPPENING");
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_60);
							func_30(iLocal_60);
							func_31();
							func_32();
							DEBUG::_0xF0783374333FD8CE(168, 17, UNK_0x8F77B33B6A34D8BA(), ": INIT_CURRENT_REGION_TOWN_DATA FOR ", &(Global_1887351[iLocal_60 /*36*/].f_23));
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), " RBS_INIT_AMBIENT -> RBS_INIT_LAW");
							iLocal_58 = 9;
							Jump @1359; //curOff = 1035
							func_33(iLocal_60);
							func_34();
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_INIT_NAMED_LOCATIONS");
							iLocal_58 = 10;
							Jump @1359; //curOff = 1073
							func_35(&Global_1896686);
							func_36(iLocal_60, &Global_1896686);
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_DONE_INIT");
							iLocal_58 = 11;
							Jump @1359; //curOff = 1119
							DEBUG::_0xF0783374333FD8CE(168, 17, "**** FINISHED INITIALIZING: ", &(Global_1887351[iLocal_60 /*36*/].f_23), " ****");
							func_37(iLocal_60);
							func_21(iLocal_60, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), "-> RBS_RUNNING");
							iLocal_58 = 12;
							Jump @1359; //curOff = 1214
							if (func_40(iLocal_60))
							{
								iLocal_59 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(&Global_1896686, iLocal_60);
							func_42(iLocal_60);
							func_21(iLocal_60, 8);
							if (func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887351[iLocal_60 /*36*/].f_11);
							if (Global_1887351[iLocal_60 /*36*/].f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1887351[iLocal_60 /*36*/].f_12);
							}
							Jump @1359; //curOff = 1315
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_60 /*36*/].f_23), " RBS_CLEANUP");
							func_8();
							func_44(iVar0);
							iVar0++;
						}
						if (Global_1887351[iLocal_60 /*36*/].f_13 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1887351[iLocal_60 /*36*/].f_13);
						}
						BUILTIN::WAIT(0);
						DEBUG::_0xF0783374333FD8CE(168, 17, "**** DESTROYING REGION: ", &(Global_1887351[vScriptParam_0.x /*36*/].f_23), " ****");
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						DEBUG::_0xF0783374333FD8CE(168, 17, "**** DESTROYED REGION: ", &(Global_1887351[vScriptParam_0.x /*36*/].f_23), " ****");
						if (func_45() == -1)
						{
						}
						else
						{
							func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

bool func_1()
{
	if (!bLocal_62)
	{
		if (Global_1051140)
		{
			DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), ", g_mpUGC_QuitSessionRequest.bRequestRunning is still true");
			bLocal_62 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), ", a session request is running and a UGC script is running");
			bLocal_62 = true;
			return true;
		}
		DEBUG::_0xF0783374333FD8CE(8, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning FALSE, no early quit running");
		return false;
	}
	if (Global_1051140)
	{
		DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), ", g_mpUGC_QuitSessionRequest.bRequestRunning is still true");
		return true;
	}
	if (func_48())
	{
		DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_60 /*36*/].f_23), ", content script still running for some player");
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(8, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning FALSE, early quit has finished");
	bLocal_62 = false;
	return false;
}

void func_2()
{
	int iVar0;

	if (func_45() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			DEBUG::_0x83407B92D46F25C3(8, 17, "Someone called force clean up on this thread while in MP.  DON'T DO THAT!");
		}
		iVar0 = 0;
		DEBUG::_0xF0783374333FD8CE(8, 17, "Force Cleanup called on this thread. Single Player.");
		while (!func_44(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3()
{
}

bool func_4()
{
	if (func_45() != -1)
	{
		return !func_49(1, 1);
	}
	return true;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893599.f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_50(iParam0))
	{
		Global_1893599.f_7 = 0;
		func_39(16);
		return;
	}
	if (func_51(8))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 17, "Targetted reset: AMBIENT...");
		if (*iParam1 == 12)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... setting state back to RBS_INIT_AMBIENT");
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... AMBIENT reset done. Clearing flag. Back to running.");
			func_52(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 17, "Targetted reset: APPEARANCE...");
		if (*iParam1 == 12)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... setting state back to RBS_LOAD_APPEARANCE");
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... APPEARANCE reset done. Clearing flag. Back to running.");
			func_52(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(16))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 17, "Targetted reset: LAW...");
		if (*iParam1 == 12)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... setting state back to RBS_INIT_LAW");
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... LAW reset done. Clearing flag. Back to running.");
			func_52(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(4))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 17, "Targetted reset: PERS CHARS...");
		if (*iParam1 == 12)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... setting state back to RBS_LOAD_PERS_CHARS");
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... PERS CHARS reset done. Clearing flag. Back to running.");
			func_52(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 17, "Targetted reset: VOLUMES...");
		if (*iParam1 == 12)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... setting state back to RBS_INIT_VOLUME");
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 17, "... VOLUMES reset done. Clearing flag. Back to running.");
			func_52(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1102630.f_3977)
	{
		Global_1102630.f_3977 = 1;
		DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_SAVE_LOCATION - Requesting");
		UNK_0x355E72323AEE83CC(-1, 6);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_SAVE_LOCATION - Requested");
	}
}

void func_8()
{
	if (!Global_1072032.f_23926)
	{
		Global_1072032.f_23926 = 1;
		DEBUG::_0xF0783374333FD8CE(168, 142, "NET_FAST_TRAVEL_REQUEST_VISIBILITY_UPDATE - (", UNK_0x8F77B33B6A34D8BA(), ")");
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	Global_1896634[iParam0 /*2*/] = (Global_1896634[iParam0 /*2*/] || iParam1);
}

int func_12(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 40:
			iVar0 = joaat("BLACKWATER_RESIDENTS");
			break;
		case 87:
			iVar0 = joaat("BUTCHERCREEK_RESIDENTS");
			break;
		case 74:
			iVar0 = joaat("EMERALDRANCH_RESIDENTS");
			break;
		case 66:
			iVar0 = joaat("MANICATO_RESIDENTS");
			break;
		case 116:
			iVar0 = joaat("MANZANITAPOST_RESIDENTS");
			break;
		case 5:
			iVar0 = joaat("SAINTDENIS_RESIDENTS");
			break;
		case 37:
			iVar0 = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
		case 111:
			iVar0 = joaat("RHODES_RESIDENTS");
			break;
		case 26:
			iVar0 = joaat("STRAWBERRY_RESIDENTS");
			break;
		case 81:
			iVar0 = joaat("VALENTINE_RESIDENTS");
			break;
		case 98:
			iVar0 = joaat("VANHORNPOST_RESIDENTS");
			break;
		case 60:
			iVar0 = joaat("WAPITI_RESIDENTS");
			break;
		case 83:
			iVar0 = joaat("ANNESBURG_RESIDENTS");
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_13()
{
	iLocal_16 = Global_1887351[99 /*36*/].f_5;
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-679384918))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-679384918, true);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(472704883))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(472704883, true);
	}
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iLocal_19[0] = 1595076728;
	iLocal_19[1] = 1439227364;
	iLocal_19[2] = -1072865219;
	iLocal_19[3] = 1620578985;
	iLocal_19[4] = 1606293329;
	iLocal_19[5] = 1913469935;
	iLocal_19[6] = -1664744776;
	iLocal_19[7] = -1375427275;
	iLocal_19[8] = 1970779164;
	iLocal_19[9] = -2018125672;
	iLocal_19[10] = 530930529;
	iLocal_19[11] = 1299101427;
	iLocal_19[12] = 23338719;
	iLocal_19[13] = 785447352;
	iLocal_19[14] = -461544174;
	iLocal_19[15] = -764395272;
	iLocal_19[16] = -368185289;
	iLocal_19[17] = -656945717;
	iLocal_19[18] = 248030525;
	iLocal_19[19] = 606588923;
	iLocal_19[20] = 825059846;
	iLocal_19[21] = -964389706;
	iLocal_19[22] = -152106360;
	iLocal_19[23] = 473912616;
	iLocal_19[24] = -1099020037;
	iLocal_19[25] = 1799856783;
	iLocal_19[26] = 1518993684;
	iLocal_19[27] = 426802898;
	iLocal_19[28] = -908387367;
	iLocal_19[29] = 1909255102;
	iLocal_19[30] = -415917122;
	iLocal_19[31] = 409697833;
	iLocal_19[32] = -1649837912;
	iLocal_19[33] = -1874862635;
	if (func_53(99, 255))
	{
		return;
	}
	iLocal_17 = AUDIO::GET_SOUND_ID();
	if (iLocal_17 == -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_SOUND_ID - FAILED - Braithwaites region");
	}
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(1010.465f, -1772.747f, 54.474f, 0f, 0f, 0f, 46.182f, 45.55f, 29.43f);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::_0x84CCF9A12942C83D(iVar0, iVar1, 3, 1, joaat("P_WIN_JTXL_DIRTY01X"), 0);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1);
		PHYSICS::SET_DISABLE_FRAG_DAMAGE(iVar4, true);
		PHYSICS::SET_DISABLE_BREAKING(iVar4, true);
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

bool func_17(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896634[iParam0 /*2*/] && iParam1) != 0;
}

bool func_20(int iParam0)
{
	return func_54(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8126[iParam0 /*11*/] = (Global_8126[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1072032.f_19678[iParam0 /*11*/] = (Global_1072032.f_19678[iParam0 /*11*/] || iParam1);
	}
}

void func_22(int iParam0)
{
	iParam0 = iParam0;
}

void func_23()
{
}

bool func_24(int iParam0, bool bParam1)
{
	if (func_55(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_56(5000))
		{
			return true;
		}
	}
	switch (func_58(func_57(0)))
	{
		case -1:
			return false;
		case 2:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_25()
{
}

void func_26()
{
}

void func_27()
{
}

void func_28()
{
}

void func_29(int iParam0)
{
	iParam0 = iParam0;
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_59(0.775f, 0.2f, 0.025f, 0f);
}

void func_34()
{
	if (!Global_1893599.f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1893599.f_182, Global_1893599.f_183, Global_1893599.f_184, Global_1893599.f_185);
		DEBUG::_0xF0783374333FD8CE(104856, 17, "REGION_RESTORE_HORSE_TRAFFIC_GROUPING_DISTRIBUTION: setting probably to ", Global_1893599.f_182, " ", Global_1893599.f_183, " ", Global_1893599.f_184, " ", Global_1893599.f_185);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 17, "REGION_RESTORE_HORSE_TRAFFIC_GROUPING_DISTRIBUTION: override is in effect, ignoring");
	}
}

void func_35(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 153, "CLEAR_NAMED_LOCATIONS - Clearing all named locations for region!");
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_60(uParam1, iLocal_16, 1);
}

void func_37(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 0, "INITIALIZE_LOCAL_REGION_POPULATION CALLED!");
	if (!func_61(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "INITIALIZE_LOCAL_POPULATION - The value provided for eRegionID is NOT valid!!!");
		return;
	}
	func_62();
}

bool func_38(int iParam0)
{
	return (Global_1893599 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893599 = (Global_1893599 - (Global_1893599 && iParam0));
}

bool func_40(int iParam0)
{
	int iVar0;

	if (func_63(&bLocal_18) && !func_53(99, 255))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_19)
		{
			if (bLocal_18)
			{
				func_64(iLocal_19[iVar0], 0, 0f, 0, 0, 0, 1, 0);
			}
			iVar0++;
		}
	}
	if (iLocal_17 != -1)
	{
		if (func_65(473295046) && !func_66(44))
		{
			if (func_67(Global_33, iLocal_16, 0, 0, 0))
			{
				if (AUDIO::_0x84848E1C0FC67DBB(iLocal_17))
				{
					AUDIO::_0xDCF5BA95BBF0FABA(iLocal_17, "MAIN_LOOP", 1011.224f, -1766.506f, 46.5833f, "FIRE_SMOLDER_LARGE_SOUNDSET", 0, 0, false);
				}
			}
			else if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_17))
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_17);
			}
		}
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_68(Global_1940410, 32768)) || func_68(Global_1940410, 16777216))
	{
		return;
	}
	if (func_69(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_70();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				DEBUG::_0x1B08D1EB9D8C4931(8, 153, "UPDATE_NAMED_LOCATIONS - Have a town volume.");
				if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 153, "UPDATE_NAMED_LOCATIONS - Town has a volume.");
					if (VOLUME::_IS_POSITION_INSIDE_VOLUME((*uParam0)[iVar3 /*3*/], Global_34))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_71(uParam0[iVar3 /*3*/], 1) && func_72(iParam1)) && !func_73(iParam1, 16))
							{
								DEBUG::_0xF0783374333FD8CE(8, 153, "Display Named Location");
								func_75(iParam1, func_74(), -1, 0, -1, 0);
								func_76(uParam0[iVar3 /*3*/], 1);
							}
							func_77(iParam1, 0);
						}
						bVar0 = true;
					}
					else
					{
						DEBUG::_0x1B08D1EB9D8C4931(56, 153, "UPDATE_NAMED_LOCATIONS - Player not in town: ", &Global_34);
					}
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 153, "UPDATE_NAMED_LOCATIONS - No town volume");
				}
				break;
			default:
				DEBUG::_0x1B08D1EB9D8C4931(8, 153, "UPDATE_NAMED_LOCATIONS - Attempted to update an unauthored named location type.");
				break;
		}
		iVar3++;
	}
	func_78(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_43()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_79(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_80();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		DEBUG::_0xF0783374333FD8CE(168, 17, UNK_0x8F77B33B6A34D8BA(), ": REGION_TOWN_MANANGER_EXIT_TOWN FOR ", &(Global_1887351[iLocal_60 /*36*/].f_23));
		func_21(iLocal_60, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("MPAC_TRAVEL"), joaat("MPAC_TRAVEL_012")))
		{
			switch (iLocal_60)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					DEBUG::_0xF0783374333FD8CE(40, 17, "REGION_CLEANUP - Setting the script stat...", func_81(iLocal_60));
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_82(iLocal_60, 0), 1);
					break;
			}
		}
		if (func_10(func_74()))
		{
			func_11(func_74(), 8);
		}
		func_83(iLocal_60, 4);
		func_83(iLocal_60, 8);
		func_78(0);
		if (func_45() == -1)
		{
			func_84(0);
		}
		func_85(iLocal_60);
		func_34();
		return false;
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 139, "@@ REGION_CLEANUP: #", iParam0, " extra loop as load balance");
		if (func_45() == -1)
		{
			func_86(iLocal_60);
			func_87(iLocal_60);
			if (!func_88(iLocal_60, 0))
			{
				return false;
			}
		}
		else if (!func_89(iLocal_60))
		{
			return false;
		}
	}
	DEBUG::_0xF0783374333FD8CE(168, 17, UNK_0x8F77B33B6A34D8BA(), ": Terminating. -- ", &(Global_1887351[iLocal_60 /*36*/].f_23));
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45()
{
	return Global_1572887.f_13;
}

void func_46()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_47()
{
	if (Global_1572887.f_366.f_3 > 0)
	{
		return true;
	}
	if (Global_1572887.f_366.f_4 != 0)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	if (NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(joaat("FM_MISSION_CONTROLLER"), -1, false, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 17, "IS_ANY_UGC_CONTENT_SCRIPT_RUNNING_ON_ANY_PLAYER - fm_mission_controller still running for some player");
		return true;
	}
	if (NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(joaat("FM_DEATHMATCH_CONTROLLER"), -1, false, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 17, "IS_ANY_UGC_CONTENT_SCRIPT_RUNNING_ON_ANY_PLAYER - fm_deathmatch_controller still running for some player");
		return true;
	}
	if (NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(joaat("FM_RACE_CONTROLLER"), -1, false, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 17, "IS_ANY_UGC_CONTENT_SCRIPT_RUNNING_ON_ANY_PLAYER - fm_race_controller still running for some player");
		return true;
	}
	return false;
}

bool func_49(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_90(Global_1572887, 0), ", so skipping");
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

bool func_50(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893599.f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893599.f_7 = (Global_1893599.f_7 - (Global_1893599.f_7 && iParam0));
}

bool func_53(int iParam0, int iParam1)
{
	int iVar0;

	if (func_45() == -1)
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_92(&(Global_1197826[iParam1 /*12*/].f_4), iParam0, 30, 1, 7);
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

int func_54(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_61(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: Region index not valid ", func_93(iParam0));
		return 1;
	}
	if (func_91(iParam0, 16))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: RF_PERS_DISABLED is on for ", func_93(iParam0));
		return 1;
	}
	if (func_94(iParam0) && !func_95(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: IS_REGION_IN_LOCKDOWN is on for ", func_93(iParam0));
	}
	DEBUG::_0xF0783374333FD8CE(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: Starting for ", func_93(iParam0));
	if (func_96(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_97(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_97(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1896632 < iVar0 || Global_1896632 > iVar1)
		{
			Global_1896632 = iVar0;
		}
		while (true)
		{
			if ((!func_94(iParam0) || func_95(iParam0)) || func_98(Global_1896632))
			{
				func_99(Global_1896632, 0);
			}
			Global_1896632++;
			iVar2++;
			if (Global_1896632 > iVar1)
			{
				Global_1896632 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_55(var uParam0)
{
	return (Global_1940410 && uParam0) != 0;
}

bool func_56(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1900912;
}

struct<2> func_57(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_58(var uParam0, var uParam1)
{
	return uParam0;
}

void func_59(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893599.f_182 = fParam0;
	Global_1893599.f_183 = fParam1;
	Global_1893599.f_184 = fParam2;
	Global_1893599.f_185 = fParam3;
	DEBUG::_0xF0783374333FD8CE(104856, 17, "REGION_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION: setting probably to ", Global_1893599.f_182, " ", Global_1893599.f_183, " ", Global_1893599.f_184, " ", Global_1893599.f_185);
}

void func_60(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 153, "REGISTER_NAMED_LOCATION - No more room for named locations! Get Aa!");
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 153, "REGISTER_NAMED_LOCATION - Invalid volume passed in for named location!");
		return;
	}
	if (!func_100(iParam2))
	{
		DEBUG::_0xF0783374333FD8CE(8, 153, "REGISTER_NAMED_LOCATION - The eLocationType value is NOT valid!!!");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 153, "REGISTER_NAMED_LOCATION - Registering a named location in slot: ", uParam0->f_61);
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_62()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 0, "CLEAR_LOCAL_REGION_POPULATION_ARRAY!");
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_101(iVar0))
		{
			Global_1900743[iVar0] = -1;
		}
		iVar0++;
	}
}

bool func_63(bool bParam0)
{
	if (func_102())
	{
		if (!*bParam0)
		{
			DEBUG::_0xF0783374333FD8CE(8, 183, "CAN_REGION_CHANGE_DOOR_STATE - Okay to set doors");
			*bParam0 = 1;
			return true;
		}
	}
	else if (*bParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 183, "CAN_REGION_CHANGE_DOOR_STATE - desessioned - need to reset the doors when we session back in");
		*bParam0 = 0;
		return true;
	}
	return false;
}

void func_64(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_103(bParam0, 0, 0);
	if (func_104(bParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(bParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(bParam0, fParam5);
		}
		if (bParam3)
		{
			func_105(bParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_106(bParam0, 1);
				UNK_0x355E72323AEE83CC(183, 9);
				DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Locking Door ID ", func_107(bParam0, 0));
			}
			else
			{
				func_108(bParam0, 1);
				UNK_0x355E72323AEE83CC(183, 9);
				DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Locking and making unbreakable Door ID ", func_107(bParam0, 0));
			}
		}
		else
		{
			func_109(bParam0, 1);
			UNK_0x355E72323AEE83CC(183, 9);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Unlocking Door ID ", func_107(bParam0, 0));
		}
		if (bParam7)
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 183, "SET_STATE_OF_DOOR_ID - Treating Door ID ", func_107(bParam0, 0), " as shut.");
			OBJECT::_0x276AAF0F1C7F2494(bParam0, 1);
		}
	}
	else if (func_110())
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "SET_STATE_OF_DOOR_ID - Invalid Door ID");
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		DEBUG::_0xA308F935BDECCEC0(40, 183, "SET_STATE_OF_DOOR_ID: Door with ID not registered by host yet ", func_107(bParam0, 0));
	}
}

bool func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_111(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_112(iVar1))
	{
		if (Global_1072032.f_19652.f_24 && !func_113(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072032.f_19652[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_114[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_114[iVar1], iVar2);
}

bool func_66(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	return func_115(iParam0);
}

bool func_67(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, iParam2, "IS_PED_IN_VOLUME: entity is dead");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, iParam2, "IS_PED_IN_VOLUME: Invalid volume passed into IS_PED_IN_VOLUME");
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam3, iParam4);
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_70()
{
	return func_68(Global_1940410, 8192);
}

bool func_71(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_72(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return ((Global_1887351[iParam0 /*36*/].f_21 == 1 || Global_1887351[iParam0 /*36*/].f_21 == 2) && !func_116(iParam0));
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1887351[iParam0 /*36*/].f_22 && iParam1) != 0;
}

int func_74()
{
	return Global_1896634.f_41;
}

void func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_117())
	{
		return;
	}
	DEBUG::_0xF0783374333FD8CE(174760, 11, "DISPLAY_NAMED_LOCATION - ", func_118(iParam0, 0), " ", func_119(iParam1, 0), " ", func_120(bParam2, 0), " state ", func_121(iParam4, 0));
	UNK_0x355E72323AEE83CC(11, 6);
	sVar1 = func_122(iParam0, iParam1, bParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		DEBUG::_0x83407B92D46F25C3(10920, 11, "No texture for either ", func_118(iParam0, 0), " or ", func_119(iParam1, 0), " or ", func_120(bParam2, 0));
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_123(iParam4))
	{
		if (func_61(iParam0))
		{
			iParam4 = func_124(func_9(iParam0));
		}
		else
		{
			iParam4 = func_124(iParam1);
		}
	}
	if (func_123(iParam4))
	{
		iVar3 = func_125(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_127(func_126(bParam2));
	}
	else if ((func_128(iParam1, 2) || func_129(iParam4, 2)) && !Global_1893599.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893599.f_9 = 1;
	}
	else if ((func_61(iParam0) && func_91(iParam0, 16777216)) && !Global_1893599.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893599.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893599.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893599.f_9 = 1;
	}
	else
	{
		iVar4 = func_131(func_130());
		iVar5 = func_132(func_130());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_133(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_134(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_134(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_133(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_134(&cVar6, joaat("COLOR_PURE_WHITE")), func_134(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893599.f_9 = 0;
	}
	DEBUG::_0xF0783374333FD8CE(680, 11, "DISPLAY_NAMED_LOCATION - Texture ", sVar1, " info ", sVar2);
	Global_1939313.f_145 = func_135(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_77(int iParam0, bool bParam1)
{
	if (Global_1572887.f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_136(iParam0))
	{
		return;
	}
	if (func_91(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	DEBUG::_0xA308F935BDECCEC0(40, 11, "REGION_DISCOVER() - Discovered ", &(Global_1887351[iParam0 /*36*/].f_23));
	DEBUG::_0xA308F935BDECCEC0(40, 18, "REGION_DISCOVER() - Discovered ", &(Global_1887351[iParam0 /*36*/].f_23));
	func_137(&Global_1940410, 16384);
	func_139(func_138(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_139(func_138(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_139(func_138(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_139(func_138(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_139(func_138(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_139(func_138(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_139(func_138(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 32:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 128:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 129:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 131:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 130:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 38:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 120:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 39:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 46:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 47:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 58:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 59:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 52:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 67:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 69:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 70:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 73:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 76:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 84:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 88:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 90:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 92:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 94:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 97:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 105:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 108:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 110:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 113:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 115:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 118:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		Global_1893599 |= 1;
	}
	else
	{
		Global_1893599 = (Global_1893599 - Global_1893599 & 1);
	}
}

bool func_79(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

void func_80()
{
}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xD9911C7B5F8CD69C(8, 11, "No definition for current region for GET_REGION_LITERAL_NAME. Region enum ", iParam0);
	return "REGION_INVALID";
	return "REGION_INVALID";
}

int func_82(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 30:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 29:
			return joaat("REGION_BGV_OLD_MAN_JONES");
		case 31:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 32:
			return joaat("REGION_BLU_COPPERHEAD");
		case 33:
			return joaat("REGION_BLU_SISIKA");
		case 34:
			return joaat("REGION_BLU_TRAVELLING_SALESMAN");
		case 35:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 36:
			return joaat("REGION_CML_DINO_LADY");
		case 37:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 38:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 39:
			return joaat("REGION_GRT_BEECHERS");
		case 40:
			return joaat("REGION_GRT_BLACKWATER");
		case 41:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 42:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 43:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 53:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 54:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 44:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 55:
			return joaat("REGION_GRZ_COHUTTA");
		case 45:
			return joaat("REGION_GRZ_COLTER");
		case 56:
			return joaat("REGION_GRZ_COTORRA_SPRINGS");
		case 46:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 57:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 47:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 48:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 49:
			return joaat("REGION_GRZ_MOUNT_HAGEN_PEAK");
		case 50:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 51:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 58:
			return joaat("REGION_GRZ_THELOFT");
		case 59:
			return joaat("REGION_GRE_VETERAN");
		case 60:
			return joaat("REGION_GRZ_WAPITI");
		case 52:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 61:
			return joaat("REGION_GRZ_TRAVELLING_SALESMAN");
		case 62:
			return joaat("REGION_GUA_AGUASDULCES");
		case 63:
			return joaat("REGION_GUA_CAMP");
		case 64:
			return joaat("REGION_GUA_CINCOTORRES");
		case 65:
			return joaat("REGION_GUA_LACAPILLA");
		case 66:
			return joaat("REGION_GUA_MANICATO");
		case 67:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 69:
			return joaat("REGION_HRT_CARMODYDELL");
		case 70:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 71:
			return joaat("REGION_HRT_CROP_FARM");
		case 72:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 73:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 74:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 75:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 76:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 77:
			return joaat("REGION_HRT_LARNEDSOD");
		case 78:
			return joaat("REGION_HRT_LOONY_CULT");
		case 79:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 80:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 83:
			return joaat("REGION_ROA_ANNESBURG");
		case 84:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 68:
			return joaat("REGION_ROA_BEECHERS_C");
		case 85:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 86:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 87:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 88:
			return joaat("REGION_ROA_DOVERHILL");
		case 89:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 90:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 91:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 92:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 93:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 94:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 95:
			return joaat("REGION_ROA_TRAPPER");
		case 97:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 98:
			return joaat("REGION_ROA_VANHORNPOST");
		case 96:
			return joaat("REGION_ROA_OLD_MAN_JONES");
		case 99:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 100:
			return joaat("REGION_SCM_BULGERGLADE");
		case 101:
			return joaat("REGION_SCM_CALIGAHALL");
		case 102:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 103:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 104:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 105:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 106:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 107:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 108:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 109:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 110:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 111:
			return joaat("REGION_SCM_RHODES");
		case 112:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 113:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 115:
			return joaat("REGION_TAL_COCHINAY");
		case 116:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 117:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 118:
			return joaat("REGION_TAL_TANNERSREACH");
		case 114:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 119:
			return joaat("REGION_TAL_TRAPPER");
		case 135:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 136:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 137:
			return joaat("REGION_HEN_TRAVELLING_SALESMAN");
		case 138:
			return -1573562784;
		case 127:
			return joaat("REGION_CHO_ARMADILLO");
		case 128:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 129:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 131:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 130:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 132:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 133:
			return joaat("REGION_CHO_TRAVELLING_SALESMAN");
		case 134:
			return 1869665995;
		case 120:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 121:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 122:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 123:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 124:
			return joaat("REGION_RIO_FORT_MERCER");
		case 125:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 126:
			return joaat("REGION_RIO_TRAVELLING_SALESMAN");
		case 139:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	if (bParam1)
	{
		return joaat("WILDERNESS");
	}
	return 0;
}

void func_83(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8126[iParam0 /*11*/] = (Global_8126[iParam0 /*11*/] - (Global_8126[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1072032.f_19678[iParam0 /*11*/] = (Global_1072032.f_19678[iParam0 /*11*/] - (Global_1072032.f_19678[iParam0 /*11*/] && iParam1));
}

void func_84(bool bParam0)
{
	if (bParam0)
	{
		Global_1893599 |= 2;
	}
	else
	{
		Global_1893599 = (Global_1893599 - Global_1893599 & 2);
	}
}

void func_85(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 111, "Shutting down Braith script!");
	func_59(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "m_volTown exists so remove the ambient restrictions.");
		POPULATION::_0x74C2B3DC0B294102(iLocal_16);
		POPULATION::_0xA1CFB35069D23C23(iLocal_16);
	}
	if (iLocal_17 != -1)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_17))
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_17);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_17);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-679384918))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-679384918, false);
	}
	iParam0 = iParam0;
}

void func_86(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1940170.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_140(iVar0);
		}
		iVar0++;
	}
}

void func_87(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915867.f_3[iVar0 /*447*/].f_8 == iParam0)
		{
			func_141(iVar0);
		}
		iVar0++;
	}
}

bool func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return true;
	}
	if (!func_61(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "DELETE_ALL_REGIONAL_CHARACTERS: Region index not valid ", iParam0);
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(40, 138, "DELETE_ALL_REGIONAL_CHARACTERS starting for Region ", func_93(iParam0));
	if (func_96(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896632.f_1 < iVar0 || Global_1896632.f_1 > iVar1)
		{
			Global_1896632.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_142(Global_1896632.f_1, 16))
			{
				func_143(Global_1896632.f_1, 0);
			}
			Global_1896632.f_1++;
			iVar2++;
			if (Global_1896632.f_1 > iVar1)
			{
				Global_1896632.f_1 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_89(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_144(iVar0) || func_145(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_146();
					break;
				case 32:
					func_147();
					break;
				default:
					if (Global_1051777.f_80[iVar0 /*75*/].f_2 == iParam0)
					{
						func_148(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

char* func_90(int iParam0, int iParam1)
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

bool func_91(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		return (Global_8126[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1072032.f_19678[iParam0 /*11*/] && iParam1) != 0;
}

int func_92(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (iParam1 / iParam2);
	iVar1 = (iParam1 % iParam2);
	iVar2 = (BUILTIN::SHIFT_LEFT(1, iParam3) - 1);
	iVar3 = 0;
	iVar4 = (iParam3 * iVar1);
	iVar3 = ((*uParam0)[iVar0] && BUILTIN::SHIFT_LEFT(iVar2, iVar4));
	iVar3 = BUILTIN::SHIFT_RIGHT(iVar3, iVar4);
	DEBUG::_0x4DC69742196F818A(34952, 0, "GET_VALUE_IN_DATA_FIELD >> iIndexInDataField = ", iParam1, " ik_FIELDS_PER_INT = ", iParam2, ", ik_BITS_PER_FIELD = ", iParam3, ", ik_TOTAL_INTS_IN_DATA_FIELD = ", sParam4);
	DEBUG::_0x4DC69742196F818A(34952, 0, "GET_VALUE_IN_DATA_FIELD >> q = ", iVar0, ", r = ", iVar1, ", value = ", iVar3, ", raw value = ", (*uParam0)[iVar0]);
	return iVar3;
}

char* func_93(int iParam0)
{
	if (!func_61(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 30:
			return "WatsonsCabin";
		case 29:
			return "BigValleyOldManJones";
		case 31:
			return "Canebreak Manor";
		case 32:
			return "Copperhead";
		case 33:
			return "SisikaPenitentiary";
		case 34:
			return "BluewaterTravelSales";
		case 35:
			return "BacchuBridge";
		case 36:
			return "DinoLady";
		case 37:
			return "OldFortWallace";
		case 38:
			return "SixPointCabin";
		case 39:
			return "BeechersHope";
		case 40:
			return "Blackwater";
		case 41:
			return "QuakersCove";
		case 42:
			return "AdlerRanch";
		case 43:
			return "DeadRival";
		case 53:
			return "CalumetRavine";
		case 54:
			return "CivilWarBride";
		case 44:
			return "ChezPorter";
		case 55:
			return "Cohutta";
		case 45:
			return "Colter";
		case 56:
			return "CotorraSprings";
		case 46:
			return "FrozenExplorer";
		case 57:
			return "GunFight";
		case 47:
			return "MillesaniClaim";
		case 49:
			return "MountHagenPeak";
		case 48:
			return "MountainMan";
		case 50:
			return "StarvingChildren";
		case 51:
			return "TempestRim";
		case 58:
			return "TheLoft";
		case 59:
			return "Veteran";
		case 60:
			return "Wapiti";
		case 52:
			return "WinterMiningTown";
		case 61:
			return "GrizzliesTravelSales";
		case 62:
			return "AguasDulces";
		case 63:
			return "GuarmaCamp";
		case 64:
			return "CincoTorres";
		case 65:
			return "LaCapilla";
		case 66:
			return "Manicato";
		case 67:
			return "Abandoned Mill";
		case 69:
			return "CarmodyDell";
		case 70:
			return "CornwallKerosene";
		case 71:
			return "CropFarm";
		case 72:
			return "CumberlandFalls";
		case 73:
			return "DownsRanch";
		case 74:
			return "EmeraldRanch";
		case 75:
			return "GrangersHoggery";
		case 76:
			return "HorseshoeOverlook";
		case 77:
			return "LarnedSod";
		case 78:
			return "LoonyCult";
		case 79:
			return "LuckysCabin";
		case 80:
			return "SwansonsStation";
		case 81:
			return "Valentine";
		case 82:
			return "AberdeenPigFarm";
		case 83:
			return "Annesburg";
		case 68:
			return "BeechersC";
		case 84:
			return "BeaverHollow";
		case 85:
			return "BlackBalsamRise";
		case 86:
			return "BrandywineDrop";
		case 87:
			return "ButcherCreek";
		case 88:
			return "Doverhill";
		case 89:
			return "HappyFamily";
		case 90:
			return "Isolationist";
		case 91:
			return "MacLeansHouse";
		case 92:
			return "MossyFlats";
		case 93:
			return "RoanokeValley";
		case 94:
			return "RockySeven";
		case 95:
			return "RoanokeTrapper";
		case 97:
			return "VanHornMansion";
		case 98:
			return "VanHornTradingPost";
		case 96:
			return "RoanokeOldManJones";
		case 99:
			return "BraithewaiteManor";
		case 100:
			return "BulgerGlade";
		case 101:
			return "CaligaHall";
		case 102:
			return "CatfishJacksons";
		case 103:
			return "ClemensCove";
		case 104:
			return "ClemensPoint";
		case 105:
			return "CompsonsStead";
		case 106:
			return "Dairy Farm";
		case 107:
			return "ScarletMeadowsHorseShop";
		case 108:
			return "LonniesShack";
		case 109:
			return "LoveTriangle";
		case 110:
			return "Radleys Pasture";
		case 111:
			return "Rhodes";
		case 112:
			return "SlavePen";
		case 113:
			return "AuroraBasinShack";
		case 114:
			return "DeadSettler";
		case 115:
			return "Cochinay";
		case 116:
			return "ManzanitaPost";
		case 117:
			return "PacificUnionRailroad";
		case 118:
			return "TannersReach";
		case 119:
			return "TallTreesTrapper";
		case 135:
			return "MacFarlanesRanch";
		case 136:
			return "ThievesLanding";
		case 137:
			return "HenniganTravelSales";
		case 138:
			return "HenniganHarriet";
		case 127:
			return "Armadillo";
		case 128:
			return "CootsChapel";
		case 129:
			return "DonJulioHouse";
		case 131:
			return "RidgewoodFarm";
		case 130:
			return "RileysCharge";
		case 132:
			return "TwinRocks";
		case 133:
			return "ChollaTravelSales";
		case 134:
			return "ChollaTrapper";
		case 120:
			return "Gaptooth Breach";
		case 121:
			return "Tumbleweed";
		case 122:
			return "Rathskeller Fork";
		case 123:
			return "BenedictPoint";
		case 124:
			return "FortMercer";
		case 125:
			return "Plainview";
		case 126:
			return "RioBravoTravelSales";
		case 139:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

bool func_94(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 33554432);
}

bool func_95(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 33:
			return true;
		case 37:
			return true;
		case 70:
			return true;
		case 101:
			return true;
	}
	return false;
}

bool func_96(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*iParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			DEBUG::_0xA308F935BDECCEC0(40, 138, "Attempting to get regional character bounds for a region that doesn't have them yet ", func_81(iParam0));
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_97(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_98(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_99(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 138, "CREATE_REGIONAL_CHARACTER - rcType ", func_149(iParam0), " is invalid");
		return 0;
	}
	if (!func_142(iParam0, 2))
	{
		DEBUG::_0xF0783374333FD8CE(168, 138, "CREATE_REGIONAL_CHARACTER - rcType ", func_149(iParam0), " has not been initialized");
		return 0;
	}
	if (func_142(iParam0, 32) && !bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(168, 138, "CREATE_REGIONAL_CHARACTER - rcType ", func_149(iParam0), " has been locked dead");
		func_151(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_150(iParam0)));
		if (func_45() == -1)
		{
			if (func_142(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_152(iParam0));
				func_153(iParam0, 2048);
				DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Character ", func_149(iParam0), " has been revived!");
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_152(iParam0));
		}
		return 0;
	}
	if (!func_154(iParam0) && func_45() == -1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: ", func_149(iParam0), " dead or not spawning, turn scenario groups off");
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_152(iParam0)))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Persistent character ", func_149(iParam0), " already exists");
		func_153(iParam0, 128);
		return 1;
	}
	func_151(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_150(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_152(iParam0));
	DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Character ", func_149(iParam0), " perschar index created!");
	if (func_142(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_152(iParam0));
		func_153(iParam0, 2048);
		DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Character ", func_149(iParam0), " has been revived!");
	}
	DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: ", func_149(iParam0), " created.");
	UNK_0x355E72323AEE83CC(138, 6);
	return 1;
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_101(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_102()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_4;
}

bool func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_107(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, false, false, 0, 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add Door ", func_107(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(bParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_107(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(bParam0, 1);
		DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Set door ", func_107(bParam0, 0), " able to change open ratio while locked");
		UNK_0x355E72323AEE83CC(183, 7);
	}
	return bParam0;
}

bool func_104(bool bParam0)
{
	if (func_155(bParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0);
	}
	return false;
}

void func_105(bool bParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (func_104(bParam0))
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

void func_106(bool bParam0, bool bParam1)
{
	if (func_104(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 2);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "LOCK_DOOR_ID - Locking Door ID ", func_107(bParam0, 0));
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "LOCK_DOOR - Invalid Door ID");
	}
}

var func_107(bool bParam0, int iParam1)
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

void func_108(bool bParam0, bool bParam1)
{
	if (func_104(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 1 || bParam1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(2216, 183, "SET_DOOR_ID_LOCKED_AND_UNBREAKABLE - Door ID ", func_107(bParam0, 0), " state = ", OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0), " pending state ", UNK_0x4BC2854478F3A749(bParam0));
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 1);
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "SET_DOOR_ID_LOCKED_AND_UNBREAKABLE - Invalid Door ID");
	}
}

void func_109(bool bParam0, bool bParam1)
{
	if (func_104(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 0);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "UNLOCK_DOOR_ID - Unlocking Door ID ", func_107(bParam0, 0));
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "UNLOCK_DOOR - Invalid Door ID");
	}
}

bool func_110()
{
	return true;
}

int func_111(int iParam0, int iParam1)
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

bool func_112(int iParam0)
{
	int iVar0;

	iVar0 = func_156(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_113(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

bool func_114(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3647[iVar1], iVar2);
}

bool func_116(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_157())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_117()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_158())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939313.f_75.f_55))
	{
		return false;
	}
	if (func_159(-1 ^ 9, 0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 11, "_CAN_DISPLAY_NAMED_LOCATION - on story mission on RCM");
		return false;
	}
	return true;
}

char* func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_FIRST";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 30:
			return "REGION_BGV_LAST";
		case 31:
			return "REGION_BLU_FIRST";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_LAST";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_LAST";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRW_FIRST";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 45:
			return "REGION_GRZ_COLTER";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 52:
			return "REGION_GRW_LAST";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_FIRST";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_LAST";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_FIRST";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_LAST";
		case 99:
			return "REGION_SCM_FIRST";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_LAST";
		case 113:
			return "REGION_TAL_FIRST";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 120:
			return "REGION_GAP_FIRST";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_LAST";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_LAST";
		case 127:
			return "REGION_CHO_FIRST";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_LAST";
		case 135:
			return "REGION_HEN_FIRST";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 139:
			return "REGION_CENTRALUNIONRR";
		case 140:
			return "REGION_LAST";
		case 150:
			return "REGION_MAX";
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

char* func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "DISTRICT_INVALID";
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
		case 17:
			return "NUM_DISTRICTS";
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

var func_120(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("RIOBRAVO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_RIOBRAVO"));
		case joaat("W_4_TWO_CROWS"):
			return UNK_0x6D61F5AE2F9BCC97(-179358715);
		case joaat("W_5_BROKEN_TREE"):
			return UNK_0x6D61F5AE2F9BCC97(173454341);
		case joaat("W_4_TRADING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(-1315953898);
		case joaat("GAPTOOTHRIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GAPTOOTHRIDGE"));
		case joaat("P_4_TUMBLEWEED"):
			return UNK_0x6D61F5AE2F9BCC97(-1749028203);
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(940483202);
		case joaat("P_4_TEMPEST_RIM"):
			return UNK_0x6D61F5AE2F9BCC97(422568552);
		case joaat("W_4_PLEASANCE_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(646966992);
		case joaat("W_4_CHEZ_PORTER"):
			return UNK_0x6D61F5AE2F9BCC97(1072481660);
		case joaat("P_4_CINCO_TORRES"):
			return UNK_0x6D61F5AE2F9BCC97(1413091285);
		case joaat("P_6_ANNESBURG"):
			return UNK_0x6D61F5AE2F9BCC97(-1607482084);
		case joaat("W_4_CAIRN_LODGE"):
			return UNK_0x6D61F5AE2F9BCC97(1952330244);
		case joaat("W_5_GRAND_KORRIGAN_DOCKED"):
			return UNK_0x6D61F5AE2F9BCC97(37543022);
		case joaat("P_4_TWIN_ROCKS"):
			return UNK_0x6D61F5AE2F9BCC97(-549380028);
		case joaat("LOWERWESTELIZABETH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LOWERWESTELIZABETH"));
		case joaat("BUTCHER"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BUTCHER"));
		case joaat("W_4_METEOR_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-528115102);
		case joaat("P_4_THREE_SISTERS"):
			return UNK_0x6D61F5AE2F9BCC97(-1021785744);
		case joaat("W_4_CARMODY_DELL"):
			return UNK_0x6D61F5AE2F9BCC97(1403325555);
		case joaat("W_4_TAXIDERMIST_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-855761387);
		case joaat("P_3_CATTAIL_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-1462484750);
		case joaat("CORNWALL"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CORNWALL"));
		case joaat("W_4_FACE_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1393421005);
		case joaat("WATER_O_CREAGHS_RUN"):
			return UNK_0x6D61F5AE2F9BCC97(-853858670);
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1125858184);
		case joaat("P_4_VALENTINE"):
			return UNK_0x6D61F5AE2F9BCC97(-1347878595);
		case joaat("P_3_WHINYARD_STRAIT"):
			return UNK_0x6D61F5AE2F9BCC97(-475599173);
		case joaat("W_4_HILL_HAVEN_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(1334904487);
		case joaat("W_4_DODDS_BLUFF"):
			return UNK_0x6D61F5AE2F9BCC97(-1248214233);
		case joaat("W_5_FORT_BRENNAND"):
			return UNK_0x6D61F5AE2F9BCC97(-2038790805);
		case joaat("BEECHERSHOPE"):
			return UNK_0x6D61F5AE2F9BCC97(1744495525);
		case joaat("W_4_PLANTERS_BAWN"):
			return UNK_0x6D61F5AE2F9BCC97(1012530858);
		case joaat("W_4_LAKE_DON_JULIO_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-1581529063);
		case joaat("P_4_BARDS_CROSSING"):
			return UNK_0x6D61F5AE2F9BCC97(2048166136);
		case joaat("P_3_BAHIA_DE_LA_PAZ"):
			return UNK_0x6D61F5AE2F9BCC97(189979751);
		case joaat("P_4_VAN_HORN_TRADING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(1472546624);
		case joaat("W_4_FAIRVALE_SHANTY"):
			return UNK_0x6D61F5AE2F9BCC97(-965822223);
		case joaat("W_4_MACLEANS_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-1613093278);
		case joaat("W_5_BLACK_BONE_FOREST"):
			return UNK_0x6D61F5AE2F9BCC97(1513299502);
		case joaat("P_4_MACFARLANES_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1684527690);
		case joaat("TUMBLEWEED"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_TUMBLEWEED"));
		case joaat("W_4_PAINTED_SKY"):
			return UNK_0x6D61F5AE2F9BCC97(-1036921351);
		case joaat("WATER_SAN_LUIS_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-1323627832);
		case joaat("W_4_COLTER"):
			return UNK_0x6D61F5AE2F9BCC97(1630350283);
		case joaat("W_4_GUTHRIE_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(1226978420);
		case joaat("P_4_OWANJILA_DAM"):
			return UNK_0x6D61F5AE2F9BCC97(-862480784);
		case joaat("W_4_TANNERS_REACH"):
			return UNK_0x6D61F5AE2F9BCC97(1357002938);
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1340584731);
		case joaat("WATER_LAKE_DON_JULIO"):
			return UNK_0x6D61F5AE2F9BCC97(-1677144987);
		case joaat("W_4_HORSESHOE_OVERLOOK"):
			return UNK_0x6D61F5AE2F9BCC97(1952858997);
		case joaat("WATER_FLAT_IRON_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(1889262518);
		case joaat("P_4_CITADEL_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(-475711096);
		case joaat("PERDIDO"):
			return UNK_0x6D61F5AE2F9BCC97(-1316684834);
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1079259464);
		case joaat("WATER_OWANJILA"):
			return UNK_0x6D61F5AE2F9BCC97(-224846611);
		case joaat("NEWHANOVER"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_NEWHANOVER"));
		case joaat("P_4_AGUASDULCES"):
			return UNK_0x6D61F5AE2F9BCC97(781301516);
		case joaat("WATER_STILLWATER_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(365031840);
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(172772656);
		case joaat("W_4_RIO_DEL_LOBO_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-1766258140);
		case joaat("UPPERWESTELIZABETH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_UPPERWESTELIZABETH"));
		case joaat("P_5_EMERALD_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-1724726665);
		case joaat("WATER_KAMASSA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-770940977);
		case joaat("P_3_MONTOS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(-420849177);
		case joaat("P_4_BEARTOOTH_BECK"):
			return UNK_0x6D61F5AE2F9BCC97(-97221765);
		case joaat("AGUASDULCESVILLA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESVILLA"));
		case joaat("P_4_MANTECA_FALLS"):
			return UNK_0x6D61F5AE2F9BCC97(-271214399);
		case joaat("W_4_THE_OLD_BACCHUS_PLACE"):
			return UNK_0x6D61F5AE2F9BCC97(306374471);
		case joaat("WATER_BAHIA_DE_LA_PAZ"):
			return UNK_0x6D61F5AE2F9BCC97(2129285556);
		case joaat("W_4_CRAWDAD_WILLIES"):
			return UNK_0x6D61F5AE2F9BCC97(-1756728540);
		case joaat("W_4_WATSONS_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(456132689);
		case joaat("P_3_STILLWATER_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-261907161);
		case joaat("P_4_GRANITE_PASS"):
			return UNK_0x6D61F5AE2F9BCC97(28095331);
		case joaat("W_4_SWADBASS_POINT"):
			return UNK_0x6D61F5AE2F9BCC97(-999221054);
		case joaat("WATER_CAIRN_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(-2103722627);
		case joaat("W_4_ADLER_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1250508638);
		case joaat("P_4_FORT_MERCER"):
			return UNK_0x6D61F5AE2F9BCC97(-687274193);
		case joaat("P_3_LOWER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1707579097);
		case joaat("W_5_BLACK_BALSAM_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(1078378285);
		case joaat("P_4_COTORRA_SPRINGS"):
			return UNK_0x6D61F5AE2F9BCC97(998903663);
		case joaat("P_4_BLACKWATER"):
			return UNK_0x6D61F5AE2F9BCC97(-1952785372);
		case joaat("W_4_DORMIN_CREST"):
			return UNK_0x6D61F5AE2F9BCC97(582920664);
		case joaat("W_4_BRITTLEBRUSH_TRAWL"):
			return UNK_0x6D61F5AE2F9BCC97(615996265);
		case joaat("P_3_HEARTLAND_OIL_FIELDS"):
			return UNK_0x6D61F5AE2F9BCC97(916258405);
		case joaat("P_4_BACCHUS_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(51486504);
		case joaat("WALLACE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WALLACE"));
		case joaat("W_4_GRANGERS_HOGGERY"):
			return UNK_0x6D61F5AE2F9BCC97(-1718445658);
		case joaat("W_4_SILENT_STEAD"):
			return UNK_0x6D61F5AE2F9BCC97(-1758509878);
		case joaat("P_4_RATHSKELLER_FORK"):
			return UNK_0x6D61F5AE2F9BCC97(-1884588501);
		case joaat("SCARLETTMEADOWS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_SCARLETTMEADOWS"));
		case joaat("P_4_ARROYO_DE_LA_VIBORA"):
			return UNK_0x6D61F5AE2F9BCC97(1056406359);
		case joaat("P_4_FLATNECK_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-280952595);
		case joaat("W_5_LIMPANY"):
			return UNK_0x6D61F5AE2F9BCC97(-672173142);
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP"):
			return UNK_0x6D61F5AE2F9BCC97(-1961608557);
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return UNK_0x6D61F5AE2F9BCC97(-949235630);
		case joaat("W_5_CHADWICK_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(-1566065953);
		case joaat("WATER_MOONSTONE_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-165812981);
		case joaat("WATER_CATTIAL_POND"):
			return UNK_0x6D61F5AE2F9BCC97(597429142);
		case joaat("W_4_RIDGE_VIEW"):
			return UNK_0x6D61F5AE2F9BCC97(805571051);
		case joaat("W_4_ABANDONED_MISSION"):
			return UNK_0x6D61F5AE2F9BCC97(336092009);
		case joaat("W_4_UTOPIAN_COLONY_BUILDING"):
			return UNK_0x6D61F5AE2F9BCC97(1655373005);
		case joaat("STDENIS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_STDENIS"));
		case joaat("P_4_BENEDICT_POINT"):
			return UNK_0x6D61F5AE2F9BCC97(-1260592885);
		case joaat("ARMADILLO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ARMADILLO"));
		case joaat("W_4_FIRE_LOOKOUT_TOWER"):
			return UNK_0x6D61F5AE2F9BCC97(-227556962);
		case joaat("P_5_WAPITI_INDIAN_RESERVATION"):
			return UNK_0x6D61F5AE2F9BCC97(1837497074);
		case joaat("P_4_HAWKS_EYE_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-579853108);
		case joaat("W_4_DOWNES_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-692576309);
		case joaat("W_4_DOVERHILL"):
			return UNK_0x6D61F5AE2F9BCC97(-1912223548);
		case joaat("W_4_ODDFELLOWS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(-1856290073);
		case joaat("W_4_CASTORS_RIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(594544929);
		case joaat("W_4_LONE_MULE_STEAD"):
			return UNK_0x6D61F5AE2F9BCC97(-1756704810);
		case joaat("WATER_BAYOU_NWA"):
			return UNK_0x6D61F5AE2F9BCC97(809853811);
		case joaat("W_4_EWING_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(1428639182);
		case joaat("GUARMAD"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GUARMAD"));
		case joaat("W_4_SHEPHERDS_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-1425378678);
		case joaat("P_3_SEA_OF_CORONADO"):
			return UNK_0x6D61F5AE2F9BCC97(584006842);
		case joaat("P_4_CUMBERLAND_FALLS"):
			return UNK_0x6D61F5AE2F9BCC97(-1504491725);
		case joaat("EMERALD"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_EMERALD"));
		case joaat("W_4_THE_LOFT"):
			return UNK_0x6D61F5AE2F9BCC97(505912805);
		case joaat("W_4_BUTCHER_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-345989274);
		case joaat("P_4_ARMADILLO"):
			return UNK_0x6D61F5AE2F9BCC97(-329649359);
		case joaat("W_4_APPLESEED_TIMBER_COMPANY"):
			return UNK_0x6D61F5AE2F9BCC97(-853744875);
		case joaat("P_3_SOUTHFIELD_FLATS"):
			return UNK_0x6D61F5AE2F9BCC97(577419414);
		case joaat("P_5_STRAWBERRY"):
			return UNK_0x6D61F5AE2F9BCC97(-2000764299);
		case joaat("W_4_PIKES_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(101161189);
		case joaat("W_4_OLD_GREENBANK_MILL"):
			return UNK_0x6D61F5AE2F9BCC97(1428223926);
		case joaat("W_4_BEAR_CLAW"):
			return UNK_0x6D61F5AE2F9BCC97(-730996901);
		case joaat("WATER_WHINYARD_STRAIT"):
			return UNK_0x6D61F5AE2F9BCC97(52101277);
		case joaat("W_5_RADLEYS_PASTURE"):
			return UNK_0x6D61F5AE2F9BCC97(-721517362);
		case joaat("WATER_SEA_OF_CORONADO"):
			return UNK_0x6D61F5AE2F9BCC97(-451351429);
		case joaat("AMBARINO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AMBARINO"));
		case joaat("WATER_SPIDER_GORGE"):
			return UNK_0x6D61F5AE2F9BCC97(489087316);
		case joaat("W_4_OLD_TRAIL_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-1163536485);
		case joaat("P_3_DEWBERRY_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(1968506349);
			return UNK_0x6D61F5AE2F9BCC97(1635242381);
			return UNK_0x6D61F5AE2F9BCC97(224532591);
			return UNK_0x6D61F5AE2F9BCC97(-472607657);
			return UNK_0x6D61F5AE2F9BCC97(849467908);
			return UNK_0x6D61F5AE2F9BCC97(-1922007300);
			return UNK_0x6D61F5AE2F9BCC97(-413395734);
			return UNK_0x6D61F5AE2F9BCC97(-690937176);
			return UNK_0x6D61F5AE2F9BCC97(-1463959216);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GRIZZLIESEAST"));
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CHOLLASPRINGS"));
			return UNK_0x6D61F5AE2F9BCC97(-1941950534);
			return UNK_0x6D61F5AE2F9BCC97(258519640);
			return UNK_0x6D61F5AE2F9BCC97(206800943);
			return UNK_0x6D61F5AE2F9BCC97(-1500425599);
			return UNK_0x6D61F5AE2F9BCC97(1647986426);
			return UNK_0x6D61F5AE2F9BCC97(-1297598175);
			return UNK_0x6D61F5AE2F9BCC97(992898011);
			return UNK_0x6D61F5AE2F9BCC97(-1558728209);
			return UNK_0x6D61F5AE2F9BCC97(589209742);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ANNESBURG"));
			return UNK_0x6D61F5AE2F9BCC97(-237301247);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LEMOYNE"));
			return UNK_0x6D61F5AE2F9BCC97(-1288553638);
			return UNK_0x6D61F5AE2F9BCC97(839036238);
			return UNK_0x6D61F5AE2F9BCC97(1778253480);
			return UNK_0x6D61F5AE2F9BCC97(45480399);
			return UNK_0x6D61F5AE2F9BCC97(-426370264);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_HEARTLANDS"));
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ROANOKE"));
			return UNK_0x6D61F5AE2F9BCC97(126421978);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESRUINS"));
			return UNK_0x6D61F5AE2F9BCC97(2025958694);
			return UNK_0x6D61F5AE2F9BCC97(-1994823782);
			return UNK_0x6D61F5AE2F9BCC97(-487594955);
			return UNK_0x6D61F5AE2F9BCC97(-466326051);
			return UNK_0x6D61F5AE2F9BCC97(-793511668);
			return UNK_0x6D61F5AE2F9BCC97(-387206358);
			return UNK_0x6D61F5AE2F9BCC97(1694507244);
			return UNK_0x6D61F5AE2F9BCC97(-969377220);
			return UNK_0x6D61F5AE2F9BCC97(220207608);
			return UNK_0x6D61F5AE2F9BCC97(-1397796134);
			return UNK_0x6D61F5AE2F9BCC97(1388488635);
			return UNK_0x6D61F5AE2F9BCC97(-1968376296);
			return UNK_0x6D61F5AE2F9BCC97(453382979);
			return UNK_0x6D61F5AE2F9BCC97(1748215998);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LAGRAS"));
			return UNK_0x6D61F5AE2F9BCC97(-998540134);
			return UNK_0x6D61F5AE2F9BCC97(450452876);
			return UNK_0x6D61F5AE2F9BCC97(-218414422);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_STRAWBERRY"));
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_VALENTINE"));
			return UNK_0x6D61F5AE2F9BCC97(-1198271207);
			return UNK_0x6D61F5AE2F9BCC97(-724951584);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GREATPLAINS"));
			return UNK_0x6D61F5AE2F9BCC97(-697301044);
			return UNK_0x6D61F5AE2F9BCC97(1246608437);
			return UNK_0x6D61F5AE2F9BCC97(1079923585);
			return UNK_0x6D61F5AE2F9BCC97(-1851739719);
			return UNK_0x6D61F5AE2F9BCC97(-337974688);
			return UNK_0x6D61F5AE2F9BCC97(563595232);
			return UNK_0x6D61F5AE2F9BCC97(994223196);
			return UNK_0x6D61F5AE2F9BCC97(-1046614768);
			return UNK_0x6D61F5AE2F9BCC97(1914999778);
			return UNK_0x6D61F5AE2F9BCC97(-1781716009);
			return UNK_0x6D61F5AE2F9BCC97(-1107977956);
			return UNK_0x6D61F5AE2F9BCC97(-415784948);
			return UNK_0x6D61F5AE2F9BCC97(807958313);
			return UNK_0x6D61F5AE2F9BCC97(-872624188);
			return UNK_0x6D61F5AE2F9BCC97(-1199568170);
			return UNK_0x6D61F5AE2F9BCC97(-1184868151);
			return UNK_0x6D61F5AE2F9BCC97(-941219432);
			return UNK_0x6D61F5AE2F9BCC97(-923377861);
			return UNK_0x6D61F5AE2F9BCC97(-555463868);
			return UNK_0x6D61F5AE2F9BCC97(-1552073914);
			return UNK_0x6D61F5AE2F9BCC97(-487377121);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BIGVALLEY"));
			return UNK_0x6D61F5AE2F9BCC97(-656868670);
			return UNK_0x6D61F5AE2F9BCC97(1212791156);
			return UNK_0x6D61F5AE2F9BCC97(-1604939054);
			return UNK_0x6D61F5AE2F9BCC97(1958759930);
			return UNK_0x6D61F5AE2F9BCC97(1772850469);
			return UNK_0x6D61F5AE2F9BCC97(1765331379);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_HENNIGANSSTEAD"));
			return UNK_0x6D61F5AE2F9BCC97(198366362);
			return UNK_0x6D61F5AE2F9BCC97(389964733);
			return UNK_0x6D61F5AE2F9BCC97(1208901393);
			return UNK_0x6D61F5AE2F9BCC97(367027611);
			return UNK_0x6D61F5AE2F9BCC97(-431376049);
			return UNK_0x6D61F5AE2F9BCC97(1292124363);
			return UNK_0x6D61F5AE2F9BCC97(-768608803);
			return UNK_0x6D61F5AE2F9BCC97(-725252354);
			return UNK_0x6D61F5AE2F9BCC97(34572935);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BLACKWATER"));
			return UNK_0x6D61F5AE2F9BCC97(-991017380);
			return UNK_0x6D61F5AE2F9BCC97(-356012590);
			return UNK_0x6D61F5AE2F9BCC97(-30512579);
			return UNK_0x6D61F5AE2F9BCC97(1847948966);
			return UNK_0x6D61F5AE2F9BCC97(335100198);
			return UNK_0x6D61F5AE2F9BCC97(800398523);
			return UNK_0x6D61F5AE2F9BCC97(-340073099);
			return UNK_0x6D61F5AE2F9BCC97(1946536511);
			return UNK_0x6D61F5AE2F9BCC97(-1903442384);
			return UNK_0x6D61F5AE2F9BCC97(77878338);
			return UNK_0x6D61F5AE2F9BCC97(-1831852884);
			return UNK_0x6D61F5AE2F9BCC97(1685262616);
			return UNK_0x6D61F5AE2F9BCC97(1797803116);
			return UNK_0x6D61F5AE2F9BCC97(1541987280);
			return UNK_0x6D61F5AE2F9BCC97(-86903947);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WESTELIZABETH"));
			return UNK_0x6D61F5AE2F9BCC97(1590139118);
			return UNK_0x6D61F5AE2F9BCC97(-1470814629);
			return UNK_0x6D61F5AE2F9BCC97(-710410730);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_MANICATO"));
			return UNK_0x6D61F5AE2F9BCC97(-257468296);
			return UNK_0x6D61F5AE2F9BCC97(1972784215);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BLUEWATERMARSH"));
			return UNK_0x6D61F5AE2F9BCC97(1878473840);
			return UNK_0x6D61F5AE2F9BCC97(-34806732);
			return UNK_0x6D61F5AE2F9BCC97(1599875934);
			return UNK_0x6D61F5AE2F9BCC97(-2089181823);
			return UNK_0x6D61F5AE2F9BCC97(-1300038760);
			return UNK_0x6D61F5AE2F9BCC97(1147621771);
			return UNK_0x6D61F5AE2F9BCC97(-644526564);
			return UNK_0x6D61F5AE2F9BCC97(-889775621);
			return UNK_0x6D61F5AE2F9BCC97(1745620619);
			return UNK_0x6D61F5AE2F9BCC97(1745042391);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_MANZANITA"));
			return UNK_0x6D61F5AE2F9BCC97(-1045615482);
			return UNK_0x6D61F5AE2F9BCC97(648379522);
			return UNK_0x6D61F5AE2F9BCC97(876016790);
			return UNK_0x6D61F5AE2F9BCC97(-1548925919);
			return UNK_0x6D61F5AE2F9BCC97(1210215629);
			return UNK_0x6D61F5AE2F9BCC97(162507934);
			return UNK_0x6D61F5AE2F9BCC97(1974485917);
			return UNK_0x6D61F5AE2F9BCC97(-1004905733);
			return UNK_0x6D61F5AE2F9BCC97(-1089943698);
			return UNK_0x6D61F5AE2F9BCC97(2130809939);
			return UNK_0x6D61F5AE2F9BCC97(-102604905);
			return UNK_0x6D61F5AE2F9BCC97(-136736133);
			return UNK_0x6D61F5AE2F9BCC97(1152533298);
			return UNK_0x6D61F5AE2F9BCC97(-1780933259);
			return UNK_0x6D61F5AE2F9BCC97(-1495172807);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GRIZZLIESWEST"));
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESFARM"));
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WAPITI"));
			return UNK_0x6D61F5AE2F9BCC97(-38863779);
			return UNK_0x6D61F5AE2F9BCC97(1144880185);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_TALLTREES"));
			return UNK_0x6D61F5AE2F9BCC97(-1950089507);
			return UNK_0x6D61F5AE2F9BCC97(1912441084);
			return UNK_0x6D61F5AE2F9BCC97(751555489);
			return UNK_0x6D61F5AE2F9BCC97(-1251986070);
			return UNK_0x6D61F5AE2F9BCC97(1254246155);
			return UNK_0x6D61F5AE2F9BCC97(-2106275894);
			return UNK_0x6D61F5AE2F9BCC97(913322904);
			return UNK_0x6D61F5AE2F9BCC97(-1486600045);
			return UNK_0x6D61F5AE2F9BCC97(1966949384);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BRAITHWAITE"));
			return UNK_0x6D61F5AE2F9BCC97(-68989566);
			return UNK_0x6D61F5AE2F9BCC97(1940299500);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CUMBERLAND"));
			return UNK_0x6D61F5AE2F9BCC97(94694339);
			return UNK_0x6D61F5AE2F9BCC97(-1548446900);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CALIGA"));
			return UNK_0x6D61F5AE2F9BCC97(795840665);
			return UNK_0x6D61F5AE2F9BCC97(-293766051);
			return UNK_0x6D61F5AE2F9BCC97(-675788085);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GUARMA"));
			return UNK_0x6D61F5AE2F9BCC97(1522447378);
			return UNK_0x6D61F5AE2F9BCC97(1392576518);
			return UNK_0x6D61F5AE2F9BCC97(556441814);
			return UNK_0x6D61F5AE2F9BCC97(454066312);
			return UNK_0x6D61F5AE2F9BCC97(1603575037);
			return UNK_0x6D61F5AE2F9BCC97(1747361576);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BAYOUNWA"));
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_NEWAUSTIN"));
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_RHODES"));
			return UNK_0x6D61F5AE2F9BCC97(100533548);
			return UNK_0x6D61F5AE2F9BCC97(1755139455);
			return UNK_0x6D61F5AE2F9BCC97(-813506563);
			return UNK_0x6D61F5AE2F9BCC97(607782628);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_VANHORN"));
			return UNK_0x6D61F5AE2F9BCC97(-1034387204);
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_SISKA"));
			return UNK_0x6D61F5AE2F9BCC97(bParam0);
			return UNK_0x6D61F5AE2F9BCC97(bParam0);
		}

char* func_121(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "LAW_BOUNTY_STATE_INVALID";
		case 0:
			return "LAW_BOUNTY_STATE_FIRST";
		case 1:
			return "LAW_BOUNTY_STATE_NEW_HANOVER";
		case 2:
			return "LAW_BOUNTY_STATE_LEMOYNE";
		case 3:
			return "LAW_BOUNTY_STATE_WEST_ELIZABETH";
		case 4:
			return "LAW_BOUNTY_STATE_NEW_AUSTIN";
		case 5:
			return "LAW_BOUNTY_STATE_GUARMA";
		case 6:
			return "LAW_BOUNTY_STATE_MAX";
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

char* func_122(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893599.f_162)))
	{
		sVar0 = func_160(Global_1893599.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_162(func_161(Global_34));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_163(iParam0) || func_66(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (bParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_123(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_125(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_123(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 111, "GET_LAW_BOUNTY_STATE_BOUNTY - eLBS ", iParam0, " is invalid.");
		return -1;
	}
	if (Global_1572887.f_13 == -1)
	{
		return Global_38.f_194[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_164(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072032.f_21329[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return Global_1072032.f_21329[iParam0 /*12*/];
}

int func_126(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_128(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_38.f_267[iParam0] && iParam1) != 0;
	}
	return (Global_1072032.f_21402[iParam0] && iParam1) != 0;
}

bool func_129(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_38.f_194[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072032.f_21329[iParam0 /*12*/].f_5 && iParam1) != 0;
}

int func_130()
{
	return Global_1902870;
}

int func_131(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_132(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_133(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_134(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_165(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_135(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = UIFEED::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_136(int iParam0)
{
	if (func_163(iParam0))
	{
		if (!func_66(44))
		{
			return false;
		}
	}
	return true;
}

void func_137(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
	DEBUG::_0xF0783374333FD8CE(40, 0, "SET_PLAYER_FLAG: ", func_166(iParam1, 0));
}

struct<2> func_138(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_139(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_140(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(40, 195, "CLEAR_SALOON: Clearing ", func_167(iParam0));
	func_168(Global_1940170.f_5[iParam0 /*11*/].f_6, 1);
	func_169(Global_1940170.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1940170.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1940170.f_5[iParam0 /*11*/].f_8);
	}
	func_170(iParam0, 8192);
	func_170(iParam0, 32768);
	func_170(iParam0, 524288);
	func_170(iParam0, 1048576);
	Global_1940170.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1940170.f_5[Global_1940170 /*11*/].f_9 = 0;
	Global_1940170.f_5[iParam0 /*11*/] = 0;
	Global_1940170.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	DEBUG::_0x4DC69742196F818A(8, 195, "CLEAR_SALOON: Saloon interior volume is now NULL");
	Global_1940170.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1940170.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1940170.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1940170.f_5[iParam0 /*11*/].f_7 = 0;
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_97(Global_1915867.f_3[iParam0 /*447*/].f_21) && func_171(Global_1915867.f_3[iParam0 /*447*/].f_21))
	{
		func_172(Global_1915867.f_3[iParam0 /*447*/].f_21, 0, 1, 0, 0);
	}
	Global_1915867.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915867.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915867.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915867.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915867.f_3[iParam0 /*447*/].f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936(Global_1915867.f_3[iParam0 /*447*/].f_35))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915867.f_3[iParam0 /*447*/].f_35, false);
	}
	func_173(Global_1915867.f_3[iParam0 /*447*/].f_9, 0);
	func_174(iParam0, 536870912);
	iVar1 = func_175(iParam0);
	if (iVar1 >= 15)
	{
		DEBUG::_0x83407B92D46F25C3(2216, 139, "[SHOP_UNLOCK_DOORS] Shop: ", func_176(iParam0, 0), " door count is greater then the. Current door count: ", iVar1, " Max door count: ", 15);
		Global_1915867.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_177(Global_1915867.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/]);
			Global_1915867.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/] = 0;
			Global_1915867.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1915867.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_4 = 0f;
			Global_1915867.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1915867.f_3[iParam0 /*447*/].f_409 = 0;
	}
	if (Global_1915867.f_3[iParam0 /*447*/].f_441 != 0)
	{
		UIFEED::_0x2F901291EF177B02(Global_1915867.f_3[iParam0 /*447*/].f_441, 0);
	}
	Global_1915867.f_3[iParam0 /*447*/].f_23 = 0;
	func_178(iParam0);
	Global_1915867.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915867.f_3[iParam0 /*447*/].f_8 = -1;
	DEBUG::_0xF0783374333FD8CE(168, 139, "[CLEAR_SHOP] Shop: ", func_176(iParam0, 0), " has been cleared!");
}

bool func_142(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_FLAG_SET - Not in SP");
		return false;
	}
	if (!func_97(iParam0))
	{
		return false;
	}
	return (Global_9895[iParam0 /*2*/] && iParam1) != 0;
}

int func_143(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 138, "DESTROY_REGIONAL_CHARACTER - rcType ", func_149(iParam0), " is invalid");
		return 0;
	}
	if (!func_142(iParam0, 2))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER - rcType ", func_149(iParam0), " has not been initialized");
		return 0;
	}
	if (func_150(iParam0) == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: Persistent character ", func_149(iParam0), " doesn't exist");
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_152(iParam0)))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: Persistent character ", func_149(iParam0), " already destroyed");
		return 1;
	}
	if (func_142(iParam0, 1) && !bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: Persistent character ", func_149(iParam0), " is stolen, so it will be destoyed on release.");
		func_179(iParam0, 128);
		return 1;
	}
	func_153(iParam0, 129);
	func_180(iParam0);
	DEBUG::_0xA308F935BDECCEC0(40, 138, "DESTROY_REGIONAL_CHARACTER: Destroying ", func_149(iParam0));
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_152(iParam0));
	func_151(iParam0, 0);
	DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: ", func_149(iParam0), " destroyed.");
	return 1;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_146()
{
	int iVar0;
	var uVar1;

	func_181(30);
	func_182(30);
	func_183(30);
	func_184(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1051777.f_3642[iVar0 /*19*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051777.f_3642[iVar0 /*19*/].f_6);
		}
		Global_1051777.f_3642[iVar0 /*19*/].f_6 = uVar1;
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1051777.f_3642[iVar0 /*19*/].f_13))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051777.f_3642[iVar0 /*19*/].f_13);
		}
		Global_1051777.f_3642[iVar0 /*19*/].f_13 = uVar1;
		if (MAP::DOES_BLIP_EXIST(Global_1051777.f_3642[iVar0 /*19*/].f_17))
		{
			MAP::REMOVE_BLIP(&(Global_1051777.f_3642[iVar0 /*19*/].f_17));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051777.f_3642[iVar0 /*19*/].f_8))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1051777.f_3642[iVar0 /*19*/].f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051777.f_3642[iVar0 /*19*/].f_8, true, true);
			}
			PED::DELETE_PED(&(Global_1051777.f_3642[iVar0 /*19*/].f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051777.f_3642[iVar0 /*19*/].f_15))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1051777.f_3642[iVar0 /*19*/].f_15))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051777.f_3642[iVar0 /*19*/].f_15, true, true);
			}
			PED::DELETE_PED(&(Global_1051777.f_3642[iVar0 /*19*/].f_15));
		}
		Global_1051777.f_3642[iVar0 /*19*/].f_1 = 0;
		Global_1051777.f_3642[iVar0 /*19*/].f_5 = 0;
		Global_1051777.f_3642[iVar0 /*19*/].f_8 = 0;
		Global_1051777.f_3642[iVar0 /*19*/].f_15 = 0;
		Global_1051777.f_3642[iVar0 /*19*/].f_7 = 0;
		Global_1051777.f_3642[iVar0 /*19*/].f_14 = 0;
		Global_1051777.f_3642[iVar0 /*19*/].f_9 = -1;
		DEBUG::_0xF0783374333FD8CE(40, 139, "@@ NET_CLEAR_BARTENDERS - Removed ", func_185(Global_1051777.f_3642[iVar0 /*19*/]));
		Global_1051777.f_3642[iVar0 /*19*/] = -1;
		iVar0++;
	}
}

void func_147()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 139, "[NET_REMOVE_MUSICIANS] Starts!");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051777.f_4435[iVar0 /*8*/] = -1;
		Global_1051777.f_4435[iVar0 /*8*/].f_3 = 0;
		Global_1051777.f_4435[iVar0 /*8*/].f_4 = 0;
		Global_1051777.f_4435[iVar0 /*8*/].f_7 = 0;
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1051777.f_4435[iVar0 /*8*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051777.f_4435[iVar0 /*8*/].f_6);
		}
		iVar0++;
	}
	func_184(32);
}

void func_148(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0x4DC69742196F818A(40, 139, "NET_CLEAR_SHOP ", func_176(iParam0, 0));
	bVar0 = (func_186(iParam0) && !bParam1);
	if (!bVar0 && !func_187(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1051777.f_80[iParam0 /*75*/].f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051777.f_80[iParam0 /*75*/].f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&(Global_1051777.f_80[iParam0 /*75*/].f_21));
			Global_1051777.f_80[iParam0 /*75*/].f_21 = 0;
			DEBUG::_0xA308F935BDECCEC0(40, 139, "[NET_CLEAR_SHOP] - Shop keeper deleted for shop: ", func_188(iParam0));
		}
		if (STREAMING::IS_MODEL_VALID(Global_1051777.f_80[iParam0 /*75*/].f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051777.f_80[iParam0 /*75*/].f_19);
		}
		Global_1051777.f_80[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_189(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_21))
	{
		MISC::_0xE98D55C5983F2509(Global_1051777.f_80[iParam0 /*75*/].f_21);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_24))
	{
		NETWORK::_0xA35E7BF20FA269E0(Global_1051777.f_80[iParam0 /*75*/].f_24);
		POPULATION::_0xA1CFB35069D23C23(Global_1051777.f_80[iParam0 /*75*/].f_24);
		POPULATION::_0x74C2B3DC0B294102(Global_1051777.f_80[iParam0 /*75*/].f_24);
		if (func_187(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051777.f_80[iParam0 /*75*/].f_24);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_25))
	{
		POPULATION::_0xA1CFB35069D23C23(Global_1051777.f_80[iParam0 /*75*/].f_25);
		POPULATION::_0x74C2B3DC0B294102(Global_1051777.f_80[iParam0 /*75*/].f_25);
		if (func_187(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051777.f_80[iParam0 /*75*/].f_25);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_27))
	{
		if (func_187(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051777.f_80[iParam0 /*75*/].f_27);
		}
	}
	if (func_189(iParam0, 16384) && !bVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 139, "[NET_CLEAR_SHOP] Remove the script created scenario for: ", func_188(iParam0));
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_6))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(Global_1051777.f_80[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
			TASK::_DELETE_SCENARIO_POINT(Global_1051777.f_80[iParam0 /*75*/].f_6);
		}
		Global_1051777.f_80[iParam0 /*75*/].f_6 = 0;
		func_190(iParam0, 16384);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 139, "[NET_CLEAR_SHOP] Clearing shop data.");
	Global_1051777.f_80[iParam0 /*75*/] = -1;
	Global_1051777.f_80[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051777.f_80[iParam0 /*75*/].f_48 = 0;
	Global_1051777.f_80[iParam0 /*75*/].f_73 = 1;
	Global_1915867.f_3[iParam0 /*447*/].f_16 = 0;
	iVar3 = func_191(iParam0);
	if (iVar3 >= 15)
	{
		DEBUG::_0x83407B92D46F25C3(168, 139, "[NET_CLEAR_SHOP] - Shop: ", func_176(iParam0, 0), " current door count exceeds max door count.");
		Global_1915867.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_177(Global_1051777.f_80[iParam0 /*75*/].f_31[iVar2]);
			Global_1051777.f_80[iParam0 /*75*/].f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051777.f_80[iParam0 /*75*/].f_47 = 0;
	}
	func_192(iParam0);
	if (func_187(iParam0, 262144))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 139, "NET_CLEAR_SHOP: SPF_ALLOW_BLIP_OUT_OF_REGION for ", func_188(iParam0), " is kept; all other flags cleared.");
		Global_1051777.f_80[iParam0 /*75*/].f_49 = 262144;
	}
	else
	{
		func_181(iParam0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_24) && func_193(iParam0, 2))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[NET_CLEAR_SHOP] Removing relationship volume from shop ", func_176(iParam0, 0));
		VOLUME::_0xFD010A2154B40676(Global_1051777.f_80[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_0x2C87C3E1C7B96EE2(Global_1051777.f_80[iParam0 /*75*/].f_24);
	}
	func_182(iParam0);
	Global_1051777.f_80[iParam0 /*75*/].f_1 &= 2113536;
	func_184(iParam0);
	Global_1051777.f_80[iParam0 /*75*/].f_18 = -1;
	Global_1051777.f_80[iParam0 /*75*/].f_2 = -1;
}

char* func_149(int iParam0)
{
	return func_194(iParam0, 0);
}

int func_150(int iParam0)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_NAME - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/];
}

void func_151(int iParam0, char* sParam1)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "SET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Invalid ", iParam0);
		return;
	}
	Global_1893787[iParam0 /*3*/].f_1 = sParam1;
	DEBUG::_0xA308F935BDECCEC0(136, 138, "SET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Setting PERSCHAR_INDEX for ", iParam0, " PERSCHAR_INDEX is ", sParam1);
}

int func_152(int iParam0)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/].f_1;
}

void func_153(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "CLEAR_REGIONAL_CHARACTER_FLAG - Not in SP");
		return;
	}
	if (!func_97(iParam0))
	{
		return;
	}
	Global_9895[iParam0 /*2*/] = (Global_9895[iParam0 /*2*/] - (Global_9895[iParam0 /*2*/] && iParam1));
	DEBUG::_0xA308F935BDECCEC0(680, 138, "CLEAR_REGIONAL_CHARACTER_FLAG - Clearing flag ", func_195(iParam1), " on ", func_149(iParam0));
}

bool func_154(int iParam0)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "SHOULD_REGIONAL_CHARACTER_BE_CREATED: Regional character index not valid ", iParam0);
		return false;
	}
	if (!func_142(iParam0, 2))
	{
		DEBUG::_0x83407B92D46F25C3(168, 138, "SHOULD_REGIONAL_CHARACTER_BE_CREATED: ", func_149(iParam0), " has not been initialized");
		return false;
	}
	DEBUG::_0x4DC69742196F818A(40, 138, "SHOULD_REGIONAL_CHARACTER_BE_CREATED: ", func_149(iParam0));
	return true;
}

bool func_155(bool bParam0)
{
	return bParam0 != 0;
}

int func_156(int iParam0)
{
	return func_196(iParam0) + 30;
}

bool func_157()
{
	return false;
}

bool func_158()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return true;
	}
	if (func_197())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_198() };
	if (func_199(Var0))
	{
		return false;
	}
	Var2 = { func_200() };
	if (func_199(Var2))
	{
		return false;
	}
	return true;
}

bool func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900777.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900777.f_68;
		}
		if (func_197())
		{
			return true;
		}
		if (Global_1072032.f_3 && !Global_1572887.f_9)
		{
			if ((Global_1056487[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900777.f_67;
		}
		else
		{
			return Global_1900777.f_68;
		}
	}
	if (iParam0 == 0 && func_199(func_57(0)))
	{
		return true;
	}
	if ((Global_1940410 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900912)
		{
			return true;
		}
	}
	switch (func_58(func_57(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

char* func_160(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_161(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_201(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_163(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

struct<7> func_164(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_165(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

char* func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PF_ALL_PLAYER_FLAGS";
		case 0:
			return "PF_NONE";
		case 1:
			return "PF_MISSION_STARTED";
		case 2:
			return "PF_MINIGAME_STARTED";
		case 4:
			return "PF_JOB_STARTED";
		case 8:
			return "PF_RCM_STARTED";
		case 16:
			return "PF_PROCMISSION_STARTED";
		case 32:
			return "PF_FETCH_STARTED";
		case 64:
			return "PF_HIDEOUT_STARTED";
		case 128:
			return "PF_SPECIAL_PED_STARTED";
		case 256:
			return "PF_LOCATION_STARTED";
		case 512:
			return "PF_COMPANION_ACTIVITY_STARTED";
		case 1024:
			return "PF_MC_LOBBY_STARTED";
		case 2048:
			return "PF_CONVO_VIG_DEBUG_STARTED";
		case 4096:
			return "PF_MISSION_RETRY";
		case 8192:
			return "PF_RESPAWNING";
		case 16384:
			return "PF_RECALC_GAME_COMPLETE";
		case 32768:
			return "PF_FAST_TRAVELLING";
		case 65536:
			return "PF_MISSION_LOCKED_IN";
		case 81919:
			return "PF_ANYTHING_JUST_STARTED";
		case 131072:
			return "PF_ALLOW_HORSE_SPRINT_IN_CITIES";
		case 262144:
			return "PF_LOADING_FROM_SAVE";
		case 524288:
			return "PF_DISABLE_MOVE_LIMIT_INDOORS";
		case 1048576:
			return "PF_MISSION_INTRO_CUT_SKIPPED";
		case 2097152:
			return "PF_BLOCK_DO_MISSION_NOW";
		case 4194304:
			return "PF_IN_MISSION_COMBAT";
		case 8388608:
			return "PF_LAW_DISABLED";
		case 16777216:
			return "PF_DOING_PRONGHORN_TIMELAPSE";
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

char* func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALOON_TYPE_GENERAL";
		case 1:
			return "SALOON_TYPE_SLUM";
		case 2:
			return "SALOON_TYPE_FANCY";
		default:
			break;
	}
	return "Missing saloon type string";
}

void func_168(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
	DEBUG::_0x4DC69742196F818A(136, 195, "SALOONS_OVERRIDE_PORTAL_SETTINGS_FOR_SALOON: Ambient zone for : ", iParam0, " has been set to: ", bParam1);
}

void func_169(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
				DEBUG::_0x4DC69742196F818A(8, 195, "SALOONS_OVERRIDE_PORTAL_SETTINGS_FOR_SALOON: Overriding portal settings for : ", iParam0);
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
				DEBUG::_0x4DC69742196F818A(8, 195, "SALOONS_OVERRIDE_PORTAL_SETTINGS_FOR_SALOON: Removing portal override settings for : ", iParam0);
			}
			break;
	}
}

void func_170(int iParam0, int iParam1)
{
	UNK_0x355E72323AEE83CC(195, 6);
	DEBUG::_0xA308F935BDECCEC0(40, 195, "CLEAR_SALOON_CONFIG_FLAG: Clearing flag for ", func_202(iParam1, 0));
	func_203(&(Global_1940170.f_5[iParam0 /*11*/].f_7), iParam1);
}

bool func_171(int iParam0)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_OWNED_BY_THIS_THREAD - Invalid ", iParam0);
		return false;
	}
	return Global_1893787[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_172(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release an invalid regional character ", iParam0);
		return;
	}
	if (!func_142(iParam0, 1))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release a regional character that isnt stolen ", func_149(iParam0));
		return;
	}
	if (!func_142(iParam0, 2))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release an uninitialized regional character ", func_149(iParam0));
		return;
	}
	if ((!bParam4 && !func_171(iParam0)) && func_204(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release a regional character that is stolen by a differnt script ", func_149(iParam0));
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 138, "RELEASE_REGIONAL_CHARACTER: Regional character ", func_149(iParam0), " released by ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
	func_153(iParam0, 1);
	func_180(iParam0);
	if (func_205(func_150(iParam0)))
	{
		iVar0 = func_152(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release a regional character with no perschar index", func_149(iParam0));
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 138, "RELEASE_REGIONAL_CHARACTER: Regional character is being retasked ", func_149(iParam0));
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_153(iParam0, 16);
	}
	if (func_142(iParam0, 128) && !bParam3)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 138, "RELEASE_REGIONAL_CHARACTER: Regional character is being destroyed on release ", func_149(iParam0));
		func_143(iParam0, 0);
	}
}

void func_173(int iParam0, bool bParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_207(iParam0, 1024))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 139, "SET_SHOP_BEING_ROBBED: setting robbery flag for ", iParam0);
			UNK_0x355E72323AEE83CC(139, 6);
			func_208(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_207(iParam0, 1024))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 139, "SET_SHOP_BEING_ROBBED: clearing robbery flag for ", iParam0);
		UNK_0x355E72323AEE83CC(139, 6);
		func_209(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_210(iParam0);
}

void func_174(int iParam0, int iParam1)
{
	if (!func_211(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		Global_1915867.f_3[iParam0 /*447*/].f_6 = (Global_1915867.f_3[iParam0 /*447*/].f_6 - (Global_1915867.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051777.f_80[iParam0 /*75*/].f_1 = (Global_1051777.f_80[iParam0 /*75*/].f_1 - (Global_1051777.f_80[iParam0 /*75*/].f_1 && iParam1));
	}
}

int func_175(int iParam0)
{
	return Global_1915867.f_3[iParam0 /*447*/].f_409;
}

char* func_176(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "ST_INVALID";
		case 0:
			return "ST_FIRST";
		case 1:
			return "ST_INCREMENT";
		case 2:
			return "ST_POST_OFFICE";
		case 3:
			return "ST_GENERAL";
		case 4:
			return "ST_FENCE";
		case 5:
			return "ST_HORSE_FENCE";
		case 6:
			return "ST_GUNSMITH";
		case 7:
			return "ST_TAILOR";
		case 8:
			return "ST_BARBER";
		case 9:
			return "ST_HORSE_SHOP";
		case 10:
			return "ST_BUTCHER";
		case 11:
			return "ST_DYNAMIC";
		case 12:
			return "ST_BANK";
		case 13:
			return "ST_DONATE";
		case 14:
			return "ST_BAIT";
		case 15:
			return "ST_TRAPPER";
		case 16:
			return "ST_PEARSON";
		case 17:
			return "ST_HOTEL";
		case 18:
			return "ST_PHOTO_STUDIO";
		case 19:
			return "ST_WEAPON_MOD_STORE";
		case 20:
			return "ST_CLOTHING";
		case 21:
			return "SHOP_LAST_SP_SHOP_TYPE";
		case 22:
			return "ST_QUARTERMASTER";
		case 23:
			return "ST_HORSE_TRAINER";
		case 24:
			return "ST_BLACKSMITH";
		case 25:
			return "ST_BOUNTYHUNTING_MP_RETURN";
		case 26:
			return "ST_COACH";
		case 27:
			return "ST_WILDERNESS_SUPPLIES";
		case 28:
			return "ST_CAMP_LOCKBOX";
		case 29:
			return "ST_CAMP_BUTCHERTABLE";
		case 30:
			return "ST_BARTENDER";
		case 31:
			return "ST_PIANIST";
		case 32:
			return "ST_MUSICIAN";
		case 33:
			return "ST_MOONSHINE_STILL";
		case 34:
			return "ST_HANDHELD";
		case 35:
			return "ST_HONOR_MP";
		case 36:
			return "ST_THEATER_MP";
		case 37:
			return "ST_MOONSHINE_PROPERTY";
		case 38:
			return "ST_TRAVELLING_SALESMAN";
		case 39:
			return "ST_HARRIET";
		case 40:
			return "NUM_SHOP_TYPES";
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

void func_177(bool bParam0)
{
	if (func_104(bParam0) && func_212())
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 183, "RELEASE_DOOR_ID - Releasing Door ID ", func_107(bParam0, 0));
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(bParam0);
	}
}

void func_178(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 139, "CLEAR_ALL_SHOP_TYPE_FLAGS: ", func_188(iParam0));
	Global_1915867.f_3[iParam0 /*447*/].f_6 = 0;
}

void func_179(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "SET_REGIONAL_CHARACTER_FLAG - Not in SP");
		return;
	}
	if (!func_97(iParam0))
	{
		return;
	}
	Global_9895[iParam0 /*2*/] = (Global_9895[iParam0 /*2*/] || iParam1);
	DEBUG::_0xA308F935BDECCEC0(680, 138, "SET_REGIONAL_CHARACTER_FLAG - Setting flag ", func_195(iParam1), " on ", func_149(iParam0));
}

void func_180(int iParam0)
{
	int iVar0;

	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "CLEAR_REGIONAL_CHARACTER_OWNER_THREAD - Invalid ", iParam0);
		return;
	}
	iVar0 = func_213(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
			DEBUG::_0xF0783374333FD8CE(168, 138, "Regional character ", func_149(iParam0), " set as no longer needed.");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(168, 138, "Regional character ", func_149(iParam0), " was asked to be set as no longer needed, but this script does not own the ped.");
		}
	}
	Global_1893787[iParam0 /*3*/].f_2 = 0;
}

void func_181(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 55, "[NET_CLEAR_ALL_SHOP_PROPERTIES_FLAGS] ", func_188(iParam0));
	Global_1051777.f_80[iParam0 /*75*/].f_49 = 0;
}

void func_182(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 55, "[NET_CLEAR_ALL_SHOP_PROPERTIES_SUPPORT_FLAGS] ", func_188(iParam0));
	Global_1051777.f_80[iParam0 /*75*/].f_50 = 0;
}

void func_183(int iParam0)
{
	Global_1051777.f_80[iParam0 /*75*/].f_1 = 0;
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1051777.f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051777.f_41)
	{
		if (iParam0 == Global_1051777[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051777.f_41 = (Global_1051777.f_41 - 1);
	if (Global_1051777.f_41 < 0)
	{
		Global_1051777.f_41 = 0;
	}
	Global_1051777[iVar1] = Global_1051777[Global_1051777.f_41];
}

char* func_185(int iParam0)
{
	if (func_206(iParam0))
	{
		return func_214(iParam0, 0);
	}
	return "SHOP_INVALID";
}

bool func_186(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_187(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_187(int iParam0, int iParam1)
{
	return (Global_1051777.f_80[iParam0 /*75*/].f_49 && iParam1) != 0;
}

char* func_188(int iParam0)
{
	return func_176(iParam0, 0);
}

bool func_189(int iParam0, int iParam1)
{
	return (Global_1051777.f_80[iParam0 /*75*/].f_1 && iParam1) != 0;
}

void func_190(int iParam0, int iParam1)
{
	if (func_189(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 55, "[NET_CLEAR_SHOP_TYPE_FLAG] ", func_188(iParam0), " flag ", func_215(iParam1));
	}
	Global_1051777.f_80[iParam0 /*75*/].f_1 = (Global_1051777.f_80[iParam0 /*75*/].f_1 - (Global_1051777.f_80[iParam0 /*75*/].f_1 && iParam1));
}

int func_191(int iParam0)
{
	return Global_1051777.f_80[iParam0 /*75*/].f_47;
}

void func_192(int iParam0)
{
}

bool func_193(int iParam0, int iParam1)
{
	return func_216(Global_1051777.f_80[iParam0 /*75*/].f_50, iParam1);
}

char* func_194(int iParam0, int iParam1)
{
	if (iParam0 <= 864)
	{
		switch (iParam0)
		{
			case -1:
				return "RC_INVALID";
			case 0:
				return "RC_VAL_TOWN_DRUNK";
			case 1:
				return "RC_VAL_BARTENDER";
			case 2:
				return "RC_VAL_SLUM_BARTENDER";
			case 3:
				return "RC_VAL_SHERIFF";
			case 4:
				return "RC_VAL_SHERIFF_HELPER";
			case 5:
				return "RC_VAL_TRAIN_CLERK";
			case 6:
				return "RC_VAL_BUTCHER";
			case 7:
				return "RC_VAL_AUCTION_BOSS";
			case 8:
				return "RC_VAL_BARBER";
			case 9:
				return "RC_VAL_GUNSMITH";
			case 10:
				return "RC_VAL_GENERAL_STORE";
			case 11:
				return "RC_VAL_DOCTOR";
			case 12:
				return "RC_VAL_BANK_MANAGER";
			case 13:
				return "RC_VAL_BANK_GUARD";
			case 14:
				return "RC_VAL_PIANO_PLAYER";
			case 15:
				return "RC_VAL_HOTEL_CLEANER";
			case 16:
				return "RC_VAL_HOTEL_OWNER";
			case 17:
				return "RC_VAL_HANDYMAN";
			case 18:
				return "RC_VAL_BLACKSMITH";
			case 19:
				return "RC_VAL_LIVERY";
			case 20:
				return "RC_VAL_AUCTION_HANDYMAN";
			case 21:
				return "RC_VAL_HANDYMANS_WIFE";
			case 22:
				return "RC_VAL_HEAD_PROSTITUE";
			case 23:
				return "RC_VAL_PROSTITUTE_1";
			case 24:
				return "RC_VAL_PROSTITUTE_2";
			case 25:
				return "RC_VAL_PRISONER_1";
			case 26:
				return "RC_VAL_PRISONER_2";
			case 27:
				return "RC_VAL_AUCTION_HAND";
			case 28:
				return "RC_VAL_AUCTION_HAND_2";
			case 29:
				return "RC_VAL_RANCHER_1";
			case 30:
				return "RC_VAL_RANCHER_2";
			case 31:
				return "RC_VAL_DELIVERY_MAN";
			case 32:
				return "RC_VAL_NEWSPAPER_VENDOR";
			case 33:
				return "RC_VAL_SHOW_TICKET_VENDOR";
			case 34:
				return "RC_VAL_SALOON_CLEANER";
			case 35:
				return "RC_VAL_TOWN_FARMER";
			case 36:
				return "RC_VAL_TOWN_WORKER_1";
			case 37:
				return "RC_VAL_TOWN_WORKER_2";
			case 38:
				return "RC_VAL_TOWN_WORKER_3";
			case 39:
				return "RC_VAL_TOWN_WORKER_4";
			case 40:
				return "RC_VAL_TOWN_WORKER_5";
			case 41:
				return "RC_VAL_TOWN_WORKER_6";
			case 42:
				return "RC_VAL_TOWN_WORKER_7";
			case 43:
				return "RC_VAL_TOWN_WORKER_8";
			case 44:
				return "RC_VAL_TOWN_WORKER_9";
			case 45:
				return "RC_VAL_HORSE_SHOP_OWNER";
			case 46:
				return "RC_VAL_HORSE_RIDER_1";
			case 47:
				return "RC_VAL_HUMAN_LAST";
			case 48:
				return "RC_VAL_TOWN_DOG_1";
			case 49:
				return "RC_VAL_TOWN_DOG_2";
			case 50:
				return "RC_VAL_TOWN_DOG_3";
			case 51:
				return "RC_VAL_GUARD_DOG";
			case 52:
				return "RC_VAL_LIVERY_HORSE";
			case 53:
				return "RC_VAL_PIGS_NORTH";
			case 54:
				return "RC_VAL_PIGS_WEST";
			case 55:
				return "RC_VAL_SHEEP_1";
			case 56:
				return "RC_VAL_SHEEP_2";
			case 57:
				return "RC_VAL_SHEEP_3";
			case 58:
				return "RC_VAL_SHEEP_4";
			case 59:
				return "RC_VAL_SHEEP_5";
			case 60:
				return "RC_VAL_SHEEP_6";
			case 61:
				return "RC_VAL_SHEEP_7";
			case 62:
				return "RC_VAL_SHEEP_8";
			case 63:
				return "RC_VAL_RESIDENTIAL_SHEEP_1";
			case 64:
				return "RC_EA_CASTORS_POND_FIRST";
			case 65:
				return "RC_EA_CASTORS_POND_WORKER_1";
			case 66:
				return "RC_EA_CASTORS_POND_LAST";
			case 67:
				return "RC_EA_CASTORS_POND_POST_FIRST";
			case 68:
				return "RC_EA_CASTORS_POND_WOMAN";
			case 69:
				return "RC_RHODES_BARTENDER";
			case 70:
				return "RC_RHODES_SHERIFF";
			case 71:
				return "RC_RHODES_DEPUTY";
			case 72:
				return "RC_RHODES_TRAIN_STAT_OWNER";
			case 73:
				return "RC_RHODES_GUNSMITH";
			case 74:
				return "RC_RHODES_GENERAL_STORE";
			case 75:
				return "RC_RHODES_BANK_GUARD";
			case 76:
				return "RC_RHODES_BANK_MANAGER";
			case 77:
				return "RC_RHODES_BUTCHER";
			case 78:
				return "RC_RHODES_FENCE";
			case 79:
				return "RC_RHODES_PIANO_PLAYER";
			case 80:
				return "RC_RHODES_HOTEL_OWNER";
			case 81:
				return "RC_RHODES_LIVERY_WORKER";
			case 82:
				return "RC_RHODES_UNDERTAKER";
			case 83:
				return "RC_RHODES_GAMBLER";
			case 84:
				return "RC_RHODES_GOOD_TIME_GIRL_1";
			case 85:
				return "RC_RHODES_GOOD_TIME_GIRL_2";
			case 86:
				return "RC_RHODES_GOOD_TIME_GIRL_3";
			case 87:
				return "RC_RHODES_GOOD_TIME_GIRL_4";
			case 88:
				return "RC_RHODES_NEWSPAPER_VENDOR";
			case 89:
				return "RC_RHODES_COTTON_CARRIER_1";
			case 90:
				return "RC_RHODES_COTTON_CARRIER_2";
			case 91:
				return "RC_RHODES_COTTON_LOADER_1";
			case 92:
				return "RC_RHODES_COTTON_SUPERVISOR";
			case 93:
				return "RC_RHODES_COTTON_SWEEPER_1";
			case 94:
				return "RC_RHODES_COTTON_SWEEPER_2";
			case 95:
				return "RC_RHODES_STABLE_WORKER_1";
			case 96:
				return "RC_RHODES_STABLE_WORKER_2";
			case 97:
				return "RC_RHODES_DELIVERY_WORKER_1";
			case 98:
				return "RC_RHODES_DELIVERY_WORKER_2";
			case 99:
				return "RC_RHODES_MANSION_FEMALE_1";
			case 100:
				return "RC_RHODES_MANSION_FEMALE_2";
			case 101:
				return "RC_RHODES_MANSION_MALE_1";
			case 102:
				return "RC_RHODES_MANSION_MALE_2";
			case 103:
				return "RC_RHODES_MANSION_WORKER_1";
			case 104:
				return "RC_RHODES_MANSION_WORKER_2";
			case 105:
				return "RC_RHODES_PARLOR_WORKER_1";
			case 106:
				return "RC_RHODES_BLACK_SLUMS_FEMALE_1";
			case 107:
				return "RC_RHODES_BLACK_SLUMS_FEMALE_2";
			case 108:
				return "RC_RHODES_BLACK_SLUMS_FEMALE_3";
			case 109:
				return "RC_RHODES_BLACK_SLUMS_FEMALE_4";
			case 110:
				return "RC_RHODES_BLACK_SLUMS_FEMALE_5";
			case 111:
				return "RC_RHODES_GRAYS_GANG_1";
			case 112:
				return "RC_RHODES_GRAYS_GANG_2";
			case 113:
				return "RC_RHODES_GRAYS_GANG_3";
			case 114:
				return "RC_RHODES_GRAYS_GANG_4";
			case 115:
				return "RC_RHODES_WHITE_SLUMS_1";
			case 116:
				return "RC_RHODES_WHITE_SLUMS_2";
			case 117:
				return "RC_RHODES_WHITE_SLUMS_3";
			case 118:
				return "RC_RHODES_WHITE_SLUMS_4";
			case 119:
				return "RC_RHODES_WHITE_SLUMS_5";
			case 120:
				return "RC_RHODES_SLUMS_DRUNK_1";
			case 121:
				return "RC_RHODES_SLUMS_DRUNK_2";
			case 122:
				return "RC_RHODES_SLUMS_DRUNK_3";
			case 123:
				return "RC_RHODES_SLUMS_DRUNK_4";
			case 124:
				return "RC_RHODES_SLUMS_DRUNK_5";
			case 125:
				return "RC_RHODES_WHITE_SLUMS_MUSICIAN";
			case 126:
				return "RC_RHODES_LARGE_MALE_1";
			case 127:
				return "RC_RHODES_PRISONER";
			case 128:
				return "RC_RHODES_ANIMAL_FIRST";
			case 129:
				return "RC_RHODES_MAIN_STRIP_DOG";
			case 130:
				return "RC_RHODES_MANSION_CAT";
			case 131:
				return "RC_RHODES_MANSION_DOG";
			case 132:
				return "RC_RHODES_WHITE_SLUMS_CAT_1";
			case 133:
				return "RC_RHODES_WHITE_SLUMS_CAT_2";
			case 134:
				return "RC_RHODES_WHITE_SLUMS_DOG";
			case 135:
				return "RC_RHODES_WHITE_SLUMS_DOG_2";
			case 136:
				return "RC_RHODES_WHITE_SLUMS_PIG";
			case 137:
				return "RC_SAINT_DENIS_FIRST";
			case 138:
				return "RC_SAINT_DENIS_BARTENDER_SLUMS";
			case 139:
				return "RC_SAINT_DENIS_BUTCHER";
			case 140:
				return "RC_SAINT_DENIS_DOCTOR";
			case 141:
				return "RC_SAINT_DENIS_TRAINSTATIONWKR";
			case 142:
				return "RC_SAINT_DENIS_LAST_MP";
			case 143:
				return "RC_SAINT_DENIS_PHOTOGRAPHER";
			case 144:
				return "RC_SAINT_DENIS_CITY_WORKER_1";
			case 145:
				return "RC_SAINT_DENIS_COM_CHURCH_WORKER_1";
			case 146:
				return "RC_SAINT_DENIS_COURTYARD_LADY_01";
			case 147:
				return "RC_SAINT_DENIS_COURTYARD_LADY_02";
			case 148:
				return "RC_SAINT_DENIS_DOCK_BOAT_GUARD_1";
			case 149:
				return "RC_SAINT_DENIS_DOCK_CASTILLE_1";
			case 150:
				return "RC_SAINT_DENIS_DOCK_CASTILLE_2";
			case 151:
				return "RC_SAINT_DENIS_DOCK_CIVILIAN_1";
			case 152:
				return "RC_SAINT_DENIS_DOCK_CONSTRUCTION_1";
			case 153:
				return "RC_SAINT_DENIS_DOCK_CONSTRUCTION_2";
			case 154:
				return "RC_SAINT_DENIS_DOCK_CONSTRUCTION_3";
			case 155:
				return "RC_SAINT_DENIS_DOCK_CORNWALL_1";
			case 156:
				return "RC_SAINT_DENIS_DOCK_COTTON_1";
			case 157:
				return "RC_SAINT_DENIS_DOCK_COTTON_2";
			case 158:
				return "RC_SAINT_DENIS_DOCK_COTTON_3";
			case 159:
				return "RC_SAINT_DENIS_DOCK_COTTON_4";
			case 160:
				return "RC_SAINT_DENIS_DOCK_COTTON_5";
			case 161:
				return "RC_SAINT_DENIS_DOCK_COTTON_6";
			case 162:
				return "RC_SAINT_DENIS_DOCK_COTTON_7";
			case 163:
				return "RC_SAINT_DENIS_DOCK_COTTON_8";
			case 164:
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_1";
			case 165:
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_2";
			case 166:
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_3";
			case 167:
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_CAT";
			case 168:
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_DOG";
			case 169:
				return "RC_SAINT_DENIS_DOCK_LUMBER_1";
			case 170:
				return "RC_SAINT_DENIS_DOCK_LUMBER_2";
			case 171:
				return "RC_SAINT_DENIS_DOCK_LUMBER_3";
			case 172:
				return "RC_SAINT_DENIS_DOCK_LUMBER_4";
			case 173:
				return "RC_SAINT_DENIS_DOCK_WORKER_1";
			case 174:
				return "RC_SAINT_DENIS_DOCK_WORKER_2";
			case 175:
				return "RC_SAINT_DENIS_DOCK_WORKER_3";
			case 176:
				return "RC_SAINT_DENIS_DOCK_WORKER_4";
			case 177:
				return "RC_SAINT_DENIS_FARMER_01";
			case 178:
				return "RC_SAINT_DENIS_FARMER_DOG_01";
			case 179:
				return "RC_SAINT_DENIS_FARMER_WIFE_01";
			case 180:
				return "RC_SAINT_DENIS_FARMER_WIFE_02";
			case 181:
				return "RC_SAINT_DENIS_FARMER_WIFE_03";
			case 182:
				return "RC_SAINT_DENIS_FARMER_WIFE_04";
			case 183:
				return "RC_SAINT_DENIS_FARMHAND_01";
			case 184:
				return "RC_SAINT_DENIS_FARMHAND_02";
			case 185:
				return "RC_SAINT_DENIS_FARMHAND_03A";
			case 186:
				return "RC_SAINT_DENIS_FARMHAND_03B";
			case 187:
				return "RC_SAINT_DENIS_FARMHAND_04";
			case 188:
				return "RC_SAINT_DENIS_FARMHAND_05";
			case 189:
				return "RC_SAINT_DENIS_RURAL_BLACKSMITH";
			case 190:
				return "RC_SAINT_DENIS_RURAL_HOUSE_LADY_1";
			case 191:
				return "RC_SAINT_DENIS_RURAL_HOUSE_LADY_2";
			case 192:
				return "RC_SAINT_DENIS_RURAL_SLUMS_DOG_1";
			case 193:
				return "RC_SAINT_DENIS_RURAL_SLUMS_DOG_2";
			case 194:
				return "RC_SAINT_DENIS_RURAL_SLUMS_MAN_1";
			case 195:
				return "RC_SAINT_DENIS_RURAL_SLUMS_MAN_2";
			case 196:
				return "RC_SAINT_DENIS_RURAL_SLUMS_WOMAN_1";
			case 197:
				return "RC_SAINT_DENIS_RURAL_SLUMS_WOMAN_2";
			case 198:
				return "RC_SAINT_DENIS_FLOWER_ENTHUSIAST";
			case 199:
				return "RC_SAINT_DENIS_FLOWER_ENTHUSIAST_2";
			case 200:
				return "RC_SAINT_DENIS_GENSTOREOWNER";
			case 201:
				return "RC_SAINT_DENIS_BARBER";
			case 202:
				return "RC_SAINT_DENIS_GUNSMITH";
			case 203:
				return "RC_SAINT_DENIS_HOMEOWNER_01";
			case 204:
				return "RC_SAINT_DENIS_HOMEOWNER_02";
			case 205:
				return "RC_SAINT_DENIS_HORSE_SHOP_OWNER";
			case 206:
				return "RC_SAINT_DENIS_HOTEL_CARETAKER";
			case 207:
				return "RC_SAINT_DENIS_ARTIST";
			case 208:
				return "RC_SAINT_DENIS_BANKTELLER";
			case 209:
				return "RC_SAINT_DENIS_BANK_GUARD";
			case 210:
				return "RC_SAINT_DENIS_CHICKEN_01";
			case 211:
				return "RC_SAINT_DENIS_ROOSTER_01";
			case 212:
				return "RC_SAINT_DENIS_GOAT_01";
			case 213:
				return "RC_SAINT_DENIS_GOAT_02";
			case 214:
				return "RC_SAINT_DENIS_HORSE_01";
			case 215:
				return "RC_SAINT_DENIS_COW_01";
			case 216:
				return "RC_SAINT_DENIS_COW_02";
			case 217:
				return "RC_SAINT_DENIS_BULL_02";
			case 218:
				return "RC_SAINT_DENIS_COW_03";
			case 219:
				return "RC_SAINT_DENIS_GENSTORESHADY";
			case 220:
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_1";
			case 221:
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_2";
			case 222:
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_3";
			case 223:
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_4";
			case 224:
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_5";
			case 225:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_1";
			case 226:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_2";
			case 227:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_3";
			case 228:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_4";
			case 229:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_5";
			case 230:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_6";
			case 231:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_DOG";
			case 232:
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_DOG_2";
			case 233:
				return "RC_SAINT_DENIS_INDUSTRY_COURTYARD_1";
			case 234:
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_1";
			case 235:
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_2";
			case 236:
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_3";
			case 237:
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_4";
			case 238:
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_5";
			case 239:
				return "RC_SAINT_DENIS_INDUSTRY_LANIK_1";
			case 240:
				return "RC_SAINT_DENIS_INDUSTRY_LANIK_2";
			case 241:
				return "RC_SAINT_DENIS_MARKETVENDOR1";
			case 242:
				return "RC_SAINT_DENIS_SLUMS_MARKET_FEMALE_1";
			case 243:
				return "RC_SAINT_DENIS_MARKET_WORKER_1";
			case 244:
				return "RC_SAINT_DENIS_MUSICIAN";
			case 245:
				return "RC_SAINT_DENIS_NEWSPAPER_VENDOR";
			case 246:
				return "RC_SAINT_DENIS_PARK_CARETAKER_1";
			case 247:
				return "RC_SAINT_DENIS_PARK_CARETAKER_2";
			case 248:
				return "RC_SAINT_DENIS_PARK_CARETAKER_3";
			case 249:
				return "RC_SAINT_DENIS_PIG_02";
			case 250:
				return "RC_SAINT_DENIS_POLICE_CHIEF";
			case 251:
				return "RC_SAINT_DENIS_COM_POLICE_1";
			case 252:
				return "RC_SAINT_DENIS_COM_POLICE_2";
			case 253:
				return "RC_SAINT_DENIS_COM_POLICE_3";
			case 254:
				return "RC_SAINT_DENIS_DOCK_POLICE_1";
			case 255:
				return "RC_SAINT_DENIS_DOCK_POLICE_2";
			case 256:
				return "RC_SAINT_DENIS_FRENCH_POLICE_1";
			case 257:
				return "RC_SAINT_DENIS_FRENCH_POLICE_2";
			case 258:
				return "RC_SAINT_DENIS_FRENCH_POLICE_3";
			case 259:
				return "RC_SAINT_DENIS_PARK_POLICE";
			case 260:
				return "RC_SAINT_DENIS_PARK_POLICE_2";
			case 261:
				return "RC_SAINT_DENIS_GARDEN_POLICE_1";
			case 262:
				return "RC_SAINT_DENIS_GARDEN_POLICE_2";
			case 263:
				return "RC_SAINT_DENIS_GARDEN_POLICE_3";
			case 264:
				return "RC_SAINT_DENIS_GARDEN_POLICE_4";
			case 265:
				return "RC_SAINT_DENIS_GARDEN_POLICE_5";
			case 266:
				return "RC_SAINT_DENIS_GARDEN_POLICE_6";
			case 267:
				return "RC_SAINT_DENIS_GARDEN_POLICE_7";
			case 268:
				return "RC_SAINT_DENIS_GARDEN_POLICE_8";
			case 269:
				return "RC_SAINT_DENIS_GARDEN_POLICE_9";
			case 270:
				return "RC_SAINT_DENIS_GARDEN_POLICE_10";
			case 271:
				return "RC_SAINT_DENIS_GARDEN_CAT";
			case 272:
				return "RC_SAINT_DENIS_GARDEN_DOG";
			case 273:
				return "RC_SAINT_DENIS_GARDEN_DRINKER_1";
			case 274:
				return "RC_SAINT_DENIS_GARDEN_DRINKER_2";
			case 275:
				return "RC_SAINT_DENIS_PRISONER_1";
			case 276:
				return "RC_SAINT_DENIS_PRISONER_2";
			case 277:
				return "RC_SAINT_DENIS_SHOW_TICKET_VENDOR";
			case 278:
				return "RC_SAINT_DENIS_SHOW_TICKET_VENDOR_2";
			case 279:
				return "RC_SAINT_DENIS_WAGON_DELIVERY_1";
			case 280:
				return "RC_SAINT_DENIS_WAGON_DELIVERY_2";
			case 281:
				return "RC_SAINT_DENIS_SLUMS_SALOON_1";
			case 282:
				return "RC_SAINT_DENIS_SLUMS_SALOON_2";
			case 283:
				return "RC_SAINT_DENIS_SLUMS_SALOON_PIANO";
			case 284:
				return "RC_SAINT_DENIS_SLUMS_MALE_RES_1";
			case 285:
				return "RC_SAINT_DENIS_SLUMS_MALE_RES_2";
			case 286:
				return "RC_SAINT_DENIS_SLUMS_MALE_RES_3";
			case 287:
				return "RC_SAINT_DENIS_SLUMS_FEMALE_RES_1";
			case 288:
				return "RC_SAINT_DENIS_SLUMS_FEMALE_RES_2";
			case 289:
				return "RC_SAINT_DENIS_SLUMS_SHADY";
			case 290:
				return "RC_SAINT_DENIS_SLUMS_FISHERMAN";
			case 291:
				return "RC_SAINT_DENIS_SLUMS_ARTIST";
			case 292:
				return "RC_SAINT_DENIS_SLUMS_PROSTITUTE_1";
			case 293:
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_1";
			case 294:
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_2";
			case 295:
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_3";
			case 296:
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_4";
			case 297:
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_5";
			case 298:
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_6";
			case 299:
				return "RC_SAINT_DENIS_TOURIST_MALE_1";
			case 300:
				return "RC_SAINT_DENIS_TOURIST_FEMALE_1";
			case 301:
				return "RC_SAINT_DENIS_CEMETERY_KEEPER";
			case 302:
				return "RC_SAINT_DENIS_CHURCH_KEEPER";
			case 303:
				return "RC_SAINT_DENIS_SLUMS_PIG_1";
			case 304:
				return "RC_SAINT_DENIS_SLUMS_PIG_2";
			case 305:
				return "RC_SAINT_DENIS_SLUMS_DOG_1";
			case 306:
				return "RC_SAINT_DENIS_SLUMS_DOG_2";
			case 307:
				return "RC_SAINT_DENIS_SLUMS_DOG_3";
			case 308:
				return "RC_SAINT_DENIS_SLUMS_DOG_4";
			case 309:
				return "RC_SAINT_DENIS_SLUMS_DOG_5";
			case 310:
				return "RC_SAINT_DENIS_FRENCH_RAKER";
			case 311:
				return "RC_SAINT_DENIS_FRENCH_SALOON_1";
			case 312:
				return "RC_SAINT_DENIS_FRENCH_SALOON_2";
			case 313:
				return "RC_SAINT_DENIS_FRENCH_SALOON_3";
			case 314:
				return "RC_SAINT_DENIS_FRENCH_PROSTITUTE_1";
			case 315:
				return "RC_SAINT_DENIS_FRENCH_TRUMPET_MALE_1";
			case 316:
				return "RC_SAINT_DENIS_FRENCH_COURTYARD_DOG";
			case 317:
				return "RC_SAINT_DENIS_FRENCH_LOWERCLASS_WOMAN";
			case 318:
				return "RC_SAINT_DENIS_LAST";
			case 319:
				return "RC_SISIKA_PENITENTIARY_FIRST";
			case 320:
				return "RC_SISIKA_PENITENTIARY_COURTYARD_GUARD_2";
			case 321:
				return "RC_SISIKA_PENITENTIARY_COURTYARD_GUARD_3";
			case 322:
				return "RC_SISIKA_PENITENTIARY_COURTYARD_GUARD_4";
			case 323:
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD";
			case 324:
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_2";
			case 325:
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_3";
			case 326:
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_4";
			case 327:
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_5";
			case 328:
				return "RC_SISIKA_PENITENTIARY_BRIDGE_GUARD";
			case 329:
				return "RC_SISIKA_PENITENTIARY_BRIDGE_GUARD_2";
			case 330:
				return "RC_SISIKA_PENITENTIARY_DOCKS_GUARD";
			case 331:
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD";
			case 332:
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD_2";
			case 333:
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD_3";
			case 334:
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD_4";
			case 335:
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD";
			case 336:
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD_2";
			case 337:
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD_3";
			case 338:
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD_4";
			case 339:
				return "RC_TUMBLEWEED_HOMEOWNER_MALE_RESIDENT";
			case 340:
				return "RC_TUMBLEWEED_HOMEOWNER_FEMALE_RESIDENT";
			case 341:
				return "RC_TUMBLEWEED_HORSE_SHOP_OWNER";
			case 342:
				return "RC_TUMBLEWEED_SHERRIF";
			case 343:
				return "RC_TUMBLEWEED_SHERRIF_DEPUTY";
			case 344:
				return "RC_TUMBLEWEED_SHERRIF_DEPUTY_3";
			case 345:
				return "RC_TUMBLEWEED_BARTENDER";
			case 346:
				return "RC_TUMBLEWEED_BUTCHER";
			case 347:
				return "RC_TUMBLEWEED_GENERAL_STORE_OWNER";
			case 348:
				return "RC_TUMBLEWEED_PIANO_PLAYER";
			case 349:
				return "RC_TUMBLEWEED_DOG_1";
			case 350:
				return "RC_TUMBLEWEED_DOG_2";
			case 351:
				return "RC_TUMBLEWEED_RESIDENTS_DOG";
			case 352:
				return "RC_TUMBLEWEED_RANCH_DOG";
			case 353:
				return "RC_TUMBLEWEED_PRISONER_1";
			case 354:
				return "RC_TUMBLEWEED_PRISONER_2";
			case 355:
				return "RC_TUMBLEWEED_PRISONER_3";
			case 356:
				return "RC_TUMBLEWEED_PRISONER_4";
			case 357:
				return "RC_TUMBLEWEED_PRISONER_5";
			case 358:
				return "RC_TUMBLEWEED_PRISONER_6";
			case 359:
				return "RC_TUMBLEWEED_GUNSMITH_OWNER";
			case 360:
				return "RC_TUMBLEWEED_SCAVENGER";
			case 361:
				return "RC_TUMBLEWEED_SALOON_PATRON_1";
			case 362:
				return "RC_TUMBLEWEED_SALOON_PATRON_2";
			case 363:
				return "RC_TUMBLEWEED_SALOON_PATRON_3";
			case 364:
				return "RC_TUMBLEWEED_SALOON_WORKER_1";
			case 365:
				return "RC_TUMBLEWEED_SALOON_WORKER_2";
			case 366:
				return "RC_TUMBLEWEED_RANCH_HORSES";
			case 367:
				return "RC_TUMBLEWEED_RANCH_WORKER_1";
			case 368:
				return "RC_TUMBLEWEED_RANCH_WORKER_2";
			case 369:
				return "RC_TUMBLEWEED_RANCHER";
			case 370:
				return "RC_TWIN_ROCK_RANCH_GUARD";
			case 371:
				return "RC_TWIN_ROCK_RANCH_GUARD_2";
			case 372:
				return "RC_TWIN_ROCK_RANCH_GUARD_3";
			case 373:
				return "RC_TWIN_ROCK_LAST";
			case 374:
				return "RC_MANICATO_LAST_MP";
			case 375:
				return "RC_MANICATO_LAST";
			case 376:
				return "RC_ANNESBURG_SHERIFF";
			case 377:
				return "RC_ANNESBURG_DEPUTY";
			case 378:
				return "RC_ANNESBURG_TRAINSTATIONWORKER";
			case 379:
				return "RC_ANNESBURG_GUNSMITH";
			case 380:
				return "RC_ANNESBURG_NEWSPAPER_VENDOR";
			case 381:
				return "RC_ANNESBURG_GUARD_01";
			case 382:
				return "RC_ANNESBURG_GUARD_02";
			case 383:
				return "RC_ANNESBURG_GUARD_03";
			case 384:
				return "RC_ANNESBURG_GUARD_04";
			case 385:
				return "RC_ANNESBURG_GUARD_05";
			case 386:
				return "RC_ANNESBURG_GUARD_06";
			case 387:
				return "RC_ANNESBURG_GUARD_07";
			case 388:
				return "RC_ANNESBURG_HORSES_01";
			case 389:
				return "RC_ANNESBURG_PLANT_WORKER_01";
			case 390:
				return "RC_ANNESBURG_PLANT_WORKER_02";
			case 391:
				return "RC_ANNESBURG_PLANT_WORKER_03";
			case 392:
				return "RC_ANNESBURG_PLANT_WORKER_04";
			case 393:
				return "RC_ANNESBURG_PLANT_WORKER_05";
			case 394:
				return "RC_ANNESBURG_PLANT_WORKER_06";
			case 395:
				return "RC_ANNESBURG_LUMBER_WORKER_01";
			case 396:
				return "RC_ANNESBURG_LUMBER_WORKER_02";
			case 397:
				return "RC_ANNESBURG_LUMBER_WORKER_03";
			case 398:
				return "RC_ANNESBURG_MINE_WORKER_01";
			case 399:
				return "RC_ANNESBURG_MINE_WORKER_02";
			case 400:
				return "RC_ANNESBURG_MINE_WORKER_03";
			case 401:
				return "RC_ANNESBURG_MINE_WORKER_04";
			case 402:
				return "RC_ANNESBURG_MINE_WORKER_05";
			case 403:
				return "RC_ANNESBURG_MINE_WORKER_06";
			case 404:
				return "RC_ANNESBURG_MINE_WORKER_07";
			case 405:
				return "RC_ANNESBURG_MINE_WORKER_08";
			case 406:
				return "RC_ANNESBURG_MINE_WORKER_09";
			case 407:
				return "RC_ANNESBURG_MINE_WORKER_10";
			case 408:
				return "RC_ANNESBURG_MINE_WORKER_11";
			case 409:
				return "RC_ANNESBURG_MINE_WORKER_12";
			case 410:
				return "RC_ANNESBURG_WORKER_WIFE_01";
			case 411:
				return "RC_ANNESBURG_WORKER_WIFE_02";
			case 412:
				return "RC_ANNESBURG_WORKER_WIFE_03";
			case 413:
				return "RC_ANNESBURG_WORKER_WIFE_04";
			case 414:
				return "RC_ANNESBURG_WORKER_WIFE_05";
			case 415:
				return "RC_ANNESBURG_WORKER_WIFE_06";
			case 416:
				return "RC_ANNESBURG_WORKER_WIFE_07";
			case 417:
				return "RC_ANNESBURG_WORKER_WIFE_08";
			case 418:
				return "RC_ANNESBURG_WORKER_WIFE_09";
			case 419:
				return "RC_ANNESBURG_WORKER_WIFE_10";
			case 420:
				return "RC_ANNESBURG_WORKER_WIFE_11";
			case 421:
				return "RC_ANNESBURG_WORKER_WIFE_12";
			case 422:
				return "RC_ANNESBURG_WORKER_WIFE_13";
			case 423:
				return "RC_ANNESBURG_WORKER_WIFE_14";
			case 424:
				return "RC_ANNESBURG_PRISONER_01";
			case 425:
				return "RC_ANNESBURG_LAST";
			case 426:
				return "RC_ARMADILLO_BARTENDER";
			case 427:
				return "RC_ARMADILLO_BAR_PATRON";
			case 428:
				return "RC_ARMADILLO_GENERAL_STORE";
			case 429:
				return "RC_ARMADILLO_UNDERTAKER";
			case 430:
				return "RC_ARMADILLO_UNDERTAKER_HELPER_1";
			case 431:
				return "RC_ARMADILLO_CORPSE_WAGON_DRIVER";
			case 432:
				return "RC_ARMADILLO_CHICKENS_1";
			case 433:
				return "RC_ARMADILLO_DOG_1";
			case 434:
				return "RC_ARMADILLO_DOG_2";
			case 435:
				return "RC_ARMADILLO_HORSES_1";
			case 436:
				return "RC_ARMADILLO_PIGS_1";
			case 437:
				return "RC_VANHORN_LAST_MP";
			case 438:
				return "RC_VANHORN_EXOTIC_STORE";
			case 439:
				return "RC_VANHORN_HARMONICA_PLAYER";
			case 440:
				return "RC_VANHORN_TOWN_RESIDENT_1";
			case 441:
				return "RC_VANHORN_TOWN_RESIDENT_2";
			case 442:
				return "RC_VANHORN_TOWN_RESIDENT_3";
			case 443:
				return "RC_VANHORN_RESIDENTS_GUARD_DOG";
			case 444:
				return "RC_VANHORN_SALOON_PATRON_1";
			case 445:
				return "RC_VANHORN_SALOON_PATRON_2";
			case 446:
				return "RC_VANHORN_SALOON_PATRON_3";
			case 447:
				return "RC_VANHORN_SALOON_PATRON_4";
			case 448:
				return "RC_VANHORN_SCAVENGER";
			case 449:
				return "RC_VANHORN_SQUATTER_1";
			case 450:
				return "RC_VANHORN_SQUATTER_2";
			case 451:
				return "RC_VANHORN_SQUATTER_3";
			case 452:
				return "RC_VANHORN_SQUATTER_4";
			case 453:
				return "RC_VANHORN_HORSE_SHOP_OWNER";
			case 454:
				return "RC_VANHORN_HORSE_SHOP_DOG";
			case 455:
				return "RC_VANHORN_SQUATTER_DOG";
			case 456:
				return "RC_VANHORN_TOWN_DOG_1";
			case 457:
				return "RC_VANHORN_GEN_STORE_GUARD_DOG";
			case 458:
				return "RC_VANHORN_TOWN_DRUNK";
			case 459:
				return "RC_VANHORN_TOWN_GRIEFER";
			case 460:
				return "RC_VANHORN_PROSTITUTE_1";
			case 461:
				return "RC_VANHORN_PROSTITUTE_2";
			case 462:
				return "RC_VANHORN_HORSE_1";
			case 463:
				return "RC_VANHORN_GOAT_1";
			case 464:
				return "RC_VANHORN_STATION_CLERK";
			case 465:
				return "RC_VANHORN_MUSICIAN";
			case 466:
				return "RC_STRAWBERRY_SHERRIFF";
			case 467:
				return "RC_STRAWBERRY_SHERRIFF_DEPUTY";
			case 468:
				return "RC_STRAWBERRY_GENERAL_STORE";
			case 469:
				return "RC_STRAWBERRY_FISHERMAN";
			case 470:
				return "RC_STRAWBERRY_FREIGHT_STATION_OWNER";
			case 471:
				return "RC_STRAWBERRY_NEWSPAPER_VENDOR";
			case 472:
				return "RC_STRAWBERRY_BUTCHER";
			case 473:
				return "RC_STRAWBERRY_HORSE_SHOP_OWNER";
			case 474:
				return "RC_STRAWBERRY_HORSESHOP_RANCHHAND";
			case 475:
				return "RC_STRAWBERRY_BLACKSMITH";
			case 476:
				return "RC_STRAWBERRY_PERSCHAR_HORSES";
			case 477:
				return "RC_STRAWBERRY_MAYOR";
			case 478:
				return "RC_STRAWBERRY_RANCHER";
			case 479:
				return "RC_STRAWBERRY_WOOD_CHOPPER_1";
			case 480:
				return "RC_STRAWBERRY_WOOD_CHOP_WIFE";
			case 481:
				return "RC_STRAWBERRY_CONSTRUCTION_1";
			case 482:
				return "RC_STRAWBERRY_CONSTRUCTION_2";
			case 483:
				return "RC_STRAWBERRY_CONSTRUCTION_3";
			case 484:
				return "RC_STRAWBERRY_CONSTRUCTION_WIFE_1";
			case 485:
				return "RC_STRAWBERRY_CONSTRUCTION_WIFE_2";
			case 486:
				return "RC_STRAWBERRY_WELCOME_CENTER_CLERK";
			case 487:
				return "RC_STRAWBERRY_LAZY_WORKER";
			case 488:
				return "RC_STRAWBERRY_TOWN_WORKER_1";
			case 489:
				return "RC_STRAWBERRY_TOWN_WORKER_2";
			case 490:
				return "RC_STRAWBERRY_TOWN_WORKER_3";
			case 491:
				return "RC_STRAWBERRY_TOURIST_MALE_1";
			case 492:
				return "RC_STRAWBERRY_TOURIST_MALE_2";
			case 493:
				return "RC_STRAWBERRY_PRISONER_01";
			case 494:
				return "RC_STRAWBERRY_HUMAN_LAST";
			case 495:
				return "RC_STRAWBERY_ANIMAL_FIRST";
			case 496:
				return "RC_STRAWBERRY_TOWN_DOG";
			case 497:
				return "RC_SWANSON_STATION_FIRST";
			case 498:
				return "RC_SWANSON_STATION_DOG";
			case 499:
				return "RC_SWANSON_STATION_CARETAKER";
			case 500:
				return "RC_SWANSON_STATION_CARETAKER_2";
			case 501:
				return "RC_BENEDICT_POINT_TRAIN_STATION_WORKER";
			case 502:
				return "RC_BLACKWATER_BARTENDER";
			case 503:
				return "RC_BLACKWATER_POLICE_CHIEF";
			case 504:
				return "RC_BLACKWATER_POLICE_DEPUTY";
			case 505:
				return "RC_BLACKWATER_PRISONER_01";
			case 506:
				return "RC_BLACKWATER_PRISONER_02";
			case 507:
				return "RC_BLACKWATER_GENERAL_STORE";
			case 508:
				return "RC_BLACKWATER_PHOTOGRAPHER";
			case 509:
				return "RC_BLACKWATER_PIANO_PLAYER";
			case 510:
				return "RC_BLACKWATER_HORSE_SHOP_OWNER";
			case 511:
				return "RC_BLACKWATER_HORSES";
			case 512:
				return "RC_BLACKWATER_COWS";
			case 513:
				return "RC_BLACKWATER_BANK_CLERK";
			case 514:
				return "RC_BLACKWATER_BANK_GUARD";
			case 515:
				return "RC_BLACKWATER_TAILOR";
			case 516:
				return "RC_BLACKWATER_TRAIN_WORKER";
			case 517:
				return "RC_BLACKWATER_CHICKENS_01";
			case 518:
				return "RC_BLACKWATER_NEWSPAPER";
			case 519:
				return "RC_BLACKWATER_TICKET_VENDOR";
			case 520:
				return "RC_BLACKWATER_LIVERY_WORKER";
			case 521:
				return "RC_BLACKWATER_LIVERY_WORKER_02";
			case 522:
				return "RC_BLACKWATER_LIVERY_WORKER_02_WIFE";
			case 523:
				return "RC_BLACKWATER_BARBER";
			case 524:
				return "RC_BLACKWATER_BLACKSMITH";
			case 525:
				return "RC_BLACKWATER_BLACKSMITH_DOG";
			case 526:
				return "RC_BLA_BUTCHER";
			case 527:
				return "RC_BLACKWATER_CARRIAGE_HOUSE";
			case 528:
				return "RC_BLACKWATER_CHEF";
			case 529:
				return "RC_BLACKWATER_CONSTRUCTION_01";
			case 530:
				return "RC_BLACKWATER_CONSTRUCTION_02";
			case 531:
				return "RC_BLACKWATER_CONSTRUCTION_03";
			case 532:
				return "RC_BLACKWATER_CONSTRUCTION_04";
			case 533:
				return "RC_BLACKWATER_CONSTRUCTION_ASSISTANT";
			case 534:
				return "RC_BLACKWATER_CONSTRUCTION_BOSS";
			case 535:
				return "RC_BLACKWATER_CONSTRUCTION_FOREMAN_1";
			case 536:
				return "RC_BLACKWATER_CONSTRUCTION_FOREMAN_2";
			case 537:
				return "RC_BLACKWATER_GROCERY_FARMER";
			case 538:
				return "RC_BLACKWATER_HANDYMAN_1";
			case 539:
				return "RC_BLACKWATER_HANDYMAN_2";
			case 540:
				return "RC_BLACKWATER_HOMEOWNER_1";
			case 541:
				return "RC_BLACKWATER_HOMEOWNER_2";
			case 542:
				return "RC_BLACKWATER_SLUM_01";
			case 543:
				return "RC_BLACKWATER_SLUM_WIFE_01";
			case 544:
				return "RC_BLACKWATER_TENT_CHEF";
			case 545:
				return "RC_BLACKWATER_TENT_CHEF_WIFE";
			case 546:
				return "RC_BLACKWATER_WAGON_DELIVERY_1";
			case 547:
				return "RC_BLACKWATER_LAST";
			case 548:
				return "RC_DOWNS_RANCH_FIRST";
			case 549:
				return "RC_DOWNS_RANCH_MOTHER";
			case 550:
				return "RC_DOWNS_RANCH_SON";
			case 551:
				return "RC_DOWNS_RANCH_RANCH_HAND";
			case 552:
				return "RC_DOWNS_RANCH_DEMO_COWS";
			case 553:
				return "RC_DOWNS_RANCH_DEMO_COWS_2";
			case 554:
				return "RC_DOWNS_RANCH_PIGS";
			case 555:
				return "RC_DOWNS_RANCH_GOATS";
			case 556:
				return "RC_DOWNS_RANCH_OX";
			case 557:
				return "RC_DOWNS_RANCH_FRIENDLY_DOG";
			case 558:
				return "RC_DOWNS_RANCH_GUARD_DOG";
			case 559:
				return "RC_DOWNS_RANCH_HUSBAND";
			case 560:
				return "RC_CORNWALL_K_AND_T_LAST_MP";
			case 561:
				return "RC_CORNWALL_K_AND_T_WORKER_2";
			case 562:
				return "RC_CORNWALL_K_AND_T_FOREMAN";
			case 563:
				return "RC_CORNWALL_K_AND_T_FOREMAN_2";
			case 564:
				return "RC_CORNWALL_K_AND_T_DOG";
			case 565:
				return "RC_CORNWALL_K_AND_T_DOG_2";
			case 566:
				return "RC_CORNWALL_K_AND_T_GUARD_1";
			case 567:
				return "RC_CORNWALL_K_AND_T_GUARD_2";
			case 568:
				return "RC_CORNWALL_K_AND_T_GUARD_3";
			case 569:
				return "RC_CORNWALL_K_AND_T_GUARD_4";
			case 570:
				return "RC_CORNWALL_K_AND_T_GUARD_5";
			case 571:
				return "RC_CORNWALL_K_AND_T_GUARD_6";
			case 572:
				return "RC_CORNWALL_K_AND_T_GUARD_7";
			case 573:
				return "RC_CORNWALL_K_AND_T_GUARD_8";
			case 574:
				return "RC_CORNWALL_K_AND_T_GUARD_9";
			case 575:
				return "RC_CORNWALL_K_AND_T_GUARD_10";
			case 576:
				return "RC_CORNWALL_K_AND_T_GUARD_11";
			case 577:
				return "RC_CORNWALL_K_AND_T_GUARD_12";
			case 578:
				return "RC_CORNWALL_K_AND_T_GUARD_13";
			case 579:
				return "RC_CORNWALL_K_AND_T_GUARD_14";
			case 580:
				return "RC_CORNWALL_K_AND_T_GUARD_15";
			case 581:
				return "RC_CORNWALL_K_AND_T_GUARD_16";
			case 582:
				return "RC_CORNWALL_K_AND_T_GUARD_17";
			case 583:
				return "RC_EMERALD_RANCH_FATHER";
			case 584:
				return "RC_EMERALD_RANCH_TRAINSTATIONWKR";
			case 585:
				return "RC_EMERALD_RANCH_GARDENER";
			case 586:
				return "RC_EMERALD_RANCH_GARDENER_02";
			case 587:
				return "RC_EMERALD_RANCH_HANDYMAN";
			case 588:
				return "RC_EMERALD_RANCH_FARMHAND_01";
			case 589:
				return "RC_EMERALD_RANCH_FARMHAND_02";
			case 590:
				return "RC_EMERALD_RANCH_FARMHAND_03";
			case 591:
				return "RC_EMERALD_RANCH_FARMHAND_04";
			case 592:
				return "RC_EMERALD_RANCH_SON_01";
			case 593:
				return "RC_EMERALD_RANCH_ANIMAL_FIRST";
			case 594:
				return "RC_EMERALD_RANCH_SHEEP_B";
			case 595:
				return "RC_EMERALD_RANCH_SHEEP_C";
			case 596:
				return "RC_EMERALD_RANCH_CAT";
			case 597:
				return "RC_EMERALD_RANCH_CAT_02";
			case 598:
				return "RC_EMERALD_RANCH_CHICKENS";
			case 599:
				return "RC_EMERALD_RANCH_COWS";
			case 600:
				return "RC_EMERALD_RANCH_DOG";
			case 601:
				return "RC_EMERALD_RANCH_DOG_02";
			case 602:
				return "RC_EMERALD_RANCH_DOG_03";
			case 603:
				return "RC_EMERALD_RANCH_GOATS";
			case 604:
				return "RC_EMERALD_RANCH_HORSES";
			case 605:
				return "RC_EMERALD_RANCH_OX";
			case 606:
				return "RC_EMERALD_RANCH_LAST";
			case 607:
				return "RC_BRAITHWAITE_MANOR_FIRST";
			case 608:
				return "RC_BRAITHWAITE_MANOR_STABLE_HAND_2";
			case 609:
				return "RC_BRAITHWAITE_MANOR_OXEN";
			case 610:
				return "RC_BRAITHWAITE_MANOR_HORSES_01";
			case 611:
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD";
			case 612:
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD_2";
			case 613:
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD_3";
			case 614:
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD_4";
			case 615:
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD";
			case 616:
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_2";
			case 617:
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_3";
			case 618:
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_4";
			case 619:
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_5";
			case 620:
				return "RC_CALIGA_HALL_FIRST";
			case 621:
				return "RC_CALIGA_HALL_FIELD_GUARD";
			case 622:
				return "RC_CALIGA_HALL_FIELD_GUARD_2";
			case 623:
				return "RC_CALIGA_HALL_FIELD_GUARD_3";
			case 624:
				return "RC_CALIGA_HALL_FIELD_GUARD_4";
			case 625:
				return "RC_CALIGA_HALL_GATE_GUARD";
			case 626:
				return "RC_CALIGA_HALL_GATE_GUARD_2";
			case 627:
				return "RC_CALIGA_HALL_HORSE_GUARD";
			case 628:
				return "RC_CALIGA_HALL_HORSE_GUARD_2";
			case 629:
				return "RC_CALIGA_HALL_HOUSE_GUARD";
			case 630:
				return "RC_CALIGA_HALL_HOUSE_GUARD_2";
			case 631:
				return "RC_CALIGA_HALL_HOUSE_GUARD_3";
			case 632:
				return "RC_CALIGA_HALL_HOUSE_GUARD_4";
			case 633:
				return "RC_CALIGA_HALL_MULE";
			case 634:
				return "RC_CALIGA_HALL_OX_1";
			case 635:
				return "RC_CALIGA_HALL_LAST";
			case 636:
				return "RC_CLEMENS_COVE_FIRST";
			case 637:
				return "RC_CLEMENS_COVE_LAST";
			case 638:
				return "RC_LAGRAS_FATHER_1";
			case 639:
				return "RC_LAGRAS_MOTHER_1";
			case 640:
				return "RC_LAGRAS_MOTHER_2";
			case 641:
				return "RC_LAGRAS_MOTHER_3";
			case 642:
				return "RC_LAGRAS_F_TEEN_1";
			case 643:
				return "RC_LAGRAS_F_TEEN_2";
			case 644:
				return "RC_LAGRAS_FISHERMAN_1";
			case 645:
				return "RC_LAGRAS_FISHERMAN_2";
			case 646:
				return "RC_LAGRAS_FISHERMAN_4";
			case 647:
				return "RC_LAGRAS_DOG_1";
			case 648:
				return "RC_LAGRAS_DOG_2";
			case 649:
				return "RC_LAGRAS_GOAT";
			case 650:
				return "RC_LAGRAS_LAST";
			case 651:
				return "RC_ORANGE_PLANTATION_FOREMAN";
			case 652:
				return "RC_ORANGE_PLANTATION_GUARD";
			case 653:
				return "RC_BUTCHER_CREEK_FIRST";
			case 654:
				return "RC_BUTCHER_CREEK_M_CONSTRUCTION_DRUNK_2";
			case 655:
				return "RC_BUTCHER_CREEK_M_FISHERMAN";
			case 656:
				return "RC_BUTCHER_CREEK_M_FISHERMAN_FRIEND";
			case 657:
				return "RC_BUTCHER_CREEK_RESIDENT_FATHER";
			case 658:
				return "RC_BUTCHER_CREEK_RESIDENT_MOTHER";
			case 659:
				return "RC_BUTCHER_CREEK_SHAMAN";
			case 660:
				return "RC_BUTCHER_CREEK_RESIDENT_SON";
			case 661:
				return "RC_BUTCHER_CREEK_SHACK_MAID_1";
			case 662:
				return "RC_BUTCHER_CREEK_SHACK_MAID_2";
			case 663:
				return "RC_BUTCHER_CREEK_F_SUPPLY_SHACK_CIV_1";
			case 664:
				return "RC_BUTCHER_CREEK_M_SUPPLY_SHACK_CIV_2";
			case 665:
				return "RC_BUTCHER_CREEK_M_SUPPLY_SHACK_CIV_3";
			case 666:
				return "RC_BUTCHER_CREEK_RESIDENT_MALE_1";
			case 667:
				return "RC_BUTCHER_CREEK_HUMAN_LAST";
			case 668:
				return "RC_BUTCHER_CREEK_ANIMAL_FIRST";
			case 669:
				return "RC_BUTCHER_CREEK_CHICKENS_2";
			case 670:
				return "RC_BUTCHER_CREEK_CHICKENS_3";
			case 671:
				return "RC_BUTCHER_CREEK_CHICKENS_4";
			case 672:
				return "RC_BUTCHER_CREEK_CHICKENS_5";
			case 673:
				return "RC_BUTCHER_CREEK_GOAT_1";
			case 674:
				return "RC_BUTCHER_CREEK_GOAT_2";
			case 675:
				return "RC_BUTCHER_CREEK_GOAT_3";
			case 676:
				return "RC_BUTCHER_CREEK_RESIDENT_DOG_1";
			case 677:
				return "RC_BUTCHER_CREEK_RESIDENT_DOG_2";
			case 678:
				return "RC_BUTCHER_CREEK_OX_1";
			case 679:
				return "RC_BUTCHER_CREEK_PIGS_1";
			case 680:
				return "RC_BUTCHER_CREEK_ROAMING_PIG";
			case 681:
				return "RC_BUTCHER_CREEK_ROOSTER_1";
			case 682:
				return "RC_BUTCHER_CREEK_ROOSTER_2";
			case 683:
				return "RC_BUTCHER_CREEK_SOLITARY_FARMER";
			case 684:
				return "RC_BUTCHER_CREEK_SOLITARY_DOG";
			case 685:
				return "RC_OLD_FORT_WALLACE_FIRST";
			case 686:
				return "RC_OLD_FORT_WALLACE_ARMY_MALE_2";
			case 687:
				return "RC_OLD_FORT_WALLACE_ARMY_MALE_3";
			case 688:
				return "RC_OLD_FORT_WALLACE_ARMY_DOG";
			case 689:
				return "RC_OLD_FORT_WALLACE_ARMY_DOG_2";
			case 690:
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_1";
			case 691:
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_2";
			case 692:
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_3";
			case 693:
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_4";
			case 694:
				return "RC_OLD_FORT_WALLACE_LAST";
			case 695:
				return "RC_WAPITI_FIRST";
			case 696:
				return "RC_WAPITI_MEDICINEMAN";
			case 697:
				return "RC_WAPITI_OFFICIAL";
			case 698:
				return "RC_WAPITI_HEADBRAVE";
			case 699:
				return "RC_WAPITI_SIOUXCHEF";
			case 700:
				return "RC_WAPITI_HORSE_1";
			case 701:
				return "RC_WAPITI_HORSE_2";
			case 702:
				return "RC_WAPITI_LAST";
			case 703:
				return "RC_PRONGHORN_RANCH_FIRST";
			case 704:
				return "RC_PRONGHORN_RANCH_TOM_DICKENS";
			case 705:
				return "RC_PRONGHORN_RANCH_MRS_GEDDES";
			case 706:
				return "RC_PRONGHORN_RANCH_ANGUS_GEDDES";
			case 707:
				return "RC_PRONGHORN_RANCH_DUNCAN_GEDDES";
			case 708:
				return "RC_PRONGHORN_RANCH_ABE";
			case 709:
				return "RC_PRONGHORN_RANCH_DOG";
			case 710:
				return "RC_PRONGHORN_RANCH_COWS_1";
			case 711:
				return "RC_PRONGHORN_RANCH_HORSES_1";
			case 712:
				return "RC_PRONGHORN_RANCH_OXEN_1";
			case 713:
				return "RC_PRONGHORN_RANCH_RANCHHAND_1";
			case 714:
				return "RC_PRONGHORN_RANCH_RANCHHAND_2";
			case 715:
				return "RC_PRONGHORN_RANCH_RANCHHAND_3";
			case 716:
				return "RC_PRONGHORN_RANCH_RANCHHAND_4";
			case 717:
				return "RC_PRONGHORN_RANCH_RANCHHAND_5";
			case 718:
				return "RC_MANZANITA_POST_FIRST";
			case 719:
				return "RC_MANZANITA_POST_ARTIST";
			case 720:
				return "RC_MANZANITA_POST_ARTIST_WIFE";
			case 721:
				return "RC_MANZANITA_POST_BLACKSMITH";
			case 722:
				return "RC_MANZANITA_POST_BLACKSMITH_WIFE";
			case 723:
				return "RC_MANZANITA_POST_WORKER";
			case 724:
				return "RC_MANZANITA_POST_WORKER_WIFE";
			case 725:
				return "RC_ABERDEEN_PIG_FARM_BROTHER";
			case 726:
				return "RC_ABERDEEN_PIG_FARM_LAST";
			case 727:
				return "RC_LARNED_SOD_TENANT_01";
			case 728:
				return "RC_LARNED_SOD_GOAT";
			case 729:
				return "RC_LARNED_SOD_DOG";
			case 730:
				return "RC_CARMODY_DELL_FIRST";
			case 731:
				return "RC_CARMODY_DELL_DOG";
			case 732:
				return "RC_CARMODY_DELL_BULL";
			case 733:
				return "RC_CARMODY_DELL_DONKEY";
			case 734:
				return "RC_CARMODY_DELL_TENANT_02";
			case 735:
				return "RC_CATFISH_JACKSON_FATHER";
			case 736:
				return "RC_CATFISH_JACKSON_SON_OLDER";
			case 737:
				return "RC_CATFISH_JACKSON_LAST";
			case 738:
				return "RC_WATSONS_CABIN_LAST";
			case 739:
				return "RC_CROP_FARM_FIRST";
			case 740:
				return "RC_CROP_FARM_RANCH_HAND";
			case 741:
				return "RC_CROP_FARM_FRIENDLY_DOG";
			case 742:
				return "RC_CROP_FARM_GUARD_DOG";
			case 743:
				return "RC_CROP_FARM_MULE";
			case 744:
				return "RC_CROP_FARM_LAST";
			case 745:
				return "RC_GRANGERS_HOGGERY_RANCH_HAND";
			case 746:
				return "RC_GRANGERS_HOGGERY_ROOSTER";
			case 747:
				return "RC_GRANGERS_HOGGERY_PIGS";
			case 748:
				return "RC_GRANGERS_HOGGERY_LAST";
			case 749:
				return "RC_DAIRY_FARM_BULL";
			case 750:
				return "RC_DAIRY_FARM_COWS_PERSCHAR_1";
			case 751:
				return "RC_DAIRY_FARM_COWS_PERSCHAR_2";
			case 752:
				return "RC_DAIRY_FARM_COWS_PERSCHAR_3";
			case 753:
				return "RC_DAIRY_FARM_DONKEY";
			case 754:
				return "RC_DAIRY_FARM_RANCHER";
			case 755:
				return "RC_DAIRY_FARM_RANCH_HAND";
			case 756:
				return "RC_DAIRY_FARM_GUARD_DOG";
			case 757:
				return "RC_DAIRY_FARM_SICK_COW";
			case 758:
				return "RC_LONNIES_SHACK_FIRST";
			case 759:
				return "RC_LONNIES_SHACK_TENANT_2";
			case 760:
				return "RC_LONNIES_SHACK_TENANT_3";
			case 761:
				return "RC_LONNIES_SHACK_LAST";
			case 762:
				return "RC_MACLEANS_HOUSE_COWS_A";
			case 763:
				return "RC_MACLEANS_HOUSE_COWS_B";
			case 764:
				return "RC_MACLEANS_HOUSE_COWS_C";
			case 765:
				return "RC_MACLEANS_HOUSE_PIGS";
			case 766:
				return "RC_MACLEANS_HOUSE_LAST";
			case 767:
				return "RC_MACFARLANES_RANCH_CAT";
			case 768:
				return "RC_MACFARLANES_RANCH_CHICKENS_1";
			case 769:
				return "RC_MACFARLANES_RANCH_CHICKENS_2";
			case 770:
				return "RC_MACFARLANES_RANCH_DOG_1";
			case 771:
				return "RC_MACFARLANES_RANCH_DOG_2";
			case 772:
				return "RC_MACFARLANES_RANCH_ROOSTER_1";
			case 773:
				return "RC_MACFARLANES_RANCH_LAST";
			case 774:
				return "RC_PAINTED_SKY_RANCHHAND_02";
			case 775:
				return "RC_PAINTED_SKY_DOG";
			case 776:
				return "RC_PAINTED_SKY_LAST";
			case 777:
				return "RC_RATHSKELLER_FORK_RANCHER";
			case 778:
				return "RC_RATHSKELLER_FORK_RANCH_HAND";
			case 779:
				return "RC_RATHSKELLER_FORK_DOG_1";
			case 780:
				return "RC_RATHSKELLER_FORK_DOG_2";
			case 781:
				return "RC_RATHSKELLER_FORK_DOG_3";
			case 782:
				return "RC_RATHSKELLER_FORK_DOG_4";
			case 783:
				return "RC_RATHSKELLER_FORK_CHICKENS";
			case 784:
				return "RC_RATHSKELLER_FORK_GOATS";
			case 785:
				return "RC_RIDGEWOOD_FARM_FIRST";
			case 786:
				return "RC_RIDGEWOOD_FARM_HORSES_2";
			case 787:
				return "RC_RIDGEWOOD_FARM_LAST";
			case 788:
				return "RC_CHEZ_PORTER_FATHER";
			case 789:
				return "RC_CHEZ_PORTER_DAUGHTER";
			case 790:
				return "RC_CHEZ_PORTER_SON_01";
			case 791:
				return "RC_CHEZ_PORTER_SON_02";
			case 792:
				return "RC_CHEZ_PORTER_SON_03";
			case 793:
				return "RC_ROCKY_SEVEN_FIRST";
			case 794:
				return "RC_ROCKY_SEVEN_LAST";
			case 795:
				return "RC_RIGGS_STATION_POSTMASTER";
			case 796:
				return "RC_WALLACE_STATION_TRAIN_CLERK";
			case 797:
				return "RC_WALLACE_STATION_LAST";
			case 798:
				return "RC_SCARLETT_HORSE_SHOP_OWNER";
			case 799:
				return "RC_SCARLETT_PERSCHAR_HORSES";
			case 800:
				return "RC_SCARLETT_HORSE_SHOP_LAST";
			case 801:
				return "RC_EA_APPLESEED_FIRST";
			case 802:
				return "RC_EA_APPLESEED_DOG";
			case 803:
				return "RC_EA_APPLESEED_DOG_LAST";
			case 804:
				return "RC_EA_APPLESEED_CHOPPER_1";
			case 805:
				return "RC_EA_APPLESEED_CHOPPER_2";
			case 806:
				return "RC_EA_APPLESEED_CHOPPER_3";
			case 807:
				return "RC_EA_APPLESEED_CHOPPER_4";
			case 808:
				return "RC_EA_APPLESEED_WORKER_01";
			case 809:
				return "RC_EA_APPLESEED_WORKER_02";
			case 810:
				return "RC_EA_APPLESEED_WORKER_03";
			case 811:
				return "RC_EA_APPLESEED_WORKER_04";
			case 812:
				return "RC_EA_APPLESEED_WORKER_05";
			case 813:
				return "RC_EA_APPLESEED_WORKER_06";
			case 814:
				return "RC_EA_APPLESEED_WORKER_07";
			case 815:
				return "RC_EA_APPLESEED_WORKER_08";
			case 816:
				return "RC_EA_APPLESEED_WORKER_09";
			case 817:
				return "RC_EA_APPLESEED_WORKER_10";
			case 818:
				return "RC_EA_APPLESEED_WORKER_11";
			case 819:
				return "RC_EA_APPLESEED_WORKER_12";
			case 820:
				return "RC_EA_APPLESEED_WORKER_13";
			case 821:
				return "RC_EA_APPLESEED_WORKER_14";
			case 822:
				return "RC_EA_APPLESEED_WORKER_15";
			case 823:
				return "RC_EA_APPLESEED_WORKER_16";
			case 824:
				return "RC_EA_APPLESEED_WORKER_17";
			case 825:
				return "RC_EA_APPLESEED_WORKER_18";
			case 826:
				return "RC_EA_APPLESEED_WORKER_19";
			case 827:
				return "RC_EA_APPLESEED_WORKER_LAST";
			case 828:
				return "RC_EA_CENTRAL_RAILROAD_FOREMAN";
			case 829:
				return "RC_EA_CENTRAL_RAILROAD_GUARD_01";
			case 830:
				return "RC_EA_CENTRAL_RAILROAD_GUARD_02";
			case 831:
				return "RC_EA_CENTRAL_RAILROAD_GUARD_03";
			case 832:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_01";
			case 833:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_02";
			case 834:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_03";
			case 835:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_04";
			case 836:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_05";
			case 837:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_06";
			case 838:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_07";
			case 839:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_08";
			case 840:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_09";
			case 841:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_10";
			case 842:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_11";
			case 843:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_12";
			case 844:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_13";
			case 845:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_14";
			case 846:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_15";
			case 847:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_16";
			case 848:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_17";
			case 849:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_18";
			case 850:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_19";
			case 851:
				return "RC_EA_CENTRAL_RAILROAD_WORKER_20";
			case 852:
				return "RC_CML_FIRST";
			case 853:
				return "RC_CML_CARMODY_DELL_BULL";
			case 854:
				return "RC_CML_CARMODY_DELL_DONKEY";
			case 855:
				return "RC_GRZ_BEAR";
			case 856:
				return "RC_GRZ_CARMODY_DELL_COWS";
			case 857:
				return "RC_GRZ_CARMODY_DELL_BULL";
			case 858:
				return "RC_GRZ_CARMODY_DELL_DONKEY";
			case 859:
				return "RC_GRZ_RAVEN";
			case 860:
				return "RC_HRT_DEER_HERD_PERSCHAR_1";
			case 861:
				return "RC_HRT_PRONGHORN_HERD_PERSCHAR_1";
			case 862:
				return "RC_HRT_BUFFALO_HERD_PERSCHAR_1";
			case 863:
				return "RC_HRT_CARMODY_DELL_TENANT_01";
			case 864:
				return "RC_HRT_CARMODY_DELL_COWS";
			default:
				break;
		}
		if (iParam1 >= 1)
		{
			DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
		}
		return "ENUM_NOT_FOUND";
	}
	if (iParam0 <= 948)
	{
		switch (iParam0)
		{
			case 865:
				return "RC_HRT_CARMODY_DELL_BULL";
			case 866:
				return "RC_HRT_CARMODY_DELL_DONKEY";
			case 867:
				return "RC_HRT_CRO_RANCH_HAND_2";
			case 868:
				return "RC_HRT_LAST";
			case 869:
				return "RC_GAP_WILD_FIRST";
			case 870:
				return "RC_GAP_WILD_LAST";
			case 871:
				return "RC_GRT_WILD_FIRST";
			case 872:
				return "RC_GRT_WILD_LAST";
			case 873:
				return "RC_BGV_COUGAR_1";
			case 874:
				return "RC_BGV_WOLVES_1";
			case 875:
				return "RC_BIG_VALLEY_DEER_HERD_PERSCHAR_1";
			case 876:
				return "RC_BGV_WILD_LAST";
			case 877:
				return "RC_BGV_FIRST";
			case 878:
				return "RC_BGV_DELIVERY_2";
			case 879:
				return "RC_BGV_LAST";
			case 880:
				return "RC_GAP_FIRST";
			case 881:
				return "RC_GAP_DELIVERY_RESIDENT_2";
			case 882:
				return "RC_CHO_COUGAR_1";
			case 883:
				return "RC_CHO_RIDGEWOOD_FARM_HORSE_SHOP_OWNER";
			case 884:
				return "RC_CHO_RIDGEWOOD_FARM_HORSE_SHOP_WIFE";
			case 885:
				return "RC_CHO_RIDGEWOOD_FARM_HORSE_SHOP_RANCHHAND_1";
			case 886:
				return "RC_CHO_RIDGEWOOD_FARM_HORSE_SHOP_RANCHHAND_2";
			case 887:
				return "RC_HEN_FIRST";
			case 888:
				return "RC_HEN_MACFARLANES_RANCH_COWS_2";
			case 889:
				return "RC_HEN_MACFARLANES_RANCH_RANCH_HAND";
			case 890:
				return "RC_HEN_MACFARLANES_RANCH_RANCH_HAND_2";
			case 891:
				return "RC_HEN_MACFARLANES_RANCH_RANCH_HAND_3";
			case 892:
				return "RC_HEN_MACFARLANES_RANCH_RANCH_HAND_4";
			case 893:
				return "RC_HEN_MACFARLANES_RANCH_BLACKSMITH";
			case 894:
				return "RC_HEN_MACFARLANES_RANCH_RANCHER";
			case 895:
				return "RC_RIO_WILD_FIRST";
			case 896:
				return "RC_ROA_WILD_FIRST";
			case 897:
				return "RC_ROA_WILD_LAST";
			case 898:
				return "RC_ROANOKE_COAL_DELIVERY1";
			case 899:
				return "RC_ROA_MACLEANS_HOUSE_RANCH_HAND";
			case 900:
				return "RC_ROA_MACLEANS_HOUSE_RANCH_HAND_2";
			case 901:
				return "RC_SCM_PANTHER_1";
			case 902:
				return "RC_SCM_FIRST";
			case 903:
				return "RC_SCM_BRAITHWAITE_MANOR_FIELD_GUARD";
			case 904:
				return "RC_SCM_BRAITHWAITE_MANOR_FIELD_GUARD_2";
			case 905:
				return "RC_SCM_BRAITHWAITE_MANOR_FIELD_GUARD_3";
			case 906:
				return "RC_SCM_BRAITHWAITE_MANOR_FIELD_GUARD_4";
			case 907:
				return "RC_SCM_BRAITHWAITE_MANOR_FIELD_GUARD_5";
			case 908:
				return "RC_SCM_BRAITHWAITE_MANOR_FIELD_GUARD_6";
			case 909:
				return "RC_SCM_BRAITHWAITE_MANOR_HORSE_GUARD";
			case 910:
				return "RC_SCM_BRAITHWAITE_MANOR_HORSE_GUARD_2";
			case 911:
				return "RC_SCM_BRAITHWAITE_MANOR_HORSE_GUARD_3";
			case 912:
				return "RC_SCM_CALIGA_GUARD_1";
			case 913:
				return "RC_SCM_CALIGA_GUARD_2";
			case 914:
				return "RC_SCM_HORSE_SHOP_OWNER";
			case 915:
				return "RC_SCM_LOVE_TRIANGLE_OX";
			case 916:
				return "RC_SCM_DAIRY_FARM_RANCH_HAND_1";
			case 917:
				return "RC_SCM_LAST";
			case 918:
				return "RC_TAL_BEAR_1";
			case 919:
				return "RC_TAL_COUGAR_1";
			case 920:
				return "RC_TAL_WILD_LAST";
			case 921:
				return "RC_BAYOU_PANTHER_PERSCHAR_1";
			case 922:
				return "RC_BAYOU_LAGRAS_FATHER_2";
			case 923:
				return "RC_BAYOU_LAGRAS_M_TEEN_1";
			case 924:
				return "RC_BAYOU_LAGRAS_M_TEEN_2";
			case 925:
				return "RC_BAY_LAST";
			case 926:
				return "RC_GLOBAL_BLW_WAGON_DELIVERY_3";
			case 927:
				return "RC_GLOBAL_RHD_SDN_DRIVER_1";
			case 928:
				return "RC_GLOBAL_RHD_SDN_DRIVER_2";
			case 929:
				return "RC_GLO_COAL_DELIVERY3";
			case 930:
				return "RC_GLO_DAIRY_DELIVERY1";
			case 931:
				return "RC_GLO_DAIRY_DELIVERY3";
			case 932:
				return "RC_GLO_LUMBER_DELIVERY1";
			case 933:
				return "RC_GLO_LUMBER_DELIVERY2";
			case 934:
				return "RC_GLO_LUMBER_DELIVERY3";
			case 935:
				return "RC_GLO_OIL_DELIVERY1";
			case 936:
				return "RC_GLO_OIL_DELIVERY_VAL";
			case 937:
				return "RC_GLO_OIL_DELIVERY2";
			case 938:
				return "RC_GLO_OIL_DELIVERY3";
			case 939:
				return "RC_GLO_ORANGE_DELIVERY1";
			case 940:
				return "RC_GLO_ORANGE_DELIVERY2";
			case 941:
				return "RC_GLO_ORANGE_DELIVERY3";
			case 942:
				return "RC_GLO_TIMBER_DELIVERY1";
			case 943:
				return "RC_GLO_TIMBER_DELIVERY2";
			case 944:
				return "RC_GLO_TIMBER_DELIVERY3_PART1";
			case 945:
				return "RC_GLO_TIMBER_DELIVERY3_PART2";
			case 946:
				return "RC_GLO_WILDERNESS_TRAPPER";
			case 947:
				return "RC_NULL_LAST";
			case 948:
				return "MAX_REGIONAL_CHARACTERS";
			default:
				break;
		}
		if (iParam1 >= 1)
		{
			DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
		}
		return "ENUM_NOT_FOUND";
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RC_FLAG_NONE";
		case 1:
			return "RC_STOLEN_FLAG";
		case 2:
			return "RC_INIT_FLAG";
		case 8:
			return "RC_REQUEST_FLAG";
		case 32:
			return "RC_LOCK_DEAD_FLAG";
		case 16:
			return "RC_DISABLE_REGION_CLEANUP";
		case 2048:
			return "RC_REVIVE_ON_CREATE";
		default:
			break;
	}
	return "Multiple RC Flag";
}

int func_196(int iParam0)
{
	return iParam0 * 31;
}

bool func_197()
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
	if (!func_199(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_198()
{
	return Global_1051214;
}

bool func_199(struct<2> Param0)
{
	if (!func_217(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_218(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_200()
{
	if (Global_1196676.f_129 <= 0)
	{
		return func_57(0);
	}
	if (Global_1196676.f_130 < 0 || Global_1196676.f_131 == 0)
	{
		return func_57(0);
	}
	return Global_1196676[Global_1196676.f_130 /*4*/].f_1;
}

bool func_201(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_219(iParam3, &vVar0, &Var3, &uVar6);
	if (func_220(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

char* func_202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SALOON_CONFIG_FLAGS_NONE";
		case 1:
			return "SALOON_CONFIG_FLAGS_LOCKDOWN_ACTIVE";
		case 2:
			return "SALOON_CONFIG_PURCHASE_MADE";
		case 4:
			return "SALOON_CONFIG_PURCHASED_BEER";
		case 8:
			return "SALOON_CONFIG_PURCHASED_WHISKEY";
		case 16:
			return "SALOON_CONFIG_PURCHASED_SOUP";
		case 32:
			return "SALOON_CONFIG_PURCHASED_STEW";
		case 64:
			return "SALOON_CONFIG_PURCHASED_STEAK";
		case 1024:
			return "SALOON_CONFIG_SET_SALOON_BLIP_LOCKED";
		case 2048:
			return "SALOON_CONFIG_SET_SALOON_BLIP_LOCKED_FORCED";
		case 4096:
			return "SALOON_CONFIG_FINISHED_DRINK";
		case 8192:
			return "SALOON_CONFIG_FLAGS_SALOON_UNNAVAILABLE";
		case 16384:
			return "SALOON_CONFIG_FLAGS_SALOON_BLIP_HIDDEN";
		case 32768:
			return "SALOON_CONFIG_FLAGS_SALOON_INTERIOR_BLIPS_HIDDEN";
		case 65536:
			return "SALOON_CONFIG_FLAGS_IN_SALOON";
		case 262144:
			return "SALOON_CONFIG_FLAGS_HIDE_BLIP";
		case 524288:
			return "SALOON_CONFIG_FLAGS_SALOON_POWER_OFF";
		case 1048576:
			return "SALOON_CONFIG_FLAGS_SALOON_POWER_SET";
		case 2097152:
			return "SALOON_CONFIG_FLAGS_CLEAR_BARTENDER_ILO";
		case 4194304:
			return "SALOON_CONFIG_FLAGS_KEEP_BLIP_UNLOCKED";
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

void func_203(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_204(int iParam0)
{
	if (!func_97(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_OWNED_BY_ANY_THREAD - Invalid ", iParam0);
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(Global_1893787[iParam0 /*3*/].f_2);
}

bool func_205(int iParam0)
{
	return iParam0 != 0;
}

bool func_206(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_207(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	return (Global_1915867.f_17884[iParam0] && iParam1) != 0;
}

void func_208(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	Global_1915867.f_17884[iParam0] = (Global_1915867.f_17884[iParam0] || iParam1);
}

void func_209(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	Global_1915867.f_17884[iParam0] = (Global_1915867.f_17884[iParam0] - (Global_1915867.f_17884[iParam0] && iParam1));
}

void func_210(int iParam0)
{
	func_222(func_221(iParam0));
}

bool func_211(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_212()
{
	return true;
}

int func_213(int iParam0)
{
	int iVar0;

	iVar0 = func_152(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_PED_INDEX - Character is invalid");
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

char* func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "SHOP_INVALID";
		case 0:
			return "SHOP_FIRST_NORMAL_SHOP";
		case 1:
			return "SHOP_ASB_POST_OFFICE";
		case 2:
			return "SHOP_ASB_LAST";
		case 3:
			return "SHOP_BGV_FIRST";
		case 4:
			return "SHOP_BGV_TRAPPER_2";
		case 5:
			return "SHOP_BLK_FIRST";
		case 6:
			return "SHOP_BLK_GENERAL_STORE";
		case 7:
			return "SHOP_BLK_GUNSMITH";
		case 8:
			return "SHOP_BLK_BARBER";
		case 9:
			return "SHOP_BLK_BUTCHER";
		case 10:
			return "SHOP_BLK_BARTENDER";
		case 11:
			return "SHOP_BLK_PIANIST";
		case 12:
			return "SHOP_BLK_PHOTO_STUDIO";
		case 13:
			return "SHOP_BLK_HORSE_SHOP";
		case 14:
			return "SHOP_BLK_POST_OFFICE";
		case 15:
			return "SHOP_BLK_TRAIN_STATION";
		case 16:
			return "SHOP_BLK_MUSICIAN_GUITARIST_FIRST";
		case 17:
			return "SHOP_BLK_MUSICIAN_GUITARIST_SECOND";
		case 18:
			return "SHOP_BLK_MUSICIAN_GUITARIST_THIRD";
		case 19:
			return "SHOP_BLK_LAST";
		case 20:
			return "SHOP_MOONSHINE_STILL";
		case 21:
			return "SHOP_EMR_STILL";
		case 22:
			return "SHOP_EMR_FIRST";
		case 23:
			return "SHOP_EMR_GENERAL_STORE";
		case 24:
			return "SHOP_EMR_POST_OFFICE";
		case 25:
			return "SHOP_EMR_TRAIN_STATION";
		case 26:
			return "SHOP_LAG_FIRST";
		case 27:
			return "SHOP_RGG_POST_OFFICE";
		case 28:
			return "SHOP_RGG_TRAIN_STATION";
		case 29:
			return "SHOP_RHO_BANK";
		case 30:
			return "SHOP_RHO_BUTCHER";
		case 31:
			return "SHOP_RHO_FENCE";
		case 32:
			return "SHOP_RHO_STILL";
		case 33:
			return "SHOP_RHO_GENERAL_STORE";
		case 34:
			return "SHOP_RHO_GUNSMITH";
		case 35:
			return "SHOP_RHO_POST_OFFICE";
		case 36:
			return "SHOP_RHO_BARTENDER";
		case 37:
			return "SHOP_RHO_PIANIST";
		case 38:
			return "SHOP_RHO_MUSICIAN_BANJO";
		case 39:
			return "SHOP_RHO_LAST";
		case 40:
			return "SHOP_ROA_FIRST";
		case 41:
			return "SHOP_SCM_FIRST";
		case 42:
			return "SHOP_SDN_BANK";
		case 43:
			return "SHOP_SDN_BARBER";
		case 44:
			return "SHOP_SDN_BUTCHER";
		case 45:
			return "SHOP_SDN_DOCTOR";
		case 46:
			return "SHOP_SDN_FENCE";
		case 47:
			return "SHOP_SDN_STILL";
		case 48:
			return "SHOP_SDN_GENERAL_STORE";
		case 49:
			return "SHOP_SDN_GUNSMITH";
		case 50:
			return "SHOP_SDN_HORSE_SHOP";
		case 51:
			return "SHOP_SDN_POST_OFFICE";
		case 52:
			return "SHOP_SDN_TRAIN_STATION";
		case 53:
			return "SHOP_SDN_TAILOR";
		case 54:
			return "SHOP_SDN_BARTENDER";
		case 55:
			return "SHOP_SDN_PIANIST";
		case 56:
			return "SHOP_SDN_BARTENDER_SLUM";
		case 57:
			return "SHOP_SDN_PIANIST_SLUM";
		case 58:
			return "SHOP_SDN_MUSICIAN_GUITARIST";
		case 59:
			return "SHOP_SDN_MUSICIAN_BANJO";
		case 60:
			return "SHOP_SDN_PHOTO_STUDIO";
		case 61:
			return "SHOP_SDN_THEATER_MP";
		case 62:
			return "SHOP_SDN_THEATER_MAGIC_MP";
		case 63:
			return "SHOP_SDN_LAST";
		case 64:
			return "SHOP_HSO_LAST";
		case 65:
			return "SHOP_CLM_LAST";
		case 66:
			return "SHOP_SHB_PEARSON";
		case 67:
			return "SHOP_BVH_FIRST";
		case 68:
			return "SHOP_STR_FIRST";
		case 69:
			return "SHOP_STR_GENERAL_STORE";
		case 70:
			return "SHOP_STR_WELCOME_CENTER";
		case 71:
			return "SHOP_STR_HORSE_SHOP";
		case 72:
			return "SHOP_STR_MUSICIAN_BANJO";
		case 73:
			return "SHOP_STR_MUSICIAN_GUITARIST";
		case 74:
			return "SHOP_STR_LAST";
		case 75:
			return "SHOP_STR_BARTENDER";
		case 76:
			return "SHOP_TAL_LAST";
		case 77:
			return "SHOP_VAL_FIRST";
		case 78:
			return "SHOP_VAL_BARBER";
		case 79:
			return "SHOP_VAL_BARTENDER";
		case 80:
			return "SHOP_VAL_PIANIST";
		case 81:
			return "SHOP_VAL_BARTENDER_KEANE";
		case 82:
			return "SHOP_VAL_BUTCHER";
		case 83:
			return "SHOP_VAL_DOCTOR";
		case 84:
			return "SHOP_VAL_GENERAL_STORE";
		case 85:
			return "SHOP_VAL_GUNSMITH";
		case 86:
			return "SHOP_VAL_HORSE_SHOP";
		case 87:
			return "SHOP_VAL_POST_OFFICE";
		case 88:
			return "SHOP_VAL_TRAIN_STATION";
		case 89:
			return "SHOP_VAL_THEATER_MAGIC_MP";
		case 90:
			return "SHOP_VAL_HOTEL";
		case 91:
			return "SHOP_VAL_BARTENDER_SLUM";
		case 92:
			return "SHOP_VAN_STILL";
		case 93:
			return "SHOP_VAN_FIRST";
		case 94:
			return "SHOP_VAN_BARTENDER";
		case 95:
			return "SHOP_VAN_PIANIST";
		case 96:
			return "SHOP_VAN_HORSE_SHOP";
		case 97:
			return "SHOP_VAN_TRAIN_STATION";
		case 98:
			return "SHOP_VAN_POST_OFFICE";
		case 99:
			return "SHOP_WAL_GENERAL_STORE";
		case 100:
			return "SHOP_WAL_TRAIN_STATION";
		case 101:
			return "SHOP_WAL_LAST";
		case 102:
			return "SHOP_TBL_GENERAL_STORE";
		case 103:
			return "SHOP_TBL_GUNSMITH";
		case 104:
			return "SHOP_TBL_BUTCHER";
		case 105:
			return "SHOP_TBL_BARTENDER";
		case 106:
			return "SHOP_TBL_PIANIST";
		case 107:
			return "SHOP_TBL_HORSE_SHOP";
		case 108:
			return "SHOP_AMD_GENERAL_STORE";
		case 109:
			return "SHOP_AMD_HONOR_MP";
		case 110:
			return "SHOP_AMD_BARTENDER";
		case 111:
			return "SHOP_AMD_POST_OFFICE";
		case 112:
			return "SHOP_AMD_LAST";
		case 113:
			return "SHOP_ROJ_HONOR_MP";
		case 114:
			return "SHOP_BOJ_HONOR_MP";
		case 115:
			return "SHOP_RYC_STILL";
		case 116:
			return "SHOP_RYC_LAST";
		case 117:
			return "SHOP_BEN_FIRST";
		case 118:
			return "SHOP_LAST_NORMAL_SHOP";
		case 119:
			return "SHOP_DYNAMIC";
		case 120:
			return "SHOP_VAL_BOUNTYHUNTING_MP_RETURN";
		case 121:
			return "SHOP_VAL_COACH";
		case 122:
			return "SHOP_BLK_BOUNTYHUNTING_MP_RETURN";
		case 123:
			return "SHOP_BLK_COACH";
		case 124:
			return "SHOP_SDN_BOUNTYHUNTING_MP_RETURN";
		case 125:
			return "SHOP_SDN_COACH";
		case 126:
			return "SHOP_RHO_BOUNTYHUNTING_MP_RETURN";
		case 127:
			return "SHOP_STR_BOUNTYHUNTING_MP_RETURN";
		case 128:
			return "SHOP_VAN_COACH";
		case 129:
			return "SHOP_ASB_BOUNTYHUNTING_MP_RETURN";
		case 130:
			return "SHOP_THL_FENCE";
		case 131:
			return "SHOP_THL_STILL";
		case 132:
			return "SHOP_BUT_MUSICIAN_BANJO";
		case 133:
			return "SHOP_WILDERNESS_SUPPLIES";
		case 134:
			return "SHOP_MOONSHINE_PROPERTY";
		case 135:
			return "SHOP_RIO_TRAVELLING_SALESMAN";
		case 136:
			return "SHOP_CHO_TRAVELLING_SALESMAN";
		case 137:
			return "SHOP_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "SHOP_TAL_TRAVELLING_SALESMAN";
		case 139:
			return "SHOP_BGV_TRAVELLING_SALESMAN";
		case 140:
			return "SHOP_HRT_E_TRAVELLING_SALESMAN";
		case 141:
			return "SHOP_HRT_W_TRAVELLING_SALESMAN";
		case 142:
			return "SHOP_GRZ_TRAVELLING_SALESMAN";
		case 143:
			return "SHOP_SCM_TRAVELLING_SALESMAN";
		case 144:
			return "SHOP_BLU_TRAVELLING_SALESMAN";
		case 145:
			return "SHOP_DER_TRAVELLING_SALESMAN";
		case 146:
			return "SHOP_BBR_TRAVELLING_SALESMAN";
		case 147:
			return "SHOP_CAMP_TRAVELLING_SALESMAN";
		case 148:
			return "SHOP_CHO_TRAPPER";
		case 149:
			return "SHOP_HEN_HARRIET";
		case 150:
			return "SHOP_BGV_HARRIET";
		case 151:
			return "SHOP_LAST_MP_NON_CARAVAN_SHOP";
		case 152:
			return "SHOP_ANYWHERE_HANDHELD";
		case 153:
			return "SHOP_CAMP_LOCKBOX";
		case 154:
			return "SHOP_CAMP_BUTCHERTABLE";
		case 155:
			return "SHOP_FIRST_CARAVAN_SHOP";
		case 156:
			return "SHOP_BVH_GENERAL_STORE";
		case 157:
			return "SHOP_BVH_GUNSMITH";
		case 158:
			return "SHOP_BVH_HORSE_TRAINER";
		case 159:
			return "SHOP_CLM_DOCTOR";
		case 160:
			return "SHOP_CLM_GENERAL_STORE";
		case 161:
			return "SHOP_CLM_GUNSMITH";
		case 162:
			return "SHOP_CLM_HORSE_TRAINER";
		case 163:
			return "SHOP_CLM_HORSE_FENCE";
		case 164:
			return "SHOP_HSO_DOCTOR";
		case 165:
			return "SHOP_HSO_GENERAL_STORE";
		case 166:
			return "SHOP_HSO_GUNSMITH";
		case 167:
			return "SHOP_HSO_HORSE_TRAINER";
		case 168:
			return "SHOP_LAK_DOCTOR";
		case 169:
			return "SHOP_LAK_GENERAL_STORE";
		case 170:
			return "SHOP_LAK_GUNSMITH";
		case 171:
			return "SHOP_LAK_HORSE_TRAINER";
		case 172:
			return "SHOP_SHB_DOCTOR";
		case 173:
			return "SHOP_SHB_GENERAL_STORE";
		case 174:
			return "SHOP_SHB_GUNSMITH";
		case 175:
			return "SHOP_SHB_HORSE_TRAINER";
		case 176:
			return "SHOP_WEAPON_MOD_STORE";
		case 177:
			return "SHOP_CLOTHING";
		case 178:
			return "SHOP_CAMP_SHAVING";
		case 179:
			return "SHOP_WARDROBE";
		case 180:
			return "NUM_SHOPS";
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

char* func_215(int iParam0)
{
	return func_223(iParam0, 0);
}

bool func_216(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_217(int iParam0)
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

int func_218(int iParam0)
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

void func_219(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_220(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_221(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 139, "GET_SHOP_TYPE_FROM_SHOP - ", func_214(iParam0, 0), " undefined");
	return -1;
}

void func_222(int iParam0)
{
	Global_1915867.f_18247 = iParam0;
}

char* func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147483648:
			return "STF_SHOP_KEEPER_BEEN_KILLED";
		case 0:
			return "STF_NONE";
		case 2:
			return "STF_SHOP_SCRIPT_REQUESTED";
		case 4:
			return "STF_SHOP_REGISTERED";
		case 8:
			return "STF_SHOP_BLIP_ACTIVE";
		case 16:
			return "STF_SHOP_IN_CARAVAN";
		case 32:
			return "STF_SHOP_PERSCHAR_SCHEDULE_PAUSED";
		case 64:
			return "STF_SHOP_THREATENED";
		case 128:
			return "STF_SHOP_TYPE_DISABLED";
		case 256:
			return "STF_SHOP_IS_OPEN";
		case 512:
			return "STF_SHOP_IS_ACTIVE";
		case 1024:
			return "STF_REFRESH_SELL_TAB";
		case 2048:
			return "STF_SHOP_KEEPER_MODEL_LOADED";
		case 4096:
			return "STF_SHOP_KEEPER_CREATED";
		case 8192:
			return "STF_SHOP_KEEPER_TASKED";
		case 16384:
			return "STF_SHOP_CREATED_SCENARIO";
		case 32768:
			return "STF_SHOP_SUPPRESS_ROBBERY_TUTORIALS";
		case 65536:
			return "STF_REQUIRE_EXIT_TO_RESET";
		case 131072:
			return "STF_SHOP_TYPE_CONTEXTS_REQUESTED";
		case 262144:
			return "STF_SHOP_TYPE_CREATED_REL_GROUP";
		case 524288:
			return "STF_SHOP_TYPE_BROKEN_INTO";
		case 1048576:
			return "STF_SHOP_PROP_MODEL_LOADED";
		case 2097152:
			return "STF_SHOP_PROP_CREATED";
		case 4194304:
			return "STF_SHOP_KEEPER_DISABLE_TASKING";
		case 8388608:
			return "STF_SHOP_CONTEXTS_BEING_USED";
		case 16777216:
			return "STF_SHOP_DISABLE_FORCE_WEAPON_HOLSTER";
		case 33554432:
			return "STF_SHOP_PURCHASING_DISABLED";
		case 67108864:
			return "STF_SHOP_KEEPER_ILO_REGISTERED";
		case 134217728:
			return "STF_SHOP_KEEPER_CREATION_DELAYED";
		case 268435456:
			return "STF_SHOP_FORCED_ILO_IS_ON";
		case 536870912:
			return "STF_SHOP_MADE_PURCHASE";
		case 1073741824:
			return "STF_SHOP_TUTORIAL_COMPLETED";
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

