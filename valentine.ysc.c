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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<28> Local_19 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	vector3 vLocal_135 = { 0f, 0f, 0f };
	int iLocal_138 = 0;
	bool bLocal_139 = false;
	int iLocal_140[4] = { 0, 0, 0, 0 };
	bool bLocal_145 = false;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	bool bLocal_152 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	vLocal_135 = { -277.3855f, 805.2767f, 119.1796f };
	iLocal_138 = joaat("UI_BOOK_VALENTINE_JAIL_LEDGER");
	iLocal_146 = -1;
	iLocal_147 = 20000;
	iLocal_150 = vScriptParam_0.x;
	iLocal_148 = vScriptParam_0.z;
	bLocal_152 = false;
	if (Global_1901988.f_1.f_26 > 0)
	{
		func_1();
	}
	DEBUG::_0xF0783374333FD8CE(43688, 17, "**** INITIALIZING REGION: ", &(Global_1887351[vScriptParam_0.x /*36*/].f_23), ", ", &(Global_1887351[iLocal_150 /*36*/].f_24), ", ", &(Global_1887351[iLocal_150 /*36*/].f_27), " ****");
	func_2();
	func_3();
	iLocal_149 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_149)
		{
			iLocal_149 = 0;
			func_5(iLocal_150, &iLocal_148);
			switch (iLocal_148)
			{
				case 0:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), " global init...");
					if (Global_1901988.f_1.f_26 > 0)
					{
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_WAIT_FOR_UGC_EARLY_QUIT");
						iLocal_151 = (MISC::GET_GAME_TIMER() + Global_1901988.f_1.f_26);
						iLocal_148 = 1;
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_INIT_REGION");
						iLocal_148 = 2;
					}
					break;
				case 1:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), " ugc early quit...");
					if (!func_1() || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						bLocal_152 = false;
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_INIT_REGION");
						iLocal_148 = 2;
					}
					break;
				case 2:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), " region init...");
					func_6(iLocal_150);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_150)))
					{
						func_11(func_9(iLocal_150), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_12(iLocal_150));
					Global_1896632 = -1;
					DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_INIT_VOLUME");
					iLocal_151 = (iLocal_147 + MISC::GET_GAME_TIMER());
					iLocal_148 = 3;
					break;
				case 3:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), " volume init...");
					if (func_13() || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_150);
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_LOAD_APPEARANCE");
						iLocal_151 = (MISC::GET_GAME_TIMER() + iLocal_147);
						iLocal_148 = 4;
					}
					break;
				case 4:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), " load appearance...");
					if (func_15(iLocal_150) || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_150);
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_LOAD_SPECIAL");
						iLocal_151 = (MISC::GET_GAME_TIMER() + iLocal_147);
						iLocal_148 = 5;
					}
					break;
				case 5:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), " load special...");
					if (func_17(iLocal_150) || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_150);
						DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_LOAD_PERS_CHARS");
						iLocal_151 = (iLocal_147 + MISC::GET_GAME_TIMER());
						iLocal_148 = 7;
					}
					break;
				case 7:
					DEBUG::_0x1B08D1EB9D8C4931(168, 17, "Waiting for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), " init regional chars...");
					if (func_10(func_9(iLocal_150)))
					{
						if (func_19(func_9(iLocal_150), 4) && !iLocal_151 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_150) || iLocal_151 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_150, 4);
								iLocal_151 = (MISC::GET_GAME_TIMER() + iLocal_147);
								DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_INIT_AMBIENT");
								iLocal_148 = 8;
							}
							Jump @1385; //curOff = 926
							func_22(iLocal_150);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							else
							{
								DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), " AMBIENT MINIGAMES ARE NOT BEING ENABLED AS A STORY OR RCM OR MISSION RETRY IS HAPPENING");
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_150);
							func_30(iLocal_150);
							func_31();
							func_32();
							DEBUG::_0xF0783374333FD8CE(168, 17, UNK_0x8F77B33B6A34D8BA(), ": INIT_CURRENT_REGION_TOWN_DATA FOR ", &(Global_1887351[iLocal_150 /*36*/].f_23));
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), " RBS_INIT_AMBIENT -> RBS_INIT_LAW");
							iLocal_148 = 9;
							Jump @1385; //curOff = 1061
							func_33(iLocal_150);
							func_34();
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_INIT_NAMED_LOCATIONS");
							iLocal_148 = 10;
							Jump @1385; //curOff = 1099
							func_35(&Global_1896686);
							func_36(iLocal_150, &Global_1896686);
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_DONE_INIT");
							iLocal_148 = 11;
							Jump @1385; //curOff = 1145
							DEBUG::_0xF0783374333FD8CE(168, 17, "**** FINISHED INITIALIZING: ", &(Global_1887351[iLocal_150 /*36*/].f_23), " ****");
							func_37(iLocal_150);
							func_21(iLocal_150, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), "-> RBS_RUNNING");
							iLocal_148 = 12;
							Jump @1385; //curOff = 1240
							if (func_40(iLocal_150))
							{
								iLocal_149 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(&Global_1896686, iLocal_150);
							func_42(iLocal_150);
							func_21(iLocal_150, 8);
							if (func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887351[iLocal_150 /*36*/].f_11);
							if (Global_1887351[iLocal_150 /*36*/].f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1887351[iLocal_150 /*36*/].f_12);
							}
							Jump @1385; //curOff = 1341
							DEBUG::_0xA308F935BDECCEC0(40, 17, &(Global_1887351[iLocal_150 /*36*/].f_23), " RBS_CLEANUP");
							func_8();
							func_44(iVar0);
							iVar0++;
						}
						if (Global_1887351[iLocal_150 /*36*/].f_13 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1887351[iLocal_150 /*36*/].f_13);
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
	if (!bLocal_152)
	{
		if (Global_1051140)
		{
			DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), ", g_mpUGC_QuitSessionRequest.bRequestRunning is still true");
			bLocal_152 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), ", a session request is running and a UGC script is running");
			bLocal_152 = true;
			return true;
		}
		DEBUG::_0xF0783374333FD8CE(8, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning FALSE, no early quit running");
		return false;
	}
	if (Global_1051140)
	{
		DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), ", g_mpUGC_QuitSessionRequest.bRequestRunning is still true");
		return true;
	}
	if (func_48())
	{
		DEBUG::_0xF0783374333FD8CE(168, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning TRUE for region ", &(Global_1887351[iLocal_150 /*36*/].f_23), ", content script still running for some player");
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(8, 17, "IS_UGC_CONTENT_EARLY_QUIT_PENDING - Returning FALSE, early quit has finished");
	bLocal_152 = false;
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
	if (((!func_49(-515561750) && func_45() == -1) && !STREAMING::_IS_IMAP_ACTIVE(1186533019)) && !STREAMING::_0xCF45DF50C7775F2A())
	{
		func_50(-892659042);
		func_51();
	}
}

bool func_4()
{
	if (func_45() != -1)
	{
		return !func_52(1, 1);
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
	if (!func_53(iParam0))
	{
		Global_1893599.f_7 = 0;
		func_39(16);
		return;
	}
	if (func_54(8))
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
			func_55(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(2))
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
			func_55(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(16))
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
			func_55(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(4))
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
			func_55(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(1))
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
			func_55(1);
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
	iLocal_56 = Global_1887351[81 /*36*/].f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_56, 19);
	func_56();
	func_57();
	func_58();
	if (func_45() == -1)
	{
		iLocal_82 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHorseShopStables");
		VOLUME::_0x39816F6F94F385AD(iLocal_82, -369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 5.892247f);
		VOLUME::_0x39816F6F94F385AD(iLocal_82, -367.6902f, 770.4435f, 116.8526f, 0f, 0f, 4.150415f, 26.09184f, 5.747657f, 4.724637f);
		VOLUME::_0x39816F6F94F385AD(iLocal_82, -391.6759f, 778.7041f, 116.8526f, 0f, 0f, 4.150415f, 23.39705f, 25.94251f, 4.724637f);
		iLocal_83 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volAuctionStables");
		VOLUME::_0x39816F6F94F385AD(iLocal_83, -257.2065f, 634.5588f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
		VOLUME::_0x39816F6F94F385AD(iLocal_83, -221.2732f, 673.6355f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
		iLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 6.241f, "Valentine - m_volHorseShop");
		iLocal_81 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-361.3393f, 787.48f, 116.4301f, 0f, 0f, 3.999999f, 3.741607f, 3.652877f, 5.744031f, "Valentine - m_volHorseShopOutsideDoor");
		func_59(9, iLocal_81);
		VOLUME::_0xB469CFD9E065EB99(iLocal_80, 10067);
		iLocal_129 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-280.6662f, 915.7495f, 133.066f, 0f, 0f, 0f, 23.88504f, 24.41234f, 15.89547f, "Valentine - m_volGuardDogOwner");
		iLocal_87 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotel Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_87, -325.0124f, 767.5158f, 119.4827f, 0f, 0f, -170.2021f, 8.15436f, 18.38504f, 9.051786f);
		VOLUME::_0x39816F6F94F385AD(iLocal_87, -317.872f, 761.7268f, 118.0002f, 0f, 0f, 11.41397f, 4.27525f, 4.046098f, 2.733858f);
		iLocal_88 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-326.9005f, 777.8173f, 117.6158f, 0f, 0f, -171.616f, 8.5f, 3.390837f, 2.634366f, "Valentine - m_volHotelPorch");
		iLocal_89 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.7273f, 774.2453f, 117.7346f, 0f, 0f, -171.616f, 2.732852f, 1.390837f, 2.634366f, "Valentine - m_volHotelPrompt");
		iLocal_90 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.6349f, 772.4476f, 117.7346f, 0f, 0f, -171.616f, 1.740315f, 1.864735f, 2.634366f, "Valentine - m_volHotelOfflimits");
		iLocal_91 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotelMuteAgg");
		VOLUME::_0x39816F6F94F385AD(iLocal_91, -325.298f, 767.432f, 122.368f, 0f, 0f, -171.616f, 9.71f, 19.745f, 3.774f);
		VOLUME::_0x39816F6F94F385AD(iLocal_91, -317.643f, 761.773f, 118f, 0f, 0f, 11.414f, 4.574f, 4.322f, 2.734f);
		iLocal_125 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.3821f, 771.3976f, 119.9888f, 0f, 0f, 10.06205f, 10.22391f, 17.49704f, 4.699401f, "Valentine - m_volBank");
		iLocal_126 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-308.2203f, 776.1706f, 118.8547f, 0f, 0f, 7.323684f, 1.907036f, 1.483034f, 2.606343f, "Valentine - m_volBankPrompt");
		iLocal_127 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volBankShopOfflimits Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_127, -302.2217f, 769.743f, 118.8547f, 0f, 0f, 10.50366f, 2.072344f, 8.025318f, 2.606343f);
		VOLUME::_0x39816F6F94F385AD(iLocal_127, -309.0788f, 772.8509f, 118.8547f, 0f, 0f, 8.049957f, 5.213456f, 4.413345f, 3.353561f);
		VOLUME::_0x39816F6F94F385AD(iLocal_127, -311.414f, 775.411f, 118.8547f, 0f, 0f, 8.049957f, 1.633f, 1.085f, 3.354f);
		VOLUME::_0xB469CFD9E065EB99(iLocal_125, 10058);
	}
	else
	{
		iLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 5.892247f, "Valentine - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(iLocal_80, 10067);
		iLocal_125 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.3821f, 771.3976f, 119.9888f, 0f, 0f, 10.06205f, 10.22391f, 17.49704f, 4.699401f, "Valentine - m_volBank");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_125, 0, 0, false, -1, -1, 0);
	}
	iLocal_84 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-339.5029f, 767.1139f, 116.61f, 0f, 0f, -171.616f, 9.604842f, 7.286813f, 4.891439f, "Valentine - m_volButcher");
	iLocal_85 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-341.169f, 767.2f, 116.816f, 0f, 0f, -171.203f, 1.376f, 2.537f, 2.48f, "Valentine - m_volButcherPrompt");
	iLocal_86 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-338.5402f, 767.6559f, 116.5175f, 0f, 0f, -171.2032f, 2.147837f, 2.102079f, 2.480459f, "Valentine - m_volButcherOfflimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_84, 10061);
	iLocal_64 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.5829f, 812.947f, 118.7894f, 0f, 0f, 100.1415f, 6.023165f, 3.919236f, 2.442381f, "Valentine - m_volBarberOwner");
	iLocal_63 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.1545f, 812.8f, 118.9254f, 0f, 0f, 100.923f, 4.783854f, 2.636788f, 1.990557f, "Valentine - m_volBarberPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_64, 10059);
	iLocal_65 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.4f, 813.5f, 118.83f, 0f, 0f, 11f, 1.9f, 2.3f, 2.195668f, "Valentine - m_volBarberAvoidance");
	POPULATION::_0xB56D41A694E42E86(iLocal_65, 0, 0, false, -1, -1, 0);
	iLocal_96 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_96, -176.659f, 629.779f, 114.438f, 0f, 0f, -34.98428f, 3.47f, 6.531f, 2.881f);
	VOLUME::_0x39816F6F94F385AD(iLocal_96, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_0x39816F6F94F385AD(iLocal_96, -174.048f, 633.669f, 114.545f, 0f, 0f, -34.84247f, 1.996f, 2.553f, 2.881f);
	VOLUME::_0x39816F6F94F385AD(iLocal_96, -179.166f, 626.498f, 114.545f, 0f, 0f, -34.84247f, 2.314f, 2.553f, 2.881f);
	iLocal_97 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_97, -178.982f, 626.715f, 114.531f, 0f, 0f, -34.84247f, 1.767f, 1.396f, 2.881f);
	iLocal_98 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -176.4711f, 629.9696f, 114.5366f, 0f, 0f, -34.98428f, 3.19526f, 6.32671f, 2.880646f);
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_96, 10068);
	iLocal_66 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 21.384f, 11.9942f, 3.513f, "Valentine - m_volBartenderOwner");
	iLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-312.9f, 799f, 119.3f, 0f, 0f, 97.7f, 2.9f, 1.2f, 2.6f, "Valentine - m_volPianoPlayerOwner");
	iLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-278.0329f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.40093f, 8.344561f, 10.8f, "Valentine - m_volSheriffOwner");
	iLocal_79 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volSheriffStation Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_79, iLocal_77);
	VOLUME::_0x39816F6F94F385AD(iLocal_79, -272.7689f, 809.2057f, 120.423f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
	VOLUME::_0x39816F6F94F385AD(iLocal_79, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
	iLocal_78 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-277.2282f, 807.1215f, 119.472f, 0f, 0f, 9.89185f, 5.00473f, 8.940674f, 2.321479f, "Valentine - m_volSheriffStation Agg");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_78, 5, 1);
	iLocal_95 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-230.464f, 817.354f, 126.643f, 0f, 0f, -34.207f, 19.604f, 29.858f, 13.22f, "BRL_VALENTINE - m_volChurch");
	iLocal_131 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(-290.7f, 728.9f, 118.8f, 100f, 2.5f, 2.5f, 0, 6f, 10f, 25f, 7.5f);
	func_60();
	func_61();
	func_62(81);
	iLocal_100 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-177.812f, 632.287f, 114.537f, 0f, 0f, -34.984f, 8.706f, 22.528f, 2.881f, "Valentine - m_volTrainStation");
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
	iParam0 = iParam0;
	func_63(joaat("P_CHURCHBELL01X"), "props_misc@church_bells", "enter", "loop", "exit", -230.157f, 797.476f, 135.255f, "VAL_SINGLE_TOLL");
	func_64(9, 0, 0);
	func_64(12, 0, 0);
	func_64(19, 0, 0);
	ENTITY::CREATE_MODEL_HIDE(-173.8572f, 642.7699f, 114.0726f, 0.1f, joaat("P_KEROSENETABLELAMP01X"), false);
}

bool func_17(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 11, "REGION_LOAD_SPECIAL - Waiting on load scene before requesting IPL - VAL05_RC_SP_MARY_REMOVEDOORBLOCK");
		return false;
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 11, "REGION_LOAD_SPECIAL - Requesting IPL - VAL05_RC_SP_MARY_REMOVEDOORBLOCK");
		func_50(1777348822);
	}
	return iVar0;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896634[iParam0 /*2*/] && iParam1) != 0;
}

int func_20(int iParam0)
{
	return func_65(iParam0, -1, -1, 0);
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
}

void func_23()
{
}

bool func_24(int iParam0, bool bParam1)
{
	if (func_66(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_67(5000))
		{
			return true;
		}
	}
	switch (func_69(func_68(0)))
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
	if (func_45() != -1)
	{
	}
}

void func_27()
{
	func_70(-534215902, 0, 0);
	func_71(0, -308.9729f, 807.0829f, 117.9797f, iLocal_93, 81);
	func_71(1, -241.294f, 770f, 118.14f, iLocal_94, 81);
}

void func_28()
{
	DEBUG::_0xA308F935BDECCEC0(8, 139, "REGION_INIT_THEATERS -- SAINT DENIS");
	func_72(1, -355.308f, 704.938f, 115.936f, Global_1270027.f_47[1], 5);
}

void func_29(int iParam0)
{
	func_73(0, iLocal_67, iParam0, iLocal_60, iLocal_70, 12, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_74(0, -706941207, 0, 0, 0);
	func_75(0, 0);
	func_73(3, iLocal_71, iParam0, iLocal_61, iLocal_73, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_74(3, 706990067, 0, 0, 0);
	func_74(3, -290089884, 0, 0, 0);
	func_76(3, iLocal_62);
	func_77(3, 8192);
	func_75(3, 0);
	func_73(6, iLocal_74, iParam0, iLocal_57, iLocal_58, 20, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_74(6, 475159788, 0, 0, 0);
	func_74(6, 2042647667, 0, 0, 0);
	func_75(6, 0);
	func_73(25, iLocal_79, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_77(25, 1);
	func_77(25, 16384);
	func_77(25, 8192);
	func_77(25, 536870912);
	func_73(8, iLocal_64, iParam0, iLocal_63, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_77(8, 67108864);
	func_77(8, 2048);
	func_75(8, 0);
	func_73(10, iLocal_84, iParam0, iLocal_85, 0, 460, 1, 0, -1082130432 /* Float: -1f */, 0);
	func_77(10, 536870912);
	func_75(10, 0);
	func_73(36, Global_1270027.f_47[1], iParam0, Global_1270027.f_50[1], 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_73(9, iLocal_80, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	func_77(9, 536870912);
	func_77(9, 16384);
	func_77(9, 32768);
	func_77(9, 1);
	func_77(9, 8388608);
	func_77(9, 8192);
	func_77(9, 4);
	func_77(9, 16777216);
	func_77(9, 67108864);
	if (!func_78() && func_79())
	{
		func_74(9, joaat("VAL_03_STABLE_FRONT_LEFT"), 0, 0, 0);
		func_74(9, joaat("VAL_03_STABLE_FRONT_RIGHT"), 0, 0, 0);
	}
	else
	{
		func_74(9, joaat("VAL_03_STABLE_FRONT_LEFT"), -1f, 1, 1);
		func_74(9, joaat("VAL_03_STABLE_FRONT_RIGHT"), 1f, 1, 1);
	}
	func_73(2, iLocal_96, iParam0, iLocal_97, iLocal_98, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_75(2, 0);
	func_80();
	func_81(79);
	func_81(81);
}

void func_30(int iParam0)
{
	if (func_45() != -1)
	{
		return;
	}
	if (func_82(1, iLocal_66, 1))
	{
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_66, 1, 1);
	}
	func_82(14, iLocal_76, 1);
	func_82(3, iLocal_77, 1);
	func_82(45, iLocal_82, 1);
	func_82(18, iLocal_82, 0);
	func_82(19, iLocal_82, 0);
	func_82(7, iLocal_83, 1);
	func_82(20, iLocal_83, 0);
	func_82(27, iLocal_83, 0);
	func_82(28, iLocal_83, 0);
	if (func_82(37, iLocal_129, 1))
	{
		func_82(51, iLocal_129, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_129, 3, 1);
		if (PERSCHAR::_0x800DF3FC913355F3(func_83(51)))
		{
			VOLUME::_0x53D05D60E5F5B40C(iLocal_129, 3, 1, func_83(51));
		}
	}
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_84(0.8f, 0.2f, 0f, 0f);
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
	func_85(uParam1, iLocal_56, 1);
	func_85(uParam1, iLocal_74, 2);
	func_85(uParam1, iLocal_67, 2);
	func_85(uParam1, iLocal_71, 2);
	func_85(uParam1, iLocal_77, 11);
	func_85(uParam1, iLocal_92, 3);
	func_85(uParam1, iLocal_95, 6);
	func_85(uParam1, iLocal_96, 10);
}

void func_37(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 0, "INITIALIZE_LOCAL_REGION_POPULATION CALLED!");
	if (!func_86(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "INITIALIZE_LOCAL_POPULATION - The value provided for eRegionID is NOT valid!!!");
		return;
	}
	func_87();
	func_88(8, joaat("ANIMALS_PIGS"));
	func_88(0, joaat("VAL_CIVILIANS"));
	func_88(1, joaat("HRT_HORSE_RIDERS"));
	func_88(2, joaat("VAL_LAW_DEPUTIES"));
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
	func_89();
	if (func_90(&bLocal_139))
	{
		if (bLocal_139)
		{
			func_91(joaat("DOOR_VAL_JAIL_SIDE"), 1, 0, 0, 0, 0, 0, 0);
			func_91(joaat("DOOR_VAL_DOC_BACK_RM"), 1, 0f, 0, 0, 1f, 0, 0);
			func_91(joaat("DOOR_VAL_DOC_BACK"), 1, 0, 0, 0, 0, 0, 0);
			func_92(joaat("DOOR_VAL_TRAIN_BOOTHS"), 1);
			func_92(1876749464, 1);
			func_92(1331491364, 1);
			func_92(-408139633, 1);
			func_92(-1652509687, 1);
		}
	}
	func_93(88, iLocal_100, &uLocal_99);
	if (Global_1572887.f_13 != -1)
	{
		func_94();
		return false;
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_95(Global_1940410, 32768)) || func_95(Global_1940410, 16777216))
	{
		return;
	}
	if (func_96(uParam0, 1))
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
	bVar2 = func_97();
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
							if ((!func_98(uParam0[iVar3 /*3*/], 1) && func_99(iParam1)) && !func_100(iParam1, 16))
							{
								DEBUG::_0xF0783374333FD8CE(8, 153, "Display Named Location");
								func_102(iParam1, func_101(), -1, 0, -1, 0);
								func_103(uParam0[iVar3 /*3*/], 1);
							}
							func_104(iParam1, 0);
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
	func_105(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_43()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (func_106(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_107();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		DEBUG::_0xF0783374333FD8CE(168, 17, UNK_0x8F77B33B6A34D8BA(), ": REGION_TOWN_MANANGER_EXIT_TOWN FOR ", &(Global_1887351[iLocal_150 /*36*/].f_23));
		func_21(iLocal_150, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("MPAC_TRAVEL"), joaat("MPAC_TRAVEL_012")))
		{
			switch (iLocal_150)
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
					DEBUG::_0xF0783374333FD8CE(40, 17, "REGION_CLEANUP - Setting the script stat...", func_108(iLocal_150));
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_109(iLocal_150, 0), 1);
					break;
			}
		}
		if (func_10(func_101()))
		{
			func_11(func_101(), 8);
		}
		func_110(iLocal_150, 4);
		func_110(iLocal_150, 8);
		func_105(0);
		if (func_45() == -1)
		{
			func_111(0);
		}
		func_112(iLocal_150);
		func_34();
		return false;
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 139, "@@ REGION_CLEANUP: #", iParam0, " extra loop as load balance");
		if (func_45() == -1)
		{
			func_113(iLocal_150);
			func_114(iLocal_150);
			if (!func_115(iLocal_150, 0))
			{
				return false;
			}
		}
		else if (!func_116(iLocal_150))
		{
			return false;
		}
	}
	DEBUG::_0xF0783374333FD8CE(168, 17, UNK_0x8F77B33B6A34D8BA(), ": Terminating. -- ", &(Global_1887351[iLocal_150 /*36*/].f_23));
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

bool func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_117(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_118(iVar1))
	{
		if (Global_1072032.f_19652.f_24 && !func_119(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072032.f_19652[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_114[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_114[iVar1], iVar2);
}

void func_50(bool bParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(bParam0))
	{
		func_120(bParam0);
	}
}

void func_51()
{
	if (iLocal_146 == -1)
	{
		iLocal_146 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-333.337f, 770.839f, 115.29f, 6.066f, 0.65f, 5.228f, func_121(99.798f), false, 7);
	}
}

bool func_52(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_122(Global_1572887, 0), ", so skipping");
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

bool func_53(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	return func_123(iParam0, 8);
}

bool func_54(int iParam0)
{
	return (Global_1893599.f_7 && iParam0) != 0;
}

void func_55(int iParam0)
{
	Global_1893599.f_7 = (Global_1893599.f_7 - (Global_1893599.f_7 && iParam0));
}

void func_56()
{
	iLocal_60 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.803f, 805.0234f, 119.5f, 0f, 0f, 9.527998f, 1.792473f, 2.89884f, 2.223762f, "Valentine - m_volDoctorPrompt");
	iLocal_67 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShop Agg");
	iLocal_68 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.4778f, 815.4984f, 119.8f, 0f, 0f, -80.4f, 4.936636f, 10.4535f, 2.819574f, "Valentine - m_volDoctorBackroom");
	VOLUME::_0x39816F6F94F385AD(iLocal_67, -286.6589f, 808.6324f, 119.8f, 0f, 0f, -80.4f, 10.38628f, 7.7f, 2.8f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_67, iLocal_68);
	iLocal_70 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShopOff Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_70, -288.5862f, 804.4559f, 119.5f, 0f, 0f, 9.527998f, 1.8573f, 2.649464f, 2.223762f);
	VOLUME::_0x39816F6F94F385AD(iLocal_70, -289.418f, 811.402f, 119.5f, 0f, 0f, 9.528f, 3.349f, 3.978f, 2.224f);
	VOLUME::_0x39816F6F94F385AD(iLocal_70, -287.157f, 810.98f, 119.5f, 0f, 0f, 9.528f, 1.762f, 2.396f, 2.224f);
	iLocal_69 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.485f, 801.6973f, 119.458f, 0f, 0f, 10.32594f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volDoctorPORCH");
	VOLUME::_0xB469CFD9E065EB99(iLocal_67, 10064);
}

void func_57()
{
	iLocal_71 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralShop Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_71, -323.731f, 801.595f, 118.2f, 0f, 0f, 99.9f, 10.555f, 8.418f, 4.843f);
	VOLUME::_0x39816F6F94F385AD(iLocal_71, -323.784f, 801.585f, 117.689f, 0f, 0f, 99.9f, 10.582f, 8.699f, 5.801f);
	VOLUME::_0x39816F6F94F385AD(iLocal_71, -323.448f, 799.656f, 116.513f, 0f, 0f, 99.9f, 6.34f, 8.699f, 12.476f);
	iLocal_72 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralPORCH Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_72, -322.9185f, 794.5805f, 117.8986f, 0f, 0f, 10.32594f, 9f, 3.558567f, 2.381096f);
	VOLUME::_0x39816F6F94F385AD(iLocal_72, -326.9613f, 807.4636f, 118.0324f, 0f, 0f, 8.726971f, 2.76311f, 2.301893f, 4.510351f);
	VOLUME::_0x39816F6F94F385AD(iLocal_72, -329.273f, 799.3444f, 118.0324f, 0f, 0f, 8.72697f, 3f, 14.5f, 4.510351f);
	iLocal_61 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.0786f, 803.658f, 117.7309f, 0f, 0f, 8.710198f, 2.1f, 3.644517f, 1.698559f, "Valentine - m_volGeneralPrompt");
	if (func_45() == -1)
	{
		iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.8168f, 803.7786f, 117.7309f, 0f, 0f, 10.4864f, 2.206109f, 1.908514f, 1.698559f, "Valentine - m_volGeneralCounterOff");
	}
	else
	{
		iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.6804f, 803.6613f, 118.0603f, 0f, 0f, 8.710198f, 2.1f, 2.235618f, 2.440112f, "Valentine - m_volGeneralCounterOff");
	}
	iLocal_62 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralCounterMute");
	VOLUME::_0x39816F6F94F385AD(iLocal_62, -327.309f, 801.647f, 120.068f, 0f, 0f, 10.4864f, 2.206f, 5.596f, 6.414f);
	VOLUME::_0x39816F6F94F385AD(iLocal_62, -326.547f, 797.528f, 121.542f, 0f, 0f, 10.4864f, 2.206f, 3.398f, 3.708f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_71, 10065);
}

