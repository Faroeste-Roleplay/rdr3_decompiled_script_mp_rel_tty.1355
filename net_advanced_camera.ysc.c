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
	struct<62> Local_15 = { 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	bool bVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA] HAS_FORCE_CLEANUP_OCCURRED!");
		func_1(&Local_15, 0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMREA] script started");
	bVar0 = true;
	while (bVar0)
	{
		if (func_2(128) || func_3(&Local_15))
		{
			bVar0 = false;
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (func_4() || func_5())
			{
				if (!func_2(8192))
				{
					if (!func_6(&Local_15, 4))
					{
						func_7(Local_15.f_28);
					}
					func_8(0);
					func_9(8192);
				}
			}
		}
		else if (func_4() || func_5())
		{
			if (func_2(8192))
			{
				if (!func_6(&Local_15, 4))
				{
					func_10(Local_15.f_28);
				}
				func_11(0);
				func_12(8192);
			}
		}
		func_13(&Local_15);
		func_14();
		func_15();
		func_16(&Local_15);
		switch (func_17(&Local_15))
		{
			case 0:
				func_18();
				func_19();
				func_20(&Local_15);
				func_21();
				func_22();
				func_23();
				func_9(256);
				func_24(&Local_15);
				func_25(&Local_15, 1);
				break;
			case 1:
				func_19();
				if (func_26(&Local_15))
				{
					func_24(&Local_15);
					func_25(&Local_15, 2);
				}
				break;
			case 2:
				func_19();
				if (func_27(&Local_15))
				{
					func_28(948, 0);
					func_29(&Local_15);
					func_30(&Local_15);
					func_31(&Local_15, 0);
					func_25(&Local_15, 3);
				}
				break;
			case 3:
				if (!func_32())
				{
					func_33(&Local_15);
				}
				func_34(&(Local_15.f_61));
				func_35(&(Local_15.f_61));
				func_36(&Local_15);
				func_37(&Local_15);
				func_38(&Local_15);
				if (func_39(Local_15.f_5[12], 1))
				{
					func_40(20);
					func_25(&Local_15, 4);
				}
				if (func_41(&Local_15))
				{
					if (func_42(&Local_15))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_LOCAL_STATE_UPDATE] you just took a picture");
						func_43(&Local_15, 0);
					}
				}
				break;
			case 4:
				func_1(&Local_15, 1);
				func_25(&Local_15, 5);
				break;
			case 5:
				if (func_44(Global_33, 0, 1, 0) != 332793555)
				{
					func_12(256);
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_15, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, bool bParam1)
{
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
	GRAPHICS::_0x9F6D859C80708B26(0, 1);
	if (func_45(uParam0->f_5[0]))
	{
		HUD::_UIPROMPT_REMOVE_GROUP(func_46(uParam0->f_5[0]), -1469232623);
	}
	if (func_45(uParam0->f_5[12]))
	{
		HUD::_UIPROMPT_REMOVE_GROUP(func_46(uParam0->f_5[12]), -1469232623);
	}
	func_47(uParam0);
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__CLEANUP__ADVANCED_CAMERA] Player is using a scenario, clearing ped tasks!");
		PED::_0xF1C03A5352243A30(Global_33);
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
	}
	func_23();
	func_48(uParam0);
	func_49(uParam0);
	if (func_50(Global_33, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__CLEANUP__ADVANCED_CAMERA] player died. We are setting g_bForceCameraAway to kill the camera on respawn.");
		Global_1959060 = 1;
	}
	func_7(uParam0->f_28);
	func_51(uParam0->f_28);
	func_8(2);
	func_52(2);
	func_8(0);
	func_52(0);
	func_53(1);
	func_54(&(uParam0->f_5));
	func_55(uParam0);
	func_56(&(uParam0->f_61));
	func_57();
	if (bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__CLEANUP__ADVANCED_CAMERA] Swapping weapons!");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Global_33, 1, 1, 0, 0);
	}
	DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__CLEANUP__ADVANCED_CAMERA] advanced camera cleanup complete");
}

bool func_2(int iParam0)
{
	return func_58(Global_1280543, iParam0);
}

bool func_3(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (Global_1959060)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] g_bForceCameraAway was set ");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1959060 = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_1120494[iVar0 /*2116*/].f_14 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Bounty board active. Quitting!");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		iVar0++;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING(Global_33) && !PED::IS_PED_ON_MOUNT(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(24, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is swimming. Submerged level is ", ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33));
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::_0x7FC84E85D98F063D(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is running an animal interaction. Quitting!");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::_IS_PED_LASSOED(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is lassoed. Quitting!");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::_IS_PED_CLIMBING_LADDER(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is climbing a ladder. Quitting!");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_IN_MELEE_COMBAT(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is in melee combat. Quitting!");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_FALLING(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: player is falling, quitting...");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_RAGDOLL(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: player is knocked over, quitting...");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
	}
	if (!func_59(332793555, 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player doesn't have the camera satchel item, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] player is dead...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940410.f_38 = joaat("WEAPON_UNARMED");
		return true;
	}
	if (!func_60(Global_33, 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player not active, quitting...");
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] player does not exist, or was injuurd...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_61(0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is using shop, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (Global_1957175.f_1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is using wardrobe, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_62())
	{
		if ((func_63(16) || func_63(37)) || func_64(Global_1915867.f_20241.f_1))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player in shop, but is Pearson, Moonshine Property or outdoors.");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player in shop, quitting...");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
	}
	if (PED::_0x336B3D200AB007CB(Global_33, ENTITY::GET_ENTITY_COORDS(Global_33, true, false), 10f, 256) > 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is being attacked by an animal, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_65())
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Can't use camera with satchel open, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player not playing, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_33, true)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Can't use camera in vehicle, quitting...");
		func_66("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (Global_1940410.f_52)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player was just hit by a poison bottle...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player on fire, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player being grappled, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_44(Global_33, 0, 1, 0) != 332793555)
	{
		switch (func_67(uParam0))
		{
			case 0:
				DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is not holding the camera in mode: NET_ADVANCED_CAMERA_MODE_HOLDING");
				return true;
			case 1:
				DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__GET__PUT_CAMERA_AWAY] Player is not holding the camera in mode: NET_ADVANCED_CAMERA_MODE_FIRST_PERSON");
				return true;
			case 2:
				break;
		}
	}
	return false;
}

bool func_4()
{
	return func_2(32);
}

bool func_5()
{
	return func_2(64);
}

bool func_6(var uParam0, int iParam1)
{
	return func_58(uParam0->f_55, iParam1);
}

void func_7(int iParam0)
{
	func_69(func_68(iParam0));
}

void func_8(int iParam0)
{
	func_69(func_70(iParam0));
}

void func_9(int iParam0)
{
	func_71(&Global_1280543, iParam0);
}

void func_10(int iParam0)
{
	func_72(func_68(iParam0));
}

void func_11(int iParam0)
{
	func_72(func_70(iParam0));
}

void func_12(int iParam0)
{
	func_73(&Global_1280543, iParam0);
}

void func_13(var uParam0)
{
	if (func_17(uParam0) >= 0 && func_17(uParam0) <= 3)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (func_74(PLAYER::PLAYER_ID(), 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			}
		}
	}
	func_75();
	switch (func_67(uParam0))
	{
		case 0:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_DOF"), false);
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PED::SET_PED_RESET_FLAG(Global_33, 21, true);
			if (func_76(uParam0->f_5[7], 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -310714049, false);
			}
			else if (func_76(uParam0->f_5[8], 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1089155097, false);
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
			break;
	}
	if (func_67(uParam0) != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_77(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
}

void func_14()
{
	func_78(2);
	func_78(4);
	func_78(8);
	func_78(16);
	func_78(32);
	func_78(32768);
	func_78(65536);
	func_78(1048576);
	func_78(128);
	func_78(256);
	func_78(512);
	func_78(1024);
	func_78(2048);
	func_78(1);
	func_78(4096);
	func_78(16384);
}

void func_15()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(12);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(15);
}

void func_16(var uParam0)
{
	int iVar0;

	if (!func_6(uParam0, 131072))
	{
		iVar0 = GRAPHICS::_0xB28894CD7408BD0C();
		switch (iVar0)
		{
			case 1:
				break;
			case 2:
				break;
			case 0:
				uParam0->f_25 = func_79();
				uParam0->f_26 = func_80();
				func_81(uParam0, 1);
				func_82(uParam0, 131072);
				func_83(uParam0);
				break;
		}
	}
}

int func_17(var uParam0)
{
	return uParam0->f_62;
}

void func_18()
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "REQUEST_CAMERA_ITEM_ASSETS...");
	HUD::_TEXT_DATABASE_REQUEST(func_84(2));
	STREAMING::REQUEST_ANIM_DICT(func_84(0));
	STREAMING::REQUEST_CLIP_SET(func_84(1));
	GRAPHICS::_0x5199405EABFBD7F0(func_70(0));
	GRAPHICS::_0x5199405EABFBD7F0(func_70(1));
}

void func_19()
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

void func_20(var uParam0)
{
	uParam0->f_27 = 1f;
	uParam0->f_56 = -1;
	uParam0->f_57 = -1;
	uParam0->f_33 = 1;
	uParam0->f_73 = 0;
	GRAPHICS::_0xA42EDF1E88734A7E();
}

void func_21()
{
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
}

void func_22()
{
	func_57();
	Global_1280543.f_1 = ITEMSET::CREATE_ITEMSET(true);
}

void func_23()
{
	func_12(1);
	func_12(16);
	func_12(32);
	func_12(64);
	func_12(256);
	func_12(128);
}

void func_24(var uParam0)
{
	uParam0->f_54 = MISC::GET_GAME_TIMER();
}

void func_25(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__SET__LOCAL_STATE] current state: ", func_85(uParam0->f_62, 0), " new state: ", func_85(iParam1, 0));
	uParam0->f_62 = iParam1;
}

bool func_26(var uParam0)
{
	bool bVar0;

	bVar0 = true;
	DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] starting...");
	if (GRAPHICS::_0xBF2DD155B2ADCD0A(func_70(0)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] waiting on camera viewfinder postfx overlay to load.");
		bVar0 = false;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A(func_70(1)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] waiting on TransitionBlink postfx overlay to load.");
		bVar0 = false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_84(2)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] waiting on camera item text to load.");
		bVar0 = false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(func_84(1)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] waiting on portrait anim clip to load.");
		bVar0 = false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_84(0)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] waiting on portrait anim dictionary to load.");
		bVar0 = false;
	}
	if (!AUDIO::_0xD9130842D7226045(func_84(6), 0))
	{
		if (func_86(uParam0) > 7000)
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] WARNING. Was waiting on CAMERA_SOUNDSET preparation but timeout has elapsed. Bypassing asset load.");
			bVar0 = true;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] waiting on CAMERA_SOUNDSET preparation...");
			bVar0 = false;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA_HAVE_ASSETS_LOADED] ending... bAssetsLoaded: ", MISC::_0xF216F74101968DB0(bVar0));
	return bVar0;
}

bool func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 <= (14 - 1))
	{
		iVar1 = iVar0;
		if (!func_87(&(uParam0->f_5[iVar1]), iVar1))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

void func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_90(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_91(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

void func_29(var uParam0)
{
	uParam0->f_29 = func_92(uParam0->f_29, 0);
	uParam0->f_30 = func_92(uParam0->f_28, 1);
	func_93(uParam0->f_29);
	func_93(uParam0->f_30);
}

void func_30(var uParam0)
{
	uParam0->f_25 = func_79();
	uParam0->f_26 = func_80();
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel0", " ");
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel1", " ");
	func_83(uParam0);
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] eMode: ", func_94(iParam1, 0));
	switch (iParam1)
	{
		case 0:
			func_53(0);
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_95(iVar1);
				if (iVar2 == 4 || iVar2 == 0)
				{
					if (iVar1 == 3 && (!func_96(uParam0) || func_97(Global_33)))
					{
						func_98(uParam0->f_5[iVar1], 0, 1, 1);
						func_82(uParam0, 32);
						func_99(uParam0->f_5[iVar1], 1, 1);
					}
					else
					{
						func_98(uParam0->f_5[iVar1], 1, 1, 1);
						func_99(uParam0->f_5[iVar1], 1, 1);
						DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] enable: ", func_100(iVar1, 0));
						Jump @264; //curOff = 214
						func_98(uParam0->f_5[iVar1], 0, 1, 1);
						func_99(uParam0->f_5[iVar1], 0, 1);
						DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] disable: ", func_100(iVar1, 0));
					}
					iVar0++;
					if (func_44(Global_33, 0, 1, 0) != 332793555)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 332793555, true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
					}
					Jump @1035; //curOff = 318
					iVar0 = 0;
					while (iVar0 <= (14 - 1))
					{
						iVar1 = iVar0;
						iVar2 = func_95(iVar1);
						if (iVar2 == 3 || iVar2 == 1)
						{
							if (iVar1 == 6 || iVar1 == 8)
							{
								func_98(uParam0->f_5[iVar1], 0, 1, 1);
								func_99(uParam0->f_5[iVar1], 0, 1);
								DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] disable: ", func_100(iVar1, 0));
							}
							else
							{
								func_98(uParam0->f_5[iVar1], 1, 1, 1);
								func_99(uParam0->f_5[iVar1], 1, 1);
								DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] enable: ", func_100(iVar1, 0));
							}
						}
						else
						{
							func_98(uParam0->f_5[iVar1], 0, 1, 1);
							func_99(uParam0->f_5[iVar1], 0, 1);
							DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] disable: ", func_100(iVar1, 0));
						}
						iVar0++;
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 332793555, true, 0, false, false);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
					func_101(uParam0);
					func_102(uParam0);
					Jump @1035; //curOff = 575
					func_11(1);
					iVar0 = 0;
					while (iVar0 <= (14 - 1))
					{
						iVar1 = iVar0;
						iVar2 = func_95(iVar1);
						if (iVar2 == 3 || iVar2 == 2)
						{
							if (iVar1 == 10 || iVar1 == 9)
							{
								switch (func_103(uParam0))
								{
									case 0:
										func_98(uParam0->f_5[iVar1], 1, 1, 1);
										func_99(uParam0->f_5[iVar1], 1, 1);
										DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] enable (a): ", func_100(iVar1, 0));
										break;
									case 1:
										func_98(uParam0->f_5[iVar1], 0, 1, 1);
										func_99(uParam0->f_5[iVar1], 0, 1);
										DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] disable (a): ", func_100(iVar1, 0));
										break;
								}
							}
							else if (iVar1 == 5 || iVar1 == 4)
							{
								switch (func_103(uParam0))
								{
									case 0:
										func_98(uParam0->f_5[iVar1], 0, 1, 1);
										func_99(uParam0->f_5[iVar1], 0, 1);
										DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] disable (b): ", func_100(iVar1, 0));
										break;
									case 1:
										func_98(uParam0->f_5[iVar1], 1, 1, 1);
										func_99(uParam0->f_5[iVar1], 1, 1);
										DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] enable (b): ", func_100(iVar1, 0));
										break;
								}
							}
							else
							{
								func_98(uParam0->f_5[iVar1], 1, 1, 1);
								func_99(uParam0->f_5[iVar1], 1, 1);
								DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] enable: ", func_100(iVar1, 0));
							}
						}
						else
						{
							func_98(uParam0->f_5[iVar1], 0, 1, 1);
							func_99(uParam0->f_5[iVar1], 0, 1);
							DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__ENABLE__CAMERA_CONTROLS] disable: ", func_100(iVar1, 0));
						}
						iVar0++;
					}
					func_101(uParam0);
					func_102(uParam0);
				}
			}
			default:
				break;
	}
}

bool func_32()
{
	return Global_1896750.f_398;
}

void func_33(var uParam0)
{
	if (func_6(uParam0, 16))
	{
		HUD::_0xC9CAEAEEC1256E54(959420967);
	}
	switch (func_67(uParam0))
	{
		case 0:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, func_84(5), 1, 0, 0, 0);
			if (func_104(func_70(1)) || func_104(func_70(0)))
			{
				return;
			}
			func_105(uParam0);
			func_106(uParam0);
			if ((func_39(uParam0->f_5[3], 1) && func_6(uParam0, 65536)) && func_96(uParam0))
			{
				func_107(uParam0, 2);
				return;
			}
			if (func_39(uParam0->f_5[2], 1))
			{
				func_107(uParam0, 1);
				return;
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_108();
			}
			break;
		case 1:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, func_84(3), 1, 0, 0, 0);
			func_109(uParam0);
			break;
		case 2:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, func_84(4), 1, 0, 0, 0);
			CAM::_0x3C8F74E8FE751614();
			func_110(uParam0);
			break;
	}
}

void func_34(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || func_58(Global_1280543, 16))
	{
		func_111(uParam0);
	}
}

void func_35(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || func_58(Global_1280543, 16))
	{
		func_112();
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam0) || ITEMSET::GET_ITEMSET_SIZE(*uParam0) <= 0)
		{
			return;
		}
		func_113(uParam0);
	}
	if (func_58(Global_1280543, 16))
	{
		func_73(&Global_1280543, 16);
	}
}

void func_36(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_70(0)))
	{
		if (func_114(uParam0) != 1 && func_114(uParam0) != 4)
		{
			func_115(uParam0, 4);
		}
	}
	else if (func_2(512) && func_114(uParam0) != 3)
	{
		func_116();
		func_115(uParam0, 3);
	}
	func_117(&iVar0);
	bVar1 = false;
	switch (func_114(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_118() > 0)
			{
				bVar1 = true;
			}
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_119(iVar0)) && func_120(iVar0)) && !func_121(iVar0, 1))
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_122();
				func_115(uParam0, 2);
			}
			break;
		case 2:
			DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__UPDATE__VIEW_FINDER_OVERLAY] NET_ADVANCED_CAMERA__GET__ANIMAL_COUNT_ON_SCREEN: ", func_118());
			DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__UPDATE__VIEW_FINDER_OVERLAY] DOES_ENTITY_EXIST: ", MISC::_0xF216F74101968DB0(ENTITY::DOES_ENTITY_EXIST(iVar0)));
			if (func_118() <= 0)
			{
				if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || func_121(iVar0, 1)) || (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_123(iVar0)))
				{
					func_115(uParam0, 4);
				}
			}
			break;
		case 3:
			if (!func_2(512))
			{
				if (func_118() > 0)
				{
					bVar1 = true;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_119(iVar0)) && func_120(iVar0)) && !func_121(iVar0, 1))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					func_122();
					func_115(uParam0, 2);
				}
				else
				{
					func_115(uParam0, 4);
				}
			}
			break;
		case 4:
			func_124();
			func_115(uParam0, 1);
			break;
	}
}

void func_37(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	if (func_117(&iVar0))
	{
		if (func_121(iVar0, 1))
		{
			if (!func_6(uParam0, 2097152))
			{
				bVar1 = true;
				func_82(uParam0, 2097152);
			}
		}
		else if (func_6(uParam0, 2097152))
		{
			bVar1 = true;
			func_81(uParam0, 2097152);
		}
	}
	else if (func_121(iVar0, 1))
	{
		bVar1 = true;
		func_81(uParam0, 2097152);
	}
	if (bVar1)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 30, 2, func_6(uParam0, 2097152));
	}
}

void func_38(var uParam0)
{
	if (func_6(uParam0, 262144))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
		{
			_NAMESPACE77::_0x00A15B94CBA4F76F(uParam0->f_20);
			func_81(uParam0, 1);
			func_81(uParam0, 262144);
		}
	}
}

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_125(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1952230[iVar0 /*23*/].f_3);
}

int func_40(int iParam0)
{
	if (AUDIO::_0x4AD019591E94C064(func_84(iParam0), Global_33, func_84(6), -2))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY(func_84(iParam0), Global_33, func_84(6), false, 0, 1);
		return 1;
	}
	return 0;
}

bool func_41(var uParam0)
{
	if (uParam0->f_65 != 2 && uParam0->f_65 != 1)
	{
		return false;
	}
	return uParam0->f_2;
}

bool func_42(var uParam0)
{
	struct<8> Var0;
	bool bVar19;
	int iVar20;

	if (GRAPHICS::_0x86076AE35CBBE55F())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_TAKE_HIGH_QUALITY_PHOTO] -- IS_PHOTO_FRAME: TRUE, MUTE VIEWFINDER");
		func_126(0);
		func_82(uParam0, 16777216);
	}
	else if (func_6(uParam0, 16777216))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_TAKE_HIGH_QUALITY_PHOTO] -- IS_PHOTO_FRAME: FALSE, UNMUTE VIEWFINDER");
		func_81(uParam0, 16777216);
		func_127(0);
	}
	switch (uParam0->f_63)
	{
		case 0:
			if (uParam0->f_25 >= uParam0->f_26 && !Global_1959057)
			{
				if (uParam0->f_20 == 0)
				{
					Var0.f_2 = 0;
					Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
					Var0.f_7.f_3 = 0;
					uParam0->f_20 = func_128(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
					func_129(uParam0, 0);
					func_82(uParam0, 262144);
					return true;
				}
				func_82(uParam0, 1048576);
				func_129(uParam0, 0);
				func_82(uParam0, 262144);
			}
			if (!Global_1959057 && !func_6(uParam0, 1048576))
			{
				if (CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
				}
				GRAPHICS::_0xD45547D8396F002A();
				if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
				{
					func_9(16);
					func_11(2);
					func_130(uParam0, 1);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_TAKE_HIGH_QUALITY_PHOTO] waiting for high quality photo to begin");
				}
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_TAKE_HIGH_QUALITY_PHOTO] g_bDisablePictureSavingOnThisMission set: not saving a photo -- got to complete state");
				func_9(16);
				func_11(2);
				func_130(uParam0, 1);
			}
			break;
		case 1:
			bVar19 = false;
			if (!Global_1959057 && !func_6(uParam0, 1048576))
			{
				iVar20 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
				switch (iVar20)
				{
					case 1:
						DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_TAKE_HIGH_QUALITY_PHOTO] -- PHOTO_OPERATION_IN_PROGRESS...");
						break;
					case 0:
						GRAPHICS::_0x0D5B19C34068FEE7(1);
						if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0))
						{
							DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_TAKE_HIGH_QUALITY_PHOTO] -- PHOTO_OPERATION_SUCCEEDED...");
							func_129(uParam0, 1);
							bVar19 = true;
						}
						break;
					case 2:
						DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_TAKE_HIGH_QUALITY_PHOTO] -- PHOTO_OPERATION_FAILED...");
						func_129(uParam0, 0);
						bVar19 = true;
						break;
				}
			}
			else
			{
				func_129(uParam0, 0);
				bVar19 = true;
			}
			if (bVar19)
			{
				func_130(uParam0, 2);
			}
			break;
		case 2:
			if (func_104(func_70(2)))
			{
				return false;
			}
			if (AUDIO::_0x4AD019591E94C064(func_84(7), Global_33, func_84(6), -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY(func_84(7), Global_33, func_84(6), false, 0, 0);
			}
			func_131();
			func_81(uParam0, 1048576);
			func_130(uParam0, 0);
			return true;
	}
	return false;
}

void func_43(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_2)
	{
		uParam0->f_2 = iParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__SET__TAKE_PICTURE] setting take photo to: ", MISC::_0xF216F74101968DB0(uParam0->f_2));
	}
}

int func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_45(int iParam0)
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

int func_46(var uParam0)
{
	int iVar0;

	iVar0 = func_125(uParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return Global_1952230[iVar0 /*23*/].f_3;
}

void func_47(var uParam0)
{
	if (uParam0->f_69 == 1)
	{
		SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_71, 0);
	}
	uParam0->f_69 = 0;
}

void func_48(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
}

void func_49(var uParam0)
{
	func_132(&(uParam0->f_56));
	func_132(&(uParam0->f_57));
}

bool func_50(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

void func_51(int iParam0)
{
	func_133(func_68(iParam0));
}

void func_52(int iParam0)
{
	func_133(func_70(iParam0));
}

void func_53(int iParam0)
{
	func_134(func_70(iParam0));
}

void func_54(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_135(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

void func_55(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_CLEANUP begins...");
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "Destroying all script Cameras on cleanup - Viewfinder and Reverse Angle");
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	func_136(uParam0);
	func_49(uParam0);
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	AUDIO::_0x531A78D6BF27014B(func_84(6));
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	STREAMING::REMOVE_CLIP_SET(func_84(1));
	STREAMING::REMOVE_ANIM_DICT(func_84(0));
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_137(1);
	HUD::_TEXT_DATABASE_DELETE(func_84(2));
}

void func_56(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_57()
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1280543.f_1))
	{
		ITEMSET::_CLEAR_ITEMSET(Global_1280543.f_1);
		ITEMSET::DESTROY_ITEMSET(Global_1280543.f_1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_59(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_138(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_139(bParam0);
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
			if (!func_140(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_141(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_142(bParam0, 0, 0, 0) >= iParam1;
}

bool func_60(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_58(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_61(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

bool func_62()
{
	return (Global_1915867.f_20637 || Global_1915867.f_22504.f_1);
}

int func_63(int iParam0)
{
	if (func_62())
	{
		if (Global_1915867.f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;

	if (!func_143(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_1940463.f_2;
}

var func_66(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_67(var uParam0)
{
	return uParam0->f_65;
}

char* func_68(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 190, "Initialising filter list for photo mode.");
	switch (iParam0)
	{
		case 0:
			return "No_PostFX_Applied";
		case 1:
			return "PhotoMode_FilterVintage01";
		case 2:
			return "PhotoMode_FilterVintage02";
		case 3:
			return "PhotoMode_FilterVintage03";
		case 4:
			return "PhotoMode_FilterVintage04";
		case 5:
			return "PhotoMode_FilterVintage05";
		case 6:
			return "PhotoMode_FilterVintage06";
		case 7:
			return "PhotoMode_FilterVintage07";
		case 8:
			return "PhotoMode_FilterVintage08";
		case 9:
			return "PhotoMode_FilterVintage09";
		case 10:
			return "PhotoMode_FilterVintage10";
		case 11:
			return "PhotoMode_FilterModern01";
		case 12:
			return "PhotoMode_FilterModern02";
		case 13:
			return "PhotoMode_FilterModern03";
		case 14:
			return "PhotoMode_FilterModern04";
		case 15:
			return "PhotoMode_FilterModern05";
		case 16:
			return "PhotoMode_FilterModern06";
		case 17:
			return "PhotoMode_FilterModern07";
		case 18:
			return "PhotoMode_FilterModern08";
		case 19:
			return "PhotoMode_FilterModern09";
		case 20:
			return "PhotoMode_FilterModern10";
		case 21:
			return "PhotoMode_FilterGame01";
		case 22:
			return "PhotoMode_FilterGame02";
		case 23:
			return "PhotoMode_FilterGame03";
		case 24:
			return "PhotoMode_FilterGame04";
		case 25:
			return "PhotoMode_FilterGame05";
		case 26:
			return "PhotoMode_FilterGame06";
		case 27:
			return "PhotoMode_FilterGame07";
		case 28:
			return "PhotoMode_FilterGame08";
		case 29:
			return "PhotoMode_FilterGame09";
		case 30:
			return "PhotoMode_FilterGame10";
		case 31:
			return "PhotoMode_FilterGame11";
		case 32:
			return "PhotoMode_FilterGame12";
		case 33:
			return "PhotoMode_FilterGame13";
		case 34:
			return "PhotoMode_FilterGame14";
		case 35:
			return "PhotoMode_FilterGame15";
		case 36:
			return "PhotoMode_FilterGame16";
		case 37:
			return "PhotoMode_FilterGame17";
		case 38:
			return "PhotoMode_FilterGame18";
		default:
			break;
	}
	return "No_PostFX_Applied";
}

void func_69(char* sParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "[NET_ADVANCED_CAMERA__STOP__FX] Stopping FX ", sParam0);
		GRAPHICS::ANIMPOSTFX_STOP(sParam0);
	}
}

char* func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CameraViewfinderAdv";
		case 1:
			return "CameraTransitionBlinkAdv";
		case 2:
			return "CameraTakePictureAdv";
		default:
			break;
	}
	return "CameraViewfinder";
}

void func_71(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1);
}

void func_72(char* sParam0)
{
	if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0(sParam0);
		DEBUG::_0xF0783374333FD8CE(40, 190, "[NET_ADVANCED_CAMERA__PLAY__FX] Preloading new filter: ", sParam0);
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "[NET_ADVANCED_CAMERA__PLAY__FX] Starting Post FX selection is ", sParam0);
		GRAPHICS::ANIMPOSTFX_PLAY(sParam0);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_146(uParam0, iParam1);
}

bool func_74(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_58(Global_1277758[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

void func_75()
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_33, 129, true);
	PED::SET_PED_RESET_FLAG(Global_33, 173, true);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		iVar0 = PED::GET_MOUNT(Global_33);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

bool func_76(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_125(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		func_147(4);
	}
	func_147(2);
	MISC::SET_BIT(&(Global_1959011.f_1), 0);
}

void func_78(int iParam0)
{
	Global_1940296.f_39 = (Global_1940296.f_39 || iParam0);
}

int func_79()
{
	return GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
}

int func_80()
{
	return GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
}

void func_81(var uParam0, int iParam1)
{
	func_73(&(uParam0->f_55), iParam1);
}

void func_82(var uParam0, int iParam1)
{
	func_71(&(uParam0->f_55), iParam1);
}

void func_83(var uParam0)
{
	char cVar0[32];
	char cVar4[32];

	StringCopy(&cVar0, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_25, "%i", &cVar0);
	StringConCat(&cVar0, " / ", 32);
	StringCopy(&cVar4, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_26, "%i", &cVar4);
	StringConCat(&cVar0, &cVar4, 32);
	if (func_6(uParam0, 131072))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, &cVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, " ");
	}
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FACE_HUMAN@GEN_MALE@PORTRAIT";
		case 1:
			return "facials@gen_male@portrait";
		case 2:
			return "CAMERA";
		case 3:
			return "CAM_CONG_HC";
		case 4:
			return "CAM_CONG_HSP";
		case 5:
			return "CAM_CONG_AC";
		case 6:
			return "CAMERA_SOUNDSET";
		case 7:
			return "Wind_On_Film";
		case 8:
			return "Zoom_In";
		case 9:
			return "Zoom_Out";
		case 10:
			return "zoom_in_single";
		case 11:
			return "zoom_out_single";
		case 12:
			return "Collapse_Camera";
		case 13:
			return "Place_Tripod";
		case 14:
			return "Expand_Camera";
		case 15:
			return "Take_Photo";
		case 16:
			return "Change_Expression";
		case 17:
			return "Change_Pose";
		case 18:
			return "Change_Filter";
		case 19:
			return "Change_Intensity";
		case 20:
			return "Put_Away";
		case 21:
			return "Remove_Tripod";
		default:
			break;
	}
	return "";
}

char* func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_LOCAL_STATE_INIT";
		case 1:
			return "NET_ADVANCED_CAMERA_LOCAL_STATE_REQUEST";
		case 2:
			return "NET_ADVANCED_CAMERA_LOCAL_STATE_CREATE";
		case 3:
			return "NET_ADVANCED_CAMERA_LOCAL_STATE_UPDATE";
		case 4:
			return "NET_ADVANCED_CAMERA_LOCAL_STATE_CLEANUP";
		case 5:
			return "NET_ADVANCED_CAMERA_LOCAL_STATE_TERMINATE";
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

int func_86(var uParam0)
{
	return (MISC::GET_GAME_TIMER() - func_148(uParam0));
}

bool func_87(var uParam0, int iParam1)
{
	if (!func_45(*uParam0))
	{
		if ((((iParam1 == 9 || iParam1 == 10) || iParam1 == 5) || iParam1 == 4) || iParam1 == 6)
		{
			*uParam0 = func_151(func_149(iParam1), func_150(iParam1, 0), func_150(iParam1, 1), 0);
		}
		else
		{
			*uParam0 = func_152(func_149(iParam1), func_150(iParam1, 0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		func_153(*uParam0, -1469232623, 0, 1);
		DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__CREATE__USE_CONTEXT] registering use context: ", func_149(iParam1));
	}
	return true;
}

void func_88(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_154(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_91(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_155(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_156(iParam0, 0));
		return false;
	}
	if (func_157(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_156(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_158(iParam0, 1)) || func_159(32768))
	{
		if (!func_158(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_160())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_90(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_91(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		iVar0 = iParam0 + 1;
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 >= 39)
			{
				iVar0 = 0;
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_161(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = (iParam0 - 1);
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 < 0)
			{
				iVar0 = (39 - 1);
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_161(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
	}
	return iVar0;
}

void func_93(int iParam0)
{
	func_162(func_68(iParam0));
}

char* func_94(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_ADVANCED_CAMERA_MODE_INVALID";
		case 0:
			return "NET_ADVANCED_CAMERA_MODE_HOLDING";
		case 1:
			return "NET_ADVANCED_CAMERA_MODE_FIRST_PERSON";
		case 2:
			return "NET_ADVANCED_CAMERA_MODE_SELF_PORTRAIT";
		case 3:
			return "NET_ADVANCED_CAMERA_MODE_BOTH";
		case 4:
			return "NET_ADVANCED_CAMERA_MODE_ALL";
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

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 5:
			return 3;
		case 4:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 2;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 0;
		case 13:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_96(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	var uVar9;
	float fVar10;

	bVar0 = false;
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar4 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, fVar4, 0f, 4f, 0f) };
	DEBUG::_0xA308F935BDECCEC0(56, 190, "vCurrentPlayerPos: ", &vVar1);
	DEBUG::_0xA308F935BDECCEC0(24, 190, "fCurrentPlayerHeading: ", fVar4);
	DEBUG::_0xA308F935BDECCEC0(56, 190, "vPotentialPlacementPosition: ", &vVar5);
	if (func_163(Global_33, 1))
	{
		vVar5.f_2 = (vVar5.z + 1f);
	}
	else
	{
		vVar5.f_2 = (vVar5.z + 50f);
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar8, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar9, false);
	if (vVar1.z > fVar8)
	{
		if ((vVar1.z - fVar8) > 2f)
		{
			DEBUG::_0x4DC69742196F818A(408, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player significantly higher than potential placement position.", vVar1.z, " ", fVar8);
			return false;
		}
	}
	else if ((fVar8 - vVar1.z) > 2f)
	{
		DEBUG::_0x4DC69742196F818A(408, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Camera significantly higher than player position.", vVar1.z, " ", fVar8);
		return false;
	}
	if (func_2(1024))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player riding train.");
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player on horseback.");
		return false;
	}
	if (PED::_0x50F124E6EF188B22(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player is drunk.");
		return false;
	}
	if (PED::_IS_PED_SLIDING(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player is slidding.");
		return false;
	}
	if (PED::IS_PED_FALLING(Global_33) || PED::_IS_PED_FALLING_2(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player is falling.");
		return false;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, 2f) > 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Fire detected within 2 metres of the player's current position.");
		return false;
	}
	if ((fVar8 - vVar1.z) > 1f)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player significantly lower than potential placement position.");
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player in water.");
		return false;
	}
	if (func_164(Global_33, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player is in combat.");
		return false;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Player is crouching");
		return false;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar5, 0, &(vVar5.f_2)) == 1)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Potential placement position in water.");
		return false;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar5.x, vVar5.y, fVar8, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. Potential placement position is on a road.");
		return false;
	}
	fVar10 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, vVar5.x, vVar5.y, (fVar8 + fVar10), 3167))
	{
		bVar0 = true;
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] cannot place. No clear LOS to potential placement position from player.");
		return false;
	}
	if (bVar0)
	{
		uParam0->f_49 = { vVar1.x, vVar1.y, (vVar1.z - 1f) };
		uParam0->f_52 = fVar4;
		uParam0->f_46 = { vVar5.x, vVar5.y, (fVar8 + fVar10) };
		DEBUG::_0xA308F935BDECCEC0(56, 190, "vBestPlayerPosition: ", &(uParam0->f_49));
		DEBUG::_0xA308F935BDECCEC0(24, 190, "fBestPlayerHeading: ", uParam0->f_52);
		DEBUG::_0xA308F935BDECCEC0(56, 190, "vBestTripodPosition: ", &(uParam0->f_46));
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_CAN_PLAYER_PLACE_TRIPOD] tripod can be placed. -- RETURN TRUE");
	}
	return true;
}

bool func_97(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "IS_PED_ON_MOUNT_SAFE: ped is dead");
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_98(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (bParam2 && !func_45(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ENABLED - Invalid context!");
		return;
	}
	sVar0 = func_125(iParam0);
	if (bParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Enable use context, ", sVar0);
		func_165(iParam0, 4);
		if (bParam3)
		{
			func_166(sVar0, 1);
		}
		func_167(sVar0, 1);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Disable use context, ", sVar0);
		func_168(iParam0, 4);
		func_167(sVar0, 0);
	}
}

void func_99(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_DRAWING_ENABLED - Invalid context!");
		return;
	}
	iVar0 = func_125(iParam0);
	func_166(iVar0, bParam1);
}

char* func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_TAKE_PHOTO";
		case 1:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_VIEW_PHOTOS";
		case 2:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_FPV";
		case 3:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_SELF_PORTRAIT";
		case 4:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_ADJUST_INTENSITY";
		case 5:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_ADJUST_FILTER";
		case 6:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_ZOOM";
		case 7:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_ZOOM_IN_ONLY";
		case 8:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_ZOOM_OUT_ONLY";
		case 9:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_EXPRESSION";
		case 10:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_POSE";
		case 11:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_BACK";
		case 12:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_EXIT";
		case 13:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_CONTROL_SWITCH";
		case 14:
			return "NET_ADVANCED_CAMERA_USE_CONTEXT_COUNT";
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

void func_101(var uParam0)
{
	uParam0->f_25 = func_79();
}

void func_102(var uParam0)
{
	func_83(uParam0);
	func_169(uParam0);
	func_170(uParam0);
}

int func_103(var uParam0)
{
	return uParam0->f_68;
}

bool func_104(char* sParam0)
{
	return GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0);
}

void func_105(var uParam0)
{
	func_171(uParam0);
	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		if (func_96(uParam0) && !uParam0->f_72)
		{
			if (!func_6(uParam0, 65536))
			{
				func_82(uParam0, 65536);
			}
			if (func_6(uParam0, 32))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 69, "[NET_ADVANCED_CAMERA__UPDATE__CAN_PLACE_TRIPOD] clearing disable self portrait");
				func_81(uParam0, 32);
			}
		}
		else
		{
			if (func_6(uParam0, 65536))
			{
				func_81(uParam0, 65536);
			}
			if (!func_6(uParam0, 32))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 69, "[NET_ADVANCED_CAMERA__UPDATE__CAN_PLACE_TRIPOD] setting disable self portrait");
				func_82(uParam0, 32);
			}
		}
	}
}

void func_106(var uParam0)
{
	if ((func_172(uParam0) || func_2(512)) || !func_6(uParam0, 131072))
	{
		if (!func_6(uParam0, 1))
		{
			func_82(uParam0, 1);
		}
	}
	else if (func_6(uParam0, 1) && !func_41(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "NET_ADVANCED_CAMERA__UPDATE__CONTEXT_UNLOCKS: clearing NET_ADVANCED_CAMERA_BITS__DISABLE_TAKE_PHOTO because we are taking a picture.");
		func_81(uParam0, 1);
	}
	switch (func_67(uParam0))
	{
		case 2:
			func_173(uParam0, 0, 1, 0);
			func_173(uParam0, 11, 2, 0);
			func_173(uParam0, 6, 512, 1);
			func_173(uParam0, 7, 8388608, 0);
			func_173(uParam0, 8, 4194304, 1);
			func_174(uParam0, 4, 4, 16384);
			func_173(uParam0, 10, 4096, 1);
			func_173(uParam0, 9, 8192, 1);
			func_173(uParam0, 5, 32768, 1);
			func_173(uParam0, 13, 1024, 0);
			if (func_6(uParam0, 128) || func_41(uParam0))
			{
				if (func_175(uParam0->f_5[10], 0))
				{
					func_98(uParam0->f_5[10], 0, 1, 1);
				}
			}
			else if (func_176(uParam0) == 0)
			{
				if (!func_175(uParam0->f_5[10], 0))
				{
					func_98(uParam0->f_5[10], 1, 1, 1);
				}
			}
			else if (func_175(uParam0->f_5[10], 0))
			{
				func_98(uParam0->f_5[10], 0, 1, 1);
			}
			break;
		case 1:
			func_173(uParam0, 0, 1, 0);
			func_173(uParam0, 4, 4, 0);
			func_173(uParam0, 5, 8, 0);
			func_173(uParam0, 11, 2, 0);
			break;
		case 0:
			if (func_2(2048))
			{
				if (!func_6(uParam0, 2048))
				{
					func_82(uParam0, 2048);
				}
			}
			else if (func_6(uParam0, 2048))
			{
				func_81(uParam0, 2048);
			}
			func_173(uParam0, 3, 32, 0);
			func_173(uParam0, 2, 2048, 0);
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__SET__CAMERA_MODE] current Camera Mode: ", func_94(uParam0->f_65, 0), " new Camera Mode: ", func_94(iParam1, 0));
	uParam0->f_65 = iParam1;
}

void func_108()
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__LAUNCH__GALLERY] calling Launch_UIApp_WithEntry");
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

void func_109(var uParam0)
{
	switch (func_177(uParam0))
	{
		case 0:
			if (uParam0->f_28 == 0)
			{
				func_82(uParam0, 4);
			}
			func_178(uParam0, 1);
			break;
		case 1:
			func_40(14);
			func_178(uParam0, 2);
			break;
		case 2:
			CAM::_0x90DA5BA5C2635416();
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				func_11(0);
				if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
				{
					GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", 0f);
				}
				GRAPHICS::_0x9F6D859C80708B26(1, 1);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), true, 0, -1, false);
				PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), true);
				func_31(uParam0, 1);
				func_10(uParam0->f_28);
				GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
				func_179();
				func_82(uParam0, 16);
				func_178(uParam0, 3);
			}
			break;
		case 3:
			CAM::_0x90DA5BA5C2635416();
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			func_180(uParam0);
			func_181(uParam0);
			func_182(uParam0);
			func_183(uParam0);
			func_184(uParam0);
			func_106(uParam0);
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], 1))
			{
				func_40(15);
				func_43(uParam0, 1);
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_108();
				return;
			}
			if (!func_6(uParam0, 2) && ((func_39(uParam0->f_5[11], 1) || func_185()) || func_186()))
			{
				func_178(uParam0, 4);
				return;
			}
			break;
		case 4:
			if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
			{
				GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", func_187());
			}
			GRAPHICS::_0x9F6D859C80708B26(0, 1);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
			PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
			func_40(12);
			if (uParam0->f_28 > 0)
			{
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
			}
			if (uParam0->f_29 > 0)
			{
				func_7(uParam0->f_29);
				func_51(uParam0->f_29);
			}
			func_188();
			func_81(uParam0, 16);
			func_107(uParam0, 0);
			func_31(uParam0, 0);
			func_178(uParam0, 0);
			break;
	}
}

void func_110(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_189(uParam0) >= 3)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	}
	switch (func_189(uParam0))
	{
		case 0:
			func_190(uParam0, 0);
			func_82(uParam0, 32768);
			func_82(uParam0, 16384);
			func_191(uParam0, 1);
			uParam0->f_69 = 0;
			break;
		case 1:
			func_93(uParam0->f_28);
			func_40(13);
			func_191(uParam0, 2);
			break;
		case 2:
			if (func_192(uParam0))
			{
				func_11(0);
				if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
				{
					GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", 0f);
				}
				GRAPHICS::_0x9F6D859C80708B26(1, 1);
				func_193(uParam0);
				func_24(uParam0);
				func_10(uParam0->f_28);
				GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
				func_194();
				func_82(uParam0, 16);
				func_195(uParam0);
				func_31(uParam0, 2);
				func_191(uParam0, 3);
			}
			break;
		case 3:
			if (func_86(uParam0) > 1000)
			{
				func_53(1);
				func_191(uParam0, 4);
			}
			break;
		case 4:
			func_196(uParam0);
			func_197(uParam0);
			func_198(uParam0);
			func_181(uParam0);
			func_182(uParam0);
			func_183(uParam0);
			func_184(uParam0);
			func_199(uParam0);
			func_106(uParam0);
			if (func_104(func_70(1)))
			{
				return;
			}
			if (!func_6(uParam0, 2) && (func_39(uParam0->f_5[11], 1) || func_185()))
			{
				func_24(uParam0);
				func_11(1);
				func_40(21);
				func_191(uParam0, 5);
				return;
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_108();
				return;
			}
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], 1))
			{
				func_40(15);
				func_43(uParam0, 1);
				return;
			}
			break;
		case 5:
			if (func_86(uParam0) > 500)
			{
				func_49(uParam0);
				if (uParam0->f_28 > 0)
				{
					func_7(uParam0->f_28);
					func_51(uParam0->f_28);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 332793555, true, 0, false, false);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
				func_200(uParam0);
				func_201();
				func_188();
				func_191(uParam0, 6);
			}
			break;
		case 6:
			func_47(uParam0);
			if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33) && func_86(uParam0) > 1000)
			{
				bVar0 = true;
			}
			if (func_86(uParam0) > 3000)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
				{
					GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", func_187());
				}
				GRAPHICS::_0x9F6D859C80708B26(0, 1);
				func_81(uParam0, 16);
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
				func_53(1);
				func_107(uParam0, 0);
				func_31(uParam0, 0);
				func_191(uParam0, 0);
			}
			break;
	}
}

void func_111(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	ENTITY::_0x59B57C4B06531E1E(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), func_202(), iVar0, 1);
	if (ITEMSET::GET_ITEMSET_SIZE(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			bVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_203(Global_33, iVar1, 1, 1) > (func_202() + 10f)) || func_121(iVar3, 1))
			{
				func_204(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1))
		{
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
			bVar4 = false;
			if (!func_50(iVar3, 0) && !func_121(iVar3, 1))
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
				bVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
				DEBUG::_0x4DC69742196F818A(40, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - eModel: ", func_205(bVar2, 0));
				DEBUG::_0x4DC69742196F818A(40, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - entity name: ", UNK_0xE02C950E4C991632(iVar1));
				if (PED::IS_PED_A_PLAYER(iVar3) && !PED::_0x0E2F43516F998269(iVar3))
				{
					bVar4 = true;
				}
				if (DECORATOR::DECOR_GET_BOOL(iVar3, func_206()))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - bounty target found");
					bVar4 = true;
				}
				if (func_119(iVar3))
				{
					if (func_120(iVar3))
					{
						bVar4 = true;
					}
					if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar3)
					{
						DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - GET_MOUNT_OWNED_BY_PLAYER: TRUE");
						bVar4 = true;
					}
					if (bVar2 == joaat("A_C_BAT_01"))
					{
						bVar4 = true;
					}
					if (func_207(bVar2))
					{
						bVar4 = true;
					}
				}
				DEBUG::_0x4DC69742196F818A(648, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] iPed: ", iVar5, " model: ", func_205(bVar2, 0));
			}
			if (bVar4)
			{
				func_208(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_1280543.f_1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar3 = func_209(ENTITY::GET_ENTITY_MODEL(iVar1));
					if (PED::IS_PED_A_PLAYER(iVar2) || DECORATOR::DECOR_GET_BOOL(iVar2, func_206()))
					{
						if (func_210(iVar1))
						{
							if (func_211(iVar2))
							{
								if (func_58(Global_1280543, 256) && iVar2 == Global_33)
								{
									if (!func_58(Global_1280543, 64))
									{
										func_212(iVar2);
									}
								}
							}
							else
							{
								func_212(iVar2);
							}
						}
						else
						{
							func_212(iVar2);
						}
					}
					else if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar2)
					{
						if (!func_210(iVar1) || func_97(Global_33))
						{
							func_212(iVar2);
						}
					}
					else if (!func_213(iVar2, iVar3))
					{
						func_212(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_113(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
	{
		iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, *uParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iVar2 = func_209(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (PED::IS_PED_A_PLAYER(iVar1) || DECORATOR::DECOR_GET_BOOL(iVar1, func_206()))
				{
					if (func_210(iVar0))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_211(iVar1))
						{
							if (func_58(Global_1280543, 256) && iVar1 == Global_33)
							{
								if (func_58(Global_1280543, 64))
								{
									func_208(iVar0, Global_1280543.f_1);
									DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped to global list (c): ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_205(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
								}
							}
							else
							{
								func_208(iVar0, Global_1280543.f_1);
								DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped to global list (d): ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_205(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
							}
						}
					}
				}
				else if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar1)
				{
					if (func_210(iVar0) && !func_97(Global_33))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_211(iVar1))
						{
							func_208(iVar0, Global_1280543.f_1);
							DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped horse to global list (a): ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_205(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
						}
					}
				}
				else if (func_214(iVar1, iVar2))
				{
					func_208(iVar0, Global_1280543.f_1);
					DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped to global list: (aa)", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_205(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
				}
			}
		}
		iVar3++;
	}
}

int func_114(var uParam0)
{
	return uParam0->f_70;
}

void func_115(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__SET__VIEW_FINDER_STATE] current view finder state: ", func_215(uParam0->f_70, 0), " new state: ", func_215(iParam1, 0));
	uParam0->f_70 = iParam1;
}

void func_116()
{
	func_216(0, 0, 0, 128);
	DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__SET__VIEWFINDER_FX_COLOR_BLACK] setting color green");
}

bool func_117(int iParam0)
{
	int iVar0;

	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			*iParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return true;
		}
	}
	return false;
}

int func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar2 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Global_1280543.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) - 1))
		{
			iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1280543.f_1));
			if (ENTITY::_0x9A100F1CF4546629(iVar0) && PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) != MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1280543.f_1)))
			{
				iVar1++;
			}
			if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1280543.f_1)))
			{
				iVar1++;
			}
			if (DECORATOR::DECOR_GET_BOOL(iVar0, func_206()))
			{
				iVar1++;
			}
			iVar2++;
		}
		return iVar1;
	}
	return 0;
}

bool func_119(int iParam0)
{
	int iVar0;

	iVar0 = func_217(iParam0);
	if (ENTITY::_0x9A100F1CF4546629(iVar0) && !PED::_0x0E2F43516F998269(iParam0))
	{
		return true;
	}
	return false;
}

bool func_120(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (((!PED::_0x118D476A6F1A13F1(iParam0) && !func_218(iParam0, 0)) && !func_123(iParam0)) && iVar0 != joaat("REL_DOMESTICATED_PET_ANIMAL"))
	{
		return true;
	}
	return false;
}

bool func_121(int iParam0, bool bParam1)
{
	if (DECORATOR::DECOR_GET_BOOL(iParam0, func_206()))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] ped is a bounty target -- return false");
		return false;
	}
	if (bParam1 && PED::_0x0E2F43516F998269(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] ped is a player");
		return true;
	}
	if (PED::_0xB655DB7582AEC805(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] entity is incapacitated");
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] PCF_Knockedout");
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 580, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] PCF_IsTranquilized");
		return true;
	}
	return false;
}

void func_122()
{
	func_216(0, 255, 0, 128);
	DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__SET__VIEWFINDER_FX_COLOR_GREEN] setting color green");
}

bool func_123(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

void func_124()
{
	GRAPHICS::_0x63011D0C7C6519E0(func_70(0), 0, 255, 255, 255, 128);
	DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__CLEAR__VIEWFINDER_FX_COLOR] clearing color");
}

int func_125(int iParam0)
{
	return iParam0;
}

void func_126(int iParam0)
{
	GRAPHICS::_0xCAB4DD2D5B2B7246(func_70(iParam0), 0f);
}

void func_127(int iParam0)
{
	GRAPHICS::_0xCAB4DD2D5B2B7246(func_70(iParam0), 1f);
}

var func_128(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE77::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_129(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__SET__PHOTO_TAKEN_STAT] photo stat was set... save success = ", MISC::_0xF216F74101968DB0(bParam1));
	bVar2 = func_67(uParam0) == 2;
	bVar3 = false;
	GRAPHICS::_0x2705D18C11B61046(bVar2);
	if (bParam1)
	{
		func_219();
		func_220();
	}
	func_221();
	bVar4 = false;
	if (func_117(&iVar0))
	{
		bVar4 = func_121(iVar0, 1);
		if (ITEMSET::IS_ITEMSET_VALID(Global_1280543.f_1) && !bVar4)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__SET__PHOTO_TAKEN_STAT] adding study ped to global list");
			func_208(iVar0, Global_1280543.f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !bVar4)
	{
		bVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (bVar1 != uParam0->f_73)
		{
			bVar3 = true;
			uParam0->f_73 = bVar1;
		}
	}
	else if (ITEMSET::IS_ITEMSET_VALID(Global_1280543.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) > 0)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) - 1))
		{
			iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, Global_1280543.f_1));
			bVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (bVar1 != uParam0->f_73 || DECORATOR::DECOR_GET_BOOL(iVar0, func_206()))
			{
				bVar3 = true;
				uParam0->f_73 = bVar1;
			}
			iVar5++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(10408, 190, "[NET_ADVANCED_CAMERA__SET__PHOTO_TAKEN_STAT] model for stat is: ", func_205(bVar1, 0), " INT: ", bVar1, " bSendPhotoStat: ", MISC::_0xF216F74101968DB0(bVar3));
	if (bVar3)
	{
		STATS::STAT_PHOTOGRAPH_TAKEN(Global_1280543.f_1);
	}
	TELEMETRY::_TELEMETRY_PHOTO_CAM(365468875, MISC::GET_HASH_KEY(func_222(uParam0->f_28)), uParam0->f_27, bVar2, 0, func_223(uParam0), bVar1, func_225(func_224(0)), PED::IS_PED_ON_MOUNT(Global_33));
	if (bParam1)
	{
		uParam0->f_25++;
		func_102(uParam0);
	}
	func_226(&(uParam0->f_61));
}

void func_130(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__SET__PHOTO_STATE] current state: ", func_227(uParam0->f_63, 0), " new state: ", func_227(iParam1, 0));
	uParam0->f_63 = iParam1;
}

void func_131()
{
	DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__CLEAR__PICTURE_TAKEN] clearing photo taken flag");
	func_73(&Global_1280543, 1);
}

void func_132(var uParam0)
{
	if (*uParam0 >= 0)
	{
		AUDIO::_0x3210BCB36AF7621B(*uParam0);
		*uParam0 = -1;
	}
}

void func_133(char* sParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 190, "[NET_ADVANCED_CAMERA__RELEASE__FX] Releasing FX ", sParam0);
	GRAPHICS::_0x37D7BDBA89F13959(sParam0);
}

void func_134(char* sParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA__FORCE_OUTRO_FX] has been called.");
		GRAPHICS::_0xC5CB91D65852ED7E(sParam0);
	}
}

void func_135(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_45(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_125(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_228(iVar0);
	*uParam0 = 0;
}

void func_136(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_58));
	}
}

void func_137(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_138(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_139(bool bParam0)
{
	vector3 vVar0;

	if (!func_138(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_140(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<10> Var4;

	if (!func_138(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_229(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_230("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		bVar3 = false;
		while (bVar3 < iVar2)
		{
			if (!func_231(&Var4, bVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", bVar3);
			}
			else if (!func_232(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_233(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_233(Var4.f_4, 0), " that uses the ammo - ", func_233(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_234(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_233(Var4.f_4, 0), " that uses the ammo - ", func_233(bParam0, 0));
					return true;
				}
			}
			bVar3++;
		}
		func_234(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_233(bParam0, 0));
	return false;
}

bool func_141(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_138(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_235(bParam0);
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
	iVar1 = func_236(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_237(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_233(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_238(bParam0);
	iVar2 = func_237(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_233(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_142(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_138(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_233(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_139(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_229(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_239(bParam0, 0);
	}
	if (func_240(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_241(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_242(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_233(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_241(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_233(bParam0, 0));
	return iVar0;
}

bool func_143(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_144(int iParam0)
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
	DEBUG::_0xD9911C7B5F8CD69C(168, 139, "GET_SHOP_TYPE_FROM_SHOP - ", func_243(iParam0, 0), " undefined");
	return -1;
}

void func_145(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_147(int iParam0)
{
	Global_1903188.f_302 = (Global_1903188.f_302 || iParam0);
}

int func_148(var uParam0)
{
	return uParam0->f_54;
}

char* func_149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_TAKE_PHOTO";
		case 1:
			return "CAM_GALLERY";
		case 2:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_SELFIE";
		case 5:
			return "CAM_FILTER";
		case 4:
			return "CAM_INTENSITY";
		case 6:
			return "CAM_ZOOM";
		case 7:
			return "CAM_ZOOM";
		case 8:
			return "CAM_ZOOM";
		case 9:
			return "CAM_EXPRESSIONS";
		case 10:
			return "CAM_POSES";
		case 11:
			return "CAM_BACK";
		case 12:
			return "CAM_PUT_AWAY";
		case 13:
			return "ADV_CAM_FILTERS";
		default:
			break;
	}
	return "";
}

int func_150(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1201017346;
		case 1:
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
		case 2:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_SELFIE");
		case 7:
			return -1089155097;
		case 8:
			return -310714049;
		case 4:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_EXPRESSION_PREV");
			}
			else
			{
				return joaat("INPUT_CAMERA_EXPRESSION_NEXT");
			}
			break;
		case 5:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_POSE_NEXT");
			}
			else
			{
				return joaat("INPUT_CAMERA_POSE_PREV");
			}
			break;
		case 6:
			if (bParam1)
			{
				return -1089155097;
			}
			else
			{
				return -310714049;
			}
			break;
		case 9:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_EXPRESSION_NEXT");
			}
			else
			{
				return joaat("INPUT_CAMERA_EXPRESSION_PREV");
			}
			break;
		case 10:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_POSE_NEXT");
			}
			else
			{
				return joaat("INPUT_CAMERA_POSE_PREV");
			}
			break;
		case 11:
			return joaat("INPUT_CAMERA_BACK");
		case 12:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 13:
			return -711736799;
	}
	return joaat("INPUT_CAMERA_TAKE_PHOTO");
}

int func_151(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(168, 145, "REGISTER_USE_CONTEXT_FRONTEND - (", sParam0, ")");
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Cannot register a context with an invalid control!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_244(iVar0, 2))
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
		func_245(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

int func_152(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, bool bParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(2216, 145, "REGISTER_USE_CONTEXT_DYNAMIC - (", sParam0, ") with iHoldTime = ", sParam6, " and iAutoFillTime = ", bParam7);
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
		if (func_244(iVar0, 2))
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
		func_245(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, sParam6, bParam7, iParam8, bParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_45(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_GROUP - Cannot set a group for an invalid context!");
		return;
	}
	iVar0 = func_125(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1952230[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_154(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_155(int iParam0)
{
	if (func_158(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_156(int iParam0, int iParam1)
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
		case 502:
			return "TF_ITEM_BANDANA_WORN";
		case 503:
			return "TF_ITEM_BANDANA_USE";
		case 504:
			return "TF_ITEM_BANDANA_OFF";
		case 505:
			return "TF_MP_RUSTLING_OWNER_DEAD";
		case 506:
			return "TF_PROPERTY_PDOC_COLLECTED";
		case 507:
			return "TF_BINO_SATCHEL";
		case 508:
			return "TF_BINO_AIM";
		case 509:
			return "TF_BINO_ZOOM";
		case 510:
			return "TF_FAST_TRAVEL";
		case 511:
			return "TF_FAST_TRAVEL_COST";
		case 512:
			return "TTL_LAW_UNPAID_BOUNTY";
		case 513:
			return "TF_COMPANION_FOLLOW";
		case 514:
			return "TF_PLACED_DYNAMITE";
		case 515:
			return "TF_GUN_SWAP";
		case 516:
			return "TF_RIFLE_SCOPE";
		case 517:
			return "TF_CIG_CARD_FOUND";
		case 518:
			return "TF_CIG_CARD_FOUND_AFTER_STAGE1";
		case 519:
			return "TF_USEDITEM_FOUND";
		case 520:
			return "TF_CIG_PACK_FOUND";
		case 521:
			return "TF_GUN_OIL_FOUND";
		case 522:
			return "TF_COFFEE_FOUND";
		case 523:
			return "TF_INSTRUMENT_FOUND";
		case 524:
			return "TF_WHITKNIFE_FOUND";
		case 525:
			return "TF_WHITBLOCK_FOUND";
		case 526:
			return "TF_HAIRTONIC_FOUND";
		case 527:
			return "TF_BRDTONIC_REQUIRED";
		case 528:
			return "TF_BRDTONIC_WORNOFF";
		case 529:
			return "TF_HAIRGRS_FOUND";
		case 530:
			return "TF_HAIRGRS_WORNOFF";
		case 531:
			return "TF_SHAVING";
		case 532:
			return "TF_SEASONED_MEAT";
		case 533:
			return "TF_SEASONING_NEEDED";
		case 534:
			return "TF_COFFEE_KIT";
		case 535:
			return "TF_CAMP_ITEMS";
		case 536:
			return "TF_JEWELRY_FOUND";
		case 537:
			return "TF_SHOPROB_INTRO";
		case 538:
			return "TF_SHOPROB_RHDGUN";
		case 539:
			return "TF_SHOP_CATALOG";
		case 540:
			return "TF_SHOP_ILO";
		case 541:
			return "TF_SHOP_ILO_FOREMAN";
		case 542:
			return "TF_SHOP_POST_OFFICE";
		case 543:
			return "TF_SHOP_POST_MP";
		case 544:
			return "TF_SHOP_POST_MP_CAMP";
		case 545:
			return "TF_SHOP_DUAL_BUY";
		case 546:
			return "TF_SHOP_SHELF_INTERACT";
		case 547:
			return "TF_SHOP_NO_CLOTHES";
		case 548:
			return "TF_SHOP_ON_FOOT";
		case 549:
			return "TF_SHOP_TRAPPER_MEET";
		case 550:
			return "TF_SHOP_TRAPPER_WANDER";
		case 551:
			return "TF_SHOP_TRAPPER_LEGENDARY_CRAFT";
		case 552:
			return "TF_SHOP_BUTCHER_HORSE_CARGO";
		case 553:
			return "TF_SHOP_TRAPPER_HORSE_CARGO";
		case 554:
			return "TF_SHOP_PRONGHORN_CATALOGUE";
		case 555:
			return "TF_SHOP_PRONGHORN_GUNSMITH";
		case 556:
			return "TF_SHOP_PRONGHORN_FENCE";
		case 557:
			return "TF_SHOP_PRONGHORN_TRAPPER";
		case 558:
			return "TF_WEAPON_SHOP_UNLOCK";
		case 559:
			return "TF_WEAPON_MOD_UNLOCK";
		case 560:
			return "TF_WEAPON_SHOP_MOD_UNLOCK";
		case 561:
			return "TF_WEAPONS_MULTI_UNLOCK";
		case 562:
			return "TF_SPECIAL_LURES_UNLOCK";
		case 563:
			return "TF_HONOR_HIGH_SHOP";
		case 564:
			return "TF_MP_WHISTLE_CAMP";
		case 565:
			return "TF_MP_INTRO_MISSION";
		case 566:
			return "TF_MP_GANG_SETUP";
		case 567:
			return "TF_MP_GANG_BOUNTY";
		case 568:
			return "TF_MP_BOUNTY_LIMIT_REACHED";
		case 569:
			return "TF_MP_STAT_CHALLENGES";
		case 570:
			return "TF_MP_PVP_SHOWDOWN";
		case 571:
			return "TF_MP_DEADEYE_REPLACEMENT";
		case 572:
			return "TF_MP_DEADEYE_PASSIVE";
		case 573:
			return "TF_MP_RECIPE_JOURNAL_ADD";
		case 574:
			return "TF_MP_HERB_JOURNAL_ADD";
		case 575:
			return "TF_MP_HERB_JOURNAL_PROP";
		case 576:
			return "TF_MP_ALASKAN_GINSENG_NOT_LEARNED";
		case 577:
			return "TF_MP_AMERICAN_GINSENG_NOT_LEARNED";
		case 578:
			return "TF_MP_BURDOCK_NOT_LEARNED";
		case 579:
			return "TF_MP_HUMMINGBIRD_NOT_LEARNED";
		case 580:
			return "TF_MP_SNOWDROP_NOT_LEARNED";
		case 581:
			return "TF_MP_BUY_HORSE_EQUIPMENT";
		case 582:
			return "TF_MP_SKINNING";
		case 583:
			return "TF_MP_REVIVE";
		case 584:
			return "TF_MP_CANT_REVIVE_CARRYING";
		case 585:
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT";
		case 586:
			return "TF_MP_SHOP_HORSE_PROTECTION";
		case 587:
			return "TF_MP_BARBER_HORSE_PROTECTION";
		case 588:
			return "TF_MP_HANDHELD_CATALOUGE";
		case 589:
			return "TF_MP_ABILITY_CARD_SLOT_EMPTY";
		case 590:
			return "TF_MP_LOOTABLES_1";
		case 591:
			return "TF_MP_LOOTABLES_2";
		case 592:
			return "TF_MP_HORSE_REVIVE";
		case 593:
			return "TF_MP_HORSE_REVIVE_NO_ITEM";
		case 594:
			return "TF_MP_BONDING_EARNED_TRAMPLE_ENEMY";
		case 595:
			return "TF_MP_BONDING_EARNED_BOW_KILL";
		case 596:
			return "TF_MP_PLAYER_HORSE_STOLEN";
		case 597:
			return "TF_MP_STABLE_UPKEEP_FEE";
		case 598:
			return "TF_MP_HORSE_TAME_MOUNT";
		case 599:
			return "TF_MP_HORSE_TAME_MOUNTED";
		case 600:
			return "TF_MP_HORSE_TAME_SUCCESS";
		case 601:
			return "TF_MP_HORSE_TAME_BUCKED_OFF";
		case 602:
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD";
		case 603:
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 604:
			return "TF_MP_HORSE_VET_FEES";
		case 605:
			return "TF_MP_CAMP_CRAFTING";
		case 606:
			return "TF_MP_CAMP_NO_SKINNED_ANIMAL";
		case 607:
			return "TF_MP_CAMP_BIGGER_WAGON_NEEDED";
		case 608:
			return "TF_MP_CAMP_WHITE_FLAG_RAISED";
		case 609:
			return "TF_MP_CAMP_WHITE_FLAG_RAISED_LEADER";
		case 610:
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED";
		case 611:
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED_LEADER";
		case 612:
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_RAISE";
		case 613:
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_LOWER";
		case 614:
			return "TF_MP_CAMP_WHITE_FLAG_CONTENT";
		case 615:
			return "TF_MP_CAMP_WHITE_FLAG_TURRET";
		case 616:
			return "TF_MP_CAMP_FOLLOWER_DEAD";
		case 617:
			return "TF_MP_CAMP_SLEEP";
		case 618:
			return "TF_MP_CAMP_CUSTOMIZE";
		case 619:
			return "TF_MP_WEAPON_LOCKER_PURCHASED";
		case 620:
			return "TF_MP_CAMP_DOG_CAMP_RAID_WARN";
		case 621:
			return "TF_MP_CHALLENGE_COMPLETED_AWARD";
		case 622:
			return "TF_MP_XMAS_2019_KRAMPUS_AWARD";
		case 623:
			return "TF_AMBIENT_HORSE_TRADING_AVAILABLE";
		case 624:
			return "TF_FIRST_STOLEN_HORSE_WITH_HORSE_TRADING";
		case 625:
			return "TF_COMPANION_ACTIVITY";
		case 626:
			return "TF_COMPANION_BANK";
		case 627:
			return "TF_CARAVAN_HORSE_DISMOUNT";
		case 628:
			return "TF_CARAVAN_WAGON_DISMOUNT";
		case 629:
			return "TF_CARAVAN_NO_CARRY_DEAD";
		case 630:
			return "TF_CARAVAN_NO_CARRY_HOGTIED";
		case 631:
			return "TF_CARAVAN_BLIP";
		case 632:
			return "TF_CARAVAN_SUPPLIES";
		case 633:
			return "TTL_LAW_DELAYED_RESPONSE";
		case 634:
			return "TTL_LAW_DELAYED_RESPONSE_FUS";
		case 635:
			return "TTL_LAW_BOUNTY_HUNTERS";
		case 636:
			return "TTL_LAW_STATE_BOUNTY";
		case 637:
			return "TTL_LAW_REGION_INCREASE";
		case 638:
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_1";
		case 639:
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_2";
		case 640:
			return "TTL_LAW_RESTRICTED_AREA";
		case 641:
			return "TTL_HIDE_BODY";
		case 642:
			return "TF_CARAVAN_HUNGER";
		case 643:
			return "TF_CARAVAN_STEW_MISSING";
		case 644:
			return "TF_CARAVAN_STEW_ALREADY_SERVED";
		case 645:
			return "TF_CARAVAN_STEW_PLAYER_SERVED";
		case 646:
			return "TF_DISTRICT_CAMP_MAP";
		case 647:
			return "TF_CARAVAN_SHOOTING";
		case 648:
			return "TF_CARAVAN_SHOOTING_BEECHERS";
		case 649:
			return "TF_VIGNETTE_WASH";
		case 650:
			return "TF_PED_INTERACTION";
		case 651:
			return "TF_HERDING_1";
		case 652:
			return "TF_HERDING_2";
		case 653:
			return "TF_HERDING_3";
		case 654:
			return "TF_HERDING_4";
		case 655:
			return "TF_HERDING_STRAGGLER_1";
		case 656:
			return "TF_HERDING_STRAGGLER_2";
		case 657:
			return "TF_BADGER_CLAW_TRINKET";
		case 658:
			return "TF_GRY3_RHODES_LAW";
		case 659:
			return "TF_RDTC1_GOLD";
		case 660:
			return "TF_RDTC1_FIRST_PERSON_REMINDER";
		case 661:
			return "TF_CARAVAN_MISSION_BLIPS";
		case 662:
			return "TF_INSPECTION_TOGGLE_VIEW";
		case 663:
			return "TF_HONOR_GAIN_CHAPTER_2_BOUNTY_1";
		case 664:
			return "TF_HONOR_CHAPTER_3_MARY_0_2";
		case 665:
			return "TF_HONOR_LOSS_CHAPTER_3_MARY_1";
		case 666:
			return "TF_HONOR_GAIN_CHAPTER_3_MARY_1";
		case 667:
			return "TF_HONOR_GAIN_CHAPTER_4_NATIVE_0";
		case 668:
			return "TF_HONOR_GAIN_CHAPTER_4_SUSAN_1";
		case 669:
			return "TF_HONOR_LOSE_CHAPTER_4_SUSAN_1";
		case 670:
			return "TF_HONOR_OPTIONAL_MISSION";
		case 671:
			return "TF_SCENT_BLOCKER_USED";
		case 672:
			return "TF_SCENT_BLOCKER_EXPIRED";
		case 673:
			return "TF_SATCHEL_FULL";
		case 674:
			return "TF_SATCHEL_FULL_ANIMAL";
		case 675:
			return "TF_INCREASE_POUCH_CAPACITY";
		case 676:
			return "TF_DEADEYE_EMPTY";
		case 677:
			return "TF_DEADEYE_UNLOCK_LEVEL_2";
		case 678:
			return "TF_DEADEYE_UNLOCK_LEVEL_3";
		case 679:
			return "TF_DEADEYE_UNLOCK_LEVEL_4";
		case 680:
			return "TF_DEADEYE_UNLOCK_LEVEL_5";
		case 681:
			return "TF_DEADEYE_UNLOCK_LEVEL_2_REMINDER";
		case 682:
			return "TF_DEADEYE_UNLOCK_LEVEL_3_REMINDER";
		case 683:
			return "TF_DEADEYE_UNLOCK_LEVEL_4_REMINDER";
		case 684:
			return "TF_DEADEYE_UNLOCK_LEVEL_5_REMINDER";
		case 685:
			return "TF_FORTIFY_TANK";
		case 686:
			return "TF_FORTIFY_CORE";
		case 687:
			return "TF_MISSION_AREA_BLIP";
		case 688:
			return "TF_ALT_AMMO";
		case 689:
			return "TF_COMPASS";
		case 690:
			return "TF_NO_RADAR";
		case 691:
			return "TF_VIEW_PHOTOS";
		case 692:
			return "TF_PICK_HERB";
		case 693:
			return "TF_CARAVAN_HITCHED_HORSE";
		case 694:
			return "TF_CARAVAN_HITCHED_HORSE_EXISTS";
		case 695:
			return "TF_CARAVAN_CRAFTING_FIRE";
		case 696:
			return "TF_BEECHERS_CRAFTING_FIRE";
		case 697:
			return "TF_STUDY_BINOC";
		case 698:
			return "TF_MISSIONS_LOCKED_WANTED";
		case 699:
			return "TF_AIM_AMBUSH";
		case 700:
			return "TF_ROB_AMBUSH";
		case 701:
			return "TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES";
		case 702:
			return "TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD";
		case 703:
			return "TF_CAMERA_ITEM";
		case 704:
			return "TF_CAMP_CARRIABLES_NO_CORPSES";
		case 705:
			return "TF_CAMP_CARRIABLES_NO_CORPSES_RANCH";
		case 706:
			return "TF_CAMP_CARRIABLES_PEARSON";
		case 707:
			return "TF_CAMP_CARRIABLES_UNCLE";
		case 708:
			return "TF_WEAPON_FAMILIARITY";
		case 709:
			return "TF_DIFFERENT_HORSES";
		case 710:
			return "TF_PLAY_SPECIAL";
		case 711:
			return "TF_PLAY_ULTIMATE";
		case 712:
			return "TF_GANG_TAKE";
		case 713:
			return "TF_MP_LB_DPAD";
		case 714:
			return "TF_MP_LB_HLP";
		case 715:
			return "TF_MP_IC_EWC";
		case 716:
			return "TF_MP_IC_FTB";
		case 717:
			return "TF_MP_IC_WOC_FFA";
		case 718:
			return "TF_MP_IC_WOC_TEAM";
		case 719:
			return "TF_MP_IC_TT";
		case 720:
			return "TF_MP_IC_SO";
		case 721:
			return "TF_MP_IC_TSO";
		case 722:
			return "TF_MP_IC_GR_FFA";
		case 723:
			return "TF_MP_IC_GR_TEAM";
		case 724:
			return "TF_MP_STD_RACE";
		case 725:
			return "TF_MP_OPEN_RACE";
		case 726:
			return "TF_MP_FL_OL";
		case 727:
			return "TF_MP_FL_GS";
		case 728:
			return "TF_MP_FL_HOR";
		case 729:
			return "TF_MP_FL_HOR_R";
		case 730:
			return "TF_MP_FL_HOR_C";
		case 731:
			return "TF_MP_FL_HOR_J";
		case 732:
			return "TF_MP_FL_HOR_END";
		case 733:
			return "TF_MP_BONUS_EXCLUSIVE";
		case 734:
			return "TF_MP_BONUS_SPECIAL";
		case 735:
			return "TF_MP_XP_BONUS_ULTIMATE";
		case 736:
			return "TF_MP_COOP_HELP_TEXT_WITH_POSSE";
		case 737:
			return "TF_MP_COOP_HELP_TEXT_SOLO";
		case 738:
			return "TF_MP_WANTED_LOOTING";
		case 739:
			return "TF_MP_SATCHEL_FULL";
		case 740:
			return "TF_MP_SATCHEL_FULL_ANIMAL";
		case 741:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT1";
		case 742:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT2";
		case 743:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT3";
		case 744:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT4";
		case 745:
			return "TF_MP_BOUNTY_LOW";
		case 746:
			return "TF_MP_BOUNTY_MEDIUM";
		case 747:
			return "TF_MP_BOUNTY_HIGH";
		case 748:
			return "TF_MP_BOUNTY_FOLLOW_UP";
		case 749:
			return "TF_MP_BOUNTY_PAID_OFF";
		case 750:
			return "TF_MP_BOUNTY_HUNTERS_KILLED";
		case 751:
			return "TF_MP_BOUNTY_HUNTERS_ESCAPED";
		case 752:
			return "TF_MP_TARGET_RACE";
		case 753:
			return "TF_MP_IC_CTF_DROP";
		case 754:
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT_LB";
		case 755:
			return "TF_MP_DAILY_CHALLENGES_FIRST_TIME";
		case 756:
			return "TF_MP_BOUNTY_HUNTERS_CANT_PAY";
		case 757:
			return "TF_MP_NOTORIETY_FIRST_TIME";
		case 758:
			return "TF_MP_SHOP_NO_INTERACT_BANDANA";
		case 759:
			return "TF_MP_REMOVE_DEFENSIVE_MODE";
		case 760:
			return "TF_MP_CHARGES_PRESSED";
		case 761:
			return "TF_MP_PRESSED_CHARGES";
		case 762:
			return "TF_MP_KILLED_DEFENSIVE_PLAYER";
		case 763:
			return "TF_MP_DEFENSIVE_FORCE";
		case 764:
			return "TF_MP_DEFENSIVE_FIRST";
		case 765:
			return "TF_MP_LEMAT_REVOLVER";
		case 766:
			return "TF_MP_HELP_HOSTILITY_RESET";
		case 767:
			return "TF_MP_DEFEND_AGAINST_HOSTILE_PLAYERS";
		case 768:
			return "TF_MP_HOSTILE_JOINED_POSSE";
		case 769:
			return "TF_MP_SHOP_TRAVELLING_SALESMAN_CAMP";
		case 770:
			return "TF_MP_COLLECTORS_BAG";
		case 771:
			return "TF_MP_COLLECTIBLE_MAP_RANDOM";
		case 772:
			return "TF_MP_COLLECTIBLE_MAP";
		case 773:
			return "TF_MP_COLLECTIBLE_WEEKLY_AVAILABLE";
		case 774:
			return "TF_MP_COLLECTIBLE_OPEN_WEEKLY_LIST";
		case 775:
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_INTRO";
		case 776:
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_INTRO";
		case 777:
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_INTRO";
		case 778:
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_INTRO";
		case 779:
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_INTRO";
		case 780:
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_INTRO";
		case 781:
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_INTRO";
		case 782:
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_INTRO";
		case 783:
			return "TF_MP_COLLECTIBLE_BOTTLES_INTRO";
		case 784:
			return "TF_MP_COLLECTIBLE_COINS_INTRO";
		case 785:
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_INTRO";
		case 786:
			return "TF_MP_COLLECTIBLE_ARROWHEADS_INTRO";
		case 787:
			return "TF_MP_COLLECTIBLE_FLOWERS_INTRO";
		case 788:
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_INTRO";
		case 789:
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_SET_COMPLETE";
		case 790:
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_SET_COMPLETE";
		case 791:
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_SET_COMPLETE";
		case 792:
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_SET_COMPLETE";
		case 793:
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_SET_COMPLETE";
		case 794:
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_SET_COMPLETE";
		case 795:
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_SET_COMPLETE";
		case 796:
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_SET_COMPLETE";
		case 797:
			return "TF_MP_COLLECTIBLE_BOTTLES_SET_COMPLETE";
		case 798:
			return "TF_MP_COLLECTIBLE_COINS_SET_COMPLETE";
		case 799:
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_SET_COMPLETE";
		case 800:
			return "TF_MP_COLLECTIBLE_ARROWHEADS_SET_COMPLETE";
		case 801:
			return "TF_MP_COLLECTIBLE_FLOWERS_SET_COMPLETE";
		case 802:
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_SET_COMPLETE";
		case 803:
			return "TF_MP_COLLECTIBLE_BUY_BAG";
		case 804:
			return "TF_MP_COLLECTIBLE_FIND_SALESWOMAN";
		case 805:
			return "TF_MP_COLLECTIBLE_FOUND_CONDOR_EGG";
		case 806:
			return "TF_MP_COLLECTIBLES_COLLECTED";
		case 807:
			return "TF_MP_NB_RIVAL_COLLECTOR_RC_KILLED";
		case 808:
			return "TF_MP_NB_GRAVEROBBER_INTRO";
		case 809:
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL";
		case 810:
			return "TF_MP_NB_GRAVEROBBER_DIGGING_SITES";
		case 811:
			return "TF_MP_NB_GRAVEROBBER_NO_FIND";
		case 812:
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL_POSSE";
		case 813:
			return "TF_LEARN_RECIPE";
		case 814:
			return "TF_HORSE_CALL_HORSE_VEHICLE";
		case 815:
			return "TF_VEHICLE_FULL_FISH";
		case 816:
			return "TF_VEHICLE_UNSUPPORTED_FISH";
		case 817:
			return "TF_MP_METAL_DETECTOR";
		case 818:
			return "TF_MP_BROKE_EGG_IN_NEST";
		case 819:
			return "TF_MP_SKILL_POTENTIAL";
		case 820:
			return "TF_MP_SKILL_INTUITION";
		case 821:
			return "TF_MP_SKILL_DIVNATION";
		case 822:
			return "TF_MP_SKILL_ASSISTANCE";
		case 823:
			return "TF_MP_SKILL_COLLECTOR_EVENTS";
		case 824:
			return "TF_MP_SKILL_EAGLE_EYE_PLUS";
		case 825:
			return "TF_MP_SKILL_FOCUS";
		case 826:
			return "TF_MP_SKILL_PERCEPTION";
		case 827:
			return "TF_MP_SKILL_DUCKING_INTRO";
		case 828:
			return "TF_MP_SKILL_DUCKING";
		case 829:
			return "TF_MP_SKILL_BOUNTY_EVENTS";
		case 830:
			return "TF_MP_SKILL_BOUNTY_MEDIUM";
		case 831:
			return "TF_MP_SKILL_BOUNTY_HARD";
		case 832:
			return "TF_MP_SKILL_BOUNTY_PLAYER";
		case 833:
			return "TF_MP_SKILL_EFFICIENCY";
		case 834:
			return "TF_MP_SKILL_AWARENESS";
		case 835:
			return "TF_MP_SKILL_PROTECTION";
		case 836:
			return "TF_MP_SKILL_DOG_WARNING";
		case 837:
			return "TF_MP_SKILL_DOG_WARNING_NO_DOG";
		case 838:
			return "TF_MP_SKILL_TRADER_EVENTS";
		case 839:
			return "TF_MP_SKILL_GUN_TRICK_FIRST";
		case 840:
			return "TF_MP_SKILL_GUN_TRICK";
		case 841:
			return "TF_MP_SKILL_GUN_TRICK_DUAL";
		case 842:
			return "TF_MP_SKILL_TONIC_INCREASE";
		case 843:
			return "TF_MP_SKILL_KIT_INCREASE";
		case 844:
			return "TF_MP_SKILL_PROVISION_INCREASE";
		case 845:
			return "TF_MP_SKILL_VALUABLES_INCREASE";
		case 846:
			return "TF_MP_SKILL_INGREDIENTS_INCREASE";
		case 847:
			return "TF_MP_SKILL_HUNTING_MAT_INCREASE";
		case 848:
			return "TF_MP_GET_METAL_DETECTOR";
		case 849:
			return "TF_MP_GET_IMPROVED_BINOCULARS";
		case 850:
			return "TF_MP_GET_SHOVEL";
		case 851:
			return "TF_HUNTING_WAGON_INTRO";
		case 852:
			return "TF_BOUNTY_WAGON_INTRO";
		case 853:
			return "TF_MP_BOUNTY_WAGON_ON_MISSION";
		case 854:
			return "TF_MP_BOUNTY_WAGON_DESTROYED_ON_MISSION";
		case 855:
			return "TF_MP_BOUNTY_WAGON_STOW";
		case 856:
			return "TF_HUNTING_WAGON_STOW_INTRO";
		case 857:
			return "TF_TRADDER_LETTER_INTRO";
		case 858:
			return "TF_MP_FL_TRA_COL";
		case 859:
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

bool func_157(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_156(iParam0, 0), " Seconds ", iVar2);
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

bool func_158(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_159(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_160()
{
	if (!func_246())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

bool func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-951341587);
		case 12:
			return UNLOCK::_UNLOCK_IS_VISIBLE(355797628);
		case 13:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1885541620);
		case 14:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1587645914);
		case 15:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1325269752);
		case 16:
			return UNLOCK::_UNLOCK_IS_VISIBLE(65073703);
		case 17:
			return UNLOCK::_UNLOCK_IS_VISIBLE(830543521);
		case 18:
			return UNLOCK::_UNLOCK_IS_VISIBLE(299289203);
		case 19:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-587023018);
		case 20:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-781188238);
		case 21:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1976306104);
		case 22:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-779958017);
		case 23:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1877599955);
		case 24:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1358340808);
		case 25:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-252816221);
		case 26:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-320798538);
		case 27:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1123146868);
		case 28:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-677732579);
		case 29:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1394960149);
		case 30:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-2076331328);
		case 31:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-599019401);
		case 32:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1985431160);
		case 33:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1151765962);
		case 34:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1449882070);
		case 35:
			return UNLOCK::_UNLOCK_IS_VISIBLE(464775907);
		case 36:
			return UNLOCK::_UNLOCK_IS_VISIBLE(278859029);
		case 37:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1223981588);
		case 38:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1422895126);
		default:
			break;
	}
	return false;
}

void func_162(char* sParam0)
{
	if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0(sParam0);
	}
}

bool func_163(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_247(iVar0) || func_248(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_164(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_165(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 - (Global_1952230[iParam0 /*23*/].f_1 && iParam1));
}

void func_166(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_244(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_167(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_168(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

void func_169(var uParam0)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cVar0, ": ", 64);
	iVar8 = uParam0->f_28;
	StringConCat(&cVar0, MISC::_CREATE_VAR_STRING(2, func_222(iVar8)), 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, &cVar0);
}

void func_170(var uParam0)
{
	char cVar0[64];

	if (uParam0->f_28 > 0)
	{
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAM_PM_HUD_FILTINTEN"), 64);
		StringConCat(&cVar0, ": ", 64);
		StringConCat(&cVar0, func_249(BUILTIN::CEIL((uParam0->f_27 * 100f))), 64);
		StringConCat(&cVar0, "%", 64);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, &cVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
	}
}

int func_171(var uParam0)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar8;
	int iVar9;

	fVar0 = 0.17f;
	iVar1 = 0;
	switch (uParam0->f_69)
	{
		case 0:
			uParam0->f_71 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(uParam0->f_46 - Vector(0.2f, 0f, 0f), uParam0->f_46 + Vector(0.2f, 0f, 0f), fVar0, 3167, 0, 4);
			uParam0->f_69 = 1;
			break;
		case 1:
			iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_71, &iVar1, &vVar2, &uVar5, &iVar8);
			if (iVar1 > 0)
			{
				DEBUG::_0xA308F935BDECCEC0(174248, 190, "[NET_ADVANCED_CAMERA_SHOULD_LEAVE_PORTRAIT_MODE] Hit Status: ", func_250(iVar9, 0), " iHitSomething: ", iVar1, " HitPos: ", MISC::_0x6C4DBF553885F9EB(vVar2), " entity: ", func_205(ENTITY::GET_ENTITY_MODEL(iVar8), 0));
			}
			if (iVar9 == 1)
			{
			}
			else
			{
				uParam0->f_69 = 0;
				DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA_SHOULD_LEAVE_PORTRAIT_MODE] iHitSomething: ", iVar1);
				uParam0->f_72 = iVar1 != 0;
				return uParam0->f_72;
			}
	}
	return 0;
}

bool func_172(var uParam0)
{
	if (PED::IS_PED_FALLING(Global_33) || PED::_IS_PED_SLIDING(Global_33))
	{
		return true;
	}
	if ((func_67(uParam0) == 2 && func_176(uParam0) >= 1) && func_176(uParam0) <= 5)
	{
		return true;
	}
	return false;
}

void func_173(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if ((func_6(uParam0, iParam2) || func_41(uParam0)) || (iParam1 == 3 && func_97(Global_33)))
	{
		if (func_175(uParam0->f_5[iParam1], 0))
		{
			func_98(uParam0->f_5[iParam1], 0, 1, 1);
			if (bParam3)
			{
				func_99(uParam0->f_5[iParam1], 0, 1);
			}
		}
	}
	else if (!func_175(uParam0->f_5[iParam1], 0))
	{
		func_98(uParam0->f_5[iParam1], 1, 1, 1);
		func_99(uParam0->f_5[iParam1], 1, 1);
	}
}

void func_174(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_6(uParam0, iParam3))
	{
		if (func_175(uParam0->f_5[iParam1], 0))
		{
			func_98(uParam0->f_5[iParam1], 0, 1, 1);
			func_99(uParam0->f_5[iParam1], 0, 1);
		}
	}
	else if (func_6(uParam0, iParam2) || func_41(uParam0))
	{
		if (func_175(uParam0->f_5[iParam1], 0))
		{
			func_98(uParam0->f_5[iParam1], 0, 1, 1);
		}
	}
	else if (!func_175(uParam0->f_5[iParam1], 0))
	{
		func_98(uParam0->f_5[iParam1], 1, 1, 1);
		func_99(uParam0->f_5[iParam1], 1, 1);
	}
}

bool func_175(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 145, "IS_USE_CONTEXT_ENABLED - Invalid context! Returning false.");
		return false;
	}
	return !func_244(iParam0, 4);
}

int func_176(var uParam0)
{
	return uParam0->f_66;
}

int func_177(var uParam0)
{
	return uParam0->f_67;
}

void func_178(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__SET__FIRST_PERSON_CAMERA_STATE] current state: ", func_251(uParam0->f_67, 0), " new state: ", func_251(iParam1, 0));
	uParam0->f_67 = iParam1;
}

void func_179()
{
	func_9(32);
	func_12(64);
}

void func_180(var uParam0)
{
	if (func_45(uParam0->f_5[6]) && func_76(uParam0->f_5[6], 1))
	{
		if (func_252(uParam0->f_5[6], 1, 1) && func_253(uParam0) < 3)
		{
			func_254(uParam0);
			func_40(10);
			DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__CAMERA_ZOOM: zooming in, level is now ", func_253(uParam0));
			if (func_253(uParam0) >= 3)
			{
				func_98(uParam0->f_5[6], 0, 1, 1);
				func_99(uParam0->f_5[6], 0, 1);
				func_98(uParam0->f_5[8], 1, 1, 1);
				func_99(uParam0->f_5[8], 1, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__CAMERA_ZOOM: disabing multi prompt and displaying zoom out only");
			}
		}
		else if (func_252(uParam0->f_5[6], 0, 1) && func_253(uParam0) > 1)
		{
			func_255(uParam0);
			func_40(11);
			DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__CAMERA_ZOOM: zooming out, level is now ", func_253(uParam0));
			if (func_253(uParam0) <= 1)
			{
				func_98(uParam0->f_5[6], 0, 1, 1);
				func_99(uParam0->f_5[6], 0, 1);
				func_98(uParam0->f_5[7], 1, 1, 1);
				func_99(uParam0->f_5[7], 1, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__CAMERA_ZOOM: disabing multi prompt and displaying zoom in only");
			}
		}
	}
	else if (func_45(uParam0->f_5[7]) && func_76(uParam0->f_5[7], 1))
	{
		if (func_256(uParam0->f_5[7], 1))
		{
			func_254(uParam0);
			func_40(10);
			func_98(uParam0->f_5[7], 0, 1, 1);
			func_99(uParam0->f_5[7], 0, 1);
			func_98(uParam0->f_5[6], 1, 1, 1);
			func_99(uParam0->f_5[6], 1, 1);
			DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__CAMERA_ZOOM: disabing zoom in prompt and displaying zoom multi prompt");
		}
	}
	else if (func_45(uParam0->f_5[8]) && func_76(uParam0->f_5[8], 1))
	{
		if (func_256(uParam0->f_5[8], 1))
		{
			func_255(uParam0);
			func_40(11);
			func_98(uParam0->f_5[8], 0, 1, 1);
			func_99(uParam0->f_5[8], 0, 1);
			func_98(uParam0->f_5[6], 1, 1, 1);
			func_99(uParam0->f_5[6], 1, 1);
			DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__CAMERA_ZOOM: disabing zoom out prompt and displaying zoom multi prompt");
		}
	}
}

void func_181(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0->f_5[5]) && func_252(uParam0->f_5[5], 1, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_92(uParam0->f_29, 1);
		uParam0->f_30 = func_92(uParam0->f_28, 1);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_93(uParam0->f_30);
		func_102(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_182(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0->f_5[5]) && func_252(uParam0->f_5[5], 0, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_92(uParam0->f_29, 0);
		uParam0->f_30 = func_92(uParam0->f_28, 0);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_93(uParam0->f_30);
		func_102(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_183(var uParam0)
{
	if (func_45(uParam0->f_5[4]) && func_252(uParam0->f_5[4], 1, 1))
	{
		if (uParam0->f_27 < 1f)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 + 0.1f);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
			DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__INCREASE__FILTER_MOD]");
		}
		func_102(uParam0);
	}
}

void func_184(var uParam0)
{
	if (func_45(uParam0->f_5[4]) && func_252(uParam0->f_5[4], 0, 1))
	{
		if (uParam0->f_27 > 0.1f)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 - 0.1f);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
			DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__INCREASE__FILTER_MOD]");
		}
		func_102(uParam0);
	}
}

bool func_185()
{
	if (CAM::_0x74F1D22EFA71FAB8() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__STOP__CAMERA_SOUND] in cinematic mode or cinematic camera is rendering");
		return true;
	}
	return false;
}

bool func_186()
{
	if (PED::_IS_PED_SLIDING(Global_33))
	{
		return true;
	}
	return false;
}

float func_187()
{
	float fVar0;
	float fVar1;

	fVar0 = ((Global_1940237.f_15.f_1 - func_257()) * (1f / (1f - func_257())));
	fVar1 = ((Global_1940237.f_15.f_7 * fVar0) + (Global_1940237.f_15.f_6 * (1f - fVar0)));
	return (fVar1 * Global_1940237.f_15.f_3);
}

void func_188()
{
	func_12(64);
	func_12(32);
}

int func_189(var uParam0)
{
	return uParam0->f_64;
}

void func_190(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__SET__PORTRAIT_CONTROL_MODE] current portrait control mode: ", func_258(iParam1, 0));
	uParam0->f_68 = iParam1;
}

void func_191(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__SET__PORTRAIT_STATE] current state: ", func_259(uParam0->f_64, 0), " new state: ", func_259(iParam1, 0));
	uParam0->f_64 = iParam1;
}

bool func_192(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	var uVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;

	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 0f, 4f, 0f) };
	if (func_163(Global_33, 1))
	{
		vVar4.f_2 = (vVar4.z + 1f);
	}
	else
	{
		vVar4.f_2 = (vVar4.z + 50f);
	}
	bVar9 = false;
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &fVar7, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar8, false);
	if (vVar0.z > fVar7)
	{
		if ((vVar0.z - fVar7) > 2f)
		{
			DEBUG::_0x4DC69742196F818A(408, 190, "[NET_ADVANCED_CAMERA__CREATE__CAMERA] final create position (a) was out of range setting flag to used cached position", vVar0.z, " ", fVar7);
			bVar9 = true;
		}
	}
	else if ((fVar7 - vVar0.z) > 2f)
	{
		DEBUG::_0x4DC69742196F818A(408, 190, "[NET_ADVANCED_CAMERA__CREATE__CAMERA] final create position (b) was out of range setting flag to used cached position", vVar0.z, " ", fVar7);
		bVar9 = true;
	}
	vVar10 = { ENTITY::GET_ENTITY_ROTATION(Global_33, 2) };
	vVar13 = { vVar10.x, vVar10.y, (vVar10.z - 180f) };
	fVar16 = 50f;
	if (!bVar9)
	{
		uParam0->f_49 = { vVar0.x, vVar0.y, (vVar0.z - 1f) };
		uParam0->f_52 = fVar3;
		uParam0->f_46 = { vVar4.x, vVar4.y, (fVar7 + 1f) };
	}
	uParam0->f_88 = vVar13.x;
	uParam0->f_87 = vVar13.z;
	uParam0->f_53 = vVar10.z;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		uParam0->f_35 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_46, vVar13, fVar16, true, 2);
	}
	uParam0->f_36 = 25f;
	uParam0->f_36.f_1 = 2f;
	uParam0->f_36.f_2 = 128f;
	uParam0->f_36.f_3 = 30f;
	uParam0->f_36.f_4 = 30f;
	uParam0->f_36.f_5 = 90f;
	uParam0->f_36.f_6 = 1;
	uParam0->f_36.f_7 = 0;
	uParam0->f_36.f_8 = 1;
	uParam0->f_36.f_9 = 1;
	uParam0->f_92 = { vVar13 };
	uParam0->f_95 = 0f;
	uParam0->f_96 = 0.5f;
	uParam0->f_92 = (uParam0->f_92 + 1f);
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_35, &(uParam0->f_36));
	CAM::_0x9F97E85EC142255E(uParam0->f_35, 0);
	CAM::_0x42ED56B02E05D109(uParam0->f_35, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_35, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_40(14);
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, false, false, true, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	PED::_0x2208438012482A1A(Global_33, false, false);
	func_260(uParam0);
	return true;
}

void func_193(var uParam0)
{
	int iVar0;

	iVar0 = func_125(uParam0->f_5[13]);
	HUD::_UIPROMPT_SET_TEXT(Global_1952230[iVar0 /*23*/].f_3, "ADV_CAM_POSES");
	func_82(uParam0, 4096);
	func_82(uParam0, 8192);
	func_81(uParam0, 16384);
	func_81(uParam0, 32768);
	if (uParam0->f_28 == 0)
	{
		func_82(uParam0, 4);
	}
	func_99(uParam0->f_5[4], 1, 1);
	func_190(uParam0, 1);
}

void func_194()
{
	func_9(64);
	func_12(32);
}

void func_195(var uParam0)
{
	vector3 vVar0;
	vector3 vVar25;
	vector3 vVar28;

	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_3 = 0;
	vVar0.f_4 = 21030;
	vVar25 = { func_262(uParam0->f_46 - func_261(PLAYER::GET_PLAYER_INDEX())) };
	vVar28 = { func_261(PLAYER::GET_PLAYER_INDEX()) + vVar25 * Vector(2f, 2f, 2f) };
	vVar0 = { vVar28 };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_33, &vVar0);
}

void func_196(var uParam0)
{
	func_263(uParam0);
	func_264(uParam0);
	if (uParam0->f_78 > 16)
	{
		if ((uParam0->f_95 - 0.07f) > -10f)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Right stick PAN value was ", uParam0->f_78);
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan right accepted, modifying rotation and setting new point at limiter to ", uParam0->f_95);
			if (uParam0->f_78 > 100)
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 - 0.6f);
				uParam0->f_95 = (uParam0->f_95 - (0.07f * 3f));
			}
			else
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 - 0.2f);
				uParam0->f_95 = (uParam0->f_95 - 0.07f);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Pan left check");
		if ((uParam0->f_95 + 0.07f) < 10f)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Right stick PAN value was ", uParam0->f_78);
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan left accepted, modifying rotation and setting new point at limiter to ", uParam0->f_95);
			if (uParam0->f_78 < -100)
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 + 0.6f);
				uParam0->f_95 = (uParam0->f_95 + (0.07f * 3f));
			}
			else
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 + 0.2f);
				uParam0->f_95 = (uParam0->f_95 + 0.07f);
			}
		}
	}
	if (uParam0->f_79 > 16)
	{
		if ((uParam0->f_96 - 0.07f) > -10f)
		{
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan down accepted, new point at height offset is ", uParam0->f_96);
			if (uParam0->f_79 > 100)
			{
				uParam0->f_92 = (uParam0->f_92 - 0.6f);
				uParam0->f_96 = (uParam0->f_96 - (0.07f * 3f));
			}
			else
			{
				uParam0->f_92 = (uParam0->f_92 - 0.2f);
				uParam0->f_96 = (uParam0->f_96 - 0.07f);
			}
		}
	}
	if (uParam0->f_79 < -16)
	{
		if ((uParam0->f_96 + 0.07f) < 10f)
		{
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan up accepted, new point at height offset is ", uParam0->f_96);
			if (uParam0->f_79 < -100)
			{
				uParam0->f_92 = (uParam0->f_92 + 0.6f);
				uParam0->f_96 = (uParam0->f_96 + (0.07f * 3f));
			}
			else
			{
				uParam0->f_92 = (uParam0->f_92 + 0.2f);
				uParam0->f_96 = (uParam0->f_96 + 0.07f);
			}
		}
	}
	CAM::SET_CAM_PARAMS(uParam0->f_35, uParam0->f_46, uParam0->f_92, 50f, 0, 1, 1, 2, 0, 0);
}

void func_197(var uParam0)
{
	if (func_252(uParam0->f_5[9], 0, 1))
	{
		uParam0->f_31++;
		if (uParam0->f_31 >= 8)
		{
			uParam0->f_31 = 0;
		}
		func_265(uParam0);
	}
	if (func_252(uParam0->f_5[9], 1, 1))
	{
		uParam0->f_31 = (uParam0->f_31 - 1);
		if (uParam0->f_31 < 0)
		{
			uParam0->f_31 = (8 - 1);
		}
		func_265(uParam0);
	}
}

void func_198(var uParam0)
{
	switch (func_176(uParam0))
	{
		case 0:
			if (func_252(uParam0->f_5[10], 0, 1))
			{
				uParam0->f_32++;
				if (uParam0->f_32 >= 4)
				{
					uParam0->f_32 = 0;
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_266(uParam0, 1);
			}
			if (func_252(uParam0->f_5[10], 1, 1))
			{
				uParam0->f_32 = (uParam0->f_32 - 1);
				if (uParam0->f_32 < 0)
				{
					uParam0->f_32 = (4 - 1);
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_82(uParam0, 128);
				func_266(uParam0, 1);
			}
			break;
		case 1:
			func_11(1);
			func_266(uParam0, 2);
			break;
		case 2:
			func_260(uParam0);
			func_24(uParam0);
			func_266(uParam0, 3);
			break;
		case 3:
			if (PED::_IS_PED_USING_SCENARIO_HASH(Global_33, func_267(uParam0->f_32)) && func_86(uParam0) > 1500)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 190, "Player is using current indexed scenario: ", func_268(func_267(uParam0->f_32), 0));
				func_266(uParam0, 4);
			}
			if (func_86(uParam0) > 7000)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 190, "|NET_ADVANCED_CAMERA_POSE_FADE_IN| scenario took longer then 7 seconds -- forcing state change ", func_268(func_267(uParam0->f_32), 0));
				func_266(uParam0, 4);
				func_24(uParam0);
			}
			break;
		case 4:
			func_53(1);
			func_266(uParam0, 5);
			func_24(uParam0);
			break;
		case 5:
			if (TASK::_0x02EBBB3989B7E695(Global_33) || func_86(uParam0) > 7000)
			{
				func_81(uParam0, 2);
				func_81(uParam0, 1);
				func_81(uParam0, 128);
				func_266(uParam0, 0);
			}
			break;
	}
}

void func_199(var uParam0)
{
	int iVar0;

	if (func_39(uParam0->f_5[13], 1))
	{
		iVar0 = func_125(uParam0->f_5[13]);
		switch (func_103(uParam0))
		{
			case 0:
				func_82(uParam0, 4096);
				func_82(uParam0, 8192);
				func_81(uParam0, 16384);
				func_81(uParam0, 32768);
				if (uParam0->f_28 == 0)
				{
					func_82(uParam0, 4);
				}
				func_99(uParam0->f_5[4], 1, 1);
				HUD::_UIPROMPT_SET_TEXT(Global_1952230[iVar0 /*23*/].f_3, "ADV_CAM_POSES");
				func_190(uParam0, 1);
				break;
			case 1:
				func_82(uParam0, 16384);
				func_82(uParam0, 32768);
				func_81(uParam0, 4096);
				func_81(uParam0, 8192);
				func_98(uParam0->f_5[4], 0, 1, 1);
				func_99(uParam0->f_5[4], 0, 1);
				HUD::_UIPROMPT_SET_TEXT(Global_1952230[iVar0 /*23*/].f_3, "ADV_CAM_FILTERS");
				func_190(uParam0, 0);
				break;
		}
	}
}

void func_200(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_201()
{
	if (func_269(Global_33, 242628503))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		DEBUG::_0xF0783374333FD8CE(8, 190, "[NET_ADVANCED_CAMERA__CLEANUP__POSES] player is performing SCRIPT_TASK_PERFORM_SEQUENCE, calling CLEAR_PED_TASKS");
	}
}

float func_202()
{
	return 130f;
}

float func_203(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES - entity1 does not exist");
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES - entity2 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_204(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "REMOVE_ENTITY_FROM_ITEMSET_SAFE: itemset is invalid, exiting");
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iParam0, iParam1);
		}
	}
}

var func_205(bool bParam0, int iParam1)
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

char* func_206()
{
	return "proc_bounty_target";
}

bool func_207(bool bParam0)
{
	if (func_58(Global_1280543, 4096))
	{
		switch (bParam0)
		{
			case joaat("A_C_CHICKEN_01"):
			case joaat("A_C_ELK_01"):
			case joaat("A_C_TURKEYWILD_01"):
			case joaat("A_C_BUCK_01"):
			case joaat("A_C_ALLIGATOR_01"):
			case joaat("A_C_ARMADILLO_01"):
			case joaat("A_C_BIGHORNRAM_01"):
			case joaat("A_C_POSSUM_01"):
			case joaat("A_C_SKUNK_01"):
			case joaat("A_C_BADGER_01"):
			case joaat("A_C_WOLF"):
			case joaat("A_C_BEAR_01"):
			case joaat("A_C_MOOSE_01"):
			case joaat("A_C_GOAT_01"):
			case joaat("A_C_TURTLESNAPPING_01"):
			case joaat("A_C_COW"):
			case joaat("A_C_SHEEP_01"):
			case joaat("A_C_COUGAR_01"):
			case joaat("A_C_FOX_01"):
			case joaat("A_C_GILAMONSTER_01"):
			case joaat("A_C_COYOTE_01"):
			case joaat("A_C_OX_01"):
			case joaat("A_C_BEARBLACK_01"):
			case joaat("A_C_BEAVER_01"):
			case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			case joaat("A_C_DOGAMERICANFOXHOUND_01"):
			case joaat("A_C_DEER_01"):
			case joaat("A_C_RACCOON_01"):
			case joaat("A_C_BUFFALO_01"):
			case joaat("A_C_PANTHER_01"):
			case joaat("A_C_PRONGHORN_01"):
			case joaat("A_C_BOAR_01"):
				return true;
		}
	}
	return false;
}

void func_208(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "ADD_TO_ITEMSET_SAFE: itemset is invalid, exiting");
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

int func_209(int iParam0)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		iVar0 = PED::_0xA65AA1ACE81E5A77(iParam0);
	}
	else
	{
		iVar0 = 1;
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__PED_SIZE_FROM_MODEL] model was not valid. Using PS_MEDIUM for pedSize");
	}
	return iVar0;
}

bool func_210(int iParam0)
{
	return (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0));
}

bool func_211(int iParam0)
{
	return (PED::_0x5102307CE88798EB(iParam0) && PED::IS_TRACKED_PED_VISIBLE(iParam0));
}

void func_212(int iParam0)
{
	int iVar0;

	iVar0 = func_217(iParam0);
	if (PED::_0x5102307CE88798EB(iParam0))
	{
		PED::_0x3088634CF8C819CF(iParam0);
	}
	func_204(iVar0, Global_1280543.f_1);
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__REMOVE__PED_FROM_GLOBAL_ITEMSET] removing ped from global list: ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_205(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
}

bool func_213(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_217(iParam0);
	if (((((func_210(iVar0) && !func_121(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_274(iParam0, func_270(), func_271(), func_272(), func_273())) && func_211(iParam0)) && func_275(iParam0) >= func_276(iParam1))
	{
		return true;
	}
	return false;
}

bool func_214(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_217(iParam0);
	if (((func_210(iVar0) && !func_121(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_274(iParam0, func_270(), func_271(), func_272(), func_273()))
	{
		if (!PED::_0x5102307CE88798EB(iParam0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		}
		else if (func_211(iParam0) && func_275(iParam0) >= func_276(iParam1))
		{
			return true;
		}
	}
	return false;
}

char* func_215(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_VIEW_FINDER_INIT";
		case 1:
			return "NET_ADVANCED_CAMERA_VIEW_FINDER_DEFAULT";
		case 2:
			return "NET_ADVANCED_CAMERA_VIEW_FINDER_GREEN";
		case 3:
			return "NET_ADVANCED_CAMERA_VIEW_FINDER_COOL_DOWN";
		case 4:
			return "NET_ADVANCED_CAMERA_VIEW_FINDER_RESET";
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

void func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::_0x63011D0C7C6519E0(func_70(0), 0, iParam0, iParam1, iParam2, iParam3);
	DEBUG::_0xF0783374333FD8CE(34952, 190, "[NET_ADVANCED_CAMERA__SET__VIEWFINDER_FX_COLOR] setting color R: ", iParam0, " G: ", iParam1, " B: ", iParam2, " A: ", iParam3);
}

int func_217(int iParam0)
{
	return iParam0;
}

bool func_218(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 58))
	{
		if (bParam1)
		{
			return ENTITY::IS_ENTITY_IN_AIR(iParam0, 1);
		}
		return true;
	}
	return false;
}

void func_219()
{
	char cVar0[32];
	int iVar4;
	int iVar5;

	StringCopy(&cVar0, "", 32);
	iVar4 = func_277();
	if (func_278(iVar4))
	{
		MemCopy(&cVar0, {func_279(iVar4)}, 4);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		iVar5 = func_280();
		StringCopy(&cVar0, func_281(iVar5), 32);
	}
	GRAPHICS::_0xD1031B83AC093BC7(&cVar0);
}

void func_220()
{
	char cVar0[16];
	char cVar2[16];
	int iVar4;

	StringCopy(&cVar0, "", 16);
	StringCopy(&cVar2, "", 16);
	iVar4 = func_282();
	if (func_283(iVar4))
	{
		StringCopy(&cVar0, func_284(iVar4), 16);
		StringCopy(&cVar2, func_285(iVar4), 16);
	}
	GRAPHICS::_0x9937FACBBF267244(&cVar0);
	GRAPHICS::_0x8952E857696B8A79(&cVar2);
}

void func_221()
{
	DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__SET__PICTURE_TAKEN] photo taken");
	func_71(&Global_1280543, 1);
}

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_PM_F_V0";
		case 1:
			return "CAM_PM_F_V1";
		case 2:
			return "CAM_PM_F_V2";
		case 3:
			return "CAM_PM_F_V3";
		case 4:
			return "CAM_PM_F_V4";
		case 5:
			return "CAM_PM_F_V5";
		case 6:
			return "CAM_PM_F_V6";
		case 7:
			return "CAM_PM_F_V7";
		case 8:
			return "CAM_PM_F_V8";
		case 9:
			return "CAM_PM_F_V9";
		case 10:
			return "CAM_PM_F_V10";
		case 11:
			return "CAM_PM_F_M1";
		case 12:
			return "CAM_PM_F_M2";
		case 13:
			return "CAM_PM_F_M3";
		case 14:
			return "CAM_PM_F_M4";
		case 15:
			return "CAM_PM_F_M5";
		case 16:
			return "CAM_PM_F_M6";
		case 17:
			return "CAM_PM_F_M7";
		case 18:
			return "CAM_PM_F_M8";
		case 19:
			return "CAM_PM_F_M9";
		case 20:
			return "CAM_PM_F_M10";
		case 21:
			return "CAM_PM_F_S1";
		case 22:
			return "CAM_PM_F_S2";
		case 23:
			return "CAM_PM_F_S3";
		case 24:
			return "CAM_PM_F_S4";
		case 25:
			return "CAM_PM_F_S5";
		case 26:
			return "CAM_PM_F_S6";
		case 27:
			return "CAM_PM_F_S7";
		case 28:
			return "CAM_PM_F_S8";
		case 29:
			return "CAM_PM_F_S9";
		case 30:
			return "CAM_PM_F_S10";
		case 31:
			return "CAM_PM_F_S11";
		case 32:
			return "CAM_PM_F_S12";
		case 33:
			return "CAM_PM_F_S13";
		case 34:
			return "CAM_PM_F_S14";
		case 35:
			return "CAM_PM_F_S15";
		case 36:
			return "CAM_PM_F_S16";
		case 37:
			return "CAM_PM_F_S17";
		case 38:
			return "CAM_PM_F_S18";
		default:
			break;
	}
	return "CAM_PM_F_V0";
}

int func_223(var uParam0)
{
	switch (func_67(uParam0))
	{
		case 1:
			if (CAM::_0x8B1A5FE7E41E52B2())
			{
				return 0;
			}
			else if (CAM::_0xB6A80E1E3A5444F1())
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			return BUILTIN::FLOOR(uParam0->f_36.f_3);
	}
	return 0;
}

struct<2> func_224(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_225(struct<2> Param0)
{
	return func_286(Param0);
}

void func_226(var uParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 190, "NET_ADVANCED_CAMERA__STUDY__ANIMALS_ON_SCREEN ");
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, false))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "ENTITY FOUND A TARGET");
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (!func_121(iVar1, 1))
			{
				func_287(iVar1, ENTITY::_GET_PED_ANIMAL_TYPE(iVar1), 1, 0);
			}
		}
	}
}

char* func_227(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_TAKE_PHOTO_STATE_INIT";
		case 1:
			return "NET_ADVANCED_CAMERA_TAKE_PHOTO_STATE_UPDATE";
		case 2:
			return "NET_ADVANCED_CAMERA_TAKE_PHOTO_STATE_COMPLETE";
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

void func_228(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_288(iParam0))
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

bool func_229(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_138(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_233(bParam0, 0));
		return false;
	}
	iVar0 = func_139(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_289(bParam0, 1399091007))
	{
		func_290(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_233(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

bool func_230(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_241(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_291(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_231(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_232(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

var func_233(bool bParam0, int iParam1)
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

int func_234(int iParam0)
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

int func_235(bool bParam0)
{
	struct<2> Var0;

	if (!func_138(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_236(bool bParam0)
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

int func_237(var uParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_292(iParam1, 0));
	return -1;
}

int func_238(bool bParam0)
{
	int iVar0;

	iVar0 = func_235(bParam0);
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
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_233(bParam0, 0));
	return 0;
}

char* func_239(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char* sVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_293(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_295(&Var0, func_294(0));
	}
	if (!func_296(&Var0, &iVar14, &sVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_233(bParam0, 0));
		return 0;
	}
	func_234(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", sVar15, " of item ", func_233(bParam0, 0));
	return sVar15;
}

int func_240(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_298(func_297(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_241(bool bParam0)
{
	if (func_299() == -1)
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

struct<4> func_242(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_300(bParam0, bParam1, 0) };
	return func_301(bParam0, Var0, Var0.f_4, bParam1);
}

char* func_243(int iParam0, int iParam1)
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

bool func_244(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_245(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	Global_1952230[iParam0 /*23*/].f_18 = bParam16;
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1952230[iParam0 /*23*/].f_3 = iVar0;
	func_166(iParam0, 1);
	func_167(iParam0, 1);
	func_168(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_302(iParam14, 0));
}

bool func_246()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_247(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case joaat("HEA_TUNNEL_02"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

char* func_249(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_250(int iParam0, int iParam1)
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

char* func_251(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_FIRST_PERSON_CAMERA_INIT";
		case 1:
			return "NET_ADVANCED_CAMERA_FIRST_PERSON_CAMERA_LOAD";
		case 2:
			return "NET_ADVANCED_CAMERA_FIRST_PERSON_CAMERA_CREATE";
		case 3:
			return "NET_ADVANCED_CAMERA_FIRST_PERSON_CAMERA_UPDATE";
		case 4:
			return "NET_ADVANCED_CAMERA_FIRST_PERSON_CAMERA_CLEANUP";
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

bool func_252(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_125(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3, iParam1);
}

int func_253(var uParam0)
{
	return uParam0->f_33;
}

void func_254(var uParam0)
{
	if (uParam0->f_33 < 3)
	{
		uParam0->f_33++;
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__INCREASE__FIRST_PERSON_ZOOM_LEVEL] iFirstPersonZoomLevel: ", uParam0->f_33);
	}
}

void func_255(var uParam0)
{
	if (uParam0->f_33 > 1)
	{
		uParam0->f_33 = (uParam0->f_33 - 1);
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__DECREASE__FIRST_PERSON_ZOOM_LEVEL] iFirstPersonZoomLevel: ", uParam0->f_33);
	}
}

bool func_256(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_125(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1952230[iVar0 /*23*/].f_3);
}

float func_257()
{
	return 0.5f;
}

char* func_258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CONTROL_MODE_POSE";
		case 1:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CONTROL_MODE_FILTER";
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

char* func_259(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CAMERA_INIT";
		case 1:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CAMERA_LOAD";
		case 2:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CAMERA_CREATE";
		case 3:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CAMERA_FADE_IN";
		case 4:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CAMERA_UPDATE";
		case 5:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CAMERA_EXIT_POSES";
		case 6:
			return "NET_ADVANCED_CAMERA_PORTRAIT_CAMERA_CLEANUP";
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

void func_260(var uParam0)
{
	int iVar0;

	func_303(uParam0);
	func_40(17);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, func_267(uParam0->f_32), 0, true, 0, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Global_33, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	DEBUG::_0xA308F935BDECCEC0(40, 190, "[NET_ADVANCED_CAMERA__START__POSE] task player scenario in place: ", func_268(func_267(uParam0->f_32), 0));
}

Vector3 func_261(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

Vector3 func_262(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_263(var uParam0)
{
	uParam0->f_74 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MOVE_LR")) * 127f));
	uParam0->f_75 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MOVE_UD")) * 127f));
	uParam0->f_78 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_LR")) * 127f));
	uParam0->f_79 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_UD")) * 127f));
}

void func_264(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (PAD::GET_CONTROL_VALUE(0, -1089155097) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(0, -310714049) - 127);
	if (uParam0->f_65 == 1)
	{
		iVar2 = CAM::GET_RENDERING_CAM();
	}
	else
	{
		iVar2 = uParam0->f_35;
	}
	if (iVar0 > 0)
	{
		if (uParam0->f_36.f_3 < 90f)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 + 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(iVar2, &(uParam0->f_36));
			if (func_76(uParam0->f_5[8], 1))
			{
				func_98(uParam0->f_5[8], 0, 1, 1);
				func_99(uParam0->f_5[8], 0, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: disabling zoom out only context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom out context is not being displayed");
			}
			if (!func_76(uParam0->f_5[6], 1))
			{
				func_98(uParam0->f_5[6], 1, 1, 1);
				func_99(uParam0->f_5[6], 1, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: enabling zoom context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom context is being displayed");
			}
			if (uParam0->f_56 < 0)
			{
				func_304(&(uParam0->f_56), 8);
			}
		}
		else
		{
			if (!func_76(uParam0->f_5[8], 1))
			{
				func_98(uParam0->f_5[8], 1, 1, 1);
				func_99(uParam0->f_5[8], 1, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: enabling zoom out only context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom out context is not being displayed");
			}
			if (func_76(uParam0->f_5[6], 1))
			{
				func_98(uParam0->f_5[6], 0, 1, 1);
				func_99(uParam0->f_5[6], 0, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: disabling zoom context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom context is being displayed");
			}
			func_132(&(uParam0->f_56));
		}
	}
	else
	{
		func_132(&(uParam0->f_56));
	}
	if (iVar0 == 0 && iVar1 > 0)
	{
		if (uParam0->f_36.f_3 > 30f)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 - 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(iVar2, &(uParam0->f_36));
			if (func_76(uParam0->f_5[7], 1))
			{
				func_98(uParam0->f_5[7], 0, 1, 1);
				func_99(uParam0->f_5[7], 0, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: disabling zoom in only context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom in context is not being displayed");
			}
			if (!func_76(uParam0->f_5[6], 1))
			{
				func_98(uParam0->f_5[6], 1, 1, 1);
				func_99(uParam0->f_5[6], 1, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: enabling zoom context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom context is being displayed");
			}
			if (uParam0->f_57 < 0)
			{
				func_304(&(uParam0->f_57), 9);
			}
		}
		else
		{
			if (!func_76(uParam0->f_5[7], 1))
			{
				func_98(uParam0->f_5[7], 1, 1, 1);
				func_99(uParam0->f_5[7], 1, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: enabling zoom in only context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom in context is not being displayed");
			}
			if (func_76(uParam0->f_5[6], 1))
			{
				func_98(uParam0->f_5[6], 0, 1, 1);
				func_99(uParam0->f_5[6], 0, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: disabling zoom context");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "NET_ADVANCED_CAMERA__UPDATE__FOCAL_LENGTH: zoom context is being displayed");
			}
			func_132(&(uParam0->f_57));
		}
	}
	else
	{
		func_132(&(uParam0->f_57));
	}
}

void func_265(var uParam0)
{
	func_40(16);
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, func_305(uParam0->f_31), func_84(0));
}

void func_266(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__SET__POSE_STATE] current State: ", func_306(uParam0->f_66, 0), " new state: ", func_306(iParam1, 0));
	uParam0->f_66 = iParam1;
}

bool func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WORLD_HUMAN_STARE_STOIC");
		case 1:
			return joaat("WORLD_HUMAN_STERNGUY_IDLES");
		case 2:
			return joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT");
		case 3:
			return joaat("WORLD_PLAYER_DYNAMIC_KNEEL");
		default:
			break;
	}
	return joaat("WORLD_HUMAN_STARE_STOIC");
}

var func_268(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(joaat("SCENARIO_TYPE_INVALID"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_269(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

float func_270()
{
	return 0.3f;
}

float func_271()
{
	return 0.7f;
}

float func_272()
{
	return 0.2f;
}

float func_273()
{
	return 0.7f;
}

bool func_274(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_307(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_275(int iParam0)
{
	return (func_308(iParam0) * 100f);
}

float func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.01f;
		case 1:
			return 0.02f;
		case 2:
			return 0.02f;
		case 3:
			return 0.03f;
		case 4:
			return 0.03f;
	}
	return 0.03f;
}

var func_277()
{
	return Global_1893599.f_2;
}

bool func_278(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_279(int iParam0)
{
	char[] cVar0[8];

	if (!func_278(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 11, "Invalid region passed to GET_REGION_PROPER_NAME.");
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887351[iParam0 /*36*/].f_23;
}

int func_280()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

char* func_281(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

var func_282()
{
	return Global_1896634.f_41;
}

bool func_283(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_284(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 87, "GET_DISTRICT_LABEL - Missing distract label: ", func_309(iParam0, 0));
	if (func_299() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 87, "GET_STATE_LABEL_FROM_DISTRICT - A state has not been specified for this district: ", func_309(iParam0, 0));
	if (func_299() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

int func_286(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_310(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_287(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;

	DEBUG::_0xF0783374333FD8CE(10920, 82, "PAUSE_MENU_UPDATE_ANIMAL_MAP_DISCOVERY: eAnimalStatItem - ", func_311(iParam1, 0), ", bSetObserved - ", MISC::_0xF216F74101968DB0(bParam2), ", disableCompendiumToast - ", MISC::_0xF216F74101968DB0(bParam3));
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 82, "PAUSE_MENU_UPDATE_ANIMAL_MAP_DISCOVERY: pedAnimal is invalid");
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 82, "PAUSE_MENU_UPDATE_ANIMAL_MAP_DISCOVERY: pedAnimal is not a ped");
		return;
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 82, "PAUSE_MENU_UPDATE_ANIMAL_MAP_DISCOVERY: GET_ENTITY_MODEL failed");
		return;
	}
	func_312(iParam0);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	func_313(iParam1, bVar0, vVar1, bParam2, bParam3);
	if (bParam2 && joaat("AT_HORSE") == iParam1)
	{
		COMPENDIUM::COMPENDIUM_HORSE_OBSERVED(iParam0, bParam3);
	}
}

bool func_288(int iParam0)
{
	return func_244(iParam0, 2);
}

int func_289(bool bParam0, bool bParam1)
{
	if (!func_138(bParam0, 0))
	{
		return func_314(func_297(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_315(bParam1, 0), " for item ", func_233(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

void func_290(bool bParam0, var uParam1, var uParam2)
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

var func_291(bool bParam0, int iParam1)
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

char* func_292(int iParam0, int iParam1)
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

struct<14> func_293(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_233(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_291(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_291(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_291(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_316(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_317(iParam6, 0));
	}
	return Var0;
}

struct<4> func_294(bool bParam0)
{
	int iVar0;

	iVar0 = func_241(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_301(923904168, func_318(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_301(923904168, func_318(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_301(923904168, func_318(bParam0), -740156546, 0);
}

void func_295(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_296(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_241(bParam3), uParam0, bParam2);
	if (*uParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *uParam1, "' with size ", *bParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_297(bool bParam0)
{
	return bParam0;
}

bool func_298(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

int func_299()
{
	return Global_1572887.f_13;
}

struct<5> func_300(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_318(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_139(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_233(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_317(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_301(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_294(bParam1) };
			if (bParam2 && func_319(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_320(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_320(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_321(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_322(bParam1) };
			switch (func_235(bParam0))
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
			if (func_323(bParam0, -1823706425))
			{
				Var0 = { func_301(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_323(bParam0, -1483207246))
			{
				Var0 = { func_301(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_301(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_323(bParam0, -1653629781))
			{
				Var0 = { func_301(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_324(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_323(bParam0, -1653629781))
			{
				Var0 = { func_301(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_233(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_233(bParam0, 0), ": ", func_291(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_301(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_138(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_233(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_241(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

char* func_302(int iParam0, int iParam1)
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

void func_303(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
	if (!PED::_0x3BDFCF25B58B0415(Global_33) && PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__SETUP__SCENARIO] Safe to clear pose task immediately.");
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	}
	ENTITY::SET_ENTITY_HEADING(Global_33, uParam0->f_52);
}

void func_304(var uParam0, int iParam1)
{
	if (*uParam0 < 0)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xF1C5310FEAA36B48(*uParam0, func_84(iParam1), Global_33, func_84(6), false, 0);
		DEBUG::_0xA308F935BDECCEC0(168, 190, "[NET_ADVANCED_CAMERA__PLAY__CAMERA_SOUND_WITH_ID] playing sound: ", func_84(iParam1), " with ID: ", *uParam0);
	}
}

char* func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "portrait_normal";
		case 1:
			return "portrait_happy";
		case 2:
			return "portrait_pensive";
		case 3:
			return "portrait_pensive_2";
		case 4:
			return "portrait_relaxed";
		case 5:
			return "portrait_angry";
		case 6:
			return "portrait_angry_2";
		case 7:
			return "portrait_annoyed";
		default:
			break;
	}
	return "portrait_normal";
}

char* func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_ADVANCED_CAMERA_POSE_INIT";
		case 1:
			return "NET_ADVANCED_CAMERA_POSE_FADE_OUT";
		case 2:
			return "NET_ADVANCED_CAMERA_POSE_TASK";
		case 3:
			return "NET_ADVANCED_CAMERA_POSE_FADE_IN";
		case 4:
			return "NET_ADVANCED_CAMERA_POSE_ACTIVE";
		case 5:
			return "NET_ADVANCED_CAMERA_POSE_RESOLVE";
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

bool func_307(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			DEBUG::_0xA308F935BDECCEC0(408, 0, "IS_COORD_NEAR_CENTER_OF_SCREEN: fScreenX = ", fVar0, " and fScreenY = ", fVar1);
			return true;
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "IS_COORD_NEAR_CENTER_OF_SCREEN: coord is off screen");
	}
	return false;
}

float func_308(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<2> Var7;
	struct<2> Var10;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar0 = func_217(iParam0);
	ENTITY::_0xF3FDA9A617A15145(iVar0, &vVar1, &vVar4);
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar1, &Var7, &(Var7.f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar4, &Var10, &(Var10.f_1)))
	{
		return 0f;
	}
	fVar13 = MISC::ABSF((Var10 - Var7));
	fVar14 = MISC::ABSF((Var10.f_1 - Var7.f_1));
	fVar15 = (fVar13 * fVar14);
	return fVar15;
}

char* func_309(int iParam0, int iParam1)
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

bool func_310(struct<2> Param0, int iParam2)
{
	if (!func_325(Param0))
	{
		return false;
	}
	func_326(iParam2);
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

char* func_311(int iParam0, int iParam1)
{
	if (iParam0 <= joaat("RACE_MISSIONS"))
	{
		switch (iParam0)
		{
			case joaat("AT_DUCK_PEKIN"):
				return "STAT_ITEM_AT_DUCK_PEKIN";
			case joaat("HERB_DRAGONS_MOUTH_ORCHID"):
				return "STAT_ITEM_HERB_DRAGONS_MOUTH_ORCHID";
			case joaat("WEAPONS"):
				return "STAT_ITEM_WEAPONS";
			case joaat("CIVILIAN"):
				return "STAT_ITEM_CIVILIAN";
			case -2140438327:
				return "STAT_ITEM_1";
			case joaat("NET_PLAYLIST_GUN_RUSH_TEAMS"):
				return "STAT_ITEM_NET_PLAYLIST_GUN_RUSH_TEAMS";
			case joaat("SHOP_TBL_BARTENDER"):
				return "STAT_ITEM_SHOP_TBL_BARTENDER";
			case joaat("AT_GATOR_SMALL"):
				return "STAT_ITEM_AT_GATOR_SMALL";
			case joaat("MP_TUTORIAL_HUD_WARNING_SHOT"):
				return "STAT_ITEM_MP_TUTORIAL_HUD_WARNING_SHOT";
			case joaat("ST_WILDERNESS_SUPPLIES"):
				return "STAT_ITEM_ST_WILDERNESS_SUPPLIES";
			case joaat("SHOP_SDN_PHOTO_STUDIO"):
				return "STAT_ITEM_SHOP_SDN_PHOTO_STUDIO";
			case joaat("UGC_RACE_HORSE"):
				return "STAT_ITEM_UGC_RACE_HORSE";
			case joaat("ARMED"):
				return "STAT_ITEM_ARMED";
			case -2122403419:
				return "STAT_ITEM_MP_TUTORIAL_LA_SEDATE";
			case joaat("UGC_RACE_STANDARD"):
				return "STAT_ITEM_UGC_RACE_STANDARD";
			case -2119627968: /* GXTEntry: "Boar Skin Table Cover" */
				return "STAT_ITEM_UPGRADE_PCC_CRAFTEDTABLE_01";
			case joaat("HORSES_REACHED_MAX_BOND"):
				return "STAT_ITEM_HORSES_REACHED_MAX_BOND";
			case joaat("SHOP_SHB_DOCTOR"):
				return "STAT_ITEM_SHOP_SHB_DOCTOR";
			case joaat("NET_BEAT_LEGENDARY_ANIMAL_COUGAR"):
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_COUGAR";
			case -2109344034:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_13";
			case joaat("MOUNTEDWEAPON"):
				return "STAT_ITEM_MOUNTEDWEAPON";
			case joaat("CLOTHING_HL_PLAYER_CHAPS_007_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_007_1";
			case joaat("NET_PLAYER_ABILITY__STRANGE_MEDICINE"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__STRANGE_MEDICINE";
			case joaat("ACTIONS"):
				return "STAT_ITEM_ACTIONS";
			case -2089261255: /* GXTEntry: "Alligator Skull" */
				return "STAT_ITEM_UPGRADE_PCC_ALLIGATORSKULL_01";
			case joaat("AT_TURKEY"):
				return "STAT_ITEM_AT_TURKEY";
			case joaat("THREATEN_LAW"):
				return "STAT_ITEM_THREATEN_LAW";
			case joaat("AMMO_REVOLVER_HIGH_VELOCITY"):
				return "STAT_ITEM_AMMO_REVOLVER_HIGH_VELOCITY";
			case joaat("RIFLE"):
				return "STAT_ITEM_RIFLE";
			case joaat("MP_TUTORIAL_GHOST_SAFETY_AREA"):
				return "STAT_ITEM_MP_TUTORIAL_GHOST_SAFETY_AREA";
			case joaat("UGC_DM_EVERY_BULLET_COUNTS"):
				return "STAT_ITEM_UGC_DM_EVERY_BULLET_COUNTS";
			case joaat("MPPS_MOST_OBSTACLES_JUMPED"):
				return "STAT_ITEM_MPPS_MOST_OBSTACLES_JUMPED";
			case joaat("MP_TUTORIAL_BOUNTY_SATELLITE_WAGON"):
				return "STAT_ITEM_MP_TUTORIAL_BOUNTY_SATELLITE_WAGON";
			case joaat("FME_CHALLENGE_SIDEARM"):
				return "STAT_ITEM_FME_CHALLENGE_SIDEARM";
			case joaat("CONSUMABLE_SUCCULENT_FISH_WILD_MINT_COOKED"):
				return "STAT_ITEM_CONSUMABLE_SUCCULENT_FISH_WILD_MINT_COOKED";
			case joaat("COACH"):
				return "STAT_ITEM_COACH";
			case joaat("AT_CORMORANT_NEO"):
				return "STAT_ITEM_AT_CORMORANT_NEO";
			case joaat("TR_MAXIM"):
				return "STAT_ITEM_TR_MAXIM";
			case joaat("AMMO_HATCHET_HEWING"):
				return "STAT_ITEM_AMMO_HATCHET_HEWING";
			case joaat("ML_FISHINGROD"):
				return "STAT_ITEM_ML_FISHINGROD";
			case joaat("ML_BKNSWORD"):
				return "STAT_ITEM_ML_BKNSWORD";
			case joaat("AT_SPARROW_GOLD"):
				return "STAT_ITEM_AT_SPARROW_GOLD";
			case joaat("BALLOON"):
				return "STAT_ITEM_BALLOON";
			case -2053642092:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_3";
			case joaat("NET_PLAYER_ABILITY__AINT_GONNA_DIE_THIS_EASY"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__AINT_GONNA_DIE_THIS_EASY";
			case joaat("NET_BEAT_LEGENDARY_ANIMAL_WOLF"):
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_WOLF";
			case joaat("AT_SNAKE_WATER"):
				return "STAT_ITEM_AT_SNAKE_WATER";
			case joaat("ST_GENERAL"):
				return "STAT_ITEM_ST_GENERAL";
			case joaat("FEED_BAG"):
				return "STAT_ITEM_FEED_BAG";
			case joaat("RC"):
				return "STAT_ITEM_RC";
			case -2047817190:
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_ELK";
			case joaat("AT_CHIPMUNK"):
				return "STAT_ITEM_AT_CHIPMUNK";
			case joaat("LEGS"):
				return "STAT_ITEM_LEGS";
			case -2038682661:
				return "STAT_ITEM_ABILITY_CARD_RANK_02";
			case joaat("AT_PHEASANT_CHINESE"):
				return "STAT_ITEM_AT_PHEASANT_CHINESE";
			case joaat("STAGECOACH_ROBBERY"):
				return "STAT_ITEM_STAGECOACH_ROBBERY";
			case joaat("CLOTHING_HL_PLAYER_HAT_054_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_054_1";
			case joaat("POSSE_FEUD"):
				return "STAT_ITEM_POSSE_FEUD";
			case joaat("MPPS_MOST_MELEE_KILLS"):
				return "STAT_ITEM_MPPS_MOST_MELEE_KILLS";
			case joaat("ML_TORCH"):
				return "STAT_ITEM_ML_TORCH";
			case joaat("NET_PLAYER_ABILITY__THE_LONG_GAME"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__THE_LONG_GAME";
			case -2017847322:
				return "STAT_ITEM_AMMO_BOLAS_IRONSPIKED";
			case joaat("NET_PLAYER_ABILITY__QUITE_THE_HEAVY_TOUCH"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__QUITE_THE_HEAVY_TOUCH";
			case joaat("EX_CONFED"):
				return "STAT_ITEM_EX_CONFED";
			case joaat("SHOP_BLK_PHOTO_STUDIO"):
				return "STAT_ITEM_SHOP_BLK_PHOTO_STUDIO";
			case joaat("AMMO_MOLOTOV_VOLATILE"):
				return "STAT_ITEM_AMMO_MOLOTOV_VOLATILE";
			case joaat("TARGET_7"):
				return "STAT_ITEM_TARGET_7";
			case joaat("FME_THEMED_WRECKAGE"):
				return "STAT_ITEM_FME_THEMED_WRECKAGE";
			case joaat("AT_MOOSE_LEGENDARY"):
				return "STAT_ITEM_AT_MOOSE_LEGENDARY";
			case joaat("APPLE"):
				return "STAT_ITEM_APPLE";
			case joaat("CLOTHING_HL_PLAYER_HAT_044_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_044_1";
			case joaat("SHOP_STR_BARTENDER"):
				return "STAT_ITEM_SHOP_STR_BARTENDER";
			case joaat("UGC_VERSUS_HOLD_THE_FORT"):
				return "STAT_ITEM_UGC_VERSUS_HOLD_THE_FORT";
			case joaat("AT_DOG_MUTT"):
				return "STAT_ITEM_AT_DOG_MUTT";
			case joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN"):
				return "STAT_ITEM_SHOP_ASB_BOUNTYHUNTING_MP_RETURN";
			case joaat("NET_BEAT_LEGENDARY_ANIMAL_COYOTE"):
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_COYOTE";
			case -1984389706:
				return "STAT_ITEM_FME_ROLE_ANIMAL_TAGGING";
			case joaat("BLACKJACK_4_HITS"):
				return "STAT_ITEM_BLACKJACK_4_HITS";
			case joaat("CONSUMABLE_FLAKEY_FISH_OREGANO_COOKED"):
				return "STAT_ITEM_CONSUMABLE_FLAKEY_FISH_OREGANO_COOKED";
			case -1977109535:
				return "STAT_ITEM_MERCY";
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
				return "STAT_ITEM_CONSUMABLE_SPECIAL_TONIC_CRAFTED";
			case joaat("LEGENDARY_BOUNTY_MISSION_02"):
				return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_02";
			case joaat("XLARGE"):
				return "STAT_ITEM_XLARGE";
			case joaat("GFH_SADIE_ADLER"):
				return "STAT_ITEM_GFH_SADIE_ADLER";
			case joaat("CLOTHING_HL_PLAYER_BOOT_047_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_047_1";
			case joaat("CLOTHING_HL_PLAYER_COAT_030_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_030_1";
			case -1958921094:
				return "STAT_ITEM_FETCH_BOUNTY_CAGED_TARGET";
			case joaat("TR_GATLING"):
				return "STAT_ITEM_TR_GATLING";
			case joaat("NET_PLAYLIST_ORBIS_SERIES_3"):
				return "STAT_ITEM_NET_PLAYLIST_ORBIS_SERIES_3";
			case joaat("ML_MOONSHINEJUG"):
				return "STAT_ITEM_ML_MOONSHINEJUG";
			case joaat("SHOP_CLM_GENERAL_STORE"):
				return "STAT_ITEM_SHOP_CLM_GENERAL_STORE";
			case joaat("CLOTHING_HL_PLAYER_GLOVES_018_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_018_1";
			case -1947514788:
				return "STAT_ITEM_ANIMAL_TRANSFORMATION_RABBIT";
			case joaat("PLAYER_BOUNTY_TARGET"):
				return "STAT_ITEM_PLAYER_BOUNTY_TARGET";
			case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
				return "STAT_ITEM_PROVISION_TALISMAN_BUFFALO_HORN";
			case -1939515319:
				return "STAT_ITEM_CONSUMABLE_TONIC_ANIMAL_REVIVER";
			case joaat("FETCH_MOONSHINE_KIDNAPPED_BUYERS"):
				return "STAT_ITEM_FETCH_MOONSHINE_KIDNAPPED_BUYERS";
			case joaat("SHOP_ASB_TRAIN_STATION"):
				return "STAT_ITEM_SHOP_ASB_TRAIN_STATION";
			case joaat("SHOP_ASB_BANK"):
				return "STAT_ITEM_SHOP_ASB_BANK";
			case joaat("MPPS_MOST_KILLS"):
				return "STAT_ITEM_MPPS_MOST_KILLS";
			case -1927753141:
				return "STAT_ITEM_UNIQUE_ANIMALS";
			case joaat("FETCH_DYNAMIC_CAMPSITE_DEFEND"):
				return "STAT_ITEM_FETCH_DYNAMIC_CAMPSITE_DEFEND";
			case joaat("FROM_RECENT_PICKUP"):
				return "STAT_ITEM_FROM_RECENT_PICKUP";
			case joaat("AT_CRANE"):
				return "STAT_ITEM_AT_CRANE";
			case -1919330318:
				return "STAT_ITEM_AMMO_RIFLE_ELEHANT";
			case joaat("SHOP_VAL_SHERIFF"):
				return "STAT_ITEM_SHOP_VAL_SHERIFF";
			case joaat("HERB_WILD_FLWR_CHOCOLATE_DAISY"):
				return "STAT_ITEM_HERB_WILD_FLWR_CHOCOLATE_DAISY";
			case joaat("UGC_DM_PITP"):
				return "STAT_ITEM_UGC_DM_PITP";
			case joaat("AT_VULTURE_EAST"):
				return "STAT_ITEM_AT_VULTURE_EAST";
			case joaat("RV_SCHFLD_CALLOWAY"):
				return "STAT_ITEM_RV_SCHFLD_CALLOWAY";
			case joaat("REPEATER"):
				return "STAT_ITEM_REPEATER";
			case joaat("HERB_INDIAN_TOBACCO"):
				return "STAT_ITEM_HERB_INDIAN_TOBACCO";
			case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_4"):
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_4";
			case joaat("AT_CAROLINAPARAKEET"):
				return "STAT_ITEM_AT_CAROLINAPARAKEET";
			case -1906591343:
				return "STAT_ITEM_FEE_ROLE_NATURALIST_ANIMAL_CONTROL_CRITTER";
			case -1903059161:
				return "STAT_ITEM_AMMO_22_TRANQUILIZER";
			case joaat("AT_BUCK_LEGENDARY"):
				return "STAT_ITEM_AT_BUCK_LEGENDARY";
			case joaat("GFH_BONNIE"):
				return "STAT_ITEM_GFH_BONNIE";
			case joaat("CONSUMABLE_MEAL_CAMP_STEW_BEST"):
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_BEST";
			case joaat("AMMO_SHOTGUN"):
				return "STAT_ITEM_AMMO_SHOTGUN";
			case joaat("POKER_ROYAL_FLUSH"):
				return "STAT_ITEM_POKER_ROYAL_FLUSH";
			case joaat("CONSUMABLE_TENDER_PORK_THYME_COOKED"):
				return "STAT_ITEM_CONSUMABLE_TENDER_PORK_THYME_COOKED";
			case -1875859641:
				return "STAT_ITEM_BLENDING_TONIC";
			case joaat("FROM_LOOTED_ENEMY"):
				return "STAT_ITEM_FROM_LOOTED_ENEMY";
			case -1873413140: /* GXTEntry: "Principal Vest" */
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VEST_011_12";
			case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
				return "STAT_ITEM_CONSUMABLE_SPECIAL_HORSE_MEDICINE";
			case joaat("FETCH_TRADER_RESUPPLY_SUPPLY_TRAIN_MOVING"):
				return "STAT_ITEM_FETCH_TRADER_RESUPPLY_SUPPLY_TRAIN_MOVING";
			case joaat("SHOP_TAL_TRAVELLING_SALESMAN"):
				return "STAT_ITEM_SHOP_TAL_TRAVELLING_SALESMAN";
			case joaat("SHOP_DYNAMIC"):
				return "STAT_ITEM_SHOP_DYNAMIC";
			case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
				return "STAT_ITEM_AMMO_THROWING_KNIVES_CONFUSE";
			case joaat("AMMO_THROWING_KNIVES_WOUND"):
				return "STAT_ITEM_AMMO_THROWING_KNIVES_WOUND";
			case joaat("STOLEN_GOODS"):
				return "STAT_ITEM_STOLEN_GOODS";
			case joaat("LEGENDARY_BOUNTY_MISSION_06"):
				return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_06";
			case -1852538599:
				return "STAT_ITEM_AT_ELK_MPLEGENDARY_OZULA";
			case joaat("MPPS_MOST_DEATHS"):
				return "STAT_ITEM_MPPS_MOST_DEATHS";
			case joaat("AT_SQUIRREL_RED"):
				return "STAT_ITEM_AT_SQUIRREL_RED";
			case joaat("2"):
				return "STAT_ITEM_2";
			case joaat("AT_PRONGHORN_BAJA"):
				return "STAT_ITEM_AT_PRONGHORN_BAJA";
			case joaat("AT_CALIFORNIACONDOR"):
				return "STAT_ITEM_AT_CALIFORNIACONDOR";
			case joaat("CLOTHING_HL_PLAYER_COAT_035_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_035_1";
			case joaat("CLOTHING_HL_PLAYER_CHAPS_006_4"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_006_4";
			case joaat("AMMO_ARROW_IMPROVED"):
				return "STAT_ITEM_AMMO_ARROW_IMPROVED";
			case joaat("ST_BARBER"):
				return "STAT_ITEM_ST_BARBER";
			case joaat("CLOTHING_HL_PLAYER_BOOT_044_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_044_1";
			case joaat("METER_INSTINCT"):
				return "STAT_ITEM_METER_INSTINCT";
			case joaat("SHOP_TBL_GUNSMITH"):
				return "STAT_ITEM_SHOP_TBL_GUNSMITH";
			case joaat("SHOP_VAL_POST_OFFICE_SHIPPING"):
				return "STAT_ITEM_SHOP_VAL_POST_OFFICE_SHIPPING";
			case joaat("RV_SCHFLD"):
				return "STAT_ITEM_RV_SCHFLD";
			case joaat("ARTILLERYGUN"):
				return "STAT_ITEM_ARTILLERYGUN";
			case joaat("CONSUMABLE_MATURE_VENISON_OREGANO_COOKED"):
				return "STAT_ITEM_CONSUMABLE_MATURE_VENISON_OREGANO_COOKED";
			case joaat("HERB_MILKWEED"):
				return "STAT_ITEM_HERB_MILKWEED";
			case -1806099704:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_14";
			case -1805632900:
				return "STAT_ITEM_AT_WOLF_MPLEGENDARY_MOONSTONE";
			case joaat("SNIPER"):
				return "STAT_ITEM_SNIPER";
			case joaat("NET_PLAYER_ABILITY__FOCUS_FIRE"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__FOCUS_FIRE";
			case joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"):
				return "STAT_ITEM_CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED";
			case joaat("MPPS_LEAST_TIME_NEAR_ENEMIES"):
				return "STAT_ITEM_MPPS_LEAST_TIME_NEAR_ENEMIES";
			case joaat("SNAKE_OIL"):
				return "STAT_ITEM_SNAKE_OIL";
			case joaat("SHOP_RGG_TRAIN_STATION"):
				return "STAT_ITEM_SHOP_RGG_TRAIN_STATION";
			case joaat("MISSIONS_CHP5"):
				return "STAT_ITEM_MISSIONS_CHP5";
			case joaat("HORSE"):
				return "STAT_ITEM_HORSE";
			case joaat("UGC_DM_LMS"):
				return "STAT_ITEM_UGC_DM_LMS";
			case joaat("SHOP_BLK_NEWSPAPER_BOY"):
				return "STAT_ITEM_SHOP_BLK_NEWSPAPER_BOY";
			case joaat("SHAVING_SOAP"):
				return "STAT_ITEM_SHAVING_SOAP";
			case joaat("CONSUMABLE_GAME_MEAT_WILD_MINT_COOKED"):
				return "STAT_ITEM_CONSUMABLE_GAME_MEAT_WILD_MINT_COOKED";
			case joaat("AT_TURKEY_RIO"):
				return "STAT_ITEM_AT_TURKEY_RIO";
			case joaat("SHOP_AMD_GENERAL_STORE"):
				return "STAT_ITEM_SHOP_AMD_GENERAL_STORE";
			case joaat("UGC_RACE_FOOT"):
				return "STAT_ITEM_UGC_RACE_FOOT";
			case joaat("CONSUMABLE_GRITTY_FISH_MEAT_COOKED"):
				return "STAT_ITEM_CONSUMABLE_GRITTY_FISH_MEAT_COOKED";
			case joaat("NET_PLAYLIST_ELIMINATION_MEDIUM"):
				return "STAT_ITEM_NET_PLAYLIST_ELIMINATION_MEDIUM";
			case joaat("CONSUMABLE_BIG_GAME_MEAT_OREGANO_COOKED"):
				return "STAT_ITEM_CONSUMABLE_BIG_GAME_MEAT_OREGANO_COOKED";
			case joaat("CLOTHING_HL_PLAYER_HAT_000_001_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_001_1";
			case joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"):
				return "STAT_ITEM_CONSUMABLE_CRAFTED_SUPER_MEAL";
			case joaat("NET_PLAYER_ABILITY__NECESSITY_BREEDS"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__NECESSITY_BREEDS";
			case joaat("KILLS"):
				return "STAT_ITEM_KILLS";
			case joaat("WEEK_STREAKS"):
				return "STAT_ITEM_WEEK_STREAKS";
			case joaat("SHOP_VAL_BUTCHER"):
				return "STAT_ITEM_SHOP_VAL_BUTCHER";
			case joaat("LEGENDARY_BOUNTY_MISSION_05"):
				return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_05";
			case joaat("HORSE_MEDICINE_GIVEN"):
				return "STAT_ITEM_HORSE_MEDICINE_GIVEN";
			case joaat("UGC_VERSUS_ARROW_BALL"):
				return "STAT_ITEM_UGC_VERSUS_ARROW_BALL";
			case joaat("SMALL_ANIMALS"):
				return "STAT_ITEM_SMALL_ANIMALS";
			case joaat("NET_PLAYLIST_ADVERSARY_LARGE"):
				return "STAT_ITEM_NET_PLAYLIST_ADVERSARY_LARGE";
			case joaat("HERB_SPIDER_ORCHID"):
				return "STAT_ITEM_HERB_SPIDER_ORCHID";
			case joaat("HERB_PRAIRIE_POPPY"):
				return "STAT_ITEM_HERB_PRAIRIE_POPPY";
			case joaat("FETCH_TRADER_RESUPPLY_TRADE"):
				return "STAT_ITEM_FETCH_TRADER_RESUPPLY_TRADE";
			case joaat("CLOTHING_HL_PLAYER_HAT_000_011_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_011_1";
			case joaat("NET_PLAYER_ABILITY__RECKLESS_STREAK"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__RECKLESS_STREAK";
			case -1730460102:
				return "STAT_ITEM_AT_BUCK_MPLEGENDARY_SHADOW";
			case joaat("HERB_WILD_CARROTS"):
				return "STAT_ITEM_HERB_WILD_CARROTS";
			case joaat("NET_PLAYER_ABILITY__THE_GIFT_OF_FOCUS"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__THE_GIFT_OF_FOCUS";
			case -1719093715:
				return "STAT_ITEM_GFH_HARRIET";
			case joaat("ABANDONED_CHESTS_LOOTED"):
				return "STAT_ITEM_ABANDONED_CHESTS_LOOTED";
			case joaat("AT_FPERCH"):
				return "STAT_ITEM_AT_FPERCH";
			case joaat("SG_SAWEDOFF"):
				return "STAT_ITEM_SG_SAWEDOFF";
			case -1706054699:
				return "STAT_ITEM_CONSUMABLE_TONIC_POTENT_WEIGHT_LOSS";
			case joaat("ML_HATCHET"):
				return "STAT_ITEM_ML_HATCHET";
			case -1699486271:
				return "STAT_ITEM_AMMO_BOLAS_INTERTWINED";
			case -1688922105:
				return "STAT_ITEM_SEDATED_ANIMALS";
			case -1685529517:
				return "STAT_ITEM_AT_BOAR_MPLEGENDARY_COGI";
			case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_3"):
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_3";
			case joaat("HORSE_VAULTS"):
				return "STAT_ITEM_HORSE_VAULTS";
			case joaat("SHOP_VAL_NEWSPAPER_BOY"):
				return "STAT_ITEM_SHOP_VAL_NEWSPAPER_BOY";
			case joaat("SHOP_HRT_W_TRAVELLING_SALESMAN"):
				return "STAT_ITEM_SHOP_HRT_W_TRAVELLING_SALESMAN";
			case joaat("AT_EAGLE_GOLDEN"):
				return "STAT_ITEM_AT_EAGLE_GOLDEN";
			case joaat("POKER_HAND"):
				return "STAT_ITEM_POKER_HAND";
			case joaat("CLOTHING_HL_PLAYER_HAT_043_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_043_1";
			case -1669863795: /* GXTEntry: "Majestic Accessory" */
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_009_1";
			case joaat("AMMO_REPEATER_EXPRESS_EXPLOSIVE"):
				return "STAT_ITEM_AMMO_REPEATER_EXPRESS_EXPLOSIVE";
			case joaat("NET_BEAT_LEGENDARY_ANIMAL_BOAR"):
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_BOAR";
			case joaat("FME"):
				return "STAT_ITEM_FME";
			case joaat("AT_FSMALLMOUTHBASS"):
				return "STAT_ITEM_AT_FSMALLMOUTHBASS";
			case joaat("ANIMAL_HERBIVORE_BAITED"):
				return "STAT_ITEM_ANIMAL_HERBIVORE_BAITED";
			case joaat("LEGENDARY_BOUNTY_TARGET"):
				return "STAT_ITEM_LEGENDARY_BOUNTY_TARGET";
			case joaat("HERB_RAT_TAIL_ORCHID"):
				return "STAT_ITEM_HERB_RAT_TAIL_ORCHID";
			case joaat("SP_LASSO"):
				return "STAT_ITEM_SP_LASSO";
			case joaat("HELPLESS"):
				return "STAT_ITEM_HELPLESS";
			case joaat("AT_FREDFIN_LEGENDARY"):
				return "STAT_ITEM_AT_FREDFIN_LEGENDARY";
			case joaat("FETCH_GFH_CONVOY_ESCORT"):
				return "STAT_ITEM_FETCH_GFH_CONVOY_ESCORT";
			case joaat("POISONED"):
				return "STAT_ITEM_POISONED";
			case joaat("CONSUMABLE_PRIME_BEEF_THYME_COOKED"):
				return "STAT_ITEM_CONSUMABLE_PRIME_BEEF_THYME_COOKED";
			case -1645055494:
				return "STAT_ITEM_AT_RAM_MPLEGENDARY_RUTILE_HORN";
			case joaat("ST_FENCE"):
				return "STAT_ITEM_ST_FENCE";
			case joaat("SHOP_EMR_TRAIN_STATION"):
				return "STAT_ITEM_SHOP_EMR_TRAIN_STATION";
			case joaat("AMMO_THROWING_KNIVES"):
				return "STAT_ITEM_AMMO_THROWING_KNIVES";
			case joaat("ASSAULT_LIVESTOCK"):
				return "STAT_ITEM_ASSAULT_LIVESTOCK";
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
				return "STAT_ITEM_CONSUMABLE_PREDATOR_BAIT";
			case -1633370998:
				return "STAT_ITEM_FEE_ROLE_NATURALIST_ANIMAL_CONTROL_MEDIUM";
			case joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"):
				return "STAT_ITEM_CONSUMABLE_HORSE_OINTMENT_CRAFTED";
			case joaat("AT_DOG_BORDER"):
				return "STAT_ITEM_AT_DOG_BORDER";
			case joaat("CAMP_REQUESTS_STARTED"):
				return "STAT_ITEM_CAMP_REQUESTS_STARTED";
			case joaat("MP_TUTORIAL_GVO_GUNSLINGER_2_GFH_GIVER_UNLOCKED"):
				return "STAT_ITEM_MP_TUTORIAL_GVO_GUNSLINGER_2_GFH_GIVER_UNLOCKED";
			case joaat("SHOP_CAMP_SHAVING"):
				return "STAT_ITEM_SHOP_CAMP_SHAVING";
			case joaat("MPPS_MOST_KILLS_AGAINST_ONE"):
				return "STAT_ITEM_MPPS_MOST_KILLS_AGAINST_ONE";
			case joaat("SHOP_ANYWHERE_HANDHELD"):
				return "STAT_ITEM_SHOP_ANYWHERE_HANDHELD";
			case joaat("FOCUS_THROWN"):
				return "STAT_ITEM_FOCUS_THROWN";
			case joaat("MAX_STREAK"):
				return "STAT_ITEM_MAX_STREAK";
			case joaat("TUGBOAT"):
				return "STAT_ITEM_TUGBOAT";
			case joaat("ROWBOAT"):
				return "STAT_ITEM_ROWBOAT";
			case -1612693182:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_MED";
			case joaat("LOCAL_PLAYER_BOUNTY_TARGET"):
				return "STAT_ITEM_LOCAL_PLAYER_BOUNTY_TARGET";
			case joaat("BIRD"):
				return "STAT_ITEM_BIRD";
			case joaat("ONE_SHOT"):
				return "STAT_ITEM_ONE_SHOT";
			case -1608451354: /* GXTEntry: "Boar Skin Rug" */
				return "STAT_ITEM_UPGRADE_PCC_COVERBOAR_01";
			case joaat("SHOP_SDN_COACH"):
				return "STAT_ITEM_SHOP_SDN_COACH";
			case joaat("MOUNT"):
				return "STAT_ITEM_MOUNT";
			case joaat("FETCH_GFH_WAGON_BREAKOUT"):
				return "STAT_ITEM_FETCH_GFH_WAGON_BREAKOUT";
			case joaat("AT_RAVEN"):
				return "STAT_ITEM_AT_RAVEN";
			case joaat("MPPS_MOST_ASSISTS"):
				return "STAT_ITEM_MPPS_MOST_ASSISTS";
			case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_SATCHEL_005_1";
			case joaat("ML_HATCHET_ANCIENT"):
				return "STAT_ITEM_ML_HATCHET_ANCIENT";
			case joaat("ML_MACHETE"):
				return "STAT_ITEM_ML_MACHETE";
			case joaat("PV_CHALLENGE_HERBS"):
				return "STAT_ITEM_PV_CHALLENGE_HERBS";
			case joaat("SHOP_TBL_HORSE_SHOP"):
				return "STAT_ITEM_SHOP_TBL_HORSE_SHOP";
			case joaat("SHOP_STR_NEWSPAPER_BOY"):
				return "STAT_ITEM_SHOP_STR_NEWSPAPER_BOY";
			case joaat("HERB_WILD_FLWR_WISTERIA"):
				return "STAT_ITEM_HERB_WILD_FLWR_WISTERIA";
			case joaat("CLOTHING_HL_PLAYER_BOOT_045_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_045_1";
			case joaat("GROUP_HEAVY"):
				return "STAT_ITEM_GROUP_HEAVY";
			case joaat("NET_BEAT_PHOTOGRAPHY"):
				return "STAT_ITEM_NET_BEAT_PHOTOGRAPHY";
			case joaat("GFH_JOE"):
				return "STAT_ITEM_GFH_JOE";
			case -1563450693:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_1";
			case joaat("BEAKS_COLLECTED"):
				return "STAT_ITEM_BEAKS_COLLECTED";
			case joaat("AT_PRONGHORN_SONO"):
				return "STAT_ITEM_AT_PRONGHORN_SONO";
			case joaat("TREASURE_HUNTER_CHEST_LOOTED"):
				return "STAT_ITEM_TREASURE_HUNTER_CHEST_LOOTED";
			case joaat("FOOD"):
				return "STAT_ITEM_FOOD";
			case joaat("NET_BEAT_HOBO_DOG"):
				return "STAT_ITEM_NET_BEAT_HOBO_DOG";
			case -1551749992:
				return "STAT_ITEM_AT_BUFFALO_MPLEGENDARY_WINYAN";
			case joaat("NET_BEAT_LEGENDARY_ANIMAL_ALLIGATOR"):
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_ALLIGATOR";
			case joaat("AT_BUFFALO_LEGENDARY"):
				return "STAT_ITEM_AT_BUFFALO_LEGENDARY";
			case joaat("AMMO_ARROW_DRAIN"):
				return "STAT_ITEM_AMMO_ARROW_DRAIN";
			case -1543452685:
				return "STAT_ITEM_3";
			case joaat("GROIN"):
				return "STAT_ITEM_GROIN";
			case joaat("ON_DRAFT"):
				return "STAT_ITEM_ON_DRAFT";
			case -1538334073:
				return "STAT_ITEM_AT_GATOR_MPLEGENDARY_SUN";
			case joaat("CONSUMABLE_PRIME_BEEF_COOKED"):
				return "STAT_ITEM_CONSUMABLE_PRIME_BEEF_COOKED";
			case joaat("HEART"):
				return "STAT_ITEM_HEART";
			case joaat("MONEY"):
				return "STAT_ITEM_MONEY";
			case joaat("FETCH_GFH_RESUPPLY"):
				return "STAT_ITEM_FETCH_GFH_RESUPPLY";
			case -1530824760:
				return "STAT_ITEM_NATURALIST_LEGENDARY_BAIT";
			case joaat("AT_RABBIT"):
				return "STAT_ITEM_AT_RABBIT";
			case joaat("GFH_SHERIFF_FREEMAN"):
				return "STAT_ITEM_GFH_SHERIFF_FREEMAN";
			case joaat("BENEDICT_POINT_STATION_BOUNTY_BOARD"):
				return "STAT_ITEM_BENEDICT_POINT_STATION_BOUNTY_BOARD";
			case joaat("HERB_DESERT_SAGE"):
				return "STAT_ITEM_HERB_DESERT_SAGE";
			case -1518504958:
				return "STAT_ITEM_FEE_ROLE_NATURALIST_ANIMAL_CONTROL_EXTENSION";
			case joaat("AT_FREDFINPICKEREL"):
				return "STAT_ITEM_AT_FREDFINPICKEREL";
			case joaat("TARGET_9"):
				return "STAT_ITEM_TARGET_9";
			case joaat("NET_PLAYER_ABILITY__BLESSED_WITH_A_STRONG_CONSTITUTION"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__BLESSED_WITH_A_STRONG_CONSTITUTION";
			case joaat("DEADEYE_KILL"):
				return "STAT_ITEM_DEADEYE_KILL";
			case joaat("HERB_WILD_FLWR_CARDINAL_FLOWER"):
				return "STAT_ITEM_HERB_WILD_FLWR_CARDINAL_FLOWER";
			case joaat("SHOOTING"):
				return "STAT_ITEM_SHOOTING";
			case joaat("FETCH_MOONSHINE_BOOTLEGGER_BAR_BRAWL"):
				return "STAT_ITEM_FETCH_MOONSHINE_BOOTLEGGER_BAR_BRAWL";
			case joaat("HORSE_FED"):
				return "STAT_ITEM_HORSE_FED";
			case -1499480171:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_15";
			case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH"):
				return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH";
			case joaat("UGC_VERSUS_SIEGE_MENTALITY"):
				return "STAT_ITEM_UGC_VERSUS_SIEGE_MENTALITY";
			case -1496118363:
				return "STAT_ITEM_GENERAL_CHALLENGES_COMPLETED";
			case joaat("SHOP_TBL_GENERAL_STORE"):
				return "STAT_ITEM_SHOP_TBL_GENERAL_STORE";
			case joaat("PERSISTENT_POSSE"):
				return "STAT_ITEM_PERSISTENT_POSSE";
			case joaat("GFH_ABERDEEN_PIG_FARMERS"):
				return "STAT_ITEM_GFH_ABERDEEN_PIG_FARMERS";
			case joaat("FETCH_MOONSHINE_BOOTLEGGER_ROADBLOCK"):
				return "STAT_ITEM_FETCH_MOONSHINE_BOOTLEGGER_ROADBLOCK";
			case joaat("EIGHT_PLAYER_SERIES"):
				return "STAT_ITEM_EIGHT_PLAYER_SERIES";
			case joaat("HERB_BLACK_BERRY"):
				return "STAT_ITEM_HERB_BLACK_BERRY";
			case joaat("TH_FIREBOTTLE"):
				return "STAT_ITEM_TH_FIREBOTTLE";
			case joaat("NET_PLAYER_ABILITY__BORN_LEADER"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__BORN_LEADER";
			case joaat("CHESTS_LOOTED"):
				return "STAT_ITEM_CHESTS_LOOTED";
			case joaat("SHOP_BLK_BUTCHER"):
				return "STAT_ITEM_SHOP_BLK_BUTCHER";
			case joaat("PROPERTY"):
				return "STAT_ITEM_PROPERTY";
			case joaat("NET_PLAYER_ABILITY__FAST_AND_LOOSE"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__FAST_AND_LOOSE";
			case joaat("LEGENDARY_BOUNTY_MISSION_07"):
				return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_07";
			case joaat("CLOTHING_HL_PLAYER_HAT_000_000_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_000_1";
			case -1477989626:
				return "STAT_ITEM_MP_TUTORIAL_LA_SKIN";
			case joaat("SHOP_ROJ_HONOR_MP"):
				return "STAT_ITEM_SHOP_ROJ_HONOR_MP";
			case joaat("MP_DIALOGUE_MOONSHINE_MARCEL_STORY_COMPLETE"):
				return "STAT_ITEM_MP_DIALOGUE_MOONSHINE_MARCEL_STORY_COMPLETE";
			case joaat("AT_GATOR"):
				return "STAT_ITEM_AT_GATOR";
			case joaat("UGC_VERSUS_PREDATOR"):
				return "STAT_ITEM_UGC_VERSUS_PREDATOR";
			case joaat("AT_ROOSTER_JAVA"):
				return "STAT_ITEM_AT_ROOSTER_JAVA";
			case joaat("SPECIAL_ABILITY"):
				return "STAT_ITEM_SPECIAL_ABILITY";
			case joaat("ML_HATCHET_HUNTER_RUSTED"):
				return "STAT_ITEM_ML_HATCHET_HUNTER_RUSTED";
			case joaat("SHOP_AMD_BARTENDER"):
				return "STAT_ITEM_SHOP_AMD_BARTENDER";
			case joaat("AT_FNORTHERNPIKE"):
				return "STAT_ITEM_AT_FNORTHERNPIKE";
			case joaat("AT_LOON"):
				return "STAT_ITEM_AT_LOON";
			case joaat("AMMO_HATCHET_ANCIENT"):
				return "STAT_ITEM_AMMO_HATCHET_ANCIENT";
			case joaat("AT_FCHANNELCATFISH"):
				return "STAT_ITEM_AT_FCHANNELCATFISH";
			case joaat("UGC_DM_EVERY_ARROW_COUNTS"):
				return "STAT_ITEM_UGC_DM_EVERY_ARROW_COUNTS";
			case joaat("FATIGUED"):
				return "STAT_ITEM_FATIGUED";
			case joaat("UGC_VERSUS_LOCAL_WEAPONRY"):
				return "STAT_ITEM_UGC_VERSUS_LOCAL_WEAPONRY";
			case joaat("FALL"):
				return "STAT_ITEM_FALL";
			case -1437186306:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_11";
			case -1433022684: /* GXTEntry: "Country Vest" */
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_017_1";
			case joaat("ST_HORSE_SHOP"):
				return "STAT_ITEM_ST_HORSE_SHOP";
			case joaat("AT_PRONGHORN_F_BAJA"):
				return "STAT_ITEM_AT_PRONGHORN_F_BAJA";
			case joaat("AT_SHEEP"):
				return "STAT_ITEM_AT_SHEEP";
			case joaat("SHOP_RHO_BANK"):
				return "STAT_ITEM_SHOP_RHO_BANK";
			case -1423960469:
				return "STAT_ITEM_AT_ELK_MPLEGENDARY_KATATA";
			case joaat("RACE"):
				return "STAT_ITEM_RACE";
			case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_SATCHEL_002_1";
			case -1415813644: /* GXTEntry: "Sheepskin Vest" */
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_006_11";
			case joaat("AMMO_TOMAHAWK_HOMING"):
				return "STAT_ITEM_AMMO_TOMAHAWK_HOMING";
			case joaat("AMMO_PISTOL_HIGH_VELOCITY"):
				return "STAT_ITEM_AMMO_PISTOL_HIGH_VELOCITY";
			case joaat("UGC_VERSUS_ESCAPE_FROM"):
				return "STAT_ITEM_UGC_VERSUS_ESCAPE_FROM";
			case joaat("SPRINTING"):
				return "STAT_ITEM_SPRINTING";
			case joaat("ST_DOCTOR"):
				return "STAT_ITEM_ST_DOCTOR";
			case joaat("CONSUMABLE_FLAKEY_FISH_WILD_MINT_COOKED"):
				return "STAT_ITEM_CONSUMABLE_FLAKEY_FISH_WILD_MINT_COOKED";
			case joaat("MPPS_MOST_DISARMS"):
				return "STAT_ITEM_MPPS_MOST_DISARMS";
			case joaat("CLOTHING_HL_PLAYER_HAT_048_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_048_1";
			case joaat("LEGENDARY_BOUNTY_MISSION_04"):
				return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_04";
			case -1373797819:
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_MOOSE";
			case joaat("CONSUMABLE_CRUSTACEAN_MEAT_MINT_COOKED"):
				return "STAT_ITEM_CONSUMABLE_CRUSTACEAN_MEAT_MINT_COOKED";
			case joaat("NET_PLAYLIST_RACE_SERIES"):
				return "STAT_ITEM_NET_PLAYLIST_RACE_SERIES";
			case joaat("AMMO_ARROW_SMALL_GAME"):
				return "STAT_ITEM_AMMO_ARROW_SMALL_GAME";
			case joaat("SPECIAL_MODES_1"):
				return "STAT_ITEM_SPECIAL_MODES_1";
			case joaat("AT_SNAKE_COTTON"):
				return "STAT_ITEM_AT_SNAKE_COTTON";
			case joaat("ARROW_FIRE"):
				return "STAT_ITEM_ARROW_FIRE";
			case joaat("CONSUMABLE_SUCCULENT_FISH_OREGANO_COOKED"):
				return "STAT_ITEM_CONSUMABLE_SUCCULENT_FISH_OREGANO_COOKED";
			case joaat("UGC_VERSUS_HOT_SEAT"):
				return "STAT_ITEM_UGC_VERSUS_HOT_SEAT";
			case joaat("HERBS_PICKED_TOTAL"):
				return "STAT_ITEM_HERBS_PICKED_TOTAL";
			case joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"):
				return "STAT_ITEM_CONSUMABLE_PRIME_BEEF_OREGANO_COOKED";
			case joaat("AT_DUCK"):
				return "STAT_ITEM_AT_DUCK";
			case joaat("UGC_VERSUS_SMUGGLERS_RUN"):
				return "STAT_ITEM_UGC_VERSUS_SMUGGLERS_RUN";
			case joaat("FETCH_GFH_DESTROY"):
				return "STAT_ITEM_FETCH_GFH_DESTROY";
			case joaat("BURGLARY"):
				return "STAT_ITEM_BURGLARY";
			case joaat("AMMO_REPEATER"):
				return "STAT_ITEM_AMMO_REPEATER";
			case -1329287819: /* GXTEntry: "Pronghorn Skull" */
				return "STAT_ITEM_UPGRADE_PCC_PRONGHORNSKULL_01";
			case joaat("AT_BULL_DEVON"):
				return "STAT_ITEM_AT_BULL_DEVON";
			case joaat("GFH_ASSASSINATION_TRACKING"):
				return "STAT_ITEM_GFH_ASSASSINATION_TRACKING";
			case joaat("FETCH_TRADER_RESUPPLY_HONOURABLE_DEFEND"):
				return "STAT_ITEM_FETCH_TRADER_RESUPPLY_HONOURABLE_DEFEND";
			case joaat("AT_DOG_BLUETICK"):
				return "STAT_ITEM_AT_DOG_BLUETICK";
			case joaat("SN_BOW"):
				return "STAT_ITEM_SN_BOW";
			case joaat("AT_PHEASANT"):
				return "STAT_ITEM_AT_PHEASANT";
			case joaat("FETCH_MOONSHINE_BOOTLEGGER_BAR_PROTECTION"):
				return "STAT_ITEM_FETCH_MOONSHINE_BOOTLEGGER_BAR_PROTECTION";
			case joaat("FETCH_BOUNTY_HUNTER_MISSIONS"):
				return "STAT_ITEM_FETCH_BOUNTY_HUNTER_MISSIONS";
			case joaat("DIRTINESS"):
				return "STAT_ITEM_DIRTINESS";
			case joaat("PASS_HORSE_DB"):
				return "STAT_ITEM_PASS_HORSE_DB";
			case joaat("MISSIONS_CHP3"):
				return "STAT_ITEM_MISSIONS_CHP3";
			case joaat("NET_PLAYER_ABILITY__COME_BACK_STRONGER"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__COME_BACK_STRONGER";
			case joaat("MPPS_MOST_GROIN_SHOTS"):
				return "STAT_ITEM_MPPS_MOST_GROIN_SHOTS";
			case joaat("AT_FLAKESTURGEON"):
				return "STAT_ITEM_AT_FLAKESTURGEON";
			case joaat("NET_PLAYER_ABILITY__WAR_HORSE"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__WAR_HORSE";
			case -1283929968:
				return "STAT_ITEM_FEE_ROLE_NATURALIST_SPIRIT_ANIMAL_HERB_DONATION";
			case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK"):
				return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK";
			case joaat("CONSUMABLE_SUCCULENT_FISH_THYME_COOKED"):
				return "STAT_ITEM_CONSUMABLE_SUCCULENT_FISH_THYME_COOKED";
			case joaat("CLOTHING_HL_PLAYER_HAT_063_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_063_1";
			case joaat("CRAFTED_ITEM"):
				return "STAT_ITEM_CRAFTED_ITEM";
			case joaat("CONSUMABLE_CRUSTACEAN_MEAT_COOKED"):
				return "STAT_ITEM_CONSUMABLE_CRUSTACEAN_MEAT_COOKED";
			case joaat("NET_BEAT_LEGENDARY_ANIMAL_BEAR"):
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_BEAR";
			case -1275876127:
				return "STAT_ITEM_AT_MOOSE_MPLEGENDARY_RUDDY";
			case joaat("MEDIUM_ANIMALS"):
				return "STAT_ITEM_MEDIUM_ANIMALS";
			case joaat("AT_CEDARWAXWING"):
				return "STAT_ITEM_AT_CEDARWAXWING";
			case joaat("ML_HAMMER"):
				return "STAT_ITEM_ML_HAMMER";
			case joaat("AT_FROCKBASS"):
				return "STAT_ITEM_AT_FROCKBASS";
			case joaat("ON_FOOT"):
				return "STAT_ITEM_ON_FOOT";
			case joaat("SHOTGUN"):
				return "STAT_ITEM_SHOTGUN";
			case joaat("WEAPON_ACCESSORY"):
				return "STAT_ITEM_WEAPON_ACCESSORY";
			case -1262979941: /* GXTEntry: "Ox Hide Rug" */
				return "STAT_ITEM_UPGRADE_PCC_CRAFTEDROOL_01";
			case joaat("SHOP_VAN_HORSE_SHOP"):
				return "STAT_ITEM_SHOP_VAN_HORSE_SHOP";
			case joaat("LEGENDARY_BOUNTY_MISSION_08"):
				return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_08";
			case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
				return "STAT_ITEM_HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000";
			case joaat("PREDATOR_DANGEROUS"):
				return "STAT_ITEM_PREDATOR_DANGEROUS";
			case joaat("AT_HERON_TRI"):
				return "STAT_ITEM_AT_HERON_TRI";
			case joaat("RE_HOBO_DOG"):
				return "STAT_ITEM_RE_HOBO_DOG";
			case joaat("GROUP_BOW"):
				return "STAT_ITEM_GROUP_BOW";
			case joaat("SHOP_RHO_TRAIN_STATION"):
				return "STAT_ITEM_SHOP_RHO_TRAIN_STATION";
			case joaat("CONSUMABLE_SUCCULENT_FISH_COOKED"):
				return "STAT_ITEM_CONSUMABLE_SUCCULENT_FISH_COOKED";
			case joaat("RELEASE_THROWN"):
				return "STAT_ITEM_RELEASE_THROWN";
			case -1234813538:
				return "STAT_ITEM_AT_BUFFALO_MPLEGENDARY_PAYTA";
			case joaat("AMMO_ARROW_WOUND"):
				return "STAT_ITEM_AMMO_ARROW_WOUND";
			case joaat("HERBS_QUICK_PICKED"):
				return "STAT_ITEM_HERBS_QUICK_PICKED";
			case joaat("FOUR_PLAYER_SERIES"):
				return "STAT_ITEM_FOUR_PLAYER_SERIES";
			case joaat("KNIFE"):
				return "STAT_ITEM_KNIFE";
			case joaat("AT_FLONGNOSEGAR"):
				return "STAT_ITEM_AT_FLONGNOSEGAR";
			case joaat("NET_PLAYER_ABILITY__WINNING_STREAK"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__WINNING_STREAK";
			case joaat("GROUP_SNIPER"):
				return "STAT_ITEM_GROUP_SNIPER";
			case joaat("NO_DAMAGE_RECEIVED"):
				return "STAT_ITEM_NO_DAMAGE_RECEIVED";
			case joaat("SMALL"):
				return "STAT_ITEM_SMALL";
			case joaat("MPPS_LONGEST_TIME_DOWNED"):
				return "STAT_ITEM_MPPS_LONGEST_TIME_DOWNED";
			case -1207701511:
				return "STAT_ITEM_4";
			case joaat("AT_COW"):
				return "STAT_ITEM_AT_COW";
			case joaat("AT_EGRET_SNOWY"):
				return "STAT_ITEM_AT_EGRET_SNOWY";
			case joaat("SG_DBBARREL"):
				return "STAT_ITEM_SG_DBBARREL";
			case -1200110290:
				return "STAT_ITEM_AT_BEAVER_MPLEGENDARY_MOON";
			case joaat("CONSUMABLE_COFFEE"):
				return "STAT_ITEM_CONSUMABLE_COFFEE";
			case joaat("MPPS_NOTITLE_BORING"):
				return "STAT_ITEM_MPPS_NOTITLE_BORING";
			case joaat("MPPS_MOST_TIMES_HOGITED"):
				return "STAT_ITEM_MPPS_MOST_TIMES_HOGITED";
			case joaat("WEAPON_CLEANING"):
				return "STAT_ITEM_WEAPON_CLEANING";
			case joaat("HERB_CIGAR_ORCHID"):
				return "STAT_ITEM_HERB_CIGAR_ORCHID";
			case joaat("AT_OX_DEVON"):
				return "STAT_ITEM_AT_OX_DEVON";
			case joaat("MPPS_DUAL_WIELD_KILLS"):
				return "STAT_ITEM_MPPS_DUAL_WIELD_KILLS";
			case joaat("AMMO_HATCHET_CLEAVER"):
				return "STAT_ITEM_AMMO_HATCHET_CLEAVER";
			case joaat("CRIMINAL"):
				return "STAT_ITEM_CRIMINAL";
			case joaat("AT_ROSESPOONBILL"):
				return "STAT_ITEM_AT_ROSESPOONBILL";
			case joaat("COSMETIC"):
				return "STAT_ITEM_COSMETIC";
			case joaat("MPPS_LONGEST_TIME_AIMING"):
				return "STAT_ITEM_MPPS_LONGEST_TIME_AIMING";
			case joaat("TRUNKS"):
				return "STAT_ITEM_TRUNKS";
			case joaat("HERB_WILD_FLWR_BITTERWEED"):
				return "STAT_ITEM_HERB_WILD_FLWR_BITTERWEED";
			case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_9"):
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_9";
			case -1173528458: /* GXTEntry: "Billy Vest" */
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_027_1";
			case -1171462349:
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_BEST";
			case joaat("AMMO_TURRET"):
				return "STAT_ITEM_AMMO_TURRET";
			case joaat("DYNAMITE"):
				return "STAT_ITEM_DYNAMITE";
			case joaat("CLOTHING_HL_PLAYER_SPATS_006_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_SPATS_006_1";
			case joaat("GUN_FOR_HIRE"):
				return "STAT_ITEM_GUN_FOR_HIRE";
			case joaat("SHOP_SDN_GUNSMITH"):
				return "STAT_ITEM_SHOP_SDN_GUNSMITH";
			case joaat("WEAPONSLOT_LONGARM"):
				return "STAT_ITEM_WEAPONSLOT_LONGARM";
			case joaat("GFH_ALDEN"):
				return "STAT_ITEM_GFH_ALDEN";
			case joaat("FETCH_GFH_RECOVER"):
				return "STAT_ITEM_FETCH_GFH_RECOVER";
			case joaat("UGC_VERSUS_TERRITORY_TAKEOVER"):
				return "STAT_ITEM_UGC_VERSUS_TERRITORY_TAKEOVER";
			case joaat("FETCH_BOUNTY_KNOWN_TARGET"):
				return "STAT_ITEM_FETCH_BOUNTY_KNOWN_TARGET";
			case -1152611169:
				return "STAT_ITEM_ANIMAL_TRANSFORMATION_POSSUM";
			case joaat("CLOTHING_HL_PLAYER_CHAPS_009_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_009_1";
			case -1145367359: /* GXTEntry: "Pronghorn Leather Table Tops" */
				return "STAT_ITEM_UPGRADE_PCC_COVERPRONGHORN_01";
			case joaat("CLOTHING_HL_PLAYER_COAT_029_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_029_1";
			case joaat("CONSUMABLE_PLUMP_BIRD_THYME_COOKED"):
				return "STAT_ITEM_CONSUMABLE_PLUMP_BIRD_THYME_COOKED";
			case joaat("AT_CRANE_SAND"):
				return "STAT_ITEM_AT_CRANE_SAND";
			case joaat("MP_FETCH_LAST_ATTEMPTED_CAMP_SELL_PVP_TIMESTAMP"):
				return "STAT_ITEM_MP_FETCH_LAST_ATTEMPTED_CAMP_SELL_PVP_TIMESTAMP";
			case joaat("NET_PLAYER_ABILITY__TASTE_FOR_IT"):
				return "STAT_ITEM_NET_PLAYER_ABILITY__TASTE_FOR_IT";
			case joaat("CONSUMABLE_MEAL_CAMP_STEW_LOW"):
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_LOW";
			case joaat("SHOP_BOJ_HONOR_MP"):
				return "STAT_ITEM_SHOP_BOJ_HONOR_MP";
			case joaat("MPPS_LEAST_ACCURATE"):
				return "STAT_ITEM_MPPS_LEAST_ACCURATE";
			case joaat("UGC_VERSUS_STANDOFF"):
				return "STAT_ITEM_UGC_VERSUS_STANDOFF";
			case -1122351331:
				return "STAT_ITEM_MP_BEAT_MANAGER_NATURALIST_COOLDOWN_TIMESTAMP";
			case joaat("AT_DOG_CATAHOULA"):
				return "STAT_ITEM_AT_DOG_CATAHOULA";
			case joaat("FETCH_GFH_RESCUE"):
				return "STAT_ITEM_FETCH_GFH_RESCUE";
			case joaat("MPPS_LONGEST_ALIVE"):
				return "STAT_ITEM_MPPS_LONGEST_ALIVE";
			case joaat("CLOTHING_HL_PLAYER_SPATS_013_1"):
				return "STAT_ITEM_CLOTHING_HL_PLAYER_SPATS_013_1";
			case -1110126435: /* GXTEntry: "Glorious Accessory" */
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_007_1";
			case joaat("CONSUMABLE_TENDER_PORK_OREGANO_COOKED"):
				return "STAT_ITEM_CONSUMABLE_TENDER_PORK_OREGANO_COOKED";
			case joaat("GROUP_REVOLVER"):
				return "STAT_ITEM_GROUP_REVOLVER";
			case joaat("AT_SPARROW_EURO"):
				return "STAT_ITEM_AT_SPARROW_EURO";
			case joaat("FROM_HIP"):
				return "STAT_ITEM_FROM_HIP";
			case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
				return "STAT_ITEM_AMMO_HATCHET_HUNTER_RUSTED";
			case joaat("GOOD"):
				return "STAT_ITEM_GOOD";
			case joaat("ML_HATCHET_VIKING"):
				return "STAT_ITEM_ML_HATCHET_VIKING";
			case -1088257729:
				return "STAT_ITEM_CONSUMABLE_TONIC_HARDY";
			case joaat("MPPS_SHORTEST_LIFE"):
				return "STAT_ITEM_MPPS_SHORTEST_LIFE";
			case -1080874779: /* GXTEntry: "Special Health Cure" */
				return "STAT_ITEM_CONSUMABLE_SPECIAL_MEDICINE_CRAFTED";
			case joaat("SHOP_WILDERNESS_SUPPLIES"):
				return "STAT_ITEM_SHOP_WILDERNESS_SUPPLIES";
			case joaat("AMMO_SHOTGUN_BUCKSHOT_INCENDIARY"):
				return "STAT_ITEM_AMMO_SHOTGUN_BUCKSHOT_INCENDIARY";
			case -1072381502: /* GXTEntry: "Legendary Bison Vest" */
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_019_1";
			case joaat("AT_COUGAR"):
				return "STAT_ITEM_AT_COUGAR";
			case -1070540960:
				return "STAT_ITEM_AT_RAM_MPLEGENDARY_GABBRO_HORN";
				return "STAT_ITEM_CONSUMABLE_POTENT_RESTORATIVE";
				return "STAT_ITEM_MOONSHINE_STRENGTH_WEAK";
				return "STAT_ITEM_AT_FBULLHEADCATFISH";
				return "STAT_ITEM_GFH_THE_BOY";
				return "STAT_ITEM_CONSUMABLE_GRISTLY_MUTTON_OREGANO_COOKED";
				return "STAT_ITEM_MPPS_MOST_HEADSHOTS";
				return "STAT_ITEM_CONSUMABLE_GAME_MEAT_OREGANO_COOKED";
				return "STAT_ITEM_AT_SQUIRREL_BLACK";
				return "STAT_ITEM_AT_BUCK";
				return "STAT_ITEM_DRAFT";
				return "STAT_ITEM_MP_TUTORIAL_SPAWN_VEHICLE_DEATH";
				return "STAT_ITEM_MP_TUTORIAL_FOLLOW_PED_APPROACHED_HOGTIED";
				return "STAT_ITEM_UGC_RACE_OPEN_TARGET";
				return "STAT_ITEM_AT_SONGBIRD_SCARLET";
				return "STAT_ITEM_SHOP_HSO_GENERAL_STORE";
				return "STAT_ITEM_DEATHS";
				return "STAT_ITEM_MEXICO_AREAS";
				return "STAT_ITEM_AMMO_ARROW_DYNAMITE";
				return "STAT_ITEM_COMBAT_ROLL";
				return "STAT_ITEM_HERB_HUMMINGBIRD_SAGE";
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_10";
				return "STAT_ITEM_CLOTHING";
				return "STAT_ITEM_RP_HENRY";
				return "STAT_ITEM_POKER_HIGH_CARD";
				return "STAT_ITEM_CLAWS_COLLECTED";
				return "STAT_ITEM_REACTIONS";
				return "STAT_ITEM_WEAPON_MOD";
				return "STAT_ITEM_NET_PLAYLIST_SHOOTOUT";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_010_1";
				return "STAT_ITEM_TARGET_3";
				return "STAT_ITEM_MPPS_MOST_STAMINA_PICKUPS_COLLECTED";
				return "STAT_ITEM_CLIMB_LOW";
				return "STAT_ITEM_SAVAGES";
				return "STAT_ITEM_CONSUMABLE_TONIC_WEIGHT_LOSS";
				return "STAT_ITEM_AT_FOX";
				return "STAT_ITEM_HERB_WILD_FLWR_RHUBARB";
				return "STAT_ITEM_MISSIONS_CHP6";
				return "STAT_ITEM_AT_OWL_NORTH";
				return "STAT_ITEM_ROBBERY";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_012_2";
				return "STAT_ITEM_AT_SKUNK";
				return "STAT_ITEM_SHOP_BLK_BARBER";
				return "STAT_ITEM_LARGE";
				return "STAT_ITEM_UGC_LETTER_MISSION";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_014_1";
				return "STAT_ITEM_HERB_PARASOL_MUSHROOM";
				return "STAT_ITEM_AT_GATOR_MPLEGENDARY_BANDED";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_042_1";
				return "STAT_ITEM_FETCH_GFH_JAILBREAK";
				return "STAT_ITEM_AT_COUGAR_LEGENDARY";
				return "STAT_ITEM_RF_BOLTACTN";
				return "STAT_ITEM_RV_DB_ACTN";
				return "STAT_ITEM_SHOP_SDN_POST_OFFICE";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_061_1";
				return "STAT_ITEM_NET_PLAYER_ABILITY__KICK_IN_THE_BUTT";
				return "STAT_ITEM_STRAWBERRY_SHERIFF_BOUNTY_BOARD";
				return "STAT_ITEM_HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000";
				return "STAT_ITEM_SN_CARCANO";
				return "STAT_ITEM_AT_SNAKE_BLACK";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_020_1";
				return "STAT_ITEM_AT_CHICKEN_PRAIRIE";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_058_1";
				return "STAT_ITEM_TONIC";
				return "STAT_ITEM_PROVISION_TRINKET_FOX_CLAW";
				return "STAT_ITEM_MPPS_MOST_HATSHOTS";
				return "STAT_ITEM_HERB_ALASKAN_GINSENG";
				return "STAT_ITEM_GFH_THOMAS_SKIFF_CAPTAIN";
				return "STAT_ITEM_THREATENED";
				return "STAT_ITEM_FETCH_GFH_STEAL_WAGON";
				return "STAT_ITEM_ST_BAIT";
				return "STAT_ITEM_SHOP_SDN_DOCTOR";
				return "STAT_ITEM_BAYOU_NWA";
				return "STAT_ITEM_5";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_029_2";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_067_1";
				return "STAT_ITEM_NEW_AUSTIN_AREAS";
				return "STAT_ITEM_NET_PLAYER_ABILITY__PEAK_CONDITION";
				return "STAT_ITEM_MP_TUTORIAL_GFH_POSITIVE_HONOR";
				return "STAT_ITEM_AT_PRONGHORN_LEGENDARY";
				return "STAT_ITEM_FREE_AIM";
				return "STAT_ITEM_AT_POSSUM";
				return "STAT_ITEM_JAIL_BREAK";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_003_2";
				return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_09";
				return "STAT_ITEM_AT_FMUSKIE";
				return "STAT_ITEM_AT_BEAR_MPLEGENDARY_OWIZA";
				return "STAT_ITEM_AMMO_HATCHET_DOUBLE_BIT_RUSTED";
				return "STAT_ITEM_HOGTIED";
				return "STAT_ITEM_FETCH_BOUNTY_HARD";
				return "STAT_ITEM_ENEMY_MOUNT";
				return "STAT_ITEM_LIVE_BAIT";
				return "STAT_ITEM_ANIMAL_TRANSFORMATION_MEDIUM";
				return "STAT_ITEM_NET_PLAYER_ABILITY__HEALING_HANDS";
				return "STAT_ITEM_MOONSHINE_RECIPE_IMPROVED";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_022_2";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_033_1";
				return "STAT_ITEM_SHOP_SCM_TRAVELLING_SALESMAN";
				return "STAT_ITEM_AT_RAM_DESERT";
				return "STAT_ITEM_POTENT_HERBIVORE_BAIT";
				return "STAT_ITEM_FME_CHALLENGE_HORSEBACK";
				return "STAT_ITEM_GFH_HECTOR";
				return "STAT_ITEM_AT_FOX_SILVER";
				return "STAT_ITEM_AT_FCHANNEL_LEGENDARY";
				return "STAT_ITEM_UPGRADE_PCC_SCOUTFIREELKANTLERS_01";
				return "STAT_ITEM_RF_ELEPHANT";
				return "STAT_ITEM_NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
				return "STAT_ITEM_MPPS_MOST_DAMAGER";
				return "STAT_ITEM_UPGRADE_PCC_RAMSKULL_01";
				return "STAT_ITEM_AMMO_TOMAHAWK_IMPROVED";
				return "STAT_ITEM_PROVISION_TALISMAN_BEAR_CLAW";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_SATCHEL_003_1";
				return "STAT_ITEM_CONSUMABLE_EXOTIC_BIRD_THYME_COOKED";
				return "STAT_ITEM_TARGET_6";
				return "STAT_ITEM_KIDNAPPING";
				return "STAT_ITEM_HERB_LADY_OF_NIGHT_ORCHID";
				return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER";
				return "STAT_ITEM_MP_TUTORIAL_ANIMAL_ATTACK";
				return "STAT_ITEM_NET_BEAT_UNPAID_DEBT";
				return "STAT_ITEM_SHOP_AMD_HONOR_MP";
				return "STAT_ITEM_AT_PIG_CHINA";
				return "STAT_ITEM_SHOP_BLK_COACH";
				return "STAT_ITEM_BIG_VALLEY";
				return "STAT_ITEM_MPPS_LEAST_DAMAGED";
				return "STAT_ITEM_NET_PLAYER_ABILITY__THE_SHORT_GAME";
				return "STAT_ITEM_BLEED";
				return "STAT_ITEM_UPGRADE_PCC_SCOUTFIREGCOVER_01";
				return "STAT_ITEM_TR_REVOLVING_CANNON";
				return "STAT_ITEM_CONSUMABLE_POTENT_HORSE_STIMULANT";
				return "STAT_ITEM_UNDER_WATER";
				return "STAT_ITEM_MURDER_LIVESTOCK";
				return "STAT_ITEM_AT_FSTURGEON_LEGENDARY";
				return "STAT_ITEM_MP_TUTORIAL_STOP_VEHICLE";
				return "STAT_ITEM_MISSIONS_CHP4";
				return "STAT_ITEM_FME_CHALLENGE_FISHING";
				return "STAT_ITEM_AT_RAM_LEGENDARY";
				return "STAT_ITEM_POSSE_VERSUS";
				return "STAT_ITEM_AT_FCHAINPICKEREL";
				return "STAT_ITEM_AT_FPERCH_LEGENDARY";
				return "STAT_ITEM_MPPS_MOST_TIME_NEAR_ENEMIES";
				return "STAT_ITEM_ON_BICYCLE";
				return "STAT_ITEM_SHOP_VAL_GENERAL_STORE";
				return "STAT_ITEM_RV_NAVY";
				return "STAT_ITEM_HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000";
				return "STAT_ITEM_SHOP_RGG_POST_OFFICE";
				return "STAT_ITEM_NET_BEAT_MOONSHINE_CAMP";
				return "STAT_ITEM_SHOP_MOONSHINE_PROPERTY";
				return "STAT_ITEM_AT_SNAKE_FERDELANCE";
				return "STAT_ITEM_TH_BOLAS";
				return "STAT_ITEM_MP_TUTORIAL_GVO_GUNSLINGER_4_GFH_GIVER_UNLOCKED";
				return "STAT_ITEM_FIVE_FINGER";
				return "STAT_ITEM_ON_MOUNT";
				return "STAT_ITEM_AT_QUAIL";
				return "STAT_ITEM_CONSUMABLE_POTENT_MEDICINE";
				return "STAT_ITEM_FIRE";
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_BUCK";
				return "STAT_ITEM_GFH_FLACO_HERNANDEZ";
				return "STAT_ITEM_BLACKJACK";
				return "STAT_ITEM_SG_PUMP";
				return "STAT_ITEM_GUN_FOR_HIRE_MOONSHINER";
				return "STAT_ITEM_MPPS_KILLSTREAKS_ENDED";
				return "STAT_ITEM_PS_MAUSER_DRUNK";
				return "STAT_ITEM_CHARACTER_ROLE_TRADER_GOODS";
				return "STAT_ITEM_LEGENDARY_ANIMALS";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_008_C1_1";
				return "STAT_ITEM_TWELVE_PLAYER_SERIES";
				return "STAT_ITEM_GROUP_MELEE";
				return "STAT_ITEM_LOOTING";
				return "STAT_ITEM_FETCH_DYNAMIC_RUNAWAY_WAGON";
				return "STAT_ITEM_FETCH_HIDEOUT";
				return "STAT_ITEM_MPPS_MOST_DISTANCE_TRAVELLED";
				return "STAT_ITEM_MPPS_MOST_REVIVER_KILLS";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_066_1";
				return "STAT_ITEM_MPPS_MOST_POSITIONS_GAINED";
				return "STAT_ITEM_SHOP_BGV_TRAVELLING_SALESMAN";
				return "STAT_ITEM_W_REINFORCED_LASSO";
				return "STAT_ITEM_AT_RAT";
				return "STAT_ITEM_CHEATING";
				return "STAT_ITEM_MOONSHINE_STRENGTH_STRONG";
				return "STAT_ITEM_GVO_FLOW_REPLAY_TIMESTAMP";
				return "STAT_ITEM_CONSUMABLE_GRISTLY_MUTTON_WILD_MINT_COOKED";
				return "STAT_ITEM_MOONSHINE_STORY_MISSION_ANY";
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_8";
				return "STAT_ITEM_FOOD_COOKED";
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_MED";
				return "STAT_ITEM_RACE_IMPROMPTU";
				return "STAT_ITEM_AT_PARROT_SCARLET";
				return "STAT_ITEM_SPIN_SLOT_A";
				return "STAT_ITEM_AT_PRONGHORN_AMERICAN";
				return "STAT_ITEM_POKER_2_PAIR";
				return "STAT_ITEM_MPPS_MOST_LAPS_IN_FIRST_AND_LOST";
				return "STAT_ITEM_AT_CHICKEN_JAVA";
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_10";
				return "STAT_ITEM_ML_HATCHET_HUNTER";
				return "STAT_ITEM_BELT_BUCKLE";
				return "STAT_ITEM_FETCH_TRADER_SELL_CONTESTED";
				return "STAT_ITEM_POKER_4_OF_A_KIND";
				return "STAT_ITEM_CAMP_REQUESTS_COMPLETED";
				return "STAT_ITEM_MPPS_FIRST_KILL";
				return "STAT_ITEM_MPPS_NOTITLE_INVISIBLE";
				return "STAT_ITEM_ANIMAL_TRANSFORMATION_LARGE";
				return "STAT_ITEM_MOONSHINER_BAR_DECOR";
				return "STAT_ITEM_HERB_WILD_FLWR_BLUE_BONNET";
				return "STAT_ITEM_HEALTH";
				return "STAT_ITEM_FETCH_MOONSHINE_SETUP_RESCUE_COOK";
				return "STAT_ITEM_MURDER_ANIMAL";
				return "STAT_ITEM_CONSUMABLE_MATURE_VENISON_THYME_COOKED";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_022_3";
				return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS";
				return "STAT_ITEM_CONSUMABLE_POTENT_HORSE_MEDICINE";
				return "STAT_ITEM_SKIFF";
				return "STAT_ITEM_CLOSE_RANGE";
				return "STAT_ITEM_MEDIUM_RANGE";
				return "STAT_ITEM_MP_TUTORIAL_LEGENDARY_BOUNTY_REPLAY_AVAILABLE";
				return "STAT_ITEM_HERB_CHANTERELLES";
				return "STAT_ITEM_MP_FETCH_LAST_STARTED_BUSINESS_RAID_TYPE";
				return "STAT_ITEM_MPPS_LEAST_DEATH";
				return "STAT_ITEM_CONSUMABLE_TONIC_BLENDING";
				return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT";
				return "STAT_ITEM_MP_TUTORIAL_VEHICLE_HALTED";
				return "STAT_ITEM_SHOP";
				return "STAT_ITEM_TOMAHAWK";
				return "STAT_ITEM_SHOP_SDN_HORSE_SHOP";
				return "STAT_ITEM_CONSUMABLE_TONIC_POTENT_WEIGHT_GAIN";
				return "STAT_ITEM_AT_DOG_BLOODHOUND";
				return "STAT_ITEM_MPPS_MOST_EXPLOSIVES_USED";
				return "STAT_ITEM_AMMO_ARROW_DISORIENT";
				return "STAT_ITEM_GROUP_REPEATER";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_SATCHEL_008_1";
				return "STAT_ITEM_AT_PRONGHORN_F_SONO";
				return "STAT_ITEM_WILD";
				return "STAT_ITEM_POKER_FLUSH";
				return "STAT_ITEM_UGC_VERSUS_BOSSMAN";
				return "STAT_ITEM_MISSIONS";
				return "STAT_ITEM_AT_RAM_SIERRA";
				return "STAT_ITEM_TARGET_5";
				return "STAT_ITEM_VEHICLE";
				return "STAT_ITEM_CARRIED_AND_DROPPED";
				return "STAT_ITEM_VALENTINE_SHERIFF_BOUNTY_BOARD";
				return "STAT_ITEM_AT_SQUIRREL";
				return "STAT_ITEM_SAME_WEAPON_KILL";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_SPATS_008_1";
				return "STAT_ITEM_REVOLVER";
				return "STAT_ITEM_AMMO_REPEATER_EXPRESS";
				return "STAT_ITEM_EXPLOSION";
				return "STAT_ITEM_AT_BEAR_BLACK";
				return "STAT_ITEM_NET_PLAYER_ABILITY__QUICK_RELEASE";
				return "STAT_ITEM_GUN_FOR_HIRE_NATURALIST";
				return "STAT_ITEM_UGC_RACE_TARGET";
				return "STAT_ITEM_FETCH_INTRO_HIDEOUT";
				return "STAT_ITEM_FME_CHALLENGE_WILD_ANIMALS";
				return "STAT_ITEM_RHODES_SHERIFF_BOUNTY_BOARD";
				return "STAT_ITEM_HORSE_EQUIPMENT_WESTERN_02_SPECIAL_NEW_SADDLE_000";
				return "STAT_ITEM_AT_COYOTE";
				return "STAT_ITEM_AT_PANTHER_MPLEGENDARY_GHOST";
				return "STAT_ITEM_AT_IGUANA_DESERT";
				return "STAT_ITEM_CLIMB_HIGH";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_064_1";
				return "STAT_ITEM_BOUNTY_TARGET";
				return "STAT_ITEM_SHOP_THL_FENCE";
				return "STAT_ITEM_ANY";
				return "STAT_ITEM_MURDER_HORSE";
				return "STAT_ITEM_AT_SNAKE_BOA";
				return "STAT_ITEM_CONSUMABLE_GRISTLY_MUTTON_COOKED";
				return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_LOW";
				return "STAT_ITEM_ST_GUNSMITH";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_032_1";
				return "STAT_ITEM_HIT_AND_RUN";
				return "STAT_ITEM_CHALLENGES_COMPLETED";
				return "STAT_ITEM_AT_FGAR_LEGENDARY";
				return "STAT_ITEM_MISSIONS_CHP9";
				return "STAT_ITEM_FETCH_BOUNTY_MOVING_KNOWN_TARGET";
				return "STAT_ITEM_ML_KNIFE_VAMPIRE";
				return "STAT_ITEM_AT_SNAKE_COPPER_NORTH";
				return "STAT_ITEM_MPPS_LOW_HEALTH";
				return "STAT_ITEM_SECRETLY";
				return "STAT_ITEM_MPPS_MOST_TIME_IN_SLIPSTREAM";
				return "STAT_ITEM_AT_DEER";
				return "STAT_ITEM_NET_PLAYER_ABILITY__OUT_WITH_A_BANG";
				return "STAT_ITEM_VEH_DB";
				return "STAT_ITEM_TURBINEBOAT";
				return "STAT_ITEM_DISARM";
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_FOX";
				return "STAT_ITEM_MP_BEAT_MANAGER_MOONSHINER_COOLDOWN_TIMESTAMP";
				return "STAT_ITEM_SHOP_SDN_TRAPPER";
				return "STAT_ITEM_MP_TUTORIAL_BOUNTY_DELIVER_DEAD";
				return "STAT_ITEM_HORSE_OVERTAKES";
				return "STAT_ITEM_RV_CATTLEMAN";
				return "STAT_ITEM_PREDATOR";
				return "STAT_ITEM_AT_FOX_GRAY";
				return "STAT_ITEM_SHOP_CLM_HORSE_FENCE";
				return "STAT_ITEM_ST_TRAVELLING_SALESMAN";
				return "STAT_ITEM_CONSUMABLE_POTENT_SNAKE_OIL";
				return "STAT_ITEM_AI_BOUNTY_TARGET";
				return "STAT_ITEM_SHOP_RHO_NEWSPAPER_BOY";
				return "STAT_ITEM_CONSUMABLE_PLUMP_BIRD_OREGANO_COOKED";
				return "STAT_ITEM_GFH_ASSASSINATION_STANDARD";
				return "STAT_ITEM_MP_TUTORIAL_FME_SCORE_TIMER";
				return "STAT_ITEM_RF_SPRING";
				return "STAT_ITEM_CONSUMABLE_STRING_MEAT_COOKED";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_025_1";
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_7";
				return "STAT_ITEM_ROWINGBOAT";
				return "STAT_ITEM_ML_MACHETE_COL";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_041_1";
				return "STAT_ITEM_AT_PELICAN";
				return "STAT_ITEM_HORSE_STIMULANT_GIVEN";
				return "STAT_ITEM_AMMO_HATCHET_VIKING";
				return "STAT_ITEM_PROPERTY_DEST";
				return "STAT_ITEM_FME_THEMED_ROUND_UP";
				return "STAT_ITEM_W_SHOVEL";
				return "STAT_ITEM_AT_PLAYERS_WILDERNESS_CAMP";
				return "STAT_ITEM_FETCH_TRADER_SELL_SELL_GOODS";
				return "STAT_ITEM_ML_HATCHET_DOUBLE_BIT_RUSTED";
				return "STAT_ITEM_SHOP_VAL_HOTEL";
				return "STAT_ITEM_MPPLY_OFFENSIVE_CREW_EMBLEM";
				return "STAT_ITEM_AT_WOLF";
				return "STAT_ITEM_FETCH_BOUNTY_MULTI_TRACK_TARGET";
				return "STAT_ITEM_HERB";
				return "STAT_ITEM_ML_CLEAVER";
				return "STAT_ITEM_ANIMAL_BAITED";
				return "STAT_ITEM_SKID";
				return "STAT_ITEM_WEAPON";
				return "STAT_ITEM_WILDERNESS_CHEST_LOOTED";
				return "STAT_ITEM_FIREBOTTLE";
				return "STAT_ITEM_FETCH_BOUNTY_TRACK_TARGET";
				return "STAT_ITEM_MOONSHINE_RECIPE_REGULAR";
				return "STAT_ITEM_ITEMS_CRAFTED";
				return "STAT_ITEM_AT_JAVELINA";
				return "STAT_ITEM_FETCH_MOONSHINER_BOOTLEGGER_MISSIONS";
				return "STAT_ITEM_SHOP_VAL_BARTENDER";
				return "STAT_ITEM_RC_STRANDS_BOUNTY";
				return "STAT_ITEM_AT_MOOSE_MPLEGENDARY_KNIGHT";
				return "STAT_ITEM_RE_RESCUES";
				return "STAT_ITEM_ROWBOATSWAMP";
				return "STAT_ITEM_UGC_DM_TEAM_GUN_RUSH";
				return "STAT_ITEM_COACH_MOD";
				return "STAT_ITEM_AT_WOODPECKER_PILEATED";
				return "STAT_ITEM_IN_ROW_BOAT";
				return "STAT_ITEM_ARMOUR";
				return "STAT_ITEM_THEFT_VEHICLE";
				return "STAT_ITEM_AT_WOLF_LEGENDARY";
				return "STAT_ITEM_AT_BULL_HEREFORD";
				return "STAT_ITEM_SHOP_VAN_POST_OFFICE";
				return "STAT_ITEM_TOTAL_WILDERNESS_CHEST_LOOTED";
				return "STAT_ITEM_AT_RAT_BLACK";
				return "STAT_ITEM_ONE_SHOT_KILLS";
				return "STAT_ITEM_SHOP_STR_POST_OFFICE";
				return "STAT_ITEM_AT_FPICKEREL_LEGENDARY";
				return "STAT_ITEM_UGC_VERSUS_AFGHAN_POLO_OBJECT";
				return "STAT_ITEM_UGC_DM_GUN_RUSH";
				return "STAT_ITEM_CONSUMABLE_GAME_MEAT_COOKED";
				return "STAT_ITEM_GAPTOOTH_RIDGE";
				return "STAT_ITEM_MISSIONS_CHP8";
				return "STAT_ITEM_ML_KNIFE_JOHN";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_046_1";
				return "STAT_ITEM_MP_TUTORIAL_BOUNTY_SATELLITE_DEAD";
				return "STAT_ITEM_PV_CHALLENGE_FISHING";
				return "STAT_ITEM_WAGON";
				return "STAT_ITEM_RV_LEMAT";
				return "STAT_ITEM_CONSUMABLE_GAME_MEAT_THYME_COOKED";
				return "STAT_ITEM_PELT_PRISTINE";
				return "STAT_ITEM_LAST_TRANSFORMED_ANIMAL";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_006_1";
				return "STAT_ITEM_MPPS_MOST_SUICIDES";
				return "STAT_ITEM_MPPS_EXECUTE_KILLS";
				return "STAT_ITEM_FETCH_GFH_DELIVERY_WAGON";
				return "STAT_ITEM_FULL_ROLE_DAY_COMPLETED";
				return "STAT_ITEM_SHOP_ROA_TRAPPER";
				return "STAT_ITEM_AT_BEAR_MPLEGENDARY_GOLDEN_SPIRIT";
				return "STAT_ITEM_MP_TUTORIAL_HIT_HOGTIED_PED";
				return "STAT_ITEM_DRAW_BOW";
				return "STAT_ITEM_UGC_VERSUS_HOT_POTATO";
				return "STAT_ITEM_UGC_DM_TEAM_FLAT_TRACK_BULLY";
				return "STAT_ITEM_GFH_OBEDIAH_HINTON";
				return "STAT_ITEM_AT_FSALMON_LEGENDARY";
				return "STAT_ITEM_SHOP_BVH_GENERAL_STORE";
				return "STAT_ITEM_UGC_DM_STANDARD";
				return "STAT_ITEM_KEELBOAT";
				return "STAT_ITEM_LONG_RANGE";
				return "STAT_ITEM_PROVISION_TRINKET_BUCK_ANTLER";
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_RAM";
				return "STAT_ITEM_SHOP_BVH_DOCTOR";
				return "STAT_ITEM_FETCH_BOUNTY_EASY";
				return "STAT_ITEM_HERB_VIOLET_SNOWDROP";
				return "STAT_ITEM_AT_ROOSTER";
				return "STAT_ITEM_THEFT_LIVESTOCK";
				return "STAT_ITEM_UGC_VERSUS_RANSACK";
				return "STAT_ITEM_CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE";
				return "STAT_ITEM_FME_KING_OF_THE_CASTLE";
				return "STAT_ITEM_AT_RAM_ROCKY";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_060_1";
				return "STAT_ITEM_SHOP_SHB_GUNSMITH";
				return "STAT_ITEM_CUMBERLAND_FOREST";
				return "STAT_ITEM_CONSUMABLE_EXOTIC_BIRD_OREGANO_COOKED";
				return "STAT_ITEM_AT_FOX_MPLEGENDARY_OTA";
				return "STAT_ITEM_ML_KNIFE";
				return "STAT_ITEM_UGC_VERSUS_HOLDOUT";
				return "STAT_ITEM_AMMO_TOMAHAWK_ANCIENT";
				return "STAT_ITEM_FETCH_TRADER_RESUPPLY_BROKEN_DOWN";
				return "STAT_ITEM_UPGRADE_PCC_SEATINGWOLFHEAD_01";
				return "STAT_ITEM_PROVISION_TRINKET_BEAVER_TOOTH";
				return "STAT_ITEM_CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED";
				return "STAT_ITEM_MP_TUTORIAL_BOUNTY_SATELLITE_ALIVE";
				return "STAT_ITEM_LEVEL_3";
				return "STAT_ITEM_HASSLE";
				return "STAT_ITEM_AT_PANTHER_MPLEGENDARY_KNIGHTWALKER";
				return "STAT_ITEM_POTENT_PREDATOR_BAIT";
				return "STAT_ITEM_SHOP_BLK_BARTENDER";
				return "STAT_ITEM_SCAVENGING_ANIMAL";
				return "STAT_ITEM_GFH_TRAIN_CLERK_WALLACE";
				return "STAT_ITEM_KILLS_PLAYERS";
				return "STAT_ITEM_MPPLY_ABUSIVE_CHAT";
				return "STAT_ITEM_NET_BEAT_RUNAWAY_WAGON";
				return "STAT_ITEM_AT_BUFFALO_MPLEGENDARY_TATANKA";
				return "STAT_ITEM_CONSUMABLE_TONIC_WEIGHT_GAIN";
				return "STAT_ITEM_UGC_DM_EVERY_THROWING_KNIFE_COUNTS";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_045_1";
				return "STAT_ITEM_SHOP_LAG_BAIT_STORE";
				return "STAT_ITEM_PROVISION_TALISMAN_BOAR_TUSK";
				return "STAT_ITEM_AT_ELK_MPLEGENDARY_INAHME";
				return "STAT_ITEM_AMMO_THROWING_KNIVES_JAVIER";
				return "STAT_ITEM_PIROGUE";
				return "STAT_ITEM_RV_CATTLEMAN_JOHN";
				return "STAT_ITEM_GFH_CRIPPS";
				return "STAT_ITEM_TROLLEY";
				return "STAT_ITEM_SHOP_STR_BOUNTYHUNTING_MP_RETURN";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_069_1";
				return "STAT_ITEM_NET_BEAT_KIDNAPPED";
				return "STAT_ITEM_RF_VARMINT";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_020_1";
				return "STAT_ITEM_SP_LASSO_RNF";
				return "STAT_ITEM_GUAMA_AREAS";
				return "STAT_ITEM_TR_CANNON";
				return "STAT_ITEM_SN_BOW_IMPROVED";
				return "STAT_ITEM_NO_KILLS";
				return "STAT_ITEM_CONSUMABLE_MATURE_VENISON_WILD_MINT_COOKED";
				return "STAT_ITEM_AMMO_ARROW_TRAIL";
				return "STAT_ITEM_MP_TUTORIAL_BOUNTY_TARGET_DEAD";
				return "STAT_ITEM_CHEWING_TOBACCO";
				return "STAT_ITEM_NOC_ANIMALS";
				return "STAT_ITEM_AT_HORSE";
				return "STAT_ITEM_UGC_VERSUS_BLIND_AND_BROKE";
				return "STAT_ITEM_THEFT_HORSE";
				return "STAT_ITEM_CONSUMABLE_MATURE_VENISON_COOKED";
				return "STAT_ITEM_ANIMAL_BAITED_KILLS";
				return "STAT_ITEM_MPPLY_OFFENSIVE_HORSE_NAME";
				return "STAT_ITEM_UPGRADE_PCC_CRAFTEDARTHURCHEST_01";
				return "STAT_ITEM_AT_SPARROW";
				return "STAT_ITEM_MP_TUTORIAL_BOUNTY_DELIVER_ALIVE";
				return "STAT_ITEM_GUT";
				return "STAT_ITEM_NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
				return "STAT_ITEM_HERB_MOCCASIN_FLOWER_ORCHID";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_056_1";
				return "STAT_ITEM_HERB_BAY_BOLETE";
				return "STAT_ITEM_AT_FRAINBOWTROUT";
				return "STAT_ITEM_PROVISION_TRINKET_WOLF_HEART";
				return "STAT_ITEM_PROVISION_TALISMAN_RAVEN_CLAW";
				return "STAT_ITEM_UGC_VERSUS_BAGGING_RIGHTS";
				return "STAT_ITEM_AT_TURTLE_SEA";
				return "STAT_ITEM_FETCH_TRADER_SELL_LOCAL_DEALER";
				return "STAT_ITEM_ANIMAL_TRANSFORMATION_BUCK";
				return "STAT_ITEM_ASSAULT_HORSE";
				return "STAT_ITEM_POSSE_KILLER";
				return "STAT_ITEM_MOONSHINE_RECIPE_SPECIAL";
				return "STAT_ITEM_REMEDIES";
				return "STAT_ITEM_GFH_ASSASSINATION_POSSE";
				return "STAT_ITEM_VAN_HORN_POST_OFFICE_BOUNTY_BOARD";
				return "STAT_ITEM_AT_BOAR_MPLEGENDARY_WAKPA";
				return "STAT_ITEM_MP_TUTORIAL_GVO_BRANCH_CHANGE";
				return "STAT_ITEM_MP_TUTORIAL_KEYS";
				return "STAT_ITEM_NET_BEAT_ANIMAL_ATTACK";
				return "STAT_ITEM_MASK";
				return "STAT_ITEM_UGC_DM_LTS";
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_14";
				return "STAT_ITEM_AT_BUCK_MPLEGENDARY_SNOW";
				return "STAT_ITEM_AT_ELK";
				return "STAT_ITEM_CHOPPED_WOOD";
				return "STAT_ITEM_AT_FPIKE_LEGENDARY";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_CLOAK_000_1";
				return "STAT_ITEM_FME_DEAD_DROP";
				return "STAT_ITEM_MPPS_MOST_WEAPON_PICKUPS_COLLECTED";
				return "STAT_ITEM_PROVISION_TALISMAN_ALLIGATOR_TOOTH";
				return "STAT_ITEM_NET_PLAYLIST_FEATURED_SERIES";
				return "STAT_ITEM_SHOP_HRT_E_TRAVELLING_SALESMAN";
				return "STAT_ITEM_TARGET_8";
				return "STAT_ITEM_TARGET_0";
				return "STAT_ITEM_ANIMAL_TRANSFORMATION_BEAR";
				return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_2";
				return "STAT_ITEM_HENNIGANS_STEAD";
				return "STAT_ITEM_MISSIONS_CHP7";
				return "STAT_ITEM_POOR";
				return "STAT_ITEM_AT_ARMADILLO";
				return "STAT_ITEM_GFH_SEAN_MACQUIRE";
				return "STAT_ITEM_FME_THEMED_CONDOR_EGG";
				return "STAT_ITEM_SPIN_SLOT_C";
				return "STAT_ITEM_NET_PLAYER_ABILITY__THE_UNBLINKING_EYE";
				return "STAT_ITEM_AREAS";
				return "STAT_ITEM_LIVE_BOUNTY_TARGET";
				return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_9";
				return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_038_1";
				return "STAT_ITEM_SHOP_SDN_TAILOR";
				return "STAT_ITEM_AT_SNAKE_COPPER_SOUTH";
				return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_BEAVER";
				return "STAT_ITEM_MURDER_LAW";
				return "STAT_ITEM_AT_PRONGHORN";
				return "STAT_ITEM_UPGRADE_PCC_HANGINGBONES_01";
				return "STAT_ITEM_INVALID";
				return "STAT_ITEM_NET_BEAT_TREE_MAP";
				return "STAT_ITEM_HORSE_DISMOUNTS";
				return "STAT_ITEM_SHOP_GRZ_TRAVELLING_SALESMAN";
				return "STAT_ITEM_LEVEL_2";
				return "STAT_ITEM_MP_TUTORIAL_OBJECTIVE_CONTROLS_BOAT";
				return "STAT_ITEM_ONE_WEAPON";
				return "STAT_ITEM_HAIRSTYLE";
				return "STAT_ITEM_INEBRIATED";
				return "STAT_ITEM_AMMO_BOLAS";
				return "STAT_ITEM_FME_ARCHERY";
				return "STAT_ITEM_RV_CATTLEMAN_MEXICAN";
				return "STAT_ITEM_MISSION_COOP_GVO_OUTLAW_1";
				return "STAT_ITEM_NET_PLAYER_ABILITY__HONOR_BOUND";
				return "STAT_ITEM_RACE_MISSIONS";
				if (iParam1 >= 1)
				{
					DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
				}
				return "ENUM_NOT_FOUND";
			}
			if (iParam0 <= joaat("UGC_VERSUS_PROTECT"))
			{
				switch (iParam0)
				{
					case joaat("HIT"):
						return "STAT_ITEM_HIT";
					case 57610788: /* GXTEntry: "Wilderness Vest" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_016_1";
					case 60087117:
						return "STAT_ITEM_MP_TUTORIAL_LA_SAMPLE";
					case joaat("MP_TUTORIAL_MULTIPLE_BOUNTY_TARGET_WAGON"):
						return "STAT_ITEM_MP_TUTORIAL_MULTIPLE_BOUNTY_TARGET_WAGON";
					case joaat("ML_HATCHET_HEWING"):
						return "STAT_ITEM_ML_HATCHET_HEWING";
					case 74981281:
						return "STAT_ITEM_RV_NAVY_CROSSOVER";
					case joaat("SHOP_BVH_GUNSMITH"):
						return "STAT_ITEM_SHOP_BVH_GUNSMITH";
					case joaat("AMMO_REVOLVER_EXPRESS_EXPLOSIVE"):
						return "STAT_ITEM_AMMO_REVOLVER_EXPRESS_EXPLOSIVE";
					case joaat("CLOTHING_HL_PLAYER_HAT_057_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_057_1";
					case joaat("MEDS"):
						return "STAT_ITEM_MEDS";
					case joaat("NET_PLAYLIST_ELIMINATION_LARGE"):
						return "STAT_ITEM_NET_PLAYLIST_ELIMINATION_LARGE";
					case 82377435: /* GXTEntry: "Hinterland Vest" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_022_1";
					case joaat("ASSAULT_ANIMAL"):
						return "STAT_ITEM_ASSAULT_ANIMAL";
					case joaat("ST_TAILOR"):
						return "STAT_ITEM_ST_TAILOR";
					case joaat("SHOP_WAL_POST_OFFICE"):
						return "STAT_ITEM_SHOP_WAL_POST_OFFICE";
					case joaat("NET_PLAYER_ABILITY__HORSE_SENSE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__HORSE_SENSE";
					case joaat("NET_PLAYER_ABILITY__NEVER_WITHOUT_ONE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__NEVER_WITHOUT_ONE";
					case joaat("W_METAL_DETECTOR"):
						return "STAT_ITEM_W_METAL_DETECTOR";
					case joaat("CLOTHING_HL_PLAYER_HAT_046_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_046_1";
					case joaat("CLOTHING_HL_PLAYER_BOOT_040_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_040_1";
					case joaat("AT_FBULLHEAD_LEGENDARY"):
						return "STAT_ITEM_AT_FBULLHEAD_LEGENDARY";
					case joaat("HERBS_EATEN"):
						return "STAT_ITEM_HERBS_EATEN";
					case 108227396:
						return "STAT_ITEM_ANIMAL_TRANSFORMATION_COUGAR";
					case joaat("FME_CHALLENGE_BOW"):
						return "STAT_ITEM_FME_CHALLENGE_BOW";
					case joaat("NET_PLAYLIST_ELIMINATION_SMALL"):
						return "STAT_ITEM_NET_PLAYLIST_ELIMINATION_SMALL";
					case joaat("NET_PLAYER_ABILITY__OF_SINGLE_PURPOSE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__OF_SINGLE_PURPOSE";
					case joaat("CLOTHING_HL_PLAYER_HAT_073_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_073_1";
					case joaat("NET_PLAYER_ABILITY__SWEET_CHARITY"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__SWEET_CHARITY";
					case 120471651:
						return "STAT_ITEM_FETCH_TRADER_SELL";
					case joaat("AMMO_ARROW_POISON"):
						return "STAT_ITEM_AMMO_ARROW_POISON";
					case joaat("NET_PLAYER_ABILITY__SCATTER_EM"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__SCATTER_EM";
					case joaat("LEVEL_1"):
						return "STAT_ITEM_LEVEL_1";
					case joaat("HEARTLANDS"):
						return "STAT_ITEM_HEARTLANDS";
					case joaat("UGC_VERSUS_SCRAMBLE"):
						return "STAT_ITEM_UGC_VERSUS_SCRAMBLE";
					case joaat("AT_HAWK_ROUGH"):
						return "STAT_ITEM_AT_HAWK_ROUGH";
					case joaat("GUN_FOR_HIRE_TRADER"):
						return "STAT_ITEM_GUN_FOR_HIRE_TRADER";
					case joaat("PV_HUNT_POSSE_LEADER"):
						return "STAT_ITEM_PV_HUNT_POSSE_LEADER";
					case joaat("ML_KNIFE_TRADER"):
						return "STAT_ITEM_ML_KNIFE_TRADER";
					case joaat("HERB_QUEENS_ORCHID"):
						return "STAT_ITEM_HERB_QUEENS_ORCHID";
					case joaat("ARMS"):
						return "STAT_ITEM_ARMS";
					case joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK"):
						return "STAT_ITEM_MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK";
					case joaat("SHOP_SDN_BARBER"):
						return "STAT_ITEM_SHOP_SDN_BARBER";
					case joaat("CONSUMABLE_EXOTIC_BIRD_WILD_MINT_COOKED"):
						return "STAT_ITEM_CONSUMABLE_EXOTIC_BIRD_WILD_MINT_COOKED";
					case joaat("AT_FBLUEGIL"):
						return "STAT_ITEM_AT_FBLUEGIL";
					case joaat("UGC_DM_EVERY_TOMAHAWK_COUNTS"):
						return "STAT_ITEM_UGC_DM_EVERY_TOMAHAWK_COUNTS";
					case joaat("CONSUMABLE_GAMEY_BIRD_COOKED"):
						return "STAT_ITEM_CONSUMABLE_GAMEY_BIRD_COOKED";
					case 168626812:
						return "STAT_ITEM_BOUNTY_BOARD_INFILTRATION";
					case joaat("HERB_YARROW"):
						return "STAT_ITEM_HERB_YARROW";
					case joaat("TH_DYNAMITE"):
						return "STAT_ITEM_TH_DYNAMITE";
					case joaat("ASSAULT_LAW"):
						return "STAT_ITEM_ASSAULT_LAW";
					case joaat("CLOTHING_HL_PLAYER_HAT_053_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_053_1";
					case joaat("REARUP"):
						return "STAT_ITEM_REARUP";
					case joaat("MPPLY_OFFENSIVE_SC_NAME"):
						return "STAT_ITEM_MPPLY_OFFENSIVE_SC_NAME";
					case joaat("ARROW"):
						return "STAT_ITEM_ARROW";
					case joaat("AT_PANTHER"):
						return "STAT_ITEM_AT_PANTHER";
					case joaat("SHOP_TBL_BUTCHER"):
						return "STAT_ITEM_SHOP_TBL_BUTCHER";
					case joaat("SHOP_EMR_POST_OFFICE"):
						return "STAT_ITEM_SHOP_EMR_POST_OFFICE";
					case joaat("SHOP_SDN_BANK"):
						return "STAT_ITEM_SHOP_SDN_BANK";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_1"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_1";
					case joaat("NET_PLAYLIST_NOMINATED_SERIES_SMALL"):
						return "STAT_ITEM_NET_PLAYLIST_NOMINATED_SERIES_SMALL";
					case 188952027:
						return "STAT_ITEM_AT_COYOTE_MPLEGENDARY_MILK";
					case joaat("SG_SEMIAUTO"):
						return "STAT_ITEM_SG_SEMIAUTO";
					case joaat("SHOP_CAMP_TRAVELLING_SALESMAN"):
						return "STAT_ITEM_SHOP_CAMP_TRAVELLING_SALESMAN";
					case joaat("MPPS_MOST_TIMES_BUCKED_OFF_WITH_NO_STAMINA"):
						return "STAT_ITEM_MPPS_MOST_TIMES_BUCKED_OFF_WITH_NO_STAMINA";
					case joaat("AMMO_RIFLE_SPLIT_POINT"):
						return "STAT_ITEM_AMMO_RIFLE_SPLIT_POINT";
					case joaat("ANIMAL_TEETH"):
						return "STAT_ITEM_ANIMAL_TEETH";
					case joaat("MPPLY_OFFENSIVE_POSSE_NAME"):
						return "STAT_ITEM_MPPLY_OFFENSIVE_POSSE_NAME";
					case joaat("GREAT_PLAINS"):
						return "STAT_ITEM_GREAT_PLAINS";
					case joaat("MP_TUTORIAL_HOLSTER_WEAPON_ON_VEHICLE"):
						return "STAT_ITEM_MP_TUTORIAL_HOLSTER_WEAPON_ON_VEHICLE";
					case joaat("LOWLANDS_AREAS"):
						return "STAT_ITEM_LOWLANDS_AREAS";
					case joaat("SHOP_EMR_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_EMR_GENERAL_STORE";
					case joaat("ODRISCOLLS"):
						return "STAT_ITEM_ODRISCOLLS";
					case joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP"):
						return "STAT_ITEM_MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP";
					case joaat("AMMO_RIFLE"):
						return "STAT_ITEM_AMMO_RIFLE";
					case joaat("MPPS_LEAST_LAPS_IN_FIRST_AND_WINNING"):
						return "STAT_ITEM_MPPS_LEAST_LAPS_IN_FIRST_AND_WINNING";
					case joaat("HERB_EVERGREEN_HUCKLEBERRY"):
						return "STAT_ITEM_HERB_EVERGREEN_HUCKLEBERRY";
					case joaat("AT_FOX_LEGENDARY"):
						return "STAT_ITEM_AT_FOX_LEGENDARY";
					case joaat("SHOP_VAN_TRAIN_STATION"):
						return "STAT_ITEM_SHOP_VAN_TRAIN_STATION";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_13"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_13";
					case joaat("AT_MOOSE_BULL"):
						return "STAT_ITEM_AT_MOOSE_BULL";
					case joaat("AMMO_REPEATER_HIGH_VELOCITY"):
						return "STAT_ITEM_AMMO_REPEATER_HIGH_VELOCITY";
					case joaat("SPINNER"):
						return "STAT_ITEM_SPINNER";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_016_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_016_1";
					case joaat("TRAMPLE"):
						return "STAT_ITEM_TRAMPLE";
					case joaat("AT_SNAKE_DIAMOND"):
						return "STAT_ITEM_AT_SNAKE_DIAMOND";
					case joaat("AMMO_PISTOL_SPLIT_POINT"):
						return "STAT_ITEM_AMMO_PISTOL_SPLIT_POINT";
					case joaat("AT_PIG"):
						return "STAT_ITEM_AT_PIG";
					case joaat("RESIST_ARREST"):
						return "STAT_ITEM_RESIST_ARREST";
					case joaat("MOUNTAIN_AREAS"):
						return "STAT_ITEM_MOUNTAIN_AREAS";
					case 243086140:
						return "STAT_ITEM_SHOP_BGV_TRAPPER_2";
					case joaat("TRAIN_ENGINE"):
						return "STAT_ITEM_TRAIN_ENGINE";
					case joaat("MOUNTED_PED"):
						return "STAT_ITEM_MOUNTED_PED";
					case joaat("VANDALISM"):
						return "STAT_ITEM_VANDALISM";
					case joaat("SHOP_SDN_TRAIN_STATION"):
						return "STAT_ITEM_SHOP_SDN_TRAIN_STATION";
					case 257784569:
						return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_PANTHER";
					case joaat("UGC_VERSUS_CROSS_THE_LINE"):
						return "STAT_ITEM_UGC_VERSUS_CROSS_THE_LINE";
					case joaat("MPPLY_OFFENSIVE_LEVEL_NAME"):
						return "STAT_ITEM_MPPLY_OFFENSIVE_LEVEL_NAME";
					case joaat("WHILE_DRUNK"):
						return "STAT_ITEM_WHILE_DRUNK";
					case joaat("AT_PANTHER_FLORIDA"):
						return "STAT_ITEM_AT_PANTHER_FLORIDA";
					case joaat("SHOP_SDN_EXOTIC"):
						return "STAT_ITEM_SHOP_SDN_EXOTIC";
					case joaat("AT_DOG_FOXHOUND"):
						return "STAT_ITEM_AT_DOG_FOXHOUND";
					case joaat("SHOP_BLK_POST_OFFICE"):
						return "STAT_ITEM_SHOP_BLK_POST_OFFICE";
					case joaat("UGC_VERSUS_TRAIN_ATTACK"):
						return "STAT_ITEM_UGC_VERSUS_TRAIN_ATTACK";
					case joaat("SHOP_CLM_HORSE_TRAINER"):
						return "STAT_ITEM_SHOP_CLM_HORSE_TRAINER";
					case joaat("UGC_VERSUS_CAPTURE_WAGON"):
						return "STAT_ITEM_UGC_VERSUS_CAPTURE_WAGON";
					case joaat("NET_BEAT_BEGGAR"):
						return "STAT_ITEM_NET_BEAT_BEGGAR";
					case joaat("SHOP_SHB_HORSE_TRAINER"):
						return "STAT_ITEM_SHOP_SHB_HORSE_TRAINER";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_013_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_013_1";
					case joaat("AT_CAT"):
						return "STAT_ITEM_AT_CAT";
					case joaat("AT_TURTLE_SNAP"):
						return "STAT_ITEM_AT_TURTLE_SNAP";
					case joaat("SHOP_RHO_POST_OFFICE"):
						return "STAT_ITEM_SHOP_RHO_POST_OFFICE";
					case joaat("AMMO_ARROW_FIRE"):
						return "STAT_ITEM_AMMO_ARROW_FIRE";
					case joaat("LAW"):
						return "STAT_ITEM_LAW";
					case joaat("MPPS_HIGHEST_DEATHSTREAK"):
						return "STAT_ITEM_MPPS_HIGHEST_DEATHSTREAK";
					case joaat("HORSE_MOD"):
						return "STAT_ITEM_HORSE_MOD";
					case joaat("GUAMABOAT"):
						return "STAT_ITEM_GUAMABOAT";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_023_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_023_1";
					case joaat("MOONSHINE"):
						return "STAT_ITEM_MOONSHINE";
					case joaat("DEADEYE"):
						return "STAT_ITEM_DEADEYE";
					case joaat("SHOP_RHO_BARTENDER"):
						return "STAT_ITEM_SHOP_RHO_BARTENDER";
					case 306251731:
						return "STAT_ITEM_AT_RAM_MPLEGENDARY_CHALK_HORN";
					case joaat("AMMO"):
						return "STAT_ITEM_AMMO";
					case joaat("SHOP_RHO_FENCE"):
						return "STAT_ITEM_SHOP_RHO_FENCE";
					case joaat("AT_OWL"):
						return "STAT_ITEM_AT_OWL";
					case joaat("AMMO_SHOTGUN_SLUG"):
						return "STAT_ITEM_AMMO_SHOTGUN_SLUG";
					case 317019665:
						return "STAT_ITEM_SHOP_BGV_HARRIET";
					case joaat("INBRED"):
						return "STAT_ITEM_INBRED";
					case joaat("GRIZZLIES"):
						return "STAT_ITEM_GRIZZLIES";
					case joaat("SHOP_SDN_FENCE"):
						return "STAT_ITEM_SHOP_SDN_FENCE";
					case joaat("PS_VOLCNC"):
						return "STAT_ITEM_PS_VOLCNC";
					case joaat("AT_WOLF_TIMBER"):
						return "STAT_ITEM_AT_WOLF_TIMBER";
					case 334233677:
						return "STAT_ITEM_AT_FOX_MPLEGENDARY_MARBLE";
					case joaat("GOLD_NUGGETS_AQUIRED"):
						return "STAT_ITEM_GOLD_NUGGETS_AQUIRED";
					case joaat("HERBS_PICKED_MUSHROOMS"):
						return "STAT_ITEM_HERBS_PICKED_MUSHROOMS";
					case 340025142:
						return "STAT_ITEM_WEIGHT_GAIN_TONIC";
					case joaat("NET_PLAYER_ABILITY__CANONEER"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__CANONEER";
					case joaat("FETCH_TRADER_SELL_MISSIONS"):
						return "STAT_ITEM_FETCH_TRADER_SELL_MISSIONS";
					case joaat("DEATHMATCH_IMPROMPTU"):
						return "STAT_ITEM_DEATHMATCH_IMPROMPTU";
					case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB"):
						return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB";
					case joaat("HORSE_BOND_INCREASED"):
						return "STAT_ITEM_HORSE_BOND_INCREASED";
					case joaat("KNIVES"):
						return "STAT_ITEM_KNIVES";
					case joaat("HORSE_OWNED"):
						return "STAT_ITEM_HORSE_OWNED";
					case joaat("AT_GOAT"):
						return "STAT_ITEM_AT_GOAT";
					case 366796774:
						return "STAT_ITEM_ANIMAL_TRANSFORMATION_WOLF";
					case joaat("ANIMAL_RESPONDING_TO_CALL"):
						return "STAT_ITEM_ANIMAL_RESPONDING_TO_CALL";
					case 374439621:
						return "STAT_ITEM_ST_HARRIET";
					case joaat("REVIVER"):
						return "STAT_ITEM_REVIVER";
					case 376896420:
						return "STAT_ITEM_AT_BEAVER_MPLEGENDARY_ZIZI";
					case joaat("ML_LANTERN"):
						return "STAT_ITEM_ML_LANTERN";
					case joaat("MISSION_COOP_GVO_INTRO_2"):
						return "STAT_ITEM_MISSION_COOP_GVO_INTRO_2";
					case 390664204:
						return "STAT_ITEM_AT_COYOTE_MPLEGENDARY_MIDNIGHT_PAW";
					case joaat("ARMADILLO_SHERIFF_BOUNTY_BOARD"):
						return "STAT_ITEM_ARMADILLO_SHERIFF_BOUNTY_BOARD";
					case joaat("MISSION_COOP_GVO_REVENGE_2"):
						return "STAT_ITEM_MISSION_COOP_GVO_REVENGE_2";
					case joaat("AT_SONGBIRD"):
						return "STAT_ITEM_AT_SONGBIRD";
					case 396583480:
						return "STAT_ITEM_LEADING_HORSE";
					case joaat("NET_PLAYER_ABILITY__A_MOMENT_TO_RECUPERATE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__A_MOMENT_TO_RECUPERATE";
					case joaat("SHOP_RHO_BUTCHER"):
						return "STAT_ITEM_SHOP_RHO_BUTCHER";
					case joaat("SHOP_VAL_HORSE_SHOP"):
						return "STAT_ITEM_SHOP_VAL_HORSE_SHOP";
					case joaat("TRAVELLED"):
						return "STAT_ITEM_TRAVELLED";
					case joaat("MPPS_NOTITLE_NOSHOW"):
						return "STAT_ITEM_MPPS_NOTITLE_NOSHOW";
					case joaat("CLOTHING_HL_PLAYER_SPATS_010_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_SPATS_010_1";
					case joaat("WEAPONSLOT_SIDEARM"):
						return "STAT_ITEM_WEAPONSLOT_SIDEARM";
					case joaat("MP_TUTORIAL_FME_SCORE_RULES"):
						return "STAT_ITEM_MP_TUTORIAL_FME_SCORE_RULES";
					case joaat("GUN_FOR_HIRE_TRADER_RIVAL"):
						return "STAT_ITEM_GUN_FOR_HIRE_TRADER_RIVAL";
					case joaat("GROUP_PISTOL"):
						return "STAT_ITEM_GROUP_PISTOL";
					case joaat("CLOTHING_HL_PLAYER_CHAPS_005_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_005_1";
					case 418949210:
						return "STAT_ITEM_AT_COUGAR_MPLEGENDARY_MAZA";
					case joaat("AMMO_HATCHET"):
						return "STAT_ITEM_AMMO_HATCHET";
					case joaat("HERB_RAMS_HEAD"):
						return "STAT_ITEM_HERB_RAMS_HEAD";
					case 429428887:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_7";
					case joaat("HERB_CREEPING_THYME"):
						return "STAT_ITEM_HERB_CREEPING_THYME";
					case joaat("SHOP_BEN_POST_OFFICE"):
						return "STAT_ITEM_SHOP_BEN_POST_OFFICE";
					case joaat("CLOTHING_HL_PLAYER_BOOT_048_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_048_1";
					case joaat("SHOP_BLK_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_BLK_GENERAL_STORE";
					case joaat("AMMO_HATCHET_HUNTER"):
						return "STAT_ITEM_AMMO_HATCHET_HUNTER";
					case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER"):
						return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER";
					case joaat("UGC_VERSUS_ALAMOD"):
						return "STAT_ITEM_UGC_VERSUS_ALAMOD";
					case joaat("THROAT"):
						return "STAT_ITEM_THROAT";
					case joaat("POKER_3_OF_A_KIND"):
						return "STAT_ITEM_POKER_3_OF_A_KIND";
					case joaat("HUMANS"):
						return "STAT_ITEM_HUMANS";
					case joaat("SHOP_AMD_TRAIN_STATION"):
						return "STAT_ITEM_SHOP_AMD_TRAIN_STATION";
					case joaat("UGC_VERSUS_AFGHAN_POLO_PLAYER"):
						return "STAT_ITEM_UGC_VERSUS_AFGHAN_POLO_PLAYER";
					case joaat("NET_PLAYER_ABILITY__SLIPPERY_BASTARD"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__SLIPPERY_BASTARD";
					case joaat("BLACKWATER_SHERIFF_BOUNTY_BOARD"):
						return "STAT_ITEM_BLACKWATER_SHERIFF_BOUNTY_BOARD";
					case joaat("STRAFING"):
						return "STAT_ITEM_STRAFING";
					case joaat("NET_PLAYER_ABILITY__THICK_SKIN"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__THICK_SKIN";
					case 475061862: /* GXTEntry: "Legendary Cougar & Wolf Vest" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_026_1";
					case joaat("CLOTHING_HL_PLAYER_SPATS_012_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_SPATS_012_1";
					case joaat("MOONSHINE_STRENGTH_AVERAGE"):
						return "STAT_ITEM_MOONSHINE_STRENGTH_AVERAGE";
					case joaat("AMMO_DYNAMITE"):
						return "STAT_ITEM_AMMO_DYNAMITE";
					case 481065880: /* GXTEntry: "Legendary Buck Vest" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_018_1";
					case joaat("ML_HATCHET_DOUBLE_BIT"):
						return "STAT_ITEM_ML_HATCHET_DOUBLE_BIT";
					case joaat("NET_PLAYLIST_NOMINATED_SERIES"):
						return "STAT_ITEM_NET_PLAYLIST_NOMINATED_SERIES";
					case joaat("FETCH_GFH_STEAL_BOAT"):
						return "STAT_ITEM_FETCH_GFH_STEAL_BOAT";
					case joaat("CONSUMABLE_CRUSTACEAN_MEAT_THYME_COOKED"):
						return "STAT_ITEM_CONSUMABLE_CRUSTACEAN_MEAT_THYME_COOKED";
					case joaat("FEATHER"):
						return "STAT_ITEM_FEATHER";
					case joaat("AT_SNAKE_BOA_RAINBOW"):
						return "STAT_ITEM_AT_SNAKE_BOA_RAINBOW";
					case joaat("MPPLY_OFFENSIVE_CREW_NAME"):
						return "STAT_ITEM_MPPLY_OFFENSIVE_CREW_NAME";
					case joaat("FETCH_MOONSHINE_SELL"):
						return "STAT_ITEM_FETCH_MOONSHINE_SELL";
					case joaat("HORSE_PILLS"):
						return "STAT_ITEM_HORSE_PILLS";
					case joaat("FACIAL_APPEARANCE"):
						return "STAT_ITEM_FACIAL_APPEARANCE";
					case joaat("CLOTHING_HL_PLAYER_HAT_072_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_072_1";
					case joaat("AT_PELICAN_BROWN"):
						return "STAT_ITEM_AT_PELICAN_BROWN";
					case joaat("FETCH_BOUNTY_HIDEOUT_TARGET"):
						return "STAT_ITEM_FETCH_BOUNTY_HIDEOUT_TARGET";
					case joaat("ANNESBURG_SHERIFF_BOUNTY_BOARD"):
						return "STAT_ITEM_ANNESBURG_SHERIFF_BOUNTY_BOARD";
					case joaat("PROVISION_TRINKET_PANTHER_EYE"):
						return "STAT_ITEM_PROVISION_TRINKET_PANTHER_EYE";
					case joaat("AT_DONKEY"):
						return "STAT_ITEM_AT_DONKEY";
					case joaat("CONSUMABLE_HERPTILE_MEAT_COOKED"):
						return "STAT_ITEM_CONSUMABLE_HERPTILE_MEAT_COOKED";
					case joaat("AT_HAWK"):
						return "STAT_ITEM_AT_HAWK";
					case joaat("TRAIN_ROBBERY"):
						return "STAT_ITEM_TRAIN_ROBBERY";
					case joaat("SHOP_DER_TRAVELLING_SALESMAN"):
						return "STAT_ITEM_SHOP_DER_TRAVELLING_SALESMAN";
					case joaat("AMMO_ARROW_CONFUSION"):
						return "STAT_ITEM_AMMO_ARROW_CONFUSION";
					case joaat("CONSUMABLE_EXOTIC_BIRD_COOKED"):
						return "STAT_ITEM_CONSUMABLE_EXOTIC_BIRD_COOKED";
					case joaat("REQUIRED_MISSIONS"):
						return "STAT_ITEM_REQUIRED_MISSIONS";
					case joaat("UGC_VERSUS_DELIVERY"):
						return "STAT_ITEM_UGC_VERSUS_DELIVERY";
					case 538030898:
						return "STAT_ITEM_SPIN_SLOT_B";
					case joaat("SPECIAL_MODES_2"):
						return "STAT_ITEM_SPECIAL_MODES_2";
					case joaat("MP_FETCH_LAST_STARTED_BUSINESS_RAID_GLOBAL_COOLDOWN"):
						return "STAT_ITEM_MP_FETCH_LAST_STARTED_BUSINESS_RAID_GLOBAL_COOLDOWN";
					case joaat("FETCH_DYNAMIC_RESCUE_PED_MULTIPLE"):
						return "STAT_ITEM_FETCH_DYNAMIC_RESCUE_PED_MULTIPLE";
					case joaat("FETCH_BOUNTY_STAKEOUT_TARGET"):
						return "STAT_ITEM_FETCH_BOUNTY_STAKEOUT_TARGET";
					case joaat("STORY_MISSIONS"):
						return "STAT_ITEM_STORY_MISSIONS";
					case joaat("SHOP_WAL_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_WAL_GENERAL_STORE";
					case 548657065:
						return "STAT_ITEM_SHOP_BGV_TRAPPER_1";
					case joaat("DOMINOES_HAND"):
						return "STAT_ITEM_DOMINOES_HAND";
					case joaat("RC_STRANDS"):
						return "STAT_ITEM_RC_STRANDS";
					case joaat("MPPS_LEAST_DISTANCE_TRAVELLED"):
						return "STAT_ITEM_MPPS_LEAST_DISTANCE_TRAVELLED";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_12"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_12";
					case joaat("HERB_BLACK_CURRANT"):
						return "STAT_ITEM_HERB_BLACK_CURRANT";
					case joaat("AT_ORIOLE"):
						return "STAT_ITEM_AT_ORIOLE";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_017_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_017_1";
					case joaat("CLOTHING_HL_PLAYER_HAT_065_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_065_1";
					case joaat("HOME"):
						return "STAT_ITEM_HOME";
					case joaat("GFH_ANTHONY_FOREMAN"):
						return "STAT_ITEM_GFH_ANTHONY_FOREMAN";
					case joaat("UGC_MOONSHINE_COOP_STORY"):
						return "STAT_ITEM_UGC_MOONSHINE_COOP_STORY";
					case 585177513:
						return "STAT_ITEM_AMMO_BOLAS_HAWKMOTH";
					case joaat("AMMO_SHOTGUN_SLUG_EXPLOSIVE"):
						return "STAT_ITEM_AMMO_SHOTGUN_SLUG_EXPLOSIVE";
					case joaat("PLAYERS"):
						return "STAT_ITEM_PLAYERS";
					case joaat("SG_REPEATING"):
						return "STAT_ITEM_SG_REPEATING";
					case joaat("SPECIAL_TONIC"):
						return "STAT_ITEM_SPECIAL_TONIC";
					case joaat("AT_WOODPECKER_RED"):
						return "STAT_ITEM_AT_WOODPECKER_RED";
					case joaat("PV_INFIGHTING"):
						return "STAT_ITEM_PV_INFIGHTING";
					case joaat("AT_BADGER"):
						return "STAT_ITEM_AT_BADGER";
					case joaat("SHOP_STR_HORSE_SHOP"):
						return "STAT_ITEM_SHOP_STR_HORSE_SHOP";
					case joaat("NEWSPAPER_ISSUE"):
						return "STAT_ITEM_NEWSPAPER_ISSUE";
					case joaat("NET_PLAYER_ABILITY__AGAINST_THE_ODDS"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__AGAINST_THE_ODDS";
					case joaat("NET_PLAYER_ABILITY__PAINT_IT_BLACK"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__PAINT_IT_BLACK";
					case joaat("HORSE_STYLE"):
						return "STAT_ITEM_HORSE_STYLE";
					case joaat("AT_CROW"):
						return "STAT_ITEM_AT_CROW";
					case joaat("NET_PLAYER_ABILITY__TAKE_THE_PAIN_AWAY"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__TAKE_THE_PAIN_AWAY";
					case joaat("CLOTHING_HL_PLAYER_CHAPS_006_2"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_006_2";
					case joaat("AT_FMUSKIE_LEGENDARY"):
						return "STAT_ITEM_AT_FMUSKIE_LEGENDARY";
					case joaat("UGC_DM_FLAT_TRACK_BULLY"):
						return "STAT_ITEM_UGC_DM_FLAT_TRACK_BULLY";
					case joaat("MISSION_COOP_GVO_INTRO_1"):
						return "STAT_ITEM_MISSION_COOP_GVO_INTRO_1";
					case joaat("SHOP_ASB_POST_OFFICE"):
						return "STAT_ITEM_SHOP_ASB_POST_OFFICE";
					case joaat("FME_KING_OF_THE_RAILS"):
						return "STAT_ITEM_FME_KING_OF_THE_RAILS";
					case joaat("AT_PARROT_GREEN"):
						return "STAT_ITEM_AT_PARROT_GREEN";
					case joaat("SHOP_CHO_TRAVELLING_SALESMAN"):
						return "STAT_ITEM_SHOP_CHO_TRAVELLING_SALESMAN";
					case joaat("CLOTHING_ALTERATION"):
						return "STAT_ITEM_CLOTHING_ALTERATION";
					case joaat("AT_BEAVER_LEGENDARY"):
						return "STAT_ITEM_AT_BEAVER_LEGENDARY";
					case joaat("AT_BOAR"):
						return "STAT_ITEM_AT_BOAR";
					case joaat("SHOP_SDN_NEWSPAPER_BOY"):
						return "STAT_ITEM_SHOP_SDN_NEWSPAPER_BOY";
					case joaat("HORSE_CARE"):
						return "STAT_ITEM_HORSE_CARE";
					case joaat("SHOP_VAN_COACH"):
						return "STAT_ITEM_SHOP_VAN_COACH";
					case joaat("SHOP_VAL_DOCTOR"):
						return "STAT_ITEM_SHOP_VAL_DOCTOR";
					case joaat("CLOTHING_HL_PLAYER_SPATS_011_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_SPATS_011_1";
					case joaat("TH_KNIVES"):
						return "STAT_ITEM_TH_KNIVES";
					case joaat("CLOTHING_STYLE"):
						return "STAT_ITEM_CLOTHING_STYLE";
					case joaat("HERB_COMMON_BULRUSH"):
						return "STAT_ITEM_HERB_COMMON_BULRUSH";
					case joaat("HERB_WILD_FLWR_AGARITA"):
						return "STAT_ITEM_HERB_WILD_FLWR_AGARITA";
					case joaat("FETCH_GFH_PRISONER_ASSASSINATION"):
						return "STAT_ITEM_FETCH_GFH_PRISONER_ASSASSINATION";
					case joaat("MISSION_COOP_GVO_OUTLAW_3"):
						return "STAT_ITEM_MISSION_COOP_GVO_OUTLAW_3";
					case joaat("FME_WILDLIFE_PHOTOGRAPHER"):
						return "STAT_ITEM_FME_WILDLIFE_PHOTOGRAPHER";
					case joaat("ROANOAKE_RIDGE"):
						return "STAT_ITEM_ROANOAKE_RIDGE";
					case joaat("TUMBLEWEED_SHERIFF_BOUNTY_BOARD"):
						return "STAT_ITEM_TUMBLEWEED_SHERIFF_BOUNTY_BOARD";
					case joaat("CLOTHING_HL_PLAYER_CHAPS_001_5"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_001_5";
					case 667693314:
						return "STAT_ITEM_AT_PANTHER_MPLEGENDARY_IWAKTA";
					case joaat("MP_TUTORIAL_GVO_OUTLAW_2_GFH_GIVER_UNLOCKED"):
						return "STAT_ITEM_MP_TUTORIAL_GVO_OUTLAW_2_GFH_GIVER_UNLOCKED";
					case 670412216:
						return "STAT_ITEM_SELFIE";
					case joaat("MPPS_VARIED_WEAPON_KILLS"):
						return "STAT_ITEM_MPPS_VARIED_WEAPON_KILLS";
					case 682123523: /* GXTEntry: "Pilgrim Accessory" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_003_1";
					case joaat("SHOP_SDN_MARKET"):
						return "STAT_ITEM_SHOP_SDN_MARKET";
					case joaat("ANIMAL_EXPLOSION"):
						return "STAT_ITEM_ANIMAL_EXPLOSION";
					case joaat("SCARLETT_MEADOWS"):
						return "STAT_ITEM_SCARLETT_MEADOWS";
					case joaat("HUNGER"):
						return "STAT_ITEM_HUNGER";
					case joaat("NET_BEAT_SLUMPED_HUNTER"):
						return "STAT_ITEM_NET_BEAT_SLUMPED_HUNTER";
					case joaat("SHOWDOWN"):
						return "STAT_ITEM_SHOWDOWN";
					case joaat("TARGET_2"):
						return "STAT_ITEM_TARGET_2";
					case joaat("AT_ELK_BULL"):
						return "STAT_ITEM_AT_ELK_BULL";
					case joaat("MURDER"):
						return "STAT_ITEM_MURDER";
					case joaat("MPPS_WINNING_POINT"):
						return "STAT_ITEM_MPPS_WINNING_POINT";
					case 708084994: /* GXTEntry: "Snake Skin Banjo Head" */
						return "STAT_ITEM_UPGRADE_PCC_BANJOSNAKESKIN_01";
					case joaat("ML_KNIFE_JAWBONE"):
						return "STAT_ITEM_ML_KNIFE_JAWBONE";
					case joaat("SHOP_VAL_BARBER"):
						return "STAT_ITEM_SHOP_VAL_BARBER";
					case joaat("DUAL_WIELD"):
						return "STAT_ITEM_DUAL_WIELD";
					case joaat("CAMP_STYLE"):
						return "STAT_ITEM_CAMP_STYLE";
					case joaat("FETCH_GFH_WAGON_THIEVES"):
						return "STAT_ITEM_FETCH_GFH_WAGON_THIEVES";
					case joaat("AT_TOAD"):
						return "STAT_ITEM_AT_TOAD";
					case joaat("NET_BEAT_TREASURE_HUNTER"):
						return "STAT_ITEM_NET_BEAT_TREASURE_HUNTER";
					case joaat("CLOTHING_HL_PLAYER_COAT_031_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_031_1";
					case joaat("RV_DB_ACTN_GAMBLER"):
						return "STAT_ITEM_RV_DB_ACTN_GAMBLER";
					case joaat("CONSUMABLE_POTENT_TONIC"):
						return "STAT_ITEM_CONSUMABLE_POTENT_TONIC";
					case joaat("AT_GOOSE"):
						return "STAT_ITEM_AT_GOOSE";
					case joaat("SHOP_VAL_POST_OFFICE"):
						return "STAT_ITEM_SHOP_VAL_POST_OFFICE";
					case joaat("AT_MULE"):
						return "STAT_ITEM_AT_MULE";
					case joaat("AT_SEAGULL_RING"):
						return "STAT_ITEM_AT_SEAGULL_RING";
					case joaat("CHOLLA_SPRINGS"):
						return "STAT_ITEM_CHOLLA_SPRINGS";
					case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
						return "STAT_ITEM_HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000";
					case joaat("CART"):
						return "STAT_ITEM_CART";
					case joaat("FETCH_TRADER_SELL_MULTIDROP_DISTRIBUTE"):
						return "STAT_ITEM_FETCH_TRADER_SELL_MULTIDROP_DISTRIBUTE";
					case 742634373:
						return "STAT_ITEM_AT_BOAR_MPLEGENDARY_ICAHI";
					case 744489664:
						return "STAT_ITEM_FETCH_NATURALIST_POACHER_HIDEOUT";
					case joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"):
						return "STAT_ITEM_CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED";
					case joaat("BLACKJACK_DOUBLED_DOWN"):
						return "STAT_ITEM_BLACKJACK_DOUBLED_DOWN";
					case joaat("LEGENDARY_LURE"):
						return "STAT_ITEM_LEGENDARY_LURE";
					case joaat("HERB_GHOST_ORCHID"):
						return "STAT_ITEM_HERB_GHOST_ORCHID";
					case joaat("MISSION_COOP_GVO_REVENGE_1"):
						return "STAT_ITEM_MISSION_COOP_GVO_REVENGE_1";
					case 757593688:
						return "STAT_ITEM_AT_FOX_MPLEGENDARY_CROSS";
					case joaat("STEAMBOAT"):
						return "STAT_ITEM_STEAMBOAT";
					case joaat("AT_FSALMONSOCKEYE"):
						return "STAT_ITEM_AT_FSALMONSOCKEYE";
					case joaat("FETCH_TRADER_RESUPPLY_SUPPLY_TRAIN_STATIONARY"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_SUPPLY_TRAIN_STATIONARY";
					case joaat("MP_TUTORIAL_FOLLOW_PED_FOLLOWING_PLAYER"):
						return "STAT_ITEM_MP_TUTORIAL_FOLLOW_PED_FOLLOWING_PLAYER";
					case 765991018: /* GXTEntry: "Wolf Skull" */
						return "STAT_ITEM_UPGRADE_PCC_WOLFSKULL_01";
					case joaat("AT_HERON"):
						return "STAT_ITEM_AT_HERON";
					case joaat("MPPS_MOST_MULTI_KILLS"):
						return "STAT_ITEM_MPPS_MOST_MULTI_KILLS";
					case joaat("SHOP_RHO_GUNSMITH"):
						return "STAT_ITEM_SHOP_RHO_GUNSMITH";
					case joaat("DEADEYE_DISARM"):
						return "STAT_ITEM_DEADEYE_DISARM";
					case joaat("NET_PLAYER_ABILITY__EYE_FOR_AN_EYE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__EYE_FOR_AN_EYE";
					case joaat("FETCH_TRADER_RESUPPLY_INTRO"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_INTRO";
					case joaat("ANIMAL_KNIFE"):
						return "STAT_ITEM_ANIMAL_KNIFE";
					case joaat("FETCH_TRADER_RESUPPLY_DEFEND_AGAINST_WOLVES"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_DEFEND_AGAINST_WOLVES";
					case joaat("RIO_BRAVO"):
						return "STAT_ITEM_RIO_BRAVO";
					case joaat("PROVISION_TRINKET_COYOTE_FANG"):
						return "STAT_ITEM_PROVISION_TRINKET_COYOTE_FANG";
					case joaat("JUMP"):
						return "STAT_ITEM_JUMP";
					case joaat("POISON"):
						return "STAT_ITEM_POISON";
					case joaat("AT_BAT"):
						return "STAT_ITEM_AT_BAT";
					case joaat("AT_FROCKBASS_LEGENDARY"):
						return "STAT_ITEM_AT_FROCKBASS_LEGENDARY";
					case 784425405:
						return "STAT_ITEM_FME_ROLE_PROTECT_LEGENDARY_ANIMAL";
					case joaat("AT_DOG_POODLE"):
						return "STAT_ITEM_AT_DOG_POODLE";
					case joaat("HERB_RED_RASPBERRY"):
						return "STAT_ITEM_HERB_RED_RASPBERRY";
					case joaat("RV_DB_ACTN_EXOTIC"):
						return "STAT_ITEM_RV_DB_ACTN_EXOTIC";
					case joaat("CLOTHING_HL_PLAYER_COAT_034_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_034_1";
					case 790620932: /* GXTEntry: "Elk Fringed Shotgun Chaps" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_002_11";
					case joaat("RP_CARBINE"):
						return "STAT_ITEM_RP_CARBINE";
					case joaat("GFH_COACH_HOLDUP_KIDNAP"):
						return "STAT_ITEM_GFH_COACH_HOLDUP_KIDNAP";
					case joaat("FETCH_GFH_STEAL_HORSES"):
						return "STAT_ITEM_FETCH_GFH_STEAL_HORSES";
					case joaat("SHOP_VAL_COACH"):
						return "STAT_ITEM_SHOP_VAL_COACH";
					case joaat("NET_PLAYLIST_NOMINATED_SERIES_LARGE"):
						return "STAT_ITEM_NET_PLAYLIST_NOMINATED_SERIES_LARGE";
					case 812236345:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_8";
					case joaat("BANK_ROBBERY"):
						return "STAT_ITEM_BANK_ROBBERY";
					case joaat("CHESTS_SEARCHED"):
						return "STAT_ITEM_CHESTS_SEARCHED";
					case joaat("UGC_VERSUS_SIEGE"):
						return "STAT_ITEM_UGC_VERSUS_SIEGE";
					case joaat("BODY_HEAT"):
						return "STAT_ITEM_BODY_HEAT";
					case joaat("UGC_VERSUS_PLUNDER"):
						return "STAT_ITEM_UGC_VERSUS_PLUNDER";
					case 833070940: /* GXTEntry: "Pursuer Accessory" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_008_1";
					case joaat("AMMO_PISTOL_EXPRESS"):
						return "STAT_ITEM_AMMO_PISTOL_EXPRESS";
					case joaat("NET_PLAYLIST_PRIVATE_SERIES"):
						return "STAT_ITEM_NET_PLAYLIST_PRIVATE_SERIES";
					case joaat("AMMO_DYNAMITE_VOLATILE"):
						return "STAT_ITEM_AMMO_DYNAMITE_VOLATILE";
					case joaat("POKER_STOLE_POT"):
						return "STAT_ITEM_POKER_STOLE_POT";
					case joaat("AT_IGUANA"):
						return "STAT_ITEM_AT_IGUANA";
					case joaat("AT_VULTURE"):
						return "STAT_ITEM_AT_VULTURE";
					case joaat("VEHICLE_DEST"):
						return "STAT_ITEM_VEHICLE_DEST";
					case 858182906: /* GXTEntry: "Campfire Seat Cover" */
						return "STAT_ITEM_UPGRADE_PCC_FURCOVERSCRATE_01";
					case joaat("GROUP_SHOTGUN"):
						return "STAT_ITEM_GROUP_SHOTGUN";
					case joaat("TARGET_4"):
						return "STAT_ITEM_TARGET_4";
					case joaat("ADVERSARY_SERIES"):
						return "STAT_ITEM_ADVERSARY_SERIES";
					case joaat("SG_DBBARREL_EXOTIC"):
						return "STAT_ITEM_SG_DBBARREL_EXOTIC";
					case joaat("GFH_JOSIAH_TRELAWNY"):
						return "STAT_ITEM_GFH_JOSIAH_TRELAWNY";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_11"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_11";
					case 874124435:
						return "STAT_ITEM_AT_GATOR_MPLEGENDARY_TECA";
					case joaat("ON_SLOPE"):
						return "STAT_ITEM_ON_SLOPE";
					case joaat("SHOP_SDN_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_SDN_GENERAL_STORE";
					case joaat("GFH_BLACK_BELLE"):
						return "STAT_ITEM_GFH_BLACK_BELLE";
					case joaat("ARROW_DYNA"):
						return "STAT_ITEM_ARROW_DYNA";
					case joaat("CONSUMABLE_FLAKEY_FISH_COOKED"):
						return "STAT_ITEM_CONSUMABLE_FLAKEY_FISH_COOKED";
					case joaat("AT_REDFOOTEDBOOBY"):
						return "STAT_ITEM_AT_REDFOOTEDBOOBY";
					case joaat("PED"):
						return "STAT_ITEM_PED";
					case joaat("AT_PIGEON_BAND"):
						return "STAT_ITEM_AT_PIGEON_BAND";
					case 887021912:
						return "STAT_ITEM_ANIMAL_SAMPLE";
					case joaat("ST_BUTCHER"):
						return "STAT_ITEM_ST_BUTCHER";
					case joaat("AT_SNAKE_BOA_SUN"):
						return "STAT_ITEM_AT_SNAKE_BOA_SUN";
					case joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP"):
						return "STAT_ITEM_MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP";
					case joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"):
						return "STAT_ITEM_CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED";
					case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
						return "STAT_ITEM_HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000";
					case joaat("WHISKEY"):
						return "STAT_ITEM_WHISKEY";
					case joaat("PROVISION_MOONSHINE_POISON"):
						return "STAT_ITEM_PROVISION_MOONSHINE_POISON";
					case joaat("MPPLY_CHEATING"):
						return "STAT_ITEM_MPPLY_CHEATING";
					case joaat("CLOTHING_HL_PLAYER_CHAPS_006_3"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_006_3";
					case joaat("HERBS_LONG_LOOTED"):
						return "STAT_ITEM_HERBS_LONG_LOOTED";
					case joaat("COVER"):
						return "STAT_ITEM_COVER";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_HIGH"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_HIGH";
					case joaat("SHOP_BLK_HORSE_SHOP"):
						return "STAT_ITEM_SHOP_BLK_HORSE_SHOP";
					case joaat("METER_GRIT"):
						return "STAT_ITEM_METER_GRIT";
					case joaat("NET_PLAYER_ABILITY__COLD_BLOODED"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__COLD_BLOODED";
					case joaat("AT_RACCOON"):
						return "STAT_ITEM_AT_RACCOON";
					case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_SATCHEL_004_1";
					case joaat("HERB_WINTERGREEN_BERRY"):
						return "STAT_ITEM_HERB_WINTERGREEN_BERRY";
					case joaat("HERB_NIGHT_SCENTED_ORCHID"):
						return "STAT_ITEM_HERB_NIGHT_SCENTED_ORCHID";
					case joaat("WALKING"):
						return "STAT_ITEM_WALKING";
					case joaat("MP_DIALOGUE_MOONSHINE_MAGGIE_STORY_MISSIONS"):
						return "STAT_ITEM_MP_DIALOGUE_MOONSHINE_MAGGIE_STORY_MISSIONS";
					case joaat("SHOP_STR_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_STR_GENERAL_STORE";
					case joaat("WEAPONSLOT_UNARMED"):
						return "STAT_ITEM_WEAPONSLOT_UNARMED";
					case joaat("AT_DOG_AUSTRALIAN"):
						return "STAT_ITEM_AT_DOG_AUSTRALIAN";
					case joaat("FETCH_TRADER_RESUPPLY_MOVING_TARGET"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_MOVING_TARGET";
					case joaat("NET_PLAYLIST_CAPTURE"):
						return "STAT_ITEM_NET_PLAYLIST_CAPTURE";
					case joaat("HEADS"):
						return "STAT_ITEM_HEADS";
					case joaat("FETCH_MOONSHINER_SELL_MISSIONS"):
						return "STAT_ITEM_FETCH_MOONSHINER_SELL_MISSIONS";
					case joaat("RP_WINCHESTER"):
						return "STAT_ITEM_RP_WINCHESTER";
					case joaat("TARGET_1"):
						return "STAT_ITEM_TARGET_1";
					case joaat("ANIMAL_PREDATOR_BAITED"):
						return "STAT_ITEM_ANIMAL_PREDATOR_BAITED";
					case joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID"):
						return "STAT_ITEM_MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID";
					case joaat("AT_BOAR_LEGENDARY"):
						return "STAT_ITEM_AT_BOAR_LEGENDARY";
					case joaat("FETCH_MOONSHINE_SETUP_GET_SUPPLIES"):
						return "STAT_ITEM_FETCH_MOONSHINE_SETUP_GET_SUPPLIES";
					case joaat("THROWING"):
						return "STAT_ITEM_THROWING";
					case joaat("AMMO_ARROW"):
						return "STAT_ITEM_AMMO_ARROW";
					case joaat("SWIMMING_DROWNING"):
						return "STAT_ITEM_SWIMMING_DROWNING";
					case joaat("UGC_RACE_BOAT"):
						return "STAT_ITEM_UGC_RACE_BOAT";
					case joaat("SHOP_SDN_BUTCHER"):
						return "STAT_ITEM_SHOP_SDN_BUTCHER";
					case joaat("NET_PLAYER_ABILITY__CLEANSING_FIRE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__CLEANSING_FIRE";
					case joaat("AMMO_POISONBOTTLE"):
						return "STAT_ITEM_AMMO_POISONBOTTLE";
					case joaat("MPPS_MOST_TIME_IN_FIRST_PLACE"):
						return "STAT_ITEM_MPPS_MOST_TIME_IN_FIRST_PLACE";
					case joaat("MISSION_COOP_GVO_INTRO_3"):
						return "STAT_ITEM_MISSION_COOP_GVO_INTRO_3";
					case joaat("GROUP_RIFLE"):
						return "STAT_ITEM_GROUP_RIFLE";
					case joaat("ANIMAL"):
						return "STAT_ITEM_ANIMAL";
					case 974113662:
						return "STAT_ITEM_AT_WOLF_MPLEGENDARY_EMERALD";
					case joaat("HERB_RED_SAGE"):
						return "STAT_ITEM_HERB_RED_SAGE";
					case joaat("ANIMAL_CLAW"):
						return "STAT_ITEM_ANIMAL_CLAW";
					case joaat("SHOP_RHO_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_RHO_GENERAL_STORE";
					case joaat("NET_PLAYER_ABILITY__HUNKER_DOWN"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__HUNKER_DOWN";
					case joaat("MELEE"):
						return "STAT_ITEM_MELEE";
					case joaat("MPPS_MOST_FALLS_FROM_HORSE"):
						return "STAT_ITEM_MPPS_MOST_FALLS_FROM_HORSE";
					case joaat("UGC_VERSUS_SLASHER"):
						return "STAT_ITEM_UGC_VERSUS_SLASHER";
					case 1001560750:
						return "STAT_ITEM_HARDY_TONIC_AT_TEMP";
					case joaat("RV_DB_ACTN_MICAH"):
						return "STAT_ITEM_RV_DB_ACTN_MICAH";
					case joaat("BANDITOS"):
						return "STAT_ITEM_BANDITOS";
					case 1008537949:
						return "STAT_ITEM_SHOP_TAL_TRAPPER";
					case joaat("HERB_GOLDEN_CURRANT"):
						return "STAT_ITEM_HERB_GOLDEN_CURRANT";
					case joaat("LURE"):
						return "STAT_ITEM_LURE";
					case joaat("FETCH_GFH_INTERCEPT"):
						return "STAT_ITEM_FETCH_GFH_INTERCEPT";
					case joaat("HERB_ENGLISH_MACE"):
						return "STAT_ITEM_HERB_ENGLISH_MACE";
					case joaat("MPPS_LEAST_KILLS"):
						return "STAT_ITEM_MPPS_LEAST_KILLS";
					case joaat("TRAIN"):
						return "STAT_ITEM_TRAIN";
					case joaat("SICKNESS"):
						return "STAT_ITEM_SICKNESS";
					case joaat("WEAPONSLOT_MELEE"):
						return "STAT_ITEM_WEAPONSLOT_MELEE";
					case 1023793009:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_5";
					case 1026109104:
						return "STAT_ITEM_AT_COUGAR_MPLEGENDARY_IGUGA";
					case joaat("AT_BULL_ANGUS"):
						return "STAT_ITEM_AT_BULL_ANGUS";
					case 1029100628:
						return "STAT_ITEM_AT_COUGAR_MPLEGENDARY_SAPA";
					case joaat("GRAVE_ROBBERY"):
						return "STAT_ITEM_GRAVE_ROBBERY";
					case joaat("CLOTHING_HL_PLAYER_VEST_003_10"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_VEST_003_10";
					case 1032491551:
						return "STAT_ITEM_BOUNTY_BOARD_HORDE";
					case joaat("SHOP_BLK_GUNSMITH"):
						return "STAT_ITEM_SHOP_BLK_GUNSMITH";
					case joaat("AT_GATOR_BULL"):
						return "STAT_ITEM_AT_GATOR_BULL";
					case joaat("POSSE"):
						return "STAT_ITEM_POSSE";
					case joaat("AT_MUSKRAT"):
						return "STAT_ITEM_AT_MUSKRAT";
					case joaat("MPPS_LEAST_DAMAGE_INFLICTED"):
						return "STAT_ITEM_MPPS_LEAST_DAMAGE_INFLICTED";
					case joaat("KIDNAPPING_LAW"):
						return "STAT_ITEM_KIDNAPPING_LAW";
					case joaat("MPPS_QUICKEST_OFF_THE_START_LINE"):
						return "STAT_ITEM_MPPS_QUICKEST_OFF_THE_START_LINE";
					case joaat("GREET"):
						return "STAT_ITEM_GREET";
					case joaat("AT_SNAKE_TIMBER"):
						return "STAT_ITEM_AT_SNAKE_TIMBER";
					case joaat("NET_BEAT_EGG_PROTECTOR"):
						return "STAT_ITEM_NET_BEAT_EGG_PROTECTOR";
					case joaat("HERB_WILD_FLWR_BLOOD_FLOWER"):
						return "STAT_ITEM_HERB_WILD_FLWR_BLOOD_FLOWER";
					case joaat("AT_CARDINAL"):
						return "STAT_ITEM_AT_CARDINAL";
					case joaat("HERB_CLAMSHELL_ORCHID"):
						return "STAT_ITEM_HERB_CLAMSHELL_ORCHID";
					case joaat("HERB_VANILLA_FLOWER"):
						return "STAT_ITEM_HERB_VANILLA_FLOWER";
					case 1081123404:
						return "STAT_ITEM_AT_BEAVER_MPLEGENDARY_NIGHT";
					case 1083498873:
						return "STAT_ITEM_LOCAL_HORSE";
					case 1084159052:
						return "STAT_ITEM_SPIN_SLOT_D";
					case joaat("SHOP_CLOTHING"):
						return "STAT_ITEM_SHOP_CLOTHING";
					case joaat("ADVERSARY_MISSIONS"):
						return "STAT_ITEM_ADVERSARY_MISSIONS";
					case joaat("SHOP_RYC_FENCE"):
						return "STAT_ITEM_SHOP_RYC_FENCE";
					case joaat("UGC_DM_EVERY_ANCIENT_TOMAHAWK_COUNTS"):
						return "STAT_ITEM_UGC_DM_EVERY_ANCIENT_TOMAHAWK_COUNTS";
					case joaat("FETCH_GFH_REPO"):
						return "STAT_ITEM_FETCH_GFH_REPO";
					case joaat("NET_PLAYER_ABILITY__QUITE_AN_INSPIRATION"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__QUITE_AN_INSPIRATION";
					case joaat("METER_STRENGTH"):
						return "STAT_ITEM_METER_STRENGTH";
					case joaat("AT_ROOSTER_LEGHORN"):
						return "STAT_ITEM_AT_ROOSTER_LEGHORN";
					case joaat("TRESPASS"):
						return "STAT_ITEM_TRESPASS";
					case 1103691625: /* GXTEntry: "Trapper\'s Cloak" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CLOAK_001_1";
					case joaat("SHOP_CAMP_LOCKBOX"):
						return "STAT_ITEM_SHOP_CAMP_LOCKBOX";
					case joaat("SHOP_ASB_GUNSMITH"):
						return "STAT_ITEM_SHOP_ASB_GUNSMITH";
					case joaat("SHOP_CLM_DOCTOR"):
						return "STAT_ITEM_SHOP_CLM_DOCTOR";
					case joaat("AT_FSMBASS_LEGENDARY"):
						return "STAT_ITEM_AT_FSMBASS_LEGENDARY";
					case joaat("CLOTHING_HL_PLAYER_SPATS_014_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_SPATS_014_1";
					case joaat("GFH_COACH_HOLDUP_ROBBERY"):
						return "STAT_ITEM_GFH_COACH_HOLDUP_ROBBERY";
					case 1130687108:
						return "STAT_ITEM_ANIMAL_TRANSFORMATION_BOAR";
					case joaat("GUN"):
						return "STAT_ITEM_GUN";
					case joaat("INTIMIDATION"):
						return "STAT_ITEM_INTIMIDATION";
					case joaat("NET_PLAYER_ABILITY__TO_FIGHT_ANOTHER_DAY"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__TO_FIGHT_ANOTHER_DAY";
					case joaat("GFH_MAMMA_WATSON"):
						return "STAT_ITEM_GFH_MAMMA_WATSON";
					case joaat("PLAINS_AREAS"):
						return "STAT_ITEM_PLAINS_AREAS";
					case joaat("FETCH_TRADER_SELL_FAR_AWAY_DEALER"):
						return "STAT_ITEM_FETCH_TRADER_SELL_FAR_AWAY_DEALER";
					case joaat("AT_SEAGULL_LAUGH"):
						return "STAT_ITEM_AT_SEAGULL_LAUGH";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_012_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_012_1";
					case joaat("MONTH_STREAKS"):
						return "STAT_ITEM_MONTH_STREAKS";
					case joaat("AMMO_REPEATER_SPLIT_POINT"):
						return "STAT_ITEM_AMMO_REPEATER_SPLIT_POINT";
					case joaat("MPPS_MOST_PUNCHES_LANDED"):
						return "STAT_ITEM_MPPS_MOST_PUNCHES_LANDED";
					case joaat("VANDALISM_V"):
						return "STAT_ITEM_VANDALISM_V";
					case joaat("SHOP_RHO_HORSE_SHOP"):
						return "STAT_ITEM_SHOP_RHO_HORSE_SHOP";
					case joaat("AT_EGRET"):
						return "STAT_ITEM_AT_EGRET";
					case joaat("UGC_RACE_OPEN"):
						return "STAT_ITEM_UGC_RACE_OPEN";
					case joaat("SHOP_VAL_BANK"):
						return "STAT_ITEM_SHOP_VAL_BANK";
					case joaat("AT_RAMSHEEP_SIERRA"):
						return "STAT_ITEM_AT_RAMSHEEP_SIERRA";
					case joaat("SN_ROLLING_EXOTIC"):
						return "STAT_ITEM_SN_ROLLING_EXOTIC";
					case joaat("UGC_DM_ANY"):
						return "STAT_ITEM_UGC_DM_ANY";
					case joaat("GFH_MARCEL"):
						return "STAT_ITEM_GFH_MARCEL";
					case joaat("SHOP_HSO_GUNSMITH"):
						return "STAT_ITEM_SHOP_HSO_GUNSMITH";
					case joaat("AT_FTROUT_LEGENDARY"):
						return "STAT_ITEM_AT_FTROUT_LEGENDARY";
					case joaat("HORSE_REVIVED"):
						return "STAT_ITEM_HORSE_REVIVED";
					case joaat("TH_TOMAHAWK"):
						return "STAT_ITEM_TH_TOMAHAWK";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_009_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_009_1";
					case 1185140727:
						return "STAT_ITEM_MP_BEAT_MANAGER_BOUNTY_HUNTER_COOLDOWN_TIMESTAMP";
					case joaat("AMMO_PISTOL_EXPRESS_EXPLOSIVE"):
						return "STAT_ITEM_AMMO_PISTOL_EXPRESS_EXPLOSIVE";
					case joaat("NET_BEAT_STALKING_HUNTER"):
						return "STAT_ITEM_NET_BEAT_STALKING_HUNTER";
					case joaat("AT_CHICKEN_LEGHORN"):
						return "STAT_ITEM_AT_CHICKEN_LEGHORN";
					case joaat("UGC_VERSUS_DOWNED_VIP"):
						return "STAT_ITEM_UGC_VERSUS_DOWNED_VIP";
					case joaat("MPPS_MOST_MEDS_USED"):
						return "STAT_ITEM_MPPS_MOST_MEDS_USED";
					case joaat("COVER_SCENT"):
						return "STAT_ITEM_COVER_SCENT";
					case joaat("PERFECT"):
						return "STAT_ITEM_PERFECT";
					case joaat("AT_TOAD_DESERT"):
						return "STAT_ITEM_AT_TOAD_DESERT";
					case joaat("AT_COYOTE_LEGENDARY"):
						return "STAT_ITEM_AT_COYOTE_LEGENDARY";
					case joaat("FETCH_MOONSHINE_SELL_PREFERRED"):
						return "STAT_ITEM_FETCH_MOONSHINE_SELL_PREFERRED";
					case joaat("AT_CRAB"):
						return "STAT_ITEM_AT_CRAB";
					case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
						return "STAT_ITEM_AMMO_THROWING_KNIVES_IMPROVED";
					case joaat("ASSAULT"):
						return "STAT_ITEM_ASSAULT";
					case joaat("CHEST"):
						return "STAT_ITEM_CHEST";
					case joaat("GFH_SHAKY"):
						return "STAT_ITEM_GFH_SHAKY";
					case joaat("AMMO_REVOLVER_EXPRESS"):
						return "STAT_ITEM_AMMO_REVOLVER_EXPRESS";
					case joaat("AMMO_TOMAHAWK"):
						return "STAT_ITEM_AMMO_TOMAHAWK";
					case 1238211651:
						return "STAT_ITEM_HORSE_MASK";
					case 1239556700:
						return "STAT_ITEM_SHOP_CHO_TRAPPER";
					case joaat("AT_RAMSHEEP_ROCKY"):
						return "STAT_ITEM_AT_RAMSHEEP_ROCKY";
					case joaat("AMMO_REVOLVER_SPLIT_POINT"):
						return "STAT_ITEM_AMMO_REVOLVER_SPLIT_POINT";
					case joaat("SHOP_WARDROBE"):
						return "STAT_ITEM_SHOP_WARDROBE";
					case joaat("SHOP_EMR_FENCE"):
						return "STAT_ITEM_SHOP_EMR_FENCE";
					case joaat("UGC_VERSUS_RAID"):
						return "STAT_ITEM_UGC_VERSUS_RAID";
					case 1248735382:
						return "STAT_ITEM_REPUTATION__TYPE__HARRIET";
					case joaat("HUMAN"):
						return "STAT_ITEM_HUMAN";
					case joaat("MPPS_MOST_DAMAGE_TAKEN"):
						return "STAT_ITEM_MPPS_MOST_DAMAGE_TAKEN";
					case joaat("AT_PIG_SPOT"):
						return "STAT_ITEM_AT_PIG_SPOT";
					case joaat("CLOTHING_HL_PLAYER_CHAPS_006_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_006_1";
					case joaat("UGC_VERSUS_BRAWLER"):
						return "STAT_ITEM_UGC_VERSUS_BRAWLER";
					case joaat("GVO_FLOW_INITIAL_TIMESTAMP"):
						return "STAT_ITEM_GVO_FLOW_INITIAL_TIMESTAMP";
					case joaat("AMMO_THROWING_KNIVES_TRAIL"):
						return "STAT_ITEM_AMMO_THROWING_KNIVES_TRAIL";
					case 1271821570:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_6";
					case 1275995948:
						return "STAT_ITEM_ML_MACHETE_HOR";
					case joaat("PASS_VEH_DB"):
						return "STAT_ITEM_PASS_VEH_DB";
					case joaat("TRAVELLED_FOOT"):
						return "STAT_ITEM_TRAVELLED_FOOT";
					case joaat("FOOD_SEASONED"):
						return "STAT_ITEM_FOOD_SEASONED";
					case joaat("EXPLOSION_POISON"):
						return "STAT_ITEM_EXPLOSION_POISON";
					case joaat("DOMINOES_NO_DRAWS"):
						return "STAT_ITEM_DOMINOES_NO_DRAWS";
					case joaat("NET_BEAT_ARROWHEAD_INJURY"):
						return "STAT_ITEM_NET_BEAT_ARROWHEAD_INJURY";
					case joaat("CLOTHING_HL_PLAYER_BOOT_035_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_035_1";
					case joaat("HERB_WILD_MINT"):
						return "STAT_ITEM_HERB_WILD_MINT";
					case joaat("PROVISION_TRINKET_BISON_HORN"):
						return "STAT_ITEM_PROVISION_TRINKET_BISON_HORN";
					case 1294112150: /* GXTEntry: "No-Man\'s Vest" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_021_1";
					case joaat("AT_OX"):
						return "STAT_ITEM_AT_OX";
					case joaat("AT_BEAVER"):
						return "STAT_ITEM_AT_BEAVER";
					case joaat("PROVISION_TRINKET_LION_PAW"):
						return "STAT_ITEM_PROVISION_TRINKET_LION_PAW";
					case joaat("NET_BEAT_SUSPENSION_TRAP"):
						return "STAT_ITEM_NET_BEAT_SUSPENSION_TRAP";
					case joaat("SHOP_HEN_TRAVELLING_SALESMAN"):
						return "STAT_ITEM_SHOP_HEN_TRAVELLING_SALESMAN";
					case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_SATCHEL_006_1";
					case joaat("MISSION_COOP_GVO_OUTLAW_4"):
						return "STAT_ITEM_MISSION_COOP_GVO_OUTLAW_4";
					case joaat("FETCH_TRADER_RESUPPLY_MISSIONS"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_MISSIONS";
					case joaat("SHOP_AMD_POST_OFFICE"):
						return "STAT_ITEM_SHOP_AMD_POST_OFFICE";
					case joaat("SHOP_BEN_TRAIN_STATION"):
						return "STAT_ITEM_SHOP_BEN_TRAIN_STATION";
					case joaat("MISSIONS_CHP1"):
						return "STAT_ITEM_MISSIONS_CHP1";
					case joaat("NET_BEAT_TIED_UP_PED"):
						return "STAT_ITEM_NET_BEAT_TIED_UP_PED";
					case joaat("SHOP_SHB_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_SHB_GENERAL_STORE";
					case joaat("CONSUMABLE_PLUMP_BIRD_WILD_MINT_COOKED"):
						return "STAT_ITEM_CONSUMABLE_PLUMP_BIRD_WILD_MINT_COOKED";
					case joaat("AT_BULLFROG"):
						return "STAT_ITEM_AT_BULLFROG";
					case joaat("FETCH_TRADER_RESUPPLY_UNLOADING_SUPPLIES"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_UNLOADING_SUPPLIES";
					case joaat("FOOTHILLS_AREAS"):
						return "STAT_ITEM_FOOTHILLS_AREAS";
					case joaat("ROBBED_SATCHEL_ITEM"):
						return "STAT_ITEM_ROBBED_SATCHEL_ITEM";
					case joaat("UGC_VERSUS_KING_OF_THE_KILL"):
						return "STAT_ITEM_UGC_VERSUS_KING_OF_THE_KILL";
					case joaat("HEADSHOT"):
						return "STAT_ITEM_HEADSHOT";
					case joaat("LEGENDARY_BOUNTY_MISSION_01"):
						return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_01";
					case joaat("UGC_VERSUS_SUPPLY"):
						return "STAT_ITEM_UGC_VERSUS_SUPPLY";
					case joaat("NET_PLAYER_ABILITY__NOT_EVEN_TRYING"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__NOT_EVEN_TRYING";
					case joaat("CONSUMABLE_POTENT_ANTIDOTE"):
						return "STAT_ITEM_CONSUMABLE_POTENT_ANTIDOTE";
					case 1366705300:
						return "STAT_ITEM_AT_BEAR_MPLEGENDARY_RIDGEBACK_SPIRIT";
					case joaat("FME_CHALLENGE_HEADSHOT"):
						return "STAT_ITEM_FME_CHALLENGE_HEADSHOT";
					case joaat("NET_BEAT_GRAVEROBBER"):
						return "STAT_ITEM_NET_BEAT_GRAVEROBBER";
					case joaat("AT_EGRET_LITTLE"):
						return "STAT_ITEM_AT_EGRET_LITTLE";
					case joaat("PV_POSSE_RACE"):
						return "STAT_ITEM_PV_POSSE_RACE";
					case joaat("PLAYERS_ARMED"):
						return "STAT_ITEM_PLAYERS_ARMED";
					case joaat("UGC_VERSUS_FIELD_HUNTER"):
						return "STAT_ITEM_UGC_VERSUS_FIELD_HUNTER";
					case joaat("NET_PLAYER_ABILITY__BORED_EASILY"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__BORED_EASILY";
					case joaat("GUN_FOR_HIRE_BOUNTY"):
						return "STAT_ITEM_GUN_FOR_HIRE_BOUNTY";
					case joaat("AT_SEAGULL"):
						return "STAT_ITEM_AT_SEAGULL";
					case joaat("MPPS_MOST_ACCURATE"):
						return "STAT_ITEM_MPPS_MOST_ACCURATE";
					case joaat("FETCH_MOONSHINE_BOOTLEGGER_DESTROY"):
						return "STAT_ITEM_FETCH_MOONSHINE_BOOTLEGGER_DESTROY";
					case joaat("UGC_VERSUS_TERRITORY_GAIN"):
						return "STAT_ITEM_UGC_VERSUS_TERRITORY_GAIN";
					case joaat("NET_PLAYLIST_ADVERSARY_SMALL"):
						return "STAT_ITEM_NET_PLAYLIST_ADVERSARY_SMALL";
					case joaat("FLYING_BIRD"):
						return "STAT_ITEM_FLYING_BIRD";
					case joaat("FULL_DAY_COMPLETED"):
						return "STAT_ITEM_FULL_DAY_COMPLETED";
					case 1421441577:
						return "STAT_ITEM_SHOP_BAY_HARRIET";
					case joaat("NET_PLAYER_ABILITY__A_PERSON_OF_CONVICTION"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__A_PERSON_OF_CONVICTION";
					case joaat("FETCH_TRADER_RESUPPLY_SHERIFFS_SUPPLIES"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_SHERIFFS_SUPPLIES";
					case joaat("SHOP_SDN_BARTENDER_SLUM"):
						return "STAT_ITEM_SHOP_SDN_BARTENDER_SLUM";
					case joaat("NET_PLAYER_ABILITY__MARK_FOR_DEATH"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__MARK_FOR_DEATH";
					case joaat("AT_OWL_CALI"):
						return "STAT_ITEM_AT_OWL_CALI";
					case joaat("SHOP_BLK_TAILOR"):
						return "STAT_ITEM_SHOP_BLK_TAILOR";
					case joaat("MISSION_COOP_GVO_GUNSLINGER_3"):
						return "STAT_ITEM_MISSION_COOP_GVO_GUNSLINGER_3";
					case joaat("SHOP_SDN_FRENCH_MARKET"):
						return "STAT_ITEM_SHOP_SDN_FRENCH_MARKET";
					case joaat("UGC_DM_HOT_TARGET"):
						return "STAT_ITEM_UGC_DM_HOT_TARGET";
					case joaat("PROVISION_TRINKET_COUGAR_FANG"):
						return "STAT_ITEM_PROVISION_TRINKET_COUGAR_FANG";
					case joaat("ST_TRAPPER"):
						return "STAT_ITEM_ST_TRAPPER";
					case joaat("GFH_MAGGIE"):
						return "STAT_ITEM_GFH_MAGGIE";
					case joaat("SHOP_VAL_GUNSMITH"):
						return "STAT_ITEM_SHOP_VAL_GUNSMITH";
					case joaat("AMMO_MOLOTOV"):
						return "STAT_ITEM_AMMO_MOLOTOV";
					case joaat("ANTAGONIZE"):
						return "STAT_ITEM_ANTAGONIZE";
					case joaat("ENEMIES"):
						return "STAT_ITEM_ENEMIES";
					case joaat("DOMINOES_GAME"):
						return "STAT_ITEM_DOMINOES_GAME";
					case joaat("SWIMMING_NOT_DROWNING"):
						return "STAT_ITEM_SWIMMING_NOT_DROWNING";
					case joaat("AT_LOON_YELLOW"):
						return "STAT_ITEM_AT_LOON_YELLOW";
					case joaat("NET_PLAYER_ABILITY__HOLD_THE_LINE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__HOLD_THE_LINE";
					case joaat("MPPS_RACE_LEAST_DISTANCE_TRAVELLED"):
						return "STAT_ITEM_MPPS_RACE_LEAST_DISTANCE_TRAVELLED";
					case 1454312131:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_4";
					case joaat("HUNTING"):
						return "STAT_ITEM_HUNTING";
					case joaat("BUGGY"):
						return "STAT_ITEM_BUGGY";
					case joaat("SHOP_HSO_DOCTOR"):
						return "STAT_ITEM_SHOP_HSO_DOCTOR";
					case joaat("FETCH_TRADER_RESUPPLY_CHEMICAL_WAGON"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_CHEMICAL_WAGON";
					case joaat("CANOE"):
						return "STAT_ITEM_CANOE";
					case 1470725986:
						return "STAT_ITEM_ML_MOONSHINEJUG_MP";
					case joaat("MPPS_NOTITLE_BYSTANDER"):
						return "STAT_ITEM_MPPS_NOTITLE_BYSTANDER";
					case joaat("FROM_GRAVE"):
						return "STAT_ITEM_FROM_GRAVE";
					case joaat("UGC_VERSUS_BULLDOG"):
						return "STAT_ITEM_UGC_VERSUS_BULLDOG";
					case joaat("SHOP_VAN_GENERAL_STORE"):
						return "STAT_ITEM_SHOP_VAN_GENERAL_STORE";
					case joaat("CLOTHING_HL_PLAYER_CHAPS_007_2"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_007_2";
					case joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN"):
						return "STAT_ITEM_SHOP_SDN_BOUNTYHUNTING_MP_RETURN";
					case joaat("CLOTHING_HL_PLAYER_HAT_040_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_040_1";
					case joaat("NET_PLAYLIST_ORBIS_SERIES_2"):
						return "STAT_ITEM_NET_PLAYLIST_ORBIS_SERIES_2";
					case joaat("FME_CHALLENGE_LONGARM"):
						return "STAT_ITEM_FME_CHALLENGE_LONGARM";
					case joaat("AT_ORIOLE_HOODED"):
						return "STAT_ITEM_AT_ORIOLE_HOODED";
					case joaat("AT_BUFFALO"):
						return "STAT_ITEM_AT_BUFFALO";
					case 1495567318:
						return "STAT_ITEM_AT_WOLF_MPLEGENDARY_ONYX";
					case joaat("MISSION_COOP_GVO_OUTLAW_2"):
						return "STAT_ITEM_MISSION_COOP_GVO_OUTLAW_2";
					case joaat("FETCH_BOUNTY_LURE_TARGET"):
						return "STAT_ITEM_FETCH_BOUNTY_LURE_TARGET";
					case joaat("ANIMAL_WHOLE"):
						return "STAT_ITEM_ANIMAL_WHOLE";
					case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
						return "STAT_ITEM_AMMO_THROWING_KNIVES_DISORIENT";
					case joaat("AT_DOG"):
						return "STAT_ITEM_AT_DOG";
					case 1510372288: /* GXTEntry: "Moose Antlers" */
						return "STAT_ITEM_UPGRADE_PCC_MOUNTEDMOOSEANTLERS_01";
					case joaat("FME_HOT_PROPERTY"):
						return "STAT_ITEM_FME_HOT_PROPERTY";
					case joaat("AT_BLUEJAY"):
						return "STAT_ITEM_AT_BLUEJAY";
					case joaat("NET_BEAT_LOCKED_SAFE"):
						return "STAT_ITEM_NET_BEAT_LOCKED_SAFE";
					case joaat("SHOP_SCM_HORSE_SHOP"):
						return "STAT_ITEM_SHOP_SCM_HORSE_SHOP";
					case joaat("SHOP_VAN_BARTENDER"):
						return "STAT_ITEM_SHOP_VAN_BARTENDER";
					case joaat("MPPS_MOST_REVIVES"):
						return "STAT_ITEM_MPPS_MOST_REVIVES";
					case 1532695640:
						return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_MEDIUM";
					case joaat("CLOTHING_HL_PLAYER_HAT_052_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_052_1";
					case joaat("ANIMAL_NATURAL"):
						return "STAT_ITEM_ANIMAL_NATURAL";
					case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_SATCHEL_007_1";
					case joaat("AMBIENT_COACH_ROBBED"):
						return "STAT_ITEM_AMBIENT_COACH_ROBBED";
					case joaat("GROUP_THROWN"):
						return "STAT_ITEM_GROUP_THROWN";
					case joaat("LEVEL_4"):
						return "STAT_ITEM_LEVEL_4";
					case joaat("HERB_OREGANO"):
						return "STAT_ITEM_HERB_OREGANO";
					case joaat("BODY_WEIGHT"):
						return "STAT_ITEM_BODY_WEIGHT";
					case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
						return "STAT_ITEM_CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED";
					case joaat("ST_HONOR_MP"):
						return "STAT_ITEM_ST_HONOR_MP";
					case joaat("SWIMMING"):
						return "STAT_ITEM_SWIMMING";
					case joaat("LOITER"):
						return "STAT_ITEM_LOITER";
					case joaat("MPPS_MOST_MOLOTOVS_USED"):
						return "STAT_ITEM_MPPS_MOST_MOLOTOVS_USED";
					case joaat("ML_KNIFE_CIVIL_WAR"):
						return "STAT_ITEM_ML_KNIFE_CIVIL_WAR";
					case joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN"):
						return "STAT_ITEM_SHOP_RHO_BOUNTYHUNTING_MP_RETURN";
					case joaat("LARGE_ANIMALS"):
						return "STAT_ITEM_LARGE_ANIMALS";
					case joaat("SHOP_VAL_TRAIN_STATION"):
						return "STAT_ITEM_SHOP_VAL_TRAIN_STATION";
					case joaat("NET_PLAYER_ABILITY__HORSEMAN"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__HORSEMAN";
					case joaat("RCBOAT"):
						return "STAT_ITEM_RCBOAT";
					case joaat("JUMP_MOUNTED"):
						return "STAT_ITEM_JUMP_MOUNTED";
					case joaat("STEALTH_RUNNING"):
						return "STAT_ITEM_STEALTH_RUNNING";
					case joaat("FME_GOLDEN_HAT"):
						return "STAT_ITEM_FME_GOLDEN_HAT";
					case joaat("HERB_SPARROWS_EGG_ORCHID"):
						return "STAT_ITEM_HERB_SPARROWS_EGG_ORCHID";
					case joaat("CONSUMABLE_CRUSTACEAN_MEAT_OREGANO_COOKED"):
						return "STAT_ITEM_CONSUMABLE_CRUSTACEAN_MEAT_OREGANO_COOKED";
					case joaat("SHOP_BLK_BANK"):
						return "STAT_ITEM_SHOP_BLK_BANK";
					case joaat("NET_BEAT_CRASHED_WAGON"):
						return "STAT_ITEM_NET_BEAT_CRASHED_WAGON";
					case joaat("AT_BEAR_GRIZZLY"):
						return "STAT_ITEM_AT_BEAR_GRIZZLY";
					case joaat("PS_SEMIAUTO"):
						return "STAT_ITEM_PS_SEMIAUTO";
					case joaat("CONSUMABLE_BIG_GAME_MEAT_COOKED"):
						return "STAT_ITEM_CONSUMABLE_BIG_GAME_MEAT_COOKED";
					case joaat("HANDS"):
						return "STAT_ITEM_HANDS";
					case joaat("CLOTHING_HL_PLAYER_BOOT_022_4"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_022_4";
					case 1615378257: /* GXTEntry: "Buck Riding Gloves" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_002_11";
					case joaat("FETCH_TRADER_RESUPPLY_STATIONARY"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_STATIONARY";
					case joaat("SHOP_VAL_BARTENDER_SLUM"):
						return "STAT_ITEM_SHOP_VAL_BARTENDER_SLUM";
					case joaat("THREATEN"):
						return "STAT_ITEM_THREATEN";
					case joaat("PROVISION_TRINKET_PRONGHORN_ANTLER"):
						return "STAT_ITEM_PROVISION_TRINKET_PRONGHORN_ANTLER";
					case joaat("OBJECTS"):
						return "STAT_ITEM_OBJECTS";
					case joaat("AT_PARROT"):
						return "STAT_ITEM_AT_PARROT";
					case joaat("SHOP_ASB_NEWSPAPER_BOY"):
						return "STAT_ITEM_SHOP_ASB_NEWSPAPER_BOY";
					case joaat("FROM_BEHIND"):
						return "STAT_ITEM_FROM_BEHIND";
					case joaat("FISH"):
						return "STAT_ITEM_FISH";
					case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
						return "STAT_ITEM_PROVISION_TRINKET_MOOSE_ANTLER";
					case joaat("AT_PANTHER_LEGENDARY"):
						return "STAT_ITEM_AT_PANTHER_LEGENDARY";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_6"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_6";
					case joaat("CONSUMABLE_GRISTLY_MUTTON_THYME_COOKED"):
						return "STAT_ITEM_CONSUMABLE_GRISTLY_MUTTON_THYME_COOKED";
					case joaat("GFH_WAR_VET"):
						return "STAT_ITEM_GFH_WAR_VET";
					case joaat("UGC_DM_TEAM"):
						return "STAT_ITEM_UGC_DM_TEAM";
					case joaat("AT_RAMSHEEP_DESERT"):
						return "STAT_ITEM_AT_RAMSHEEP_DESERT";
					case joaat("FETCH_GFH_DELIVERY_PACKAGE"):
						return "STAT_ITEM_FETCH_GFH_DELIVERY_PACKAGE";
					case 1644594284:
						return "STAT_ITEM_WEIGHT_LOSS_TONIC";
					case joaat("MPPS_MOST_PICKUPS_COLLECTED"):
						return "STAT_ITEM_MPPS_MOST_PICKUPS_COLLECTED";
					case joaat("AT_MOOSE"):
						return "STAT_ITEM_AT_MOOSE";
					case joaat("CLOTHING_HL_PLAYER_HAT_068_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_068_1";
					case joaat("AMMO_RIFLE_EXPRESS"):
						return "STAT_ITEM_AMMO_RIFLE_EXPRESS";
					case joaat("UGC_RACE_VEHICLE"):
						return "STAT_ITEM_UGC_RACE_VEHICLE";
					case joaat("HORSE_KIT"):
						return "STAT_ITEM_HORSE_KIT";
					case joaat("AMMO_ARROW_TRACKING"):
						return "STAT_ITEM_AMMO_ARROW_TRACKING";
					case joaat("FETCH_MOONSHINE_BOOTLEGGER_SABOTAGE"):
						return "STAT_ITEM_FETCH_MOONSHINE_BOOTLEGGER_SABOTAGE";
					case joaat("HERB_AMERICAN_GINSENG"):
						return "STAT_ITEM_HERB_AMERICAN_GINSENG";
					case joaat("CONSUMABLE_TENDER_PORK_COOKED"):
						return "STAT_ITEM_CONSUMABLE_TENDER_PORK_COOKED";
					case joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN"):
						return "STAT_ITEM_SHOP_VAL_BOUNTYHUNTING_MP_RETURN";
					case 1666532577:
						return "STAT_ITEM_AT_MOOSE_MPLEGENDARY_SNOWFLAKE";
					case joaat("NET_PLAYER_ABILITY__LIVE_FOR_THE_FIGHT"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__LIVE_FOR_THE_FIGHT";
					case joaat("AMMO_HATCHET_DOUBLE_BIT"):
						return "STAT_ITEM_AMMO_HATCHET_DOUBLE_BIT";
					case joaat("SHOP_BBR_TRAVELLING_SALESMAN"):
						return "STAT_ITEM_SHOP_BBR_TRAVELLING_SALESMAN";
					case joaat("POKER_STRAIGHT_FLUSH"):
						return "STAT_ITEM_POKER_STRAIGHT_FLUSH";
					case joaat("MP_TUTORIAL_BOUNTY_DELIVER_WAGON"):
						return "STAT_ITEM_MP_TUTORIAL_BOUNTY_DELIVER_WAGON";
					case joaat("AT_CORMORANT"):
						return "STAT_ITEM_AT_CORMORANT";
					case 1680448508:
						return "STAT_ITEM_FEE_ROLE_NATURALIST_ANIMAL_CONTROL_LARGE";
					case joaat("AMMO_REVOLVER"):
						return "STAT_ITEM_AMMO_REVOLVER";
					case joaat("EMERALD_RANCH_STATION_BOUNTY_BOARD"):
						return "STAT_ITEM_EMERALD_RANCH_STATION_BOUNTY_BOARD";
					case joaat("SAINT_DENIS_SHERIFF_BOUNTY_BOARD"):
						return "STAT_ITEM_SAINT_DENIS_SHERIFF_BOUNTY_BOARD";
					case joaat("IN_WATER"):
						return "STAT_ITEM_IN_WATER";
					case joaat("SHOP_RIO_TRAVELLING_SALESMAN"):
						return "STAT_ITEM_SHOP_RIO_TRAVELLING_SALESMAN";
					case 1689071181:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_HIGH";
					case 1692201364: /* GXTEntry: "Rustic Vest" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_VESTS_023_1";
					case joaat("STAMINA"):
						return "STAT_ITEM_STAMINA";
					case joaat("UGC_VERSUS_HUNT_EM_DOWN"):
						return "STAT_ITEM_UGC_VERSUS_HUNT_EM_DOWN";
					case joaat("SHOP_SDN_BARTENDER"):
						return "STAT_ITEM_SHOP_SDN_BARTENDER";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_019_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_019_1";
					case joaat("TAUNT"):
						return "STAT_ITEM_TAUNT";
					case joaat("FME_THEMED_ESCAPED_CONVICTS"):
						return "STAT_ITEM_FME_THEMED_ESCAPED_CONVICTS";
					case joaat("SN_ROLLING"):
						return "STAT_ITEM_SN_ROLLING";
					case joaat("FETCH_TRADER_RESUPPLY_ALL"):
						return "STAT_ITEM_FETCH_TRADER_RESUPPLY_ALL";
					case joaat("ON_HANDCART"):
						return "STAT_ITEM_ON_HANDCART";
					case joaat("TALL_TREES"):
						return "STAT_ITEM_TALL_TREES";
					case joaat("UGC_VERSUS_CHESS"):
						return "STAT_ITEM_UGC_VERSUS_CHESS";
					case joaat("THEFT"):
						return "STAT_ITEM_THEFT";
					case joaat("MISSION_COOP_GVO_GUNSLINGER_4"):
						return "STAT_ITEM_MISSION_COOP_GVO_GUNSLINGER_4";
					case joaat("SHOP_WEAPON_MOD_STORE"):
						return "STAT_ITEM_SHOP_WEAPON_MOD_STORE";
					case joaat("UNAWARE"):
						return "STAT_ITEM_UNAWARE";
					case joaat("MPPS_WINNING_KILL"):
						return "STAT_ITEM_MPPS_WINNING_KILL";
					case 1725570548: /* GXTEntry: "Native Accessory" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_002_1";
					case joaat("MPPS_MOST_SHOT_IN_BACK"):
						return "STAT_ITEM_MPPS_MOST_SHOT_IN_BACK";
					case joaat("TRAINCART"):
						return "STAT_ITEM_TRAINCART";
					case joaat("AT_GILAMONSTER"):
						return "STAT_ITEM_AT_GILAMONSTER";
					case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND"):
						return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND";
					case joaat("LEGENDARY_BOUNTY_MISSION_00"):
						return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_00";
					case joaat("MP_TUTORIAL_SWAP_REINS"):
						return "STAT_ITEM_MP_TUTORIAL_SWAP_REINS";
					case joaat("AT_DOG_HUSKY"):
						return "STAT_ITEM_AT_DOG_HUSKY";
					case joaat("FETCH_DYNAMIC_AMBUSH"):
						return "STAT_ITEM_FETCH_DYNAMIC_AMBUSH";
					case joaat("TOWN_CHEST_LOOTED"):
						return "STAT_ITEM_TOWN_CHEST_LOOTED";
					case joaat("RV_CATTLEMAN_PIG"):
						return "STAT_ITEM_RV_CATTLEMAN_PIG";
					case joaat("NET_PLAYLIST_ORBIS_SERIES_1"):
						return "STAT_ITEM_NET_PLAYLIST_ORBIS_SERIES_1";
					case joaat("UGC_VERSUS_LANDGRAB"):
						return "STAT_ITEM_UGC_VERSUS_LANDGRAB";
					case joaat("AT_FBLUEGILL_LEGENDARY"):
						return "STAT_ITEM_AT_FBLUEGILL_LEGENDARY";
					case joaat("RUNNING"):
						return "STAT_ITEM_RUNNING";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_011_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_011_1";
					case joaat("RIGGS_STATION_BOUNTY_BOARD"):
						return "STAT_ITEM_RIGGS_STATION_BOUNTY_BOARD";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_15"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_15";
					case joaat("BOAT"):
						return "STAT_ITEM_BOAT";
					case joaat("MPPS_COVER_KILLS"):
						return "STAT_ITEM_MPPS_COVER_KILLS";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_015_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_015_1";
					case joaat("MP_TUTORIAL_GFH_NEGATIVE_HONOR"):
						return "STAT_ITEM_MP_TUTORIAL_GFH_NEGATIVE_HONOR";
					case joaat("UNIQUE_PLAYER"):
						return "STAT_ITEM_UNIQUE_PLAYER";
					case joaat("AT_FLARGEMOUTHBASS"):
						return "STAT_ITEM_AT_FLARGEMOUTHBASS";
					case joaat("TRAVELLED_HORSE_COMPANION"):
						return "STAT_ITEM_TRAVELLED_HORSE_COMPANION";
					case joaat("MP_TUTORIAL_FME_SCORE_TIED"):
						return "STAT_ITEM_MP_TUTORIAL_FME_SCORE_TIED";
					case joaat("RARE_ANIMALS"):
						return "STAT_ITEM_RARE_ANIMALS";
					case joaat("PARDON_LETTER"):
						return "STAT_ITEM_PARDON_LETTER";
					case joaat("CASH"):
						return "STAT_ITEM_CASH";
					case joaat("NET_PLAYER_ABILITY__HANGMAN"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__HANGMAN";
					case joaat("ANIMAL_MEAT"):
						return "STAT_ITEM_ANIMAL_MEAT";
					case joaat("NET_BEAT_WILDMAN"):
						return "STAT_ITEM_NET_BEAT_WILDMAN";
					case joaat("AT_BEAR_LEGENDARY"):
						return "STAT_ITEM_AT_BEAR_LEGENDARY";
					case joaat("CONSUMABLE_FLAKEY_FISH_THYME_COOKED"):
						return "STAT_ITEM_CONSUMABLE_FLAKEY_FISH_THYME_COOKED";
					case joaat("HERB_WILD_FEVERFEW"):
						return "STAT_ITEM_HERB_WILD_FEVERFEW";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_022_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_022_1";
					case joaat("MPPS_HIP_KILLED"):
						return "STAT_ITEM_MPPS_HIP_KILLED";
					case joaat("AT_CRAYFISH"):
						return "STAT_ITEM_AT_CRAYFISH";
					case joaat("POKER_FULL_HOUSE"):
						return "STAT_ITEM_POKER_FULL_HOUSE";
					case joaat("MPPS_LONGEST_KILLSTREAK"):
						return "STAT_ITEM_MPPS_LONGEST_KILLSTREAK";
					case joaat("MP_TUTORIAL_FOLLOW_PED_CAN_TAKE_CONTROL"):
						return "STAT_ITEM_MP_TUTORIAL_FOLLOW_PED_CAN_TAKE_CONTROL";
					case 1806873886:
						return "STAT_ITEM_AT_COYOTE_MPLEGENDARY_RED_STREAK";
					case joaat("RANCHERS"):
						return "STAT_ITEM_RANCHERS";
					case joaat("PROVISION_TRINKET_ELK_ANTLER"):
						return "STAT_ITEM_PROVISION_TRINKET_ELK_ANTLER";
					case joaat("PROVISION_TRINKET_RAM_HORN"):
						return "STAT_ITEM_PROVISION_TRINKET_RAM_HORN";
					case joaat("NET_PLAYER_ABILITY__WORTH_REPEATING"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__WORTH_REPEATING";
					case joaat("CLOTHING_HL_PLAYER_HAT_047_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_047_1";
					case joaat("HERB_WILD_FLWR_CREEK_PLUM"):
						return "STAT_ITEM_HERB_WILD_FLWR_CREEK_PLUM";
					case joaat("AMMO_THROWING_KNIVES_DRAIN"):
						return "STAT_ITEM_AMMO_THROWING_KNIVES_DRAIN";
					case 1829377792:
						return "STAT_ITEM_NET_BEAT_LEGENDARY_ANIMAL_BISON";
					case joaat("HERB_BURDOCK_ROOT"):
						return "STAT_ITEM_HERB_BURDOCK_ROOT";
					case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
						return "STAT_ITEM_CONSUMABLE_POTENT_PREDATOR_BAIT";
					case joaat("CLOTHING_HL_PLAYER_HAT_042_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_042_1";
					case joaat("AMMO_RIFLE_EXPRESS_EXPLOSIVE"):
						return "STAT_ITEM_AMMO_RIFLE_EXPRESS_EXPLOSIVE";
					case 1847740267:
						return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_HIGH";
					case joaat("CONSUMABLE_BIG_GAME_MEAT_THYME_COOKED"):
						return "STAT_ITEM_CONSUMABLE_BIG_GAME_MEAT_THYME_COOKED";
					case joaat("DOCUMENT"):
						return "STAT_ITEM_DOCUMENT";
					case joaat("POKER_2_OF_A_KIND"):
						return "STAT_ITEM_POKER_2_OF_A_KIND";
					case joaat("PS_MAUSER"):
						return "STAT_ITEM_PS_MAUSER";
					case 1856073229:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_LOW";
					case joaat("FETCH_BOUNTY_MEDIUM"):
						return "STAT_ITEM_FETCH_BOUNTY_MEDIUM";
					case joaat("AMMO_RIFLE_HIGH_VELOCITY"):
						return "STAT_ITEM_AMMO_RIFLE_HIGH_VELOCITY";
					case joaat("AT_HAWK_RED"):
						return "STAT_ITEM_AT_HAWK_RED";
					case joaat("PLAYER"):
						return "STAT_ITEM_PLAYER";
					case joaat("CAMP_FOLLOWER_OUTFIT"):
						return "STAT_ITEM_CAMP_FOLLOWER_OUTFIT";
					case joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN"):
						return "STAT_ITEM_SHOP_BLK_BOUNTYHUNTING_MP_RETURN";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_010_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_010_1";
					case joaat("MISSION_COOP_GVO_GUNSLINGER_2"):
						return "STAT_ITEM_MISSION_COOP_GVO_GUNSLINGER_2";
					case joaat("AT_FLGBASS_LEGENDARY"):
						return "STAT_ITEM_AT_FLGBASS_LEGENDARY";
					case joaat("SHOP_WAL_TRAIN_STATION"):
						return "STAT_ITEM_SHOP_WAL_TRAIN_STATION";
					case joaat("ENEMY"):
						return "STAT_ITEM_ENEMY";
					case joaat("NET_PLAYER_ABILITY__STRENGTH_IN_NUMBERS"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__STRENGTH_IN_NUMBERS";
					case 1879593571:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_12";
					case joaat("MP_TUTORIAL_KNOCKED_OUT_PED_REVIVED"):
						return "STAT_ITEM_MP_TUTORIAL_KNOCKED_OUT_PED_REVIVED";
					case joaat("GFH_LANGTON"):
						return "STAT_ITEM_GFH_LANGTON";
					case joaat("UGC_RACE_ANY"):
						return "STAT_ITEM_UGC_RACE_ANY";
					case joaat("CONSUMABLE_ANTIDOTE"):
						return "STAT_ITEM_CONSUMABLE_ANTIDOTE";
					case joaat("ML_KNIFE_MINER"):
						return "STAT_ITEM_ML_KNIFE_MINER";
					case joaat("ML_KNIFE_BEAR"):
						return "STAT_ITEM_ML_KNIFE_BEAR";
					case joaat("CONSUMABLE_COVER_SCENT"):
						return "STAT_ITEM_CONSUMABLE_COVER_SCENT";
					case joaat("AT_ELK_LEGENDARY"):
						return "STAT_ITEM_AT_ELK_LEGENDARY";
					case joaat("CLOTHING_HL_PLAYER_CHAPS_008_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_CHAPS_008_1";
					case joaat("CONSUMABLE_MEAL_CAMP_STEW_DAILY_5"):
						return "STAT_ITEM_CONSUMABLE_MEAL_CAMP_STEW_DAILY_5";
					case joaat("AT_DOG_CHESAPEAKE"):
						return "STAT_ITEM_AT_DOG_CHESAPEAKE";
					case joaat("HERB_LADY_SLIPPER_ORCHID"):
						return "STAT_ITEM_HERB_LADY_SLIPPER_ORCHID";
					case 1913979516:
						return "STAT_ITEM_BOUNTY_BOARD_ESCORT_TARGET";
					case joaat("WEAPON_CUSTOMIZATION"):
						return "STAT_ITEM_WEAPON_CUSTOMIZATION";
					case joaat("UGC_VERSUS_MOST_WANTED"):
						return "STAT_ITEM_UGC_VERSUS_MOST_WANTED";
					case joaat("CLOTHING_HL_PLAYER_HAT_050_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_050_1";
					case joaat("UGC_VERSUS_ANY"):
						return "STAT_ITEM_UGC_VERSUS_ANY";
					case joaat("CONSUMABLE_BIG_GAME_MEAT_WILD_MINT_COOKED"):
						return "STAT_ITEM_CONSUMABLE_BIG_GAME_MEAT_WILD_MINT_COOKED";
					case 1934214136:
						return "STAT_ITEM_FEE_MEAL_CAMP_STEW_DAILY_2";
					case joaat("NET_PLAYER_ABILITY__SLOW_AND_STEADY"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__SLOW_AND_STEADY";
					case joaat("AT_DOG_LAB"):
						return "STAT_ITEM_AT_DOG_LAB";
					case joaat("CLOTHING_HL_PLAYER_COAT_026_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_COAT_026_1";
					case 1940225710:
						return "STAT_ITEM_AT_BUCK_MPLEGENDARY_MUD_RUNNER";
					case joaat("CLOTHING_HL_PLAYER_HAT_059_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_059_1";
					case 1942029925:
						return "STAT_ITEM_ABILITY_CARD_RANK_03";
					case joaat("CLOTHING_HL_PLAYER_BOOT_050_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_BOOT_050_1";
					case joaat("AT_PIGEON"):
						return "STAT_ITEM_AT_PIGEON";
					case joaat("RAGE_P2_3"):
						return "STAT_ITEM_SHOP_STR_WELCOME_CENTER";
					case joaat("AMMO_PISTOL"):
						return "STAT_ITEM_AMMO_PISTOL";
					case joaat("STEALTH"):
						return "STAT_ITEM_STEALTH";
					case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE"):
						return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE";
					case joaat("MEDIUM"):
						return "STAT_ITEM_MEDIUM";
					case joaat("BIRDS_OF_PREY"):
						return "STAT_ITEM_BIRDS_OF_PREY";
					case 1962230674:
						return "STAT_ITEM_ROLE_CHALLENGES_COMPLETED";
					case joaat("GUN_FOR_HIRE_ENEMY"):
						return "STAT_ITEM_GUN_FOR_HIRE_ENEMY";
					case joaat("NET_PLAYER_ABILITY__WATCH_AND_LEARN"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__WATCH_AND_LEARN";
					case 1968750441:
						return "STAT_ITEM_SHOP_HEN_HARRIET";
					case joaat("LEGENDARY_BOUNTY_MISSION_03"):
						return "STAT_ITEM_LEGENDARY_BOUNTY_MISSION_03";
					case joaat("HORSEBOAT"):
						return "STAT_ITEM_HORSEBOAT";
					case joaat("ANIMALS"):
						return "STAT_ITEM_ANIMALS";
					case joaat("POKER_STRAIGHT"):
						return "STAT_ITEM_POKER_STRAIGHT";
					case joaat("NET_BEAT_RIVAL_COLLECTOR"):
						return "STAT_ITEM_NET_BEAT_RIVAL_COLLECTOR";
					case joaat("HERB_OLEANDER_SAGE"):
						return "STAT_ITEM_HERB_OLEANDER_SAGE";
					case joaat("CI_TAG_LONG_BARRELED_SIDEARM"):
						return "STAT_ITEM_CI_TAG_LONG_BARRELED_SIDEARM";
					case joaat("NET_BEAT_DUEL"):
						return "STAT_ITEM_NET_BEAT_DUEL";
					case joaat("GFH_ASSASSINATION_PLAYER"):
						return "STAT_ITEM_GFH_ASSASSINATION_PLAYER";
					case joaat("UGC_SERIES"):
						return "STAT_ITEM_UGC_SERIES";
					case joaat("MPPLY_DISRUPTIVE_BEHAVIOR"):
						return "STAT_ITEM_MPPLY_DISRUPTIVE_BEHAVIOR";
					case joaat("HORSE_CORE_DRAINED"):
						return "STAT_ITEM_HORSE_CORE_DRAINED";
					case joaat("FETCH_BOUNTY_TIMED_TARGET"):
						return "STAT_ITEM_FETCH_BOUNTY_TIMED_TARGET";
					case joaat("RV_SCHFLD_GOLDEN"):
						return "STAT_ITEM_RV_SCHFLD_GOLDEN";
					case joaat("FETCH_DYNAMIC_ESCORT"):
						return "STAT_ITEM_FETCH_DYNAMIC_ESCORT";
					case joaat("AT_ROBIN"):
						return "STAT_ITEM_AT_ROBIN";
					case joaat("MPPS_MOST_TOMAHAWKS_USED"):
						return "STAT_ITEM_MPPS_MOST_TOMAHAWKS_USED";
					case joaat("SHOP_CLM_GUNSMITH"):
						return "STAT_ITEM_SHOP_CLM_GUNSMITH";
					case joaat("ON_WATER"):
						return "STAT_ITEM_ON_WATER";
					case joaat("AT_SNAKE_NORTHERN"):
						return "STAT_ITEM_AT_SNAKE_NORTHERN";
					case 2036219956: /* GXTEntry: "Huntsman Accessory" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_004_1";
					case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
						return "STAT_ITEM_CONSUMABLE_POTENT_HERBIVORE_BAIT";
					case joaat("PISTOL"):
						return "STAT_ITEM_PISTOL";
					case joaat("DROWN"):
						return "STAT_ITEM_DROWN";
					case joaat("MP_TUTORIAL_GVO_OUTLAW_3_GFH_GIVER_UNLOCKED"):
						return "STAT_ITEM_MP_TUTORIAL_GVO_OUTLAW_3_GFH_GIVER_UNLOCKED";
					case joaat("NET_PLAYER_ABILITY__THE_ETERNAL_FLAME"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__THE_ETERNAL_FLAME";
					case joaat("MPPS_LONG_RANGE_KILLS"):
						return "STAT_ITEM_MPPS_LONG_RANGE_KILLS";
					case joaat("FETCH_TRADER_CAMP_RAID"):
						return "STAT_ITEM_FETCH_TRADER_CAMP_RAID";
					case joaat("HERB_ACUNAS_STAR_ORCHID"):
						return "STAT_ITEM_HERB_ACUNAS_STAR_ORCHID";
					case joaat("ML_UNARMED"):
						return "STAT_ITEM_ML_UNARMED";
					case joaat("CONSUMABLE_PLUMP_BIRD_COOKED"):
						return "STAT_ITEM_CONSUMABLE_PLUMP_BIRD_COOKED";
					case joaat("AT_CHICKEN"):
						return "STAT_ITEM_AT_CHICKEN";
					case joaat("CONSUMABLE_PRIME_BEEF_WILD_MINT_COOKED"):
						return "STAT_ITEM_CONSUMABLE_PRIME_BEEF_WILD_MINT_COOKED";
					case joaat("WALLACE_STATION_BOUNTY_BOARD"):
						return "STAT_ITEM_WALLACE_STATION_BOUNTY_BOARD";
					case 2067040192: /* GXTEntry: "Pioneer Accessory" */
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_000_005_1";
					case joaat("NET_PLAYER_ABILITY__LANDONS_PATIENCE"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__LANDONS_PATIENCE";
					case joaat("HORSE_FED_MUSHROOM"):
						return "STAT_ITEM_HORSE_FED_MUSHROOM";
					case joaat("MP_FETCH_LAST_TARGETED_BY_PLAYER_BOUNTY_HUNTER_TIMESTAMP"):
						return "STAT_ITEM_MP_FETCH_LAST_TARGETED_BY_PLAYER_BOUNTY_HUNTER_TIMESTAMP";
					case joaat("AMMO_THROWING_KNIVES_POISON"):
						return "STAT_ITEM_AMMO_THROWING_KNIVES_POISON";
					case joaat("FETCH_MOONSHINE_BOOTLEGGER_INTIMIDATION"):
						return "STAT_ITEM_FETCH_MOONSHINE_BOOTLEGGER_INTIMIDATION";
					case joaat("MPPS_FURTHEST_TARGET_HIT"):
						return "STAT_ITEM_MPPS_FURTHEST_TARGET_HIT";
					case joaat("WILD_ANIMAL"):
						return "STAT_ITEM_WILD_ANIMAL";
					case joaat("FETCH_GFH_ON_THE_HUNT"):
						return "STAT_ITEM_FETCH_GFH_ON_THE_HUNT";
					case joaat("SHOP_STR_BUTCHER"):
						return "STAT_ITEM_SHOP_STR_BUTCHER";
					case joaat("SHOP_BLU_TRAVELLING_SALESMAN"):
						return "STAT_ITEM_SHOP_BLU_TRAVELLING_SALESMAN";
					case joaat("FME_THEMED_SUPPLY_TRAIN"):
						return "STAT_ITEM_FME_THEMED_SUPPLY_TRAIN";
					case joaat("AT_LOON_PACIFIC"):
						return "STAT_ITEM_AT_LOON_PACIFIC";
					case joaat("CONSUMABLE"):
						return "STAT_ITEM_CONSUMABLE";
					case joaat("NET_PLAYLIST_ADVERSARY_MEDIUM"):
						return "STAT_ITEM_NET_PLAYLIST_ADVERSARY_MEDIUM";
					case joaat("ALLIGATOR_TOOTH"):
						return "STAT_ITEM_ALLIGATOR_TOOTH";
					case joaat("CLOTHING_HL_PLAYER_GLOVES_006_2"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_GLOVES_006_2";
					case joaat("HORSE_DB"):
						return "STAT_ITEM_HORSE_DB";
					case joaat("MISSIONS_CHP2"):
						return "STAT_ITEM_MISSIONS_CHP2";
					case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN"):
						return "STAT_ITEM_PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN";
					case joaat("AT_EAGLE"):
						return "STAT_ITEM_AT_EAGLE";
					case joaat("HORSE_EQUIPMENT_CHARRO_01_SPECIAL_NEW_SADDLE_000"):
						return "STAT_ITEM_HORSE_EQUIPMENT_CHARRO_01_SPECIAL_NEW_SADDLE_000";
					case joaat("DISTURBANCE"):
						return "STAT_ITEM_DISTURBANCE";
					case joaat("CLOTHING_HL_PLAYER_HAT_062_1"):
						return "STAT_ITEM_CLOTHING_HL_PLAYER_HAT_062_1";
					case joaat("AT_BUFFALO_TATANKA"):
						return "STAT_ITEM_AT_BUFFALO_TATANKA";
					case joaat("ONE_SHOT_KILLS_PLAYERS"):
						return "STAT_ITEM_ONE_SHOT_KILLS_PLAYERS";
					case joaat("PV_CHALLENGE_FLYING_BIRDS"):
						return "STAT_ITEM_PV_CHALLENGE_FLYING_BIRDS";
					case joaat("AMMO_22"):
						return "STAT_ITEM_AMMO_22";
					case joaat("SHOP_HSO_HORSE_TRAINER"):
						return "STAT_ITEM_SHOP_HSO_HORSE_TRAINER";
					case joaat("COCAINE_GUM"):
						return "STAT_ITEM_COCAINE_GUM";
					case joaat("MISSION_COOP_GVO_GUNSLINGER_1"):
						return "STAT_ITEM_MISSION_COOP_GVO_GUNSLINGER_1";
					case joaat("NET_PLAYER_ABILITY__OUTLAWS_CHARM"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__OUTLAWS_CHARM";
					case joaat("UNARMED_ASSAULT"):
						return "STAT_ITEM_UNARMED_ASSAULT";
					case joaat("NET_PLAYER_ABILITY__SHARPSHOOTER"):
						return "STAT_ITEM_NET_PLAYER_ABILITY__SHARPSHOOTER";
					case joaat("MPPS_MOST_REVIVED"):
						return "STAT_ITEM_MPPS_MOST_REVIVED";
					case joaat("UGC_DM_WEAPON_OF_CHOICE"):
						return "STAT_ITEM_UGC_DM_WEAPON_OF_CHOICE";
					case 2137149309:
						return "STAT_ITEM_UPGRADE_PCC_GRNDCOVERCOW_01";
					case joaat("SHOP_BVH_HORSE_TRAINER"):
						return "STAT_ITEM_SHOP_BVH_HORSE_TRAINER";
					case joaat("RP_EVANS"):
						return "STAT_ITEM_RP_EVANS";
					case 2145506837:
						return "STAT_ITEM_ANIMAL_TRANSFORMATION_CRITTER";
					case joaat("UGC_VERSUS_PROTECT"):
						return "STAT_ITEM_UGC_VERSUS_PROTECT";
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

void func_312(int iParam0)
{
	var uVar0;
	bool bVar1;

	if (FLOCK::_0xF8B48A361DC388AE(iParam0) != 2)
	{
		DEBUG::_0x4DC69742196F818A(40, 82, "PAUSE_MENU_RESOLVE_LEGENDARY_ANIMAL_NAME: != ARL_Legendary for ped with model - ", func_205(ENTITY::GET_ENTITY_MODEL(iParam0), 0));
		return;
	}
	bVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0, &uVar0);
	if (bVar1 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 82, "PAUSE_MENU_RESOLVE_LEGENDARY_ANIMAL_NAME: GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY failed for ped with model - ", func_205(ENTITY::GET_ENTITY_MODEL(iParam0), 0));
	}
	else if (!PLAYER::_0x354F689C4FFAAB37(bVar1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 82, "PAUSE_MENU_RESOLVE_LEGENDARY_ANIMAL_NAME: GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP is false and animal is legendary, setting eAnimalStatItem as discovered - ", UNK_0x4379B6FA65D55295(bVar1));
		PLAYER::_0x7C32191D9FB2BDEA(bVar1);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(40, 82, "PAUSE_MENU_RESOLVE_LEGENDARY_ANIMAL_NAME: GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP is TRUE and animal is legendary, eAnimalStatItem already discovered - ", UNK_0x4379B6FA65D55295(bVar1));
	}
}

void func_313(int iParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	char* sVar0;
	int iVar1;

	DEBUG::_0xF0783374333FD8CE(680, 82, "PAUSE_MENU_UPDATE_ANIMAL_MAP_DISCOVERY_WITHOUT_PED: eAnimalStatItem - ", func_311(iParam0, 0), ", eAnimalModel - ", func_205(bParam1, 0));
	sVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = sVar0;
	if (iVar1 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
		DEBUG::_0xF0783374333FD8CE(8, 82, "PAUSE_MENU_UPDATE_ALLIGATOR_MAP_DISCOVERY: toggling this map sketch on - ", sVar0);
	}
	if (bParam5 && joaat("AT_HORSE") != iParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 82, "PAUSE_MENU_UPDATE_ANIMAL_MAP_DISCOVERY_WITHOUT_PED: calling COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME");
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, bParam6);
	}
}

int func_314(bool bParam0, bool bParam1)
{
	if (!func_298(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_315(bParam1, 0), " for bundle ", func_327(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_315(bool bParam0, int iParam1)
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

var func_316(bool bParam0, int iParam1)
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

char* func_317(int iParam0, int iParam1)
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

struct<4> func_318(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_241(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_301(joaat("CHARACTER"), func_328(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_301(joaat("CHARACTER"), func_328(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_301(joaat("CHARACTER"), func_328(), -1591664384, bParam0);
}

bool func_319(bool bParam0, bool bParam1)
{
	if (func_235(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_329();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_320(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_330(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_321(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_331(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_322(bool bParam0)
{
	int iVar0;

	iVar0 = func_241(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_301(271701509, func_318(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_301(271701509, func_318(bParam0), 12999093, 0);
}

bool func_323(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_235(bParam0);
	if (bVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(bVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bVar1, iVar2, &bVar0))
		{
			if (func_332(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_324(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_333(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_325(struct<2> Param0)
{
	if (!func_334(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_335(Param0))
	{
		return false;
	}
	return true;
}

void func_326(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_327(bool bParam0, int iParam1)
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

struct<4> func_328()
{
	struct<4> Var0;

	return Var0;
}

bool func_329()
{
	return (func_336(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_337(func_301(joaat("WARDROBE"), func_318(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_330(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_138(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_240(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_233(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_233(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_291(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_301(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_233(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_241(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_233(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_241(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_233(bParam0, 0));
	}
	return iVar0;
}

bool func_331(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_241(0);
	*iParam1 = { func_301(bParam0, func_294(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_233(bParam0, 0), " eSlot: ", func_291(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_233(bParam0, 0));
		return false;
	}
	return true;
}

bool func_332(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(bParam1, joaat("DEFAULT")) == -1925887917)
		{
			DEBUG::_0x4DC69742196F818A(8, 158, "[ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_WITH_SCRIPT_VALIDATION] SLOTID_WEAPON_LONGARM_WRAP_TINT blocked on weapon item");
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, bParam1, bParam2);
}

bool func_333(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_241(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_233(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_291(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_334(int iParam0)
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

int func_335(int iParam0)
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

int func_336(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_338(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_241(bParam1), bParam0, bParam3);
}

int func_337(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_339(&uParam0, bParam4, bParam5, iParam6);
}

bool func_338(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_339(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_340(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_233(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_340(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_241(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_291(bParam1, 0));
		return false;
	}
	if (!func_333(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_291(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_233(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_291(bParam1, 0));
	return true;
}

