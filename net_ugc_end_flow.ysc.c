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
	bool bLocal_13 = false;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 1224195223;
	var uLocal_18 = 1825312110;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 4;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	struct<200> Local_32 = { 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_232[8] = 0;
	int iLocal_233 = 0;
	char* sLocal_234 = NULL;
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	bool bLocal_246 = false;
	bool bLocal_247 = false;
	int iLocal_248 = 0;
	char cLocal_249[64] = "";
	char cLocal_257[64] = "";
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	float fLocal_278 = 0f;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286 = 0;
	struct<18> Local_287[4];
	vector3 vLocal_360 = { 0f, 0f, 0f };
	int iLocal_363 = 0;
	char cLocal_364[16] = "";
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	struct<9> Local_382 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	var uLocal_408[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_441[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_474[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_507 = 0;
	struct<5> Local_508[5];
	struct<5> Local_534[2];
	int iLocal_545[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_562[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_579[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_588[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_597[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_614[4] = { 0, 0, 0, 0 };
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	bool bLocal_622 = false;
	int iLocal_623 = 0;
	float fLocal_624 = 0f;
	float fLocal_625 = 0f;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_14 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_SceneToPhoto");
	iLocal_15 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_WinLose");
	iLocal_233 = -1;
	sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
	vLocal_235 = { -580.2f, -3626.5f, 79.94f };
	vLocal_238 = { -596.927f, -3639.072f, 80.6997f };
	vLocal_241 = { -561f, -3700f, 83f };
	bLocal_244 = joaat("MP001_U_07P_WINLOSE");
	bLocal_245 = -1616778617;
	bLocal_246 = -1852748182;
	bLocal_247 = 435889881;
	StringCopy(&cLocal_249, "mp_winlose_", 64);
	StringCopy(&cLocal_257, "mp_winlose", 64);
	iLocal_265 = joaat("MP004_S_MP_COFFIN01X");
	iLocal_266 = joaat("MP004_S_MP_COFFIN01X");
	iLocal_267 = joaat("MP004_S_MP_COFFINDECOR01X");
	iLocal_274 = 1;
	iLocal_279 = -1;
	StringCopy(&cLocal_364, "UIC", 16);
	iLocal_406 = PLAYER::GET_PLAYER_INDEX();
	iLocal_407 = PLAYER::GET_PLAYER_PED(iLocal_406);
	fLocal_624 = 1f;
	fLocal_625 = 1f;
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%% UGC END FLOW HAS BEGUN %%%%%%%");
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%% v2.1 %%%%%%%");
	func_1(1);
	func_2();
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (!func_3())
	{
		if (func_4())
		{
			if (func_5())
			{
				if (func_6())
				{
					func_7();
				}
				else
				{
					func_8();
				}
			}
		}
		func_9();
		if (MISC::IS_BIT_SET(iLocal_400, 3))
		{
			func_10();
		}
		BUILTIN::WAIT(0);
	}
	func_11();
	func_12();
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%% UGC END FLOW & TRANSITION HAS COMPLETED %%%%%%%%");
	func_1(0);
	func_13();
}

void func_1(int iParam0)
{
	Global_1048581 = iParam0;
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] g_bUGCEndFlowActive = ", MISC::_0xF216F74101968DB0(Global_1048581));
}

void func_2()
{
	bLocal_13 = func_14();
	func_15(64);
	func_15(2048);
	func_15(4096);
	func_16(8);
	func_17(8);
	Global_1051135 = 0;
	PED::SET_PED_RESET_FLAG(iLocal_407, 240, true);
	func_18(&uLocal_16, 1, 0);
	func_19(&uLocal_16, 0);
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_14);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_14);
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_15);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_15);
	GRAPHICS::_0xFF8018C778349234(0);
	func_20(1);
}

bool func_3()
{
	if (MISC::IS_BIT_SET(iLocal_398, 2) || iLocal_391 == 2)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] END REASON - ciENDFLOW_CORE_TERMINATED / eEND_FLOW_STATE_TERMINATE");
		return true;
	}
	if (func_21(64))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] END REASON - UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_FORCE_SHUTDOWN_RESULTS");
		return true;
	}
	if (func_22(1, 1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] END REASON - KILL EVENT CAUGHT");
		MISC::SET_BIT(&iLocal_399, 0);
		return true;
	}
	if (Global_2883584)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] END REASON - g_Private_IsMultiplayerCreatorRunning");
		return true;
	}
	if (func_23(128))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] END REASON - UGC_END_FLOW_FLAG_CONTROLLER_UNNATURAL_TERMINATION");
		MISC::SET_BIT(&iLocal_399, 0);
		return true;
	}
	if (func_21(2048))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] END REASON - UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_POSSE_FREEMODE_SHUTDOWN");
		MISC::SET_BIT(&iLocal_399, 0);
		return true;
	}
	if (func_23(32))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] END REASON - UGC_END_FLOW_FLAG_DOING_TRANSITION");
		return true;
	}
	return false;
}

bool func_4()
{
	if (!MISC::IS_BIT_SET(iLocal_398, 3))
	{
		if (func_24())
		{
			MISC::SET_BIT(&iLocal_398, 3);
		}
		switch (Global_262152)
		{
			case 0:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_398, 3);
				}
				break;
			case 1:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_398, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_398, 3);
				}
				break;
			case 3:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_398, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_398, 3);
				}
				break;
			case 2:
				break;
			case 4:
				MISC::CLEAR_BIT(&iLocal_398, 3);
				break;
		}
		if (MISC::IS_BIT_SET(iLocal_398, 3))
		{
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] assets loaded for type ", func_27(Global_262152, 0));
			return true;
		}
		else
		{
			if (func_5())
			{
				NETWORK::_0x236905C700FDB54D();
			}
			if (Global_262152 != 4)
			{
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] assets not loaded for type ", func_27(Global_262152, 0));
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] waiting for end flow type to be set");
			}
			return false;
		}
	}
	return true;
}

bool func_5()
{
	if (MISC::IS_BIT_SET(iLocal_398, 1))
	{
		return true;
	}
	else if (func_23(16))
	{
		MISC::SET_BIT(&iLocal_398, 1);
		return true;
	}
	return false;
}

bool func_6()
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (Global_262152 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_402, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iVar1 /*10*/]))
				{
					if (!func_28(iVar1))
					{
						bVar0 = false;
					}
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Clone doesn't exist : ", iVar1);
				}
				iVar1++;
			}
			if (bVar0)
			{
				MISC::SET_BIT(&iLocal_402, 0);
			}
			else
			{
				return false;
			}
		}
	}
	return MISC::IS_BIT_SET(iLocal_398, 0);
}

void func_7()
{
	func_29();
	func_30();
	switch (Global_262152)
	{
		case 0:
			func_31();
			break;
		case 2:
			func_32();
			break;
		case 3:
			func_33();
			func_34();
			break;
		case 1:
			func_34();
			break;
		case 4:
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Waiting for end flow type to be set");
			break;
	}
}

void func_8()
{
	int iVar0;

	func_1(1);
	func_35(0);
	func_36();
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_37(1);
		func_38(1);
	}
	func_39(1);
	if (!func_40(255))
	{
		func_41(3);
	}
	else
	{
		func_42(1);
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			func_43(64);
		}
	}
	func_44(0);
	if (!func_40(255))
	{
		iVar0 = 8;
		func_45(0, iVar0);
	}
	func_46(2048);
	UIAPPS::_CLOSE_ALL_APPS_IMMEDIATE();
	MISC::SET_BIT(&(Global_1959011.f_1), 5);
	iLocal_405 = Global_1048684.f_19;
	func_47(&iLocal_407);
	MISC::SET_BIT(&iLocal_398, 0);
}

void func_9()
{
	char* sVar0;

	AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684.f_1)) || !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684.f_9)))
	{
		if (!MISC::IS_BIT_SET(iLocal_399, 4))
		{
			if (MISC::IS_BIT_SET(iLocal_399, 5) || GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
			{
				if (MISC::IS_BIT_SET(iLocal_399, 5) || GRAPHICS::_0x9AB192A9EF980EED(iLocal_14, 2, false, &uLocal_284))
				{
					sVar0 = "photograph";
					if (MISC::IS_BIT_SET(iLocal_399, 5))
					{
						sVar0 = "photograph_death_screen_stats";
					}
					if (AUDIO::_0xE368E8422C860BA7(sVar0, "rdro_gamemode_transition_sounds", -2))
					{
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] PROCESS_PHOTO_VFX_AND_SFX - Photo FX Triggered, display end stats and play sound ", sVar0);
						if (!MISC::IS_BIT_SET(iLocal_399, 7))
						{
							func_48();
						}
						else
						{
							func_49();
						}
						MISC::SET_BIT(&iLocal_399, 4);
						MISC::SET_BIT(&iLocal_399, 12);
						func_50(&uLocal_380, 0, 0);
						func_43(64);
						AUDIO::PLAY_SOUND_FRONTEND(sVar0, "rdro_gamemode_transition_sounds", true, 0);
						AUDIO::_0x9B1FC259187C97C0("photograph");
						func_51();
						vLocal_360 = { vLocal_235 };
						func_52(1, 0);
					}
				}
			}
			else if (func_53(16) && func_24())
			{
				func_54();
			}
		}
		else if ((GRAPHICS::_0xEEF83A759AE06A27(iLocal_14) && GRAPHICS::_0x9AB192A9EF980EED(iLocal_14, 2, false, &uLocal_284)) || (GRAPHICS::_0xEEF83A759AE06A27(iLocal_15) && GRAPHICS::_0x9AB192A9EF980EED(iLocal_15, 2, false, &uLocal_284)))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_PHOTO_VFX_AND_SFX - Play camera_flash audio");
			AUDIO::PLAY_SOUND_FRONTEND("camera_flash", "RDRO_Camera_Flash_Pulse", true, 0);
			AUDIO::_0x9B1FC259187C97C0("photograph");
		}
	}
}

void func_10()
{
	struct<10> Var0;

	if (Global_1049169)
	{
		Global_1049159.f_5 = (Global_1048684.f_403.f_8 + Global_1048684.f_419.f_8);
		Global_1049159.f_6 = (Global_1048684.f_403.f_6 + Global_1048684.f_419.f_6);
		TELEMETRY::_TELEMETRY_MATCH_OVER(&Global_1049196, &Global_1049159, &Global_1049170, &Global_1049175, Global_3145858.f_61887 == 1);
		Global_1049159 = { Var0 };
		Global_1049169 = 0;
	}
}

void func_11()
{
	int iVar0;

	if (!Global_1048684.f_467)
	{
		if (Global_1048684.f_466 || iLocal_285)
		{
			func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("SHOWDOWN")), 1);
			iVar0 = func_57(Global_1572887.f_108.f_9);
			switch (iVar0)
			{
				case 7:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ELIMINATION_SMALL")), 1);
					break;
				case 8:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ELIMINATION_MEDIUM")), 1);
					break;
				case 9:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ELIMINATION_LARGE")), 1);
					break;
				case 2:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ADVERSARY_MEDIUM")), 1);
					break;
				case 3:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ADVERSARY_MEDIUM")), 1);
					break;
				case 4:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ADVERSARY_LARGE")), 1);
					break;
				case 6:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL")), 1);
					break;
				case 5:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_GUN_RUSH_TEAMS")), 1);
					break;
				case 19:
					func_56(func_55(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_CAPTURE")), 1);
					break;
			}
		}
	}
}

void func_12()
{
	NETWORK::_0x236905C700FDB54D();
	func_58();
	func_59();
	func_60();
	switch (Global_262152)
	{
		case 0:
			func_61();
			break;
		case 2:
			func_62();
			break;
		case 3:
			func_63();
			func_64();
			break;
		case 1:
			func_64();
			break;
	}
	func_65();
	func_10();
	HUD::_DISPLAY_HUD_COMPONENT(999578278);
	HUD::_DISPLAY_HUD_COMPONENT(690901814);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC] PROCESS_POST_END_FLOW - Enabling display of reward items by calling ENABLE_QUEUED_ITEM_DISPLAY");
	func_66();
	func_67(1);
	func_68();
	func_16(2048);
	if (MISC::IS_BIT_SET(iLocal_399, 3))
	{
		func_69(-304137656, 0, 255, 0, 0);
	}
	Global_1048684.f_377 = 28;
	func_70(4);
	func_71(0);
	func_72();
	func_73(0);
	func_74(0);
	if (func_75())
	{
		func_76(0);
	}
	Global_1048582 = 0;
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
}

void func_13()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_14()
{
	return func_77(Global_1572887.f_7, 1);
}

void func_15(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 59, "UGC_GLOBAL_LOADER_CLEAR_FLAG - ", func_78(iParam0, 0));
	Global_265378.f_131719.f_135 = (Global_265378.f_131719.f_135 - (Global_265378.f_131719.f_135 && iParam0));
}

void func_16(int iParam0)
{
	Global_262151 = (Global_262151 - (Global_262151 && iParam0));
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "UGC_END_FLOW_CLEAR_FLAG - ", func_79(iParam0, 0));
}

void func_17(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 59, "UGC_GLOBAL_LOADER_SET_FLAG - ", func_78(iParam0, 0));
	Global_265378.f_131719.f_135 = (Global_265378.f_131719.f_135 || iParam0);
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[UGC][UGCSplash] INIT_UGC_SPLASH_FLOW. bEndFlow ", MISC::_0xF216F74101968DB0(bParam1), " bIntroFlow ", MISC::_0xF216F74101968DB0(bParam2));
}

void func_19(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

void func_20(bool bParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_BUTTON_VISIBILITY is visible");
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_BUTTON_VISIBILITY is invisible");
	}
	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "acceptbutton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "menuUpButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "menuDownButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "visible", bParam0);
}

bool func_21(int iParam0)
{
	return (Global_265378.f_131719.f_135 && iParam0) != 0;
}

bool func_22(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_80(Global_1572887, 0), ", so skipping");
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

bool func_23(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

bool func_24()
{
	if (iLocal_281 < 100)
	{
		if (func_81(&cLocal_364, &iLocal_281))
		{
			iLocal_281 = 100;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_25()
{
	return true;
}

bool func_26()
{
	if (func_82())
	{
		if (func_83())
		{
			if (func_84(bLocal_244, bLocal_245, bLocal_247, bLocal_246))
			{
				if (func_85())
				{
					if (func_86())
					{
						if (func_87(&uLocal_16))
						{
							if (func_88())
							{
								STREAMING::_0x513F8AA5BF2F17CF(vLocal_235, 15f, 0);
								func_46(2);
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

char* func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "EEND_FLOW_TYPE_ROUNDS";
		case 1:
			return "EEND_FLOW_TYPE_STANDARD";
		case 2:
			return "EEND_FLOW_TYPE_STORY";
		case 3:
			return "EEND_FLOW_TYPE_PVERSUSE";
		case 4:
			return "EEND_FLOW_TYPE_INVALID";
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

bool func_28(int iParam0)
{
	vector3 vVar0;

	switch (iLocal_441[iParam0])
	{
		case 0:
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1048684.f_22[iParam0 /*10*/], true, true);
			ENTITY::FREEZE_ENTITY_POSITION(Global_1048684.f_22[iParam0 /*10*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1048684.f_22[iParam0 /*10*/], true);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_1048684.f_22[iParam0 /*10*/], true, false) };
			func_89(&(uLocal_408[iParam0]), &(Global_1048684.f_22[iParam0 /*10*/]), &vVar0);
			PED::_0x59BD177A1A48600A(uLocal_408[iParam0], 1);
			if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_343[iParam0]))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] adding horse");
				func_89(&(uLocal_474[iParam0]), &(Global_1048684.f_343[iParam0]), &vVar0);
			}
			iLocal_441[iParam0] = 1;
			DEBUG::_0xA308F935BDECCEC0(648, 227, "[HANDLE_END_FLOW_CLONE_CREATION] Clone[", iParam0, "] is moving to: ", func_90(iLocal_441[iParam0], 0));
			break;
		case 1:
			if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_408[iParam0]))
			{
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Removing mask from clone ", iParam0);
				func_91(uLocal_408[iParam0]);
				if (Global_1048684.f_22[iParam0 /*10*/].f_9)
				{
					iLocal_441[iParam0] = 2;
					DEBUG::_0xA308F935BDECCEC0(648, 227, "[HANDLE_END_FLOW_CLONE_CREATION] Clone[", iParam0, "] is moving to: ", func_90(iLocal_441[iParam0], 0));
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Removing hat from clone ", iParam0);
					func_92(uLocal_408[iParam0], 1, 1);
					iLocal_441[iParam0] = 2;
					DEBUG::_0xA308F935BDECCEC0(648, 227, "[HANDLE_END_FLOW_CLONE_CREATION] Clone[", iParam0, "] is moving to: ", func_90(iLocal_441[iParam0], 0));
					Jump @470; //curOff = 399
					if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iParam0 /*10*/]))
					{
						PED::DELETE_PED(&(Global_1048684.f_22[iParam0 /*10*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_343[iParam0]))
					{
						PED::DELETE_PED(&(Global_1048684.f_343[iParam0]));
					}
					return true;
				}
			}
			return false;
			default:
				break;
	}
}

void func_29()
{
	NETWORK::_0x236905C700FDB54D();
	func_17(8);
	func_51();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	func_39(1);
	func_93(1);
	func_94();
	UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
	CAM::_0x8910C24B7E0046EC();
	HUD::_HIDE_HUD_COMPONENT(999578278);
	func_67(0);
}

void func_30()
{
	if (MISC::IS_BIT_SET(iLocal_398, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_619))
		{
			if (!bLocal_622)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] map entity trying to pin");
				iLocal_621 = ENTITY::_0x6F3068258A499E52(joaat("P_CAMPFIREFRESH01X"), -561.1321f, -3694.189f, 81.9117f, 15);
				bLocal_622 = true;
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_621))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] map entity is pinned");
				iLocal_619 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_621));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_619) && ENTITY::IS_ENTITY_VISIBLE(iLocal_619))
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] entity exists");
					ENTITY::SET_ENTITY_VISIBLE(iLocal_619, false);
				}
			}
		}
	}
}

void func_31()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_406))
	{
		func_45(0, 8);
	}
	switch (iLocal_391)
	{
		case 0:
			if (func_95(&uLocal_374))
			{
				if (func_96(&uLocal_374, 0, 0) > 2500)
				{
					func_97(&uLocal_16);
					HUD::_HIDE_HUD_COMPONENT(999578278);
					func_98(&Local_32, 1);
					func_99(&Local_32);
					func_100(1);
				}
			}
			else
			{
				func_50(&uLocal_374, 0, 0);
			}
			break;
		case 1:
			func_98(&Local_32, 1);
			func_100(2);
			break;
		case 2:
			MISC::SET_BIT(&iLocal_398, 2);
			break;
	}
}

void func_32()
{
	if (func_95(&uLocal_372))
	{
		if (!func_23(4096))
		{
			if (func_23(16384))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] waiting for posse leader to leave");
				return;
			}
			func_101(1);
			if (!func_23(256))
			{
				if (func_23(16))
				{
					func_16(16);
				}
			}
			if (func_96(&uLocal_372, 1, 0) > 5000 && func_102())
			{
				if (!Global_1048577)
				{
					if (!func_103(255))
					{
						if (func_23(64) || func_104())
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Won screen done, lets move on");
							if (!func_23(256))
							{
								func_105(0);
							}
							GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
							if (func_106())
							{
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_RESULT_ONLY_END_FLOW - Destroying killcam");
								func_107(4, 0);
							}
							func_93(0);
							MISC::SET_BIT(&iLocal_398, 2);
						}
						else
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] waiting for the end of the playlist");
						}
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Player is respawning, we can't kill the story splash");
					}
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] waiting to tear down the controller");
				}
			}
		}
		else
		{
			func_108();
		}
	}
	else
	{
		if (!func_23(4096))
		{
			CAM::DO_SCREEN_FADE_OUT(1750);
		}
		func_50(&uLocal_372, 1, 0);
	}
}

void func_33()
{
	switch (iLocal_391)
	{
		case 0:
			switch (iLocal_393)
			{
				case 1:
					break;
			}
			break;
		case 1:
			switch (iLocal_392)
			{
				case 0:
					break;
			}
			break;
	}
}

void func_34()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_406))
	{
		func_45(0, 8);
	}
	func_109();
	switch (iLocal_391)
	{
		case 0:
			if (!MISC::IS_BIT_SET(iLocal_399, 13))
			{
				if (MISC::IS_BIT_SET(iLocal_399, 12) && func_96(&uLocal_380, 0, 0) > 5000)
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] bIPLLoadComplete = TRUE, IPL Streamed in");
					MISC::SET_BIT(&iLocal_399, 13);
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT() && !func_110())
			{
				func_105(0);
			}
			switch (iLocal_393)
			{
				case 0:
					func_111();
					func_112();
					func_113(1);
					func_114(1);
					func_115();
					func_116(1);
					break;
				case 1:
					if (!MISC::IS_BIT_SET(iLocal_399, 12))
					{
						return;
					}
					func_117();
					func_118();
					iLocal_507 = 0;
					func_116(2);
					break;
				case 2:
					if (func_119() != 0)
					{
						func_116(3);
					}
					break;
				case 3:
					if (func_120() != 0)
					{
						func_116(4);
					}
					break;
				case 4:
					if (!MISC::IS_BIT_SET(iLocal_401, 9))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_235, 0f, 0f, 0f);
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_241, 0f, 0f, 0f);
					}
					if (STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(bLocal_244, vLocal_235))
					{
						bVar0 = true;
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] bIPLLoadComplete = TRUE, IPL Streamed in");
					}
					else if (func_95(&uLocal_368) && func_96(&uLocal_368, 0, 0) > 3500)
					{
						if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
						{
							bVar0 = true;
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] bIPLLoadComplete = TRUE, no streaming requests");
						}
						else
						{
							bVar0 = func_121();
						}
					}
					else
					{
						bVar0 = func_121();
					}
					if (bVar0 || (MISC::GET_GAME_TIMER() - iLocal_282) > 3500)
					{
						func_122(&uLocal_370);
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] sTimeCycleMod is ", &cLocal_249);
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_249);
						iVar1 = 24;
						func_45(0, iVar1);
						func_50(&uLocal_372, 0, 0);
						func_123();
						func_116(5);
					}
					break;
				case 5:
					if (func_96(&uLocal_372, 0, 0) > 1000)
					{
						func_50(&uLocal_368, 0, 0);
						func_101(1);
						func_124();
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_249);
						func_100(1);
					}
					break;
			}
			break;
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_401, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_235, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_241, 0f, 0f, 0f);
			}
			VOICE::_0x1C38C3577901AF1F();
			func_125(&Global_1049313, 1);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
			switch (iLocal_392)
			{
				case 0:
					if (!func_103(255))
					{
						if (func_126())
						{
							if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
								MISC::SET_BIT(&iLocal_399, 13);
								func_127(1);
							}
							else
							{
								func_127(2);
							}
						}
					}
					break;
				case 1:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_105(0);
						func_127(2);
					}
					break;
				case 2:
					if (Local_32.f_199 < 2)
					{
						func_98(&Local_32, 0);
					}
					UIFEED::_0xDD1232B332CBB9E7(11, 1, 1);
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(0);
						func_128();
					}
					func_50(&uLocal_372, 0, 0);
					if (func_106())
					{
						func_107(4, 0);
					}
					func_93(0);
					AUDIO::_0x9B1FC259187C97C0("winners_pose");
					if (func_53(2) || func_53(4))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Heavy", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Light", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1048684.f_471));
					STREAMING::_0x5A8B01199C3E79C3();
					func_16(2);
					GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					GRAPHICS::ANIMPOSTFX_PLAY("MP_Trans_WinLose_Pulse");
					if (Global_1048684.f_466)
					{
						GRAPHICS::_0xF972F0AB16DC5260("MP_Trans_WinLose_Pulse", 1, 1f);
						GRAPHICS::_0xF972F0AB16DC5260("MP_Trans_WinLose_Pulse", 2, 0f);
					}
					else
					{
						GRAPHICS::_0xF972F0AB16DC5260("MP_Trans_WinLose_Pulse", 1, 0f);
						GRAPHICS::_0xF972F0AB16DC5260("MP_Trans_WinLose_Pulse", 2, 1f);
					}
					func_127(3);
					break;
				case 3:
					if (!GRAPHICS::_0xEEF83A759AE06A27(iLocal_15))
					{
						if ((ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_233) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_233)) <= 1.2f)
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Triggering PFX");
							GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_15);
							MISC::SET_BIT(&iLocal_399, 4);
						}
					}
					if (func_129())
					{
						func_130(1);
						func_131(1);
						func_132();
						AUDIO::_0x9B1FC259187C97C0("photograph");
						func_50(&uLocal_376, 0, 0);
						func_50(&uLocal_378, 0, 0);
						iVar2 = PLAYER::PLAYER_ID();
						sVar3 = PLAYER::GET_PLAYER_NAME(iVar2);
						iVar4 = 0;
						while (iVar4 <= 3)
						{
							if (Global_1050050.f_14 <= 1)
							{
								if (MISC::ARE_STRINGS_EQUAL(&(Global_1050050.f_101[iVar4 /*23*/].f_14.f_1), sVar3))
								{
									DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] set player finished top 3");
									iLocal_285 = 1;
								}
								else
								{
									Jump @1185; //curOff = 1170
									DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] team match");
									iVar4++;
								}
								func_127(4);
								Jump @1234; //curOff = 1199
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] waiting on photo");
								if (!func_95(&uLocal_372))
								{
									func_50(&uLocal_372, 0, 0);
								}
								Jump @1367; //curOff = 1234
								if (func_96(&uLocal_378, 0, 0) > 5000)
								{
									MISC::SET_BIT(&iLocal_400, 0);
									func_127(5);
								}
								else if (func_96(&uLocal_378, 0, 0) < 0 || !func_95(&uLocal_378))
								{
									func_50(&uLocal_378, 0, 0);
								}
								Jump @1367; //curOff = 1305
								func_98(&Local_32, 0);
								func_133(&Local_32, &Global_1049313);
								func_134(&Local_32, &Global_1049313, 1);
								if (func_135())
								{
									func_136();
									func_100(2);
								}
								func_133(&Local_32, &(Global_1050050.f_101));
								Jump @1381; //curOff = 1367
								MISC::SET_BIT(&iLocal_398, 2);
								if (MISC::IS_BIT_SET(iLocal_400, 1))
								{
									func_137();
								}
								if (MISC::IS_BIT_SET(iLocal_400, 0))
								{
									func_138();
								}
							}
						}
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_35(int iParam0)
{
	Global_1072032.f_28725.f_3 = 1;
	Global_1072032.f_28725.f_65.f_32 = iParam0;
	Global_1072032.f_28725.f_4 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REGISTER_UGC_OUTRO_THREAD");
}

