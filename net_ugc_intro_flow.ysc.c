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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	struct<16> Local_16 = { 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = false;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = false;
	int iLocal_53[2] = { 0, 0 };
	int iLocal_56[1] = { 0 };
	bool bLocal_58 = false;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75[4] = { 0, 0, 0, 0 };
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	vector3 vLocal_83[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_180 = 0;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
#endregion

void __EntryFunction__()
{
	char cVar0[32];

	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_60 = -1;
	sLocal_61 = "script@mp@introflow@teamonfoot";
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%%% Net_UGC_Intro_Flow Started %%%%%%%%%%");
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%%% 1.5 %%%%%%%%%%");
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1(512);
	if (func_2(-2147483648))
	{
		bLocal_35 = true;
	}
	else if (func_2(1073741824 /* Float: 2f */))
	{
		bLocal_36 = true;
	}
	Global_1049264 = 1;
	func_3();
	func_4(&Local_16, 0, 1);
	func_5(&Local_16, 0);
	Local_16.f_2 = -956723401;
	iLocal_32 = PLAYER::PLAYER_ID();
	iLocal_33 = PLAYER::GET_PLAYER_PED(iLocal_32);
	iLocal_37 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_PhotoToScene");
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_37);
	iLocal_38 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_SceneToPhoto");
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_38);
	StringCopy(&cVar0, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52028)))
	{
		cVar0 = { Global_3145858.f_52028 };
	}
	AUDIO::PREPARE_MUSIC_EVENT(&cVar0);
	while (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "a loading screen is active, we cant throw up ours until its gone");
		BUILTIN::WAIT(0);
	}
	while (!func_6())
	{
		if (func_7())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
			if (!func_8(16))
			{
				if (func_9())
				{
					func_10();
					if (func_11())
					{
						func_12();
						func_13();
						func_14();
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%%% intro flow still loading");
					}
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%%% text loading main block");
				}
			}
			else
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_UGC_END_FLOW")) != 0)
				{
				}
				else
				{
					func_15(0);
				}
				bLocal_44 = true;
				if (func_9())
				{
					func_10();
				}
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%%% UGC_END_FLOW_FLAG_DOING_ROUNDS_TRANSITION");
			}
		}
		else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_UGC_END_FLOW")) != 0)
		{
		}
		else if (func_11() && func_9())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%%% loaded whilst asleep");
		}
		BUILTIN::WAIT(0);
	}
	AUDIO::_0x2E399EAFBEEA74D5();
	func_16();
	func_17(1);
	Global_1049264 = 0;
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "%%%%%%%%%% Net_UGC_Intro_Flow Finished %%%%%%%%%%");
	func_18();
}

void func_1(int iParam0)
{
	Global_262153 = (Global_262153 - (Global_262153 && iParam0));
}

bool func_2(int iParam0)
{
	return (Global_262153 && iParam0) != 0;
}

void func_3()
{
	Global_1139844.f_4787.f_5 = Global_1953612.f_1694.f_1[0 /*3*/];
	Global_1139844.f_4787.f_8 = Global_1953612.f_1694.f_1[2 /*3*/];
	func_19();
	func_20();
	func_21();
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_CLIENT_HEAD_DATA] Setting head item to: ", UNK_0x4379B6FA65D55295(Global_1139844.f_4787.f_5), " hash: ", Global_1139844.f_4787.f_5);
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_CLIENT_HEAD_DATA] Setting eyes item to: ", UNK_0x4379B6FA65D55295(Global_1139844.f_4787.f_8), " hash: ", Global_1139844.f_4787.f_8);
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(var uParam0, bool bParam1)
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

bool func_6()
{
	if (func_22() == 7)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "END REASON - IF_STATE_TERMINATE");
		return true;
	}
	if (func_23(1, 1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "END REASON - KILL EVENT CAUGHT");
		return true;
	}
	if (func_2(64))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "END REASON - CONTROLLER TERMINATION CAUGHT");
		return true;
	}
	if (func_2(512))
	{
		HUD::_DISPLAY_HUD_COMPONENT(690901814);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "END REASON - JIP TERMINATION CAUGHT");
		return true;
	}
	return false;
}

bool func_7()
{
	if (func_2(2) && !MISC::IS_BIT_SET(iLocal_46, 1))
	{
		MISC::SET_BIT(&iLocal_46, 1);
		HUD::_DISPLAY_HUD_COMPONENT(128623374);
	}
	return MISC::IS_BIT_SET(iLocal_46, 1);
}

bool func_8(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

bool func_9()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("UIC"))
	{
		HUD::_TEXT_DATABASE_REQUEST("UIC");
	}
	else
	{
		return true;
	}
	iLocal_45++;
	if (iLocal_45 > 100)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Timed out - continuing anyway");
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Still loading: ", iLocal_45);
	return false;
}

void func_10()
{
	if (!func_2(268435456) && !MISC::IS_BIT_SET(iLocal_46, 5))
	{
		func_24(32768);
		func_25(1);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_AUDIO_ONLINE_TRANSITION_STAGE = loading_black_white");
		AUDIO::_0x9B1FC259187C97C0("loading_black_white");
		SCRIPTS::_SHOW_LOADING_SCREEN(func_26(), func_27(), func_28(), func_29(), func_30(), func_31());
		MISC::SET_BIT(&iLocal_46, 5);
		func_5(&Local_16, 1);
	}
}

bool func_11()
{
	if (bLocal_47)
	{
		return true;
	}
	if (!func_32(&Local_16))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Loading Splash Flow");
		return false;
	}
	if (func_33(&uLocal_48))
	{
		if (!GRAPHICS::_0x59EA80079B86D8C7(iLocal_37) && !GRAPHICS::_0x59EA80079B86D8C7(iLocal_38))
		{
			bLocal_47 = true;
			return true;
		}
		else if (func_34(&uLocal_48, 0, 0) > 30000)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "FAIL SAFE LOAD ACTIVATED FOR INTRO FLOW");
			DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "FAIL SAFE LOAD ACTIVATED FOR INTRO FLOW");
			return true;
		}
	}
	else
	{
		func_35(&uLocal_48, 0, 0);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "UI_FLOW_IS_LOADED is not loaded");
	return false;
}

void func_12()
{
	int iVar0;
	int iVar1;

	CAM::_0x8910C24B7E0046EC();
	if (!Global_1940296.f_19)
	{
		func_17(0);
	}
	if (!func_2(256))
	{
		iVar0 = 14;
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if ((iVar1 != 1 && iVar1 != 13) && iVar1 != 4)
			{
				UIFEED::_0xDD1232B332CBB9E7(iVar1, 1, 1);
			}
			iVar1++;
		}
	}
	func_36();
	if (Global_1940463.f_2)
	{
		Global_1940463 = 2;
	}
	if (Global_1896750.f_398)
	{
		func_37(0);
	}
}

void func_13()
{
	func_38(&Local_16);
	switch (iLocal_13)
	{
		case 0:
			if (func_11())
			{
				MISC::SET_BIT(&(Global_1959011.f_1), 5);
				func_39();
				if (!func_40())
				{
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
				}
				HUD::_HIDE_HUD_COMPONENT(690901814);
				if (func_2(268435456))
				{
					if (!func_2(262144))
					{
						if (!func_41())
						{
							CAM::DO_SCREEN_FADE_OUT(1000);
						}
						func_42(1);
					}
				}
				else
				{
					func_43(&Local_16, func_29(), func_30(), func_31());
				}
				GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_37);
				func_44(1);
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Loading intro flow block");
			}
			break;
		case 1:
			if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_CLEANUP_OF_INTRO_FLOW - Setting 'MusicIgnoreDeathArrest' to true and triggering MC_SUSPENSE_LOW.");
				AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
			}
			func_44(2);
			if (func_2(262144) || !func_2(268435456))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_INTRO_FLOW - Fade in");
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(750);
				}
			}
			break;
		case 2:
			if (func_2(256) || func_2(262144))
			{
				func_44(5);
			}
			else if (func_2(4))
			{
				if (!func_2(268435456))
				{
					CAM::DO_SCREEN_FADE_IN(0);
				}
				GRAPHICS::RESET_PAUSED_RENDERPHASES();
				func_44(3);
			}
			break;
		case 3:
			if ((func_2(8) && (ENTITY::IS_ENTITY_VISIBLE(iLocal_33) || bLocal_52)) && Global_262154 != -1)
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 6))
				{
					func_45();
					MISC::SET_BIT(&iLocal_46, 6);
				}
				if (func_46())
				{
					if (!func_2(4096))
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_INTRO_FLOW - Setting into fast instance.", Global_262154);
						NETWORK::_0x4B05B97BA46F419D(0);
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, Global_262154, true);
					}
					func_47();
					if (MISC::IS_BIT_SET(iLocal_46, 9))
					{
						func_48(0);
					}
					func_44(4);
				}
			}
			else if (Global_262154 == -1)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_INTRO_FLOW g_iFastInstanceToUse");
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_33))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_INTRO_FLOW IS_ENTITY_VISIBLE piLocalPed");
				if (!func_33(&uLocal_50))
				{
					func_35(&uLocal_50, 0, 0);
				}
				else if (func_34(&uLocal_50, 0, 0) > 10000)
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_INTRO_FLOW ped fail safe triggered");
					bLocal_52 = true;
				}
			}
			break;
		case 4:
			if (func_2(16))
			{
				func_44(5);
			}
			else
			{
				func_49();
			}
			break;
		case 5:
			func_50(&Local_16);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
			if (!func_41())
			{
				HUD::_DISPLAY_HUD_COMPONENT(690901814);
			}
			func_44(6);
			break;
		case 6:
			if (func_2(1024))
			{
				func_16();
			}
			break;
		case 7:
			break;
	}
}

void func_14()
{
	if (!bLocal_39)
	{
		if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_38))
		{
			if (GRAPHICS::_0x9AB192A9EF980EED(iLocal_38, 2, false, &uLocal_40))
			{
				if (AUDIO::_0xE368E8422C860BA7("flash_to_photo", "rdro_gamemode_transition_sounds", -2))
				{
					bLocal_39 = true;
					func_5(&Local_16, 1);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_AUDIO_ONLINE_TRANSITION_STAGE = photograph");
					AUDIO::_0x9B1FC259187C97C0("photograph");
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_photo", "rdro_gamemode_transition_sounds", true, 0);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "play sfx team");
				}
			}
		}
	}
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		func_51(16);
	}
	else
	{
		func_52(16);
	}
}

