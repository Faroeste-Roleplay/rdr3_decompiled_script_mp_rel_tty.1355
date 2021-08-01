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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	DEBUG::_0xF0783374333FD8CE(8, 157, "[WEIGHT_CONTROL_SCRIPT] Starting...");
	uVar0 = ScriptParam_0.f_1;
	while (!func_1(0, 0) && !func_2())
	{
		func_3(&uVar0);
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xF0783374333FD8CE(8, 157, "[WEIGHT_CONTROL_SCRIPT] ...Ending");
	func_4(1);
	func_5();
}

bool func_1(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_6(Global_1572887, 0), ", so skipping");
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

bool func_2()
{
	if (iLocal_15 == 9)
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	func_7();
	func_8(1, 0, 1, 0);
	switch (iLocal_15)
	{
		case 0:
			func_9(1);
			WEAPON::_0x94A3C1B804D291EC(Global_33, 0, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(Global_33, 249, true);
			PED::SET_PED_CONFIG_FLAG(Global_33, 334, true);
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_33))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_33, false, 0, false);
			}
			func_10(*uParam0);
			func_11(&uLocal_18, 1);
			func_12(1);
			break;
		case 1:
			if (func_13(&uLocal_18) > 1f)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_14(iLocal_16)))
				{
					if (func_8(0, 0, 0, 0))
					{
						func_15(*uParam0, 8);
					}
					func_12(2);
				}
			}
			break;
		case 2:
			if (!func_8(1, 1, 1, 1))
			{
				iLocal_21 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_UNCONSCIOUS_PED"), Global_33, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				TASK::TASK_PLAY_ANIM(Global_33, func_14(iLocal_16), func_16(iLocal_16), 4f, -4f, -1, 0, 0f, false, 1, false, 0, false);
			}
			func_11(&uLocal_18, 1);
			func_12(3);
			break;
		case 3:
			if (func_8(1, 0, 0, 0))
			{
				func_15(*uParam0, iLocal_16);
			}
			if (func_13(&uLocal_18) > 2.3f)
			{
				if (!func_8(1, 0, 0, 0))
				{
					if (!PED::IS_PED_RAGDOLL(Global_33))
					{
						PED::SET_PED_TO_RAGDOLL(Global_33, 0, 1, 0, false, false, false);
					}
					PED::RESET_PED_RAGDOLL_TIMER(Global_33);
					CAM::DO_SCREEN_FADE_OUT(2500);
					PED::_0x89F5E7ADECCCB49C(Global_33, "very_drunk");
					PED::_0x406CCF555B04FAD3(Global_33, 1, 0.6f);
					func_17(0.3f);
					func_11(&uLocal_18, 1);
					func_12(4);
				}
				else
				{
					func_15(*uParam0, iLocal_16);
				}
			}
			break;
		case 4:
			if (func_8(1, 0, 0, 0))
			{
				func_15(*uParam0, iLocal_16);
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
			}
			if (CAM::IS_SCREEN_FADED_OUT() && func_13(&uLocal_18) > 1.5f)
			{
				if (!func_8(1, 0, 0, 0))
				{
					func_11(&uLocal_18, 1);
					func_17(0.03f);
					func_12(5);
				}
				else
				{
					func_15(*uParam0, 8);
				}
				func_18(uParam0);
			}
			break;
		case 5:
			if (func_8(1, 0, 0, 0))
			{
				func_15(*uParam0, iLocal_16);
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
			}
			if (func_13(&uLocal_18) > 1.5f)
			{
				CAM::DO_SCREEN_FADE_IN(2500);
				func_12(6);
			}
			break;
		case 6:
			if (func_8(1, 0, 0, 0))
			{
				func_15(*uParam0, iLocal_16);
			}
			else
			{
				PED::_0x3AE3552E7C207CC5(Global_33, "NMBS_DRUNK_GETUPS", 1);
			}
			if (func_13(&uLocal_18) > 2.3f)
			{
				if (!TASK::IS_PED_GETTING_UP(Global_33))
				{
					func_12(7);
				}
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
			}
			break;
		case 7:
			if (((!func_8(1, 0, 0, 1) && !PED::IS_PED_FALLING(Global_33)) && !ENTITY::IS_ENTITY_IN_WATER(Global_33)) && !func_19(Global_33, 12))
			{
				TASK::TASK_PLAY_ANIM(Global_33, func_14(iLocal_17), func_16(iLocal_17), 2f, -2f, -1, 68222992, 0f, false, 66048, false, 0, false);
			}
			if (iLocal_21 != 0)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_21);
			}
			func_20(1);
			func_11(&uLocal_18, 1);
			func_12(8);
			break;
		case 8:
			if (func_13(&uLocal_18) > 1.75f)
			{
				PED::SET_PED_CONFIG_FLAG(Global_33, 249, false);
				PED::SET_PED_CONFIG_FLAG(Global_33, 334, false);
				func_12(9);
			}
			break;
		case 9:
			break;
	}
}