void func_36()
{
	func_139(2);
}

void func_37(bool bParam0)
{
	if (!bParam0)
	{
		func_140(18);
	}
	else
	{
		func_141(18);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_38(bool bParam0)
{
	if (!bParam0)
	{
		func_140(19);
	}
	else
	{
		func_141(19);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_39(bool bParam0)
{
	if (!bParam0)
	{
		func_140(21);
	}
	else
	{
		func_141(21);
	}
}

bool func_40(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_142();
	}
	return func_143(64, iParam0);
}

void func_41(int iParam0)
{
	Global_1102630.f_26.f_12 = iParam0;
}

void func_42(bool bParam0)
{
	if (!bParam0)
	{
		func_140(28);
	}
	else
	{
		func_141(28);
	}
}

void func_43(int iParam0)
{
	if (func_144(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		func_141(49);
	}
	else
	{
		func_140(49);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_45(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_145(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_146(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_46(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "UGC_END_FLOW_SET_FLAG - ", func_79(iParam0, 0));
}

void func_47(int iParam0)
{
	PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
}

void func_48()
{
	if (func_53(17))
	{
		MISC::SET_BIT(&iLocal_399, 7);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_FINAL_SHOT_HUD_DISPLAY: Final shot was ignored.");
		return;
	}
	Local_32.f_159 = Global_1051117;
	Local_32.f_160 = Global_1051118;
	func_147(&Global_1049313, &Local_32, &uLocal_16, iLocal_405, func_53(15));
	MISC::SET_BIT(&iLocal_399, 7);
}

void func_49()
{
	char[] cVar0[8];

	if (Local_32.f_150 > 1)
	{
		cVar0 = HUD::_GET_LABEL_TEXT("UIC_EF_WINS");
	}
	else
	{
		cVar0 = HUD::_GET_LABEL_TEXT("UIC_EF_WIN");
	}
	func_148(&uLocal_16, cVar0, &(Global_1048684.f_9), " ", " ", " ", " ", Global_1048684.f_17);
	func_149(&uLocal_16);
	func_19(&uLocal_16, 1);
}

void func_50(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_51()
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC] CLOSE_ALL_GAME_UI_MENUS - Called from:");
	UNK_0x355E72323AEE83CC(227, 6);
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("PAUSE_MENU"));
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("ABILITIES")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("ABILITIES")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("ABILITIES"));
	}
	if (func_150())
	{
		func_151();
	}
	if (func_152())
	{
		func_153();
	}
}

void func_52(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(iLocal_399, 11) && !func_154(vLocal_360))
		{
			MISC::SET_BIT(&iLocal_399, 11);
			if (!MISC::IS_BIT_SET(iLocal_401, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_360, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_241, 0f, 0f, 0f);
			}
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Focus already set!");
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_399, 11) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_399, 11);
		STREAMING::CLEAR_FOCUS();
		vLocal_360 = { 0f, 0f, 0f };
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Focus cleared!");
	}
}

bool func_53(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1048684, iParam0);
}

void func_54()
{
	if (func_149(&uLocal_16))
	{
		func_50(&uLocal_372, 1, 0);
		if (!func_155(2))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Winners_Screen", "RDROADV_Winners_Screen_Sounds", true, 0);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] DISPLAY_WIN_LOSE_SPLASH - Playing Front End Sound");
		}
		if (!GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
		{
			DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MMacK][EndFlow2] DISPLAY_WIN_LOSE_SPLASH - Ready to run animpostfx ", iLocal_14, ", KILLCAM__IS_CREATED = ", func_106(), ", KILLCAM__IS_PHOTOFX_RUNNING = ", func_156());
			if (!func_106() || !func_156())
			{
				GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_14);
			}
			else
			{
				MISC::SET_BIT(&iLocal_399, 5);
			}
			MISC::CLEAR_BIT(&iLocal_399, 4);
			func_157(16);
		}
	}
}

struct<2> func_55(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_57(int iParam0)
{
	int iVar0;
	int iVar1;

	if (6 == iParam0)
	{
		return 10;
	}
	if (5 == iParam0)
	{
		return 11;
	}
	if (7 == iParam0)
	{
		return 12;
	}
	if (8 == iParam0)
	{
		return 13;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (iParam0 != Global_265378.f_117425.f_13510[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 21)
			{
				if (Global_265378.f_117425.f_13445[iVar0] != Global_265354.f_1[iVar1])
				{
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(40, 77, "NET_PLAYLIST_GET_NET_PLAYLIST_TYPES_FROM_BUCKET_ID found our series to be ", func_158(iVar1, 0));
					return iVar1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	DEBUG::_0xF0783374333FD8CE(8, 77, "NET_PLAYLIST_GET_NET_PLAYLIST_TYPES_FROM_BUCKET_ID returning invalid for iBucketID = ", iParam0);
	return -1;
}

void func_58()
{
	if (!func_103(255))
	{
		func_37(0);
		func_38(0);
		if (func_23(64) || !func_14())
		{
			if (!func_21(64))
			{
				if (Global_262152 != 0)
				{
					func_52(0, 0);
					if (!func_23(256))
					{
						if (MISC::IS_BIT_SET(Global_1048684, 29) || MISC::IS_BIT_SET(Global_1048684, 30))
						{
							if (MISC::IS_BIT_SET(Global_1048684, 31))
							{
								func_159(1, 0);
								func_160(1);
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - respawn on mount");
							}
							else if (MISC::IS_BIT_SET(Global_1048684, 28) || MISC::IS_BIT_SET(Global_1048684, 27))
							{
								if (MISC::IS_BIT_SET(Global_1048684, 27))
								{
									if (!func_154(Global_1048684.f_394))
									{
										func_161(Global_1048684.f_394, Global_1048684.f_397, 1);
										DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - respawn next to mount at uSpawn");
									}
								}
								func_162(1, 0);
								func_160(2);
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - respawn next to mount");
							}
							if (MISC::IS_BIT_SET(Global_1048684, 29) && !func_154(Global_1048684.f_390))
							{
								func_163(Global_1048684.f_390, Global_1048684.f_393);
								func_160(4);
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - respawning player in desired pos");
							}
							else
							{
								func_163(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING());
								func_160(8);
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - respawning player in curr pos");
							}
						}
						else if (func_164() == 33)
						{
							func_165(5, 1);
							func_160(64);
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - respawning in St Denis");
						}
						else
						{
							func_160(16);
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - respawning player");
						}
					}
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - more rounds coming!!");
				}
				if (!func_166())
				{
					func_37(1);
					func_160(32);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - skipping respawn fade because we are in the intro sequence");
				}
			}
			if (!func_23(256))
			{
				CAM::DO_SCREEN_FADE_OUT(150);
			}
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - not the end of a playlist");
			func_17(4096);
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] [PROCESS_END_OF_CONTENT_RESPAWN] - player was respawning already");
	}
}

void func_59()
{
	if (func_23(256))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Fading Screen for Clay2");
		MISC::SET_BIT(&iLocal_399, 2);
		CAM::DO_SCREEN_FADE_OUT(0);
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		HUD::_DISPLAY_HUD_COMPONENT(999578278);
		HUD::_DISPLAY_HUD_COMPONENT(690901814);
	}
	else if (func_23(64) || func_21(32))
	{
		MISC::SET_BIT(&iLocal_399, 1);
		while (!func_167(&bLocal_13) && !func_22(1, 1))
		{
			NETWORK::_0x236905C700FDB54D();
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%% Net_UGC_End_Flow booting end flow hack %%%%%%%%");
			BUILTIN::WAIT(0);
		}
		func_168();
	}
}

void func_60()
{
	var uVar0;
	int iVar37;

	func_169();
	func_170();
	func_41(0);
	func_171(64);
	func_38(0);
	func_39(0);
	func_42(0);
	func_93(0);
	func_172();
	func_173(0);
	func_174(0);
	func_136();
	MISC::CLEAR_BIT(&(Global_1959011.f_1), 5);
	Global_1048684.f_470 = 0;
	uVar0 = 32;
	func_175(&uVar0, PLAYER::GET_PLAYER_INDEX(), 0);
	HUD::_TEXT_DATABASE_DELETE("UIC");
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false, true);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	PED::SET_PED_RESET_FLAG(iLocal_407, 240, false);
	AUDIO::_0x531A78D6BF27014B("RDRO_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDROADV_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDRO_Countdown_Clockwork_Sounds");
	if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
	}
	if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_15))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(iLocal_15);
	}
	GRAPHICS::_0x71845905BCCDE781(iLocal_14);
	GRAPHICS::_0x71845905BCCDE781(iLocal_15);
	func_15(8);
	func_15(64);
	func_15(2048);
	func_16(64);
	func_16(1024);
	func_16(256);
	func_97(&uLocal_16);
	func_101(0);
	func_1(0);
	func_176();
	if (func_177(33, 255))
	{
		if (func_106())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_MINIMAL_SCRIPT_CLEANUP - Destroying killcam");
			func_107(4, 0);
		}
		func_93(0);
	}
	NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
	MISC::_0xCE7690C0A0D1C36D(0);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	GRAPHICS::_0xFF8018C778349234(1);
	AUDIO::CANCEL_MUSIC_EVENT(&(Global_1048684.f_471));
	func_16(128);
	func_52(0, 1);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_14);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_15);
	if (!Global_1049270)
	{
		MISC::_0x0E71C80FA4EC8147("FOG", true);
		MISC::_0x0E71C80FA4EC8147("MISTY", true);
		MISC::_0x0E71C80FA4EC8147("SHOWER", true);
		MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
	}
	func_178(0);
	iVar37 = 0;
	iVar37 = 0;
	while (iVar37 <= 3)
	{
		func_179(&(Global_1049283[iVar37 /*3*/]));
		iVar37++;
	}
	iVar37 = 0;
	while (iVar37 <= 3)
	{
		func_179(&(Global_1049296[iVar37 /*3*/]));
		iVar37++;
	}
}

void func_61()
{
	func_180(&Local_32, 1);
	func_181(&(Local_32.f_162));
	func_182();
}

void func_62()
{
}

void func_63()
{
}

void func_64()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	DEBUG::_0xF0783374333FD8CE(8, 59, "PROCESS_END_FLOW_CLEANUP_STANDARD - player team is - ", Global_1048684.f_20);
	Global_1072032.f_10 = Global_1048684.f_20;
	bVar0 = true;
	iVar1 = 0;
	func_50(&uVar2, 0, 0);
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && bVar0)
	{
		bVar0 = false;
		if (STREAMING::_IS_IMAP_ACTIVE(bLocal_244))
		{
			func_183(bLocal_244);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Still removing: ", func_184(bLocal_244, 0));
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(bLocal_245))
		{
			func_183(bLocal_245);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Still removing: ", func_184(bLocal_245, 0));
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(bLocal_246))
		{
			func_183(bLocal_246);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Still removing: ", func_184(bLocal_246, 0));
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(bLocal_247))
		{
			func_183(bLocal_247);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Still removing: ", func_184(bLocal_247, 0));
			bVar0 = true;
		}
		iVar1++;
		if (func_96(&uVar2, 0, 0) > 2000 || iVar1 > 100)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] bailing for safety");
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_257, false);
	func_185();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	STREAMING::_0xF01D21DF39554115(1);
	func_180(&Local_32, 0);
	func_181(&(Local_32.f_162));
	func_182();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(cLocal_232))
	{
		func_186(&Local_32, &cLocal_232);
	}
}

void func_65()
{
	if (MISC::IS_BIT_SET(iLocal_399, 1))
	{
		while (SCRIPTS::IS_THREAD_ACTIVE(Global_1051139, false))
		{
			NETWORK::_0x236905C700FDB54D();
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%% Net_UGC_End_Flow waiting for end flow transition to finish %%%%%%%%");
			BUILTIN::WAIT(0);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_399, 2))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%% ciENDFLOW_BS0_FADED_FOR_SHOP no longer cares, but it might in the future");
	}
}

void func_66()
{
	Global_1913655 = 0;
}

void func_67(bool bParam0)
{
	if (bParam0)
	{
		Global_1952230.f_1381 = (Global_1952230.f_1381 - Global_1952230.f_1381 & 2);
	}
	else
	{
		Global_1952230.f_1381 |= 2;
	}
	func_187(bParam0);
}

void func_68()
{
	if (SCRIPTS::_0x179A6F0EE2E79026(&(Global_1072032.f_21956.f_583)))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 186, "NET_HUD__CLEAR_FORCE_HIDE_GAMERTAG_FOR_ALL_PLAYERS: Removing force hide of tag for ALL players");
		SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1072032.f_21956.f_583));
	}
}

int func_69(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	int iVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_188(bParam0, &iVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_70(int iParam0)
{
	Global_262152 = iParam0;
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Setting end flow to type ", func_27(Global_262152, 0));
}

void func_71(int iParam0)
{
	Global_1048684.f_470 = iParam0;
}

void func_72()
{
	var uVar0;

	func_189(&uVar0, 1);
}

void func_73(bool bParam0)
{
	if (!Global_2883584)
	{
		if (bParam0)
		{
			func_46(4);
		}
		else
		{
			func_16(4);
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "uh oh spaghettios");
	}
}

void func_74(bool bParam0)
{
	if (bParam0)
	{
		func_46(16);
	}
	else
	{
		func_16(16);
	}
}

bool func_75()
{
	return Global_1048583;
}

void func_76(bool bParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!Global_1048583)
	{
		if (bParam0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[LM][UGC] SET_USING_CUSTOM_LEADERBOARD_SETTINGS - Setting to TRUE");
			Global_1048583 = 1;
		}
	}
	else if (!bParam0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[LM][UGC] SET_USING_CUSTOM_LEADERBOARD_SETTINGS - Setting to FALSE");
		vVar0 = -1;
		vVar0.f_1 = -1;
		Global_1048583 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			Global_1049283[iVar3 /*3*/] = { vVar0 };
			Global_1049296[iVar3 /*3*/] = { vVar0 };
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			Global_1049309[iVar3 /*3*/] = { vVar0 };
			iVar3++;
		}
	}
}

bool func_77(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_GLOBAL_LOADER_FLAG_NONE";
		case 1:
			return "UGC_GLOBAL_LOADER_FLAG_USE_CUSTOM_INSTANCE_ID";
		case 2:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_SHUTDOWN";
		case 4:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_MATCH_FINISHED";
		case 8:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_RESULTS";
		case 16:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_LOADED";
		case 32:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_QUIT";
		case 64:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_FORCE_SHUTDOWN_RESULTS";
		case 256:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_CEDE_TO_CONTROLLER";
		case 512:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_OPTIONALS_SET";
		case 1024:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_NOT_ENOUGH_PLAYERS";
		case 2048:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_POSSE_FREEMODE_SHUTDOWN";
		case 4096:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_PLAYLIST_LEADERBOARD_CLOSED";
		case 8192:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_PRELOAD";
		case 16384:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_CANCEL_PRELOAD";
		case 32768:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_PREVENT_LOBBY";
		case 65536:
			return "UGC_GLOBAL_LOADER_FLAG_FMMC_COVERING_REALTIME_MP";
		case 131072:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_APP_ATTEMPTING_TO_LOAD";
		case 262144:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_ALL_CLIENTS_LOADED";
		case 524288:
			return "UGC_GLOBAL_LOADER_FLAG_PED_SUPPRESS_OVERRIDE";
		case 1048576:
			return "UGC_GLOBAL_LOADER_FLAG_MISSION_ENDING_DETECTED";
		case 2097152:
			return "UGC_GLOBAL_LOADER_FLAG_LOBBY_FLOW_HANDLE_PLAYER_AND_PRELOAD";
		case 4194304:
			return "UGC_GLOBAL_LOADER_FLAG_QUIT_WITH_POSSE";
		case 8388608:
			return "UGC_GLOBAL_LOADER_FLAG_UPDATE_MUTE_ALL";
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

char* func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_FLAG_NONE";
		case 2:
			return "UGC_END_FLOW_FLAG_LOBBY_FLOW_LOADING_END_FLOW_SCENE";
		case 4:
			return "UGC_END_FLOW_FLAG_REQUESTING_RESULTS";
		case 8:
			return "UGC_END_FLOW_FLAG_MID_ROUNDS_HOLD_CLEAR";
		case 16:
			return "UGC_END_FLOW_FLAG_END_FLOW_REQUESTED";
		case 32:
			return "UGC_END_FLOW_FLAG_DOING_TRANSITION";
		case 64:
			return "UGC_END_FLOW_FLAG_END_OF_PLAYLIST";
		case 128:
			return "UGC_END_FLOW_FLAG_CONTROLLER_UNNATURAL_TERMINATION";
		case 256:
			return "UGC_END_FLOW_FLAG_WAS_CLAY2_MISSION";
		case 512:
			return "UGC_END_FLOW_FLAG_FADE_SCREEN_AFTER_SESSION_SWAP";
		case 1024:
			return "UGC_END_FLOW_FLAG_MATCHMAKING_REQUEUE";
		case 2048:
			return "UGC_END_FLOW_FLAG_BLOCK_EXTERNAL_FADES";
		case 4096:
			return "UGC_END_FLOW_FLAG_PLAY_STORY_BINK";
		case 8192:
			return "UGC_END_FLOW_FLAG_BINK_HAS_BEEN_STARTED";
		case 16384:
			return "UGC_END_FLOW_FLAG_WAITING_FOR_LEAVE";
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

char* func_80(int iParam0, int iParam1)
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

bool func_81(char* sParam0, int iParam1)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sParam0);
	}
	else
	{
		return true;
	}
	*iParam1++;
	if (*iParam1 > 100)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Timed out - continuing anyway");
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Still loading: ", *iParam1);
	return false;
}

bool func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (MISC::IS_BIT_SET(iLocal_399, 9))
	{
		return true;
	}
	if (Global_1048684.f_377 == 28)
	{
		return false;
	}
	func_190(0, 0, 0, 0);
	switch (Global_1048684.f_377)
	{
		case 27:
			MISC::SET_BIT(&iLocal_401, 2);
			MISC::SET_BIT(&iLocal_401, 4);
			MISC::SET_BIT(&iLocal_401, 11);
			MISC::SET_BIT(&iLocal_401, 10);
			MISC::SET_BIT(&iLocal_398, 4);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@TEAM_GROUPING@HALLOWEEN@TEAM@CELEBRATION_TEAM";
			func_191(423112700, -1302444521, "NPC_", 1);
			iVar0 = 0;
			while (iVar0 < Global_1048684.f_376)
			{
				if (!Global_1048684.f_22[iVar0 /*10*/].f_9)
				{
				}
				else
				{
					func_192(409012051, "SKULL_WIN_", PED::IS_PED_MALE(Global_1048684.f_22[iVar0 /*10*/]));
				}
				iVar0++;
			}
			break;
		case 0:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@1v7";
			func_190(7, 2, 0, 0);
			break;
		case 23:
			MISC::SET_BIT(&iLocal_401, 10);
			MISC::SET_BIT(&iLocal_398, 4);
			MISC::SET_BIT(&iLocal_401, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V1";
			break;
		case 24:
			MISC::SET_BIT(&iLocal_401, 10);
			MISC::SET_BIT(&iLocal_398, 4);
			MISC::SET_BIT(&iLocal_401, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V2";
			break;
		case 25:
			MISC::SET_BIT(&iLocal_401, 10);
			MISC::SET_BIT(&iLocal_398, 4);
			MISC::SET_BIT(&iLocal_401, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V3";
			break;
		case 26:
			MISC::SET_BIT(&iLocal_401, 10);
			MISC::SET_BIT(&iLocal_398, 4);
			MISC::SET_BIT(&iLocal_401, 3);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Hunters_Win_V1";
			break;
		case 21:
			MISC::SET_BIT(&iLocal_401, 10);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_Win_V1";
			func_190(0, 0, 0, 8);
			break;
		case 22:
			MISC::SET_BIT(&iLocal_401, 10);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_FailAlive_V1";
			func_190(0, 0, 0, 8);
			break;
		case 1:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v1";
			func_190(4, 2, 0, 0);
			func_193(2);
			break;
		case 2:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v2";
			func_190(4, 2, 0, 0);
			func_193(0);
			break;
		case 3:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v3";
			func_190(5, 0, 0, 0);
			break;
		case 4:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v4";
			MISC::SET_BIT(&iLocal_401, 7);
			MISC::SET_BIT(&iLocal_401, 5);
			func_190(4, 0, 0, 0);
			break;
		case 5:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@7v1";
			func_190(1, 0, 0, 0);
			func_193(2);
			func_193(3);
			break;
		case 6:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v2";
			MISC::SET_BIT(&iLocal_401, 5);
			func_190(11, 0, 4, 0);
			break;
		case 7:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
			func_190(8, 0, 0, 0);
			func_193(6);
			func_193(7);
			MISC::SET_BIT(&iLocal_401, 8);
			break;
		case 9:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v3";
			func_190(8, 4, 0, 0);
			func_193(6);
			func_193(7);
			break;
		case 8:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_v1";
			func_190(15, 0, 16, 0);
			func_193(2);
			func_193(3);
			MISC::SET_BIT(&iLocal_401, 7);
			MISC::SET_BIT(&iLocal_401, 5);
			break;
		case 13:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@GUNS_IN_THE_AIR";
			func_190(4, 2, 0, 0);
			func_194(5);
			func_194(7);
			MISC::SET_BIT(&iLocal_401, 11);
			break;
		case 12:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_TOMBSTONE";
			func_190(1, 0, 0, 0);
			func_193(2);
			func_193(14);
			func_195(6);
			func_195(7);
			MISC::SET_BIT(&iLocal_401, 10);
			MISC::SET_BIT(&iLocal_401, 11);
			StringConCat(&cLocal_249, "tombstone_", 64);
			break;
		case 14:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@WAGON";
			func_190(4, 0, 0, 0);
			MISC::SET_BIT(&iLocal_401, 9);
			MISC::SET_BIT(&iLocal_401, 7);
			MISC::SET_BIT(&iLocal_401, 5);
			MISC::SET_BIT(&iLocal_401, 10);
			MISC::SET_BIT(&iLocal_401, 11);
			StringConCat(&cLocal_249, "wagon_", 64);
			break;
		case 15:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v1";
			MISC::SET_BIT(&iLocal_401, 6);
			break;
		case 16:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v2";
			MISC::SET_BIT(&iLocal_401, 6);
			break;
		case 17:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v3";
			MISC::SET_BIT(&iLocal_401, 6);
			break;
		case 18:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v4";
			MISC::SET_BIT(&iLocal_401, 6);
			break;
		case 19:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v5";
			MISC::SET_BIT(&iLocal_401, 6);
			break;
		case 20:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v6";
			MISC::SET_BIT(&iLocal_401, 6);
			break;
	}
	if (MISC::IS_BIT_SET(iLocal_401, 6))
	{
		MISC::SET_BIT(&iLocal_401, 4);
	}
	func_196();
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] HAVE_WE_CALCULATED_REQUIREMENTS_FOR_SCENE has selected = ", sLocal_234);
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if (MISC::IS_BIT_SET(iLocal_401, 10))
	{
		if (iVar1 >= 22 || iVar1 <= 5)
		{
			MISC::SET_BIT(&iLocal_399, 31);
			iLocal_279 = 0;
		}
		else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 22))
		{
			MISC::SET_BIT(&iLocal_399, 30);
			if (MISC::IS_BIT_SET(iLocal_401, 12) || MISC::IS_BIT_SET(iLocal_401, 2))
			{
				iLocal_279 = 7;
			}
			else
			{
				iLocal_279 = 18;
			}
		}
		else
		{
			iLocal_279 = 13;
		}
	}
	else if (iVar1 >= 20 || iVar1 <= 5)
	{
		MISC::SET_BIT(&iLocal_399, 31);
		iLocal_279 = 0;
	}
	else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 20))
	{
		MISC::SET_BIT(&iLocal_399, 30);
		iLocal_279 = 18;
	}
	else
	{
		iLocal_279 = 13;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] HAVE_WE_CALCULATED_REQUIREMENTS_FOR_SCENE iHours = ", iVar1);
	iVar2 = Global_3145858.f_229;
	if (iVar2 == 0)
	{
		iVar3 = func_197(Global_3145858.f_196);
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] HAVE_WE_CALCULATED_REQUIREMENTS_FOR_SCENE - Looking up district: ", func_198(iVar3, 0));
		switch (iVar3)
		{
			case 1:
			case 4:
			case 9:
			case 11:
			case 16:
				iVar2 = 1;
				break;
			case 3:
			case 12:
				iVar2 = 5;
				break;
			case 0:
			case 2:
			case 8:
			case 10:
				iVar2 = 2;
				break;
			case 5:
			case 6:
			case 7:
				iVar2 = 3;
				break;
			case 13:
			case 14:
			case 15:
				iVar2 = 4;
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			if (MISC::IS_BIT_SET(iLocal_401, 10))
			{
				bLocal_244 = 1834537343;
				bLocal_247 = 22956558;
				iLocal_248 = joaat("CLOUDS");
				if (MISC::IS_BIT_SET(iLocal_401, 12) || MISC::IS_BIT_SET(iLocal_401, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_399, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_199(-0.26f, -0.042f, 630f, 2354.531f, -2155.473f, -2101.975f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
						func_199(0.354f, -0.55f, 534f, 2695.09f, 1101.355f, -2409.212f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_401, 12))
					{
						bLocal_245 = 324369003;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 31))
				{
					iLocal_248 = joaat("OVERCASTDARK");
					func_199(0.386f, -0.072f, 597f, 1831.857f, 29.148f, -1795.856f);
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 30))
				{
					iLocal_279 = 17;
					if (MISC::IS_BIT_SET(iLocal_401, 9) || MISC::IS_BIT_SET(iLocal_401, 3))
					{
						func_199(-0.04f, 0.323f, 143.5f, -216.629f, 3978.264f, -3208.506f);
					}
					else
					{
						func_199(-0.007f, 0.602f, 374.75f, -35.357f, 146.108f, -3240.619f);
					}
				}
				else
				{
					func_199(0.119f, 0.471f, 374.75f, 1054.363f, 1879.716f, -1177.575f);
				}
			}
			else
			{
				bLocal_244 = joaat("MP001_U_07P_WINLOSE");
				bLocal_247 = 435889881;
				bLocal_245 = -1616778617;
				bLocal_246 = -1852748182;
				iLocal_248 = joaat("SUNNY");
			}
			StringConCat(&cLocal_249, "heartlands", 64);
			break;
		case 2:
			if (MISC::IS_BIT_SET(iLocal_401, 10))
			{
				bLocal_244 = -1645988897;
				bLocal_247 = 1614850834;
				iLocal_248 = joaat("FOG");
				if (MISC::IS_BIT_SET(iLocal_401, 12) || MISC::IS_BIT_SET(iLocal_401, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_399, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_199(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_401, 12))
					{
						bLocal_245 = -281275366;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 30))
				{
					iLocal_279 = 19;
				}
			}
			else
			{
				bLocal_244 = joaat("MP001_MP_WINLOSE_SWAMP");
				bLocal_247 = -2036638644;
				bLocal_245 = -209782407;
				bLocal_246 = -1068985587;
				iLocal_248 = joaat("MISTY");
			}
			StringConCat(&cLocal_249, "swamp", 64);
			StringConCat(&cLocal_257, "_swamp", 64);
			break;
		case 3:
			iLocal_248 = joaat("SNOWLIGHT");
			if (MISC::IS_BIT_SET(iLocal_401, 10))
			{
				bLocal_244 = joaat("MP001_CELEB_SCREEN_SNOW");
				bLocal_247 = 2135160782;
				if (MISC::IS_BIT_SET(iLocal_401, 12) || MISC::IS_BIT_SET(iLocal_401, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_399, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_199(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_401, 12))
					{
						bLocal_245 = -415953049;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 31))
				{
					iLocal_248 = joaat("SNOW");
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 30))
				{
					if (MISC::IS_BIT_SET(iLocal_401, 9) || MISC::IS_BIT_SET(iLocal_401, 3))
					{
						iLocal_279 = 19;
						iLocal_280 = 40;
						func_199(0.021f, 0.102f, 357.2f, -2480.711f, 2086.622f, -2668.159f);
					}
					else
					{
						iLocal_279 = 20;
						func_199(0.179f, 0.701f, 610.75f, -2571.701f, 2238.057f, -2835.739f);
					}
				}
			}
			else
			{
				bLocal_244 = joaat("MP001_MP_WINLOSE_SNOW");
				bLocal_247 = 908140270;
				bLocal_245 = 1417440092;
				bLocal_246 = 649433039;
			}
			StringConCat(&cLocal_249, "snow", 64);
			StringConCat(&cLocal_257, "_snow", 64);
			break;
		case 4:
			iLocal_248 = joaat("HIGHPRESSURE");
			if (MISC::IS_BIT_SET(iLocal_401, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_401, 12) || MISC::IS_BIT_SET(iLocal_401, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_399, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_199(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
						func_199(0.011f, -0.669f, -109.5f, 3843.674f, 407.221f, -81.17f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_401, 12))
					{
						bLocal_245 = 948536844;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 30))
				{
					iLocal_248 = joaat("SUNNY");
					if (MISC::IS_BIT_SET(iLocal_401, 9) || MISC::IS_BIT_SET(iLocal_401, 3))
					{
						iLocal_279 = 20;
					}
					else
					{
						iLocal_279 = 18;
					}
				}
				bLocal_244 = joaat("MP001_CELEB_SCREEN_DESERT");
				bLocal_247 = 1980374609;
			}
			else
			{
				bLocal_244 = joaat("MP001_MP_WINLOSE_DESERT");
				bLocal_247 = 2077558044;
				bLocal_245 = -1336911409;
				bLocal_246 = -1029570958;
			}
			StringConCat(&cLocal_249, "desert", 64);
			StringConCat(&cLocal_257, "_desert", 64);
			break;
		case 5:
			if (MISC::IS_BIT_SET(iLocal_401, 10))
			{
				iLocal_248 = joaat("OVERCASTDARK");
				bLocal_244 = 1755785548;
				bLocal_247 = 1481756818;
				if (MISC::IS_BIT_SET(iLocal_401, 12) || MISC::IS_BIT_SET(iLocal_401, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_399, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_199(0.839f, 0.768f, 577f, 2412.601f, -2271.631f, -2202.794f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_401, 12))
					{
						bLocal_245 = -1344285417;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_401, 9) || MISC::IS_BIT_SET(iLocal_401, 3))
				{
					if (MISC::IS_BIT_SET(iLocal_399, 31))
					{
						iLocal_248 = joaat("CLOUDS");
						func_199(0.978f, -0.448f, 329f, 3233.729f, 262.921f, -2070.11f);
					}
					else if (MISC::IS_BIT_SET(iLocal_399, 30))
					{
						iLocal_279 = 19;
						func_199(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
					}
					else
					{
						func_199(0.738f, 0.189f, 803.75f, 1344.11f, 2463.37f, -1726.229f);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 30))
				{
					iLocal_279 = 19;
					func_199(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
				}
				else
				{
					iLocal_248 = joaat("CLOUDS");
					func_199(0.418f, 0.191f, 698.75f, 487.565f, 1166.487f, -492.181f);
				}
			}
			else
			{
				iLocal_248 = joaat("OVERCASTDARK");
				func_199(0.648f, -0.814f, 481.25f, -2237.9f, -1281.34f, -3051.36f);
				bLocal_244 = joaat("MP001_MP_WINLOSE_FOREST");
				bLocal_247 = 205032683;
				bLocal_245 = 686788855;
				bLocal_246 = -1228362565;
			}
			StringConCat(&cLocal_249, "forest", 64);
			StringConCat(&cLocal_257, "_forest", 64);
			break;
	}
	if (iVar2 != 0)
	{
		if (MISC::IS_BIT_SET(iLocal_399, 31))
		{
			StringConCat(&cLocal_249, "_night", 64);
		}
		else if (MISC::IS_BIT_SET(iLocal_399, 30))
		{
			StringConCat(&cLocal_249, "_dusk", 64);
		}
		else
		{
			StringConCat(&cLocal_249, "_day", 64);
		}
	}
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] HAVE_WE_CALCULATED_REQUIREMENTS_FOR_SCENE sTimeCycleMod = ", &cLocal_249);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] HAVE_WE_CALCULATED_REQUIREMENTS_FOR_SCENE sCullBoxName = ", &cLocal_257);
	if (MISC::IS_BIT_SET(iLocal_401, 10))
	{
		vLocal_235 = { -569.954f, -3648.908f, 81.884f };
	}
	vLocal_235 = { vLocal_235 + func_200() };
	vLocal_241 = { vLocal_241 + func_200() };
	DEBUG::_0xEF256AE8A5A27966(224, 227, 7, "[MMacK][EndFlow2] HAVE_WE_CALCULATED_REQUIREMENTS_FOR_SCENE vEndFlowScenePos ", &vLocal_235);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_233, vLocal_235, vVar4, 0);
	STREAMING::_0xF01D21DF39554115(0);
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_257, true);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	STREAMING::_0x19ABCC581D28E6F9(1);
	MISC::SET_BIT(&iLocal_399, 9);
	return true;
}