void func_16()
{
	int iVar0;
	char cVar1[32];

	if (func_22() == 7)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Intro Flow has already cleaned up");
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049198[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049198[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049198[iVar0], true, true);
			}
			PED::DELETE_PED(&(Global_1049198[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049231[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049231[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049231[iVar0], true, true);
			}
			PED::DELETE_PED(&(Global_1049231[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_53[iVar0]))
		{
			CAM::SET_CAM_ACTIVE(iLocal_53[iVar0], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1049198[iVar0] = func_53();
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_56[0]))
	{
		CAM::SET_CAM_ACTIVE(iLocal_56[0], false);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Intro Flow clearing load screens");
	SCRIPTS::_0x778D4733E0F2F265(1);
	if (!func_40())
	{
		Global_1072032.f_28725.f_8.f_13 = 0;
	}
	CAM::DESTROY_ALL_CAMS(false);
	if ((MISC::IS_BIT_SET(iLocal_46, 3) && iLocal_42 != -1) && func_54(iLocal_42))
	{
		CAM::_0x2412216FCC7B4E3E(func_55(iLocal_42));
	}
	if (iLocal_37 != 0)
	{
		if (iLocal_13 > 0)
		{
			if (!bLocal_182)
			{
				GRAPHICS::_0x71845905BCCDE781(iLocal_37);
			}
			GRAPHICS::_0xEDA5CBECF56E1386(iLocal_37);
		}
		if (bLocal_182)
		{
			GRAPHICS::_0x71845905BCCDE781(iLocal_38);
		}
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_37);
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_38);
		iLocal_37 = 0;
	}
	if (!func_2(4096) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_CLEANUP_OF_INTRO_FLOW - Setting out of fast instance.");
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
		}
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "PROCESS_CLEANUP_OF_INTRO_FLOW - Setting 'MusicIgnoreDeathArrest' to false.");
	AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
	func_56();
	func_42(0);
	func_57();
	StringCopy(&cVar1, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52028)))
	{
		cVar1 = { Global_3145858.f_52028 };
	}
	AUDIO::CANCEL_MUSIC_EVENT(&cVar1);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	func_58(&Local_16);
	Global_1049276 = -1;
	Global_262154 = -1;
	MISC::CLEAR_BIT(&(Global_1959011.f_1), 5);
	func_25(0);
	func_44(7);
}

void func_17(bool bParam0)
{
	if (bParam0)
	{
		Global_1952230.f_1381 = (Global_1952230.f_1381 - Global_1952230.f_1381 & 2);
	}
	else
	{
		Global_1952230.f_1381 |= 2;
	}
	func_59(bParam0);
}

void func_18()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_19()
{
	Global_1139844.f_4787.f_7 = Global_1953612.f_1694.f_1[1 /*3*/];
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_CLIENT_HEAD_HAIR_DATA] Setting hair item to: ", UNK_0x4379B6FA65D55295(Global_1139844.f_4787.f_7), " hash: ", Global_1139844.f_4787.f_7);
}

void func_20()
{
	Global_1139844.f_4787.f_9 = Global_1953612.f_1694.f_1[3 /*3*/];
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_CLIENT_TEETH_DATA] Setting teeth item to: ", UNK_0x4379B6FA65D55295(Global_1139844.f_4787.f_9), " hash: ", Global_1139844.f_4787.f_9);
}

void func_21()
{
	Global_1139844.f_4787.f_6 = Global_1953612.f_1694.f_1[4 /*3*/];
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_CLIENT_FACIAL_HAIR_DATA] Setting facial hair item to: ", UNK_0x4379B6FA65D55295(Global_1139844.f_4787.f_6), " hash: ", Global_1139844.f_4787.f_6);
}

int func_22()
{
	return iLocal_13;
}

bool func_23(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_60(Global_1572887, 0), ", so skipping");
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

void func_24(int iParam0)
{
	Global_262153 = (Global_262153 || iParam0);
}

void func_25(bool bParam0)
{
	if (!bParam0)
	{
		func_61(20);
	}
	else
	{
		func_62(20);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

int func_26()
{
	if ((Global_3145858.f_1 > -1 && Global_3145858.f_1 < Global_3145858.f_52947) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52948[Global_3145858.f_1 /*18*/])))
	{
		DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, " GET_MODE_TAG -  Get custom text index ", Global_3145858.f_1, " and text ", &(Global_3145858.f_52948[Global_3145858.f_1 /*18*/]));
		return MISC::GET_HASH_KEY(&(Global_3145858.f_52948[Global_3145858.f_1 /*18*/]));
	}
	if (bLocal_35)
	{
		switch (Global_524288.f_40400)
		{
			case -915869673:
				return 1122662550;
			case -360644098:
				return 506919947;
			case -1649482077:
				return 55577806;
			case -163684180:
				return -2093919847;
			case -777132493:
				return -1567074128;
			case -698288936:
				return -1277009905;
			case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
				return 1730145250;
			case 534981680:
				return -773971986;
			case 1520184724:
				return 1914027275;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296.f_155)
		{
			case -533426613:
				return 1088509777;
			case -1437925683:
			case 1272390114:
				return -1482087471;
			case -725256130:
				return 478789200;
			case -222655798:
				return -1863716933;
			case -559809431:
				return -679566803;
			case -1918441640:
			case 1153715636:
				return 1315254565;
			case -1581094459:
				return 1468907451;
			case -457802746:
				return -274237802;
			default:
				break;
		}
		return -240997098;
	}
	else
	{
		switch (Global_2097152.f_32)
		{
			case 1579717899:
				return -938054684;
			case 218185167:
				return -1684650239;
			case -1185533313:
				return 1744089234;
			case 1744858848:
				return 1646695636;
			default:
				break;
		}
		return -1288350710;
	}
	return -274237802;
}

int func_27()
{
	if ((Global_3145858.f_2 > -1 && Global_3145858.f_2 < Global_3145858.f_52947) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52948[Global_3145858.f_2 /*18*/])))
	{
		DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, " GET_OBJECTIVE_TAG -  Get custom text index ", Global_3145858.f_1, " and text ", &(Global_3145858.f_52948[Global_3145858.f_2 /*18*/]));
		return MISC::GET_HASH_KEY(&(Global_3145858.f_52948[Global_3145858.f_2 /*18*/]));
	}
	if (bLocal_35)
	{
		switch (Global_524288.f_40400)
		{
			case -915869673:
				return 347053089;
			case -360644098:
				return 267476864;
			case -1649482077:
				return 263267728;
			case -163684180:
				return 1618086939;
			case -777132493:
				return -1263403805;
			case -698288936:
				return 1269272475;
			case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
				return 932383945;
			case 534981680:
				return -31655829;
			case 1520184724:
				return -2122032152;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296.f_155)
		{
			case -533426613:
				return 307231279;
			case -1437925683:
			case 1272390114:
				return -53621227;
			case -725256130:
				return 1597260708;
			case -222655798:
				return 1586694926;
			case -559809431:
				return -913897922;
			case -1918441640:
			case 1153715636:
				return -1544168383;
			case -1581094459:
				return 1168382952;
			case -457802746:
				return -1964987130;
			default:
				break;
		}
		return -480997254;
	}
	else
	{
		switch (Global_2097152.f_32)
		{
			case 1579717899:
				return -1177563305;
			case 1744858848:
				return 868825114;
			case 218185167:
				return 419480024;
			case -1185533313:
				return 2031571671;
			default:
				break;
		}
		return 103021030;
	}
	return -1964987130;
}

int func_28()
{
	if ((Global_3145858.f_3 > -1 && Global_3145858.f_3 < Global_3145858.f_52947) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52948[Global_3145858.f_3 /*18*/])))
	{
		DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, " GET_LOOPING_TAG -  Get custom text index ", Global_3145858.f_1, " and text ", &(Global_3145858.f_52948[Global_3145858.f_3 /*18*/]));
		return MISC::GET_HASH_KEY(&(Global_3145858.f_52948[Global_3145858.f_3 /*18*/]));
	}
	return 2;
}

char* func_29()
{
	if (bLocal_35)
	{
		return func_63(Global_524288.f_40400, &(Global_3145858.f_11), &(Global_3145858.f_108));
	}
	else if (bLocal_36)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_108)))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_3145858.f_108), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_3145858.f_108)));
		}
		return HUD::_GET_LABEL_TEXT(func_64(Global_2359296.f_155));
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_108)))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_3145858.f_108), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_3145858.f_108)));
		}
		return HUD::_GET_LABEL_TEXT(func_65(Global_2097152.f_32));
	}
	return "GAME MODE NAME HERE";
}

char* func_30()
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_100)))
	{
		return func_66(&(Global_3145858.f_100));
	}
	iVar0 = Global_3145858.f_52091;
	if (iVar0 == -1)
	{
		iVar0 = func_67(Global_3145858.f_196, 1);
	}
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "rPlayerRegion = ", func_68(iVar0, 0));
	if (iVar0 == -1)
	{
		return "";
	}
	return func_69(iVar0);
}

char* func_31()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_84)))
	{
		return func_66(&(Global_3145858.f_84));
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[introtext] no intro summary found");
	}
	return " ";
}

bool func_32(var uParam0)
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

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

int func_34(var uParam0, bool bParam1, bool bParam2)
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

void func_35(var uParam0, bool bParam1, bool bParam2)
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

void func_36()
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
	if (func_70())
	{
		func_71();
	}
	if (func_72())
	{
		func_73();
	}
}

void func_37(bool bParam0)
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

int func_38(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_DISPLAYING_UGC_SPLASH_FLOW - uiFlow isnt loaded");
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][UGCSplash] PROCESS_DISPLAYING_UGC_SPLASH_FLOW - waiting to be able to request a transition");
		func_32(uParam0);
		return 0;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] PROCESS_DISPLAYING_UGC_SPLASH_FLOW - UI_STATE_MACHINE_REQUEST_TRANSITION called : ", uParam0->f_2);
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

void func_39()
{
	Global_1072032.f_28725.f_1 = 1;
	Global_1072032.f_28725.f_65.f_32 = 1;
	Global_1072032.f_28725.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REGISTER_UGC_INTRO_THREAD");
}

bool func_40()
{
	return func_74(8);
}

bool func_41()
{
	return Global_1072032.f_28725.f_8.f_13 != 0;
}

void func_42(bool bParam0)
{
	if (!bParam0)
	{
		func_61(18);
	}
	else
	{
		func_62(18);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_43(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "largeHeader", sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "subHeader", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "body", sParam3);
}

void func_44(int iParam0)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "INTRO_FLOW_RESULTS_SET_STATE state set to ", func_75(iParam0, 0), " from ", func_75(iLocal_13, 0));
	iLocal_13 = iParam0;
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1049276 != -1)
	{
		iVar1 = (Global_1049276 / 32);
		iVar2 = (Global_1049276 % 32);
		iVar0 = 0;
		while (iVar0 <= Global_3145858.f_49029)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_49030[iVar0 /*25*/].f_1[iVar1], iVar2))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Found location slot to use ", iVar0);
				iLocal_42 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_42 < 0 || iLocal_42 >= 32)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] Did not find a valid location spawn, falling back");
			iLocal_42 = 0;
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] Did not find a valid global spawn id to check against, falling back");
		iLocal_42 = 0;
	}
	iLocal_41 = PLAYER::GET_PLAYER_TEAM(iLocal_32);
	if (Global_1049264)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "setting solo scene");
		MISC::SET_BIT(&iLocal_46, 7);
		MISC::SET_BIT(&iLocal_46, 10);
	}
	if (Global_1049265 == 0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "setting predator scene");
		MISC::SET_BIT(&iLocal_46, 8);
	}
	else if (Global_1049265 == 1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "setting predator hunters scene");
		MISC::SET_BIT(&iLocal_46, 9);
	}
	Global_1049265 = -1;
	if (iLocal_41 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48580[iVar0 /*14*/].f_8, iLocal_41))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Found team slot to use ", iVar0);
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_43 < 0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] Did not find a valid team spawn, falling back");
			iLocal_43 = 0;
		}
	}
	else if (iLocal_43 < 0)
	{
		iLocal_43 = 0;
		iVar1 = (Global_1049276 / 32);
		iVar2 = (Global_1049276 % 32);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48580[iVar0 /*14*/].f_9[iVar1], iVar2))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "Found team solo slot to use ", iVar0);
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] iTeamSlotToUse = ", iLocal_43);
	}
}

