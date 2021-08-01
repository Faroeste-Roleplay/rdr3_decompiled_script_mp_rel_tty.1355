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
	struct<19> Local_13 = { 0, 0, 2514129, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 0 } ;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
#endregion

void __EntryFunction__()
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "bino script has launched....");
	Local_13.f_3 = "mech_inventory@binoculars";
	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		Local_13.f_8 = PED::IS_PED_ON_MOUNT(Global_33);
	}
	func_1();
	if (func_2(507))
	{
		func_3(507);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "HAS_FORCE_CLEANUP_OCCURRED");
		func_4(&Local_13);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!ENTITY::IS_ENTITY_DEAD(Global_33) && func_5(&Local_13))
	{
		if (func_6() == 4 || func_6() == 5)
		{
			func_7(&Local_13);
		}
		if (!WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, 1, 0, 1)))
		{
			func_9(&(Local_13.f_13), &(Local_13.f_14), &(Local_13.f_15), &(Local_13.f_16));
			if (Local_13.f_15 != 0 || Local_13.f_16 != 0)
			{
				func_10(&(Local_13.f_18));
			}
		}
		if (func_6() > 0 && !WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, 1, 0, 1)))
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER NO LONGER HAS binos equipped, cleaning up");
			func_11(&Local_13, 8);
		}
		if (func_12(Local_13.f_4[0]) && func_13(Local_13.f_4[0], 1))
		{
			func_11(&Local_13, 6);
		}
		func_14(&Local_13);
		switch (func_6())
		{
			case 0:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				func_11(&Local_13, 1);
				break;
			case 1:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				func_11(&Local_13, 2);
				break;
			case 2:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				if (WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, 1, 0, 0)))
				{
					func_17(1);
					func_18(508, 0);
					func_19(&Local_13);
					Local_13.f_4[0] = func_20("BINO_PUT_AWAY", joaat("INPUT_CAMERA_PUT_AWAY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_11(&Local_13, 4);
				}
				break;
			case 4:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BINOCULARSONFOOT"));
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				if (func_21())
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "Binos enter...");
					func_22("enter", "Binoculars_Sounds", 1);
					iLocal_50 = 0;
					func_11(&Local_13, 5);
				}
				break;
			case 5:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BINOCULARSINUSE"));
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_SNIPER_ZOOM_IN_ONLY")))
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "BINO: attempting Binos zoom in...", iLocal_50);
					if (iLocal_50 < 2)
					{
						func_22("zoom_in", "Binoculars_Sounds", 1);
						iLocal_50 = (1 + iLocal_50);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_SNIPER_ZOOM_OUT_ONLY")))
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "BINO: attempting Binos zoom out...", iLocal_50);
					if (iLocal_50 > 0)
					{
						func_22("zoom_out", "Binoculars_Sounds", 1);
						iLocal_50 = (iLocal_50 - 1);
					}
				}
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
					func_17(1);
					func_23(&(Local_13.f_4[2]), 1, 1);
					Local_13.f_4[2] = func_24("IB_ZOOM", joaat("INPUT_SNIPER_ZOOM"), 17, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					func_25(Local_13.f_4[2], 11, 1, 1);
					func_25(Local_13.f_4[2], 17, 1, 1);
					func_26(Local_13.f_4[2], joaat("INPUT_SNIPER_ZOOM"));
				}
				if (func_27())
				{
					func_17(1);
					func_23(&(Local_13.f_4[2]), 1, 1);
					DEBUG::_0xF0783374333FD8CE(8, 190, "Binos exit...");
					func_22("exit", "Binoculars_Sounds", 1);
					func_11(&Local_13, 4);
				}
				break;
			case 6:
				if (func_15(&Local_13))
				{
					func_19(&Local_13);
					func_16(&Local_13);
				}
				func_11(&Local_13, 7);
				break;
			case 7:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				func_11(&Local_13, 8);
				if (WEAPON::_IS_WEAPON_BINOCULARS(func_28(Global_33, 0)))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
				}
				break;
			case 8:
				if (func_15(&Local_13))
				{
					func_17(1);
					func_16(&Local_13);
				}
				func_4(&Local_13);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xF0783374333FD8CE(8, 190, "TERMINATE!");
	func_4(&Local_13);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1913549 = 0;
}

bool func_2(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904703.f_33[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_3(int iParam0)
{
	if (!func_2(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "CLEAR_TUTORIAL_BEING_DISPLAYED: tutorial requesting clear not currently being displayed...");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 105, "CLEAR_TUTORIAL_BEING_DISPLAYED: CLEAR currently displayed!");
	func_17(1);
}

void func_4(int* iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 0, "BINO_CLEANUP");
	if (func_2(509))
	{
		func_3(509);
	}
	if (func_2(508))
	{
		func_3(508);
	}
	func_19(iParam0);
	func_1();
	Global_1913550 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (func_29(iParam0, 64))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
	MAP::DISPLAY_RADAR(true);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
		CAM::DESTROY_CAM(iParam0->f_1, false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, false);
	func_17(1);
	HUD::_TEXT_DATABASE_DELETE("BINO");
}

bool func_5(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_BINO_UPDATE - IS_ENTITY_DEAD");
		return false;
	}
	if (func_30())
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PROCESS_BINO_EXIT_EVENTS - FORCE STOP");
		func_31(iParam0, 8);
		func_31(iParam0, 16);
		func_31(iParam0, 64);
	}
	if (func_29(iParam0, 8) || func_29(iParam0, 16))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_BINO_UPDATE - BINO_FLAG_FORCE_STOP/UNEQUIP");
		return false;
	}
	if ((!func_32(joaat("WEAPON_KIT_BINOCULARS"), 1) && !func_32(joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), 1)) && !WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, 1, 0, 1)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_BINO_UPDATE - GET_PED_CURRENT_WEAPON");
		return false;
	}
	if (func_33())
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_BINO_UPDATE - IS_SATCHEL_VISIBLE");
		return false;
	}
	if (func_34(PLAYER::GET_PLAYER_INDEX()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_BINO_UPDATE - NET_PLAYER_STATUS_IS_INCAPACITATED");
		return false;
	}
	return true;
}

int func_6()
{
	return Global_1913550;
}

void func_7(int* iParam0)
{
	if (func_35(1))
	{
		if (!func_29(iParam0, 16))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
				func_31(iParam0, 16);
			}
			else
			{
				func_11(iParam0, 6);
			}
		}
		func_36(1);
	}
	if (func_35(2))
	{
		if (!func_29(iParam0, 8))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
			}
		}
		func_36(2);
	}
	if (func_35(4))
	{
		if (func_12(iParam0->f_4[0]))
		{
			func_37(iParam0->f_4[0], 0, 1, 1);
		}
		func_36(4);
	}
	else if (func_12(iParam0->f_4[0]) && func_38(iParam0->f_4[0], 1))
	{
		func_37(iParam0->f_4[0], 1, 1, 1);
	}
	if (func_35(8))
	{
		if (!func_29(iParam0, 32))
		{
			func_31(iParam0, 32);
		}
		func_36(8);
	}
	if (func_35(16))
	{
		if (func_29(iParam0, 32))
		{
			func_39(iParam0, 32);
		}
		func_36(16);
	}
}

int func_8(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_9(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_X")) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_Y")) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_X")) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_Y")) * 127f));
}

void func_10(var uParam0)
{
	func_40(uParam0, 0f);
}

void func_11(int* iParam0, int iParam1)
{
	Global_1913550 = iParam1;
	func_41(iParam0);
}

bool func_12(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1952230[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3);
}

bool func_13(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_42(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1952230[iVar0 /*23*/].f_3);
}

void func_14(int iParam0)
{
	if (!WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, 1, 0, 1)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1) && CAM::IS_CAM_ACTIVE(iParam0->f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
}

bool func_15(int iParam0)
{
	return iParam0->f_10;
}

void func_16(int iParam0)
{
	iParam0->f_10 = 0;
}