bool func_83()
{
	int iVar0;
	int iVar1;

	if (Global_1048684.f_377 == 28)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Anim Scene waiting on synced data");
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_401, 5))
	{
		iLocal_265 = joaat("P_COFFIN01X");
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_233, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_233, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_233, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_233);
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Anim Scene Loading");
		return false;
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_401, 11))
		{
			iVar1 = 0;
			while (iVar1 <= (Global_1048684.f_376 - 1))
			{
				if (Global_1048684.f_22[iVar1 /*10*/].f_9)
				{
					iVar0++;
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = -1;
		}
		func_201(Global_1048684.f_466, iVar0);
	}
	if (!MISC::IS_BIT_SET(iLocal_401, 8))
	{
		func_183(bLocal_246);
	}
	return true;
}

bool func_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 1;
	if (!func_202(bParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] IPL Loading...", func_184(bParam0, 0));
		iVar0 = 0;
	}
	if (!func_202(bParam1))
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] IPL Loading...", func_184(bParam1, 0));
		iVar0 = 0;
	}
	if (!func_202(bParam2))
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] IPL Loading...", func_184(bParam2, 0));
		iVar0 = 0;
	}
	if (MISC::IS_BIT_SET(iLocal_401, 8))
	{
		if (!func_202(bParam3))
		{
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] IPL Loading...", func_184(bParam3, 0));
			iVar0 = 0;
		}
	}
	if (!func_95(&uLocal_366))
	{
		func_50(&uLocal_366, 0, 0);
	}
	else if (func_96(&uLocal_366, 0, 0) > 30000)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] IPL Timed Out...");
		return true;
	}
	return iVar0;
}

bool func_85()
{
	STREAMING::REQUEST_MODEL(iLocal_265, false);
	if (MISC::IS_BIT_SET(iLocal_401, 7))
	{
		STREAMING::REQUEST_MODEL(iLocal_266, false);
	}
	STREAMING::REQUEST_MODEL(joaat("P_CHAIR09X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATESTACK02BX"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATE02X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATE05X"), false);
	if (((((!STREAMING::HAS_MODEL_LOADED(iLocal_265) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR09X"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE01X"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATESTACK02BX"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE02X"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE05X")))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_401, 7))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
		{
			return false;
		}
	}
	if (func_203(&Local_508) == 0)
	{
		return false;
	}
	if (func_203(&Local_534) == 0)
	{
		return false;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Models Loaded");
	return true;
}

bool func_86()
{
	return true;
}

bool func_87(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][UGCSplash] PREPARE_UGC_SPLASH_FLOW flow isn't loaded");
		return false;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][UGCSplash] PREPARE_UGC_SPLASH_FLOW flow is loaded");
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][UGCSplash] PREPARE_UGC_SPLASH_FLOW state machine created");
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][UGCSplash] PREPARE_UGC_SPLASH_FLOW state machine already exists");
	}
	return true;
}

bool func_88()
{
	if (((AUDIO::_0xD9130842D7226045("RDROADV_Winners_Screen_Sounds", 0) && AUDIO::_0xD9130842D7226045("RDRO_Countdown_Clockwork_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Winners_Screen_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(&(Global_1048684.f_471)))
		{
			if (!GRAPHICS::_0x59EA80079B86D8C7(iLocal_14) && !GRAPHICS::_0x59EA80079B86D8C7(iLocal_15))
			{
				return true;
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] preloading stackhash animpostfx");
			}
		}
	}
	return false;
}

void func_89(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = PED::CLONE_PED(*uParam1, 0f, true, true);
	ENTITY::SET_ENTITY_COORDS(*uParam0, *uParam2, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, false, true);
	if (PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		PED::REVIVE_INJURED_PED(*uParam0);
		ENTITY::_SET_ENTITY_HEALTH(*uParam0, ENTITY::GET_ENTITY_MAX_HEALTH(*uParam0, false), 0);
	}
	PED::CLEAR_PED_DECORATIONS(*uParam0);
	PED::_0x2208438012482A1A(*uParam0, true, true);
	ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true);
}

char* func_90(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "EEND_FLOW_CLONE_STATE_INIT";
		case 1:
			return "EEND_FLOW_CLONE_STATE_REFRESH_PED";
		case 2:
			return "EEND_FLOW_CLONE_STATE_CREATION_COMPLETE";
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

void func_91(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		PED::_0x0D7FFA1B2F69ED82(iParam0, -119497276, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1583016131, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1306118081, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1135358822, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 963178068, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 584761656, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 484652361, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 106039335, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 970109184, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1992764136, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1552938618, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, -1752273802, 0, 0);
	}
	else
	{
		PED::_0x0D7FFA1B2F69ED82(iParam0, 271199050, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, -11564651, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 748545073, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 703192777, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, -431205274, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, -124880662, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, -1269108608, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1185191189, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 929966467, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, -2104213554, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1791889474, 0, 0);
		PED::_0x0D7FFA1B2F69ED82(iParam0, 1969399135, 0, 0);
	}
	PED::_0x0D7FFA1B2F69ED82(iParam0, joaat("CLOTHING_ITEM_MASK_PIG_001"), 0, 0);
	PED::_0x0D7FFA1B2F69ED82(iParam0, joaat("CLOTHING_ITEM_SKULLMASK_MR1_000_1"), 0, 0);
	PED::_0x0D7FFA1B2F69ED82(iParam0, joaat("CLOTHING_ITEM_SKULLMASK_MR1_001_1"), 0, 0);
	PED::_0x0D7FFA1B2F69ED82(iParam0, joaat("CLOTHING_ITEM_SKULLMASK_MR1_002_1"), 0, 0);
}

void func_92(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "SET_PED_HAT_VISIBLE: pedIndex is dead");
		return;
	}
	if (bParam1)
	{
		PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HATS"), 0, 1);
	}
	else
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_93(bool bParam0)
{
	if (!bParam0)
	{
		func_140(33);
	}
	else
	{
		func_141(33);
	}
	CAM::_0x63E5841A9264D016(bParam0);
}

void func_94()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_ATTRIBUTES_SET_DISABLED - RPG Global Attributes system is being disabled this frame... ");
	func_204(0);
}

bool func_95(var uParam0)
{
	return uParam0->f_1;
}

int func_96(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_97(int iParam0)
{
	var uVar0;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] TERMINATE_UGC_SPLASH_FLOW called");
	UNK_0x355E72323AEE83CC(-1, 6);
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*iParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] TERMINATE_UGC_SPLASH_FLOW removed state machine");
		uVar0 = *iParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_3);
	}
}

void func_98(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_23(16);
	DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[PROCESS_LEADERBOARD_FLOW] Post Game: ", bVar0, ", State: ", uParam0->f_199);
	switch (uParam0->f_199)
	{
		case 0:
			func_205(1);
			func_206(&(uParam0->f_199), 1);
			break;
		case 1:
			AUDIO::_0xD9130842D7226045("MP_Leaderboard_Sounds", 1);
			func_206(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("LEADERBOARDS"), func_207(bParam1));
			if (iVar1 == 0)
			{
				func_206(&(uParam0->f_199), 3);
			}
			else if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
			{
				DEBUG::_0xF0783374333FD8CE(8, 11, "[MAC] Leaderboard was blocked from starting by another leaderboard");
				func_206(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("LEADERBOARDS"), func_208());
				func_206(&(uParam0->f_199), 4);
			}
			else if (func_209())
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MAC] [MMacK][GloLea] [PROCESS_LEADERBOARD_FLOW] In Preptransition but no UI App running");
				func_206(&(uParam0->f_199), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_APP_BY_HASH(joaat("LEADERBOARDS"));
					func_206(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_206(&(uParam0->f_199), 1);
			}
			else
			{
				func_206(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_180(uParam0, bParam1);
			break;
	}
}

void func_99(var uParam0)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea] INIT_LEADERBOARD_DATA");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_100(int iParam0)
{
	iLocal_391 = iParam0;
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] SET_END_FLOW_STATE ", func_210(iParam0, 0));
}

void func_101(int iParam0)
{
	if (Global_1048586 != iParam0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] SET_CONTROLLER_TO_TERMINATE = ", iParam0);
		Global_1048586 = iParam0;
	}
}

bool func_102()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_5;
}

bool func_103(int iParam0)
{
	return func_177(1, iParam0);
}

bool func_104()
{
	return (Global_1048576 || Global_2883584);
}

void func_105(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1940296.f_105.f_1) && Global_1940296.f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940296.f_105.f_1 = iVar0;
	Global_1940296.f_105 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(680, 162, "HUD_SHOW_BUSYSPINNER - busy spinner being activated by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()), " with message ", func_211(Global_1940296.f_105, 0));
	UNK_0x355E72323AEE83CC(162, 7);
}

bool func_106()
{
	return func_212(4);
}

void func_107(int iParam0, bool bParam1)
{
	Global_1102630.f_3520.f_13 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(40, 38, "KILLCAM__SET_FSM_DESIRED_STATE - eKillcamDesiredState ", func_213(Global_1102630.f_3520.f_13, 0));
	if (bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 38, "KILLCAM__SET_FSM_DESIRED_STATE - Force Moving from ", func_213(Global_1102630.f_3520.f_12, 0), " to ", func_213(Global_1102630.f_3520.f_13, 0));
		Global_1102630.f_3520.f_12 = Global_1102630.f_3520.f_13;
	}
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_108()
{
	bool bVar0;

	switch (iLocal_403)
	{
		case 0:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1072032.f_28725.f_22.f_4)))
			{
				Global_1048582 = 1;
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_STORY_BINK_END_FLOW load");
				iLocal_404 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Global_1072032.f_28725.f_22.f_4), 16512, 0, false, true);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_404))
				{
					StringCopy(&(Global_1072032.f_28725.f_22.f_4), "", 128);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_404);
					func_214(1);
				}
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(1750);
				func_16(4096);
			}
			break;
		case 1:
			bVar0 = true;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1072032.f_28725.f_22.f_20)))
			{
				if (!AUDIO::PREPARE_MUSIC_EVENT(&(Global_1072032.f_28725.f_22.f_20)))
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_STORY_BINK_END_FLOW music event NOT prepared yet...");
					bVar0 = false;
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_STORY_BINK_END_FLOW music event prepared!");
				}
			}
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_STORY_BINK_END_FLOW play");
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_404, true, false) && bVar0)
			{
				func_215(0);
				CAM::DO_SCREEN_FADE_IN(0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_404);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1072032.f_28725.f_22.f_20)))
				{
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1072032.f_28725.f_22.f_20));
					StringCopy(&(Global_1072032.f_28725.f_22.f_20), "", 128);
				}
				func_46(8192);
				func_214(2);
			}
			break;
		case 2:
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_STORY_BINK_END_FLOW wait");
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_404, false))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_214(3);
			}
			break;
		case 3:
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_STORY_BINK_END_FLOW fucking yaldi");
			func_216(0, 0);
			ANIMSCENE::RESET_ANIM_SCENE(iLocal_404, 0);
			func_214(0);
			func_16(4096);
			break;
	}
}

void func_109()
{
	if (fLocal_272 != 0f || fLocal_273 != 0f)
	{
		DEBUG::_0xEF256AE8A5A27966(1632, 227, 7, "[MMacK][EndFlow2] setting cloud layer to ", fLocal_272, " : ", fLocal_273);
		GRAPHICS::_0xB8C984C0D47F4F07(fLocal_272, fLocal_273, iLocal_274);
	}
	if (fLocal_275 != 0f)
	{
		DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "[MMacK][EndFlow2] setting cloud height to ", fLocal_275);
		GRAPHICS::_0xC332C91388F5580B(fLocal_275);
	}
	if ((fLocal_276 != 0f || fLocal_277 != 0f) || fLocal_278 != 0f)
	{
		DEBUG::_0xEF256AE8A5A27966(26208, 227, 7, "[MMacK][EndFlow2] setting cloud noise to ", fLocal_276, " : ", fLocal_277, " : ", fLocal_278);
		GRAPHICS::_0xFE7966DF01452F32(fLocal_276, fLocal_277, fLocal_278);
	}
}

bool func_110()
{
	if (Global_1940296.f_105 != -1)
	{
		return true;
	}
	if (Global_1940296.f_105.f_2 != -1)
	{
		return true;
	}
	return HUD::BUSYSPINNER_IS_ON();
}

void func_111()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	Local_32.f_159 = Global_1051117;
	Local_32.f_160 = Global_1051118;
	iVar0 = Global_1050050.f_14;
	iLocal_283 = Global_1048684.f_20;
	bVar1 = iVar0 > 1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1050050.f_27[0 /*18*/])))
	{
		func_217();
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			Local_287[iVar2 /*18*/].f_16 = Global_1050050.f_27[iVar2 /*18*/].f_16;
			Local_287[iVar2 /*18*/] = { Global_1050050.f_27[iVar2 /*18*/] };
			Local_287[iVar2 /*18*/].f_8 = { Global_1050050.f_27[iVar2 /*18*/].f_8 };
			Local_287[iVar2 /*18*/].f_17 = Global_1050050.f_27[iVar2 /*18*/].f_17;
			iVar2++;
		}
	}
	Local_32.f_162 = { Global_1050888 };
	func_99(&Local_32);
	MISC::SET_BIT(&(Local_32.f_159), 11);
	if (MISC::IS_BIT_SET(Local_32.f_159, 8))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 8);
	}
	if (MISC::IS_BIT_SET(Local_32.f_159, 20))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 20);
	}
	func_218(&Local_32, &(Global_1050050.f_101), &Global_1050969, 1, 1, bVar1, iLocal_283, iVar0, 0, 0, -1);
	func_219(&Local_32, &Global_1050961);
}

void func_112()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;

	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	bVar2 = Global_1048684.f_17;
	if (Local_32.f_150 > 1)
	{
		sVar1 = HUD::_GET_LABEL_TEXT("UIC_EF_WINS");
	}
	else
	{
		sVar1 = HUD::_GET_LABEL_TEXT("UIC_EF_WIN");
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(sVar0, "winnerLabelRawText", sVar1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(sVar0, "winnerLabelColor", joaat("COLOR_WHITE"));
	DATABINDING::_DATABINDING_ADD_DATA_STRING(sVar0, "winnerNameRawText", &(Global_1048684.f_9));
	DATABINDING::_DATABINDING_ADD_DATA_INT(sVar0, "winnerNameColor", bVar2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(sVar0, "mvpLabelRawText", HUD::_GET_LABEL_TEXT("UGC_END_MVP"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(sVar0, "mvpLabelColor", Local_287[0 /*18*/].f_17);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(sVar0, "mvpNameRawText", &(Local_287[0 /*18*/]));
	DATABINDING::_DATABINDING_ADD_DATA_INT(sVar0, "mvpNameColor", Local_287[0 /*18*/].f_17);
}

void func_113(bool bParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "enabled", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "enabled", bParam0);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "enabled", bParam0);
	iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "enabled", bParam0);
}

void func_114(bool bParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	func_220(bParam0);
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
}

void func_115()
{
	if (MISC::IS_BIT_SET(iLocal_401, 12) || MISC::IS_BIT_SET(iLocal_401, 2))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] setting weather overrides for predators");
		MISC::_0x3373779BAF7CAF48("FOG", "fog_MP_Pred");
		MISC::_0x3373779BAF7CAF48("MISTY", "misty_MP_Pred");
		MISC::_0x3373779BAF7CAF48("SHOWER", "shower_MP_Pred");
		MISC::_0x3373779BAF7CAF48("THUNDERSTORM", "thunderstorm_MP_Pred");
	}
	else if (MISC::IS_BIT_SET(iLocal_401, 3))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] clearing weather overrides for hunters");
		MISC::_0x0E71C80FA4EC8147("FOG", true);
		MISC::_0x0E71C80FA4EC8147("MISTY", true);
		MISC::_0x0E71C80FA4EC8147("SHOWER", true);
		MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
	}
}

void func_116(int iParam0)
{
	iLocal_393 = iParam0;
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] SET_END_FLOW_INIT_SUB_STATE ", func_221(iParam0, 0));
}

void func_117()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	iVar0 = 0;
	while (iVar0 <= (Global_1048684.f_376 - 1))
	{
		if (Global_1048684.f_22[iVar0 /*10*/].f_9)
		{
			iVar1++;
			StringCopy(&cVar3, "win_", 16);
			if (iVar1 < 10)
			{
				StringConCat(&cVar3, "0", 16);
			}
			StringIntConCat(&cVar3, iVar1, 16);
			if (!PED::IS_PED_MALE(uLocal_408[iVar0]))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_408[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cVar3, uLocal_408[iVar0], 0);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Adding Winner : ", &cVar3);
		}
		else if (!MISC::IS_BIT_SET(iLocal_401, 4))
		{
			iVar2++;
			StringCopy(&cVar3, "DEAD_0", 16);
			StringIntConCat(&cVar3, iVar2, 16);
			if (!PED::IS_PED_MALE(uLocal_408[iVar0]))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_408[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cVar3, uLocal_408[iVar0], 0);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Adding Loser : ", &cVar3);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_474[iVar0]))
		{
			StringCopy(&cVar3, "horse_0", 16);
			StringIntConCat(&cVar3, iVar0 + 1, 16);
			ENTITY::SET_ENTITY_COLLISION(uLocal_474[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cVar3, uLocal_474[iVar0], 0);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Adding Mount : ", &cVar3);
		}
		iVar0++;
	}
}

void func_118()
{
	NETWORK::_0x65F040D91001ED4B(0);
	MISC::_0xCE7690C0A0D1C36D(0);
	MISC::_SET_WEATHER_TYPE(iLocal_248, true, true, false, 0f, false);
	func_178(1);
	if (iLocal_279 == -1)
	{
		if (MISC::IS_BIT_SET(iLocal_399, 31))
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(0, 0, 0, 0, true);
		}
		else if (MISC::IS_BIT_SET(iLocal_399, 30))
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(18, 0, 0, 0, true);
		}
		else
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(13, 0, 0, 0, true);
		}
	}
	else
	{
		NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iLocal_279, iLocal_280, 0, 0, true);
	}
	iLocal_282 = MISC::GET_GAME_TIMER();
	MISC::SET_BIT(&iLocal_399, 10);
}

int func_119()
{
	int iVar0;

	if (!func_222())
	{
		return 0;
	}
	iLocal_507++;
	if (iLocal_507 < 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_508[iVar0 /*5*/].f_4))
		{
		}
		else
		{
			PED::_SET_PED_OUTFIT_PRESET(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_508[iVar0 /*5*/].f_4), Global_1048684.f_378[iVar0 /*2*/].f_1, false);
			PED::_UPDATE_PED_VARIATION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_508[iVar0 /*5*/].f_4), false, true, true, true, false);
			func_223(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_508[iVar0 /*5*/].f_4), Local_508[iVar0 /*5*/].f_1);
		}
		iVar0++;
	}
	return 1;
}