bool func_46()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_2(8192))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049198[0]))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "need clone before continuing to load");
			return false;
		}
		else if (iLocal_60 == -1)
		{
			if (MISC::IS_BIT_SET(iLocal_46, 8))
			{
				sLocal_61 = "script@mp@introflow@predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 9))
			{
				sLocal_61 = "script@mp@introflow@teamonfoot_predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049231[0]))
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] Solo - Local player mount exists - use on horse solo");
					sLocal_61 = "script@mp@introflow@soloonhorse";
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] Solo - on foot");
					sLocal_61 = "script@mp@introflow@soloonfoot";
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Global_1049231[0]))
			{
				sLocal_61 = "script@mp@introflow@teamonhorse";
			}
		}
	}
	if (iLocal_60 == -1)
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[dsw] Creating and loading Anim Scene : ", sLocal_61);
		iLocal_60 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_61, 130, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_60);
		vVar0 = { Global_3145858.f_48580[iLocal_43 /*14*/].f_1 };
		vVar3 = { Global_3145858.f_48580[iLocal_43 /*14*/].f_4 };
		STREAMING::SET_FOCUS_POS_AND_VEL(vVar0, vVar3);
		DEBUG::_0xEF256AE8A5A27966(3808, 227, 7, "[dsw]SET_FOCUS_POS_AND_VEL to ", &vVar0, " ", &vVar3);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_60, true, false))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] HAS_INTRO_ANIMSCENE_LOADED = TRUE");
		if (MISC::IS_BIT_SET(iLocal_46, 7))
		{
			if ((!bLocal_36 && !bLocal_35) && !func_2(268435456))
			{
				iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGVariation_Int", iVar6, false);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] SOLO ON HORSE, selected background variation, BGVariation_Int: ", iVar6);
			}
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] HAS_INTRO_ANIMSCENE_LOADED using Cam Index ", iVar7);
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar7, false);
		}
		else
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar9 = 0;
			while (iVar9 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049198[iVar9]))
				{
					iVar10++;
				}
				iVar9++;
			}
			if (iVar10 <= 4)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "requested alternate intro text placement");
				MISC::SET_BIT(&iLocal_46, 10);
				iVar8 = (1 + iVar11);
			}
			else if (iVar10 <= 8)
			{
				iVar8 = (11 + iVar11);
			}
			else
			{
				iVar8 = (21 + iVar11);
			}
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] HAS_INTRO_ANIMSCENE_LOADED using Cam Index ", iVar8);
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar8, false);
		}
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] HAS_INTRO_ANIMSCENE_LOADED = FALSE");
	return false;
}

void func_47()
{
}

void func_48(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049198[iVar0]))
		{
		}
		else if (!PED::_0xA0BC8FAED8CFEB3C(Global_1049198[iVar0]))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_CLONE_PEDS_LIGHTS - Ped isn't ready to render!");
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_CLONE_PEDS_LIGHTS - Setting ped lights: ", sParam0);
			PED::_0x13A210949FCBD92B(Global_1049198[iVar0], sParam0);
		}
		iVar0++;
	}
}

void func_49()
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	char cVar11[32];
	bool bVar15;

	func_76();
	if (iLocal_14 < 5)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	switch (iLocal_14)
	{
		case 0:
			if (iLocal_42 == -1 || bLocal_44)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "no location found, error!");
				func_77();
				return;
			}
			if (func_54(iLocal_42) && (MISC::IS_STRING_NULL_OR_EMPTY(func_55(iLocal_42)) || MISC::IS_STRING_NULL_OR_EMPTY(func_78(iLocal_42))))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "world cam pool selected, but not found, error!");
				if (func_79(Global_3145858.f_49030[iLocal_42 /*25*/].f_9) || !func_80(Global_3145858.f_49030[iLocal_42 /*25*/].f_9))
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "badly placed spawn point and camera, error!");
					func_77();
				}
				else
				{
					func_81(1);
				}
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "all data is ok!");
				func_81(1);
			}
			break;
		case 1:
			if (func_82())
			{
				bLocal_34 = true;
			}
			if (CAM::DOES_CAM_EXIST(iLocal_53[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_53[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_81(2);
			}
			else if (func_83())
			{
				if (func_84())
				{
					if (func_85())
					{
						if (!MISC::IS_BIT_SET(iLocal_46, 3))
						{
							CAM::SET_CAM_ACTIVE(iLocal_53[0], true);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						}
						func_81(2);
					}
				}
			}
			break;
		case 2:
			if (func_86())
			{
				func_87(8388608);
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					if (iLocal_42 != -1)
					{
						iVar8 = Global_3145858.f_49030[iLocal_42 /*25*/].f_24;
						iVar9 = Global_3145858.f_49030[iLocal_42 /*25*/].f_23;
					}
					else
					{
						iVar8 = 3750;
						iVar9 = 1;
					}
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_53[1], iLocal_53[0], iVar8, iVar9, 1);
					func_35(&uLocal_63, 0, 0);
				}
				else
				{
					func_88(0);
					if (Global_3145858.f_49030[iLocal_42 /*25*/] == 0)
					{
						CAM::_0xBC016635D6A73B31(&(Global_3145858.f_60800[Global_3145858.f_49030[iLocal_42 /*25*/].f_6 /*18*/]), &(Global_3145858.f_60800[Global_3145858.f_49030[iLocal_42 /*25*/].f_6 /*18*/].f_8), 5);
					}
					else if (Global_3145858.f_49030[iLocal_42 /*25*/] == 1)
					{
						CAM::_0x0E94C95EC3185FA9(func_89(Global_3145858.f_49030[iLocal_42 /*25*/].f_7), Global_3145858.f_49030[iLocal_42 /*25*/].f_9, Global_3145858.f_49030[iLocal_42 /*25*/].f_12);
						CAM::_0x02389579A53C3276(func_89(Global_3145858.f_49030[iLocal_42 /*25*/].f_7), func_90(Global_3145858.f_49030[iLocal_42 /*25*/].f_7), func_91(Global_3145858.f_49030[iLocal_42 /*25*/].f_7, Global_3145858.f_49030[iLocal_42 /*25*/].f_8), -1);
					}
					iLocal_62 = func_92(iLocal_42);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "iTimeForIntroShot = ", iLocal_62);
					func_35(&uLocal_63, 0, 0);
				}
				if (bLocal_34)
				{
					iVar10 = 0;
					while (iVar10 <= 31)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049198[iVar10]))
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[IntroClone] Deleting Clone for Default ", iVar10);
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049198[iVar10], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049198[iVar10], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049198[iVar10], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049198[iVar10], true, true);
							}
							PED::DELETE_PED(&(Global_1049198[iVar10]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049231[iVar10]))
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[IntroClone] Deleting Mount for Default ", iVar10);
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049231[iVar10], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049231[iVar10], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049231[iVar10], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049231[iVar10], true, true);
							}
							PED::DELETE_PED(&(Global_1049231[iVar10]));
						}
						iVar10++;
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_81(3);
				}
				else
				{
					bLocal_182 = true;
					GRAPHICS::_0x71845905BCCDE781(iLocal_37);
					GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_38);
					func_81(4);
				}
			}
			else if (!bLocal_81)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "location shot ready to go to live cam");
				func_93();
				bLocal_81 = true;
			}
			else if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_37) && AUDIO::_0xE368E8422C860BA7("flash_to_landscape", "rdro_gamemode_transition_sounds", -2))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "waiting on Post FX");
			}
			else if (!MISC::IS_BIT_SET(iLocal_46, 4))
			{
				if (!SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
				{
					if (MISC::IS_BIT_SET(iLocal_46, 3))
					{
						if (Global_3145858.f_49030[iLocal_42 /*25*/] == 0)
						{
							StringCopy(&cVar0, func_78(iLocal_42), 64);
							StringConCat(&cVar0, "_Static", 64);
							CAM::_0xBC016635D6A73B31(func_55(iLocal_42), &cVar0, 5);
						}
						else if (Global_3145858.f_49030[iLocal_42 /*25*/] == 1)
						{
							CAM::_0x0E94C95EC3185FA9(func_55(iLocal_42), Global_3145858.f_49030[iLocal_42 /*25*/].f_9, Global_3145858.f_49030[iLocal_42 /*25*/].f_12);
							CAM::_0x02389579A53C3276(func_55(iLocal_42), func_78(iLocal_42), func_94(iLocal_42), -1);
						}
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "Trying to play : ", &cVar0);
					}
					DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "going to location shot. bSkipIntroAnimScene = ", bLocal_34, ", bAreWeDoingRounds = ", bLocal_44);
					if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "triggering intro music");
						StringCopy(&cVar11, "MP_ADV_INTRO_OS", 32);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52028)))
						{
							cVar11 = { Global_3145858.f_52028 };
						}
						AUDIO::TRIGGER_MUSIC_EVENT(&cVar11);
					}
					GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_37);
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_landscape", "rdro_gamemode_transition_sounds", true, 0);
					MISC::SET_BIT(&iLocal_46, 4);
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "waiting on IS_LOADING_SCREEN_VISIBLE() = FALSE");
				}
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "uh oh");
			}
			break;
		case 3:
			func_24(65536);
			if ((CAM::DOES_CAM_EXIST(iLocal_53[0]) && CAM::IS_CAM_INTERPOLATING(iLocal_53[0])) || (CAM::DOES_CAM_EXIST(iLocal_53[1]) && CAM::IS_CAM_INTERPOLATING(iLocal_53[1])))
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat(Global_3145858.f_49030[iLocal_42 /*25*/].f_24) * 0.9f))
				{
					func_95();
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3) && func_34(&uLocal_63, 0, 0) < iLocal_62)
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat(iLocal_62) * 0.9f))
				{
					func_95();
				}
			}
			else
			{
				if (!func_2(4096))
				{
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
						if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
						{
							PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
						}
					}
					else
					{
						bVar15 = true;
					}
				}
				else
				{
					bVar15 = true;
				}
				if (bVar15)
				{
					if (!MISC::IS_BIT_SET(iLocal_46, 3))
					{
						CAM::SET_CAM_ACTIVE(iLocal_53[0], false);
						CAM::SET_CAM_ACTIVE(iLocal_53[1], false);
						CAM::SET_CAM_ACTIVE(iLocal_56[0], true);
					}
					else
					{
						if (Global_3145858.f_49030[iLocal_42 /*25*/] == 0)
						{
							StringCopy(&cVar0, func_78(iLocal_42), 64);
							StringConCat(&cVar0, "_Static", 64);
							CAM::_0xA54D643D0773EB65(func_55(iLocal_42), &cVar0, 5);
						}
						else if (Global_3145858.f_49030[iLocal_42 /*25*/] == 1)
						{
							CAM::_0x6D4D25C2137FF511(func_55(iLocal_42), func_78(iLocal_42), func_94(iLocal_42));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					}
					TASK::CLEAR_PED_TASKS(iLocal_33, true, false);
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					func_81(5);
				}
			}
			break;
		case 4:
			func_96();
			break;
		case 5:
			if (func_33(&uLocal_65))
			{
				if (func_2(128) && func_34(&uLocal_65, 0, 0) > 1500)
				{
					GRAPHICS::_0xC5CB91D65852ED7E("RespawnMissionCheckpoint");
					func_88(0);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					STREAMING::END_SRL();
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SRL completes");
					func_81(7);
				}
			}
			else
			{
				func_35(&uLocal_65, 0, 0);
			}
			break;
		case 6:
			if (bLocal_82 || func_86())
			{
				bLocal_82 = true;
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "ANIMPOSTFX_EVENT_ON_FRAME");
				if (func_2(128))
				{
					func_88(0);
					func_81(7);
				}
			}
			break;
		case 7:
			if (!func_2(16))
			{
				func_97();
			}
			break;
	}
}