void func_17(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_43(iParam0, &iVar0, &iVar1);
	if (!func_44(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_45(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_46(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

void func_19(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_4)
	{
		if (func_12(iParam0->f_4[iVar0]))
		{
			func_23(&(iParam0->f_4[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

int func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(2216, 145, "REGISTER_USE_CONTEXT_DYNAMIC - (", sParam0, ") with iHoldTime = ", sParam6, " and iAutoFillTime = ", sParam7);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Cannot register a context with an invalid control!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_47(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_48(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, sParam6, sParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

bool func_21()
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!WEAPON::_IS_WEAPON_BINOCULARS(func_8(Global_33, 1, 0, 1)))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 2048, false);
		}
		return true;
	}
	return false;
}

void func_22(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		Global_1959019[Global_1959019.f_25] = iVar0;
		Global_1959019.f_25 = (Global_1959019.f_25 + 1 % 24);
	}
}

void func_23(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_42(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_49(iVar0);
	*uParam0 = 0;
}

int func_24(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(168, 145, "REGISTER_USE_CONTEXT_FRONTEND - (", sParam0, ")");
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Cannot register a context with an invalid control!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_47(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_48(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_FRONTEND - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_12(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_PROMPT_ATTRIBUTE - Cannot set a label for an invalid context!");
		return;
	}
	iVar0 = func_42(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1952230[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_12(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ALLOWED_CONTROL_ACTION - Cannot handle an invalid context!");
		return;
	}
	iVar0 = func_42(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1952230[iVar0 /*23*/].f_3, iParam1);
}

bool func_27()
{
	if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, false);
		return true;
	}
	return false;
}

var func_28(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_29(int* iParam0, int iParam1)
{
	return (iParam0->f_12 && iParam1) != 0;
}

bool func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_DAMAGE"):
			case joaat("EVENT_ENTITY_DAMAGED"):
				if (func_50(iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_33))
	{
		return true;
	}
	return false;
}

void func_31(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 || iParam1);
}

bool func_32(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_51(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_52(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Found weapon item in player's satchel.");
				return true;
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find weapon item in player's satchel.");
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_53(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_54(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_55(bParam0, 0, 0, 0) >= iParam1;
}

bool func_33()
{
	return Global_1940463.f_2;
}

bool func_34(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_IS_INCAPACITATED - Invalid iPlayerID = ", iParam0);
		return false;
	}
	if (!Global_1275959.f_22[iParam0])
	{
		return false;
	}
	return PED::_0xB655DB7582AEC805(PLAYER::GET_PLAYER_PED(Global_1275959.f_154[iParam0]));
}

bool func_35(int iParam0)
{
	return (Global_1913549 && iParam0) != 0;
}

void func_36(int iParam0)
{
	Global_1913549 = (Global_1913549 - (Global_1913549 && iParam0));
}

void func_37(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (bParam2 && !func_12(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ENABLED - Invalid context!");
		return;
	}
	sVar0 = func_42(iParam0);
	if (bParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Enable use context, ", sVar0);
		func_56(iParam0, 4);
		if (bParam3)
		{
			func_57(sVar0, 1);
		}
		func_58(sVar0, 1);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Disable use context, ", sVar0);
		func_59(iParam0, 4);
		func_58(sVar0, 0);
	}
}

bool func_38(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "IS_USED_CONTEXT_DISABLED - Invalid context!");
		return true;
	}
	return func_47(iParam0, 4);
}

void func_39(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 - (iParam0->f_12 && iParam1));
}

void func_40(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_60() - fParam1);
	func_61(uParam0, 1);
	func_62(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_41(int* iParam0)
{
	iParam0->f_10 = 1;
}

int func_42(int iParam0)
{
	return iParam0;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_44(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_63(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_46(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_64(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_65(iParam0, 0));
		return false;
	}
	if (func_66(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_65(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_67(iParam0, 1)) || func_68(32768))
	{
		if (!func_67(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_69())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_45(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_46(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

bool func_47(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_48(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1952230[iParam0 /*23*/].f_4 = iParam1;
	Global_1952230[iParam0 /*23*/] = iParam4;
	Global_1952230[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1952230[iParam0 /*23*/].f_2 = iParam5;
	Global_1952230[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1952230[iParam0 /*23*/].f_9 = fParam9;
	Global_1952230[iParam0 /*23*/].f_10 = iParam10;
	Global_1952230[iParam0 /*23*/].f_11 = iParam11;
	Global_1952230[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_5 = iParam12;
	Global_1952230[iParam0 /*23*/].f_1 = 2;
	Global_1952230[iParam0 /*23*/].f_17 = -1;
	Global_1952230[iParam0 /*23*/].f_18 = iParam16;
	Global_1952230[iParam0 /*23*/].f_19 = iParam15;
	Global_1952230[iParam0 /*23*/].f_20 = bParam25;
	Global_1952230[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1952230[iParam0 /*23*/].f_3 = iVar0;
	func_57(iParam0, 1);
	func_58(iParam0, 1);
	func_59(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_70(iParam14, 0));
}

void func_49(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_71(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1952230[iParam0 /*23*/].f_3);
	}
	Global_1952230[iParam0 /*23*/].f_4 = 0;
	Global_1952230[iParam0 /*23*/] = 1;
	Global_1952230[iParam0 /*23*/].f_16 = 0;
	Global_1952230[iParam0 /*23*/].f_1 = 0;
	Global_1952230[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_9 = 0f;
	Global_1952230[iParam0 /*23*/].f_10 = 0;
	Global_1952230[iParam0 /*23*/].f_11 = 0;
	Global_1952230[iParam0 /*23*/].f_2 = 1;
	Global_1952230[iParam0 /*23*/].f_15 = -1f;
}

bool func_50(int iParam0)
{
	struct<5> Var0;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(Var0))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return false;
		}
		if (!PED::IS_PED_A_PLAYER(iVar9))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
		{
			iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10) || iVar10 == Global_33)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		if (Var0.f_4 <= 1f)
		{
			return false;
		}
		iVar11 = WEAPON::GET_WEAPONTYPE_GROUP(Var0.f_2);
		if (iVar11 != joaat("GROUP_MELEE") && iVar11 != joaat("GROUP_UNARMED"))
		{
			return false;
		}
		DEBUG::_0xF0783374333FD8CE(8, 0, "@@@ PROCESS_BINO_DAMAGE_EVENT player hit by melee weapon");
	}
	return false;
}

bool func_51(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_52(bool bParam0)
{
	vector3 vVar0;

	if (!func_51(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_53(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_51(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_72(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_73("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_74(&Var4, iVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", iVar3);
			}
			else if (!func_75(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_76(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_76(Var4.f_4, 0), " that uses the ammo - ", func_76(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_77(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_76(Var4.f_4, 0), " that uses the ammo - ", func_76(bParam0, 0));
					return true;
				}
			}
			iVar3++;
		}
		func_77(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_76(bParam0, 0));
	return false;
}

bool func_54(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_51(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_78(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_79(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_80(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_76(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_81(bParam0);
	iVar2 = func_80(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_76(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_55(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_51(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_76(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_52(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_72(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_82(bParam0, 0);
	}
	if (func_83(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_84(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_85(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_76(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_84(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_76(bParam0, 0));
	return iVar0;
}

void func_56(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 - (Global_1952230[iParam0 /*23*/].f_1 && iParam1));
}

void func_57(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_47(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_58(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_59(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

float func_60()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_63(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_64(int iParam0)
{
	if (func_67(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2:
			return "TF_DUMMY_FLAG";
		case -1:
			return "TF_INVALID";
		case 0:
			return "TF_SICK_ITEM_DEGRADE";
		case 1:
			return "TF_WHISTLE_OUT_OF_RANGE_LONG_1";
		case 2:
			return "TF_WHISTLE_OUT_OF_RANGE_SHORT";
		case 3:
			return "TF_WHISTLE_OUT_OF_RANGE_MAIN";
		case 4:
			return "TF_WHISTLE_OUT_OF_RANGE_TEMP";
		case 5:
			return "TF_WHISTLE_BOTH_OUT_OF_RANGE";
		case 6:
			return "TF_WHISTLE_OUT_OF_RANGE_LONG_2";
		case 7:
			return "TF_WHISTLE_UNBONDED";
		case 8:
			return "TF_WHISTLE_CAMP";
		case 9:
			return "TF_WHISTLE_CAMP_HITCHED";
		case 10:
			return "TF_WHISTLE_HORSE_LOST";
		case 11:
			return "TF_WHISTLE_NO_HORSES";
		case 12:
			return "TF_WHISTLE_NO_HORSE_GUAMA";
		case 13:
			return "TF_WHISTLE_IN_INTERIOR";
		case 14:
			return "TF_WHISTLE_IN_CAVE";
		case 15:
			return "TF_WHISTLE_IN_TUNNEL";
		case 16:
			return "TF_WHISTLE_SPOOKED";
		case 17:
			return "TF_HORSE_CMD_CAMP";
		case 18:
			return "TF_HORSE_CMD_RANCH";
		case 19:
			return "TF_HORSE_NEW_TEMP_BONDED";
		case 20:
			return "TF_HORSE_NEW_TEMP_BONDED_PRE_SADDLE";
		case 21:
			return "TF_HORSE_BONDLVL_2_PERKS";
		case 22:
			return "TF_HORSE_BONDLVL_3_PERKS";
		case 23:
			return "TF_HORSE_BONDLVL_4_PERKS";
		case 24:
			return "TF_HORSE_HUNGRY";
		case 25:
			return "TF_HORSE_STARVING";
		case 26:
			return "TF_HORSE_DIRTY";
		case 27:
			return "TF_HORSE_FILTHY";
		case 28:
			return "TF_HORSE_CORE_HEALTH_50";
		case 29:
			return "TF_HORSE_CORE_STAMINA_50";
		case 30:
			return "TF_HORSE_CORE_HEALTH_EMPTY";
		case 31:
			return "TF_HORSE_CORE_STAMINA_EMPTY";
		case 32:
			return "TF_HORSE_CORE_BOTH_EMPTY";
		case 33:
			return "TF_HORSE_CORE_STAMINA_EMPTY_IN_WATER";
		case 34:
			return "TF_HORSE_SPRINT_STAMINA_1";
		case 35:
			return "TF_HORSE_SPRINT_STAMINA_2";
		case 36:
			return "TF_HORSE_BUCK_OVERSPURRED";
		case 37:
			return "TF_HORSE_BUCK_PLAYER_PREDATOR";
		case 38:
			return "TF_COMPANION_HORSE_BUCK_PLAYER";
		case 39:
			return "TF_COMPANION_HORSE_MOUNTED";
		case 40:
			return "TF_COMPANION_HORSE_BLOCKED";
		case 41:
			return "TF_HORSE_SADDLED_HORSE";
		case 42:
			return "TF_HORSE_SADDLE_SENT_TO_SHOP";
		case 43:
			return "TF_HORSE_FED";
		case 44:
			return "TF_HORSE_HITCHED";
		case 45:
			return "TF_HORSE_COMMANDS_UNLOCKED";
		case 46:
			return "TF_HORSE_BOND_LOCK_ACTION";
		case 47:
			return "TF_HORSE_TAME_LOCKON";
		case 48:
			return "TF_HORSE_TAME_LOCKON_2";
		case 49:
			return "TF_HORSE_TAME_APPROACH";
		case 50:
			return "TF_HORSE_TAME_SPOOKED";
		case 51:
			return "TF_HORSE_TAME_MOUNT";
		case 52:
			return "TF_HORSE_TAME_MOUNTED";
		case 53:
			return "TF_HORSE_TAME_SUCCESS";
		case 54:
			return "TF_HORSE_TAME_BUCKED_OFF";
		case 55:
			return "TF_HORSE_DEAD_CHPT2";
		case 56:
			return "TF_HORSE_REVIVE";
		case 57:
			return "TF_HORSE_REVIVE_NO_ITEM";
		case 58:
			return "TF_HORSE_REVIVE_NO_ITEM_PRE_CRAFT";
		case 59:
			return "TF_HORSE_STABLE_OWNED_1";
		case 60:
			return "TF_HORSE_STABLE_OWNED_2";
		case 61:
			return "TF_HORSE_AGITATED_ANIMAL_FOOT";
		case 62:
			return "TF_HORSE_AGITATED_ANIMAL_MOUNT";
		case 63:
			return "TF_HORSE_CARRYING_ITEMS";
		case 64:
			return "TF_HORSE_SADDLE_DROPPED";
		case 65:
			return "TF_HORSE_SADDLE_OUT_OF_REACH";
		case 66:
			return "TF_HORSE_STAMINA_WITH_LARGE_ITEM";
		case 67:
			return "TF_HORSE_SADDLE_BLOCKED";
		case 68:
			return "TF_HORSE_CARGO_KILL_FAST";
		case 69:
			return "TF_HORSE_CARGO_KILL_STABLE";
		case 70:
			return "TF_VEHICLE_DESTROYED";
		case 71:
			return "TF_VEHICLE_FULL_CARCASS";
		case 72:
			return "TF_VEHICLE_FULL_PELTS";
		case 73:
			return "TF_VEHICLE_CARGO_DISABLED";
		case 74:
			return "TF_VEHICLE_UNSUPPORTED_CARCASS";
		case 75:
			return "TF_VEHICLE_UNSUPPORTED_PELT";
		case 76:
			return "TF_VEHICLE_UNSUPPORTED_GENERAL";
		case 77:
			return "TF_VEHICLE_WHISTLE_MOUNTED";
		case 78:
			return "TF_VEHICLE_WHISTLE_BOUNTY_IN_BACK";
		case 79:
			return "TF_VEHICLE_COULDNT_FIND";
		case 80:
			return "TF_VEHICLE_KICKED_BY_OWNER";
		case 81:
			return "TF_VEHICLE_YOU_DO_NOT_OWN";
		case 82:
			return "TF_HORSE_MATCH_SPEED_STAMINA";
		case 83:
			return "TF_HAT_DESTROYED";
		case 84:
			return "TF_HAT_DESTROYED_NO_HORSE_ACCESS";
		case 85:
			return "TF_HAT_PICKED_UP_OWNABLE_HAT_INTRO";
		case 86:
			return "TF_HAT_PICKED_UP_OWNABLE_HAT";
		case 87:
			return "TF_HAT_PICKED_UP_TEMP_HAT";
		case 88:
			return "TF_WARDROBE_NO_COLD";
		case 89:
			return "TF_WARDROBE_NO_HOT";
		case 90:
			return "TF_WARDROBE_NO_BOTH";
		case 91:
			return "TF_OFFHAND_HOLSTER_UNLOCK";
		case 92:
			return "TF_RPG_STAT_GAIN";
		case 93:
			return "TF_TALISMAN_SINGLE_INGREDIENT";
		case 94:
			return "TF_TALISMAN_CAN_CRAFT";
		case 95:
			return "TF_TRINKET_CAN_CRAFT";
		case 96:
			return "TF_HOT_START";
		case 97:
			return "TF_COLD_START";
		case 98:
			return "TF_DRUNK_START";
		case 99:
			return "TF_CORE_LOW";
		case 100:
			return "TF_LOW_STAMINA_CORE_START";
		case 101:
			return "TF_LOW_DEAD_EYE_CORE_START";
		case 102:
			return "TF_LOW_HEALTH_CORE_START";
		case 103:
			return "TF_ITEM_DEGRADE";
		case 104:
			return "TF_PLAYER_POISONED";
		case 105:
			return "TF_PLAYER_POISONED_WORN_OFF";
		case 106:
			return "TF_WEIGHT_CHANGED";
		case 107:
			return "TF_WEIGHT_MAX";
		case 108:
			return "TF_WEIGHT_MIN";
		case 109:
			return "TF_EAT_FOOD_1";
		case 110:
			return "TF_EAT_FOOD_2";
		case 111:
			return "TF_MEAT_SPOIL_1";
		case 112:
			return "TF_MEAT_SPOIL_2";
		case 113:
			return "TF_MEAT_SPOIL_3";
		case 114:
			return "TF_TIMED_CAMPFIRE";
		case 115:
			return "TF_TIMED_GINSENG";
		case 116:
			return "TF_TIMED_SAGE";
		case 117:
			return "TF_TIMED_INDIAN_TOBACCO";
		case 118:
			return "TF_TIMED_YARROW";
		case 119:
			return "TF_TIMED_WILD_CARROTS";
		case 120:
			return "TF_TIMED_BULRUSH";
		case 121:
			return "TF_TIMED_OLEANDER";
		case 122:
			return "TF_TIMED_BERRIES";
		case 123:
			return "TF_TIMED_SKINNING";
		case 124:
			return "TF_TIMED_FLIGHT_FEATHER";
		case 125:
			return "TF_DEATH_HEALTH_TIP";
		case 126:
			return "TF_DEATH_MONEY_LOSS";
		case 127:
			return "TF_DEATH_LOCATION";
		case 128:
			return "TF_LEAVE_BOAT";
		case 129:
			return "TF_BOUNTY_HUNTER";
		case 130:
			return "TF_BOUNTY_POSTER";
		case 131:
			return "TF_BOUNTY_CRIMINAL";
		case 132:
			return "TF_BOUNTY_WANTED";
		case 133:
			return "TF_TOWN_LOCKDOWN_1";
		case 134:
			return "TF_TOWN_LOCKDOWN_2";
		case 135:
			return "TF_BLACKWATER_LOCKDOWN";
		case 136:
			return "TF_WAGON_FENCE";
		case 137:
			return "TF_WAGON_FENCE_STOLEN";
		case 138:
			return "TF_WAGON_FENCE_AGGRO";
		case 139:
			return "TF_WAGON_FENCE_PLAYER_WANTED";
		case 140:
			return "TF_WAGON_FENCE_DESTROYED";
		case 141:
			return "TF_HORSE_FENCE";
		case 142:
			return "TF_HORSE_FENCE_SP";
		case 143:
			return "TF_HORSE_FENCE_RIDE";
		case 144:
			return "TF_HORSE_FENCE_MP";
		case 145:
			return "TF_HOME_ROBBERY";
		case 146:
			return "TF_RUSTLING";
		case 147:
			return "TF_RHMR0_SHADY_SHOP";
		case 148:
			return "TF_POKER_UNLOCK";
		case 149:
			return "TF_UPGRADE_AMMO_BANDOLIER";
		case 150:
			return "TF_UPGRADE_AMMO_BELT";
		case 151:
			return "TF_UPGRADE_AMMO_RE_BANDOLIER";
		case 152:
			return "TF_UPGRADE_AMMO_RE_BELT";
		case 153:
			return "TF_UPGRADE_AMMO_DEFAULT";
		case 154:
			return "TF_HOME_ROBBERY_TIP";
		case 155:
			return "TF_INTERMENT_CAMP_TIP";
		case 156:
			return "TF_LASSO_ACQUIRED";
		case 157:
			return "TF_LASSO";
		case 158:
			return "TF_LASSO_ON_HORSE";
		case 159:
			return "TF_HOGTIE";
		case 160:
			return "TF_HOGTIE_CARRY";
		case 161:
			return "TF_PLAYER_BEING_GRAPPLED";
		case 162:
			return "TF_NO_GUNS_IN_RHODES";
		case 163:
			return "TF_NO_GUNS_IN_RHODES_DEPUTY";
		case 164:
			return "TF_NO_GUNS_IN_CALIGA";
		case 165:
			return "TF_NO_GUNS_IN_CALIGA_DEPUTY";
		case 166:
			return "TF_WORN_WEAPON";
		case 167:
			return "TF_COMPANION_GROUP_INVITE_INSIDE_CARAVAN";
		case 168:
			return "TF_COMPANION_GROUP_INVITE_OUTSIDE_CARAVAN";
		case 169:
			return "TF_COACH_ROBBERY";
		case 170:
			return "TF_SHOP_ROBBERY";
		case 171:
			return "TF_TRAIN_ROBBERY";
		case 172:
			return "TF_TRAIN_ROBBERY_HORSE";
		case 173:
			return "TF_TRAIN_ROBBERY_AGGRO";
		case 174:
			return "TF_TRAIN_ROBBERY_AGGRO2";
		case 175:
			return "TF_TRAIN_ROBBERY_STOP";
		case 176:
			return "TF_TRAIN_ROBBERY_STOP2";
		case 177:
			return "TF_TRAIN_ROBBERY_TRGTS";
		case 178:
			return "TF_TRAIN_ROBBERY_HLDP";
		case 179:
			return "TF_TRAIN_ROBBERY_RESIST";
		case 180:
			return "TF_TRAIN_ROBBERY_ROB_IN_COMBAT";
		case 181:
			return "TF_LOANSHARKING";
		case 182:
			return "TF_LS_DONATE";
		case 183:
			return "TF_LS_CONFRONT";
		case 184:
			return "TF_LS_SEARCH";
		case 185:
			return "TF_LS_SKIN";
		case 186:
			return "TF_LS_LOOT";
		case 187:
			return "TF_LS_FIRST_SEARCH";
		case 188:
			return "TF_LS_RETURN_DEBT";
		case 189:
			return "TF_COMPANIONS";
		case 190:
			return "TF_COMPANION_WHEEL";
		case 191:
			return "TF_INVITE_COMPANION";
		case 192:
			return "TF_COMPANION_ACTIVITY_COOL_DOWN";
		case 193:
			return "TF_COMPANION_ACTIVITY_BLOCKED";
		case 194:
			return "TF_COMPANION_PROPERTY_RESTRICTION";
		case 195:
			return "TF_COMPANIONS_REVIVE";
		case 196:
			return "TF_COMPANIONS_INJURED_RETURN_TO_CAMP";
		case 197:
			return "TF_COMPANIONS_ABANDONED";
		case 198:
			return "TF_COMPANION_DRAG";
		case 199:
			return "TF_ITEM_REQUEST_FIRST_TRACKED";
		case 200:
			return "TF_COMPANION_REQUEST_OBTAINED";
		case 201:
			return "TF_COMPANIONS_RETURN_TO_CAMP";
		case 202:
			return "TF_DOG_LEVEL_UP";
		case 203:
			return "TF_CAMP_NO_COMBAT";
		case 204:
			return "TF_TOWN_NO_COMBAT";
		case 205:
			return "TF_TOWN_DISMOUNT";
		case 206:
			return "TF_CAMP_CRAFT_QUICK";
		case 207:
			return "TF_CAMP_DISABLE_COMBAT";
		case 208:
			return "TF_FIRST_RC_APPROACHED";
		case 209:
			return "TF_FIRST_RC_AREA_APPROACHED";
		case 210:
			return "TF_FIRST_RSC_TASK";
		case 211:
			return "TF_FIRST_RSC_TASK_AREA";
		case 212:
			return "TF_FIRST_RC_TASK";
		case 213:
			return "TF_FIRST_RC_NO_TASK";
		case 214:
			return "TF_RCM_FIRST_CARAVAN_CAMP_LETTER";
		case 215:
			return "TF_RCM_CARAVAN_CAMP_LETTER";
		case 216:
			return "TF_JOURNAL_ACCESS0";
		case 217:
			return "TF_JOURNAL_ACCESS1";
		case 218:
			return "TF_JOURNAL_ACCESS2";
		case 219:
			return "TF_FIRST_HERB_FOUND";
		case 220:
			return "TF_COACHROB_INTRO";
		case 221:
			return "TF_SKINNING";
		case 222:
			return "TF_MEAT_SPOIL_SKINNING";
		case 223:
			return "TF_BED";
		case 224:
			return "TF_DEADEYE_1";
		case 225:
			return "TF_EAGLE_EYE";
		case 226:
			return "TF_ROWBOAT";
		case 227:
			return "TF_HUNTING_BLIP";
		case 228:
			return "TF_TRACKING_ZONE_DISCOVERED";
		case 229:
			return "TF_TRACKING_ZONE_AREA_BUSY";
		case 230:
			return "TF_TRACKING_ZONE_COOLDOWN";
		case 231:
			return "TF_AMB_DUEL_START";
		case 232:
			return "TF_AMB_DUEL_CHAL";
		case 233:
			return "TF_AMB_DUEL_CAN_CHAL";
		case 234:
			return "TF_AMB_DUEL_NO_WEAPON";
		case 235:
			return "TF_RECIPE_JOURNAL_ADD";
		case 236:
			return "TF_HERB_JOURNAL_ADD";
		case 237:
			return "TF_HERB_JOURNAL_PROP";
		case 238:
			return "TF_HERB_FULL_JOURNAL_ADD";
		case 239:
			return "TF_BERRY_BLACK_BERRY";
		case 240:
			return "TF_BERRY_EVERGREEN_HUCKLEBERRY";
		case 241:
			return "TF_BERRY_RED_RASPBERRY";
		case 242:
			return "TF_BERRY_WINTERGREEN_BERRY";
		case 243:
			return "TF_HERB_ALASKAN_GINSENG";
		case 244:
			return "TF_HERB_AMERICAN_GINSENG";
		case 245:
			return "TF_HERB_YARROW";
		case 246:
			return "TF_HERB_ENGLISH_MACE";
		case 247:
			return "TF_HERB_MILKWEED";
		case 248:
			return "TF_HERB_VANILLA_FLOWER";
		case 249:
			return "TF_HERB_OLEANDER_SAGE";
		case 250:
			return "TF_HERB_DESERT_SAGE";
		case 251:
			return "TF_HERB_HARRIETUM_OFFICINALIS";
		case 252:
			return "TF_HERB_HUMMINGBIRD_SAGE";
		case 253:
			return "TF_HERB_RED_SAGE";
		case 254:
			return "TF_HERB_VIOLET_SNOWDROP";
		case 255:
			return "TF_HERB_WILD_FEVERFEW";
		case 256:
			return "TF_HERB_BURDOCK_ROOT";
		case 257:
			return "TF_HERB_INDIAN_TOBACCO";
		case 258:
			return "TF_HERB_GOLDEN_CURRANT";
		case 259:
			return "TF_HERB_BLACK_CURRANT";
		case 260:
			return "TF_HERB_PRAIRIE_POPPY";
		case 261:
			return "TF_HORSE_HERB_WILD_CARROTS";
		case 262:
			return "TF_HORSE_HERB_COMMON_BULRUSH";
		case 263:
			return "TF_MUSHROOM_BAY_BOLETE";
		case 264:
			return "TF_MUSHROOM_CHANTERELLES";
		case 265:
			return "TF_MUSHROOM_PARASOL_MUSHROOM";
		case 266:
			return "TF_MUSHROOM_RAMS_HEAD";
		case 267:
			return "TF_SPICE_CREEPING_THYME";
		case 268:
			return "TF_SPICE_OREGANO";
		case 269:
			return "TF_SPICE_WILD_MINT";
		case 270:
			return "TF_HEALTH_XP_ITEM";
		case 271:
			return "TF_DEADEYE_XP_ITEM";
		case 272:
			return "TF_STAMINA_XP_ITEM";
		case 273:
			return "TF_DEADEYE_ITEM_MAX_LEVEL";
		case 274:
			return "TF_HEALTH_ITEM_MAX_LEVEL";
		case 275:
			return "TF_STAMINA_ITEM_MAX_LEVEL";
		case 276:
			return "TF_HEALTH_LEVEL_UP";
		case 277:
			return "TF_DEADEYE_LEVEL_UP";
		case 278:
			return "TF_STAMINA_LEVEL_UP";
		case 279:
			return "TF_TITHE_ENTER_CAMP";
		case 280:
			return "TF_TITHE_FIRST_REQUEST";
		case 281:
			return "TF_TITHE_HAVE_REQUEST";
		case 282:
			return "TF_TITHE_FINISH_REQUEST";
		case 283:
			return "TF_TITHE_FOUND_REQUEST";
		case 284:
			return "TF_TITHE_GIVE_MONEY";
		case 285:
			return "TF_TITHE_GIVE_CARCASS";
		case 286:
			return "TF_TITHE_CRAFT1";
		case 287:
			return "TF_TITHE_CRAFT2";
		case 288:
			return "TF_WAYPOINTS";
		case 289:
			return "TTL_LAW_WITNESS_INV";
		case 290:
			return "TTL_LAW_WITNESS_KNOWN";
		case 291:
			return "TTL_LAW_WITNESS_UNKNOWN";
		case 292:
			return "TTL_LAW_WITNESS_SCARE";
		case 293:
			return "TTL_LAW_WANTED_1";
		case 294:
			return "TTL_LAW_WANTED_2";
		case 295:
			return "TTL_LAW_WANTED_1_GUA";
		case 296:
			return "TTL_LAW_WANTED_2_GUA";
		case 297:
			return "TTL_LAW_EVADE";
		case 298:
			return "TTL_LAW_ARREST";
		case 299:
			return "TTL_LAW_LOITERING";
		case 300:
			return "TTL_LAW_TRESPASSING";
		case 301:
			return "TTL_LAW_INTERROGATE";
		case 302:
			return "TTL_LAW_APPEARANCE_MEMORY";
		case 303:
			return "TTL_LAW_BOUNTY_SPAWN";
		case 304:
			return "TTL_LAW_BOUNTY_RESPAWN";
		case 305:
			return "TTL_LAW_BOUNTY_JAIL";
		case 306:
			return "TTL_PLAYER_ARRESTED";
		case 307:
			return "TTL_LAW_CAPTURED";
		case 308:
			return "TTL_LAW_EXTRA_COPS1";
		case 309:
			return "TTL_LAW_EXTRA_COPS2";
		case 310:
			return "TTL_LAW_LESS_COPS";
		case 311:
			return "TTL_LAW_BOUNTY_SAVED";
		case 312:
			return "TTL_LAW_PURSUIT_END";
		case 313:
			return "TTL_LAW_BOUNTY_POSTED";
		case 314:
			return "TTL_LAW_CRIME_WITH_MASK";
		case 315:
			return "TTL_LAW_CHANGED_CLOTHES";
		case 316:
			return "TTL_LAW_GRABBED_POSTER";
		case 317:
			return "TTL_LAW_JAIL_SENTENCE";
		case 318:
			return "TTL_LAW_JAIL_ESCAPE";
		case 319:
			return "TTL_AGGRO_PED";
		case 320:
			return "TF_WAIT_CAMP_UPGRADE";
		case 321:
			return "TF_WAIT_CAMP_CHORE";
		case 322:
			return "TTL_CAMPING_BUY";
		case 323:
			return "TF_PLAYER_CHORES_1";
		case 324:
			return "TF_PLAYER_CHORES_2";
		case 325:
			return "TF_PLAYER_CHORES_3";
		case 326:
			return "TF_PLAYER_CHORES_START";
		case 327:
			return "TF_PLAYER_CHORES_START_BEECHERS";
		case 328:
			return "TTL_WPN_PLACEEXPLOSIVE";
		case 329:
			return "TF_RARE_FISH";
		case 330:
			return "TTL_FIGHTINT";
		case 331:
			return "TF_CAMPFIRE_OFFER1";
		case 332:
			return "TF_CAMPFIRE_GREET";
		case 333:
			return "TF_SP_GANG_HIDEOUTS";
		case 334:
			return "TF_SP_GANG_CAMPS";
		case 335:
			return "TF_CAMPITEM_REST_OPT";
		case 336:
			return "TF_CAMPFIRE_SIT";
		case 337:
			return "TF_RP_KNOWN_RECIPE";
		case 338:
			return "TF_RP_SPECIAL_HORSE_MEDICINE";
		case 339:
			return "TF_RP_SPECIAL_HORSE_REVIVER";
		case 340:
			return "TF_RP_HORSE_OINTMENT";
		case 341:
			return "TF_RP_SPECIAL_HORSE_STIMULANT";
		case 342:
			return "TF_RP_SUPER_MEAL";
		case 343:
			return "TF_RP_SPECIAL_MEDICINE";
		case 344:
			return "TF_RP_SPECIAL_RESTORATIVE";
		case 345:
			return "TF_RP_SPECIAL_SNAKE_OIL";
		case 346:
			return "TF_RP_SPECIAL_TONIC";
		case 347:
			return "TF_RP_POTENT_HERBIVORE_BAIT";
		case 348:
			return "TF_RP_POTENT_PREDATOR_BAIT";
		case 349:
			return "TF_RP_PREDATOR_BAIT";
		case 350:
			return "TF_RP_DYNAMITE_ARROW";
		case 351:
			return "TF_RP_FIRE_ARROW";
		case 352:
			return "TF_RP_IMPROVED_ARROW";
		case 353:
			return "TF_RP_POISON_ARROW";
		case 354:
			return "TF_RP_SMALL_GAME_ARROW";
		case 355:
			return "TF_RP_VOLATILE_DYNAMITE";
		case 356:
			return "TF_RP_FIRE_BOTTLE";
		case 357:
			return "TF_RP_VOLATILE_FIRE_BOTTLE";
		case 358:
			return "TF_RP_HOMING_TOMAHAWK";
		case 359:
			return "TF_RP_IMPROVED_THROWING_KNIFE";
		case 360:
			return "TF_RP_IMPROVED_TOMAHAWK";
		case 361:
			return "TF_RP_POISON_THROWING_KNIFE";
		case 362:
			return "TF_RP_SPLIT_POINT_AMMO";
		case 363:
			return "TF_RP_EXPRESS_EXPLOSIVE_AMMO";
		case 364:
			return "TF_RP_SHOTGUN_BUCKSHOT_INCENDIARY";
		case 365:
			return "TF_RP_SHOTGUN_SLUG_EXPLOSIVE";
		case 366:
			return "TF_BAIT_HERBIVORE_USED";
		case 367:
			return "TF_BAIT_PREDATOR_USED";
		case 368:
			return "TF_TREASUREMAP_FIRST_FIND";
		case 369:
			return "TF_TREASUREMAP_LS_HORSECHASE";
		case 370:
			return "TF_TREASURE_HUNTER_REMINDER";
		case 371:
			return "TF_DINO_BONES";
		case 372:
			return "TF_DINO_BONES_FIRST_REMINDER";
		case 373:
			return "TF_DINO_BONES_FIRST_REMINDER_STAGE1";
		case 374:
			return "TF_DINO_BONES_LAST_REMINDER";
		case 375:
			return "TF_DINO_BONES_ALL_TURNED_IN";
		case 376:
			return "TF_DINO_BONES_FINGER_BONE";
		case 377:
			return "TF_DINO_BONES_INVITATION_USED";
		case 378:
			return "TF_LEGENDARY_FISH_INVITATION_USED";
		case 379:
			return "TF_LITTLE_EGRET_BEFORE_QUEST";
		case 380:
			return "TF_LITTLE_EGRET_PLUME_TURN_IN";
		case 381:
			return "TF_REDDISH_EGRET_BEFORE_QUEST";
		case 382:
			return "TF_REDDISH_EGRET_PLUME_TURN_IN";
		case 383:
			return "TF_SNOWY_EGRET_BEFORE_QUEST";
		case 384:
			return "TF_SNOWY_EGRET_PLUME_TURN_IN";
		case 385:
			return "TF_HERON_FEATHERS_BEFORE_QUEST";
		case 386:
			return "TF_HERON_FEATHERS_TURN_IN";
		case 387:
			return "TF_SPOONBILL_FEATHERS_BEFORE_QUEST";
		case 388:
			return "TF_SPOONBILL_FEATHERS_TURN_IN";
		case 389:
			return "TF_EXOTIC_FOUND";
		case 390:
			return "TF_GATOR_EGGS_BEFORE_QUEST";
		case 391:
			return "TF_GATOR_EGGS_FOUND";
		case 392:
			return "TF_GATOR_EGGS_TURN_IN";
		case 393:
			return "TF_LEGENDARY_FISH_CAUGHT";
		case 394:
			return "TF_LEGENDARY_FISH_CAUGHT_AFTER_STAGE1";
		case 395:
			return "TF_LEGENDARY_FISH_MAILED_ONE";
		case 396:
			return "TF_LEGENDARY_FISH_MAILED_TEN";
		case 397:
			return "TF_LEGENDARY_FISH_MAILED_ALL";
		case 398:
			return "TF_DINO_BONE_MAILED_ONE";
		case 399:
			return "TF_DINO_BONE_MAILED_FIFTEEN";
		case 400:
			return "TF_DINO_BONE_MAILED_ALL";
		case 401:
			return "TF_ROCK_CARVING_MAILED_ONE";
		case 402:
			return "TF_ROCK_CARVING_MAILED_FIVE";
		case 403:
			return "TF_ROCK_CARVING_MAILED_ALL";
		case 404:
			return "TF_TAXIDERMY_MAILED_ONE";
		case 405:
			return "TF_TAXIDERMY_MAILED_TWO";
		case 406:
			return "TF_TAXIDERMY_MAILED_THREE";
		case 407:
			return "TF_TAXIDERMY_MAILED_FOUR";
		case 408:
			return "TF_TAXIDERMY_MAILED_ALL";
		case 409:
			return "TF_RARE_FISHING_SPOT_FOUND";
		case 410:
			return "TF_RARE_FISHING_SPOT_FOUND_NO_POLE";
		case 411:
			return "TF_RARE_FISHING_SPOT_AFTER_ABIGAIL1";
		case 412:
			return "TF_RARE_ORCHID_ACUNAS_STAR_FOUND";
		case 413:
			return "TF_RARE_ORCHID_CIGAR_FOUND";
		case 414:
			return "TF_RARE_ORCHID_CLAMSHELL_FOUND";
		case 415:
			return "TF_RARE_ORCHID_DRAGONS_MOUTH_FOUND";
		case 416:
			return "TF_RARE_ORCHID_GHOST_FOUND";
		case 417:
			return "TF_RARE_ORCHID_LADY_SLIPPER_FOUND";
		case 418:
			return "TF_RARE_ORCHID_LADY_OF_NIGHT_FOUND";
		case 419:
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER_FOUND";
		case 420:
			return "TF_RARE_ORCHID_NIGHT_SCENTED_FOUND";
		case 421:
			return "TF_RARE_ORCHID_QUEENS_FOUND";
		case 422:
			return "TF_RARE_ORCHID_RAT_TAIL_FOUND";
		case 423:
			return "TF_RARE_ORCHID_SPARROWS_EGG_FOUND";
		case 424:
			return "TF_RARE_ORCHID_SPIDER_FOUND";
		case 425:
			return "TF_RARE_ORCHID_ACUNAS_STAR";
		case 426:
			return "TF_RARE_ORCHID_CIGAR";
		case 427:
			return "TF_RARE_ORCHID_CLAMSHELL";
		case 428:
			return "TF_RARE_ORCHID_DRAGONS_MOUTH";
		case 429:
			return "TF_RARE_ORCHID_GHOST";
		case 430:
			return "TF_RARE_ORCHID_LADY_SLIPPER";
		case 431:
			return "TF_RARE_ORCHID_LADY_OF_NIGHT";
		case 432:
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER";
		case 433:
			return "TF_RARE_ORCHID_NIGHT_SCENTED";
		case 434:
			return "TF_RARE_ORCHID_QUEENS";
		case 435:
			return "TF_RARE_ORCHID_RAT_TAIL";
		case 436:
			return "TF_RARE_ORCHID_SPARROWS_EGG";
		case 437:
			return "TF_RARE_ORCHID_SPIDER";
		case 438:
			return "TF_ROCK_CARVINGS";
		case 439:
			return "TF_ROCK_CARVINGS_CABIN";
		case 440:
			return "TF_ROCK_CARVINGS_FIRST_REMINDER";
		case 441:
			return "TF_ROCK_CARVINGS_FIRST_REMINDER_STAGE1";
		case 442:
			return "TF_ROCK_CARVINGS_LAST_REMINDER";
		case 443:
			return "TF_ROCK_CARVINGS_INVITATION_USED";
		case 444:
			return "TF_TAXIDERMY_INVITATION_USED";
		case 445:
			return "TF_LEGEND_OF_EAST_OUTFIT_UNLOCKED";
		case 446:
			return "TF_LEGEND_OF_EAST_OUTFIT_ACQUIRED";
		case 447:
			return "TF_FULL_AMMO_REINFORCED_EQUIPMENT";
		case 448:
			return "TF_TX_RABBIT_FOUND";
		case 449:
			return "TF_TX_SQUIRREL_FOUND";
		case 450:
			return "TF_TX_CARDINAL_FOUND";
		case 451:
			return "TF_TX_RAT_FOUND";
		case 452:
			return "TF_TX_WOODPECKER_FOUND";
		case 453:
			return "TF_TX_CHIPMUNK_FOUND";
		case 454:
			return "TF_TX_OPOSSUM_FOUND";
		case 455:
			return "TF_TX_ORIOLE_FOUND";
		case 456:
			return "TF_TX_ROBIN_FOUND";
		case 457:
			return "TF_TX_SONGBIRD_FOUND";
		case 458:
			return "TF_TX_SPARROW_FOUND";
		case 459:
			return "TF_TX_TOAD_FOUND";
		case 460:
			return "TF_TX_SKUNK_FOUND";
		case 461:
			return "TF_TX_BULLFROG_FOUND";
		case 462:
			return "TF_TX_CEDARWAXWING_FOUND";
		case 463:
			return "TF_TX_BAT_FOUND";
		case 464:
			return "TF_TX_BLUEJAY_FOUND";
		case 465:
			return "TF_TX_CROW_FOUND";
		case 466:
			return "TF_TX_BEAVER_FOUND";
		case 467:
			return "TF_TX_ALL_INGREDIENTS_FOUND";
		case 468:
			return "TF_TX_FIRST_ORDER_RECEIVED";
		case 469:
			return "TF_TX_FINAL_ORDER_RECEIVED";
		case 470:
			return "TF_TX_ORDER_RECEIVED";
		case 471:
			return "TF_TX_HUNTING_WEAPONS";
		case 472:
			return "TF_CHAL_LOG";
		case 473:
			return "TF_CHAL_LOG_2";
		case 474:
			return "TF_CHAL_MULTIPLE_LOG_UNLOCKED";
		case 475:
			return "TF_CHAL_BANDIT_LOG_UNLOCKED";
		case 476:
			return "TF_CHAL_EXPLORER_LOG_UNLOCKED";
		case 477:
			return "TF_CHAL_GAMBLER_LOG_UNLOCKED";
		case 478:
			return "TF_CHAL_HERBALIST_LOG_UNLOCKED";
		case 479:
			return "TF_CHAL_HORSEMANSHIP_LOG_UNLOCKED";
		case 480:
			return "TF_CHAL_MASTER_HUNTER_LOG_UNLOCKED";
		case 481:
			return "TF_CHAL_SHARPSHOOTER_LOG_UNLOCKED";
		case 482:
			return "TF_CHAL_SURVIVALIST_LOG_UNLOCKED";
		case 483:
			return "TF_CHAL_WEAPONS_EXPERT_LOG_UNLOCKED";
		case 484:
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED";
		case 485:
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED_02";
		case 486:
			return "TF_REINFORCED_HEALTH_TANK";
		case 487:
			return "TF_REINFORCED_STAMINA_TANK";
		case 488:
			return "TF_REINFORCED_DEADEYE_TANK";
		case 489:
			return "TF_EA_LOGGING_HM";
		case 490:
			return "TF_EA_LOGGING_HM_FAIL";
		case 491:
			return "TF_RSC_H_JRN_AD";
		case 492:
			return "TF_RSC_H_JRN_UP";
		case 493:
			return "TF_ANIMAL_NEW_SKIN";
		case 494:
			return "TF_ANIMAL_NEW_PLUCK";
		case 495:
			return "TF_FIRST_SKIN";
		case 496:
			return "TF_FIRST_CARRY_COOK";
		case 497:
			return "TF_LEGENDARY_SKINNING";
		case 498:
			return "TF_LEGENDARY_ABANDONED";
		case 499:
			return "TF_MP_LEGENDARY_FIRST_SKIN";
		case 500:
			return "TF_MP_FIRST_SKIN";
		case 501:
			return "TF_MP_FIRST_ANIMAL_PARTS";
			return "TF_ITEM_BANDANA_WORN";
			return "TF_ITEM_BANDANA_USE";
			return "TF_ITEM_BANDANA_OFF";
			return "TF_MP_RUSTLING_OWNER_DEAD";
			return "TF_PROPERTY_PDOC_COLLECTED";
			return "TF_BINO_SATCHEL";
			return "TF_BINO_AIM";
			return "TF_BINO_ZOOM";
			return "TF_FAST_TRAVEL";
			return "TF_FAST_TRAVEL_COST";
			return "TTL_LAW_UNPAID_BOUNTY";
			return "TF_COMPANION_FOLLOW";
			return "TF_PLACED_DYNAMITE";
			return "TF_GUN_SWAP";
			return "TF_RIFLE_SCOPE";
			return "TF_CIG_CARD_FOUND";
			return "TF_CIG_CARD_FOUND_AFTER_STAGE1";
			return "TF_USEDITEM_FOUND";
			return "TF_CIG_PACK_FOUND";
			return "TF_GUN_OIL_FOUND";
			return "TF_COFFEE_FOUND";
			return "TF_INSTRUMENT_FOUND";
			return "TF_WHITKNIFE_FOUND";
			return "TF_WHITBLOCK_FOUND";
			return "TF_HAIRTONIC_FOUND";
			return "TF_BRDTONIC_REQUIRED";
			return "TF_BRDTONIC_WORNOFF";
			return "TF_HAIRGRS_FOUND";
			return "TF_HAIRGRS_WORNOFF";
			return "TF_SHAVING";
			return "TF_SEASONED_MEAT";
			return "TF_SEASONING_NEEDED";
			return "TF_COFFEE_KIT";
			return "TF_CAMP_ITEMS";
			return "TF_JEWELRY_FOUND";
			return "TF_SHOPROB_INTRO";
			return "TF_SHOPROB_RHDGUN";
			return "TF_SHOP_CATALOG";
			return "TF_SHOP_ILO";
			return "TF_SHOP_ILO_FOREMAN";
			return "TF_SHOP_POST_OFFICE";
			return "TF_SHOP_POST_MP";
			return "TF_SHOP_POST_MP_CAMP";
			return "TF_SHOP_DUAL_BUY";
			return "TF_SHOP_SHELF_INTERACT";
			return "TF_SHOP_NO_CLOTHES";
			return "TF_SHOP_ON_FOOT";
			return "TF_SHOP_TRAPPER_MEET";
			return "TF_SHOP_TRAPPER_WANDER";
			return "TF_SHOP_TRAPPER_LEGENDARY_CRAFT";
			return "TF_SHOP_BUTCHER_HORSE_CARGO";
			return "TF_SHOP_TRAPPER_HORSE_CARGO";
			return "TF_SHOP_PRONGHORN_CATALOGUE";
			return "TF_SHOP_PRONGHORN_GUNSMITH";
			return "TF_SHOP_PRONGHORN_FENCE";
			return "TF_SHOP_PRONGHORN_TRAPPER";
			return "TF_WEAPON_SHOP_UNLOCK";
			return "TF_WEAPON_MOD_UNLOCK";
			return "TF_WEAPON_SHOP_MOD_UNLOCK";
			return "TF_WEAPONS_MULTI_UNLOCK";
			return "TF_SPECIAL_LURES_UNLOCK";
			return "TF_HONOR_HIGH_SHOP";
			return "TF_MP_WHISTLE_CAMP";
			return "TF_MP_INTRO_MISSION";
			return "TF_MP_GANG_SETUP";
			return "TF_MP_GANG_BOUNTY";
			return "TF_MP_BOUNTY_LIMIT_REACHED";
			return "TF_MP_STAT_CHALLENGES";
			return "TF_MP_PVP_SHOWDOWN";
			return "TF_MP_DEADEYE_REPLACEMENT";
			return "TF_MP_DEADEYE_PASSIVE";
			return "TF_MP_RECIPE_JOURNAL_ADD";
			return "TF_MP_HERB_JOURNAL_ADD";
			return "TF_MP_HERB_JOURNAL_PROP";
			return "TF_MP_ALASKAN_GINSENG_NOT_LEARNED";
			return "TF_MP_AMERICAN_GINSENG_NOT_LEARNED";
			return "TF_MP_BURDOCK_NOT_LEARNED";
			return "TF_MP_HUMMINGBIRD_NOT_LEARNED";
			return "TF_MP_SNOWDROP_NOT_LEARNED";
			return "TF_MP_BUY_HORSE_EQUIPMENT";
			return "TF_MP_SKINNING";
			return "TF_MP_REVIVE";
			return "TF_MP_CANT_REVIVE_CARRYING";
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT";
			return "TF_MP_SHOP_HORSE_PROTECTION";
			return "TF_MP_BARBER_HORSE_PROTECTION";
			return "TF_MP_HANDHELD_CATALOUGE";
			return "TF_MP_ABILITY_CARD_SLOT_EMPTY";
			return "TF_MP_LOOTABLES_1";
			return "TF_MP_LOOTABLES_2";
			return "TF_MP_HORSE_REVIVE";
			return "TF_MP_HORSE_REVIVE_NO_ITEM";
			return "TF_MP_BONDING_EARNED_TRAMPLE_ENEMY";
			return "TF_MP_BONDING_EARNED_BOW_KILL";
			return "TF_MP_PLAYER_HORSE_STOLEN";
			return "TF_MP_STABLE_UPKEEP_FEE";
			return "TF_MP_HORSE_TAME_MOUNT";
			return "TF_MP_HORSE_TAME_MOUNTED";
			return "TF_MP_HORSE_TAME_SUCCESS";
			return "TF_MP_HORSE_TAME_BUCKED_OFF";
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD";
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD_ALT";
			return "TF_MP_HORSE_VET_FEES";
			return "TF_MP_CAMP_CRAFTING";
			return "TF_MP_CAMP_NO_SKINNED_ANIMAL";
			return "TF_MP_CAMP_BIGGER_WAGON_NEEDED";
			return "TF_MP_CAMP_WHITE_FLAG_RAISED";
			return "TF_MP_CAMP_WHITE_FLAG_RAISED_LEADER";
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED";
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED_LEADER";
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_RAISE";
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_LOWER";
			return "TF_MP_CAMP_WHITE_FLAG_CONTENT";
			return "TF_MP_CAMP_WHITE_FLAG_TURRET";
			return "TF_MP_CAMP_FOLLOWER_DEAD";
			return "TF_MP_CAMP_SLEEP";
			return "TF_MP_CAMP_CUSTOMIZE";
			return "TF_MP_WEAPON_LOCKER_PURCHASED";
			return "TF_MP_CAMP_DOG_CAMP_RAID_WARN";
			return "TF_MP_CHALLENGE_COMPLETED_AWARD";
			return "TF_MP_XMAS_2019_KRAMPUS_AWARD";
			return "TF_AMBIENT_HORSE_TRADING_AVAILABLE";
			return "TF_FIRST_STOLEN_HORSE_WITH_HORSE_TRADING";
			return "TF_COMPANION_ACTIVITY";
			return "TF_COMPANION_BANK";
			return "TF_CARAVAN_HORSE_DISMOUNT";
			return "TF_CARAVAN_WAGON_DISMOUNT";
			return "TF_CARAVAN_NO_CARRY_DEAD";
			return "TF_CARAVAN_NO_CARRY_HOGTIED";
			return "TF_CARAVAN_BLIP";
			return "TF_CARAVAN_SUPPLIES";
			return "TTL_LAW_DELAYED_RESPONSE";
			return "TTL_LAW_DELAYED_RESPONSE_FUS";
			return "TTL_LAW_BOUNTY_HUNTERS";
			return "TTL_LAW_STATE_BOUNTY";
			return "TTL_LAW_REGION_INCREASE";
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_1";
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_2";
			return "TTL_LAW_RESTRICTED_AREA";
			return "TTL_HIDE_BODY";
			return "TF_CARAVAN_HUNGER";
			return "TF_CARAVAN_STEW_MISSING";
			return "TF_CARAVAN_STEW_ALREADY_SERVED";
			return "TF_CARAVAN_STEW_PLAYER_SERVED";
			return "TF_DISTRICT_CAMP_MAP";
			return "TF_CARAVAN_SHOOTING";
			return "TF_CARAVAN_SHOOTING_BEECHERS";
			return "TF_VIGNETTE_WASH";
			return "TF_PED_INTERACTION";
			return "TF_HERDING_1";
			return "TF_HERDING_2";
			return "TF_HERDING_3";
			return "TF_HERDING_4";
			return "TF_HERDING_STRAGGLER_1";
			return "TF_HERDING_STRAGGLER_2";
			return "TF_BADGER_CLAW_TRINKET";
			return "TF_GRY3_RHODES_LAW";
			return "TF_RDTC1_GOLD";
			return "TF_RDTC1_FIRST_PERSON_REMINDER";
			return "TF_CARAVAN_MISSION_BLIPS";
			return "TF_INSPECTION_TOGGLE_VIEW";
			return "TF_HONOR_GAIN_CHAPTER_2_BOUNTY_1";
			return "TF_HONOR_CHAPTER_3_MARY_0_2";
			return "TF_HONOR_LOSS_CHAPTER_3_MARY_1";
			return "TF_HONOR_GAIN_CHAPTER_3_MARY_1";
			return "TF_HONOR_GAIN_CHAPTER_4_NATIVE_0";
			return "TF_HONOR_GAIN_CHAPTER_4_SUSAN_1";
			return "TF_HONOR_LOSE_CHAPTER_4_SUSAN_1";
			return "TF_HONOR_OPTIONAL_MISSION";
			return "TF_SCENT_BLOCKER_USED";
			return "TF_SCENT_BLOCKER_EXPIRED";
			return "TF_SATCHEL_FULL";
			return "TF_SATCHEL_FULL_ANIMAL";
			return "TF_INCREASE_POUCH_CAPACITY";
			return "TF_DEADEYE_EMPTY";
			return "TF_DEADEYE_UNLOCK_LEVEL_2";
			return "TF_DEADEYE_UNLOCK_LEVEL_3";
			return "TF_DEADEYE_UNLOCK_LEVEL_4";
			return "TF_DEADEYE_UNLOCK_LEVEL_5";
			return "TF_DEADEYE_UNLOCK_LEVEL_2_REMINDER";
			return "TF_DEADEYE_UNLOCK_LEVEL_3_REMINDER";
			return "TF_DEADEYE_UNLOCK_LEVEL_4_REMINDER";
			return "TF_DEADEYE_UNLOCK_LEVEL_5_REMINDER";
			return "TF_FORTIFY_TANK";
			return "TF_FORTIFY_CORE";
			return "TF_MISSION_AREA_BLIP";
			return "TF_ALT_AMMO";
			return "TF_COMPASS";
			return "TF_NO_RADAR";
			return "TF_VIEW_PHOTOS";
			return "TF_PICK_HERB";
			return "TF_CARAVAN_HITCHED_HORSE";
			return "TF_CARAVAN_HITCHED_HORSE_EXISTS";
			return "TF_CARAVAN_CRAFTING_FIRE";
			return "TF_BEECHERS_CRAFTING_FIRE";
			return "TF_STUDY_BINOC";
			return "TF_MISSIONS_LOCKED_WANTED";
			return "TF_AIM_AMBUSH";
			return "TF_ROB_AMBUSH";
			return "TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES";
			return "TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD";
			return "TF_CAMERA_ITEM";
			return "TF_CAMP_CARRIABLES_NO_CORPSES";
			return "TF_CAMP_CARRIABLES_NO_CORPSES_RANCH";
			return "TF_CAMP_CARRIABLES_PEARSON";
			return "TF_CAMP_CARRIABLES_UNCLE";
			return "TF_WEAPON_FAMILIARITY";
			return "TF_DIFFERENT_HORSES";
			return "TF_PLAY_SPECIAL";
			return "TF_PLAY_ULTIMATE";
			return "TF_GANG_TAKE";
			return "TF_MP_LB_DPAD";
			return "TF_MP_LB_HLP";
			return "TF_MP_IC_EWC";
			return "TF_MP_IC_FTB";
			return "TF_MP_IC_WOC_FFA";
			return "TF_MP_IC_WOC_TEAM";
			return "TF_MP_IC_TT";
			return "TF_MP_IC_SO";
			return "TF_MP_IC_TSO";
			return "TF_MP_IC_GR_FFA";
			return "TF_MP_IC_GR_TEAM";
			return "TF_MP_STD_RACE";
			return "TF_MP_OPEN_RACE";
			return "TF_MP_FL_OL";
			return "TF_MP_FL_GS";
			return "TF_MP_FL_HOR";
			return "TF_MP_FL_HOR_R";
			return "TF_MP_FL_HOR_C";
			return "TF_MP_FL_HOR_J";
			return "TF_MP_FL_HOR_END";
			return "TF_MP_BONUS_EXCLUSIVE";
			return "TF_MP_BONUS_SPECIAL";
			return "TF_MP_XP_BONUS_ULTIMATE";
			return "TF_MP_COOP_HELP_TEXT_WITH_POSSE";
			return "TF_MP_COOP_HELP_TEXT_SOLO";
			return "TF_MP_WANTED_LOOTING";
			return "TF_MP_SATCHEL_FULL";
			return "TF_MP_SATCHEL_FULL_ANIMAL";
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT1";
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT2";
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT3";
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT4";
			return "TF_MP_BOUNTY_LOW";
			return "TF_MP_BOUNTY_MEDIUM";
			return "TF_MP_BOUNTY_HIGH";
			return "TF_MP_BOUNTY_FOLLOW_UP";
			return "TF_MP_BOUNTY_PAID_OFF";
			return "TF_MP_BOUNTY_HUNTERS_KILLED";
			return "TF_MP_BOUNTY_HUNTERS_ESCAPED";
			return "TF_MP_TARGET_RACE";
			return "TF_MP_IC_CTF_DROP";
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT_LB";
			return "TF_MP_DAILY_CHALLENGES_FIRST_TIME";
			return "TF_MP_BOUNTY_HUNTERS_CANT_PAY";
			return "TF_MP_NOTORIETY_FIRST_TIME";
			return "TF_MP_SHOP_NO_INTERACT_BANDANA";
			return "TF_MP_REMOVE_DEFENSIVE_MODE";
			return "TF_MP_CHARGES_PRESSED";
			return "TF_MP_PRESSED_CHARGES";
			return "TF_MP_KILLED_DEFENSIVE_PLAYER";
			return "TF_MP_DEFENSIVE_FORCE";
			return "TF_MP_DEFENSIVE_FIRST";
			return "TF_MP_LEMAT_REVOLVER";
			return "TF_MP_HELP_HOSTILITY_RESET";
			return "TF_MP_DEFEND_AGAINST_HOSTILE_PLAYERS";
			return "TF_MP_HOSTILE_JOINED_POSSE";
			return "TF_MP_SHOP_TRAVELLING_SALESMAN_CAMP";
			return "TF_MP_COLLECTORS_BAG";
			return "TF_MP_COLLECTIBLE_MAP_RANDOM";
			return "TF_MP_COLLECTIBLE_MAP";
			return "TF_MP_COLLECTIBLE_WEEKLY_AVAILABLE";
			return "TF_MP_COLLECTIBLE_OPEN_WEEKLY_LIST";
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_INTRO";
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_INTRO";
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_INTRO";
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_INTRO";
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_INTRO";
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_INTRO";
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_INTRO";
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_INTRO";
			return "TF_MP_COLLECTIBLE_BOTTLES_INTRO";
			return "TF_MP_COLLECTIBLE_COINS_INTRO";
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_INTRO";
			return "TF_MP_COLLECTIBLE_ARROWHEADS_INTRO";
			return "TF_MP_COLLECTIBLE_FLOWERS_INTRO";
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_INTRO";
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_BOTTLES_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_COINS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_ARROWHEADS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_FLOWERS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_SET_COMPLETE";
			return "TF_MP_COLLECTIBLE_BUY_BAG";
			return "TF_MP_COLLECTIBLE_FIND_SALESWOMAN";
			return "TF_MP_COLLECTIBLE_FOUND_CONDOR_EGG";
			return "TF_MP_COLLECTIBLES_COLLECTED";
			return "TF_MP_NB_RIVAL_COLLECTOR_RC_KILLED";
			return "TF_MP_NB_GRAVEROBBER_INTRO";
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL";
			return "TF_MP_NB_GRAVEROBBER_DIGGING_SITES";
			return "TF_MP_NB_GRAVEROBBER_NO_FIND";
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL_POSSE";
			return "TF_LEARN_RECIPE";
			return "TF_HORSE_CALL_HORSE_VEHICLE";
			return "TF_VEHICLE_FULL_FISH";
			return "TF_VEHICLE_UNSUPPORTED_FISH";
			return "TF_MP_METAL_DETECTOR";
			return "TF_MP_BROKE_EGG_IN_NEST";
			return "TF_MP_SKILL_POTENTIAL";
			return "TF_MP_SKILL_INTUITION";
			return "TF_MP_SKILL_DIVNATION";
			return "TF_MP_SKILL_ASSISTANCE";
			return "TF_MP_SKILL_COLLECTOR_EVENTS";
			return "TF_MP_SKILL_EAGLE_EYE_PLUS";
			return "TF_MP_SKILL_FOCUS";
			return "TF_MP_SKILL_PERCEPTION";
			return "TF_MP_SKILL_DUCKING_INTRO";
			return "TF_MP_SKILL_DUCKING";
			return "TF_MP_SKILL_BOUNTY_EVENTS";
			return "TF_MP_SKILL_BOUNTY_MEDIUM";
			return "TF_MP_SKILL_BOUNTY_HARD";
			return "TF_MP_SKILL_BOUNTY_PLAYER";
			return "TF_MP_SKILL_EFFICIENCY";
			return "TF_MP_SKILL_AWARENESS";
			return "TF_MP_SKILL_PROTECTION";
			return "TF_MP_SKILL_DOG_WARNING";
			return "TF_MP_SKILL_DOG_WARNING_NO_DOG";
			return "TF_MP_SKILL_TRADER_EVENTS";
			return "TF_MP_SKILL_GUN_TRICK_FIRST";
			return "TF_MP_SKILL_GUN_TRICK";
			return "TF_MP_SKILL_GUN_TRICK_DUAL";
			return "TF_MP_SKILL_TONIC_INCREASE";
			return "TF_MP_SKILL_KIT_INCREASE";
			return "TF_MP_SKILL_PROVISION_INCREASE";
			return "TF_MP_SKILL_VALUABLES_INCREASE";
			return "TF_MP_SKILL_INGREDIENTS_INCREASE";
			return "TF_MP_SKILL_HUNTING_MAT_INCREASE";
			return "TF_MP_GET_METAL_DETECTOR";
			return "TF_MP_GET_IMPROVED_BINOCULARS";
			return "TF_MP_GET_SHOVEL";
			return "TF_HUNTING_WAGON_INTRO";
			return "TF_BOUNTY_WAGON_INTRO";
			return "TF_MP_BOUNTY_WAGON_ON_MISSION";
			return "TF_MP_BOUNTY_WAGON_DESTROYED_ON_MISSION";
			return "TF_MP_BOUNTY_WAGON_STOW";
			return "TF_HUNTING_WAGON_STOW_INTRO";
			return "TF_TRADDER_LETTER_INTRO";
			return "TF_MP_FL_TRA_COL";
			return "TF_MP_FL_TRA_COLA";
			return "TF_MP_FL_TRA_READ";
			return "TF_MP_FL_TRA_MEET";
			return "TF_MP_CROSS_PROMO_GTAO_CARDS";
			return "TF_MP_CROSS_PROMO_GTAO_CARDS_PONCHO";
			return "TF_MP_CROSS_PROMO_GTAO_MASK";
			return "TF_MP_START_MOONSHINER";
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN1";
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN2";
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN1";
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN2";
			return "TF_MP_FL_GVO_DONE_NONE_REMAIN";
			return "TF_MP_FL_WEAPON_QUICK_SWAP_ASSIGN";
			return "TF_MP_FL_WEAPON_QUICK_SWAP_HOSLTER";
			return "TF_MP_FL_MOONSHINER_PROPERTY_MOVED";
			return "TF_MP_MOONSHINER_ENTER_PROPERTY";
			return "TF_MP_MOONSHINER_FIRST_SETUP_COMPLETE";
			return "TF_MP_MOONSHINER_BUSINESS_READY1";
			return "TF_MP_MOONSHINER_BUSINESS_READY2";
			return "TF_MP_MOONSHINER_NO_XP";
			return "TF_MP_MOONSHINER_GATING_ITEM_NOT_BOUGHT";
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED";
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED2";
			return "TF_MP_MOONSHINER_PROPERTY_SELECTED_POSSE";
			return "TF_MP_MOONSHINER_FIRST_TIME_GOT_DRUNK";
			return "TF_MP_SKILL_MOONSHINE_FLAVOUR";
			return "TF_MP_SKILL_UNLOCKED";
			return "TF_MP_MOONSHINER_DANCE_SHORTCUTS";
			return "TF_MP_MOONSHINER_DANCE_INSTRUCT";
			return "TF_MP_MOONSHINER_APPROACH";
			return "TF_MP_MOONSHINER_THEME_CHANGED";
			return "TF_MP_MOONSHINER_BAR_OPEN";
			return "TF_MP_MOONSHINER_STANDARD_MOONSHINE_STOCK";
			return "TF_MP_MOONSHINER_BARTENDING_AVAILABLE";
			return "TF_MP_MOONSHINER_PLAYER_TENDING_BAR";
			return "TF_MP_MOONSHINER_BAND_INTRO";
			return "TF_MP_MOONSHINER_BAND_WRAP_UP";
			return "TF_MP_MOONSHINE_JUG";
			return "TF_MP_MOONSHINE_LAST_BATCH";
			return "TF_MP_MOONSHINE_NOT_POSSE_LEADER";
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P1";
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P2";
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON";
			return "TF_MP_MOONSHINE_MAGGIE_NO_BOOT";
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON_OR_BOOT";
			return "TF_MP_MOONSHINE_NOT_ELIGIBLE_FROM_LANDING";
			return "TF_MP_MOONSHINE_USE_CINEMATIC_CAM";
			return "TF_MP_MOONSHINE_STORY_MISSIONS";
			return "TF_MP_MOONSHINE_LOWEST_MASH_PRICE";
			return "TF_MP_NATURALIST_INTRO_HARRIET";
			return "TF_MP_NATURALIST_INTRO_GUS";
			return "TF_MP_NATURALIST_ROLE_INTRO";
			return "TF_MP_NATURALIST_HARRIETS_SHOP";
			return "TF_MP_NATURALIST_COMPENDIUM";
			return "TF_MP_NATURALIST_COMPENDIUM2";
			return "TF_MP_NATURALIST_COMPENDIUM3";
			return "TF_MP_NATURALIST_COMPENDIUM4";
			return "TF_MP_NATURALIST_COMPENDIUM5";
			return "TF_MP_NATURALIST_COMPENDIUM6";
			return "TF_MP_NATURALIST_BUY_VARMINT_RIFLE";
			return "TF_MP_NATURALIST_HARRIET_CLOSED";
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_PRE_INTRO";
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_POST_INTRO";
			return "TF_MP_NATURALIST_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_FARMLAND_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_DESERT_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_BAYOU_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_MOUNTAIN_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_FOREST_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_LEGMELANISTIC_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_LEGALBINO_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_LEGREDBLOND_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_LEGPATTERN_GROUP_COMPLETE";
			return "TF_MP_NATURALIST_COMMON_GROUP_COMPLETE";
			return "TF_MP_VEHICLE_APPROACHING_CLEANUP";
			return "TF_MP_TRANQUILZER_AMMO";
			return "TF_MP_KILL_TRANQUILZER_AMMO";
			return "TF_MP_NATURALIST_MAX_SAMPLES";
			return "TF_MP_NATURALIST_REVIVE_NO_ITEM";
			return "TF_MP_NATURALIST_NO_SMPL_FIRE";
			return "TF_MP_NATURALIST_NO_SKIN_SMPLD";
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_1";
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_2";
			return "TF_MP_FIRST_LEGENDARY_ANIMAL_PARTS";
			return "TF_MP_FIRST_ANIMAL_PARTS_TRADER";
			return "TF_MP_FIRST_SKIN_TRADER";
			return "TF_MP_LEGENDARY_ANIMAL_DAMAGED_UNCLEANLY";
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_FAILED";
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_UNCLEAR_RESPONSE";
			return "TF_MP_ADVANCED_CAMERA_USED";
			return "TF_MP_NATURALIST_SONY_EXCLUSIVE";
			return "TF_MP_MP007_SONY_EXCLUSIVE_LOGIN";
			return "TF_MP_CUTSCENE_CANCELED_FROM_MISSION";
			return "TF_MP_ITEM_FULL_SPECIFIC";
			return "TF_MP_ITEM_FULL_GENERIC";
			return "TF_MP_ANIMAL_CONTROL_CANCEL_FOR_MISSION";
			return "TF_MP_TRADER_RESUPPLY_INITIATED";
			return "TF_MP_TRADER_RESUPPLY_COMPLETED";
			return "TF_MP_HARDCORE_SERIES_INFO_0";
			return "TF_MP_HARDCORE_SERIES_INFO_1";
			return "TF_MP_NATURALIST_HARRIET_KILL_ANIMALS";
			return "TF_MP_CHALLENGES_ROLE_DAILY_LIMIT";
			return "TF_MP_UPGRADE_BOUNTY_LICENSE";
			return "TF_MP_UPGRADE_BOUNTY_LICENSE_PRE_CUTSCENE";
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD";
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD_2";
			return "TF_MP_SKILL_DYNAMIC_MISSIONS";
			return "TF_MP_INTRO_HORSE_VOUCHER";
			return "TF_MP_INTRO_HORSE_VOUCHER_REMINDER";
			return "TF_MP_CHALLENGES_STREAK_ONE_TIME_RESET";
			return "TF_MP_CHALLENGES_STREAK_COMPLETE_RESET";
			return "TF_MP_CHALLENGES_ROLE_BOUNTY_HUNTER_011";
			return "TF_MP_CLOUD_LETTER_TELEGRAM_COLLECTED";
			return "NUM_CURRENT_TUTORIALS";
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

bool func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_38.f_3538)
	{
		if (Global_38.f_3538[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_38.f_3538[iVar0 /*3*/]);
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_65(iParam0, 0), " Seconds ", iVar2);
			DEBUG::_0x1B08D1EB9D8C4931(136, 105, " iTimesRun ", Global_38.f_3538[iVar0 /*3*/].f_1, " iMaxRun ", iVar3);
			if (Global_38.f_3538[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904703.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_67(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_68(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_69()
{
	if (!func_86())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

char* func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UCM_PRESS";
		case 1:
			return "UCM_TIMED_PRESS";
		case 2:
			return "UCM_RELEASE";
		case 3:
			return "UCM_HOLD";
		case 4:
			return "UCM_METERED";
		case 5:
			return "UCM_METER_STANDARD_TIME";
		case 6:
			return "UCM_AUTO_FILL";
		case 7:
			return "UCM_AUTO_FILL_WITH_DECAY";
		case 8:
			return "UCM_MASH";
		case 9:
			return "UCM_MASH_AUTO_FILL";
		case 10:
			return "UCM_MASH_RESISTANCE";
		case 11:
			return "UCM_MASH_RESISTANCE_CAN_FAIL";
		case 12:
			return "UCM_MASH_RESISTANCE_DYNAMIC";
		case 13:
			return "UCM_MASH_RESISTANCE_DYNAMIC_CAN_FAIL";
		case 14:
			return "UCM_MASH_INDEFINITELY";
		case 15:
			return "UCM_ROTATE";
		case 16:
			return "UCM_TARGET_METER";
		case 17:
			return "UCM_NONE";
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

bool func_71(int iParam0)
{
	return func_47(iParam0, 2);
}

bool func_72(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_51(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_76(bParam0, 0));
		return false;
	}
	iVar0 = func_52(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_87(bParam0, 1399091007))
	{
		func_88(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_76(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

bool func_73(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_84(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_89(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_74(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", iParam1, " Size: ", iParam3);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", iParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool func_75(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

var func_76(bool bParam0, int iParam1)
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

int func_77(int iParam0)
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

int func_78(bool bParam0)
{
	struct<2> Var0;

	if (!func_51(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_79(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case -28107610:
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_LAYER_TYPE_FROM_NONE_LAYER] Failed none layer for hash: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

int func_80(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_90(iParam1, 0));
	return -1;
}

int func_81(bool bParam0)
{
	int iVar0;

	iVar0 = func_78(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		case 1115104855:
			return -2118203104;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_76(bParam0, 0));
	return 0;
}

char[] func_82(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char[] cVar15[8];

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_91(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_93(&Var0, func_92(0));
	}
	if (!func_94(&Var0, &iVar14, &cVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_76(bParam0, 0));
		return 0;
	}
	func_77(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", cVar15, " of item ", func_76(bParam0, 0));
	return cVar15;
}

int func_83(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_96(func_95(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_84(bool bParam0)
{
	if (func_97() == -1)
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

struct<4> func_85(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_98(bParam0, bParam1, 0) };
	return func_99(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_86()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_87(bool bParam0, bool bParam1)
{
	if (!func_51(bParam0, 0))
	{
		return func_100(func_95(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_101(bParam1, 0), " for item ", func_76(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

void func_88(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

var func_89(bool bParam0, int iParam1)
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

char* func_90(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137717153:
			return "MPC_OVERLAY_LAYER_END";
		case -2118203104:
			return "MPC_OVERLAY_LAYER_FACIAL_HAIR";
		case -2056583192:
			return "MPC_OVERLAY_LAYER_FOUNDATION";
		case -1811760631:
			return "MPC_OVERLAY_LAYER_HEAD_HAIR";
		case -1180698265:
			return "MPC_OVERLAY_LAYER_COMPLEXION";
		case -1177453988:
			return "MPC_OVERLAY_LAYER_ROOT";
		case -875805376:
			return "MPC_OVERLAY_LAYER_EYESHADOW";
		case -768760704:
			return "MPC_OVERLAY_LAYER_LIPSTICK";
		case -559080197:
			return "MPC_OVERLAY_LAYER_FACE_PAINT";
		case -487028314:
			return "MPC_OVERLAY_LAYER_COMPLEXION_2";
		case -340627321:
			return "MPC_OVERLAY_LAYER_EYELINER";
		case 0:
			return "MPC_OVERLAY_LAYER_INVALID";
		case 12857284:
			return "MPC_OVERLAY_LAYER_SKIN_MOTTLING";
		case 241235545:
			return "MPC_OVERLAY_LAYER_FRECKLES";
		case 299749022:
			return "MPC_OVERLAY_LAYER_AGEING";
		case 1015239729:
			return "MPC_OVERLAY_LAYER_BLUSHER";
		case 1089431066:
			return "MPC_OVERLAY_LAYER_EYEBROWS";
		case 1285634184:
			return "MPC_OVERLAY_LAYER_GRIME";
		case 1301555144:
			return "MPC_OVERLAY_LAYER_SPOTS";
		case 1827902148:
			return "MPC_OVERLAY_LAYER_MOLES";
		case 1858448324:
			return "MPC_OVERLAY_LAYER_SCAR";
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

struct<14> func_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_76(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_89(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_89(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_89(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_102(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_103(iParam6, 0));
	}
	return Var0;
}

struct<4> func_92(bool bParam0)
{
	int iVar0;

	iVar0 = func_84(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_99(923904168, func_104(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_99(923904168, func_104(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_99(923904168, func_104(bParam0), -740156546, 0);
}

void func_93(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_94(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_84(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_95(bool bParam0)
{
	return bParam0;
}

bool func_96(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

int func_97()
{
	return Global_1572887.f_13;
}

struct<5> func_98(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_104(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_52(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_76(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_103(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_99(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_92(bParam1) };
			if (bParam2 && func_105(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_106(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_106(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_107(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_108(bParam1) };
			switch (func_78(bParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_109(bParam0, -1823706425))
			{
				Var0 = { func_99(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_109(bParam0, -1483207246))
			{
				Var0 = { func_99(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_99(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_109(bParam0, -1653629781))
			{
				Var0 = { func_99(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_110(Var0, &Var28, bParam1, 0, -1))
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to fetch CHARACTER item info for ", UNK_0xD2E4270E5D98EEE4(&Var0));
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_109(bParam0, -1653629781))
			{
				Var0 = { func_99(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_76(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_76(bParam0, 0), ": ", func_89(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_99(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_51(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_76(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_84(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_100(bool bParam0, bool bParam1)
{
	if (!func_96(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_101(bParam1, 0), " for bundle ", func_111(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_101(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(343635439);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

var func_102(bool bParam0, int iParam1)
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

char* func_103(int iParam0, int iParam1)
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

struct<4> func_104(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_84(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_99(joaat("CHARACTER"), func_112(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_99(joaat("CHARACTER"), func_112(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_99(joaat("CHARACTER"), func_112(), -1591664384, bParam0);
}

bool func_105(bool bParam0, bool bParam1)
{
	if (func_78(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_113();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_106(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_114(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_107(bool bParam0, var uParam1, bool bParam2)
{
	var uVar0;

	if (func_115(bParam0, &uVar0, uParam1, bParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_108(bool bParam0)
{
	int iVar0;

	iVar0 = func_84(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_99(271701509, func_104(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_99(271701509, func_104(bParam0), 12999093, 0);
}

bool func_109(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_78(bParam0);
	if (bVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(bVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bVar1, iVar2, &iVar0))
		{
			if (func_116(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_110(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_117(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_111(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1896562390);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

struct<4> func_112()
{
	struct<4> Var0;

	return Var0;
}

bool func_113()
{
	return (func_118(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_119(func_99(joaat("WARDROBE"), func_104(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_114(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_51(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_83(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_76(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_76(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_89(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_99(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_76(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_84(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_76(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_84(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_76(bParam0, 0));
	}
	return iVar0;
}

bool func_115(bool bParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_84(0);
	*iParam1 = { func_99(bParam0, func_92(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_76(bParam0, 0), " eSlot: ", func_89(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, uParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_76(bParam0, 0));
		return false;
	}
	return true;
}

bool func_116(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			DEBUG::_0x4DC69742196F818A(8, 158, "[ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_WITH_SCRIPT_VALIDATION] SLOTID_WEAPON_LONGARM_WRAP_TINT blocked on weapon item");
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

bool func_117(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_84(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_76(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_89(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_118(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_120(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_84(bParam1), bParam0, bParam3);
}

int func_119(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_121(&uParam0, bParam4, bParam5, iParam6);
}

bool func_120(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_121(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_122(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_76(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_122(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_84(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_89(bParam1, 0));
		return false;
	}
	if (!func_117(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_89(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_76(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_89(bParam1, 0));
	return true;
}