int func_120()
{
	int iVar0;
	char cVar1[16];

	if (func_224() == 0)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_402, 5))
	{
		if (MISC::IS_BIT_SET(iLocal_401, 9))
		{
			STREAMING::REQUEST_MODEL(joaat("CART06"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("CART06")))
			{
				iLocal_620 = VEHICLE::CREATE_VEHICLE(joaat("CART06"), vLocal_238, 0f, false, true, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_620, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_620, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, "cart06", iLocal_620, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CART06"));
				MISC::SET_BIT(&iLocal_402, 5);
				return 1;
			}
			return 0;
		}
		else
		{
			MISC::SET_BIT(&iLocal_402, 5);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_402, 1))
	{
		STREAMING::REQUEST_MODEL(iLocal_265, false);
		if (MISC::IS_BIT_SET(iLocal_401, 7))
		{
			STREAMING::REQUEST_MODEL(iLocal_266, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
			{
				return 1;
			}
		}
		if (!Global_1048684.f_466)
		{
			STREAMING::REQUEST_MODEL(iLocal_267, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_267))
			{
				return 0;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(iLocal_265))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_268 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_545[iVar0]))
				{
					if (iVar0 == 0)
					{
						if (!Global_1048684.f_466)
						{
							iLocal_545[iVar0] = OBJECT::CREATE_OBJECT(iLocal_267, vLocal_238, false, true, false, false, true);
						}
						else if (MISC::IS_BIT_SET(iLocal_401, 7))
						{
							iLocal_545[iVar0] = OBJECT::CREATE_OBJECT(iLocal_266, vLocal_238, false, true, false, false, true);
						}
						else
						{
							iLocal_545[iVar0] = OBJECT::CREATE_OBJECT(iLocal_265, vLocal_238, false, true, false, false, true);
						}
					}
					else
					{
						iLocal_545[iVar0] = OBJECT::CREATE_OBJECT(iLocal_265, vLocal_238, false, true, false, false, true);
					}
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_225(&(iLocal_545[iVar0]), cVar1);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Coffin for ", iVar0);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
			if (MISC::IS_BIT_SET(iLocal_401, 7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_266);
			}
			MISC::SET_BIT(&iLocal_402, 1);
		}
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_402, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (func_226(iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_562[iVar0]) && MISC::IS_BIT_SET(iLocal_395, iVar0))
				{
					iLocal_562[iVar0] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REPEATER_CARBINE"), 1, vLocal_238, true, 1f);
					StringCopy(&cVar1, "RIFLE_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_225(&(iLocal_562[iVar0]), cVar1);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Gun for ", iVar0);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&iLocal_402, 4);
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_402, 3))
	{
		if (MISC::IS_BIT_SET(iLocal_401, 6))
		{
			STREAMING::REQUEST_MODEL(joaat("P_CRATESTACK02BX"), false);
			STREAMING::REQUEST_MODEL(joaat("P_CRATE02X"), false);
			STREAMING::REQUEST_MODEL(joaat("P_CRATE05X"), false);
			if ((STREAMING::HAS_MODEL_LOADED(joaat("P_CRATESTACK02BX")) && STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE02X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE05X")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_614[0]))
				{
					iLocal_614[0] = OBJECT::CREATE_OBJECT(joaat("P_CRATESTACK02BX"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_01", 16);
					func_225(&(iLocal_614[0]), cVar1);
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "Crate0 Added ", &cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_614[1]))
				{
					iLocal_614[1] = OBJECT::CREATE_OBJECT(joaat("P_CRATE02X"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_02", 16);
					func_225(&(iLocal_614[1]), cVar1);
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "Crate1 Added ", &cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_614[2]))
				{
					iLocal_614[2] = OBJECT::CREATE_OBJECT(joaat("P_CRATE05X"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_03", 16);
					func_225(&(iLocal_614[2]), cVar1);
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "Crate2 Added ", &cVar1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATESTACK02BX"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATE02X"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATE05X"));
				MISC::SET_BIT(&iLocal_402, 3);
				return 0;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(-2131982726, false);
			if (STREAMING::HAS_MODEL_LOADED(-2131982726))
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_269 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_614[iVar0]))
					{
						iLocal_614[iVar0] = OBJECT::CREATE_OBJECT(-2131982726, vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "CRATE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_225(&(iLocal_614[iVar0]), cVar1);
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Crate for ", iVar0);
					}
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-2131982726);
				MISC::SET_BIT(&iLocal_402, 3);
				return 0;
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_402, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CHAIR09X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR09X")))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_270 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_597[iVar0]))
				{
					iLocal_597[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_CHAIR09X"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_225(&(iLocal_597[iVar0]), cVar1);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Chair for ", iVar0);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIR09X"));
			MISC::SET_BIT(&iLocal_402, 2);
			return 0;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_402, 6))
	{
		STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_226(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_579[iVar0]) && MISC::IS_BIT_SET(iLocal_396, iVar0))
					{
						iLocal_579[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEJD01X"), vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "JD_BOTTLE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_225(&(iLocal_579[iVar0]), cVar1);
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Bottle for ", iVar0 + 1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_402, 6);
			return 0;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_402, 7))
	{
		STREAMING::REQUEST_MODEL(joaat("P_SHOVEL02X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_SHOVEL02X")))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_226(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_588[iVar0]) && MISC::IS_BIT_SET(iLocal_397, iVar0))
					{
						iLocal_588[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_SHOVEL02X"), vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "SHOVEL_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_225(&(iLocal_588[iVar0]), cVar1);
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Shovel for ", iVar0 + 1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_402, 7);
			return 0;
		}
	}
	if ((((((MISC::IS_BIT_SET(iLocal_402, 3) && MISC::IS_BIT_SET(iLocal_402, 2)) && MISC::IS_BIT_SET(iLocal_402, 1)) && MISC::IS_BIT_SET(iLocal_402, 6)) && MISC::IS_BIT_SET(iLocal_402, 7)) && MISC::IS_BIT_SET(iLocal_402, 4)) && MISC::IS_BIT_SET(iLocal_402, 5))
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (!func_95(&uLocal_370))
	{
		func_50(&uLocal_370, 0, 0);
	}
	else if (func_96(&uLocal_370, 0, 0) >= 8500)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] HAS_IPL_TIMED_OUT - Start end screen timed out, populate leaderboard and terminate UGC Controller script");
		return 1;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] HAS_IPL_TIMED_OUT - not yet");
	return 0;
}

void func_122(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_123()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		PED::RESURRECT_PED(iVar1);
	}
	if (PED::_IS_PED_HOGTIED(iVar1))
	{
		TASK::_0x79559BAD83CCD038(iVar1, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
	}
	if (PED::_0xB655DB7582AEC805(iVar1))
	{
		PED::_0xF6262491C7704A63(iVar1, 0);
	}
	PLAYER::_0x64FF4BF9AF59E139(iVar0, 1);
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_408[iVar0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_408[iVar0], true);
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_408[iVar0], true);
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_408[iVar0], true))
			{
				PED::RESURRECT_PED(uLocal_408[iVar0]);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_408[iVar0], false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_408[iVar0], true);
			PED::_0xC991EF46FE323867(uLocal_408[iVar0], 1);
			PED::_0x2208438012482A1A(uLocal_408[iVar0], true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iVar0 /*10*/]))
		{
			PED::DELETE_PED(&(Global_1048684.f_22[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_125(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3[7];
	int iVar53;
	int iVar54;

	func_136();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*23*/])->f_14 == 255 || (uParam0[iVar0 /*23*/])->f_14 == iLocal_405)
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0[iVar0 /*23*/])->f_14))
		{
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "SET_EXCLUSIVE_CHAT_WITH_LEADERBOARD_PLAYERS - Adding player ", PLAYER::GET_PLAYER_NAME((uParam0[iVar0 /*23*/])->f_14), " as a chat target.");
			func_227((uParam0[iVar0 /*23*/])->f_14);
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar1 = GANG::_0x901E0DC25080C8B9(iLocal_405);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_EXCLUSIVE_CHAT_WITH_LEADERBOARD_PLAYERS - bIncludePosseMembers = TRUE.");
		if ((GANG::_0xD6F6ACF4392187FB(iVar1) && GANG::_0x0F99F6436528A089(iVar1)) && GANG::_0x93A91A351A07360E(iVar1))
		{
			iVar53 = GANG::_0xD1BF325C8252A982(iVar1, &Var3);
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "SET_EXCLUSIVE_CHAT_WITH_LEADERBOARD_PLAYERS - Posse has ", iVar53, " members.");
			if (iVar53 > 1 && iVar53 < 7)
			{
				iVar2 = 0;
				while (iVar2 <= (iVar53 - 1))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var3[iVar2 /*7*/]));
					if (iVar54 == 255 || iVar54 == iLocal_405)
					{
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
					}
					else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var3[iVar2 /*7*/])))
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "SET_EXCLUSIVE_CHAT_WITH_LEADERBOARD_PLAYERS - ", PLAYER::GET_PLAYER_NAME(iVar54), " is in posse but not in same session. Don't add.");
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "SET_EXCLUSIVE_CHAT_WITH_LEADERBOARD_PLAYERS - Found posse member ", PLAYER::GET_PLAYER_NAME(iVar54), ", adding them if not already a chat target.");
						func_227(iVar54);
					}
					iVar2++;
				}
			}
		}
	}
}

bool func_126()
{
	bool bVar0;

	if (!func_95(&uLocal_372))
	{
		func_50(&uLocal_372, 0, 0);
	}
	if (func_228())
	{
		if (func_96(&uLocal_372, 0, 0) < 0 && iLocal_363 > 2000)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Something went wrong..");
			bVar0 = true;
		}
		else if (func_96(&uLocal_372, 0, 0) > 8500)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Something timed out..");
			bVar0 = true;
		}
		else if (STREAMING::_0x0909F71B5C070797() && func_96(&uLocal_372, 0, 0) > 4500)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Scene is loaded..");
			bVar0 = true;
		}
		if (bVar0)
		{
			if (iLocal_233 != -1)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_233, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_233);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] START_ANIM_SCENE called..");
					return false;
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] iEndAnimSceneID is running");
					func_19(&uLocal_16, 0);
					return true;
				}
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] iEndAnimSceneID is -1");
			}
		}
		else
		{
			iLocal_363++;
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] waiting for screen timer..");
		}
	}
	return false;
}

void func_127(int iParam0)
{
	iLocal_392 = iParam0;
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] SET_END_FLOW_SUB_STATE ", func_229(iParam0, 0));
}

void func_128()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_HIDE_BUSYSPINNER - hiding busy spinner");
	Global_1940296.f_105 = -1;
	Global_1940296.f_105.f_1 = 0;
	UNK_0x355E72323AEE83CC(-1, 6);
}

bool func_129()
{
	float fVar0;

	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_233, false))
	{
		return false;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_233);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] IS_CELEBRATION_SCENE_PHOTO_READY - CAM COUNT = ", ANIMSCENE::_0x4822A65D5AF64E69(iLocal_233));
	if (fVar0 > 0.92f)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] IS_CELEBRATION_SCENE_PHOTO_READY - GET_ANIM_SCENE_PHASE");
		return true;
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "[MMacK][EndFlow2] IS_CELEBRATION_SCENE_PHOTO_READY - GET_ANIM_SCENE_PHASE : fCurrentPhase ", fVar0);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_233) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_233, 0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] IS_CELEBRATION_SCENE_PHOTO_READY - IS_ANIM_SCENE_EXITING_THIS_FRAME");
		return true;
	}
	if (func_95(&uLocal_372) && func_96(&uLocal_372, 0, 0) > 30000)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] IS_ANIM_SCENE_PHOTO_READY - timed out");
		return true;
	}
	return false;
}

void func_130(bool bParam0)
{
	char* sVar0;

	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (bParam0 && MISC::IS_STRING_NULL_OR_EMPTY(&(Local_287[0 /*18*/])))
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(sVar0, "showMvpComponent", bParam0);
}

void func_131(bool bParam0)
{
	char* sVar0;

	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(sVar0, "showWinnerComponent", bParam0);
}

void func_132()
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	struct<2> Var4;

	iVar0 = PLAYER::PLAYER_ID();
	sVar1 = PLAYER::GET_PLAYER_NAME(iVar0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_287[0 /*18*/]))) && MISC::ARE_STRINGS_EQUAL(&(Local_287[0 /*18*/]), sVar1))
	{
		Var2 = { func_55(joaat("TIMES_MVP"), 0) };
		STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
		Global_1049159.f_8 = 1;
		Global_1049269++;
	}
	else
	{
		Global_1049269 = 0;
	}
	Var4 = { func_55(joaat("HIGHEST_STREAK_MVP"), joaat("SHOWDOWN")) };
	STATS::_0x91A4F58E01ED5E4C(&Var4, Global_1049269);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] The Match MVP was ", &(Local_287[0 /*18*/]));
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] I am ", sVar1);
}

void func_133(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_230(&((uParam1[iVar0 /*23*/])->f_14)))
		{
			func_231(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_134(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_232(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

bool func_135()
{
	vector3 vVar0;
	int iVar4;

	iVar4 = 361663434;
	if (!func_233())
	{
		if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
			{
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2][AlertSpam] EVENT ", func_234(vVar0.x, 0));
				switch (vVar0.x)
				{
					case -1203660660:
						if (vVar0.z == -871313792 && !MISC::IS_BIT_SET(iLocal_399, 3))
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2][AlertSpam] i like");
							func_235(1, 0);
							AUDIO::PLAY_SOUND_FRONTEND("like", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1691214074 && !MISC::IS_BIT_SET(iLocal_399, 3))
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2][AlertSpam] i dislike");
							func_235(0, 0);
							AUDIO::PLAY_SOUND_FRONTEND("dislike", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1823128591)
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2][AlertSpam] leaderboard request");
							func_236(&uLocal_286);
						}
						else if (vVar0.z == 1535578700)
						{
							func_237();
							CAM::DO_SCREEN_FADE_OUT(150);
							AUDIO::PLAY_SOUND_FRONTEND("enter", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2][AlertSpam] EVENT READ : ", vVar0.z);
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
			}
		}
	}
	else
	{
		if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
		{
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
		return true;
	}
	return false;
}

void func_136()
{
	var uVar0;

	if (SCRIPTS::_0x179A6F0EE2E79026(&(Global_1072032.f_23000.f_5)))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 187, "NET_HUD__CLEAR_ALL_EXCLUSIVE_CHAT_PLAYERS: Clearing exclusive chat with all players.");
		Global_1072032.f_23000.f_5 = uVar0;
	}
}

void func_137()
{
	int iVar0;

	iVar0 = func_239(func_238());
	if (!MISC::IS_BIT_SET(iLocal_399, 6))
	{
		if (iVar0 > 0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] next lobby timer set");
			MISC::SET_BIT(&iLocal_399, 6);
			func_240(&Local_32, &cLocal_232, iVar0);
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] iTimeForNextJob = ", iVar0);
		if (iVar0 < 0)
		{
			func_186(&Local_32, &cLocal_232);
		}
		else
		{
			func_241(&cLocal_232, iVar0);
		}
	}
}

void func_138()
{
	char cVar0[32];
	bool bVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[32];
	int iVar11;
	char[] cVar12[8];

	if (!MISC::IS_BIT_SET(iLocal_400, 2))
	{
		if (func_242(&(Global_1048684.f_435)))
		{
			bVar4 = (BUILTIN::TO_FLOAT(Global_1048684.f_447) / 100f);
			StringCopy(&cVar0, func_243(bVar4, 2), 32);
			func_244(&Local_32, &cVar0);
			if (Global_1048684.f_470 != 0)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_CASH_GOLD_XP_DATABINDING incremented gold stat by ", Global_1048684.f_447);
				func_56(func_55(joaat("GOLD_WON"), Global_1048684.f_470), Global_1048684.f_447);
			}
			MISC::SET_BIT(&iLocal_400, 2);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 3))
	{
		bVar5 = (func_242(&(Global_1048684.f_403)) && func_242(&(Global_1048684.f_419)));
		if (bVar5)
		{
			bVar6 = (BUILTIN::TO_FLOAT((Global_1048684.f_403.f_8 + Global_1048684.f_419.f_8)) / 100f);
			DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "[MMacK][EndFlow2] PROCESS_CASH_GOLD_XP_DATABINDING - fCash ", bVar6);
			StringCopy(&cVar7, func_243(bVar6, 2), 32);
			func_245(&Local_32, &cVar7);
			iVar11 = (Global_1048684.f_403.f_6 + Global_1048684.f_419.f_6);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] PROCESS_CASH_GOLD_XP_DATABINDING - iXP ", iVar11);
			MISC::_INT_TO_STRING(iVar11, "%d", &cVar12);
			func_246(&Local_32, &cVar12);
			if (Global_1048684.f_470 != 0)
			{
				func_56(func_55(joaat("CASH_WON"), Global_1048684.f_470), (Global_1048684.f_403.f_8 + Global_1048684.f_419.f_8));
			}
			MISC::SET_BIT(&iLocal_400, 3);
		}
	}
}

void func_139(int iParam0)
{
	func_247(&(Global_1072032.f_23926.f_4), iParam0);
}

int func_140(int iParam0)
{
	if (func_248(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_249(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (func_250(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_249(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

bool func_142()
{
	if (Global_1102630.f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102630.f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102630.f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_251(2048))
	{
		return true;
	}
	if (func_252(1))
	{
		return true;
	}
	if (Global_1102630.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_143(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_144(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

void func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	UNK_0x355E72323AEE83CC(36, 7);
	DEBUG::_0xF0783374333FD8CE(168, 36, "__NET_SET_PLAYER_CONTROL_ON - Called from ", UNK_0x8F77B33B6A34D8BA(), " - Don't call this every frame!");
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_ON - NPCF_RETAIN_TRANSITION_POLISH_EFFECTS is set.  Hope you meant that.");
	}
	else
	{
		func_253();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_146(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	UNK_0x355E72323AEE83CC(36, 7);
	DEBUG::_0xF0783374333FD8CE(168, 36, "__NET_SET_PLAYER_CONTROL_OFF - Called from ", UNK_0x8F77B33B6A34D8BA(), " - Don't call this every frame!");
	if (!bParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Invisible");
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Invincible");
	}
	if (bParam2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Freeze Position");
	}
	if (bParam3)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Clear Tasks");
	}
	if (bParam6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Clear Tasks but allow crouching");
	}
	if (bParam4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Leave Camera On");
	}
	if (bParam5)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Disable Ped Backoff On");
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
			DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Collision disabled");
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

void func_147(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];
	char cVar24[64];
	char cVar32[64];
	int iVar40;
	char cVar41[16];
	int iVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	struct<4> Var52;
	struct<4> Var56;
	struct<4> Var60;
	struct<4> Var64;
	char cVar68[32];
	char cVar72[32];
	char cVar76[32];
	char cVar80[32];

	StringCopy(&cVar0, PLAYER::GET_PLAYER_NAME(iParam3), 64);
	iVar40 = func_254(uParam0, iParam3);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][REVCAM][UGCSplash] PROCESS_PERSONAL_END_STATS_DATABINDING_DISPLAY - Creating reverse cam stats player ", &cVar0);
	if (!MISC::IS_BIT_SET(uParam2->f_15, 0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 5, "[UGC][REVCAM][UGCSplash] We don't have a splash displaying - have you called PROCESS_DISPLAYING_UGC_SPLASH_FLOW? ");
		return;
	}
	if (bParam4)
	{
		StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, "UIC_EF_TIM"), 64);
		StringCopy(&cVar41, "POS_", 16);
		StringIntConCat(&cVar41, iVar40 + 1, 16);
		StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, &cVar41), 64);
		if ((BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7) == 88400000 || BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7) == 72800000) || BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7) == 86400000)
		{
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, "POS_OOT"), 64);
		}
		else
		{
			MISC::SET_BIT(&iVar43, 7);
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(10, "UIC_EF_TIM", func_255(BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7), iVar43, 0)), 64);
		}
	}
	else
	{
		iVar48 = func_256(uParam0[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar49 = func_257(uParam0[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar50 = func_258(uParam0[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar51 = func_259(uParam0[iVar40 /*23*/]);
		Var52 = { func_260(iVar48, uParam1->f_159, &bVar44) };
		Var56 = { func_261(iVar49, uParam1->f_159, uParam1->f_160, &bVar45) };
		Var60 = { func_262(iVar50, uParam1->f_159, uParam1->f_160, &bVar46) };
		Var64 = { func_263(&bVar47) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var52))
		{
			if (bVar44)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Literal String 1.");
				IntToString(&cVar68, iVar48, 32);
				StringConCat(&cVar68, " ", 32);
				StringConCat(&cVar68, &Var52, 32);
				StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar68), 64);
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Label 1.");
				cVar68 = { Var52 };
				StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, &cVar68, iVar48), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var56))
		{
			if (bVar45)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Literal String 2.");
				IntToString(&cVar72, iVar49, 32);
				StringConCat(&cVar72, " ", 32);
				StringConCat(&cVar72, &Var56, 32);
				StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar72), 64);
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Label 2.");
				cVar72 = { Var56 };
				StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, &cVar72, iVar49), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var60))
		{
			if (bVar46)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Literal String 3.");
				IntToString(&cVar76, iVar50, 32);
				StringConCat(&cVar76, " ", 32);
				StringConCat(&cVar76, &Var60, 32);
				StringCopy(&cVar24, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar76), 64);
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Label 3.");
				cVar76 = { Var60 };
				StringCopy(&cVar24, MISC::_CREATE_VAR_STRING(2, &cVar76, iVar50), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var64))
		{
			if (bVar47)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Literal String 4.");
				IntToString(&cVar80, iVar51, 32);
				StringConCat(&cVar80, " ", 32);
				StringConCat(&cVar80, &Var64, 32);
				StringCopy(&cVar32, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar80), 64);
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: Doing Label 4.");
				cVar80 = { Var64 };
				StringCopy(&cVar32, MISC::_CREATE_VAR_STRING(2, &cVar80, iVar51), 64);
			}
		}
		DEBUG::_0xEF256AE8A5A27966(699040, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: tlStat1_base returned ", &cVar68, ", tlStat2_base returned ", &cVar72, " tlStat3_base returned ", &cVar76, " tlStat4_base returned ", &cVar80);
		DEBUG::_0xEF256AE8A5A27966(139808, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: bisLiteral1: ", bVar44, " bisLiteral2: ", bVar45, " bisLiteral3: ", bVar46, " bisLiteral4: ", bVar47);
		DEBUG::_0xEF256AE8A5A27966(699040, 227, 7, "[MMacK][UGCSplash] PROCESS_FINAL_SHOT_HUD_DISPLAY: tlStat1 returned ", &cVar8, ", tlStat2 returned ", &cVar16, " tlStat3 returned ", &cVar24, " tlStat4 returned ", &cVar32);
	}
	DEBUG::_0xEF256AE8A5A27966(699040, 227, 7, "[MMacK][UGCSplash] PROCESS_PERSONAL_END_STATS_DATABINDING_DISPLAY: ", &cVar8, ", ", &cVar16, ", ", &cVar24, ", ", &cVar32);
	func_148(uParam2, &cVar0, "", &cVar8, &cVar16, &cVar24, &cVar32, joaat("COLOR_PURE_WHITE"));
	func_19(uParam2, 1);
}

void func_148(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, bool bParam7)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, bParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", bParam7);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[0]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[0], sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[1]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[1], sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[2]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[2], sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[3]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[3], sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

bool func_149(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_DISPLAYING_UGC_SPLASH_FLOW - uiFlow isnt loaded");
		return false;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return true;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][UGCSplash] PROCESS_DISPLAYING_UGC_SPLASH_FLOW - waiting to be able to request a transition");
		func_87(uParam0);
		return false;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_DISPLAYING_UGC_SPLASH_FLOW - UI_STATE_MACHINE_REQUEST_TRANSITION called : ", uParam0->f_2);
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return true;
}

bool func_150()
{
	return Global_1896750.f_398;
}

void func_151()
{
	func_264(0);
	DEBUG::_0xF0783374333FD8CE(8, 162, "[PLAYER_MENU_FORCE_SHUTDOWN] A script has force shutdown the player menu | Printing a Callstack");
	UNK_0x355E72323AEE83CC(162, 6);
}

bool func_152()
{
	return Global_1940463.f_2;
}

void func_153()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SATCHEL")) > 0)
	{
		Global_1940463.f_13 = 1;
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_FORCE_SHUTDOWN - shutdown requested by ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(168, 158, "SATCHEL_FORCE_SHUTDOWN - shutdown requested by ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()), ", but the satchel script is not running! Ignoring this request.");
	}
	UNK_0x355E72323AEE83CC(158, 6);
}

bool func_154(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_155(int iParam0)
{
	return Global_262152 == iParam0;
}

bool func_156()
{
	return CAM::_0xA14D5FE82BCB1D9E();
}

void func_157(char* sParam0)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "CLEAR_END_FLOW_FLAG ", sParam0);
	MISC::CLEAR_BIT(&Global_1048684, sParam0);
}

char* func_158(int iParam0, int iParam1)
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

void func_159(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_141(70);
		if (bParam1)
		{
			func_141(73);
		}
	}
	else
	{
		func_140(70);
		func_140(73);
	}
}

void func_160(int iParam0)
{
	func_247(&Global_1051135, iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 21, "SET_UGC_END_FLOW_TRANSITION_OPTION - Setting ", func_265(iParam0, 0));
}

void func_161(vector3 vParam0, bool bParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];

	if (bParam4)
	{
		StringCopy(&cVar0, MISC::_0x6C4DBF553885F9EB(vParam0), 64);
		StringCopy(&cVar8, MISC::_0x2B6846401D68E563(bParam3, 4), 64);
		DEBUG::_0xF0783374333FD8CE(680, 36, "NET_PLAYER_STATUS_USE_CUSTOM_POSITION_WITH_MOUNT - ", &cVar0, ", ", &cVar8);
		Global_1102630.f_3837 = { vParam0 };
		Global_1102630.f_3840 = bParam3;
		func_141(50);
	}
	else
	{
		func_140(50);
	}
}

void func_162(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_141(66);
		if (bParam1)
		{
			func_141(73);
		}
	}
	else
	{
		func_140(66);
		func_140(50);
		func_140(73);
	}
}