void func_50(var uParam0)
{
	var uVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_15, 1))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0) && UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] UI_STATE_MACHINE_REQUEST_EXIT called");
			UISTATEMACHINE::_0x6B9FE4F0BA521A19(*uParam0, 0);
			MISC::SET_BIT(&(uParam0->f_15), 1);
		}
	}
	else if (!UISTATEMACHINE::_0x11E73195E735B25B(*uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MMacK][UGCSplash] UI_STATE_MACHINE_DESTROY_AND_CLEAR called");
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 1);
	}
}

void func_51(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "UGC_END_FLOW_SET_FLAG - ", func_98(iParam0, 0));
}

void func_52(int iParam0)
{
	Global_262151 = (Global_262151 - (Global_262151 && iParam0));
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "UGC_END_FLOW_CLEAR_FLAG - ", func_98(iParam0, 0));
}

int func_53()
{
	return -1;
}

bool func_54(int iParam0)
{
	if (Global_3145858.f_49030[iParam0 /*25*/] == 0)
	{
		return Global_3145858.f_49030[iParam0 /*25*/].f_6 > -1;
	}
	else if (Global_3145858.f_49030[iParam0 /*25*/] == 1)
	{
		return true;
	}
	return false;
}

char* func_55(int iParam0)
{
	if (Global_3145858.f_49030[iParam0 /*25*/] == 0 && Global_3145858.f_49030[iParam0 /*25*/].f_6 > -1)
	{
		return func_99(Global_3145858.f_60800[Global_3145858.f_49030[iParam0 /*25*/].f_6 /*18*/]);
	}
	else if (Global_3145858.f_49030[iParam0 /*25*/] == 1)
	{
		return func_89(Global_3145858.f_49030[iParam0 /*25*/].f_7);
	}
	return "";
}

void func_56()
{
	Global_262153 = 0;
}

void func_57()
{
	Global_1072032.f_28725.f_1 = 0;
	Global_1072032.f_28725.f_2 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__UNREGISTER_UGC_INTRO_THREAD");
}

void func_58(int iParam0)
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

void func_59(bool bParam0)
{
	Global_1940296.f_19 = !bParam0;
}

char* func_60(int iParam0, int iParam1)
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

int func_61(int iParam0)
{
	if (func_100(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_101(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (func_102(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_101(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

char* func_63(int iParam0, char* sParam1, char* sParam2)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case -1759663922:
			if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "Mission MP - "))
			{
				return HUD::_GET_TEXT_SUBSTRING(sParam1, 13, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			}
			else
			{
				return HUD::_0xD8402B858F4DDD88(sParam1, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			}
			break;
		default:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				return HUD::_0xD8402B858F4DDD88(sParam2, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2));
			}
			sVar0 = MISC::_CREATE_VAR_STRING(2, func_103(iParam0));
			if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar0, "Invalid MISSION_SUB_TYPE"))
			{
				DEBUG::_0xA308F935BDECCEC0(168, 56, "[MAC] FAILED TO FIND VALUE FOR MISSION ", func_104(iParam0, 0), " using default value");
				sVar0 = "LANDING_FREEROAM_TITLE";
			}
			return sVar0;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return "GST_DEATHMATCH";
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
		case -457802746:
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
		case 424482930:
			return "GST_DEATHMATCH_MM";
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case -222655798:
			return "GST_DEATHMATCH_GR";
		case -725256130:
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_65(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return "GST_RACE_STANDA";
		case 1579717899:
			return "GST_RACE_COMBAT";
		case -63669280:
			return "GST_RACE_DUALCO";
		case 851921060:
			return "GST_RACE_ELIM";
		case 2028478397:
			return "GST_RACE_SURVIV";
		case 1457860192:
			return "GST_RACE_TIMECP";
		case -79999383:
			return "GST_RACE_GOLDRU";
		case -1957416901:
			return "GST_RACE_RUNAWT";
		case 218185167:
			return "GST_RACE_TARRAC";
		case 1744858848:
			return "GST_RACE_OPERAC";
		case -1185533313:
			return "GST_RACE_OPTARA";
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

var func_66(var uParam0)
{
	return uParam0;
}

int func_67(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_105();
	if (func_106(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887351[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_107(vParam0, iParam3);
}

char* func_68(int iParam0, int iParam1)
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

char* func_69(int iParam0)
{
	char cVar0[128];

	if (!func_106(iParam0))
	{
		return "";
	}
	StringCopy(&cVar0, func_108(iParam0), 128);
	return MISC::_CREATE_VAR_STRING(2, &cVar0);
}

bool func_70()
{
	return Global_1896750.f_398;
}

void func_71()
{
	func_37(0);
	DEBUG::_0xF0783374333FD8CE(8, 162, "[PLAYER_MENU_FORCE_SHUTDOWN] A script has force shutdown the player menu | Printing a Callstack");
	UNK_0x355E72323AEE83CC(162, 6);
}

bool func_72()
{
	return Global_1940463.f_2;
}

void func_73()
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

bool func_74(int iParam0)
{
	return func_109(Global_1072032.f_28725.f_8.f_1, iParam0);
}

char* func_75(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "IF_STATE_INIT";
		case 1:
			return "IF_STATE_LOAD_FLOW";
		case 2:
			return "IF_STATE_RUN_MODE_SCREEN";
		case 3:
			return "IF_STATE_RUN_LOCATION_SCREEN";
		case 4:
			return "IF_STATE_RUN_ANIMATIONS";
		case 5:
			return "IF_STATE_WAIT_TO_FINISH";
		case 6:
			return "IF_STATE_CLEAN_UP";
		case 7:
			return "IF_STATE_TERMINATE";
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

void func_76()
{
	if (iLocal_14 > 0 && iLocal_15 < 3)
	{
	}
}

void func_77()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;

	if (!CAM::DOES_CAM_EXIST(iLocal_53[0]))
	{
		if (!func_79(Global_3145858.f_116) && func_80(Global_3145858.f_116))
		{
			func_110(Global_3145858.f_116, Global_3145858.f_119, Global_3145858.f_122);
		}
		else
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_33, 21030, 0f, 0.65f, 0f) };
			vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_33, 0) };
			func_110(vVar0, vVar3, 1110704128 /* Float: 45f */);
		}
	}
	if (func_111())
	{
		bVar6 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar7 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		func_112(&iLocal_33, bVar6, bVar7, 0);
		func_88(0);
		iLocal_53[0] = iLocal_53[1];
		CAM::SET_CAM_ACTIVE(iLocal_53[0], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_81(1);
	}
}

char* func_78(int iParam0)
{
	if (Global_3145858.f_49030[iParam0 /*25*/] == 0 && Global_3145858.f_49030[iParam0 /*25*/].f_6 > -1)
	{
		return func_113(Global_3145858.f_60800[Global_3145858.f_49030[iParam0 /*25*/].f_6 /*18*/].f_8);
	}
	else if (Global_3145858.f_49030[iParam0 /*25*/] == 1)
	{
		return func_90(Global_3145858.f_49030[iParam0 /*25*/].f_7);
	}
	return "";
}

bool func_79(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_80(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_114(iLocal_32) };
	DEBUG::_0xEF256AE8A5A27966(224, 227, 7, "IS_CAM_DISTANCE_SAFE = vPlayerPos ", &vVar0);
	DEBUG::_0xEF256AE8A5A27966(224, 227, 7, "IS_CAM_DISTANCE_SAFE = vCamPos ", &vParam0);
	fVar3 = BUILTIN::VDIST2(vParam0, vVar0);
	if (fVar3 <= 10000f)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "IS_CAM_DISTANCE_SAFE = TRUE");
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "IS_CAM_DISTANCE_SAFE = FALSE");
	return false;
}

void func_81(int iParam0)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "INTRO_FLOW_ANIM_SET_STATE state set to ", func_115(iParam0, 0), " from ", func_115(iLocal_14, 0));
	iLocal_14 = iParam0;
}

bool func_82()
{
	if (iLocal_43 == -1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [SHOULD_SKIP_INTRO_ANIM_SCENE] True - iTeamSlotToUse = -1");
		return true;
	}
	if (func_79(func_116()))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [SHOULD_SKIP_INTRO_ANIM_SCENE] True - GET_INTRO_POS() is zero");
		return true;
	}
	if (!func_80(func_116()))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [SHOULD_SKIP_INTRO_ANIM_SCENE] True - IS_CAM_DISTANCE_SAFE");
		return true;
	}
	return false;
}

bool func_83()
{
	if (func_79(vLocal_83[0 /*3*/]))
	{
		func_117();
	}
	else
	{
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "HAS_CLONE_POS_BEEN_CALCULATED - Returning FALSE");
	return false;
}

bool func_84()
{
	char cVar0[16];

	if (iLocal_180 < func_118())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049198[iLocal_180]))
		{
			if (iLocal_180 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_60, func_116(), func_119(), 0);
				if (MISC::IS_BIT_SET(iLocal_46, 7))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1049198[0]))
					{
						func_120(Global_1049198[0]);
					}
					else
					{
						func_121(Global_1049198[0]);
					}
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049198[iLocal_180], true, true);
			if (PED::IS_PED_MALE(Global_1049198[iLocal_180]))
			{
				StringCopy(&cVar0, "Ped_M_", 16);
			}
			else
			{
				StringCopy(&cVar0, "Ped_F_", 16);
			}
			StringIntConCat(&cVar0, iLocal_180, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049198[iLocal_180], 0);
			DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[dsw] [IntroClone] CREATE_INTRO_FLOW_CLONES - Grabbed Clone: ", iLocal_180, " Scene Entity id: ", &cVar0);
			if (PED::IS_PED_ON_MOUNT(Global_1049198[iLocal_180]))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] CREATE_INTRO_FLOW_CLONES grabbing a horse!");
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049231[iLocal_180], true, true);
				StringCopy(&cVar0, "Horse_", 16);
				StringIntConCat(&cVar0, iLocal_180, 16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049231[iLocal_180], 0);
			}
			if (!MISC::IS_BIT_SET(iLocal_46, 8))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 7))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1049198[iLocal_180]))
					{
						func_122(Global_1049198[iLocal_180], iLocal_180);
					}
					else
					{
						func_123(Global_1049198[iLocal_180], iLocal_180);
					}
				}
			}
			iLocal_180++;
			return false;
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] CREATE_INTRO_FLOW_CLONES - no clone at ", iLocal_180);
		}
	}
	else if (iLocal_180 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049198[iLocal_180]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049198[iLocal_180], true, true);
			PED::DELETE_PED(&(Global_1049198[iLocal_180]));
			iLocal_180++;
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] CREATE_INTRO_FLOW_CLONES setting invisible ", iLocal_180);
			return false;
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] CREATE_INTRO_FLOW_CLONES all done at ", iLocal_180);
	}
	return true;
}