void func_4(bool bParam0)
{
	CAM::_0x4285804FD65D8066("DRUNK_SHAKE", 0);
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	GRAPHICS::_0x37D7BDBA89F13959("PlayerDrunk01");
	PED::_0x58F7DB5BD8FA2288(Global_33);
	PED::_0x88A95BB640FC186F(Global_33);
	PED::_0x406CCF555B04FAD3(Global_33, 1, 0f);
	func_9(0);
	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_33, 249, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, 249, false);
	}
	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_33, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, 334, false);
	}
}

void func_5()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_6(int iParam0, int iParam1)
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

void func_7()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_1275959.f_8, 129, true);
	PED::SET_PED_RESET_FLAG(Global_1275959.f_8, 103, true);
}

bool func_8(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (((PED::IS_PED_DEAD_OR_DYING(Global_33, true) || PED::_IS_PED_LASSOED(Global_33)) || PED::_GET_LASSOER_OF_PED(Global_33)) || CAM::_0x81DCFD13CF39920E())
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33) && bParam0)
	{
		return true;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_33) && bParam1)
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) && bParam3)
	{
		return true;
	}
	if (((PED::_0x84D0BF2B21862059(Global_33) || PED::GET_PED_CONFIG_FLAG(Global_33, 227, true)) || func_21(Global_33)) && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 8, "Ensuring this is working");
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		return true;
	}
	return false;
}

void func_9(char* sParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 109, "NET_CUTSCENE_BLOCK_ALL_CUTSCENES ", sParam0);
	UNK_0x355E72323AEE83CC(109, 6);
	Global_1272411.f_12 = sParam0;
}

void func_10(int iParam0)
{
	if (PED::IS_PED_MALE(Global_33))
	{
		if (iParam0 == -1004468971 || iParam0 == -1706054699)
		{
			iLocal_16 = 4;
			iLocal_17 = 5;
			STREAMING::REQUEST_ANIM_DICT(func_14(iLocal_16));
		}
		else
		{
			iLocal_16 = 6;
			iLocal_17 = 7;
			STREAMING::REQUEST_ANIM_DICT(func_14(iLocal_16));
		}
	}
	else if (iParam0 == -1004468971 || iParam0 == -1706054699)
	{
		iLocal_16 = 0;
		iLocal_17 = 1;
		STREAMING::REQUEST_ANIM_DICT(func_14(iLocal_16));
	}
	else
	{
		iLocal_16 = 2;
		iLocal_17 = 3;
		STREAMING::REQUEST_ANIM_DICT(func_14(iLocal_16));
	}
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1 || !func_22(uParam0))
	{
		func_23(uParam0);
	}
}

void func_12(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 157, "[CHANGE_TONIC_STATE] Changing to: ", func_24(iParam0, 0), " was: ", func_24(iLocal_15, 0));
	iLocal_15 = iParam0;
}

float func_13(var uParam0)
{
	if (!func_22(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_25(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_26() - uParam0->f_1);
}

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 1:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 2:
			return "script_mp@naturalist@player_potions@female@fat";
		case 3:
			return "script_mp@naturalist@player_potions@female@fat";
		case 4:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 5:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 6:
			return "script_mp@naturalist@player_potions@male@fat";
		case 7:
			return "script_mp@naturalist@player_potions@male@fat";
		default:
			break;
	}
	return "";
}

void func_15(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(2500);
	}
	if (iParam1 != 8)
	{
		TASK::STOP_ANIM_TASK(Global_33, func_14(iParam1), func_16(iParam1), -4f);
	}
	func_18(&uParam0);
	func_12(7);
}

char* func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "passout_skinny_female";
		case 1:
			return "recover_skinny_upper_female";
		case 2:
			return "passout_fat_female";
		case 3:
			return "recover_fat_upper_female";
		case 4:
			return "passout_skinny_male";
		case 5:
			return "recover_skinny_upper_male";
		case 6:
			return "passout_fat_male";
		case 7:
			return "recover_fat_upper_male";
		case 8:
			return "";
		default:
			break;
	}
	return "";
}

void func_17(float fParam0)
{
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 1f);
	}
	GRAPHICS::_0x5199405EABFBD7F0("PlayerDrunk01");
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01");
	}
	PED::_0x58F7DB5BD8FA2288(Global_33);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fParam0);
	GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", fParam0);
}

