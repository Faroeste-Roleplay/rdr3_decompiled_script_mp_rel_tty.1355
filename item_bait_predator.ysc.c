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
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	struct<45> Var0;

	Var0.f_5 = 1;
	Var0.f_9 = 1;
	Var0.f_39 = 37709;
	Var0.f_1 = ScriptParam_0.f_1;
	Var0.f_2 = ScriptParam_0.f_3;
	Var0.f_3 = ScriptParam_0.f_4;
	Global_1940463.f_8 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "Generic Item - HAS_FORCE_CLEANUP_OCCURRED");
		func_1(&Var0, 5);
	}
	if (!func_2(Var0.f_1, 1))
	{
		func_3(&Var0);
	}
	PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	func_4(&Var0);
	while (true)
	{
		if (func_5(&Var0))
		{
			func_1(&Var0, 5);
		}
		if (!Var0.f_5)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (PED::IS_PED_ON_MOUNT(Global_33) || PED::_0x1D46B417F926D34D(Global_33))
			{
				func_1(&Var0, 5);
			}
		}
		switch (func_6(&Var0))
		{
			case 0:
				if (func_7(&Var0))
				{
					func_8(&Var0);
				}
				Var0.f_43 = func_9(Global_33, 0);
				Var0.f_44 = func_10(Var0.f_43);
				if (Global_1940296.f_41 == Var0.f_1 || Global_1940296.f_42 == Var0.f_1)
				{
					if (!Global_1940410.f_6)
					{
						if ((Var0.f_43 != joaat("WEAPON_UNARMED") && Var0.f_44 != joaat("GROUP_PISTOL")) && Var0.f_44 != joaat("GROUP_REVOLVER"))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
						}
						else
						{
							func_1(&Var0, 1);
						}
					}
				}
				break;
			case 1:
				if (func_7(&Var0))
				{
					func_8(&Var0);
				}
				func_11(&Var0);
				func_1(&Var0, 2);
				break;
			case 2:
				if (func_7(&Var0))
				{
					func_8(&Var0);
				}
				if (func_12(&Var0))
				{
					func_13(0);
					func_1(&Var0, 3);
				}
				break;
			case 3:
				if (func_7(&Var0))
				{
					if (!Var0.f_3)
					{
						func_14(&Var0);
						if (Var0.f_13 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Var0.f_42))
						{
							func_15(&Var0);
						}
						func_16(&Var0);
						func_8(&Var0);
					}
					else
					{
						func_8(&Var0);
						func_1(&Var0, 4);
					}
				}
				if (((Var0.f_14 && TASK::PED_HAS_USE_SCENARIO_TASK(Global_33)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_33, Var0.f_17, Var0.f_19, 1)) || (Var0.f_13 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Var0.f_42, false)))
				{
					func_17(Var0.f_1, 1, 0, 562618531);
					func_18(&Var0);
					func_1(&Var0, 4);
				}
				break;
			case 4:
				if (func_7(&Var0))
				{
					func_8(&Var0);
				}
				if (!func_19(&Var0))
				{
					func_1(&Var0, 5);
					HUD::_0xBFFF81E12A745A5F();
				}
				break;
			case 5:
				if (func_7(&Var0))
				{
					func_8(&Var0);
				}
				if (func_20(&Var0))
				{
					func_3(&Var0);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(680, 157, "SET_GENERIC_ITEM_STATE: moving from ", func_21(func_6(uParam0)), " to ", func_21(iParam1));
	*uParam0 = iParam1;
	func_22(uParam0);
}

bool func_2(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_24(bParam0);
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
			if (!func_25(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_26(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_27(bParam0, 0, 0, 0) >= iParam1;
}

void func_3(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (uParam0->f_9)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_4));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		}
	}
	func_13(1);
	if (uParam0->f_14)
	{
		TASK::CLEAR_PED_TASKS(Global_33, false, false);
	}
	if (uParam0->f_13)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_42))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_42);
		}
	}
	Global_1940296.f_41 = 0;
	Global_1940296.f_42 = 0;
	Global_1940463.f_8 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "SETUP_GENERIC_ITEM_CUSTOM: Called!");
	uParam0->f_12 = 1;
	uParam0->f_14 = 1;
	if (uParam0->f_1 == joaat("CONSUMABLE_PREDATOR_BAIT"))
	{
		uParam0->f_15 = joaat("WORLD_PLAYER_PLACE_BAIT_NORMAL");
	}
	else
	{
		uParam0->f_15 = joaat("WORLD_PLAYER_PLACE_BAIT_POTENT");
	}
	uParam0->f_5 = 0;
}

bool func_5(var uParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return true;
	}
	if (Global_1940410.f_6)
	{
		return true;
	}
	bVar0 = false;
	if (func_24(uParam0->f_1) == joaat("CONSUMABLE"))
	{
		if ((Global_1940296.f_40 != uParam0->f_1 && Global_1940296.f_41 != uParam0->f_1) && Global_1940296.f_42 != uParam0->f_1)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (uParam0->f_41 == 0)
		{
			uParam0->f_41 = MISC::GET_GAME_TIMER();
		}
		if (uParam0->f_41 + 150 < MISC::GET_GAME_TIMER())
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "SHOULD_GENERIC_ITEM_SCRIPT_CLEANUP - Item not highlighted or used");
			return true;
		}
	}
	else
	{
		uParam0->f_41 = 0;
	}
	return false;
}

int func_6(var uParam0)
{
	return *uParam0;
}

bool func_7(var uParam0)
{
	return uParam0->f_8;
}

void func_8(var uParam0)
{
	uParam0->f_8 = 0;
}

var func_9(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_10(int iParam0)
{
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		return joaat("GROUP_PISTOL");
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		return joaat("GROUP_REVOLVER");
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iParam0))
	{
		return joaat("GROUP_REPEATER");
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		return joaat("GROUP_RIFLE");
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		return joaat("GROUP_SHOTGUN");
	}
	else if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
	{
		return joaat("GROUP_SNIPER");
	}
	return 0;
}

void func_11(var uParam0)
{
	if (func_28(uParam0->f_16))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_16, false);
		DEBUG::_0xF0783374333FD8CE(40, 157, "GENERIC_ITEM_REQUEST_ASSETS: requesting the model asset: ", UNK_0x1B7C373FB4E76B85(uParam0->f_16));
	}
	if (func_29(uParam0->f_17))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_17);
		DEBUG::_0xF0783374333FD8CE(40, 157, "VIGNETTE_REQUEST_ASSETS: requesting the anim_dict: ", uParam0->f_17);
	}
	if (uParam0->f_13 && func_30(&(uParam0->f_23)))
	{
		uParam0->f_42 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_23), 0, &(uParam0->f_31), false, true);
		DEBUG::_0xF0783374333FD8CE(2696, 157, "VIGNETTE_REQUEST_ASSETS: created anim scene: ", uParam0->f_42, " (", &(uParam0->f_23), ")");
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_42);
		DEBUG::_0xF0783374333FD8CE(2696, 157, "VIGNETTE_REQUEST_ASSETS: loading anim scene: ", uParam0->f_42, " (", &(uParam0->f_23), ")");
	}
}

bool func_12(var uParam0)
{
	if (func_28(uParam0->f_16))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 157, "GENERIC_ITEM_HAVE_ASSETS_LOADED: Model not currently loaded: ", UNK_0x1B7C373FB4E76B85(uParam0->f_16));
			return false;
		}
	}
	if (func_29(uParam0->f_17))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_17))
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 157, "GENERIC_ITEM_HAVE_ASSETS_LOADED: Anim dict not currently loaded: ", uParam0->f_17);
			return false;
		}
	}
	if (uParam0->f_13 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_42, true, false))
		{
			DEBUG::_0x1B08D1EB9D8C4931(2696, 157, "GENERIC_ITEM_HAVE_ASSETS_LOADED: Anim scene not currently loaded: ", uParam0->f_42, " (", &(uParam0->f_23), ")");
			return false;
		}
	}
	if (Global_1940296.f_41 != uParam0->f_1 && func_24(uParam0->f_1) == joaat("CONSUMABLE"))
	{
		return false;
	}
	return true;
}

void func_13(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(136, 157, "SET_SATCHEL_ENABLED(", bParam0, ")");
	if (!bParam0)
	{
		func_31(0, 0);
	}
	Global_1940463.f_3 = bParam0;
}

void func_14(var uParam0)
{
	vector3 vVar0;

	if (!Global_1940410.f_6 && func_28(uParam0->f_16))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_33, 0f, 0f, -10f) };
		uParam0->f_4 = OBJECT::CREATE_OBJECT(uParam0->f_16, vVar0, false, true, false, false, true);
		DEBUG::_0xF0783374333FD8CE(136, 157, "GENERIC_ITEM_CREATE_ITEM: Created item model, idx = ", uParam0->f_4, "!");
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_33, PED::GET_PED_BONE_INDEX(Global_33, uParam0->f_39), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
}

void func_15(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "READY_ANIM_SCENE_FOR_GENERIC_ITEM_USE_CUSTOM: Called!");
}

void func_16(var uParam0)
{
	if (uParam0->f_14)
	{
		if (uParam0->f_15 != 0)
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(Global_33, uParam0->f_15, 0, true, 0, -1f, false);
		}
		return;
	}
	if (uParam0->f_13)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_42))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_USE_ANIM: START_ANIM_SCENE!");
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_42);
		}
		return;
	}
	if (!func_29(uParam0->f_17))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_USE_ANIM: Attempting to start an animation with an invalid nim dict!");
		return;
	}
	if (!Global_1940410.f_6 && (uParam0->f_12 || ENTITY::DOES_ENTITY_EXIST(uParam0->f_4)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_USE_ANIM: Starting animation playback!");
		if (!uParam0->f_12 && func_32(uParam0->f_18))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_USE_ANIM: PLAY_ENTITY_ANIM!");
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_4, uParam0->f_18, uParam0->f_17, 16f, false, true, false, 0f, 0);
		}
		if (func_32(uParam0->f_19))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_USE_ANIM: TASK_PLAY_ANIM!");
			TASK::TASK_PLAY_ANIM(Global_33, uParam0->f_17, uParam0->f_19, 16f, -4f, -1, 67108880, 0f, false, 4096, false, uParam0->f_21, false);
		}
	}
}

int func_17(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	DEBUG::_0xF0783374333FD8CE(648, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Attempting to remove: ", iParam1, " of ", func_33(bParam0, 0));
	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Attempting to remove an invalid item from the player's inventory!");
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_34(bParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Updating REMOVE_REASON_DEFAULT to REMOVE_REASON_USED for ", func_33(bParam0, 0));
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_35(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Player doesn't have enough ammo");
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_36(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_2(bParam0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Player doesn't have item: ", func_33(bParam0, 0), " in satchel!");
		return 0;
	}
	Var5 = { func_37(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_27(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_27(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_17(bParam0, func_27(bParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Unhandled Stat Decrement!");
		}
	}
	if (func_24(bParam0) == joaat("WEAPON"))
	{
		if (!func_38(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_39(bParam0, iParam1, iParam3, bParam2, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Failed to remove item: ", func_33(bParam0, 0));
		return 0;
	}
	else
	{
		Var7 = { func_40(bParam0, 0, 0) };
		if (func_41(0) && Var7.f_4 == 1084182731)
		{
			func_42(1, 0, 0);
		}
		DEBUG::_0xF0783374333FD8CE(40, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Removed item: ", func_33(bParam0, 0));
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940296.f_21 = 0;
	}
	if (!func_41(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_36(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_18(var uParam0)
{
	if (!func_29(uParam0->f_17))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_SET_ANIM_FILTER: Attempting to start an animation with an invalid anim dict!");
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22) && ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_4, uParam0->f_17, uParam0->f_18, 1))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_SET_ANIM_FILTER: SET_ANIM_FILTER!");
			TASK::_0x87B66D77D545DB66(uParam0->f_4, uParam0->f_22, 0, 1);
		}
	}
}

bool func_19(var uParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1940410.f_6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: Player is dead, item use stopped!");
		return false;
	}
	iVar0 = 1;
	if (uParam0->f_3)
	{
		iVar0 = 2;
	}
	if (func_43(uParam0) && !uParam0->f_6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: GENERIC_ITEM_HAS_BEEN_CONSUMED_IN_ANIM_SCENE returned TRUE!");
		uParam0->f_6 = 1;
		func_44(uParam0->f_1);
		func_45(uParam0);
		func_46(uParam0->f_1, 562618531);
		HUD::_0x2F7BB105144ACF30();
	}
	if ((((!uParam0->f_14 && !uParam0->f_13) && func_47(Global_33, uParam0->f_17, uParam0->f_19, 0, iVar0)) || (uParam0->f_14 && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))) || (uParam0->f_13 && func_48(Global_33, uParam0->f_42)))
	{
		if (!uParam0->f_10)
		{
			if (func_32(uParam0->f_20))
			{
				DEBUG::_0xF0783374333FD8CE(40, 157, "GENERIC_ITEM_START_USE_ANIM: SECOND ANIM TASK_PLAY_ANIM! = ", uParam0->f_20);
				TASK::TASK_PLAY_ANIM(Global_33, uParam0->f_17, uParam0->f_20, 1000f, -4f, -1, 67108880, 0f, false, 4096, false, uParam0->f_21, false);
				uParam0->f_10 = 1;
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_START_USE_ANIM: SECOND ANIM null");
				return false;
			}
		}
		else if (func_47(Global_33, uParam0->f_17, uParam0->f_20, 0, iVar0))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: Done using item!");
			return false;
		}
	}
	func_49(uParam0);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("OBJECTEXCHANGE")) && !uParam0->f_6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: Consumed Hash caught!");
		uParam0->f_6 = 1;
		func_44(uParam0->f_1);
		func_45(uParam0);
		func_46(uParam0->f_1, 562618531);
		HUD::_0x2F7BB105144ACF30();
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("ATTACH")) && !uParam0->f_7)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: Attach Hash caught!");
		uParam0->f_7 = 1;
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, true);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("DETACH")) && uParam0->f_7)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: Detach Hash caught!");
		uParam0->f_7 = 0;
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 303244851))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: Equip Knife Hash caught!");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_MELEE_KNIFE"), true, 0, false, false);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1971578095))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_IN_USE: Stow Knife Hash caught!");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2007785590))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
		if (uParam0->f_39 == 37709)
		{
			iVar1 = 7966;
		}
		else
		{
			iVar1 = 37709;
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_33, PED::GET_PED_BONE_INDEX(Global_33, iVar1), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, false, false);
	}
	return true;
}

bool func_20(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "PROCESS_GENERIC_ITEM_CLEANUP: Called!");
	return true;
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GENERIC_ITEM_STATE_PENDING_INIT";
		case 1:
			return "GENERIC_ITEM_STATE_INIT";
		case 2:
			return "GENERIC_ITEM_STATE_STREAMING";
		case 3:
			return "GENERIC_ITEM_STATE_USE";
		case 4:
			return "GENERIC_ITEM_STATE_UPDATE";
		case 5:
			return "GENERIC_ITEM_STATE_CLEANUP";
	}
	return "GENERIC_ITEM_STATE_INVALID";
}

void func_22(var uParam0)
{
	uParam0->f_8 = 1;
}