int func_163(vector3 vParam0, var uParam3)
{
	if (func_154(vParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return 0;
	}
	if (func_266(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return 0;
	}
	if (func_177(4, 255))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - An override had already been primed.  This will wipe out the previous setting.");
	}
	func_141(4);
	func_267(&(Global_1102630.f_3879));
	Global_1102630.f_3879.f_6 = { vParam0 };
	Global_1102630.f_3879 = uParam3;
	Global_1102630.f_3879.f_5 = 1;
	Global_1102630.f_26.f_3341 = 0;
	Global_1102630.f_26.f_3342 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE called.  Output starting...");
	func_268(Global_1102630.f_3879, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE ...Output Complete.");
	return 1;
}

int func_164()
{
	return Global_1893599.f_2;
}

void func_165(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_269(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { Global_1072032.f_23926.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_141(92);
	if (func_270(iParam0, &uVar0))
	{
		func_271(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_140(0);
		}
		DEBUG::_0xF0783374333FD8CE(40, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_IN_REGION - Respawning in ", func_272(iParam0, 0));
		return;
	}
	func_273(Var30.f_6, Var30, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	if (bParam1)
	{
		func_140(0);
	}
	DEBUG::_0x9A6C65DDDBEC9C52(2728, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_IN_REGION - Couldn't load region data for ", func_272(iParam0, 0), ", respawning near ", MISC::_0x6C4DBF553885F9EB(Var30.f_6), ".");
}

bool func_166()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_167(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 21, "BOOT_UGC_END_FLOW_TRANSITION - starting");
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051139))
	{
		DEBUG::_0xF0783374333FD8CE(8, 21, "BOOT_UGC_END_FLOW_TRANSITION - thread already exists.  requesting exitand bailing.");
		SCRIPTS::_0x7DE4643157AD646C(Global_1051139);
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT("net_ugc_end_flow_transition_handler");
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_end_flow_transition_handler"))
	{
		Global_1051138 = 0;
		Global_1051139 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_ugc_end_flow_transition_handler", bParam0, 1, 5506);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_end_flow_transition_handler");
		DEBUG::_0xF0783374333FD8CE(8, 21, "BOOT_UGC_END_FLOW_TRANSITION - done");
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(8, 21, "BOOT_UGC_END_FLOW_TRANSITION - loading");
	return false;
}

void func_168()
{
	Global_1051138 = 1;
	DEBUG::_0xF0783374333FD8CE(8, 21, "INITIATE_UGC_END_FLOW_TRANSITION");
}

void func_169()
{
	Global_1072032.f_28725.f_3 = 0;
	Global_1072032.f_28725.f_4 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__UNREGISTER_UGC_OUTRO_THREAD");
}

void func_170()
{
	func_274(2);
}

void func_171(int iParam0)
{
	if (!func_275(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 - (Global_1102630.f_26.f_9 && iParam0));
}

void func_172()
{
	bool bVar0;
	int iVar1;

	if (func_266(255) == 4 || func_276(0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_RESET_ALL_FLAGS_AND_INITIALIZE - You are currently not in a playing state OR you're flagged for respawn.  We'll try this again on post respawn.");
		UNK_0x355E72323AEE83CC(36, 6);
		Global_1102630.f_3955 = 1;
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_RESET_ALL_FLAGS_AND_INITIALIZE - Starting...");
	bVar0 = func_276(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102630.f_4[iVar1] = 0;
		iVar1++;
	}
	func_141(113);
	func_141(135);
	if (bVar0)
	{
		func_141(36);
	}
	Global_1102630.f_3952 = 0;
	Global_1102630.f_3953 = 0;
	Global_1102630.f_3954 = 0;
	Global_1102630.f_3955 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_RESET_ALL_FLAGS_AND_INITIALIZE - Done!");
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_173(bool bParam0)
{
	if (!bParam0)
	{
		func_140(29);
	}
	else
	{
		func_141(29);
	}
}

void func_174(bool bParam0)
{
	if (!bParam0)
	{
		func_140(15);
	}
	else
	{
		func_141(15);
	}
}

void func_175(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	char* sVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&sVar1, iVar0);
	DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[PEDSHOT] UI_COMMON_REQUEST_SINGLE_PEDSHOT - Requested for player ", iVar0, ", call UI_COMMON_REQUEST_SPECIFIC_PEDSHOTS with iPlayersToPedshotBS ", sVar1, ", bBroadcast ", sParam2);
	func_277(uParam0, sVar1, sParam2);
}

void func_176()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

bool func_177(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_278(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_279())
	{
		return func_278(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_278(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

void func_178(bool bParam0)
{
	if (Global_1049271 != bParam0)
	{
		Global_1049271 = bParam0;
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC] SET_INSTANCED_CONTENT_OVERRIDING_WEATHER - Setting Instanced Content Overriding Weather to ", MISC::_0xF216F74101968DB0(bParam0));
		UNK_0x355E72323AEE83CC(227, 6);
	}
}

void func_179(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
}

void func_180(var uParam0, bool bParam1)
{
	int iVar0;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea] CLEANUP_LEADERBOARD_FLOW called");
	UNK_0x355E72323AEE83CC(-1, 6);
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("LEADERBOARDS"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea] CLEANUP_LEADERBOARD_FLOW removed databinding");
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_143[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_143[iVar0]);
		}
		iVar0++;
	}
	AUDIO::_0x531A78D6BF27014B("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_181(&(uParam0->f_162));
	}
	func_205(0);
}

void func_181(var uParam0)
{
	int iVar0;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[PEDSHOT] UI_COMMON_REMOVE_PEDSHOT_REQUESTS called");
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_182()
{
	Global_1072032.f_15 = 0;
	Global_1072032.f_14 = 50f;
	DEBUG::_0xF0783374333FD8CE(8, 32, "NET_EVENTS__CLEAR_MAX_DAMAGE_FEED_ALERT_SIZE");
}

int func_183(bool bParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(bParam0))
	{
		return 1;
	}
	if (func_280())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 0, "REMOVE_IPL_HASH_SAFE - Could not remove ", func_184(bParam0, 0), " b/c player is in the respawn sequence.");
		return 0;
	}
	STREAMING::_REMOVE_IMAP(bParam0);
	return 0;
}

var func_184(bool bParam0, int iParam1)
{
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_185()
{
	int iVar0;
	char cVar1[16];

	if (iLocal_233 != -1)
	{
		ANIMSCENE::ABORT_ANIM_SCENE(iLocal_233, false);
		func_281(&Local_508);
		func_282(&Local_508);
		func_281(&Local_534);
		func_282(&Local_534);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iVar0 /*10*/]))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Global ped deleted");
				PED::DELETE_PED(&(Global_1048684.f_22[iVar0 /*10*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_408[iVar0]))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] Local ped deleted");
				PED::DELETE_PED(&(uLocal_408[iVar0]));
			}
			iVar0++;
		}
		if (iLocal_233 != -1)
		{
			ANIMSCENE::ABORT_ANIM_SCENE(iLocal_233, false);
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_545[iVar0]))
				{
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_545[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_545[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_614[iVar0]))
				{
					StringCopy(&cVar1, "CRATE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_614[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_614[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_562[iVar0]))
				{
					StringCopy(&cVar1, "RIFLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_562[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_562[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_579[iVar0]))
				{
					StringCopy(&cVar1, "JD_BOTTLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_579[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_579[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_588[iVar0]))
				{
					StringCopy(&cVar1, "SHOVEL_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_588[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_588[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_597[iVar0]))
				{
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_597[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_597[iVar0]));
				}
				iVar0++;
			}
		}
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_233, 0);
		iLocal_233 = -1;
	}
}

void func_186(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", " ");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*sParam1);
}

void func_187(bool bParam0)
{
	Global_1940296.f_19 = !bParam0;
}

int func_188(bool bParam0, int* iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (bParam0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Invalid award requested, aborting");
		UNK_0x355E72323AEE83CC(205, 4);
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - CashInventory Session is NOT ready, aborting");
		UNK_0x355E72323AEE83CC(205, 8);
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(bParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Award ", func_283(bParam0, 0), "(", bParam0, ") has already reached maxclaims. Ignoring and returning TRUE.");
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		DEBUG::_0xF0783374333FD8CE(10920, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - bPosseSplits: ", MISC::_0xF216F74101968DB0(bParam7), " bGangActive: ", MISC::_0xF216F74101968DB0(bVar0), " so bPosseSplits is now: ", MISC::_0xF216F74101968DB0(bVar0));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_284(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), iParam1))
		{
			DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Failed to request award ", func_283(bParam0, 0), "(", bParam0, ")");
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), iParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Posse Split - Failed to request award ", func_283(bParam0, 0), "(", bParam0, ")");
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_285(iParam1, bParam0, Var3);
	return 1;
}

void func_189(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = *uParam0;
	if (bParam1)
	{
		iVar0 = 0;
	}
	DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC] PROCESS_IPLS - Called with bCleanup ", bParam1, ", eIPLsToApply = ", iVar0);
	iVar1 = 0;
	while (iVar1 <= (func_286(16385) - 1))
	{
		iVar2 = func_287(iVar1);
		DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[UGC] PROCESS_IPLS - IPL flag ", func_288(iVar2, 0), " set with bActive ", func_77(iVar0, iVar2));
		func_289(iVar2, func_77(iVar0, iVar2), uParam0);
		iVar1++;
	}
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iLocal_268 = iParam0;
	iLocal_269 = iParam1;
	iLocal_270 = iParam2;
	iLocal_271 = iParam3;
	if (iLocal_271 == 1)
	{
	}
}

void func_191(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	vector3 vVar0[24];
	int iVar3;

	StringCopy(&cVar0, sParam2, 24);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (!func_77(Global_1048684.f_378[iVar3 /*2*/], 4))
		{
		}
		else
		{
			if (func_77(Global_1048684.f_378[iVar3 /*2*/], 2))
			{
				Local_508[iVar3 /*5*/] = iParam1;
			}
			else
			{
				Local_508[iVar3 /*5*/] = iParam0;
			}
			StringCopy(&cVar0, sParam2, 24);
			if (iVar3 < 10)
			{
				StringConCat(&cVar0, "0", 24);
			}
			StringIntConCat(&cVar0, iVar3 + 1, 24);
			if (bParam3 && func_77(Global_1048684.f_378[iVar3 /*2*/], 2))
			{
				StringConCat(&cVar0, "F", 24);
			}
			Local_508[iVar3 /*5*/].f_1 = { cVar0 };
		}
		iVar3++;
	}
}

void func_192(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1[24];

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_534[iVar0 /*5*/] != 0)
		{
		}
		else
		{
			StringCopy(&cVar1, sParam1, 24);
			if (iVar0 < 10)
			{
				StringConCat(&cVar1, "0", 24);
			}
			StringIntConCat(&cVar1, iVar0 + 1, 24);
			if (!bParam2)
			{
				StringConCat(&cVar1, "F", 24);
			}
			Local_534[iVar0 /*5*/].f_1 = { cVar1 };
			Local_534[iVar0 /*5*/] = iParam0;
			return;
		}
		iVar0++;
	}
}

void func_193(int iParam0)
{
	MISC::SET_BIT(&iLocal_395, iParam0);
}

void func_194(int iParam0)
{
	MISC::SET_BIT(&iLocal_396, iParam0);
}

void func_195(int iParam0)
{
	MISC::SET_BIT(&iLocal_397, iParam0);
}

void func_196()
{
	if (iLocal_233 == -1)
	{
		iLocal_233 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_234, 130, 0, false, true);
	}
}

int func_197(vector3 vParam0)
{
	return func_290(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

char* func_198(int iParam0, int iParam1)
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

void func_199(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fLocal_272 = fParam0;
	fLocal_273 = fParam1;
	fLocal_275 = fParam2;
	fLocal_276 = fParam3;
	fLocal_277 = fParam4;
	fLocal_278 = fParam5;
}

Vector3 func_200()
{
	switch (bLocal_244)
	{
		case -1645988897:
		case joaat("MP001_MP_WINLOSE_SWAMP"):
			return 0f, -440f, 0f;
		case joaat("MP001_MP_WINLOSE_SNOW"):
		case joaat("MP001_CELEB_SCREEN_SNOW"):
			return 0f, -880f, 0f;
		case joaat("MP001_CELEB_SCREEN_DESERT"):
		case joaat("MP001_MP_WINLOSE_DESERT"):
			return 0f, -1320f, 0f;
		case joaat("MP001_MP_WINLOSE_FOREST"):
		case 1755785548:
			return 0f, -1760f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_201(bool bParam0, int iParam1)
{
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] bWinner ", MISC::_0xF216F74101968DB0(bParam0));
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] iPlayers ", iParam1);
	if (func_291(iParam1))
	{
		return;
	}
	if (bParam0)
	{
		if (iParam1 >= 0 && iParam1 <= 4)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 3, false);
		}
		else if (iParam1 >= 0 && iParam1 <= 8)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 2, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 1, false);
		}
	}
	else if (iParam1 >= 0 && iParam1 <= 4)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 12, false);
	}
	else if (iParam1 >= 0 && iParam1 <= 8)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 11, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 10, false);
	}
}

bool func_202(bool bParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(bParam0))
	{
		return true;
	}
	if (func_280())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 0, "REQUEST_IPL_HASH_SAFE - Could not request ", func_184(bParam0, 0), " b/c player is in the respawn sequence.");
		return false;
	}
	STREAMING::_REQUEST_IMAP(bParam0);
	return false;
}

int func_203(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_292((*uParam0)[iVar0 /*5*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_204(int iParam0)
{
	Global_1957252.f_1431.f_2 = 0f;
	Global_1957252.f_1431.f_1 = iParam0;
}

void func_205(int iParam0)
{
	if (Global_1903185.f_1 != iParam0)
	{
		UNK_0x355E72323AEE83CC(162, 6);
		Global_1903185.f_1 = iParam0;
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea] g_scoretimerData.bLeaderboardActive = ", MISC::_0xF216F74101968DB0(Global_1903185.f_1));
	}
}

void func_206(var uParam0, int iParam1)
{
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea] SET_LEADERBOARD_FLOW_STATE = ", func_293(iParam1, 0));
	*uParam0 = iParam1;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 11, "[MAC] Entry point: Scoreboard");
		return joaat("LEADERBOARD");
	}
	return -987928333;
}

int func_208()
{
	return 205122612;
}

bool func_209()
{
	if (Global_1940296.f_20 && Global_1940296.f_5 == 1)
	{
		return true;
	}
	return false;
}

char* func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "EEND_FLOW_STATE_INIT";
		case 1:
			return "EEND_FLOW_STATE_UPDATE";
		case 2:
			return "EEND_FLOW_STATE_TERMINATE";
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

char* func_211(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "HUD_BUSYSPINNER_MESSAGE__INVALID";
		case 0:
			return "HUD_BUSYSPINNER_MESSAGE__DEFAULT";
		case 1:
			return "HUD_BUSYSPINNER_MESSAGE__SHOP_TRANSACTION";
		case 2:
			return "HUD_BUSYSPINNER_MESSAGE__FOLLOW_INVITE";
		case 3:
			return "HUD_BUSYSPINNER_MESSAGE__FOLLOW_JOIN";
		case 4:
			return "HUD_BUSYSPINNER_MESSAGE__TAKING_MUGSHOT";
		case 5:
			return "HUD_BUSYSPINNER_MESSAGE__LOADING_LOBBY";
		case 6:
			return "HUD_BUSYSPINNER_MESSAGE__FINDING_PLAYERS";
		case 7:
			return "HUD_BUSYSPINNER_MESSAGE__CREATING_POSSE";
		case 8:
			return "HUD_BUSYSPINNER_MESSAGE__REJOINING_POSSE";
		case 9:
			return "HUD_BUSYSPINNER_MESSAGE__REFORMING_POSSE";
		case 10:
			return "HUD_BUSYSPINNER_MESSAGE__MATCHMAKING";
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

bool func_212(int iParam0)
{
	return (Global_1102630.f_3520 && iParam0) != 0;
}

char* func_213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "KILLCAM__FSM_STATE_INIT";
		case 1:
			return "KILLCAM__FSM_STATE_IDLE";
		case 2:
			return "KILLCAM__FSM_STATE_START";
		case 3:
			return "KILLCAM__FSM_STATE_UPDATE";
		case 4:
			return "KILLCAM__FSM_STATE_RESET";
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

void func_214(int iParam0)
{
	iLocal_403 = iParam0;
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] SET_STORY_BINK_HANDLER_STATE ", func_294(iParam0, 0));
}

void func_215(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_623, iParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] SET_HUD_CONTEXT_FLAG - already on for Context ID ", func_296(func_295(iParam0), 0));
	}
	else
	{
		MISC::SET_BIT(&iLocal_623, iParam0);
		HUD::_HIDE_HUD_COMPONENT(func_295(iParam0));
		UNK_0x355E72323AEE83CC(227, 6);
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] SET_HUD_CONTEXT_FLAG ON : ", func_296(func_295(iParam0), 0));
	}
}

void func_216(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iLocal_623, iParam0) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_623, iParam0);
		HUD::_DISPLAY_HUD_COMPONENT(func_295(iParam0));
		UNK_0x355E72323AEE83CC(227, 6);
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] CLEAR_HUD_CONTEXT_FLAG OFF : ", func_296(func_295(iParam0), 0));
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] CLEAR_HUD_CONTEXT_FLAG - already off for Context ID ", func_296(func_295(iParam0), 0));
	}
}

void func_217()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1050050.f_101[iVar0 /*23*/].f_14.f_1), &(Global_1050050.f_27[0 /*18*/])))
		{
			Global_1050050.f_101[iVar0 /*23*/].f_13 = 1;
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] Setting MVP as ", &(Global_1050050.f_27[0 /*18*/]));
			return;
		}
		else
		{
			Global_1050050.f_101[iVar0 /*23*/].f_13 = 0;
		}
		iVar0++;
	}
}

void func_218(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_297(uParam0, uParam1, uParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_298(uParam0, uParam1, bParam5, iParam6, uParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_219(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

void func_220(bool bParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "enabled", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "enabled", bParam0);
}

char* func_221(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "EEND_FLOW_INIT_SUB_STATE_PREP_LEADERBOARD";
		case 1:
			return "EEND_FLOW_INIT_SUB_STATE_PREP_CLONES";
		case 2:
			return "EEND_FLOW_INIT_SUB_STATE_PREP_NPC";
		case 3:
			return "EEND_FLOW_INIT_SUB_STATE_PREP_PROPS";
		case 4:
			return "EEND_FLOW_INIT_SUB_STATE_PREP_IPL";
		case 5:
			return "EEND_FLOW_INIT_SUB_STATE_PREP_NEXT_STAGE";
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

bool func_222()
{
	if (!func_77(Global_1048684.f_378[iLocal_507 /*2*/], 4))
	{
		return true;
	}
	if (Local_508[iLocal_507 /*5*/] == 0)
	{
		return true;
	}
	Local_508[iLocal_507 /*5*/].f_4 = PED::CREATE_PED(Local_508[iLocal_507 /*5*/], vLocal_235, 0f, false, true, false, false);
	return true;
}

void func_223(int iParam0, var uParam1, var uParam2, var uParam3)
{
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &uParam1, iParam0, 0);
}

int func_224()
{
	int iVar0;

	if (MISC::IS_BIT_SET(iLocal_401, 8))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_534[iVar0 /*5*/] == 0)
		{
		}
		else
		{
			Local_534[iVar0 /*5*/].f_4 = OBJECT::CREATE_OBJECT(Local_534[iVar0 /*5*/], vLocal_235, false, true, false, false, true);
			func_299(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_534[iVar0 /*5*/].f_4), Local_534[iVar0 /*5*/].f_1);
		}
		iVar0++;
	}
	MISC::SET_BIT(&iLocal_401, 8);
	return 1;
}

void func_225(var uParam0, char[4] cParam1, char[4] cParam2)
{
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cParam1, *uParam0, 0);
}

bool func_226(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684.f_376 - 1))
	{
		if (Global_1048684.f_22[iVar0 /*10*/].f_9)
		{
			if (iVar1 == iParam0)
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][EndFlow2] Winning Clone ", iParam0, " exists for a gun");
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

void func_227(char* sParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_23000.f_5), sParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1072032.f_23000.f_5), sParam0);
		func_300(sParam0);
	}
}

bool func_228()
{
	switch (iLocal_394)
	{
		case 0:
			func_301();
			return false;
		case 1:
			func_302();
			return false;
		case 2:
			func_303();
			return false;
		default:
			break;
	}
	return iLocal_394 == 3;
}

char* func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "EEND_FLOW_SUB_STATE_MATCH_RESULT";
		case 1:
			return "EEND_FLOW_SUB_STATE_FADE_FOR_CELEBRATION_TRANSITION";
		case 2:
			return "EEND_FLOW_SUB_STATE_CELEBRATION_INTRO";
		case 3:
			return "EEND_FLOW_SUB_STATE_CELEBRATION_MAIN";
		case 4:
			return "EEND_FLOW_SUB_STATE_CELEBRATION_RESULT";
		case 5:
			return "EEND_FLOW_SUB_STATE_LEADERBOARD_DISPLAY";
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

bool func_230(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_231(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	if (func_304() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_305(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		uParam0->f_45[iParam2 /*3*/][0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarDictionary", &cVar0);
		uParam0->f_45[iParam2 /*3*/][1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarTexture", &cVar8);
	}
}

void func_232(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = false;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == (uParam1[iParam2 /*23*/])->f_14;
	bVar0 = func_306(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam1[iParam2 /*23*/])->f_14) && VOICE::_0x919AF2D93E9AA89D((uParam1[iParam2 /*23*/])->f_14))
	{
		bVar3 = VOICE::_0xEF6F2A35FAAF2ED7((uParam1[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		DEBUG::_0xEF256AE8A5A27966(41632, 227, 7, "[MMacK][GloLea][UPDATE_ALL_PLAYER_SPEAKER_ICON_DATABINDING] Player talking is ", PLAYER::GET_PLAYER_NAME((uParam1[iParam2 /*23*/])->f_14), " (", (uParam1[iParam2 /*23*/])->f_14, ") and the colour is ", func_307(bVar0, 0));
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(41632, 227, 7, "[MMacK][GloLea][UPDATE_ALL_PLAYER_SPEAKER_ICON_DATABINDING] Player being quiet is ", PLAYER::GET_PLAYER_NAME((uParam1[iParam2 /*23*/])->f_14), " (", (uParam1[iParam2 /*23*/])->f_14, ") and the colour is ", func_307(bVar0, 0));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconColor", bVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", true);
	}
}

bool func_233()
{
	return MISC::IS_BIT_SET(iLocal_399, 8);
}

char* func_234(int iParam0, int iParam1)
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

void func_235(bool bParam0, bool bParam1)
{
	func_220(0);
	if (!bParam1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] sending vote");
		Local_382 = Global_1050952;
		Local_382.f_2 = Global_1050952.f_2;
		Local_382.f_1 = Global_1050952.f_1;
		Local_382.f_3 = Global_1050952.f_3;
		Local_382.f_5 = 0;
		Local_382.f_7 = Global_1050952.f_7;
		Local_382.f_8 = Global_1050952.f_8;
		if (func_53(2) || func_53(4))
		{
			Local_382.f_4 = 1;
		}
		else
		{
			Local_382.f_4 = 0;
		}
		if (bParam0)
		{
			Local_382.f_6 = 1f;
		}
		else
		{
			Local_382.f_6 = -1f;
		}
		TELEMETRY::_0xEF3C68F56BAD7B69(&Global_1050925, &Local_382);
		func_69(-304137656, 0, 255, 0, 0);
	}
	MISC::SET_BIT(&iLocal_399, 3);
}

void func_236(var uParam0)
{
	char* sVar0;

	sVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (*uParam0)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = 1;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(sVar0, "revealScoreboard", *uParam0);
}

void func_237()
{
	func_308();
	func_113(0);
	func_105(0);
}

int func_238()
{
	if (func_21(1))
	{
		return Global_265378.f_131719.f_71.f_18;
	}
	if (Global_263042[Global_1275959 /*70*/].f_1.f_18 != 2147483647)
	{
		return Global_263042[Global_1275959 /*70*/].f_1.f_18;
	}
	return -1;
}

int func_239(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_309();
	switch (iVar1)
	{
		case -1:
			DEBUG::_0xA308F935BDECCEC0(8, 59, "UGC_GLOBAL_LOADER_GET_LOBBY_TIMER - Host State: UGC_GLOBAL_LOADER_HS_INVALID, exiting.");
			return -1;
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (Global_262155.f_1[iVar0 /*5*/] == iParam0)
				{
					return Global_262155.f_1[iVar0 /*5*/].f_4;
				}
				iVar0++;
			}
			DEBUG::_0xA308F935BDECCEC0(136, 59, "UGC_GLOBAL_LOADER_GET_LOBBY_TIMER - Can't find iInstancedID (", iParam0, "), exiting.");
			return -1;
		case 1:
			if (Global_262155.f_1[Global_262155.f_162 /*5*/] == 2147483647)
			{
				DEBUG::_0xA308F935BDECCEC0(136, 59, "UGC_GLOBAL_LOADER_GET_LOBBY_TIMER - Lobby Index(", Global_262155.f_162, ") iInstanceID is invalid, exiting.");
				return -1;
			}
			return Global_262155.f_1[Global_262155.f_162 /*5*/].f_4;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 59, "UGC_GLOBAL_LOADER_GET_LOBBY_TIMER - Invalid global loader host state: ", iVar1);
	return -1;
}

void func_240(var uParam0, var uParam1, int iParam2)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", HUD::_GET_LABEL_TEXT("GAME_START_TIMER"));
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimer", func_310(iParam2));
}

void func_241(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, func_310(iParam1));
}

bool func_242(int* iParam0)
{
	if (((*iParam0 == 0 && iParam0->f_1 == 0) && iParam0->f_2 == 0) && iParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_243(bool bParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(bParam0, iParam1);
	return func_311(sVar0, joaat("COLOR_PURE_WHITE"));
}

void func_244(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_06", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_06", sParam1);
}

void func_245(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_07", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_07", sParam1);
}

void func_246(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_08", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_08", sParam1);
}

