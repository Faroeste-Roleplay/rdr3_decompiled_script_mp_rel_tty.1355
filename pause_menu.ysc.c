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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
	struct<188> Local_21 = { 0, -1, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 1;
	var uLocal_220 = 0;
	var uLocal_221 = 2;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
#endregion

void __EntryFunction__()
{
	char* sVar0;
	char* sVar1;
	struct<21> Var2;
	bool bVar23;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	DEBUG::_0xF0783374333FD8CE(8, 155, "pause_menu START");
	if (!func_1(&Local_21))
	{
		DEBUG::_0x83407B92D46F25C3(8, 155, "ERROR! Failed to initialize.");
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(-637848863))
	{
		TXD::_REQUEST_STREAMED_TXD(-637848863, false);
		DEBUG::_0xF0783374333FD8CE(8, 155, "pause_menu: UI_COMPLETION_TEXTURE_DICTIONARY exists");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 155, "pause_menu: UI_COMPLETION_TEXTURE_DICTIONARY doesn't exists");
	}
	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", 0);
	sVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	Var2 = { Global_38.f_9 };
	if (TXD::_DOES_STREAMED_TXD_EXIST(joaat("PM_PLAYER_MP")))
	{
		TXD::_REQUEST_STREAMED_TXD(joaat("PM_PLAYER_MP"), false);
		DEBUG::_0xF0783374333FD8CE(8, 155, "pause_menu: UI_PM_PLAYER_MP_TEXTURE_DICTIONARY exists");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 155, "pause_menu: UI_PM_PLAYER_MP_TEXTURE_DICTIONARY doesn't exists");
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		DEBUG::_0xF0783374333FD8CE(8, 155, "pause_menu force cleanup");
		if (!Global_17)
		{
			Global_38.f_9 = { Var2 };
			DEBUG::_0xF0783374333FD8CE(8, 155, "pause_menu didn't have a successful save game, reverting g_savedGlobals.saveGameData");
		}
		func_2(sVar0, sVar1);
	}
	Local_21.f_183 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(sVar0, true);
	UIFEED::_0xDD1232B332CBB9E7(6, 1, 0);
	func_3(&Global_26679);
	func_4();
	while ((!SCRIPTS::_0x9E4EF615E307FBBE() && !func_5(Global_26679)) && !bVar23)
	{
		func_6(&Local_21);
		func_7(&Local_21);
		func_8();
		func_9(&Local_21);
		bVar23 = func_10();
		BUILTIN::WAIT(0);
	}
	if (bVar23)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_11(0, -1);
	}
	func_2(sVar0, sVar1);
}

bool func_1(var uParam0)
{
	char* sVar0;

	uParam0->f_187 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "mpProgress");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "coopPercent", "0%");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "awardsPercent", func_12());
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "rankPercent", func_13());
	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(sVar0, "characterName", &(Global_17414.f_55.f_664.f_1784));
	uParam0->f_185 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", 0);
	uParam0->f_186 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 0);
	if (!func_14(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 155, "[CORE] ERROR! PAUSE_MENU_PAGES_INITAILIZE = FALSE");
		return false;
	}
	return true;
}

void func_2(char* sParam0, char* sParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 155, "CLEANUP_PAUSE_MENU: pause_menu END");
	if (func_5(Global_26679))
	{
		func_15();
	}
	if (Local_21.f_1 != -1)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(Local_21.f_1);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_185);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_186);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_187);
	func_16(&Local_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_4()
{
	struct<4> Var0;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char cVar8[64];
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	char* sVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;

	Var0 = { func_17(0, 1, 0, -1) };
	bVar4 = false;
	iVar6 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		bVar7 = ENTITY::GET_ENTITY_MODEL(iVar6);
		if (bVar7 == func_18())
		{
			iVar5 = func_19(bVar7);
			bVar4 = true;
		}
	}
	if (bVar4)
	{
		StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, func_20(iVar5)), 64);
	}
	else
	{
		cVar8 = { func_21(&Var0, 0, 1) };
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_1, &(Global_17414.f_55.f_664.f_1784));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_4, &cVar8);
	func_22();
	func_23(0, "MP_PLAYER_PLAYER", "pm_player_mp");
	iVar16 = Global_1957252.f_1431.f_103;
	sVar17 = func_24(iVar16);
	if (iVar16 == -10)
	{
		sVar20 = "rpg_underweight";
		bVar18 = true;
	}
	else if (iVar16 == 10)
	{
		sVar20 = "rpg_overweight";
		bVar18 = true;
	}
	func_25(0, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WEIGHT"), MISC::_CREATE_VAR_STRING(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, joaat("COLOR_WHITE"));
	if (Global_1957252.f_1431.f_103 == 0 || bVar18)
	{
		bVar19 = true;
	}
	func_26(1, bVar19, bVar18);
	func_26(2, bVar19, bVar18);
	func_26(3, bVar19, bVar18);
	sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
	bVar18 = false;
	sVar20 = "";
	if (func_27())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_COLD";
		bVar18 = true;
		sVar20 = "rpg_cold";
	}
	else if (func_28())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_HOT";
		bVar18 = true;
		sVar20 = "rpg_hot";
	}
	func_25(0, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TEMPERATURE"), MISC::_CREATE_VAR_STRING(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, joaat("COLOR_WHITE"));
	func_29(1, bVar18, bVar18, sVar20);
	func_25(0, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK"), "", 0, "Rank_Shield", "pm_player_mp", 1, joaat("COLOR_WHITE"));
	sVar17 = func_30(Global_1145562[Global_1275959 /*35*/]);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_84[2], sVar17);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[0 /*102*/].f_93[2], true);
	iVar21 = NETWORK::_NETWORK_GET_XP();
	iVar22 = func_31(Global_1145562[Global_1275959 /*35*/] + 1);
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar21, iVar22);
	func_25(0, 3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK_XP"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar20 = func_33(func_32(255));
	func_25(0, 4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HONOR"), "", 0, sVar20, "pausemenu_player", 1, joaat("COLOR_WHITE"));
	sVar17 = func_35(func_34(PLAYER::PLAYER_ID(), 0), &bVar18, &bVar23);
	func_25(0, 5, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HOSTILITY"), MISC::_CREATE_VAR_STRING(2, sVar17), bVar18, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 1, bVar23);
	fVar24 = func_36(0, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(0, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (BUILTIN::TO_FLOAT(func_39(0, 2)) / fVar25));
	DEBUG::_0xF0783374333FD8CE(1677720, 183, "fCoreValue ", fVar24, " fTotalCoreTime ", fVar25, " multi ", func_38(), " fCoreTimeLeft ", fVar26, " fDrainRate ", fVar27);
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(1, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(1, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 100f;
	bVar23 = func_40(bVar18, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_25(1, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, bVar23);
	bVar18 = func_42();
	func_43(1, bVar18, bVar18);
	fVar24 = func_36(1, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(1, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (BUILTIN::TO_FLOAT(func_39(1, 2)) / fVar25));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(2, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(2, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 100f;
	bVar23 = func_40(bVar18, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_25(2, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, bVar23);
	fVar24 = func_36(2, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(2, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (BUILTIN::TO_FLOAT(func_39(2, 2)) / fVar25));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(3, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(3, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 100f;
	bVar23 = func_40(bVar18, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_25(3, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, bVar23);
	sVar17 = MISC::_CREATE_VAR_STRING(2, "STRING", func_45(func_44(382107261)));
	func_25(4, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STORY_COMPLETE"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "STRING", func_46(joaat("KILLS")));
	func_25(4, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_KILLS"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "STRING", func_46(joaat("DEATHS")));
	func_25(4, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_DEATHS"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
}

bool func_5(struct<2> Param0)
{
	if (!func_47(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_48(Param0))
	{
		return false;
	}
	return true;
}

void func_6(var uParam0)
{
	bool bVar0;

	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 0, 0);
	}
	if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
	{
		return;
	}
	bVar0 = UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU"));
	if (uParam0->f_195 != bVar0)
	{
		uParam0->f_195 = bVar0;
		DEBUG::_0xA308F935BDECCEC0(136, 155, "[UI_STATE_LISTENER] - PreviousFrameState: ", uParam0->f_195, " CurrentFrameStaet: ", bVar0);
		if (bVar0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 155, "[UI_STATE_LISTENER] - Started running again this frame.");
			func_50(uParam0, 0, 1);
		}
	}
}

void func_7(var uParam0)
{
	struct<7> Var0;

	if (NETWORK::_0xCD954F330693F5F2())
	{
		switch (*uParam0)
		{
			case 0:
				if (NETWORK::_0xE2C3CEC3C0903A00("mugshot"))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 155, "PAUSE_MENU_BUILD_PLAYER_MUGSHOT - Texture already exists, releasing");
					NETWORK::_0x7A17B7981560FFA5("mugshot");
				}
				*uParam0 = 1;
				break;
			case 1:
				if (!NETWORK::_0xE2C3CEC3C0903A00("mugshot"))
				{
					Var0 = { func_51() };
					uParam0->f_1 = NETWORK::_MUGSHOT_TEXTURE_DOWNLOAD_REQUEST(&Var0, 0, "mugshot", true);
					if (uParam0->f_1 != -1)
					{
						*uParam0 = 2;
					}
				}
				break;
			case 2:
				if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(uParam0->f_1) == 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_2, "mugshot");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_3, "mugshot");
					*uParam0 = 3;
				}
				break;
			case 3:
				break;
		}
	}
}

void func_8()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = joaat("PAUSE_MENU");
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			DEBUG::_0xF0783374333FD8CE(680, 155, "PAUSE_MENU_PROCESS_UI_EVENTS: Received new UI event ", func_52(Var0, 0), " of Type: ", UNK_0x4379B6FA65D55295(Var0.f_2));
			DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_PROCESS_UI_EVENTS: event.parameterHash - ", Var0.f_2);
			DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_PROCESS_UI_EVENTS: event.parameterInt - ", Var0.f_1);
			DEBUG::_0xF0783374333FD8CE(40, 155, "PAUSE_MENU_PROCESS_UI_EVENTS: event.id - ", func_52(Var0, 0));
			DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_PROCESS_UI_EVENTS: event.datastoreID - ", Var0.f_3);
			switch (Var0)
			{
				case -1740156697:
					switch (Var0.f_2)
					{
						case 248393197:
							DEBUG::_0xF0783374333FD8CE(8, 162, "PAUSE_MENU_PROCESS_UI_EVENTS - RPG Menu Item Focus ");
							func_53(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 766694521:
							DEBUG::_0xA308F935BDECCEC0(8, 155, "[TELEMETRY] Pause Menu Entering Hub.");
							func_54(770236547, 0);
							func_55(770236547, 0);
							func_56(1667056592);
							break;
						case -385109718:
							DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_UI_RPG_DETAIL_GENERAL_SELECT_EVENT sanity check");
							func_57();
							break;
						case -609314343:
							DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_UI_RPG_DETAIL_HEALTH_SELECT_EVENT");
							func_58();
							break;
						case 1371972537:
							DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_UI_RPG_DETAIL_STAMINA_SELECT_EVENT");
							func_59();
							break;
						case -17440837:
							DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_UI_RPG_DETAIL_DEADEYE_SELECT_EVENT");
							func_60();
							break;
						case -164517057:
							DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_UI_RPG_DETAIL_STATS_SELECT_EVENT");
							func_61();
							break;
						case -1123713079:
							DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_UI_RPG_DETAIL_HORSE_SELECT_EVENT");
							func_62();
							break;
						case -1332231262:
							CAM::DO_SCREEN_FADE_OUT(0);
							func_63();
							break;
						case -1856718599:
							DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_UI_CHANGE_CHARACTER");
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					DEBUG::_0xD9911C7B5F8CD69C(136, 155, "PAUSE_MENU_PROCESS_UI_EVENTS - Received new UNKNOWN event - This is really not good! Hash parameter: ", Var0.f_2, " Int parameter: ", Var0.f_1);
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

void func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_64();
	iVar1 = func_65(uParam0);
	if (iVar0 != iVar1)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 155, "[PAGES_MAINTAIN] eUiAppCurrentPageType: ", func_66(iVar0, 0));
		DEBUG::_0xA308F935BDECCEC0(40, 155, "[PAGES_MAINTAIN] eUiAppPreviousPageType: ", func_66(iVar1, 0));
		DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGES_MAINTAIN] IS_UIAPP_ACTIVE_BY_HASH - ciPAUSE_MENU_UI_APP_HASH : ", UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")));
		DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGES_MAINTAIN] IS_UIAPP_ACTIVE_BY_HASH - ciPROGRESS_MENU_UI_APP_HASH : ", UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PROGRESS_MENU")));
		if (iVar1 != 0)
		{
			func_67(uParam0, iVar1);
		}
		func_68(uParam0, iVar0);
		func_69(uParam0, iVar0);
	}
	func_70(uParam0, iVar0);
}

int func_10()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = -37892458;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: Received new UI event in UI_EVENT_CHANNEL_PROGRESS_MENU");
			DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: eventData.parameterHash - ", Var0.f_2);
			DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: eventData.parameterInt - ", Var0.f_1);
			DEBUG::_0xF0783374333FD8CE(40, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: eventData.id - ", func_52(Var0, 0));
			DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: eventData.datastoreID - ", Var0.f_3);
			switch (Var0)
			{
				case -1203660660:
					DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: UISCRIPTEVENTTYPE_ITEM_SELECTED");
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					return 1;
				case -1740156697:
					DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: UISCRIPTEVENTTYPE_ITEM_FOCUSED");
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 155, "PAUSE_MENU_SHOULD_GO_TO_LANDING_PAGE: Received unhandled event!");
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
	return 0;
}

void func_11(int iParam0, char* sParam1)
{
	if (iParam0 != 0)
	{
		func_71(iParam0, sParam1);
	}
	func_72(4);
	func_73();
	func_74(1);
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__INTERFACE");
}

char* func_12()
{
	char cVar0[16];
	bool bVar2;

	bVar2 = STATS::_0x9D0F5D2E1951CD84();
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(bVar2, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_75(cVar0);
}

char* func_13()
{
	char cVar0[16];
	float fVar2;
	float fVar3;
	bool bVar4;

	fVar2 = BUILTIN::TO_FLOAT(NETWORK::_NETWORK_GET_RANK());
	fVar3 = BUILTIN::TO_FLOAT(999);
	bVar4 = ((fVar2 / fVar3) * 100f);
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(bVar4, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_75(cVar0);
}

bool func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 3;
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGES_INITAILIZE] iCount: ", iVar0);
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_76(iVar2, 1);
		if (!func_77(uParam0, iVar1))
		{
			DEBUG::_0x83407B92D46F25C3(168, 155, "[PAGES_INITAILIZE] ePage: ", func_66(iVar1, 0), " INITAILIZE FAILED!");
			return false;
		}
		DEBUG::_0xA308F935BDECCEC0(168, 155, "[PAGES_INITAILIZE] ePage: ", func_66(iVar1, 0), " INITAILIZE OK!");
		iVar2++;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGES_INITAILIZE] All pages initailized ok.");
	return true;
}

void func_15()
{
	DEBUG::_0xF0783374333FD8CE(8, 144, "CANCEL_AUTOSAVE_REQUEST");
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_34 };
	func_78(&Global_0);
}

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 3;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_76(iVar2, 1);
		func_79(uParam0, iVar1);
		DEBUG::_0xA308F935BDECCEC0(168, 155, "[PAGES_CLEANUP] ePage: ", func_66(iVar1, 0), " CLEANUP OK!");
		iVar2++;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGES_CLEANUP] All pages initailized ok.");
	return 1;
}

struct<4> func_17(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	bool bVar34;
	int iVar35;
	struct<4> Var36;

	Var0.f_9 = -1591664384;
	if (!func_80(&Var0, bParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Unable to find an active horse");
	}
	if (!bParam2)
	{
		Var29 = { func_81() };
		if (func_82() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Using dummy!");
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Dummy does not match equipped active slot after dummy buffer time! Bad!");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Dummy GUID = ", UNK_0xD2E4270E5D98EEE4(&Var29));
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Active GUID = ", UNK_0xD2E4270E5D98EEE4(&Var0));
			func_83(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_84(PLAYER::PLAYER_ID());
	}
	bVar33 = func_85();
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - bInstancedContentActive = ", MISC::_0xF216F74101968DB0(bVar33));
	bVar34 = false;
	if (bVar33)
	{
		bVar34 = func_86(75);
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - bInstancedContentSwitchingEnabled = ", MISC::_0xF216F74101968DB0(bVar34));
	if (bVar34)
	{
		iParam3 = 3;
	}
	iVar35 = func_87(iParam3, 0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Loadout slot = ", func_88(iVar35, 0));
	if (iVar35 != 3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Not freeroam!");
		if (INVENTORY::_0xB881CA836CC4B6D4(&(Global_17414.f_55.f_61[iVar35 /*4*/])))
		{
			Var0 = { Global_17414.f_55.f_61[iVar35 /*4*/] };
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(168, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Loadout ", func_88(iVar35, 0), " entry contains an invalid GUID, ignoring");
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_89();
		}
		if (!func_90(&Var0, 0))
		{
			Var36 = { func_91(bParam0) };
		}
		else
		{
			Var36 = { Var0 };
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Using fallback horse.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - GUID = ", UNK_0xD2E4270E5D98EEE4(&Var36));
		return Var36;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Returning equipped horse.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - GUID = ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

int func_18()
{
	return joaat("A_C_HORSE_MP_MANGY_BACKUP");
}

int func_19(bool bParam0)
{
	if (bParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (bParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return joaat("BREED_BRETON_REDROAN");
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return joaat("BREED_BRETON_SORREL");
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return joaat("BREED_BRETON_GRULLODUN");
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return joaat("BREED_BRETON_SEALBROWN");
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return joaat("BREED_BRETON_MEALYDAPPLEBAY");
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return joaat("BREED_BRETON_STEELGREY");
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return joaat("BREED_CRIOLLO_BLUEROANOVERO");
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return joaat("BREED_CRIOLLO_DUN");
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return joaat("BREED_CRIOLLO_SORRELOVERO");
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("BREED_CRIOLLO_BAYFRAMEOVERO");
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return joaat("BREED_CRIOLLO_MARBLESABINO");
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return joaat("BREED_KLADRUBER_BLACK");
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return joaat("BREED_KLADRUBER_WHITE");
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return joaat("BREED_KLADRUBER_CREMELLO");
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return joaat("BREED_KLADRUBER_GREY");
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("BREED_KLADRUBER_DAPPLEROSEGREY");
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return joaat("BREED_KLADRUBER_SILVER");
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("BREED_NORFOLKROADSTER_BLACK");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("BREED_NORFOLKROADSTER_PIEBALDROAN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("BREED_NORFOLKROADSTER_ROSEGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case 1387035765:
			return 1323533737;
		case 506531963:
			return -1159865523;
		case 2038357529:
			return 1854655826;
		case 1599848740:
			return 1416158449;
		case 1887211198:
			return 577120648;
		case 1645353708:
			return 1147338535;
		case 1154747978:
			return -1712303883;
		case 74569170:
			return 406093506;
		case -2004712574:
			return 956799610;
		case 699227695:
			return 139264677;
		case 1514230770:
			return -11223392;
		case 704938950:
			return 1133580901;
		case joaat("A_C_DONKEY_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_BREED_FROM_MODEL - Horse model missing from list! - ", func_92(bParam0, 0));
	return 0;
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN";
		case joaat("BREED_APPALOOSA_BLANKET"):
		case joaat("BREED_APPALOOSA_LEOPARD"):
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA";
		case joaat("BREED_ARABIAN_BLACK"):
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
		case joaat("BREED_ARABIAN_GREY"):
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case -1159865523:
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case 1323533737:
		case 1416158449:
		case 1854655826:
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_MORGAN_PALOMINO"):
		case joaat("BREED_MORGAN_BAYROAN"):
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN";
		case -1712303883:
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case 406093506:
		case 577120648:
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case 1147338535:
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
		case joaat("BREED_NOKOTA_WHITEROAN"):
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA";
		case joaat("BREED_SHIRE_LIGHTGREY"):
		case joaat("BREED_SHIRE_RAVENBLACK"):
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
		case -11223392:
		case 139264677:
		case 956799610:
		case 1133580901:
			return "BREED_TURKOMAN";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "BREED_GYPSYCOB";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE_PAINTED"):
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_NOKOTA";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_APPALOOSA";
		case joaat("BREED_WINTER02_01"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_BILL"):
			return "BREED_ARDENNES";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_ARABIAN";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_GENERIC_BREED_LABEL - Breed label missing for breed = ", func_93(iParam0, 0));
			break;
	}
	return "BREED_INVALID";
}

struct<8> func_21(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	struct<24> Var8;
	struct<8> Var32;

	StringCopy(&cVar0, "", 64);
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return cVar0;
	}
	Var8 = { func_94(iParam0, iParam1) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_95(iParam0, &Var32))
		{
			cVar0 = { Var32 };
		}
	}
	if (MISC::COMPARE_STRINGS(&cVar0, func_96(), false, -1) == 0)
	{
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_20(Var8.f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_97(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

void func_22()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1957252.f_5.f_8[iVar0]);
		iVar0++;
	}
}

void func_23(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_10, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_11, sParam2);
}

char* func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return "PMPLAYER_CONDITION_WEIGHT_PERFECT";
	}
	if (iParam0 <= -7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_UNDERWEIGHT";
	}
	if (iParam0 >= 7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_OVERWWEIGHT";
	}
	return "PMPLAYER_CONDITION_WEIGHT_AVERAGE";
}

void func_25(int iParam0, bool bParam1, char* sParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6, bool bParam7, bool bParam8)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_21[bParam1], sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_30[bParam1], sParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_39[bParam1], bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_48[bParam1], sParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_57[bParam1], sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_66[bParam1], bParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_75[bParam1], bParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1957252.f_5.f_8[iParam0], bParam1, "player_attribute_item", Global_1957252.f_5.f_14[iParam0 /*102*/].f_1[bParam1]);
}

void func_26(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_13, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_12, bParam2);
}

bool func_27()
{
	if (func_98())
	{
		return false;
	}
	return Global_1957252.f_1431.f_96 == 2;
}

bool func_28()
{
	if (func_98())
	{
		return false;
	}
	return Global_1957252.f_1431.f_96 == 0;
}

void func_29(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_17, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_16, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_14[iParam0 /*102*/].f_18, sParam3);
}

char* func_30(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_31(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 999)
	{
		return -1;
	}
	return Global_1139844.f_11.f_562[(iParam0 - 1)];
}

int func_32(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1145562[iParam0 /*35*/].f_8.f_1;
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HONOR_BAD_8";
		case 1:
			return "HONOR_BAD_7";
		case 2:
			return "HONOR_BAD_6";
		case 3:
			return "HONOR_BAD_5";
		case 4:
			return "HONOR_BAD_4";
		case 5:
			return "HONOR_BAD_3";
		case 6:
			return "HONOR_BAD_2";
		case 7:
			return "HONOR_BAD_1";
		case 8:
			return "HONOR_GOOD_1";
		case 9:
			return "HONOR_GOOD_2";
		case 10:
			return "HONOR_GOOD_3";
		case 11:
			return "HONOR_GOOD_4";
		case 12:
			return "HONOR_GOOD_5";
		case 13:
			return "HONOR_GOOD_6";
		case 14:
			return "HONOR_GOOD_7";
		case 15:
			return "HONOR_GOOD_8";
	}
	return "HONOR_GOOD_1";
}

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_99(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1100880[iVar3 /*53*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901988.f_725.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901988.f_725.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901988.f_725.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901988.f_725.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901988.f_725.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901988.f_725.f_36)
	{
		return 5;
	}
	return 6;
}

char* func_35(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			*bParam1 = 0;
			*bParam2 = joaat("COLOR_WHITE");
			return "PMPLAYER_GENERAL_HOSTILITY_LOW";
		case 2:
		case 3:
			*bParam1 = 0;
			*bParam2 = joaat("COLOR_WHITE");
			return "PMPLAYER_GENERAL_HOSTILITY_MID";
		case 4:
		case 5:
		case 6:
			*bParam1 = 1;
			*bParam2 = joaat("COLOR_RED");
			return "PMPLAYER_GENERAL_HOSTILITY_HIGH";
	}
	return "PMPLAYER_GENERAL_HOSTILITY_MID";
}

float func_36(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_100(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1957252.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DISPLAY_STATE - Failed to retrieve Core Value for ", func_101(iParam0, 0), " Returning -1.0. This is really bad. ");
	return -1f;
}

int func_37(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_100(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_42())
					{
						DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DRAIN_TIME - Player is currently POISONED. Health Core Drain Time is being overriden to instead drain over: ", 1200, " seconds.");
						return 1200;
					}
					else if (func_27())
					{
						DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DRAIN_TIME - Player is currently COLD. Health Core Drain Time is being overriden to instead drain over: ", 1200, " seconds.");
						return 1200;
					}
					else if (func_28())
					{
						DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DRAIN_TIME - Player is currently HOT. Health Core Drain Time is being overriden to instead drain over: ", 1200, " seconds.");
						return 1200;
					}
					return Global_1957252.f_1431.f_81;
				case 2:
					return Global_1957252.f_1431.f_83;
				case 1:
					return Global_1957252.f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1957252.f_1565.f_2.f_81;
				case 2:
					return Global_1957252.f_1565.f_2.f_83;
				case 1:
					return Global_1957252.f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DRAIN_TIME - Failed to retrieve drain time value for ", func_101(iParam0, 0), " Attribute Core will drain immediately. This is really bad.");
	return -1;
}

float func_38()
{
	return Global_1957252.f_1431.f_98;
}

int func_39(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_100(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_1957252.f_1431.f_81;
				case 2:
					return Global_1957252.f_1431.f_83;
				case 1:
					return Global_1957252.f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1957252.f_1565.f_2.f_81;
				case 2:
					return Global_1957252.f_1565.f_2.f_83;
				case 1:
					return Global_1957252.f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOAL_GET_BASE_ATTRIBUTE_CORE_DRAIN_TIME - Failed to retrieve drain time value for ", func_101(iParam0, 0), " Attribute Core will drain immediately. This is really bad.");
	return -1;
}

bool func_40(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_41(float fParam0)
{
	if (fParam0 > 100f)
	{
		return "RPG_ARROW_DOWN";
	}
	else if (fParam0 < 100f)
	{
		return "RPG_ARROW_UP";
	}
	return "";
}

bool func_42()
{
	if (func_98())
	{
		return false;
	}
	return Global_1146683.f_21645[20 /*209*/].f_208;
}

void func_43(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_15, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_14[iParam0 /*102*/].f_14, bParam2);
}