bool func_23(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_24(bool bParam0)
{
	vector3 vVar0;

	if (!func_23(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_25(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_35(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_50("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_51(&Var4, iVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", iVar3);
			}
			else if (!func_52(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_33(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_33(Var4.f_4, 0), " that uses the ammo - ", func_33(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_53(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_33(Var4.f_4, 0), " that uses the ammo - ", func_33(bParam0, 0));
					return true;
				}
			}
			iVar3++;
		}
		func_53(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_33(bParam0, 0));
	return false;
}

bool func_26(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_23(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_54(bParam0);
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
	iVar1 = func_55(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_56(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_33(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_57(bParam0);
	iVar2 = func_56(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_33(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_27(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_33(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_24(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_35(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_58(bParam0, 0);
	}
	if (func_59(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_60(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_61(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_33(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_60(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_33(bParam0, 0));
	return iVar0;
}

bool func_28(int iParam0)
{
	return iParam0 != 0;
}

bool func_29(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

bool func_30(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

void func_31(bool bParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(136, 157, "FORCE_SATCHEL_ACTIVE_STATE(", bParam0, ")");
	if (bParam0)
	{
		Global_1940463 = 1;
		g_satchelData.iForcedUIActivity = iParam1;
	}
	else
	{
		Global_1940463 = 2;
	}
}

bool func_32(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

var func_33(bool bParam0, int iParam1)
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

bool func_34(bool bParam0)
{
	return func_24(bParam0) == joaat("CONSUMABLE");
}

bool func_35(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_33(bParam0, 0));
		return false;
	}
	iVar0 = func_24(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_62(bParam0, 1399091007))
	{
		func_63(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_33(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

void func_36(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Invalid item!");
		return;
	}
	else if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: We silently adding this to player - Handheld Catalog.");
		return;
	}
	else if (iParam1 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Quantity of change was 0, ignoring!");
		return;
	}
	if (!func_64() || bParam6)
	{
		func_65(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_66(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been gotten.");
	}
	else if (bParam3 || bParam4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been sold or given.");
		StringCopy(&cVar2, func_66(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_67(bParam0, 2097152))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been read.");
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been used.");
		bVar0 = true;
	}
	iVar6 = func_24(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((((((((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER")) && bParam0 != joaat("AMMO_HATCHET_HUNTER")) && bParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && bParam0 != joaat("AMMO_POISONBOTTLE")) && bParam0 != joaat("AMMO_MOONSHINEJUG_MP")) && !func_62(bParam0, -1982291600)) && !func_62(bParam0, 137764179))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_54(bParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_68(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
		DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find UI Data for: ", func_33(bParam0, 0), " | Using _PLACEHOLDER texture");
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find a valid texture for item ", func_33(bParam0, 0));
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_62(bParam0, 474910316))
	{
		sVar17 = func_69(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_62(bParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_70(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	bVar18 = func_71(bParam0, 0);
	if ((func_72(iVar12) && func_62(bParam0, -306684263)) && bVar18 != 0)
	{
		bVar18 = func_73(bParam0);
	}
	else if (func_24(bParam0) == joaat("CLOTHING"))
	{
		bVar19 = func_74(bParam0);
		if (func_23(bVar19, 0))
		{
			bVar18 = func_71(bVar19, 0);
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 158, "[ADD_QUEUED_ITEM_DISPLAY] - Failed to override clothing item display name with style item display name!");
	}
	if (func_75(bParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_76(bParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_77(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, bVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -1839668642 && bParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && bParam0 != 1326838792) && bParam0 != -230310728) || ((iVar12 == 231148558 && bParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && bParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && bParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && bParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_78(bParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_79(bParam0, &cVar22))
		{
			sVar21 = func_81(func_80(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	DEBUG::_0xF0783374333FD8CE(174760, 158, "ADD_QUEUED_ITEM_DISPLAY: Adding - ", func_33(bParam0, 0), " with color ", func_82(iVar13, 0), " sound ", sVar14, " set ", sVar15);
	func_83(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_37(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "GET_ITEMS_GROUP_STAT_HASH: attempting to process an invalid item!");
		return Var0;
	}
	if (func_62(bParam0, -305066475))
	{
		if (func_84() == -1)
		{
			if (func_62(bParam0, -537818634))
			{
				return func_85(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_85(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_62(bParam0, -537818634))
	{
		return func_85(joaat("MEDICINE_ITEMS"));
	}
	if (func_62(bParam0, 2084895747))
	{
		return func_85(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_38(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Tried to remove an invalid weapon: ", func_33(bParam0, 0));
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(166056, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - ", func_33(bParam0, 0), ", iAmountToRemove = ", iParam1, ", bCarriedOnly = ", bParam2, ", removeReason = ", func_86(iParam3, 0));
	Var0 = { func_87(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_89(&Var0, func_88(0));
	}
	if (!func_90(&Var0, &iVar14, &iVar15, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Failed to create item collection!");
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_51(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_91(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_53(iVar14);
	DEBUG::_0xF0783374333FD8CE(648, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Removed ", iVar36, " of weapon ", func_33(bParam0, 0));
	if (iVar36 < iParam1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Requested to remove ", iParam1, " of weapon ", func_33(bParam0, 0), " but there were only ", iVar15);
	}
	return true;
}

bool func_39(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove an invalid item from an inventory!");
		return false;
	}
	if (iParam1 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(2696, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove ", iParam1, " of ", func_33(bParam0, 0), ", must be a non-zero positive amount");
		return false;
	}
	iVar0 = func_59(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_92(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_40(bParam0, bParam4, 0) };
	Var6 = { func_93(bParam0, Var1, Var1.f_4, bParam4) };
	return func_91(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

struct<5> func_40(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_94(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_24(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_33(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_95(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_93(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_88(bParam1) };
			if (bParam2 && func_96(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_97(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_97(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_98(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_99(bParam1) };
			switch (func_54(bParam0))
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
			if (func_100(bParam0, -1823706425))
			{
				Var0 = { func_93(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_100(bParam0, -1483207246))
			{
				Var0 = { func_93(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_93(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_100(bParam0, -1653629781))
			{
				Var0 = { func_93(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_101(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_100(bParam0, -1653629781))
			{
				Var0 = { func_93(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_33(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_33(bParam0, 0), ": ", func_102(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

bool func_41(bool bParam0)
{
	if (func_84() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_60(bParam0));
}

void func_42(int iParam0, bool bParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL SET INVENTORY CHANGED called");
	UNK_0x355E72323AEE83CC(157, 6);
	Global_1940463.f_5 = iParam0;
	Global_1940463.f_37 = iParam2;
	if (bParam1 || (func_103() && iParam2 == 0))
	{
		func_104(1);
		func_105(1);
	}
}

bool func_43(var uParam0)
{
	if (!uParam0->f_13)
	{
		return false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_42, false))
		{
			return true;
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_42, false) && func_106(uParam0->f_42))
		{
			return true;
		}
	}
	return false;
}

void func_44(bool bParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_62(bParam0, 1573112293) || func_62(bParam0, 672467738)) || func_62(bParam0, -550842268))
	{
		bVar37 = true;
	}
	DEBUG::_0x4DC69742196F818A(40, 158, "PROCESS_GENERIC_ITEM_USE - Inventory Item Group - ", func_95(func_24(bParam0), 0));
	if (func_24(bParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam0, &Var0);
		DEBUG::_0xF0783374333FD8CE(168, 158, "PROCESS_GENERIC_ITEM_USE - ", func_33(bParam0, 0), " Num Effects ", Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			DEBUG::_0xF0783374333FD8CE(648, 158, "PROCESS_GENERIC_ITEM_USE - Effect ", iVar29, ":", func_107(Var0.f_1[iVar29], 0));
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2696, 158, "PROCESS_GENERIC_ITEM_USE - Effect ", iVar29, ":", func_107(Var0.f_1[iVar29], 0), " failed to Fillout via ITEMDATABASE_FILLOUT_EFFECT_ID_INFO.");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(25725608, 158, "PROCESS_GENERIC_ITEM_USE - Key ", func_107(Var22, 0), " Enum ID ", func_108(Var22.f_1, 0), " Value ", Var22.f_2, " Time ", Var22.f_3, " unit ", Var22.f_4, " percent ", Var22.f_5);
				if (-943921969 == Var22.f_1)
				{
					fVar30 = func_109(0, Var22.f_2);
					func_110(Var22.f_2);
					bVar39 = true;
				}
				else if (-1104847406 == Var22.f_1)
				{
					fVar31 = func_109(2, Var22.f_2);
					func_111(Var22.f_2, 0);
					bVar38 = true;
				}
				else if (381158954 == Var22.f_1)
				{
					fVar32 = func_109(1, Var22.f_2);
					func_112(Var22.f_2);
				}
				else if (-416929031 == Var22.f_1)
				{
					fVar33 = func_113(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
					func_114(0, fVar33, 1, 1, bVar37);
					bVar39 = true;
				}
				else if (1857353317 == Var22.f_1)
				{
					fVar34 = func_113(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
					func_114(2, fVar34, 1, 1, bVar37);
					bVar38 = true;
				}
				else if (1681823811 == Var22.f_1)
				{
					fVar35 = func_113(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
					func_114(1, fVar35, 1, 1, bVar37);
				}
				else if (2062242710 == Var22.f_1)
				{
					fVar36 = func_115(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_116(19, fVar36, 1, 1);
					bVar39 = true;
				}
				else if (-826379728 == Var22.f_1)
				{
					fVar36 = func_115(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_116(20, fVar36, 1, 1);
					bVar38 = true;
				}
				else if (-1191740624 == Var22.f_1)
				{
					fVar36 = func_115(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_116(18, fVar36, 1, 1);
				}
				else if (1869697234 == Var22.f_1)
				{
					fVar36 = func_115(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_116(0, fVar36, 1, 1);
					bVar39 = true;
				}
				else if (1342237631 == Var22.f_1)
				{
					fVar36 = func_115(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_116(2, fVar36, 1, 1);
					bVar38 = true;
				}
				else if (-1240225157 == Var22.f_1)
				{
					fVar36 = func_115(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_116(1, fVar36, 1, 1);
				}
				else if (-816334026 == Var22.f_1)
				{
					func_117(BUILTIN::TO_FLOAT(Var22.f_2), 1);
				}
			}
			iVar29++;
		}
		if (bVar39 || func_62(bParam0, -537818634))
		{
			func_118(func_85(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_62(bParam0, -1457797660))
		{
			func_118(func_85(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_118(func_85(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		switch (bParam0)
		{
			case -1735850413: /* GXTEntry: "Pickled Egg" */
			case -241345764: /* GXTEntry: "Almonds" */
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_SALOONSNACK_00"), 1);
				DEBUG::_0xF0783374333FD8CE(8, 158, "PROCESS_GENERIC_ITEM_USE - Saloon Snacks");
				break;
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_45(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_33, "bait01", 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 158, "Successfully grabbed bait01, adding attractor");
		if (uParam0->f_1 == joaat("CONSUMABLE_PREDATOR_BAIT"))
		{
			if (Global_1959052.f_1)
			{
				iVar1 = 5;
			}
			else
			{
				iVar1 = 2;
			}
		}
		else if (Global_1959052.f_1)
		{
			iVar1 = 6;
		}
		else
		{
			iVar1 = 3;
		}
		EVENT::_0x36D0F2BA2C0D9BDE(iVar0, iVar1);
		OBJECT::_0xCAAF2BCCFEF37F77(iVar0, 4);
	}
	func_119(367, 0);
}

void func_46(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_84() == 0)
	{
		bVar0 = func_120(bParam0, -949239683);
		DEBUG::_0xF0783374333FD8CE(10920, 183, "GENERIC_ITEM_DAILY_CHALLENGES ", func_33(bParam0, 0), " with Tag ", func_121(bVar0, 0), " removed with reason ", func_86(iParam1, 0));
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_62(bParam0, -136654233))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_CANNEDGOODSEATEN_00"), 1);
		}
		if ((func_62(bParam0, 1765172170) || 1443104131 == bVar0) || -1919515848 == bVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TOBACCOSMOKEDCHEWED_00"), 1);
		}
		if (func_62(bParam0, 1573112293))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_HERBSTASTED_00"), 1);
		}
		if (func_62(bParam0, -2085281117) && !func_62(bParam0, -1237028043))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_FRESHPRODUCEEATEN_00"), 1);
		}
		if (func_62(bParam0, 200705431))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_DRYGOODSEATEN_00"), 1);
		}
		if (((func_62(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_62(bParam0, -839724752)) || func_62(bParam0, 1264218912)) || bParam0 == joaat("CONSUMABLE_OFFAL"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_MEATEATEN_00"), 1);
		}
		if (func_62(bParam0, -764700608))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TONICOILUSED_00"), 1);
		}
		if ((bParam0 == joaat("CONSUMABLE_CANDY_BAG") || bParam0 == joaat("CONSUMABLE_CHOCOLATE_BAR")) || bParam0 == joaat("CONSUMABLE_PEPPERMINT"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
		}
		if (bParam0 == joaat("CONSUMABLE_COFFEE"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
		}
	}
}

bool func_47(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(680, 157, "GENERIC_ITEM_HAS_ANIM_COMPLETED: sAnimDict: ", sParam1, "; sAnimClip: ", sParam2);
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, iParam4))
	{
		return true;
	}
	if (iParam4 == 2)
	{
		fVar0 = ENTITY::_0x8E46E18AA828334F(iParam0, sParam1, sParam2);
	}
	else
	{
		fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2);
	}
	DEBUG::_0xF0783374333FD8CE(24, 157, "GENERIC_ITEM_HAS_ANIM_COMPLETED: fAnimCurTime: ", fVar0);
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}

int func_48(int iParam0, int iParam1)
{
	vector3 vVar0[24];

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_HAS_ANIM_SCENE_COMPLETED: Player has died");
		return 1;
	}
	if (PED::IS_PED_FALLING(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_HAS_ANIM_SCENE_COMPLETED: Player is falling");
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_HAS_ANIM_SCENE_COMPLETED: Player is in water");
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_HAS_ANIM_SCENE_COMPLETED: Player is ragdolling");
		return 1;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PED::IS_PED_MALE(iParam0))
		{
			StringCopy(&cVar0, "mp_male", 24);
		}
		else
		{
			StringCopy(&cVar0, "mp_female", 24);
		}
		if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar0) && ANIMSCENE::_0xB89FCFF19DAFFF28(iParam1, &cVar0))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_HAS_ANIM_SCENE_COMPLETED: Player has exited anim scene");
		}
	}
	DEBUG::_0xF0783374333FD8CE(392, 157, "GENERIC_ITEM_HAS_ANIM_SCENE_COMPLETED: iAnimSceneID: ", iParam1, "; Phase: ", ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1));
	if (((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1, false) || ANIMSCENE::_0x34A0671BE613D3D0(iParam1)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1, false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_49(var uParam0)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	if (!uParam0->f_14)
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 513836296))
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
		{
			bVar0 = true;
		}
		else
		{
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
			fVar3 = ((fVar1 * fVar1) + (fVar2 * fVar2));
			if (fVar3 >= (0.1f * 0.1f))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		TASK::_0x2D657B10F211C572(Global_33, 0.5f);
		TASK::CLEAR_PED_TASKS(Global_33, false, false);
	}
}

bool func_50(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_60(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_102(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_51(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", iParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool func_52(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_53(int iParam0)
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

int func_54(bool bParam0)
{
	struct<2> Var0;

	if (!func_23(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_55(bool bParam0)
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

int func_56(var uParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_122(iParam1, 0));
	return -1;
}

int func_57(bool bParam0)
{
	int iVar0;

	iVar0 = func_54(bParam0);
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
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_33(bParam0, 0));
	return 0;
}

char[] func_58(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char[] cVar15[8];

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_87(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_89(&Var0, func_88(0));
	}
	if (!func_90(&Var0, &iVar14, &cVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_33(bParam0, 0));
		return 0;
	}
	func_53(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", cVar15, " of item ", func_33(bParam0, 0));
	return cVar15;
}

int func_59(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_124(func_123(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_60(bool bParam0)
{
	if (func_84() == -1)
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

struct<4> func_61(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_40(bParam0, bParam1, 0) };
	return func_93(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_62(bool bParam0, bool bParam1)
{
	if (!func_23(bParam0, 0))
	{
		return func_125(func_123(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_121(bParam1, 0), " for item ", func_33(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

void func_63(bool bParam0, var uParam1, var uParam2)
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

bool func_64()
{
	return !Global_1913655;
}

void func_65(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913655.f_3)
	{
		if ((((Global_1913655.f_4[iVar0 /*6*/] == bParam0 && Global_1913655.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913655.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913655.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913655.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913655.f_4[iVar0 /*6*/].f_1 = (Global_1913655.f_4[iVar0 /*6*/].f_1 + iParam1);
			DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_33(bParam0, 0), " to existing entry ", iVar0);
			return;
		}
		iVar0++;
	}
	if (Global_1913655.f_3 < 19)
	{
		DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_33(bParam0, 0), " to new entry ", Global_1913655.f_3);
		Global_1913655.f_4[Global_1913655.f_3 /*6*/] = bParam0;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_1 = iParam1;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_2 = bParam2;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_3 = bParam3;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_4 = bParam4;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_5 = bParam5;
		Global_1913655.f_3++;
	}
	else
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 162, "ADD_ITEM_TO_DELAYED_QUEUE - too many items have been added to queue = ", Global_1913655.f_3, "; MAX_NUM_QUEUED_ITEMS: ", 20);
		UNK_0x355E72323AEE83CC(162, 6);
	}
}

char* func_66(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_67(bool bParam0, int iParam1)
{
	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "CHECK_ITEM_DATA_ITEM_FLAG - Attempting to check the flag of an invalid item.");
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

bool func_68(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eItem = ", func_33(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eTextureType = ", func_126(iParam2, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - iTextureDictionary = ", iParam3);
	DEBUG::_0x1B08D1EB9D8C4931(8, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - iTextureHash = ", iParam4);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Item Name: ", UNK_0x4379B6FA65D55295(Var3));
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Item Desc: ", UNK_0x4379B6FA65D55295(Var3.f_1));
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @476; //curOff = 154
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with type: ", func_126(Var3.f_2[iVar0 /*3*/].f_2, 0));
					Jump @476; //curOff = 261
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					Jump @476; //curOff = 305
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
					Jump @476; //curOff = 347
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Texture: ", Var3.f_2[iVar0 /*3*/]);
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Type: ", func_126(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to fillout UI data for item ", func_33(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to find texture of type ", func_126(iParam2, 0), " for item ", func_33(bParam0, 0));
	return false;
}

char* func_69(bool bParam0)
{
	if (func_62(bParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_62(bParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_62(bParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_62(bParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_62(bParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_62(bParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_62(bParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_62(bParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_62(bParam0, -352095726) || func_62(bParam0, -2014783736)) || func_62(bParam0, -545064757)) || func_62(bParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_70(bool bParam0)
{
	if (func_62(bParam0, -189374246))
	{
		if (((func_127(bParam0, -1305775593) || func_127(bParam0, 1384151091)) || func_127(bParam0, 2075388272)) || func_127(bParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_62(bParam0, -753854379) || func_62(bParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_71(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_128(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_72(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_73(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_23(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_74(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_129(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_130(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_131(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &bVar14) && func_132(bVar14))
			{
				func_133(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_133(iVar11);
	}
	return false;
}

bool func_75(bool bParam0, bool bParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, -949239683))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_INTERACTION_TAG] Found tag ", func_121(bParam1, 0), " for item ", func_33(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

int func_76(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_23(bParam0, 0) && !func_124(func_123(bParam0), 2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Attempting to get the cost of an invalid item.");
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(680, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Unable to find cost ", func_134(bParam1, 0), " for item ", func_33(bParam0, 0));
		}
		return 0;
	}
	if (!bParam3)
	{
		DEBUG::_0x4DC69742196F818A(168, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Found requested identifier of ", func_134(bParam1, 0), " with output quantity ", Var0.f_1);
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_77(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_78(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_135(bParam0, iParam1);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_TAG_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	return bVar0;
}

bool func_79(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_23(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_136(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_137(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 162, "[GET_COUPON_FULL_NAME] Item: ", func_33(bParam0, 0), " is not a coupon or voucher. Setting name to ", sParam1);
		return false;
	}
	StringCopy(&cVar1, func_138(bParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 162, "[GET_COUPON_FULL_NAME] No AltName specified, setting name to ", sParam1);
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 162, "[GET_COUPON_FULL_NAME] Combined name exceeds character limit, settingname to ", sParam1);
		return false;
	}
	*sParam1 = { cVar1 };
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[GET_COUPON_FULL_NAME] Returning ", sParam1);
	return true;
}

char* func_80(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_81(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_77(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_82(int iParam0, int iParam1)
{
	switch (iParam0)
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
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

var func_83(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_139(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_84()
{
	return Global_1572887.f_13;
}

struct<2> func_85(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_86(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1672595415:
			return "REMOVE_REASON_GIFTED_INCORRECTLY";
		case -1603050778:
			return "REMOVE_REASON_DEBUG";
		case -1387038764:
			return "REMOVE_REASON_GIVEN";
		case -355084151:
			return "REMOVE_REASON_ITEM_DOES_NOT_EXIST";
		case -327174699:
			return "REMOVE_REASON_DROPPED";
		case -142743235:
			return "REMOVE_REASON_DEFAULT";
		case 419721522:
			return "REMOVE_REASON_DUPLICATE";
		case 433442725:
			return "REMOVE_REASON_SET_AMOUNT";
		case 462742458:
			return "REMOVE_REASON_LOADOUT";
		case 548388329:
			return "REMOVE_REASON_DELETE_CHARACTER";
		case 562618531:
			return "REMOVE_REASON_USED";
		case 717109566:
			return "REMOVE_REASON_COALESCE";
		case 1246663900:
			return "REMOVE_REASON_CLIENT_PURGED";
		case 1368201902:
			return "REMOVE_REASON_INSUFFICIENT_INVENTORY";
		case 1730125485:
			return "REMOVE_REASON_USE_FAILED";
		case 1992602754:
			return "REMOVE_REASON_SOLD";
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

struct<14> func_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_33(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_102(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_102(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_102(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_140(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_95(iParam6, 0));
	}
	return Var0;
}

struct<4> func_88(bool bParam0)
{
	int iVar0;

	iVar0 = func_60(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_93(923904168, func_94(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_93(923904168, func_94(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_93(923904168, func_94(bParam0), -740156546, 0);
}

void func_89(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_90(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_60(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_91(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam1));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (func_141(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", func_33(bParam0, 0), " is an intrinsic item, aborting!");
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_101(*iParam1, &Var0, bParam6, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to get item data");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2184, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", iParam3, " is greater than current quantity of ", Var0.f_11, ", capping quantity");
		iParam3 = Var0.f_11;
	}
	if (!func_41(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item is already expired and does not need to be removed, ignoring");
		}
		else if (func_84() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			DEBUG::_0xF0783374333FD8CE(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Sending a Use transaction for ", iParam3, "x item ", func_33(bParam0, 0), " in ", func_102(uParam2->f_4, 0));
			iVar14 = func_142(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -142743235;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_143(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Removing ", iParam3, "x item ", func_33(bParam0, 0), " in ", func_102(uParam2->f_4, 0), " with reason ", func_86(iParam4, 0));
	if (!INVENTORY::_0x3E4E811480B3AE79(func_60(bParam6), iParam1, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to remove inventory item!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

int func_92(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_141(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_33(bParam0, 0), " is an intrinsic item, aborting!");
		return 0;
	}
	if (iParam1 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Amount to remove <= 0: ", iParam1);
		return 0;
	}
	iVar0 = func_59(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_33(bParam0, 0), " does not have a default pathset, aborting!");
		return 0;
	}
	if (!func_41(bParam4))
	{
		if (iVar0 == 0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - No pathset specified, bailing!");
			return 0;
		}
		if (!func_144(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Unable to fillout removal placement data, bailing!");
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_145(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_142(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMPATH - Use transaction failed, aborting!");
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var82.f_7 = -142743235;
			Var82.f_16 = -1;
			Var82 = bParam3;
			Var82.f_7 = iParam2;
			func_143(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Removing ", iParam1, "x item ", func_33(bParam0, 0), " with reason ", func_86(iParam2, 0));
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_60(bParam4), bParam0, iParam1, iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Failed to remove: ", iParam1, " of inventory item: ", func_33(bParam0, 0));
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	return 1;
}

struct<4> func_93(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_33(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_60(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_94(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_60(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_93(joaat("CHARACTER"), func_146(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_93(joaat("CHARACTER"), func_146(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_93(joaat("CHARACTER"), func_146(), -1591664384, bParam0);
}

char* func_95(int iParam0, int iParam1)
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

bool func_96(bool bParam0, bool bParam1)
{
	if (func_54(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_147();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_97(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_148(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_98(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_149(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_99(bool bParam0)
{
	int iVar0;

	iVar0 = func_60(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_93(271701509, func_94(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_93(271701509, func_94(bParam0), 12999093, 0);
}

bool func_100(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_54(bParam0);
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
			if (func_150(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_101(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_151(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_102(bool bParam0, int iParam1)
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

bool func_103()
{
	if ((Global_1940463.f_11709 != (Global_1940463.f_41.f_203 - 1) || func_153(func_152(0), Global_1940463.f_11701, 0, 1, 1) > 0) || Global_1940463.f_11709 == 15)
	{
		return true;
	}
	func_154(0);
	if (Global_1940463.f_7)
	{
		return true;
	}
	return false;
}

void func_104(int iParam0)
{
	Global_1940463.f_11 = iParam0;
}

void func_105(int iParam0)
{
	Global_1940463.f_10 = iParam0;
}

bool func_106(int iParam0)
{
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) >= 1f)
	{
		return true;
	}
	return false;
}

var func_107(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(358430495);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

var func_108(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(465536062);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

float func_109(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_33);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_33);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Received ", iParam0, " Health tanks.");
	if (iParam0 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Why are you trying to fill 0 Health Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_155(2);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Refilling ", iParam0, " Health Tanks ");
	func_156(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
}

void func_111(int iParam0, bool bParam1)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Received ", iParam0, " Dead Eye tanks.");
	if (iParam0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Why are you trying to fill 0 Dead Eye Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_157(2);
	DEBUG::_0xF0783374333FD8CE(2184, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Refilling ", iParam0, " Dead Eye Tanks ( ", iVar0, " per tank )");
	func_158(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_STAMINA_TANKS - Received ", iParam0, " Health tanks.");
	if (iParam0 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_REFILL_PLAYER_STAMINA_TANKS - Why are you trying to fill 0 Stamina Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_159(2);
	func_160(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_113(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_114(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_161(iParam0, fParam1, 1);
	}
	func_163(iParam0, (func_162(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_115(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_116(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Player Entity is not valid, and therefore cannot be overpowered at this time... ");
		return 0;
	}
	DEBUG::_0xF0783374333FD8CE(2472, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Attribute: ", func_164(iParam0, 0), " will be Overpowered this frame for  ", sParam1, " seconds");
	return func_165(iParam0, sParam1, bParam2, bParam3);
}

void func_117(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_166())
	{
		func_167(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17414.f_55.f_2459.f_41++;
		if (5 == Global_17414.f_55.f_2459.f_41)
		{
			func_119(109, 0);
		}
	}
}

void func_118(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_119(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_168(iParam0, &iVar0, &iVar1);
	if (!func_169(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_170(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_171(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

int func_120(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "Failed to fillout item data for item ", func_33(bParam0, 0));
	}
	return 0;
}

var func_121(bool bParam0, int iParam1)
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

char* func_122(int iParam0, int iParam1)
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

bool func_123(bool bParam0)
{
	return bParam0;
}

bool func_124(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

int func_125(bool bParam0, bool bParam1)
{
	if (!func_124(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_121(bParam1, 0), " for bundle ", func_172(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

char* func_126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("GRID_OF_4_LAYOUT_0"):
			return "CI_TEXTURE_TYPE_GRID_OF_4_LAYOUT_0";
		case -1879054288:
			return "CI_TEXTURE_TYPE_ITEMCARD";
		case -1421146771:
			return "CI_TEXTURE_TYPE_MULTIWHEEL_WEAPON";
		case -884752088:
			return "CI_TEXTURE_TYPE_GRID_OF_4_LAYOUT_1";
		case joaat("FULLPAGE_LAYOUT_5"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_5";
		case joaat("FULLPAGE_LAYOUT_4"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_4";
		case 0:
			return "CI_TEXTURE_TYPE_INVALID";
		case joaat("ADVERT_FULLPAGE"):
			return "CI_TEXTURE_TYPE_FULLPAGE_AD_LAYOUT";
		case joaat("FULLPAGE_LAYOUT_1"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_1";
		case joaat("GRID_OF_3_LAYOUT_1"):
			return "CI_TEXTURE_TYPE_GRID_OF_3_LAYOUT_1";
		case joaat("GRID_OF_9_LAYOUT_0"):
			return "CI_TEXTURE_TYPE_GRID_OF_9_LAYOUT_0";
		case 164843734:
			return "CI_TEXTURE_TYPE_LIST_LAYOUT";
		case 329991612:
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_0";
		case joaat("GRID_OF_3_LAYOUT_0"):
			return "CI_TEXTURE_TYPE_GRID_OF_3_LAYOUT_0";
		case joaat("FULLPAGE_LAYOUT_6"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_6";
		case joaat("AMMO_TYPES"):
			return "CI_TEXTURE_TYPE_AMMO_TYPES";
		case joaat("INVENTORY"):
			return "CI_TEXTURE_TYPE_INVENTORY";
		case joaat("FULLPAGE_LAYOUT_3"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_3";
		case joaat("FULLPAGE_LAYOUT_2"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_2";
		case 1703137204:
			return "CI_TEXTURE_TYPE_GRID_OF_9_LAYOUT_1";
		case 2028695203:
			return "CI_TEXTURE_TYPE_ITEMTYPE";
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

int func_127(bool bParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1224357681))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_FOLDER_TAG] Found tag ", func_121(bParam1, 0), " for item ", func_33(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1)
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

int func_129(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_23(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_131(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, char* sParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, sParam12);
	if (*iParam10 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "CREATE_ITEMDATABASE_COLLECTION - Created collection '", *iParam10, "' with size ", *iParam11, " comparison type: ", sParam12);
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CREATE_ITEMDATABASE_COLLECTION - Failed to create collection");
	return false;
}

bool func_132(bool bParam0)
{
	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_STYLE: attempting to process an invalid item!");
	}
	if (func_62(bParam0, -393037696))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_STYLE");
		return true;
	}
	return false;
}

int func_133(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "RELEASE_ITEMDATABASE_COLLECTION - Failed to release collection!");
		return 0;
	}
	return 1;
}

char* func_134(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -2141192156:
			return "COST_CRAFTING_ROLE_TOKEN";
		case -1843707398:
			return "COST_COUPON_3";
		case -1571233163:
			return "COST_COUPON_4";
		case -1551258934:
			return "COST_ABILITY_CARD_RANK_VOUCHER";
		case -1354270243:
			return "COST_ABILITY_CARD_RANK_COUPON_2";
		case -1251985981:
			return "COST_ABILITY_CARD_RANK_COUPON";
		case -1197011183:
			return "COST_COUPON_5";
		case -1103707655:
			return "COST_VOUCHER_3";
		case -915411861:
			return "COST_SHOP_DEFAULT";
		case -893266537:
			return "COST_CRAFTING_GUNSMITH";
		case -834227589:
			return "COST_CRAFTING_4";
		case -768110908:
			return "COST_CRAFTING_FENCE";
		case -570078785:
			return "COST_GOLD";
		case -489628648:
			return "COST_CRAFTING_EFFICIENT";
		case -257768755:
			return "COST_CRAFTING_FIRE";
		case -214678071:
			return "COST_CRAFTING_KNIFE";
		case 0:
			return "COST_INVALID";
		case 59806960:
			return "COST_FEE";
		case 75922725:
			return "COST_COUPON";
		case 132268625:
			return "COST_CRAFTING_MP_EFFICIENT";
		case 205718222:
			return "COST_VOUCHER";
		case joaat("COST_CRAFTING_GRILL"):
			return "COST_CRAFTING_GRILL";
		case 358994769:
			return "COST_CRAFTING_TRAPPER_PROMO";
		case 369710026:
			return "COST_CRAFTING_TRAPPER";
		case 502256076:
			return "COST_CRAFTING_3";
		case 600942249:
			return "COST_CRAFTING";
		case 747826962:
			return "COST_CRAFTING_2";
		case 761605153:
			return "COST_CRAFTING_PEARSON";
		case 866168015:
			return "COST_VOUCHER_2";
		case 975507354:
			return "COST_ABILITY_CARD_RANK_COUPON_3";
		case 997808187:
			return "COST_FREE";
		case 1070046552:
			return "COST_COUPON_2";
		case 1472825031:
			return "COST_CRAFTING_MP";
		case 1946634759:
			return "COST_CRAFTING_PAMPHLET";
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

bool func_135(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	bool bVar41;
	int iVar42;
	int iVar43;

	bVar41 = false;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				bVar41 = Var0[iVar43 /*2*/];
				DEBUG::_0x4DC69742196F818A(10920, 158, "[INVENTORY_ITEM__HAS_TAG_OF_TYPE] Found tag type ", func_173(iParam1, 0), " for item ", func_33(bParam0, 0), ", returning tag : ", func_121(bVar41, 0));
				return bVar41;
			}
			iVar43++;
		}
	}
	return false;
}

char* func_136(bool bParam0)
{
	bool bVar0;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	bVar0 = func_71(bParam0, 0);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_NAME - No name specified for ", func_33(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(bVar0);
}

bool func_137(bool bParam0)
{
	if (func_54(bParam0) == -126813555 || func_54(bParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_138(bool bParam0)
{
	int iVar0;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ALT_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	iVar0 = func_73(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_ALT_NAME - No AltName specified for ", func_33(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_139(char* sParam0, char* sParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(680, 212, "Set MOB_APP_DISPLAY_TRANSACTION_FEED_UPDATE sFeedText =  ", sParam0, " and sTextureDict =  ", sParam1);
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

var func_140(bool bParam0, int iParam1)
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

bool func_141(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - ", func_174(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_175(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_177(func_176(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_178(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

void func_143(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_20)
	{
		if (Global_1272425.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
				DEBUG::_0xA308F935BDECCEC0(8, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Updated transaction data for transaction: ", iParam0);
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   eStatus:                        ", func_179(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
				DEBUG::_0x4DC69742196F818A(8, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   sHandlerData.bSuppressFeedback: ", Param1);
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   sHandlerData.tlFeedbackMessage: ", &(Param1.f_12));
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(136, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Transaction ", iParam0, " was not pending, ignoring handler data update!");
			}
			return;
		}
		iVar0++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
}

bool func_144(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Invalid quantity of ", iParam4, " supplied for ", func_33(bParam2, 0));
		return false;
	}
	else if (*uParam0 != 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - sOutPlacementInfo array is not the correct size, needs to be MAX_ITEMPATH_PLACEMENTS");
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_59(bParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(40, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - No pathset supplied and no default pathset is available for ", func_33(bParam2, 0));
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement info");
		return false;
	}
	if (!func_180(uParam0, iParam1, iParam4, bParam5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement data, returning FALSE");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Returning ", *iParam1, " placements for ", func_33(bParam2, 0));
	return true;
}

struct<17> func_145(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_93(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_146()
{
	struct<4> Var0;

	return Var0;
}

bool func_147()
{
	return (func_181(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_182(func_93(joaat("WARDROBE"), func_94(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_148(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_23(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_59(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_33(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_33(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_102(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_93(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_33(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_60(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_33(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_60(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_33(bParam0, 0));
	}
	return iVar0;
}

bool func_149(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_60(0);
	*iParam1 = { func_93(bParam0, func_88(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_33(bParam0, 0), " eSlot: ", func_102(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_33(bParam0, 0));
		return false;
	}
	return true;
}

bool func_150(bool bParam0, bool bParam1, bool bParam2)
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

bool func_151(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_60(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_33(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_102(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_152(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_153(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_27(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_183(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_184(bParam1, bParam4));
	}
	return iVar0;
}

void func_154(bool bParam0)
{
	if (!func_23(Global_1940463.f_11701, 0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 20, "CHECK_CURRENT_ITEM_FOR_LIST_VIEW: g_satchelData.eCurrItem is invalid, bMissionDropItem - ", MISC::_0xF216F74101968DB0(bParam0));
		Global_1940463.f_7 = bParam0;
	}
	else if ((((func_120(Global_1940463.f_11701, 1224357681) != 0 && Global_1940463.f_11700 != 0) && Global_1940463.f_11700 != -2074770370) && !Global_1915867.f_20638) && !Global_1915867.f_22504.f_1)
	{
		Global_1940463.f_7 = 1;
	}
	else
	{
		Global_1940463.f_7 = 0;
	}
}

int func_155(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_185(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1957252.f_1546;
		case 1:
			return Global_1957252.f_1565.f_136;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(8, 84, "RPG_GLOBAL_GET_DEFAULT_TANK_SIZE_HEALTH - Invalid Pool type was passed in... returning -1. This is really bad... ");
	return -1;
}

void func_156(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - You shouldn't be trying to change a PED's Health value by 0...");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275959.f_8;
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - No PED provided, defaulting to local player... ");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - FAILED - Can't change the Health of an Entity that does not exist... ");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - FAILED - Can't change the Health of a dead Entity... ");
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_157(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_185(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1957252.f_1546.f_1;
		case 1:
			return Global_1957252.f_1565.f_136.f_1;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(8, 84, "RPG_GLOBAL_GET_DEFAULT_TANK_SIZE_DEADEYE - Invalid Pool type was passed in... returning -1. This is really bad... ");
	return -1;
}

void func_158(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_186(iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PLAYER_DEADEYE_AMOUNT - Cannot gain Dead Eye when Dead Eye is already full. Exiting... ");
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PLAYER_DEADEYE_AMOUNT - Cannot gain Dead Eye, entity does not exist. Exiting..");
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PLAYER_DEADEYE_AMOUNT - Cannot gain Dead Eye, while in Dead Eye. Exiting.");
		return;
	}
	if (fParam0 == 0f)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_ALTER_PLAYER_DEADEYE_AMOUNT - You shouldn't be trying to alter your Dead Eye by 0...");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PLAYER_DEADEYE_AMOUNT - We do not want to use the special multiplier for negative affects. Turning ability gain multiplier off.");
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		DEBUG::_0xF0783374333FD8CE(24, 84, "RPG_GLOBAL_ALTER_PLAYER_DEADEYE_AMOUNT - RESTORING - Amount: ", fParam0);
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(24, 84, "RPG_GLOBAL_ALTER_PLAYER_DEADEYE_AMOUNT - DRAINING - Amount: ", fParam0);
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_159(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_185(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1957252.f_1546.f_2;
		case 1:
			return Global_1957252.f_1565.f_136.f_2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(8, 84, "RPG_GLOBAL_GET_DEFAULT_TANK_SIZE_STAMINA - Invalid Pool type was passed in... returning -1. This is really bad... ");
	return -1;
}

void func_160(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - You shouldn't be trying to change a PED's Stamina value by 0...");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275959.f_8;
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - No PED provided, defaulting to local player... ");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - FAILED - Can't change the Stamina of an Entity that does not exist... ");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - FAILED - Can't change the Stamina of a dead Entity... ");
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

float func_161(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_187();
	func_188(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_189(iParam0, 2);
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Count: ", iVar1);
	if (func_191(iVar0, func_190(iParam0, 2), 1))
	{
		func_192(iParam0, 0, 2);
		iVar1 = 0;
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Reseting Degrade Count to 0, it's a whole new day!");
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Time of Day: ", func_193(iVar0));
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Current Time of Day: ", func_193(func_190(iParam0, 2)));
	}
	if (iVar1 >= 2)
	{
		func_119(103, bParam2);
		DEBUG::_0x1B08D1EB9D8C4931(136, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Dregrade Count is over: ", 2, " uses. Will not work until tomorrow... ");
		return 0f;
	}
	func_194(iParam0, func_187(), 2);
	func_192(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_162(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_185(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DISPLAY_STATE - Failed to retrieve Core Value for ", func_195(iParam0, 0), " Returning -1.0. This is really bad. ");
	return -1f;
}

int func_163(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_185(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_196(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_197(iParam0, 7000, iParam5);
		}
		func_198(iVar0, iParam0, fParam1);
		DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE_CORE - Caching Player Attribute Core ", func_195(iParam0, 0), " Value Data. Setting to: ", fParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_199()));
		func_200(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

char* func_164(int iParam0, int iParam1)
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

int func_165(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_164(iParam0, 0), " will be Overpowered this frame for  ", fParam1, " seconds on local player...");
	if (fParam1 == -1f)
	{
		if (func_201(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		DEBUG::_0x6D2A5155B260E879(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_164(iParam0, 0), " was set to a Duration of: ", fParam1, " this is really bad. Correct this. ");
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_202(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_110(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_202(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_203(joaat("STATUS_EFFECT__TRACKING"));
			func_112(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_202(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_111(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_203(joaat("STATUS_EFFECT__POISON"));
			func_204(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_204(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_204(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_164(iParam0, 0), " cannot be overpowered... Why are you doing this?");
			return 0;
	}
	return 1;
}

bool func_166()
{
	if (Global_1957252.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_205(Global_1957252.f_1431.f_107, 0);
}

void func_167(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_206(13, 2);
	iVar1 = func_207(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_208(fVar0, 0f, 100f);
	iVar2 = func_207(fVar0);
	DEBUG::_0xF0783374333FD8CE(10648, 84, "RPG_GLOBAL_ALTER_WEIGHT - Altering Weight amount by: ", fParam0, " New Weight: ", fVar0, " Force Weight Update: ", MISC::_0xF216F74101968DB0(bParam1));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_ALTER_WEIGHT - Old Weight Rank: ", iVar1, " New Weight Rank: ", iVar2);
	if (iVar1 != iVar2)
	{
		Global_1957252.f_1431.f_107 = func_187();
		func_209(&(Global_1957252.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_210(13, fVar0, 2);
	Global_1957252.f_1431.f_99 = bParam1;
}

void func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_169(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_211(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_171(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_212(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_213(iParam0, 0));
		return false;
	}
	if (func_214(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_213(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_215(iParam0, 1)) || func_216(32768))
	{
		if (!func_215(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_217())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_170(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_171(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

var func_172(bool bParam0, int iParam1)
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

char* func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1859264326:
			return "CI_TAG_TYPE_REMEDY_GROUP";
		case -1636519629:
			return "CI_TAG_TYPE_CRAFTING_ARCHETYPE";
		case -949239683:
			return "CI_TAG_TYPE_INTERACTION";
		case -790745445:
			return "CI_TAG_TYPE_DLC";
		case -442898163:
			return "CI_TAG_TYPE_COLOR";
		case -153848696:
			return "CI_TAG_TYPE_SHOP_OFFER";
		case 0:
			return "CI_TAG_TYPE_INVALID";
		case 1081526811:
			return "CI_TAG_TYPE_PATTERN";
		case 1120943070:
			return "CI_TAG_TYPE_ITEM_PROPERTY";
		case 1224357681:
			return "CI_TAG_TYPE_FOLDER";
		case 1697966752:
			return "CI_TAG_TYPE_CRAFTING_GROUP";
		case 2129182224:
			return "CI_TAG_TYPE_MATERIAL";
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

char* func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1939575505:
			return "CI_ACTION_CLAIM_LOOT";
		case joaat("BATCH"):
			return "CI_ACTION_BATCH";
		case joaat("SPEND"):
			return "CI_ACTION_SPEND";
		case joaat("SELL"):
			return "CI_ACTION_SELL";
		case joaat("UPDATE"):
			return "CI_ACTION_UPDATE";
		case -659726804:
			return "CI_ACTION_CLAIM_SPLIT_AWARD";
		case -460111564:
			return "CI_ACTION_UPDATE_CHARACTER";
		case 0:
			return "CI_ACTION_INVALID";
		case 541670136:
			return "CI_ACTION_BUY_AWARD";
		case 644809794:
			return "CI_ACTION_CLAIM_AWARD";
		case 1168099063:
			return "CI_ACTION_MOVEITEMS";
		case joaat("USE"):
			return "CI_ACTION_USE";
		case 2113164098:
			return "CI_ACTION_BUY_BUNDLE";
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

bool func_175(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_174(iParam0, 0), " -> ", func_33(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_218(iParam1->f_8, iParam0, sVar0, 2048) || func_218(iParam1->f_8, iParam0, sVar0, 32768)) || func_218(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_218(iParam1->f_8, iParam0, sVar0, 4) || func_218(iParam1->f_8, iParam0, sVar0, 256)) || func_218(iParam1->f_8, iParam0, sVar0, 65536)) || func_218(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_218(iParam1->f_8, iParam0, sVar0, 1) || func_218(iParam1->f_8, iParam0, sVar0, 8)) || func_218(iParam1->f_8, iParam0, sVar0, 65536)) || func_218(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_218(iParam1->f_8, iParam0, sVar0, 1) || func_218(iParam1->f_8, iParam0, sVar0, 16)) || func_218(iParam1->f_8, iParam0, sVar0, 2)) || func_218(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_218(iParam1->f_8, iParam0, sVar0, 8) || func_218(iParam1->f_8, iParam0, sVar0, 4096)) || func_218(iParam1->f_8, iParam0, sVar0, 256)) || func_218(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_176(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_33(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_219(iParam1, 1, 0, 0);
			return iParam1;
		}
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to check out basket!");
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to add item to basket!");
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
		{
			NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
		}
	}
	func_219(iParam1, 2, 0, 0);
	return -1;
}

int func_178(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_33(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_219(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

char* func_179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSACTION_STATUS_NONE";
		case 1:
			return "TRANSACTION_STATUS_PENDING";
		case 2:
			return "TRANSACTION_STATUS_FAILED";
		case 3:
			return "TRANSACTION_STATUS_SUCCESSFULL";
		case 4:
			return "TRANSACTION_STATUS_CANCELED";
		case 5:
			return "TRANSACTION_STATUS_QUEUED";
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

bool func_180(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - sOutPlacementInfo array is not the correct size, needs to be MAX_ITEMPATH_PLACEMENTS");
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @359; //curOff = 48
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @350; //curOff = 66
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @350; //curOff = 84
		}
		else if (func_220(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
				DEBUG::_0x4DC69742196F818A(2696, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_102((uParam0[*iParam1 /*6*/])->f_4, 0), ", 0 Remaining");
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
				DEBUG::_0x4DC69742196F818A(35464, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_102((uParam0[*iParam1 /*6*/])->f_4, 0), ", ", iParam2, " Remaining");
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_146() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Was unable to find placements for requested count of ", iParam2, "x and bValidateQuantity = TRUE, returning FALSE!");
		*iParam1 = 0;
		return false;
	}
	DEBUG::_0x4DC69742196F818A(2184, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Returning ", *iParam1, " placements with ", iParam2, "x remaining");
	return true;
}

int func_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_221(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_60(bParam1), bParam0, bParam3);
}

int func_182(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_222(&uParam0, bParam4, bParam5, iParam6);
}

int func_183(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_223(bParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904139.f_113[iVar1 /*96*/].f_1 == bParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_224(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), bParam1);
		}
	}
	return 0;
}

int func_184(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_225())
	{
		return func_148(bParam0, func_94(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_185(int iParam0)
{
	return func_227(func_226(iParam0));
}

bool func_186(int iParam0)
{
	float fVar0;

	fVar0 = (func_228(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

int func_187()
{
	return Global_1902870;
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_229(*iParam0);
	iVar1 = func_230(*iParam0);
	iVar2 = func_231(*iParam0);
	iVar3 = func_232(*iParam0);
	iVar4 = func_233(*iParam0);
	iVar5 = func_234(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SUBTRACT_TIME_FROM_TIMEOFDAY: Invalid arguement. Negative iAddSeconds passed.");
		return;
	}
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SUBTRACT_TIME_FROM_TIMEOFDAY: Invalid arguement. Negative iAddMinutes passed.");
		return;
	}
	if (iParam3 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SUBTRACT_TIME_FROM_TIMEOFDAY: Invalid arguement. Negative iAddHours passed.");
		return;
	}
	if (iParam4 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SUBTRACT_TIME_FROM_TIMEOFDAY: Invalid arguement. Negative iAddDays passed.");
		return;
	}
	if (iParam5 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SUBTRACT_TIME_FROM_TIMEOFDAY: Invalid arguement. Negative iAddMonths passed.");
		return;
	}
	if (iParam6 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SUBTRACT_TIME_FROM_TIMEOFDAY: Invalid arguement. Negative iAddYears passed.");
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_235(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_236(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_189(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_185(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1957252.f_1431.f_6[iParam0 /*3*/].f_2;
		case 1:
			return Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to retrieve Core Degrade Count for ", func_195(iParam0, 0), " Returning -1. This is really bad. ");
	return -1;
}

int func_190(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_185(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1957252.f_1431.f_6[iParam0 /*3*/].f_1;
		case 1:
			return Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to retrieve Core Degrade Time of Day for ", func_195(iParam0, 0), " Returning -1. This is really bad. ");
	return -15;
}

bool func_191(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_237(iParam1) || !func_237(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_192(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_185(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to set Core Degrade Count for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];

	if (iParam0 == -15 || iParam0 == 0)
	{
		return "invalid time of day";
	}
	iVar0 = func_229(iParam0);
	iVar1 = func_230(iParam0);
	iVar2 = func_231(iParam0);
	iVar3 = func_232(iParam0);
	iVar4 = func_233(iParam0);
	iVar5 = func_234(iParam0);
	switch (func_239(iParam0))
	{
		case 0:
			StringCopy(&cVar6, "Sun, ", 64);
			break;
		case 1:
			StringCopy(&cVar6, "Mon, ", 64);
			break;
		case 2:
			StringCopy(&cVar6, "Tue, ", 64);
			break;
		case 3:
			StringCopy(&cVar6, "Wed, ", 64);
			break;
		case 4:
			StringCopy(&cVar6, "Thu, ", 64);
			break;
		case 5:
			StringCopy(&cVar6, "Fri, ", 64);
			break;
		case 6:
			StringCopy(&cVar6, "Sat, ", 64);
			break;
	}
	switch (iVar1)
	{
		case 0:
			StringConCat(&cVar6, "Jan ", 64);
			break;
		case 1:
			StringConCat(&cVar6, "Feb ", 64);
			break;
		case 2:
			StringConCat(&cVar6, "Mar ", 64);
			break;
		case 3:
			StringConCat(&cVar6, "Apr ", 64);
			break;
		case 4:
			StringConCat(&cVar6, "May ", 64);
			break;
		case 5:
			StringConCat(&cVar6, "Jun ", 64);
			break;
		case 6:
			StringConCat(&cVar6, "Jul ", 64);
			break;
		case 7:
			StringConCat(&cVar6, "Aug ", 64);
			break;
		case 8:
			StringConCat(&cVar6, "Sep ", 64);
			break;
		case 9:
			StringConCat(&cVar6, "Oct ", 64);
			break;
		case 10:
			StringConCat(&cVar6, "Nov ", 64);
			break;
		case 11:
			StringConCat(&cVar6, "Dec ", 64);
			break;
	}
	StringIntConCat(&cVar6, iVar2, 64);
	StringConCat(&cVar6, ", ", 64);
	StringIntConCat(&cVar6, iVar0, 64);
	StringConCat(&cVar6, ", ", 64);
	if (iVar3 < 10)
	{
		StringConCat(&cVar6, "0", 64);
	}
	StringIntConCat(&cVar6, iVar3, 64);
	StringConCat(&cVar6, ":", 64);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "0", 64);
	}
	StringIntConCat(&cVar6, iVar4, 64);
	StringConCat(&cVar6, ".", 64);
	if (iVar5 < 10)
	{
		StringConCat(&cVar6, "0", 64);
	}
	StringIntConCat(&cVar6, iVar5, 64);
	return HUD::_0xD8402B858F4DDD88(&cVar6, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar6));
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_185(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", func_193(iParam1));
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", func_193(iParam1));
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to set Core Degrade Time of Day for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_195(int iParam0, int iParam1)
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

bool func_196(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_INTERNAL - FAILED - Can't change the Attribute Core of an Entity that does not exist... ");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_INTERNAL - FAILED - Can't change the Attribute Core of a dead Entity... ");
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_240(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_185(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", iParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", iParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Failed to set Core Display Time for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), ". This is really bad. ");
			break;
	}
}

void func_198(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_241(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_242(iParam1), fParam2, -1);
	}
	else
	{
		DEBUG::_0x6D2A5155B260E879(40, 84, "__RPG_GLOBAL_HANDLE_BLACKBOARD_FOR_ATTRIBUTE - INVALID BLACK BOARD NAME for Attribute Core: ", func_195(iParam1, 0));
	}
}

bool func_199()
{
	return func_226(0);
}

void func_200(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_185(2);
	}
	sVar0 = Global_1275959.f_21;
	DEBUG::_0xA308F935BDECCEC0(43432, 84, "__RPG_GLOBAL_CACHE_ATTRIBUTE_CORE_DATA - Caching Attribute Core ", func_195(iParam0, 0), " Value Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_199()), " Time Stamp: ", sVar0);
	func_243(iParam0, sParam1, iParam3);
	if (bParam2)
	{
		func_244(iParam0, sVar0, iParam3);
	}
}

bool func_201(int iParam0)
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

char* func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_GET_OVERPOWER_POSTFX_STRING_FOR_ATTRIBUTE - Attribute: ", func_164(iParam0, 0), " does not have an overpower post fx... Returning NULL ");
	return "";
}

void func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Now disabling all Status Effects with Perk Group: ", func_245(iParam0, 0));
	iVar1 = Global_1146683.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146683.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_246(iVar0, 1);
		if (Global_1146683.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Disabling Source: ", func_247(Global_1146683.f_47689.f_1[iVar2 /*2*/], 0), " at index: ", iVar2);
			func_248(iVar0);
			Global_1146683.f_47689.f_1.f_42 = (Global_1146683.f_47689.f_1.f_42 - 1);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Saving Source: ", Global_1146683.f_47689.f_1[iVar2 /*2*/], " at index: ", iVar2);
			Var6[iVar4 /*2*/] = { Global_1146683.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1146683.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_204(int iParam0, bool bParam1, bool bParam2)
{
	func_163(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_205(int iParam0, bool bParam1)
{
	return func_191(func_187(), iParam0, bParam1);
}

float func_206(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_185(1);
	}
	switch (iParam1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_249(0, 0), " Value: ", Global_1957252.f_1431.f_26[iParam0]);
			return Global_1957252.f_1431.f_26[iParam0];
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_249(1, 0), " Value: ", Global_1957252.f_1565.f_2.f_26[iParam0]);
			return Global_1957252.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Couldn't retrieve Cached Attribute XP data for Attribute: ", func_164(iParam0, 0));
	return -1f;
}

int func_207(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_208(float fParam0, float fParam1, float fParam2)
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

void func_209(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_229(*uParam0);
	iVar1 = func_230(*uParam0);
	iVar2 = func_231(*uParam0);
	iVar3 = func_232(*uParam0);
	iVar4 = func_233(*uParam0);
	iVar5 = func_234(*uParam0);
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
	iVar6 = func_235(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_235(iVar1, iVar0);
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
	func_236(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_210(int iParam0, char* sParam1, int iParam2)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_185(2);
	}
	DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE - Caching Attribute ", func_164(iParam0, 0), " XP Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_199()));
	func_251(iParam0, sParam1, iParam2);
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

bool func_211(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_212(int iParam0)
{
	if (func_215(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_213(int iParam0, int iParam1)
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
		case 860:
			return "TF_MP_FL_TRA_READ";
		case 861:
			return "TF_MP_FL_TRA_MEET";
		case 862:
			return "TF_MP_CROSS_PROMO_GTAO_CARDS";
		case 863:
			return "TF_MP_CROSS_PROMO_GTAO_CARDS_PONCHO";
		case 864:
			return "TF_MP_CROSS_PROMO_GTAO_MASK";
		case 865:
			return "TF_MP_START_MOONSHINER";
		case 866:
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN1";
		case 867:
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN2";
		case 868:
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN1";
		case 869:
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN2";
		case 870:
			return "TF_MP_FL_GVO_DONE_NONE_REMAIN";
		case 871:
			return "TF_MP_FL_WEAPON_QUICK_SWAP_ASSIGN";
		case 872:
			return "TF_MP_FL_WEAPON_QUICK_SWAP_HOSLTER";
		case 873:
			return "TF_MP_FL_MOONSHINER_PROPERTY_MOVED";
		case 874:
			return "TF_MP_MOONSHINER_ENTER_PROPERTY";
		case 875:
			return "TF_MP_MOONSHINER_FIRST_SETUP_COMPLETE";
		case 876:
			return "TF_MP_MOONSHINER_BUSINESS_READY1";
		case 877:
			return "TF_MP_MOONSHINER_BUSINESS_READY2";
		case 878:
			return "TF_MP_MOONSHINER_NO_XP";
		case 879:
			return "TF_MP_MOONSHINER_GATING_ITEM_NOT_BOUGHT";
		case 880:
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED";
		case 881:
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED2";
		case 882:
			return "TF_MP_MOONSHINER_PROPERTY_SELECTED_POSSE";
		case 883:
			return "TF_MP_MOONSHINER_FIRST_TIME_GOT_DRUNK";
		case 884:
			return "TF_MP_SKILL_MOONSHINE_FLAVOUR";
		case 885:
			return "TF_MP_SKILL_UNLOCKED";
		case 886:
			return "TF_MP_MOONSHINER_DANCE_SHORTCUTS";
		case 887:
			return "TF_MP_MOONSHINER_DANCE_INSTRUCT";
		case 888:
			return "TF_MP_MOONSHINER_APPROACH";
		case 889:
			return "TF_MP_MOONSHINER_THEME_CHANGED";
		case 890:
			return "TF_MP_MOONSHINER_BAR_OPEN";
		case 891:
			return "TF_MP_MOONSHINER_STANDARD_MOONSHINE_STOCK";
		case 892:
			return "TF_MP_MOONSHINER_BARTENDING_AVAILABLE";
		case 893:
			return "TF_MP_MOONSHINER_PLAYER_TENDING_BAR";
		case 894:
			return "TF_MP_MOONSHINER_BAND_INTRO";
		case 895:
			return "TF_MP_MOONSHINER_BAND_WRAP_UP";
		case 896:
			return "TF_MP_MOONSHINE_JUG";
		case 897:
			return "TF_MP_MOONSHINE_LAST_BATCH";
		case 898:
			return "TF_MP_MOONSHINE_NOT_POSSE_LEADER";
		case 899:
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P1";
		case 900:
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P2";
		case 901:
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON";
		case 902:
			return "TF_MP_MOONSHINE_MAGGIE_NO_BOOT";
		case 903:
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON_OR_BOOT";
		case 904:
			return "TF_MP_MOONSHINE_NOT_ELIGIBLE_FROM_LANDING";
		case 905:
			return "TF_MP_MOONSHINE_USE_CINEMATIC_CAM";
		case 906:
			return "TF_MP_MOONSHINE_STORY_MISSIONS";
		case 907:
			return "TF_MP_MOONSHINE_LOWEST_MASH_PRICE";
		case 908:
			return "TF_MP_NATURALIST_INTRO_HARRIET";
		case 909:
			return "TF_MP_NATURALIST_INTRO_GUS";
		case 910:
			return "TF_MP_NATURALIST_ROLE_INTRO";
		case 911:
			return "TF_MP_NATURALIST_HARRIETS_SHOP";
		case 912:
			return "TF_MP_NATURALIST_COMPENDIUM";
		case 913:
			return "TF_MP_NATURALIST_COMPENDIUM2";
		case 914:
			return "TF_MP_NATURALIST_COMPENDIUM3";
		case 915:
			return "TF_MP_NATURALIST_COMPENDIUM4";
		case 916:
			return "TF_MP_NATURALIST_COMPENDIUM5";
		case 917:
			return "TF_MP_NATURALIST_COMPENDIUM6";
		case 918:
			return "TF_MP_NATURALIST_BUY_VARMINT_RIFLE";
		case 919:
			return "TF_MP_NATURALIST_HARRIET_CLOSED";
		case 920:
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_PRE_INTRO";
		case 921:
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_POST_INTRO";
		case 922:
			return "TF_MP_NATURALIST_GROUP_COMPLETE";
		case 923:
			return "TF_MP_NATURALIST_FARMLAND_GROUP_COMPLETE";
		case 924:
			return "TF_MP_NATURALIST_DESERT_GROUP_COMPLETE";
		case 925:
			return "TF_MP_NATURALIST_BAYOU_GROUP_COMPLETE";
		case 926:
			return "TF_MP_NATURALIST_MOUNTAIN_GROUP_COMPLETE";
		case 927:
			return "TF_MP_NATURALIST_FOREST_GROUP_COMPLETE";
		case 928:
			return "TF_MP_NATURALIST_LEGMELANISTIC_GROUP_COMPLETE";
		case 929:
			return "TF_MP_NATURALIST_LEGALBINO_GROUP_COMPLETE";
		case 930:
			return "TF_MP_NATURALIST_LEGREDBLOND_GROUP_COMPLETE";
		case 931:
			return "TF_MP_NATURALIST_LEGPATTERN_GROUP_COMPLETE";
		case 932:
			return "TF_MP_NATURALIST_COMMON_GROUP_COMPLETE";
		case 933:
			return "TF_MP_VEHICLE_APPROACHING_CLEANUP";
		case 934:
			return "TF_MP_TRANQUILZER_AMMO";
		case 935:
			return "TF_MP_KILL_TRANQUILZER_AMMO";
		case 936:
			return "TF_MP_NATURALIST_MAX_SAMPLES";
		case 937:
			return "TF_MP_NATURALIST_REVIVE_NO_ITEM";
		case 938:
			return "TF_MP_NATURALIST_NO_SMPL_FIRE";
		case 939:
			return "TF_MP_NATURALIST_NO_SKIN_SMPLD";
		case 940:
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_1";
		case 941:
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_2";
		case 942:
			return "TF_MP_FIRST_LEGENDARY_ANIMAL_PARTS";
		case 943:
			return "TF_MP_FIRST_ANIMAL_PARTS_TRADER";
		case 944:
			return "TF_MP_FIRST_SKIN_TRADER";
		case 945:
			return "TF_MP_LEGENDARY_ANIMAL_DAMAGED_UNCLEANLY";
		case 946:
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_FAILED";
		case 947:
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_UNCLEAR_RESPONSE";
		case 948:
			return "TF_MP_ADVANCED_CAMERA_USED";
		case 949:
			return "TF_MP_NATURALIST_SONY_EXCLUSIVE";
		case 950:
			return "TF_MP_MP007_SONY_EXCLUSIVE_LOGIN";
		case 951:
			return "TF_MP_CUTSCENE_CANCELED_FROM_MISSION";
		case 952:
			return "TF_MP_ITEM_FULL_SPECIFIC";
		case 953:
			return "TF_MP_ITEM_FULL_GENERIC";
		case 954:
			return "TF_MP_ANIMAL_CONTROL_CANCEL_FOR_MISSION";
		case 955:
			return "TF_MP_TRADER_RESUPPLY_INITIATED";
		case 956:
			return "TF_MP_TRADER_RESUPPLY_COMPLETED";
		case 957:
			return "TF_MP_HARDCORE_SERIES_INFO_0";
		case 958:
			return "TF_MP_HARDCORE_SERIES_INFO_1";
		case 959:
			return "TF_MP_NATURALIST_HARRIET_KILL_ANIMALS";
		case 960:
			return "TF_MP_CHALLENGES_ROLE_DAILY_LIMIT";
		case 961:
			return "TF_MP_UPGRADE_BOUNTY_LICENSE";
		case 962:
			return "TF_MP_UPGRADE_BOUNTY_LICENSE_PRE_CUTSCENE";
		case 963:
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD";
		case 964:
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD_2";
		case 965:
			return "TF_MP_SKILL_DYNAMIC_MISSIONS";
		case 966:
			return "TF_MP_INTRO_HORSE_VOUCHER";
		case 967:
			return "TF_MP_INTRO_HORSE_VOUCHER_REMINDER";
		case 968:
			return "TF_MP_CHALLENGES_STREAK_ONE_TIME_RESET";
		case 969:
			return "TF_MP_CHALLENGES_STREAK_COMPLETE_RESET";
		case 970:
			return "TF_MP_CHALLENGES_ROLE_BOUNTY_HUNTER_011";
		case 971:
			return "TF_MP_CLOUD_LETTER_TELEGRAM_COLLECTED";
		case 972:
			return "NUM_CURRENT_TUTORIALS";
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

bool func_214(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_213(iParam0, 0), " Seconds ", iVar2);
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

bool func_215(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_216(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_217()
{
	if (!func_252())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

int func_218(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_253(sParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_20)
	{
		if (Global_1272425.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_179(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_179(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_179(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_174(iParam2, 0), " and action B to ", func_174(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_254(iParam0, iParam1, iParam2, iParam3);
}

bool func_220(var uParam0)
{
	if (!func_255(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "IS_ITEM_EXPIRED - ERROR! sItemGUID is not valid.");
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

bool func_221(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_222(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_256(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_33(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_223(bool bParam0)
{
	if (!func_75(bParam0, 1955773996))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item does not have required horse cargo tag - ", func_33(bParam0, 0));
		return false;
	}
	if (!func_257(bParam0, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item considered too small to be stowable - ", func_33(bParam0, 0));
		return false;
	}
	return true;
}

int func_224(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_23(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PED_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - Checking if item: ", func_33(bParam1, 0), " has a valid GUID.");
	Var0 = { func_258(iParam0, bParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - No GUID found for item ", func_33(bParam1, 0), ", returning 0");
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, false);
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PED_SATCHEL_ITEM_COUNT - Found ", iVar4, " of item ", func_33(bParam1, 0));
	return iVar4;
}

bool func_225()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: invalid local player index...");
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: inactive local player index...");
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: owned vehicle doesn't exist...");
		return false;
	}
	if (!func_259(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: not a hunting wagon...");
		return false;
	}
	return true;
}

bool func_226(int iParam0)
{
	return func_260(&(Global_1957252.f_1565), iParam0, 1);
}

int func_227(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_228(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_261(2)));
}

int func_229(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_262(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_230(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_231(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_232(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_233(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_234(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_235(int iParam0, int iParam1)
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

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_263(iParam0, iParam6);
	func_264(iParam0, iParam5);
	func_265(iParam0, iParam4);
	func_266(iParam0, iParam3);
	func_267(iParam0, iParam2);
	func_268(iParam0, iParam1);
}

bool func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_234(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_233(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_232(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_229(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_230(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_231(iParam0);
	if (iVar5 < 1 || iVar5 > func_235(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

char* func_238(int iParam0)
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

int func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -15 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_231(iParam0);
	switch (func_230(iParam0))
	{
		case 0:
			iVar1 = 11;
			break;
		case 1:
			iVar1 = 12;
			break;
		case 2:
			iVar1 = 1;
			break;
		case 3:
			iVar1 = 2;
			break;
		case 4:
			iVar1 = 3;
			break;
		case 5:
			iVar1 = 4;
			break;
		case 6:
			iVar1 = 5;
			break;
		case 7:
			iVar1 = 6;
			break;
		case 8:
			iVar1 = 7;
			break;
		case 9:
			iVar1 = 8;
			break;
		case 10:
			iVar1 = 9;
			break;
		case 11:
			iVar1 = 10;
			break;
	}
	iVar2 = func_229(iParam0);
	iVar3 = (iVar2 % 100);
	iVar4 = (iVar2 / 100);
	iVar5 = (((((iVar0 + (((13 * iVar1) - 1) / 5)) + iVar3) + (iVar3 / 4)) + (iVar4 / 4)) - (2 * iVar4));
	iVar6 = (iVar5 % 7);
	if (iVar6 < 0)
	{
		iVar6 += 7;
	}
	switch (iVar6)
	{
		case 0:
			iVar7 = 0;
			break;
		case 1:
			iVar7 = 1;
			break;
		case 2:
			iVar7 = 2;
			break;
		case 3:
			iVar7 = 3;
			break;
		case 4:
			iVar7 = 4;
			break;
		case 5:
			iVar7 = 5;
			break;
		case 6:
			iVar7 = 6;
			break;
	}
	return iVar7;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_PED_ATTRIBUTE_FROM_RPG_GLOBAL_CORE - Attribute Core: ", func_195(iParam0, 0), " does not have an associated PED Attribute. This is REALLY bad, correct immediately... ");
	return 0;
}

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_243(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_185(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Failed to set Core Value for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), ". This is really bad. ");
			break;
	}
}

void func_244(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_185(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Failed to set Last Updated Timestamp for ", func_195(iParam0, 0), " Pool: ", func_238(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_245(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3";
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_0";
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_SHORT_GAME_TIER_3";
		case -2082434331:
			return "RPG_GLOBAL_PERK_GROUP_ID__CONSUMABLE__BLENDING_TONIC";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2";
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FOOL_ME_ONCE_TIER_2";
		case -2038430863:
			return "RPG_GLOBAL_PERK_GROUP_ID__CONSUMABLE__HARDY_TONIC";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1";
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2";
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__COLD_BLOODED_TIER_3";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2";
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_3";
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__STRANGE_MEDICINE_TIER_3";
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__POTENTIAL_BONUS";
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2";
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SHARPSHOOTER_TIER_1";
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_SHORT_GAME_TIER_2";
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME";
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__PEAK_CONDITION_TIER_2";
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__LANDONS_PATIENCE_TIER_1";
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FOOL_ME_ONCE_TIER_1";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_2";
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_SHORT_GAME_TIER_1";
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SLOW_AND_STEADY_TIER_1";
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY";
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__AWARENESS_BONUS";
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__INTUITION_BONUS";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1";
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__COME_BACK_STRONGER_TIER_3";
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_1";
		case -1246069683:
			return "RPG_GLOBAL_PERK_GROUP_ID__ITEM__TRINKET__SNOWY_EGRET";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_1";
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1";
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3";
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__COME_BACK_STRONGER_TIER_1";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4";
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_7";
		case -1105699593:
			return "RPG_GLOBAL_PERK_GROUP_ID__END";
		case -1047626954:
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__MASTER_TRACKER";
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1";
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3";
		case -980934770:
			return "RPG_GLOBAL_PERK_GROUP_ID__ITEM__TRINKET__BUCK_ANTLER";
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_4";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5";
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_6";
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3";
		case -821191074:
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__EAGLE_EYE_LEGENDARY_ANIMAL";
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__PEAK_CONDITION_TIER_1";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_3";
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1";
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HANGMAN_TIER_2";
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2";
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__WINNING_STREAK_TIER_3";
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return "RPG_GLOBAL_PERK_GROUP_ID__EQUIPMENT__NED_KELLY_FREEROAM";
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2";
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3";
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FOOL_ME_ONCE_TIER_3";
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__COLD_BLOODED_TIER_1";
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2";
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1";
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return "RPG_GLOBAL_PERK_GROUP_ID__EQUIPMENT__NED_KELLY_ADVERSARY";
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1";
		case joaat("CONTENT__HUNTED__MASKED"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__HUNTED__MASKED";
		case joaat("CONTENT__PASSIVE_MODE"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PASSIVE_MODE";
		case -193167881:
			return "RPG_GLOBAL_PERK_GROUP_ID__ITEM__TRINKET__RAM_HORN";
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__NECESSITY_BREEDS_TIER_3";
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return "RPG_GLOBAL_PERK_GROUP_ID__EQUIPMENT__NED_KELLY_GOLDEN";
		case joaat("CONSUMABLE__DAILY_STEW"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONSUMABLE__DAILY_STEW";
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_5";
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1";
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1";
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__EFFICIENCY_BONUS";
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__PAINT_IT_BLACK_TIER_3";
		case -1:
			return "RPG_GLOBAL_PERK_GROUP_ID__INVALID";
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__COME_BACK_STRONGER_TIER_2";
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2";
		case 130533095:
			return "RPG_GLOBAL_PERK_GROUP_ID__ITEM__TRINKET__JAVELINA_TUSK";
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HANGMAN_TIER_3";
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2";
		case 158579484:
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__MERCY";
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return "RPG_GLOBAL_PERK_GROUP_ID__STATUS_EFFECT__TOXIC_MOONSHINE";
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FOCUS_FIRE_TIER_3";
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__EAGLE_EYE_PLUS";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6";
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__IRON_LUNG_TIER_1";
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__WINNING_STREAK_TIER_2";
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__NECESSITY_BREEDS_TIER_2";
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__PERCEPTION_BONUS";
		case joaat("STATUS_EFFECT__POISON"):
			return "RPG_GLOBAL_PERK_GROUP_ID__STATUS_EFFECT__POISON";
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SLOW_AND_STEADY_TIER_3";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7";
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS";
		case 549687162:
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_9";
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__NECESSITY_BREEDS_TIER_1";
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HANGMAN_TIER_1";
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__LANDONS_PATIENCE_TIER_2";
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1";
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF";
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SLOW_AND_STEADY_TIER_2";
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__IRON_LUNG_TIER_3";
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3";
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2";
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_8";
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SHARPSHOOTER_TIER_2";
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__MASTER_DISTILLER_BONUS";
		case 808176588:
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__ANIMAL_FOCUS";
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__PAINT_IT_BLACK_TIER_2";
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__WINNING_STREAK_TIER_1";
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HORSEMAN_TIER_3";
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FOCUS_FIRE_TIER_2";
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2";
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__SHARPSHOOTER_TIER_3";
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__IRON_LUNG_TIER_2";
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__FOCUS_BONUS";
		case 1130659268:
			return "RPG_GLOBAL_PERK_GROUP_ID__ITEM__TRINKET__BEAVER_TOOTH";
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HORSEMAN_TIER_2";
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2";
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3";
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HORSEMAN_TIER_1";
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2";
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HUNKER_DOWN_TIER_3";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2";
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__DIVINATION_BONUS";
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__PREDATOR__LEVEL_2";
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1";
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3";
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HUNKER_DOWN_TIER_1";
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3";
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FOCUS_FIRE_TIER_1";
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1";
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return "RPG_GLOBAL_PERK_GROUP_ID__EQUIPMENT__NED_KELLY_COOP";
		case joaat("STATUS_EFFECT__TRACKING"):
			return "RPG_GLOBAL_PERK_GROUP_ID__STATUS_EFFECT__TRACKING";
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__HUNKER_DOWN_TIER_2";
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3";
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__STRANGE_MEDICINE_TIER_1";
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__LANDONS_PATIENCE_TIER_3";
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3";
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__COLD_BLOODED_TIER_2";
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__PEAK_CONDITION_TIER_3";
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__PAINT_IT_BLACK_TIER_1";
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1";
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return "RPG_GLOBAL_PERK_GROUP_ID__UNLOCK__ROLE__PROTECTION_TRADER_BONUS";
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__STRANGE_MEDICINE_TIER_2";
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return "RPG_GLOBAL_PERK_GROUP_ID__ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3";
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

int func_246(int iParam0, int iParam1)
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

char* func_247(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT1";
		case -2059285007:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__BEAVER_TOOTH";
		case -2006026692:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_5";
		case -1993903481:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT4";
		case -1970041458:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_13";
		case -1935700575:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_7";
		case -1927422497:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT4";
		case -1920464018:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT2";
		case -1919393558:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT1";
		case -1857550353:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_2";
		case -1855662261:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT2";
		case -1840995238:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT1";
		case -1835722213:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT3";
		case -1790318144:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT4";
		case -1786033368:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT2";
		case -1767968552:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT3";
		case -1767662471:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT1";
		case -1729980669:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT4";
		case -1729554078:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT2";
		case -1727526861:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT4";
		case -1722264360:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT1";
		case -1719665775:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT2";
		case -1716981503:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT4";
		case -1697567574:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT3";
		case -1685270562:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONSUMABLE__HARDY_TONIC";
		case -1631930150:
			return "RPG_GLOBAL_PERK_SOURCE_ID__EQUIPMENT__SLOT_OUTFIT";
		case -1629969648:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_3";
		case -1605880447:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT4";
		case -1575244501:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT2";
		case -1551628748:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT3";
		case -1543433893:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT3";
		case -1539337723:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT4";
		case -1525401254:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT2";
		case -1525233154:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT2";
		case -1491472827:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT3";
		case -1486927560:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT4";
		case -1480068681:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT2";
		case -1478178768:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_19";
		case -1465202595:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT4";
		case -1459368569:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT4";
		case -1431848307:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT3";
		case -1418298797:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS";
		case -1391865428:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__RAM_HORN";
		case -1378468884:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT2";
		case -1291022662:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT4";
		case -1288042557:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT1";
		case -1248720641:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT1";
		case -1229834518:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT3";
		case -1223791123:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT3";
		case -1209874968:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT2";
		case -1197630873:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__AWARENESS_BONUS";
		case -1196069774:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONSUMABLE__STEW";
		case -1181880939:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT3";
		case -1170784825:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT2";
		case -1125028284:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_8";
		case -1123356036:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_18";
		case -1100659165:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT1";
		case -1089821002:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT3";
		case -1084890102:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_1";
		case -1080696981:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT3";
		case -1010031245:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT2";
		case -992423055:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__INTUITION_BONUS";
		case -979738281:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT3";
		case -931294997:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT4";
		case -920221586:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT4";
		case -900877140:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT1";
		case -885737328:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT4";
		case -885646667:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT3";
		case -837774766:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT3";
		case -813902658:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONSUMABLE__BLENDING_TONIC";
		case -799500009:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_16";
		case -751329575:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_10";
		case -711254121:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_3";
		case -660114191:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT1";
		case -649929946:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT2";
		case -636552746:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT4";
		case -587737142:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT3";
		case -546870456:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__EAGLE_EYE_PLUS";
		case -521477124:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT3";
		case -481051896:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_6";
		case -425216802:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT1";
		case -415437740:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT4";
		case -415250715:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_15";
		case -392183396:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT3";
		case -343572565:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT1";
		case -340578116:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__BUCK_ANTLER";
		case -286632741:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT1";
		case -267135864:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_9";
		case -233204301:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT4";
		case -203268054:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_14";
		case -161625840:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_NET_CAMP__REGENERATION";
		case -126580932:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ALL_SOURCES";
		case -117284255:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT4";
		case -60432888:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT2";
		case -56802666:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT4";
		case -47513954:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT4";
		case -46116991:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__ANIMAL_FOCUS";
		case -35033037:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_4";
		case -33431232:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT1";
		case -29822088:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT2";
		case 0:
			return "RPG_GLOBAL_PERK_SOURCE_ID__INVALID";
		case 1213703:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__PROTECTION_TRADER_BONUS";
		case 54499763:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT4";
		case 111084081:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT2";
		case 114587291:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT1";
		case 149216078:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT2";
		case 168336706:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_20";
		case 173401469:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT4";
		case 180714777:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT3";
		case 268103762:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT3";
		case 282858309:
			return "RPG_GLOBAL_PERK_SOURCE_ID__END";
		case 320758674:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__DIVINATION_BONUS";
		case 352539363:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_INSTANCED__EQUIPMENT_OVERRIDE";
		case 362862598:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__JAVELINA_TUSK";
		case 398279342:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT2";
		case 408582472:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT1";
		case 420477860:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT1";
		case 456199285:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__SNOWY_EGRET";
		case 509781427:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT3";
		case 550487527:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT2";
		case 576694808:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_4";
		case 638586808:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT4";
		case 659100749:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT2";
		case 666050502:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT2";
		case 698214003:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT1";
		case 713106899:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT2";
		case 780689752:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT1";
		case 791791441:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT4";
		case 797908556:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT2";
		case 798283666:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_12";
		case 807983049:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__FOCUS_BONUS";
		case 839199173:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT3";
		case 846387993:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT1";
		case 852774198:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT4";
		case 878491929:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT1";
		case 887717126:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT3";
		case 926420921:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT2";
		case 946848176:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT3";
		case 952755846:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT1";
		case 955999834:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_5";
		case 956867472:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT1";
		case 1036630721:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT1";
		case 1037792287:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_11";
		case 1052684812:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT3";
		case 1075856357:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT3";
		case 1078589127:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT2";
		case 1095779900:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT1";
		case 1110815339:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__EFFICIENCY_BONUS";
		case 1138017610:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT1";
		case 1156950836:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT3";
		case 1195903441:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT2";
		case 1278022357:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT2";
		case 1281707602:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__MERCY";
		case 1323028278:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT2";
		case 1374979106:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT1";
		case 1405624312:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_17";
		case 1444077748:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT1";
		case 1449867002:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__LEGENDARY_ANIMAL_LAUNCH_BONUS";
		case 1498983922:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT3";
		case 1547488310:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__EAGLE_EYE_LEGENDARY_ANIMAL";
		case 1554410187:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT3";
		case 1585362808:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT1";
		case 1636352616:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__PERCEPTION_BONUS";
		case 1662680949:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_NOTORIETY__PASSIVE_MODE";
		case 1698995037:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT1";
		case 1769731136:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT4";
		case 1801131110:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT3";
		case 1806354060:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT3";
		case 1811663962:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_2";
		case 1828803907:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT1";
		case 1829805500:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT2";
		case 1830494920:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT4";
		case 1838787462:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT4";
		case 1865781806:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__MASTER_TRACKER";
		case 1899963938:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT2";
		case 1900141702:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__POTENTIAL_BONUS";
		case 1903067887:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT4";
		case 1907663129:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT2";
		case 2040423027:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT4";
		case 2050123975:
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_1";
		case 2096770678:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT4";
		case 2110112797:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT3";
		case 2119170919:
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__MASTER_DISTILLER_BONUS";
		case 2132307595:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT1";
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

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_269(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - invalid Source ID ", iParam0);
		return 0;
	}
	iVar0 = func_246(iParam0, 1);
	if (!func_270(Global_1146683.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_271(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Attempting to disable all Perks in Perk Group: ", func_245(Global_1146683.f_35859.f_919[iVar0 /*12*/], 0), " it has: ", Global_1146683.f_35859[iVar3 /*6*/].f_5, " perks...");
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146683.f_35859[iVar3 /*6*/][iVar4];
		DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Disabling Perk: ", func_272(iVar1, 0), " from Source: ", func_247(iParam0, 0));
		switch (func_273(iParam0, iVar1))
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - deactivating perk ", func_272(iVar1, 0), " directly");
				func_274(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146683.f_35859.f_11700)
				{
					if (Global_1146683.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1146683.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - removing perk ", func_272(iVar1, 0), " from the activation queue");
						func_274(iVar1, iParam0, iVar4);
						func_275(&(Global_1146683.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146683.f_35859.f_11700 = (Global_1146683.f_35859.f_11700 - 1);
						Global_1146683.f_35859.f_9503[iVar5 /*3*/] = { Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/] };
						func_275(&(Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - ignoring perk ", func_272(iVar1, 0), "...");
				Jump @1002; //curOff = 566
				iVar2 = func_276(iVar1, 1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_272(iVar1, 0), " currently has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				func_277(iVar2, -1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_272(iVar1, 0), " has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				if (Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_278(iVar2, 0);
					DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - all sources for Perk: ", func_272(iVar1, 0), " have been removed, disabling it");
					iVar6 = 0;
					while (iVar6 < Global_1146683.f_35859.f_9502)
					{
						if (Global_1146683.f_35859.f_9302[iVar6] != iVar1)
						{
							DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_272(iVar1, 0), " does not equal perk in slot: ", func_272(Global_1146683.f_35859.f_9302[iVar6], 0));
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_272(iVar1, 0), " matches perk in slot! ");
							Global_1146683.f_35859.f_9302[iVar6] = -1;
							Global_1146683.f_35859.f_9502 = (Global_1146683.f_35859.f_9502 - 1);
							Global_1146683.f_35859.f_9302[iVar6] = Global_1146683.f_35859.f_9302[Global_1146683.f_35859.f_9502];
							Global_1146683.f_35859.f_9302[Global_1146683.f_35859.f_9502] = -1;
							DEBUG::_0xA308F935BDECCEC0(8, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Number of enabled perks is now: ", Global_1146683.f_35859.f_9502);
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146683.f_35859.f_919[iVar0 /*12*/] = -1;
			func_279(&(Global_1146683.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

char* func_249(int iParam0, int iParam1)
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

bool func_250(int iParam0)
{
	if (func_201(iParam0))
	{
		return true;
	}
	else if (func_280(iParam0))
	{
		return true;
	}
	return false;
}

void func_251(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_185(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_164(iParam0, 0), " Pool: ", func_238(iParam2), " to ", fParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_164(iParam0, 0), " Pool: ", func_238(iParam2), " to ", fParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Failed to set Attribute XP for ", func_164(iParam0, 0), " Pool: ", func_238(iParam2), ". This is really bad. ");
			break;
	}
}

bool func_252()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_253(char* sParam0, int iParam1)
{
	return (sParam0 && iParam1) != 0;
}

void func_254(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_20 < 20)
	{
		Global_1272425.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_20.f_1[iVar0 /*21*/] = { Global_1272425.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_281(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_174(iParam2, 0), " and action B ", func_174(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_179(iParam1, 0));
}

bool func_255(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_256(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_60(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_102(bParam1, 0));
		return false;
	}
	if (!func_151(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_102(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_33(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_102(bParam1, 0));
	return true;
}

bool func_257(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_282(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_258(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_283(iParam0) };
	return func_284(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_259(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_260(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_155(2) * 2;
		case 1:
			return func_159(2) * 2;
		case 2:
			return func_157(2) * 2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_MAX_SIZE - Attribute Core: ", func_195(iParam0, 0), " is INVALID. Correct this immediately... ");
	return -1;
}

int func_262(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_263(int iParam0, int iParam1)
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

void func_264(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_265(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_230(*iParam0);
	iVar1 = func_229(*iParam0);
	if (iParam1 < 1 || iParam1 > func_235(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_235(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_266(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_267(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_268(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_269(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_270(int iParam0)
{
	int iVar0;

	iVar0 = func_271(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_271(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

char* func_272(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT";
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT";
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT";
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__STATUS_EFFECT__POISON_EFFECT";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT";
		case -2019073637:
			return "RPG_GLOBAL_PERK_ID__CONSUMABLE__BLENDING_TONIC_EFFECT";
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_2_EFFECTS";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT";
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT";
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HANGMAN_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT";
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR";
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HANGMAN_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HANGMAN_INDICATOR";
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR";
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT";
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__BASE_EFFECTS";
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return "RPG_GLOBAL_PERK_ID__EQUIPMENT__NED_KELLY_BASE_IMMUNITIES";
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR";
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_4_EFFECTS";
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HORSEMAN_TIER_3_EFFECT";
		case -1394912816:
			return "RPG_GLOBAL_PERK_ID__END";
		case -1391351739:
			return "RPG_GLOBAL_PERK_ID__ITEM__TRINKET__RAM_HORN_EFFECT";
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HANGMAN_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DEADEYE_DURATION_1_COST";
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY";
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DEADEYE_DURATION_2_COST";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT";
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__QUITE_AN_INSPIRATION_AURA";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT";
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HORSEMAN_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR";
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_6_EFFECTS";
		case -749371485:
			return "RPG_GLOBAL_PERK_ID__ITEM__TRINKET__BUCK_ANTLER_EFFECT";
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__AWARENESS_BONUS_EFFECT";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT";
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT";
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT";
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_3_EFFECTS";
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_7_EFFECTS";
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT";
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR";
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__EQUIPMENT__NED_KELLY_FREEROAM_EFFECT";
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR";
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST";
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR";
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLIPPERY_BASTARD_PENALTY";
		case -254950601:
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__ANIMAL_FOCUS_EFFECT";
		case -242870769:
			return "RPG_GLOBAL_PERK_ID__ITEM__TRINKET__SNOWY_EGRET_EFFECT";
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT";
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__EQUIPMENT__NED_KELLY_BASE_EFFECTS";
		case -124368414:
			return "RPG_GLOBAL_PERK_ID__CONSUMABLE__HARDY_TONIC_EFFECT";
		case -106398498:
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__MERCY_EFFECT";
		case -97000889:
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_GIFT_OF_FOCUS_INDICATOR";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT";
		case -1:
			return "RPG_GLOBAL_PERK_ID__INVALID";
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_WINDED_INDICATOR";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT";
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST";
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PASSIVE_MODE__MOUNT_EFFECTS";
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT";
		case 275909046:
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__EAGLE_EYE_LEGENDARY_ANIMAL_EFFECT";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT";
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__PAINT_IT_BLACK_INDICATOR";
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT";
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT";
		case 558636891:
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_9_EFFECTS";
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONSUMABLE__DAILY_STEW_EFFECT";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT";
		case 634217179:
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__LEGENDARY_ANIMAL_LAUNCH_BONUS_EFFECT";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT";
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT";
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT";
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__FOCUS_BONUS_EFFECT";
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_0_EFFECTS";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT";
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT";
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_8_EFFECTS";
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT";
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__HUNTED_MASKED_EFFECTS";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_5_EFFECTS";
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return "RPG_GLOBAL_PERK_ID__EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS";
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HORSEMAN_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT";
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__STATUS_EFFECT__TRACKING_EFFECT";
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS";
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLOW_AND_STEADY_AURA";
		case 1256374770:
			return "RPG_GLOBAL_PERK_ID__ITEM__TRINKET__JAVELINA_TUSK_EFFECT";
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT";
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__BASE_IMMUNITIES";
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT";
		case 1305406380:
			return "RPG_GLOBAL_PERK_ID__ITEM__TRINKET__BEAVER_TOOTH_EFFECT";
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT";
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT";
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT";
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT";
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT";
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT";
		case 1462245043:
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__MASTER_TRACKER_EFFECT";
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE";
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__INTUITION_BONUS_EFFECT";
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__RESPAWN_EFFECTS";
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__DIVINATION_BONUS_EFFECT";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST";
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT";
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FOOL_ME_ONCE_INDICATOR";
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLOW_AND_STEADY_PENALTIES";
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__WINNING_STREAK_INDICATOR";
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT";
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT";
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT";
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PREDATOR__LEVEL_1_EFFECTS";
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT";
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DEADEYE_DURATION_3_COST";
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT";
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT";
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT";
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT";
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT";
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR";
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST";
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT";
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT";
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__EQUIPMENT__NED_KELLY_GOLDEN_EFFECT";
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST";
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return "RPG_GLOBAL_PERK_ID__CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS";
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT";
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__EQUIPMENT__NED_KELLY_COOP_EFFECT";
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return "RPG_GLOBAL_PERK_ID__ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT";
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

int func_273(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_285(iParam0);
	iVar1 = Global_1275959;
	iVar2 = func_276(iParam1, 1);
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Source: ", func_247(iParam0, 0), " Perk: ", func_272(iParam1, 0), " Deactivation Trigger: ", func_286(Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_1, 0));
	DEBUG::_0x1B08D1EB9D8C4931(136, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Source Player Index: ", iVar0, " Local Player: ", iVar1);
	switch (Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Source attempting to be disabled on Local Player. Disable directly. ");
				return 0;
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Source attempting to be disabled on Remote Player. Ignore... ");
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Deactivation Condition is not handled, but is for local player, remove from activation Queue... ");
				return 1;
			}
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Deactivation Condition is not handled, and is for a remote player, Ignoring... ");
	return 2;
}

int func_274(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_269(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid Source ID ", iParam1);
		return 0;
	}
	if (!func_287(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid perk ID ", iParam0);
		return 0;
	}
	iVar0 = func_276(iParam0, 1);
	func_288(iParam0, iParam1, iParam2);
	if (func_289(Global_1146683.f_35859.f_3116[iVar0 /*31*/]) && func_290(iParam0, Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Now checking Stack Group: ", func_291(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " for any perks that could be enabled now that this perk is diabled... ");
		vVar1 = { func_292(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_293(vVar1))
		{
			if (func_294(vVar1.x, vVar1.y, vVar1.z))
			{
				func_295(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_296(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
				DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Failed to activate next availible perk in Stack Group: ", func_291(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " there was a critical failure... ");
			}
		}
		else
		{
			func_296(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - No suitable replacement for active perk in Stack Group: ", func_291(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), "...");
		}
	}
	return 1;
}

void func_275(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_277(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 84, "__RPG_GLOBAL__ALTER_SOURCES_FOR_PERK_ID - Perk: ", func_272(func_297(iParam0, 1), 0), " is being altered by: ", iParam1, " to a total of: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_278(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	DEBUG::_0xF0783374333FD8CE(168, 84, "__RPG_GLOBAL__SET_SOURCES_FOR_PERK_ID - Perk: ", func_272(func_297(iParam0, 1), 0), " is being set to: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_279(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

bool func_280(int iParam0)
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

void func_281(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_298(&(uParam0->f_4));
}

int func_282(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "GET_INVENTORY_ITEM_SATCHEL_SIZE - failed to retreive the satchel item data from the itemdatabase for item: ", func_33(bParam0, 0));
		return -1;
	}
	return uVar0;
}

struct<5> func_283(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_284(iParam0, joaat("CHARACTER"), func_146(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_284(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_23(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PED_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_33(bParam1, 0), " (", bParam1, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, bParam1, bParam6, &Var0);
	return Var0;
}

int func_285(int iParam0)
{
	if (func_299(iParam0))
	{
		return (func_300(iParam0) % 32);
	}
	return Global_1275959;
}

char* func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("LEAVE_MELEE"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_MELEE";
		case joaat("LEAVE_FREEROAM_OR_COOP"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_FREEROAM_OR_COOP";
		case joaat("LEAVE_WEARING_HAT"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_WEARING_HAT";
		case joaat("ON_DISABLE"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__ON_DISABLE";
		case joaat("LEAVE_SCENARIO"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_SCENARIO";
		case -1467031492:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_WANTED";
		case joaat("LEAVE_ALLY_NEARBY"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_ALLY_NEARBY";
		case -1086445581:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_FREEROAM";
		case -971099982:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_NOT_AIMING";
		case joaat("LEAVE_DAMAGED"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_DAMAGED";
		case joaat("LEAVE_IN_VEHICLE"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_IN_VEHICLE";
		case joaat("LEAVE_WINDED"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_WINDED";
		case joaat("LEAVE_NO_HAT"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_NO_HAT";
		case joaat("DURATION"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__DURATION";
		case joaat("DURATION_OR_MISS"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__DURATION_OR_MISS";
		case joaat("LEAVE_DEADEYE"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_DEADEYE";
		case joaat("LEAVE_DUAL_WIELD"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_DUAL_WIELD";
		case 0:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__INVALID";
		case 130932099:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_AIMING";
		case joaat("LEAVE_MOUNTED"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_MOUNTED";
		case joaat("LEAVE_SCOPED"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_SCOPED";
		case joaat("ALLY_LEAVE_DEADEYE"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__ALLY_LEAVE_DEADEYE";
		case joaat("LEAVE_EAGLE_EYE"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_EAGLE_EYE";
		case 1002704651:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__ENEMY_LEAVE_LASSOED";
		case joaat("LEAVE_COVER"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_COVER";
		case 1154044740:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_GUN";
		case 1270499458:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__ALLY_LEAVE_POSSE_MEMBER";
		case joaat("LEAVE_LASSOING"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_LASSOING";
		case joaat("LEAVE_SPRINTING"):
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_SPRINTING";
		case 1948319980:
			return "RPG_GLOBAL_PERK_DEACTIVATE_TRIGGER__LEAVE_TIRED";
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

bool func_287(int iParam0)
{
	int iVar0;

	iVar0 = func_276(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_288(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_246(iParam1, 1);
	iVar1 = func_276(iParam0, 1);
	iVar2 = func_271(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_272(iParam0, 0), " from a source that hasn't previously enabled it ", func_247(iParam1, 0));
		return 0;
	}
	if (!Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - deactivating perk ", func_272(iParam0, 0), " and source ", func_247(iParam1, 0));
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_301(iVar3, 1);
		if (!func_302(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 - func_303(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - removing perk ", func_272(iParam0, 0), " to stat mod ", func_304(iVar3, 0), " with strength ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/].f_1);
			func_305(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_306(iVar6))
		{
		}
		else
		{
			iVar8 = func_307(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1] = (Global_1146683.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146683.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146683.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 0;
				func_308(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_289(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_290(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_287(iParam0))
	{
		return false;
	}
	if (!func_309(iParam1))
	{
		return false;
	}
	iVar0 = func_310(iParam1, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

char* func_291(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return "RPG_GLOBAL_PERK_STACK_GROUP_FOCUS_FIRE";
		case -1038992817:
			return "RPG_GLOBAL_PERK_STACK_GROUP_END";
		case -950874556:
			return "RPG_GLOBAL_PERK_STACK_GROUP_WATCH_AND_LEARN";
		case joaat("QUITE_AN_INSPIRATION"):
			return "RPG_GLOBAL_PERK_STACK_GROUP_QUITE_AN_INSPIRATION";
		case 0:
			return "RPG_GLOBAL_PERK_STACK_GROUP_STACKING";
		case 1938826026:
			return "RPG_GLOBAL_PERK_STACK_GROUP_HOLD_THE_LINE";
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

Vector3 func_292(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_311(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146683.f_35859.f_9503[iVar0 /*3*/];
}

bool func_293(vector3 vParam0)
{
	if (!func_287(vParam0.x))
	{
		return false;
	}
	if (!func_269(vParam0.y))
	{
		return false;
	}
	if (!func_312(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_294(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_246(iParam1, 1);
	iVar1 = func_276(iParam0, 1);
	iVar2 = func_271(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2184, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to activate perk with data - Group Index: ", iVar2, " Source Index: ", iVar0, " Perk Index: ", iVar1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_272(iParam0, 0), " from a source that hasn't previously enabled it ", func_247(iParam1, 0));
		return false;
	}
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1275959.f_21;
	if (Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - activating perk ", func_272(iParam0, 0), " and source ", func_247(iParam1, 0), " at POSIX time: ", Global_1275959.f_21);
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_301(iVar3, 1);
		if (!func_302(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 + func_303(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_272(iParam0, 0), " to stat mod ", func_304(iVar3, 0), " with strength ", func_303(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_272(iParam0, 0), " to stat mod ", func_304(iVar3, 0), " with total ", Global_1146683.f_2169[iVar5 /*205*/].f_201);
			func_313(iVar3);
		}
		iVar4++;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - perk: ", func_272(iParam0, 0), " Flag Count: ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28);
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_306(iVar6))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_314(iVar6, 0), " is not valid... skipping... ");
		}
		else if (!func_315(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_314(iVar6, 0), " is not currently disabled by tunables... skipping... ");
		}
		else
		{
			iVar8 = func_307(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146683.f_21645[iVar8 /*209*/].f_208)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Turning on flag ", func_314(iVar6, 0));
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 1;
				func_316(iVar6);
			}
		}
		iVar7++;
	}
	func_317(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_309(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_291(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_310(iParam0, 1);
	if (!func_287(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk: ", func_272(iParam1, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_269(iParam2))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Source: ", func_247(iParam2, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_312(iParam3))
	{
		DEBUG::_0x83407B92D46F25C3(136, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Index in Group: ", iParam3, " is not valid... Bailing out... ");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Setting Perk: ", func_272(iParam1, 0), " active for Perk Group: ", func_291(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_296(int iParam0)
{
	int iVar0;

	if (!func_309(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_291(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_310(iParam0, 1);
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA_AS_INVALID - Setting Perk: ", func_272(-1, 0), " active for Perk Group: ", func_291(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

int func_297(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST");
		case 2:
			return joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST");
		case 3:
			return joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST");
		case 4:
			return joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR");
		case 5:
			return joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR");
		case 6:
			return joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR");
		case 7:
			return joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR");
		case 8:
			return joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR");
		case 9:
			return joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR");
		case 10:
			return joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT");
		case 11:
			return joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT");
		case 12:
			return joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT");
		case 13:
			return joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA");
		case 14:
			return joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT");
		case 15:
			return joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT");
		case 16:
			return joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT");
		case 17:
			return joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT");
		case 18:
			return joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT");
		case 19:
			return joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT");
		case 20:
			return joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT");
		case 21:
			return joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT");
		case 22:
			return joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT");
		case 23:
			return joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR");
		case 24:
			return joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT");
		case 25:
			return joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT");
		case 26:
			return joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT");
		case 27:
			return joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT");
		case 28:
			return joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT");
		case 29:
			return joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT");
		case 30:
			return joaat("ABILITY_CARD__HANGMAN_INDICATOR");
		case 31:
			return joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT");
		case 32:
			return joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT");
		case 33:
			return joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT");
		case 34:
			return joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT");
		case 35:
			return joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT");
		case 36:
			return joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT");
		case 37:
			return joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT");
		case 38:
			return joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT");
		case 39:
			return joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT");
		case 40:
			return joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT");
		case 41:
			return joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT");
		case 42:
			return joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT");
		case 43:
			return joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT");
		case 44:
			return joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT");
		case 45:
			return joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT");
		case 46:
			return joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY");
		case 47:
			return joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT");
		case 48:
			return joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT");
		case 49:
			return joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT");
		case 50:
			return joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR");
		case 51:
			return joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST");
		case 52:
			return joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST");
		case 53:
			return joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST");
		case 54:
			return joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR");
		case 55:
			return joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT");
		case 56:
			return joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT");
		case 57:
			return joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT");
		case 58:
			return joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT");
		case 59:
			return joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT");
		case 60:
			return joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT");
		case 61:
			return joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA");
		case 62:
			return joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST");
		case 63:
			return joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT");
		case 64:
			return joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST");
		case 65:
			return joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT");
		case 66:
			return joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST");
		case 67:
			return joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT");
		case 68:
			return joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY");
		case 69:
			return joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT");
		case 70:
			return joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT");
		case 71:
			return joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT");
		case 72:
			return joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES");
		case 73:
			return joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA");
		case 74:
			return joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT");
		case 75:
			return joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT");
		case 76:
			return joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT");
		case 77:
			return joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT");
		case 78:
			return joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT");
		case 79:
			return joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT");
		case 80:
			return joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT");
		case 81:
			return joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT");
		case 82:
			return joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT");
		case 83:
			return joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT");
		case 84:
			return joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT");
		case 85:
			return joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT");
		case 86:
			return -97000889;
		case 87:
			return joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT");
		case 88:
			return joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT");
		case 89:
			return joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT");
		case 90:
			return joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT");
		case 91:
			return joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT");
		case 92:
			return joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT");
		case 93:
			return joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR");
		case 94:
			return joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR");
		case 95:
			return joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT");
		case 96:
			return joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT");
		case 97:
			return joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT");
		case 98:
			return joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT");
		case 99:
			return joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT");
		case 100:
			return joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT");
		case 101:
			return joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR");
		case 102:
			return joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST");
		case 103:
			return joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR");
		case 104:
			return joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT");
		case 105:
			return joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT");
		case 106:
			return joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT");
		case 107:
			return joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT");
		case 108:
			return joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT");
		case 109:
			return joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT");
		case 110:
			return joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT");
		case 111:
			return joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT");
		case 112:
			return joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT");
		case 113:
			return joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT");
		case 114:
			return joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT");
		case 115:
			return joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT");
		case 116:
			return joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR");
		case 117:
			return joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT");
		case 118:
			return joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT");
		case 119:
			return joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT");
		case 120:
			return joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT");
		case 121:
			return joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT");
		case 122:
			return joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT");
		case 123:
			return joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT");
		case 124:
			return joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT");
		case 125:
			return joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT");
		case 126:
			return joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR");
		case 127:
			return joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT");
		case 128:
			return joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT");
		case 129:
			return joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT");
		case 130:
			return joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT");
		case 131:
			return joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT");
		case 132:
			return joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT");
		case 133:
			return joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT");
		case 134:
			return joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT");
		case 135:
			return joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT");
		case 136:
			return joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT");
		case 137:
			return joaat("STATUS_EFFECT__POISON_EFFECT");
		case 138:
			return joaat("STATUS_EFFECT__TRACKING_EFFECT");
		case 139:
			return joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT");
		case 140:
			return joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT");
		case 141:
			return joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT");
		case 142:
			return joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT");
		case 143:
			return joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT");
		case 144:
			return joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT");
		case 145:
			return joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT");
		case 146:
			return joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT");
		case 147:
			return joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT");
		case 148:
			return joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT");
		case 149:
			return joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT");
		case 150:
			return 634217179;
		case 151:
			return 275909046;
		case 152:
			return -254950601;
		case 153:
			return -106398498;
		case 154:
			return 1462245043;
		case 155:
			return joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS");
		case 156:
			return joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES");
		case 157:
			return joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS");
		case 158:
			return joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT");
		case 159:
			return joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT");
		case 160:
			return joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT");
		case 161:
			return joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT");
		case 162:
			return 1305406380;
		case 163:
			return -242870769;
		case 164:
			return -749371485;
		case 165:
			return 1256374770;
		case 166:
			return -1391351739;
		case 167:
			return joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT");
		case 168:
			return joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT");
		case 169:
			return joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT");
		case 170:
			return joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT");
		case 171:
			return joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT");
		case 172:
			return joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT");
		case 173:
			return joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT");
		case 174:
			return joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS");
		case 175:
			return joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS");
		case 176:
			return joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS");
		case 177:
			return joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT");
		case 178:
			return joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS");
		case 179:
			return joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS");
		case 180:
			return joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS");
		case 181:
			return joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS");
		case 182:
			return joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS");
		case 183:
			return joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS");
		case 184:
			return joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS");
		case 185:
			return joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS");
		case 186:
			return joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS");
		case 187:
			return 558636891;
		case 188:
			return joaat("CONTENT__PREDATOR__BASE_EFFECTS");
		case 189:
			return joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE");
		case 190:
			return joaat("CONTENT__PREDATOR__BASE_IMMUNITIES");
		case 191:
			return joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS");
		case 192:
			return joaat("CONTENT__HUNTED__MASKED_EFFECTS");
		case 193:
			return joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT");
		case 194:
			return joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT");
		case 195:
			return joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT");
		case 196:
			return joaat("CONSUMABLE__DAILY_STEW_EFFECT");
		case 197:
			return -124368414;
		case 198:
			return -2019073637;
		case 199:
			return -1394912816;
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

void func_298(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_299(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_300(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (func_299(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_318(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_319(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_320(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_321(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_322(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_323(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_301(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 87;
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

bool func_302(int iParam0)
{
	int iVar0;

	iVar0 = func_301(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_303(var uParam0)
{
	bool bVar0;

	if (uParam0->f_2 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_304(*uParam0, 0), " has a Tunable associated with impact, looking up... ");
		bVar0 = func_324(794259616, uParam0->f_2, uParam0->f_1, "");
		DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_304(*uParam0, 0), " has an associated Tunable with impact: ", bVar0);
		return bVar0;
	}
	DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_304(*uParam0, 0), " using default Impact: ", uParam0->f_1);
	return uParam0->f_1;
}

char* func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return "RPG_GLOBAL_STAT_MOD_MP__MHORSE__CORE_DRAIN_RATE_HEALTH";
		case joaat("MDEFENSE__BULLET"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__BULLET";
		case -1936069272:
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__AI";
		case joaat("MHEALTH__REGEN_RATE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MHEALTH__REGEN_RATE";
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MHORSE_TRAMPLE_DAMAGE";
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__COST__PER_SHOT";
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return "RPG_GLOBAL_STAT_MOD_MP__MWEAPON__BOW_STAMINA_DRAIN";
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__BULLET_USING_MELEE_WEAPON";
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER";
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__DISTANCE_CLOSE";
		case -1575020444:
			return "RPG_GLOBAL_STAT_MOD_MP__MGAMEPLAY__WEIGHT__STAMINA__SPRINT_DEPLETION_RATE";
		case -1572802418:
			return "RPG_GLOBAL_STAT_MOD_MP__MDEADEYE__COST_MODIFIER";
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return "RPG_GLOBAL_STAT_MOD_MP__ALASSO__DAMAGE_DEALT_PER_SECOND";
		case joaat("MDEFENSE__EXPLOSIVE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__EXPLOSIVE";
		case -1349331938:
			return "RPG_GLOBAL_STAT_MOD_MP__MHEALTH__REGEN_RATE_IN_COVER";
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__MISSING_HEALTH_CONVERSION";
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT";
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT";
		case joaat("MHORSE__DEFENSE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MHORSE__DEFENSE";
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT";
		case joaat("MDEFENSE__RANGED"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__RANGED";
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON";
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT";
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MEAGLE_EYE__DEPLETION_RATE";
		case joaat("MDEFENSE__FIRE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__FIRE";
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHEALTH__GAIN_ON_KILL_PERCENT";
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MRPG_ATTIRBUTE_CORE_DRAIN_RATE";
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__EXPLOSIVE_WEAPONS";
		case joaat("MSTAMINA__REGEN_RATE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSTAMINA__REGEN_RATE";
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHEALTH__ALTER_TANK_PER_SECOND_PERCENT";
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER";
		case -377364039:
			return "RPG_GLOBAL_STAT_MOD_MP__MHORSE__CORE_DRAIN_RATE_STAMINA";
		case joaat("MACCURACY__AI_MODIFIER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MACCURACY__AI_MODIFIER";
		case joaat("MDAMAGE__FALLOFF"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__FALLOFF";
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT";
		case joaat("ADEADEYE_COST_DURATION"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__COST__DURATION";
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER";
		case joaat("MSKILL__PERCEPTION"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__PERCEPTION";
		case -1:
			return "RPG_GLOBAL_STAT_MOD_ID__INVALID";
		case 66478954:
			return "RPG_GLOBAL_STAT_MOD_MP__MGAMEPLAY__WEIGHT__DEFENSE_ALL_WEAPONS";
		case 91687087:
			return "RPG_GLOBAL_STAT_MOD_MP__MWEAPON__DEGRADATION_MODIFIER";
		case joaat("MSKILL__DISTILLER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__DISTILLER";
		case 194431787:
			return "RPG_GLOBAL_STAT_MOD_MP__MHORSE__BOND_RATE";
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEADEYE__GAIN_MULTIPLIER";
		case joaat("MSKILL__PROTECTION_TRADER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__PROTECTION_TRADER";
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return "RPG_GLOBAL_STAT_MOD_MP__MWEAPON__BOW_DRAW_TIME";
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEADEYE__DEPLETION_RATE";
		case joaat("MSKILL__DIVINATION"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__DIVINATION";
		case 410940916:
			return "RPG_GLOBAL_STAT_MOD_MP__MGAMEPLAY__CORE__DRAIN_RATE";
		case 447408404:
			return "RPG_GLOBAL_STAT_MOD_MP__MANIMAL__SKIN_QUALITY_MODIFIER";
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__GAIN_ON_HEADSHOT_PERCENT";
		case joaat("MHEALTH__RECHARGE_RATE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MHEALTH__RECHARGE_RATE";
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return "RPG_GLOBAL_STAT_MOD_MP__MACCURACY__LOCAL_PLAYER_MODIFIER";
		case joaat("MSKILL__INTUITION"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__INTUITION";
		case joaat("MDAMAGE__MELEE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__MELEE";
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT";
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__GAIN_ON_REVIVE_PERCENT";
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__PROTECTION_MOONSHINER";
		case joaat("MDEFENSE__PLAYERS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__PLAYERS";
		case 874892169:
			return "RPG_GLOBAL_STAT_MOD_END";
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHEALTH__ALTER_CORE_PER_SECOND_PERCENT";
		case 920214733:
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__LEGENDARY_ANIMAL_LAUNCH_RATE";
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return "RPG_GLOBAL_STAT_MOD_MP__MINCAPACITATION__BLEEDOUT_TIME";
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT";
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING";
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT";
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSTAMINA__REGEN_RATE_HEALTH_CONVERSION";
		case joaat("MDEFENSE__MELEE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__MELEE";
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT";
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT";
		case 1356998909:
			return "RPG_GLOBAL_STAT_MOD_MP__MANIMAL__DETECTION_MODIFIER";
		case joaat("MSKILL__FOCUS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__FOCUS";
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON";
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT";
		case 1546732394:
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__BOWS";
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__STAMINA_CONVERSION";
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__DISTANCE_FAR";
		case joaat("MDAMAGE__BULLETS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__BULLETS";
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDEFENSE__STRENGTH_IN_NUMBERS";
		case 1727267699:
			return "RPG_GLOBAL_STAT_MOD_ID__MINVALID";
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__STAMINA_CONVERSION";
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__COST__ACTIVATION";
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSTAMINA__SPRINT_DEPLETION_RATE";
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT";
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT";
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON";
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__ALL_WEAPONS";
		case joaat("MDAMAGE__THROWN"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__THROWN";
		case joaat("MSKILL__AWARENESS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__AWARENESS";
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return "RPG_GLOBAL_STAT_MOD_MP__MHORSE__DEFENSE_PLAYERS";
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return "RPG_GLOBAL_STAT_MOD_MP__ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT";
		case joaat("MDAMAGE__SHOTGUN"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__SHOTGUNS";
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return "RPG_GLOBAL_STAT_MOD_MP__AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON";
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__BULLETS_PER_CONSECUTIVE_SHOT";
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return "RPG_GLOBAL_STAT_MOD_MP__MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT";
		case joaat("MSKILL__POTENTIAL"):
			return "RPG_GLOBAL_STAT_MOD_MP__MSKILL__POTENTIAL";
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

void func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_302(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - Stat Mod: ", func_304(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_301(iParam0, 1);
	if (!func_325(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_304(iParam0, 0));
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - stat mod ", func_304(iParam0, 0), " is no longer impacting stat ", func_326(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_327(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_328(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - removing stat ", func_326(Global_1146683.f_2169[iVar0 /*205*/], 0), " from subscribed action ", func_329(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
	iVar2 = 0;
	while (iVar2 < Global_1146683.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146683.f_47561[iVar1 /*25*/][iVar2] != Global_1146683.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1146683.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1146683.f_47561[iVar1 /*25*/].f_23 = (Global_1146683.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1146683.f_47561[iVar1 /*25*/][iVar2] = Global_1146683.f_47561[iVar1 /*25*/][Global_1146683.f_47561[iVar1 /*25*/].f_23];
			Global_1146683.f_47561[iVar1 /*25*/][Global_1146683.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_306(int iParam0)
{
	int iVar0;

	iVar0 = func_307(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_308(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Now Disabling Stat Flag: ", func_314(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_330();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_331();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - End Bleeding for local player. ");
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer being tracked... ");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_332(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer drained! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_332(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer disoriented! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_332(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer poisoned. Stop periodic icon. ");
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_119(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer in a Toxic Cloud! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_332(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer overpowered as a result of reviving. Clear effects... ");
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer pulsing in the Repost State. Stop timer. ");
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer the Predator. Stop periodic icon. ");
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer invicible... Disable overpowered states. ");
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Focus Fire VFX end. ");
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Remove VFX ", func_314(iParam0, 0));
			func_334(func_333(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Deadeye Aura unequip.");
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Inspiration Aura unequip.");
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Turn off Eagle Eye Plus");
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 1898374676:
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Turn off Mercy Killing");
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Turn off the Tracking Upgrade.");
			PLAYER::_0xDFC85C5199045026(iVar1, 1f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Turn off Ned Kelly base properties... ");
			func_335();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_325(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_325(16);
			break;
	}
}

bool func_309(int iParam0)
{
	int iVar0;

	iVar0 = func_310(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_310(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_311(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_336(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146683.f_35859.f_11700)
	{
		iVar64 = func_276(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 1);
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "RPG_GLOBAL_GET_ACTIVATION_QUEUE_PERK_INDEX_FROM_NEXT_AVAILIBLE_PERK_IN_STACK_GROUP - Now processing Perk: ", func_272(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 0), "...");
		if (Global_1146683.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146683.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_337(Global_1146683.f_35859.f_9503[iVar65 /*3*/], Global_1146683.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_338(Global_1146683.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_312(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STATS_IS_PERK_INDEX_IN_GROUP_VALID - Invalid perk group index ", iParam0);
		return false;
	}
	return true;
}

void func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_302(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - Stat Mod: ", func_304(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_301(iParam0, 1);
	if (!func_325(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_304(iParam0, 0));
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - subcribing stat mod ", func_304(iParam0, 0), " to stat ", func_326(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_327(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_328(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1146683.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146683.f_47561[iVar1 /*25*/][iVar2] == Global_1146683.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - adding stat ", func_326(Global_1146683.f_2169[iVar0 /*205*/], 0), " to action ", func_329(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
	Global_1146683.f_47561[iVar1 /*25*/][Global_1146683.f_47561[iVar1 /*25*/].f_23] = Global_1146683.f_2169[iVar0 /*205*/];
	Global_1146683.f_47561[iVar1 /*25*/].f_23++;
}

char* func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return "RPG_GLOBAL_STAT_FLAG_MP__EAGLE_EYE_HIGHLIGHT_BOUNTIES";
		case joaat("HEADSHOT_IMMUNITY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__HEADSHOT_IMMUNITY";
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__HAT_BLOCKS_HEADSHOT";
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__ANIMAL_TURN_IN_EFFICIENCY";
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISABLE_HEALTH_REGENERATION";
		case joaat("FIRE_CAP_INFINTE"):
			return "RPG_GLOBAL_STAT_FLAG_MP__FIRE_CAP_INFINTE";
		case joaat("SLOW_AND_STEADY_AURA"):
			return "RPG_GLOBAL_STAT_FLAG_MP__SLOW_AND_STEADY_AURA";
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return "RPG_GLOBAL_STAT_FLAG_MP__EAGLE_EYE_HIGHLIGHT_EARTH";
		case -1730553768:
			return "RPG_GLOBAL_STAT_FLAG_MP__RANGED_LOCKON_IMMUNITY";
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return "RPG_GLOBAL_STAT_FLAG_MP__MOMENT_TO_RECUPERATE_VFX";
		case -1651690657:
			return "RPG_GLOBAL_STAT_FLAG_MP__WEATHER_IMMUNITY";
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return "RPG_GLOBAL_STAT_FLAG_MP__NO_CRITICAL_DAMAGE_PLAYERS";
		case -1583192324:
			return "RPG_GLOBAL_STAT_FLAG_MP__SHOW_HERB_BLIPS";
		case joaat("REVIVE_ON_BLEEDOUT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__REVIVE_ON_BLEEDOUT";
		case -1486292178:
			return "RPG_GLOBAL_STAT_FLAG_MP__SHOW_ANIMAL_BLIPS";
		case joaat("LASSO_IMMUNITY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__LASSO_IMMUNITY";
		case joaat("DISABLE_JUMPING"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISABLE_JUMPING";
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return "RPG_GLOBAL_STAT_FLAG_MP__GRAPPLE_IMMUNITY_FROM_AI";
		case -1026481003:
			return "RPG_GLOBAL_STAT_FLAG_MP__CANNOT_LASSO_PLAYERS";
		case joaat("TAGGING_IMMUNITY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__TAGGING_IMMUNITY";
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return "RPG_GLOBAL_STAT_FLAG_MP__INCAPACITATION_INSTEAD_OF_DEATH";
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_HORSE_SPEED_RESTRICTION_JOG";
		case joaat("FATAL_MELEE_IMMUNITY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__FATAL_MELEE_IMMUNITY";
		case joaat("FORCE_HEALTH_REGEN"):
			return "RPG_GLOBAL_STAT_FLAG_MP__FORCE_HEALTH_REGEN";
		case joaat("CONFUSION_EFFECT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__CONFUSION";
		case joaat("FULL_LOCKON_IMMUNITY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__FULL_LOCKON_IMMUNITY";
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return "RPG_GLOBAL_STAT_FLAG_MP__OVERPOWER_INFINITE_HEALTH";
		case -350459285:
			return "RPG_GLOBAL_STAT_FLAG_ID__END";
		case joaat("DAMAGE_CAP_INFINTE"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DAMAGE_CAP_INFINTE";
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return "RPG_GLOBAL_STAT_FLAG_MP__MOMENT_TO_RECUPERATE_AURA";
		case -199042163:
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_HORSE_SPEED_RESTRICTION_FAST_WALK";
		case joaat("NED_KELLY_ADVERSARY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__NED_KELLY_ADVERSARY";
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_FOOT_SPEED_RESTRICTION_JOG";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__TOXIC_MOONSHINE";
		case -1:
			return "RPG_GLOBAL_STAT_FLAG_ID__INVALID";
		case joaat("TRAIL_EFFECT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__TRAIL";
		case joaat("POISON_EFFECT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__POISON";
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_HORSE_SPEED_RESTRICTION_WALK";
		case joaat("SLIPPERY_BASTARD_VFX"):
			return "RPG_GLOBAL_STAT_FLAG_MP__SLIPPERY_BASTARD_VFX";
		case joaat("DISORIENT_EFFECT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISORIENT";
		case joaat("FOCUS_FIRE_VFX"):
			return "RPG_GLOBAL_STAT_FLAG_MP__FOCUS_FIRE_VFX";
		case joaat("PREDATOR_ICON_DISPLAY"):
			return "RPG_GLOBAL_STAT_FLAG_MP__PREDATOR_ICON_DISPLAY";
		case joaat("WOUND_EFFECT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__WOUND";
		case 718630298:
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_FOOT_SPEED_RESTRICTION_FAST_WALK";
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return "RPG_GLOBAL_STAT_FLAG_MP__EAGLE_EYE_PLUS_FLAG";
		case joaat("NED_KELLY_BASE"):
			return "RPG_GLOBAL_STAT_FLAG_MP__NED_KELLY_BASE";
		case joaat("DISABLE_COMBAT_DIVE"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISABLE_COMBAT_DIVE";
		case joaat("SLOW_AND_STEADY_VFX"):
			return "RPG_GLOBAL_STAT_FLAG_MP__SLOW_AND_STEADY_VFX";
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISABLE_FACIAL_ACTIONS";
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return "RPG_GLOBAL_STAT_FLAG_MP__CANNOT_LOCK_ON_PLAYERS";
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return "RPG_GLOBAL_STAT_FLAG_MP__GRAPPLE_IMMUNITY_FROM_PLAYERS";
		case 1037859088:
			return "RPG_GLOBAL_STAT_FLAG_MP__ANIMAL_FOCUS_ENABLED";
		case 1066450193:
			return "RPG_GLOBAL_STAT_FLAG_MP__EAGLE_EYE_HIGHLIGHT_LEGENDARY_ANIMALS";
		case 1159158432:
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_HORSE_SPEED_RESTRICTION_MOTIONLESS";
		case joaat("OVERPOWER_PREDATOR"):
			return "RPG_GLOBAL_STAT_FLAG_MP__OVERPOWER_PREDATOR";
		case 1242495215:
			return "RPG_GLOBAL_STAT_FLAG_MP__NO_CRITICAL_DAMAGE";
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS";
		case 1341326366:
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_FOOT_SPEED_RESTRICTION_MOTIONLESS";
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return "RPG_GLOBAL_STAT_FLAG_MP__OVERRIDE_INFINITE_DEADEYE";
		case 1398483650:
			return "RPG_GLOBAL_STAT_FLAG_MP__MASTER_TRACKER_FLAG";
		case joaat("PULSE_REPOST_STATE"):
			return "RPG_GLOBAL_STAT_FLAG_MP__PULSE_REPOST_STATE";
		case joaat("DISABLE_CONSUMABLES"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISABLE_CONSUMABLES";
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return "RPG_GLOBAL_STAT_FLAG_MP__ON_FOOT_SPEED_RESTRICTION_WALK";
		case joaat("DISABLE_INCAPACITATION"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISABLE_INCAPACITATION";
		case joaat("DRAIN_EFFECT"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DRAIN";
		case 1898374676:
			return "RPG_GLOBAL_STAT_FLAG_MP__MERCY_KILL_FLAG";
		case 2067881273:
			return "RPG_GLOBAL_STAT_FLAG_MP__FORCE_FREEAIM";
		case joaat("DISABLE_DROWNING"):
			return "RPG_GLOBAL_STAT_FLAG_MP__DISABLE_DROWNING";
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return "RPG_GLOBAL_STAT_FLAG_MP__QUITE_AN_INSPIRATION_AURA";
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

bool func_315(var uParam0)
{
	bool bVar0;

	DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_314(*uParam0, 0), " Associated Tunable: ", UNK_0x4379B6FA65D55295(uParam0->f_1));
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_339(794259616, uParam0->f_1, 1, "");
		DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_314(*uParam0, 0), " is has Tunable Enabled State: ", MISC::_0xF216F74101968DB0(bVar0));
		return bVar0;
	}
	return true;
}

void func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Now Enabling Stat Flag: ", func_314(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_330();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_331();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Start Wound for local player.");
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now being tracked...");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_332(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now drained! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_332(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now disoriented! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_332(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is poisoned. Start core periodic icon. ");
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_119(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now in a Toxic Cloud! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_332(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now overpowered as a result of reviving... ");
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now the Predator. Start periodic icon. ");
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Focus Fire VFX start. ");
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Slipper Bastard VFX start. ");
			iVar2 = func_333(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_340(iParam0, 0));
			func_341(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_340(iParam0, 1));
			func_341(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_340(iParam0, 2));
			func_341(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_340(iParam0, 3));
			func_341(iVar2, 2, 1, iVar3, 0);
			Jump @963; //curOff = 600
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Moment to Recuperate VFX start. ");
			iVar2 = func_333(iParam0);
			func_341(iVar2, 3, 1, -1, 1);
			Jump @963; //curOff = 633
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Slow and Steady VFX start. ");
			iVar2 = func_333(iParam0);
			func_341(iVar2, 4, 1, -1, 0);
			Jump @963; //curOff = 666
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Moment to Recuperate Aura equip.");
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			Jump @963; //curOff = 719
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Slow and Steady Aura equip.");
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			Jump @963; //curOff = 772
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Quite and Inspiration Aura equip.");
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			Jump @963; //curOff = 820
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on Eagle Eye Plus");
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			Jump @963; //curOff = 842
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on Mercy Killing");
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			Jump @963; //curOff = 864
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on the Tracking Upgrade.");
			PLAYER::_0xDFC85C5199045026(iVar1, 0.5f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, 2f);
			Jump @963; //curOff = 897
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on Ned Kelly base properties... ");
			func_342();
			Jump @963; //curOff = 916
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_325(17);
			Jump @963; //curOff = 938
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_325(16);
		}

void func_317(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Attempting to play Activation Sound: ", func_343(iParam0, 0));
	sVar0 = func_344(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound name associated with Activation Sound: ", func_343(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound name: ", sVar0, " associated with Activation Sound: ", func_343(iParam0, 0));
	sVar1 = func_345(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound set associated with Activation Sound: ", func_343(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound set: ", sVar1, " associated with Activation Sound: ", func_343(iParam0, 0));
	DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Playing sound name: ", sVar0, " in sound set: ", sVar1, " for Activation Sound: ", func_343(iParam0, 0));
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275959.f_8, sVar1, false, 0, 0);
}

bool func_318(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_319(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_320(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_321(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_322(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_323(int iParam0)
{
	int iVar0;

	iVar0 = func_246(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

bool func_324(bool bParam0, bool bParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_346(bParam0, bParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(bParam0, bParam1, Var0.f_10.f_1);
		DEBUG::_0xA308F935BDECCEC0(680, 188, "NET_TUNABLES__RETRIEVE_TUNABLE__FLOAT - ", &(Var0.f_1), " = ", MISC::_0x2B6846401D68E563(bVar22, 4));
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(bParam0, bParam1, fParam2);
		DEBUG::_0xA308F935BDECCEC0(168, 188, "NET_TUNABLES__RETRIEVE_TUNABLE__FLOAT - ", sParam3, " not found in pardata");
	}
	return bVar22;
}

bool func_325(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STATS__ADD_STAT_ID_TO_UPDATE_QUEUE - Invalid stat ID ", iParam0);
		return false;
	}
	if (iParam0 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STATS__ADD_STAT_ID_TO_UPDATE_QUEUE - NULL stat doesn't use the update queue, skipping", iParam0);
		return true;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1146683.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146683.f_2165 >= 21)
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "RPG_GLOBAL_STATS__ADD_STAT_ID_TO_UPDATE_QUEUE - No more space in update queue, increase the size of g_rpgGlobalCacheData.sStatsData.eUpdateQueue");
		return false;
	}
	Global_1146683.f_2143[Global_1146683.f_2165] = iParam0;
	Global_1146683.f_2165++;
	DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL_STATS__ADD_STAT_ID_TO_UPDATE_QUEUE - adding stat ", func_326(iParam0, 0), " to update queue. Total stats in queue: ", Global_1146683.f_2165);
	return true;
}

char* func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "RPG_GLOBAL_STAT_ID__INVALID";
		case 0:
			return "RPG_GLOBAL_STAT_ID__NULL";
		case 1:
			return "RPG_GLOBAL_STAT_MP__HEALTH";
		case 2:
			return "RPG_GLOBAL_STAT_MP__DEFENSE__ALL_WEAPONS";
		case 3:
			return "RPG_GLOBAL_STAT_MP__DEFENSE__WEAPON_TYPES";
		case 4:
			return "RPG_GLOBAL_STAT_MP__DAMAGE__ALL_WEAPONS";
		case 5:
			return "RPG_GLOBAL_STAT_MP__DAMAGE__WEAPON_TYPES";
		case 6:
			return "RPG_GLOBAL_STAT_MP__DAMAGE__DISTANCE";
		case 7:
			return "RPG_GLOBAL_STAT_MP__DAMAGE__FALLOFF";
		case 8:
			return "RPG_GLOBAL_STAT_MP__ACCURACY";
		case 9:
			return "RPG_GLOBAL_STAT_MP__DEADEYE__MODIFIERS";
		case 10:
			return "RPG_GLOBAL_STAT_MP__DEADEYE__COSTS";
		case 11:
			return "RPG_GLOBAL_STAT_MP__STAMINA__REGEN_RATE";
		case 12:
			return "RPG_GLOBAL_STAT_MP__WEAPON__BOW";
		case 13:
			return "RPG_GLOBAL_STAT_MP__EFFECTS__OVER_TIME";
		case 14:
			return "RPG_GLOBAL_STAT_MP__EAGLE_EYE__MODIFIERS";
		case 15:
			return "RPG_GLOBAL_STAT_MP__RPG__MODIFIERS";
		case 16:
			return "RPG_GLOBAL_STAT_MP__INCAPACITATION__MODIFIERS";
		case 17:
			return "RPG_GLOBAL_STAT_MP__SPEED__PLAYER";
		case 18:
			return "RPG_GLOBAL_STAT_MP__GAMEPLAY_STATES";
		case 19:
			return "RPG_GLOBAL_STAT_MP__HORSE_STATES";
		case 20:
			return "RPG_GLOBAL_STAT_MP__MISC";
		case 21:
			return "RPG_GLOBAL_STAT_ID__ARRAY_SIZE";
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

bool func_327(int iParam0)
{
	int iVar0;

	iVar0 = func_328(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_328(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

char* func_329(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return "RPG_GLOBAL_STAT_ACTION_ID__CONSECUTIVE_DAMAGE_DEALT";
		case -1016837116:
			return "RPG_GLOBAL_STAT_ACTION_ID__END";
		case 0:
			return "RPG_GLOBAL_STAT_ACTION_ID__INVALID";
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return "RPG_GLOBAL_STAT_ACTION_ID__CONSECUTIVE_DAMAGE_TAKEN";
		case joaat("NEARBY_ALLIES"):
			return "RPG_GLOBAL_STAT_ACTION_ID__NEARBY_ALLIES";
		case 1416591065:
			return "RPG_GLOBAL_STAT_ACTION_ID__NEARBY_ENEMIES";
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

void func_330()
{
	bool bVar0;
	bool bVar1;

	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT__HANDLE_LOCKON_IMMUNITIES - Updating Lock On Immunities... ");
	if (Global_1146683.f_21645[3 /*209*/].f_208)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT__UPDATE__GAMEPLAY_STATES - Player has RANGED lock on immunity this frame... ");
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 550, bVar0);
	if (Global_1146683.f_21645[4 /*209*/].f_208)
	{
		if (!func_253(Global_1277758[Global_1275959 /*87*/].f_86, 1))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT__UPDATE__GAMEPLAY_STATES - Player has FULL lock on immunity this frame... ");
			bVar1 = true;
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT__UPDATE__GAMEPLAY_STATES - Local Player is in the Moonshine shack, so we allow lock on this frame... ");
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 556, bVar1);
}

void func_331()
{
	bool bVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT__UPDATE__GAMEPLAY_STATES - Updating Headshot Immunity... ");
	bVar0 = false;
	if (Global_1146683.f_21645[12 /*209*/].f_208)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT__HANDLE_HEASHOT_IMMUNITY - Headshot Immunity RPG Stat Flag is active. Setting Headshot Immunity to TRUE");
		bVar0 = true;
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT__HANDLE_HEASHOT_IMMUNITY - Player is not immune to headshots this frame... ");
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 263, bVar0);
}

char* func_332(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_POSTFX_NAME - Stat Flag: ", func_314(iParam0, 0), " does not have a Post FX name. Should you set one up? ");
	return "";
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_SCRIPT_ID - Stat Flag: ", func_314(iParam0, 0), " does not have a Particle FX. Should you set one up? ");
	return 0;
}

void func_334(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1194443[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1194443[iVar0 /*8*/].f_7 = 1;
			Global_1194443[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_335()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__DISABLE_NED_KELLY_BASE_INTERNAL - Cleaning up Ned Kelly base properties and application... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275959.f_8);
}

int func_336(int iParam0)
{
	int iVar0;

	if (!func_309(iParam0))
	{
		return -1;
	}
	iVar0 = func_310(iParam0, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/];
}

bool func_337(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_287(iParam0))
	{
		return false;
	}
	iVar0 = func_276(iParam0, 1);
	iVar2 = Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_289(Global_1146683.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146683.f_35859.f_9286[func_310(iVar2, 1) /*3*/];
		Var4 = { func_338(iVar3) };
		if (iVar3 != iParam0 && Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - A stronger perk in the perk stack group: ", func_291(iVar2, 0), " is already active. Active Perk: ", func_272(iVar3, 0));
			return false;
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Evaluating Activation Trigger: ", func_347(Global_1146683.f_35859.f_3116[iVar0 /*31*/], 0), " for activation... ");
	switch (Global_1146683.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_348() && !func_349())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can only be activated when you are in Free Roam or running COOP. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can be activated! ");
			return true;
		case -2010146101:
			if (!func_348())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can only be activated when you are in Free Roam. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_285(iParam1);
			if (iVar1 == Global_1275959)
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can only be activated from REMOTE players. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can be activated from Remote Player Index: ", iVar1);
			return true;
		case -2129621195:
			iVar1 = func_285(iParam1);
			if (iVar1 == Global_1275959)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Local Player: ", Global_1275959, " cannot give this bonus to themselves... ");
				return false;
			}
			if (!GANG::_0x424B17A7DC5C90BC(Global_1275959.f_154[Global_1275959]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Local Player: ", Global_1275959, " is the Posse Leader, and the bonus is only for Posse members... ");
				return false;
			}
			if (!GANG::_0x81FB74C83C2ED69F(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(2184, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Local Player: ", Global_1275959, " and Source Player: ", iVar1, " are in different Posses... ");
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_285(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is Invalid... ");
				return false;
			}
			if (iVar1 != Global_1275959 && !func_350(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT an Ally... ");
				return false;
			}
			if (!func_351(512, iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT in Dead Eye.. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can be activated! ");
			return true;
		case -1503245593:
			if (!Global_1957252.f_1716[8])
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player is not currently Lassoed... ");
				return false;
			}
			iVar1 = func_285(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is Invalid... ");
				return false;
			}
			if (PED::_0x0C31C51168E80365(Global_1275959.f_8) != PLAYER::GET_PLAYER_PED(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Remote Player: ", iVar1, " is not the one lassoing you... ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " can be activated! ");
			return true;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_272(iParam0, 0), " has no activation logic defined, fix this... ");
	return false;
}

struct<31> func_338(int iParam0)
{
	int iVar0;

	iVar0 = func_276(iParam0, 1);
	return Global_1146683.f_35859.f_3116[iVar0 /*31*/];
}

bool func_339(bool bParam0, bool bParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_346(bParam0, bParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(bParam0, bParam1, Var0.f_10.f_2);
		DEBUG::_0xA308F935BDECCEC0(680, 188, "NET_TUNABLES__RETRIEVE_TUNABLE__FLOAT - ", &(Var0.f_1), " = ", MISC::_0xF216F74101968DB0(bVar22));
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(bParam0, bParam1, bParam2);
		DEBUG::_0xA308F935BDECCEC0(168, 188, "NET_TUNABLES__RETRIEVE_TUNABLE__FLOAT - ", sParam3, " not found in pardata");
	}
	return bVar22;
}

char* func_340(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_BONE - Stat Flag: ", func_314(iParam0, 0), " does not have a Particle FX bone. Should you set one up? ");
	return "";
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1194443[iVar0 /*8*/]) && !Global_1194443[iVar0 /*8*/].f_6)
		{
			Global_1194443[iVar0 /*8*/].f_5 = iParam0;
			Global_1194443[iVar0 /*8*/].f_1 = iParam1;
			Global_1194443[iVar0 /*8*/].f_2 = iParam2;
			Global_1194443[iVar0 /*8*/].f_3 = iParam3;
			Global_1194443[iVar0 /*8*/].f_4 = iParam4;
			Global_1194443[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_342()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__ENABLE_NED_KELLY_BASE_INTERNAL - Ned Kelly is equipped... Initializing Base properties... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275959.f_8, 0.7f);
}

char* func_343(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RPG_GLOBAL_PERK_SOUND_NOTIFY_NEVER_WITHOUT_ONE_HAT_RICOCHET";
		case 0:
			return "RPG_GLOBAL_PERK_SOUND_INVALID";
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

char* func_344(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_345(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_346(bool bParam0, bool bParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = bParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = bParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = bParam0;
		uParam2->f_9 = bParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_352(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
					DEBUG::_0x83407B92D46F25C3(2728, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA - Retrieving Data for: iContextHash: ", UNK_0x4379B6FA65D55295(bParam0), " iNameHash: ", UNK_0x4379B6FA65D55295(bParam1), ", Are you sure you have the type set up right?");
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
					DEBUG::_0x83407B92D46F25C3(2728, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA - Retrieving Data for: iContextHash: ", UNK_0x4379B6FA65D55295(bParam0), " iNameHash: ", UNK_0x4379B6FA65D55295(bParam1), ", Are you sure you have the type set up right?");
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
					DEBUG::_0x83407B92D46F25C3(2728, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA - Retrieving Data for: iContextHash: ", UNK_0x4379B6FA65D55295(bParam0), " iNameHash: ", UNK_0x4379B6FA65D55295(bParam1), ", Are you sure you have the type set up right?");
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(168, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA - Retrieved data for = ", &(uParam2->f_1), ", default = ", uParam2->f_10);
				break;
			case 1:
				DEBUG::_0xA308F935BDECCEC0(680, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA - Retrieved data for = ", &(uParam2->f_1), ", default = ", MISC::_0x2B6846401D68E563(uParam2->f_10.f_1, 4));
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(680, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA - Retrieved data for = ", &(uParam2->f_1), ", default = ", MISC::_0xF216F74101968DB0(uParam2->f_10.f_2));
				break;
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -       iContextHash = ", *uParam2);
		DEBUG::_0x1B08D1EB9D8C4931(8, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -          iNameHash = ", uParam2->f_9);
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DEBUG::_0x1B08D1EB9D8C4931(8, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -                  sMin = ", uParam2->f_14);
				break;
			case 1:
				DEBUG::_0x1B08D1EB9D8C4931(40, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -                  sMin = ", MISC::_0x2B6846401D68E563(uParam2->f_14.f_1, 4));
				break;
			case 2:
				DEBUG::_0x1B08D1EB9D8C4931(40, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -                  sMin = ", MISC::_0xF216F74101968DB0(uParam2->f_14.f_2));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DEBUG::_0x1B08D1EB9D8C4931(8, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -                  sMax = ", uParam2->f_18);
				break;
			case 1:
				DEBUG::_0x1B08D1EB9D8C4931(40, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -                  sMax = ", MISC::_0x2B6846401D68E563(uParam2->f_18.f_1, 4));
				break;
			case 2:
				DEBUG::_0x1B08D1EB9D8C4931(40, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA -                  sMax = ", MISC::_0xF216F74101968DB0(uParam2->f_18.f_2));
				break;
		}
		return true;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 188, "NET_TUNABLES_PARDATA_RETRIEVE_DATA - Failed, returning FALSE");
	return false;
}

char* func_347(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_REVIVED_REMOTE";
		case -2129621195:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ALLY_ENTER_POSSE_MEMBER";
		case -2010146101:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_FREEROAM";
		case -1606735498:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_LONG_DAMAGE_DEALT";
		case -1503245593:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENEMY_ENTER_LASSOED";
		case joaat("ON_HEADSHOT"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_HEADSHOT";
		case joaat("ENTER_WEARING_HAT"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_WEARING_HAT";
		case joaat("ENTER_SPRINTING"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_SPRINTING";
		case joaat("ENTER_MOUNTED"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_MOUNTED";
		case joaat("ENTER_DUAL_WIELD"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_DUAL_WIELD";
		case -971275364:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_GUN";
		case joaat("ON_KILL"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_KILL";
		case joaat("ENTER_SCENARIO"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_SCENARIO";
		case joaat("ENTER_REVIVER"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_REVIVER";
		case -193993646:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_WANTED";
		case joaat("ENTER_ALLY_NEARBY"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_ALLY_NEARBY";
		case -23641105:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_DEADEYE_GAIN";
		case 0:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__INVALID";
		case joaat("ON_DAMAGE_TAKEN"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_DAMAGE_TAKEN";
		case joaat("ENTER_MELEE"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_MELEE";
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_DAMAGE_DEALT_FROM_HORSEBACK";
		case joaat("ALLY_ENTER_DEADEYE"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ALLY_ENTER_DEADEYE";
		case 429965152:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_NOT_AIMING";
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_DAMAGE_TAKEN_FROM_HORSEBACK";
		case joaat("ENTER_WINDED"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_WINDED";
		case joaat("ENTER_NO_HAT"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_NO_HAT";
		case joaat("ON_ENABLE"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_ENABLE";
		case joaat("ENTER_EAGLE_EYE"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_EAGLE_EYE";
		case joaat("ENTER_DEADEYE"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_DEADEYE";
		case joaat("ENTER_FREEROAM_OR_COOP"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_FREEROAM_OR_COOP";
		case joaat("ENTER_SCOPED"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_SCOPED";
		case joaat("ENTER_COVER"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_COVER";
		case 1305415806:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_TIRED";
		case 1461424861:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_AIMING";
		case 1691008805:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_SPAWN";
		case joaat("ENTER_DAMAGED"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_DAMAGED";
		case joaat("ON_DAMAGE_DEALT"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_DAMAGE_DEALT";
		case joaat("ENTER_REVIVED"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_REVIVED";
		case joaat("ENTER_LASSOING"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_LASSOING";
		case joaat("ENTER_IN_VEHICLE"):
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ENTER_IN_VEHICLE";
		case 2116793692:
			return "RPG_GLOBAL_PERK_ACTIVATE_TRIGGER__ON_CLOSE_DAMAGE_DEALT";
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

bool func_348()
{
	return Global_1572887.f_6;
}

bool func_349()
{
	if (!Global_1048577)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Mission controller not active, not in COOP. Returning FALSE... ");
		return false;
	}
	if (!func_354(func_353(0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - No active/valid UID. Returning FALSE... ");
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is not a mission. Returning FALSE...");
		return false;
	}
	if (func_355(Global_524288.f_40400))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is coop sub-type. Returning TRUE...");
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Content is not COOP. Returning FALSE. ");
	return false;
}

bool func_350(char* sParam0)
{
	if (func_356(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_357(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

bool func_351(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

int func_352(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

struct<2> func_353(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_354(struct<2> Param0)
{
	if (!func_358(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_359(Param0))
	{
		return false;
	}
	return true;
}

bool func_355(int iParam0)
{
	return (((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414) || iParam0 == 31269700);
}

bool func_356(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_357(char* sParam0)
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
	if (!Global_1275959.f_22[iVar0])
	{
		func_360(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_361(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

bool func_358(int iParam0)
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

int func_359(int iParam0)
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

void func_360(char* sParam0)
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
	func_361(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_361(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