void func_58()
{
	iLocal_57 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.686f, 781.058f, 119.929f, 0f, 0f, 0f, 2.382f, 1.711f, 2.813f, "Valentine - m_volGunsmith - PROMPT");
	iLocal_74 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-279.9107f, 780.475f, 119.8105f, 0f, 0f, 179.9f, 8.518225f, 7.656958f, 2.7f, "Valentine - m_volGunsmithShop");
	iLocal_75 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-280.124f, 786.2109f, 119.6072f, 0f, 0f, 0f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volGunsmithPORCH");
	if (func_45() == -1)
	{
		iLocal_58 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGunsmithCounterOff Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_58, -279.9358f, 778.0059f, 119.7747f, 0f, 0f, 0f, 8.469496f, 2.69515f, 2.516554f);
		VOLUME::_0x39816F6F94F385AD(iLocal_58, -277.336f, 778.941f, 119.775f, 0f, 0f, 0f, 3.326f, 4.079f, 2.517f);
	}
	else
	{
		iLocal_58 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.758f, 778.0059f, 119.7747f, 0f, 0f, 0f, 4.831735f, 2.69515f, 2.516554f, "Valentine - m_volGunsmithCounterOff");
	}
	iLocal_59 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -277.246f, 783.568f, 120.234f, 0f, 0f, 0f, 1.666f, 3.209f, 2.517f);
	VOLUME::_0xBE551C2CC421185D(iLocal_59, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_59, 1);
	VOLUME::_0xB469CFD9E065EB99(iLocal_74, 10066);
}

void func_59(int iParam0, int iParam1)
{
	Global_1915867.f_3[iParam0 /*447*/].f_32 = iParam1;
}

void func_60()
{
	iLocal_92 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.4941f, 809.1079f, 122.1578f, 0f, 0f, 10.47275f, 12.236f, 27.58529f, 9.179325f, "Valentine - m_volSaloonSmith");
}

void func_61()
{
	DEBUG::_0x4DC69742196F818A(8, 195, "VAL_CREATE_SALOON_VOLUMES: Creating saloon interior volumes");
	iLocal_93 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.3924f, 808.4083f, 119.378f, 0f, 0f, 99.71499f, 22.62186f, 12.374f, 8.647388f, "volSaloonSmithfieldsInterior");
	iLocal_94 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 9.286f, 8.345f, 5f, "volSaloonKeanesInterior");
}

void func_62(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 139, "GSMAN_CREATE_THEATER_VOLUMES -- Region: ", func_124(iParam0, 0));
	switch (iParam0)
	{
		case 5:
			Global_1270027.f_47[0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x6E0D3C3F828DA773(Global_1270027.f_47[0], VOLUME::_CREATE_VOLUME_BOX(2548.06f, -1295.226f, 53f, 0f, 0f, 0f, 30f, 38f, 29.62f));
			VOLUME::_0x6E0D3C3F828DA773(Global_1270027.f_47[0], VOLUME::_CREATE_VOLUME_SPHERE(2538f, -1278f, 51f, 0f, 0f, 0f, 5f, 5f, 5f));
			Global_1270027.f_50[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2542.098f, -1282.514f, 48.21795f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volTheaterStagePrompt");
			Global_1270027.f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "m_volTheaterMagicInterior");
			Global_1270027.f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2686.8f, -1362.094f, 47.21417f, 0f, 0f, 0f, 2f, 2f, 3f, "m_volTheaterMagicPrompt");
			break;
		case 81:
			Global_1270027.f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-348.075f, 698.609f, 117.637f, 0f, 0f, 15.5f, 7.2f, 13f, 2.973f, "m_volTheaterValentineInterior");
			Global_1270027.f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-355.272f, 704.9423f, 115.9362f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "m_volTheaterValentineProm");
			break;
	}
}

void func_63(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (func_125(vParam5))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "REGISTER_CHURCH_BELL: Attempting to register a church bell with an invalid bell location!");
		return;
	}
	Local_19 = iParam0;
	Local_19.f_6 = sParam1;
	Local_19.f_7 = sParam2;
	Local_19.f_8 = sParam3;
	Local_19.f_9 = sParam4;
	Local_19.f_11 = { vParam5 };
	Local_19.f_10 = sParam8;
	Local_19.f_15 = 1;
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Local_19.f_5 >= 3)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "ADD_CHURCH_BELL_RING_TIME: Church bell cannot register any more ring times!");
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "ADD_CHURCH_BELL_RING_TIME: Passed a < 0 or > 60 sec which is invalid!");
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "ADD_CHURCH_BELL_RING_TIME: Passed a < 0 or > 60 min which is invalid!");
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "ADD_CHURCH_BELL_RING_TIME: Passed a < 0 or > 23 hour which is invalid!");
		return;
	}
	func_126(&iVar0, iParam0);
	func_127(&iVar0, iParam1);
	func_128(&iVar0, iParam2);
	func_129(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_19.f_5 - 1))
	{
		func_129(&(Local_19.f_1[iVar1]));
		if (Local_19.f_1[iVar1] == iVar0)
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "ADD_CHURCH_BELL_RING_TIME: We are already registered to ring at this time!");
			return;
		}
		iVar1++;
	}
	Local_19.f_1[Local_19.f_5] = iVar0;
	Local_19.f_5++;
	func_130(&(Local_19.f_1), Local_19.f_5);
}

int func_65(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_86(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: Region index not valid ", func_131(iParam0));
		return 1;
	}
	if (func_123(iParam0, 16))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: RF_PERS_DISABLED is on for ", func_131(iParam0));
		return 1;
	}
	if (func_132(iParam0) && !func_133(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: IS_REGION_IN_LOCKDOWN is on for ", func_131(iParam0));
	}
	DEBUG::_0xF0783374333FD8CE(40, 138, "CREATE_ALL_REGIONAL_CHARACTERS: Starting for ", func_131(iParam0));
	if (func_134(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_135(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_135(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1896632 < iVar0 || Global_1896632 > iVar1)
		{
			Global_1896632 = iVar0;
		}
		while (true)
		{
			if ((!func_132(iParam0) || func_133(iParam0)) || func_136(Global_1896632))
			{
				func_137(Global_1896632, 0);
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

bool func_66(int iParam0)
{
	return (Global_1940410 && iParam0) != 0;
}

bool func_67(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1900912;
}

struct<2> func_68(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_69(var uParam0, var uParam1)
{
	return uParam0;
}

void func_70(int iParam0, bool bParam1, bool bParam2)
{
	DEBUG::_0xF0783374333FD8CE(168, 218, "ALTER_WORLD_STATE -- Setting ", func_138(iParam0, 0), " to ", bParam1);
	if (!bParam2)
	{
		UNK_0x355E72323AEE83CC(218, 6);
	}
	switch (iParam0)
	{
		case 1497516462:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Setting Downs Ranch Downs!");
			func_139(1497516462);
			func_140(2016141805);
			func_140(1010885152);
			func_140(-502324015);
			break;
		case 2016141805:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Setting Downs Ranch Edith!");
			func_140(1497516462);
			func_139(2016141805);
			func_140(1010885152);
			func_140(-502324015);
			break;
		case 1010885152:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Setting Downs Ranch Empty!");
			func_140(1497516462);
			func_140(2016141805);
			func_139(1010885152);
			func_140(-502324015);
			break;
		case -502324015:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Setting Downs Ranch Repopulate!");
			func_140(1497516462);
			func_140(2016141805);
			func_140(1010885152);
			func_139(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Pronghorn Ranch.");
			func_140(-538889627);
			func_140(-538880323);
			func_140(-1056767524);
			func_139(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Setting Winter");
			func_141();
			func_139(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			DEBUG::_0xA308F935BDECCEC0(40, 218, "ALTER_WORLD_STATE -- Setting Beechers ", func_138(iParam0, 0));
			func_142();
			func_139(iParam0);
			break;
		case 2019386373:
			func_140(-664252410);
			func_140(2109952320);
			func_139(2019386373);
			DEBUG::_0xA308F935BDECCEC0(40, 218, "ALTER_WORLD_STATE --", func_138(iParam0, 0));
			break;
		case -664252410:
			func_140(2019386373);
			func_140(2109952320);
			func_139(-664252410);
			DEBUG::_0xA308F935BDECCEC0(40, 218, "ALTER_WORLD_STATE --", func_138(iParam0, 0));
			break;
		case 2109952320:
			func_140(2019386373);
			func_140(-664252410);
			func_139(2109952320);
			DEBUG::_0xA308F935BDECCEC0(40, 218, "ALTER_WORLD_STATE --", func_138(iParam0, 0));
			break;
		case -1674179981:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Rhodes grave normal!");
			func_140(-1835851517);
			func_140(-1838352012);
			func_139(-1674179981);
			break;
		case -1835851517:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Rhodes grave fresh dug!");
			func_140(-1674179981);
			func_140(-1838352012);
			func_139(-1835851517);
			break;
		case -1838352012:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Rhodes grave open!");
			func_140(-1674179981);
			func_140(-1835851517);
			func_139(-1838352012);
			break;
		case -1717960576:
			func_140(210001842);
			func_139(-1717960576);
			break;
		case 210001842:
			func_140(-1717960576);
			func_139(210001842);
			break;
		case -150493654:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Utopia Tree Standing!");
			func_140(-1271608261);
			func_140(1846061697);
			func_140(-1145519186);
			func_139(-150493654);
			break;
		case -1271608261:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Utopia Tree Mission!");
			func_140(-150493654);
			func_140(1846061697);
			func_140(-1145519186);
			func_139(-1271608261);
			break;
		case 1846061697:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Utopia Tree Fallen!");
			func_140(-150493654);
			func_140(-1271608261);
			func_140(-1145519186);
			func_139(1846061697);
			break;
		case -1145519186:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Utopia Tree Stump!");
			func_140(-150493654);
			func_140(-1271608261);
			func_140(1846061697);
			func_139(-1145519186);
			break;
		case 1766284049:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- WS_MICAH_CAMP_EMPTY!");
			func_140(280705402);
			func_140(1926308480);
			func_139(1766284049);
			break;
		case 280705402:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- WS_MICAH_CAMP!");
			func_140(1766284049);
			func_140(1926308480);
			func_139(280705402);
			break;
		case 1926308480:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- WS_MICAH_CAMP_POST!");
			func_140(1766284049);
			func_140(280705402);
			func_139(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Saint Denis Art Exhibit Open!");
				func_140(439465264);
				func_139(1609506757);
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Saint Denis Art Exhibit Closed!");
				func_140(1609506757);
				func_140(439465264);
			}
			break;
		case 439465264:
			if (func_49(1609506757))
			{
				if (bParam1)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Saint Denis Art Exhibit Cancelled!");
					func_139(439465264);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Saint Denis Art Exhibit Open!");
					func_140(439465264);
				}
			}
			break;
		case 1822001510:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- RC Here Kitty Kitty 3 clue trail switched off!");
			func_140(-1612662716);
			func_139(1822001510);
			break;
		case -1612662716:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- RC Here Kitty Kitty 3 clue trail switched on!");
			func_140(1822001510);
			func_139(-1612662716);
			break;
		case 1306158345:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Here Kitty Kitty - Setting camp as gone.");
			func_140(1952610440);
			func_140(-223469678);
			func_140(-404698347);
			func_140(1517904467);
			func_139(1306158345);
			break;
		case 1952610440:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Here Kitty Kitty - Setting camp with wagons trashed.");
			func_140(1306158345);
			func_140(-223469678);
			func_140(-404698347);
			func_140(1517904467);
			func_139(1952610440);
			break;
		case -223469678:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Here Kitty Kitty - Setting camp with wagons part fixed.");
			func_140(1306158345);
			func_140(1952610440);
			func_140(-404698347);
			func_140(1517904467);
			func_139(-223469678);
			break;
		case -404698347:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Here Kitty Kitty - Setting camp with wagons fixed.");
			func_140(1306158345);
			func_140(1952610440);
			func_140(-223469678);
			func_140(1517904467);
			func_139(-404698347);
			break;
		case 1517904467:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "UPDATE_WORLD_STATE -- Here Kitty Kitty - Setting camp with wagons fixed but no tents.");
			func_140(1306158345);
			func_140(1952610440);
			func_140(-223469678);
			func_140(-404698347);
			func_139(1517904467);
			break;
		case 1376646519:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Bank before!");
			func_140(931649776);
			func_140(-434590080);
			func_140(1743048395);
			func_140(449774763);
			func_139(1376646519);
			break;
		case 931649776:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Bank start!");
			func_140(1376646519);
			func_140(-434590080);
			func_140(1743048395);
			func_140(449774763);
			func_139(931649776);
			break;
		case -434590080:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Bank shootout!");
			func_140(1376646519);
			func_140(931649776);
			func_140(1743048395);
			func_140(449774763);
			func_139(-434590080);
			break;
		case 1743048395:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Bank after!");
			func_140(1376646519);
			func_140(931649776);
			func_140(-434590080);
			func_140(449774763);
			func_139(1743048395);
			break;
		case 449774763:
			DEBUG::_0xA308F935BDECCEC0(8, 218, "ALTER_WORLD_STATE -- Bank Post Mission!");
			func_140(1376646519);
			func_140(931649776);
			func_140(-434590080);
			func_140(1743048395);
			func_139(449774763);
			break;
		case -1414537028:
			func_140(38162571);
			func_140(1350391819);
			func_140(54073871);
			func_139(-1414537028);
			break;
		case 38162571:
			func_140(-1414537028);
			func_140(1350391819);
			func_140(54073871);
			func_139(38162571);
			break;
		case 1350391819:
			func_140(-1414537028);
			func_140(38162571);
			func_140(54073871);
			func_139(1350391819);
			break;
		case 54073871:
			func_140(-1414537028);
			func_140(38162571);
			func_140(1350391819);
			func_139(54073871);
			break;
		case 198200492:
			func_139(198200492);
			func_140(-1124061431);
			func_140(52706132);
			func_140(-259123672);
			break;
		case -1124061431:
			func_140(198200492);
			func_139(-1124061431);
			func_140(52706132);
			func_140(-259123672);
			break;
		case 52706132:
			func_140(198200492);
			func_140(-1124061431);
			func_139(52706132);
			func_140(-259123672);
			break;
		case -259123672:
			func_140(198200492);
			func_140(-1124061431);
			func_140(52706132);
			func_139(-259123672);
			break;
		case -919512195:
			func_139(-919512195);
			func_140(-1925798111);
			func_140(420709909);
			func_140(1703426636);
			break;
		case -1925798111:
			func_139(-1925798111);
			func_140(-919512195);
			func_140(420709909);
			func_140(1703426636);
			break;
		case 420709909:
			func_139(420709909);
			func_140(-919512195);
			func_140(-1925798111);
			func_140(1703426636);
			break;
		case 1703426636:
			func_139(1703426636);
			func_140(-919512195);
			func_140(-1925798111);
			func_140(420709909);
			break;
		case -1223121209:
			func_139(-1223121209);
			func_140(630808005);
			break;
		case 630808005:
			func_139(630808005);
			func_140(-1223121209);
			break;
		case 1453909576:
			func_139(1453909576);
			func_140(1643531967);
			break;
		case 1643531967:
			func_139(1643531967);
			func_140(1453909576);
			break;
		case 0:
			func_139(0);
			func_140(473295046);
			func_140(-1738165526);
			break;
		case 473295046:
			func_139(473295046);
			func_140(0);
			func_140(-1738165526);
			break;
		case -1738165526:
			func_139(-1738165526);
			func_140(0);
			func_140(473295046);
			break;
		case 932909855:
			func_139(932909855);
			func_140(2051822093);
			break;
		case 2051822093:
			func_139(2051822093);
			func_140(932909855);
			break;
		case 405586984:
			func_139(405586984);
			func_140(1509509592);
			func_140(-959357075);
			func_140(-1311865656);
			break;
		case 1509509592:
			func_139(1509509592);
			func_140(405586984);
			func_140(-959357075);
			func_140(-1311865656);
			break;
		case -959357075:
			func_139(-959357075);
			func_140(1509509592);
			func_140(405586984);
			func_140(-1311865656);
			break;
		case -1311865656:
			func_139(-1311865656);
			func_140(1509509592);
			func_140(-959357075);
			func_140(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_139(-524145696);
			}
			else
			{
				func_140(-524145696);
			}
			func_140(1626481264);
			func_140(282809459);
			break;
		case 282809459:
			func_139(282809459);
			func_140(1626481264);
			func_140(-524145696);
			break;
		case 1626481264:
			func_139(1626481264);
			func_140(-524145696);
			func_140(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_139(885203519);
			}
			else
			{
				func_140(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_139(-1080627546);
			}
			else
			{
				func_140(-1080627546);
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_139(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
			}
			else
			{
				func_140(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
				func_143(385812466);
				func_143(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				DEBUG::_0xA308F935BDECCEC0(168, 218, "ALTER_WORLD_STATE -- ", func_144(iParam0), " ACTIVE!");
				func_139(iParam0);
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(168, 218, "ALTER_WORLD_STATE -- ", func_144(iParam0), " CLEARED!");
				func_140(iParam0);
			}
			break;
	}
}

void func_71(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_125(vParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 139, "ENABLE_SALOON_LOCATION: Saloon position is zero! Cannot init.");
		return;
	}
	func_145(iParam0);
	Global_1940170.f_5[iParam0 /*11*/].f_1 = { vParam1 };
	Global_1940170.f_5[iParam0 /*11*/].f_4 = iParam4;
	Global_1940170.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1940170.f_5[iParam0 /*11*/].f_6 = func_146(iParam5, iParam0);
	DEBUG::_0xF0783374333FD8CE(680, 195, "ENABLE_SALOON_LOCATION: Registering ", func_147(iParam0), " in ", func_108(iParam5));
}

void func_72(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (func_125(vParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 139, "GSMAN_ENABLE_THEATER_LOCATION: Theater position is zero! Cannot init.");
		return;
	}
	Global_1270027.f_32[iParam0 /*6*/].f_1 = { vParam1 };
	Global_1270027.f_32[iParam0 /*6*/] = uParam4;
	Global_1270027.f_32[iParam0 /*6*/].f_4 = iParam5;
	Global_1270027.f_32[iParam0 /*6*/].f_5 = func_148(iParam5, iParam0);
	DEBUG::_0xF0783374333FD8CE(680, 139, "GSMAN_ENABLE_THEATER_LOCATION: Registering ", func_149(iParam0, 0), " in ", func_108(iParam5));
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_78() && func_150()))
	{
		if (func_151(255))
		{
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
			{
				func_152(1, 1);
			}
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_153(iParam0, 1);
	DEBUG::_0xF0783374333FD8CE(40, 139, "NET_ENABLE_SHOP_LOCATION: Registering ", func_154(iParam0));
	Global_1051777.f_80[iParam0 /*75*/] = 0;
	Global_1051777.f_80[iParam0 /*75*/].f_18 = func_155(iParam2, iParam0);
	Global_1051777.f_80[iParam0 /*75*/].f_24 = iParam1;
	Global_1051777.f_80[iParam0 /*75*/].f_3 = { VOLUME::_GET_VOLUME_COORDS(iParam1) };
	Global_1051777.f_80[iParam0 /*75*/].f_25 = iParam3;
	Global_1051777.f_80[iParam0 /*75*/].f_27 = iParam4;
	Global_1051777.f_80[iParam0 /*75*/].f_2 = iParam2;
	Global_1051777.f_80[iParam0 /*75*/].f_63 = func_156(Global_1051777.f_80[iParam0 /*75*/].f_18);
	Global_1051777.f_80[iParam0 /*75*/].f_72 = iParam9;
	Global_1051777.f_80[iParam0 /*75*/].f_73 = 0;
	Global_1051777.f_80[iParam0 /*75*/].f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_157(iParam0);
	}
	Global_1051777.f_80[iParam0 /*75*/].f_10 = fParam8;
	Global_1051777.f_80[iParam0 /*75*/].f_14 = iParam5;
	if (bParam6)
	{
		POPULATION::_0x18262CAFEBB5FBE1(Global_1051777.f_80[iParam0 /*75*/].f_24, 0, 0, false, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(Global_1051777.f_80[iParam0 /*75*/].f_24, 0, 0, false, -1, -1, 0);
	}
	if (bParam7)
	{
		POPULATION::_0x18262CAFEBB5FBE1(Global_1051777.f_80[iParam0 /*75*/].f_25, 0, 0, false, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(Global_1051777.f_80[iParam0 /*75*/].f_25, 0, 0, false, -1, -1, 0);
	}
	NETWORK::_0xEEB7818B1D307212(Global_1051777.f_80[iParam0 /*75*/].f_24);
	func_158(iParam0, 4);
	func_159(iParam0);
}

void func_74(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_160(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		DEBUG::_0x83407B92D46F25C3(40, 139, "[NET_ADD_SHOP_DOOR] - Invalid door index for shop: ", func_161(iParam0, 0));
		return;
	}
	Global_1051777.f_80[iParam0 /*75*/].f_31[iVar0] = func_162(bParam1, 0, 0);
	if (func_163(Global_1051777.f_80[iParam0 /*75*/].f_31[iVar0]))
	{
		if (!func_164(Global_1051777.f_80[iParam0 /*75*/].f_31[iVar0]))
		{
			func_91(Global_1051777.f_80[iParam0 /*75*/].f_31[iVar0], 0, fParam2, bParam3, 1, 0, bParam4, 0);
		}
	}
	Global_1051777.f_80[iParam0 /*75*/].f_47++;
}

int func_75(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	vector3 vVar3[24];

	if ((func_165(iParam0, 16384) || func_165(iParam0, 32768)) || func_125(Global_1051777.f_80[iParam0 /*75*/].f_3))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051777.f_80[iParam0 /*75*/].f_6);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1915867.f_3[iParam0 /*447*/].f_16))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1915867.f_3[iParam0 /*447*/].f_16);
		}
		Global_1051777.f_80[iParam0 /*75*/].f_6 = 0;
		Global_1915867.f_3[iParam0 /*447*/].f_16 = 0;
		Global_1051777.f_80[iParam0 /*75*/].f_8 = 0;
		return 0;
	}
	iVar0 = func_155(func_166(), iParam0);
	if ((!bParam1 && func_167(iVar0, &bVar1, &uVar2, &cVar3)) || (bParam1 && func_168(iVar0, &bVar1, &uVar2, &cVar3)))
	{
		func_169(iParam0, bVar1, cVar3, uVar2, 0);
		Global_1051777.f_80[iParam0 /*75*/].f_3 = { cVar3 };
		Global_1051777.f_80[iParam0 /*75*/].f_8 = bVar1;
	}
	return Global_1051777.f_80[iParam0 /*75*/].f_6;
}

void func_76(int iParam0, int iParam1)
{
	Global_1915867.f_3[iParam0 /*447*/].f_33 = iParam1;
}

void func_77(int iParam0, int iParam1)
{
	DEBUG::_0x4DC69742196F818A(680, 55, "[NET_SHOP_PROPERTY_SET_BIT] Setting bit: ", func_170(iParam1), " for ", func_154(iParam0));
	func_171(&(Global_1051777.f_80[iParam0 /*75*/].f_49), iParam1);
}

bool func_78()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_79()
{
	return func_172(func_68(0));
}

void func_80()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051777.f_3642[iVar0 /*19*/] = -1;
		Global_1051777.f_3642[iVar0 /*19*/].f_9 = -1;
		iVar0++;
	}
}

void func_81(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	vector3 vVar3[24];
	int iVar6;
	bool bVar7;

	iVar0 = 0;
	while (iVar0 < 4 && Global_1051777.f_3642[iVar0 /*19*/] != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "@@ g_mpShopsData.sBartenders[i].eSaloon = ", func_173(Global_1051777.f_3642[iVar0 /*19*/], 0));
		iVar0++;
	}
	if (iVar0 == 4)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 139, "[NET_ENABLE_SALOON_LOCATION] Fail to create saloon - we have reached the max number of saloon allowed in a region.");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(2216, 139, "[NET_ENABLE_SALOON_LOCATION] ", func_174(iParam0), " will be the #", iVar0, " saloon we created in this region.");
	Global_1051777.f_3642[iVar0 /*19*/].f_1 = 0;
	Global_1051777.f_3642[iVar0 /*19*/] = iParam0;
	if (func_167(Global_1051777.f_3642[iVar0 /*19*/], &bVar1, &uVar2, &cVar3))
	{
		Global_1051777.f_3642[iVar0 /*19*/].f_6 = func_175(bVar1, cVar3, uVar2, 0, 0, 0);
		Global_1051777.f_3642[iVar0 /*19*/].f_2 = { cVar3 };
		TASK::_0xA7479FB665361EDB(Global_1051777.f_3642[iVar0 /*19*/].f_6, 0);
		TASK::_0xE69FDA40AAC3EFC0(Global_1051777.f_3642[iVar0 /*19*/].f_6, 0);
	}
	iVar6 = func_176(Global_1051777.f_3642[iVar0 /*19*/]);
	bVar7 = iVar6 != -1;
	if (bVar7)
	{
		Global_1051777.f_3642[iVar0 /*19*/].f_9 = iVar6;
		if (func_167(iVar6, &bVar1, &uVar2, &cVar3))
		{
			Global_1051777.f_3642[iVar0 /*19*/].f_13 = func_175(bVar1, cVar3, uVar2, 0, 0, 0);
			Global_1051777.f_3642[iVar0 /*19*/].f_10 = { cVar3 };
			TASK::_0xA7479FB665361EDB(Global_1051777.f_3642[iVar0 /*19*/].f_13, 0);
			TASK::_0xE69FDA40AAC3EFC0(Global_1051777.f_3642[iVar0 /*19*/].f_13, 0);
		}
	}
	Global_1051777.f_3642[iVar0 /*19*/].f_5 = func_156(Global_1051777.f_3642[iVar0 /*19*/]);
	if (!func_177(30, 4))
	{
		func_158(30, 4);
		func_159(30);
	}
}

bool func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_45() != -1)
	{
		return false;
	}
	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		DEBUG::_0x4DC69742196F818A(8, 0, "SET_VOLUME_OWNER_PERSISTENT_CHARACTER_SAFE - Volume is null!");
		return false;
	}
	iVar0 = func_83(iParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 0, "REGION_INIT_PROPERTY - REGIONAL CHARACTER WITH INDEX: ", func_179(iParam0), " IS INVALID.");
		return false;
	}
	DEBUG::_0x4DC69742196F818A(168, 0, "REGION_INIT_PROPERTY - REGIONAL CHARACTER WITH INDEX: ", func_179(iParam0), " IS VALID.");
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return true;
}