bool func_85()
{
	char cVar0[128];
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;

	if (!func_111())
	{
		return false;
	}
	if (((!bLocal_80 && func_54(iLocal_42)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_55(iLocal_42))) && !MISC::IS_STRING_NULL_OR_EMPTY(func_78(iLocal_42)))
	{
		if (!CAM::_0xAA235E2F2C09E952(func_55(iLocal_42)))
		{
			if (!CAM::_0x595550376B7EA230(func_55(iLocal_42)))
			{
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "CREATE_INTRO_FLOW_CAMS - loading CME ", func_55(iLocal_42));
				CAM::_0x1B3C2D961F5FC0E1(func_55(iLocal_42));
				if (Global_3145858.f_49030[iLocal_42 /*25*/] == 0)
				{
					StringCopy(&cVar0, "mp@establishers@", 128);
					StringConCat(&cVar0, func_78(iLocal_42), 128);
					StringConCat(&cVar0, "_SRL", 128);
					STREAMING::PREFETCH_SRL(&cVar0);
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "CREATE_INTRO_FLOW_CAMS - SRL requested ", &cVar0);
				}
			}
			if (!func_33(&uLocal_73))
			{
				func_35(&uLocal_73, 0, 0);
			}
			else if (func_34(&uLocal_73, 0, 0) > 5000)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "CREATE_INTRO_FLOW_CAMS - CME failed to load, falling back");
				bLocal_80 = true;
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "CREATE_INTRO_FLOW_CAMS - Been waiting ", func_34(&uLocal_73, 0, 0), " for CME to load");
			}
			return false;
		}
		else
		{
			MISC::SET_BIT(&iLocal_46, 3);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "CREATE_INTRO_FLOW_CAMS - loaded CME ", func_55(iLocal_42));
		}
	}
	else if (!CAM::DOES_CAM_EXIST(iLocal_53[0]))
	{
		DEBUG::_0xEF256AE8A5A27966(3808, 227, 7, "CREATE_INTRO_FLOW_CAMS - creating cameras, vCamStartPos ", &(Global_3145858.f_49030[iLocal_42 /*25*/].f_9), ", vCamEndPos ", &(Global_3145858.f_49030[iLocal_42 /*25*/].f_15));
		if (func_79(Global_3145858.f_49030[iLocal_42 /*25*/].f_9) || func_79(Global_3145858.f_49030[iLocal_42 /*25*/].f_15))
		{
			vVar16 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
			vVar19 = { Global_3145858.f_196 };
			vVar19.f_2 = (vVar19.z + 5f);
			func_110(vVar19, vVar16, 1110704128 /* Float: 45f */);
		}
		else
		{
			iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Global_3145858.f_49030[iLocal_42 /*25*/].f_9, Global_3145858.f_49030[iLocal_42 /*25*/].f_12, Global_3145858.f_49030[iLocal_42 /*25*/].f_21, false, 2);
			iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Global_3145858.f_49030[iLocal_42 /*25*/].f_15, Global_3145858.f_49030[iLocal_42 /*25*/].f_18, Global_3145858.f_49030[iLocal_42 /*25*/].f_22, false, 2);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_46, 3))
	{
		if (!STREAMING::IS_SRL_LOADED())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "CREATE_INTRO_FLOW_CAMS - SRL Loading");
			return false;
		}
		else
		{
			STREAMING::_0xD9F2FF4AF394D926();
			STREAMING::BEGIN_SRL();
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SRL begins");
		}
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_56[0]))
	{
		bVar22 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar23 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "CREATE_INTRO_FLOW_CAMS - Call CREATE_RETURN_TO_GAMEPLAY_CAM");
		func_112(&iLocal_33, bVar22, bVar23, 0);
	}
	return true;
}

bool func_86()
{
	var uVar0;

	if (GRAPHICS::_0x9AB192A9EF980EED(iLocal_37, 2, false, &uVar0))
	{
		func_5(&Local_16, 0);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "location shot has flashed. SET_AUDIO_ONLINE_TRANSITION_STAGE = landscape_shot");
		AUDIO::_0x9B1FC259187C97C0("landscape_shot");
		return true;
	}
	return false;
}

void func_87(int iParam0)
{
	if (func_109(Global_1072032.f_21420.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "NET_HUD__CLEAR_MOD_FLAG - ", func_124(iParam0, 0));
		UNK_0x355E72323AEE83CC(162, 9);
		func_125(&(Global_1072032.f_21420.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_RENDERPHASE_PAUSE_STATE ON");
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_RENDERPHASE_PAUSE_STATE OFF");
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
	}
}

char* func_89(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	if (iParam0 == 0)
	{
		StringCopy(&cVar0, "mp@freemode_cams@cloudupdate_intro_cams", 64);
	}
	if (iParam0 == 1)
	{
		StringCopy(&cVar0, "mp@freemode_cams@cloudupdate_outro_cams", 64);
	}
	if (iParam0 == 2)
	{
		StringCopy(&cVar0, "mp@freemode_cams@cloudupdate_establisher_cams", 64);
	}
	return func_99(cVar0);
}

char* func_90(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	if (iParam0 == 0)
	{
		StringCopy(&cVar0, "IntroShot", 64);
	}
	if (iParam0 == 1)
	{
		StringCopy(&cVar0, "OutroShot", 64);
	}
	if (iParam0 == 2)
	{
		StringCopy(&cVar0, "EstablisherShot", 64);
	}
	return func_99(cVar0);
}

char* func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "35mm_NEAR_R_Cam";
				case 1:
					return "35mm_NEAR_L_Cam";
				case 2:
					return "35mm_FAR_R_Cam";
				case 3:
					return "35mm_FAR_L_Cam";
				case 4:
					return "50mm_NEAR_R_Cam";
				case 5:
					return "50mm_NEAR_L_Cam";
				case 6:
					return "50mm_FAR_R_Cam";
				case 7:
					return "50mm_FAR_L_Cam";
				case 8:
					return "50mm_REVERSE_R_Cam";
				case 9:
					return "50mm_REVERSE_L_Cam";
				case 10:
					return "35mm_REVERSE_R_Cam";
				case 11:
					return "35mm_REVERSE_L_Cam";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "50mm_PanDown_R_Cam";
				case 1:
					return "50mm_PanDown_L_Cam";
				case 2:
					return "35mm_PanDown_R_Cam";
				case 3:
					return "35mm_PanDown_L_Cam";
				case 4:
					return "50mm_TrackForward_R_Cam";
				case 5:
					return "50mm_TrackForward_L_Cam";
				case 6:
					return "35mm_TrackForward_R_Cam";
				case 7:
					return "35mm_TrackForward_L_Cam";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "Cam_Near35mm";
				case 1:
					return "Cam_Near50mm";
				case 2:
					return "Cam_Med35mm";
				case 3:
					return "Cam_Med50mm";
				case 4:
					return "Cam_Far35mm";
				case 5:
					return "Cam_Far50mm";
				case 6:
					return "Cam_Near25mm";
				case 7:
					return "Cam_Med25mm";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_92(int iParam0)
{
	if (Global_3145858.f_49030[iParam0 /*25*/] == 0 && Global_3145858.f_49030[iParam0 /*25*/].f_6 > -1)
	{
		return CAM::_0x465F04F68AD38197(&(Global_3145858.f_60800[Global_3145858.f_49030[iParam0 /*25*/].f_6 /*18*/]), &(Global_3145858.f_60800[Global_3145858.f_49030[iParam0 /*25*/].f_6 /*18*/].f_8), 5);
	}
	else if (Global_3145858.f_49030[iParam0 /*25*/] == 1)
	{
		return CAM::_0x465F04F68AD38197(func_89(Global_3145858.f_49030[iParam0 /*25*/].f_7), func_90(Global_3145858.f_49030[iParam0 /*25*/].f_7), 5);
	}
	return 0;
}

void func_93()
{
	func_88(0);
	SCRIPTS::_0x778D4733E0F2F265(0);
}

char* func_94(int iParam0)
{
	if (Global_3145858.f_49030[iParam0 /*25*/] == 1)
	{
		return func_91(Global_3145858.f_49030[iParam0 /*25*/].f_7, Global_3145858.f_49030[iParam0 /*25*/].f_8);
	}
	return "";
}

void func_95()
{
	if (!bLocal_181)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(iLocal_33, "SpawnMissionIntro", true, 20);
		PED::_0x2208438012482A1A(iLocal_33, true, true);
		bLocal_181 = true;
	}
}

void func_96()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_15)
	{
		case 0:
			if ((CAM::DOES_CAM_EXIST(iLocal_53[0]) && CAM::IS_CAM_INTERPOLATING(iLocal_53[0])) || (CAM::DOES_CAM_EXIST(iLocal_53[1]) && CAM::IS_CAM_INTERPOLATING(iLocal_53[1])))
			{
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[CME] Using CME");
				if (func_33(&uLocal_63))
				{
					if (func_34(&uLocal_63, 0, 0) > iLocal_62)
					{
						func_35(&uLocal_67, 0, 0);
						func_126();
						func_127(1);
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[CME] timer ongoing for CME");
					}
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[CME] timer restart for CME");
					func_35(&uLocal_63, 0, 0);
				}
			}
			else
			{
				func_35(&uLocal_67, 0, 0);
				func_126();
				func_127(1);
			}
			break;
		case 1:
			if (!bLocal_183)
			{
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049198[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Global_1049198[iVar0], true);
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049231[iVar0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Global_1049231[iVar0], true);
						}
					}
					iVar0++;
				}
				bLocal_183 = true;
			}
			if ((CAM::DOES_CAM_EXIST(iLocal_53[0]) && CAM::IS_CAM_ACTIVE(iLocal_53[0])) || (CAM::DOES_CAM_EXIST(iLocal_53[1]) && CAM::IS_CAM_ACTIVE(iLocal_53[1])))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					CAM::SET_CAM_ACTIVE(iLocal_53[0], false);
					CAM::SET_CAM_ACTIVE(iLocal_53[1], false);
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_60, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_60) < 0.825f)
			{
			}
			else
			{
				GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_38);
				bVar1 = func_128(iLocal_32, 1, -1, 1);
				if (MISC::IS_BIT_SET(iLocal_46, 10))
				{
					Local_16.f_2 = 1441775019;
				}
				else
				{
					Local_16.f_2 = -1678669845;
				}
				MISC::CLEAR_BIT(&(Local_16.f_15), 0);
				if (iLocal_41 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145728[iLocal_41 /*8*/])))
				{
					func_129(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), &(Global_3145728[iLocal_41 /*8*/]), " ", " ", " ", " ", bVar1);
				}
				else
				{
					func_129(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), " ", " ", " ", " ", " ", bVar1);
				}
				func_38(&Local_16);
				func_35(&uLocal_67, 0, 0);
				func_35(&uLocal_69, 0, 0);
				func_127(2);
			}
			break;
		case 2:
			func_24(65536);
			if (!func_2(16384))
			{
				iVar2 = func_34(&uLocal_69, 0, 0);
				if (iVar2 < 15000)
				{
					if (iVar2 > 6500)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(650);
							func_130(0);
						}
					}
					func_35(&uLocal_67, 0, 0);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "stSyncFailsafe has not yet breached ", func_34(&uLocal_69, 0, 0));
					return;
				}
			}
			iVar3 = func_34(&uLocal_67, 0, 0);
			if (iVar3 > 6500)
			{
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(650);
				}
			}
			if (iVar3 > 7500)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iLocal_60, false);
				iVar4 = 0;
				while (iVar4 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049198[iVar4]))
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[IntroClone] Deleting Clone ", iVar4);
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049198[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049198[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049198[iVar4], true, true);
						}
						PED::DELETE_PED(&(Global_1049198[iVar4]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049231[iVar4]))
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[IntroClone] Deleting Mount Clone ", iVar4);
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049231[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049231[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049231[iVar4], true, true);
						}
						PED::DELETE_PED(&(Global_1049231[iVar4]));
					}
					iVar4++;
				}
				ANIMSCENE::RESET_ANIM_SCENE(iLocal_60, 0);
				if (!func_2(4096))
				{
					NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
				}
				if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
				}
				func_131();
				func_5(&Local_16, 0);
				if (bLocal_36 || bLocal_35)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				}
				func_127(3);
			}
			else if (iVar3 > 5000)
			{
				func_95();
			}
			break;
		case 3:
			GRAPHICS::_0xEDA5CBECF56E1386(iLocal_38);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(350);
			}
			func_88(0);
			GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
			func_24(131072);
			if (AUDIO::_0xE368E8422C860BA7("exit_photo_to_match", "rdro_gamemode_transition_sounds", -2))
			{
				AUDIO::PLAY_SOUND_FRONTEND("exit_photo_to_match", "rdro_gamemode_transition_sounds", true, 0);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_AUDIO_ONLINE_TRANSITION_STAGE = gameplay");
				AUDIO::_0x9B1FC259187C97C0("gameplay");
			}
			func_127(4);
			break;
		case 4:
			func_81(5);
			break;
	}
}

