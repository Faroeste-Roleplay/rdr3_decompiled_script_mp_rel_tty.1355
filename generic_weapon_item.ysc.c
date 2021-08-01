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
	struct<17> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	DEBUG::_0xF0783374333FD8CE(8, 150, "generic_weapon_item - launched");
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_33, 0));
	func_1(&iVar0);
	bVar1 = func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xF0783374333FD8CE(8, 150, "generic_weapon_item - HAS_FORCE_CLEANUP_OCCURRED");
		func_3();
	}
	AUDIO::_0x6339C1EA3979B5F7("weapon", "Inspect_Item_Scenes");
	while (func_4())
	{
		WEAPON::_0x000FA7A4A8443AF7(ScriptParam_0.f_1);
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Local_15.f_5))
		{
			iVar2 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33);
			if (iVar2 == joaat("LONGARM_HOLD") || iVar2 == joaat("SHORTARM_HOLD"))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Local_15.f_5, true);
			}
		}
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Local_15.f_5))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "GET_ITEM_INTERACTION_STATE - ", TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33));
		switch (func_5())
		{
			case 0:
				if (!bVar1)
				{
					bVar1 = func_2();
				}
				else
				{
					func_6(1);
				}
				break;
			case 1:
				func_7();
				if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33) == joaat("LONGARM_CLEAN_ENTER") || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33) == joaat("SHORTARM_CLEAN_ENTER"))
				{
					func_8(joaat("KIT_GUN_OIL"), 1, 0, 562618531);
					func_10(func_9(joaat("UPDATED"), joaat("WEAPON_CLEANING")), 1);
					func_6(2);
				}
				break;
			case 2:
				func_6(3);
				break;
			case 3:
				if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33) == joaat("LONGARM_CLEAN_EXIT") || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33) == joaat("SHORTARM_CLEAN_EXIT"))
				{
					func_6(4);
				}
				else
				{
					fVar3 = TASK::_0xBC864A70AD55E0C1(Global_33, joaat("INPUT_CONTEXT_X"));
					DEBUG::_0xF0783374333FD8CE(24, 150, "GET_ITEM_INTERACTION_PROMPT_PROGRESS(g_pedPlayer, INPUT_CONTEXT_X) - ", fVar3);
					if (fVar3 > 0f)
					{
						fVar4 = WEAPON::_0xD56E5F336C675EFA(iVar0);
						fVar5 = ((Local_15.f_11 + fVar4) - (fVar3 * Local_15.f_11));
						fVar7 = ((Local_15.f_13 + fVar4) - (fVar3 * Local_15.f_13));
						fVar6 = (Local_15.f_12 - (fVar3 * Local_15.f_12));
						fVar8 = (Local_15.f_14 - (fVar3 * Local_15.f_14));
						WEAPON::_SET_WEAPON_DEGRADATION(iVar0, fVar5);
						WEAPON::_SET_WEAPON_DAMAGE(iVar0, fVar7, false);
						WEAPON::_SET_WEAPON_DIRT(iVar0, fVar6, false);
						WEAPON::_SET_WEAPON_SOOT(iVar0, fVar8, false);
						func_11(iVar0);
					}
				}
				break;
			case 4:
				func_12(iVar0);
				func_6(1);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	struct<4> Var6;
	struct<4> Var11;

	Local_15 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1069234796);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_15.f_1))
	{
		iVar1 = func_13();
		WEAPON::GET_CURRENT_PED_WEAPON(iVar1, &bVar0, true, 0, false);
		Var2 = { func_14() };
		if (!func_15(&(Global_1940296.f_66), &Var2))
		{
			Local_15.f_7 = { Global_1940296.f_66 };
		}
		else
		{
			Var6 = { func_16(bVar0, 0, 0) };
			Local_15.f_7 = { func_17(bVar0, Var6, -1591664384, 0) };
		}
		Global_1940296.f_66 = { Var2 };
		Var11 = { Local_15.f_7 };
		Local_15.f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "ItemInspection");
		Local_15.f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Local_15.f_1, "Visible", false);
		Local_15.f_2 = INVENTORY::_0x46DB71883EE9D5AF(Local_15.f_1, "stats", &Var11, iVar1);
		Local_15.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_15.f_1, "itemLabel", func_18(bVar0, *iParam0));
		Local_15.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_15.f_1, "tipText", func_19(iParam0));
		Local_15.f_11 = func_20((WEAPON::_GET_WEAPON_DEGRADATION(*iParam0) - WEAPON::_0xD56E5F336C675EFA(*iParam0)), 0f, 1f);
		Local_15.f_13 = func_20((WEAPON::_GET_WEAPON_DAMAGE(*iParam0) - WEAPON::_0xD56E5F336C675EFA(*iParam0)), 0f, 1f);
		Local_15.f_12 = WEAPON::_GET_WEAPON_DIRT(*iParam0);
		Local_15.f_14 = WEAPON::_GET_WEAPON_SOOT(*iParam0);
		DEBUG::_0xF0783374333FD8CE(24, 150, "WEAPON_INSPECTION_INIT: fAmountToClean - ", Local_15.f_11);
	}
	HUD::_HIDE_HUD_COMPONENT(-1847602092);
}