int func_83(int iParam0)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/].f_1;
}

void func_84(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893599.f_182 = fParam0;
	Global_1893599.f_183 = fParam1;
	Global_1893599.f_184 = fParam2;
	Global_1893599.f_185 = fParam3;
	DEBUG::_0xF0783374333FD8CE(104856, 17, "REGION_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION: setting probably to ", Global_1893599.f_182, " ", Global_1893599.f_183, " ", Global_1893599.f_184, " ", Global_1893599.f_185);
}

void func_85(var uParam0, int iParam1, int iParam2)
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
	if (!func_180(iParam2))
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

bool func_86(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_87()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 0, "CLEAR_LOCAL_REGION_POPULATION_ARRAY!");
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_181(iVar0))
		{
			Global_1900743[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_88(int iParam0, char* sParam1)
{
	DEBUG::_0xF0783374333FD8CE(136, 0, "SET_LOCAL_REGION_POPULATION_ARRAY_VALUE CALLED! - ePopSetType = ", iParam0, ", ePedModelSet = ", sParam1);
	if (!func_181(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "SET_LOCAL_REGION_POPULATION_ARRAY_VALUE - The ePopSetType value is NOT valid!!!");
		return;
	}
	if (!func_182(sParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "SET_LOCAL_REGION_POPULATION_ARRAY_VALUE - The ePedModelSet value is NOT valid!!!");
		return;
	}
	Global_1900743[iParam0] = sParam1;
}

void func_89()
{
	if (func_183(-367.15f, 788.29f, 116f, 1) < 300f)
	{
		func_184();
		bLocal_145 = true;
	}
	else if (bLocal_145)
	{
		func_185();
		bLocal_145 = false;
	}
}

bool func_90(bool bParam0)
{
	if (func_186())
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

void func_91(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_162(bParam0, 0, 0);
	if (func_163(bParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(bParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(bParam0, fParam5);
		}
		if (bParam3)
		{
			func_187(bParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_188(bParam0, 1);
				UNK_0x355E72323AEE83CC(183, 9);
				DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Locking Door ID ", func_189(bParam0, 0));
			}
			else
			{
				func_190(bParam0, 1);
				UNK_0x355E72323AEE83CC(183, 9);
				DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Locking and making unbreakable Door ID ", func_189(bParam0, 0));
			}
		}
		else
		{
			func_191(bParam0, 1);
			UNK_0x355E72323AEE83CC(183, 9);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "SET_STATE_OF_DOOR_ID - Unlocking Door ID ", func_189(bParam0, 0));
		}
		if (bParam7)
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 183, "SET_STATE_OF_DOOR_ID - Treating Door ID ", func_189(bParam0, 0), " as shut.");
			OBJECT::_0x276AAF0F1C7F2494(bParam0, 1);
		}
	}
	else if (func_192())
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "SET_STATE_OF_DOOR_ID - Invalid Door ID");
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		DEBUG::_0xA308F935BDECCEC0(40, 183, "SET_STATE_OF_DOOR_ID: Door with ID not registered by host yet ", func_189(bParam0, 0));
	}
}