void func_247(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_248(var uParam0, int iParam1, int iParam2)
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

char* func_249(int iParam0)
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

bool func_250(var uParam0, int iParam1, int iParam2)
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

bool func_251(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_252(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

void func_253()
{
	if (!Global_1102630.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REQUEST_CLEAN_EVERYTHING_ASAP - Bailing early.  Player has not completed the first respawn.");
		return;
	}
	Global_1072032.f_28725.f_5 = 1;
	DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REQUEST_CLEAN_EVERYTHING_ASAP");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
	UNK_0x355E72323AEE83CC(-1, 6);
}

int func_254(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (iParam1 == 255)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloRes][MMacK] GET_DATA_SLOT_FOR_PLAYER threw an error");
		return 0;
	}
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam1);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*23*/])->f_14 == iParam1 || MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*23*/])->f_14.f_1), sVar1))
		{
			DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[GloRes][MMacK] GET_DATA_SLOT_FOR_PLAYER returned found slot of ", iVar0, " sPlayerName: ", sVar1);
			return iVar0;
		}
		iVar0++;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloRes][MMacK] GET_DATA_SLOT_FOR_PLAYER has failed");
	return 0;
}

char* func_255(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_312(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::_GET_LABEL_TEXT("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return HUD::_GET_LABEL_TEXT("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return HUD::_GET_LABEL_TEXT("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_312(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_312(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_313(&cVar0);
}

int func_256(var uParam0, int iParam1, var uParam2)
{
	float fVar0;

	fVar0 = uParam0->f_1;
	if (func_75())
	{
		func_314(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = uParam0->f_6;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_257(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_75())
	{
		func_314(uParam0, 1);
	}
	else
	{
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			fVar0 = uParam0->f_1;
		}
		if (MISC::IS_BIT_SET(iParam2, 2))
		{
			fVar0 = uParam0->f_5;
		}
	}
	return BUILTIN::ROUND(fVar0);
}

int func_258(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_75())
	{
		func_314(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19) || MISC::IS_BIT_SET(iParam2, 5))
	{
		fVar0 = uParam0->f_5;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_259(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_75())
	{
		func_314(uParam0, 3);
	}
	return BUILTIN::ROUND(fVar0);
}

struct<4> func_260(int iParam0, int iParam1, var uParam2)
{
	char cVar0[32];
	bool bVar4;

	if (func_75())
	{
		MemCopy(&cVar0, {func_315(0, uParam2)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_BOUS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_BOUP", 32);
			}
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_KILLS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_KILLP", 32);
		}
	}
	return cVar0;
}

struct<4> func_261(int iParam0, int iParam1, int iParam2, var uParam3)
{
	char cVar0[32];
	bool bVar4;

	if (func_75())
	{
		MemCopy(&cVar0, {func_315(1, uParam3)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam2, 1) || MISC::IS_BIT_SET(iParam2, 2))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_DELIVS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_DELIVP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_KILLS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_KILLP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 20))
		{
			StringCopy(&cVar0, "UIC_EF_ACC", 32);
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_DEATHS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_DEATHP", 32);
		}
	}
	return cVar0;
}

struct<4> func_262(int iParam0, int iParam1, int iParam2, var uParam3)
{
	char cVar0[32];
	bool bVar4;

	if (func_75())
	{
		MemCopy(&cVar0, {func_315(2, uParam3)}, 4);
	}
	else
	{
		bVar4 = iParam0 == true;
		if (MISC::IS_BIT_SET(iParam2, 5))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_PNTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_PNTP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_CAPTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_CAPTP", 32);
			}
		}
	}
	return cVar0;
}

struct<4> func_263(var uParam0)
{
	struct<4> Var0;

	if (func_75())
	{
		MemCopy(&Var0, {func_315(3, uParam0)}, 4);
	}
	return Var0;
}

void func_264(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896750.f_398)
		{
			DEBUG::_0xF0783374333FD8CE(680, 162, "[SET_PLAYER_MENU_VISIBLE] called from ", UNK_0x8F77B33B6A34D8BA(), " Setting to: ", MISC::_0xF216F74101968DB0(bParam0));
			UNK_0x355E72323AEE83CC(162, 6);
			Global_1896750.f_398 = bParam0;
		}
	}
	else if (Global_1896750.f_398)
	{
		DEBUG::_0xF0783374333FD8CE(680, 162, "[SET_PLAYER_MENU_VISIBLE] called from ", UNK_0x8F77B33B6A34D8BA(), " Setting to: ", MISC::_0xF216F74101968DB0(bParam0));
		UNK_0x355E72323AEE83CC(162, 6);
		Global_1896750.f_398 = bParam0;
	}
}

char* func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_TRANSITION_OPTION_EMPTY";
		case 1:
			return "UGC_END_FLOW_TRANSITION_OPTION_RESPAWN_ON_MOUNT";
		case 2:
			return "UGC_END_FLOW_TRANSITION_OPTION_RESPAWN_NEXT_TO_MOUNT";
		case 4:
			return "UGC_END_FLOW_TRANSITION_OPTION_RESPAWN_ABSOLUTE";
		case 8:
			return "UGC_END_FLOW_TRANSITION_OPTION_RESPAWN_IN_POS";
		case 16:
			return "UGC_END_FLOW_TRANSITION_OPTION_RESPAWN_PLAYER";
		case 32:
			return "UGC_END_FLOW_TRANSITION_OPTION_SKIP_RESPAWN_FADE";
		case 64:
			return "UGC_END_FLOW_TRANSITION_OPTION_RESPAWN_ST_DENIS";
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

int func_266(int iParam0)
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

void func_267(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_268(struct<7> Param0, var uParam7, var uParam8, int iParam9)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Absolute Start         ");
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
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Absolute End         ");
}

bool func_269(char* sParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = Global_1072032.f_23926.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	iVar1 = func_316(sVar0);
	if (iVar1 <= 0)
	{
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_RANDOM_FAST_TRAVEL_SPAWN_POINT - ", sVar0, " has no spawn points");
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_RANDOM_FAST_TRAVEL_SPAWN_POINT - Getting point for station ", sVar0, " point ", iVar2);
		if (func_317(sVar0, iVar2, sParam0, bParam1))
		{
			return true;
		}
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_RANDOM_FAST_TRAVEL_SPAWN_POINT - Couldn't retrieve data for station ", sVar0, " point ", iVar2);
	}
	return false;
}