int func_2()
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_15))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(Local_15, 0);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(-813354801))
	{
		if (!UISTATEMACHINE::_UISTATEMACHINE_CREATE(-813354801, Local_15))
		{
			DEBUG::_0xF0783374333FD8CE(8, 150, "[WEAPON_INSPECTION_START_UI_FLOW]: UI state machine failed to create for the inspection UI!");
			return 0;
		}
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 150, "[WEAPON_INSPECTION_START_UI_FLOW]: UI state machinge for the inspection UI does not exist!");
		return 0;
	}
	return 1;
}

void func_3()
{
	AUDIO::_0x9428447DED71FC7E("Inspect_Item_Scenes");
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&Local_15);
	Local_15 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_15.f_1);
	HUD::_DISPLAY_HUD_COMPONENT(-1847602092);
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_4()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		DEBUG::_0xF0783374333FD8CE(8, 150, "SHOULD_WEAPON_SCRIPT_RUN - swimming - false");
		return false;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 150, "SHOULD_WEAPON_SCRIPT_RUN - false");
		return false;
	}
	if ((!PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "isInspecting") && !PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "inInspectionMode")) && !Global_1940296.f_8)
	{
		DEBUG::_0xF0783374333FD8CE(8, 150, "SHOULD_WEAPON_SCRIPT_RUN - false");
		return false;
	}
	if (func_21())
	{
		DEBUG::_0xF0783374333FD8CE(8, 150, "SHOULD_WEAPON_SCRIPT_RUN - IS_PLAYER_IN_SHOP - false");
		return false;
	}
	return true;
}

int func_5()
{
	return Local_15.f_6;
}

void func_6(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 150, "WEAPON_INSPECTION_SET_CLEANING_STATE: moving from ", func_22(Local_15.f_6, 0), " to ", func_22(iParam0, 0));
	Local_15.f_6 = iParam0;
}

void func_7()
{
	int iVar0;

	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_33, 0));
	DEBUG::_0xF0783374333FD8CE(24, 150, "WEAPON_INSPECTION_ENABLE_CLEAN_PROMPT: GET_WEAPON_DEGRADATION - ", WEAPON::_GET_WEAPON_DEGRADATION(iVar0));
	DEBUG::_0xF0783374333FD8CE(24, 150, "WEAPON_INSPECTION_ENABLE_CLEAN_PROMPT: GET_WEAPON_PERMANENT_DEGRADATION - ", WEAPON::_0xD56E5F336C675EFA(iVar0));
	if (func_23(joaat("KIT_GUN_OIL"), 1) && (WEAPON::_GET_WEAPON_DEGRADATION(iVar0) != 0f && WEAPON::_GET_WEAPON_DEGRADATION(iVar0) > WEAPON::_0xD56E5F336C675EFA(iVar0)))
	{
		if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", true, -1);
		}
	}
	else
	{
		if (PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", false, -1);
		}
		if ((!func_24(0, 0, 1) && !func_25()) && func_26())
		{
			if ((!Local_15.f_15 && WEAPON::_0xD56E5F336C675EFA(iVar0) > 0f) && WEAPON::_GET_WEAPON_DEGRADATION(iVar0) <= WEAPON::_0xD56E5F336C675EFA(iVar0))
			{
				func_27("WEAPON_PERM_DEGREDATION", 10000, 0, 0, 0, 1);
				Local_15.f_15 = 1;
			}
			if (!Local_15.f_16 && !func_23(joaat("KIT_GUN_OIL"), 1))
			{
				if (WEAPON::_GET_WEAPON_DEGRADATION(iVar0) > WEAPON::_0xD56E5F336C675EFA(iVar0))
				{
					func_27("NO_GUN_OIL", 10000, 0, 0, 0, 1);
					Local_15.f_16 = 1;
				}
			}
		}
	}
}