void func_97()
{
	if (!iLocal_75[3])
	{
		if (!func_33(&uLocal_71))
		{
			iLocal_75[3] = 1;
			func_35(&uLocal_71, 0, 0);
		}
		else if (func_34(&uLocal_71, 0, 0) > 2900)
		{
			iLocal_75[3] = 1;
		}
		else if (!iLocal_75[2] == 1 && func_34(&uLocal_71, 0, 0) > 1800)
		{
			iLocal_75[2] = 1;
		}
		else if (!iLocal_75[1] == 1 && func_34(&uLocal_71, 0, 0) > 900)
		{
			iLocal_75[1] = 1;
		}
	}
	else
	{
		func_24(16);
	}
}

char* func_98(int iParam0, int iParam1)
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

char* func_99(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_100(var uParam0, int iParam1, int iParam2)
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

char* func_101(int iParam0)
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

bool func_102(var uParam0, int iParam1, int iParam2)
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

char* func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 31269700:
			return "UGC_MST_LETTR";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
			return "UGC_MST_PDH";
		case 604251967:
			return "UGC_MST_FOU";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 56, "[MAC] FAILED TO FIND VALUE FOR MISSION ", func_104(iParam0, 0));
	return "Invalid MISSION_SUB_TYPE";
}

char* func_104(int iParam0, int iParam1)
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

int func_105()
{
	return Global_1893599.f_2;
}

bool func_106(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_107(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_132(vParam0);
	iVar1 = -1;
	if (Global_1893582[iVar0] > 0)
	{
		iVar2 = (Global_1893582[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892765[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1887351[iVar4 /*36*/].f_4))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887351[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887351[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(696, 11, "FIND_REGION_WITHIN_REGION_SECTORS checking pos: ", &vParam0, " found... ", &(Global_1887351[iVar1 /*36*/].f_23));
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(56, 11, "FIND_REGION_WITHIN_REGION_SECTORS found NO REGION for pos ", &vParam0);
	}
	return iVar1;
}

char* func_108(int iParam0)
{
	if (!func_106(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "REG_IF_BAY_CDW";
		case 1:
			return "REG_IF_SCM_MCE";
		case 2:
			return "REG_IF_SCM_MKW";
		case 3:
			return "REG_IF_BAY_LAG";
		case 4:
			return "REG_IF_BAY_LAK";
		case 5:
			return "REG_IF_BAY_STD";
		case 6:
			return "REG_IF_BAY_ORP";
		case 7:
			return "REG_IF_BAY_SKS";
		case 8:
			return "REG_IF_BAY_SDP";
		case 9:
			return "REG_IF_BAY_SDB";
		case 10:
			return "REG_IF_BAY_SWS";
		case 11:
			return "REG_IF_BGV_AST";
		case 12:
			return "REG_IF_BGV_BRD";
		case 13:
			return "REG_IF_BGV_BBF";
		case 14:
			return "REG_IF_BGV_DAK";
		case 15:
			return "REG_IF_BGV_FRT";
		case 16:
			return "REG_IF_BGV_HND";
		case 17:
			return "REG_IF_BGV_LMS";
		case 18:
			return "REG_IF_BGV_MHS";
		case 19:
			return "REG_IF_BGV_MNR";
		case 20:
			return "REG_IF_BGV_OWD";
		case 21:
			return "REG_IF_BGV_PNS";
		case 22:
			return "REG_IF_BGV_PRN";
		case 23:
			return "REG_IF_BGV_RIS";
		case 24:
			return "REG_IF_BGV_SHK";
		case 25:
			return "REG_IF_BGV_SHR";
		case 26:
			return "REG_IF_BGV_STB";
		case 27:
			return "REG_IF_BGV_VV";
		case 28:
			return "REG_IF_GRZ_WS";
		case 30:
			return "REG_IF_BGV_WSC";
		case 29:
			return "REG_IF_BGV_BOJ";
		case 31:
			return "REG_IF_BLU_CBM";
		case 32:
			return "REG_IF_BLU_CPH";
		case 33:
			return "REG_IF_BLU_SIS";
		case 35:
			return "REG_IF_CML_BHB";
		case 36:
			return "REG_IF_CML_DL";
		case 37:
			return "REG_IF_CML_OFW";
		case 38:
			return "REG_IF_CML_SPC";
		case 39:
			return "REG_IF_GRT_BEC";
		case 40:
			return "REG_IF_GRT_BW";
		case 41:
			return "REG_IF_GRT_QC";
		case 42:
			return "REG_IF_GRZ_ADR";
		case 43:
			return "REG_IF_HRT_DRS";
		case 53:
			return "REG_IF_GRZ_CMR";
		case 54:
			return "REG_IF_CML_CM";
		case 44:
			return "REG_IF_GRZ_CHZ";
		case 55:
			return "REG_IF_GRZ_COH";
		case 45:
			return "REG_IF_GRZ_CLT";
		case 46:
			return "REG_IF_GRZ_FRZ";
		case 47:
			return "REG_IF_GRZ_MSC";
		case 48:
			return "REG_IF_GRZ_MM";
		case 50:
			return "REG_IF_BGV_SCS";
		case 51:
			return "REG_IF_GRZ_LC";
		case 58:
			return "REG_IF_GRZ_TL";
		case 59:
			return "REG_IF_CML_VET";
		case 60:
			return "REG_IF_GRZ_WAP";
		case 52:
			return "REG_IF_BGV_WMT";
		case 62:
			return "REG_IF_GUA_AGU";
		case 63:
			return "REG_IF_GUA_CMP";
		case 64:
			return "REG_IF_GUA_CNT";
		case 65:
			return "REG_IF_GUA_LAC";
		case 66:
			return "REG_IF_GUA_MAN";
		case 67:
			return "REG_IF_HRT_ABM";
		case 69:
			return "REG_IF_HRT_CMD";
		case 70:
			return "REG_IF_HRT_CKS";
		case 71:
			return "REG_IF_HRT_CRF";
		case 72:
			return "REG_IF_HRT_CBF";
		case 73:
			return "REG_IF_HRT_DNR";
		case 74:
			return "REG_IF_HRT_EMR";
		case 75:
			return "REG_IF_HRT_PIG";
		case 76:
			return "REG_IF_HRT_HSO";
		case 77:
			return "REG_IF_HRT_LRN";
		case 78:
			return "REG_IF_GRZ_LC";
		case 79:
			return "REG_IF_HRT_LCK";
		case 80:
			return "REG_IF_HRT_SSS";
		case 81:
			return "REG_IF_HRT_VAL";
		case 82:
			return "REG_IF_HRT_APF";
		case 83:
			return "REG_IF_ROA_ANN";
		case 84:
			return "REG_IF_ROA_BEV";
		case 68:
			return "REG_IF_ROA_SBC";
		case 85:
			return "REG_IF_ROA_BBR";
		case 86:
			return "REG_IF_ROA_BWD";
		case 87:
			return "REG_IF_ROA_BTC";
		case 88:
			return "REG_IF_CML_DVH";
		case 89:
			return "REG_IF_ROA_HFS";
		case 90:
			return "REG_IF_ROA_ISS";
		case 91:
			return "REG_IF_ROA_MCH";
		case 92:
			return "REG_IF_ROA_MSF";
		case 93:
			return "REG_IF_ROA_ROV";
		case 94:
			return "REG_IF_CML_RS";
		case 95:
			return "REG_IF_ROA_TRP";
		case 97:
			return "REG_IF_ROA_VHM";
		case 98:
			return "REG_IF_ROA_VHP";
		case 96:
			return "REG_IF_ROA_ROJ";
		case 99:
			return "REG_IF_SCM_BWM";
		case 100:
			return "REG_IF_SCM_BLG";
		case 101:
			return "REG_IF_SCM_CGH";
		case 102:
			return "REG_IF_SCM_CFJ";
		case 103:
			return "REG_IF_SCM_CMC";
		case 104:
			return "REG_IF_SCM_CMP";
		case 105:
			return "REG_IF_SCM_CSS";
		case 106:
			return "REG_IF_SCM_DRF";
		case 107:
			return "REG_IF_INV";
		case 108:
			return "REG_IF_SCM_LS";
		case 109:
			return "REG_IF_SCM_LTS";
		case 110:
			return "REG_IF_SCM_RP";
		case 111:
			return "REG_IF_SCM_RHO";
		case 112:
			return "REG_IF_SCM_SPS";
		case 113:
			return "REG_IF_TAL_AUR";
		case 114:
			return "REG_IF_CML_DS";
		case 115:
			return "REG_IF_TAL_COC";
		case 116:
			return "REG_IF_TAL_MAN";
		case 117:
			return "REG_IF_TAL_PUR";
		case 118:
			return "REG_IF_TAL_TNR";
		case 119:
			return "REG_IF_TAL_TRP";
		case 121:
			return "REG_IF_GAP_TUM";
		case 120:
			return "REG_IF_GAP_GBR";
		case 122:
			return "REG_IF_GAP_RFK";
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return "REG_IF_INV";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 87, "GET_REGION_LOCALISED_NAME - Missing region label: ", func_68(iParam0, 0));
	return "REG_IF_INV";
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_110(vector3 vParam0, vector3 vParam3, float fParam6)
{
	iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vParam3, fParam6, false, 2);
	iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vParam3, fParam6, false, 2);
}

bool func_111()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	var uVar8;
	var uVar11;
	var uVar14;
	int iVar15;

	if (!bLocal_58)
	{
		if (iLocal_59 == 0)
		{
			iVar0 = 339;
			vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_33, true, false), 0f, 1.3f, 1f, 0.1f) };
			vVar4 = { CAM::GET_GAMEPLAY_CAM_COORD() };
			DEBUG::_0xEF256AE8A5A27966(3808, 227, 7, "HAS_INTRO_CAM_SHAPE_TEST_RETURNED_OK - Creating shape test from ", &vVar1, " to gameplaycam ", &vVar4);
			iLocal_59 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar4, 0.25f, iVar0, iLocal_33, 4);
		}
		else
		{
			iVar15 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_59, &iVar7, &uVar8, &uVar11, &uVar14);
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "HAS_INTRO_CAM_SHAPE_TEST_RETURNED_OK - Shape test result = ", func_133(iVar15, 0), ", iHitCount = ", iVar7);
			if (iVar15 == 2)
			{
				if (iVar7 == 0)
				{
				}
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "HAS_INTRO_CAM_SHAPE_TEST_RETURNED_OK - Setting bHasShapeTestCompleted TRUE");
				bLocal_58 = true;
			}
			else if (iVar15 == 0)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "HAS_INTRO_CAM_SHAPE_TEST_RETURNED_OK - Setting bHasShapeTestCompleted TRUE, non-existent shapetest??");
				bLocal_58 = true;
			}
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "HAS_INTRO_CAM_SHAPE_TEST_RETURNED_OK - Returning FALSE");
		return false;
	}
	return true;
}