bool func_270(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	bool bVar4;

	if (!func_318(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS__LOAD_SPAWN_SEARCH_LOCATION_DATA__IN_REGION - Invalid region.  Bailing.");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1887351[iParam0 /*36*/].f_4))
	{
		DEBUG::_0xF0783374333FD8CE(168, 36, "NET_PLAYER_STATUS__LOAD_SPAWN_SEARCH_LOCATION_DATA__IN_REGION - Volume does not exist for region ", func_319(iParam0), ", bailing.");
		return false;
	}
	uParam1->f_17.f_6 = { VOLUME::_GET_VOLUME_COORDS(Global_1887351[iParam0 /*36*/].f_4) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &uVar0, false))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901988.f_50.f_1;
	uParam1->f_17.f_1 = Global_1901988.f_50.f_1;
	uParam1->f_17.f_2 = Global_1901988.f_50.f_1;
	vVar1 = { VOLUME::_GET_VOLUME_SCALE(Global_1887351[iParam0 /*36*/].f_4) };
	bVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (bVar4 < Global_1901988.f_50)
	{
		DEBUG::_0xF0783374333FD8CE(2456, 36, "NET_PLAYER_STATUS__LOAD_SPAWN_SEARCH_LOCATION_DATA__IN_REGION - fAverageSize ", bVar4, " < k_tuneDesiredSpawnMinRange (", Global_1901988.f_50, ")");
		bVar4 = Global_1901988.f_50;
	}
	if (bVar4 > Global_1901988.f_50.f_1)
	{
		DEBUG::_0xF0783374333FD8CE(2456, 36, "NET_PLAYER_STATUS__LOAD_SPAWN_SEARCH_LOCATION_DATA__IN_REGION - fAverageSize ", bVar4, " >= k_tuneDesiredSpawnMaxRange (", Global_1901988.f_50.f_1, ")");
		bVar4 = Global_1901988.f_50.f_1;
	}
	DEBUG::_0xF0783374333FD8CE(40, 36, "NET_PLAYER_STATUS__LOAD_SPAWN_SEARCH_LOCATION_DATA__IN_REGION - fAverageSize = ", MISC::_0x2B6846401D68E563(bVar4, 4));
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = bVar4;
	uParam1->f_17.f_1 = bVar4;
	uParam1->f_17.f_2 = bVar4;
	uParam1->f_17.f_9 = joaat("VOLSPHERE");
	DEBUG::_0xF0783374333FD8CE(680, 36, "NET_PLAYER_STATUS__LOAD_SPAWN_SEARCH_LOCATION_DATA__IN_REGION - Using ", func_319(iParam0), ", with target at ", MISC::_0x6C4DBF553885F9EB(uParam1->f_17.f_6));
	DEBUG::_0xF0783374333FD8CE(40, 36, "NET_PLAYER_STATUS__LOAD_SPAWN_SEARCH_LOCATION_DATA__IN_REGION - ...scale = ", MISC::_0x6C4DBF553885F9EB(uParam1->f_17));
	return true;
}

void func_271(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_266(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (bParam3)
	{
		if (func_154(uParam0->f_17.f_6))
		{
			DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM - Got a zero vector as targetted position.  Exiting early.");
			UNK_0x355E72323AEE83CC(-1, 6);
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < 1f)
		{
			DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM - Got a zero vector as scale.  Attempting correction.");
			uParam0->f_17 = Global_1901988.f_50.f_1;
			uParam0->f_17.f_1 = Global_1901988.f_50.f_1;
			uParam0->f_17.f_2 = Global_1901988.f_50.f_1;
		}
	}
	if (func_154(uParam1->f_6))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM - Got a zero vector as fallback position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (uParam0->f_16)
	{
		if (BUILTIN::VMAG(uParam0->f_6) < 1f)
		{
			DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM - bUseInnerVolume set but scale is less than 1.  Bailing.");
			UNK_0x355E72323AEE83CC(-1, 6);
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < BUILTIN::VMAG(uParam0->f_6))
		{
			DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM - outer scale < inner scale.  You can't do that.");
			uParam0->f_16 = 0;
		}
	}
	func_141(0);
	func_141(3);
	Global_1102630.f_3919 = iParam2;
	Global_1102630.f_3920 = bParam3;
	Global_1102630.f_3921 = iParam4;
	func_320(&(Global_1102630.f_3849));
	Global_1102630.f_3849 = { *uParam0 };
	func_321(&(Global_1102630.f_3888));
	Global_1102630.f_3888 = { *uParam1 };
	Global_1102630.f_26.f_3341 = 0;
	Global_1102630.f_26.f_3342 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM called.  Output starting...");
	func_322(Global_1102630.f_3849, 36);
	func_323(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_CUSTOM ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

char* func_272(int iParam0, int iParam1)
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

void func_273(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	iVar3 = iParam3;
	if (!func_324(Global_1275959.f_17, &vVar0, &iVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		iVar3 = iParam3;
	}
	func_325(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_274(int iParam0)
{
	func_326(&(Global_1072032.f_23926.f_4), iParam0);
}

bool func_275(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_276(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
}

void func_277(var uParam0, int iParam1, char* sParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = sParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_327(&Var0);
	DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[PEDSHOT] UI_COMMON_REQUEST_SPECIFIC_PEDSHOTS - Setting up a pedshot request w bBroadcast ", sParam2, " for total peds ", SCRIPTS::COUNT_PLAYER_BITS(&(Var0.f_2)), ", bitset: ", func_328(iParam1));
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

bool func_278(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_279()
{
	return Global_1102630.f_3672;
}

bool func_280()
{
	return func_329() == 4;
}

void func_281(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0 /*5*/]);
		}
		iVar0++;
	}
}

void func_282(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*5*/])->f_4))
		{
		}
		else
		{
			ENTITY::DELETE_ENTITY(&((uParam0[iVar0 /*5*/])->f_4));
		}
		iVar0++;
	}
}

var func_283(bool bParam0, int iParam1)
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

void func_284(int iParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PUSH_AWARD_MODIFIER: Failed to push modifier ", func_330(bParam1, 0), ", array is full");
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PUSH_AWARD_MODIFIER: Adding modifier ", func_330(bParam1, 0));
}

void func_285(int* iParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_242(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 205, "ADD_AWARD_TRANSACTION_DATA - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_2012 < 20)
	{
		Global_1272425.f_2012++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_2012.f_1[iVar0 /*24*/] = { Global_1272425.f_2012.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *iParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1272425.f_2012.f_1[(Global_1272425.f_2012 - 1) /*24*/] = { Var1 };
	DEBUG::_0xA308F935BDECCEC0(40, 205, "ADD_AWARD_TRANSACTION_DATA - Added transaction data for: ", SCRIPTS::_NET_RPC_GUID_TO_STRING(iParam0));
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eAward:                         ", func_283(Var1.f_4, 0));
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eStatus:                        ", func_331(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7.f_13);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.piOverheadPlayer:  ", Var1.f_7.f_16);
}

int func_286(int iParam0)
{
	return func_332(iParam0) + 1;
}

int func_287(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

char* func_288(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "IPL_FLAGS_NONE";
		case 1:
			return "IPL_FLAGS_FORTM_MP";
		case 2:
			return "IPL_FLAGS_GUNSLINGER_CAMP";
		case 4:
			return "IPL_FLAGS_OUTLAW_2_CAMP";
		case 8:
			return "IPL_FLAGS_REVENGE_1";
		case 16:
			return "IPL_FLAGS_SISIKA";
		case 32:
			return "IPL_FLAGS_OUTLAW_3_CAMP";
		case 64:
			return "IPL_FLAGS_GVO3_CAMP";
		case 128:
			return "IPL_FLAGS_VEG_MOD_MP_GUN1";
		case 256:
			return "IPL_FLAGS_HANGINGROCK_TREASURE_ROCK";
		case 512:
			return "IPL_FLAGS_GUNSLINGER_3_CAMP";
		case 1024:
			return "IPL_FLAGS_LBM_FORTRIGGS_CABIN";
		case 2048:
			return "IPL_FLAGS_LBM_LOCATION_BONDS";
		case 4096:
			return "IPL_FLAGS_MOONSHINE_FIRE";
		case 8192:
			return "IPL_FLAGS_MOONSHINE_HONEYPOT";
		case 16384:
			return "IPL_FLAGS_MOONSHINE_EXTENDED_TERRAIN";
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

void func_289(int iParam0, bool bParam1, var uParam2)
{
	DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[UGC] UGC_ENABLE_IPL_FLAG - Set flag ", func_288(iParam0, 0), " as bActive ", bParam1);
	switch (iParam0)
	{
		case 1:
			if (bParam1 || !func_77(*uParam2, 8))
			{
				func_333(-1484676996, bParam1);
			}
			func_334("MS_FortM_MP", bParam1);
			break;
		case 2:
			func_333(1510350995, bParam1);
			break;
		case 4:
			func_333(-1591103463, bParam1);
			break;
		case 8:
			if (bParam1 || !func_77(*uParam2, 1))
			{
				func_333(-1484676996, bParam1);
			}
			func_333(joaat("MP001_MP_REVENGE1_MERCER"), bParam1);
			func_333(1646485471, bParam1);
			func_335(joaat("MP001_MP_REVENGE1_MERCER"), bParam1);
			func_334("MS_MP001_MP_REVENGE01", bParam1);
			break;
		case 16:
			func_333(-2131576785, bParam1);
			func_333(-2137016051, bParam1);
			func_333(1193151399, bParam1);
			func_333(-1353871107, bParam1);
			func_333(2026630914, bParam1);
			func_333(-225844616, bParam1);
			func_334("MS_mp001_sisika", bParam1);
			break;
		case 64:
			func_333(-200270658, bParam1);
			func_333(joaat("MP001_GUNVOUTDECISION03_02"), bParam1);
			func_334("MS_MP001_GUNVOUTDECISION03", bParam1);
			func_335(joaat("MP001_GUNVOUTDECISION03_02"), bParam1);
			break;
		case 256:
			func_333(331698185, bParam1);
			break;
		case 128:
			func_335(joaat("MP001_MP_GUN1"), bParam1);
			break;
		case 512:
			func_333(-770646513, bParam1);
			break;
		case 32:
			func_333(-1876837239, bParam1);
			break;
		case 1024:
			func_333(401370450, bParam1);
			func_333(1183263476, bParam1);
			func_333(573140494, bParam1);
			break;
		case 2048:
			func_333(-1407497494, bParam1);
			func_333(-1161238459, bParam1);
			func_333(-1583237641, bParam1);
			break;
		case 4096:
			func_333(-1744971427, bParam1);
			break;
		case 8192:
			func_333(793572138, bParam1);
			break;
		case 16384:
			func_333(1773228786, bParam1);
			func_334("nav_moonshine_moon3_extended_terrain", bParam1);
			break;
	}
	if (bParam1)
	{
		func_247(uParam2, iParam0);
	}
	else
	{
		func_326(uParam2, iParam0);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC] PROCESS_IPLS - eIPLFlagsApplied updated to ", *uParam2);
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_291(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_401, 2))
	{
		if (iParam0 >= 0 && iParam0 <= 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 11, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 1, false);
		}
		return true;
	}
	return false;
}

bool func_292(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

char* func_293(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ELEADERBOARDSTATE_INIT";
		case 1:
			return "ELEADERBOARDSTATE_LOADING";
		case 2:
			return "ELEADERBOARDSTATE_PREPAREFORENTRY";
		case 3:
			return "ELEADERBOARDSTATE_PREPTRANSITION";
		case 4:
			return "ELEADERBOARDSTATE_SLEEP";
		case 5:
			return "ELEADERBOARDSTATE_WAITFOREXIT";
		case 6:
			return "ELEADERBOARDSTATE_CLEANUP";
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

char* func_294(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "EENDFLOW_STORYBINK_HANDLER_LOAD";
		case 1:
			return "EENDFLOW_STORYBINK_HANDLER_PLAY";
		case 2:
			return "EENDFLOW_STORYBINK_HANDLER_WAIT";
		case 3:
			return "EENDFLOW_STORYBINK_HANDLER_DONE";
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

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		case 1:
			return 690901814;
		case 3:
			return 2083323686;
		case 2:
			return 474191950;
		case 4:
			return 128623374;
		case 6:
			return -993263478;
		case 7:
			return 1344742130;
		case 8:
			return 537169871;
		case 9:
			return -1763610107;
		case 10:
			return 68203906;
		case 11:
			return 253418738;
		case 12:
			return 433996714;
		case 13:
			return 999578278;
	}
	return 0;
}

char* func_296(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2124237476:
			return "HUD_CTX_MP_OUT_OF_AREA_BOUNDS";
		case -2106452847:
			return "HUD_CTX_PLAYER_WITHOUT_SATCHEL";
		case -2074936164:
			return "HUD_CTX_ITEM_CONSUMPTION_STAMINA";
		case -2050003024:
			return "HUD_CTX_IN_MINIGAME_POKER_OUTRO";
		case -1921158550:
			return "HUD_CTX_MONEY_ANIMATION_PLAYING";
		case -1851042378:
			return "HUD_CTX_MP_PLAYSTYLE_ICON_TRANSITION";
		case -1847602092:
			return "HUD_CTX_INSPECT_ITEM";
		case -1763610107:
			return "HUD_CTX_MP_INSTANCED_TOP_RIGHT_HUD";
		case -1744263063:
			return "HUD_CTX_PROMPT_MONEY";
		case -1711480773:
			return "HUD_CTX_SCRIPT_CME_CUTSCENE";
		case -1679307491:
			return "HUD_CTX_IN_MISSION_CUTSCENE";
		case -1618603322:
			return "HUD_CTX_IN_CAMP";
		case -1450522739:
			return "HUD_CTX_MP_RACES";
		case -1404924319:
			return "HUD_CTX_IN_PHOTO_MODE";
		case -1347445791:
			return "HUD_CTX_IN_SHOP";
		case -1319249689:
			return "HUD_CTX_MP_IN_ROLE_CUTSCENE";
		case -1318884352:
			return "HUD_CTX_ROBBERY_ACTION";
		case -1288854888:
			return "HUD_CTX_MINIGAME_SHOOTING";
		case -1274560729:
			return "HUD_CTX_POSSE_CREATE";
		case -1249243147:
			return "HUD_CTX_NON_COMBAT_MISSION";
		case -1152968308:
			return "HUD_CTX_IN_FAST_TRAVEL_MENU";
		case -1135800718:
			return "HUD_CTX_ITEM_CONSUMPTION_HEALTH";
		case -998890882:
			return "HUD_CTX_RESTING_BY_FIRE";
		case -993263478:
			return "HUD_CTX_MISSION_CONTROLLER_INTRO";
		case -972988753:
			return "HUD_CTX_INFO_CARD";
		case -950624750:
			return "HUD_CTX_IN_CAMP_WITH_SUPPLIES";
		case -859384195:
			return "HUD_CTX_FISHING";
		case -782493871:
			return "HUD_CTX_MP_TRADER";
		case -523411361:
			return "HUD_CTX_PLAYER_MENU_CAMP_MAINTENANCE";
		case -492723688:
			return "HUD_CTX_IN_PHOTO_STUDIO";
		case -469828803:
			return "HUD_CTX_CRAFTING_SEQUENCE";
		case -451238553:
			return "HUD_CTX_NO_ALIVE_PLAYER_HORSE";
		case -424376908:
			return "HUD_CTX_IN_QUICK_TIME_EVENT";
		case -421111283:
			return "HUD_CTX_MP_SPECTATING";
		case -402975377:
			return "HUD_CTX_ITEM_CONSUMPTION_DEADEYE";
		case -365265320:
			return "HUD_CTX_IN_MP_TUTORIAL_CUTSCENE";
		case -364582530:
			return "HUD_CTX_MP_STEW_POT_PROXIMITY";
		case -346707618:
			return "HUD_CTX_SHOW_MP_DEATH_SCREEN";
		case -333726060:
			return "HUD_CTX_IN_MINIGAME_WITH_MP_GAME_UPDATES";
		case -252438768:
			return "HUD_CTX_IN_CAMP_WARDROBE";
		case -74777547:
			return "HUD_CTX_MP_UGC_PLAYER_OUTRO";
		case -69004225:
			return "HUD_CTX_INPUT_REVEAL_HUD";
		case -66088566:
			return "HUD_CTX_SHARP_SHOOTER_EVENT";
		case -58462683:
			return "HUD_CTX_IN_RESPAWN";
		case -48209965:
			return "HUD_CTX_MP_BOUNTY_JAILTIME";
		case 0:
			return "HUD_CTX_INVALID";
		case 36547242:
			return "HUD_CTX_MP_LEADERBOARD_MINI";
		case 68203906:
			return "HUD_CTX_MISSION_CONTROLLER_OUTRO";
		case 100665617:
			return "HUD_CTX_IN_FISHING_MODE";
		case 121713391:
			return "HUD_CTX_HONOR_SHOW";
		case 128623374:
			return "HUD_CTX_MP_MATCHMAKING_TRANSITION";
		case 253418738:
			return "HUD_CTX_MP_COOP_MISSION_POST_COMPLETION_PRE_AWARD_FLOW";
		case 308865989:
			return "HUD_CTX_ITEM_CONSUMPTION_STAMINA_CORE";
		case 367098993:
			return "HUD_CTX_CODE_TOOLS";
		case 372886907:
			return "HUD_CTX_IN_MINIGAME";
		case 382897689:
			return "HUD_CTX_TRANSLATE_OVERLAY";
		case 398076311:
			return "HUD_CTX_SP_INTRO_HORSE_ITEMS_RESTRICTED";
		case 421084969:
			return "HUD_CTX_TITHING_NOGANG_CASH";
		case 433996714:
			return "HUD_CTX_MP_COOP_MISSION_POST_COMPLETION_AWARD_FLOW";
		case 439038017:
			return "HUD_CTX_IN_STABLES";
		case 439300812:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_HEALTH_CORE";
		case 474191950:
			return "HUD_CTX_HACK_RADAR_FORCE_HIDE";
		case 481761311:
			return "HUD_CTX_IN_LOBBY";
		case 537169871:
			return "HUD_CTX_MP_INSTANCED_HUD";
		case 557238883:
			return "HUD_CTX_MP_MOONSHINE_BUSINESS";
		case 559258637:
			return "HUD_CTX_SHOP_OBJECTIVE";
		case 598430796:
			return "HUD_CTX_MISSION_CONTROLLER_CUTSCENE";
		case 690901814:
			return "HUD_CTX_MISSION_CONTROLLER";
		case 700961590:
			return "HUD_CTX_SLEEPING";
		case 724769646:
			return "HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED";
		case 853763926:
			return "HUD_CTX_MAYOR2_CUTSCENE_OBJECTIVES";
		case 946989305:
			return "HUD_CTX_MP_NATURALIST_ANIMAL_MODE";
		case 956976696:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_STAMINA_CORE";
		case 959420967:
			return "HUD_CTX_PLAYER_CAMERA_MODE";
		case 999578278:
			return "HUD_CTX_SHOWDOWN_OUTRO";
		case 1003289417:
			return "HUD_CTX_IN_VERSUS_CUTSCENE";
		case 1023137905:
			return "HUD_CTX_IN_GUARMA_AND_BROKE";
		case 1058184710:
			return "HUD_CTX_INFINITE_AMMO";
		case 1163138879:
			return "HUD_CTX_MP_COLLECTOR_SALESWOMAN";
		case 1281091544:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_HEALTH";
		case 1331687942:
			return "HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE";
		case 1344742130:
			return "HUD_CTX_IN_MP_GAME_MODE";
		case 1381790879:
			return "HUD_CTX_PLAYER_CAMERA_REQUIRES_HUD";
		case 1404048992:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_STAMINA";
		case 1422092402:
			return "HUD_CTX_OUTDOOR_SHOP";
		case 1422201455:
			return "HUD_CTX_FEUD1_FISHING";
		case 1506296948:
			return "HUD_CTX_ITEM_CONSUMPTION_DEADEYE_CORE";
		case 1533515944:
			return "HUD_CTX_MP_SHOW_HUD_ABILITY_CARD_INDICATOR";
		case 1622267885:
			return "HUD_CTX_LOBBY_TEAM_SELECT";
		case 1664736751:
			return "HUD_CTX_WATCHING_A_SHOW";
		case 1670279562:
			return "HUD_CTX_TITHING";
		case 1733954764:
			return "HUD_CTX_FIREFIGHT_CUTSCENE";
		case 1759705598:
			return "HUD_CTX_MISSION_CUTSCENE_WITH_RADAR";
		case 1779876696:
			return "HUD_CTX_CHARACTER_CREATOR";
		case 1791176674:
			return "HUD_CTX_IN_COMBAT_RESTRICTED_SHOP";
		case 1815407589:
			return "HUD_CTX_IN_CATALOGUE_SHOP_MENU";
		case 1826124692:
			return "HUD_CTX_FADED_GAMEPLAY";
		case 1833957607:
			return "HUD_CTX_IN_TOWN";
		case 1898574875:
			return "HUD_CTX_ITEM_CONSUMPTION_HEALTH_CORE";
		case 1920936087:
			return "HUD_CTX_IN_MINIGAME_POKER_INTRO";
		case 1923543915:
			return "HUD_CTX_MISSION_CREATOR";
		case 2003196676:
			return "HUD_CTX_MP_MINIGAME_SHOW_PLAYER_CASH";
		case 2011163970:
			return "HUD_CTX_IN_PLAYER_CAMP";
		case 2064968046:
			return "HUD_CTX_SKINNING_PROCESS";
		case 2077578434:
			return "HUD_CTX_GOLD_CURRENCY_CHANGE";
		case 2083323686:
			return "HUD_CTX_AMBIENT_SPECTATOR_VIEW";
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

void func_297(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][ADD_PLAYER_LEADERBOARD_DATABINDING] - START");
	if (bParam4)
	{
		if (func_75())
		{
			func_336(uParam0);
		}
		else
		{
			func_337(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][ADD_PLAYER_LEADERBOARD_DATABINDING] sUI.iNumTeamsOnLeaderboard = ", uParam0->f_150);
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][ADD_PLAYER_LEADERBOARD_DATABINDING] using non default colours");
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_143[iVar0], "GamertagColor", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "Position", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "CrossColor", joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "GamertagColor", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", func_338());
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "BlipColor", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "HeadsetIconColor", joaat("COLOR_PURE_WHITE"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "SetOverlayImg", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowOverlay", false);
		func_231(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_75())
	{
		func_339(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_340(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][ADD_PLAYER_LEADERBOARD_DATABINDING] - END");
}

void func_298(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1940296.f_111)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - mini TEAM");
			iVar14 = uParam0->f_150;
			func_341(uParam4, &uVar4, uParam0->f_150, bVar16);
			func_342(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && bVar0 < 5)
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - Adding Team ", iVar17);
						func_343(uParam0->f_2, uParam0->f_143[bVar0], "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - mini FFA");
			func_344(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (bVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_230(&((uParam1[iVar2 /*23*/])->f_14)) && bVar0 < 5)
					{
						func_343(uParam0->f_2, uParam0->f_143[bVar0], "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (bVar0 <= iVar3)
		{
			bVar18 = iVar3;
			while (bVar18 >= bVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, bVar18);
				bVar18 = (bVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - TEAM");
		func_341(uParam4, &uVar4, uParam0->f_150, bVar16);
		func_345(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - Adding Team ", iVar19, " in position ", iVar1);
					func_343(uParam0->f_2, uParam0->f_3[iVar19], "LeaderboardHeader", iVar3, bVar0);
					bVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == (*uParam1)[iVar2 /*23*/] && func_230(&((uParam1[iVar2 /*23*/])->f_14)))
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - Adding Player In Slot ", iVar2);
							func_343(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, bVar0);
							bVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - FFA");
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_230(&((uParam1[iVar2 /*23*/])->f_14)))
			{
				func_343(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, bVar0);
				bVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || bVar0 > 0)
	{
		if (bVar0 < 3)
		{
			bVar20 = bVar0;
			while (bVar20 <= 3)
			{
				func_343(uParam0->f_2, uParam0->f_12[bVar20], "LeaderboardListItemBlank", iVar3, bVar0);
				bVar0++;
				bVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (bVar0 <= iVar3)
	{
		bVar21 = iVar3;
		while (bVar21 >= bVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, bVar21);
			bVar21 = (bVar21 + -1);
		}
	}
}

void func_299(int iParam0, var uParam1, var uParam2, var uParam3)
{
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &uParam1, iParam0, 0);
}

void func_300(char* sParam0)
{
	if (!func_346(sParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 162, "NET_HUD_SET_PLAYER_NEEDS_UPDATED: Setting that player ", sParam0, " needs updated.");
		SCRIPTS::_0x31010318BA9897AC(&(Global_1072032.f_21420.f_260), sParam0);
	}
}

void func_301()
{
	func_347(1);
}

void func_302()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684.f_376 - 1))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_408[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_408[iVar0]))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][EndFlow2] IS_PED_READY_TO_RENDER is false for ", iVar0);
			return;
		}
		iVar0++;
	}
	func_347(2);
}

void func_303()
{
	func_347(3);
}

int func_304()
{
	return Global_1139844.f_5087.f_325;
}

struct<16> func_305(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_348(&Var0, iVar16, 1))
	{
		case 4:
			DEBUG::_0xEF256AE8A5A27966(10784, 227, 7, "[PEDSHOT] GET_PLAYER_PEDSHOT_TEXTURE - player index is ", iParam1, " texture = '", &Var0, "'.");
			break;
		case 1:
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[PEDSHOT] GET_PLAYER_PEDSHOT_TEXTURE - Error getting a pedshot for player ", PLAYER::GET_PLAYER_NAME(iParam1));
			func_349(iVar16, 1);
			break;
		case 2:
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[PEDSHOT] GET_PLAYER_PEDSHOT_TEXTURE - No pedshot has been requested for ", PLAYER::GET_PLAYER_NAME(iParam1), " but we have data set??");
			func_349(iVar16, 1);
			func_175(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[PEDSHOT] GET_PLAYER_PEDSHOT_TEXTURE - Pedshot for player ", PLAYER::GET_PLAYER_NAME(iParam1), " on its way...");
			break;
		case 0:
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[PEDSHOT] GET_PLAYER_PEDSHOT_TEXTURE - Somehow not doing anything for ped ", PLAYER::GET_PLAYER_NAME(iParam1), " but we have data set??");
			break;
	}
	return Var0;
}

int func_306(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		iVar0 = func_350((*uParam1)[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = joaat("COLOR_PURE_WHITE");
		}
		else
		{
			iVar0 = func_351((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_351((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][GET_PLAYER_CURRENT_HUD_COLOUR] ", iVar0);
	}
	return iVar0;
}

char* func_307(bool bParam0, int iParam1)
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

void func_308()
{
	MISC::SET_BIT(&iLocal_399, 8);
}

var func_309()
{
	return Global_262155;
}

char* func_310(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 60f));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return HUD::_0xD8402B858F4DDD88(&cVar1, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
}

char* func_311(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_352(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_312(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_353((iVar5 / 60), 0, 180);
	iVar7 = func_353((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_0xD8402B858F4DDD88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

char* func_313(char* sParam0)
{
	return HUD::_0xD8402B858F4DDD88(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

int func_314(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return BUILTIN::ROUND(uParam0->f_5);
		case 1:
			return BUILTIN::ROUND(uParam0->f_6);
		case 2:
			return BUILTIN::ROUND(uParam0->f_7);
		case 3:
			return BUILTIN::ROUND(uParam0->f_8);
		default:
			break;
	}
	return 0;
}

struct<16> func_315(int iParam0, var uParam1)
{
	char cVar0[128];

	StringCopy(&cVar0, "", 128);
	if (Global_3145858.f_63242[iParam0 /*3*/].f_1 > -1)
	{
		*uParam1 = !func_354(Global_3145858.f_63242[iParam0 /*3*/].f_1);
		return Global_3145858.f_52948[Global_3145858.f_63242[iParam0 /*3*/].f_1 /*18*/];
	}
	return cVar0;
}

int func_316(char* sParam0)
{
	struct<4> Var0;

	Var0 = Global_1072032.f_23926.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = sParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_317(char* sParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<5> Var0;

	Var0 = Global_1072032.f_23926.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = sParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(sParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(bParam3, &Var0);
		return true;
	}
	return false;
}

bool func_318(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char* func_319(int iParam0)
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

void func_320(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_321(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_322(struct<30> Param0, int iParam30)
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
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_355(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_355(Param0.f_6.f_9, 0));
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

void func_323(struct<7> Param0, var uParam7, var uParam8, int iParam9)
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

bool func_324(vector3 vParam0, char* sParam3, bool bParam4)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = Global_1072032.f_23926.f_366[func_356(vParam0) /*272*/];
	iVar1 = func_316(sVar0);
	if (iVar1 <= 0)
	{
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_NEAREST_RANDOM_FAST_TRAVEL_SPAWN_POINT - ", sVar0, " has no spawn points");
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_NEAREST_RANDOM_FAST_TRAVEL_SPAWN_POINT - Getting point for station ", sVar0, " point ", iVar2);
		if (func_317(sVar0, iVar2, sParam3, bParam4))
		{
			return true;
		}
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_NEAREST_RANDOM_FAST_TRAVEL_SPAWN_POINT - Couldn't retrieve data for station ", sVar0, " point ", iVar2);
	}
	return false;
}

void func_325(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_266(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_154(vParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901988.f_50;
		fParam9 = Global_1901988.f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - vDesiredSpawnInnerScale AND vDesiredSpawnOuterScale set to 0.  You can't do that.");
		fParam8 = Global_1901988.f_50;
		fParam9 = Global_1901988.f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - vDesiredSpawnOuterScale < vDesiredSpawnInnerScale.  You can't do that.");
		fParam8 = Global_1901988.f_50;
		fParam9 = Global_1901988.f_50.f_1;
	}
	if (bParam10)
	{
		func_357(0, 0, 0, 1);
	}
	else
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - Not clearing the spectator lock!");
		UNK_0x355E72323AEE83CC(36, 6);
	}
	func_141(0);
	func_141(3);
	Global_1102630.f_3919 = iParam11;
	Global_1102630.f_3920 = fParam12;
	Global_1102630.f_3921 = iParam13;
	func_320(&(Global_1102630.f_3849));
	Global_1102630.f_3849 = iParam3;
	Global_1102630.f_3849.f_5 = 1;
	Global_1102630.f_3849.f_17.f_6 = { vParam0 };
	Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102630.f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
	if (fParam8 > 1f)
	{
		Global_1102630.f_3849.f_16 = 1;
		Global_1102630.f_3849.f_6.f_6 = { Global_1102630.f_3849.f_17.f_6 };
		Global_1102630.f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102630.f_3849.f_6.f_9 = joaat("VOLSPHERE");
	}
	func_321(&(Global_1102630.f_3888));
	Global_1102630.f_3888.f_6 = { vParam4 };
	Global_1102630.f_3888 = iParam7;
	Global_1102630.f_3888.f_5 = 1;
	Global_1102630.f_26.f_3341 = 0;
	Global_1102630.f_26.f_3342 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK called.  Output starting...");
	func_322(Global_1102630.f_3849, 36);
	func_323(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_326(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_327(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	char[] cVar5[8];
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	DEBUG::_0xA308F935BDECCEC0(2728, 84, "[PERSONA_PHOTO_PUSH_PEDSHOT_GENERATE_REQUEST] Received external pedshot request of type: ", func_358(uParam0->f_1, 0), ", format: ", func_359(*uParam0, 0), ", posix: ", vVar0.y);
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_360(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_360(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = sVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275959.f_154[iVar3]))
					{
					}
					else if (Global_1275959.f_154[iVar3] == Global_1275959.f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&cVar5, Global_1275959.f_154[iVar3]);
					}
					iVar3++;
				}
				DEBUG::_0xA308F935BDECCEC0(680, 84, "[PERSONA_PHOTO_PUSH_PEDSHOT_GENERATE_REQUEST][", func_358(uParam0->f_1, 0), "] - ", "Broadcast requested for full session regeneration.");
				func_361(&Var6, cVar5);
				Jump @517; //curOff = 299
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO_PUSH_PEDSHOT_GENERATE_REQUEST] Received sub-set request with no valid players, aborting.");
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_360(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275959.f_154[iVar3]))
						{
						}
						else if (Global_1275959.f_154[iVar3] == Global_1275959.f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&cVar5, Global_1275959.f_154[iVar3]);
						}
						iVar3++;
					}
					DEBUG::_0xA308F935BDECCEC0(680, 84, "[PERSONA_PHOTO_PUSH_PEDSHOT_GENERATE_REQUEST][", func_358(uParam0->f_1, 0), "] - ", "Broadcast requested for subset regeneration. Regen targets: ", sVar4);
					func_361(&Var14, cVar5);
				}
			}
			default:
				break;
	}
}

var func_328(int iParam0)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, "", 64);
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar8))
		{
			StringConCat(&cVar0, "1", 64);
		}
		else
		{
			StringConCat(&cVar0, "0", 64);
		}
		iVar8++;
	}
	return func_362(&cVar0);
}

int func_329()
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

var func_330(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1140065811);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_331(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "AWARD_STATUS_NONE";
		case 1:
			return "AWARD_STATUS_PENDING";
		case 2:
			return "AWARD_STATUS_SUCCEEDED";
		case 3:
			return "AWARD_STATUS_FAILED";
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

int func_332(int iParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	sVar1 = iParam0;
	if (MISC::IS_BIT_SET(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	DEBUG::_0x1B08D1EB9D8C4931(136, 0, "GET_BIT_INDEX_FROM_BIT: Passed in value: ", sVar1, ". Returned value: ", iVar0);
	return iVar0;
}

void func_333(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_363(bParam0);
	}
	else
	{
		func_364(bParam0);
	}
}

void func_334(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_365(sParam0);
	}
	else
	{
		func_366(sParam0);
	}
}

void func_335(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_367(bParam0);
	}
	else
	{
		func_368(bParam0);
	}
}

void func_336(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_369(uParam0->f_159, uParam0->f_160);
	sVar1 = func_370(uParam0->f_159, uParam0->f_160);
	sVar2 = func_371(uParam0->f_159, uParam0->f_160);
	sVar3 = func_372();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", joaat("COLOR_WHITE"));
	}
	DEBUG::_0xEF256AE8A5A27966(699040, 227, 7, "[LM][ADD_HEADING_DATABINDING_FOR_CUSTOM_LEADERBOARD] - Adding the following column headings - Stat1: ", sVar0, " Stat2: ", sVar1, " Stat3: ", sVar2, " Stat4: ", sVar3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

void func_337(var uParam0, bool bParam1, bool bParam2)
{
	if (func_373(uParam0->f_159) || func_374(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", "");
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", joaat("COLOR_WHITE"));
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_369(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	else if (func_374(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
		}
	}
	if (!func_374(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_370(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_371(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

int func_338()
{
	return 1;
}

void func_339(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[LM][GloLea][UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING][PEDSHOT]  - START - g_HudDataUnsaved.bDisplayMiniScoreBoard = ", Global_1940296.f_111);
	if (Global_1940296.f_111)
	{
		func_375(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_133(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_230(&((uParam1[iVar0 /*23*/])->f_14)))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[LM][GloLea][UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING] Invalid Player : ", iVar0);
			}
			else
			{
				bVar1++;
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[LM][GloLea][UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING] Inserting ", iVar0, " at slot ", bVar1);
				func_232(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_376(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", bVar1);
				}
				bVar3 = iVar2 == (uParam1[iVar0 /*23*/])->f_14;
				bVar4 = func_306(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_377(uParam0, uParam1, iVar0, bParam3, bVar4);
					}
				}
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[LM][GloLea][UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING] Updating ", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING - Color: ", func_307(bVar4, 0));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", bVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_378());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_379((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_142())
					{
						if (func_380((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_381((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				bVar5 = func_382(uParam1[iVar0 /*23*/], uParam0->f_159);
				bVar6 = func_383(uParam1[iVar0 /*23*/], uParam0->f_159);
				bVar7 = func_384(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				bVar8 = func_385(uParam1[iVar0 /*23*/]);
				if (Global_1049283[0 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563(bVar5, 0));
				}
				if (Global_1049283[1 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563(bVar6, 0));
				}
				if (Global_1049283[2 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_0x2B6846401D68E563(bVar7, 0));
				}
				if (Global_1049283[3 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "StatRounds", MISC::_0x2B6846401D68E563(bVar8, 0));
				}
				DEBUG::_0xEF256AE8A5A27966(419424, 227, 7, "[LM][GloLea] UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING Setting Stats - Stat1: ", bVar5, " Stat2: ", bVar6, " Stat3: ", bVar7, " Stat4: ", bVar8);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar3);
				if (bVar3)
				{
					DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[LM][GloLea] UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING setting ", iVar0, " as highlighted");
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea] setting ", iVar0, " as MVP.");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", joaat("COLOR_YELLOW"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", bVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = bVar1;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[LM][GloLea] sUI.iNumPlayersOnLeaderboard = ", uParam0->f_149);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[LM][GloLea][UPDATE_CUSTOM_PLAYER_LEADERBOARD_DATABINDING][PEDSHOT]  - END");
}

void func_340(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING][PEDSHOT]  - START - g_HudDataUnsaved.bDisplayMiniScoreBoard = ", Global_1940296.f_111);
	if (Global_1940296.f_111)
	{
		func_386(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_133(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_230(&((uParam1[iVar0 /*23*/])->f_14)))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] Invalid Player : ", iVar0);
			}
			else
			{
				bVar1++;
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] Inserting ", iVar0, " at slot ", bVar1);
				func_232(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_376(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", bVar1);
				}
				bVar8 = iVar7 == (uParam1[iVar0 /*23*/])->f_14;
				bVar9 = func_306(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_377(uParam0, uParam1, iVar0, bParam3, bVar9);
					}
				}
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] Updating ", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "UPDATE_PLAYER_LEADERBOARD_DATABINDING - Color: ", func_307(bVar9, 0));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", bVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_378());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_379((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_142())
					{
						if (func_380((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_381((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_387(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_374(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_383(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - Stat2");
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_382(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - Stat1");
					}
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - iRaceTimeValue: ", iVar2);
					sVar5 = " ";
					if (func_388(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((uParam1[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_255(iVar2, iVar11, 0);
					}
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][RACETIME][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - sRaceTimeString: ", sVar5);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563(func_382(uParam1[iVar0 /*23*/], uParam0->f_159), func_389(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_384(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - Stat3");
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_383(uParam1[iVar0 /*23*/], uParam0->f_159));
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - Stat2");
					}
					if (func_388(iVar3))
					{
						sVar6 = func_312(iVar3, 1, 2, 0, 0, 0);
					}
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - sFastestLapString: ", sVar6);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						bVar14 = func_384(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						bVar14 = func_383(uParam1[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar13, MISC::_0x2B6846401D68E563(bVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_374(uParam0->f_159)) && !func_373(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563(func_383(uParam1[iVar0 /*23*/], uParam0->f_159), func_389(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_390(func_384(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_384(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						DEBUG::_0xA308F935BDECCEC0(24, 41, "IRON_CLIENT_SORT_SCORES -- fStat3: ", fVar4);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_312(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_384(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_255(iVar2, uParam0->f_159, 0);
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[JT][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - sRaceTimeString: ", sVar5);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_0x2B6846401D68E563(func_384(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_389(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar8);
				if (bVar8)
				{
					DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea] setting ", iVar0, " as highlighted");
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea] setting ", iVar0, " as MVP.");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", joaat("COLOR_YELLOW"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", bVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = bVar1;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea] sUI.iNumPlayersOnLeaderboard = ", uParam0->f_149);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING][PEDSHOT]  - END");
}

void func_341(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea][SORT_TEAM_ORDER_FOR_LEADERBOARD_DATABINDING] - iSortedTeamsOut[", iVar0, "] = ", (*uParam1)[iVar0]);
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && (*uParam1)[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = (*uParam1)[7];
			(*uParam1)[7] = -1;
			DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MMacK][GloLea][SORT_TEAM_ORDER_FOR_LEADERBOARD_DATABINDING] - ciLAST_PLACE_TEAM, new value for iSortedTeamsOut[", (iParam2 - 1), "] = ", (*uParam1)[(iParam2 - 1)], ". iSortedTeamsOut[ciLAST_PLACE_TEAM] = ", (*uParam1)[7]);
		}
	}
}

void func_342(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == (*uParam2)[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_GET_MINI_LEADERBOARD_START_AND_END_FOR_TEAMS  - iCurrentPlayerPos = ", iParam1);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_GET_MINI_LEADERBOARD_START_AND_END_FOR_TEAMS  - iStart = ", *iParam3);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_GET_MINI_LEADERBOARD_START_AND_END_FOR_TEAMS  - iEnd = ", *iParam4);
}

void func_343(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if (bParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0, bParam4))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - Updating Entry ", bParam4);
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, bParam4, sParam2, iParam1);
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][FINALISE_LEADERBOARD_DATABINDING] - Adding Entry ", bParam4);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, bParam4, sParam2, iParam1);
	}
}

void func_344(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_230(&((uParam0[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iPlayerDirectlyAboveMe = ", iVar2);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iPlayerTwoAboveMe = ", iVar3);
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iPlayersBelowMeEnd = ", iVar6);
				}
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iPlayerIdx = iCurrentPlayerPos: ", iVar6);
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iLastPlayerOnLeaderboard = ", iVar4);
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iCurrentPlayerPos = ", iParam1);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iStart = ", *iParam2);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea] PROCESS_GET_MINI_LEADERBOARD_START_AND_END - iEnd = ", *iParam3);
}

void func_345(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[64];
	bool bVar13;
	bool bVar14;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar5);
		cVar5 = { func_391(iVar0) };
		bVar2 = 0f;
		bVar3 = 0f;
		bVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == (*uParam1)[iVar1 /*23*/] && func_230(&((uParam1[iVar1 /*23*/])->f_14)))
			{
				if (MISC::IS_BIT_SET(uParam0->f_159, 19))
				{
					if ((uParam1[iVar1 /*23*/])->f_6 != -1f && bVar2 == 0f)
					{
						bVar2 = (bVar2 + (uParam1[iVar1 /*23*/])->f_6);
					}
					if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
					{
						bVar3 = (bVar3 + (uParam1[iVar1 /*23*/])->f_1);
					}
					if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
					{
						bVar4 = (bVar4 + (uParam1[iVar1 /*23*/])->f_5);
					}
				}
				else
				{
					if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
					{
						bVar2 = (bVar2 + (uParam1[iVar1 /*23*/])->f_1);
					}
					if ((uParam1[iVar1 /*23*/])->f_2 != -1f)
					{
						bVar3 = (bVar3 + (uParam1[iVar1 /*23*/])->f_2);
					}
					if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
					{
						bVar4 = (bVar4 + (uParam1[iVar1 /*23*/])->f_5);
					}
				}
			}
			iVar1++;
		}
		DEBUG::_0xEF256AE8A5A27966(6709792, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Team: ", iVar0, " Local Player Team: ", iParam2, " fTeamStat1: ", bVar2, " fTeamStat2: ", bVar3, " fTeamStat3: ", bVar4);
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Team uses Captures/Score on mini LB, LEADERBOARD_MATCH_TYPE = ", func_392());
				if (func_392() == 0)
				{
					bVar4 = BUILTIN::TO_FLOAT(Global_1050978[iVar0]);
				}
			}
		}
		bVar13 = func_393(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "HeadingColor", bVar13);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Heading", &cVar5);
		DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Adding Team ", iVar0, ": ", &cVar5);
		if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Setup default.");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", bVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(bVar4, uParam0->f_151));
		}
		else if (func_387(uParam0->f_159))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Setup 1.");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", bVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_0x2B6846401D68E563(bVar2, uParam0->f_151));
			bVar14 = bVar3;
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Using stat 3.");
				bVar14 = bVar4;
			}
			DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - fStatToUse = ", bVar14);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", bVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(bVar14, uParam0->f_151));
		}
		else if (func_374(uParam0->f_159))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Setup 2.");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", bVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(bVar4, uParam0->f_151));
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[GloLea][ADD_TEAM_HEADINGS_DATABINDING] - Setup 3.");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat1Color", bVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat1", MISC::_0x2B6846401D68E563(bVar2, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", bVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_0x2B6846401D68E563(bVar3, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", bVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(bVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_346(char* sParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_21420.f_260), sParam0);
}

void func_347(int iParam0)
{
	iLocal_394 = iParam0;
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][EndFlow2] SET_ASSET_LOAD_STAGE = ", func_394(iParam0, 0));
}

int func_348(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT] - iPlayer is INVALID.");
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT] - Player is not active!");
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_395(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				DEBUG::_0xD9911C7B5F8CD69C(680, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), ") - ", "Cast gamer handle is not valid.");
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					DEBUG::_0xD9911C7B5F8CD69C(43688, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Unexpected player pedshot state: ", func_396(iVar2, 0));
					return 1;
					DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Player has no cached pedshot.");
					return 2;
				case 1:
					DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Player is still generating cached pedshot.");
					return 3;
				case 2:
					iVar10 = func_397(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar10);
					DEBUG::_0xA308F935BDECCEC0(174760, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Requesting texture from code cache: ", func_398(iVar10, 0), ", handle: ", iVar1);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						DEBUG::_0xD9911C7B5F8CD69C(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Got invalid handle from texture download.");
						func_399(iParam1, iParam2, 0);
						return 1;
					}
					func_400(iParam1, iParam2, iVar1);
					func_399(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_401(iParam1, iParam2);
					if (iVar1 == 0)
					{
						DEBUG::_0xD9911C7B5F8CD69C(174760, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Invalid handle for cache ", func_398(func_397(iParam2), 0), ", resetting player pedshot cache status.");
						func_399(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Photo download succeeded, move to request texture.");
							func_399(iParam1, iParam2, 4);
							return 3;
						case 1:
							DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Photo download in progress...");
							return 3;
						case 2:
							DEBUG::_0x83407B92D46F25C3(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Photo download failed, resetting cached pedshot data for player.");
							func_399(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_401(iParam1, iParam2);
					if (iVar1 == 0)
					{
						DEBUG::_0xD9911C7B5F8CD69C(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Invalid handle in global player data, resetting player pedshot cache status.");
						func_399(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_IS_STRING_SPACE(sVar12))
					{
						DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Got empty texture string from get request, handle: ", iVar1);
						return 3;
					}
					DEBUG::_0xA308F935BDECCEC0(174760, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Successfully got texture (", sVar12, ") from handle: ", iVar1);
					func_399(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_401(iParam1, iParam2);
					if (iVar1 == 0)
					{
						DEBUG::_0xD9911C7B5F8CD69C(10920, 84, "[PERSONA_PHOTO_GET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam2, 0), ") - ", "Invalid handle in global player data, resetting player pedshot cache status.");
						func_399(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_349(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT] - iPlayer is INVALID.");
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_395(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT] - Player is not active!");
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			DEBUG::_0x9A6C65DDDBEC9C52(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam1, 0), ") - ", "Player has no pedshot to reset!");
			return;
			DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam1, 0), ") - ", "Resetting cached pedshot data only.");
			func_400(iParam0, iParam1, 0);
			func_399(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam1, 0), ") - ", "Resetting cached pedshot data and texture handle.");
			iVar2 = func_401(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
				DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam1, 0), ") - ", "Released textue handle from code: ", iVar2);
			}
			func_399(iParam0, iParam1, 0);
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam1, 0), ") - ", "Reset of pedshot data complete.");
}

int func_350(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][GET_BLIP_COLOUR_FOR_LEADERBOARD] Returning non default ", iParam0);
			switch (iParam0)
			{
				case 0:
					return joaat("COLOR_NET_PLAYER3");
				case 1:
					return joaat("COLOR_NET_PLAYER4");
				case 2:
					return joaat("COLOR_NET_PLAYER5");
				case 3:
					return joaat("COLOR_NET_PLAYER6");
				case 4:
					return joaat("COLOR_NET_PLAYER7");
				case 5:
					return joaat("COLOR_NET_PLAYER8");
				case 6:
					return joaat("COLOR_NET_PLAYER9");
				case 7:
					return joaat("COLOR_NET_PLAYER10");
				default:
					break;
			}
			return joaat("COLOR_WHITE");
		}
		if (iParam1 == iParam0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][GET_BLIP_COLOUR_FOR_LEADERBOARD] Returning local player team");
			return joaat("COLOR_NET_PLAYER1");
		}
	}
	else if (bParam4)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][GET_BLIP_COLOUR_FOR_LEADERBOARD] Returning local player");
		if (iParam2 < 2)
		{
			return joaat("COLOR_WHITE");
		}
		else
		{
			return joaat("COLOR_NET_PLAYER1");
		}
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][GET_BLIP_COLOUR_FOR_LEADERBOARD] Returning enemy team");
	return joaat("COLOR_NET_PLAYER2");
}

int func_351(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return joaat("COLOR_POSSE_NEUTRAL");
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	iVar2 = iParam0;
	if (func_403(func_402(0)) && func_404(func_402(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1072032.f_21420.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1072032.f_21420.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1072032.f_21420.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1072032.f_21420.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_405(iParam0);
			if (iVar6 == joaat("COLOR_NET_PLAYER2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_406(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_407(Global_1072032.f_21420.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_408(iParam0, 1);
	if (!bVar0)
	{
		if (func_409(iParam0, bParam1))
		{
			return func_406(iParam0);
		}
		else if (func_410(iParam0, bParam1))
		{
			if (func_411(iParam0, bParam1))
			{
				return joaat("COLOR_POSSE_ENEMY");
			}
			else
			{
				if (iVar7 > 5)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 3)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 1)
				{
					return joaat("COLOR_NOTORIETY_MEDIUM");
				}
				return joaat("COLOR_NOTORIETY_LOW");
			}
		}
	}
	else if (bVar1)
	{
		return func_405(iParam0);
	}
	else if (func_409(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_413(func_412(func_402(0)), 1) == 395262693)
		{
			return func_406(iParam0);
		}
		else
		{
			return func_406(iParam0);
		}
	}
	else if (func_410(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

char* func_352(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_353(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_354(int iParam0)
{
	return func_414(Global_3145858.f_52948[iParam0 /*18*/].f_17, 0);
}

char* func_355(int iParam0, int iParam1)
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

int func_356(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = BUILTIN::VDIST(vParam0, Global_1072032.f_23926.f_366[iVar0 /*272*/].f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	DEBUG::_0xF0783374333FD8CE(392, 36, "__NPS__GET_NEAREST_FAST_TRAVEL_STATION_ID - bFindNearest = TRUE.  Station ", iVar1, " is the closest at ", fVar3);
	return iVar1;
}

void func_357(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_41(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_415(iParam0, 0));
	if (!func_252(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_251(128) && !func_276(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_329() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_140(18);
	}
	func_43(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

char* func_358(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERPHO_TYPE_INVALID";
		case 0:
			return "PERPHO_TYPE_SC_PROFILE";
		case 1:
			return "PERPHO_TYPE_GENERAL";
		case 2:
			return "PERPHO_TYPE_MINIGAME";
		case 3:
			return "PERPHO_TYPE_END";
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

char* func_359(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PERPHO_TARGET_SC";
		case 1:
			return "PERPHO_TARGET_SESSION";
		case 2:
			return "PERPHO_TARGET_SUBSET";
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

void func_360(vector3 vParam0)
{
	if (Global_1139844.f_5087.f_325 >= 50)
	{
		DEBUG::_0x83407B92D46F25C3(136, 84, "[__PERSONA_PHOTO_PUSH_REQUEST] Queue size has been exceeded | Max Size: ", 50, " | BAILING OUT!");
		return;
	}
	if (vParam0.x == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[__PERSONA_PHOTO_PUSH_REQUEST] Requested an invalid photo type, bailing out.");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 84, "[__PERSONA_PHOTO_PUSH_REQUEST] Pushing request Type: ", func_358(vParam0.x, 0), " to index: ", Global_1139844.f_5087.f_324);
	DEBUG::_0xA308F935BDECCEC0(8, 84, " ... Cloud Time : ", vParam0.y);
	Global_1139844.f_5087.f_326[Global_1139844.f_5087.f_324 /*3*/] = { vParam0 };
	Global_1139844.f_5087.f_324 = (Global_1139844.f_5087.f_324 + 1 % 50);
	Global_1139844.f_5087.f_325++;
}

void func_361(var uParam0, char* sParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&sParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[__PERSONA_PHOTO_EVENT_BROADCAST] No players defined in sPlayerBits, cannot broadcast event.");
		return;
	}
	*uParam0 = 187;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &sParam1);
	DEBUG::_0xA308F935BDECCEC0(168, 84, "[__PERSONA_PHOTO_EVENT_BROADCAST] Successfully sent event: ", func_416(uParam0->f_4, 0), ", Targets: ", sParam1);
}

char[] func_362(char[4] cParam0)
{
	return cParam0;
}

void func_363(bool bParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(bParam0))
	{
		func_202(bParam0);
	}
}

void func_364(bool bParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(bParam0))
	{
		func_183(bParam0);
	}
}

void func_365(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

void func_366(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_367(bool bParam0)
{
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(bParam0))
	{
		GRAPHICS::_0xDFEA23EC90113657(bParam0);
		DEBUG::_0xA308F935BDECCEC0(40, 87, "REQUEST_WORLD_STATIC_VEG_MODIFIER_GROUP_SAFE	 - enabling static veg modifier ", UNK_0x4379B6FA65D55295(bParam0));
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(40, 87, "REQUEST_WORLD_STATIC_VEG_MODIFIER_GROUP_SAFE - failed to nable static veg modifier ", UNK_0x4379B6FA65D55295(bParam0));
	}
}

void func_368(bool bParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(bParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(bParam0);
	}
}

char* func_369(int iParam0, int iParam1)
{
	if (func_75())
	{
		return func_417(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::_CREATE_VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_370(int iParam0, int iParam1)
{
	if (func_75())
	{
		return func_417(1);
	}
	else if (func_374(iParam0) || func_373(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::_GET_LABEL_TEXT("UIC_LB_TIME");
		}
		else
		{
			return func_418(iParam0);
		}
	}
	else if (func_387(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
}

char* func_371(int iParam0, int iParam1)
{
	if (func_75())
	{
		return func_417(2);
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::_GET_LABEL_TEXT("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam1, 11))
	{
		return MISC::_CREATE_VAR_STRING(2, "FME_AT_SCORE_TAG");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam1, 13))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_418(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_373(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
	}
	else if (func_374(iParam0) && !func_373(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_SCORE");
}

char* func_372()
{
	if (func_75())
	{
		return func_417(3);
	}
	return "";
}

bool func_373(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

bool func_374(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_375(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = Global_1049309[0 /*3*/].f_2 == -1128715836;
	bVar17 = Global_1049309[0 /*3*/].f_2 == 1691389412;
	bVar18 = Global_1049309[0 /*3*/].f_2 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea][UPDATE_CUSTOM_PLAYER_MINI_LEADERBOARD_DATABINDING] DATABINDING_WRITE_STRING_FROM_PARENT(sUI.dsLeaderboardPlayerRowMini[", iVar2, "], \"Position\ \"\") ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", false);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_392() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1050978[iVar0]);
				DEBUG::_0xEF256AE8A5A27966(1568, 227, 7, "[MMacK][GloLea][UPDATE_CUSTOM_PLAYER_MINI_LEADERBOARD_DATABINDING] - g_mpUGC_TeamScore fTeamStat[", iVar0, "] = ", fVar21[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (func_419(uParam1[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[(*uParam1)[iVar0 /*23*/]] = (fVar21[(*uParam1)[iVar0 /*23*/]] + func_419(uParam1[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_341(uParam2, &uVar30, uParam0->f_150, bVar19);
		func_342(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						Var7 = { func_391(iVar39) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var7);
						bVar40 = func_393(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", bVar40);
						DEBUG::_0xEF256AE8A5A27966(1568, 227, 7, "[MMacK][GloLea][UPDATE_CUSTOM_PLAYER_MINI_LEADERBOARD_DATABINDING] - fTeamStat[", iVar39, "] = ", fVar21[iVar39]);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_0x2B6846401D68E563(fVar21[iVar39], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_344(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_230(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea][UPDATE_CUSTOM_PLAYER_MINI_LEADERBOARD_DATABINDING] Inserting ", iVar1, " at slot ", iVar3);
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][UPDATE_CUSTOM_PLAYER_MINI_LEADERBOARD_DATABINDING] Updating ", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == (uParam1[iVar1 /*23*/])->f_14;
						bVar42 = func_306(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", bVar42);
						sVar43 = "";
						sVar43 = MISC::_0x2B6846401D68E563(func_419(uParam1[iVar1 /*23*/], 0), 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar43);
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_CUSTOM_PLAYER_MINI_LEADERBOARD_DATABINDING] Invalid Player : ", iVar1);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_376(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if ((*uParam0)[iParam1 /*23*/] == (*uParam0)[iVar0 /*23*/] && func_230(&((uParam0[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

void func_377(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	switch ((uParam1[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iParam2], "SetOverlayImg", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[GloLea] UPDATE_PLAYER_STATE_DATA_BINDING - Attempting to set overlay img and show it for player", iParam2);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[GloLea] UPDATE_PLAYER_STATE_DATA_BINDING - Attempting to show cross for player", iParam2);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "CrossColor", bParam4);
	}
}

char* func_378()
{
	return "RSN";
}

char* func_379(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::_CREATE_VAR_STRING(2, "NUMBER", Global_1145562[iParam0 /*35*/]);
}

bool func_380(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_420()));
	return iParam0 == iVar0;
}

char* func_381(bool bParam0)
{
	if (bParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(joaat("MP_PLAYINGSTYLES"), bParam0);
	}
	return "";
}

float func_382(var uParam0, int iParam1)
{
	if (func_75())
	{
		return func_421(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

bool func_383(var uParam0, int iParam1)
{
	if (func_75())
	{
		func_421(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_387(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

char* func_384(var uParam0, int iParam1, int iParam2)
{
	if (func_75())
	{
		func_421(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_374(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

float func_385(var uParam0)
{
	if (func_75())
	{
		func_421(uParam0, 3);
	}
	return -1f;
}

void func_386(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] DATABINDING_WRITE_STRING_FROM_PARENT(sUI.dsLeaderboardPlayerRowMini[", iVar2, "], \"Position\ \"\") ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", false);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		DEBUG::_0xEF256AE8A5A27966(35791392, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - bTeam = ", bVar12, " - bRace = ", bVar7, " - bScore = ", bVar8, " - bKills = ", bVar9, " - bCaptures = ", bVar10, " - bNonDefault = ", bVar24);
		if ((bVar10 || bVar8) && func_392() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1050978[iVar0]);
				DEBUG::_0xEF256AE8A5A27966(1568, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - g_mpUGC_TeamScore fTeamStat[", iVar0, "] = ", fVar25[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if ((uParam1[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if ((uParam1[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_8);
						}
					}
					else if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_341(uParam2, &uVar34, uParam0->f_150, bVar23);
		func_342(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						Var14 = { func_391(iVar43) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var14);
						bVar44 = func_393(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", bVar44);
						DEBUG::_0xEF256AE8A5A27966(1568, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - fTeamStat[", iVar43, "] = ", fVar25[iVar43]);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_0x2B6846401D68E563(fVar25[iVar43], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_344(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_230(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] Inserting ", iVar1, " at slot ", iVar3);
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] Updating ", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == (uParam1[iVar1 /*23*/])->f_14;
						bVar46 = func_306(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", bVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_384(uParam1[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_383(uParam1[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_382(uParam1[iVar1 /*23*/], uParam0->f_159));
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - iRaceTimeValue: ", iVar4);
								sVar47 = " ";
								if (func_388(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((uParam1[iVar1 /*23*/])->f_1 == 8.94E+07f)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_255(iVar4, iVar48, 1);
								}
								DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][RACETIME][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - stValue: ", sVar47);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(func_382(uParam1[iVar1 /*23*/], uParam0->f_159), func_389(uParam0, 1));
								DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][RACETIME][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - GET_DEC_PLAYERS_TO_USE stValue: ", sVar47);
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_1, 0);
							DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][RACETIME][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - bKills stValue: ", sVar47);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_390((uParam1[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_5, 0);
							}
							DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][RACETIME][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - bScore stValue: ", sVar47);
						}
						else if (bVar11)
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_1, 0);
							DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MMacK][GloLea][RACETIME][UPDATE_PLAYER_LEADERBOARD_DATABINDING] - ELSE stValue: ", sVar47);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar47);
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea][UPDATE_PLAYER_LEADERBOARD_DATABINDING] Invalid Player : ", iVar1);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_387(int iParam0)
{
	if ((func_374(iParam0) || func_373(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_388(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return true;
	}
	return false;
}

int func_389(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

char* func_390(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FM_WEIGHT", sParam0);
}

struct<8> func_391(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1050987[iParam0 /*8*/])))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&cVar0), 64);
		return cVar0;
	}
	return Global_1050987[iParam0 /*8*/];
}

char* func_392()
{
	char* sVar0;

	if (func_23(16))
	{
		sVar0 = Global_1050050.f_12;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea] GET_LEADERBOARD_MATCH_TYPE - Called during end flow, return global job type ", sVar0);
	}
	else
	{
		sVar0 = func_422();
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][GloLea] GET_LEADERBOARD_MATCH_TYPE - Called during content, return hacky job type ", sVar0);
	}
	return sVar0;
}

int func_393(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_350(iParam0, iParam1, iParam2, bParam3, bParam4);
}

char* func_394(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ECELEBRATION_SCREEN_ASSET_LOAD_PROPS";
		case 1:
			return "ECELEBRATION_SCREEN_ASSET_LOAD_CLONES";
		case 2:
			return "ECELEBRATION_SCREEN_ASSET_LOAD_LIGHTS";
		case 3:
			return "ECELEBRATION_SCREEN_ASSET_LOAD_COMPLETE";
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

int func_395(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_GET_TYPE_CACHE_STATE] Cannot get type 'INVALID'");
		return -1;
	}
	return Global_1139844.f_5087[iParam0 /*10*/].f_5[iParam1];
}

char* func_396(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERPHO_CACHE_STATE_INVALID";
		case 0:
			return "PERPHO_CACHE_STATE_NONE";
		case 1:
			return "PERPHO_CACHE_STATE_GENERATING";
		case 2:
			return "PERPHO_CACHE_STATE_GENERATE_COMPLETE";
		case 3:
			return "PERPHO_CACHE_STATE_EXTRACTING";
		case 4:
			return "PERPHO_CACHE_STATE_VERIFY";
		case 5:
			return "PERPHO_CACHE_STATE_AVAILABLE";
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

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

char* func_398(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SINGLEPLAYER_GENERAL";
		case 1:
			return "SINGLEPLAYER_MINIGAME";
		case 2:
			return "MULTIPLAYER_GENERAL";
		case 3:
			return "MULTIPLAYER_MINIGAME";
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

void func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] Cannot set state 'INVALID'");
		return;
	}
	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] Cannot set type 'INVALID'");
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] iPlayer is invalid: ", iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] - Player is not active!");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(699048, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam1, 0), ") ", "New State: ", func_396(iParam2, 0), ", Old state: ", func_396(Global_1139844.f_5087[iParam0 /*10*/].f_5[iParam1], 0));
	Global_1139844.f_5087[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_400(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE] Cannot set type 'INVALID'");
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE] iPlayer is invalid: ", iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE] - Player is not active!");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(141992, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_358(iParam1, 0), ") ", "New handle: ", sParam2, ", Old handle: ", sParam2);
	Global_1139844.f_5087[iParam0 /*10*/][iParam1] = sParam2;
}

int func_401(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_GET_TYPE_CACHE_HANDLE] Cannot get type 'INVALID'");
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1139844.f_5087[iParam0 /*10*/][iParam1];
}

struct<2> func_402(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_403(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_423(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_404(var uParam0, var uParam1)
{
	return uParam0;
}

int func_405(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return joaat("COLOR_NET_PLAYER3");
		case 1:
			return joaat("COLOR_NET_PLAYER4");
		case 2:
			return joaat("COLOR_NET_PLAYER5");
		case 3:
			return joaat("COLOR_NET_PLAYER6");
		case 4:
			return joaat("COLOR_NET_PLAYER7");
		case 5:
			return joaat("COLOR_NET_PLAYER8");
		case 6:
			return joaat("COLOR_NET_PLAYER9");
		case 7:
			return joaat("COLOR_NET_PLAYER10");
		case 8:
			return joaat("COLOR_NET_PLAYER11");
		default:
			break;
	}
	return joaat("COLOR_NET_PLAYER2");
}

int func_406(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1275959.f_15 && !func_424())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

bool func_407(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_408(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_425(iParam0, bParam1));
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

bool func_409(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "IS_PLAYER_ALLY - NOT NETWORK_IS_GAME_IN_PROGRESS");
		return false;
	}
	if (iParam0 == Global_1275959.f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1275959.f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28391), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28389), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28390), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28386), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28388), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275959.f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return true;
	}
	return false;
}

bool func_410(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28390), sVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28391), sVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28389), sVar0))
		{
			return true;
		}
	}
	if (func_426(iParam0))
	{
		return true;
	}
	return !func_409(iParam0, 0);
}

bool func_411(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28390), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28391), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28389), iVar0))
		{
			return true;
		}
	}
	if (func_427(iParam0))
	{
		return false;
	}
	if (func_426(iParam0))
	{
		return false;
	}
	if (func_428(iParam0))
	{
		return true;
	}
	return func_429(iParam0);
}

int func_412(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_430(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_413(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

bool func_414(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

char* func_415(int iParam0, int iParam1)
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

char* func_416(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERSONA_PHOTO_EVENT_NONE";
		case 0:
			return "PERSONA_PHOTO_EVENT_UPDATE_PEDSHOT";
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

char* func_417(int iParam0)
{
	if (Global_3145858.f_63228[iParam0 /*3*/].f_1 > -1)
	{
		if (func_354(Global_3145858.f_63228[iParam0 /*3*/].f_1))
		{
			return MISC::_CREATE_VAR_STRING(2, &(Global_3145858.f_52948[Global_3145858.f_63228[iParam0 /*3*/].f_1 /*18*/]));
		}
		return func_431(&(Global_3145858.f_52948[Global_3145858.f_63228[iParam0 /*3*/].f_1 /*18*/]));
	}
	return "";
}

char* func_418(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CPCO");
	}
	return "";
}

float func_419(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

var func_420()
{
	return Global_1102630.f_26.f_3341;
}

float func_421(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

int func_422()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_MISSION_CONTROLLER")) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CONTROLLER")) != 0)
	{
		return 1;
	}
	return 2;
}

int func_423(struct<2> Param0)
{
	int iVar0;

	if (!func_432(Param0))
	{
		return -1;
	}
	iVar0 = func_433(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072032.f_19554.f_1[iVar0 /*3*/].f_2;
}

bool func_424()
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
	if (!func_432(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_425(int iParam0, bool bParam1)
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

bool func_426(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28388), sParam0))
	{
		return true;
	}
	return false;
}

bool func_427(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

bool func_428(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28386), sParam0))
	{
		return true;
	}
	return false;
}

bool func_429(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_434(iParam0);
		return false;
	}
	if (func_428(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, iParam0) != 2)
		{
			func_435(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275959.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, iParam0) == 2);
}

bool func_430(struct<2> Param0, bool bParam2)
{
	if (!func_432(Param0))
	{
		return false;
	}
	func_436(bParam2);
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

var func_431(var uParam0)
{
	return uParam0;
}

bool func_432(struct<2> Param0)
{
	if (!func_437(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_438(Param0))
	{
		return false;
	}
	return true;
}

int func_433(struct<2> Param0)
{
	char* sVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	sVar0 = func_439(Param0);
	if (Global_1072032.f_19554 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - Trying to find ", sVar0, " but ths list is empty.");
		return -1;
	}
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	if (!func_430(Param0, &vVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - ", sVar0, " is invalid.");
		return -1;
	}
	iVar7 = 0;
	iVar8 = (Global_1072032.f_19554 - 1);
	iVar10 = 0;
	while (iVar7 <= iVar8)
	{
		iVar9 = (iVar7 + ((iVar8 - iVar7) / 2));
		func_430(Global_1072032.f_19554.f_1[iVar9 /*3*/], &vVar4);
		if (vVar4.x > vVar1.x)
		{
			iVar8 = (iVar9 - 1);
		}
		else if (vVar4.x < vVar1.x)
		{
			iVar7 = iVar9 + 1;
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(2696, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to find ", sVar0, " at index ", iVar9);
			return iVar9;
		}
		iVar10++;
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to NOT find ", sVar0);
	return -1;
}

void func_434(char* sParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_440(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_435(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_441(iVar0, iParam1, iParam5))
	{
		bVar1 = true;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1275959.f_22[iVar0])
		{
			func_434(sParam0);
			return;
		}
		DEBUG::_0xA308F935BDECCEC0(2796168, 162, "HUD_SET_PLAYER_TRUE_ENEMY: Setting hostile for player ", iVar0, " bSyncToPosse = ", MISC::_0xF216F74101968DB0(bParam2), ", bSendEventToLocalPosse = ", MISC::_0xF216F74101968DB0(bParam3), ", bSendEventToRemotePosse = ", MISC::_0xF216F74101968DB0(bParam4), ", eEnemyEventType = ", func_442(iParam1, 0));
		UNK_0x355E72323AEE83CC(162, 7);
		NETWORK::_0x51951DE06C0D1C40(sParam0, 2);
		Global_1072032.f_21420.f_1[iVar0 /*8*/] = 2;
		bVar1 = true;
	}
	if (bParam2 && bVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1275959 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::_0x3F59FE6F37869576(iVar3, sParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_435(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = sParam0;
			Var6.f_7 = iParam1;
			func_443(&Var6, uVar4);
		}
	}
}

void func_436(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_437(int iParam0)
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

int func_438(int iParam0)
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

char* func_439(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_444(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_432(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_445(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_440(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_441(int iParam0, int iParam1, int iParam2)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "HUD_SET_PLAYER_ENEMY_EVENT_TYPE: Setting enemy event to ", func_442(iParam1, 0), " and starting timer for player ", iParam0);
		if (iParam2 != 0)
		{
			Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = Global_1275959.f_21;
		}
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "HUD_SET_PLAYER_ENEMY_EVENT_TYPE: Received another enemy event of type ", func_442(iParam1, 0), ", restarting timer for player ", iParam0);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = Global_1275959.f_21;
		return true;
	}
	return false;
}

char* func_442(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_HUD_ENEMY_EVENT_TYPE_NONE";
		case 1:
			return "NET_HUD_ENEMY_EVENT_TYPE_WARNING_SHOT";
		case 2:
			return "NET_HUD_ENEMY_EVENT_TYPE_AIMING";
		case 3:
			return "NET_HUD_ENEMY_EVENT_TYPE_DAMAGE";
		case 4:
			return "NET_HUD_ENEMY_EVENT_TYPE_KILLED";
		case 5:
			return "NET_HUD_ENEMY_EVENT_TYPE_MISSION_SPECIFIC";
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

void func_443(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "BROADCAST_NET_HUD_EVENT - playerBits is 0");
		return;
	}
	*uParam0 = 184;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_446(*uParam0);
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

int func_445(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_430(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_446(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "-----------------------------------------------");
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "PRINT_SCRIPT_EVENT_NET_HUD_EVENT");
	DEBUG::_0x1B08D1EB9D8C4931(40, 162, "playerBroadcaster		= ", PLAYER::GET_PLAYER_NAME(Param0.f_1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 162, "eType					= ", func_447(Param0.f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "-----------------------------------------------");
}

char* func_447(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_HUD_EVENT_NULL";
		case 1:
			return "NET_HUD_EVENT_TYPE_MAKE_TRUE_ENEMY";
		case 2:
			return "NET_HUD_EVENT_TYPE_WARNING_SHOT_FIRED";
		case 3:
			return "NET_HUD_EVENT_TYPE_GANG_JOINED";
		case 4:
			return "NET_HUD_EVENT_TYPE_MAKE_TRUE_ENEMY_NOTORIETY";
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