struct<2> func_44(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_45(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_46(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_44(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_47(int iParam0)
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

int func_48(int iParam0)
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

bool func_49(var uParam0, int iParam1)
{
	return func_102(uParam0->f_196, iParam1);
}

void func_50(var uParam0, int iParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(168, 155, "[FALGS] - Flag: ", func_103(iParam1, 0), " New Value: ", bParam2);
	if (bParam2)
	{
		func_104(&(uParam0->f_196), iParam1);
	}
	else
	{
		func_105(&(uParam0->f_196), iParam1);
	}
	UNK_0x355E72323AEE83CC(-1, 6);
}

struct<7> func_51()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

char* func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2075827635:
			return "UISCRIPTEVENTTYPE_NEW_PAGE";
		case -1740156697:
			return "UISCRIPTEVENTTYPE_ITEM_FOCUSED";
		case -1683534847:
			return "UISCRIPTEVENTTYPE_ITEM_HOLD_ACTION_CANCELLED";
		case -1340543710:
			return "UISCRIPTEVENTTYPE_FEED_MESSAGE_INTERACTED";
		case -1203660660:
			return "UISCRIPTEVENTTYPE_ITEM_SELECTED";
		case -1151569080:
			return "UISCRIPTEVENTTYPE_DATA_ADJUSTABLE_CHANGED";
		case -722926211:
			return "UISCRIPTEVENTTYPE_TAB_PAGE_DECREMENT";
		case -632467210:
			return "UISCRIPTEVENTTYPE_ITEM_UNFOCUSED";
		case -493190640:
			return "UISCRIPTEVENTTYPE_ITEM_SELECTED_ACTION_SUCCEEDED";
		case -445432096:
			return "UISCRIPTEVENTTYPE_STICKY_FEED_CLEARED";
		case -120002582:
			return "UISCRIPTEVENTTYPE_PAGED_COLLECTION_INITIALIZED";
		case -114265581:
			return "UISCRIPTEVENTTYPE_PAGED_COLLECTION_RESET";
		case 0:
			return "UISCRIPTEVENTTYPE_INVALID";
		case 368072021:
			return "UISCRIPTEVENTTYPE_PAGED_COLLECTION_REQUEST";
		case 703281244:
			return "UISCRIPTEVENTTYPE_TAB_PAGE_INCREMENT";
		case 922460030:
			return "UISCRIPTEVENTTYPE_NEW_ACTIVITY";
		case 923814653:
			return "UISCRIPTEVENTTYPE_ITEM_HOLD_ACTION_STARTED";
		case 1177283456:
			return "UISCRIPTEVENTTYPE_INDEX_CHANGE_REQUESTED";
		case 1576345536:
			return "UISCRIPTEVENTTYPE_ENTER_TRANSITION_COMPLETED";
		case 1617053448:
			return "UISCRIPTEVENTTYPE_DATA_ADJUSTABLE_CHANGED_ABSOLUTE";
		case 1856962233:
			return "UISCRIPTEVENTTYPE_INDEX_CHANGED";
		case 1933864603:
			return "UISCRIPTEVENTTYPE_VIRTUAL_KEYBOARD_RESULT";
		case 2080441048:
			return "UISCRIPTEVENTTYPE_EXIT_TRANSITION_COMPLETED";
		case 2099701247:
			return "UISCRIPTEVENTTYPE_PINNED_ITEM_VALIDATION";
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

void func_53(char* sParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(sParam0, "rpg_pause_item_index");
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_UI_UPDATE_INFO - ", iVar0);
	switch (Global_1957252.f_5.f_1425)
	{
		case 0:
			func_106(iVar0);
			break;
		case 1:
			func_107(iVar0);
			break;
		case 2:
			func_108(iVar0);
			break;
		case 3:
			func_109(iVar0);
			break;
		case 4:
			func_110(iVar0);
			break;
		case 5:
			func_111(iVar0);
			break;
	}
}

void func_54(int iParam0, bool bParam1)
{
	if (func_112())
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(2216, 162, "[HUB][TELEMETRY][SET_COMMING_FROM] _eCommingFromMenu: ", func_113(iParam0, 0), " Value: ", iParam0, " bForceCommingFromUntilScriptLaunch: ", bParam1);
	UNK_0x355E72323AEE83CC(162, 6);
	if (Global_1961200.f_1)
	{
		DEBUG::_0xA308F935BDECCEC0(2216, 162, "[HUB][TELEMETRY][SET_COMMING_FROM] CommingFrom is Forced to _eCommingFrom: ", func_113(Global_1961200, 0), " Value: ", Global_1961200, " can not set a new yet.");
		return;
	}
	Global_1961200 = iParam0;
	if (bParam1)
	{
		Global_1961200.f_1 = 1;
	}
}

void func_55(int iParam0, bool bParam1)
{
	if (!func_112())
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(2216, 162, "[HUB][TELEMETRY][SET_COMMING_FROM] _eCommingFromMenu: ", func_113(iParam0, 0), " Value: ", iParam0, " bForceCommingFromUntilScriptLaunch: ", bParam1);
	UNK_0x355E72323AEE83CC(162, 6);
	if (Global_1961200.f_1)
	{
		DEBUG::_0xA308F935BDECCEC0(2216, 162, "[HUB][TELEMETRY][SET_COMMING_FROM] CommingFrom is Forced to _eCommingFrom: ", func_113(Global_1961200, 0), " Value: ", Global_1961200, " can not set a new yet.");
		return;
	}
	Global_1961200 = iParam0;
	if (bParam1)
	{
		Global_1961200.f_1 = 1;
	}
}

void func_56(int iParam0)
{
	if (!func_112())
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[HUB][TELEMETRY_V2][SET_FIRST_ACCESSED] eFirstAccessedMenu: ", func_113(iParam0, 0));
	Global_1961200.f_5 = iParam0;
}

void func_57()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3[24];
	bool bVar6;
	bool bVar7;
	var uVar8;

	DEBUG::_0xF0783374333FD8CE(8, 155, "RPG_GLOBAL_UI_BUILD_GENERAL_DETAIL_PAGE sanity check");
	func_114(1, 1);
	Global_1957252.f_5.f_1425 = 0;
	func_116(MISC::_CREATE_VAR_STRING(2, func_115(0)));
	func_117(0, "PMPLAYER_STATISTICS");
	func_118(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar0 = func_30(Global_1145562[Global_1275959 /*35*/]);
	func_118(2, "PMPLAYER_RANK", "", 1, 0, 0, "", "", sVar0, 1);
	func_118(3, "PMPLAYER_HONOR", "", 1, 0, 1, func_33(func_32(255)), "pausemenu_player", 0, 0);
	func_117(4, "PMPLAYER_CONDITIONS");
	func_117(9, "PMPLAYER_PERKS");
	if (!func_120(Global_1146683.f_47689.f_63[func_119(-813902658) /*2*/].f_1))
	{
		iVar1 = func_121(-813902658);
		func_118(10, "CONSUMABLE_TONIC_BLENDING", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	if (!func_120(Global_1146683.f_47689.f_63[func_119(-1685270562) /*2*/].f_1))
	{
		iVar1 = func_121(-1685270562);
		func_118(11, "CONSUMABLE_TONIC_HARDY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 167;
	if (Global_1146683.f_35859.f_919[iVar2 /*12*/] == 1130659268)
	{
		func_118(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_118(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 169;
	if (Global_1146683.f_35859.f_919[iVar2 /*12*/] == -980934770)
	{
		func_118(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_118(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 170;
	if (Global_1146683.f_35859.f_919[iVar2 /*12*/] == 130533095)
	{
		func_118(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_118(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 171;
	if (Global_1146683.f_35859.f_919[iVar2 /*12*/] == -193167881)
	{
		func_118(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_118(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 168;
	if (Global_1146683.f_35859.f_919[iVar2 /*12*/] == -1246069683)
	{
		func_118(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_118(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	StringCopy(&cVar3, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar6 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar6)
	{
		func_118(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar6, &cVar3, "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_30[1]);
	if (func_28())
	{
		func_118(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_118(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_118(7, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(7, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = func_35(func_34(PLAYER::PLAYER_ID(), 0), &bVar7, &uVar8);
	func_118(8, "PMPLAYER_GENERAL_HOSTILITY", MISC::_CREATE_VAR_STRING(2, sVar0), 1, bVar7, 1, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 0, 0);
	func_122(0);
	func_123(0);
	func_106(1);
}

void func_58()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1957252.f_5.f_1425 = 1;
	func_114(1, 1);
	func_116(MISC::_CREATE_VAR_STRING(2, func_115(1)));
	func_117(0, "PMPLAYER_STATISTICS");
	func_118(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_124(0, 2) + 5;
	func_118(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_117(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_118(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_30[1]);
	if (func_28())
	{
		func_118(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_118(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_118(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	func_122(0);
	func_123(0);
	func_107(1);
	func_125("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_59()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1957252.f_5.f_1425 = 2;
	func_114(1, 1);
	func_116(MISC::_CREATE_VAR_STRING(2, func_115(2)));
	func_117(0, "PMPLAYER_STATISTICS");
	func_118(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_124(1, 2) + 5;
	func_118(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_117(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_118(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_122(0);
	func_123(0);
	func_108(1);
	func_125("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_60()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1957252.f_5.f_1425 = 3;
	func_114(1, 1);
	func_116(MISC::_CREATE_VAR_STRING(2, func_115(3)));
	func_117(0, "PMPLAYER_STATISTICS");
	func_118(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_124(2, 2) + 5;
	func_118(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_117(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_118(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_118(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_122(0);
	func_123(0);
	func_109(1);
	func_125("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_61()
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	float fVar17;
	int iVar18;
	int iVar19;

	Global_1957252.f_5.f_1425 = 4;
	func_114(1, 1);
	func_116(MISC::_CREATE_VAR_STRING(2, func_115(4)));
	func_117(0, "PMPLAYER_LIFE_STATS");
	func_126();
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_128((func_127(joaat("TOTAL_MONEY_EARNED")) / 100f), 2)), 64);
	func_118(2, "PMPLAYER_TOTAL_CASH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_128((func_127(joaat("TOTAL_GOLD_EARNED")) / 100f), 2)), 64);
	func_118(3, "PMPLAYER_TOTAL_GOLD", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_128((func_127(joaat("TOTAL_MONEY_SPENT")) / 100f), 2)), 64);
	func_118(4, "PMPLAYER_CASH_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_128((func_127(joaat("TOTAL_GOLD_SPENT")) / 100f), 2)), 64);
	func_118(5, "PMPLAYER_GOLD_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(joaat("KILLS")), 64);
	func_118(6, "PMPLAYER_TOTAL_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(joaat("DEATHS")), 64);
	func_118(7, "PMPLAYER_TOTAL_DEATHS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_46(joaat("TOTAL_PLAYING_TIME")) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_AND_HOURS", iVar11, iVar10), 64);
	func_118(8, "PMPLAYER_TIME_ONLINE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_129("ALL HORSES", &iVar12, &iVar13, -1591664384, 0);
	func_130(iVar12);
	iVar14 = func_131(joaat("HORSE_OWNED"));
	if (iVar14 >= iVar13)
	{
		IntToString(&cVar0, iVar14, 64);
	}
	else
	{
		IntToString(&cVar0, iVar13, 64);
		func_133(func_132(joaat("HORSE_OWNED")), (iVar13 - iVar14));
	}
	func_118(9, "PMPLAYER_HORSES_OWNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_117(10, "PMPLAYER_CRIME_STAT");
	IntToString(&cVar0, func_46(joaat("KILLS_PLAYERS")), 64);
	func_118(11, "PMPLAYER_PLAYERS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_134(joaat("KILLS"), joaat("LAW")), 64);
	func_118(12, "PMPLAYER_LAW_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_134(joaat("KILLS"), joaat("CIVILIAN")), 64);
	func_118(13, "PMPLAYER_PEDS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = func_134(1477929018, -2140438327);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	iVar9 = (iVar9 % 60);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_HOURS_MINUTES", iVar11, iVar10, iVar9), 64);
	func_118(14, "PMPLAYER_TIME_WANTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_134(joaat("LOOTED"), joaat("HUMANS")), 64);
	func_118(15, "PMPLAYER_PEDS_LOOTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_117(16, "PMPLAYER_HUNTING");
	IntToString(&cVar0, func_134(joaat("KILLS"), joaat("ANIMAL")), 64);
	func_118(17, "PMPLAYER_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_134(joaat("KILLED"), -1927753141), 64);
	func_118(18, "PMPLAYER_UNIQUE_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_134(joaat("SKINNED"), joaat("SMALL_ANIMALS")) + func_134(joaat("SKINNED"), joaat("MEDIUM_ANIMALS"))) + func_134(joaat("SKINNED"), joaat("LARGE_ANIMALS"))), 64);
	func_118(19, "PMPLAYER_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_134(joaat("SKINNED"), -1927753141), 64);
	func_118(20, "PMPLAYER_UNIQUE_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_134(joaat("SKINNED_PELT_QUALITY"), joaat("PERFECT")), 64);
	func_118(21, "PMPLAYER_PERFEECT_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_128((func_127(joaat("TOTAL_HUNTING_MONEY_EARNED")) / 100f), 2)), 64);
	func_118(22, "PMPLAYER_HUNTING_PROFITS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(joaat("FISH_CAUGHT")), 64);
	func_118(23, "PMPLAYER_FISH_CAUGHT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	if (MISC::_SHOULD_USE_METRIC_WEIGHT())
	{
		bVar15 = (func_127(joaat("BIGGEST_FISH_CAUGHT")) * 0.453592f);
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_KG", func_128(bVar15, 2)), 64);
	}
	else
	{
		iVar16 = func_46(joaat("BIGGEST_FISH_CAUGHT"));
		fVar17 = (func_127(joaat("BIGGEST_FISH_CAUGHT")) - BUILTIN::TO_FLOAT(iVar16));
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_LB_AND_OZ", iVar16, BUILTIN::ROUND((16f * fVar17))), 64);
	}
	func_118(24, "PMPLAYER_BIGGEST_FISH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_117(25, "PMPLAYER_CONTENT");
	IntToString(&cVar0, func_45(func_44(382107261)), 64);
	func_118(26, "PMPLAYER_STORY_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar18 = func_134(joaat("WINS"), joaat("UGC_SERIES"));
	iVar19 = func_134(joaat("LOSSES"), joaat("UGC_SERIES"));
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", (iVar18 * 100 / (iVar18 + iVar19))), 64);
	func_118(27, "PMPLAYER_SERIES_COMPLETE_PER", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, (iVar18 + iVar19), 64);
	func_118(28, "PMPLAYER_SERIES_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_122(0);
	func_123(0);
	func_110(1);
	func_125("PMPLAYER_GENERAL_STATS_TOOLTIP");
}

void func_62()
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char cVar9[64];
	int iVar17;
	bool bVar18;
	char cVar19[64];
	float fVar27;
	bool bVar28;
	char cVar29[64];
	bool bVar37;
	char cVar38[64];
	int iVar46;
	bool bVar48;
	char cVar49[64];
	char cVar57[64];
	char* sVar65;

	func_114(1, 1);
	Global_1957252.f_5.f_1425 = 5;
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		iVar7 = func_135(iVar4);
		iVar8 = func_136(iVar4);
	}
	else
	{
		iVar7 = func_137(&Var0, 0);
		iVar8 = func_138(&Var0, 0);
	}
	iVar7 = iVar7;
	StringCopy(&cVar9, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iVar8), 64);
	bVar18 = false;
	if (bVar5)
	{
		iVar17 = func_139(iVar4, 0);
	}
	else
	{
		iVar17 = func_140(Var0, 0);
	}
	if (iVar17 <= 50)
	{
		StringCopy(&cVar19, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar17 < 100)
	{
		StringCopy(&cVar19, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar18 = true;
	}
	else
	{
		StringCopy(&cVar19, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar18 = true;
	}
	fVar27 = 0f;
	bVar28 = false;
	if (bVar5)
	{
		fVar27 = func_141(iVar4);
	}
	if (fVar27 > 0f)
	{
		StringCopy(&cVar29, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar28 = true;
	}
	else
	{
		StringCopy(&cVar29, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_142(joaat("SLOTID_HORSE_SADDLE"), &bVar37))
	{
		if (func_143(bVar37, &iVar46, 14460646, 0))
		{
			StringCopy(&cVar38, HUD::_GET_LABEL_TEXT_BY_HASH(iVar46), 64);
		}
	}
	if (func_142(joaat("SLOTID_HORSE_STIRRUP"), &bVar48))
	{
		StringCopy(&cVar49, func_144(bVar48), 64);
	}
	StringCopy(&cVar57, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_4), 64);
	sVar65 = MISC::_CREATE_VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar57))
	{
		sVar65 = func_145(&cVar57);
	}
	func_116(sVar65);
	func_117(0, "PMPLAYER_STATS");
	func_118(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	func_118(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_118(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
	func_118(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_118(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_117(6, "PMPLAYER_CONDITIONS");
	func_118(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar19, 1, bVar18, bVar18, "rpg_horse_dirty", "pausemenu_player", 0, 0);
	func_118(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar29, 1, bVar28, bVar28, "rpg_horse_agitation", "pausemenu_player", 0, 0);
	func_117(9, "PMPLAYER_HORSE_TACK_TRINKETS_NET");
	func_118(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar38, 1, 0, 0, 0, 0, 0, 0);
	func_118(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar49, 1, 0, 0, 0, 0, 0, 0);
	iVar6 = 168;
	if (Global_1146683.f_35859.f_919[iVar6 /*12*/] == -1246069683)
	{
		func_118(12, "PMPLAYER_HORSE_TACK_TRINKET_TITLE", MISC::_CREATE_VAR_STRING(2, "PROVISION_TRINKET_SNOWY_EGRET"), 1, 0, 0, 0, 0, 0, 0);
	}
	func_111(1);
}

void func_63()
{
	func_72(4);
	func_73();
	func_74(2);
	func_146(joaat("SINGLE_PLAYER"), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__SINGLE_PLAYER");
}

int func_64()
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
	{
		return UIAPPS::_0x96FD694FE5BE55DC(joaat("PAUSE_MENU"));
	}
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PROGRESS_MENU")))
	{
		return UIAPPS::_0x96FD694FE5BE55DC(joaat("PROGRESS_MENU"));
	}
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[GET_CURRENT_UI_APP_ACTIVITY] ERROR! Was not able to determine page type.");
	return 0;
}

int func_65(var uParam0)
{
	return uParam0->f_197;
}

char* func_66(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PAUSE_MENU_PAGE_TYPE_INVALID";
		case 1084197569:
			return "PAUSE_MENU_PAGE_TYPE_PROGRESS";
		case 1271225230:
			return "PAUSE_MENU_PAGE_TYPE_ROOT";
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

void func_67(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PAGE_EXIT] - Page ", func_66(iParam1, 0));
	switch (iParam1)
	{
		case 1271225230:
			func_147(uParam0);
			break;
		case 1084197569:
			func_148(uParam0);
			break;
	}
}

void func_68(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[SET_PAGE] - New Page: ", func_66(iParam1, 0));
	uParam0->f_197 = iParam1;
}

void func_69(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PAGE_ENTER] - Page ", func_66(iParam1, 0));
	switch (iParam1)
	{
		case 1271225230:
			func_149(uParam0);
			break;
		case 1084197569:
			func_150(uParam0);
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_151(uParam0);
			break;
		case 1084197569:
			func_152(uParam0);
			break;
	}
}

void func_71(int iParam0, char* sParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 0, "SET_ALERT_MESSAGE_ON_INTERFACE_SCREEN - ignoring subsequent interface alert ", func_153(iParam0, 0));
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = sParam1;
	DEBUG::_0xD9911C7B5F8CD69C(35496, 0, "SET_ALERT_MESSAGE_ON_INTERFACE_SCREEN - Failed transition due to - ", func_154(iParam0), " - ", HUD::_GET_LABEL_TEXT_2(func_154(iParam0)), ", ", iParam0, ", ", sParam1);
}

void func_72(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 21, "SET_GAME_RESET_FLAG - Called.  Set DEBUG_ROUTER to debug 1 for more info.");
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
	DEBUG::_0xA308F935BDECCEC0(8, 21, "SET_GAME_RESET_FLAG - Done.");
}

void func_73()
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

void func_74(int iParam0)
{
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 21, "SET_NEXT_ROUTER_CONTEXT - eNextRouterContext = ROUTER_CONTEXT_NONE.  That's BAD.  Defaulting to interface.  You should stop doing things and make an A/PT now.");
		iParam0 = 1;
	}
	DEBUG::_0xF0783374333FD8CE(680, 21, "SET_NEXT_ROUTER_CONTEXT - current next router context = ", func_155(Global_1572864.f_1, 0), ", next next router context = ", func_155(iParam0, 0));
	Global_1572864.f_1 = iParam0;
}

char* func_75(char[4] cParam0, char[4] cParam1)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1271225230;
		case 2:
			return 1084197569;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR INT_INDEX_TO_HASH_ENUM - Unknown Enum Value ", iParam0, ", returning '0'");
	}
	return StackVal;
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR INT_INDEX_TO_HASH_ENUM - Unknown Enum Value ", iParam0, ", returning '0'");
	}
	return StackVal;
}

int func_77(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PAGE_INITIALIZE] - Page ", func_66(iParam1, 0));
	switch (iParam1)
	{
		case 1271225230:
			return func_156(uParam0);
		case 1084197569:
			return func_157(uParam0);
	}
	return 0;
}

void func_78(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_79(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PAGE_CLEANUP] - Page ", func_66(iParam1, 0));
	switch (iParam1)
	{
		case 1271225230:
			func_158(uParam0);
			break;
		case 1084197569:
			func_159(uParam0);
			break;
	}
}

bool func_80(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	bool bVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_160(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_161(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		bVar59 = false;
		while (bVar59 < iVar44)
		{
			if (func_162(&Var45, bVar59, iVar43, iVar44))
			{
				if (func_163(&Var45, &Var0, 0))
				{
					if (func_164(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_130(iVar43);
						DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_ACTIVE_HORSE_DATA - Found the active horse.");
						return true;
					}
				}
			}
			bVar59++;
		}
		func_130(iVar43);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_ACTIVE_HORSE_DATA - We have no active horse.");
	return false;
}

struct<4> func_81()
{
	return Global_1270813.f_11.f_310;
}

bool func_82()
{
	return Global_1270813.f_11.f_318 > Global_1275959.f_21;
}

void func_83(var uParam0, bool bParam1)
{
	Global_1270813.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1270813.f_11.f_318 = Global_1275959.f_21 + 10;
	}
}

int func_84(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_165(iParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_GAME_MODE - eGameMode = ", func_166(iVar0, 0));
	bVar1 = func_168(func_167(), 0, 0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_GAME_MODE - bShouldFreemodeConentEnd = ", MISC::_0xF216F74101968DB0(bVar1));
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

int func_85()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_169(iVar0) };
		if (func_170(Var1) == 7)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(int iParam0)
{
	return func_171(&(Global_3145858.f_6), iParam0);
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

char* func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSMLS_INVALID";
		case 0:
			return "NSMLS_RACE_HORSE";
		case 1:
			return "NSMLS_COOP_HORSE";
		case 2:
			return "NSMLS_COMPETITIVE_HORSE";
		case 3:
			return "NSMLS_FREEROAM_HORSE";
		case 4:
			return "NSMLS_RACE_VEHICLE";
		case 5:
			return "NSMLS_COOP_VEHICLE";
		case 6:
			return "NSMLS_COMPETITIVE_VEHICLE";
		case 7:
			return "NSMLS_FREEROAM_VEHICLE";
		case 8:
			return "NSMLS_NUM_SLOTS";
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

struct<4> func_89()
{
	struct<4> Var0;

	return Var0;
}

bool func_90(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	bool bVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_160(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_161(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		bVar59 = false;
		while (bVar59 < iVar44)
		{
			if (func_162(&Var45, bVar59, iVar43, iVar44))
			{
				if (func_163(&Var45, &Var0, 0))
				{
					if (func_164(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_130(iVar43);
						DEBUG::_0x1B08D1EB9D8C4931(8, 40, "[NET_STABLE_GET_PREVIOUS_ACTIVE_HORSE_DATA] Found the last active horse: ");
						return true;
					}
				}
			}
			bVar59++;
		}
		func_130(iVar43);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "[NET_STABLE_GET_PREVIOUS_ACTIVE_HORSE_DATA] We have no last active horse!");
	return false;
}

struct<4> func_91(bool bParam0)
{
	char* sVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar16;

	Var2.f_9 = -1591664384;
	if (!func_129("ALL HORSES", &sVar0, &iVar1, -1591664384, bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 39, "NET_STABLE_GET_FIRST_HORSE_GUID - PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER failed!");
		return Var2;
	}
	DEBUG::_0x4DC69742196F818A(136, 139, "NET_STABLE_GET_FIRST_HORSE_GUID - Number of items in inventory ", sVar0, ": ", iVar1);
	bVar16 = false;
	while (bVar16 < iVar1)
	{
		if (!func_162(&Var2, bVar16, sVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			bVar16++;
		}
	}
	func_130(sVar0);
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_FIRST_HORSE_GUID - Returning first horse found.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_FIRST_HORSE_GUID - GUID = ", UNK_0xD2E4270E5D98EEE4(&Var2));
	return Var2;
}

var func_92(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(joaat("DUMMY_MODEL_FOR_SCRIPT"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_93(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -1712303883:
			return "BREED_MUSTANG_CHESTNUTTOVERO";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case -1159865523:
			return "BREED_MISSOURIFOXTROTTER_BLUEROAN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case -11223392:
			return "BREED_TURKOMAN_GREY";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case 0:
			return "BREED_INVALID";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case 139264677:
			return "BREED_TURKOMAN_CHESTNUT";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case 406093506:
			return "BREED_MUSTANG_REDDUNOVERO";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 577120648:
			return "BREED_MUSTANG_BLACKOVERO";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case 956799610:
			return "BREED_TURKOMAN_BLACK";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case 1133580901:
			return "BREED_TURKOMAN_PERLINO";
		case 1147338535:
			return "BREED_MUSTANG_BUCKSKIN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 1323533737:
			return "BREED_MISSOURIFOXTROTTER_BLACKTOVERO";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case 1416158449:
			return "BREED_MISSOURIFOXTROTTER_DAPPLEGREY";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case 1854655826:
			return "BREED_MISSOURIFOXTROTTER_BUCKSKINBRINDLE";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
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

struct<24> func_94(int iParam0, int iParam1)
{
	struct<24> Var0;

	Var0.f_10 = -1;
	func_172(iParam0, iParam1, &Var0);
	return Var0;
}

bool func_95(int iParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Invalid GUID for local dummy, cannot get!");
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_938[iVar0 /*24*/]), iParam0))
		{
		}
		else
		{
			if (Global_1270813.f_938[iVar0 /*24*/].f_23 < Global_1275959.f_21)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Dummy time = : ", Global_1270813.f_938[iVar0 /*24*/].f_23);
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Posix time = : ", Global_1275959.f_21);
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Found an entry, but time is up, don't use dummy!");
				*uParam1 = { Global_1270813.f_938[iVar0 /*24*/].f_7 };
				return true;
			}
			*uParam1 = { Global_1270813.f_938[iVar0 /*24*/].f_15 };
			return true;
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Did not find, returning false! sItemGUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return false;
}

char* func_96()
{
	return "UNNAMED_HORSE";
}

char* func_97(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_173(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_145(&cVar0);
}

bool func_98()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

float func_99(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1139844.f_5568)
	{
		return 0f;
	}
	if (iParam0 == Global_1275959.f_154[Global_1275959])
	{
		return Global_17414.f_2641;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && Global_1100880[iVar0 /*53*/].f_18 >= Global_1100880[iVar0 /*53*/].f_45)
	{
		return Global_1100880[iVar0 /*53*/].f_18;
	}
	return Global_1100880[iVar0 /*53*/].f_45;
}

int func_100(int iParam0)
{
	return func_175(func_174(iParam0));
}

char* func_101(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RPG_GLOBAL_ATTRIBUTE_CORE_HEALTH";
		case 1:
			return "RPG_GLOBAL_ATTRIBUTE_CORE_STAMINA";
		case 2:
			return "RPG_GLOBAL_ATTRIBUTE_CORE_DEADEYE";
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

bool func_102(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

char* func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PAUSE_MENU_FLAG_UI_APP_STARTED_RUNNING_THIS_FRAME";
		case 1:
			return "PAUSE_MENU_FLAG_PAGE_ROOT_UPDATE_NEW_STAR_BINDINGS";
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

void func_104(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_105(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;

	func_176(0);
	func_177(0);
	func_178(0);
	func_122(0);
	func_123(0);
	func_179(0);
	func_180(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_181("MP_PLAYER_PLAYER", 0);
			func_183(func_182(0));
			func_184("PMPLAYER_OVERVIEW");
			func_114(0, 1);
			func_125("PMPLAYER_OVERVIEW_TOOLTIP");
			func_176(1);
			func_177(1);
			func_178(1);
			break;
		case 2:
			func_181("MP_PLAYER_PLAYER", 0);
			func_183(func_182(0));
			func_184("PMPLAYER_RANK");
			func_114(0, 1);
			iVar0 = NETWORK::_NETWORK_GET_XP();
			iVar1 = func_31(Global_1145562[Global_1275959 /*35*/] + 1);
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar0, iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
			func_125("PMPLAYER_RANK_TOOLTIP");
			break;
		case 3:
			func_181("MP_PLAYER_HONOR", 0);
			func_183("PMPLAYER_GENERAL_HONOR_DESC");
			func_184("PMPLAYER_HONOR");
			func_114(0, 1);
			func_125("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 5:
			func_181(func_186(), 0);
			func_183("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_184("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_114(0, 1);
			func_187(0);
			func_125("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 6:
			func_181(func_188(), func_189());
			func_183("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_184("PMPLAYER_CONDITION_TEMPERATURE");
			func_114(0, 1);
			func_190();
			func_125("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 7:
			func_181(func_191(), func_192());
			func_183("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_184("PMPLAYER_CONDITION_TOXICITY");
			func_114(0, 1);
			func_193();
			func_125("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
		case 8:
			func_181("MP_PLAYER_HOSTILITY", 0);
			func_183("PMPLAYER_CONDITION_HOSTILITY_DESC_NET");
			func_184("PMPLAYER_GENERAL_HOSTILITY");
			func_114(0, 1);
			func_125("PMPLAYER_GENERAL_HOSTILITY_TOOLTIP");
			break;
		case 10:
			if (!func_120(Global_1146683.f_47689.f_63[func_119(-813902658) /*2*/].f_1))
			{
				func_181("TRINKET_TONIC_BLENDING", "pausemenu_player_update");
				func_183("CONSUMABLE_TONIC_BLENDING_DESC");
				func_184("CONSUMABLE_TONIC_BLENDING");
				func_114(0, 1);
				func_125("PMPLAYER_GENERAL_TONIC_BLENDING_TOOLTIP_CONSUMED");
			}
			break;
		case 11:
			if (!func_120(Global_1146683.f_47689.f_63[func_119(-1685270562) /*2*/].f_1))
			{
				func_181("TRINKET_TONIC_HARDY", "pausemenu_player_update");
				func_183("CONSUMABLE_TONIC_HARDY_DESC");
				func_184("CONSUMABLE_TONIC_HARDY");
				func_114(0, 1);
				func_125("PMPLAYER_GENERAL_TONIC_HARDY_TOOLTIP_CONSUMED");
			}
			break;
		case 12:
			func_181("TRINKET_BEAVER_TOOTH", "pausemenu_player");
			func_183("PROVISION_TRINKET_BEAVER_TOOTH_DESC_NET");
			func_184("PROVISION_TRINKET_BEAVER_TOOTH_NET");
			func_114(0, 1);
			func_125("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 13:
			func_181("TRINKET_BUCK_ANTLER", "pausemenu_player");
			func_183("PROVISION_TRINKET_BUCK_ANTLER_DESC_NET");
			func_184("PROVISION_TRINKET_BUCK_ANTLER_NET");
			func_114(0, 1);
			func_125("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 14:
			func_181("TRINKET_JAVELINA_TUSK", "pausemenu_player_update");
			func_183("PROVISION_TRINKET_JAVELINA_TUSK_DESC");
			func_184("PROVISION_TRINKET_JAVELINA_TUSK");
			func_114(0, 1);
			func_125("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 15:
			func_181("TRINKET_RAM_HORN", "pausemenu_player");
			func_183("PROVISION_TRINKET_RAM_HORN_DESC_NET");
			func_184("PROVISION_TRINKET_RAM_HORN_NET");
			func_114(0, 1);
			func_125("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 16:
			func_181("TRINKET_SNOWY_EGRET", "pausemenu_player_update");
			func_183("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_184("PROVISION_TRINKET_SNOWY_EGRET");
			func_114(0, 1);
			func_125("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

void func_107(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_176(0);
	func_177(0);
	func_178(0);
	func_122(0);
	func_123(0);
	func_179(0);
	func_180(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_181(func_194(1, 0), 0);
			func_183(func_182(1));
			func_184("PMPLAYER_OVERVIEW");
			func_114(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[1 /*102*/].f_30[0]);
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[1 /*102*/].f_30[1]);
			func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[1 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[1 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[1 /*102*/].f_75[2]);
			func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_195(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_195(2, "RPG_ARROW_UP", 0);
			}
			func_176(1);
			func_125("");
			break;
		case 2:
			func_181(func_194(1, 0), 0);
			func_183("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_184("PMPLAYER_PROGRESSION");
			func_114(0, 1);
			func_196(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_125("");
			break;
		case 4:
			func_181(func_186(), 0);
			func_183("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_184("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_114(0, 1);
			func_187(1);
			func_125("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_181(func_188(), func_189());
			func_183("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_184("PMPLAYER_CONDITION_TEMPERATURE");
			func_114(0, 1);
			func_190();
			func_125("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_181(func_191(), func_192());
			func_183("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_184("PMPLAYER_CONDITION_TOXICITY");
			func_114(0, 1);
			func_193();
			func_125("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
	}
}

void func_108(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_176(0);
	func_177(0);
	func_178(0);
	func_122(0);
	func_123(0);
	func_179(0);
	func_180(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_181(func_194(2, 0), 0);
			func_183(func_182(2));
			func_184("PMPLAYER_OVERVIEW");
			func_114(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[2 /*102*/].f_30[0]);
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[2 /*102*/].f_30[1]);
			func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[2 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[2 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[2 /*102*/].f_75[2]);
			func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_195(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_195(2, "RPG_ARROW_UP", 0);
			}
			func_177(1);
			func_125("");
			break;
		case 2:
			func_181(func_194(2, 0), 0);
			func_183("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_184("PMPLAYER_PROGRESSION");
			func_114(0, 1);
			func_196(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_125("");
			break;
		case 4:
			func_181(func_186(), 0);
			func_183("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_184("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_114(0, 1);
			func_187(2);
			func_125("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_109(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_176(0);
	func_177(0);
	func_178(0);
	func_122(0);
	func_123(0);
	func_179(0);
	func_180(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_181(func_194(3, 0), 0);
			func_183(func_182(3));
			func_184("PMPLAYER_OVERVIEW");
			func_114(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[3 /*102*/].f_30[0]);
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[3 /*102*/].f_30[1]);
			func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_14[3 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[3 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1957252.f_5.f_14[3 /*102*/].f_75[2]);
			func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_195(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_195(2, "RPG_ARROW_UP", 0);
			}
			func_178(1);
			func_125("");
			break;
		case 2:
			func_181(func_194(3, 0), 0);
			func_183("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_184("PMPLAYER_PROGRESSION");
			func_114(0, 1);
			func_196(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_125("");
			break;
		case 4:
			func_181(func_186(), 0);
			func_183("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_184("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_114(0, 1);
			func_187(3);
			func_125("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_110(int iParam0)
{
	char* sVar0;

	func_176(0);
	func_177(0);
	func_178(0);
	func_122(0);
	func_123(0);
	func_179(0);
	func_180(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_181("MP_PLAYER_GENERAL_LIFE_STATS", 0);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			func_181("MP_PLAYER_GENERAL_FINANCES", 0);
			break;
		case 6:
		case 7:
			func_181("MP_PLAYER_GENERAL_COMBAT", 0);
			break;
		case 8:
		case 9:
			func_181("MP_PLAYER_GENERAL_TRAVEL", 0);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			func_181("MP_PLAYER_GENERAL_CRIME", 0);
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			func_181("MP_PLAYER_GENERAL_HUNTING", 0);
			break;
		case 26:
		case 27:
		case 28:
			func_181("MP_PLAYER_GENERAL_CONTENT", 0);
			break;
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1957252.f_5.f_525.f_24[iParam0 /*25*/].f_16);
	func_183(func_182(4));
	func_184(sVar0);
	func_114(0, 1);
}

void func_111(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	char cVar15[32];
	int iVar19;
	int iVar20;
	struct<4> Var21;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	func_176(0);
	func_177(0);
	func_178(0);
	func_122(0);
	func_123(0);
	func_179(0);
	func_180(0, "", "");
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		bVar6 = ENTITY::GET_ENTITY_MODEL(iVar4);
		iVar7 = func_19(bVar6);
	}
	else
	{
		iVar7 = func_197(&Var0, 0);
		bVar6 = func_198(iVar7);
	}
	if (bVar5)
	{
		iVar8 = func_199(iVar4) + 1;
		iVar9 = func_200(iVar4, 0);
		iVar10 = func_201(iVar4) + 1;
		iVar11 = func_200(iVar4, 1);
	}
	else
	{
		iVar8 = func_202(bVar6) + 1;
		iVar9 = func_203(Var0, 0);
		iVar10 = func_204(bVar6) + 1;
		iVar11 = func_203(Var0, 1);
	}
	bVar13 = true;
	switch (iParam0)
	{
		case 1:
			func_181(func_194(5, 0), "pausemenu_player");
			func_183(func_182(5));
			func_184("PMPLAYER_OVERVIEW");
			func_114(0, 1);
			Var21 = { func_17(0, 1, 0, -1) };
			func_205(&Var21, &iVar19, &iVar20);
			iVar19 = BUILTIN::FLOOR((IntToFloat(iVar19) * 0.01f));
			iVar20 = BUILTIN::FLOOR((IntToFloat(iVar20) * 0.01f));
			DEBUG::_0x4DC69742196F818A(136, 25, "_RPG_GLOBAL_UI_BUILD_PLAYER_HORSE_INFO_FOR_ITEM_INDEX - iSpeedBonus = ", iVar19, " iAccelBonus = ", iVar20);
			bVar25 = (IntToFloat(func_206(bVar6) + 1) * 10f);
			bVar26 = (bVar25 + (BUILTIN::TO_FLOAT(iVar19) * 10f));
			bVar27 = ((bVar25 + (2f * 10f)) * 0.01f);
			DEBUG::_0x4DC69742196F818A(6552, 25, "_RPG_GLOBAL_UI_BUILD_PLAYER_HORSE_INFO_FOR_ITEM_INDEX - fSpeed = ", bVar25, " fSpeedBonus = ", bVar26, " fSpeedPotential = ", bVar27);
			bVar28 = (IntToFloat(func_207(bVar6) + 1) * 10f);
			bVar29 = (bVar28 + (BUILTIN::TO_FLOAT(iVar20) * 10f));
			bVar30 = ((bVar28 + (2f * 10f)) * 0.01f);
			DEBUG::_0x4DC69742196F818A(6552, 25, "_RPG_GLOBAL_UI_BUILD_PLAYER_HORSE_INFO_FOR_ITEM_INDEX - fAccel = ", bVar28, " fAccelBonus = ", bVar29, " fAccelPotential = ", bVar30);
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, bVar25, bVar26, bVar27, 0);
			func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, bVar28, bVar29, bVar30, 0);
			func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::_CREATE_VAR_STRING(2, func_209(func_208(bVar6))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_122(1);
			func_123(1);
			func_179(1);
			func_210(10, (IntToFloat(iVar8) / 10f), BUILTIN::ROUND(((IntToFloat(iVar9) / 100f) * 15f)));
			func_211(10, (IntToFloat(iVar10) / 10f), BUILTIN::ROUND(((IntToFloat(iVar11) / 100f) * 15f)));
			func_125("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_181(func_194(5, 0), "pausemenu_player");
			func_183("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_184("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_114(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iVar14 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar4, 13);
			}
			else if (func_212(&Var0, 0, &iVar12))
			{
				bVar13 = false;
				switch (iVar12)
				{
					case 0:
						StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
						break;
					case 1:
						StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
						break;
					case 2:
						StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
						break;
					case 3:
						StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
						break;
					case 4:
						StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
						break;
					default:
						bVar13 = true;
						iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(bVar6, 13);
						break;
				}
			}
			else
			{
				iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(bVar6, 13);
			}
			if (bVar13)
			{
				if (iVar14 < 10)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
				}
				else if (iVar14 < 30)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
				}
				else if (iVar14 < 70)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
				}
				else if (iVar14 < 90)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
				}
				else
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
				}
			}
			iVar31 = 1;
			if (func_213(Var0, joaat("SLOTID_HORSE_SEX"), 0, -1) == joaat("HORSE_EQUIPMENT_FEMALE_GENITALS"))
			{
				iVar31 = 2;
			}
			if (INVENTORY::_0xB881CA836CC4B6D4(&Var0))
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::_CREATE_VAR_STRING(2, func_215(func_214(bVar6), iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::_CREATE_VAR_STRING(2, func_97(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::_CREATE_VAR_STRING(2, func_216(iVar31)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::_CREATE_VAR_STRING(2, &cVar15), 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::_CREATE_VAR_STRING(2, func_217(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_185(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_125("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			func_181("MP_PLAYER_HORSE_BONDING", 0);
			func_183("PMPLAYER_HORSE_BONDING_DESC");
			func_184("PMPLAYER_HORSE_BONDING_TITLE");
			func_114(0, 1);
			if (bVar5)
			{
				iVar32 = func_136(iVar4);
				iVar33 = func_135(iVar4);
			}
			else
			{
				iVar32 = func_138(&Var0, 0);
				iVar33 = func_137(&Var0, 0);
			}
			iVar34 = func_218(bVar6, iVar32);
			iVar35 = func_218(bVar6, iVar32 + 1);
			iVar36 = (iVar33 - iVar34);
			iVar37 = (iVar35 - iVar34);
			bVar38 = true;
			if (iVar32 >= 4)
			{
				bVar38 = false;
			}
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar32, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar36, iVar37), 0, bVar38, 0, 0, 0, 0, 0, 0);
			func_125("PMPLAYER_HORSE_BONDING_TIP");
			func_179(1);
			break;
		case 4:
			func_181("MP_PLAYER_HORSE_HEALTH", 0);
			func_183("PMPLAYER_HORSE_HEALTH_DESC");
			func_184("PMPLAYER_HORSE_HEALTH_TITLE");
			func_114(0, 1);
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar8, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar9), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_219(2, &Var0, 0);
			func_125("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_181("MP_PLAYER_HORSE_STAMINA", 0);
			func_183("PMPLAYER_HORSE_STAMINA_DESC");
			func_184("PMPLAYER_HORSE_STAMINA_TITLE");
			func_114(0, 1);
			func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar10, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar11), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_219(2, &Var0, 1);
			func_125("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			func_181("MP_PLAYER_HORSE_CLEANLINESS", 0);
			func_183("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_184("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_114(0, 1);
			if (func_140(Var0, 0) > 50)
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_195(0, "RPG_ARROW_DOWN", 0);
			}
			func_125("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_181("MP_PLAYER_HORSE_SADDLE", 0);
			func_183("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_184("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_114(0, 1);
			func_220();
			func_125("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			func_181("MP_PLAYER_HORSE_TEMPERAMENT", 0);
			func_183("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_184("PMPLAYER_HORSE_CONDITION_MOOD");
			func_114(0, 1);
			func_125("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_181("MP_PLAYER_HORSE_STIRRUPS", 0);
			func_183("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_184("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_114(0, 1);
			func_221();
			func_125("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
		case 12:
			func_181("TRINKET_SNOWY_EGRET", "pausemenu_player");
			func_183("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_184("PROVISION_TRINKET_SNOWY_EGRET");
			func_114(0, 1);
			func_125("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

bool func_112()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 792347263) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, 792347263))
	{
		return false;
	}
	return Global_1961200.f_6;
}

char* func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1909188275:
			return "HUB_TELEMETRY_MENU_SEASON_REWARDS";
		case -1300369147:
			return "HUB_TELEMETRY_MENU_LANDING_PAGE";
		case -712383481:
			return "HUB_TELEMETRY_MENU_OFFERS_AND_REWARDS";
		case -133648092:
			return "HUB_TELEMETRY_MENU_TOAST";
		case -1:
			return "HUB_TELEMETRY_MENU_INVALID";
		case 770236547:
			return "HUB_TELEMETRY_MENU_PAUSE_MENU";
		case 1667056592:
			return "HUB_TELEMETRY_MENU_HUB";
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

void func_114(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1957252.f_5.f_525.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1957252.f_5.f_525.f_21);
	}
}

char* func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_GENERAL_STATS";
		case 5:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_116(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525, sParam0);
}

void func_117(bool bParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1957252.f_5.f_525.f_22, bParam0, "player_group_item", Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_15);
}

void func_118(bool bParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7, char* sParam8, bool bParam9)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_21, sParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_23, sParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_24, bParam9);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1957252.f_5.f_525.f_22, bParam0, "player_list_item", Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_15);
}

int func_119(int iParam0)
{
	return (func_222(iParam0, 1) - 180);
}

bool func_120(int iParam0)
{
	return iParam0 < Global_1275959.f_21;
}

int func_121(int iParam0)
{
	int iVar0;

	iVar0 = func_119(iParam0);
	return (30 - ((Global_1275959.f_21 + 1800 - Global_1146683.f_47689.f_63[iVar0 /*2*/].f_1) / 60));
}

void func_122(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_9, bParam0);
}

void func_123(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_10, bParam0);
}

int func_124(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_100(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1957252.f_1431.f_50[iParam0];
		case 1:
			return Global_1957252.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_LEVEL_INT] Couldn't retrieve Cached Attribute Level data for Attribute: ", func_223(iParam0, 0));
	return 1;
}

void func_125(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_5, sParam0);
}

void func_126()
{
	struct<2> Var0;
	vector3 vVar2;
	char cVar9[16];
	int iVar11;

	Var0 = { func_44(joaat("DATE_CHARACTER_CREATED")) };
	STATS::STAT_ID_GET_DATE(&Var0, &vVar2);
	iVar11 = LOCALIZATION::_LOCALIZATION_GET_SYSTEM_DATE_FORMAT();
	DEBUG::_0xF0783374333FD8CE(40, 183, "RPG_GLOBAL_UI_BUILD_DATE_LINE - Format ", func_224(iVar11, 0));
	switch (iVar11)
	{
		case 0:
			if (vVar2.z < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 1:
			if (vVar2.y < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 2:
			IntToString(&cVar9, vVar2.x, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			break;
	}
	func_118(1, "PMPLAYER_CREATED_DATE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
}

float func_127(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_44(iParam0) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

char* func_128(bool bParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(bParam0, iParam1);
	return func_225(sVar0, joaat("COLOR_PURE_WHITE"));
}

bool func_129(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_226(bParam4), sParam0, bParam3, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *bParam2, " from predicate '", sParam0, "' with ", func_227(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

int func_130(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_RELEASE_ITEM_COLLECTION - Failed to release collection!");
		return 0;
	}
	return 1;
}

int func_131(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_132(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

struct<2> func_132(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_133(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_134(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_228(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_135(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_BONDING_XP - Entity doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_BONDING_XP - Ped is dead or injured.");
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_POINTS(iParam0, 7);
	return iVar0;
}

int func_136(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_BONDING_LEVEL - Entity doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_BONDING_LEVEL - Ped is dead or injured.");
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

int func_137(int iParam0, int iParam1)
{
	if (!func_229(iParam0, iParam1, 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_GET_MOUNT_BONDING_XP - NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Failed.");
	}
	return Global_1904139.f_23;
}

int func_138(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_229(iParam0, iParam1, 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_GET_MOUNT_BONDING_LEVEL - NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Failed.");
	}
	if (!func_230(&Global_1904139))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_GET_MOUNT_BONDING_LEVEL - Slot Data isn't valid.");
		return 0;
	}
	iVar0 = func_231(Global_1904139.f_11, Global_1904139.f_23);
	return iVar0;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_EFFICIENCY_VALUE - Entity doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_EFFICIENCY_VALUE - Ped is dead or injured.");
		return 0;
	}
	if (func_232(iParam1, &iVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	return 0;
}

int func_140(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "NET_STABLE_RPG__GET_EFFICIENCY_VALUE - Could not get data, could be bad if this is a valid player horse.");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17414.f_55.f_61.f_41[iVar0 /*56*/]), &uParam0))
		{
			return Global_17414.f_55.f_61.f_41[iVar0 /*56*/].f_40[iParam4 /*4*/];
		}
		iVar0++;
	}
	if (!func_233(&uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "NET_STABLE_RPG__GET_EFFICIENCY_VALUE - Could not set new data.");
		return 0;
	}
	return 0;
}

float func_141(int iParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 25, "HORSE_GET_AGITATION - Horse doesn't exist");
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0f;
	}
	fVar0 = PED::_0x42688E94E96FD9B4(iParam0, 3, 0);
	return fVar0;
}

bool func_142(bool bParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_234(856287005, bParam0))
	{
		return false;
	}
	Var0 = { func_235() };
	*bParam1 = func_213(Var0, bParam0, 0, -1);
	if (!func_236(*bParam1, 0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "[PLAYER_HORSE_EQUIPMENT_GET_EQUIPPED_ITEM_IN_SLOT] Failed to find equipped item in slot:", func_227(bParam0, 0));
		return false;
	}
	return true;
}

bool func_143(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;

	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var1))
	{
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_LABEL_UI_DATA: Item Name: ", UNK_0x4379B6FA65D55295(Var1));
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_LABEL_UI_DATA: Item Desc: ", UNK_0x4379B6FA65D55295(Var1.f_1));
		iVar0 = 0;
		while (iVar0 < 8)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 158, "FIND_INVENTORY_ITEM_LABEL_UI_DATA: Key: ", Var1.f_18[iVar0 /*2*/]);
			DEBUG::_0x1B08D1EB9D8C4931(8, 158, "FIND_INVENTORY_ITEM_LABEL_UI_DATA: Type: ", Var1.f_18[iVar0 /*2*/].f_1);
			if (bParam2 != 0 && Var1.f_18[iVar0 /*2*/].f_1 != bParam2)
			{
				Jump @193; //curOff = 143
			}
			else if (iParam3 != 0 && Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*iParam1 = { Var1.f_18[iVar0 /*2*/] };
				return true;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_LABEL_UI_DATA: Unable to find label of type ", UNK_0x4379B6FA65D55295(bParam2), " for item ", func_237(bParam0, 0));
	return false;
}

char* func_144(bool bParam0)
{
	bool bVar0;

	if (!func_236(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	bVar0 = func_238(bParam0, 0);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_NAME - No name specified for ", func_237(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(bVar0);
}

char[] func_145(char[4] cParam0)
{
	return cParam0;
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887.f_415 = iParam0;
	if (iParam1 != 0)
	{
		func_239(iParam1);
	}
	if (iParam2 != 0)
	{
		func_239(iParam2);
	}
	if (iParam3 != 0)
	{
		func_239(iParam3);
	}
	if (iParam4 != 0)
	{
		func_239(iParam4);
	}
	if (iParam5 != 0)
	{
		func_239(iParam5);
	}
	if (iParam6 != 0)
	{
		func_239(iParam6);
	}
	if (iParam7 != 0)
	{
		func_239(iParam7);
	}
	if (iParam8 != 0)
	{
		func_239(iParam8);
	}
	if (iParam9 != 0)
	{
		func_239(iParam9);
	}
	if (iParam10 != 0)
	{
		func_239(iParam10);
	}
	func_240();
}

void func_147(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][EXIT] - CALL!");
}

void func_148(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_PROGRESS][EXIT] - CALL!");
}

void func_149(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][ENTER] - CALL!");
	func_50(uParam0, 1, 1);
}

void func_150(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_PROGRESS][ENTER] - CALL!");
}

void func_151(var uParam0)
{
	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 1, 1);
	}
	if (func_49(uParam0, 1))
	{
		func_50(uParam0, 1, 0);
		func_242(uParam0, 1145633164, func_241());
		func_242(uParam0, -359624034, func_243());
	}
}

void func_152(var uParam0)
{
	func_244(uParam0);
}

char* func_153(int iParam0, int iParam1)
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

char* func_154(int iParam0)
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

char* func_155(int iParam0, int iParam1)
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

int func_156(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][INITAILIZE] - CALL!");
	if (!func_245(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][INITAILIZE] - ERROR! PAUSE_MENU_PAGE_ROOT_INITAILIZE_DATABINDINGS = FALSE");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][INITAILIZE] - SUCCESS!");
	return 1;
}

int func_157(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_PROGRESS][ENTER] - CALL!");
	func_246(uParam0);
	return 1;
}

void func_158(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][CLEANUP] - CALL!");
	func_247(uParam0);
}

void func_159(var uParam0)
{
}

struct<14> func_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_237(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_227(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_227(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_227(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_248(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_249(iParam6, 0));
	}
	return Var0;
}

bool func_161(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_226(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *bParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_162(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (bParam1 < 0 || bParam1 >= bParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", bParam1, " Size: ", bParam3);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, bParam1, iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", bParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool func_163(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_HORSE_DATA - bPlayerOnly = ", MISC::_0xF216F74101968DB0(bParam2));
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_GET_HORSE_DATA - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	iVar0 = func_226(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam0, iParam1, 29, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_HORSE_DATA - failed to read data!");
		return false;
	}
	return true;
}

bool func_164(var uParam0, int iParam1)
{
	return func_250(*uParam0, iParam1);
}

int func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*70*/].f_1.f_21.f_2;
	iVar1 = func_251(iVar0);
	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_GET_GAME_MODE_FROM_UGC - eContentType = ", func_252(iVar0, 0), " eSubType = ", func_253(iVar1, 0));
	iVar2 = func_254(iVar0, iVar1);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_GAME_MODE_FROM_UGC - eGameMode = ", func_166(iVar2, 0));
	return iVar2;
}

char* func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSMGM_INVALID";
		case 0:
			return "NSMGM_RACE";
		case 1:
			return "NSMGM_COOP";
		case 2:
			return "NSMGM_COMPETITIVE";
		case 3:
			return "NSMGM_FREEMODE";
		case 4:
			return "NSMGM_NUM_MODES";
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

struct<2> func_167()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_168(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265378.f_131719.f_135 & 8 != 0)
	{
		Global_1072032.f_28392 = 1;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eLoaderFlags != UGC_GLOBAL_LOADER_FLAG_NONE");
		return 1;
	}
	if (func_5(Global_1051214) && !func_255(Global_1051214, Param0))
	{
		Global_1072032.f_28392 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_256(iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_ANYONE");
		return 1;
	}
	if (iParam3 != 0 && func_257(iParam3, 255))
	{
		Global_1072032.f_28392 = 4;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_PLAYER");
		return 1;
	}
	if (Global_263042[Global_1275959 /*70*/] > 2)
	{
		Global_1072032.f_28392 = 5;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState > UGC_GLOBAL_LOADER_STATE_IDLE, ", func_258(Global_263042[Global_1275959 /*70*/], 0));
		return 1;
	}
	if (Global_262155 >= 1)
	{
		Global_1072032.f_28392 = 6;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState >= UGC_GLOBAL_LOADER_HS_MISSION_UPDATE, ", func_259(Global_262155, 0));
		return 1;
	}
	if (func_260())
	{
		Global_1072032.f_28392 = 7;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NETWORK_IS_GLOBAL_UGC_MISSION_ACTIVE");
		return 1;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_5(Global_1051214))
		{
			Global_1072032.f_28392 = 8;
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, TMF_IS_MATCHMAKING");
			return 1;
		}
	}
	if (Global_265378.f_131877 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265378.f_131877))
	{
		Global_1072032.f_28392 = 9;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, g_UGCData.tiMissionController");
		return 1;
	}
	Global_1072032.f_28392 = 0;
	return 0;
}

struct<2> func_169(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_170(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_171(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_172(int iParam0, int iParam1, var uParam2)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_LOAD_SLOT_DATA");
	if (iParam1 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_LOAD_SLOT_DATA - Mount type is invalid.");
		return 0;
	}
	func_261(uParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_262(iParam0, uParam2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA - NET_STABLE__LOAD_HORSE_DATA_TO_SLOT_DATA - Failed. eMountType = ", func_263(iParam1, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
				return 0;
			}
			break;
		case 2:
			if (!func_264(iParam0, uParam2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA - NET_STABLE__LOAD_HORSE_DATA_TO_SLOT_DATA - Failed. eMountType = ", func_263(iParam1, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
				return 0;
			}
			break;
	}
	return 1;
}

char* func_173(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case 1323533737:
			return "BREED_MISSOURIFOXTROTTER_BLACKTOVERO";
		case -1159865523:
			return "BREED_MISSOURIFOXTROTTER_BLUEROAN";
		case 1854655826:
			return "BREED_MISSOURIFOXTROTTER_BUCKSKINBRINDLE";
		case 1416158449:
			return "BREED_MISSOURIFOXTROTTER_DAPPLEGREY";
		case 577120648:
			return "BREED_MUSTANG_BLACKOVERO";
		case 1147338535:
			return "BREED_MUSTANG_BUCKSKIN";
		case -1712303883:
			return "BREED_MUSTANG_CHESTNUTTOVERO";
		case 406093506:
			return "BREED_MUSTANG_REDDUNOVERO";
		case 956799610:
			return "BREED_TURKOMAN_BLACK";
		case 139264677:
			return "BREED_TURKOMAN_CHESTNUT";
		case -11223392:
			return "BREED_TURKOMAN_GREY";
		case 1133580901:
			return "BREED_TURKOMAN_PERLINO";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_BREED_NAME - HORSE_BREED name missing for breed = ", func_93(iParam0, 0));
	return "";
}

bool func_174(int iParam0)
{
	return func_265(&(Global_1957252.f_1565), iParam0, 1);
}

int func_175(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_176(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_6, bParam0);
}

void func_177(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_7, bParam0);
}

void func_178(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_8, bParam0);
}

void func_179(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_11, bParam0);
}

void func_180(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_20, sParam2);
}

void func_181(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_266(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_4, sParam1);
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC_NET";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_STATS_DESC";
		case 5:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_183(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_2, sParam0);
}

void func_184(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_1, sParam0);
}

void func_185(bool bParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_8, bParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_9, bParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_10, bParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1957252.f_5.f_525.f_21, bParam0, "player_attribute_item", Global_1957252.f_5.f_525.f_24[bParam0 /*25*/]);
}

char* func_186()
{
	return "MP_PLAYER_WEIGHT";
}

void func_187(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	switch (iParam0)
	{
		case 0:
			fVar0 = (Global_1146683.f_2169[93 /*205*/].f_201 * Global_1146683.f_2169[93 /*205*/].f_202);
			fVar1 = (Global_1146683.f_2169[94 /*205*/].f_201 * Global_1146683.f_2169[94 /*205*/].f_202);
			if (fVar0 == 0f)
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (fVar0 > 0f)
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar0 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_195(0, "RPG_ARROW_DOWN", 0);
				func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar1 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_195(1, "RPG_ARROW_UP", 0);
			}
			else
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar0 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_195(0, "RPG_ARROW_UP", 0);
				func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar1 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_195(1, "RPG_ARROW_DOWN", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			if (Global_1957252.f_1431.f_103 == 0)
			{
				fVar2 = 0.15f;
			}
			else if (Global_1957252.f_1431.f_103 == 10 || Global_1957252.f_1431.f_103 == -10)
			{
				fVar2 = -0.25f;
			}
			else
			{
				fVar2 = 0f;
			}
			if (fVar2 < 0f)
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_267(iParam0));
				func_195(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_267(iParam0));
			}
			else
			{
				func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_267(iParam0));
				func_195(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_188()
{
	return "MP_PLAYER_TEMPERATURE";
}

char* func_189()
{
	return "pm_player_mp";
}

void func_190()
{
	if (func_27() || func_28())
	{
		func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_195(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_191()
{
	return "MP_PLAYER_TOXICITY";
}

char* func_192()
{
	return "pm_player_mp";
}

void func_193()
{
	if (func_42())
	{
		func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_195(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_PLAYER";
		case 1:
			return "MP_PLAYER_HEALTH";
		case 2:
			return "MP_PLAYER_STAMINA";
		case 3:
			return "MP_PLAYER_DEAD_EYE";
		case 4:
			return "MP_PLAYER_GENERAL_STATS";
		case 5:
			return "HORSE_GENERAL";
		default:
			break;
	}
	return "";
}

void func_195(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1957252.f_5.f_525.f_24[bParam0 /*25*/].f_12, true);
}

void func_196(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char* sVar6;

	fVar0 = func_268(iParam0, 2);
	iVar1 = func_269(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(func_270(iVar1 + 1));
	iVar3 = iVar1 + 5;
	iVar4 = 5 + 5;
	if (iVar3 < iVar4)
	{
		func_185(bVar5, MISC::_CREATE_VAR_STRING(2, sParam1), MISC::_CREATE_VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		bVar5++;
	}
	func_185(bVar5, MISC::_CREATE_VAR_STRING(2, sParam2), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, iVar4), 0, 0, 0, 0, 0, 0, 0, 0);
	sVar6 = func_272(func_271(iVar3, 0));
	func_180(1, sVar6, sParam3);
}

int func_197(int iParam0, int iParam1)
{
	func_229(iParam0, iParam1, 0);
	return Global_1904139.f_22;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_OVERO");
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO");
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_DARKBAY");
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY");
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return joaat("A_C_HORSE_ANDALUSIAN_PERLINO");
		case joaat("BREED_APPALOOSA_BLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_BLANKET");
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD");
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARD");
		case joaat("BREED_ARABIAN_BLACK"):
			return joaat("A_C_HORSE_ARABIAN_BLACK");
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY");
		case joaat("BREED_ARABIAN_WHITE"):
			return joaat("A_C_HORSE_ARABIAN_WHITE");
		case joaat("BREED_ARDENNES_BAYROAN"):
			return joaat("A_C_HORSE_ARDENNES_BAYROAN");
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN");
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return joaat("A_C_HORSE_ARDENNES_IRONGREYROAN");
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("BREED_MORGAN_BAY"):
			return joaat("A_C_HORSE_MORGAN_BAY");
		case joaat("BREED_MORGAN_BAYROAN"):
			return joaat("A_C_HORSE_MORGAN_BAYROAN");
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		case joaat("BREED_MORGAN_PALOMINO"):
			return joaat("A_C_HORSE_MORGAN_PALOMINO");
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return joaat("A_C_HORSE_MUSTANG_GRULLODUN");
		case joaat("BREED_MUSTANG_WILDBAY"):
			return joaat("A_C_HORSE_MUSTANG_WILDBAY");
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return joaat("A_C_HORSE_NOKOTA_BLUEROAN");
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return joaat("A_C_HORSE_NOKOTA_WHITEROAN");
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("BREED_SHIRE_DARKBAY"):
			return joaat("A_C_HORSE_SHIRE_DARKBAY");
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return joaat("A_C_HORSE_SHIRE_LIGHTGREY");
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN");
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return joaat("A_C_HORSE_THOROUGHBRED_BRINDLE");
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return joaat("A_C_HORSE_TURKOMAN_DARKBAY");
		case joaat("BREED_TURKOMAN_GOLD"):
			return joaat("A_C_HORSE_TURKOMAN_GOLD");
		case joaat("BREED_TURKOMAN_SILVER"):
			return joaat("A_C_HORSE_TURKOMAN_SILVER");
		case joaat("BREED_BRETON_REDROAN"):
			return joaat("A_C_HORSE_BRETON_REDROAN");
		case joaat("BREED_BRETON_SORREL"):
			return joaat("A_C_HORSE_BRETON_SORREL");
		case joaat("BREED_BRETON_GRULLODUN"):
			return joaat("A_C_HORSE_BRETON_GRULLODUN");
		case joaat("BREED_BRETON_SEALBROWN"):
			return joaat("A_C_HORSE_BRETON_SEALBROWN");
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY");
		case joaat("BREED_BRETON_STEELGREY"):
			return joaat("A_C_HORSE_BRETON_STEELGREY");
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO");
		case joaat("BREED_CRIOLLO_DUN"):
			return joaat("A_C_HORSE_CRIOLLO_DUN");
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE");
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return joaat("A_C_HORSE_CRIOLLO_SORRELOVERO");
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO");
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return joaat("A_C_HORSE_CRIOLLO_MARBLESABINO");
		case -952011226:
			return -390136947;
		case -356470463:
			return 1104566530;
		case -1750687713:
			return -1142861801;
		case -272192064:
			return -417416199;
		case 1935859332:
			return -1460773772;
		case -1898310680:
			return 1476007840;
		case joaat("BREED_KLADRUBER_BLACK"):
			return joaat("A_C_HORSE_KLADRUBER_BLACK");
		case joaat("BREED_KLADRUBER_WHITE"):
			return joaat("A_C_HORSE_KLADRUBER_WHITE");
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return joaat("A_C_HORSE_KLADRUBER_CREMELLO");
		case joaat("BREED_KLADRUBER_GREY"):
			return joaat("A_C_HORSE_KLADRUBER_GREY");
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY");
		case joaat("BREED_KLADRUBER_SILVER"):
			return joaat("A_C_HORSE_KLADRUBER_SILVER");
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_BLACK");
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY");
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN");
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY");
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case 1323533737:
			return 1387035765;
		case -1159865523:
			return 506531963;
		case 1854655826:
			return 2038357529;
		case 1416158449:
			return 1599848740;
		case 577120648:
			return 1887211198;
		case 1147338535:
			return 1645353708;
		case -1712303883:
			return 1154747978;
		case 406093506:
			return 74569170;
		case 956799610:
			return -2004712574;
		case 139264677:
			return 699227695;
		case -11223392:
			return 1514230770;
		case 1133580901:
			return 704938950;
		case joaat("BREED_DONKEY"):
			return joaat("A_C_DONKEY_01");
		case joaat("BREED_MULE"):
			return joaat("A_C_HORSEMULE_01");
		case joaat("BREED_MULE_PAINTED"):
			return joaat("A_C_HORSEMULEPAINTED_01");
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("BREED_ARABIAN_GREY"):
			return joaat("A_C_HORSE_ARABIAN_GREY");
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT");
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return joaat("A_C_HORSE_MUSTANG_GOLDENDUN");
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
		case joaat("BREED_MANGY_BACKUP"):
			return joaat("A_C_HORSE_MP_MANGY_BACKUP");
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_MODEL_FROM_BREED - Horse breed missing from list! - ", func_93(iParam0, 0));
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 26, "HORSE_GET_HEALTH_LEVEL - Horse doesn't exist");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_273());
	return iVar0;
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_HORSE_CORE_VALUE - Entity doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_HORSE_CORE_VALUE - Ped is dead or injured.");
		return 0;
	}
	if (func_274(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 26, "HORSE_GET_STAMINA_LEVEL - Horse doesn't exist");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_275());
	return iVar0;
}

int func_202(bool bParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(bParam0, func_273());
	return iVar0;
}

int func_203(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!func_276(&uParam0, &iVar0))
	{
		return 0;
	}
	return Global_17414.f_55.f_61.f_41[iVar0 /*56*/].f_29[iParam4 /*5*/];
}

int func_204(bool bParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(bParam0, func_275());
	return iVar0;
}

void func_205(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	struct<2> Var14;
	vector3 vVar36;
	int iVar43;
	bool bVar44;
	struct<2> Var45;
	vector3 vVar67;
	int iVar74;

	if (func_277(uParam0))
	{
		Var0.f_9 = -1591664384;
		if (func_278(*uParam0, joaat("SLOTID_HORSE_SADDLE"), &Var0, 1, -1))
		{
			if (func_236(Var0.f_4, 0))
			{
				Var14.f_1 = 20;
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(Var0.f_4, &Var14) && Var14 > 0)
				{
					iVar43 = 0;
					while (iVar43 < Var14)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var14.f_1[iVar43], &vVar36))
						{
							if (vVar36.y == -1620444701)
							{
								*iParam1 = (*iParam1 + vVar36.z);
							}
							else if (vVar36.y == 2086291460)
							{
								*iParam2 = (*iParam2 + vVar36.z);
							}
						}
						iVar43++;
					}
				}
			}
			bVar44 = func_213(Var0, joaat("SLOTID_HORSE_STIRRUP"), 0, -1);
			if (func_236(bVar44, 0))
			{
				Var45.f_1 = 20;
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar44, &Var45) && Var45 > 0)
				{
					iVar74 = 0;
					while (iVar74 < Var45)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var45.f_1[iVar74], &vVar67))
						{
							if (vVar67.y == -1620444701)
							{
								*iParam1 = (*iParam1 + vVar67.z);
							}
							else if (vVar67.y == 2086291460)
							{
								*iParam2 = (*iParam2 + vVar67.z);
							}
						}
						iVar74++;
					}
				}
			}
		}
	}
}

int func_206(bool bParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(bParam0, func_279());
	return iVar0;
}

int func_207(bool bParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(bParam0, func_280());
	return iVar0;
}

int func_208(bool bParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return -1;
	}
	iVar0 = func_281(bParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_HANDLING_LABEL - Horse handling missing from list. eHorseHandling = ", func_282(iParam0, 0));
	return "";
}

void func_210(bool bParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1957252.f_5.f_525.f_12, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1957252.f_5.f_525.f_13, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1957252.f_5.f_525.f_14, bParam2);
}

void func_211(bool bParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1957252.f_5.f_525.f_15, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1957252.f_5.f_525.f_16, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1957252.f_5.f_525.f_17, bParam2);
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	if (!func_229(iParam0, iParam1, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "PLAYER_STABLE_GET_MOUNT_PHYSIQUE - NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL failed. exiting...");
		return 0;
	}
	if (!func_230(&Global_1904139))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "PLAYER_STABLE_GET_MOUNT_PHYSIQUE - Slot Data is invalid. exiting...");
		return 0;
	}
	return func_283(&Global_1904139, iParam2);
}

int func_213(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_284(&uParam0, bParam4, bParam5, iParam6);
}

int func_214(bool bParam0)
{
	if (bParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return 779169510;
	}
	switch (bParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return joaat("HORSE_CLASS_MULTI");
		case -390136947:
			return joaat("HORSE_CLASS_MULTI");
		case 1104566530:
			return joaat("HORSE_CLASS_MULTI");
		case -1142861801:
			return joaat("HORSE_CLASS_MULTI");
		case -417416199:
			return joaat("HORSE_CLASS_MULTI");
		case -1460773772:
			return joaat("HORSE_CLASS_MULTI");
		case 1476007840:
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("HORSE_CLASS_MULTI");
		case 1387035765:
			return joaat("HORSE_CLASS_MULTI");
		case 506531963:
			return joaat("HORSE_CLASS_MULTI");
		case 2038357529:
			return joaat("HORSE_CLASS_MULTI");
		case 1599848740:
			return joaat("HORSE_CLASS_MULTI");
		case 1887211198:
			return joaat("HORSE_CLASS_MULTI");
		case 1645353708:
			return joaat("HORSE_CLASS_MULTI");
		case 1154747978:
			return joaat("HORSE_CLASS_MULTI");
		case 74569170:
			return joaat("HORSE_CLASS_MULTI");
		case -2004712574:
			return joaat("HORSE_CLASS_MULTI");
		case 699227695:
			return joaat("HORSE_CLASS_MULTI");
		case 1514230770:
			return joaat("HORSE_CLASS_MULTI");
		case 704938950:
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_DONKEY_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("HORSE_CLASS_WORK");
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_CLASS_FROM_MODEL - Horse model missing from list! - ", func_92(bParam0, 0));
	return 779169510;
}

char* func_215(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return "HORSE_CLASS_RIDING";
		case joaat("HORSE_CLASS_DRAFT"):
			return "HORSE_CLASS_DRAFT";
		case joaat("HORSE_CLASS_RACE"):
			return "HORSE_CLASS_RACE";
		case joaat("HORSE_CLASS_WAR"):
			return "HORSE_CLASS_WAR";
		case joaat("HORSE_CLASS_WORK"):
			return "HORSE_CLASS_WORK";
		case joaat("HORSE_CLASS_MULTI"):
			return func_285(iParam1);
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_CLASS_LABEL - Horse class missing from list. eHorseClass = ", func_286(iParam0, 0));
	return "";
}

char* func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_217(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "COAT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "COAT_TOB";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "COAT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "COAT_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "COAT_PALDAP";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "COAT_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "COAT_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "COAT_LEOPBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "COAT_BRLEOP";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "COAT_LEOP";
		case joaat("BREED_ARABIAN_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "COAT_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "COAT_STRAWR";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "COAT_IRONGREYR";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "COAT_BLONDCH";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "COAT_MEALYCH";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "COAT_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "COAT_CHOCR";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "COAT_PIETOB";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "COAT_DAPDARKGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "COAT_CHPIN";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "COAT_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "COAT_AMBCHA";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "COAT_SILVERDAPPINT";
		case joaat("BREED_MORGAN_BAY"):
			return "COAT_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "COAT_PAL";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "COAT_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "COAT_TIGSTRBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "COAT_BLUER";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "COAT_WHITER";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "COAT_REVDAPR";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "COAT_LGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "COAT_BLACKRAB";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "COAT_CH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "COAT_DAPBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "COAT_FLAXR";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "COAT_BLBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "COAT_DAPGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "COAT_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "COAT_BLACKCH";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "COAT_REVDAPBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "COAT_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_BRETON_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "COAT_MEALYDAPBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "COAT_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "COAT_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "COAT_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "COAT_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "COAT_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "COAT_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "COAT_CREM";
		case joaat("BREED_KLADRUBER_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "COAT_DAPROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "COAT_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "COAT_PIEROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "COAT_DAPBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "COAT_SPOTTEDTRICOLOR";
		case 1323533737:
			return "COAT_BLACKTOVERO";
		case -1159865523:
			return "COAT_BLUER";
		case 1854655826:
			return "COAT_BUCKSKINBRINDLE";
		case 1416158449:
			return "COAT_DAPGREY";
		case 577120648:
			return "COAT_BLACKOVERO";
		case 1147338535:
			return "COAT_BUCKSKIN";
		case -1712303883:
			return "COAT_CHTOVERO";
		case 406093506:
			return "COAT_REDDUNOVERO";
		case 956799610:
			return "COAT_BLACK";
		case 139264677:
			return "COAT_CH";
		case -11223392:
			return "COAT_GREY";
		case 1133580901:
			return "COAT_PERLINO";
		case joaat("BREED_DONKEY"):
			return "COAT_NONE";
		case joaat("BREED_MULE"):
			return "COAT_NONE";
		case joaat("BREED_MULE_PAINTED"):
			return "COAT_NONE";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "COAT_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "COAT_BLACKSNO";
		case joaat("BREED_ARABIAN_GREY"):
			return "COAT_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "COAT_LIVERCH";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "COAT_SABLECHAMP";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "COAT_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "COAT_MAHBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "COAT_RAVBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "COAT_CHEMGOLD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "COAT_SEALBR";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "COAT_BLANKET";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "COAT_BLUER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "COAT_BLACKRAB";
		case joaat("BREED_WINTER02_01"):
			return "COAT_SILVERBAY";
		case joaat("BREED_EAGLEFLIES"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_GANG_BILL"):
			return "COAT_BROWNR";
		case joaat("BREED_GANG_CHARLES"):
			return "COAT_GREYSNOWCAPSPOTTED";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "COAT_GREYROANSABINO";
		case joaat("BREED_GANG_DUTCH"):
			return "COAT_ALBINO";
		case joaat("BREED_GANG_HOSEA"):
			return "COAT_SILVER";
		case joaat("BREED_GANG_JAVIER"):
			return "COAT_GREYOVERO";
		case joaat("BREED_GANG_JOHN"):
			return "COAT_SILVERDARKBAY";
		case joaat("BREED_GANG_KAREN"):
			return "COAT_SMOKYBLACK";
		case joaat("BREED_GANG_KIERAN"):
			return "COAT_FLAXR";
		case joaat("BREED_GANG_LENNY"):
			return "COAT_LIGHTPALOMINO";
		case joaat("BREED_GANG_MICAH"):
			return "COAT_BLACK";
		case joaat("BREED_GANG_SADIE"):
			return "COAT_GOLDDAP";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "COAT_DARKBAYROAN";
		case joaat("BREED_GANG_SEAN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "COAT_BRLEOP";
		case joaat("BREED_GANG_UNCLE"):
			return "COAT_SABINO";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "COAT_FEWSPOTBUCKSKIN";
		case joaat("BREED_MANGY_BACKUP"):
			return "COAT_MANGY";
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_COAT_LABEL - HORSE_BREED name missing for coat = ", func_93(iParam0, 0));
	return "";
}

int func_218(bool bParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		bParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(bParam0, 7, iParam1);
	return iVar0;
}

void func_219(bool bParam0, var uParam1, int iParam2)
{
	float fVar0;
	char* sVar1;

	fVar0 = (func_287(*uParam1, iParam2) * 100f);
	sVar1 = func_288(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_185(bParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_195(bParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_185(bParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_185(bParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_195(bParam0, "RPG_ARROW_UP", 0);
	}
}

void func_220()
{
	bool bVar0;
	struct<4> Var1;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	struct<6> Var32;
	int iVar39;

	Var1 = { func_17(0, 1, 0, -1) };
	bVar0 = func_289(Var1, joaat("SLOTID_HORSE_SADDLE"), 0, 0);
	if (!func_236(bVar0, 0))
	{
		return;
	}
	Var10.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar0, &Var10);
	iVar39 = 0;
	while (iVar39 < Var10)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var10.f_1[iVar39], &Var32);
		switch (Var32.f_1)
		{
			case 2086291460:
				iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar9 = (iVar9 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case 1605773431:
				fVar5 = Var32.f_5;
				break;
			case 1167068375:
				fVar6 = Var32.f_5;
				break;
			case -225223329:
				fVar7 = Var32.f_5;
				break;
		}
		iVar39++;
	}
	func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar8), 0, 0, 0, 0, 0, 0, 0, 0);
	func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar9), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar5 >= 0f)
	{
		func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar5)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar5))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	if (fVar6 <= 0f)
	{
		func_185(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar6)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		if (fVar6 < 0f)
		{
			func_195(3, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_185(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar6))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		func_195(3, "RPG_ARROW_UP", 0);
	}
	if (fVar7 <= 0f)
	{
		func_185(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar7)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		if (fVar7 < 0f)
		{
			func_195(4, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_185(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar7))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		func_195(4, "RPG_ARROW_UP", 0);
	}
}

void func_221()
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;
	struct<4> Var6;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<2> Var13;
	struct<6> Var35;
	int iVar42;

	Var2 = { func_17(0, 1, 0, -1) };
	bVar1 = func_289(Var2, joaat("SLOTID_HORSE_SADDLE"), 0, 0);
	if (!func_236(bVar1, 0))
	{
		return;
	}
	Var6 = { func_290(bVar1, Var2, joaat("SLOTID_HORSE_SADDLE"), 0) };
	bVar0 = func_213(Var6, joaat("SLOTID_HORSE_STIRRUP"), 0, -1);
	if (!func_236(bVar0, 0))
	{
		return;
	}
	Var13.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar0, &Var13);
	iVar42 = 0;
	while (iVar42 < Var13)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var13.f_1[iVar42], &Var35);
		switch (Var35.f_1)
		{
			case 2086291460:
				iVar10 = (iVar10 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar11 = (iVar11 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -845587290:
				fVar12 = (fVar12 + Var35.f_5);
				break;
		}
		iVar42++;
	}
	func_185(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar10), 0, 0, 0, 0, 0, 0, 0, 0);
	func_185(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar11), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar12 <= 0f)
	{
		func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar12)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_185(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar12))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
}

int func_222(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

char* func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PA_HEALTH";
		case 1:
			return "PA_STAMINA";
		case 2:
			return "PA_SPECIALABILITY";
		case 3:
			return "PA_COURAGE";
		case 4:
			return "PA_AGILITY";
		case 5:
			return "PA_SPEED";
		case 6:
			return "PA_ACCELERATION";
		case 7:
			return "PA_BONDING";
		case 8:
			return "SA_HUNGER";
		case 9:
			return "SA_FATIGUED";
		case 10:
			return "SA_INEBRIATED";
		case 11:
			return "SA_POISONED";
		case 12:
			return "SA_BODYHEAT";
		case 13:
			return "SA_BODYWEIGHT";
		case 14:
			return "SA_OVERFED";
		case 15:
			return "SA_SICKNESS";
		case 16:
			return "SA_DIRTINESS";
		case 17:
			return "SA_DIRTINESSHAT";
		case 18:
			return "MTR_STRENGTH";
		case 19:
			return "MTR_GRIT";
		case 20:
			return "MTR_INSTINCT";
		case 21:
			return "PA_UNRULINESS";
		case 22:
			return "SA_DIRTINESSSKIN";
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

char* func_224(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DATE_FORMAT_DMY";
		case 1:
			return "DATE_FORMAT_MDY";
		case 2:
			return "DATE_FORMAT_YMD";
		case 3:
			return "MAX_DATE_FORMATS";
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

char* func_225(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_291(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_226(bool bParam0)
{
	if (func_292() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

var func_227(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1767793931);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

struct<2> func_228(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_229(int iParam0, int iParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - eMountType = ", func_263(iParam1, 0), ", bPlayerOnly = ", MISC::_0xF216F74101968DB0(bParam2));
	if (iParam1 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Mount type is invalid.  Exiting...");
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Given GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Loaded GUID = ", UNK_0xD2E4270E5D98EEE4(&Global_1904139));
	func_261(&Global_1904139);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_293(iParam0, &Global_1904139, &(Global_1904139.f_53), bParam2))
			{
				DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY - Failed. eMountType = ", func_263(iParam1, 0));
				return false;
			}
			break;
		case 2:
			if (!func_294(iParam0, &Global_1904139, &(Global_1904139.f_82), bParam2))
			{
				DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY - Failed. eMountType = ", func_263(iParam1, 0));
				return false;
			}
			break;
	}
	return true;
}

bool func_230(int iParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_IS_SLOT_DATA_VALID - slot data is invalid because the item guid is invalid");
		return false;
	}
	if (iParam0->f_10 == -1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_IS_SLOT_DATA_VALID - slot data is invalid because the mount type is invalid");
		return false;
	}
	return true;
}

int func_231(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_218(bParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

bool func_232(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_ATTRIBUTE_FROM_EFFICIENCY - No ped attribute found!");
			return false;
	}
	return true;
}

bool func_233(int iParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA");
	UNK_0x355E72323AEE83CC(26, 6);
	Var0 = { func_89() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(iParam0, &Var0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Invalid input GUID!");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Adding entry for horse.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID at index ", iVar19, " is ", UNK_0xD2E4270E5D98EEE4(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/])));
		if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]), iParam0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Horse bonding info is already in savedata at index ", iVar19);
			DEBUG::_0x1B08D1EB9D8C4931(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
			bVar18 = true;
		}
		else if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]), &Var0))
		{
			func_295(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]));
			DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Horse found an empty slot at index ", iVar19);
			DEBUG::_0x1B08D1EB9D8C4931(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
			Global_17414.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_296(Global_17414.f_55.f_61.f_41[iVar19 /*56*/], &Var4, 1, 1, -1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - The data held in the bonding data slot at index ", iVar19, " belongs to a horse which the player still owns. Relooping!");
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Found an old slot to replace.");
				DEBUG::_0xA308F935BDECCEC0(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - old GUID = ", UNK_0xD2E4270E5D98EEE4(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/])));
				func_295(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]));
				Global_17414.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Couldn't find a valid spot for the new GUID.");
		return false;
	}
	return true;
}

bool func_234(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		bVar5 = func_297(bParam0);
		if (bVar5 != 0)
		{
			iVar6 = func_298(bParam0);
			bVar0 = false;
			while (bVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(bVar5, bVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == bParam1)
					{
						return true;
					}
				}
				bVar0++;
			}
		}
	}
	return false;
}

struct<4> func_235()
{
	struct<4> Var0;

	Var0 = { func_299(0) };
	return func_290(856287005, Var0, -218846335, 0);
}

bool func_236(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

var func_237(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("GROUP_SNIPER"):
			return UNK_0x6D61F5AE2F9BCC97(-1104736125);
		case joaat("GROUP_REVOLVER"):
			return UNK_0x6D61F5AE2F9BCC97(-896458901);
		case joaat("GROUP_REPEATER"):
			return UNK_0x6D61F5AE2F9BCC97(-1666864451);
		case -1:
			return UNK_0x6D61F5AE2F9BCC97(-789220491);
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(joaat("INVALID_INVENTORY_ITEM"));
		case joaat("GROUP_PISTOL"):
			return UNK_0x6D61F5AE2F9BCC97(1248583318);
		case joaat("GROUP_SHOTGUN"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("WEAPONTYPE_SHOTGUN"));
		case joaat("GROUP_RIFLE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("WEAPONTYPE_RIFLE"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_238(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_236(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_300(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_239(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 21, "SET_LAUNCH_PARAM_ARG - Setting ", func_301(iParam0, 0));
	func_303(&(Global_1572887.f_415.f_1), func_302(iParam0), 3);
}

void func_240()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 21, "===== Launch Parameters ===== start");
	DEBUG::_0xF0783374333FD8CE(40, 21, "===== Mode - ", func_304(Global_1572887.f_415, 0));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_305(iVar0))
		{
			DEBUG::_0xF0783374333FD8CE(40, 21, "===== Arg - ", func_307(func_306(iVar0)));
		}
		iVar0++;
	}
	if (Global_1572887.f_415.f_5 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== Playlist - ", func_308(Global_1572887.f_415.f_5, 0));
	}
	if (Global_1572887.f_415.f_12 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 21, "===== NomContentID - ", Global_1572887.f_415.f_12);
	}
	if (Global_1572887.f_415.f_6 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== Region - ", func_309(Global_1572887.f_415.f_6, 0));
	}
	if (Global_1572887.f_415.f_7 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== District - ", func_310(Global_1572887.f_415.f_7, 0));
	}
	if (Global_1572887.f_415.f_8 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== State - ", func_311(Global_1572887.f_415.f_8, 0));
	}
	if (Global_1572887.f_415.f_9 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== Minigame - ", func_312(Global_1572887.f_415.f_9, 0));
	}
	if (Global_1572887.f_415.f_11 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 21, "===== Mission - ", Global_1572887.f_415.f_11);
	}
	DEBUG::_0xF0783374333FD8CE(8, 21, "===== Launch Parameters ===== end");
}

bool func_241()
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[IS_NOTIFICATION_PENDING_FOR_PROGRESS] CALL!");
	if (func_313())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 155, "[IS_NOTIFICATION_PENDING_FOR_PROGRESS] New Role.");
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[IS_NOTIFICATION_PENDING_FOR_PROGRESS] NO");
	return false;
}

int func_242(var uParam0, int iParam1, bool bParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_198.f_2[func_314(iParam1, 1)]))
	{
		DEBUG::_0x83407B92D46F25C3(8, 155, "[PAGE_ROOT][UI][SET_NEW_STAR_VISIBILITY] - FAILED! Bindings is not valid at index: ", func_314(iParam1, 1));
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_198.f_2[func_314(iParam1, 1)]) == bParam2)
	{
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 155, "[PAGE_ROOT][UI][SET_NEW_STAR_VISIBILITY] - _eRootEntryName: ", func_315(iParam1, 0), " bNewStarVisible: ", MISC::_0xF216F74101968DB0(bParam2));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_198.f_2[func_314(iParam1, 1)], bParam2);
	return 1;
}

bool func_243()
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[IS_NOTIFICATION_PENDING_FOR_HUB] CALL!");
	if (func_316())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 155, "[IS_NOTIFICATION_PENDING_FOR_HUB] HUB_OFFERS_IS_ANY_OFFER_NEW = TRUE.");
		return true;
	}
	if (SOCIALCLUBFEED::_0x068332D20CB6F897())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 155, "[IS_NOTIFICATION_PENDING_FOR_HUB] SC_FEED_HUB_HAS_NEW_DATA = TRUE.");
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[IS_NOTIFICATION_PENDING_FOR_HUB] NO.");
	return false;
}

void func_244(var uParam0)
{
	struct<40> Var0;

	Var0 = { func_317(0) };
	func_318(uParam0, &Var0, Var0.f_16);
	func_319(uParam0, MISC::_CREATE_VAR_STRING(2, &(Var0.f_17)));
	func_320(uParam0, Var0.f_33, Var0.f_34);
	func_321(uParam0, Var0.f_35, Var0.f_36);
	func_322(uParam0, Var0.f_37);
	func_323(uParam0, Var0.f_39);
	func_324(uParam0, Var0.f_38);
}

bool func_245(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][INITAILIZE_DATABINDINGS] - CALL!");
	uParam0->f_198[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", 1395437865);
	uParam0->f_198.f_2[0] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_198[0], 1145633164, func_241());
	uParam0->f_198.f_2[1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_198[0], -359624034, func_243());
	return true;
}

void func_246(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_PROGRESS][INITIALIZE_SEASON_REWARDS_TILE_BINDINGS] - CALL!");
	uParam0->f_203 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileTexture", false);
	uParam0->f_203.f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileTextureDictionary", false);
	uParam0->f_203.f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileOverlayTexture", false);
	uParam0->f_203.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileOverlayTextureDictionary", false);
	uParam0->f_203.f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_187, "progressRewardsTileOverlayVisible", false);
	uParam0->f_203.f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_187, "progressRewardsTileHasVip", false);
	uParam0->f_203.f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "toolTip", "");
	uParam0->f_203.f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "progressRewardsRankText", "");
	uParam0->f_203.f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsRankTextColor", joaat("COLOR_WHITE"));
	uParam0->f_203.f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_187, "progressRewardsTilePromptEnabled", true);
}

void func_247(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PAGE_ROOT][CLEANUP_DATABINDINGS] - CALL!");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_198[0]);
}

var func_248(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1982857120);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_249(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UPGRADE"):
			return "CI_ITEMGROUP_UPGRADE";
		case joaat("COACH"):
			return "CI_ITEMGROUP_COACH";
		case joaat("HORSE_EQUIPMENT"):
			return "CI_ITEMGROUP_HORSE_EQUIPMENT";
		case joaat("DOG"):
			return "CI_ITEMGROUP_DOG";
		case joaat("COUPON"):
			return "CI_ITEMGROUP_COUPON";
		case joaat("HORSE"):
			return "CI_ITEMGROUP_HORSE";
		case joaat("EMOTE"):
			return "CI_ITEMGROUP_EMOTE";
		case joaat("MONEY"):
			return "CI_ITEMGROUP_MONEY";
		case joaat("PROPERTY"):
			return "CI_ITEMGROUP_PROPERTY";
		case joaat("CURRENCY"):
			return "CI_ITEMGROUP_CURRENCY";
		case joaat("CLOTHING"):
			return "CI_ITEMGROUP_CLOTHING";
		case joaat("WEAPON_MOD"):
			return "CI_ITEMGROUP_WEAPON_MOD";
		case joaat("VEHICLE"):
			return "CI_ITEMGROUP_VEHICLE";
		case joaat("PROVISION"):
			return "CI_ITEMGROUP_PROVISION";
		case joaat("WEAPON"):
			return "CI_ITEMGROUP_WEAPON";
		case joaat("PRECIOUS_METAL"):
			return "CI_ITEMGROUP_PRECIOUS_METAL";
		case 0:
			return "CI_ITEMGROUP_INVALID";
		case joaat("FEE"):
			return "CI_ITEMGROUP_FEE";
		case joaat("ACTIVE_CARD"):
			return "CI_ITEMGROUP_ACTIVE_CARD";
		case joaat("AMMO"):
			return "CI_ITEMGROUP_AMMO";
		case 311306500:
			return "CI_ITEMGROUP_PURCHASABLE_AWARD";
		case joaat("WEAPON_DECORATION"):
			return "CI_ITEMGROUP_WEAPON_DECORATION";
		case joaat("KIT"):
			return "CI_ITEMGROUP_KIT";
		case joaat("ABILITY_CARD"):
			return "CI_ITEMGROUP_ABILITY_CARD";
		case 1194991665:
			return "CI_ITEMGROUP_COACHMOD";
		case joaat("GOLD"):
			return "CI_ITEMGROUP_GOLD";
		case joaat("COMPONENT"):
			return "CI_ITEMGROUP_COMPONENT";
		case 1417470098:
			return "CI_ITEMGROUP_VOUCHER";
		case joaat("MINIGAME"):
			return "CI_ITEMGROUP_MINIGAME";
		case joaat("ADVERT"):
			return "CI_ITEMGROUP_ADVERT";
		case joaat("DOCUMENT"):
			return "CI_ITEMGROUP_DOCUMENT";
		case joaat("CORE_ITEM"):
			return "CI_ITEMGROUP_CORE_ITEM";
		case joaat("CONSUMABLE"):
			return "CI_ITEMGROUP_CONSUMABLE";
		case joaat("PASSIVE_CARD"):
			return "CI_ITEMGROUP_PASSIVE_CARD";
		case joaat("CAMP"):
			return "CI_ITEMGROUP_CAMP";
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

bool func_250(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_251(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288.f_40400;
}

char* func_252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -933924539:
			return "UGC_TYPE_RACE";
		case -504335712:
			return "UGC_TYPE_MISSION";
		case 371211549:
			return "UGC_TYPE_UNDEFINED";
		case 395262693:
			return "UGC_TYPE_DEATHMATCH";
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

char* func_253(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_SUBTYPE_MISSION_STORY";
		case -1649482077:
			return "UGC_SUBTYPE_MISSION_UP_IN_SMOKE";
		case -915869673:
			return "UGC_SUBTYPE_MISSION_TERRITORY_GAIN";
		case -777132493:
			return "UGC_SUBTYPE_MISSION_PLUNDER_SUPPLY";
		case -698288936:
			return "UGC_SUBTYPE_MISSION_PROTECT";
		case -360644098:
			return "UGC_SUBTYPE_MISSION_TERRITORY_TAKEOVER";
		case -318976023:
			return "UGC_SUBTYPE_MISSION_BOUNTY";
		case -163684180:
			return "UGC_SUBTYPE_MISSION_SPOILS_OF_WAR";
		case 31269700:
			return "UGC_SUBTYPE_MISSION_LETTER";
		case 482206342:
			return "UGC_SUBTYPE_MISSION_LEGACY";
		case 534981680:
			return "UGC_SUBTYPE_MISSION_ESCAPE_FROM";
		case 603385332:
			return "UGC_SUBTYPE_MISSION_DELIVERY";
		case 604251967:
			return "UGC_SUBTYPE_MISSION_FEAR_OF_US";
		case 772881414:
			return "UGC_SUBTYPE_MISSION_MOONSHINE";
		case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
			return "UGC_SUBTYPE_MISSION_PREDATOR_HUNT";
		case 1078150940:
			return "UGC_SUBTYPE_MISSION_ADVERSARY_WIP";
		case 1520184724:
			return "UGC_SUBTYPE_MISSION_AFGHAN_POLO_OBJECT";
		case 1781111147:
			return "UGC_SUBTYPE_MISSION_FETCH";
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

int func_254(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_325(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_255(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_256(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1198211.f_1 && iParam0) != 0;
}

bool func_257(int iParam0, int iParam1)
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

char* func_258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_GLOBAL_LOADER_STATE_INVALID";
		case 1:
			return "UGC_GLOBAL_LOADER_STATE_PRE_DOWNLOAD_DATA";
			return "UGC_GLOBAL_LOADER_STATE_IDLE";
			return "UGC_GLOBAL_LOADER_STATE_DOWNLOADING_DATA";
			return "UGC_GLOBAL_LOADER_STATE_DATA_DOWNLOADED";
			return "UGC_GLOBAL_LOADER_STATE_SESSIONING_PLAYERS";
			return "UGC_GLOBAL_LOADER_STATE_PLAYERS_SESSIONED";
			return "UGC_GLOBAL_LOADER_STATE_LAUNCHING_MISSION";
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_LAUNCH";
			return "UGC_GLOBAL_LOADER_STATE_MISSION_LAUNCHED";
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_RESTART";
			return "UGC_GLOBAL_LOADER_STATE_RESTART_MISSION";
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_TEAM_SORT";
			return "UGC_GLOBAL_LOADER_STATE_SET_UP_NEXT_MISSION";
			return "UGC_GLOBAL_LOADER_STATE_KICK_PLAYER";
			return "UGC_GLOBAL_LOADER_STATE_CLEAR_CONTENT";
			return "UGC_GLOBAL_LOADER_STATE_RESTART_FREEROAM";
			return "UGC_GLOBAL_LOADER_STATE_END_INSTANCED_SESSION";
			return "UGC_GLOBAL_LOADER_STATE_CLEAR_MISSION";
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

char* func_259(int iParam0, int iParam1)
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

bool func_260()
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
	if (!func_5(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_261(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_SLOT_DATA__INIT");
	func_326(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_89() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_262(int iParam0, var uParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_TO_SLOT_DATA");
	func_327(&(Global_1904139.f_24));
	if (!func_293(iParam0, uParam1, &(Global_1904139.f_24), 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_TO_SLOT_DATA - NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY - Failed.");
		return false;
	}
	return true;
}

char* func_263(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSMT_INVALID";
		case 0:
			return "NSMT_HORSE";
		case 1:
			return "NSMT_DONKEY";
		case 2:
			return "NSMT_VEHICLE";
		case 3:
			return "NSMT_CANOE";
		case 4:
			return "NSMT_TRAIN";
		case 5:
			return "NSMT_CANNON";
		case 6:
			return "NSMT_NUM_MOUNT_TYPES";
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

bool func_264(int iParam0, var uParam1)
{
	struct<10> Var0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_TO_SLOT_DATA");
	Var0.f_9 = -1591664384;
	if (!func_294(iParam0, uParam1, &Var0, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_TO_SLOT_DATA - NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY - Failed.");
		return false;
	}
	return true;
}

bool func_265(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

char* func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pm_player_mp";
		case 1:
			return "pm_player_mp";
		case 2:
			return "pm_player_mp";
		case 3:
			return "pm_player_mp";
		case 4:
			return "pm_player_mp";
		case 5:
			return "pausemenu_player";
		default:
			break;
	}
	return "";
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

float func_268(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_100(1);
	}
	switch (iParam1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_328(0, 0), " Value: ", Global_1957252.f_1431.f_26[iParam0]);
			return Global_1957252.f_1431.f_26[iParam0];
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_328(1, 0), " Value: ", Global_1957252.f_1565.f_2.f_26[iParam0]);
			return Global_1957252.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Couldn't retrieve Cached Attribute XP data for Attribute: ", func_223(iParam0, 0));
	return -1f;
}

int func_269(float fParam0)
{
	if (fParam0 < IntToFloat(0))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(300))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(700))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(1500))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(3100))
	{
		return 4;
	}
	return 5;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

struct<4> func_271(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	else if (iParam1 >= 4)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_272(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_273()
{
	return 0;
}

bool func_274(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

int func_275()
{
	return 1;
}

bool func_276(int iParam0, int iParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 26, "__NET_STABLE_RPG__GET_VALID_RPG_SAVEDDATA_INDEX - Invalid GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17414.f_55.f_61.f_41[*iParam1 /*56*/]), iParam0))
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_277(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_278(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_329(&uParam0, bParam4, iParam5, bParam6, iParam7);
}

int func_279()
{
	return 5;
}

int func_280()
{
	return 6;
}

int func_281(bool bParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(bParam0, func_330());
	return iVar0;
}

char* func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "HORSE_HANDLING_INVALID";
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
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

int func_283(var uParam0, int iParam1)
{
	if (func_331(uParam0, -2147483648))
	{
		*iParam1 = 4;
	}
	else if (func_331(uParam0, 1073741824 /* Float: 2f */))
	{
		*iParam1 = 3;
	}
	else if (func_331(uParam0, 536870912))
	{
		*iParam1 = 2;
	}
	else if (func_331(uParam0, 268435456))
	{
		*iParam1 = 1;
	}
	else if (func_331(uParam0, 134217728))
	{
		*iParam1 = 0;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_329(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_237(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

char* func_285(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case -1159865523:
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case 1323533737:
		case 1416158449:
		case 1854655826:
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "HORSE_CLASS_MULTI";
		case -1712303883:
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case 406093506:
		case 577120648:
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case 1147338535:
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
		case -11223392:
		case 139264677:
		case 956799610:
		case 1133580901:
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "HORSE_CLASS_MULTI";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "HORSE_CLASS_MULTI";
	}
	return "HORSE_CLASS_MULTI";
}

char* func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_WAR"):
			return "HORSE_CLASS_WAR";
		case joaat("HORSE_CLASS_MULTI"):
			return "HORSE_CLASS_MULTI";
		case joaat("HORSE_CLASS_WORK"):
			return "HORSE_CLASS_WORK";
		case joaat("HORSE_CLASS_RACE"):
			return "HORSE_CLASS_RACE";
		case 779169510:
			return "HORSE_CLASS_INVALID";
		case joaat("HORSE_CLASS_DRAFT"):
			return "HORSE_CLASS_DRAFT";
		case joaat("HORSE_CLASS_RIDING"):
			return "HORSE_CLASS_RIDING";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
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

float func_287(struct<4> Param0, int iParam4)
{
	float fVar0;

	fVar0 = 0f;
	if (iParam4 == 0 && func_140(Param0, 0) > 50)
	{
		fVar0 = (fVar0 + 0.25f);
	}
	fVar0 = (fVar0 - func_332(iParam4));
	return fVar0;
}

char* func_288(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_289(struct<4> Param0, bool bParam4, char* sParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_333(Param0, bParam4, &Var0, sParam5, bParam6))
	{
		DEBUG::_0xA308F935BDECCEC0(43688, 157, "PLAYER_INVENTORY_GET_ITEM_IN_SLOT - Found ", func_237(Var0.f_4, 0), " on item ", UNK_0xD2E4270E5D98EEE4(&Param0), " in slot ", func_227(bParam4, 0), ", index ", sParam5);
		return Var0.f_4;
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "PLAYER_INVENTORY_GET_ITEM_IN_SLOT - Found nothing on item ", UNK_0xD2E4270E5D98EEE4(&Param0), " in slot ", func_227(bParam4, 0), ", index ", sParam5);
	return 0;
}

struct<4> func_290(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_236(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_237(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_226(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

char* func_291(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_292()
{
	return Global_1572887.f_13;
}

bool func_293(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY");
	if (!func_163(iParam0, iParam2, bParam3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY - NET_STABLE_GET_HORSE_DATA - Failed.");
		return false;
	}
	if (!func_334(uParam1, iParam2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY - NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA - Failed.");
		return false;
	}
	return true;
}

bool func_294(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY");
	if (!func_335(iParam0, iParam2, bParam3))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY - NET_STABLE_GET_VEHICLE_DATA - Failed.");
		return false;
	}
	if (!func_336(uParam1, iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY - NET_STABLE__COPY_VEHICLE_DATA_TO_SLOT_DATA - Failed.");
		return false;
	}
	return true;
}

void func_295(var uParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 25, "NET_STABLE_RPG__SAVED_DATA_INIT");
	*uParam0 = { func_89() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0 /*5*/] = 100;
		uParam0->f_29[iVar0 /*5*/].f_1 = 0f;
		uParam0->f_29[iVar0 /*5*/].f_2 = 0f;
		uParam0->f_29[iVar0 /*5*/].f_3 = 0;
		uParam0->f_29[iVar0 /*5*/].f_4 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_40[iVar0 /*4*/] = 100;
				break;
			case 1:
				uParam0->f_40[iVar0 /*4*/] = 0;
				break;
			case 2:
				uParam0->f_40[iVar0 /*4*/] = 50;
				break;
		}
		uParam0->f_40[iVar0 /*4*/].f_1 = 0f;
		uParam0->f_40[iVar0 /*4*/].f_2 = 0f;
		uParam0->f_40[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	uParam0->f_53 = { 0f, 0f, 0f };
}

bool func_296(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_337(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_297(bool bParam0)
{
	struct<2> Var0;

	if (!func_236(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_298(bool bParam0)
{
	bool bVar0;

	if (!func_236(bParam0, 0))
	{
		return 0;
	}
	bVar0 = func_297(bParam0);
	if (bVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(bVar0);
}

struct<4> func_299(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_226(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_290(joaat("CHARACTER"), func_89(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_290(joaat("CHARACTER"), func_89(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_290(joaat("CHARACTER"), func_89(), -1591664384, bParam0);
}

int func_300(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
		case 239629152:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			}
			break;
	}
	return 0;
}

char* func_301(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("TRADE_7"):
			return "LP_ARG_VALUE_TRADE_7";
		case joaat("FOLLOW_INVITE"):
			return "LP_ARG_VALUE_INT_FOLLOW_INVITE";
		case joaat("COUPON"):
			return "LP_ARG_VALUE_OPEN_COUPON_MENU";
		case joaat("RANDOM_POKER"):
			return "LP_ARG_VALUE_GO_TO_RAND_PKR_TBL";
		case joaat("LAST_MISSION"):
			return "LP_ARG_VALUE_GO_TO_LAST_MISSION";
		case -1480790826:
			return "LP_ARG_VALUE_INT_ASYNC_MM";
		case -1369260209:
			return "LP_ARG_VALUE_TRADE_9";
		case joaat("LAST_REGION"):
			return "LP_ARG_VALUE_GO_TO_LAST_REGION";
		case joaat("CCHAR"):
			return "LP_ARG_VALUE_GO_TO_CHAR_CREATE";
		case joaat("OPEN_POSSE"):
			return "LP_ARG_VALUE_START_IN_OPEN_POSSE";
		case joaat("NEW_GAME"):
			return "LP_ARG_VALUE_NEW_GAME";
		case joaat("LAST_LOCATION"):
			return "LP_ARG_VALUE_GO_TO_LAST_LOCATION";
		case joaat("RANDOM_REGION"):
			return "LP_ARG_VALUE_GO_TO_RAND_REGION";
		case 0:
			return "LP_ARG_VALUE_NULL";
		case joaat("TRADE_1"):
			return "LP_ARG_VALUE_TRADE_1";
		case 413241879:
			return "LP_ARG_VALUE_OPEN_OUTLAW_PASS_MENU";
		case joaat("TRADE_2"):
			return "LP_ARG_VALUE_TRADE_2";
		case joaat("TRADE_6"):
			return "LP_ARG_VALUE_TRADE_6";
		case joaat("BG_CUSTOM_3"):
			return "LP_ARG_VALUE_INT_BG_CUSTOM_3";
		case joaat("TRADE_3"):
			return "LP_ARG_VALUE_TRADE_3";
		case 928971890:
			return "LP_ARG_VALUE_OPEN_MISSION_LETTER";
		case joaat("BG_CUSTOM_2"):
			return "LP_ARG_VALUE_INT_BG_CUSTOM_2";
		case joaat("TRADE_4"):
			return "LP_ARG_VALUE_TRADE_4";
		case joaat("INTRO_NOT_DONE"):
			return "LP_ARG_VALUE_INTRO_NOT_DONE";
		case 1449824096:
			return "LP_ARG_VALUE_TRADE_8";
		case joaat("BG_CUSTOM_1"):
			return "LP_ARG_VALUE_INT_BG_CUSTOM_1";
		case joaat("SHIFT_F"):
			return "LP_ARG_VALUE_INT_SHIFT_F";
		case joaat("TRADE_5"):
			return "LP_ARG_VALUE_TRADE_5";
		case 1735278055:
			return "LP_ARG_VALUE_GO_TO_MY_MOON";
		case joaat("NEAR_POSSE"):
			return "LP_ARG_VALUE_GO_TO_NEAREST_POSSE";
		case joaat("HUB"):
			return "LP_ARG_VALUE_OPEN_HUB_MENU";
		case joaat("CAMP"):
			return "LP_ARG_VALUE_GO_TO_MY_CAMP";
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

int func_302(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case joaat("NEW_GAME"):
			iVar0 = 1;
			break;
		case joaat("INTRO_NOT_DONE"):
			iVar0 = 2;
			break;
		case joaat("FOLLOW_INVITE"):
			iVar0 = 3;
			break;
		case -1480790826:
			iVar0 = 4;
			break;
		case joaat("SHIFT_F"):
			iVar0 = 5;
			break;
		case joaat("BG_CUSTOM_1"):
			iVar0 = 6;
			break;
		case joaat("BG_CUSTOM_2"):
			iVar0 = 7;
			break;
		case joaat("BG_CUSTOM_3"):
			iVar0 = 8;
			break;
		case joaat("OPEN_POSSE"):
			iVar0 = 9;
			break;
		case joaat("NEAR_POSSE"):
			iVar0 = 10;
			break;
		case joaat("RANDOM_REGION"):
			iVar0 = 11;
			break;
		case joaat("LAST_REGION"):
			iVar0 = 12;
			break;
		case joaat("LAST_LOCATION"):
			iVar0 = 13;
			break;
		case joaat("LAST_MISSION"):
			iVar0 = 14;
			break;
		case joaat("RANDOM_POKER"):
			iVar0 = 15;
			break;
		case joaat("CCHAR"):
			iVar0 = 16;
			break;
		case joaat("CAMP"):
			iVar0 = 17;
			break;
		case 1735278055:
			iVar0 = 18;
			break;
		case joaat("TRADE_1"):
			iVar0 = 19;
			break;
		case joaat("TRADE_2"):
			iVar0 = 20;
			break;
		case joaat("TRADE_3"):
			iVar0 = 21;
			break;
		case joaat("TRADE_4"):
			iVar0 = 22;
			break;
		case joaat("TRADE_5"):
			iVar0 = 23;
			break;
		case joaat("TRADE_6"):
			iVar0 = 24;
			break;
		case joaat("TRADE_7"):
			iVar0 = 25;
			break;
		case 1449824096:
			iVar0 = 26;
			break;
		case -1369260209:
			iVar0 = 27;
			break;
		case joaat("COUPON"):
			iVar0 = 28;
			break;
		case joaat("HUB"):
			iVar0 = 29;
			break;
		case 413241879:
			iVar0 = 30;
			break;
		case 928971890:
			iVar0 = 31;
			break;
	}
	return iVar0;
}

bool func_303(var uParam0, int iParam1, int iParam2)
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

char* func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MISSION"):
			return "LP_MODE_VALUE_MISSION";
		case joaat("GOLDSTORE"):
			return "LP_MODE_VALUE_GOLDSTORE";
		case joaat("SERIES"):
			return "LP_MODE_VALUE_SERIES";
		case joaat("FREEROAM"):
			return "LP_MODE_VALUE_FREEROAM";
		case joaat("CLIP"):
			return "LP_MODE_VALUE_CLIP";
		case 0:
			return "LP_MODE_VALUE_NULL";
		case joaat("MISSION_CREATOR"):
			return "LP_MODE_VALUE_MISSION_CREATOR";
		case joaat("SINGLE_PLAYER"):
			return "LP_MODE_VALUE_SINGLE_PLAYER";
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

bool func_305(int iParam0)
{
	return func_265(&(Global_1572887.f_415.f_1), iParam0, 3);
}

int func_306(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = joaat("NEW_GAME");
			break;
		case 2:
			iVar0 = joaat("INTRO_NOT_DONE");
			break;
		case 3:
			iVar0 = joaat("FOLLOW_INVITE");
			break;
		case 4:
			iVar0 = -1480790826;
			break;
		case 5:
			iVar0 = joaat("SHIFT_F");
			break;
		case 6:
			iVar0 = joaat("BG_CUSTOM_1");
			break;
		case 7:
			iVar0 = joaat("BG_CUSTOM_2");
			break;
		case 8:
			iVar0 = joaat("BG_CUSTOM_3");
			break;
		case 9:
			iVar0 = joaat("OPEN_POSSE");
			break;
		case 10:
			iVar0 = joaat("NEAR_POSSE");
			break;
		case 11:
			iVar0 = joaat("RANDOM_REGION");
			break;
		case 12:
			iVar0 = joaat("LAST_REGION");
			break;
		case 13:
			iVar0 = joaat("LAST_LOCATION");
			break;
		case 14:
			iVar0 = joaat("LAST_MISSION");
			break;
		case 15:
			iVar0 = joaat("RANDOM_POKER");
			break;
		case 16:
			iVar0 = joaat("CCHAR");
			break;
		case 17:
			iVar0 = joaat("CAMP");
			break;
		case 18:
			iVar0 = 1735278055;
			break;
		case 19:
			iVar0 = joaat("TRADE_1");
			break;
		case 20:
			iVar0 = joaat("TRADE_2");
			break;
		case 21:
			iVar0 = joaat("TRADE_3");
			break;
		case 22:
			iVar0 = joaat("TRADE_4");
			break;
		case 23:
			iVar0 = joaat("TRADE_5");
			break;
		case 24:
			iVar0 = joaat("TRADE_6");
			break;
		case 25:
			iVar0 = joaat("TRADE_7");
			break;
		case 26:
			iVar0 = 1449824096;
			break;
		case 27:
			iVar0 = -1369260209;
			break;
		case 28:
			iVar0 = joaat("COUPON");
			break;
		case 29:
			iVar0 = joaat("HUB");
			break;
		case 30:
			iVar0 = 413241879;
			break;
		case 31:
			iVar0 = 928971890;
			break;
	}
	return iVar0;
}

char* func_307(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case joaat("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case joaat("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case -1480790826:
			sVar0 = "async_mm";
			break;
		case joaat("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case joaat("BG_CUSTOM_1"):
			sVar0 = "bg_custom_1";
			break;
		case joaat("BG_CUSTOM_2"):
			sVar0 = "bg_custom_2";
			break;
		case joaat("BG_CUSTOM_3"):
			sVar0 = "bg_custom_3";
			break;
		case joaat("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case joaat("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case joaat("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case joaat("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case joaat("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case joaat("LAST_MISSION"):
			sVar0 = "last_mission";
			break;
		case joaat("RANDOM_POKER"):
			sVar0 = "random_poker";
			break;
		case joaat("CCHAR"):
			sVar0 = "cchar";
			break;
		case joaat("CAMP"):
			sVar0 = "camp";
			break;
		case 1735278055:
			sVar0 = "my_moon";
			break;
		case joaat("TRADE_1"):
			sVar0 = "trade_1";
			break;
		case joaat("TRADE_2"):
			sVar0 = "trade_2";
			break;
		case joaat("TRADE_3"):
			sVar0 = "trade_3";
			break;
		case joaat("TRADE_4"):
			sVar0 = "trade_4";
			break;
		case joaat("TRADE_5"):
			sVar0 = "trade_5";
			break;
		case joaat("TRADE_6"):
			sVar0 = "trade_6";
			break;
		case joaat("TRADE_7"):
			sVar0 = "trade_7";
			break;
		case 1449824096:
			sVar0 = "trade_8";
			break;
		case -1369260209:
			sVar0 = "trade_9";
			break;
		case joaat("COUPON"):
			sVar0 = "coupon";
			break;
		case joaat("HUB"):
			sVar0 = "hub";
			break;
		case 413241879:
			sVar0 = "outlaw_pass";
			break;
		case 928971890:
			sVar0 = "mission_letter";
			break;
	}
	return sVar0;
}

char* func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_PLAYLIST_INVALID";
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
		case 2:
			return "NET_PLAYLIST_ADVERSARY_SMALL";
		case 3:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
		case 4:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
		case 6:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
		case 7:
			return "NET_PLAYLIST_ELIMINATION_SMALL";
		case 8:
			return "NET_PLAYLIST_ELIMINATION_MEDIUM";
		case 9:
			return "NET_PLAYLIST_ELIMINATION_LARGE";
		case 10:
			return "NET_PLAYLIST_NOMINATED_SERIES_START";
		case 11:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
		case 12:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
		case 13:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
		case 14:
			return "NET_PLAYLIST_PRIVATE_SERIES";
		case 15:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
		case 16:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
		case 17:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
		case 18:
			return "NET_PLAYLIST_SHOOTOUT";
		case 19:
			return "NET_PLAYLIST_CAPTURE";
		case 20:
			return "NET_PLAYLIST_HARDCORE_SERIES";
		case 21:
			return "NET_PLAYLIST_MAX";
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

char* func_309(int iParam0, int iParam1)
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

char* func_310(int iParam0, int iParam1)
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

char* func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "RDR_STATE_INVALID";
		case 0:
			return "RDR_STATE_AMBARINO";
		case 1:
			return "RDR_STATE_LEMOYNE";
		case 2:
			return "RDR_STATE_NEWAUSTIN";
		case 3:
			return "RDR_STATE_NEWHANOVER";
		case 4:
			return "RDR_STATE_WESTELIZABETH";
		case 5:
			return "RDR_STATE_GUARMA";
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

char* func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "MINIGAME_INVALID";
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_MP_POKER_SWANSONS_STATION";
		case 3:
			return "MINIGAME_MP_POKER_TUMBLEWEED";
		case 4:
			return "MINIGAME_MP_POKER_VALENTINE";
		case 5:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 6:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 7:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 8:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 9:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 10:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 11:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 12:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 13:
			return "MINIGAME_SP_LAST";
		case 14:
			return "MINIGAME_SP_MAX";
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

bool func_313()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = iVar1;
		if (!func_338(iVar0))
		{
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(40, 162, "[ROLE_PROGRESSION][IS_ANY_ROLE_NEW] New role found, eLoopRole: ", func_339(iVar0, 0));
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -359624034:
			return 1;
		case 1145633164:
			return 0;
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

char* func_315(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -359624034:
			return "PAUSE_MENU_ROOT_NEW_STAR_BINDING_HUB";
		case 1145633164:
			return "PAUSE_MENU_ROOT_NEW_STAR_BINDING_PROGRESS";
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

bool func_316()
{
	int iVar0;
	char* sVar1;
	struct<10> Var2;
	bool bVar16;

	DEBUG::_0xA308F935BDECCEC0(8, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] Begin new offer search.");
	sVar1 = INVENTORY::_0x97A3646645727F42(&iVar0);
	DEBUG::_0xA308F935BDECCEC0(136, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] iCollectionSize: ", iVar0, " iCollectionId: ", sVar1);
	Var2.f_9 = -1591664384;
	bVar16 = false;
	while (bVar16 < iVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW]");
		if (!INVENTORY::_0x82FA24C3D3FCD9B7(sVar1, bVar16, &Var2))
		{
			DEBUG::_0x83407B92D46F25C3(8, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] ERROR! Failed to get item at index: ", bVar16);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(648, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] iItemIndex: ", bVar16, " eInventoryItem: ", func_237(Var2.f_4, 0));
			if (!func_277(&Var2))
			{
				DEBUG::_0x83407B92D46F25C3(8, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] ERROR! sItemStruct.guid is not valid.");
			}
			else if (!func_340(Var2.f_9))
			{
				DEBUG::_0xA308F935BDECCEC0(168, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] Ignoring ", func_237(Var2.f_4, 0), " as it is not in a valid slot");
			}
			else if (!func_341(&Var2))
			{
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(40, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] - TRUE - New offer found, name: ", func_237(Var2.f_4, 0));
				INVENTORY::_0x42A2F33A1942E865(sVar1);
				return true;
			}
		}
		bVar16++;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[HUB_OFFERS][IS_ANY_OFFER_NEW] - FALSE - No new offers found.");
	INVENTORY::_0x42A2F33A1942E865(sVar1);
	return false;
}

struct<40> func_317(bool bParam0)
{
	struct<40> Var0;
	int iVar40;
	bool bVar41;
	struct<2> Var42;
	struct<2> Var44;

	Var0.f_16 = joaat("COLOR_WHITE");
	Var0.f_38 = 1;
	iVar40 = func_342(0);
	bVar41 = func_343();
	switch (func_344())
	{
		case 0:
			StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_345(-600593841), iVar40), 128);
			if (bVar41)
			{
				Var0.f_16 = joaat("COLOR_VIP");
			}
			else
			{
				Var0.f_16 = joaat("COLOR_WHITE");
			}
			if (bParam0)
			{
				Var42 = { func_346(1800005748) };
			}
			else
			{
				Var42 = { func_346(905305452) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_346(1715681724) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			if (bVar41)
			{
				StringCopy(&(Var0.f_17), func_345(-2094745301), 128);
			}
			else
			{
				StringCopy(&(Var0.f_17), func_345(242987266), 128);
			}
			Var0.f_37 = bVar41;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
		case 2:
			StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_345(-600593841), iVar40), 128);
			if (bVar41)
			{
				Var0.f_16 = joaat("COLOR_VIP");
			}
			else
			{
				Var0.f_16 = joaat("COLOR_WHITE");
			}
			if (bParam0)
			{
				Var42 = { func_346(-57825929) };
			}
			else
			{
				Var42 = { func_346(1423614133) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_346(1715681724) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_345(-107182257), 128);
			Var0.f_37 = bVar41;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
		case 3:
			StringCopy(&Var0, func_347(567391299), 128);
			Var0.f_16 = joaat("COLOR_WHITE");
			if (bParam0)
			{
				Var42 = { func_346(-1970558384) };
			}
			else
			{
				Var42 = { func_346(1219991266) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_346(1715681724) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_345(-952890825), 128);
			Var0.f_37 = 0;
			Var0.f_38 = 0;
			Var0.f_39 = 0;
			break;
		case 1:
			StringCopy(&Var0, func_347(-563911624), 128);
			Var0.f_16 = joaat("COLOR_RED");
			if (bParam0)
			{
				Var42 = { func_346(-850412361) };
			}
			else
			{
				Var42 = { func_346(2062860436) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_346(1715681724) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_345(1010851584), 128);
			Var0.f_37 = 0;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
	}
	return Var0;
}

void func_318(var uParam0, char* sParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_RANK] _text: ", sParam1);
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_RANK] _textColor: ", func_348(bParam2, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_203.f_7, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_8, bParam2);
}

void func_319(var uParam0, char* sParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_TOOLTIP_TEXT] - _sText: ", sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_203.f_6, sParam1);
}

void func_320(var uParam0, bool bParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(680, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_BACKGROUND_IMAGE] _iTexture: ", UNK_0x4379B6FA65D55295(bParam1), " _iTextureDictionary: ", UNK_0x4379B6FA65D55295(bParam2));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_1, bParam2);
}

void func_321(var uParam0, bool bParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(680, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_VIP_OVERLAY_IMAGE] _iTexture: ", UNK_0x4379B6FA65D55295(bParam1), " _iTextureDictionary: ", UNK_0x4379B6FA65D55295(bParam2));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_2, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_3, bParam2);
}

void func_322(var uParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_VIP_OVERLAY_VISIBLE] _bVisible: ", bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_203.f_4, bParam1);
}

void func_323(var uParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_HAS_VIP] _bHasVip: ", MISC::_0xF216F74101968DB0(bParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_203.f_5, bParam1);
}

void func_324(var uParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 155, "[PROGRESS][SET_SEASON_REWARDS_TILE_ENABLED] _bEnabled: ", bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_203.f_9, bParam1);
}

bool func_325(int iParam0)
{
	return (((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414) || iParam0 == 31269700);
}

void func_326(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_327(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_INVENTORY_HORSE_DATA__INIT");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

char* func_328(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RPG_GLOBAL_SYSTEM_POOL_DEFAULT";
		case 1:
			return "RPG_GLOBAL_SYSTEM_POOL_OVERRIDE";
		case 2:
			return "RPG_GLOBAL_SYSTEM_POOL_CURRENT";
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

bool func_329(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_226(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_227(bParam1, 0));
		return false;
	}
	if (!func_337(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_227(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_237(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_227(bParam1, 0));
	return true;
}

int func_330()
{
	return 4;
}

bool func_331(var uParam0, int iParam1)
{
	return func_164(&(uParam0->f_20), iParam1);
}

float func_332(int iParam0)
{
	var uVar0;

	uVar0 = Global_1270813.f_1423.f_3[iParam0];
	return uVar0;
}

bool func_333(var uParam0, bool bParam1, var uParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_226(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43176, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_IN_SLOT - Parent item with GUID ", UNK_0xD2E4270E5D98EEE4(&uParam0), " does not have ", iParam6 + 1, " child items in slot ", func_227(bParam4, 0), ", aborting");
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, iParam5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(43656, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_IN_SLOT - Could not retrieve item ", iParam6, " in slot ", func_227(bParam4, 0), "on parent item with GUID ", UNK_0xD2E4270E5D98EEE4(&uParam0), ", aborting");
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(166568, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_IN_SLOT - ", func_237(iParam5->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam5), ") is item ", iParam6, " in slot ", func_227(bParam4, 0));
	return true;
}

bool func_334(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA");
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		DEBUG::_0x83407B92D46F25C3(40, 40, "NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA - Invalid model pulled from cashinventory data: ", func_92(uParam0->f_11, 0));
		return false;
	}
	uParam0->f_22 = func_19(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(40, 40, "NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA - Invalid breed pulled from model: ", func_92(uParam0->f_11, 0));
		return false;
	}
	uParam0->f_12 = { iParam1->f_16 };
	uParam0->f_23 = iParam1->f_25;
	uParam0->f_20 = iParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_335(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_VEHICLE_DATA - bPlayerOnly = ", MISC::_0xF216F74101968DB0(bParam2));
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 39, "NET_STABLE_GET_VEHICLE_DATA - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	iVar0 = func_226(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam0, iParam1, 24, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 39, "NET_STABLE_GET_VEHICLE_DATA - Failed to read data for item ", UNK_0xD2E4270E5D98EEE4(iParam0), "!");
		return false;
	}
	return true;
}

bool func_336(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE__COPY_VEHICLE_DATA_TO_SLOT_DATA");
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		DEBUG::_0x83407B92D46F25C3(40, 39, "NET_STABLE__COPY_VEHICLE_DATA_TO_SLOT_DATA - Invalid model pulled from cashinventory data: ", func_92(uParam0->f_11, 0));
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { iParam1->f_15 };
	uParam0->f_20 = iParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

bool func_337(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_226(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_237(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_227(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_338(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_349(iParam0);
	iVar1 = func_350(iVar0);
	if (!UNLOCK::_UNLOCK_IS_NEW(iVar1))
	{
		return false;
	}
	if (func_351(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[ROLE_PROGRESSION][IS_ROLE_NEW] _eRole: ", func_339(iParam0, 0), " locked");
		return false;
	}
	return true;
}

char* func_339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "ROLE_PROGRESSION_ROLE_INVALID";
		case 0:
			return "ROLE_PROGRESSION_ROLE_NATURALIST";
		case 1:
			return "ROLE_PROGRESSION_ROLE_MOONSHINER";
		case 2:
			return "ROLE_PROGRESSION_ROLE_TRADER";
		case 3:
			return "ROLE_PROGRESSION_ROLE_BOUNTY_HUNTER";
		case 4:
			return "ROLE_PROGRESSION_ROLE_COLLECTOR";
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

bool func_340(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return false;
	}
	return true;
}

bool func_341(var uParam0)
{
	struct<10> Var0;

	if (!func_277(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[HUB_OFFERS][IS_OFFER_NEW] - ERROR! _sInventoryItemGUID is not valid.");
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_296(*uParam0, &Var0, 1, 0, -1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[HUB_OFFERS][IS_OFFER_NEW] - ERROR! PLAYER_INVENTORY_GET_ITEM_DATA failed.");
		return false;
	}
	if (!func_236(Var0.f_4, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[HUB_OFFERS][IS_OFFER_NEW] - ERROR! IS_INVENTORY_ITEM_VALID = FALSE.");
		return false;
	}
	return func_352(Var0.f_4);
}

int func_342(int iParam0)
{
	return func_354(func_353(iParam0));
}

int func_343()
{
	bool bVar0;

	bVar0 = func_355();
	if (!func_356(bVar0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 229, "[VIP_PASS_IS_OWNED] - ERROR! eVipPassAward: ", func_357(bVar0, 0), " Not a valid award!");
		return 0;
	}
	if (!NETWORK::_0xFBE782B3165AC8EC(bVar0))
	{
		return 0;
	}
	return 1;
}

int func_344()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_358(1656173034)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_358(1656173034)))
	{
		return 0;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_358(-537144215)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_358(-537144215)))
	{
		return 2;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_358(1629055295)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_358(1629055295)))
	{
		return 1;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_358(965428371)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_358(965428371)))
	{
		return 3;
	}
	DEBUG::_0x83407B92D46F25C3(8, 229, "[GET_SEASON_STATE] - ERROR! Failed to get state.");
	return 1;
}

char* func_345(int iParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_359();
	Var0.f_2 = 9;
	Var0.f_3 = func_360(0);
	Var0.f_4 = iParam0;
	if (!DATAFILE::_0x951327435DC5164B(&Var5, &Var0))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 229, "[GET_LABEL][", func_361(iParam0, 0), "] - WARNING! PARSEDDATA_RQ_FILLOUT_STRING_127 = FALSE _eLabel: ", func_361(iParam0, 0), " INT: ", iParam0);
		return func_362(iParam0);
	}
	return func_363(Var5);
}

struct<2> func_346(int iParam0)
{
	struct<2> Var0;
	struct<5> Var2;

	Var2 = func_359();
	Var2.f_3 = func_360(0);
	Var2.f_4 = iParam0;
	Var2.f_2 = 11;
	if (!DATAFILE::_DATAFILE_GET_HASH(&Var0, &Var2))
	{
		DEBUG::_0x4DC69742196F818A(680, 229, "[GET_IMAGE][", func_364(iParam0, 0), "] - ERROR! Image Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return func_365(iParam0);
	}
	Var2.f_2 = 13;
	if (!DATAFILE::_DATAFILE_GET_HASH(&(Var0.f_1), &Var2))
	{
		DEBUG::_0x4DC69742196F818A(680, 229, "[GET_IMAGE][", func_364(iParam0, 0), "] - ERROR! Image_Dict Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return Var0;
	}
	return Var0;
}

char* func_347(int iParam0)
{
	return MISC::_CREATE_VAR_STRING(2, func_345(iParam0));
}

char* func_348(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("WANTED_BG_ACTIVE"):
			return "WANTED_BG_ACTIVE";
		case joaat("COLOR_ORANGEDARK"):
			return "COLOR_ORANGEDARK";
		case joaat("COLOR_NEUTRAL"):
			return "COLOR_NEUTRAL";
		case joaat("COLOR_WANTED_LOCKDOWN"):
			return "COLOR_WANTED_LOCKDOWN";
		case joaat("COLOR_GREY"):
			return "COLOR_GREY";
		case joaat("ABILITY_CARD_COMBAT_TIER_4"):
			return "ABILITY_CARD_COMBAT_TIER_4";
		case joaat("COLOR_YELLOWDARK"):
			return "COLOR_YELLOWDARK";
		case joaat("COLOR_OFF_BLACK"):
			return "COLOR_OFF_BLACK";
		case joaat("COLOR_BLACK"):
			return "COLOR_BLACK";
		case joaat("COLOR_NET_PLAYER20"):
			return "COLOR_NET_PLAYER20";
		case joaat("COLOR_YELLOW"):
			return "COLOR_YELLOW";
		case joaat("ABILITY_CARD_COMBAT_TIER_3"):
			return "ABILITY_CARD_COMBAT_TIER_3";
		case joaat("COLOR_NET_PLAYER24"):
			return "COLOR_NET_PLAYER24";
		case joaat("COLOR_MP_OBJECTIVE_FRIENDLY"):
			return "COLOR_MP_OBJECTIVE_FRIENDLY";
		case joaat("COLOR_HONOR_10"):
			return "COLOR_HONOR_10";
		case joaat("COLOR_NET_PLAYER4"):
			return "COLOR_NET_PLAYER4";
		case joaat("COLOR_NET_PLAYER21"):
			return "COLOR_NET_PLAYER21";
		case joaat("COLOR_MP_OBJECTIVE_NEUTRAL"):
			return "COLOR_MP_OBJECTIVE_NEUTRAL";
		case joaat("COLOR_COPPER"):
			return "COLOR_COPPER";
		case joaat("COLOR_NET_PLAYER25"):
			return "COLOR_NET_PLAYER25";
		case joaat("ABILITY_CARD_DEFENSE_TIER_4"):
			return "ABILITY_CARD_DEFENSE_TIER_4";
		case joaat("COLOR_BLUELIGHT"):
			return "COLOR_BLUELIGHT";
		case joaat("COLOR_HONOR_14"):
			return "COLOR_HONOR_14";
		case joaat("COLOR_REDLIGHT"):
			return "COLOR_REDLIGHT";
		case joaat("COLOR_GREENDARK"):
			return "COLOR_GREENDARK";
		case joaat("ABILITY_CARD_DEFENSE_TIER_3"):
			return "ABILITY_CARD_DEFENSE_TIER_3";
		case joaat("COLOR_NET_PLAYER2"):
			return "COLOR_NET_PLAYER2";
		case joaat("COLOR_POSSE_ALLY"):
			return "COLOR_POSSE_ALLY";
		case joaat("COLOR_HONOR_15"):
			return "COLOR_HONOR_15";
		case joaat("COLOR_BRONZE"):
			return "COLOR_BRONZE";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_1"):
			return "ABILITY_CARD_DEAD_EYE_TIER_1";
		case joaat("ABILITY_CARD_TIER_3"):
			return "ABILITY_CARD_TIER_3";
		case joaat("COLOR_RPG_SPECIAL_1"):
			return "COLOR_RPG_SPECIAL_1";
		case joaat("COLOR_HONOR_12"):
			return "COLOR_HONOR_12";
		case joaat("COLOR_BLUEDARK"):
			return "COLOR_BLUEDARK";
		case joaat("COLOR_VIP"):
			return "COLOR_VIP";
		case joaat("COLOR_NET_PLAYER5"):
			return "COLOR_NET_PLAYER5";
		case joaat("COLOR_NET_PLAYER19"):
			return "COLOR_NET_PLAYER19";
		case joaat("COLOR_GOLD"):
			return "COLOR_GOLD";
		case joaat("COLOR_ATTENTION"):
			return "COLOR_ATTENTION";
		case joaat("COLOR_MP_SERIES"):
			return "COLOR_MP_SERIES";
		case joaat("COLOR_NET_PLAYER28"):
			return "COLOR_NET_PLAYER28";
		case joaat("COLOR_WINNING_PLAYER"):
			return "COLOR_WINNING_PLAYER";
		case joaat("COLOR_HONOR_13"):
			return "COLOR_HONOR_13";
		case joaat("COLOR_NET_PLAYER18"):
			return "COLOR_NET_PLAYER18";
		case joaat("COLOR_NOTORIETY_HIGH"):
			return "COLOR_NOTORIETY_HIGH";
		case joaat("COLOR_NET_PLAYER30"):
			return "COLOR_NET_PLAYER30";
		case joaat("COLOR_CATALOG_BLACK_INK"):
			return "COLOR_CATALOG_BLACK_INK";
		case joaat("WANTED_BG_NON_ACTIVE"):
			return "WANTED_BG_NON_ACTIVE";
		case joaat("COLOR_NET_PLAYER8"):
			return "COLOR_NET_PLAYER8";
		case joaat("COLOR_FREEMODE_EVENT"):
			return "COLOR_FREEMODE_EVENT";
		case joaat("COLOR_NET_PLAYER3"):
			return "COLOR_NET_PLAYER3";
		case joaat("COLOR_NET_PLAYER17"):
			return "COLOR_NET_PLAYER17";
		case joaat("COLOR_RPG_SPECIAL_3"):
			return "COLOR_RPG_SPECIAL_3";
		case joaat("COLOR_PLATINUM"):
			return "COLOR_PLATINUM";
		case joaat("ABILITY_CARD_DEFENSE_TIER_1"):
			return "ABILITY_CARD_DEFENSE_TIER_1";
		case joaat("COLOR_GREYLIGHT"):
			return "COLOR_GREYLIGHT";
		case joaat("COLOR_NET_PLAYER32"):
			return "COLOR_NET_PLAYER32";
		case joaat("COLOR_NET_PLAYER22"):
			return "COLOR_NET_PLAYER22";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_3"):
			return "ABILITY_CARD_DEAD_EYE_TIER_3";
		case joaat("ABILITY_CARD_RECOVERY_TIER_1"):
			return "ABILITY_CARD_RECOVERY_TIER_1";
		case joaat("COLOR_GREENLIGHT"):
			return "COLOR_GREENLIGHT";
		case joaat("COLOR_NET_PLAYER16"):
			return "COLOR_NET_PLAYER16";
		case joaat("COLOR_IRON"):
			return "COLOR_IRON";
		case joaat("COLOR_NET_PLAYER26"):
			return "COLOR_NET_PLAYER26";
		case joaat("COLOR_ENEMY"):
			return "COLOR_ENEMY";
		case 0:
			return "BLIP_COLOUR_INVALID";
		case joaat("COLOR_RPG_SPECIAL_2"):
			return "COLOR_RPG_SPECIAL_2";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_4"):
			return "ABILITY_CARD_DEAD_EYE_TIER_4";
		case joaat("COLOR_NOTORIETY_LOW"):
			return "COLOR_NOTORIETY_LOW";
		case joaat("COLOR_OBJECTIVE"):
			return "COLOR_OBJECTIVE";
		case joaat("COLOR_PURE_WHITE"):
			return "COLOR_PURE_WHITE";
		case joaat("COLOR_NET_PLAYER31"):
			return "COLOR_NET_PLAYER31";
		case joaat("COLOR_HONOR_0"):
			return "COLOR_HONOR_0";
		case joaat("COLOR_NET_PLAYER6"):
			return "COLOR_NET_PLAYER6";
		case joaat("COLOR_NET_PLAYER23"):
			return "COLOR_NET_PLAYER23";
		case joaat("COLOR_ORANGELIGHT"):
			return "COLOR_ORANGELIGHT";
		case joaat("COLOR_NET_PLAYER27"):
			return "COLOR_NET_PLAYER27";
		case joaat("ABILITY_CARD_DEFENSE_TIER_2"):
			return "ABILITY_CARD_DEFENSE_TIER_2";
		case joaat("COLOR_ORANGE"):
			return "COLOR_ORANGE";
		case joaat("COLOR_PURPLE"):
			return "COLOR_PURPLE";
		case joaat("COLOR_REDDARK"):
			return "COLOR_REDDARK";
		case joaat("COLOR_NET_PLAYER9"):
			return "COLOR_NET_PLAYER9";
		case joaat("COLOR_YELLOWLIGHT"):
			return "COLOR_YELLOWLIGHT";
		case joaat("COLOR_STAR"):
			return "COLOR_STAR";
		case joaat("COLOR_BLUE"):
			return "COLOR_BLUE";
		case joaat("COLOR_NET_PLAYER15"):
			return "COLOR_NET_PLAYER15";
		case joaat("COLOR_GREYMID"):
			return "COLOR_GREYMID";
		case joaat("COLOR_POSSE_NEUTRAL"):
			return "COLOR_POSSE_NEUTRAL";
		case joaat("WANTED_STAR_NON_ACTIVE"):
			return "WANTED_STAR_NON_ACTIVE";
		case joaat("ABILITY_CARD_TIER_1"):
			return "ABILITY_CARD_TIER_1";
		case joaat("COLOR_HONOR_8"):
			return "COLOR_HONOR_8";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_2"):
			return "ABILITY_CARD_DEAD_EYE_TIER_2";
		case joaat("COLOR_HONOR_2"):
			return "COLOR_HONOR_2";
		case joaat("ABILITY_CARD_RECOVERY_TIER_4"):
			return "ABILITY_CARD_RECOVERY_TIER_4";
		case joaat("COLOR_GREEN"):
			return "COLOR_GREEN";
		case joaat("COLOR_NET_PLAYER14"):
			return "COLOR_NET_PLAYER14";
		case joaat("COLOR_FRIENDLY"):
			return "COLOR_FRIENDLY";
		case joaat("COLOR_ENEMY_UNALERTED"):
			return "COLOR_ENEMY_UNALERTED";
		case joaat("ABILITY_CARD_COMBAT_TIER_2"):
			return "ABILITY_CARD_COMBAT_TIER_2";
		case joaat("COLOR_RED"):
			return "COLOR_RED";
		case joaat("COLOR_NET_PLAYER29"):
			return "COLOR_NET_PLAYER29";
		case joaat("COLOR_NET_PLAYER7"):
			return "COLOR_NET_PLAYER7";
		case joaat("COLOR_MP_ADVERSARY"):
			return "COLOR_MP_ADVERSARY";
		case joaat("COLOR_HONOR_7"):
			return "COLOR_HONOR_7";
		case joaat("COLOR_HONOR_1"):
			return "COLOR_HONOR_1";
		case joaat("COLOR_LOCAL_PLAYER"):
			return "COLOR_LOCAL_PLAYER";
		case joaat("COLOR_HONOR_4"):
			return "COLOR_HONOR_4";
		case joaat("ABILITY_CARD_COMBAT_TIER_1"):
			return "ABILITY_CARD_COMBAT_TIER_1";
		case joaat("COLOR_WHITE"):
			return "BLIP_COLOUR_WHITE";
		case joaat("ABILITY_CARD_RECOVERY_TIER_2"):
			return "ABILITY_CARD_RECOVERY_TIER_2";
		case joaat("ABILITY_CARD_TIER_2"):
			return "ABILITY_CARD_TIER_2";
		case joaat("COLOR_SILVER"):
			return "COLOR_SILVER";
		case joaat("COLOR_NET_PLAYER13"):
			return "COLOR_NET_PLAYER13";
		case joaat("COLOR_NOTORIETY_MEDIUM"):
			return "COLOR_NOTORIETY_MEDIUM";
		case joaat("COLOR_RADAR_MISSION"):
			return "COLOR_RADAR_MISSION";
		case joaat("WANTED_STAR_BG"):
			return "WANTED_STAR_BG";
		case joaat("COLOR_CO_OP_PLAYER"):
			return "COLOR_CO_OP_PLAYER";
		case joaat("ABILITY_CARD_TIER_4"):
			return "ABILITY_CARD_TIER_4";
		case joaat("COLOR_MP_OBJECTIVE"):
			return "COLOR_MP_OBJECTIVE";
		case joaat("ABILITY_CARD_RECOVERY_TIER_3"):
			return "ABILITY_CARD_RECOVERY_TIER_3";
		case joaat("WANTED_STAR_ACTIVE"):
			return "WANTED_STAR_ACTIVE";
		case joaat("COLOR_HONOR_3"):
			return "COLOR_HONOR_3";
		case joaat("COLOR_TOKENS"):
			return "COLOR_TOKENS";
		case joaat("COLOR_PINK"):
			return "COLOR_PINK";
		case joaat("COLOR_GREYDARK"):
			return "COLOR_GREYDARK";
		case joaat("COLOR_NET_PLAYER12"):
			return "COLOR_NET_PLAYER12";
		case joaat("COLOR_HONOR_9"):
			return "COLOR_HONOR_9";
		case joaat("COLOR_LOW_PRIORITY"):
			return "COLOR_LOW_PRIORITY";
		case joaat("COLOR_YELLOWVERYLIGHT"):
			return "COLOR_YELLOWVERYLIGHT";
		case joaat("COLOR_CASH_GOLD"):
			return "COLOR_CASH_GOLD";
		case joaat("COLOR_HONOR_6"):
			return "COLOR_HONOR_6";
		case joaat("COLOR_NET_PLAYER11"):
			return "COLOR_NET_PLAYER11";
		case joaat("ABILITY_CARD_TIER_5"):
			return "ABILITY_CARD_TIER_5";
		case joaat("COLOR_NET_PLAYER1"):
			return "COLOR_NET_PLAYER1";
		case joaat("COLOR_NET_PLAYER10"):
			return "COLOR_NET_PLAYER10";
		case joaat("COLOR_HONOR_11"):
			return "COLOR_HONOR_11";
		case joaat("COLOR_POSSE_ENEMY"):
			return "COLOR_POSSE_ENEMY";
		case joaat("COLOR_MP_OBJECTIVE_ENEMY"):
			return "COLOR_MP_OBJECTIVE_ENEMY";
		case joaat("COLOR_HONOR_5"):
			return "COLOR_HONOR_5";
		case joaat("COLOR_YELLOWSTRONG"):
			return "COLOR_YELLOWSTRONG";
		case joaat("ABILITY_CARD_TIER_6"):
			return "ABILITY_CARD_TIER_6";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", bParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", bParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12;
		case 3:
			return 7;
		case 2:
			return 11;
		case 1:
			return 15;
		case 0:
			return 18;
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(168, 162, "[ROLE_PROGRESSION]GET_ROLE_GATING_ITEM - ERROR! No value set for _eRole: ", func_339(iParam0, 0), " INT: ", iParam0);
	return -1;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		case 23:
			return -874931455;
		case 24:
			return -1692024648;
		case 25:
			return -1371940008;
		case 26:
			return -108990605;
		default:
			break;
	}
	return 0;
}

bool func_351(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1348352077))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_352(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_366(uParam0));
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_367(Global_1272425.f_2983);
		case 1:
			return func_367(Global_1272425.f_2984);
		default:
			break;
	}
	return -1;
}

int func_354(int iParam0)
{
	int iVar0;

	if (!func_368(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_GET_TRADE_LEVEL - Unknown trade ", func_369(iParam0, 0));
		return 0;
	}
	iVar0 = func_370(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_371(iParam0, 1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_GET_TRADE_LEVEL - Unknown trade ", func_369(iParam0, 0));
	return 0;
}

int func_355()
{
	return func_372(-1052513930);
}

bool func_356(bool bParam0)
{
	return bParam0 != 0;
}

var func_357(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(126614033);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

int func_358(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_359();
	Var0.f_2 = 15;
	Var0.f_3 = func_360(0);
	Var0.f_4 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 229, "[GET_TUNABLE][", func_373(iParam0, 0), "] - ERROR! Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return func_374(iParam0);
	}
	return uVar5;
}

var func_359()
{
	return Global_1072032.f_28503[52 /*4*/].f_3;
}

bool func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1272425.f_2983;
		case 1:
			return Global_1272425.f_2984;
		default:
			break;
	}
	return false;
}

char* func_361(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094745301:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_OPEN_WITH_VIP_TOOLTIP";
		case -1908058648:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_WELCOME_DESCRIPTION";
		case -1825043380:
			return "SEASON_REWARDS_LABEL_CLAIM_PASS_FOR_FREE";
		case -1674330097:
			return "SEASON_REWARDS_LABEL_ITEM_UNLOCKS_WHEN_RANK_REACHED";
		case -1670072283:
			return "SEASON_REWARDS_LABEL_RANK_TRACK_XP_PROGRESS";
		case -1606613037:
			return "SEASON_REWARDS_LABEL_HELP_TEXT_CATALOGUE_ADVERT";
		case -1585038118:
			return "SEASON_REWARDS_LABEL_ITEM_PRICE_RANK_NUMBER";
		case -1504866110:
			return "SEASON_REWARDS_LABEL_VIP_ITEM_PRICE_PASS";
		case -1471254561:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_INFO_DESCRIPTION_EXTENDED";
		case -1201740419:
			return "SEASON_REWARDS_LABEL_BUY_PASS";
		case -1159305952:
			return "SEASON_REWARDS_LABEL_TOAST_RANK_UP_BODY_RANK";
		case -1069954596:
			return "SEASON_REWARDS_LABEL_CURRENT_TAB_RANKS";
		case -1024390580:
			return "SEASON_REWARDS_LABEL_RANK_TRACK_XP_LOCKED";
		case -989353723:
			return "SEASON_REWARDS_LABEL_TOOLTIP_ITEM_UNLOCKS_WITH_PASS";
		case -952890825:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_COMING_SOON_TOOLTIP";
		case -839182048:
			return "SEASON_REWARDS_LABEL_HEADER_SEASON_NAME";
		case -812112613:
			return "SEASON_REWARDS_LABEL_BUY_PASS_WITH_DISCOUNT";
		case -613620330:
			return "SEASON_REWARDS_LABEL_TOAST_REWARD_BODY_CAMP_LOCKBOX";
		case -600593841:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_TILE_RANK";
		case -563911624:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_TILE_CLOSED";
		case -518976648:
			return "SEASON_REWARDS_LABEL_HEADER_WRAPPER";
		case -415517284:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_PURCHASE_TITLE";
		case -367921118:
			return "SEASON_REWARDS_LABEL_TOOLTIP_PROGRESS_TO_NEXT_RANK";
		case -334600982:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_WELCOME_TITLE";
		case -214000043:
			return "SEASON_REWARDS_LABEL_PROMPT_PASS_MORE_INFO";
		case -107182257:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_CLOSING_SOON_TOOLTIP";
		case -51173122:
			return "SEASON_REWARDS_LABEL_TOOLTIP_ITEM_SEASON_CLOSED";
		case -31949707:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_INFO_TITLE";
		case 242987266:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_OPEN_WITHOUT_VIP_TOOLTIP";
		case 567391299:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_TILE_COMING_SOON";
		case 710088601:
			return "SEASON_REWARDS_LABEL_TOAST_TITLE";
		case 715508741:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_INFO_DESCRIPTION";
		case 1010851584:
			return "SEASON_REWARDS_LABEL_HUB_TILE_SEASON_CLOSED_TOOLTIP";
		case 1177414367:
			return "SEASON_REWARDS_LABEL_RANK_TRACK_XP_COMPLETE";
		case 1223883840:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_PURCHASE_DESCRIPTION";
		case 1732430329:
			return "SEASON_REWARDS_LABEL_PROMPT_SKIP_TIER_GOLD";
		case 2031237157:
			return "SEASON_REWARDS_LABEL_TOAST_REWARD_BODY_WARDROBE";
		case 2043303846:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_WELCOME_DESCRIPTION_EXTENDED";
		case 2065435044:
			return "SEASON_REWARDS_LABEL_TOAST_RANK_UP_INTERACTION_TEXT";
		case 2135775226:
			return "SEASON_REWARDS_LABEL_VIP_PASS_SCREEN_PURCHASE_DESCRIPTION_EXTENDED";
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

char* func_362(int iParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_359();
	Var0.f_2 = 8;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (!DATAFILE::_0x951327435DC5164B(&Var5, &Var0))
	{
		DEBUG::_0x83407B92D46F25C3(680, 229, "[GET_LABEL_DEFAULT][", func_361(iParam0, 0), "] - ERROR! Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return "";
	}
	return func_363(Var5);
}

char* func_363(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1970558384:
			return "SEASON_REWARDS_IMAGE_HUB_SEASON_TILE_BACKGROUND_COMMING_SOON";
		case -1782645354:
			return "SEASON_REWARDS_IMAGE_VIP_PASS_SCREEN_LOGO";
		case -1669050840:
			return "SEASON_REWARDS_IMAGE_VIP_PASS_SCREEN_WELCOME_BACKGROUND";
		case -850412361:
			return "SEASON_REWARDS_IMAGE_HUB_SEASON_TILE_BACKGROUND_CLOSED";
		case -57825929:
			return "SEASON_REWARDS_IMAGE_HUB_SEASON_TILE_BACKGROUND_CLOSING_SOON";
		case 57667704:
			return "SEASON_REWARDS_IMAGE_VIP_PASS_SCREEN_INFO_BACKGROUND";
		case 223053801:
			return "SEASON_REWARDS_IMAGE_VIP_PASS_SCREEN_PURCHASE_BACKGROUND";
		case 905305452:
			return "SEASON_REWARDS_IMAGE_PROGRESS_SEASON_TILE_BACKGROUND";
		case 1143555955:
			return "SEASON_REWARDS_IMAGE_VIP_PASS_SCREEN_BACKGROUND_GRADIENT";
		case 1219991266:
			return "SEASON_REWARDS_IMAGE_PROGRESS_SEASON_TILE_BACKGROUND_COMMING_SOON";
		case 1423614133:
			return "SEASON_REWARDS_IMAGE_PROGRESS_SEASON_TILE_BACKGROUND_CLOSING_SOON";
		case 1715681724:
			return "SEASON_REWARDS_IMAGE_PROGRESS_SEASON_TILE_OVERLAY";
		case 1746641619:
			return "SEASON_REWARDS_IMAGE_TOAST_RANK_UP_ICON";
		case 1800005748:
			return "SEASON_REWARDS_IMAGE_HUB_SEASON_TILE_BACKGROUND";
		case 2062860436:
			return "SEASON_REWARDS_IMAGE_PROGRESS_SEASON_TILE_BACKGROUND_CLOSED";
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

struct<2> func_365(int iParam0)
{
	struct<2> Var0;
	struct<4> Var2;

	Var2 = func_359();
	Var2.f_3 = iParam0;
	Var2.f_2 = 10;
	if (!DATAFILE::_DATAFILE_GET_HASH(&Var0, &Var2))
	{
		DEBUG::_0x83407B92D46F25C3(680, 229, "[GET_IMAGE_DEFAULT][", func_364(iParam0, 0), "] - ERROR! Image Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return Var0;
	}
	Var2.f_2 = 12;
	if (!DATAFILE::_DATAFILE_GET_HASH(&(Var0.f_1), &Var2))
	{
		DEBUG::_0x83407B92D46F25C3(680, 229, "[GET_IMAGE_DEFAULT][", func_364(iParam0, 0), "] - ERROR! Image_Dict Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return Var0;
	}
	return Var0;
}

var func_366(var uParam0)
{
	return uParam0;
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHARACTER_RANK"):
			return 0;
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
			return 7;
		case joaat("CHARACTER_RANK_COLLECTOR"):
			return 12;
		case joaat("CHARACTER_RANK_TRADER"):
			return 11;
		case joaat("CHARACTER_RANK_SEASON_005"):
			return 13;
		case joaat("CHARACTER_RANK_VIP_SEASON_005"):
			return 14;
		case joaat("CHARACTER_RANK_MOONSHINER"):
			return 15;
		case joaat("CHARACTER_RANK_SEASON_006"):
			return 16;
		case joaat("CHARACTER_RANK_VIP_SEASON_006"):
			return 17;
		case -296143963:
			return 18;
		case -575193412:
			return 19;
		case 1364208910:
			return 20;
		case 1936286816:
			return 21;
		case -361115047:
			return 22;
		case -874931455:
			return 23;
		case -1692024648:
			return 24;
		case -1371940008:
			return 25;
		case -108990605:
			return 26;
		default:
			break;
	}
	return -1;
}

bool func_368(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 26)
	{
		return false;
	}
	return true;
}

char* func_369(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_TRADE_NULL";
		case 0:
			return "NET_TRADE_NORMAL";
		case 1:
			return "NET_TRADE_INTRO_CHAR";
		case 2:
			return "NET_TRADE_INTRO_GENERIC";
		case 3:
			return "NET_TRADE_INTRO_TOWN";
		case 4:
			return "NET_TRADE_INTRO_FREEMODE";
		case 5:
			return "NET_TRADE_INTRO_CLAY2";
		case 6:
			return "NET_TRADE_TEAMSTER";
		case 7:
			return "NET_TRADE_BOUNTY_HUNTER";
		case 8:
			return "NET_TRADE_GUNSLINGER";
		case 9:
			return "NET_TRADE_OUTLAW";
		case 10:
			return "NET_TRADE_HUNTER";
		case 11:
			return "NET_TRADE_TRADER";
		case 12:
			return "NET_TRADE_COLLECTOR";
		case 13:
			return "NET_TRADE_SEASON_005";
		case 14:
			return "NET_TRADE_VIP_SEASON_005";
		case 15:
			return "NET_TRADE_MOONSHINER";
		case 16:
			return "NET_TRADE_SEASON_006";
		case 17:
			return "NET_TRADE_VIP_SEASON_006";
		case 18:
			return "NET_TRADE_NATURALIST";
		case 19:
			return "NET_TRADE_SEASON_007";
		case 20:
			return "NET_TRADE_VIP_SEASON_007";
		case 21:
			return "NET_TRADE_SEASON_007B";
		case 22:
			return "NET_TRADE_VIP_SEASON_007B";
		case 23:
			return "NET_TRADE_SEASON_008";
		case 24:
			return "NET_TRADE_VIP_SEASON_008";
		case 25:
			return "NET_TRADE_SEASON_008B";
		case 26:
			return "NET_TRADE_END";
		case 27:
			return "NET_TRADE_LENGTH";
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

int func_370(int iParam0)
{
	if (!func_368(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_GET_PROGRESSION_CACHE_RANK_VALUE - Unknown Trade - ", func_369(iParam0, 0));
		return 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 84, "PERSONA_GET_PROGRESSION_CACHE_RANK_VALUE - Getting trade level from cache for trade: ", func_369(iParam0, 0), " Rank = ", Global_1272425.f_3014[iParam0]);
	return Global_1272425.f_3014[iParam0];
}

int func_371(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_368(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_UPDATE_PROGRESSION_CACHE - Unknown Trade - ", func_369(iParam0, 0));
		return 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 84, "PERSONA_UPDATE_PROGRESSION_CACHE - Attemting to update cache for Rank or XP Item: ", func_369(iParam0, 0));
	if (bParam1)
	{
		bVar0 = func_350(iParam0);
		if (func_236(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_375(255);
			}
			else
			{
				iVar1 = func_376(bVar0, func_299(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1272425.f_3014[iParam0] = iVar1;
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "PERSONA_UPDATE_PROGRESSION_CACHE - Rank Item: ", func_237(bVar0, 0), " New Value: ", iVar1);
			return iVar1;
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_UPDATE_PROGRESSION_CACHE - Failed to update Rank value!");
			return 0;
		}
	}
	else
	{
		bVar0 = func_377(iParam0);
		if (func_236(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_376(bVar0, func_299(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1272425.f_2986[iParam0] = iVar1;
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "PERSONA_UPDATE_PROGRESSION_CACHE - XP Item: ", func_237(bVar0, 0), " New Value: ", iVar1);
			return iVar1;
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_UPDATE_PROGRESSION_CACHE - Failed to update XP value!");
			return 0;
		}
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_UPDATE_PROGRESSION_CACHE - Failed to update Rank or XP value!");
	return 0;
}

int func_372(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_359();
	Var0.f_2 = 23;
	Var0.f_3 = func_360(0);
	Var0.f_4 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		DEBUG::_0x4DC69742196F818A(680, 229, "[GET_AWARD][", func_378(iParam0, 0), "] - ERROR! Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return func_379(iParam0);
	}
	return uVar5;
}

char* func_373(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1491724765:
			return "SEASON_REWARDS_TUNABLE_END_TIME_POSIX_INT";
		case -537144215:
			return "SEASON_REWARDS_TUNABLE_SEASON_STATE_CLOSING";
		case -407496435:
			return "SEASON_REWARDS_TUNABLE_END_TIME_EXTENDED_POSIX_INT";
		case 965428371:
			return "SEASON_REWARDS_TUNABLE_SEASON_STATE_COMING_SOON";
		case 1629055295:
			return "SEASON_REWARDS_TUNABLE_SEASON_STATE_CLOSED";
		case 1656173034:
			return "SEASON_REWARDS_TUNABLE_SEASON_STATE_OPEN";
		case 1883253251:
			return "SEASON_REWARDS_TUNABLE_IS_SEASON_EXTENDED_BOOL";
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

int func_374(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_359();
	Var0.f_2 = 14;
	Var0.f_3 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		DEBUG::_0x83407B92D46F25C3(680, 229, "[GET_TUNABLE_DEFAULT][", func_373(iParam0, 0), "] - ERROR! Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return 0;
	}
	return uVar5;
}

int func_375(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1145562[iParam0 /*35*/];
}

int func_376(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_236(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_380(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_237(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_237(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_227(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_290(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_237(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_226(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_237(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_226(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_237(bParam0, 0));
	}
	return iVar0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
		case 11:
			return joaat("CHARACTER_XP_TRADER");
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		case 23:
			return 92055054;
		case 24:
			return 2141983659;
		case 25:
			return 1021617260;
		case 26:
			return 451790629;
		default:
			break;
	}
	return 0;
}

char* func_378(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1052513930:
			return "SEASON_REWARDS_AWARD_VIP_PURCHASE";
		case 1831575464:
			return "SEASON_REWARDS_AWARD_SKIP_RANK";
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

int func_379(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_359();
	Var0.f_2 = 22;
	Var0.f_3 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		DEBUG::_0x83407B92D46F25C3(680, 229, "[GET_AWARD_DEFAULT][", func_378(iParam0, 0), "] - ERROR! Entry does not exist for (Season: ", func_237(func_360(0), 0));
		return 0;
	}
	return uVar5;
}

int func_380(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_382(func_381(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

bool func_381(bool bParam0)
{
	return bParam0;
}

bool func_382(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