void func_92(bool bParam0, int iParam1)
{
	func_91(bParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_93(int iParam0, int iParam1, var uParam2)
{
	if (!*uParam2)
	{
		if (func_193(Global_33, iParam1, 0, 1, 0))
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[NET_SHOPS_HANDLE_VISITED_VOLUME] - Player visited volume for ", func_173(iParam0, 0));
			func_195(func_194(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_193(Global_33, iParam1, 0, 1, 0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[NET_SHOPS_HANDLE_VISITED_VOLUME] - Player left volume for ", func_173(iParam0, 0));
		*uParam2 = 0;
	}
}

void func_94()
{
	float fVar0;

	if (!Local_19.f_15)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "CHURCH_BELL_UPDATE: Attempting to process an unregistered church bell!");
		return;
	}
	if (Local_19.f_27 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_19.f_17) && Local_19.f_14 > 1) && Local_19 != 0)
	{
		if (func_196() && func_197(Global_34, Local_19.f_11) < 100f)
		{
			if (Local_19.f_18 == 0)
			{
				Local_19.f_18 = ENTITY::_0x6F3068258A499E52(Local_19, Local_19.f_11, 11);
				DEBUG::_0xF0783374333FD8CE(8, 0, "CHURCH_BELL_UPDATE - calling PIN_CLOSEST_MAP_ENTITY for the church bell");
			}
			else if (ENTITY::_0x1FF441D7954F8709(Local_19.f_18))
			{
				DEBUG::_0xF0783374333FD8CE(8, 210, "CHURCH_BELL_UPDATE - object invalid, grabbing bell");
				Local_19.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_19.f_18));
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 210, "CHURCH_BELL_UPDATE - IS_MAP_ENTITY_PINNED is FALSE for the church bell");
			}
		}
		Local_19.f_27 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_19.f_14)
	{
		case 0:
			DEBUG::_0xF0783374333FD8CE(8, 0, "CHURCH_BELL_UPDATE - Initializing bell!");
			func_198();
			Local_19.f_14 = 1;
			break;
		case 1:
			if (func_199())
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "CHURCH_BELL_UPDATE - Streaming completed!");
				Local_19.f_14 = 2;
			}
			break;
		case 2:
			if (func_200())
			{
				Local_19.f_14 = 3;
				Local_19.f_24 = 0;
				Local_19.f_21 = 0;
				Local_19.f_22 = func_202(func_201());
				if (Local_19.f_22 > 12)
				{
					Local_19.f_22 = (Local_19.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_19.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_19.f_17))
				{
					DEBUG::_0xF0783374333FD8CE(8, 0, "CHURCH_BELL_UPDATE - Church Bell starting to ring!");
					Local_19.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_19.f_17, Local_19.f_7, Local_19.f_6, 1000f, false, true, false, 0f, 0);
					Local_19.f_14 = 4;
				}
			}
			if (Local_19.f_21 >= Local_19.f_22)
			{
				Local_19.f_14 = 2;
			}
			break;
		case 4:
			if (func_203(Local_19.f_17, Local_19.f_6, Local_19.f_7, 0))
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "CHURCH_BELL_UPDATE - Church Bell ringing!");
				ENTITY::PLAY_ENTITY_ANIM(Local_19.f_17, Local_19.f_8, Local_19.f_6, 1000f, true, true, false, 0f, 0);
				Local_19.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_19.f_26 = 0;
				Local_19.f_14 = 5;
			}
			break;
		case 5:
			fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_19.f_17, Local_19.f_6, Local_19.f_8);
			if (fVar0 > 0.5f)
			{
				if (Local_19.f_26)
				{
					Local_19.f_21++;
					DEBUG::_0xF0783374333FD8CE(136, 0, "CHURCH_BELL_UPDATE - Church Bell anim ring mid cout ", Local_19.f_21, " max ", Local_19.f_22);
					Local_19.f_26 = 0;
				}
			}
			else if (!Local_19.f_26 && fVar0 > 0.05f)
			{
				Local_19.f_21++;
				DEBUG::_0xF0783374333FD8CE(136, 0, "CHURCH_BELL_UPDATE - Church Bell anim ring start cout ", Local_19.f_21, " max ", Local_19.f_22);
				Local_19.f_26 = 1;
			}
			if (Local_19.f_21 >= Local_19.f_22 && (func_203(Local_19.f_17, Local_19.f_6, Local_19.f_8, 0.02f) || Local_19.f_26))
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "CHURCH_BELL_UPDATE - Church Bell stopping!");
				ENTITY::PLAY_ENTITY_ANIM(Local_19.f_17, Local_19.f_9, Local_19.f_6, 8f, false, false, false, 0f, 0);
				Local_19.f_14 = 2;
			}
			break;
	}
	if (Local_19.f_25 && Local_19.f_14 > 2)
	{
		if (AUDIO::_0x714A0EA7DE1167BE(Local_19.f_10, "CHURCH_BELL_SOUNDS") && Local_19.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_19.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_PLAY_SOUND_FROM_POSITION(Local_19.f_10, Local_19.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_19.f_21++;
		}
	}
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_97()
{
	return func_95(Global_1940410, 8192);
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_99(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	return ((Global_1887351[iParam0 /*36*/].f_21 == 1 || Global_1887351[iParam0 /*36*/].f_21 == 2) && !func_204(iParam0));
}

bool func_100(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1887351[iParam0 /*36*/].f_22 && iParam1) != 0;
}

int func_101()
{
	return Global_1896634.f_41;
}

void func_102(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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

	if (!func_205())
	{
		return;
	}
	DEBUG::_0xF0783374333FD8CE(174760, 11, "DISPLAY_NAMED_LOCATION - ", func_124(iParam0, 0), " ", func_206(iParam1, 0), " ", func_207(bParam2, 0), " state ", func_208(iParam4, 0));
	UNK_0x355E72323AEE83CC(11, 6);
	sVar1 = func_209(iParam0, iParam1, bParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		DEBUG::_0x83407B92D46F25C3(10920, 11, "No texture for either ", func_124(iParam0, 0), " or ", func_206(iParam1, 0), " or ", func_207(bParam2, 0));
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_210(iParam4))
	{
		if (func_86(iParam0))
		{
			iParam4 = func_211(func_9(iParam0));
		}
		else
		{
			iParam4 = func_211(iParam1);
		}
	}
	if (func_210(iParam4))
	{
		iVar3 = func_212(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_214(func_213(bParam2));
	}
	else if ((func_215(iParam1, 2) || func_216(iParam4, 2)) && !Global_1893599.f_9)
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
	else if ((func_86(iParam0) && func_123(iParam0, 16777216)) && !Global_1893599.f_9)
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
		iVar4 = func_202(func_201());
		iVar5 = func_217(func_201());
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
				fVar7 = func_218(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_219(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_219(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_218(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_219(&cVar6, joaat("COLOR_PURE_WHITE")), func_219(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893599.f_9 = 0;
	}
	DEBUG::_0xF0783374333FD8CE(680, 11, "DISPLAY_NAMED_LOCATION - Texture ", sVar1, " info ", sVar2);
	Global_1939313.f_145 = func_220(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_104(int iParam0, bool bParam1)
{
	if (Global_1572887.f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_221(iParam0))
	{
		return;
	}
	if (func_123(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	DEBUG::_0xA308F935BDECCEC0(40, 11, "REGION_DISCOVER() - Discovered ", &(Global_1887351[iParam0 /*36*/].f_23));
	DEBUG::_0xA308F935BDECCEC0(40, 18, "REGION_DISCOVER() - Discovered ", &(Global_1887351[iParam0 /*36*/].f_23));
	func_222(&Global_1940410, 16384);
	func_195(func_223(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_195(func_223(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_195(func_223(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_195(func_223(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_195(func_223(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_195(func_223(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_195(func_223(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
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

void func_105(bool bParam0)
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

bool func_106(int iParam0)
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

void func_107()
{
	func_224(81);
}

char* func_108(int iParam0)
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

int func_109(int iParam0, bool bParam1)
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

void func_110(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8126[iParam0 /*11*/] = (Global_8126[iParam0 /*11*/] - (Global_8126[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1072032.f_19678[iParam0 /*11*/] = (Global_1072032.f_19678[iParam0 /*11*/] - (Global_1072032.f_19678[iParam0 /*11*/] && iParam1));
}

void func_111(bool bParam0)
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

void func_112(int iParam0)
{
	func_84(0.775f, 0.2f, 0.025f, 0f);
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_131);
	MISC::_CLEAR_TACTICAL_ANALYSIS_POINTS();
	func_225(iLocal_128);
	func_226();
	func_227();
	func_140(1250636944);
	func_185();
	func_228();
}

void func_113(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1940170.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_145(iVar0);
		}
		iVar0++;
	}
}

void func_114(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915867.f_3[iVar0 /*447*/].f_8 == iParam0)
		{
			func_229(iVar0);
		}
		iVar0++;
	}
}

bool func_115(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return true;
	}
	if (!func_86(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "DELETE_ALL_REGIONAL_CHARACTERS: Region index not valid ", iParam0);
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(40, 138, "DELETE_ALL_REGIONAL_CHARACTERS starting for Region ", func_131(iParam0));
	if (func_134(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896632.f_1 < iVar0 || Global_1896632.f_1 > iVar1)
		{
			Global_1896632.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_230(Global_1896632.f_1, 16))
			{
				func_231(Global_1896632.f_1, 0);
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

bool func_116(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_232(iVar0) || func_233(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_234();
					break;
				case 32:
					func_235();
					break;
				default:
					if (Global_1051777.f_80[iVar0 /*75*/].f_2 == iParam0)
					{
						func_153(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

int func_117(int iParam0, int iParam1)
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

bool func_118(int iParam0)
{
	int iVar0;

	iVar0 = func_236(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_119(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

int func_120(bool bParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(bParam0))
	{
		return 1;
	}
	if (func_237())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 0, "REQUEST_IPL_HASH_SAFE - Could not request ", func_238(bParam0, 0), " b/c player is in the respawn sequence.");
		return 0;
	}
	STREAMING::_REQUEST_IMAP(bParam0);
	return 0;
}

float func_121(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

char* func_122(int iParam0, int iParam1)
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

bool func_123(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		return (Global_8126[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1072032.f_19678[iParam0 /*11*/] && iParam1) != 0;
}

char* func_124(int iParam0, int iParam1)
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

bool func_125(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_126(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_127(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_128(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_129(int iParam0)
{
	int iVar0;

	if (*iParam0 == -15)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "REFRESH_CHURCH_BELL_RING_TIME: Trying to refresh an invalid ring time!");
		return;
	}
	iVar0 = func_201();
	func_240(iParam0, func_239(iVar0));
	func_242(iParam0, func_241(iVar0));
	func_244(iParam0, func_243(iVar0));
}

void func_130(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam1 < 2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "CHURCH_BELL_SORT_RING_TIMES: don't need to sort an array with less than two items!");
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0)
	{
		iVar1 = (iParam1 - 1);
		while (iVar1 >= 0)
		{
			bVar0 = false;
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if ((*uParam0)[iVar2] > (*uParam0)[iVar2 + 1])
				{
					uVar3 = (*uParam0)[iVar2];
					(*uParam0)[iVar2] = (*uParam0)[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = uVar3;
					bVar0 = true;
				}
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
		}
	}
}

char* func_131(int iParam0)
{
	if (!func_86(iParam0))
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

bool func_132(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	return func_123(iParam0, 33554432);
}

bool func_133(int iParam0)
{
	if (!func_86(iParam0))
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

bool func_134(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			DEBUG::_0xA308F935BDECCEC0(40, 138, "Attempting to get regional character bounds for a region that doesn't have them yet ", func_108(iParam0));
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

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_136(int iParam0)
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

int func_137(int iParam0, bool bParam1)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 138, "CREATE_REGIONAL_CHARACTER - rcType ", func_179(iParam0), " is invalid");
		return 0;
	}
	if (!func_230(iParam0, 2))
	{
		DEBUG::_0xF0783374333FD8CE(168, 138, "CREATE_REGIONAL_CHARACTER - rcType ", func_179(iParam0), " has not been initialized");
		return 0;
	}
	if (func_230(iParam0, 32) && !bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(168, 138, "CREATE_REGIONAL_CHARACTER - rcType ", func_179(iParam0), " has been locked dead");
		func_246(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_245(iParam0)));
		if (func_45() == -1)
		{
			if (func_230(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_83(iParam0));
				func_247(iParam0, 2048);
				DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Character ", func_179(iParam0), " has been revived!");
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_83(iParam0));
		}
		return 0;
	}
	if (!func_248(iParam0) && func_45() == -1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: ", func_179(iParam0), " dead or not spawning, turn scenario groups off");
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_83(iParam0)))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Persistent character ", func_179(iParam0), " already exists");
		func_247(iParam0, 128);
		return 1;
	}
	func_246(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_245(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_83(iParam0));
	DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Character ", func_179(iParam0), " perschar index created!");
	if (func_230(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_83(iParam0));
		func_247(iParam0, 2048);
		DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: Character ", func_179(iParam0), " has been revived!");
	}
	DEBUG::_0xA308F935BDECCEC0(168, 138, "CREATE_REGIONAL_CHARACTER: ", func_179(iParam0), " created.");
	UNK_0x355E72323AEE83CC(138, 6);
	return 1;
}

char* func_138(int iParam0, int iParam1)
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

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_117(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_38.f_114[iVar1]), iVar2);
	DEBUG::_0xA308F935BDECCEC0(40, 218, "SET_WORLD_STATE_FLAG: setting world state - ", func_138(iParam0, 0));
	Global_1939807 = 0;
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_117(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_38.f_114[iVar1]), iVar2);
	DEBUG::_0xA308F935BDECCEC0(40, 218, "CLEAR_WORLD_STATE_FLAG: clearing world state - ", func_138(iParam0, 0));
	Global_1939807 = 0;
}

void func_141()
{
	func_140(-939420910);
	func_140(-1187950766);
	func_140(356365161);
	func_140(753127042);
	func_140(-2038424081);
	func_140(1884271742);
	func_140(459290420);
}

void func_142()
{
	func_140(704802028);
	func_140(588987611);
	func_140(2008888900);
	func_140(1649996811);
	func_140(227918160);
	func_140(168171957);
	func_140(1193080109);
	func_140(-491981251);
	func_140(-639037538);
	func_140(-618620429);
}

void func_143(bool bParam0)
{
	if (func_163(bParam0) && func_249())
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 183, "RELEASE_DOOR_ID - Releasing Door ID ", func_189(bParam0, 0));
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(bParam0);
	}
}

char* func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Braithwaite Mansion - Intact";
		case 473295046:
			return "Braithwaite Mansion - Burned";
		case -1738165526:
			return "Braithwaite Mansion - Endless Summer";
		case -699277634:
			return "Braithwaites 3 Mission Active";
		case 1497516462:
			return "Downs Ranch - Downs";
		case 2016141805:
			return "Downs Ranch - Edith";
		case 1010885152:
			return "Downs Ranch - Empty";
		case -502324015:
			return "Downs Ranch - Repopulated";
		case 1607768502:
			return "Shows Saint Denis - Show Set 01";
		case -1852605133:
			return "Shows Saint Denis - Show Set 02";
		case -129643890:
			return "Shows Saint Denis - Show Set 03";
		case -1433686245:
			return "Shows Saint Denis - Show Set 04";
		case -1711895055:
			return "Shows Saint Denis - Show Set 05";
		case -108307814:
			return "Discoverable - Love Message - Heartland";
		case -1123615607:
			return "Discoverable - Alchemst House";
		case -261141318:
			return "Discoverable - Dead Snake - Complete";
		case 405586984:
			return "Old Fort Wallace - Wall Intact";
		case 1509509592:
			return "Old Fort Wallace - Wall Intact Native Son 3";
		case -959357075:
			return "Old Fort Wallace - Wall Broken Native Son 3";
		case -1311865656:
			return "Old Fort Wallace - Wall Broken";
		case 440043364:
			return "Drought Ended";
		case 1177464213:
			return "Cinco Torres - Door Intact";
		case -919512195:
			return "Caliga Hall - Tabacco Start";
		case -1925798111:
			return "Caliga Hall - Tabacco During Mission";
		case 420709909:
			return "Caliga Hall - Tabacco Burning";
		case 1703426636:
			return "Caliga Hall - Tabacco Burnt";
		case -939420910:
			return "Colter Winter 1 Intro Stage";
		case 356365161:
			return "Colter High Snow";
		case -1187950766:
			return "Colter Cabin Buring Stage";
		case -1170496998:
			return "Colter Fires Lit";
		case 753127042:
			return "Colter Medium Snow";
		case -2038424081:
			return "Colter Thawed Snow";
		case 1485195808:
			return "Colter Schoolhouse Interior";
		case 1884271742:
			return "Colter Thawed Snow minus wagons";
		case 459290420:
			return "Colter MP stage";
		case -1674179981:
			return "Rhodes Grave - Normal";
		case -1835851517:
			return "Rhodes Grave - Fresh Dug";
		case -1838352012:
			return "Rhodes Grave - Open";
		case -1741667789:
			return "Rhodes Bank - Lights Off";
		case -628542779:
			return "Val GenStore - Lights Off";
		case -741351766:
			return "Rhodes Saloon Post Braithwaites";
		case 2037589949:
			return "Rhodes Sallon2 Grave";
		case -334729750:
			return "Watons Cabin Grave";
		case -150493654:
			return "Utopia 2 Tree Standing";
		case -1271608261:
			return "Utopia 2 Tree Mission";
		case 1846061697:
			return "Utopia 2 Tree Fallen";
		case -1145519186:
			return "Utopia 2 Tree Stump";
		case 106479759:
			return "UTP1 Bridge Cover";
		case -1414537028:
			return "No Animals";
		case 38162571:
			return "Light Animals";
		case 1350391819:
			return "Medium Animals";
		case 54073871:
			return "Normal Animals";
		case 618699440:
			return "Taxidermy Marital";
		case -748969569:
			return "Taxidermy Notices";
		case -1062490780:
			return "Appleseed Orchids";
		case -683458244:
			return "Rare Fish Cabin End";
		case 273461605:
			return "Hideout Beaver Hollow Inactive";
		case -857964358:
			return "Hideout Hanging Dog Inactive";
		case -868076593:
			return "Hideout Shady Belle Inactive";
		case 1205826474:
			return "Hideout Six Point Inactive";
		case 2136753624:
			return "Hideout Thieves Landing Inactive";
		case -63926460:
			return "Hideout Hanging Dog Endless Summer";
		case 374115931:
			return "Hideout Beaver Hollow Endless Summer";
		case 1982676972:
			return "Hideout Six Point Table";
		case -2034257789:
			return "Hideout Six Point Lights";
		case -356975260:
			return "Serial Killer Cabin - Doors Open";
		case -2106214197:
			return "Ride The Lightning - Electric Chair";
		case -1029225159:
			return "Ride The Lightning - Moonshine Barrels";
		case -1532284567:
			return "Beaver Hollow - Hideout";
		case -524145696:
			return "Shady Belle - Hideout";
		case 1466547629:
			return "Shady Belle - Extra Blocker";
		case -238080464:
			return "Valentine Wagon";
		case 1015669983:
			return "Valentine magic lantern door";
		case -1799960545:
			return "Valentine bank shutters closed";
		case -1223121209:
			return "Valentine Burial Drunk";
		case 1453909576:
			return "Valentine Burial Murder";
		case 630808005:
			return "Valentine Burial Post Drunk";
		case 1643531967:
			return "Valentine Burial Post Murder";
		case 1164928979:
			return "Rhodes Burial";
		case 527226204:
			return "Blackwater Burial";
		case 1213993593:
			return "Horseshoe - Barrel";
		case 1944170089:
			return "Clemens Point - Barrel";
		case -538880323:
			return "Pronghorn Ranch - Empty";
		case -538889627:
			return "Pronghorn Ranch - Exist";
		case -1056767524:
			return "Pronghorn Ranch - Fixed Fence";
		case 1850082804:
			return "Pronghorn Ranch - Mr. Geddes Unavailable";
		case 373691918:
			return "Guarma - Exist";
		case 2019386373:
			return "Guarma - Guarma3 Tower Normal";
		case -664252410:
			return "Guarma - Guarma3 Tower Frag";
		case 2109952320:
			return "Guarma - Guarma3 Tower Destroyed";
		case 704802028:
			return "Beechers - Shack";
		case 588987611:
			return "Beechers - Shack with fire";
		case 2008888900:
			return "Beechers - Camp With Shack";
		case 1649996811:
			return "Beechers - Camp With Rubble";
		case 227918160:
			return "Beechers - Camp With Supplies";
		case 168171957:
			return "Beechers - House Finished";
		case 1193080109:
			return "Beechers - Barn Finished";
		case -491981251:
			return "Beechers - House Decorated";
		case -639037538:
			return "Beechers - House Abigail 3";
		case -618620429:
			return "Beechers - House Fully Decorated";
		case 434558613:
			return "Tanner's Reach - Cabin burnt down";
		case 1186594126:
			return "Random Event - Murder Campfire - Tree Scene";
		case 469053995:
			return "Random Event - Murder Campfire - Rock Scene";
		case -2101264851:
			return "Fast Travel Markers";
		case -1700452710:
			return "MP Property IPLs";
		case 1488453464:
			return "Valentine - Ambient Cover - MP Only";
		case -299522880:
			return "Strawberry - Doctor";
		case -640663440:
			return "MP World Areas";
		case -1164215952:
			return "Rhodes - Jail Intact";
		case -1236261996:
			return "Valentine - Jail Intact";
		case -1447311849:
			return "MP Lakay";
		case 559573222:
			return "Saint Denis - Enable Theater for ES";
		case -792853067:
			return "Shady Belle - Dominoes Seats";
		case -1282804314:
			return "Shack On the Run - Helped the convict and learned about his stash";
		case 1352699670:
			return "Shack On the Run - Found reward in the tree";
		case -233743613:
			return "Clemens Point - Dominoes Lantern";
		case 1203043430:
			return "Horse Shoe Overlook - Dominoes Lantern";
		case 299694527:
			return "Shady Belle - Dominoes Lantern";
		case 442317566:
			return "Horsehoe Overlook - Dominoes Seats";
		case 417525590:
			return "Horsehoe Overlook - Table Seats";
		case -1949204933:
			return "Clemens Point - Dominoes Seats";
		case 235928616:
			return "Compstons Stead - Barn burnt down";
		case 345808947:
			return "Beaver Hollow - Ladder burnt";
		case -1014145132:
			return "Swanson Station - Poker 6 Chairs";
		case -1840704908:
			return "Swanson Station - Poker 3 Chairs - Cutscene";
		case -736853952:
			return "Tent for Sean 1";
		case 1478132521:
			return "Camp for Sean 1";
		case -360036154:
			return "Mob 3 Trolley Damage";
		case -1080627546:
			return "Saint Denis Photographer table and chairs";
		case 885203519:
			return "Blackwater Photographer table and chairs";
		case 1167397384:
			return "MacFarlanes' Ranch Chimney Off";
		case 2024769126:
			return "MacLeans' House Chimney Off";
			return "Ridgewood Farm Chimney Off";
			return "Painted Sky Chimney Off";
			return "Carmody Dell Chimney Off";
			return func_138(iParam0, 0);
		}

void func_145(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(40, 195, "CLEAR_SALOON: Clearing ", func_147(iParam0));
	func_250(Global_1940170.f_5[iParam0 /*11*/].f_6, 1);
	func_251(Global_1940170.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1940170.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1940170.f_5[iParam0 /*11*/].f_8);
	}
	func_252(iParam0, 8192);
	func_252(iParam0, 32768);
	func_252(iParam0, 524288);
	func_252(iParam0, 1048576);
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

int func_146(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 195, "GET_SALOON_FROM_REGION_AND_SALOON_TYPE - Doesn't have a link setup for this region/type and saloon enum. Region: ", func_108(iParam0), ", Saloon Type: ", func_147(iParam1));
	return -1;
}

char* func_147(int iParam0)
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

int func_148(int iParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 139, "GSMAN_GET_THEATER_FROM_REGION -- Region: ", func_124(iParam0, 0), " - THEATER TYPE: ", func_149(iParam1, 0));
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return 2;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_149(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "GSMAN_THEATER_TYPE_STAGE";
		case 1:
			return "GSMAN_THEATER_TYPE_MAGIC";
		case 2:
			return "GSMAN_THEATER_TYPE_COUNT";
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

bool func_150()
{
	return func_253(func_68(0));
}

bool func_151(int iParam0)
{
	return !func_254(iParam0);
}

void func_152(bool bParam0, bool bParam1)
{
	if (func_255(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_125(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (!bParam0)
	{
		func_256(0);
	}
	else
	{
		if (bParam1)
		{
			func_257(0, 0, 0, 1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Not clearing the spectator lock!");
			UNK_0x355E72323AEE83CC(36, 6);
		}
		func_258(0);
		func_259(&(Global_1102630.f_3849));
		Global_1102630.f_3849 = 0f;
		Global_1102630.f_3849.f_5 = 1;
		Global_1102630.f_3849.f_16 = 0;
		Global_1102630.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_17 = { Global_1901988.f_50.f_1, Global_1901988.f_50.f_1, Global_1901988.f_50.f_1 };
		Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_260(&(Global_1102630.f_3888));
		Global_1102630.f_3888.f_6 = { Global_1102630.f_3849.f_17.f_6 };
		Global_1102630.f_3888 = Global_1102630.f_3849;
		Global_1102630.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102630.f_26.f_3341 = 0;
			Global_1102630.f_26.f_3342 = 0;
		}
	}
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN called.  Output starting...");
	func_261(Global_1102630.f_3849, 36);
	func_262(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_153(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0x4DC69742196F818A(40, 139, "NET_CLEAR_SHOP ", func_161(iParam0, 0));
	bVar0 = (func_263(iParam0) && !bParam1);
	if (!bVar0 && !func_165(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1051777.f_80[iParam0 /*75*/].f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051777.f_80[iParam0 /*75*/].f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&(Global_1051777.f_80[iParam0 /*75*/].f_21));
			Global_1051777.f_80[iParam0 /*75*/].f_21 = 0;
			DEBUG::_0xA308F935BDECCEC0(40, 139, "[NET_CLEAR_SHOP] - Shop keeper deleted for shop: ", func_154(iParam0));
		}
		if (STREAMING::IS_MODEL_VALID(Global_1051777.f_80[iParam0 /*75*/].f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051777.f_80[iParam0 /*75*/].f_19);
		}
		Global_1051777.f_80[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_177(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_21))
	{
		MISC::_0xE98D55C5983F2509(Global_1051777.f_80[iParam0 /*75*/].f_21);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_24))
	{
		NETWORK::_0xA35E7BF20FA269E0(Global_1051777.f_80[iParam0 /*75*/].f_24);
		POPULATION::_0xA1CFB35069D23C23(Global_1051777.f_80[iParam0 /*75*/].f_24);
		POPULATION::_0x74C2B3DC0B294102(Global_1051777.f_80[iParam0 /*75*/].f_24);
		if (func_165(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051777.f_80[iParam0 /*75*/].f_24);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_25))
	{
		POPULATION::_0xA1CFB35069D23C23(Global_1051777.f_80[iParam0 /*75*/].f_25);
		POPULATION::_0x74C2B3DC0B294102(Global_1051777.f_80[iParam0 /*75*/].f_25);
		if (func_165(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051777.f_80[iParam0 /*75*/].f_25);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_27))
	{
		if (func_165(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051777.f_80[iParam0 /*75*/].f_27);
		}
	}
	if (func_177(iParam0, 16384) && !bVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 139, "[NET_CLEAR_SHOP] Remove the script created scenario for: ", func_154(iParam0));
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
		func_264(iParam0, 16384);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 139, "[NET_CLEAR_SHOP] Clearing shop data.");
	Global_1051777.f_80[iParam0 /*75*/] = -1;
	Global_1051777.f_80[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051777.f_80[iParam0 /*75*/].f_48 = 0;
	Global_1051777.f_80[iParam0 /*75*/].f_73 = 1;
	Global_1915867.f_3[iParam0 /*447*/].f_16 = 0;
	iVar3 = func_160(iParam0);
	if (iVar3 >= 15)
	{
		DEBUG::_0x83407B92D46F25C3(168, 139, "[NET_CLEAR_SHOP] - Shop: ", func_161(iParam0, 0), " current door count exceeds max door count.");
		Global_1915867.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_143(Global_1051777.f_80[iParam0 /*75*/].f_31[iVar2]);
			Global_1051777.f_80[iParam0 /*75*/].f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051777.f_80[iParam0 /*75*/].f_47 = 0;
	}
	func_265(iParam0);
	if (func_165(iParam0, 262144))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 139, "NET_CLEAR_SHOP: SPF_ALLOW_BLIP_OUT_OF_REGION for ", func_154(iParam0), " is kept; all other flags cleared.");
		Global_1051777.f_80[iParam0 /*75*/].f_49 = 262144;
	}
	else
	{
		func_266(iParam0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051777.f_80[iParam0 /*75*/].f_24) && func_267(iParam0, 2))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[NET_CLEAR_SHOP] Removing relationship volume from shop ", func_161(iParam0, 0));
		VOLUME::_0xFD010A2154B40676(Global_1051777.f_80[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_0x2C87C3E1C7B96EE2(Global_1051777.f_80[iParam0 /*75*/].f_24);
	}
	func_268(iParam0);
	Global_1051777.f_80[iParam0 /*75*/].f_1 &= 2113536;
	func_269(iParam0);
	Global_1051777.f_80[iParam0 /*75*/].f_18 = -1;
	Global_1051777.f_80[iParam0 /*75*/].f_2 = -1;
}

char* func_154(int iParam0)
{
	return func_161(iParam0, 0);
}

int func_155(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

int func_156(int iParam0)
{
	if (!func_270(iParam0))
	{
		return 0;
	}
	if (Global_1051777.f_4480[iParam0] == 0)
	{
		Global_1051777.f_4480[iParam0] = func_271(iParam0);
	}
	return Global_1051777.f_4480[iParam0];
}

float func_157(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 50f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 29:
			return 25f;
		case 38:
			return 70f;
		case 37:
			return 30f;
		case 15:
			return 25f;
		case 39:
			return 100f;
	}
	return 12.5f;
}

void func_158(int iParam0, int iParam1)
{
	if (!func_177(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 55, "[NET_SET_SHOP_TYPE_FLAG] ", func_154(iParam0), " flag ", func_272(iParam1));
	}
	Global_1051777.f_80[iParam0 /*75*/].f_1 = (Global_1051777.f_80[iParam0 /*75*/].f_1 || iParam1);
}

void func_159(int iParam0)
{
	Global_1051777[Global_1051777.f_41] = iParam0;
	Global_1051777.f_41++;
	if (Global_1051777.f_41 >= 40)
	{
		Global_1051777.f_41 = (40 - 1);
		DEBUG::_0x83407B92D46F25C3(8, 139, "[NET_ENABLE_SHOP_TYPE] Trying to enable more shop types than there are!");
	}
}

int func_160(int iParam0)
{
	return Global_1051777.f_80[iParam0 /*75*/].f_47;
}

char* func_161(int iParam0, int iParam1)
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

bool func_162(bool bParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_189(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, false, false, 0, 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add Door ", func_189(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(bParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_189(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(bParam0, 1);
		DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Set door ", func_189(bParam0, 0), " able to change open ratio while locked");
		UNK_0x355E72323AEE83CC(183, 7);
	}
	return bParam0;
}

bool func_163(bool bParam0)
{
	if (func_273(bParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0);
	}
	return false;
}

bool func_164(bool bParam0)
{
	func_162(bParam0, 0, 0);
	if (func_163(bParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) == 0;
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "IS_DOOR_ID_UNLOCKED - Invalid Door ID");
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	return (Global_1051777.f_80[iParam0 /*75*/].f_49 && iParam1) != 0;
}

int func_166()
{
	return Global_1893599.f_2;
}

int func_167(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	return func_274(iParam0, "sHash", bParam1, "fHeading", bParam2, "vPos", sParam3);
}

int func_168(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	return func_274(iParam0, "sClosedHash", bParam1, "fClosedHeading", bParam2, "vClosedPos", sParam3);
}

void func_169(int iParam0, bool bParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	if (bParam6)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), false);
	}
	Global_1051777.f_80[iParam0 /*75*/].f_6 = func_175(bParam1, vParam2, uParam5, 0, 0, 0);
	Global_1915867.f_3[iParam0 /*447*/].f_16 = Global_1051777.f_80[iParam0 /*75*/].f_6;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051777.f_80[iParam0 /*75*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051777.f_80[iParam0 /*75*/].f_6, 0);
	func_158(iParam0, 16384);
	DEBUG::_0xA308F935BDECCEC0(10920, 139, "[NET_ADD_SHOP_SCENARIO_AT_POINT] Creating scenario point: ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam1), " for shop: ", func_161(iParam0, 0), " at: ", MISC::_0x6C4DBF553885F9EB(vParam2));
}

char* func_170(int iParam0)
{
	return func_275(iParam0, 0);
}

void func_171(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_172(struct<2> Param0)
{
	return func_276(Param0, 9, 12);
}

char* func_173(int iParam0, int iParam1)
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

char* func_174(int iParam0)
{
	if (func_270(iParam0))
	{
		return func_173(iParam0, 0);
	}
	return "SHOP_INVALID";
}

int func_175(bool bParam0, char[12] cParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(bParam0, cParam1, iParam4, iParam5, iParam6, iParam7);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 11;
		case 56:
			return 57;
		case 54:
			return 55;
		case 36:
			return 37;
		case 105:
			return 106;
		case 79:
			return 80;
		case 94:
			return 95;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 196, "@@ NET_GET_PIANIST_FROM_BARTENDER: This saloon has no pianist. ENUM = ", func_173(iParam0, 0));
	return -1;
}

bool func_177(int iParam0, int iParam1)
{
	return (Global_1051777.f_80[iParam0 /*75*/].f_1 && iParam1) != 0;
}

bool func_178(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_ALIVE - Not in SP");
		return false;
	}
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_ALIVE - Invalid ", iParam0);
		return false;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_83(iParam0)))
	{
		DEBUG::_0x4DC69742196F818A(168, 138, "IS_REGIONAL_CHARACTER_ALIVE - Checking if ", func_179(iParam0), " is alive when the perschar index is not created.");
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_277(iParam0)))
	{
		DEBUG::_0x4DC69742196F818A(168, 138, "IS_REGIONAL_CHARACTER_ALIVE - ", func_179(iParam0), " does not have a ped spawned.");
		return false;
	}
	DEBUG::_0x4DC69742196F818A(2216, 138, "IS_REGIONAL_CHARACTER_ALIVE - ", func_179(iParam0), " being processed - ALIVE = ", !PERSCHAR::_0xEB98B38CA60742D7(func_83(iParam0)), "!");
	return !PERSCHAR::_0xEB98B38CA60742D7(func_83(iParam0));
}

char* func_179(int iParam0)
{
	return func_278(iParam0, 0);
}

bool func_180(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_181(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_182(int iParam0)
{
	return iParam0 != 0;
}

float func_183(vector3 vParam0, int iParam3)
{
	return func_279(Global_33, vParam0, iParam3);
}

void func_184()
{
	func_280(&(iLocal_140[0]), joaat("P_DOOR_VAL_BARN_L"), -361.6891f, 785.3472f, 115.2065f);
	func_280(&(iLocal_140[1]), joaat("P_DOOR_VAL_BARN_R"), -361.9032f, 789.568f, 115.2065f);
	func_280(&(iLocal_140[2]), joaat("P_DOOR_VAL_BARN_L"), -376.7099f, 784.3367f, 115.1714f);
	func_280(&(iLocal_140[3]), joaat("P_DOOR_VAL_BARN_R"), -376.9761f, 788.7846f, 115.1714f);
}

void func_185()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_140)
	{
		func_281(&(iLocal_140[iVar0]));
		iVar0++;
	}
}

bool func_186()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_4;
}

void func_187(bool bParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (func_163(bParam0))
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

void func_188(bool bParam0, bool bParam1)
{
	if (func_163(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 2);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "LOCK_DOOR_ID - Locking Door ID ", func_189(bParam0, 0));
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "LOCK_DOOR - Invalid Door ID");
	}
}

var func_189(bool bParam0, int iParam1)
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

void func_190(bool bParam0, bool bParam1)
{
	if (func_163(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 1 || bParam1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(2216, 183, "SET_DOOR_ID_LOCKED_AND_UNBREAKABLE - Door ID ", func_189(bParam0, 0), " state = ", OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0), " pending state ", UNK_0x4BC2854478F3A749(bParam0));
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 1);
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "SET_DOOR_ID_LOCKED_AND_UNBREAKABLE - Invalid Door ID");
	}
}

void func_191(bool bParam0, bool bParam1)
{
	if (func_163(bParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(bParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(bParam0, 0);
			DEBUG::_0x1B08D1EB9D8C4931(40, 183, "UNLOCK_DOOR_ID - Unlocking Door ID ", func_189(bParam0, 0));
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "UNLOCK_DOOR - Invalid Door ID");
	}
}

bool func_192()
{
	return true;
}

bool func_193(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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

struct<2> func_194(int iParam0)
{
	int iVar0;

	iVar0 = func_282(iParam0);
	return func_223(joaat("VISITED"), iVar0);
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_196()
{
	if (func_45() == -1)
	{
		return true;
	}
	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

float func_197(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_198()
{
	if (Local_19 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_19.f_6);
		STREAMING::REQUEST_MODEL(Local_19, false);
		Local_19.f_16 = 1;
	}
}

bool func_199()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_19.f_6))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHURCH_BELL_HAVE_ASSETS_LOADED - Loading...");
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_19.f_6);
	}
	return true;
}

bool func_200()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_19.f_5 <= 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 0, "SHOULD_CHURCH_BELL_RING: Church bell has no scheduled ring times!");
		return false;
	}
	iVar1 = func_201();
	iVar2 = func_202(iVar1);
	iVar3 = func_217(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_19.f_5 - 1))
	{
		iVar4 = func_202(Local_19.f_1[iVar0]);
		iVar5 = func_217(Local_19.f_1[iVar0]);
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_201()
{
	return Global_1902870;
}

int func_202(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_203(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2);
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}

bool func_204(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_283())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_205()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_284())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939313.f_75.f_55))
	{
		return false;
	}
	if (func_285(-1 ^ 9, 0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 11, "_CAN_DISPLAY_NAMED_LOCATION - on story mission on RCM");
		return false;
	}
	return true;
}

char* func_206(int iParam0, int iParam1)
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

var func_207(bool bParam0, int iParam1)
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
		case joaat("WATER_AURORA_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(1635242381);
		case joaat("P_4_BRAITHWAITE_MANOR"):
			return UNK_0x6D61F5AE2F9BCC97(224532591);
		case joaat("P_4_MERCER_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-472607657);
		case joaat("W_4_WILLARDS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(849467908);
		case joaat("W_4_FIRWOOD_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-1922007300);
		case joaat("W_5_BEAVER_HOLLOW"):
			return UNK_0x6D61F5AE2F9BCC97(-413395734);
		case joaat("P_3_DAKOTA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-690937176);
		case joaat("W_4_PRONGHORN_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1463959216);
		case joaat("GRIZZLIESEAST"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GRIZZLIESEAST"));
		case joaat("CHOLLASPRINGS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CHOLLASPRINGS"));
		case joaat("WATER_ELYSIAN_POOL"):
			return UNK_0x6D61F5AE2F9BCC97(-1941950534);
		case joaat("W_4_HANGING_DOG_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(258519640);
		case joaat("P_4_FORT_WALLACE"):
			return UNK_0x6D61F5AE2F9BCC97(206800943);
		case joaat("P_4_BOLGER_GLADE"):
			return UNK_0x6D61F5AE2F9BCC97(-1500425599);
		case joaat("W_4_COOTS_CHAPEL"):
			return UNK_0x6D61F5AE2F9BCC97(1647986426);
		case joaat("WATER_ARROYO_DE_LA_VIBORA"):
			return UNK_0x6D61F5AE2F9BCC97(-1297598175);
		case joaat("W_4_GILL_LANDING"):
			return UNK_0x6D61F5AE2F9BCC97(992898011);
		case -1:
			return UNK_0x6D61F5AE2F9BCC97(-1558728209);
		case joaat("W_4_SCRATCHING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(589209742);
		case joaat("ANNESBURG"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ANNESBURG"));
		case joaat("P_4_SAINT_DENIS"):
			return UNK_0x6D61F5AE2F9BCC97(-237301247);
		case joaat("LEMOYNE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LEMOYNE"));
		case joaat("P_3_FLAT_IRON_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(-1288553638);
		case joaat("W_4_HAGEN_ORCHARDS"):
			return UNK_0x6D61F5AE2F9BCC97(839036238);
		case joaat("W_4_THE_HANGING_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1778253480);
		case joaat("W_4_GAPTOOTH_BREACH"):
			return UNK_0x6D61F5AE2F9BCC97(45480399);
		case joaat("W_4_VENTERS_PLACE"):
			return UNK_0x6D61F5AE2F9BCC97(-426370264);
		case joaat("HEARTLANDS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_HEARTLANDS"));
		case joaat("ROANOKE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ROANOKE"));
		case joaat("W_4_BAYGALL_EDGE"):
			return UNK_0x6D61F5AE2F9BCC97(126421978);
		case joaat("AGUASDULCESRUINS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESRUINS"));
		case joaat("P_4_BACCHUS_BRIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(2025958694);
		case joaat("W_4_ABERDEEN_PIG_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(-1994823782);
		case joaat("W_4_LUCKYS_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(-487594955);
		case joaat("W_5_HURON_GLEN"):
			return UNK_0x6D61F5AE2F9BCC97(-466326051);
		case joaat("WATER_CALMUT_RAVINE"):
			return UNK_0x6D61F5AE2F9BCC97(-793511668);
		case joaat("W_5_ARGIL_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-387206358);
		case joaat("P_4_PLAINVIEW"):
			return UNK_0x6D61F5AE2F9BCC97(1694507244);
		case joaat("WATER_MATTLOCK_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-969377220);
		case joaat("W_4_COCHINAY"):
			return UNK_0x6D61F5AE2F9BCC97(220207608);
		case joaat("P_4_EMERALD_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1397796134);
		case joaat("W_4_OSMAN_GROVE"):
			return UNK_0x6D61F5AE2F9BCC97(1388488635);
		case joaat("WATER_DAKOTA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-1968376296);
		case joaat("W_4_TRAPPERS_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(453382979);
		case joaat("W_4_NEKOTI_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1748215998);
		case joaat("LAGRAS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LAGRAS"));
		case joaat("W_4_EL_NIDO"):
			return UNK_0x6D61F5AE2F9BCC97(-998540134);
		case joaat("P_4_CALUMET_RAVINE"):
			return UNK_0x6D61F5AE2F9BCC97(450452876);
		case joaat("DIEZCORONAS"):
			return UNK_0x6D61F5AE2F9BCC97(-218414422);
		case joaat("STRAWBERRY"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_STRAWBERRY"));
		case joaat("VALENTINE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_VALENTINE"));
		case joaat("P_3_LAKAY"):
			return UNK_0x6D61F5AE2F9BCC97(-1198271207);
		case joaat("WATER_DEWBERRY_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-724951584);
		case joaat("GREATPLAINS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GREATPLAINS"));
		case joaat("W_4_CORNWALL_KEROSENE_TAR"):
			return UNK_0x6D61F5AE2F9BCC97(-697301044);
		case joaat("W_4_COMPSONS_STEAD"):
			return UNK_0x6D61F5AE2F9BCC97(1246608437);
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1"):
			return UNK_0x6D61F5AE2F9BCC97(1079923585);
		case joaat("P_4_MOUNT_SHANN"):
			return UNK_0x6D61F5AE2F9BCC97(-1851739719);
		case joaat("W_4_HANIS_BETHEL"):
			return UNK_0x6D61F5AE2F9BCC97(-337974688);
		case joaat("P_4_CALIBANS_SEAT"):
			return UNK_0x6D61F5AE2F9BCC97(563595232);
		case joaat("P_4_MANZANITA_POST"):
			return UNK_0x6D61F5AE2F9BCC97(994223196);
		case joaat("W_4_CANEBREAK_MANOR"):
			return UNK_0x6D61F5AE2F9BCC97(-1046614768);
		case joaat("P_3_CAIRN_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(1914999778);
		case joaat("WATER_LAKE_ISABELLA"):
			return UNK_0x6D61F5AE2F9BCC97(-1781716009);
		case joaat("NUEVOPARAISO"):
			return UNK_0x6D61F5AE2F9BCC97(-1107977956);
		case joaat("WATER_BEARTOOTH_BECK"):
			return UNK_0x6D61F5AE2F9BCC97(-415784948);
		case joaat("W_5_VALLEY_VIEW"):
			return UNK_0x6D61F5AE2F9BCC97(807958313);
		case joaat("W_5_DEER_COTTAGE"):
			return UNK_0x6D61F5AE2F9BCC97(-872624188);
		case joaat("P_4_QUAKERS_COVE"):
			return UNK_0x6D61F5AE2F9BCC97(-1199568170);
		case joaat("P_3_OCREAGHS_RUN"):
			return UNK_0x6D61F5AE2F9BCC97(-1184868151);
		case joaat("W_4_RILEYS_CHARGE"):
			return UNK_0x6D61F5AE2F9BCC97(-941219432);
		case joaat("P_4_RIGGS_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-923377861);
		case joaat("W_4_LONNIES_SHACK"):
			return UNK_0x6D61F5AE2F9BCC97(-555463868);
		case joaat("WATER_BARROW_LAGOON"):
			return UNK_0x6D61F5AE2F9BCC97(-1552073914);
		case joaat("W_4_MARTHAS_SWAIN"):
			return UNK_0x6D61F5AE2F9BCC97(-487377121);
		case joaat("BIGVALLEY"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BIGVALLEY"));
		case joaat("P_4_LAKE_ISABELLA"):
			return UNK_0x6D61F5AE2F9BCC97(-656868670);
		case joaat("W_4_SAWBONE_CLEARING"):
			return UNK_0x6D61F5AE2F9BCC97(1212791156);
		case joaat("W_4_WITCHES_CAULDRON"):
			return UNK_0x6D61F5AE2F9BCC97(-1604939054);
		case joaat("W_4_SHADY_BELLE"):
			return UNK_0x6D61F5AE2F9BCC97(1958759930);
		case joaat("W_4_SOLOMONS_FOLLY"):
			return UNK_0x6D61F5AE2F9BCC97(1772850469);
		case joaat("W_4_VAN_HORN_MANSION"):
			return UNK_0x6D61F5AE2F9BCC97(1765331379);
		case joaat("HENNIGANSSTEAD"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_HENNIGANSSTEAD"));
		case joaat("W_4_PLEASANCE"):
			return UNK_0x6D61F5AE2F9BCC97(198366362);
		case joaat("P_4_LAGRAS"):
			return UNK_0x6D61F5AE2F9BCC97(389964733);
		case joaat("P_4_THIEVES_LANDING"):
			return UNK_0x6D61F5AE2F9BCC97(1208901393);
		case joaat("W_4_SILTWATER_STRAND"):
			return UNK_0x6D61F5AE2F9BCC97(367027611);
		case joaat("W_4_VETERANS_HOMESTEAD"):
			return UNK_0x6D61F5AE2F9BCC97(-431376049);
		case joaat("P_4_TWIN_STACK_PASS"):
			return UNK_0x6D61F5AE2F9BCC97(1292124363);
		case joaat("W_4_MOSSY_FLATS"):
			return UNK_0x6D61F5AE2F9BCC97(-768608803);
		case joaat("W_4_EVELYN_MILLER_CAMP"):
			return UNK_0x6D61F5AE2F9BCC97(-725252354);
		case joaat("P_4_DIABLO_RIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(34572935);
		case joaat("BLACKWATER"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BLACKWATER"));
		case joaat("W_4_MACOMBS_END"):
			return UNK_0x6D61F5AE2F9BCC97(-991017380);
		case joaat("W_5_LENORA_VIEW"):
			return UNK_0x6D61F5AE2F9BCC97(-356012590);
		case joaat("P_4_LA_CAPILLA"):
			return UNK_0x6D61F5AE2F9BCC97(-30512579);
		case joaat("W_4_COPPERHEAD_LANDING"):
			return UNK_0x6D61F5AE2F9BCC97(1847948966);
		case joaat("P_5_BRANDYWINE_DROP"):
			return UNK_0x6D61F5AE2F9BCC97(335100198);
		case joaat("W_4_STILT_SHACK"):
			return UNK_0x6D61F5AE2F9BCC97(800398523);
		case joaat("P_4_SISIKA_PENITENTIARY"):
			return UNK_0x6D61F5AE2F9BCC97(-340073099);
		case joaat("W_4_REPENTANCE"):
			return UNK_0x6D61F5AE2F9BCC97(1946536511);
		case joaat("W_4_ABANDONED_TRADING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(-1903442384);
		case joaat("WATER_HOT_SPRINGS"):
			return UNK_0x6D61F5AE2F9BCC97(77878338);
		case joaat("P_3_AURORA_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(-1831852884);
		case joaat("P_3_LAKE_DON_JULIO"):
			return UNK_0x6D61F5AE2F9BCC97(1685262616);
		case joaat("P_3_ERIS_FIELD"):
			return UNK_0x6D61F5AE2F9BCC97(1797803116);
		case joaat("W_5_BERYLS_DREAM"):
			return UNK_0x6D61F5AE2F9BCC97(1541987280);
		case joaat("WATER_DEADBOOT_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-86903947);
		case joaat("WESTELIZABETH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WESTELIZABETH"));
		case joaat("P_4_WINDOW_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1590139118);
		case joaat("W_4_CUEVA_SECA"):
			return UNK_0x6D61F5AE2F9BCC97(-1470814629);
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3"):
			return UNK_0x6D61F5AE2F9BCC97(-710410730);
		case joaat("MANICATO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_MANICATO"));
		case joaat("P_4_RHODES"):
			return UNK_0x6D61F5AE2F9BCC97(-257468296);
		case joaat("W_4_OIL_DERRICK"):
			return UNK_0x6D61F5AE2F9BCC97(1972784215);
		case joaat("BLUEWATERMARSH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BLUEWATERMARSH"));
		case joaat("P_3_UPPER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1878473840);
		case joaat("W_4_OLD_HARRY_FEN"):
			return UNK_0x6D61F5AE2F9BCC97(-34806732);
		case joaat("W_4_MERKINS_WALLER"):
			return UNK_0x6D61F5AE2F9BCC97(1599875934);
		case joaat("W_4_ROBARD_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(-2089181823);
		case joaat("P_3_DEADBOOT_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-1300038760);
		case joaat("W_5_VETTERS_ECHO"):
			return UNK_0x6D61F5AE2F9BCC97(1147621771);
		case joaat("W_4_MANITO_GLADE"):
			return UNK_0x6D61F5AE2F9BCC97(-644526564);
		case joaat("W_4_FLATTENED_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(-889775621);
		case joaat("P_4_WALLACE_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(1745620619);
		case joaat("PUNTAORGULLO"):
			return UNK_0x6D61F5AE2F9BCC97(1745042391);
		case joaat("MANZANITA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_MANZANITA"));
		case joaat("P_4_BENEDICT_PASS"):
			return UNK_0x6D61F5AE2F9BCC97(-1045615482);
		case joaat("W_4_RATTLESNAKE_HOLLOW"):
			return UNK_0x6D61F5AE2F9BCC97(648379522);
		case joaat("P_3_ROANOKE_VALLEY"):
			return UNK_0x6D61F5AE2F9BCC97(876016790);
		case joaat("P_3_BARROW_LAGOON"):
			return UNK_0x6D61F5AE2F9BCC97(-1548925919);
		case joaat("W_6_REED_COTTAGE"):
			return UNK_0x6D61F5AE2F9BCC97(1210215629);
		case joaat("W_4_MICAHS_HIDEOUT"):
			return UNK_0x6D61F5AE2F9BCC97(162507934);
		case joaat("W_4_RIDGEWOOD_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(1974485917);
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2"):
			return UNK_0x6D61F5AE2F9BCC97(-1004905733);
		case joaat("P_3_LANNAHECHEE_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-1089943698);
		case joaat("P_3_MATTOCK_POND"):
			return UNK_0x6D61F5AE2F9BCC97(2130809939);
		case joaat("P_3_OWANJILA"):
			return UNK_0x6D61F5AE2F9BCC97(-102604905);
		case joaat("P_4_KAMASSA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-136736133);
		case joaat("W_4_OLD_TOMS_BLIND"):
			return UNK_0x6D61F5AE2F9BCC97(1152533298);
		case joaat("W_5_GRAND_KORRIGAN_SEA"):
			return UNK_0x6D61F5AE2F9BCC97(-1780933259);
		case joaat("W_4_CLAWSONS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(-1495172807);
		case joaat("GRIZZLIESWEST"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GRIZZLIESWEST"));
		case joaat("AGUASDULCESFARM"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESFARM"));
		case joaat("WAPITI"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WAPITI"));
		case joaat("P_3_MOONSTONE_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-38863779);
		case joaat("W_4_BEECHERS_HOPE"):
			return UNK_0x6D61F5AE2F9BCC97(1144880185);
		case joaat("TALLTREES"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_TALLTREES"));
		case joaat("P_3_SPIDER_GORGE"):
			return UNK_0x6D61F5AE2F9BCC97(-1950089507);
		case joaat("W_4_CATFISH_JACKSONS"):
			return UNK_0x6D61F5AE2F9BCC97(1912441084);
		case joaat("W_4_WALLACE_OVERLOOK"):
			return UNK_0x6D61F5AE2F9BCC97(751555489);
		case joaat("W_4_ROADSIDE_BROTHEL"):
			return UNK_0x6D61F5AE2F9BCC97(-1251986070);
		case joaat("P_3_SAN_LUIS_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1254246155);
		case joaat("P_3_ELYSIAN_POOL"):
			return UNK_0x6D61F5AE2F9BCC97(-2106275894);
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return UNK_0x6D61F5AE2F9BCC97(913322904);
		case joaat("W_4_LARNED_SOD"):
			return UNK_0x6D61F5AE2F9BCC97(-1486600045);
		case joaat("P_4_RINGNECK_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(1966949384);
		case joaat("BRAITHWAITE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BRAITHWAITE"));
		case joaat("P_3_MOUNT_HAGEN"):
			return UNK_0x6D61F5AE2F9BCC97(-68989566);
		case joaat("W_4_CLEMENS_POINT"):
			return UNK_0x6D61F5AE2F9BCC97(1940299500);
		case joaat("CUMBERLAND"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CUMBERLAND"));
		case joaat("P_4_RIO_DEL_LOBO_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(94694339);
		case joaat("W_4_PRINZ_CO"):
			return UNK_0x6D61F5AE2F9BCC97(-1548446900);
		case joaat("CALIGA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CALIGA"));
		case joaat("W_4_STILLWATER_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(795840665);
		case joaat("W_4_HOUSEBOAT"):
			return UNK_0x6D61F5AE2F9BCC97(-293766051);
		case joaat("W_4_GREENHOLLOW"):
			return UNK_0x6D61F5AE2F9BCC97(-675788085);
		case joaat("GUARMA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GUARMA"));
		case joaat("P_4_DONNER_FALLS"):
			return UNK_0x6D61F5AE2F9BCC97(1522447378);
		case joaat("W_6_RADLEYS_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(1392576518);
		case joaat("W_4_CLINGMAN"):
			return UNK_0x6D61F5AE2F9BCC97(556441814);
		case joaat("WATER_RINGNECK_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(454066312);
		case joaat("P_3_LITTLE_CREEK_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1603575037);
		case joaat("P_4_JORGES_GAP"):
			return UNK_0x6D61F5AE2F9BCC97(1747361576);
		case joaat("BAYOUNWA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BAYOUNWA"));
		case joaat("NEWAUSTIN"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_NEWAUSTIN"));
		case joaat("RHODES"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_RHODES"));
		case joaat("W_4_SIX_POINT_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(100533548);
		case joaat("P_4_CALIGA_HALL"):
			return UNK_0x6D61F5AE2F9BCC97(1755139455);
		case joaat("W_5_FISHINGSPOT"):
			return UNK_0x6D61F5AE2F9BCC97(-813506563);
		case joaat("P_3_HEARTLAND_OVERFLOW"):
			return UNK_0x6D61F5AE2F9BCC97(607782628);
		case joaat("VANHORN"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_VANHORN"));
		case joaat("W_4_MILLESANI_CLAIM"):
			return UNK_0x6D61F5AE2F9BCC97(-1034387204);
		case joaat("SISKA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_SISKA"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_208(int iParam0, int iParam1)
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

char* func_209(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893599.f_162)))
	{
		sVar0 = func_286(Global_1893599.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_288(func_287(Global_34));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_289(iParam0) || func_290(44))
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
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
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
				*bParam6 = 1;
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
				*bParam6 = 1;
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

bool func_210(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_211(int iParam0)
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

int func_212(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_210(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 111, "GET_LAW_BOUNTY_STATE_BOUNTY - eLBS ", iParam0, " is invalid.");
		return -1;
	}
	if (Global_1572887.f_13 == -1)
	{
		return Global_38.f_194[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_291(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072032.f_21329[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return Global_1072032.f_21329[iParam0 /*12*/];
}

int func_213(bool bParam0)
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

char* func_214(int iParam0)
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

bool func_215(int iParam0, int iParam1)
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

bool func_216(int iParam0, int iParam1)
{
	if (!func_210(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_38.f_194[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072032.f_21329[iParam0 /*12*/].f_5 && iParam1) != 0;
}

int func_217(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_218(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_219(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_292(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_220(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_221(int iParam0)
{
	if (func_289(iParam0))
	{
		if (!func_290(44))
		{
			return false;
		}
	}
	return true;
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
	DEBUG::_0xF0783374333FD8CE(40, 0, "SET_PLAYER_FLAG: ", func_293(iParam1, 0));
}

struct<2> func_223(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_224(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 139, "GSMAN_DELETE_THEATER_VOLUMES -- Region: ", func_124(iParam0, 0));
	switch (iParam0)
	{
		case 5:
			VOLUME::_DELETE_VOLUME(Global_1270027.f_47[0]);
			VOLUME::_DELETE_VOLUME(Global_1270027.f_47[1]);
			VOLUME::_DELETE_VOLUME(Global_1270027.f_50[0]);
			VOLUME::_DELETE_VOLUME(Global_1270027.f_50[1]);
			break;
		case 81:
			VOLUME::_DELETE_VOLUME(Global_1270027.f_47[1]);
			VOLUME::_DELETE_VOLUME(Global_1270027.f_50[1]);
			break;
	}
}

void func_225(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
		DEBUG::_0x4DC69742196F818A(8, 87, "Deleting volume ");
	}
}

void func_226()
{
	DEBUG::_0xF0783374333FD8CE(8, 210, "CHURCH_BELL_CLEANUP");
	if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_9, -1000f);
		}
	}
	if (Local_19.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_19.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_19.f_6);
		}
		Local_19.f_16 = 0;
	}
	if (Local_19.f_18 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(Local_19.f_18);
	}
}

void func_227()
{
	if (func_45() != -1)
	{
		return;
	}
	func_294(iLocal_66);
	func_294(iLocal_76);
	func_294(iLocal_77);
}

void func_228()
{
	if (iLocal_146 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&iLocal_146);
		iLocal_146 = -1;
	}
}

void func_229(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_135(Global_1915867.f_3[iParam0 /*447*/].f_21) && func_295(Global_1915867.f_3[iParam0 /*447*/].f_21))
	{
		func_296(Global_1915867.f_3[iParam0 /*447*/].f_21, 0, 1, 0, 0);
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
	func_297(Global_1915867.f_3[iParam0 /*447*/].f_9, 0);
	func_298(iParam0, 536870912);
	iVar1 = func_299(iParam0);
	if (iVar1 >= 15)
	{
		DEBUG::_0x83407B92D46F25C3(2216, 139, "[SHOP_UNLOCK_DOORS] Shop: ", func_161(iParam0, 0), " door count is greater then the. Current door count: ", iVar1, " Max door count: ", 15);
		Global_1915867.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_143(Global_1915867.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/]);
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
	func_300(iParam0);
	Global_1915867.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915867.f_3[iParam0 /*447*/].f_8 = -1;
	DEBUG::_0xF0783374333FD8CE(168, 139, "[CLEAR_SHOP] Shop: ", func_161(iParam0, 0), " has been cleared!");
}

bool func_230(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_FLAG_SET - Not in SP");
		return false;
	}
	if (!func_135(iParam0))
	{
		return false;
	}
	return (Global_9895[iParam0 /*2*/] && iParam1) != 0;
}

int func_231(int iParam0, bool bParam1)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 138, "DESTROY_REGIONAL_CHARACTER - rcType ", func_179(iParam0), " is invalid");
		return 0;
	}
	if (!func_230(iParam0, 2))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER - rcType ", func_179(iParam0), " has not been initialized");
		return 0;
	}
	if (func_245(iParam0) == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: Persistent character ", func_179(iParam0), " doesn't exist");
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_83(iParam0)))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: Persistent character ", func_179(iParam0), " already destroyed");
		return 1;
	}
	if (func_230(iParam0, 1) && !bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: Persistent character ", func_179(iParam0), " is stolen, so it will be destoyed on release.");
		func_301(iParam0, 128);
		return 1;
	}
	func_247(iParam0, 129);
	func_302(iParam0);
	DEBUG::_0xA308F935BDECCEC0(40, 138, "DESTROY_REGIONAL_CHARACTER: Destroying ", func_179(iParam0));
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_83(iParam0));
	func_246(iParam0, 0);
	DEBUG::_0xA308F935BDECCEC0(168, 138, "DESTROY_REGIONAL_CHARACTER: ", func_179(iParam0), " destroyed.");
	return 1;
}

int func_232(int iParam0)
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

int func_233(int iParam0)
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

void func_234()
{
	int iVar0;
	var uVar1;

	func_266(30);
	func_268(30);
	func_303(30);
	func_269(30);
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
		DEBUG::_0xF0783374333FD8CE(40, 139, "@@ NET_CLEAR_BARTENDERS - Removed ", func_174(Global_1051777.f_3642[iVar0 /*19*/]));
		Global_1051777.f_3642[iVar0 /*19*/] = -1;
		iVar0++;
	}
}

void func_235()
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
	func_269(32);
}

int func_236(int iParam0)
{
	return func_304(iParam0) + 30;
}

bool func_237()
{
	return func_305() == 4;
}

var func_238(bool bParam0, int iParam1)
{
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

int func_239(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

void func_240(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_241(*iParam0);
	iVar1 = func_243(*iParam0);
	if (iParam1 < 1 || iParam1 > func_306(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_306(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_241(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

void func_242(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

int func_243(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_307(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_244(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		UNK_0x355E72323AEE83CC(-1, 6);
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_YEAR: Passed a <= 0 year which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "SET_TIMEOFDAY_YEAR: Passed a year [", iParam1, "]which is bigger than g_iYearOffset +- 32. Failed to set TIMEOFDAY");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

int func_245(int iParam0)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_NAME - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/];
}

void func_246(int iParam0, char* sParam1)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "SET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Invalid ", iParam0);
		return;
	}
	Global_1893787[iParam0 /*3*/].f_1 = sParam1;
	DEBUG::_0xA308F935BDECCEC0(136, 138, "SET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Setting PERSCHAR_INDEX for ", iParam0, " PERSCHAR_INDEX is ", sParam1);
}

void func_247(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "CLEAR_REGIONAL_CHARACTER_FLAG - Not in SP");
		return;
	}
	if (!func_135(iParam0))
	{
		return;
	}
	Global_9895[iParam0 /*2*/] = (Global_9895[iParam0 /*2*/] - (Global_9895[iParam0 /*2*/] && iParam1));
	DEBUG::_0xA308F935BDECCEC0(680, 138, "CLEAR_REGIONAL_CHARACTER_FLAG - Clearing flag ", func_308(iParam1), " on ", func_179(iParam0));
}

bool func_248(int iParam0)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "SHOULD_REGIONAL_CHARACTER_BE_CREATED: Regional character index not valid ", iParam0);
		return false;
	}
	if (!func_230(iParam0, 2))
	{
		DEBUG::_0x83407B92D46F25C3(168, 138, "SHOULD_REGIONAL_CHARACTER_BE_CREATED: ", func_179(iParam0), " has not been initialized");
		return false;
	}
	DEBUG::_0x4DC69742196F818A(40, 138, "SHOULD_REGIONAL_CHARACTER_BE_CREATED: ", func_179(iParam0));
	return true;
}

bool func_249()
{
	return true;
}

void func_250(int iParam0, bool bParam1)
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

void func_251(int iParam0, bool bParam1)
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

void func_252(int iParam0, int iParam1)
{
	UNK_0x355E72323AEE83CC(195, 6);
	DEBUG::_0xA308F935BDECCEC0(40, 195, "CLEAR_SALOON_CONFIG_FLAG: Clearing flag for ", func_309(iParam1, 0));
	func_310(&(Global_1940170.f_5[iParam0 /*11*/].f_7), iParam1);
}

bool func_253(struct<2> Param0)
{
	return func_276(Param0, 5, 8);
}

bool func_254(int iParam0)
{
	return func_311(1, iParam0);
}

int func_255(int iParam0)
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

int func_256(int iParam0)
{
	if (func_312(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_313(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

void func_257(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_314(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_315(iParam0, 0));
	if (!func_316(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_317(128) && !func_318(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_305() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_256(18);
	}
	func_319(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

int func_258(int iParam0)
{
	if (func_320(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_313(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

void func_259(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_260(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_261(struct<30> Param0, int iParam30)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam30, "        Respawn Params Desired Start         ");
	switch (Param0.f_5)
	{
		case 1:
			DEBUG::_0xF0783374333FD8CE(40, iParam30, "             fHeading                        - ", MISC::_0x2B6846401D68E563(Param0, 4));
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(40, iParam30, "             vTargetForHeading               - ", MISC::_0x6C4DBF553885F9EB(Param0.f_1));
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
				DEBUG::_0xF0783374333FD8CE(40, iParam30, "             eiTargetForHeading              - ", UNK_0xE02C950E4C991632(Param0.f_4));
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(40, iParam30, "             eiTargetForHeading              - ", "ENTITY DOESN'T EXIST!  WHAT ARE YOU DOING?!");
			}
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17.f_6));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17.f_3));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_321(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_321(Param0.f_6.f_9, 0));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vPosition                - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_COORDS(Param0.f_27)));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vOrientation             - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_ROTATION(Param0.f_27)));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vScale                   - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_SCALE(Param0.f_27)));
	}
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             bUseVolumeLockSafety            - ", MISC::_0xF216F74101968DB0(Param0.f_29));
	DEBUG::_0xF0783374333FD8CE(8, iParam30, "        Respawn Params Desired End         ");
}

void func_262(struct<7> Param0, var uParam7, var uParam8, int iParam9)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Fallback Start         ");
	DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vPosition                       - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
	switch (Param0.f_5)
	{
		case 1:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             fHeading                        - ", MISC::_0x2B6846401D68E563(Param0, 4));
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vTargetForHeading               - ", MISC::_0x6C4DBF553885F9EB(Param0.f_1));
			break;
		case 3:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             eiTargetForHeading              - ", UNK_0xE02C950E4C991632(Param0.f_4));
			break;
	}
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Fallback End         ");
}

bool func_263(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_165(iParam0, 65536))
	{
		return true;
	}
	return false;
}

void func_264(int iParam0, int iParam1)
{
	if (func_177(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 55, "[NET_CLEAR_SHOP_TYPE_FLAG] ", func_154(iParam0), " flag ", func_272(iParam1));
	}
	Global_1051777.f_80[iParam0 /*75*/].f_1 = (Global_1051777.f_80[iParam0 /*75*/].f_1 - (Global_1051777.f_80[iParam0 /*75*/].f_1 && iParam1));
}

void func_265(int iParam0)
{
}

void func_266(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 55, "[NET_CLEAR_ALL_SHOP_PROPERTIES_FLAGS] ", func_154(iParam0));
	Global_1051777.f_80[iParam0 /*75*/].f_49 = 0;
}

bool func_267(int iParam0, int iParam1)
{
	return func_322(Global_1051777.f_80[iParam0 /*75*/].f_50, iParam1);
}

void func_268(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 55, "[NET_CLEAR_ALL_SHOP_PROPERTIES_SUPPORT_FLAGS] ", func_154(iParam0));
	Global_1051777.f_80[iParam0 /*75*/].f_50 = 0;
}

void func_269(int iParam0)
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

bool func_270(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_271(int iParam0)
{
	vector3 vVar0;

	if (DATAFILE::_0x603AC35FD4602C76(Global_1139844.f_7) && !func_324(12, func_323(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

char* func_272(int iParam0)
{
	return func_325(iParam0, 0);
}

bool func_273(bool bParam0)
{
	return bParam0 != 0;
}

int func_274(int iParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6)
{
	struct<4> Var0;

	Var0 = func_326();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_323(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		DEBUG::_0x4DC69742196F818A(40, 139, "[NET_GET_SHOP_AUTHOR_DATA_WITH_STRING] Could not fill out region node for: ", func_174(iParam0));
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::_DATAFILE_GET_HASH(bParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_DATAFILE_GET_FLOAT(bParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_DATAFILE_GET_VECTOR(sParam6, &Var0);
	DEBUG::_0x4DC69742196F818A(1747624, 139, "[NET_GET_SHOP_AUTHOR_DATA_WITH_STRING] eShop = ", func_174(iParam0), ", ", sParam5, " = ", MISC::_0x6C4DBF553885F9EB(*sParam6), ", ", sParam3, " = ", *bParam4);
	return 1;
}

char* func_275(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147483648:
			return "SPF_FORCE_TUTORIAL_PLAYTHROUGH";
		case 0:
			return "SPF_NONE";
		case 1:
			return "SPF_AUTO_START";
		case 2:
			return "SPF_REQUIRES_SELL_ITEM";
		case 4:
			return "SPF_AUTO_START_SHOP_VOLUME";
		case 8:
			return "SPF_PLAYER_USED_SHOP";
		case 16:
			return "SPF_REQUIRES_MOUNT";
		case 32:
			return "SPF_INSTANCED_SHOP";
		case 64:
			return "SPF_TUTORIAL_MODE_ENABLED";
		case 128:
			return "SPF_PLAYER_SET_CRIME";
		case 256:
			return "SPF_SHOP_OWNER_COMBAT_SET";
		case 512:
			return "SPF_SHOP_OWNER_FOCUS_CAM";
		case 1024:
			return "SPF_PLAYER_FOCUS_STARTED";
		case 2048:
			return "SPF_PLAYER_FOCUSED";
		case 4096:
			return "SPF_GREETING_SAID";
		case 8192:
			return "SPF_IGNORE_SCREEN_FADING";
		case 16384:
			return "SPF_NO_SHOPKEEPER_REQUIRED";
		case 32768:
			return "SPF_NO_SCENARIO_REQUIRED";
		case 65536:
			return "SPF_SHOPKEEPER_CREATED_EXTERNALLY";
		case 131072:
			return "SPF_ALTERNATE_BLIP_DISPLAYED";
		case 262144:
			return "SPF_ALLOW_BLIP_OUT_OF_REGION";
		case 524288:
			return "SPF_DELETE_SHOP_VOLUMES_ON_CLEANUP";
		case 1048576:
			return "SPF_OFFLIMITS_NO_MOVE";
		case 2097152:
			return "SPF_SCREEN_FADE_REQUESTED";
		case 4194304:
			return "SPF_USE_ENTITY_ROTATION_CAMERA";
		case 8388608:
			return "SPF_FADE_SCREEN_ON_ENTER_AND_EXIT";
		case 16777216:
			return "SPF_USE_SHOP_PROMPT_AS_SHOP";
		case 33554432:
			return "SPF_PLAYER_ENTERED_SHOP";
		case 67108864:
			return "SPF_DO_NOT_USE_MP_CUTSCENE";
		case 134217728:
			return "SPF_DOORS_ARE_LOCKED";
		case 268435456:
			return "SPF_ALLOW_SHOP_OUT_OF_VOLUME";
		case 536870912:
			return "SPF_ALLOW_CARRYING";
		case 1073741824:
			return "SPF_IGNORE_CONTENT_LOCKS";
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

bool func_276(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_327(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_328(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_277(int iParam0)
{
	int iVar0;

	iVar0 = func_83(iParam0);
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

char* func_278(int iParam0, int iParam1)
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
				return "RC_RHODES_WHITE_SLUMS_2";
				return "RC_RHODES_WHITE_SLUMS_3";
				return "RC_RHODES_WHITE_SLUMS_4";
				return "RC_RHODES_WHITE_SLUMS_5";
				return "RC_RHODES_SLUMS_DRUNK_1";
				return "RC_RHODES_SLUMS_DRUNK_2";
				return "RC_RHODES_SLUMS_DRUNK_3";
				return "RC_RHODES_SLUMS_DRUNK_4";
				return "RC_RHODES_SLUMS_DRUNK_5";
				return "RC_RHODES_WHITE_SLUMS_MUSICIAN";
				return "RC_RHODES_LARGE_MALE_1";
				return "RC_RHODES_PRISONER";
				return "RC_RHODES_ANIMAL_FIRST";
				return "RC_RHODES_MAIN_STRIP_DOG";
				return "RC_RHODES_MANSION_CAT";
				return "RC_RHODES_MANSION_DOG";
				return "RC_RHODES_WHITE_SLUMS_CAT_1";
				return "RC_RHODES_WHITE_SLUMS_CAT_2";
				return "RC_RHODES_WHITE_SLUMS_DOG";
				return "RC_RHODES_WHITE_SLUMS_DOG_2";
				return "RC_RHODES_WHITE_SLUMS_PIG";
				return "RC_SAINT_DENIS_FIRST";
				return "RC_SAINT_DENIS_BARTENDER_SLUMS";
				return "RC_SAINT_DENIS_BUTCHER";
				return "RC_SAINT_DENIS_DOCTOR";
				return "RC_SAINT_DENIS_TRAINSTATIONWKR";
				return "RC_SAINT_DENIS_LAST_MP";
				return "RC_SAINT_DENIS_PHOTOGRAPHER";
				return "RC_SAINT_DENIS_CITY_WORKER_1";
				return "RC_SAINT_DENIS_COM_CHURCH_WORKER_1";
				return "RC_SAINT_DENIS_COURTYARD_LADY_01";
				return "RC_SAINT_DENIS_COURTYARD_LADY_02";
				return "RC_SAINT_DENIS_DOCK_BOAT_GUARD_1";
				return "RC_SAINT_DENIS_DOCK_CASTILLE_1";
				return "RC_SAINT_DENIS_DOCK_CASTILLE_2";
				return "RC_SAINT_DENIS_DOCK_CIVILIAN_1";
				return "RC_SAINT_DENIS_DOCK_CONSTRUCTION_1";
				return "RC_SAINT_DENIS_DOCK_CONSTRUCTION_2";
				return "RC_SAINT_DENIS_DOCK_CONSTRUCTION_3";
				return "RC_SAINT_DENIS_DOCK_CORNWALL_1";
				return "RC_SAINT_DENIS_DOCK_COTTON_1";
				return "RC_SAINT_DENIS_DOCK_COTTON_2";
				return "RC_SAINT_DENIS_DOCK_COTTON_3";
				return "RC_SAINT_DENIS_DOCK_COTTON_4";
				return "RC_SAINT_DENIS_DOCK_COTTON_5";
				return "RC_SAINT_DENIS_DOCK_COTTON_6";
				return "RC_SAINT_DENIS_DOCK_COTTON_7";
				return "RC_SAINT_DENIS_DOCK_COTTON_8";
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_1";
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_2";
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_3";
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_CAT";
				return "RC_SAINT_DENIS_DOCK_LIGHTHOUSE_DOG";
				return "RC_SAINT_DENIS_DOCK_LUMBER_1";
				return "RC_SAINT_DENIS_DOCK_LUMBER_2";
				return "RC_SAINT_DENIS_DOCK_LUMBER_3";
				return "RC_SAINT_DENIS_DOCK_LUMBER_4";
				return "RC_SAINT_DENIS_DOCK_WORKER_1";
				return "RC_SAINT_DENIS_DOCK_WORKER_2";
				return "RC_SAINT_DENIS_DOCK_WORKER_3";
				return "RC_SAINT_DENIS_DOCK_WORKER_4";
				return "RC_SAINT_DENIS_FARMER_01";
				return "RC_SAINT_DENIS_FARMER_DOG_01";
				return "RC_SAINT_DENIS_FARMER_WIFE_01";
				return "RC_SAINT_DENIS_FARMER_WIFE_02";
				return "RC_SAINT_DENIS_FARMER_WIFE_03";
				return "RC_SAINT_DENIS_FARMER_WIFE_04";
				return "RC_SAINT_DENIS_FARMHAND_01";
				return "RC_SAINT_DENIS_FARMHAND_02";
				return "RC_SAINT_DENIS_FARMHAND_03A";
				return "RC_SAINT_DENIS_FARMHAND_03B";
				return "RC_SAINT_DENIS_FARMHAND_04";
				return "RC_SAINT_DENIS_FARMHAND_05";
				return "RC_SAINT_DENIS_RURAL_BLACKSMITH";
				return "RC_SAINT_DENIS_RURAL_HOUSE_LADY_1";
				return "RC_SAINT_DENIS_RURAL_HOUSE_LADY_2";
				return "RC_SAINT_DENIS_RURAL_SLUMS_DOG_1";
				return "RC_SAINT_DENIS_RURAL_SLUMS_DOG_2";
				return "RC_SAINT_DENIS_RURAL_SLUMS_MAN_1";
				return "RC_SAINT_DENIS_RURAL_SLUMS_MAN_2";
				return "RC_SAINT_DENIS_RURAL_SLUMS_WOMAN_1";
				return "RC_SAINT_DENIS_RURAL_SLUMS_WOMAN_2";
				return "RC_SAINT_DENIS_FLOWER_ENTHUSIAST";
				return "RC_SAINT_DENIS_FLOWER_ENTHUSIAST_2";
				return "RC_SAINT_DENIS_GENSTOREOWNER";
				return "RC_SAINT_DENIS_BARBER";
				return "RC_SAINT_DENIS_GUNSMITH";
				return "RC_SAINT_DENIS_HOMEOWNER_01";
				return "RC_SAINT_DENIS_HOMEOWNER_02";
				return "RC_SAINT_DENIS_HORSE_SHOP_OWNER";
				return "RC_SAINT_DENIS_HOTEL_CARETAKER";
				return "RC_SAINT_DENIS_ARTIST";
				return "RC_SAINT_DENIS_BANKTELLER";
				return "RC_SAINT_DENIS_BANK_GUARD";
				return "RC_SAINT_DENIS_CHICKEN_01";
				return "RC_SAINT_DENIS_ROOSTER_01";
				return "RC_SAINT_DENIS_GOAT_01";
				return "RC_SAINT_DENIS_GOAT_02";
				return "RC_SAINT_DENIS_HORSE_01";
				return "RC_SAINT_DENIS_COW_01";
				return "RC_SAINT_DENIS_COW_02";
				return "RC_SAINT_DENIS_BULL_02";
				return "RC_SAINT_DENIS_COW_03";
				return "RC_SAINT_DENIS_GENSTORESHADY";
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_1";
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_2";
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_3";
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_4";
				return "RC_SAINT_DENIS_GROUNDS_KEEPER_5";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_1";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_2";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_3";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_4";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_5";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_6";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_DOG";
				return "RC_SAINT_DENIS_INDUSTRY_CASTILLE_DOG_2";
				return "RC_SAINT_DENIS_INDUSTRY_COURTYARD_1";
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_1";
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_2";
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_3";
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_4";
				return "RC_SAINT_DENIS_INDUSTRY_LAMBERT_5";
				return "RC_SAINT_DENIS_INDUSTRY_LANIK_1";
				return "RC_SAINT_DENIS_INDUSTRY_LANIK_2";
				return "RC_SAINT_DENIS_MARKETVENDOR1";
				return "RC_SAINT_DENIS_SLUMS_MARKET_FEMALE_1";
				return "RC_SAINT_DENIS_MARKET_WORKER_1";
				return "RC_SAINT_DENIS_MUSICIAN";
				return "RC_SAINT_DENIS_NEWSPAPER_VENDOR";
				return "RC_SAINT_DENIS_PARK_CARETAKER_1";
				return "RC_SAINT_DENIS_PARK_CARETAKER_2";
				return "RC_SAINT_DENIS_PARK_CARETAKER_3";
				return "RC_SAINT_DENIS_PIG_02";
				return "RC_SAINT_DENIS_POLICE_CHIEF";
				return "RC_SAINT_DENIS_COM_POLICE_1";
				return "RC_SAINT_DENIS_COM_POLICE_2";
				return "RC_SAINT_DENIS_COM_POLICE_3";
				return "RC_SAINT_DENIS_DOCK_POLICE_1";
				return "RC_SAINT_DENIS_DOCK_POLICE_2";
				return "RC_SAINT_DENIS_FRENCH_POLICE_1";
				return "RC_SAINT_DENIS_FRENCH_POLICE_2";
				return "RC_SAINT_DENIS_FRENCH_POLICE_3";
				return "RC_SAINT_DENIS_PARK_POLICE";
				return "RC_SAINT_DENIS_PARK_POLICE_2";
				return "RC_SAINT_DENIS_GARDEN_POLICE_1";
				return "RC_SAINT_DENIS_GARDEN_POLICE_2";
				return "RC_SAINT_DENIS_GARDEN_POLICE_3";
				return "RC_SAINT_DENIS_GARDEN_POLICE_4";
				return "RC_SAINT_DENIS_GARDEN_POLICE_5";
				return "RC_SAINT_DENIS_GARDEN_POLICE_6";
				return "RC_SAINT_DENIS_GARDEN_POLICE_7";
				return "RC_SAINT_DENIS_GARDEN_POLICE_8";
				return "RC_SAINT_DENIS_GARDEN_POLICE_9";
				return "RC_SAINT_DENIS_GARDEN_POLICE_10";
				return "RC_SAINT_DENIS_GARDEN_CAT";
				return "RC_SAINT_DENIS_GARDEN_DOG";
				return "RC_SAINT_DENIS_GARDEN_DRINKER_1";
				return "RC_SAINT_DENIS_GARDEN_DRINKER_2";
				return "RC_SAINT_DENIS_PRISONER_1";
				return "RC_SAINT_DENIS_PRISONER_2";
				return "RC_SAINT_DENIS_SHOW_TICKET_VENDOR";
				return "RC_SAINT_DENIS_SHOW_TICKET_VENDOR_2";
				return "RC_SAINT_DENIS_WAGON_DELIVERY_1";
				return "RC_SAINT_DENIS_WAGON_DELIVERY_2";
				return "RC_SAINT_DENIS_SLUMS_SALOON_1";
				return "RC_SAINT_DENIS_SLUMS_SALOON_2";
				return "RC_SAINT_DENIS_SLUMS_SALOON_PIANO";
				return "RC_SAINT_DENIS_SLUMS_MALE_RES_1";
				return "RC_SAINT_DENIS_SLUMS_MALE_RES_2";
				return "RC_SAINT_DENIS_SLUMS_MALE_RES_3";
				return "RC_SAINT_DENIS_SLUMS_FEMALE_RES_1";
				return "RC_SAINT_DENIS_SLUMS_FEMALE_RES_2";
				return "RC_SAINT_DENIS_SLUMS_SHADY";
				return "RC_SAINT_DENIS_SLUMS_FISHERMAN";
				return "RC_SAINT_DENIS_SLUMS_ARTIST";
				return "RC_SAINT_DENIS_SLUMS_PROSTITUTE_1";
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_1";
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_2";
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_3";
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_4";
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_5";
				return "RC_SAINT_DENIS_SLUMS_SOUP_KITCHEN_6";
				return "RC_SAINT_DENIS_TOURIST_MALE_1";
				return "RC_SAINT_DENIS_TOURIST_FEMALE_1";
				return "RC_SAINT_DENIS_CEMETERY_KEEPER";
				return "RC_SAINT_DENIS_CHURCH_KEEPER";
				return "RC_SAINT_DENIS_SLUMS_PIG_1";
				return "RC_SAINT_DENIS_SLUMS_PIG_2";
				return "RC_SAINT_DENIS_SLUMS_DOG_1";
				return "RC_SAINT_DENIS_SLUMS_DOG_2";
				return "RC_SAINT_DENIS_SLUMS_DOG_3";
				return "RC_SAINT_DENIS_SLUMS_DOG_4";
				return "RC_SAINT_DENIS_SLUMS_DOG_5";
				return "RC_SAINT_DENIS_FRENCH_RAKER";
				return "RC_SAINT_DENIS_FRENCH_SALOON_1";
				return "RC_SAINT_DENIS_FRENCH_SALOON_2";
				return "RC_SAINT_DENIS_FRENCH_SALOON_3";
				return "RC_SAINT_DENIS_FRENCH_PROSTITUTE_1";
				return "RC_SAINT_DENIS_FRENCH_TRUMPET_MALE_1";
				return "RC_SAINT_DENIS_FRENCH_COURTYARD_DOG";
				return "RC_SAINT_DENIS_FRENCH_LOWERCLASS_WOMAN";
				return "RC_SAINT_DENIS_LAST";
				return "RC_SISIKA_PENITENTIARY_FIRST";
				return "RC_SISIKA_PENITENTIARY_COURTYARD_GUARD_2";
				return "RC_SISIKA_PENITENTIARY_COURTYARD_GUARD_3";
				return "RC_SISIKA_PENITENTIARY_COURTYARD_GUARD_4";
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD";
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_2";
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_3";
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_4";
				return "RC_SISIKA_PENITENTIARY_GATE_GUARD_5";
				return "RC_SISIKA_PENITENTIARY_BRIDGE_GUARD";
				return "RC_SISIKA_PENITENTIARY_BRIDGE_GUARD_2";
				return "RC_SISIKA_PENITENTIARY_DOCKS_GUARD";
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD";
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD_2";
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD_3";
				return "RC_SISIKA_PENITENTIARY_FIELD_GUARD_4";
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD";
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD_2";
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD_3";
				return "RC_SISIKA_PENITENTIARY_WALL_GUARD_4";
				return "RC_TUMBLEWEED_HOMEOWNER_MALE_RESIDENT";
				return "RC_TUMBLEWEED_HOMEOWNER_FEMALE_RESIDENT";
				return "RC_TUMBLEWEED_HORSE_SHOP_OWNER";
				return "RC_TUMBLEWEED_SHERRIF";
				return "RC_TUMBLEWEED_SHERRIF_DEPUTY";
				return "RC_TUMBLEWEED_SHERRIF_DEPUTY_3";
				return "RC_TUMBLEWEED_BARTENDER";
				return "RC_TUMBLEWEED_BUTCHER";
				return "RC_TUMBLEWEED_GENERAL_STORE_OWNER";
				return "RC_TUMBLEWEED_PIANO_PLAYER";
				return "RC_TUMBLEWEED_DOG_1";
				return "RC_TUMBLEWEED_DOG_2";
				return "RC_TUMBLEWEED_RESIDENTS_DOG";
				return "RC_TUMBLEWEED_RANCH_DOG";
				return "RC_TUMBLEWEED_PRISONER_1";
				return "RC_TUMBLEWEED_PRISONER_2";
				return "RC_TUMBLEWEED_PRISONER_3";
				return "RC_TUMBLEWEED_PRISONER_4";
				return "RC_TUMBLEWEED_PRISONER_5";
				return "RC_TUMBLEWEED_PRISONER_6";
				return "RC_TUMBLEWEED_GUNSMITH_OWNER";
				return "RC_TUMBLEWEED_SCAVENGER";
				return "RC_TUMBLEWEED_SALOON_PATRON_1";
				return "RC_TUMBLEWEED_SALOON_PATRON_2";
				return "RC_TUMBLEWEED_SALOON_PATRON_3";
				return "RC_TUMBLEWEED_SALOON_WORKER_1";
				return "RC_TUMBLEWEED_SALOON_WORKER_2";
				return "RC_TUMBLEWEED_RANCH_HORSES";
				return "RC_TUMBLEWEED_RANCH_WORKER_1";
				return "RC_TUMBLEWEED_RANCH_WORKER_2";
				return "RC_TUMBLEWEED_RANCHER";
				return "RC_TWIN_ROCK_RANCH_GUARD";
				return "RC_TWIN_ROCK_RANCH_GUARD_2";
				return "RC_TWIN_ROCK_RANCH_GUARD_3";
				return "RC_TWIN_ROCK_LAST";
				return "RC_MANICATO_LAST_MP";
				return "RC_MANICATO_LAST";
				return "RC_ANNESBURG_SHERIFF";
				return "RC_ANNESBURG_DEPUTY";
				return "RC_ANNESBURG_TRAINSTATIONWORKER";
				return "RC_ANNESBURG_GUNSMITH";
				return "RC_ANNESBURG_NEWSPAPER_VENDOR";
				return "RC_ANNESBURG_GUARD_01";
				return "RC_ANNESBURG_GUARD_02";
				return "RC_ANNESBURG_GUARD_03";
				return "RC_ANNESBURG_GUARD_04";
				return "RC_ANNESBURG_GUARD_05";
				return "RC_ANNESBURG_GUARD_06";
				return "RC_ANNESBURG_GUARD_07";
				return "RC_ANNESBURG_HORSES_01";
				return "RC_ANNESBURG_PLANT_WORKER_01";
				return "RC_ANNESBURG_PLANT_WORKER_02";
				return "RC_ANNESBURG_PLANT_WORKER_03";
				return "RC_ANNESBURG_PLANT_WORKER_04";
				return "RC_ANNESBURG_PLANT_WORKER_05";
				return "RC_ANNESBURG_PLANT_WORKER_06";
				return "RC_ANNESBURG_LUMBER_WORKER_01";
				return "RC_ANNESBURG_LUMBER_WORKER_02";
				return "RC_ANNESBURG_LUMBER_WORKER_03";
				return "RC_ANNESBURG_MINE_WORKER_01";
				return "RC_ANNESBURG_MINE_WORKER_02";
				return "RC_ANNESBURG_MINE_WORKER_03";
				return "RC_ANNESBURG_MINE_WORKER_04";
				return "RC_ANNESBURG_MINE_WORKER_05";
				return "RC_ANNESBURG_MINE_WORKER_06";
				return "RC_ANNESBURG_MINE_WORKER_07";
				return "RC_ANNESBURG_MINE_WORKER_08";
				return "RC_ANNESBURG_MINE_WORKER_09";
				return "RC_ANNESBURG_MINE_WORKER_10";
				return "RC_ANNESBURG_MINE_WORKER_11";
				return "RC_ANNESBURG_MINE_WORKER_12";
				return "RC_ANNESBURG_WORKER_WIFE_01";
				return "RC_ANNESBURG_WORKER_WIFE_02";
				return "RC_ANNESBURG_WORKER_WIFE_03";
				return "RC_ANNESBURG_WORKER_WIFE_04";
				return "RC_ANNESBURG_WORKER_WIFE_05";
				return "RC_ANNESBURG_WORKER_WIFE_06";
				return "RC_ANNESBURG_WORKER_WIFE_07";
				return "RC_ANNESBURG_WORKER_WIFE_08";
				return "RC_ANNESBURG_WORKER_WIFE_09";
				return "RC_ANNESBURG_WORKER_WIFE_10";
				return "RC_ANNESBURG_WORKER_WIFE_11";
				return "RC_ANNESBURG_WORKER_WIFE_12";
				return "RC_ANNESBURG_WORKER_WIFE_13";
				return "RC_ANNESBURG_WORKER_WIFE_14";
				return "RC_ANNESBURG_PRISONER_01";
				return "RC_ANNESBURG_LAST";
				return "RC_ARMADILLO_BARTENDER";
				return "RC_ARMADILLO_BAR_PATRON";
				return "RC_ARMADILLO_GENERAL_STORE";
				return "RC_ARMADILLO_UNDERTAKER";
				return "RC_ARMADILLO_UNDERTAKER_HELPER_1";
				return "RC_ARMADILLO_CORPSE_WAGON_DRIVER";
				return "RC_ARMADILLO_CHICKENS_1";
				return "RC_ARMADILLO_DOG_1";
				return "RC_ARMADILLO_DOG_2";
				return "RC_ARMADILLO_HORSES_1";
				return "RC_ARMADILLO_PIGS_1";
				return "RC_VANHORN_LAST_MP";
				return "RC_VANHORN_EXOTIC_STORE";
				return "RC_VANHORN_HARMONICA_PLAYER";
				return "RC_VANHORN_TOWN_RESIDENT_1";
				return "RC_VANHORN_TOWN_RESIDENT_2";
				return "RC_VANHORN_TOWN_RESIDENT_3";
				return "RC_VANHORN_RESIDENTS_GUARD_DOG";
				return "RC_VANHORN_SALOON_PATRON_1";
				return "RC_VANHORN_SALOON_PATRON_2";
				return "RC_VANHORN_SALOON_PATRON_3";
				return "RC_VANHORN_SALOON_PATRON_4";
				return "RC_VANHORN_SCAVENGER";
				return "RC_VANHORN_SQUATTER_1";
				return "RC_VANHORN_SQUATTER_2";
				return "RC_VANHORN_SQUATTER_3";
				return "RC_VANHORN_SQUATTER_4";
				return "RC_VANHORN_HORSE_SHOP_OWNER";
				return "RC_VANHORN_HORSE_SHOP_DOG";
				return "RC_VANHORN_SQUATTER_DOG";
				return "RC_VANHORN_TOWN_DOG_1";
				return "RC_VANHORN_GEN_STORE_GUARD_DOG";
				return "RC_VANHORN_TOWN_DRUNK";
				return "RC_VANHORN_TOWN_GRIEFER";
				return "RC_VANHORN_PROSTITUTE_1";
				return "RC_VANHORN_PROSTITUTE_2";
				return "RC_VANHORN_HORSE_1";
				return "RC_VANHORN_GOAT_1";
				return "RC_VANHORN_STATION_CLERK";
				return "RC_VANHORN_MUSICIAN";
				return "RC_STRAWBERRY_SHERRIFF";
				return "RC_STRAWBERRY_SHERRIFF_DEPUTY";
				return "RC_STRAWBERRY_GENERAL_STORE";
				return "RC_STRAWBERRY_FISHERMAN";
				return "RC_STRAWBERRY_FREIGHT_STATION_OWNER";
				return "RC_STRAWBERRY_NEWSPAPER_VENDOR";
				return "RC_STRAWBERRY_BUTCHER";
				return "RC_STRAWBERRY_HORSE_SHOP_OWNER";
				return "RC_STRAWBERRY_HORSESHOP_RANCHHAND";
				return "RC_STRAWBERRY_BLACKSMITH";
				return "RC_STRAWBERRY_PERSCHAR_HORSES";
				return "RC_STRAWBERRY_MAYOR";
				return "RC_STRAWBERRY_RANCHER";
				return "RC_STRAWBERRY_WOOD_CHOPPER_1";
				return "RC_STRAWBERRY_WOOD_CHOP_WIFE";
				return "RC_STRAWBERRY_CONSTRUCTION_1";
				return "RC_STRAWBERRY_CONSTRUCTION_2";
				return "RC_STRAWBERRY_CONSTRUCTION_3";
				return "RC_STRAWBERRY_CONSTRUCTION_WIFE_1";
				return "RC_STRAWBERRY_CONSTRUCTION_WIFE_2";
				return "RC_STRAWBERRY_WELCOME_CENTER_CLERK";
				return "RC_STRAWBERRY_LAZY_WORKER";
				return "RC_STRAWBERRY_TOWN_WORKER_1";
				return "RC_STRAWBERRY_TOWN_WORKER_2";
				return "RC_STRAWBERRY_TOWN_WORKER_3";
				return "RC_STRAWBERRY_TOURIST_MALE_1";
				return "RC_STRAWBERRY_TOURIST_MALE_2";
				return "RC_STRAWBERRY_PRISONER_01";
				return "RC_STRAWBERRY_HUMAN_LAST";
				return "RC_STRAWBERY_ANIMAL_FIRST";
				return "RC_STRAWBERRY_TOWN_DOG";
				return "RC_SWANSON_STATION_FIRST";
				return "RC_SWANSON_STATION_DOG";
				return "RC_SWANSON_STATION_CARETAKER";
				return "RC_SWANSON_STATION_CARETAKER_2";
				return "RC_BENEDICT_POINT_TRAIN_STATION_WORKER";
				return "RC_BLACKWATER_BARTENDER";
				return "RC_BLACKWATER_POLICE_CHIEF";
				return "RC_BLACKWATER_POLICE_DEPUTY";
				return "RC_BLACKWATER_PRISONER_01";
				return "RC_BLACKWATER_PRISONER_02";
				return "RC_BLACKWATER_GENERAL_STORE";
				return "RC_BLACKWATER_PHOTOGRAPHER";
				return "RC_BLACKWATER_PIANO_PLAYER";
				return "RC_BLACKWATER_HORSE_SHOP_OWNER";
				return "RC_BLACKWATER_HORSES";
				return "RC_BLACKWATER_COWS";
				return "RC_BLACKWATER_BANK_CLERK";
				return "RC_BLACKWATER_BANK_GUARD";
				return "RC_BLACKWATER_TAILOR";
				return "RC_BLACKWATER_TRAIN_WORKER";
				return "RC_BLACKWATER_CHICKENS_01";
				return "RC_BLACKWATER_NEWSPAPER";
				return "RC_BLACKWATER_TICKET_VENDOR";
				return "RC_BLACKWATER_LIVERY_WORKER";
				return "RC_BLACKWATER_LIVERY_WORKER_02";
				return "RC_BLACKWATER_LIVERY_WORKER_02_WIFE";
				return "RC_BLACKWATER_BARBER";
				return "RC_BLACKWATER_BLACKSMITH";
				return "RC_BLACKWATER_BLACKSMITH_DOG";
				return "RC_BLA_BUTCHER";
				return "RC_BLACKWATER_CARRIAGE_HOUSE";
				return "RC_BLACKWATER_CHEF";
				return "RC_BLACKWATER_CONSTRUCTION_01";
				return "RC_BLACKWATER_CONSTRUCTION_02";
				return "RC_BLACKWATER_CONSTRUCTION_03";
				return "RC_BLACKWATER_CONSTRUCTION_04";
				return "RC_BLACKWATER_CONSTRUCTION_ASSISTANT";
				return "RC_BLACKWATER_CONSTRUCTION_BOSS";
				return "RC_BLACKWATER_CONSTRUCTION_FOREMAN_1";
				return "RC_BLACKWATER_CONSTRUCTION_FOREMAN_2";
				return "RC_BLACKWATER_GROCERY_FARMER";
				return "RC_BLACKWATER_HANDYMAN_1";
				return "RC_BLACKWATER_HANDYMAN_2";
				return "RC_BLACKWATER_HOMEOWNER_1";
				return "RC_BLACKWATER_HOMEOWNER_2";
				return "RC_BLACKWATER_SLUM_01";
				return "RC_BLACKWATER_SLUM_WIFE_01";
				return "RC_BLACKWATER_TENT_CHEF";
				return "RC_BLACKWATER_TENT_CHEF_WIFE";
				return "RC_BLACKWATER_WAGON_DELIVERY_1";
				return "RC_BLACKWATER_LAST";
				return "RC_DOWNS_RANCH_FIRST";
				return "RC_DOWNS_RANCH_MOTHER";
				return "RC_DOWNS_RANCH_SON";
				return "RC_DOWNS_RANCH_RANCH_HAND";
				return "RC_DOWNS_RANCH_DEMO_COWS";
				return "RC_DOWNS_RANCH_DEMO_COWS_2";
				return "RC_DOWNS_RANCH_PIGS";
				return "RC_DOWNS_RANCH_GOATS";
				return "RC_DOWNS_RANCH_OX";
				return "RC_DOWNS_RANCH_FRIENDLY_DOG";
				return "RC_DOWNS_RANCH_GUARD_DOG";
				return "RC_DOWNS_RANCH_HUSBAND";
				return "RC_CORNWALL_K_AND_T_LAST_MP";
				return "RC_CORNWALL_K_AND_T_WORKER_2";
				return "RC_CORNWALL_K_AND_T_FOREMAN";
				return "RC_CORNWALL_K_AND_T_FOREMAN_2";
				return "RC_CORNWALL_K_AND_T_DOG";
				return "RC_CORNWALL_K_AND_T_DOG_2";
				return "RC_CORNWALL_K_AND_T_GUARD_1";
				return "RC_CORNWALL_K_AND_T_GUARD_2";
				return "RC_CORNWALL_K_AND_T_GUARD_3";
				return "RC_CORNWALL_K_AND_T_GUARD_4";
				return "RC_CORNWALL_K_AND_T_GUARD_5";
				return "RC_CORNWALL_K_AND_T_GUARD_6";
				return "RC_CORNWALL_K_AND_T_GUARD_7";
				return "RC_CORNWALL_K_AND_T_GUARD_8";
				return "RC_CORNWALL_K_AND_T_GUARD_9";
				return "RC_CORNWALL_K_AND_T_GUARD_10";
				return "RC_CORNWALL_K_AND_T_GUARD_11";
				return "RC_CORNWALL_K_AND_T_GUARD_12";
				return "RC_CORNWALL_K_AND_T_GUARD_13";
				return "RC_CORNWALL_K_AND_T_GUARD_14";
				return "RC_CORNWALL_K_AND_T_GUARD_15";
				return "RC_CORNWALL_K_AND_T_GUARD_16";
				return "RC_CORNWALL_K_AND_T_GUARD_17";
				return "RC_EMERALD_RANCH_FATHER";
				return "RC_EMERALD_RANCH_TRAINSTATIONWKR";
				return "RC_EMERALD_RANCH_GARDENER";
				return "RC_EMERALD_RANCH_GARDENER_02";
				return "RC_EMERALD_RANCH_HANDYMAN";
				return "RC_EMERALD_RANCH_FARMHAND_01";
				return "RC_EMERALD_RANCH_FARMHAND_02";
				return "RC_EMERALD_RANCH_FARMHAND_03";
				return "RC_EMERALD_RANCH_FARMHAND_04";
				return "RC_EMERALD_RANCH_SON_01";
				return "RC_EMERALD_RANCH_ANIMAL_FIRST";
				return "RC_EMERALD_RANCH_SHEEP_B";
				return "RC_EMERALD_RANCH_SHEEP_C";
				return "RC_EMERALD_RANCH_CAT";
				return "RC_EMERALD_RANCH_CAT_02";
				return "RC_EMERALD_RANCH_CHICKENS";
				return "RC_EMERALD_RANCH_COWS";
				return "RC_EMERALD_RANCH_DOG";
				return "RC_EMERALD_RANCH_DOG_02";
				return "RC_EMERALD_RANCH_DOG_03";
				return "RC_EMERALD_RANCH_GOATS";
				return "RC_EMERALD_RANCH_HORSES";
				return "RC_EMERALD_RANCH_OX";
				return "RC_EMERALD_RANCH_LAST";
				return "RC_BRAITHWAITE_MANOR_FIRST";
				return "RC_BRAITHWAITE_MANOR_STABLE_HAND_2";
				return "RC_BRAITHWAITE_MANOR_OXEN";
				return "RC_BRAITHWAITE_MANOR_HORSES_01";
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD";
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD_2";
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD_3";
				return "RC_BRAITHWAITE_MANOR_GATE_GUARD_4";
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD";
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_2";
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_3";
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_4";
				return "RC_BRAITHWAITE_MANOR_MANOR_GUARD_5";
				return "RC_CALIGA_HALL_FIRST";
				return "RC_CALIGA_HALL_FIELD_GUARD";
				return "RC_CALIGA_HALL_FIELD_GUARD_2";
				return "RC_CALIGA_HALL_FIELD_GUARD_3";
				return "RC_CALIGA_HALL_FIELD_GUARD_4";
				return "RC_CALIGA_HALL_GATE_GUARD";
				return "RC_CALIGA_HALL_GATE_GUARD_2";
				return "RC_CALIGA_HALL_HORSE_GUARD";
				return "RC_CALIGA_HALL_HORSE_GUARD_2";
				return "RC_CALIGA_HALL_HOUSE_GUARD";
				return "RC_CALIGA_HALL_HOUSE_GUARD_2";
				return "RC_CALIGA_HALL_HOUSE_GUARD_3";
				return "RC_CALIGA_HALL_HOUSE_GUARD_4";
				return "RC_CALIGA_HALL_MULE";
				return "RC_CALIGA_HALL_OX_1";
				return "RC_CALIGA_HALL_LAST";
				return "RC_CLEMENS_COVE_FIRST";
				return "RC_CLEMENS_COVE_LAST";
				return "RC_LAGRAS_FATHER_1";
				return "RC_LAGRAS_MOTHER_1";
				return "RC_LAGRAS_MOTHER_2";
				return "RC_LAGRAS_MOTHER_3";
				return "RC_LAGRAS_F_TEEN_1";
				return "RC_LAGRAS_F_TEEN_2";
				return "RC_LAGRAS_FISHERMAN_1";
				return "RC_LAGRAS_FISHERMAN_2";
				return "RC_LAGRAS_FISHERMAN_4";
				return "RC_LAGRAS_DOG_1";
				return "RC_LAGRAS_DOG_2";
				return "RC_LAGRAS_GOAT";
				return "RC_LAGRAS_LAST";
				return "RC_ORANGE_PLANTATION_FOREMAN";
				return "RC_ORANGE_PLANTATION_GUARD";
				return "RC_BUTCHER_CREEK_FIRST";
				return "RC_BUTCHER_CREEK_M_CONSTRUCTION_DRUNK_2";
				return "RC_BUTCHER_CREEK_M_FISHERMAN";
				return "RC_BUTCHER_CREEK_M_FISHERMAN_FRIEND";
				return "RC_BUTCHER_CREEK_RESIDENT_FATHER";
				return "RC_BUTCHER_CREEK_RESIDENT_MOTHER";
				return "RC_BUTCHER_CREEK_SHAMAN";
				return "RC_BUTCHER_CREEK_RESIDENT_SON";
				return "RC_BUTCHER_CREEK_SHACK_MAID_1";
				return "RC_BUTCHER_CREEK_SHACK_MAID_2";
				return "RC_BUTCHER_CREEK_F_SUPPLY_SHACK_CIV_1";
				return "RC_BUTCHER_CREEK_M_SUPPLY_SHACK_CIV_2";
				return "RC_BUTCHER_CREEK_M_SUPPLY_SHACK_CIV_3";
				return "RC_BUTCHER_CREEK_RESIDENT_MALE_1";
				return "RC_BUTCHER_CREEK_HUMAN_LAST";
				return "RC_BUTCHER_CREEK_ANIMAL_FIRST";
				return "RC_BUTCHER_CREEK_CHICKENS_2";
				return "RC_BUTCHER_CREEK_CHICKENS_3";
				return "RC_BUTCHER_CREEK_CHICKENS_4";
				return "RC_BUTCHER_CREEK_CHICKENS_5";
				return "RC_BUTCHER_CREEK_GOAT_1";
				return "RC_BUTCHER_CREEK_GOAT_2";
				return "RC_BUTCHER_CREEK_GOAT_3";
				return "RC_BUTCHER_CREEK_RESIDENT_DOG_1";
				return "RC_BUTCHER_CREEK_RESIDENT_DOG_2";
				return "RC_BUTCHER_CREEK_OX_1";
				return "RC_BUTCHER_CREEK_PIGS_1";
				return "RC_BUTCHER_CREEK_ROAMING_PIG";
				return "RC_BUTCHER_CREEK_ROOSTER_1";
				return "RC_BUTCHER_CREEK_ROOSTER_2";
				return "RC_BUTCHER_CREEK_SOLITARY_FARMER";
				return "RC_BUTCHER_CREEK_SOLITARY_DOG";
				return "RC_OLD_FORT_WALLACE_FIRST";
				return "RC_OLD_FORT_WALLACE_ARMY_MALE_2";
				return "RC_OLD_FORT_WALLACE_ARMY_MALE_3";
				return "RC_OLD_FORT_WALLACE_ARMY_DOG";
				return "RC_OLD_FORT_WALLACE_ARMY_DOG_2";
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_1";
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_2";
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_3";
				return "RC_OLD_FORT_WALLACE_ARMY_TEEN_MALE_4";
				return "RC_OLD_FORT_WALLACE_LAST";
				return "RC_WAPITI_FIRST";
				return "RC_WAPITI_MEDICINEMAN";
				return "RC_WAPITI_OFFICIAL";
				return "RC_WAPITI_HEADBRAVE";
				return "RC_WAPITI_SIOUXCHEF";
				return "RC_WAPITI_HORSE_1";
				return "RC_WAPITI_HORSE_2";
				return "RC_WAPITI_LAST";
				return "RC_PRONGHORN_RANCH_FIRST";
				return "RC_PRONGHORN_RANCH_TOM_DICKENS";
				return "RC_PRONGHORN_RANCH_MRS_GEDDES";
				return "RC_PRONGHORN_RANCH_ANGUS_GEDDES";
				return "RC_PRONGHORN_RANCH_DUNCAN_GEDDES";
				return "RC_PRONGHORN_RANCH_ABE";
				return "RC_PRONGHORN_RANCH_DOG";
				return "RC_PRONGHORN_RANCH_COWS_1";
				return "RC_PRONGHORN_RANCH_HORSES_1";
				return "RC_PRONGHORN_RANCH_OXEN_1";
				return "RC_PRONGHORN_RANCH_RANCHHAND_1";
				return "RC_PRONGHORN_RANCH_RANCHHAND_2";
				return "RC_PRONGHORN_RANCH_RANCHHAND_3";
				return "RC_PRONGHORN_RANCH_RANCHHAND_4";
				return "RC_PRONGHORN_RANCH_RANCHHAND_5";
				return "RC_MANZANITA_POST_FIRST";
				return "RC_MANZANITA_POST_ARTIST";
				return "RC_MANZANITA_POST_ARTIST_WIFE";
				return "RC_MANZANITA_POST_BLACKSMITH";
				return "RC_MANZANITA_POST_BLACKSMITH_WIFE";
				return "RC_MANZANITA_POST_WORKER";
				return "RC_MANZANITA_POST_WORKER_WIFE";
				return "RC_ABERDEEN_PIG_FARM_BROTHER";
				return "RC_ABERDEEN_PIG_FARM_LAST";
				return "RC_LARNED_SOD_TENANT_01";
				return "RC_LARNED_SOD_GOAT";
				return "RC_LARNED_SOD_DOG";
				return "RC_CARMODY_DELL_FIRST";
				return "RC_CARMODY_DELL_DOG";
				return "RC_CARMODY_DELL_BULL";
				return "RC_CARMODY_DELL_DONKEY";
				return "RC_CARMODY_DELL_TENANT_02";
				return "RC_CATFISH_JACKSON_FATHER";
				return "RC_CATFISH_JACKSON_SON_OLDER";
				return "RC_CATFISH_JACKSON_LAST";
				return "RC_WATSONS_CABIN_LAST";
				return "RC_CROP_FARM_FIRST";
				return "RC_CROP_FARM_RANCH_HAND";
				return "RC_CROP_FARM_FRIENDLY_DOG";
				return "RC_CROP_FARM_GUARD_DOG";
				return "RC_CROP_FARM_MULE";
				return "RC_CROP_FARM_LAST";
				return "RC_GRANGERS_HOGGERY_RANCH_HAND";
				return "RC_GRANGERS_HOGGERY_ROOSTER";
				return "RC_GRANGERS_HOGGERY_PIGS";
				return "RC_GRANGERS_HOGGERY_LAST";
				return "RC_DAIRY_FARM_BULL";
				return "RC_DAIRY_FARM_COWS_PERSCHAR_1";
				return "RC_DAIRY_FARM_COWS_PERSCHAR_2";
				return "RC_DAIRY_FARM_COWS_PERSCHAR_3";
				return "RC_DAIRY_FARM_DONKEY";
				return "RC_DAIRY_FARM_RANCHER";
				return "RC_DAIRY_FARM_RANCH_HAND";
				return "RC_DAIRY_FARM_GUARD_DOG";
				return "RC_DAIRY_FARM_SICK_COW";
				return "RC_LONNIES_SHACK_FIRST";
				return "RC_LONNIES_SHACK_TENANT_2";
				return "RC_LONNIES_SHACK_TENANT_3";
				return "RC_LONNIES_SHACK_LAST";
				return "RC_MACLEANS_HOUSE_COWS_A";
				return "RC_MACLEANS_HOUSE_COWS_B";
				return "RC_MACLEANS_HOUSE_COWS_C";
				return "RC_MACLEANS_HOUSE_PIGS";
				return "RC_MACLEANS_HOUSE_LAST";
				return "RC_MACFARLANES_RANCH_CAT";
				return "RC_MACFARLANES_RANCH_CHICKENS_1";
				return "RC_MACFARLANES_RANCH_CHICKENS_2";
				return "RC_MACFARLANES_RANCH_DOG_1";
				return "RC_MACFARLANES_RANCH_DOG_2";
				return "RC_MACFARLANES_RANCH_ROOSTER_1";
				return "RC_MACFARLANES_RANCH_LAST";
				return "RC_PAINTED_SKY_RANCHHAND_02";
				return "RC_PAINTED_SKY_DOG";
				return "RC_PAINTED_SKY_LAST";
				return "RC_RATHSKELLER_FORK_RANCHER";
				return "RC_RATHSKELLER_FORK_RANCH_HAND";
				return "RC_RATHSKELLER_FORK_DOG_1";
				return "RC_RATHSKELLER_FORK_DOG_2";
				return "RC_RATHSKELLER_FORK_DOG_3";
				return "RC_RATHSKELLER_FORK_DOG_4";
				return "RC_RATHSKELLER_FORK_CHICKENS";
				return "RC_RATHSKELLER_FORK_GOATS";
				return "RC_RIDGEWOOD_FARM_FIRST";
				return "RC_RIDGEWOOD_FARM_HORSES_2";
				return "RC_RIDGEWOOD_FARM_LAST";
				return "RC_CHEZ_PORTER_FATHER";
				return "RC_CHEZ_PORTER_DAUGHTER";
				return "RC_CHEZ_PORTER_SON_01";
				return "RC_CHEZ_PORTER_SON_02";
				return "RC_CHEZ_PORTER_SON_03";
				return "RC_ROCKY_SEVEN_FIRST";
				return "RC_ROCKY_SEVEN_LAST";
				return "RC_RIGGS_STATION_POSTMASTER";
				return "RC_WALLACE_STATION_TRAIN_CLERK";
				return "RC_WALLACE_STATION_LAST";
				return "RC_SCARLETT_HORSE_SHOP_OWNER";
				return "RC_SCARLETT_PERSCHAR_HORSES";
				return "RC_SCARLETT_HORSE_SHOP_LAST";
				return "RC_EA_APPLESEED_FIRST";
				return "RC_EA_APPLESEED_DOG";
				return "RC_EA_APPLESEED_DOG_LAST";
				return "RC_EA_APPLESEED_CHOPPER_1";
				return "RC_EA_APPLESEED_CHOPPER_2";
				return "RC_EA_APPLESEED_CHOPPER_3";
				return "RC_EA_APPLESEED_CHOPPER_4";
				return "RC_EA_APPLESEED_WORKER_01";
				return "RC_EA_APPLESEED_WORKER_02";
				return "RC_EA_APPLESEED_WORKER_03";
				return "RC_EA_APPLESEED_WORKER_04";
				return "RC_EA_APPLESEED_WORKER_05";
				return "RC_EA_APPLESEED_WORKER_06";
				return "RC_EA_APPLESEED_WORKER_07";
				return "RC_EA_APPLESEED_WORKER_08";
				return "RC_EA_APPLESEED_WORKER_09";
				return "RC_EA_APPLESEED_WORKER_10";
				return "RC_EA_APPLESEED_WORKER_11";
				return "RC_EA_APPLESEED_WORKER_12";
				return "RC_EA_APPLESEED_WORKER_13";
				return "RC_EA_APPLESEED_WORKER_14";
				return "RC_EA_APPLESEED_WORKER_15";
				return "RC_EA_APPLESEED_WORKER_16";
				return "RC_EA_APPLESEED_WORKER_17";
				return "RC_EA_APPLESEED_WORKER_18";
				return "RC_EA_APPLESEED_WORKER_19";
				return "RC_EA_APPLESEED_WORKER_LAST";
				return "RC_EA_CENTRAL_RAILROAD_FOREMAN";
				return "RC_EA_CENTRAL_RAILROAD_GUARD_01";
				return "RC_EA_CENTRAL_RAILROAD_GUARD_02";
				return "RC_EA_CENTRAL_RAILROAD_GUARD_03";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_01";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_02";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_03";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_04";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_05";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_06";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_07";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_08";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_09";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_10";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_11";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_12";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_13";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_14";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_15";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_16";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_17";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_18";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_19";
				return "RC_EA_CENTRAL_RAILROAD_WORKER_20";
				return "RC_CML_FIRST";
				return "RC_CML_CARMODY_DELL_BULL";
				return "RC_CML_CARMODY_DELL_DONKEY";
				return "RC_GRZ_BEAR";
				return "RC_GRZ_CARMODY_DELL_COWS";
				return "RC_GRZ_CARMODY_DELL_BULL";
				return "RC_GRZ_CARMODY_DELL_DONKEY";
				return "RC_GRZ_RAVEN";
				return "RC_HRT_DEER_HERD_PERSCHAR_1";
				return "RC_HRT_PRONGHORN_HERD_PERSCHAR_1";
				return "RC_HRT_BUFFALO_HERD_PERSCHAR_1";
				return "RC_HRT_CARMODY_DELL_TENANT_01";
				return "RC_HRT_CARMODY_DELL_COWS";
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

float func_279(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_280(var uParam0, bool bParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (STREAMING::IS_MODEL_VALID(bParam1))
		{
			*uParam0 = ENTITY::_0x6F3068258A499E52(bParam1, vParam2, 7);
			DEBUG::_0xA308F935BDECCEC0(8, 139, "PIN_ENTITY - Pinning closest map entity.");
		}
	}
}

void func_281(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 139, "UNPIN_ENTITY - Unpinning entity: ", UNK_0xE02C950E4C991632(ENTITY::_0x4735E2A4BB83D9DA(*uParam0)));
		ENTITY::_0xD2B9C78537ED5759(*uParam0);
	}
}

int func_282(int iParam0)
{
	int iVar0;

	iVar0 = func_323(iParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(168, 139, "@@ GET_SHOP_STAT_ITEM: STAT_ITEMS for shop ", func_173(iParam0, 0), " is missing, please Bug DD Shops and Stables.");
	}
	return iVar0;
}

bool func_283()
{
	return false;
}

bool func_284()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return true;
	}
	if (func_329())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_330() };
	if (func_327(Var0))
	{
		return false;
	}
	Var2 = { func_331() };
	if (func_327(Var2))
	{
		return false;
	}
	return true;
}

bool func_285(int iParam0, bool bParam1, bool bParam2)
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
		if (func_329())
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
	if (iParam0 == 0 && func_327(func_68(0)))
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
	switch (func_69(func_68(0)))
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

char* func_286(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_287(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_332(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_288(int iParam0)
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

bool func_289(int iParam0)
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

bool func_290(int iParam0)
{
	if (!func_333(iParam0))
	{
		return false;
	}
	return func_334(iParam0);
}

struct<7> func_291(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_292(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

char* func_293(int iParam0, int iParam1)
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

void func_294(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iParam0);
	}
}

bool func_295(int iParam0)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_OWNED_BY_THIS_THREAD - Invalid ", iParam0);
		return false;
	}
	return Global_1893787[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release an invalid regional character ", iParam0);
		return;
	}
	if (!func_230(iParam0, 1))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release a regional character that isnt stolen ", func_179(iParam0));
		return;
	}
	if (!func_230(iParam0, 2))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release an uninitialized regional character ", func_179(iParam0));
		return;
	}
	if ((!bParam4 && !func_295(iParam0)) && func_335(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release a regional character that is stolen by a differnt script ", func_179(iParam0));
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 138, "RELEASE_REGIONAL_CHARACTER: Regional character ", func_179(iParam0), " released by ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
	func_247(iParam0, 1);
	func_302(iParam0);
	if (func_336(func_245(iParam0)))
	{
		iVar0 = func_83(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 138, "RELEASE_REGIONAL_CHARACTER: Attempting to release a regional character with no perschar index", func_179(iParam0));
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 138, "RELEASE_REGIONAL_CHARACTER: Regional character is being retasked ", func_179(iParam0));
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
		func_247(iParam0, 16);
	}
	if (func_230(iParam0, 128) && !bParam3)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 138, "RELEASE_REGIONAL_CHARACTER: Regional character is being destroyed on release ", func_179(iParam0));
		func_231(iParam0, 0);
	}
}

void func_297(int iParam0, bool bParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_337(iParam0, 1024))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 139, "SET_SHOP_BEING_ROBBED: setting robbery flag for ", iParam0);
			UNK_0x355E72323AEE83CC(139, 6);
			func_338(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_337(iParam0, 1024))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 139, "SET_SHOP_BEING_ROBBED: clearing robbery flag for ", iParam0);
		UNK_0x355E72323AEE83CC(139, 6);
		func_339(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_340(iParam0);
}

void func_298(int iParam0, int iParam1)
{
	if (!func_341(iParam0))
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

int func_299(int iParam0)
{
	return Global_1915867.f_3[iParam0 /*447*/].f_409;
}

void func_300(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 139, "CLEAR_ALL_SHOP_TYPE_FLAGS: ", func_154(iParam0));
	Global_1915867.f_3[iParam0 /*447*/].f_6 = 0;
}

void func_301(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "SET_REGIONAL_CHARACTER_FLAG - Not in SP");
		return;
	}
	if (!func_135(iParam0))
	{
		return;
	}
	Global_9895[iParam0 /*2*/] = (Global_9895[iParam0 /*2*/] || iParam1);
	DEBUG::_0xA308F935BDECCEC0(680, 138, "SET_REGIONAL_CHARACTER_FLAG - Setting flag ", func_308(iParam1), " on ", func_179(iParam0));
}

void func_302(int iParam0)
{
	int iVar0;

	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "CLEAR_REGIONAL_CHARACTER_OWNER_THREAD - Invalid ", iParam0);
		return;
	}
	iVar0 = func_277(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
			DEBUG::_0xF0783374333FD8CE(168, 138, "Regional character ", func_179(iParam0), " set as no longer needed.");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(168, 138, "Regional character ", func_179(iParam0), " was asked to be set as no longer needed, but this script does not own the ped.");
		}
	}
	Global_1893787[iParam0 /*3*/].f_2 = 0;
}

void func_303(int iParam0)
{
	Global_1051777.f_80[iParam0 /*75*/].f_1 = 0;
}

int func_304(int iParam0)
{
	return iParam0 * 31;
}

int func_305()
{
	if (Global_1102630 <= 5)
	{
		return Global_1102630;
	}
	if (Global_1102630 <= 22)
	{
		return 4;
	}
	if (Global_1102630 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 0, "GET_NUMBER_OF_DAYS_IN_MONTH: Invalid year [", iParam1, "] passed. iYear < 0. Using default year 0.");
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 0, "GET_NUMBER_OF_DAYS_IN_MONTH: Invalid month passed. Returning default 30 days.");
	return 30;
}

int func_307(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_308(int iParam0)
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

char* func_309(int iParam0, int iParam1)
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

void func_310(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_311(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_342(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_343())
	{
		return func_342(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_342(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_312(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

char* func_313(int iParam0)
{
	char* sVar0;

	sVar0 = "invalid net player status flag";
	switch (iParam0)
	{
		case 0:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN";
			break;
		case 3:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_DESIRED";
			break;
		case 4:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_ABSOLUTE";
			break;
		case 5:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_AT_CAMP";
			break;
		case 6:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_IN_MOONSHINE";
			break;
		case 7:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_JAIL";
			break;
		case 9:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_TRADE";
			break;
		case 8:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_FAST_TRAVEL_STATION";
			break;
		case 10:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_DEBUG";
			break;
		case 11:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_ASAP";
			break;
		case 12:
			sVar0 = "PLAYSTAT_FLAG_SCRIPT_CONTROL_OVERRIDE";
			break;
		case 13:
			sVar0 = "PLAYSTAT_FLAG_MODE_OVERRIDE";
			break;
		case 14:
			sVar0 = "PLAYSTAT_FLAG_MISSION_OVERRIDE";
			break;
		case 15:
			sVar0 = "PLAYSTAT_FLAG_VERSUS_OVERRIDE";
			break;
		case 16:
			sVar0 = "PLAYSTAT_FLAG_GENERIC_SPAWN_FAR_ONCE";
			break;
		case 17:
			sVar0 = "PLAYSTAT_FLAG_PAUSE_RESPAWN_FADE_UP";
			break;
		case 18:
			sVar0 = "PLAYSTAT_FLAG_SKIP_RESPAWN_FADE_IN";
			break;
		case 19:
			sVar0 = "PLAYSTAT_FLAG_SKIP_RESPAWN_FADE_OUT";
			break;
		case 20:
			sVar0 = "PLAYSTAT_FLAG_SKIP_LOADING_SCREEN_SHUTDOWN";
			break;
		case 21:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_POST_FX";
			break;
		case 22:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_POST_FX_ONCE";
			break;
		case 23:
			sVar0 = "PLAYSTAT_FLAG_CLEANUP_MATCHMAKING_POST_FX";
			break;
		case 24:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_INVISIBLE_ONCE";
			break;
		case 25:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITHOUT_CONTROL_ONCE";
			break;
		case 26:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_SCRIPT_CONTROL_INFO";
			break;
		case 27:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_REGION_RESET";
			break;
		case 1:
			sVar0 = "PLAYSTAT_FLAG_IN_RESPAWN_SEQUENCE";
			break;
		case 28:
			sVar0 = "PLAYSTAT_FLAG_HIDE_SPECTATOR_UI";
			break;
		case 29:
			sVar0 = "PLAYSTAT_FLAG_SKIP_SPECTATOR_MODE_ON_DEATH";
			break;
		case 30:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_SPECTATOR_MODE_ON_DEATH";
			break;
		case 31:
			sVar0 = "PLAYSTAT_FLAG_INVISIBLE_TO_SPECTATOR_CAM";
			break;
		case 32:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_DEATH_CAM_HOLD_TIME";
			break;
		case 34:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_LOCKON";
			break;
		case 35:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_FIRING";
			break;
		case 36:
			sVar0 = "PLAYSTAT_FLAG_SECURITY_CLIENT";
			break;
		case 37:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_RESPAWN_INVINCIBILITY";
			break;
		case 38:
			sVar0 = "PLAYSTAT_FLAG_CAMP_RELOAD";
			break;
		case 39:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_GHOSTTOWN";
			break;
		case 41:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_INVENTORY_CONFIG";
			break;
		case 42:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_INVENTORY_CONFIG";
			break;
		case 43:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_AMMO_UI_CONFIG";
			break;
		case 44:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_AMMO_UI_CONFIG";
			break;
		case 47:
			sVar0 = "PLAYSTAT_FLAG_ACTIVATE_CUSTOM_CAM_ON_RESPAWN";
			break;
		case 48:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_SPAWN_CONFIG";
			break;
		case 49:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_SPAWN_CONFIG";
			break;
		case 50:
			sVar0 = "PLAYSTAT_FLAG_USE_CUSTOM_POSITION_WITH_MOUNT";
			break;
		case 53:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HUB";
			break;
		case 54:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HUB_ONCE";
			break;
		case 51:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_COUPON";
			break;
		case 52:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_COUPON_ONCE";
			break;
		case 59:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HANDHELD";
			break;
		case 60:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HANDHELD_ONCE";
			break;
		case 61:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BLACKBOARD";
			break;
		case 62:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BLACKBOARD_ONCE";
			break;
		case 63:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_ANIMATION";
			break;
		case 64:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_ANIMATION_ONCE";
			break;
		case 65:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_MOUNT";
			break;
		case 66:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_MOUNT_ONCE";
			break;
		case 67:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RESPOT_DISABLED";
			break;
		case 68:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RESPOT_DISABLED_ONCE";
			break;
		case 70:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_MOUNT_ONCE";
			break;
		case 69:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_MOUNT";
			break;
		case 72:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_MOUNT_ONCE";
			break;
		case 71:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_MOUNT";
			break;
		case 73:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_MOUNT_ON_RESPAWN";
			break;
		case 75:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_ONCE";
			break;
		case 74:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE";
			break;
		case 78:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_VEHICLE_ONCE";
			break;
		case 77:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_VEHICLE";
			break;
		case 76:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_VEHICLE_ON_RESPAWN";
			break;
		case 82:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TRAIN_ONCE";
			break;
		case 81:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TRAIN";
			break;
		case 84:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_TRAIN_ONCE";
			break;
		case 83:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_TRAIN";
			break;
		case 79:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_NAVMESH";
			break;
		case 80:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_NAVMESH_ONCE";
			break;
		case 86:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_VEHICLE_ONCE";
			break;
		case 85:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_VEHICLE";
			break;
		case 89:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_DISABLE_WATER_FAILSAFE";
			break;
		case 90:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_IN_WATER";
			break;
		case 91:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_IN_WATER_ONCE";
			break;
		case 92:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RANDOM_SEED";
			break;
		case 93:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_NEAR_LOCATION_ONCE";
			break;
		case 94:
			sVar0 = "PLAYSTAT_FLAG_DONT_RESPAWN_IN_VOLUME_LOCKS_ONCE";
			break;
		case 95:
			sVar0 = "PLAYSTAT_FLAG_REGENERATE_PEDSHOT_ONCE";
			break;
		case 40:
			sVar0 = "PLAYSTAT_FLAG_FAKE_GAMER_TAG";
			break;
		case 108:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_MOUNT_RELEASE";
			break;
		case 96:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_DESIRED_WEAPON_IN_HAND";
			break;
		case 97:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_DESIRED_WEAPON_IN_HAND_ONCE";
			break;
		case 98:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BEST_WEAPON_IN_HAND";
			break;
		case 99:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BEST_WEAPON_IN_HAND_ONCE";
			break;
		case 100:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_LAST_WEAPON_IN_HAND";
			break;
		case 101:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_LAST_WEAPON_IN_HAND_ONCE";
			break;
		case 102:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_IN_HAND";
			break;
		case 103:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_IN_HAND_ONCE";
			break;
		case 104:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_PROCESSING";
			break;
		case 105:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_PROCESSING_ONCE";
			break;
		case 106:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_ANIMAL_INVULNERABILITY";
			break;
		case 107:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_ANIMAL_INVULNERABILITY_ONCE";
			break;
		case 87:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_ADJUSTED_OFFSET_FOR_TRANSPORT";
			break;
		case 88:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_ADJUSTED_OFFSET_FOR_TRANSPORT_ONCE";
			break;
		case 45:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_DROP_WEAPONS_ON_DEATH";
			break;
		case 46:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_LOOTING";
			break;
		case 109:
			sVar0 = "PLAYSTAT_FLAG_DONT_USE_ALPHA_FADE_ON_RESPAWN";
			break;
		case 110:
			sVar0 = "PLAYSTAT_FLAG_DONT_USE_ALPHA_FADE_ON_RESPAWN_ONCE";
			break;
		case 111:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_LEAVES_ALIVE_PED_ONCE";
			break;
		case 112:
			sVar0 = "PLAYSTAT_FLAG_FORCE_COLLISION_WHEN_RESPOT_TIMER_FINISHED";
			break;
		case 113:
			sVar0 = "PLAYSTAT_FLAG_ALLOW_INCAPACITATION";
			break;
		case 114:
			sVar0 = "PLAYSTAT_FLAG_STORE_DAMAGE_EVENT";
			break;
		case 118:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SANS_WEAPONS";
			break;
		case 119:
			sVar0 = "PLAYSTAT_FLAG_REGISTER_LOADOUT_OVERRIDE_ON_RESPAWN";
			break;
		case 120:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_LOADOUT_OVERRIDE_REGISTRATION";
			break;
		case 121:
			sVar0 = "PLAYSTAT_FLAG_CLEAR_LOADOUT_OVERRIDE_ON_RESPAWN";
			break;
		case 122:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_WEAPONS_IN_HAND";
			break;
		case 123:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_LOADOUT";
			break;
		case 124:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_INVENTORY_OVERRIDE";
			break;
		case 125:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_OUTFIT_OVERRIDE";
			break;
		case 126:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_AMMO_TYPE_UNLOCKS";
			break;
		case 127:
			sVar0 = "PLAYSTAT_FLAG_SPECIAL_ABILITY_OVERRIDE_DEACTIVATION";
			break;
		case 128:
			sVar0 = "PLAYSTAT_FLAG_SPECIAL_ABILITY_DEACTIVATE_ON_CANCEL";
			break;
		case 129:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_NO_COMPONENT_LOAD";
			break;
		case 130:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_NO_EXPRESSION_LOAD";
			break;
		case 131:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_BLOCK_TEAM_RESET";
			break;
		case 132:
			sVar0 = "PLAYSTAT_FLAG_PAUSE_RELATIONSHIP_UPDATE";
			break;
		case 133:
			sVar0 = "PLAYSTAT_FLAG_DONT_PROCESS_FAST_INSTANCING";
			break;
		case 134:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_INTO_FAST_INSTANCE";
			break;
		case 2:
			sVar0 = "PLAYSTAT_FLAG_BYPASS_RESSURRECT_AND_TELEPORT";
			break;
		case 136:
			sVar0 = "PLAYSTAT_FLAG_OVERRIDE_PLAYER_ABILITIES";
			break;
		case 135:
			sVar0 = "PLAYSTAT_FLAG_GANG_FEUDS_ARE_UNLOCKED";
			break;
		case 115:
			sVar0 = "PLAYSTAT_FLAG_PAY_BOUNTY_ON_RESPAWN";
			break;
		case 117:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_PRESERVE_HEALTH";
			break;
		case 116:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_PRESERVE_DEADEYE";
			break;
		case 137:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_CORPSE_ON_RESPAWN_ONCE";
			break;
		case 138:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_CORPSE_ON_RESPAWN";
			break;
		case 139:
			sVar0 = "PLAYSTAT_FLAG_KEEP_CORPSE_ON_RESPAWN_ONCE";
			break;
		case 140:
			sVar0 = "PLAYSTAT_FLAG_KEEP_CORPSE_ON_RESPAWN";
			break;
		case 141:
			sVar0 = "PLAYSTAT_FLAG_CANNOT_BE_CARRIED_WHEN_DEAD";
			break;
		case 142:
			sVar0 = "PLAYSTAT_FLAG_CLEANUP_TRANSITION_SETTINGS";
			break;
		case 33:
			sVar0 = "PLAYSTAT_FLAG_MAINTAIN_DEATH_CAM_ON_RESPAWN";
			break;
		case 144:
			sVar0 = "PLAYSTAT_FLAG_DONT_CLEAR_DRUNK_FOR_SPAWNING_OR_CUTSCENES";
			break;
		case 145:
			sVar0 = "PLAYSTAT_FLAG_DONT_SESSION_ON_RESPAWN_ONCE";
			break;
	}
	return sVar0;
}

void func_314(int iParam0)
{
	Global_1102630.f_26.f_12 = iParam0;
}

char* func_315(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_FREE_MODE_OPTIONS";
		case 1:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_NET_STORY_MISSION_OPTIONS";
		case 2:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_MISSION_OPTIONS";
		case 3:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_MISSION_OPTIONS_WITH_NO_BUTTONS";
		case 4:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS";
		case 5:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS_PLUS_EXIT";
		case 6:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS_PLUS_EXIT_KILL_CAM";
		case 7:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY";
		case 8:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_CANCEL";
		case 9:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_NO_BUTTONS";
		case 10:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_NO_BUTTONS_NO_FADE";
		case 11:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_PLUS_EXIT";
		case 12:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_PLUS_EXIT_KILL_CAM";
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

bool func_316(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

bool func_317(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_318(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
}

void func_319(int iParam0)
{
	if (func_344(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

bool func_320(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

char* func_321(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("VOLBOX"):
			return "VOLBOX";
		case joaat("VOLSPHERE"):
			return "VOLSPHERE";
		case joaat("VOLCYLINDER"):
			return "VOLCYLINDER";
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

bool func_322(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
		case 6:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 7:
			return joaat("SHOP_BLK_GUNSMITH");
		case 8:
			return joaat("SHOP_BLK_BARBER");
		case 19:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 122:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 123:
			return joaat("SHOP_BLK_COACH");
		case 5:
			return joaat("SHOP_BLK_BANK");
		case 9:
			return joaat("SHOP_BLK_BUTCHER");
		case 10:
			return joaat("SHOP_BLK_BARTENDER");
		case 11:
			return joaat("SHOP_BLK_PIANIST");
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
		case 23:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 24:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 25:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 22:
			return joaat("SHOP_EMR_FENCE");
		case 26:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 45:
			return joaat("SHOP_SDN_DOCTOR");
		case 48:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 46:
			return joaat("SHOP_SDN_FENCE");
		case 49:
			return joaat("SHOP_SDN_GUNSMITH");
		case 42:
			return joaat("SHOP_SDN_BANK");
		case 43:
			return joaat("SHOP_SDN_BARBER");
		case 44:
			return joaat("SHOP_SDN_BUTCHER");
		case 50:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 51:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 52:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 53:
			return joaat("SHOP_SDN_TAILOR");
		case 63:
			return joaat("SHOP_SDN_TRAPPER");
		case 56:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
		case 60:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 124:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 125:
			return joaat("SHOP_SDN_COACH");
		case 54:
			return joaat("SHOP_SDN_BARTENDER");
		case 55:
			return joaat("SHOP_SDN_PIANIST");
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
		case 27:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 28:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 33:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 31:
			return joaat("SHOP_RHO_FENCE");
		case 34:
			return joaat("SHOP_RHO_GUNSMITH");
		case 35:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 30:
			return joaat("SHOP_RHO_BUTCHER");
		case 39:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 126:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 29:
			return joaat("SHOP_RHO_BANK");
		case 36:
			return joaat("SHOP_RHO_BARTENDER");
		case 37:
			return joaat("SHOP_RHO_PIANIST");
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
		case 68:
			return joaat("SHOP_STR_BUTCHER");
		case 69:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 70:
			return joaat("RAGE_P2_3");
		case 71:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 74:
			return joaat("SHOP_STR_POST_OFFICE");
		case 127:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 75:
			return joaat("SHOP_STR_BARTENDER");
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
		case 83:
			return joaat("SHOP_VAL_DOCTOR");
		case 84:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 85:
			return joaat("SHOP_VAL_GUNSMITH");
		case 78:
			return joaat("SHOP_VAL_BARBER");
		case 87:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 86:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 82:
			return joaat("SHOP_VAL_BUTCHER");
		case 88:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 91:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 90:
			return joaat("SHOP_VAL_HOTEL");
		case 120:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 121:
			return joaat("SHOP_VAL_COACH");
		case 77:
			return joaat("SHOP_VAL_BANK");
		case 79:
			return joaat("SHOP_VAL_BARTENDER");
		case 80:
			return joaat("SHOP_VAL_PIANIST");
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
		case 41:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 98:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 97:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 93:
			return joaat("SHOP_VAN_FENCE");
		case 96:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 94:
			return joaat("SHOP_VAN_BARTENDER");
		case 95:
			return joaat("SHOP_VAN_PIANIST");
		case 128:
			return joaat("SHOP_VAN_COACH");
		case 129:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 1:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 2:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 101:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 99:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 100:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 119:
			return joaat("SHOP_DYNAMIC");
		case 133:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 152:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 176:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 177:
			return joaat("SHOP_CLOTHING");
		case 178:
			return joaat("SHOP_CAMP_SHAVING");
		case 153:
			return joaat("SHOP_CAMP_LOCKBOX");
		case 154:
			return joaat("SHOP_CAMP_BUTCHERTABLE");
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
		case 47:
			return joaat("SHOP_MOONSHINE_STILL");
		case 32:
			return joaat("SHOP_MOONSHINE_STILL");
		case 21:
			return joaat("SHOP_MOONSHINE_STILL");
		case 115:
			return joaat("SHOP_MOONSHINE_STILL");
		case 92:
			return joaat("SHOP_MOONSHINE_STILL");
		case 131:
			return joaat("SHOP_MOONSHINE_STILL");
		case 20:
			return joaat("SHOP_MOONSHINE_STILL");
		case 134:
			return -765151559;
		case 179:
			return joaat("SHOP_WARDROBE");
		case 155:
			return joaat("SHOP_BVH_DOCTOR");
		case 156:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 157:
			return joaat("SHOP_BVH_GUNSMITH");
		case 158:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 67:
			return 1529797091;
		case 159:
			return joaat("SHOP_CLM_DOCTOR");
		case 160:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 161:
			return joaat("SHOP_CLM_GUNSMITH");
		case 162:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 65:
			return 1388932648;
		case 164:
			return joaat("SHOP_HSO_DOCTOR");
		case 165:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 166:
			return joaat("SHOP_HSO_GUNSMITH");
		case 167:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 64:
			return 878376253;
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 172:
			return joaat("SHOP_SHB_DOCTOR");
		case 173:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 174:
			return joaat("SHOP_SHB_GUNSMITH");
		case 175:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 66:
			return -2076086367;
		case 163:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 108:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 110:
			return joaat("SHOP_AMD_BARTENDER");
		case 109:
			return joaat("SHOP_AMD_HONOR_MP");
		case 111:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 112:
			return joaat("SHOP_AMD_TRAIN_STATION");
		case 113:
			return joaat("SHOP_ROJ_HONOR_MP");
		case 114:
			return joaat("SHOP_BOJ_HONOR_MP");
		case 102:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 105:
			return joaat("SHOP_TBL_BARTENDER");
		case 106:
			return joaat("SHOP_TBL_PIANIST");
		case 103:
			return joaat("SHOP_TBL_GUNSMITH");
		case 104:
			return joaat("SHOP_TBL_BUTCHER");
		case 107:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 116:
			return joaat("SHOP_RYC_FENCE");
		case 130:
			return joaat("SHOP_THL_FENCE");
		case 117:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 118:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

bool func_324(int iParam0, char* sParam1, var uParam2)
{
	var uVar0;

	if (func_345(iParam0, sParam1, &uVar0))
	{
		func_346(&uVar0, iParam0, uParam2);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "NET_SAVE__RETRIEVE_UNLOCK_DATA_BY_HASH - couldn't find data for ", sParam1);
		return false;
	}
	return true;
}

char* func_325(int iParam0, int iParam1)
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

var func_326()
{
	return Global_1072032.f_28503[48 /*4*/].f_3;
}

bool func_327(struct<2> Param0)
{
	if (!func_347(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_348(Param0))
	{
		return false;
	}
	return true;
}

int func_328(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_349(Param0);
	}
	return -1;
}

bool func_329()
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
	if (!func_327(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_330()
{
	return Global_1051214;
}

struct<2> func_331()
{
	if (Global_1196676.f_129 <= 0)
	{
		return func_68(0);
	}
	if (Global_1196676.f_130 < 0 || Global_1196676.f_131 == 0)
	{
		return func_68(0);
	}
	return Global_1196676[Global_1196676.f_130 /*4*/].f_1;
}

bool func_332(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_350(iParam3, &vVar0, &Var3, &uVar6);
	if (func_351(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_333(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3647[iVar1], iVar2);
}

bool func_335(int iParam0)
{
	if (!func_135(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_OWNED_BY_ANY_THREAD - Invalid ", iParam0);
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(Global_1893787[iParam0 /*3*/].f_2);
}

bool func_336(int iParam0)
{
	return iParam0 != 0;
}

bool func_337(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	return (Global_1915867.f_17884[iParam0] && iParam1) != 0;
}

void func_338(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	Global_1915867.f_17884[iParam0] = (Global_1915867.f_17884[iParam0] || iParam1);
}

void func_339(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	Global_1915867.f_17884[iParam0] = (Global_1915867.f_17884[iParam0] - (Global_1915867.f_17884[iParam0] && iParam1));
}

void func_340(int iParam0)
{
	func_353(func_352(iParam0));
}

bool func_341(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_342(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_343()
{
	return Global_1102630.f_3672;
}

bool func_344(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

bool func_345(int iParam0, char* sParam1, bool bParam2)
{
	*bParam2 = Global_1139844.f_7;
	bParam2->f_2 = 1351168281;
	bParam2->f_3 = func_354(iParam0);
	bParam2->f_4 = sParam1;
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "NET_SAVE_EXECUTE_QUERY_FOR_UNLOCK_DATA_BY_TYPE_AND_HASH - Looking in unlocks/unlock_group(group=%x)/unlock(id=%x)");
	DEBUG::_0x1B08D1EB9D8C4931(648, 84, "NET_SAVE_EXECUTE_QUERY_FOR_UNLOCK_DATA_BY_TYPE_AND_HASH - Looking for Arg1: ", bParam2->f_3, " STRING: ", UNK_0x4379B6FA65D55295(bParam2->f_3));
	DEBUG::_0x1B08D1EB9D8C4931(648, 84, "NET_SAVE_EXECUTE_QUERY_FOR_UNLOCK_DATA_BY_TYPE_AND_HASH - Looking for Arg2: ", bParam2->f_4, " STRING: ", UNK_0x4379B6FA65D55295(bParam2->f_4));
	UNK_0x355E72323AEE83CC(84, 9);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(bParam2->f_1), bParam2);
}

void func_346(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	bParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), bParam0);
	bParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, bParam0))
	{
		uParam2->f_2 = uVar0;
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(648, 84, "RETRIEVE_UNLOCK_DATA - Couldn't retrieve id at index ", uParam2->f_1, " of type ", func_355(iParam1, 0));
	}
	bParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), bParam0);
	bParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), bParam0);
	bParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), bParam0);
}

bool func_347(int iParam0)
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

int func_348(int iParam0)
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

int func_349(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_356(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_350(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_351(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_352(int iParam0)
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
	DEBUG::_0xD9911C7B5F8CD69C(168, 139, "GET_SHOP_TYPE_FROM_SHOP - ", func_173(iParam0, 0), " undefined");
	return -1;
}

void func_353(int iParam0)
{
	Global_1915867.f_18247 = iParam0;
}

int func_354(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

char* func_355(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -3:
			return "UNLOCK_GROUP__XP_AWARDS";
		case -2:
			return "UNLOCK_GROUP__GOLD";
		case -1:
			return "UNLOCK_GROUP__INVALID";
		case 0:
			return "UNLOCK_GROUP__START";
		case 1:
			return "UNLOCK_GROUP__FEATURE";
		case 2:
			return "UNLOCK_GROUP__MISSION_STORY";
		case 3:
			return "UNLOCK_GROUP__MISSION_PROCEDURAL";
		case 4:
			return "UNLOCK_GROUP__MISSION_FETCH";
		case 5:
			return "UNLOCK_GROUP__MISSION_MINIGAME";
		case 6:
			return "UNLOCK_GROUP__MISSION_FREE_MODE_EVENT";
		case 7:
			return "UNLOCK_GROUP__MISSION_UGC";
		case 8:
			return "UNLOCK_GROUP__MISSION_BEAT";
		case 9:
			return "UNLOCK_GROUP__PROPERTY";
		case 10:
			return "UNLOCK_GROUP__RECIPE";
		case 11:
			return "UNLOCK_GROUP__TITLE";
		case 12:
			return "UNLOCK_GROUP__SHOP";
		case 13:
			return "UNLOCK_GROUP__GFH_MISSION_GIVERS";
		case 14:
			return "UNLOCK_GROUP__GFH_LOCATIONS";
		case 15:
			return "UNLOCK_GROUP__TEAMSTER_VEHICLES";
		case 16:
			return "UNLOCK_GROUP__MOONSHINE_UNLOCKS";
		case 17:
			return "UNLOCK_GROUP__GVO_UNLOCKS";
		case 18:
			return "UNLOCK_GROUP__TEAMSTER_SECTORS";
		case 19:
			return "UNLOCK_GROUP__TEAMSTER_TIERS";
		case 20:
			return "UNLOCK_GROUP__MAX";
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

bool func_356(struct<2> Param0, bool bParam2)
{
	if (!func_327(Param0))
	{
		return false;
	}
	func_357(bParam2);
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

void func_357(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