void func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	iLocal_56[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, 65f, false, 2);
	if (bParam1)
	{
	}
	if (bParam2 || !bParam3)
	{
		return;
	}
}

char* func_113(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Vector3 func_114(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

char* func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "IF_ANIM_STATE_INIT";
		case 1:
			return "IF_ANIM_STATE_CREATE_TEAM_CAMS";
		case 2:
			return "IF_ANIM_STATE_LOCATION_INTRO_SHOT";
		case 3:
			return "IF_ANIM_STATE_SKIP_TEAM_SHOT";
		case 4:
			return "IF_ANIM_STATE_TEAM_SHOT";
		case 5:
			return "IF_ANIM_STATE_CAM_CUT";
		case 6:
			return "IF_ANIM_STATE_PHOTO_FX";
		case 7:
			return "IF_ANIM_STATE_TERMINATE";
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

Vector3 func_116()
{
	return Global_3145858.f_48580[iLocal_43 /*14*/].f_1;
}

void func_117()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar1 = ENTITY::DOES_ENTITY_EXIST(Global_1049231[0]);
		vLocal_83[iVar0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_3145858.f_48580[iLocal_43 /*14*/].f_1, Global_3145858.f_48580[iLocal_43 /*14*/].f_4.f_2, func_134(Global_3145858.f_48580[iLocal_43 /*14*/].f_7, iVar0, bVar1)) };
		DEBUG::_0xEF256AE8A5A27966(3616, 227, 7, "GET_CLONE_POS_FROM_CAM_WITH_OFFSET - vClonePos[", iVar0, "] is ", &(vLocal_83[iVar0 /*3*/]));
		iVar0++;
	}
}

int func_118()
{
	if (!MISC::IS_BIT_SET(iLocal_46, 7))
	{
		if (bLocal_36 || bLocal_35)
		{
			return 16;
		}
		else
		{
			return 4;
		}
	}
	else if (bLocal_36 || bLocal_35)
	{
		return 1;
	}
	else
	{
		return 4;
	}
	return 0;
}

Vector3 func_119()
{
	return Global_3145858.f_48580[iLocal_43 /*14*/].f_4;
}

void func_120(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar3 = 0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] Prim held weapon: ", func_135(bVar0, 0), " Sec held weapon: ", func_135(bVar1, 0));
	if (bVar0 != joaat("WEAPON_UNARMED"))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] Removing primary weapon");
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		bVar0 = joaat("WEAPON_UNARMED");
	}
	if (bVar1 != joaat("WEAPON_UNARMED"))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] Removing secondary weapon");
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar1, true, -142743235);
		bVar1 = joaat("WEAPON_UNARMED");
	}
	bVar4 = (func_136(bVar0) && func_136(bVar1));
	bVar2 = func_137(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("WEAPON_UNARMED"))
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((bVar2 == joaat("GROUP_REPEATER") || bVar2 == joaat("GROUP_RIFLE")) || bVar2 == joaat("GROUP_SNIPER")) || (bVar2 == joaat("GROUP_SHOTGUN") && bVar0 != joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar3 = 3;
	}
	else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_MOLOTOV"))
	{
		iVar3 = 7;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_BOLAS"))
	{
		iVar3 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(bVar0) || WEAPON::_IS_WEAPON_MELEE(bVar0))
	{
		iVar3 = 5;
	}
	else if (func_138(bVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0) || (bVar2 == joaat("GROUP_SHOTGUN") && bVar0 == joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar3 = 1;
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] using default (Unarmed)");
		iVar3 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "BGPed_Enable", true, false);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "Weapon_Int", iVar3, false);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGPed_Variation_Int", iVar5, false);
	DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] held weapon type: ", func_135(bVar2, 0), " Setting anim scene int Weapon_Int: ", iVar3);
}

void func_121(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_FOOT_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] Prim held weapon: ", func_135(bVar0, 0), " Sec held weapon: ", func_135(bVar1, 0));
	bVar4 = (func_136(bVar0) && func_136(bVar1));
	iVar2 = func_137(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("WEAPON_UNARMED"))
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((iVar2 == joaat("GROUP_REPEATER") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SNIPER")) || (iVar2 == joaat("GROUP_SHOTGUN") && bVar0 != joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar3 = 3;
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if ((iVar5 % 2) == 0)
		{
			if (bVar0 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				iVar3 = 12;
			}
			else if (bVar0 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				iVar3 = 11;
			}
			else if (iVar2 == joaat("GROUP_SHOTGUN"))
			{
				if (bVar0 == joaat("WEAPON_SHOTGUN_PUMP"))
				{
					iVar3 = 9;
				}
				else if ((bVar0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL") || bVar0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || bVar0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_UNCLE"))
				{
					iVar3 = 10;
				}
			}
		}
	}
	else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_MOLOTOV"))
	{
		iVar3 = 7;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_BOLAS"))
	{
		iVar3 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(bVar0) || WEAPON::_IS_WEAPON_MELEE(bVar0))
	{
		iVar3 = 5;
	}
	else if (func_138(bVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0) || (iVar2 == joaat("GROUP_SHOTGUN") && bVar0 == joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar3 = 1;
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_FOOT_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] using default (Unarmed)");
		iVar3 = 0;
	}
	if (PED::IS_PED_MALE(iParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isMale", true, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isFemale", true, false);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] [SETUP_SOLO_ON_FOOT_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] iAnimSceneValue = ", iVar3);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "weapon_Index", iVar3, false);
}

void func_122(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[dsw] [IntroClone] [SETUP_TEAM_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] Prim held weapon: ", func_135(bVar0, 0), " Sec held weapon: ", func_135(bVar1, 0));
	bVar6 = (func_136(bVar0) && func_136(bVar1));
	bVar2 = func_137(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("WEAPON_UNARMED"))
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((bVar2 == joaat("GROUP_REPEATER") || bVar2 == joaat("GROUP_RIFLE")) || bVar2 == joaat("GROUP_SNIPER")) || (bVar2 == joaat("GROUP_SHOTGUN") && bVar0 != joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar5 = 3;
	}
	else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_MOLOTOV"))
	{
		iVar5 = 7;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_BOLAS"))
	{
		iVar5 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(bVar0) || WEAPON::_IS_WEAPON_MELEE(bVar0))
	{
		iVar5 = 5;
	}
	else if (func_138(bVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0) || (bVar2 == joaat("GROUP_SHOTGUN") && bVar0 == joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar5 = 1;
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] [SETUP_TEAM_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] using default (Unarmed)");
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
	DEBUG::_0xEF256AE8A5A27966(10912, 227, 7, "[dsw] [IntroClone] [SETUP_TEAM_ON_HORSE_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] held weapon type: ", func_135(bVar2, 0), " Anim scene int: ", &cVar3, " Setting int value: ", iVar5);
}

void func_123(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;
	int iVar7;
	char cVar8[16];
	int iVar10;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[dsw] [IntroClone] [SETUP_TEAM_ON_FOOT_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] Prim held weapon: ", func_135(bVar0, 0), " Sec held weapon: ", func_135(bVar1, 0));
	bVar6 = (func_136(bVar0) && func_136(bVar1));
	bVar2 = func_137(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("WEAPON_UNARMED"))
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((bVar2 == joaat("GROUP_REPEATER") || bVar2 == joaat("GROUP_RIFLE")) || bVar2 == joaat("GROUP_SNIPER")) || (bVar2 == joaat("GROUP_SHOTGUN") && bVar0 != joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar5 = 3;
		if (iParam1 <= 4)
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if ((iVar7 % 2) == 0)
			{
				if (bVar0 == joaat("WEAPON_RIFLE_BOLTACTION"))
				{
					iVar5 = 12;
				}
				else if (bVar0 == joaat("WEAPON_REPEATER_WINCHESTER"))
				{
					iVar5 = 11;
				}
				else if (bVar2 == joaat("GROUP_SHOTGUN"))
				{
					if (bVar0 == joaat("WEAPON_SHOTGUN_PUMP"))
					{
						iVar5 = 9;
					}
					else if ((bVar0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL") || bVar0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || bVar0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_UNCLE"))
					{
						iVar5 = 10;
					}
				}
			}
			StringCopy(&cVar8, "Var_Ped_", 16);
			StringIntConCat(&cVar8, iParam1, 16);
			iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[dsw] [IntroClone] [SETUP_TEAM_ON_FOOT_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] Setting ", &cVar8, " with random value ", iVar10);
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar8, iVar10, false);
		}
	}
	else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_MOLOTOV"))
	{
		iVar5 = 7;
	}
	else if (bVar0 == joaat("WEAPON_THROWN_BOLAS"))
	{
		iVar5 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(bVar0) || WEAPON::_IS_WEAPON_MELEE(bVar0))
	{
		iVar5 = 5;
	}
	else if (func_138(bVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0) || (bVar2 == joaat("GROUP_SHOTGUN") && bVar0 == joaat("WEAPON_SHOTGUN_SAWEDOFF")))
	{
		iVar5 = 1;
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] [SETUP_TEAM_ON_FOOT_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] using default (Unarmed)");
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
	DEBUG::_0xEF256AE8A5A27966(10912, 227, 7, "[dsw] [IntroClone] [SETUP_TEAM_ON_FOOT_ANIM_SCENE_VARIATION_FOR_INTRO_FLOW_CLONE] held weapon type: ", func_135(bVar2, 0), " Anim scene int: ", &cVar3, " Setting int value: ", iVar5);
}

char* func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "EMP_HUD_MODIFIER_FLAG_DEFAULT";
		case 1:
			return "EMP_HUD_MODIFIER_FLAG_POP_ADDITIONAL_BLIP_MODIFIER";
		case 2:
			return "EMP_HUD_MODIFIER_FLAG_FORCE_BLIP_HIGH_PRIORITY";
		case 4:
			return "EMP_HUD_MODIFIER_FLAG_DONT_SHOW_POSSE_LEADER_ICONS";
		case 8:
			return "EMP_HUD_MODIFIER_FLAG_DONT_SHOW_DEADEYE_ICONS";
		case 16:
			return "EMP_HUD_MODIFIER_FLAG_BLIP_SPOTTED_FROM_BINOCULARS";
		case 32:
			return "EMP_HUD_MODIFIER_FLAG_ALLOW_POSSE_FRIENDLY_FIRE";
		case 64:
			return "EMP_HUD_MODIFIER_FLAG_HIDE_MY_BLIP";
		case 128:
			return "EMP_HUD_MODIFIER_FLAG_IS_CARRYING_BAG";
		case 256:
			return "EMP_HUD_MODIFIER_FLAG_IN_RACE";
		case 512:
			return "EMP_HUD_MODIFIER_FLAG_IS_COACH_DRIVER";
		case 1024:
			return "EMP_HUD_MODIFIER_FLAG_IS_WINNING";
		case 2048:
			return "EMP_HUD_MODIFIER_FLAG_BLIP_PLAYER_DEATH_LOCATIONS";
		case 4096:
			return "EMP_HUD_MODIFIER_FLAG_BLIP_ON_COMPASS";
		case 8192:
			return "EMP_HUD_MODIFIER_FLAG_BLIPS_IGNORE_TUTORIAL_SESSIONS";
		case 16384:
			return "EMP_HUD_MODIFIER_FLAG_HIDE_MY_GAMERTAG";
		case 32768:
			return "EMP_HUD_MODIFIER_FLAG_HIDE_ALL_GAMERTAGS";
		case 65536:
			return "EMP_HUD_MODIFIER_FLAG_ONLY_SHOW_GAMERTAGS_IF_TALKING";
		case 131072:
			return "EMP_HUD_MODIFIER_FLAG_IGNORE_GAMERTAG_FORCE_HIDE_IF_TARGETING";
		case 262144:
			return "EMP_HUD_MODIFIER_FLAG_VOICE_CAN_HEAR_EVERYONE";
		case 524288:
			return "EMP_HUD_MODIFIER_FLAG_VOICE_CAN_HEAR_DISTANT_PLAYERS";
		case 1048576:
			return "EMP_HUD_MODIFIER_FLAG_VOICE_CAN_HEAR_OTHER_TEAM";
		case 2097152:
			return "EMP_HUD_MODIFIER_FLAG_VOICE_CANT_SPECTATE_CHAT_OTHER_TEAM";
		case 4194304:
			return "EMP_HUD_MODIFIER_FLAG_VOICE_CAN_ONLY_CHAT_WITH_SPECTATE_PLAYERS";
		case 8388608:
			return "EMP_HUD_MODIFIER_FLAG_VOICE_FORCE_POSSE_MEMBER_CHAT";
		case 16777216:
			return "EMP_HUD_MODIFIER_FLAG_VOICE_NO_DEATH_CHAT";
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

void func_125(var uParam0, int iParam1)
{
	func_139(uParam0, iParam1);
}

void func_126()
{
	if (iLocal_60 != -1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[dsw] [IntroClone] Starting anim scene...");
		ANIMSCENE::START_ANIM_SCENE(iLocal_60);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SET_AUDIO_ONLINE_TRANSITION_STAGE = player_team_intro");
		AUDIO::_0x9B1FC259187C97C0("player_team_intro");
	}
}

void func_127(int iParam0)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "INTRO_FLOW_READY_SET_STATE state set to ", func_140(iParam0, 0), " from ", func_140(iLocal_15, 0));
	iLocal_15 = iParam0;
}