int func_8(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	DEBUG::_0xF0783374333FD8CE(648, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Attempting to remove: ", iParam1, " of ", func_28(bParam0, 0));
	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Attempting to remove an invalid item from the player's inventory!");
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_30(bParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Updating REMOVE_REASON_DEFAULT to REMOVE_REASON_USED for ", func_28(bParam0, 0));
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_31(bParam0, 1);
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
			func_32(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_23(bParam0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Player doesn't have item: ", func_28(bParam0, 0), " in satchel!");
		return 0;
	}
	Var5 = { func_33(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_34(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_34(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_8(bParam0, func_34(bParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Unhandled Stat Decrement!");
		}
	}
	if (func_35(bParam0) == joaat("WEAPON"))
	{
		if (!func_36(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_37(bParam0, iParam1, iParam3, bParam2, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Failed to remove item: ", func_28(bParam0, 0));
		return 0;
	}
	else
	{
		Var7 = { func_16(bParam0, 0, 0) };
		if (func_38(0) && Var7.f_4 == 1084182731)
		{
			func_39(1, 0, 0);
		}
		DEBUG::_0xF0783374333FD8CE(40, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Removed item: ", func_28(bParam0, 0));
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940296.f_21 = 0;
	}
	if (!func_38(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_32(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

struct<2> func_9(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_11(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_13();
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &bVar1, true, 0, false);
	INVENTORY::_0x951847CEF3D829FF(Local_15.f_2, &(Local_15.f_7), iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Local_15.f_3, func_18(bVar1, iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_15.f_4, func_19(&iParam0));
}

void func_12(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 150, "WEAPON_INSPECTION_FINISH_REPAIR: invalidl objWeapon");
		return;
	}
	WEAPON::_SET_WEAPON_DEGRADATION(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0));
	WEAPON::_SET_WEAPON_DAMAGE(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0), false);
	WEAPON::_SET_WEAPON_DIRT(iParam0, 0f, false);
	WEAPON::_SET_WEAPON_SOOT(iParam0, 0f, false);
	DEBUG::_0xF0783374333FD8CE(24, 150, "WEAPON_INSPECTION_REPAIR: GET_WEAPON_DEGREDATION AFTER - ", WEAPON::_GET_WEAPON_DEGRADATION(iParam0));
	func_11(iParam0);
}

int func_13()
{
	return PLAYER::GET_PLAYER_PED(255);
}

struct<4> func_14()
{
	struct<4> Var0;

	return Var0;
}

bool func_15(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

struct<5> func_16(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_40(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_35(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_28(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_41(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_17(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_42(bParam1) };
			if (bParam2 && func_43(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_44(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_44(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_45(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_46(bParam1) };
			switch (func_47(bParam0))
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
			if (func_48(bParam0, -1823706425))
			{
				Var0 = { func_17(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_48(bParam0, -1483207246))
			{
				Var0 = { func_17(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_17(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_48(bParam0, -1653629781))
			{
				Var0 = { func_17(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_49(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_48(bParam0, -1653629781))
			{
				Var0 = { func_17(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_28(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_28(bParam0, 0), ": ", func_50(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_17(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_28(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_51(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_18(bool bParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, WEAPON::_GET_WEAPON_NAME(bParam0), 64);
	if (WEAPON::_0xD56E5F336C675EFA(iParam1) > 0f)
	{
		StringCopy(&cVar0, WEAPON::_0x7A56D66C78D8EF8E(bParam0, WEAPON::_0xD56E5F336C675EFA(iParam1)), 64);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_19(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = WEAPON::_GET_WEAPON_DEGRADATION(*iParam0);
	fVar1 = WEAPON::_0xD56E5F336C675EFA(*iParam0);
	if (fVar0 == 0f)
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(1803343570 /* GXTEntry: "Weapon is clean" */);
	}
	if (fVar1 > 0f && fVar0 == fVar1)
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(-1933427003 /* GXTEntry: "Weapon cannot be cleaned further" */);
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(-54957657 /* GXTEntry: "Weapon needs cleaning" */);
}

float func_20(float fParam0, float fParam1, float fParam2)
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

bool func_21()
{
	return (Global_1915867.f_20637 || Global_1915867.f_22504.f_1);
}

char* func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WEAPON_INSPECTION_CLEANING_STATE_INIT";
		case 1:
			return "WEAPON_INSPECTION_CLEANING_STATE_WAIT";
		case 2:
			return "WEAPON_INSPECTION_CLEANING_STATE_ENTER";
		case 3:
			return "WEAPON_INSPECTION_CLEANING_STATE_LOOP";
		case 4:
			return "WEAPON_INSPECTION_CLEANING_STATE_EXIT";
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

bool func_23(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_35(bParam0);
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
			if (!func_52(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_53(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_34(bParam0, 0, 0, 0) >= iParam1;
}

bool func_24(int iParam0, bool bParam1, bool bParam2)
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
		if (func_54())
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
	if (iParam0 == 0 && func_56(func_55(0)))
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
	switch (func_57(func_55(0)))
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

bool func_25()
{
	var uVar0;

	if (!func_58())
	{
		return false;
	}
	uVar0 = Global_1904703.f_8784;
	Global_1904703.f_8784 = 0;
	return uVar0;
}

bool func_26()
{
	if (!func_58())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

var func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

var func_28(bool bParam0, int iParam1)
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

bool func_29(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_30(bool bParam0)
{
	return func_35(bParam0) == joaat("CONSUMABLE");
}

bool func_31(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_28(bParam0, 0));
		return false;
	}
	iVar0 = func_35(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_59(bParam0, 1399091007))
	{
		func_60(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_28(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

void func_32(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_29(bParam0, 0))
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
	if (!func_61() || bParam6)
	{
		func_62(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_63(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
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
		StringCopy(&cVar2, func_63(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_64(bParam0, 2097152))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been read.");
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been used.");
		bVar0 = true;
	}
	iVar6 = func_35(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((((((((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER")) && bParam0 != joaat("AMMO_HATCHET_HUNTER")) && bParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && bParam0 != joaat("AMMO_POISONBOTTLE")) && bParam0 != joaat("AMMO_MOONSHINEJUG_MP")) && !func_59(bParam0, -1982291600)) && !func_59(bParam0, 137764179))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_47(bParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_65(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
		DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find UI Data for: ", func_28(bParam0, 0), " | Using _PLACEHOLDER texture");
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find a valid texture for item ", func_28(bParam0, 0));
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
	if (func_59(bParam0, 474910316))
	{
		sVar17 = func_66(bParam0);
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
	if (func_59(bParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_67(bParam0))
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
	bVar18 = func_68(bParam0, 0);
	if ((func_69(iVar12) && func_59(bParam0, -306684263)) && bVar18 != 0)
	{
		bVar18 = func_70(bParam0);
	}
	else if (func_35(bParam0) == joaat("CLOTHING"))
	{
		bVar19 = func_71(bParam0);
		if (func_29(bVar19, 0))
		{
			bVar18 = func_68(bVar19, 0);
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 158, "[ADD_QUEUED_ITEM_DISPLAY] - Failed to override clothing item display name with style item display name!");
	}
	if (func_72(bParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_73(bParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_74(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, bVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -1839668642 && bParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && bParam0 != 1326838792) && bParam0 != -230310728) || ((iVar12 == 231148558 && bParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && bParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && bParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && bParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_75(bParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_76(bParam0, &cVar22))
		{
			sVar21 = func_78(func_77(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	DEBUG::_0xF0783374333FD8CE(174760, 158, "ADD_QUEUED_ITEM_DISPLAY: Adding - ", func_28(bParam0, 0), " with color ", func_79(iVar13, 0), " sound ", sVar14, " set ", sVar15);
	func_80(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_33(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "GET_ITEMS_GROUP_STAT_HASH: attempting to process an invalid item!");
		return Var0;
	}
	if (func_59(bParam0, -305066475))
	{
		if (func_81() == -1)
		{
			if (func_59(bParam0, -537818634))
			{
				return func_82(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_82(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_59(bParam0, -537818634))
	{
		return func_82(joaat("MEDICINE_ITEMS"));
	}
	if (func_59(bParam0, 2084895747))
	{
		return func_82(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_34(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_28(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_35(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_31(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_83(bParam0, 0);
	}
	if (func_84(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_51(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_85(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_28(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_51(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_28(bParam0, 0));
	return iVar0;
}

int func_35(bool bParam0)
{
	vector3 vVar0;

	if (!func_29(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_36(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Tried to remove an invalid weapon: ", func_28(bParam0, 0));
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(166056, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - ", func_28(bParam0, 0), ", iAmountToRemove = ", iParam1, ", bCarriedOnly = ", bParam2, ", removeReason = ", func_86(iParam3, 0));
	Var0 = { func_87(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_88(&Var0, func_42(0));
	}
	if (!func_89(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_90(&Var16, iVar35, iVar14, iVar15))
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
	func_92(iVar14);
	DEBUG::_0xF0783374333FD8CE(648, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Removed ", iVar36, " of weapon ", func_28(bParam0, 0));
	if (iVar36 < iParam1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Requested to remove ", iParam1, " of weapon ", func_28(bParam0, 0), " but there were only ", iVar15);
	}
	return true;
}

bool func_37(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove an invalid item from an inventory!");
		return false;
	}
	if (iParam1 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(2696, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove ", iParam1, " of ", func_28(bParam0, 0), ", must be a non-zero positive amount");
		return false;
	}
	iVar0 = func_84(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_93(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_16(bParam0, bParam4, 0) };
	Var6 = { func_17(bParam0, Var1, Var1.f_4, bParam4) };
	return func_91(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_38(bool bParam0)
{
	if (func_81() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_51(bParam0));
}

void func_39(int iParam0, bool bParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL SET INVENTORY CHANGED called");
	UNK_0x355E72323AEE83CC(157, 6);
	Global_1940463.f_5 = iParam0;
	Global_1940463.f_37 = iParam2;
	if (bParam1 || (func_94() && iParam2 == 0))
	{
		func_95(1);
		func_96(1);
	}
}

struct<4> func_40(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_51(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_17(joaat("CHARACTER"), func_14(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_17(joaat("CHARACTER"), func_14(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_17(joaat("CHARACTER"), func_14(), -1591664384, bParam0);
}

char* func_41(int iParam0, int iParam1)
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

struct<4> func_42(bool bParam0)
{
	int iVar0;

	iVar0 = func_51(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_17(923904168, func_40(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_17(923904168, func_40(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_17(923904168, func_40(bParam0), -740156546, 0);
}

bool func_43(bool bParam0, bool bParam1)
{
	if (func_47(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_97();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_44(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_98(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_45(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_99(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_46(bool bParam0)
{
	int iVar0;

	iVar0 = func_51(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_17(271701509, func_40(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_17(271701509, func_40(bParam0), 12999093, 0);
}

int func_47(bool bParam0)
{
	struct<2> Var0;

	if (!func_29(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_48(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_47(bParam0);
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
			if (func_100(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_49(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_101(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_50(bool bParam0, int iParam1)
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

int func_51(bool bParam0)
{
	if (func_81() == -1)
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

bool func_52(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_31(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_102("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_90(&Var4, iVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", iVar3);
			}
			else if (!func_103(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_28(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_28(Var4.f_4, 0), " that uses the ammo - ", func_28(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_92(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_28(Var4.f_4, 0), " that uses the ammo - ", func_28(bParam0, 0));
					return true;
				}
			}
			iVar3++;
		}
		func_92(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_28(bParam0, 0));
	return false;
}

bool func_53(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_29(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_47(bParam0);
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
	iVar1 = func_104(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_105(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_28(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_106(bParam0);
	iVar2 = func_105(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_28(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

bool func_54()
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
	if (!func_56(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_55(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_56(struct<2> Param0)
{
	if (!func_107(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_108(Param0))
	{
		return false;
	}
	return true;
}

int func_57(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_58()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_59(bool bParam0, bool bParam1)
{
	if (!func_29(bParam0, 0))
	{
		return func_110(func_109(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_111(bParam1, 0), " for item ", func_28(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

void func_60(bool bParam0, var uParam1, var uParam2)
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

bool func_61()
{
	return !Global_1913655;
}

void func_62(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913655.f_3)
	{
		if ((((Global_1913655.f_4[iVar0 /*6*/] == bParam0 && Global_1913655.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913655.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913655.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913655.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913655.f_4[iVar0 /*6*/].f_1 = (Global_1913655.f_4[iVar0 /*6*/].f_1 + iParam1);
			DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_28(bParam0, 0), " to existing entry ", iVar0);
			return;
		}
		iVar0++;
	}
	if (Global_1913655.f_3 < 19)
	{
		DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_28(bParam0, 0), " to new entry ", Global_1913655.f_3);
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

char* func_63(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_64(bool bParam0, int iParam1)
{
	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "CHECK_ITEM_DATA_ITEM_FLAG - Attempting to check the flag of an invalid item.");
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

bool func_65(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eItem = ", func_28(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eTextureType = ", func_112(iParam2, 0));
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with type: ", func_112(Var3.f_2[iVar0 /*3*/].f_2, 0));
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Type: ", func_112(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to fillout UI data for item ", func_28(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to find texture of type ", func_112(iParam2, 0), " for item ", func_28(bParam0, 0));
	return false;
}

char* func_66(bool bParam0)
{
	if (func_59(bParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_59(bParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_59(bParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_59(bParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_59(bParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_59(bParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_59(bParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_59(bParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_59(bParam0, -352095726) || func_59(bParam0, -2014783736)) || func_59(bParam0, -545064757)) || func_59(bParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_67(bool bParam0)
{
	if (func_59(bParam0, -189374246))
	{
		if (((func_113(bParam0, -1305775593) || func_113(bParam0, 1384151091)) || func_113(bParam0, 2075388272)) || func_113(bParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_59(bParam0, -753854379) || func_59(bParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_68(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_114(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_69(int iParam0)
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

int func_70(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_29(bParam0, 0))
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

bool func_71(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_115(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_116(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_117(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &bVar14) && func_118(bVar14))
			{
				func_119(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_119(iVar11);
	}
	return false;
}

bool func_72(bool bParam0, bool bParam1)
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
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_INTERACTION_TAG] Found tag ", func_111(bParam1, 0), " for item ", func_28(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

int func_73(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_29(bParam0, 0) && !func_120(func_109(bParam0), 2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Attempting to get the cost of an invalid item.");
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(680, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Unable to find cost ", func_121(iParam1, 0), " for item ", func_28(bParam0, 0));
		}
		return 0;
	}
	if (!bParam3)
	{
		DEBUG::_0x4DC69742196F818A(168, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Found requested identifier of ", func_121(iParam1, 0), " with output quantity ", Var0.f_1);
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_74(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_75(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_122(bParam0, iParam1);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_TAG_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	return bVar0;
}

bool func_76(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_29(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_123(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_124(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 162, "[GET_COUPON_FULL_NAME] Item: ", func_28(bParam0, 0), " is not a coupon or voucher. Setting name to ", sParam1);
		return false;
	}
	StringCopy(&cVar1, func_125(bParam0), 128);
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

char* func_77(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_78(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_74(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_79(int iParam0, int iParam1)
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

var func_80(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_126(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_81()
{
	return Global_1572887.f_13;
}

struct<2> func_82(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char[] func_83(bool bParam0, bool bParam1)
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
		func_88(&Var0, func_42(0));
	}
	if (!func_89(&Var0, &iVar14, &cVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_28(bParam0, 0));
		return 0;
	}
	func_92(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", cVar15, " of item ", func_28(bParam0, 0));
	return cVar15;
}

int func_84(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_120(func_109(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

struct<4> func_85(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_16(bParam0, bParam1, 0) };
	return func_17(bParam0, Var0, Var0.f_4, bParam1);
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_28(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_50(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_50(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_50(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_127(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_41(iParam6, 0));
	}
	return Var0;
}

void func_88(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_89(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_51(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (func_128(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", func_28(bParam0, 0), " is an intrinsic item, aborting!");
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_49(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_38(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item is already expired and does not need to be removed, ignoring");
		}
		else if (func_81() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			DEBUG::_0xF0783374333FD8CE(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Sending a Use transaction for ", iParam3, "x item ", func_28(bParam0, 0), " in ", func_50(uParam2->f_4, 0));
			iVar14 = func_129(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -142743235;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_130(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Removing ", iParam3, "x item ", func_28(bParam0, 0), " in ", func_50(uParam2->f_4, 0), " with reason ", func_86(iParam4, 0));
	if (!INVENTORY::_0x3E4E811480B3AE79(func_51(bParam6), iParam1, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to remove inventory item!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

int func_92(int iParam0)
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

int func_93(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_128(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_28(bParam0, 0), " is an intrinsic item, aborting!");
		return 0;
	}
	if (iParam1 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Amount to remove <= 0: ", iParam1);
		return 0;
	}
	iVar0 = func_84(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_28(bParam0, 0), " does not have a default pathset, aborting!");
		return 0;
	}
	if (!func_38(bParam4))
	{
		if (iVar0 == 0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - No pathset specified, bailing!");
			return 0;
		}
		if (!func_131(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
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
			Var65 = { func_132(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_129(joaat("USE"), &Var65, 1);
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
			func_130(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Removing ", iParam1, "x item ", func_28(bParam0, 0), " with reason ", func_86(iParam2, 0));
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_51(bParam4), bParam0, iParam1, iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Failed to remove: ", iParam1, " of inventory item: ", func_28(bParam0, 0));
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	return 1;
}

bool func_94()
{
	if ((Global_1940463.f_11709 != (Global_1940463.f_41.f_203 - 1) || func_134(func_133(0), Global_1940463.f_11701, 0, 1, 1) > 0) || Global_1940463.f_11709 == 15)
	{
		return true;
	}
	func_135(0);
	if (Global_1940463.f_7)
	{
		return true;
	}
	return false;
}

void func_95(int iParam0)
{
	Global_1940463.f_11 = iParam0;
}

void func_96(int iParam0)
{
	Global_1940463.f_10 = iParam0;
}

bool func_97()
{
	return (func_136(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_137(func_17(joaat("WARDROBE"), func_40(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_98(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_84(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_28(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_28(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_50(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_17(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_28(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_51(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_28(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_51(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_28(bParam0, 0));
	}
	return iVar0;
}

bool func_99(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_51(0);
	*iParam1 = { func_17(bParam0, func_42(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_28(bParam0, 0), " eSlot: ", func_50(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_28(bParam0, 0));
		return false;
	}
	return true;
}

bool func_100(bool bParam0, int iParam1, int iParam2)
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

bool func_101(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_51(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_28(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_50(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_102(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_51(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_50(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_103(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_104(bool bParam0)
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

int func_105(var uParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_138(iParam1, 0));
	return -1;
}

int func_106(bool bParam0)
{
	int iVar0;

	iVar0 = func_47(bParam0);
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
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_28(bParam0, 0));
	return 0;
}

bool func_107(int iParam0)
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

int func_108(int iParam0)
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

bool func_109(bool bParam0)
{
	return bParam0;
}

int func_110(bool bParam0, bool bParam1)
{
	if (!func_120(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_111(bParam1, 0), " for bundle ", func_139(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_111(bool bParam0, int iParam1)
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

char* func_112(int iParam0, int iParam1)
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

int func_113(bool bParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1224357681))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_FOLDER_TAG] Found tag ", func_111(bParam1, 0), " for item ", func_28(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1)
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

int func_115(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_29(bParam0, 0))
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

struct<10> func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_117(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, char* sParam12)
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

bool func_118(bool bParam0)
{
	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_STYLE: attempting to process an invalid item!");
	}
	if (func_59(bParam0, -393037696))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_STYLE");
		return true;
	}
	return false;
}

int func_119(int iParam0)
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

bool func_120(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

char* func_121(int iParam0, int iParam1)
{
	switch (iParam0)
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
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_122(bool bParam0, int iParam1)
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
				DEBUG::_0x4DC69742196F818A(10920, 158, "[INVENTORY_ITEM__HAS_TAG_OF_TYPE] Found tag type ", func_140(iParam1, 0), " for item ", func_28(bParam0, 0), ", returning tag : ", func_111(bVar41, 0));
				return bVar41;
			}
			iVar43++;
		}
	}
	return false;
}

char* func_123(bool bParam0)
{
	bool bVar0;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	bVar0 = func_68(bParam0, 0);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_NAME - No name specified for ", func_28(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(bVar0);
}

bool func_124(bool bParam0)
{
	if (func_47(bParam0) == -126813555 || func_47(bParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_125(bool bParam0)
{
	int iVar0;

	if (!func_29(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ALT_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	iVar0 = func_70(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_ALT_NAME - No AltName specified for ", func_28(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_126(char* sParam0, char* sParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(680, 212, "Set MOB_APP_DISPLAY_TRANSACTION_FEED_UPDATE sFeedText =  ", sParam0, " and sTextureDict =  ", sParam1);
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

var func_127(bool bParam0, int iParam1)
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

bool func_128(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_129(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - ", func_141(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_142(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_144(func_143(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_145(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

void func_130(int iParam0, struct<17> Param1)
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
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   eStatus:                        ", func_146(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
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

bool func_131(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Invalid quantity of ", iParam4, " supplied for ", func_28(bParam2, 0));
		return false;
	}
	else if (*uParam0 != 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - sOutPlacementInfo array is not the correct size, needs to be MAX_ITEMPATH_PLACEMENTS");
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_84(bParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(40, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - No pathset supplied and no default pathset is available for ", func_28(bParam2, 0));
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement info");
		return false;
	}
	if (!func_147(uParam0, iParam1, iParam4, bParam5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement data, returning FALSE");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Returning ", *iParam1, " placements for ", func_28(bParam2, 0));
	return true;
}

struct<17> func_132(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_17(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_133(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_134(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_34(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_148(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_149(bParam1, bParam4));
	}
	return iVar0;
}

void func_135(bool bParam0)
{
	if (!func_29(Global_1940463.f_11701, 0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 20, "CHECK_CURRENT_ITEM_FOR_LIST_VIEW: g_satchelData.eCurrItem is invalid, bMissionDropItem - ", MISC::_0xF216F74101968DB0(bParam0));
		Global_1940463.f_7 = bParam0;
	}
	else if ((((func_150(Global_1940463.f_11701, 1224357681) != 0 && Global_1940463.f_11700 != 0) && Global_1940463.f_11700 != -2074770370) && !Global_1915867.f_20638) && !Global_1915867.f_22504.f_1)
	{
		Global_1940463.f_7 = 1;
	}
	else
	{
		Global_1940463.f_7 = 0;
	}
}

int func_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_151(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_51(bParam1), bParam0, bParam3);
}

int func_137(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_152(&uParam0, bParam4, bParam5, iParam6);
}

char* func_138(int iParam0, int iParam1)
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

var func_139(bool bParam0, int iParam1)
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

char* func_140(int iParam0, int iParam1)
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

char* func_141(int iParam0, int iParam1)
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

bool func_142(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_141(iParam0, 0), " -> ", func_28(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_153(iParam1->f_8, iParam0, sVar0, 2048) || func_153(iParam1->f_8, iParam0, sVar0, 32768)) || func_153(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_153(iParam1->f_8, iParam0, sVar0, 4) || func_153(iParam1->f_8, iParam0, sVar0, 256)) || func_153(iParam1->f_8, iParam0, sVar0, 65536)) || func_153(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_153(iParam1->f_8, iParam0, sVar0, 1) || func_153(iParam1->f_8, iParam0, sVar0, 8)) || func_153(iParam1->f_8, iParam0, sVar0, 65536)) || func_153(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_153(iParam1->f_8, iParam0, sVar0, 1) || func_153(iParam1->f_8, iParam0, sVar0, 16)) || func_153(iParam1->f_8, iParam0, sVar0, 2)) || func_153(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_153(iParam1->f_8, iParam0, sVar0, 8) || func_153(iParam1->f_8, iParam0, sVar0, 4096)) || func_153(iParam1->f_8, iParam0, sVar0, 256)) || func_153(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_143(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_144(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_28(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_154(iParam1, 1, 0, 0);
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
	func_154(iParam1, 2, 0, 0);
	return -1;
}

int func_145(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_28(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_154(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

char* func_146(int iParam0, int iParam1)
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

bool func_147(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_155(uParam0[iVar0 /*6*/]))
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
				DEBUG::_0x4DC69742196F818A(2696, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_50((uParam0[*iParam1 /*6*/])->f_4, 0), ", 0 Remaining");
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
				DEBUG::_0x4DC69742196F818A(35464, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_50((uParam0[*iParam1 /*6*/])->f_4, 0), ", ", iParam2, " Remaining");
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_14() };
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

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_156(bParam1))
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
			return func_157(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), bParam1);
		}
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_158())
	{
		return func_98(bParam0, func_40(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_150(bool bParam0, int iParam1)
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "Failed to fillout item data for item ", func_28(bParam0, 0));
	}
	return 0;
}

bool func_151(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_152(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_159(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_28(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

int func_153(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_160(sParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3)
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
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_146(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_146(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_146(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_141(iParam2, 0), " and action B to ", func_141(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_161(iParam0, iParam1, iParam2, iParam3);
}

bool func_155(var uParam0)
{
	if (!func_162(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "IS_ITEM_EXPIRED - ERROR! sItemGUID is not valid.");
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

bool func_156(bool bParam0)
{
	if (!func_72(bParam0, 1955773996))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item does not have required horse cargo tag - ", func_28(bParam0, 0));
		return false;
	}
	if (!func_163(bParam0, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item considered too small to be stowable - ", func_28(bParam0, 0));
		return false;
	}
	return true;
}

int func_157(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_29(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PED_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - Checking if item: ", func_28(bParam1, 0), " has a valid GUID.");
	Var0 = { func_164(iParam0, bParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - No GUID found for item ", func_28(bParam1, 0), ", returning 0");
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, false);
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PED_SATCHEL_ITEM_COUNT - Found ", iVar4, " of item ", func_28(bParam1, 0));
	return iVar4;
}

bool func_158()
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
	if (!func_165(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: not a hunting wagon...");
		return false;
	}
	return true;
}

bool func_159(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_51(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_50(bParam1, 0));
		return false;
	}
	if (!func_101(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_50(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_28(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_50(bParam1, 0));
	return true;
}

bool func_160(char* sParam0, int iParam1)
{
	return (sParam0 && iParam1) != 0;
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_166(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_141(iParam2, 0), " and action B ", func_141(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_146(iParam1, 0));
}

bool func_162(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_163(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_167(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_164(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_168(iParam0) };
	return func_169(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_165(int iParam0)
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

void func_166(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_170(&(uParam0->f_4));
}

int func_167(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "GET_INVENTORY_ITEM_SATCHEL_SIZE - failed to retreive the satchel item data from the itemdatabase for item: ", func_28(bParam0, 0));
		return -1;
	}
	return uVar0;
}

struct<5> func_168(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_169(iParam0, joaat("CHARACTER"), func_14(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_169(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_29(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PED_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_28(bParam1, 0), " (", bParam1, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, bParam1, bParam6, &Var0);
	return Var0;
}

void func_170(var uParam0)
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