void func_18(var uParam0)
{
	float fVar0;

	fVar0 = func_27(13, 2);
	if (*uParam0 == -187002287)
	{
		func_29(func_28(joaat("USED"), 340025142), 1);
		if (fVar0 < 25f)
		{
			func_30(75f, 1);
		}
		else if (fVar0 >= 25f && fVar0 < 50f)
		{
			func_30(50f, 1);
		}
		else
		{
			func_30(25f, 1);
		}
	}
	else if (*uParam0 == -1004468971)
	{
		func_29(func_28(joaat("USED"), 1644594284), 1);
		if (fVar0 > 75f)
		{
			func_30(-75f, 1);
		}
		else if (fVar0 <= 75f && fVar0 > 50f)
		{
			func_30(-50f, 1);
		}
		else
		{
			func_30(-25f, 1);
		}
	}
	else if (*uParam0 == -605086052)
	{
		func_29(func_28(joaat("USED"), 340025142), 1);
		func_30(100f, 1);
	}
	else
	{
		func_29(func_28(joaat("USED"), 1644594284), 1);
		func_30(-100f, 1);
	}
}

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, iParam1, false);
	DEBUG::_0xF0783374333FD8CE(2728, 150, "DOES_PED_HAVE_WEAPON_IN_ATTACH_POINT - Ped weapon in attach point ", func_31(iParam1, 0), " is ", func_32(bVar0, 0), ".");
	return func_33(bVar0);
}

void func_20(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 158, "[__ITEM_INTERACTION__SET_PLAYER_INPUT] Enable player input: ", bParam0);
	UNK_0x355E72323AEE83CC(-1, 6);
	Global_1913789 = !bParam0;
	if (Global_1913789)
	{
		Global_1913789.f_1 = MISC::GET_GAME_TIMER();
	}
}

bool func_21(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	if (((PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return true;
	}
	return false;
}

bool func_22(var uParam0)
{
	return func_34(*uParam0, 1);
}

void func_23(var uParam0)
{
	func_35(uParam0, 0f);
}

char* func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WC_TONIC_CREATE";
		case 1:
			return "WC_TONIC_LOAD";
		case 2:
			return "WC_TONIC_START";
		case 3:
			return "WC_TONIC_PASSOUT_LOAD";
		case 4:
			return "WC_TONIC_PASSOUT";
		case 5:
			return "WC_TONIC_RECOVERY";
		case 6:
			return "WC_TONIC_GETUP";
		case 7:
			return "WC_TONIC_CLEANUP";
		case 8:
			return "WC_TONIC_WAIT_FOR_ANIM";
		case 9:
			return "WC_TONIC_COMPLETE";
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

bool func_25(var uParam0)
{
	return func_34(*uParam0, 2);
}

float func_26()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_27(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_36(1);
	}
	switch (iParam1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_37(0, 0), " Value: ", Global_1957252.f_1431.f_26[iParam0]);
			return Global_1957252.f_1431.f_26[iParam0];
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_37(1, 0), " Value: ", Global_1957252.f_1565.f_2.f_26[iParam0]);
			return Global_1957252.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Couldn't retrieve Cached Attribute XP data for Attribute: ", func_38(iParam0, 0));
	return -1f;
}