int func_128(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_142(func_141(0)) && func_143(func_141(0)) == 7)
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
			iVar6 = func_144(iParam0);
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
			return func_145(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_109(Global_1072032.f_21420.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_146(iParam0, 1);
	if (!bVar0)
	{
		if (func_147(iParam0, bParam1))
		{
			return func_145(iParam0);
		}
		else if (func_148(iParam0, bParam1))
		{
			if (func_149(iParam0, bParam1))
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
		return func_144(iParam0);
	}
	else if (func_147(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_151(func_150(func_141(0)), 1) == 395262693)
		{
			return func_145(iParam0);
		}
		else
		{
			return func_145(iParam0);
		}
	}
	else if (func_148(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

void func_129(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, bool bParam7)
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

void func_130(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1940296.f_105.f_1) && Global_1940296.f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940296.f_105.f_1 = iVar0;
	Global_1940296.f_105 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(680, 162, "HUD_SHOW_BUSYSPINNER - busy spinner being activated by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()), " with message ", func_152(Global_1940296.f_105, 0));
	UNK_0x355E72323AEE83CC(162, 7);
}

void func_131()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_HIDE_BUSYSPINNER - hiding busy spinner");
	Global_1940296.f_105 = -1;
	Global_1940296.f_105.f_1 = 0;
	UNK_0x355E72323AEE83CC(-1, 6);
}

int func_132(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_153(vParam0, 0f, 0f, 0, 2);
	return func_153(vParam0, Global_1892752[iVar0 /*3*/].f_1, Global_1892752[iVar0 /*3*/].f_2, Global_1892752[iVar0 /*3*/], 4);
}

char* func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SHAPETEST_STATUS_NONEXISTENT";
		case 1:
			return "SHAPETEST_STATUS_RESULTS_NOTREADY";
		case 2:
			return "SHAPETEST_STATUS_RESULTS_READY";
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

Vector3 func_134(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return -0.6f, 20.4f, 0f;
					case 1:
						return 0.75f, 20.76f, 0f;
					case 2:
						return -3f, 20.6f, 0f;
					case 3:
						return 4.1f, 21.1f, 0f;
					case 4:
						return -6.1f, 21.2f, 0f;
					case 5:
						return 5.6f, 20.5f, 0f;
					case 6:
						return -7.1f, 21.2f, 0f;
					case 7:
						return 7.7f, 20.5f, 0f;
					case 8:
						return 0.3f, 23.9f, 0f;
					case 9:
						return -0.75f, 23.76f, 0f;
					case 10:
						return 3f, 23.2f, 0f;
					case 11:
						return -4.1f, 24.1f, 0f;
					case 12:
						return 6.1f, 24.25f, 0f;
					case 13:
						return -5.6f, 22.75f, 0f;
					case 14:
						return 7.1f, 24.1f, 0f;
					case 15:
						return -7.7f, 22.85f, 0f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 0.3f, 17.4f, 0f;
					case 1:
						return -0.55f, 17.76f, 0f;
					case 2:
						return 1.2f, 17.6f, 0f;
					case 3:
						return -1.3f, 18.1f, 0f;
					case 4:
						return 1.8f, 17.2f, 0f;
					case 5:
						return -1.8f, 17.5f, 0f;
					case 6:
						return 2.1f, 17.2f, 0f;
					case 7:
						return -2.5f, 17.5f, 0f;
					case 8:
						return 0.3f, 19.4f, 0f;
					case 9:
						return -0.75f, 19.76f, 0f;
					case 10:
						return 1.92f, 19.6f, 0f;
					case 11:
						return -1.7f, 20.1f, 0f;
					case 12:
						return 2.8f, 20.2f, 0f;
					case 13:
						return -2.7f, 19.5f, 0f;
					case 14:
						return 3.8f, 20.2f, 0f;
					case 15:
						return -3.9f, 19.5f, 0f;
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

var func_135(bool bParam0, int iParam1)
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

bool func_136(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_137(bool bParam0)
{
	if (WEAPON::_IS_WEAPON_PISTOL(bParam0))
	{
		return joaat("GROUP_PISTOL");
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(bParam0))
	{
		return joaat("GROUP_REVOLVER");
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(bParam0))
	{
		return joaat("GROUP_REPEATER");
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(bParam0))
	{
		return joaat("GROUP_RIFLE");
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(bParam0))
	{
		return joaat("GROUP_SHOTGUN");
	}
	else if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
	{
		return joaat("GROUP_SNIPER");
	}
	return 0;
}

bool func_138(bool bParam0)
{
	return WEAPON::_IS_WEAPON_BOW(bParam0);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "IF_READY_STATE_INIT";
		case 1:
			return "IF_READY_STATE_RIDE_PAST";
		case 2:
			return "IF_READY_STATE_TEAM_POSE";
		case 3:
			return "IF_READY_STATE_BEHIND_SHOT";
		case 4:
			return "IF_READY_STATE_TERMINATE";
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

struct<2> func_141(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_142(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_154(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_143(var uParam0, var uParam1)
{
	return uParam0;
}

int func_144(int iParam0)
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

int func_145(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1275959.f_15 && !func_155())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

int func_146(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_156(iParam0, bParam1));
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

bool func_147(int iParam0, bool bParam1)
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

bool func_148(int iParam0, bool bParam1)
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
	if (func_157(iParam0))
	{
		return true;
	}
	return !func_147(iParam0, 0);
}

bool func_149(int iParam0, bool bParam1)
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
	if (func_158(iParam0))
	{
		return false;
	}
	if (func_157(iParam0))
	{
		return false;
	}
	if (func_159(iParam0))
	{
		return true;
	}
	return func_160(iParam0);
}

int func_150(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_161(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_151(int iParam0, int iParam1)
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

char* func_152(int iParam0, int iParam1)
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

int func_153(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_154(struct<2> Param0)
{
	int iVar0;

	if (!func_162(Param0))
	{
		return -1;
	}
	iVar0 = func_163(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072032.f_19554.f_1[iVar0 /*3*/].f_2;
}

bool func_155()
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
	if (!func_162(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_156(int iParam0, bool bParam1)
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

bool func_157(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28388), sParam0))
	{
		return true;
	}
	return false;
}

bool func_158(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

bool func_159(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28386), sParam0))
	{
		return true;
	}
	return false;
}

bool func_160(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_164(iParam0);
		return false;
	}
	if (func_159(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, iParam0) != 2)
		{
			func_165(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275959.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, iParam0) == 2);
}

bool func_161(struct<2> Param0, bool bParam2)
{
	if (!func_162(Param0))
	{
		return false;
	}
	func_166(bParam2);
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

bool func_162(struct<2> Param0)
{
	if (!func_167(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_168(Param0))
	{
		return false;
	}
	return true;
}

int func_163(struct<2> Param0)
{
	char* sVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	sVar0 = func_169(Param0);
	if (Global_1072032.f_19554 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - Trying to find ", sVar0, " but ths list is empty.");
		return -1;
	}
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	if (!func_161(Param0, &vVar1))
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
		func_161(Global_1072032.f_19554.f_1[iVar9 /*3*/], &vVar4);
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

void func_164(char* sParam0)
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
	func_170(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_165(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_171(iVar0, iParam1, iParam5))
	{
		bVar1 = true;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1275959.f_22[iVar0])
		{
			func_164(sParam0);
			return;
		}
		DEBUG::_0xA308F935BDECCEC0(2796168, 162, "HUD_SET_PLAYER_TRUE_ENEMY: Setting hostile for player ", iVar0, " bSyncToPosse = ", MISC::_0xF216F74101968DB0(bParam2), ", bSendEventToLocalPosse = ", MISC::_0xF216F74101968DB0(bParam3), ", bSendEventToRemotePosse = ", MISC::_0xF216F74101968DB0(bParam4), ", eEnemyEventType = ", func_172(iParam1, 0));
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
						func_165(iVar3, iParam1, 0, 1, 0, 0);
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
			func_173(&Var6, uVar4);
		}
	}
}

void func_166(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_167(int iParam0)
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

int func_168(int iParam0)
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

char* func_169(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_174(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_162(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_175(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_170(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_171(int iParam0, int iParam1, int iParam2)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "HUD_SET_PLAYER_ENEMY_EVENT_TYPE: Setting enemy event to ", func_172(iParam1, 0), " and starting timer for player ", iParam0);
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
		DEBUG::_0xA308F935BDECCEC0(168, 162, "HUD_SET_PLAYER_ENEMY_EVENT_TYPE: Received another enemy event of type ", func_172(iParam1, 0), ", restarting timer for player ", iParam0);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = Global_1275959.f_21;
		return true;
	}
	return false;
}

char* func_172(int iParam0, int iParam1)
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

void func_173(var uParam0, var uParam1)
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
	func_176(*uParam0);
}

char* func_174(int iParam0)
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

int func_175(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_161(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_176(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "-----------------------------------------------");
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "PRINT_SCRIPT_EVENT_NET_HUD_EVENT");
	DEBUG::_0x1B08D1EB9D8C4931(40, 162, "playerBroadcaster		= ", PLAYER::GET_PLAYER_NAME(Param0.f_1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 162, "eType					= ", func_177(Param0.f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "-----------------------------------------------");
}

char* func_177(int iParam0, int iParam1)
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