struct<2> func_28(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_29(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_30(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_27(13, 2);
	iVar1 = func_39(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_40(fVar0, 0f, 100f);
	iVar2 = func_39(fVar0);
	DEBUG::_0xF0783374333FD8CE(10648, 84, "RPG_GLOBAL_ALTER_WEIGHT - Altering Weight amount by: ", fParam0, " New Weight: ", fVar0, " Force Weight Update: ", MISC::_0xF216F74101968DB0(bParam1));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_ALTER_WEIGHT - Old Weight Rank: ", iVar1, " New Weight Rank: ", iVar2);
	if (iVar1 != iVar2)
	{
		Global_1957252.f_1431.f_107 = func_41();
		func_42(&(Global_1957252.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_43(13, fVar0, 2);
	Global_1957252.f_1431.f_99 = bParam1;
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WEAPON_ATTACH_POINT_HAND_PRIMARY";
		case 1:
			return "WEAPON_ATTACH_POINT_HAND_SECONDARY";
		case 2:
			return "WEAPON_ATTACH_POINT_PISTOL_R";
		case 3:
			return "WEAPON_ATTACH_POINT_PISTOL_L";
		case 4:
			return "WEAPON_ATTACH_POINT_KNIFE";
		case 5:
			return "WEAPON_ATTACH_POINT_LASSO";
		case 6:
			return "WEAPON_ATTACH_POINT_THROWER";
		case 7:
			return "WEAPON_ATTACH_POINT_BOW";
		case 8:
			return "WEAPON_ATTACH_POINT_BOW_ALTERNATE";
		case 9:
			return "WEAPON_ATTACH_POINT_RIFLE";
		case 10:
			return "WEAPON_ATTACH_POINT_RIFLE_ALTERNATE";
		case 11:
			return "WEAPON_ATTACH_POINT_LANTERN";
		case 12:
			return "WEAPON_ATTACH_POINT_TEMP_LANTERN";
		case 13:
			return "WEAPON_ATTACH_POINT_MELEE";
		case 14:
			return "WEAPON_ATTACH_POINT_HIP";
		case 15:
			return "WEAPON_ATTACH_POINT_BOOT";
		case 16:
			return "WEAPON_ATTACH_POINT_BACK";
		case 17:
			return "WEAPON_ATTACH_POINT_FRONT";
		case 18:
			return "WEAPON_ATTACH_POINT_SHOULDERSLING";
		case 19:
			return "WEAPON_ATTACH_POINT_LEFTBREAST";
		case 20:
			return "WEAPON_ATTACH_POINT_RIGHTBREAST";
		case 21:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT";
		case 22:
			return "WEAPON_ATTACH_POINT_RIGHTARMPIT";
		case 23:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_RIFLE";
		case 24:
			return "WEAPON_ATTACH_POINT_SATCHEL";
		case 25:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_BOW";
		case 26:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_EXTRA";
		case 27:
			return "WEAPON_ATTACH_POINT_LEFT_HAND_EXTRA";
		case 28:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_AUX";
		case 29:
			return "MAX_WEAPON_ATTACH_POINTS";
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

var func_32(bool bParam0, int iParam1)
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

bool func_33(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

bool func_34(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_26() - fParam1);
	func_44(uParam0, 1);
	func_45(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	return func_47(func_46(iParam0));
}

char* func_37(int iParam0, int iParam1)
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

char* func_38(int iParam0, int iParam1)
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

int func_39(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_40(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_41()
{
	return Global_1902870;
}

void func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_48(*uParam0);
	iVar1 = func_49(*uParam0);
	iVar2 = func_50(*uParam0);
	iVar3 = func_51(*uParam0);
	iVar4 = func_52(*uParam0);
	iVar5 = func_53(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddSeconds passed.");
		return;
	}
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddMinutes passed.");
		return;
	}
	if (iParam3 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddHours passed.");
		return;
	}
	if (iParam4 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddDays passed.");
		return;
	}
	if (iParam5 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddMonths passed.");
		return;
	}
	if (iParam6 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddYears passed.");
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_55(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_43(int iParam0, char* sParam1, int iParam2)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_36(2);
	}
	DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE - Caching Attribute ", func_38(iParam0, 0), " XP Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_57()));
	func_58(iParam0, sParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275959.f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275959.f_8, iParam0, BUILTIN::FLOOR(sParam1));
	}
	else
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE - PED is not alive this frame... will attempt to set Attribute Points another frame... ");
	}
	return 1;
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_46(int iParam0)
{
	return func_59(&(Global_1957252.f_1565), iParam0, 1);
}

int func_47(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_60(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_49(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_50(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_51(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_52(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_53(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_54(int iParam0, int iParam1)
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

void func_55(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_61(uParam0, iParam6);
	func_62(uParam0, iParam5);
	func_63(uParam0, iParam4);
	func_64(uParam0, iParam3);
	func_65(uParam0, iParam2);
	func_66(uParam0, iParam1);
}

bool func_56(int iParam0)
{
	if (func_67(iParam0))
	{
		return true;
	}
	else if (func_68(iParam0))
	{
		return true;
	}
	return false;
}

bool func_57()
{
	return func_46(0);
}

void func_58(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_36(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_38(iParam0, 0), " Pool: ", func_69(iParam2), " to ", fParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_38(iParam0, 0), " Pool: ", func_69(iParam2), " to ", fParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Failed to set Attribute XP for ", func_38(iParam0, 0), " Pool: ", func_69(iParam2), ". This is really bad. ");
			break;
	}
}

bool func_59(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_60(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_61(var uParam0, int iParam1)
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
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_62(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_49(*uParam0);
	iVar1 = func_48(*uParam0);
	if (iParam1 < 1 || iParam1 > func_54(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_54(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_64(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_65(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_67(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_68(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

char* func_69(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Override";
		case 0:
			return "Default";
		default:
			break;
	}
	return "INVALID";
}

