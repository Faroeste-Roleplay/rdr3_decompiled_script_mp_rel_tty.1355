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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<2> Var0;
	int iVar179;
	bool bVar180;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC SINGLE USE - starting ...");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "ITEM INTERACTION SCRIPT - HAS_FORCE_CLEANUP_OCCURRED");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = ScriptParam_0.f_2;
	DEBUG::_0xF0783374333FD8CE(40, 158, "Interacting with ", func_1(Var0.f_1, 0));
	Var0.f_1.f_2 = 1f;
	iVar179 = func_2(Var0.f_1, -949239683);
	bVar180 = false;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			func_3(&(Var0.f_1));
			if (Var0 > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			}
		}
		switch (Var0)
		{
			case 0:
				if (func_4(Var0.f_1, 0))
				{
					bVar180 = true;
					func_5(&(Var0.f_1));
					func_6(Var0.f_1);
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					func_7(&Var0, 2);
				}
				else
				{
					func_7(&Var0, 1);
				}
				break;
			case 1:
				if (iVar179 == 845883585)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
					{
						Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
						func_8(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
						func_9(Var0.f_1, 0);
						func_10(1);
						Var0.f_1.f_177 = 1;
						func_7(&Var0, 3);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					func_8(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
					func_9(Var0.f_1, 0);
					func_7(&Var0, 3);
				}
				break;
			case 2:
				func_11(&Var0, iVar179, bVar180);
				func_7(&Var0, 3);
				break;
			case 3:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0 <= 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			func_11(&Var0, iVar179, bVar180);
		}
	}
	DEBUG::_0xF0783374333FD8CE(8, 157, "generic_BOTTLE_REMEDY - terminating ...");
}

var func_1(bool bParam0, int iParam1)
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

int func_2(bool bParam0, int iParam1)
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "Failed to fillout item data for item ", func_1(bParam0, 0));
	}
	return 0;
}

int func_3(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return 0;
	}
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_0x05A0100EA714DB68(Global_33, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1234314267))
		{
			func_12(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1895155945))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

bool func_4(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_5(var uParam0)
{
	int iVar0;

	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(*uParam0, &(uParam0->f_11));
	DEBUG::_0xA308F935BDECCEC0(168, 157, "GENERIC_ITEM_INTERACTION_FILLOUT_EFFECTS: ", func_1(*uParam0, 0), " Num Effects ", uParam0->f_11);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		DEBUG::_0x4DC69742196F818A(648, 157, "GENERIC_ITEM_INTERACTION_FILLOUT_EFFECTS - Effect ", iVar0, ":", func_13(uParam0->f_11.f_1[iVar0], 0));
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(uParam0->f_11.f_1[iVar0], &(uParam0->f_33[iVar0 /*7*/]));
		DEBUG::_0x4DC69742196F818A(35496, 157, "GENERIC_ITEM_INTERACTION_FILLOUT_EFFECTS - Key ", func_13(uParam0->f_33[iVar0 /*7*/], 0), " Enum ID ", func_14(uParam0->f_33[iVar0 /*7*/].f_1, 0), " Value ", uParam0->f_33[iVar0 /*7*/].f_2, " Time ", uParam0->f_33[iVar0 /*7*/].f_3);
		iVar0++;
	}
}

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			DEBUG::_0xF0783374333FD8CE(8, 157, "DO_CUSTOM_INITIALIZE_FROM_ITEM - Setting player control to FALSE");
			func_15(0);
			break;
	}
}

void func_7(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(680, 157, "SET_GENERIC_ITEM_USE_STATE: from ", func_16(*uParam0, 0), " to ", func_16(iParam1, 0));
	*uParam0 = iParam1;
}

void func_8(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	if ((func_17(*uParam0, 1573112293) || func_17(*uParam0, 672467738)) || func_17(*uParam0, -550842268))
	{
		bVar10 = true;
	}
	bVar11 = func_18(*uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1940296.f_26 = 0;
	DEBUG::_0xA308F935BDECCEC0(2216, 157, "GENERIC_ITEM_INTERACTION_APPLY_EFFECTS: ", func_1(*uParam0, 0), " Used: ", uParam0->f_1, " Final Use: ", bParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		DEBUG::_0xF0783374333FD8CE(25725576, 157, "GENERIC_ITEM_INTERACTION_APPLY_EFFECTS - Effect ", iVar0, ":", func_14(uParam0->f_33[iVar0 /*7*/].f_1, 0), " Value ", uParam0->f_33[iVar0 /*7*/].f_2, " Time ", uParam0->f_33[iVar0 /*7*/].f_3, " unit ", uParam0->f_33[iVar0 /*7*/].f_4, " percent ", uParam0->f_33[iVar0 /*7*/].f_5);
		switch (uParam0->f_33[iVar0 /*7*/].f_1)
		{
			case -943921969:
				fVar1 = func_19(0, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_20((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				bVar9 = true;
				break;
			case -1104847406:
				fVar2 = func_19(2, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_21((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 0);
				bVar8 = true;
				break;
			case 381158954:
				fVar3 = func_19(1, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_22((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				break;
			case -416929031:
				fVar4 = func_23((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_24(0, fVar4, 1, 1, bVar10);
				bVar9 = true;
				break;
			case 1857353317:
				fVar5 = func_23((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_24(2, fVar5, 1, 1, bVar10);
				bVar8 = true;
				break;
			case 1681823811:
				fVar6 = func_23((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_24(1, fVar6, 1, 1, bVar10);
				break;
			case -816334026:
				func_25((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
				break;
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[iVar0 /*7*/].f_1)
					{
						case 2062242710:
							fVar7 = func_26(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_27(19, fVar7, bVar11, 1);
							bVar9 = true;
							break;
						case -826379728:
							fVar7 = func_26(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_27(20, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1191740624:
							fVar7 = func_26(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_27(18, fVar7, bVar11, 1);
							break;
						case 1869697234:
							fVar7 = func_26(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_27(0, fVar7, bVar11, 1);
							bVar9 = true;
							break;
						case 1342237631:
							fVar7 = func_26(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_27(2, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1240225157:
							fVar7 = func_26(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_27(1, fVar7, bVar11, 1);
							break;
					}
				}
				break;
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_28(uParam0);
		func_29(*uParam0, bVar8, bVar9, 562618531);
	}
	func_12(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_9(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<16> Var10;

	switch (iParam0)
	{
		case -2067647508:
		case -912678731:
		case -464445204:
		case 470703221:
		case 1051259759:
		case 1324459658:
			func_31(func_30(iParam0));
			break;
		case -611782825:
			DEBUG::_0xF0783374333FD8CE(8, 157, "DO_CUSTOM_EFFECTS_FROM_ITEM - Blending Tonic");
			func_32(-813902658, -2082434331, 1800);
			break;
		case -1088257729:
			DEBUG::_0xF0783374333FD8CE(8, 157, "DO_CUSTOM_EFFECTS_FROM_ITEM - Hardy Tonic");
			func_32(-1685270562, -2038430863, 1800);
			if (func_33() || func_34())
			{
				func_36(func_35(joaat("USED"), 1001560750), 1);
			}
			break;
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			DEBUG::_0xF0783374333FD8CE(8, 157, "DO_CUSTOM_EFFECTS_FROM_ITEM - Weight Change Tonic");
			Var0.f_1 = iParam0;
			Var10.f_15 = 1;
			Var10 = { Var0 };
			StringCopy(&(Var10.f_10), "generic_weight_control_item", 32);
			Var10.f_14 = 512;
			func_37(Var10, 0);
			break;
		case joaat("CONSUMABLE_GINSENG_ELIXIER"):
			break;
		case joaat("CONSUMABLE_VALERIAN_ROOT"):
			break;
		case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
			break;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_GINSENG"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			func_38(joaat("STATUS_EFFECT__POISON"));
			break;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			if ((bParam1 || !func_39()) || !PED::IS_PED_ON_FOOT(Global_33))
			{
				return;
			}
			if (iParam0 != joaat("CONSUMABLE_HERB_PRAIRIE_POPPY") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var10 = { Var0 };
				StringCopy(&(Var10.f_10), "generic_puking_item", 32);
				Var10.f_14 = 512;
				func_37(Var10, 0);
			}
			break;
		case joaat("CONSUMABLE_POTENT_ANTIDOTE"):
		case joaat("CONSUMABLE_ANTIDOTE"):
			if (iParam0 == joaat("CONSUMABLE_ANTIDOTE"))
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL: USING ANTIDOTE");
			}
			else if (iParam0 == joaat("CONSUMABLE_POTENT_ANTIDOTE"))
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL: USING POTENT ANTIDOTE");
			}
			func_40();
			break;
	}
}

void func_10(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_41())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 143, "APPLY_PLAYER_POMADE - Pomade is already active | EXIT");
		return;
	}
	Global_17414.f_55.f_664.f_1781 = 0;
	iVar0 = 1;
	Global_1953612.f_1694.f_1[iVar0 /*3*/].f_1 = joaat("POMADE");
	Global_1953612.f_1575.f_1[iVar0 /*3*/] = { Global_1953612.f_1694.f_1[iVar0 /*3*/] };
	func_42(Global_1953612.f_1694.f_1[iVar0 /*3*/], joaat("POMADE"), 0, 1);
	func_43(1, 0);
	iVar1 = func_44();
	func_45(&iVar1, 0, 0, 0, 4, 0, 0, 0);
	if (func_46(iVar1, Global_17414.f_55.f_664.f_1782, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 143, "APPLY_PLAYER_POMADE -- pomade application will increase time, applying");
		Global_17414.f_55.f_664.f_1782 = iVar1;
	}
	if (bParam0)
	{
		func_47(8, 0, 0, 0, 0);
	}
	DEBUG::_0xA308F935BDECCEC0(8, 143, "APPLY_PLAYER_POMADE - applied pomade");
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	if ((PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_VAULTING(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "GENERIC_ITEM_USE_STATE_CONSUMING - Exiting due to jump/climb/vault/fall...");
		return;
	}
	if (iParam1 == 845883585)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "SET_GENERIC_ITEM_USE_STATE: Player applied pomade");
		func_49(func_48(), Global_33, joaat("POMADE"), 1);
		func_43(1, 0);
	}
	if (iParam0->f_1 == joaat("CONSUMABLE_HAIR_TONIC"))
	{
	}
	if (func_4(iParam0->f_1, 0) && !bParam2)
	{
		func_5(&(iParam0->f_1));
	}
	func_8(&(iParam0->f_1), 1);
	func_9(iParam0->f_1, 1);
}

void func_12(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GENERIC_ITEM_INTERACTION_MARK_NO_CARRY");
			ENTITY::_0x18FF3110CF47115D(uParam0->f_174, 2, false);
			uParam0->f_176 = 1;
		}
	}
}

var func_13(bool bParam0, int iParam1)
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

var func_14(bool bParam0, int iParam1)
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

void func_15(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 158, "[__ITEM_INTERACTION__SET_PLAYER_INPUT] Enable player input: ", bParam0);
	UNK_0x355E72323AEE83CC(-1, 6);
	Global_1913789 = !bParam0;
	if (Global_1913789)
	{
		Global_1913789.f_1 = MISC::GET_GAME_TIMER();
	}
}

char* func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "GENERIC_ITEM_USE_STATE_INIT";
		case 1:
			return "GENERIC_ITEM_USE_STATE_CONSUMING";
		case 2:
			return "GENERIC_ITEM_USE_STATE_FALLBACK";
		case 3:
			return "GENERIC_ITEM_USE_STATE_FINISHED";
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

bool func_17(bool bParam0, bool bParam1)
{
	if (!func_4(bParam0, 0))
	{
		return func_51(func_50(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_52(bParam1, 0), " for item ", func_1(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK"):
		case joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT"):
		case -545779394:
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER"):
		case joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW"):
		case joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"):
		case 1532695640:
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND"):
		case 1847740267:
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN"):
			return 0;
	}
	return 1;
}

float func_19(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_33);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_33);
			break;
		case 2:
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_20(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(152, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Received ", fParam0, " Health tanks.");
	if (fParam0 == 0f)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Why are you trying to fill 0 Health Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0x16F2C8C084AB2092(iVar0));
	}
	iVar1 = func_53(2);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
	DEBUG::_0xF0783374333FD8CE(152, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Refilling ", fParam0, " Health Tanks ");
	func_54((fParam0 * IntToFloat(iVar1)), 0);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
}

void func_21(float fParam0, bool bParam1)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(152, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Received ", fParam0, " Dead Eye tanks.");
	if (fParam0 == 0f)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Why are you trying to fill 0 Dead Eye Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(10);
	}
	iVar0 = func_55(2);
	DEBUG::_0xF0783374333FD8CE(2200, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Refilling ", fParam0, " Dead Eye Tanks ( ", iVar0, " per tank )");
	func_56((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_22(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(152, 84, "RPG_GLOBAL_REFILL_PLAYER_STAMINA_TANKS - Received ", fParam0, " Health tanks.");
	if (fParam0 == 0f)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_REFILL_PLAYER_STAMINA_TANKS - Why are you trying to fill 0 Stamina Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(iVar0));
	}
	iVar1 = func_57(2);
	func_58((fParam0 * IntToFloat(iVar1)), 0);
}

float func_23(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_24(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_59(iParam0, fParam1, 1);
	}
	func_61(iParam0, (func_60(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_25(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_62())
	{
		func_63(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17414.f_55.f_2459.f_41++;
		if (5 == Global_17414.f_55.f_2459.f_41)
		{
			func_64(109, 0);
		}
	}
}

float func_26(float fParam0, int iParam1)
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

int func_27(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Player Entity is not valid, and therefore cannot be overpowered at this time... ");
		return 0;
	}
	DEBUG::_0xF0783374333FD8CE(2472, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Attribute: ", func_65(iParam0, 0), " will be Overpowered this frame for  ", sParam1, " seconds");
	return func_66(iParam0, sParam1, bParam2, bParam3);
}

void func_28(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(168, 157, "GENERIC_ITEM_INTERACTION_APPLY_FINAL_USE_EFFECTS - Item: ", func_1(*uParam0, 0), " is being processed...");
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			DEBUG::_0xF0783374333FD8CE(168, 157, "GENERIC_ITEM_INTERACTION_APPLY_FINAL_USE_EFFECTS - Item: ", func_1(*uParam0, 0), " is a Daily Stew Meal! Push RPG Effects... ");
			func_32(-1196069774, joaat("CONSUMABLE__DAILY_STEW"), 8100);
			break;
	}
}

void func_29(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	DEBUG::_0xF0783374333FD8CE(10920, 157, "GENERIC_ITEM_INTERACTION_INCREMENT_STATS - ", func_1(bParam0, 0), ", bDeadeyeEffect - ", MISC::_0xF216F74101968DB0(bParam1), ", bHealthEffect - ", MISC::_0xF216F74101968DB0(bParam2));
	if (bParam2 || func_17(bParam0, -537818634))
	{
		func_36(func_67(joaat("MEDICINE_ITEMS_USED")), 1);
	}
	if (func_17(bParam0, -1457797660))
	{
		func_36(func_67(joaat("PROVISION_ITEMS_USED")), 1);
	}
	if (func_17(bParam0, 1573112293))
	{
		func_69(func_68(bParam0), 1);
	}
	if (func_17(bParam0, 1939071949))
	{
		func_36(func_35(joaat("USED"), joaat("TONIC")), 1);
	}
	if (func_17(bParam0, 1992556171))
	{
		func_36(func_67(joaat("CAMP_STEWS_CONSUMED")), 1);
	}
	if (func_17(bParam0, 1239889275))
	{
		func_36(func_67(joaat("ANTIQUE_BOTTLES_DRUNK")), 1);
	}
	switch (bParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			func_36(func_35(joaat("USED"), joaat("FEED_BAG")), 1);
			break;
	}
	switch (bParam0)
	{
		case -611782825:
			func_36(func_35(joaat("USED"), -1875859641), 1);
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			func_36(func_35(joaat("USED"), joaat("MOONSHINE")), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			func_36(func_35(joaat("USED"), joaat("WHISKEY")), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			func_36(func_35(joaat("USED"), joaat("COCAINE_GUM")), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			func_36(func_35(joaat("USED"), joaat("SNAKE_OIL")), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			func_36(func_35(joaat("USED"), joaat("CHEWING_TOBACCO")), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			func_36(func_35(joaat("USED"), joaat("HORSE_PILLS")), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			func_36(func_35(joaat("USED"), joaat("POTENT_HERBIVORE_BAIT")), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			func_36(func_35(joaat("USED"), joaat("POTENT_PREDATOR_BAIT")), 1);
			break;
	}
	if (func_70() == -1)
	{
		if (bParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
		{
			func_36(func_35(joaat("USED"), joaat("SPECIAL_TONIC")), 1);
		}
	}
	if (bParam1)
	{
		func_36(func_67(joaat("DEADEYE_ITEMS_USED")), 1);
	}
	func_71(bParam0, iParam3);
}

bool func_30(char* sParam0)
{
	struct<5> Var0;

	if (!func_72(&Var0))
	{
		return false;
	}
	if (!func_73(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_73(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_73(&Var0, 39, sParam0, 0, 1))
	{
		return false;
	}
	return func_74(Var0);
}

void func_31(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 157, "DO_CUSTOM_EFFECTS_FROM_ITEM - Animal Essence Tonic - Type: ", func_75(bParam0, 0));
	func_76(bParam0);
	func_77(1, 1);
}

int func_32(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_78(iParam1))
	{
		DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Perk Group: ", func_79(iParam1, 0), " is not for Consumables. Bailing... ");
		return 0;
	}
	if (!func_80(iParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Provided Perk Group: ", func_79(iParam1, 0), " is not valid. Bailing... ");
		return 0;
	}
	if (!func_81(iParam0))
	{
		DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Perk Source: ", func_82(iParam0, 0), " is not for Consumables. Bailing... ");
		return 0;
	}
	if (!func_83(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Provided Perk Source: ", func_82(iParam0, 0), " is not valid. Bailing... ");
		return 0;
	}
	if (!func_84(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2728, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - There was already a Perk Group of Type: ", func_79(Global_1146683.f_35859.f_919[func_85(iParam0, 1) /*12*/], 0), " in Source: ", func_82(iParam0, 0), " disabling previous perk group before attempting to add new Perk Group... ");
		func_86(iParam0);
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 84, "RPG_GLOBAL_CONTENT_EFFECT_PUSH_TO_SOURCE - attempting to active Perk Group: ", func_79(iParam1, 0), " at Perk Source: ", func_82(iParam0, 0), " with Duration: ", iParam2);
	if (func_87(iParam0, iParam1))
	{
		iVar0 = func_88(iParam0);
		Global_1146683.f_47689.f_63[iVar0 /*2*/] = iParam0;
		Global_1146683.f_47689.f_63[iVar0 /*2*/].f_1 = (Global_1275959.f_21 + iParam2);
		DEBUG::_0xA308F935BDECCEC0(680, 84, "RPG_GLOBAL_CONTENT_EFFECT_PUSH_TO_SOURCE - Enabled Source: ", func_82(iParam0, 0), " with Perk Group: ", func_79(iParam1, 0));
		DEBUG::_0xA308F935BDECCEC0(2216, 84, "RPG_GLOBAL_CONTENT_EFFECT_PUSH_TO_SOURCE - Source: ", func_82(iParam0, 0), " will be disabled automatically at timestamp: ", Global_1146683.f_47689.f_1[iVar0 /*2*/].f_1, " Current Time: ", Global_1275959.f_21);
		return 1;
	}
	return 0;
}

bool func_33()
{
	if (func_89())
	{
		return false;
	}
	return Global_1957252.f_1431.f_96 == 0;
}

bool func_34()
{
	if (func_89())
	{
		return false;
	}
	return Global_1957252.f_1431.f_96 == 2;
}

struct<2> func_35(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_37(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 106, "QUEUE_SCRIPT_LAUNCH: Attempting to queue an invalid NULL script!");
		return;
	}
	if (Global_1939645.f_161 >= 10)
	{
		DEBUG::_0x83407B92D46F25C3(8, 106, "QUEUE_SCRIPT_LAUNCH: Not enough room to queue requested script - increase launcher capacity!");
		return;
	}
	if (!func_90(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_91(&(Param0.f_10)))
		{
			DEBUG::_0xF0783374333FD8CE(168, 106, "QUEUE_SCRIPT_LAUNCH: Script ", &(Param0.f_10), " already running");
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939645[iVar0 /*16*/].f_10)))
		{
			Global_1939645[iVar0 /*16*/] = { Param0 };
			Global_1939645.f_161++;
			func_92(iParam16);
			DEBUG::_0xF0783374333FD8CE(34984, 106, "QUEUE_SCRIPT_LAUNCH: inserting new process script ", &(Param0.f_10), " at queue slot ", iVar0, "; count is now = ", Global_1939645.f_161, "!");
			return;
		}
		iVar0++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 106, "QUEUE_SCRIPT_LAUNCH: Failed to find an expected empty queue slot!");
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Now disabling all Status Effects with Perk Group: ", func_79(iParam0, 0));
	iVar1 = Global_1146683.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146683.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_85(iVar0, 1);
		if (Global_1146683.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Disabling Source: ", func_82(Global_1146683.f_47689.f_1[iVar2 /*2*/], 0), " at index: ", iVar2);
			func_86(iVar0);
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

bool func_39()
{
	return func_93(1);
}

void func_40()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_CURED_BY_ANTIDOTE - Now disabling all Status Effect Sources that are cured by Antidote... ");
	func_38(joaat("STATUS_EFFECT__POISON"));
	func_38(joaat("STATUS_EFFECT__TRACKING"));
}

bool func_41()
{
	return Global_1953612.f_1694.f_1[1 /*3*/].f_1 == joaat("POMADE");
}

int func_42(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;
	struct<15> Var9;
	struct<11> Var24;
	struct<18> Var38;
	int iVar56;

	if (!func_4(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 208, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Item is invalid, aborting");
		return 0;
	}
	Var0 = { func_94(bParam0, bParam2, 0) };
	Var5 = { func_95(bParam0, Var0, Var0.f_4, bParam2) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] GUID is invalid.  Exiting...");
		return 0;
	}
	Var9.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_96(bParam2), &Var5, &Var9, 15, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Failed to read item data!");
		return 0;
	}
	Var24.f_9 = -1591664384;
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_96(bParam2), &Var5, &Var24, true))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] - Failed to get item data");
		return 0;
	}
	if (Var9.f_14 == bParam1 && Var24.f_10 == iParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(35496, 208, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Clothing ", func_1(bParam0, 0), " already had iWearableState = ", UNK_0x4379B6FA65D55295(bParam1), ", and has a correct equip state: ", Var24.f_10, " skipping...");
		return 1;
	}
	DEBUG::_0xF0783374333FD8CE(648, 208, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Attempting to set iWearableState from ", Var9.f_14, " to ", UNK_0x4379B6FA65D55295(bParam1));
	if (func_97(bParam2))
	{
		Var9.f_14 = bParam1;
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_96(bParam2), &Var5, &Var9, 15))
		{
			DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Failed to update clothing with GUID ", UNK_0xD2E4270E5D98EEE4(&Var5));
			return 0;
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(40, 157, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Attempting cashinventory transaction for item with GUID ", UNK_0xD2E4270E5D98EEE4(&Var5));
		Var38.f_9 = 1;
		Var38.f_11 = -1591664384;
		Var38 = { func_98(&Var9, 0) };
		Var38.f_10 = iParam3;
		Var38.f_17 = bParam1;
		iVar56 = func_99(joaat("UPDATE"), &Var38, 0);
		if (iVar56 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Failed to update clothing with GUID ", UNK_0xD2E4270E5D98EEE4(&Var5));
			return 0;
		}
		Global_1953612.f_926 = iVar56;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_CLOTHING_UPDATE_WEARABLE_STATE] Successfully updated clothing with GUID ", UNK_0xD2E4270E5D98EEE4(&Var5));
	return 1;
}

void func_43(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 1;
	DEBUG::_0xF0783374333FD8CE(40, 0, "EQUIP_WORN_HEAD_HAIR to saving hair - ", UNK_0x4379B6FA65D55295(Global_1953612.f_1575.f_1[iVar0 /*3*/]));
	func_100();
	if (func_101(64))
	{
		Global_1953612.f_2585.f_1[iVar0 /*3*/] = { Global_1953612.f_1575.f_1[iVar0 /*3*/] };
	}
	if (func_102(iVar0) != -1)
	{
		func_103(1, bParam0, 0, 0);
	}
	else
	{
		Global_1953612.f_1694.f_1[iVar0 /*3*/] = Global_1953612.f_1575.f_1[iVar0 /*3*/];
	}
	bVar1 = func_104(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */, 0);
	bVar2 = !func_105(&(Global_1953612.f_1575), bVar1, 1, bParam0, bParam1, 0);
	bVar3 = !func_106(&(Global_1953612.f_1694));
	if (bVar3)
	{
		if (!func_107(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */))
		{
			func_108(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, 0, bParam1);
		}
	}
	else if (func_107(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */))
	{
		func_109(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, 0, bParam1);
	}
	if (bParam0)
	{
		if (bVar2)
		{
			func_110(bVar1, 12);
		}
		if (bVar3)
		{
			func_111(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */);
		}
		func_112();
		func_113();
		func_114(&(Global_1953612.f_1062), &(Global_1953612.f_1062.f_9), 6);
	}
}

int func_44()
{
	return Global_1902870;
}

void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_115(*iParam0);
	iVar1 = func_116(*iParam0);
	iVar2 = func_117(*iParam0);
	iVar3 = func_118(*iParam0);
	iVar4 = func_119(*iParam0);
	iVar5 = func_120(*iParam0);
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
	iVar6 = func_121(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_121(iVar1, iVar0);
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
	func_122(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_46(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_123(iParam1) || !func_123(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_124(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_125(Var0);
}

bool func_48()
{
	return Global_1953612.f_1694.f_1[1 /*3*/];
}

int func_49(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_PREVIEW_HEAD_HAIR_ITEM] Starting ", func_1(bParam0, 0));
	if (!func_126(bParam0, bParam2, 1, 1, 0, 0, 1))
	{
		return 0;
	}
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			iVar0 = 0;
			if (func_127(bParam0, -1811760631, &(Global_1953612.f_1062), &(Global_1953612.f_1062.f_9), 1))
			{
				iVar0 = 2048;
			}
			func_47(9, 0, iVar0, 0, 0);
		}
		else
		{
			func_47(9, 0, 1, iParam1, 0);
		}
	}
	func_128(1);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_PREVIEW_HEAD_HAIR_ITEM] Ending");
	return 1;
}

bool func_50(bool bParam0)
{
	return bParam0;
}

int func_51(bool bParam0, bool bParam1)
{
	if (!func_129(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_52(bParam1, 0), " for bundle ", func_130(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_52(bool bParam0, int iParam1)
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

int func_53(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_131(1);
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

void func_54(float fParam0, int iParam1)
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

int func_55(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_131(1);
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

void func_56(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_132(iVar0))
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

int func_57(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_131(1);
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

void func_58(float fParam0, int iParam1)
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

float func_59(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_44();
	func_133(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_134(iParam0, 2);
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Count: ", iVar1);
	if (func_46(iVar0, func_135(iParam0, 2), 1))
	{
		func_136(iParam0, 0, 2);
		iVar1 = 0;
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Reseting Degrade Count to 0, it's a whole new day!");
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Time of Day: ", func_137(iVar0));
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Current Time of Day: ", func_137(func_135(iParam0, 2)));
	}
	if (iVar1 >= 2)
	{
		func_64(103, bParam2);
		DEBUG::_0x1B08D1EB9D8C4931(136, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Dregrade Count is over: ", 2, " uses. Will not work until tomorrow... ");
		return 0f;
	}
	func_138(iParam0, func_44(), 2);
	func_136(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_60(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_131(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DISPLAY_STATE - Failed to retrieve Core Value for ", func_139(iParam0, 0), " Returning -1.0. This is really bad. ");
	return -1f;
}

int func_61(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_131(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_140(iVar0, iParam0, fParam1))
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
			func_141(iParam0, 7000, iParam5);
		}
		func_142(iVar0, iParam0, fParam1);
		DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE_CORE - Caching Player Attribute Core ", func_139(iParam0, 0), " Value Data. Setting to: ", fParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_143()));
		func_144(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_62()
{
	if (Global_1957252.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_145(Global_1957252.f_1431.f_107, 0);
}

void func_63(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_146(13, 2);
	iVar1 = func_147(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_148(fVar0, 0f, 100f);
	iVar2 = func_147(fVar0);
	DEBUG::_0xF0783374333FD8CE(10648, 84, "RPG_GLOBAL_ALTER_WEIGHT - Altering Weight amount by: ", fParam0, " New Weight: ", fVar0, " Force Weight Update: ", MISC::_0xF216F74101968DB0(bParam1));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_ALTER_WEIGHT - Old Weight Rank: ", iVar1, " New Weight Rank: ", iVar2);
	if (iVar1 != iVar2)
	{
		Global_1957252.f_1431.f_107 = func_44();
		func_45(&(Global_1957252.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_149(13, fVar0, 2);
	Global_1957252.f_1431.f_99 = bParam1;
}

void func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_150(iParam0, &iVar0, &iVar1);
	if (!func_151(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_152(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_153(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

char* func_65(int iParam0, int iParam1)
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

int func_66(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_65(iParam0, 0), " will be Overpowered this frame for  ", fParam1, " seconds on local player...");
	if (fParam1 == -1f)
	{
		if (func_154(iParam0))
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
		DEBUG::_0x6D2A5155B260E879(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_65(iParam0, 0), " was set to a Duration of: ", fParam1, " this is really bad. Correct this. ");
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_155(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_156(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_155(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_38(joaat("STATUS_EFFECT__TRACKING"));
			func_157(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_155(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_158(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_38(joaat("STATUS_EFFECT__POISON"));
			func_159(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_159(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_159(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_65(iParam0, 0), " cannot be overpowered... Why are you doing this?");
			return 0;
	}
	return 1;
}

struct<2> func_67(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_68(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 21;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 24;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 27;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 28;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 29;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 30;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 32;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 34;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 35;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 38;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 50;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 51;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 52;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 53;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 40;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 42;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 45;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 47;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 48;
	}
	return 0;
}

void func_69(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_35(joaat("EATEN"), func_160(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_36(func_161(joaat("HERBS_EATEN")), iParam1);
}

int func_70()
{
	return Global_1572887.f_13;
}

void func_71(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_70() == 0)
	{
		bVar0 = func_2(bParam0, -949239683);
		DEBUG::_0xF0783374333FD8CE(10920, 183, "GENERIC_ITEM_DAILY_CHALLENGES ", func_1(bParam0, 0), " with Tag ", func_52(bVar0, 0), " removed with reason ", func_162(iParam1, 0));
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_17(bParam0, -136654233))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_CANNEDGOODSEATEN_00"), 1);
		}
		if ((func_17(bParam0, 1765172170) || 1443104131 == bVar0) || -1919515848 == bVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TOBACCOSMOKEDCHEWED_00"), 1);
		}
		if (func_17(bParam0, 1573112293))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_HERBSTASTED_00"), 1);
		}
		if (func_17(bParam0, -2085281117) && !func_17(bParam0, -1237028043))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_FRESHPRODUCEEATEN_00"), 1);
		}
		if (func_17(bParam0, 200705431))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_DRYGOODSEATEN_00"), 1);
		}
		if (((func_17(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_17(bParam0, -839724752)) || func_17(bParam0, 1264218912)) || bParam0 == joaat("CONSUMABLE_OFFAL"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_MEATEATEN_00"), 1);
		}
		if (func_17(bParam0, -764700608))
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

bool func_72(int iParam0)
{
	var uVar0;

	MISC::_COPY_MEMORY(iParam0, &uVar0, 5);
	if (!func_163(1))
	{
		return false;
	}
	*iParam0 = Global_1072032.f_28503[51 /*4*/].f_3;
	return true;
}

bool func_73(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4)
{
	char* sVar0;

	uParam0->f_2 = iParam1;
	uParam0->f_3 = bParam2;
	uParam0->f_4 = sParam3;
	sVar0 = uParam0->f_1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = sVar0;
		return false;
	}
	DEBUG::_0x4DC69742196F818A(559272, 41, "ANIMAL_TRANSFORMATION__XML__SETUP_QUERY__MOVE_TO_NODE - moved to \"", func_164(iParam1), "\" with ", bParam2, " and ", sParam3, " - node ", sVar0, " to ", uParam0->f_1);
	return true;
}

bool func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_165(&uParam0, 61, 1);
}

char* func_75(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -2125499975:
			return "MPC_PLAYER_TYPE_SP_ARTHUR";
		case -449205311:
			return "MPC_PLAYER_TYPE_SP_ARTHUR_SICK";
		case 0:
			return "MPC_PLAYER_TYPE_INVALID";
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return "MPC_PLAYER_TYPE_MP_FEMALE";
		case 1160113249:
			return "MPC_PLAYER_TYPE_SP_MARSTON";
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return "MPC_PLAYER_TYPE_MP_MALE";
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

void func_76(bool bParam0)
{
	bool bVar0;

	func_166(bParam0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 1, false, false);
	func_167();
	func_168(8388608);
	if (func_169(bParam0, &bVar0))
	{
		DEBUG::_0xF0783374333FD8CE(42, "[__CHANGE_TO_ANIMAL_COMMON] Model is: ", func_170(bVar0, 0), " hash: ", bVar0);
		func_172(func_171(bVar0));
	}
}

void func_77(bool bParam0, bool bParam1)
{
	if (func_173(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_174(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (!bParam0)
	{
		func_175(0);
	}
	else
	{
		if (bParam1)
		{
			func_176(0, 0, 0, 1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Not clearing the spectator lock!");
			UNK_0x355E72323AEE83CC(36, 6);
		}
		func_177(0);
		func_178(&(Global_1102630.f_3849));
		Global_1102630.f_3849 = 0f;
		Global_1102630.f_3849.f_5 = 1;
		Global_1102630.f_3849.f_16 = 0;
		Global_1102630.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_17 = { Global_1901988.f_50.f_1, Global_1901988.f_50.f_1, Global_1901988.f_50.f_1 };
		Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_179(&(Global_1102630.f_3888));
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
	func_180(Global_1102630.f_3849, 36);
	func_181(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

bool func_78(int iParam0)
{
	int iVar0;

	iVar0 = func_182(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 152)
	{
		return true;
	}
	return false;
}

char* func_79(int iParam0, int iParam1)
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

bool func_80(int iParam0)
{
	int iVar0;

	iVar0 = func_182(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

bool func_81(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

char* func_82(int iParam0, int iParam1)
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

bool func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_84(int iParam0)
{
	if (!func_83(iParam0))
	{
		return false;
	}
	return Global_1146683.f_35859.f_919[func_85(iParam0, 1) /*12*/] == -1;
}

int func_85(int iParam0, int iParam1)
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

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_83(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - invalid Source ID ", iParam0);
		return 0;
	}
	iVar0 = func_85(iParam0, 1);
	if (!func_80(Global_1146683.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_182(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Attempting to disable all Perks in Perk Group: ", func_79(Global_1146683.f_35859.f_919[iVar0 /*12*/], 0), " it has: ", Global_1146683.f_35859[iVar3 /*6*/].f_5, " perks...");
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146683.f_35859[iVar3 /*6*/][iVar4];
		DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Disabling Perk: ", func_183(iVar1, 0), " from Source: ", func_82(iParam0, 0));
		switch (func_184(iParam0, iVar1))
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - deactivating perk ", func_183(iVar1, 0), " directly");
				func_185(iVar1, iParam0, iVar4);
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
						DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - removing perk ", func_183(iVar1, 0), " from the activation queue");
						func_185(iVar1, iParam0, iVar4);
						func_186(&(Global_1146683.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146683.f_35859.f_11700 = (Global_1146683.f_35859.f_11700 - 1);
						Global_1146683.f_35859.f_9503[iVar5 /*3*/] = { Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/] };
						func_186(&(Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - ignoring perk ", func_183(iVar1, 0), "...");
				Jump @977; //curOff = 554
				iVar2 = func_187(iVar1, 1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_183(iVar1, 0), " currently has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				func_188(iVar2, -1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_183(iVar1, 0), " has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				if (Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_189(iVar2, 0);
					DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - all sources for Perk: ", func_183(iVar1, 0), " have been removed, disabling it");
					iVar6 = 0;
					while (iVar6 < Global_1146683.f_35859.f_9502)
					{
						if (Global_1146683.f_35859.f_9302[iVar6] != iVar1)
						{
							DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_183(iVar1, 0), " does not equal perk in slot: ", func_183(Global_1146683.f_35859.f_9302[iVar6], 0));
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_183(iVar1, 0), " matches perk in slot! ");
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
			func_190(&(Global_1146683.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_83(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(648, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - invalid Source ID ", iParam0, " Name: ", func_82(iParam0, 0));
		return false;
	}
	iVar0 = func_85(iParam0, 1);
	if (!func_80(iParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(648, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - invalid Perk ID ", iParam1, " Name: ", func_79(iParam1, 0));
		return false;
	}
	iVar1 = func_182(iParam1, 1);
	if (Global_1146683.f_35859.f_919[iVar0 /*12*/] == iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Perk Group is already active: ", func_79(iParam1, 0));
		return true;
	}
	if (func_80(Global_1146683.f_35859.f_919[iVar0 /*12*/]))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - disabling previously set perk source");
		func_86(iParam0);
	}
	Global_1146683.f_35859.f_919[iVar0 /*12*/] = iParam1;
	DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Attempting to enable all Perks in Perk Group: ", func_79(Global_1146683.f_35859.f_919[iVar0 /*12*/], 0), " it has: ", Global_1146683.f_35859[iVar1 /*6*/].f_5, " perks...");
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859[iVar1 /*6*/].f_5)
	{
		iVar2 = Global_1146683.f_35859[iVar1 /*6*/][iVar4];
		iVar3 = func_187(iVar2, 1);
		switch (func_191(iParam0, iVar2))
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Activating perk ", func_183(iVar2, 0), " from enable");
				func_192(iVar2, iParam0, iVar4);
				break;
			case 1:
				DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - adding perk ", func_183(iVar2, 0), " + source ", func_82(iParam0, 0), " to activation queue");
				Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/] = iVar2;
				Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/].f_2 = iVar4;
				Global_1146683.f_35859.f_11700++;
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - ignoring perk ", func_183(iVar2, 0), "...");
				Jump @731; //curOff = 555
				if (Global_1146683.f_35859.f_3116[iVar3 /*31*/].f_29 <= 0)
				{
					Global_1146683.f_35859.f_9302[Global_1146683.f_35859.f_9502] = iVar2;
					Global_1146683.f_35859.f_9502++;
					DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - adding perk ", func_183(iVar2, 0), " to enabled queue. Number of enabled perks is now: ", Global_1146683.f_35859.f_9502);
				}
				func_188(iVar3, 1);
				DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Registering perk ", func_183(iVar2, 0), " from source ", func_82(iParam0, 0), ". total sources: ", Global_1146683.f_35859.f_3116[iVar3 /*31*/].f_29);
				iVar4++;
			}
			return true;
		}

int func_88(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (func_193(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_194(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_195(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_196(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_197(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_81(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_198(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

bool func_89()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_90(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_91(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939645.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939645[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_92(int iParam0)
{
	if (func_90(iParam0, 1))
	{
		func_199(1);
	}
}

bool func_93(int iParam0)
{
	return func_200(iParam0);
}

struct<5> func_94(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_201(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_202(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_1(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_203(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_95(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_204(bParam1) };
			if (bParam2 && func_205(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_206(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_206(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_207(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_208(bParam1) };
			switch (func_209(bParam0))
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
			if (func_210(bParam0, -1823706425))
			{
				Var0 = { func_95(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_210(bParam0, -1483207246))
			{
				Var0 = { func_95(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_95(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_210(bParam0, -1653629781))
			{
				Var0 = { func_95(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_211(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_210(bParam0, -1653629781))
			{
				Var0 = { func_95(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_1(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_1(bParam0, 0), ": ", func_212(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_95(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_4(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_1(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_96(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_96(bool bParam0)
{
	if (func_70() == -1)
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

bool func_97(bool bParam0)
{
	if (func_70() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_96(bParam0));
}

struct<17> func_98(var uParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_213(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_214() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_99(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - ", func_215(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_216(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_218(func_217(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_219(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

void func_100()
{
	UNK_0x355E72323AEE83CC(208, 6);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_SYSTEM_SET_ITEMS_BEING_PREVIEWED] Clearing preview type");
	Global_1953612.f_1060 = 0;
}

bool func_101(int iParam0)
{
	return (Global_1953612 && iParam0) != 0;
}

int func_102(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953612.f_2956)
	{
		if (Global_1953612.f_2956.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_103(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	DEBUG::_0xF0783374333FD8CE(174760, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_CACHE_DATA] Transfer to Current: ", MISC::_0xF216F74101968DB0(bParam0), " Transfer to Save: ", MISC::_0xF216F74101968DB0(bParam1), " Request Save: ", MISC::_0xF216F74101968DB0(bParam2), " handle outfit switch: ", MISC::_0xF216F74101968DB0(bParam3));
	func_220(&(Global_1953612.f_2956), bParam0, bParam1, bParam2, bParam3);
}

bool func_104(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1953612.f_3411.f_26)
	{
		bVar1 = Global_1953612.f_3411[iVar0];
		if (func_209(bVar1) == bParam0 || (bParam0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && func_17(bVar1, 160827531)))
		{
			if (iParam1 == bVar1)
			{
			}
			else
			{
				return bVar1;
				DEBUG::_0xA308F935BDECCEC0(8, 139, "[METAPED_PLAYER_PORTABLE_WARDROBE_FIND_FIRST_ITEM_OF_CATEGORY] Category mismatch. Fail.");
			}
			iVar0++;
			return false;
		}
	}
}

bool func_105(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	switch (func_209(bParam1))
	{
		case -999503751:
			if (func_221(bParam1) && !func_223(2, func_222(bParam1)))
			{
				func_224(bParam1, bParam2, bParam3, bParam4, bParam5);
				return false;
			}
			return true;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			if (func_17(bParam1, -1303648999) && func_17(uParam0->f_1[1 /*3*/], -93469181))
			{
				func_224(bParam1, bParam2, bParam3, bParam4, bParam5);
			}
			break;
	}
	if (func_17(bParam1, -166674229))
	{
		DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_INITIALIZE] Setting unalterable clothing ", func_1(bParam1, 0), " disabled. ");
		INVENTORY::_0x766315A564594401(func_96(bParam5), bParam1, 0);
	}
	return true;
}

bool func_106(var uParam0)
{
	return !func_17(uParam0->f_1[1 /*3*/], -93469181);
}

bool func_107(bool bParam0)
{
	return func_226(func_225(bParam0));
}

void func_108(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_96(bParam1);
	if (metapedPlayerPortableWardrobeGetItemsInCategory(bParam0, 1) > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1953612.f_3411.f_26)
		{
			bVar1 = Global_1953612.f_3411[iVar0];
			if (func_209(bVar1) == bParam0 || (bParam0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && func_17(bVar1, 160827531)))
			{
				DEBUG::_0x4DC69742196F818A(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_DISABLE_ITEMS_IN_CATEGORY] Disabling: ", func_1(bVar1, 0));
				INVENTORY::_0x766315A564594401(iVar2, bVar1, 0);
			}
			iVar0++;
		}
	}
	if (bParam2 && !func_107(bParam0))
	{
		func_228(0, bParam0);
	}
	func_229(func_225(bParam0), 6);
}

void func_109(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_96(bParam1);
	if (metapedPlayerPortableWardrobeGetItemsInCategory(bParam0, 1) > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1953612.f_3411.f_26)
		{
			bVar1 = Global_1953612.f_3411[iVar0];
			if (func_209(bVar1) == bParam0 || (bParam0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && func_17(bVar1, 160827531)))
			{
				if (func_17(bVar1, -166674229) && bParam0 != -999503751)
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_ENABLE_ITEMS_IN_CATEGORY] Not enabling: ", func_1(bVar1, 0), " as it is unalterable");
				}
				else
				{
					DEBUG::_0x4DC69742196F818A(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_ENABLE_ITEMS_IN_CATEGORY] Enabling: ", func_1(bVar1, 0));
					INVENTORY::_0x6A564540FAC12211(iVar2, bVar1);
				}
			}
			iVar0++;
		}
	}
	if (bParam2 && func_107(bParam0))
	{
		func_228(1, bParam0);
	}
	func_230(func_225(bParam0), 6);
}

void func_110(bool bParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		vVar1 = { func_231(iParam1, iVar0) };
		if (vVar1.x == bParam0)
		{
			vVar1.x = Global_1953612.f_83[iParam1 /*12*/];
			vVar1.f_1 = 0;
			vVar1.f_2 = 0;
			func_232(&vVar1, iParam1, iVar0);
		}
		iVar0++;
	}
}

void func_111(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_234(func_233(bParam0), 1);
	if (iVar4 == -358215195)
	{
		DEBUG::_0x83407B92D46F25C3(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAR_ITEM_CATEGORY_FROM_ALL_SAVE_DATA] Failed to find metaped index for category: ", func_235(bParam0, 0));
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		vVar1 = { func_231(iVar4, iVar0) };
		if (func_209(vVar1.x) == bParam0)
		{
			vVar1.x = Global_1953612.f_83[iVar4 /*12*/];
			vVar1.f_1 = 0;
			vVar1.f_2 = 0;
			func_232(&vVar1, iVar4, iVar0);
		}
		iVar0++;
	}
}

void func_112()
{
	Global_1139844.f_4787.f_7 = Global_1953612.f_1694.f_1[1 /*3*/];
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_CLIENT_HEAD_HAIR_DATA] Setting hair item to: ", UNK_0x4379B6FA65D55295(Global_1139844.f_4787.f_7), " hash: ", Global_1139844.f_4787.f_7);
}

void func_113()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		func_232(&(Global_1953612.f_1694.f_1[iVar0 /*3*/]), iVar0, iVar1);
		iVar1++;
	}
}

void func_114(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;

	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] Transferring current overlay data to save data");
	Global_17414.f_55.f_664.f_1354 = uParam0->f_1;
	Global_17414.f_55.f_664.f_1354.f_1 = uParam0->f_2;
	Global_17414.f_55.f_664.f_1354.f_2 = uParam0->f_3;
	Global_17414.f_55.f_664.f_1354.f_3 = uParam0->f_4;
	Global_17414.f_55.f_664.f_1354.f_4 = uParam0->f_5;
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] |----------- Base Layer ---------------|");
	DEBUG::_0xEF256AE8A5A27966(8736, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] Drawable: ", uParam0->f_1, " Albedo: ", uParam0->f_2, " Normal: ", uParam0->f_3);
	DEBUG::_0xEF256AE8A5A27966(8736, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] Material: ", uParam0->f_4, " Tag: ", uParam0->f_5, " Layer Count: ", uParam0->f_6);
	if (uParam0->f_6 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (iVar0 >= uParam0->f_6)
		{
			DEBUG::_0xEF256AE8A5A27966(10784, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] |----------- Layer[", iVar0, "] - ", UNK_0x4379B6FA65D55295((*uParam1)[iVar0 /*18*/]), " ---------------|");
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] Clearing Data!");
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/] = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_1 = -1;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_2 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_3 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_4 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_5 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_6 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_7 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_8 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_9 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_10 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_11 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_12 = 0f;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_13 = 0f;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_14 = 0f;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_15 = 0;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_16 = 0;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] |----------- Layer End ---------------|");
		}
		else
		{
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/] = (*uParam1)[iVar0 /*18*/];
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_1 = (uParam1[iVar0 /*18*/])->f_1;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_2 = (uParam1[iVar0 /*18*/])->f_3;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_3 = (uParam1[iVar0 /*18*/])->f_4;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_4 = (uParam1[iVar0 /*18*/])->f_5;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_5 = (uParam1[iVar0 /*18*/])->f_6;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_6 = (uParam1[iVar0 /*18*/])->f_7;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_7 = (uParam1[iVar0 /*18*/])->f_8;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_8 = (uParam1[iVar0 /*18*/])->f_9;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_9 = (uParam1[iVar0 /*18*/])->f_10;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_10 = (uParam1[iVar0 /*18*/])->f_11;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_11 = (uParam1[iVar0 /*18*/])->f_12;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_12 = (uParam1[iVar0 /*18*/])->f_13;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_13 = (uParam1[iVar0 /*18*/])->f_14;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_14 = (uParam1[iVar0 /*18*/])->f_15;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_15 = (uParam1[iVar0 /*18*/])->f_16;
			Global_17414.f_55.f_664.f_1354.f_5[iVar0 /*17*/].f_16 = (uParam1[iVar0 /*18*/])->f_17;
			DEBUG::_0xEF256AE8A5A27966(10784, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] |----------- Layer[", iVar0, "] - ", UNK_0x4379B6FA65D55295((*uParam1)[iVar0 /*18*/]), " ---------------|");
			DEBUG::_0xEF256AE8A5A27966(8736, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] Albedo: ", (uParam1[iVar0 /*18*/])->f_3, " Normal: ", (uParam1[iVar0 /*18*/])->f_4, " Material: ", (uParam1[iVar0 /*18*/])->f_5);
			DEBUG::_0xEF256AE8A5A27966(2592, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] Sheet Grid Index: ", (uParam1[iVar0 /*18*/])->f_6, " Tex Alpha: ", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*18*/])->f_13, 2));
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] |----------- Layer End ---------------|");
		}
		iVar0++;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_SAVE__TRANSFER_CURRENT_OVERLAY_DATA_TO_SAVE_DATA] Overlay Transfer End");
}

int func_115(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_236(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_116(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_117(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_118(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_119(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_120(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_121(int iParam0, int iParam1)
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

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_237(iParam0, iParam6);
	func_238(iParam0, iParam5);
	func_239(iParam0, iParam4);
	func_240(iParam0, iParam3);
	func_241(iParam0, iParam2);
	func_242(iParam0, iParam1);
}

bool func_123(int iParam0)
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
	iVar0 = func_120(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_119(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_118(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_115(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_116(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_117(iParam0);
	if (iVar5 < 1 || iVar5 > func_121(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_124(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_SET_FLAG] Setting: ", func_243(iParam0, 0));
	Global_1953612 = (Global_1953612 || iParam0);
}

void func_125(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(40, 208, "PUSH_METAPED_CLOTHING_SYSTEM_REQUEST: Request Type: ", func_244(Param0, 0));
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1953612.f_918 >= 25)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sUpdateNoRestrictionsRequestData Size Exceeded | Attempting to Insert more than ", 25);
				return;
			}
			if (func_245(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_918)
				{
					iVar1 = ((Global_1953612.f_923 + iVar0) % 25);
					if ((Global_1953612.f_736[iVar1 /*4*/] == Param0 && Global_1953612.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_244(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
						return;
					}
					iVar0++;
				}
			}
			func_246(Param0);
			Global_1953612.f_736[Global_1953612.f_924 /*4*/] = { Param0 };
			Global_1953612.f_918++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] No Restriction Request Type: ", func_244(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_924);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_918);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_247(Param0.f_2));
			Global_1953612.f_924 = (Global_1953612.f_924 + 1 % 25);
			func_124(8);
			break;
		case 24:
		case 25:
			if (Global_1953612.f_919 >= 25)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sUpdateRestrictionsRequestData Size Exceeded | Attempting to Insert more than ", 25);
				return;
			}
			if (func_245(Param0))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_244(Param0, 0), " has already been created | BYPASSING ADD!");
				return;
			}
			func_246(Param0);
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Restriction Request Type: ", func_244(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]   Adding Request to slot: ", Global_1953612.f_919);
			Global_1953612.f_635[Global_1953612.f_919 /*4*/] = { Param0 };
			Global_1953612.f_919++;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]           New Queue Size: ", Global_1953612.f_919);
			func_124(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953612.f_920 >= 20)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sMetapedSystemRequestData Size Exceeded | Attempting to Insert more than ", 20);
				return;
			}
			if (func_245(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_920)
				{
					iVar1 = ((Global_1953612.f_921 + iVar0) % 20);
					if ((Global_1953612.f_837[iVar1 /*4*/] == Param0 && Global_1953612.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_244(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
						return;
					}
					iVar0++;
				}
			}
			if (Param0 == 34)
			{
				Global_1953612.f_930 = 1;
				Global_1953612.f_930.f_1 = Param0.f_2;
				Global_1953612.f_930.f_2 = Param0.f_3;
			}
			func_246(Param0);
			Global_1953612.f_837[Global_1953612.f_922 /*4*/] = { Param0 };
			Global_1953612.f_920++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]         System Request Type: ", func_244(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_922);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_920);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_247(Param0.f_2));
			Global_1953612.f_922 = (Global_1953612.f_922 + 1 % 20);
			func_124(8);
			break;
			break;
	}
}

bool func_126(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] Setting: ", UNK_0x4379B6FA65D55295(bParam0));
	func_248();
	if (iParam2 == 39)
	{
		Var0 = { func_94(bParam0, 1, 0) };
		iParam2 = func_234(func_249(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2184, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] iMetaIndex is out of bounds: ", iParam2, " Max: ", 39, " | RETURN FALSE");
		return false;
	}
	if (func_101(32768) && iParam2 == 10)
	{
		func_250(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_251(bParam0, 1))
	{
		func_252(&(Global_1953612.f_1575), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_253(iParam2);
	}
	func_254(iParam2, iVar5);
	func_255(&(Global_1953612.f_1575.f_1[iParam2 /*3*/]), 4, 6);
	func_255(&(Global_1953612.f_1694.f_1[iParam2 /*3*/]), 4, 6);
	func_256(&(Global_1953612.f_1575), bParam0, iParam2, 1, iVar5);
	if (bParam1 == 0)
	{
		bParam1 = Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953612.f_1575.f_1[iParam2 /*3*/] = bParam0;
	Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1 = func_257(bParam0, iParam2, bParam1);
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] Component Hash: ", UNK_0x4379B6FA65D55295(bParam0));
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] Wearable State: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1));
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1953612.f_2956)
		{
			if (Global_1953612.f_2956.f_2[iVar6 /*2*/] >= 0 && Global_1953612.f_2956.f_2[iVar6 /*2*/] < 39)
			{
				Global_1953612.f_2783[Global_1953612.f_2956.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1953612.f_2783[Global_1953612.f_2956.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_259(func_258(Global_1953612.f_2956.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] ...Ending");
	return true;
}

bool func_127(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_260(&(Global_1953612.f_1062), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Overlay is finalized, we can't do anything here | RETURN FALSE");
		return false;
	}
	if (iParam1 == -2118203104)
	{
		bVar0 = bParam0;
	}
	else if (iParam1 == -1811760631)
	{
		bVar0 = func_261(bParam0);
	}
	else
	{
		return false;
	}
	iVar1 = func_262(uParam3, iParam1);
	bVar2 = func_263(bVar0) != false;
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Testing Hair: ", UNK_0x4379B6FA65D55295(bParam0));
	if (iVar1 == -1 && bVar2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] We don't have any hair and we don't have any hair bedding | RETURN FALSE");
		return false;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_264(uParam2, uParam3, iParam1);
		}
		else
		{
			func_265(uParam2, uParam3, iVar1);
		}
		return true;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_266(&Var3, bVar0, 0, 1, 6))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Failed to fillout layer: ", UNK_0x4379B6FA65D55295(bVar0));
			return false;
		}
		if (iVar1 != -1 && Var3.f_3 == (uParam3[iVar1 /*18*/])->f_3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Layers are the same | RETURN FALSE");
			return false;
		}
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Setting up new hair bedding!");
		func_267(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_268(uParam2, uParam3, bVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_266(&Var21, bVar0, 0, 1, 6))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Failed to fillout layer: ", UNK_0x4379B6FA65D55295(bVar0));
			return false;
		}
		*(uParam3[iVar1 /*18*/]) = { Var21 };
	}
	return true;
}

void func_128(int iParam0)
{
	UNK_0x355E72323AEE83CC(208, 6);
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_SET_ITEMS_BEING_PREVIEWED] Setting preview type: ", func_269(iParam0, 0));
	Global_1953612.f_1060 = iParam0;
}

bool func_129(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

var func_130(bool bParam0, int iParam1)
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

int func_131(int iParam0)
{
	return func_271(func_270(iParam0));
}

bool func_132(int iParam0)
{
	float fVar0;

	fVar0 = (func_272(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_115(*iParam0);
	iVar1 = func_116(*iParam0);
	iVar2 = func_117(*iParam0);
	iVar3 = func_118(*iParam0);
	iVar4 = func_119(*iParam0);
	iVar5 = func_120(*iParam0);
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
		iVar7 = func_121(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_122(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_134(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_131(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to retrieve Core Degrade Count for ", func_139(iParam0, 0), " Returning -1. This is really bad. ");
	return -1;
}

int func_135(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_131(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to retrieve Core Degrade Time of Day for ", func_139(iParam0, 0), " Returning -1. This is really bad. ");
	return -15;
}

void func_136(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_131(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to set Core Degrade Count for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_137(int iParam0)
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
	iVar0 = func_115(iParam0);
	iVar1 = func_116(iParam0);
	iVar2 = func_117(iParam0);
	iVar3 = func_118(iParam0);
	iVar4 = func_119(iParam0);
	iVar5 = func_120(iParam0);
	switch (func_274(iParam0))
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

void func_138(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_131(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", func_137(iParam1));
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", func_137(iParam1));
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to set Core Degrade Time of Day for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_139(int iParam0, int iParam1)
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

bool func_140(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_275(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_131(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", iParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", iParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Failed to set Core Display Time for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), ". This is really bad. ");
			break;
	}
}

void func_142(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_276(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_277(iParam1), fParam2, -1);
	}
	else
	{
		DEBUG::_0x6D2A5155B260E879(40, 84, "__RPG_GLOBAL_HANDLE_BLACKBOARD_FOR_ATTRIBUTE - INVALID BLACK BOARD NAME for Attribute Core: ", func_139(iParam1, 0));
	}
}

bool func_143()
{
	return func_270(0);
}

void func_144(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_131(2);
	}
	sVar0 = Global_1275959.f_21;
	DEBUG::_0xA308F935BDECCEC0(43432, 84, "__RPG_GLOBAL_CACHE_ATTRIBUTE_CORE_DATA - Caching Attribute Core ", func_139(iParam0, 0), " Value Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_143()), " Time Stamp: ", sVar0);
	func_278(iParam0, sParam1, iParam3);
	if (bParam2)
	{
		func_279(iParam0, sVar0, iParam3);
	}
}

bool func_145(int iParam0, bool bParam1)
{
	return func_46(func_44(), iParam0, bParam1);
}

float func_146(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_131(1);
	}
	switch (iParam1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_280(0, 0), " Value: ", Global_1957252.f_1431.f_26[iParam0]);
			return Global_1957252.f_1431.f_26[iParam0];
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_280(1, 0), " Value: ", Global_1957252.f_1565.f_2.f_26[iParam0]);
			return Global_1957252.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Couldn't retrieve Cached Attribute XP data for Attribute: ", func_65(iParam0, 0));
	return -1f;
}

int func_147(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_148(float fParam0, float fParam1, float fParam2)
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

int func_149(int iParam0, char* sParam1, int iParam2)
{
	if (!func_281(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_131(2);
	}
	DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE - Caching Attribute ", func_65(iParam0, 0), " XP Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_143()));
	func_282(iParam0, sParam1, iParam2);
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

void func_150(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_151(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_283(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_153(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_284(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_285(iParam0, 0));
		return false;
	}
	if (func_286(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_285(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_287(iParam0, 1)) || func_288(32768))
	{
		if (!func_287(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_289())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_152(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_153(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

bool func_154(int iParam0)
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

char* func_155(int iParam0)
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
	DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_GET_OVERPOWER_POSTFX_STRING_FOR_ATTRIBUTE - Attribute: ", func_65(iParam0, 0), " does not have an overpower post fx... Returning NULL ");
	return "";
}

void func_156(int iParam0)
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
	iVar1 = func_53(2);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Refilling ", iParam0, " Health Tanks ");
	func_54(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
}

void func_157(int iParam0)
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
	iVar1 = func_57(2);
	func_58(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_158(int iParam0, bool bParam1)
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
	iVar0 = func_55(2);
	DEBUG::_0xF0783374333FD8CE(2184, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Refilling ", iParam0, " Dead Eye Tanks ( ", iVar0, " per tank )");
	func_56(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_159(int iParam0, bool bParam1, bool bParam2)
{
	func_61(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return 1516353659;
		case 20:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 21:
			return joaat("HERB_INDIAN_TOBACCO");
		case 24:
			return joaat("HERB_MILKWEED");
		case 27:
			return joaat("HERB_OLEANDER_SAGE");
		case 28:
			return joaat("HERB_OREGANO");
		case 29:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 30:
			return joaat("HERB_PRAIRIE_POPPY");
		case 32:
			return joaat("HERB_RAMS_HEAD");
		case 34:
			return joaat("HERB_RED_RASPBERRY");
		case 35:
			return joaat("HERB_RED_SAGE");
		case 38:
			return joaat("HERB_VANILLA_FLOWER");
		case 39:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 49:
			return joaat("HERB_WILD_CARROTS");
		case 50:
			return joaat("HERB_WILD_FEVERFEW");
		case 51:
			return joaat("HERB_WILD_MINT");
		case 52:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 53:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 22:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 23:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 25:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 26:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 31:
			return joaat("HERB_QUEENS_ORCHID");
		case 33:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 36:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 37:
			return joaat("HERB_SPIDER_ORCHID");
		case 40:
			return joaat("HERB_WILD_FLWR_AGARITA");
		case 42:
			return joaat("HERB_WILD_FLWR_BITTERWEED");
		case 43:
			return joaat("HERB_WILD_FLWR_BLOOD_FLOWER");
		case 41:
			return joaat("HERB_WILD_FLWR_BLUE_BONNET");
		case 44:
			return joaat("HERB_WILD_FLWR_CARDINAL_FLOWER");
		case 45:
			return joaat("HERB_WILD_FLWR_CHOCOLATE_DAISY");
		case 46:
			return joaat("HERB_WILD_FLWR_CREEK_PLUM");
		case 47:
			return joaat("HERB_WILD_FLWR_RHUBARB");
		case 48:
			return joaat("HERB_WILD_FLWR_WISTERIA");
	}
	return 0;
}

struct<2> func_161(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

char* func_162(int iParam0, int iParam1)
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

bool func_163(int iParam0)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1072032.f_28503[51 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1072032.f_28503[51 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "location";
		case 1:
			return "playlist";
		case 2:
			return "flag_type";
		case 3:
			return "flag";
		case 4:
			return "entity";
		case 5:
			return "use_context";
		case 6:
			return "respawn";
		case 7:
			return "animal";
		case 8:
			return "position_group";
		case 9:
			return "prop";
		case 10:
			return "particle";
		case 11:
			return "overlay";
		case 12:
			return "outfit";
		case 13:
			return "animal_transformation_data";
		case 14:
			return "locations";
		case 15:
			return "location(%i)";
		case 16:
			return "location(id=%x)";
		case 17:
			return "content_data";
		case 18:
			return "respawn_positions";
		case 19:
			return "position_group(id=%x)";
		case 20:
			return "position_group(%i)";
		case 21:
			return "respawn(%i)";
		case 22:
			return "scenes";
		case 23:
			return "scene(id=%x)";
		case 24:
			return "origin";
		case 25:
			return "playlists";
		case 26:
			return "playlist(%i)";
		case 27:
			return "flags";
		case 28:
			return "flag_type(id=%x)";
		case 29:
			return "flag_type(%i)";
		case 30:
			return "flag(%i)";
		case 31:
			return "entities";
		case 32:
			return "entity_type(id=%x)";
		case 33:
			return "entity(%i)";
		case 34:
			return "use_contexts";
		case 35:
			return "use_context(id=%x)";
		case 36:
			return "use_context(%i)";
		case 37:
			return "animals";
		case 38:
			return "animal(id=%x)";
		case 39:
			return "animal(item=%x)";
		case 40:
			return "animal(model=%x)";
		case 41:
			return "animal(unlock=%x)";
		case 42:
			return "animal(%i)";
		case 43:
			return "stats";
		case 44:
			return "stat(id=%x)";
		case 45:
			return "cost";
		case 46:
			return "awards";
		case 47:
			return "award(id=%x)";
		case 48:
			return "eagle_eye";
		case 49:
			return "props";
		case 50:
			return "prop(%i)";
		case 51:
			return "particles";
		case 52:
			return "particle(%i)";
		case 53:
			return "overlays";
		case 54:
			return "overlay(%i)";
		case 55:
			return "loco_archetype";
		case 56:
			return "effects";
		case 57:
			return "effect(id=%x)";
		case 58:
			return "extend";
		case 59:
			return "outfits";
		case 60:
			return "outfit(%i)";
		case 61:
			return ":id";
		case 62:
			return ":position";
		case 63:
			return ":radius";
		case 64:
			return ":animal";
		case 65:
			return ":heading";
		case 66:
			return ":scene_hash";
		case 67:
			return ":model";
		case 68:
			return ":rotation";
		case 69:
			return ":name";
		case 70:
			return ":male";
		case 71:
			return ":female";
		case 72:
			return ":mission";
		case 73:
			return ":type";
		case 74:
			return ":control_action";
		case 75:
			return ":exit_timeout_s";
		case 76:
			return ":duration_s";
		case 77:
			return ":unlock";
		case 78:
			return ":stat_item";
		case 79:
			return ":base_id";
		case 80:
			return ":item";
		case 81:
			return ":cost_type";
		case 82:
			return ":award";
		case 83:
			return ":red";
		case 84:
			return ":green";
		case 85:
			return ":blue";
		case 86:
			return ":alpha";
		case 87:
			return ":directory";
		case 88:
			return ":offset";
		case 89:
			return ":bone";
		case 90:
			return ":scale";
		case 91:
			return ":emitter_scale";
		case 92:
			return ":alpha_trigger";
		case 93:
			return ":mask";
		case 94:
			return ":intensity";
		case 95:
			return ":postfx";
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 41, "ANIMAL_TRANSFORMATION__XML__GET_RQID - ", func_290(iParam0, 0), " undefined");
	DEBUG::_0x4423BBAB7EB2B96B(8, 41, "ANIMAL_TRANSFORMATION__XML__GET_RQID - undefined query");
	return "";
}

bool func_165(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&bVar0, uParam0))
	{
	}
	DEBUG::_0x4DC69742196F818A(43176, 41, "ANIMAL_TRANSFORMATION__XML__RETRIEVE_ATTRIBUTE__HASH - filled out ", UNK_0x4379B6FA65D55295(bVar0), " ", bVar0, " from \"", func_164(iParam1), "\"");
	return bVar0;
}

void func_166(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_CLOTHING_SYSTEM_SET_PLAYER_TYPE] Setting to: ", func_75(bParam0, 0), " from: ", func_75(func_291(), 0));
	Global_1953612.f_1 = bParam0;
}

void func_167()
{
	func_292(128);
}

void func_168(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_CLEAR_FLAG] Clearing: ", func_243(iParam0, 0));
	Global_1953612 = (Global_1953612 - (Global_1953612 && iParam0));
}

bool func_169(bool bParam0, bool bParam1)
{
	int iVar0;

	switch (bParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			*bParam1 = joaat("MP_MALE");
			break;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			*bParam1 = joaat("MP_FEMALE");
			break;
		default:
			iVar0 = func_293(0, bParam0);
			if (iVar0 != -1)
			{
				*bParam1 = func_294(iVar0);
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_SYSTEM_RETURN_CURRENT_PLAYER_MODEL] MP Player Model Not Specified");
				*bParam1 = joaat("MP_MALE");
				return false;
			}
			break;
	}
	return true;
}

var func_170(bool bParam0, int iParam1)
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

bool func_171(bool bParam0)
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_72(&Var2))
	{
		return false;
	}
	if (!func_73(&Var2, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_73(&Var2, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_73(&Var2, 40, bParam0, 0, 1))
	{
		return false;
	}
	if (!func_73(&Var2, 59, 0, 0, 1))
	{
		return false;
	}
	iVar1 = func_295(&Var2, 12);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (!func_73(&Var2, 60, bVar0, 0, 1))
	{
		return false;
	}
	return func_296(Var2);
}

void func_172(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(10408, 208, "[METAPED_CLOTHING_SYSTEM_SET_ANIMAL_OUTFIT] Setting to: ", func_297(bParam0, 0), " | Hash:  ", bParam0, " from: ", func_297(Global_1953612.f_3, 0));
	Global_1953612.f_3 = bParam0;
}

int func_173(int iParam0)
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

bool func_174(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_175(int iParam0)
{
	if (func_298(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_299(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

void func_176(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_300(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_301(iParam0, 0));
	if (!func_302(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_303(128) && !func_304(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_305() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_175(18);
	}
	func_306(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

int func_177(int iParam0)
{
	if (func_307(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_299(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

void func_178(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_179(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_180(struct<30> Param0, int iParam30)
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
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_308(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_308(Param0.f_6.f_9, 0));
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

void func_181(struct<7> Param0, var uParam7, var uParam8, int iParam9)
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

int func_182(int iParam0, int iParam1)
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

char* func_183(int iParam0, int iParam1)
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

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_309(iParam0);
	iVar1 = Global_1275959;
	iVar2 = func_187(iParam1, 1);
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Source: ", func_82(iParam0, 0), " Perk: ", func_183(iParam1, 0), " Deactivation Trigger: ", func_310(Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_1, 0));
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

int func_185(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_83(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid Source ID ", iParam1);
		return 0;
	}
	if (!func_311(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid perk ID ", iParam0);
		return 0;
	}
	iVar0 = func_187(iParam0, 1);
	func_312(iParam0, iParam1, iParam2);
	if (func_313(Global_1146683.f_35859.f_3116[iVar0 /*31*/]) && func_314(iParam0, Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Now checking Stack Group: ", func_315(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " for any perks that could be enabled now that this perk is diabled... ");
		vVar1 = { func_316(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_317(vVar1))
		{
			if (func_318(vVar1.x, vVar1.y, vVar1.z))
			{
				func_319(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_320(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
				DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Failed to activate next availible perk in Stack Group: ", func_315(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " there was a critical failure... ");
			}
		}
		else
		{
			func_320(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - No suitable replacement for active perk in Stack Group: ", func_315(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), "...");
		}
	}
	return 1;
}

void func_186(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 84, "__RPG_GLOBAL__ALTER_SOURCES_FOR_PERK_ID - Perk: ", func_183(func_321(iParam0, 1), 0), " is being altered by: ", iParam1, " to a total of: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_189(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	DEBUG::_0xF0783374333FD8CE(168, 84, "__RPG_GLOBAL__SET_SOURCES_FOR_PERK_ID - Perk: ", func_183(func_321(iParam0, 1), 0), " is being set to: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_190(var uParam0)
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

int func_191(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_309(iParam0);
	iVar1 = Global_1275959;
	iVar2 = func_187(iParam1, 1);
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "RPG_GLOBAL_STAT_GET_ACTIVATION_TYPE -	Source: ", func_82(iParam0, 0), " Perk: ", func_183(iParam1, 0), " Activation Trigger: ", func_322(Global_1146683.f_35859.f_3116[iVar2 /*31*/], 0));
	DEBUG::_0x1B08D1EB9D8C4931(136, 84, "RPG_GLOBAL_STAT_GET_ACTIVATION_TYPE - Source Player Index: ", iVar0, " Local Player: ", iVar1);
	switch (Global_1146683.f_35859.f_3116[iVar2 /*31*/])
	{
		case joaat("ON_ENABLE"):
			if (iVar1 == iVar0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT_GET_ACTIVATION_TYPE - Source attempting to be enabled on Local Player. Enable directly. ");
				return 0;
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT_GET_ACTIVATION_TYPE - Source attempting to be enabled on Remote Player. Ignore... ");
				return 2;
			}
			break;
		case joaat("ENTER_REVIVED_REMOTE"):
		case -2129621195:
		case -1503245593:
		case joaat("ALLY_ENTER_DEADEYE"):
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_STAT_GET_ACTIVATION_TYPE - Activation Condition is not handled, but is for local player, add to activation Queue... ");
				return 1;
			}
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STAT_GET_ACTIVATION_TYPE - Activation Condition is not handled, and is for a remote player, Ignoring... ");
	return 2;
}

int func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_83(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - invalid Source ID ", iParam1);
		return 0;
	}
	if (!func_311(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - invalid perk ID ", iParam0);
		return 0;
	}
	iVar0 = func_187(iParam0, 1);
	if (!func_323(iParam2))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - invalid perk group index ", iParam2);
		return 0;
	}
	bVar1 = func_313(Global_1146683.f_35859.f_3116[iVar0 /*31*/]);
	if (bVar1 && func_324(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - There is an active perk already in stack group: ", func_315(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " will need to disable perk first... ");
		vVar2 = { func_325(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (!func_312(vVar2.x, vVar2.y, vVar2.z))
		{
			DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - critical failure to deactivate active perk in stacking group: ", func_315(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " bailing out... ");
			return 0;
		}
	}
	if (func_318(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_319(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_193(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_194(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_195(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_196(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_197(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_198(int iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

void func_199(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "SET_PLAYER_INSPECTING_ITEM: TRUE!!!");
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DEBUG::_0xF0783374333FD8CE(8, 0, "SET_PLAYER_INSPECTING_ITEM: FALSE!!!");
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_200(int iParam0)
{
	return func_326(Global_1940296.f_38, iParam0);
}

struct<4> func_201(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_96(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_95(joaat("CHARACTER"), func_214(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_95(joaat("CHARACTER"), func_214(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_95(joaat("CHARACTER"), func_214(), -1591664384, bParam0);
}

int func_202(bool bParam0)
{
	vector3 vVar0;

	if (!func_4(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

char* func_203(int iParam0, int iParam1)
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

struct<4> func_204(bool bParam0)
{
	int iVar0;

	iVar0 = func_96(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_95(923904168, func_201(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_95(923904168, func_201(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_95(923904168, func_201(bParam0), -740156546, 0);
}

bool func_205(bool bParam0, bool bParam1)
{
	if (func_209(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_327();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_206(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_328(bParam0, *uParam1, iParam2, bParam3, 1, bParam4) > 0;
}

bool func_207(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_329(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_208(bool bParam0)
{
	int iVar0;

	iVar0 = func_96(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_95(271701509, func_201(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_95(271701509, func_201(bParam0), 12999093, 0);
}

bool func_209(bool bParam0)
{
	struct<2> Var0;

	if (!func_4(bParam0, 0))
	{
		return false;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return false;
	}
	return Var0.f_1;
}

bool func_210(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_209(bParam0);
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
			if (func_330(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_211(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_331(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_212(bool bParam0, int iParam1)
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

int func_213(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_129(func_50(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

struct<4> func_214()
{
	struct<4> Var0;

	return Var0;
}

char* func_215(int iParam0, int iParam1)
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

bool func_216(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_215(iParam0, 0), " -> ", func_1(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_332(iParam1->f_8, iParam0, sVar0, 2048) || func_332(iParam1->f_8, iParam0, sVar0, 32768)) || func_332(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_332(iParam1->f_8, iParam0, sVar0, 4) || func_332(iParam1->f_8, iParam0, sVar0, 256)) || func_332(iParam1->f_8, iParam0, sVar0, 65536)) || func_332(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_332(iParam1->f_8, iParam0, sVar0, 1) || func_332(iParam1->f_8, iParam0, sVar0, 8)) || func_332(iParam1->f_8, iParam0, sVar0, 65536)) || func_332(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_332(iParam1->f_8, iParam0, sVar0, 1) || func_332(iParam1->f_8, iParam0, sVar0, 16)) || func_332(iParam1->f_8, iParam0, sVar0, 2)) || func_332(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_332(iParam1->f_8, iParam0, sVar0, 8) || func_332(iParam1->f_8, iParam0, sVar0, 4096)) || func_332(iParam1->f_8, iParam0, sVar0, 256)) || func_332(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_217(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

int func_218(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_1(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_333(iParam1, 1, 0, 0);
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
	func_333(iParam1, 2, 0, 0);
	return -1;
}

int func_219(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_1(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_333(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

void func_220(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (*uParam0 <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__SAVE_CACHE_DATA] Cache is empty, was something lost here? | EXIT");
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_101(4718592) && !func_334(func_209(Global_1953612.f_1575.f_1[uParam0->f_2[iVar0 /*2*/] /*3*/])))
		{
			DEBUG::_0xF0783374333FD8CE(40, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__SAVE_CACHE_DATA] Player has override data present, bypassing save for: ", func_335(func_258(uParam0->f_2[iVar0 /*2*/], 1), 0));
		}
		else
		{
			func_336(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__SAVE_CACHE_DATA] nothing was transferred | EXIT");
		return;
	}
	if (bParam4)
	{
		bVar2 = false;
		if (Global_1953612.f_1694 != 491602716 || !func_223(2, -1))
		{
			bVar2 = true;
		}
		else if (!func_17(Global_1953612.f_1694, -166674229) && (Global_1953612.f_1694 != 491602716 || !func_223(2, -1)))
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			Global_1953612.f_1694 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1953612.f_1575 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_337(-1, 0, 6);
			func_47(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_338(0, 1);
	}
}

bool func_221(bool bParam0)
{
	if (!func_4(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_SAVED_OUTFIT: attempting to process an invalid item!");
	}
	if (func_17(bParam0, -1285438911))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "CI_TAG_ITEM_SAVED_OUTFIT");
		return true;
	}
	return false;
}

int func_222(bool bParam0)
{
	int iVar0;

	iVar0 = func_339(bParam0);
	if (iVar0 > -1)
	{
		return iVar0;
	}
	DEBUG::_0x83407B92D46F25C3(168, 208, "METAPED_SAVE__GET_OUTFIT_SAVE_SLOT_FOR_INVENTORY_ITEM: No slot index mapped for item ", func_1(bParam0, 0), ".");
	return iVar0;
}

bool func_223(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17414.f_55.f_664.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

void func_224(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	bool bVar122;

	bVar0 = false;
	switch (func_209(bParam0))
	{
		case -2061583405:
			bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_28), bParam4);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_27), bParam4);
			if (func_17(bParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_341(&Var1, bParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						bVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_4(bVar122, 0))
						{
							func_224(bVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_33.f_7), bParam4);
			break;
		default:
			if (func_17(bParam0, 160827531))
			{
				bVar0 = func_340(bParam0, &(Global_1953612.f_3411.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_342(0, bParam0);
	}
	if (bParam2)
	{
		func_343();
	}
	if (bParam1)
	{
		func_338(0, 0);
	}
}

int func_225(bool bParam0)
{
	switch (bParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			return 4;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			return 8;
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE_GET_DISABLE_FLAG_FROM_CATEGORY] Category ", func_235(bParam0, 0), " does not support the portable wardrobe | RETURN MPP_FLAG_CLEAR");
	return 0;
}

bool func_226(int iParam0)
{
	return (Global_1953612.f_3411.f_33.f_6 && iParam0) != 0;
}

int metapedPlayerPortableWardrobeGetItemsInCategory(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case -2061583405:
			return Global_1953612.f_3411.f_28;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			return Global_1953612.f_3411.f_30;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			return Global_1953612.f_3411.f_29;
		case -1719060085:
			return Global_1953612.f_3411.f_31;
		case 1388798186:
			return Global_1953612.f_3411.f_33.f_7;
		case 119907797:
			return Global_1953612.f_3411.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1953612.f_3411.f_27;
			}
			else
			{
				return func_344();
			}
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_GET_ITEMS_IN_CATEGORY] Passed category not supported. Returning 0.");
	return 0;
}

void func_228(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	int iVar5;
	bool bVar6;

	if (bParam1 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */)
	{
		bVar6 = 1535140710; /* GXTEntry: "Freak Mask" */
	}
	else if (bParam1 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */)
	{
		bVar6 = -1261287885; /* GXTEntry: "Bandana" */
	}
	else if (bParam1 == -2061583405)
	{
		bVar6 = joaat("CLOTHING_ITEM_F_HAT_000_TINT_001");
	}
	if (!func_345(bVar6, &Var0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
		DEBUG::_0x83407B92D46F25C3(168, 139, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_CATEGORY_MESSAGE: Failed to find UI data for ", func_1(bVar6, 0), " using _PLACEHOLDER texture.");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 139, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_CATEGORY_MESSAGE: Failed to find a valid texture for item ", func_1(bVar6, 0), ".");
		return;
	}
	if (bParam0)
	{
		sVar3 = "PORTABLE_WARDROBE_CATEGORY_ENABLED";
	}
	else
	{
		sVar3 = "PORTABLE_WARDROBE_CATEGORY_DISABLED";
	}
	sVar4 = "Transaction_Positive";
	iVar5 = joaat("COLOR_PURE_WHITE");
	DEBUG::_0xF0783374333FD8CE(10920, 158, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_CATEGORY_MESSAGE: Showing ", func_235(bParam1, 0), " with color ", func_346(iVar5, 0), " enable message: ", MISC::_0xF216F74101968DB0(bParam0));
	func_349(func_348(MISC::_CREATE_VAR_STRING(10, sVar3, MISC::_CREATE_VAR_STRING(0, func_347(bParam1))), iVar5), Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar5, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_229(int iParam0, char* sParam1)
{
	DEBUG::_0xEF256AE8A5A27966(160, 208, sParam1, "[METAPED_PLAYER_PORTABLE_WARDROBE_SET_PORTABLE_FLAG] Setting: ", func_247(iParam0));
	Global_1953612.f_3411.f_33.f_6 = (Global_1953612.f_3411.f_33.f_6 || iParam0);
}

void func_230(int iParam0, char* sParam1)
{
	DEBUG::_0xEF256AE8A5A27966(160, 208, sParam1, "[METAPED_PLAYER_PORTABLE_WARDROBE_CLEAR_PORTABLE_FLAG] Clearing: ", func_247(iParam0));
	Global_1953612.f_3411.f_33.f_6 = (Global_1953612.f_3411.f_33.f_6 - (Global_1953612.f_3411.f_33.f_6 && iParam0));
}

Vector3 func_231(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	return Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

void func_232(var uParam0, int iParam1, int iParam2)
{
	DEBUG::_0x1B08D1EB9D8C4931(2796168, 208, "[METAPED_SAVE_MP__SET_SAVED_COMPONENT] Outfit: ", iParam2, " Setting: ", func_335(func_258(iParam1, 1), 0), " to component: ", UNK_0x4379B6FA65D55295(*uParam0), " Wearable: ", UNK_0x4379B6FA65D55295(uParam0->f_1), " flags: ", func_247(uParam0->f_2));
	Global_17414.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

bool func_233(bool bParam0)
{
	bool bVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bParam0, 0, &bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_CASH_INVENTORY_CATEGORY] Category does not have a fitslot? ", func_235(bParam0, 0));
		return -358215195;
	}
	return func_249(bVar0);
}

int func_234(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", bParam0, ", returning '-1'");
	}
	return -1;
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", bParam0, ", returning '-1'");
	}
	return -1;
}

var func_235(bool bParam0, int iParam1)
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

int func_236(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_237(int iParam0, int iParam1)
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

void func_238(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_239(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_116(*iParam0);
	iVar1 = func_115(*iParam0);
	if (iParam1 < 1 || iParam1 > func_121(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_121(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_240(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_241(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_242(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

char* func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPC_SYSTEM_FLAG_CLEAR";
		case 1:
			return "MPC_SYSTEM_FLAG_ANIM_LOADED";
		case 2:
			return "MPC_SYSTEM_FLAG_START_LOADING_ANIM";
		case 4:
			return "MPC_SYSTEM_FLAG_PROCESS_LOAD_BALANACE_LIST";
		case 8:
			return "MPC_SYSTEM_FLAG_UPDATE_REQUESTS_PRESENT";
		case 16:
			return "MPC_SYSTEM_FLAG_SAVE_PLAYER_METAPED";
		case 32:
			return "MPC_SYSTEM_FLAG_OVERRIDE_OUTFIT_DATA_PRESENT";
		case 64:
			return "MPC_SYSTEM_FLAG_GANG_OUTFIT_THEME_PRESENT";
		case 128:
			return "MPC_SYSTEM_FLAG_SUPPRESS_HAT_KNOCK_OFF_EVENT";
		case 256:
			return "MPC_SYSTEM_FLAG_PLAYER_INITIALIZED";
		case 512:
			return "MPC_SYSTEM_FLAG_NEW_PLAYER_CHARACTER_SAVE";
		case 1024:
			return "MPC_SYSTEM_FLAG_OUTFIT_PRELOAD_IS_REQUESTED";
		case 2048:
			return "MPC_SYSTEM_FLAG_OUTFIT_PRELOAD_IS_COMPLETE";
		case 4096:
			return "MPC_SYSTEM_FLAG_OUTFIT_PRELOAD_IN_PROGRESS";
		case 8192:
			return "MPC_SYSTEM_FLAG_OUTFIT_APPLIED_IN_RESPAWN";
		case 16384:
			return "MPC_SYSTEM_FLAG_FORCE_RESTRICTION_REQUESTS";
		case 32768:
			return "MPC_SYSTEM_FLAG_TEMP_HAT_IS_EQUIPPED";
		case 65536:
			return "MPC_SYSTEM_FLAG_DISABLE_PORTABLE_WARDROBE";
		case 131072:
			return "MPC_SYSTEM_FLAG_CACHED_OUTFIT_IS_PRELOADING";
		case 262144:
			return "MPC_SYSTEM_FLAG_FORCE_HAT_ON_RESPAWN";
		case 524288:
			return "MPC_SYSTEM_FLAG_PLAYER_EQUIPPED_UNALTERABLE_OUTFIT";
		case 1048576:
			return "MPC_SYSTEM_FLAG_METAPED_SAVE_CHANGED";
		case 2097152:
			return "MPC_SYSTEM_FLAG_ARMOR_OUTFIT_EQUIPPPED";
		case 4194304:
			return "MPC_SYSTEM_FLAG_PLAYER_EQUIPPED_LOCKED_OUTFIT";
		case 8388608:
			return "MPC_SYSTEM_FLAG_PLAYER_RESPAWNED_AS_ANIMAL";
		case 16777216:
			return "MPC_SYSTEM_FLAG_DISABLE_RESPAWN_CLOTHING_VALIDATION_ONCE";
		case 33554432:
			return "MPC_SYSTEM_FLAG_PLAYER_ANIMAL_TRANSFORMATION_RESET_TIMER_STARTED";
		case 67108864:
			return "MPC_SYSTEM_FLAG_REQUEST_PEDSHOT_AFTER_ALL_METAPED_REQUESTS_ARE_PROCESSED";
		case 134217728:
			return "MPC_SYSTEM_FLAG_PAUSE_REQUEST_QUEUES";
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

char* func_244(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPC_REQUEST_TYPE_EMPTY";
		case 1:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_TEMP_METAPED_CLOTHING";
		case 2:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_CURRENT_METAPED_CLOTHING";
		case 3:
			return "MPC_REQUEST_TYPE_CREATE_HEAD_OVERLAY";
		case 4:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_HEAD_OVERLAY";
		case 5:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_VARIATION";
		case 6:
			return "MPC_REQUEST_TYPE_SWAP_HEAD";
		case 7:
			return "MPC_REQUEST_TYPE_APPLY_TINTS_TO_PLAYER";
		case 8:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_HEAD_HAIR";
		case 9:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_META_TEMP_HEAD_HAIR";
		case 10:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_FACIAL_HAIR";
		case 11:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_TEMP_FACIAL_HAIR";
		case 12:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_REMOVE_GORE";
		case 13:
			return "MPC_REQUEST_TYPE_FINALIZE_OVERLAY";
		case 14:
			return "MPC_REQUEST_TYPE_TRIGGER_HIDE_ACTIONS";
		case 15:
			return "MPC_REQUEST_TYPE_CLEAR_HIDE_ACTIONS";
		case 16:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_TEMP_COMPONENT";
		case 17:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_CURRENT_COMPONENT";
		case 18:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_TEMP_CACHE_COMPONENTS";
		case 19:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_CURRENT_CACHE_COMPONENTS";
		case 20:
			return "MPC_REQUEST_TYPE_UPDATE_OUTFIT_WITH_SWAP_ANIMATION";
		case 21:
			return "MPC_REQUEST_TYPE_UPDATE_REMOVE_OPPOSITE_ITEMS_FOR_META_TYPE";
		case 22:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_EXPRESSIONS";
		case 23:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_WEARABLES";
		case 24:
			return "MPC_REQUEST_TYPE_UPDATE_SP_PLAYER_OUTFIT_REQUEST";
		case 25:
			return "MPC_REQUEST_TYPE_UPDATE_SP_PLAYER_OUTFIT_HASH";
		case 26:
			return "MPC_REQUEST_TYPE_GIVE_ITEMS_FROM_OUTFIT_TO_PLAYER";
		case 27:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_PORTABLE_WARDROBE";
		case 28:
			return "MPC_REQUEST_TYPE_ADD_ITEM_TO_PORTABLE_WARDROBE";
		case 29:
			return "MPC_REQUEST_TYPE_REMOVE_ITEM_FROM_PORTABLE_WARDROBE";
		case 30:
			return "MPC_REQUEST_TYPE_UPDATE_OVERRIDE_OUTFIT_RPG_SYSTEM_DATA";
		case 31:
			return "MPC_REQUEST_TYPE_UPDATE_OUTFIT_RPG_SYSTEM_DATA";
		case 32:
			return "MPC_REQUEST_TYPE_SET_OUTFIT_RPG_GLOBAL_STAT_DATA";
		case 33:
			return "MPC_REQUEST_TYPE_CLEAR_OUTFIT_RPG_GLOBAL_STAT_DATA";
		case 34:
			return "MPC_REQUEST_TYPE_MARK_ALL_CURRENT_ITEMS_AS_EQUIPPED";
		case 35:
			return "MPC_REQUEST_TYPE_UPDATE_OUTFIT_IN_PORTABLE_WARDROBE";
		case 36:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_OVERLAY_INVENTORY";
		case 37:
			return "MPC_REQUEST_TYPE_ASSET_PRELOAD_PORTABLE_WARDROBE_ITEMS";
		case 38:
			return "MPC_REQUEST_TYPE_ASSET_RELEASE_PORTABLE_WARDROBE_ITEMS";
		case 39:
			return "MPC_REQUEST_TYPE_END";
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

bool func_245(int iParam0)
{
	return Global_1953612.f_595[iParam0] > 0;
}

void func_246(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_REQUEST_INCREMENT_TYPE] Incrementing: ", func_244(iParam0, 0));
	Global_1953612.f_595[iParam0]++;
}

char* func_247(int iParam0)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, "BIT0 ", 64);
	iVar8 = 0;
	iVar8 = 1;
	while (iVar8 <= 32)
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			StringIntConCat(&cVar0, 1, 64);
		}
		else
		{
			StringIntConCat(&cVar0, 0, 64);
		}
		if ((iVar8 % 4) == 0)
		{
			StringConCat(&cVar0, " ", 64);
		}
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar8++;
	}
	StringConCat(&cVar0, "BIT31", 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_248()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__TRANSFER_CURRENT_DATA_TO_TEMP_DATA] Transfering Current Data to Temp Data");
	Global_1953612.f_1575 = Global_1953612.f_1694;
	Global_1953612.f_1571 = Global_1953612.f_1573;
	Global_1953612.f_1571.f_1 = Global_1953612.f_1573.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[METAPED_PLAYER_COMPONENTS__TRANSFER_CURRENT_DATA_TO_TEMP_DATA] TransferingMeta Type: ", func_335(func_258(iVar0, 1), 0), " Component: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1694.f_1[iVar0 /*3*/]));
		Global_1953612.f_1575.f_1[iVar0 /*3*/] = { Global_1953612.f_1694.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_249(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953612.f_83[iVar0 /*12*/].f_9 == bParam0)
		{
			return func_258(iVar0, 1);
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_INVENTORY_SLOTID] Failed to find: ", func_212(bParam0, 0));
	return -358215195;
}

void func_250(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS_SET_META_TYPE_TO_BE_BYPASSED] Marking: ", func_335(bParam0, 0), " to be bypassed!");
	UNK_0x355E72323AEE83CC(208, 6);
	func_259(bParam0, 8, 6);
}

bool func_251(bool bParam0, bool bParam1)
{
	if (!func_4(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_NONE_ITEM: attempting to process an invalid item!");
	}
	if (!bParam1 && (bParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || bParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_17(bParam0, 265372629))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_NONE_ITEM");
		return true;
	}
	return false;
}

void func_252(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*bParam1 == 832230214 || *bParam1 == 30652334) || *bParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_209(uParam0->f_1[iVar0 /*3*/]) != 1882579758)
			{
				return;
			}
			iVar1 = func_350(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1953612.f_83[iParam2 /*12*/])
			{
				*bParam1 = iVar1;
				DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] None item mapped to: ", UNK_0x4379B6FA65D55295(*bParam1));
				return;
			}
		}
		if (!func_351(*bParam1, iParam2))
		{
			*bParam1 = Global_1953612.f_1694.f_1[iParam2 /*3*/];
			DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] Changing item to the current item: ", UNK_0x4379B6FA65D55295(*bParam1));
			return;
		}
	}
	*bParam1 = Global_1953612.f_83[iParam2 /*12*/];
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] Using default none item: ", UNK_0x4379B6FA65D55295(*bParam1));
}

void func_253(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Cleaning Cache");
	func_352(&(Global_1953612.f_2956), iParam0);
}

void func_254(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_353(&(Global_1953612.f_2956), iParam0, iParam1);
}

void func_255(var uParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(160, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_META_FLAG] Setting: ", func_247(iParam1));
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_256(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_251(bVar0, 1);
	if (bParam3 && func_17(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_354(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_258(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_355(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_356(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_357(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_358(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_359(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_360(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_361(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_362(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_363(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_364(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_365(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_366(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_367(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_368(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_369(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_370(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

bool func_257(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (bParam2 == 289238755)
	{
		DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] Item: ", UNK_0x4379B6FA65D55295(bParam0), " has a wearable removal action | Bypass Wearable State Check");
		return 289238755;
	}
	if (bParam2 != 0 && func_371(bParam0, iVar0, bParam2) != -1)
	{
		DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] ", UNK_0x4379B6FA65D55295(bParam0), " contains the wearable state passed in | RETURNING ", UNK_0x4379B6FA65D55295(bParam2));
		return bParam2;
	}
	if (func_372(bParam0, func_258(iParam1, 1), &bParam2))
	{
		return bParam2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] Failed to find a working wearable state for: ", UNK_0x4379B6FA65D55295(bParam0), " type: ", func_335(func_258(iParam1, 1), 0));
	return false;
}

bool func_258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return 735520874;
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_259(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG] Clearing[", func_335(bParam0, 0), "]: ", func_247(iParam1));
	Global_1953612.f_83[func_234(bParam0, 1) /*12*/].f_11 = (Global_1953612.f_83[func_234(bParam0, 1) /*12*/].f_11 - (Global_1953612.f_83[func_234(bParam0, 1) /*12*/].f_11 && iParam1));
}

bool func_260(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_261(bool bParam0)
{
	if (bParam0 == joaat("CLOTHING_ITEM_HAIR_NONE"))
	{
		return 1687431937;
	}
	else if (func_17(bParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_17(bParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_17(bParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_262(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*18*/])->f_1 == -1 || (uParam0[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_373(iParam1, 0));
	return -1;
}

int func_263(bool bParam0)
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

int func_264(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_262(uParam1, iParam2);
	if (iVar0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_EXISTING_TEXTURE_BLEND] Something failed with the layer search!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(2696, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_EXISTING_TEXTURE_BLEND] Removing Layer[", iVar0, "] - ", func_373((uParam1[iVar0 /*18*/])->f_17, 0), " blend index: ", (uParam1[iVar0 /*18*/])->f_2);
	PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[iVar0 /*18*/])->f_2);
	func_265(uParam0, uParam1, iVar0);
	return 1;
}

void func_265(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(166536, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_LAYER_DATA] Setting: Layer[", iVar0, "] - ", func_373((uParam1[iVar0 /*18*/])->f_17, 0), " to Layer[", iVar0 + 1, "] - ", func_373((uParam1[iVar0 + 1 /*18*/])->f_17, 0));
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[iVar0 + 1 /*18*/]) };
			(uParam1[iVar0 /*18*/])->f_2 = ((uParam1[iVar0 /*18*/])->f_2 - 1);
			DEBUG::_0x1B08D1EB9D8C4931(136, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_LAYER_DATA] Setting: Layer[", iVar0, "] Texture blend index to: ", (uParam1[iVar0 /*18*/])->f_2);
			iVar0++;
		}
	}
}

bool func_266(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	struct<5> Var0;

	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam4, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Starting...");
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = joaat("ID");
	Var0.f_3 = 1;
	Var0.f_4 = bParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_374(&Var0, uParam0, 0, sParam4))
	{
		DEBUG::_0x83407B92D46F25C3(168, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Failed to fillout: ", UNK_0x4379B6FA65D55295(bParam1), " Hash: ", bParam1);
		return false;
	}
	*uParam0 = bParam1;
	if (bParam2)
	{
		func_375(uParam0, bParam3);
	}
	return true;
}

void func_267(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_260(uParam0, 1) || func_260(uParam0, 2)) || uParam0->f_6 < 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(35496, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] overlay is NOT created: ", MISC::_0xF216F74101968DB0(!func_260(uParam0, 1)), " is finalized: ", MISC::_0xF216F74101968DB0(func_260(uParam0, 2)), " layer count is: ", uParam0->f_6, " | EXIT");
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Updating base layer");
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_376(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_262(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Adding new layer: ", func_373(uParam2->f_17, 0));
			if (uParam0->f_6 >= 22)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Failed to add layer | Too many entries | EXIT");
				return;
			}
			*(uParam1[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_377(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(648, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Updating Layer[", iVar0, "] Type: ", func_373(uParam2->f_17, 0));
			uParam2->f_2 = (uParam1[iVar0 /*18*/])->f_2;
			*(uParam1[iVar0 /*18*/]) = { *uParam2 };
			func_378(uParam0, uParam1[iVar0 /*18*/], 1);
		}
	}
}

int func_268(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Attempting to add: ", UNK_0x4379B6FA65D55295(bParam2));
	if (!func_266(&Var0, bParam2, bParam3, bParam4, 6))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Failed to fillout layer | RETURN FALSE");
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		DEBUG::_0x83407B92D46F25C3(8, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY_DATA] Too many layer entries | RETURN FALSE");
		return 0;
	}
	*(uParam1[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Comparing[", iVar18, "] - ", (uParam1[iVar18 /*18*/])->f_1, " to [", (iVar18 - 1), "] - ", (uParam1[(iVar18 - 1) /*18*/])->f_1);
		if ((uParam1[iVar18 /*18*/])->f_1 < (uParam1[(iVar18 - 1) /*18*/])->f_1)
		{
			DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Swapping: [", iVar18, "] P=", (uParam1[iVar18 /*18*/])->f_1, " with: [", (iVar18 - 1), "] P=", (uParam1[(iVar18 - 1) /*18*/])->f_1);
			Var19 = { *(uParam1[iVar18 /*18*/]) };
			*(uParam1[iVar18 /*18*/]) = { *(uParam1[(iVar18 - 1) /*18*/]) };
			*(uParam1[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] ...Ending");
	return 1;
}

char* func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPC_PREVIEWED_ITEM_TYPE__INVALID";
		case 1:
			return "MPC_PREVIEWED_ITEM_TYPE__COMPONENT";
		case 2:
			return "MPC_PREVIEWED_ITEM_TYPE__OUTFIT";
		case 3:
			return "MPC_PREVIEWED_ITEM_TYPE__WEARABLE_STATE";
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

bool func_270(int iParam0)
{
	return func_379(&(Global_1957252.f_1565), iParam0, 1);
}

int func_271(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_272(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_380(2)));
}

char* func_273(int iParam0)
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

int func_274(int iParam0)
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
	iVar0 = func_117(iParam0);
	switch (func_116(iParam0))
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
	iVar2 = func_115(iParam0);
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

int func_275(int iParam0)
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_PED_ATTRIBUTE_FROM_RPG_GLOBAL_CORE - Attribute Core: ", func_139(iParam0, 0), " does not have an associated PED Attribute. This is REALLY bad, correct immediately... ");
	return 0;
}

char* func_276(int iParam0)
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

char* func_277(int iParam0)
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

void func_278(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_131(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Failed to set Core Value for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), ". This is really bad. ");
			break;
	}
}

void func_279(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_131(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Failed to set Last Updated Timestamp for ", func_139(iParam0, 0), " Pool: ", func_273(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_280(int iParam0, int iParam1)
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

bool func_281(int iParam0)
{
	if (func_154(iParam0))
	{
		return true;
	}
	else if (func_381(iParam0))
	{
		return true;
	}
	return false;
}

void func_282(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_131(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_65(iParam0, 0), " Pool: ", func_273(iParam2), " to ", fParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_65(iParam0, 0), " Pool: ", func_273(iParam2), " to ", fParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Failed to set Attribute XP for ", func_65(iParam0, 0), " Pool: ", func_273(iParam2), ". This is really bad. ");
			break;
	}
}

bool func_283(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_284(int iParam0)
{
	if (func_287(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_285(int iParam0, int iParam1)
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

bool func_286(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_285(iParam0, 0), " Seconds ", iVar2);
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

bool func_287(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_288(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_289()
{
	if (!func_382())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

char* func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__LOCATION";
		case 1:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__PLAYLIST";
		case 2:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__FLAG_TYPE";
		case 3:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__FLAG";
		case 4:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__ENTITY";
		case 5:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__USE_CONTEXT";
		case 6:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__RESPAWN";
		case 7:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__ANIMAL";
		case 8:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__POSITION_GROUP";
		case 9:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__PROP";
		case 10:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__PARTICLE";
		case 11:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__OVERLAY";
		case 12:
			return "ANIMAL_TRANSFORMATION_RQID__COUNT__OUTFIT";
		case 13:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ANIMAL_TRANSFORMATION_DATA";
		case 14:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__LOCATIONS";
		case 15:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__LOCATION_BY_IDX";
		case 16:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__LOCATION_BY_HASH";
		case 17:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__CONTENT_DATA";
		case 18:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__RESPAWN_POSITIONS";
		case 19:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__POSITION_GROUP_BY_HASH";
		case 20:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__POSITION_GROUP_BY_IDX";
		case 21:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__RESPAWN_POSITION_BY_IDX";
		case 22:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__SCENES";
		case 23:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__SCENE_BY_HASH";
		case 24:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ORIGIN";
		case 25:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__PLAYLISTS";
		case 26:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__PLAYLIST_BY_IDX";
		case 27:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__FLAGS";
		case 28:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__FLAG_TYPE_BY_HASH";
		case 29:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__FLAG_TYPE_BY_IDX";
		case 30:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__FLAG_BY_IDX";
		case 31:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ENTITIES";
		case 32:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ENTITY_TYPE_BY_HASH";
		case 33:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ENTITY_BY_IDX";
		case 34:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__USE_CONTEXTS";
		case 35:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__USE_CONTEXT_BY_HASH";
		case 36:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__USE_CONTEXT_BY_IDX";
		case 37:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ANIMALS";
		case 38:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ANIMAL_BY_HASH";
		case 39:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ANIMAL_BY_HASH__ITEM";
		case 40:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ANIMAL_BY_HASH__MODEL";
		case 41:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ANIMAL_BY_HASH__UNLOCK";
		case 42:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__ANIMAL_BY_IDX";
		case 43:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__STATS";
		case 44:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__STAT_BY_HASH";
		case 45:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__COST";
		case 46:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__AWARDS";
		case 47:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__AWARD_BY_HASH";
		case 48:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__EAGLE_EYE";
		case 49:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__PROPS";
		case 50:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__PROP_BY_IDX";
		case 51:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__PARTICLES";
		case 52:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__PARTICLE_BY_IDX";
		case 53:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__OVERLAYS";
		case 54:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__OVERLAY_BY_IDX";
		case 55:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__LOCO_ARCHETYPE";
		case 56:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__EFFECTS";
		case 57:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__EFFECT_BY_HASH";
		case 58:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__EXTEND";
		case 59:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__OUTFITS";
		case 60:
			return "ANIMAL_TRANSFORMATION_RQID__NODE__OUTFIT_BY_IDX";
		case 61:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__ID";
		case 62:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__POSITION";
		case 63:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__RADIUS";
		case 64:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__ANIMAL";
		case 65:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__HEADING";
		case 66:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__SCENE_HASH";
		case 67:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__MODEL";
		case 68:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__ROTATION";
		case 69:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__NAME";
		case 70:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__MALE";
		case 71:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__FEMALE";
		case 72:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__MISSION";
		case 73:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__TYPE";
		case 74:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__CONTROL_ACTION";
		case 75:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__EXIT_TIMEOUT_S";
		case 76:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__DURATION_S";
		case 77:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__UNLOCK";
		case 78:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__STAT_ITEM";
		case 79:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__BASE_ID";
		case 80:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__ITEM";
		case 81:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__COST_TYPE";
		case 82:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__AWARD";
		case 83:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__RED";
		case 84:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__GREEN";
		case 85:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__BLUE";
		case 86:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__ALPHA";
		case 87:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__DIRECTORY";
		case 88:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__OFFSET";
		case 89:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__BONE";
		case 90:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__SCALE";
		case 91:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__EMITTER_SCALE";
		case 92:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__ALPHA_TRIGGER";
		case 93:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__MASK";
		case 94:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__INTENSITY";
		case 95:
			return "ANIMAL_TRANSFORMATION_RQID__ATTRIBUTE__POSTFX";
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

bool func_291()
{
	return Global_1953612.f_1;
}

void func_292(int iParam0)
{
	func_383(&Global_1280543, iParam0);
}

var func_293(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_384(iParam0, 0, Global_1280545.f_52.f_31, bParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_385(iParam0, iVar0);
}

var func_294(int iParam0)
{
	return Global_1280545.f_52[iParam0 /*3*/].f_1;
}

int func_295(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	DEBUG::_0x4DC69742196F818A(2696, 41, "ANIMAL_TRANSFORMATION__XML__GET_NODE_COUNT - ", DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0), " \"", func_164(iParam1), "\" nodes found");
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

bool func_296(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_165(&uParam0, 61, 0);
}

var func_297(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(759749399);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_298(var uParam0, int iParam1, int iParam2)
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

char* func_299(int iParam0)
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

void func_300(int iParam0)
{
	Global_1102630.f_26.f_12 = iParam0;
}

char* func_301(int iParam0, int iParam1)
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

bool func_302(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

bool func_303(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_304(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
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

void func_306(int iParam0)
{
	if (func_386(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

bool func_307(var uParam0, int iParam1, int iParam2)
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

char* func_308(int iParam0, int iParam1)
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

int func_309(int iParam0)
{
	if (func_193(iParam0))
	{
		return (func_88(iParam0) % 32);
	}
	return Global_1275959;
}

char* func_310(int iParam0, int iParam1)
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

bool func_311(int iParam0)
{
	int iVar0;

	iVar0 = func_187(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_312(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_85(iParam1, 1);
	iVar1 = func_187(iParam0, 1);
	iVar2 = func_182(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_183(iParam0, 0), " from a source that hasn't previously enabled it ", func_82(iParam1, 0));
		return false;
	}
	if (!Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - deactivating perk ", func_183(iParam0, 0), " and source ", func_82(iParam1, 0));
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_387(iVar3, 1);
		if (!func_388(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 - func_389(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - removing perk ", func_183(iParam0, 0), " to stat mod ", func_390(iVar3, 0), " with strength ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/].f_1);
			func_391(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_392(iVar6))
		{
		}
		else
		{
			iVar8 = func_393(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1] = (Global_1146683.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146683.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146683.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 0;
				func_394(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_313(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_314(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_311(iParam0))
	{
		return false;
	}
	if (!func_395(iParam1))
	{
		return false;
	}
	iVar0 = func_396(iParam1, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

char* func_315(int iParam0, int iParam1)
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

Vector3 func_316(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_397(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146683.f_35859.f_9503[iVar0 /*3*/];
}

bool func_317(vector3 vParam0)
{
	if (!func_311(vParam0.x))
	{
		return false;
	}
	if (!func_83(vParam0.y))
	{
		return false;
	}
	if (!func_323(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_318(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_85(iParam1, 1);
	iVar1 = func_187(iParam0, 1);
	iVar2 = func_182(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2184, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to activate perk with data - Group Index: ", iVar2, " Source Index: ", iVar0, " Perk Index: ", iVar1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_183(iParam0, 0), " from a source that hasn't previously enabled it ", func_82(iParam1, 0));
		return false;
	}
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1275959.f_21;
	if (Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - activating perk ", func_183(iParam0, 0), " and source ", func_82(iParam1, 0), " at POSIX time: ", Global_1275959.f_21);
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_387(iVar3, 1);
		if (!func_388(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 + func_389(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_183(iParam0, 0), " to stat mod ", func_390(iVar3, 0), " with strength ", func_389(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_183(iParam0, 0), " to stat mod ", func_390(iVar3, 0), " with total ", Global_1146683.f_2169[iVar5 /*205*/].f_201);
			func_398(iVar3);
		}
		iVar4++;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - perk: ", func_183(iParam0, 0), " Flag Count: ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28);
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_392(iVar6))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_399(iVar6, 0), " is not valid... skipping... ");
		}
		else if (!func_400(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_399(iVar6, 0), " is not currently disabled by tunables... skipping... ");
		}
		else
		{
			iVar8 = func_393(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146683.f_21645[iVar8 /*209*/].f_208)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Turning on flag ", func_399(iVar6, 0));
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 1;
				func_401(iVar6);
			}
		}
		iVar7++;
	}
	func_402(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_395(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_315(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_396(iParam0, 1);
	if (!func_311(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk: ", func_183(iParam1, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_83(iParam2))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Source: ", func_82(iParam2, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_323(iParam3))
	{
		DEBUG::_0x83407B92D46F25C3(136, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Index in Group: ", iParam3, " is not valid... Bailing out... ");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Setting Perk: ", func_183(iParam1, 0), " active for Perk Group: ", func_315(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_320(int iParam0)
{
	int iVar0;

	if (!func_395(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_315(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_396(iParam0, 1);
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA_AS_INVALID - Setting Perk: ", func_183(-1, 0), " active for Perk Group: ", func_315(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

int func_321(int iParam0, int iParam1)
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

char* func_322(int iParam0, int iParam1)
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

bool func_323(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STATS_IS_PERK_INDEX_IN_GROUP_VALID - Invalid perk group index ", iParam0);
		return false;
	}
	return true;
}

bool func_324(int iParam0)
{
	int iVar0;

	if (!func_395(iParam0))
	{
		return false;
	}
	iVar0 = func_403(iParam0);
	if (!func_311(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_325(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_395(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_315(iParam0, 0), " is not valid... Bailing out... ");
		return vVar0;
	}
	iVar3 = func_396(iParam0, 1);
	return Global_1146683.f_35859.f_9286[iVar3 /*3*/];
}

bool func_326(char* sParam0, int iParam1)
{
	return (sParam0 && iParam1) != 0;
}

bool func_327()
{
	return (func_404(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_405(func_95(joaat("WARDROBE"), func_201(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_328(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_4(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_213(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_1(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_1(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_212(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_95(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_1(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_96(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_1(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_96(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_1(bParam0, 0));
	}
	return iVar0;
}

bool func_329(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_96(0);
	*iParam1 = { func_95(bParam0, func_204(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_1(bParam0, 0), " eSlot: ", func_212(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_1(bParam0, 0));
		return false;
	}
	return true;
}

bool func_330(bool bParam0, int iParam1, int iParam2)
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

bool func_331(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_96(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_1(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_212(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_332(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_326(sParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3)
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
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_406(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_406(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_406(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_215(iParam2, 0), " and action B to ", func_215(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_407(iParam0, iParam1, iParam2, iParam3);
}

bool func_334(bool bParam0)
{
	return (((((((((bParam0 == -1839668642 || bParam0 == -1415811768) || bParam0 == 231148558) || bParam0 == -1674363638) || bParam0 == 252325943) || bParam0 == 1216664798) || bParam0 == 1341188928) || bParam0 == 829857647) || bParam0 == -636562458) || bParam0 == 1115104855);
}

char* func_335(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -1944638739:
			return "MP_COMPONENT_TYPE_FOOTWEAR_1";
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return "MP_COMPONENT_TYPE_HEAD";
		case -1884748965:
			return "MP_COMPONENT_TYPE_LOADOUT_8";
		case -1586649372:
			return "MP_COMPONENT_TYPE_LOADOUT_9";
		case -1505978566:
			return "MP_COMPONENT_TYPE_WRIST_ATTIRE";
		case -1489346253:
			return "MP_COMPONENT_TYPE_FOOTWEAR_3";
		case -1364808185:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_5";
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return "MP_COMPONENT_TYPE_UPPER_BODY";
		case -1197751823:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_6";
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return "MP_COMPONENT_TYPE_SATCHEL";
		case -1130865351:
			return "MP_COMPONENT_TYPE_LOADOUT_7";
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return "MP_COMPONENT_TYPE_HAIR";
		case -893163968:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_3";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return "MP_COMPONENT_TYPE_LOADOUT_4";
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return "MP_COMPONENT_TYPE_BEARDS_CHOPS";
		case -450913544:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_4";
		case -426430150:
			return "MP_COMPONENT_TYPE_LOADOUT_5";
		case -358215195:
			return "MP_COMPONENT_TYPE_END";
		case -338487716:
			return "MP_COMPONENT_TYPE_EYEWEAR";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return "MP_COMPONENT_TYPE_LOADOUT_2";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return "MP_COMPONENT_TYPE_LOADOUT_3";
		case 304805134:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_7";
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return "MP_COMPONENT_TYPE_BEARDS_MUSTACHE";
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return "MP_COMPONENT_TYPE_EYES";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return "MP_COMPONENT_TYPE_LOADOUT_1";
		case 735520874:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_8";
		case 788010710:
			return "MP_COMPONENT_TYPE_LOWER_LAYER_1";
		case 1108822547:
			return "MP_COMPONENT_TYPE_HEADWEAR";
		case 1145151482:
			return "MP_COMPONENT_TYPE_HAND_ATTIRE";
		case 1250092473:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_2";
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return "MP_COMPONENT_TYPE_BEARD";
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return "MP_COMPONENT_TYPE_LOWER_BODY";
		case 1600962399:
			return "MP_COMPONENT_TYPE_NECKWEAR_2";
		case 1672288269:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_1";
		case 1742327865:
			return "MP_COMPONENT_TYPE_NECKWEAR_1";
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return "MP_COMPONENT_TYPE_TEETH";
		case 1788623170:
			return "MP_COMPONENT_TYPE_LOADOUT_6";
		case 1849504272:
			return "MP_COMPONENT_TYPE_FULL_BODY_ATTIRE";
		case 1900541263:
			return "MP_COMPONENT_TYPE_FOOTWEAR_2";
		case 1958421083:
			return "MP_COMPONENT_TYPE_LOWER_LAYER_2";
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

void func_336(int iParam0, bool bParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Starting for: ", func_335(func_258(iParam0, 1), 0));
	if (bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Transfering Temp Data to Current Data");
		DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Component: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1575.f_1[iParam0 /*3*/]), " Wearable: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1575.f_1[iParam0 /*3*/].f_1));
		Global_1953612.f_1694.f_1[iParam0 /*3*/] = { Global_1953612.f_1575.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] ...Ending");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Transfering Current Data to Save Data");
	func_232(&(Global_1953612.f_1694.f_1[iParam0 /*3*/]), iParam0, Global_17414.f_55.f_664.f_1777);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] ...Ending");
}

void func_337(int iParam0, bool bParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_PLAYER_COMPONENTS__TRANSFER_TEMP_DATA_TO_SAVE_DATA] Starting...");
	func_408(&(Global_1953612.f_1575), iParam0);
	func_409(2, iParam0, 6);
	if (bParam1)
	{
		func_338(0, 1);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_PLAYER_COMPONENTS__TRANSFER_TEMP_DATA_TO_SAVE_DATA] ...Ending");
}

void func_338(bool bParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_SAVE_METAPED_REQUEST] Pushing a save request for the player metaped!");
	if (bParam1)
	{
		func_100();
	}
	if (bParam0)
	{
		func_124(8);
		func_124(512);
	}
	else
	{
		func_124(8);
		func_124(16);
	}
}

int func_339(bool bParam0)
{
	switch (bParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701:
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[GET_SAVE_SLOT_FROM_OUTFIT_ITEM] Invalid save slot passed in ", func_1(bParam0, 0), " | RETURN k_iMETAPED_CLOTHING_INVALID_INDEX");
	return -1;
}

bool func_340(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (*uParam1 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_REMOVAL] Item type count is already zero for: ", func_235(func_209(bParam0), 0));
		*uParam1 = 0;
		return false;
	}
	if (Global_1953612.f_3411.f_26 <= 1)
	{
		Global_1953612.f_3411.f_26 = 0;
		*uParam1 = 0;
		Global_1953612.f_3411[0] = 0;
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_REMOVAL] Portable array is 1, going to 0");
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1953612.f_3411.f_26 - 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_REMOVAL] array[", iVar0, "]: ", UNK_0x4379B6FA65D55295(Global_1953612.f_3411[iVar0]));
		if (bParam0 == Global_1953612.f_3411[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1953612.f_3411.f_26 - 1))
		{
			Global_1953612.f_3411[iVar0] = Global_1953612.f_3411[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1953612.f_3411.f_26 = (Global_1953612.f_3411.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1953612.f_3411[Global_1953612.f_3411.f_26] = 0;
		func_410(bParam0, 1, bParam2);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_REMOVAL] Removed item: ", bVar1);
	return bVar1;
}

bool func_341(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<4> Var5;
	int iVar12;

	iVar12 = 0;
	Var5 = func_411(iParam6);
	Var5.f_1 = bParam1;
	Var5.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var5);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2216, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to get first row of the outfit: ", UNK_0x4379B6FA65D55295(bParam1), " hash: ", bParam1, " | RETURN FALSE");
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var5, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_413(uParam0, func_412(bVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_253(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, -1212855483))
		{
			iVar12 = func_412(bVar0);
		}
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		iVar4++;
		if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 1409451727))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(136, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to find component_type for clothing item entry[", iVar4, "] | RELOOP");
		}
		else
		{
			bVar3 = bVar0;
			iVar1 = func_234(bVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] eMetaType is invalid: ", func_335(func_258(iVar1, 1), 0), " | Index: ", iVar1, " | RELOOP");
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, joaat("COMPONENT")))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(136, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to find component for clothing item entry[", iVar4, "] | RELOOP");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2728, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Assigning: ", UNK_0x4379B6FA65D55295(bVar0), " to [", func_335(func_258(iVar1, 1), 0), "]");
				uParam0->f_1[iVar1 /*3*/] = bVar0;
				if (bVar2)
				{
					func_414(bVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @578; //curOff = 452
						if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 1194786549))
						{
							DEBUG::_0x1B08D1EB9D8C4931(168, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to find wearable state for: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1 /*3*/]), " | RELOOP");
							if (func_415(bVar3) && func_372(uParam0->f_1[iVar1 /*3*/], bVar3, &bVar0))
							{
								DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Meta Type: ", func_335(bVar3, 0), " has default wearable state: ", UNK_0x4379B6FA65D55295(bVar0));
								uParam0->f_1[iVar1 /*3*/].f_1 = bVar0;
							}
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] with wearable state: ", UNK_0x4379B6FA65D55295(bVar0));
							uParam0->f_1[iVar1 /*3*/].f_1 = bVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_417(uParam0, iVar12, func_416(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1953612.f_83[iVar1 /*12*/]) && func_416(uParam0->f_1[34 /*3*/]) == 0) && !func_101(32)) && !func_101(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_418(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Dynamically selected a shirt: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1 /*3*/]), " for outfit: ", UNK_0x4379B6FA65D55295(bParam1));
						func_256(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_342(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	char* sVar10;

	if (!func_4(bParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_345(bParam1, &Var0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
		DEBUG::_0x83407B92D46F25C3(168, 139, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_ITEM_MESSAGE: Failed to find UI data for ", func_1(bParam1, 0), " using _PLACEHOLDER texture.");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 139, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_ITEM_MESSAGE: Failed to find a valid texture for item ", func_1(bParam1, 0), ".");
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_339(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_223(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_420(func_419(iVar7));
		}
		else
		{
			bVar8 = func_421(bParam1);
			if (func_4(bVar8, 0))
			{
				bParam1 = bVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_422(bParam1, 0));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_339(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_223(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_420(func_419(iVar7));
		}
		else
		{
			bVar9 = func_421(bParam1);
			if (func_4(bVar9, 0))
			{
				bParam1 = bVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_422(bParam1, 0));
		}
	}
	sVar10 = func_348(MISC::_CREATE_VAR_STRING(10, sVar3, sVar5), iVar6);
	DEBUG::_0xF0783374333FD8CE(680, 158, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_ITEM_MESSAGE: Showing ", func_1(bParam1, 0), " with color ", func_346(iVar6, 0));
	func_349(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_343()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] Transferring Current Portable Wardrobe Data to Save Data");
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] - iPortableArraySize", Global_1953612.f_3411.f_26);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] - iOutfitSlotCount", Global_1953612.f_3411.f_27);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] - iHatSlotCount", Global_1953612.f_3411.f_28);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] - iBigMaskSlotCount", Global_1953612.f_3411.f_29);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] - iSmallMaskSlotCount", Global_1953612.f_3411.f_30);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] - iGloveSlotCount", Global_1953612.f_3411.f_31);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] - iHairAccessoryCount", Global_1953612.f_3411.f_32);
	iVar0 = 0;
	while (iVar0 < Global_1953612.f_3411.f_26)
	{
		Global_17414.f_55.f_664[iVar0] = Global_1953612.f_3411[iVar0];
		DEBUG::_0xA308F935BDECCEC0(648, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE__TRANSFER_CURRENT_DATA_TO_SAVE_DATA] Transferring [", iVar0, "]: ", UNK_0x4379B6FA65D55295(Global_1953612.f_3411[iVar0]));
		iVar0++;
	}
	Global_17414.f_55.f_664.f_27 = Global_1953612.f_3411.f_27;
	Global_17414.f_55.f_664.f_28 = Global_1953612.f_3411.f_28;
	Global_17414.f_55.f_664.f_29 = Global_1953612.f_3411.f_29;
	Global_17414.f_55.f_664.f_30 = Global_1953612.f_3411.f_30;
	Global_17414.f_55.f_664.f_31 = Global_1953612.f_3411.f_31;
	Global_17414.f_55.f_664.f_32 = Global_1953612.f_3411.f_32;
	Global_17414.f_55.f_664.f_26 = Global_1953612.f_3411.f_26;
}

int func_344()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1953612.f_3411.f_26)
	{
		bVar1 = Global_1953612.f_3411[iVar0];
		if (func_209(bVar1) == -999503751)
		{
			if (func_423() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_345(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eItem = ", func_1(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eTextureType = ", func_424(iParam2, 0));
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
				Jump @489; //curOff = 160
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with type: ", func_424(Var3.f_2[iVar0 /*3*/].f_2, 0));
					Jump @489; //curOff = 268
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					Jump @489; //curOff = 313
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
					Jump @489; //curOff = 356
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Texture: ", Var3.f_2[iVar0 /*3*/]);
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Type: ", func_424(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to fillout UI data for item ", func_1(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to find texture of type ", func_424(iParam2, 0), " for item ", func_1(bParam0, 0));
	return false;
}

char* func_346(int iParam0, int iParam1)
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

int func_347(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			return 1434026037;
		case -2061583405:
			return -130542741;
		case -999503751:
			return -878523823;
		default:
			break;
	}
	return 0;
}

char* func_348(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_349(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_425(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_350(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_426(&uVar1, 9044914, bParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&uVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&uVar1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &uVar1, -1168434056))
		{
			DEBUG::_0xF0783374333FD8CE(8, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_ITEM_MAPPING] Failed to get component_item | RETURN HASH_METAPED_CLOTHING_INVALID");
			return 0;
		}
		return uVar0;
	}
	DEBUG::_0xF0783374333FD8CE(168, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_ITEM_MAPPING] Failed to find item mapping for: ", UNK_0x4379B6FA65D55295(bParam0), " | RETURN HASH_METAPED_CLOTHING_INVALID");
	return 0;
}

bool func_351(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_209(Global_1953612.f_1694.f_1[iParam1 /*3*/]);
	if (func_209(bParam0) == bVar0)
	{
		return true;
	}
	else if (bParam0 == -992705550)
	{
		return func_17(Global_1953612.f_1694.f_1[iParam1 /*3*/], 160827531);
	}
	else if (bParam0 == 491480257)
	{
		return (bVar0 == -2061583405 || bVar0 == 2086043523);
	}
	else if (bParam0 == -1789518572)
	{
		return bVar0 == -923693316;
	}
	else if (bParam0 == -275040139)
	{
		return bVar0 == 1882579758;
	}
	return false;
}

void func_352(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1953612.f_2956.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_427(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Clearing: ", func_335(func_258(uParam0->f_2[iVar0 /*2*/], 1), 0));
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_427(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_428(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
					DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] marking as OLD: ", func_335(func_258(uParam0->f_2[iVar0 /*2*/], 1), 0));
				}
				DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Keeping cached meta type: ", func_335(func_258(uParam0->f_2[iVar0 /*2*/], 1), 0));
				Global_1953612.f_2956.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1953612.f_2956.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_353(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		DEBUG::_0x83407B92D46F25C3(8, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__ADD_COMPONENT_REFERENCE_TO_CACHE] Cache size will be exceeded with this add: ", *uParam0);
		return;
	}
	if (!func_429(uParam0, 1))
	{
		func_430(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1953612.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1953612.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_354(var uParam0, bool bParam1)
{
	struct<4> Var0;
	bool bVar7;
	int iVar8;

	Var0 = func_411(0);
	Var0.f_1 = bParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Starting for: ", func_1(bParam1, 0));
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 185, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Failed to find first row for: ", func_1(bParam1, 0));
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&bVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_234(bVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] eMetaType is invalid: ", func_335(func_258(iVar8, 1), 0), " | Index: ", iVar8, " | RELOOP");
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&bVar7, &Var0, joaat("COMPONENT")))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != bVar7)
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Bypassing removal for: ", UNK_0x4379B6FA65D55295(bVar7), " as we are wearing ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar8 /*3*/]));
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1953612.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_254(iVar8, 0);
			}
		}
	}
}

void func_355(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1 == -230310728 || bParam1 == 1326838792)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] Buzzed hair marking hair for removal");
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] Regular hair, marking to be base!");
	}
	iVar0 = 10;
	bVar1 = func_209(uParam0->f_1[iVar0 /*3*/]);
	if (bVar1 == 119907797)
	{
		if (func_17(bParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support hair accessories, time to unequip the hair accessory!");
		}
	}
	else if (bVar1 == 2086043523)
	{
		if (func_17(bParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support headbands, time to unequip the headband!");
		}
	}
	else if (bVar1 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */)
	{
		if (func_17(bParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support headbands, time to unequip the face mask!");
		}
	}
	iVar0 = 11;
	if (func_17(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_17(bParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support this eyewear, time to unequip the eyewear!");
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam1, -93469181)) && func_17(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support this neckwear, time to unequip the neckwear!");
	}
}

void func_356(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BEARD_LOGIC] Stubble Beard marking Beard for removal");
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BEARD_LOGIC] Regular Beard, marking to be base!");
	}
}

void func_357(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_254(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_251(bVar1, 0) && func_17(bVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping eyewear that restricts neckwear, remove the neckwear!");
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953612.f_83[iVar0 /*12*/] && func_209(bVar1) == 2086043523) && func_17(bParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping eyewear that restricts headbands, remove the headband!");
	}
}

void func_358(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_209(bParam2))
	{
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			func_431(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_432(uParam0, bParam1, iParam3);
			break;
	}
}

void func_359(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_209(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_254(iVar0, iParam3);
	}
	func_254(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_433(bParam2))
	{
		func_434(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_17(bParam2, -180472385) && !func_251(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping neckwear that restricts eyewear, remove the eyewear!");
	}
	if (func_17(bParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Closing shirt collar to base state");
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Changing shirt wearable state, we need to re-apply our coat!");
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Closing shirt collar to Closed_Collar_Rolled_Sleeve state");
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Changing shirt wearable state, we need to re-apply our coat!");
		}
	}
}

void func_360(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_17(bParam2, 1872585553)) || func_209(bParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] None Shirt is getting equipped, remove the necktie!");
		}
	}
	iVar0 = 17;
	if (!func_251(uParam0->f_1[iVar0 /*3*/], 0) && func_17(bParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Shirt does not support suspenders | Removing Suspenders");
	}
	iVar0 = 29;
	if (!func_251(uParam0->f_1[iVar0 /*3*/], 0) && func_17(bParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Shirt does not support belts | Removing belt");
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_209(bVar2) == 1759215194 && func_209(bParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_350(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Unionsuit is equipped with not pants | updating the unionsuit lower: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]));
	}
	else if (func_435(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_209(bVar2) == 912453393 && func_436(32))
		{
			iVar3 |= 1;
		}
		if (func_17(bParam2, 525391395))
		{
			iVar3 |= 2;
		}
		bVar2 = func_418(Global_1953612.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			func_368(uParam0, 0, bVar2, iParam3);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Full item is equipped | updating to ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]));
		}
	}
	iVar0 = 21;
	iVar4 = 23;
	if (!func_251(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953612.f_83[iVar4 /*12*/] && func_17(uParam0->f_1[iVar4 /*3*/], -1655064541)))
	{
		func_437(uParam0, iParam3);
	}
}

void func_361(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
	}
}

void func_362(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_209(bParam2))
	{
		case 698653232:
			func_438(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_439(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_363(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_209(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_440(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_441(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_364(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_209(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_254(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GAUNTLET_LOGIC] Gauntlets are getting applied, but they have the no gloves tag and we're wearing gloves | Removing Gloves!");
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_437(uParam0, iParam3);
	}
}

void func_365(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			if (func_17(uParam0->f_1[iVar0 /*3*/], 1537768121))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] We are equipping gloves but our gauntlets have a no gloves tag | Removing the gauntlets!");
			}
			func_254(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_17(bParam2, -1655064541))
		{
			func_437(uParam0, iParam3);
		}
		else
		{
			func_254(iVar0, iParam3 | 16);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] pushing update for shirt!");
		}
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/].f_1 != -529972961)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] Current coat does not have the Bounty_Hunter_L30 State | EXIT");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(2216, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] Our coat has a unique unsupported wearable state: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/].f_1), " hash: ", uParam0->f_1[iVar0 /*3*/].f_1, " | Resetting to base!");
	uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
	func_254(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_254(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_254(iVar0, iParam3);
	}
}

void func_366(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_442(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_17(bParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GUNBELT_LOGIC] We're equipping a gunbelt that restricts buckles, remove the buckle!");
	}
	iVar0 = 32;
	if (!func_251(uParam0->f_1[iVar0 /*3*/], 0) && func_17(bParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GUNBELT_LOGIC] We're equipping a gunbelt that restricts gunbelt trinkets, remove the trinket!");
	}
}

void func_367(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
	}
}

void func_368(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_209(bParam2))
	{
		case 1759215194:
			func_443(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_444(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_445(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_446(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_447(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_448(uParam0, bParam1, iParam3);
			break;
	}
}

void func_369(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_209(bParam2))
	{
		case 1769055947:
			func_449(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_450(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_370(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_451(uParam0, iParam3, 0, 1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Equipping none boot!");
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_17(bParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/]) && func_209(bVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support spats");
	}
	if ((func_17(bParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/]) && func_209(bVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support chaps");
	}
	iVar0 = 37;
	if (func_17(bParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support spurs");
	}
}

int func_371(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 == 0)
	{
		return -1;
	}
	DEBUG::_0x4DC69742196F818A(680, 208, "[METAPED_PLAYER_COMPONENT__FIND_WEARABLE_STATE_ON_CLOTHING_ITEM] Searching for: ", UNK_0x4379B6FA65D55295(bParam2), " in item: ", UNK_0x4379B6FA65D55295(bParam0));
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, iParam1, 1) == bParam2)
		{
			DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENT__FIND_WEARABLE_STATE_ON_CLOTHING_ITEM] Found: ", UNK_0x4379B6FA65D55295(bParam2), " at index: ", iVar0);
			return iVar0;
		}
		iVar0++;
	}
	DEBUG::_0x4DC69742196F818A(40, 208, "[METAPED_PLAYER_COMPONENT__FIND_WEARABLE_STATE_ON_CLOTHING_ITEM] Failed to find: ", UNK_0x4379B6FA65D55295(bParam2));
	return -1;
}

bool func_372(bool bParam0, bool bParam1, bool bParam2)
{
	*bParam2 = joaat("BASE");
	return true;
}

char* func_373(int iParam0, int iParam1)
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

bool func_374(var uParam0, var uParam1, bool bParam2, char* sParam3)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	char* sVar3;
	char* sVar4;

	if (DATAFILE::_0x44B3A36933AC009C(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA]     Layer Type: ", func_373(uParam1->f_17, 0));
	}
	else if (!bParam2)
	{
		return false;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, joaat("ALBEDO")))
	{
		uParam1->f_3 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Albedo: ", UNK_0x4379B6FA65D55295(bVar0));
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, joaat("NORMAL")))
	{
		uParam1->f_4 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Normal: ", UNK_0x4379B6FA65D55295(bVar0));
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, joaat("MATERIAL")))
	{
		uParam1->f_5 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Material: ", UNK_0x4379B6FA65D55295(bVar0));
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&sVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = sVar4;
		DEBUG::_0xEF256AE8A5A27966(96, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Texture Alpha: ", sVar4);
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_452(bVar0);
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Blend Type: ", func_453(uParam1->f_16, 0));
	}
	if (DATAFILE::_0xB2B42607F7867576(&sVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = sVar4;
		DEBUG::_0xEF256AE8A5A27966(96, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Roughness: ", sVar4);
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 939944711))
	{
		uParam1->f_6 = sVar3;
		DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Sheet Grid Index: ", sVar3);
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, 917806888))
	{
		uParam1->f_7 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Mod Texture: ", UNK_0x4379B6FA65D55295(bVar0));
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Mod Channel: ", uParam1->f_8);
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (DATAFILE::_0xB2B42607F7867576(&sVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = sVar4;
			DEBUG::_0xEF256AE8A5A27966(96, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Mod Alpha: ", sVar4);
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, 333547134))
	{
		uParam1->f_9 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Palette: ", UNK_0x4379B6FA65D55295(bVar0));
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Tint0: ", sVar3);
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 915180227))
		{
			uParam1->f_11 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Tint1: ", sVar3);
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Tint2: ", sVar3);
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = joaat("ID");
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
		DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Layer Priority: ", uParam1->f_1);
	}
	return true;
}

void func_375(var uParam0, bool bParam1)
{
	bool bVar0;
	struct<18> Var1;
	bool bVar19;
	struct<4> Var20;

	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	bVar0 = func_454(uParam0->f_17);
	if (bVar0 == 0)
	{
		return;
	}
	bVar19 = *uParam0;
	Var20 = { func_95(joaat("WARDROBE"), func_201(1), 1034665895, 1) };
	if (bParam1 && bVar19 != func_405(Var20, bVar0, 1, -1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_OVERLAY_UPDATE_LAYER_DATA_WITH_SERVER_DATA] Server item is different from layer item | EXIT");
		return;
	}
	Var1 = { func_455(func_95(bVar19, Var20, bVar0, 1), 1, 0) };
	if (Var1.f_17 <= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_OVERLAY_UPDATE_LAYER_DATA_WITH_SERVER_DATA] Server item value is <= 0 | EXIT");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_OVERLAY_UPDATE_LAYER_DATA_WITH_SERVER_DATA] Updating alpha to: ", MISC::_0x2B6846401D68E563(func_456(Var1.f_17), 3), " from: ", MISC::_0x2B6846401D68E563(uParam0->f_13, 3));
	uParam0->f_13 = func_456(Var1.f_17);
}

void func_376(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	uParam0->f_2 = bParam1;
	uParam0->f_3 = bParam2;
	uParam0->f_4 = bParam3;
	DEBUG::_0xF0783374333FD8CE(10920, 208, "[METAPED_CLOTHING_OVERLAY_SET_BASE_LAYER_TEXTURE_DATA] Albedo: ", UNK_0x4379B6FA65D55295(bParam1), " Normal: ", UNK_0x4379B6FA65D55295(bParam2), " Material: ", UNK_0x4379B6FA65D55295(bParam3));
	PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_377(var uParam0, var uParam1, int iParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_ADD_TO_EXISTING_TEXTURE_BLEND] Adding texture to blend: ", iParam2);
	if (iParam2 > 0 && (uParam1[(iParam2 - 1) /*18*/])->f_1 > (uParam1[iParam2 /*18*/])->f_1)
	{
		func_457(uParam0, uParam1);
	}
	else
	{
		func_458(uParam0, uParam1[iParam2 /*18*/]);
	}
}

void func_378(var uParam0, var uParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(648, 208, "[METAPED_CLOTHING_OVERLAY_UPDATE_LAYER_DATA][", uParam1->f_2, "] for Type: ", func_373(uParam1->f_17, 0));
	if (bParam2)
	{
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_2, uParam1->f_13);
}

bool func_379(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_53(2) * 2;
		case 1:
			return func_57(2) * 2;
		case 2:
			return func_55(2) * 2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_MAX_SIZE - Attribute Core: ", func_139(iParam0, 0), " is INVALID. Correct this immediately... ");
	return -1;
}

bool func_381(int iParam0)
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

bool func_382()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_383(var uParam0, int iParam1)
{
	func_459(uParam0, iParam1);
}

int func_384(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 > iParam2)
	{
		return -1;
	}
	iVar0 = ((iParam1 + iParam2) / 2);
	DEBUG::_0x1B08D1EB9D8C4931(166024, 41, "ANIMAL_TRANSFORMATION__PRIVATE__FIND_ANIMAL_INDEX - iLower = ", iParam1, " iUpper = ", iParam2, " i = ", iVar0, " eValue = ", UNK_0x4379B6FA65D55295(bParam3));
	if (bParam3 < Global_1280545.f_84[iParam0 /*21*/][iVar0 /*2*/])
	{
		return func_384(iParam0, iParam1, (iVar0 - 1), bParam3);
	}
	if (bParam3 > Global_1280545.f_84[iParam0 /*21*/][iVar0 /*2*/])
	{
		return func_384(iParam0, iVar0 + 1, iParam2, bParam3);
	}
	return iVar0;
}

var func_385(int iParam0, int iParam1)
{
	return Global_1280545.f_84[iParam0 /*21*/][iParam1 /*2*/].f_1;
}

bool func_386(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

int func_387(int iParam0, int iParam1)
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

bool func_388(int iParam0)
{
	int iVar0;

	iVar0 = func_387(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_389(var uParam0)
{
	bool bVar0;

	if (uParam0->f_2 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_390(*uParam0, 0), " has a Tunable associated with impact, looking up... ");
		bVar0 = func_460(794259616, uParam0->f_2, uParam0->f_1, "");
		DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_390(*uParam0, 0), " has an associated Tunable with impact: ", bVar0);
		return bVar0;
	}
	DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_390(*uParam0, 0), " using default Impact: ", uParam0->f_1);
	return uParam0->f_1;
}

char* func_390(int iParam0, int iParam1)
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

void func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_388(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - Stat Mod: ", func_390(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_387(iParam0, 1);
	if (!func_461(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_390(iParam0, 0));
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - stat mod ", func_390(iParam0, 0), " is no longer impacting stat ", func_462(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_463(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_464(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - removing stat ", func_462(Global_1146683.f_2169[iVar0 /*205*/], 0), " from subscribed action ", func_465(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
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

bool func_392(int iParam0)
{
	int iVar0;

	iVar0 = func_393(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_393(int iParam0, int iParam1)
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

void func_394(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Now Disabling Stat Flag: ", func_399(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_466();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_467();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - End Bleeding for local player. ");
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer being tracked... ");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_468(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer drained! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_468(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer disoriented! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_468(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer poisoned. Stop periodic icon. ");
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_64(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer in a Toxic Cloud! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_468(iParam0));
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
			DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Remove VFX ", func_399(iParam0, 0));
			func_470(func_469(iParam0));
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
			func_471();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_461(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_461(16);
			break;
	}
}

bool func_395(int iParam0)
{
	int iVar0;

	iVar0 = func_396(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_396(int iParam0, int iParam1)
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

int func_397(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_403(iParam0);
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
		iVar64 = func_187(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 1);
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "RPG_GLOBAL_GET_ACTIVATION_QUEUE_PERK_INDEX_FROM_NEXT_AVAILIBLE_PERK_IN_STACK_GROUP - Now processing Perk: ", func_183(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 0), "...");
		if (Global_1146683.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146683.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_472(Global_1146683.f_35859.f_9503[iVar65 /*3*/], Global_1146683.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_473(Global_1146683.f_35859.f_9503[iVar65 /*3*/]) };
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

void func_398(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_388(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - Stat Mod: ", func_390(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_387(iParam0, 1);
	if (!func_461(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_390(iParam0, 0));
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - subcribing stat mod ", func_390(iParam0, 0), " to stat ", func_462(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_463(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_464(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
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
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - adding stat ", func_462(Global_1146683.f_2169[iVar0 /*205*/], 0), " to action ", func_465(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
	Global_1146683.f_47561[iVar1 /*25*/][Global_1146683.f_47561[iVar1 /*25*/].f_23] = Global_1146683.f_2169[iVar0 /*205*/];
	Global_1146683.f_47561[iVar1 /*25*/].f_23++;
}

char* func_399(int iParam0, int iParam1)
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

bool func_400(var uParam0)
{
	bool bVar0;

	DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_399(*uParam0, 0), " Associated Tunable: ", UNK_0x4379B6FA65D55295(uParam0->f_1));
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_474(794259616, uParam0->f_1, 1, "");
		DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_399(*uParam0, 0), " is has Tunable Enabled State: ", MISC::_0xF216F74101968DB0(bVar0));
		return bVar0;
	}
	return true;
}

void func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Now Enabling Stat Flag: ", func_399(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_466();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_467();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Start Wound for local player.");
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now being tracked...");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_468(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now drained! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_468(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now disoriented! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_468(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is poisoned. Start core periodic icon. ");
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_64(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now in a Toxic Cloud! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_468(iParam0));
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
			iVar2 = func_469(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_475(iParam0, 0));
			func_476(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_475(iParam0, 1));
			func_476(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_475(iParam0, 2));
			func_476(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_475(iParam0, 3));
			func_476(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Moment to Recuperate VFX start. ");
			iVar2 = func_469(iParam0);
			func_476(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Slow and Steady VFX start. ");
			iVar2 = func_469(iParam0);
			func_476(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Moment to Recuperate Aura equip.");
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Slow and Steady Aura equip.");
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Quite and Inspiration Aura equip.");
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on Eagle Eye Plus");
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 1898374676:
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on Mercy Killing");
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on the Tracking Upgrade.");
			PLAYER::_0xDFC85C5199045026(iVar1, 0.5f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Turn on Ned Kelly base properties... ");
			func_477();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_461(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_461(16);
			break;
	}
}

void func_402(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Attempting to play Activation Sound: ", func_478(iParam0, 0));
	sVar0 = func_479(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound name associated with Activation Sound: ", func_478(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound name: ", sVar0, " associated with Activation Sound: ", func_478(iParam0, 0));
	sVar1 = func_480(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound set associated with Activation Sound: ", func_478(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound set: ", sVar1, " associated with Activation Sound: ", func_478(iParam0, 0));
	DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Playing sound name: ", sVar0, " in sound set: ", sVar1, " for Activation Sound: ", func_478(iParam0, 0));
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275959.f_8, sVar1, false, 0, 0);
}

int func_403(int iParam0)
{
	int iVar0;

	if (!func_395(iParam0))
	{
		return -1;
	}
	iVar0 = func_396(iParam0, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/];
}

int func_404(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_481(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_96(bParam1), bParam0, bParam3);
}

int func_405(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_482(&uParam0, bParam4, bParam5, iParam6);
}

char* func_406(int iParam0, int iParam1)
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

void func_407(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_483(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_215(iParam2, 0), " and action B ", func_215(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_406(iParam1, 0));
}

void func_408(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_SAVE__SET_SAVED_COMPONENT_OUTFIT_ARRAY] saving outfit hash: ", UNK_0x4379B6FA65D55295(*uParam0));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_232(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_409(int iParam0, int iParam1, char* sParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17414.f_55.f_664.f_33[iParam1 /*120*/] = (Global_17414.f_55.f_664.f_33[iParam1 /*120*/] || iParam0);
		DEBUG::_0xEF256AE8A5A27966(672, 208, sParam2, "[METAPED_PLAYER_COMPONENT_OUTFIT__SET_FLAG][MP] Setting: ", func_484(iParam0, 0), " for outfit: ", iParam1);
	}
}

int func_410(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_94(bParam0, bParam2, 0) };
	Var5 = { func_95(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_328(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__SET_ITEM_HIDDEN] Item is not in the player's inventory yet, we can't hide or unhide it!");
		return 0;
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__SET_ITEM_HIDDEN] Setting: ", func_1(bParam0, 0), " hidden: ", MISC::_0xF216F74101968DB0(bParam1));
	INVENTORY::_0x9A113C660AEA3832(func_96(bParam2), &Var5, bParam1);
	return 1;
}

int func_411(bool bParam0)
{
	if (bParam0 == 0)
	{
		bParam0 = func_291();
	}
	if (bParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (bParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

int func_412(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case 2050534155:
			return 48;
		case -366477279:
			return 0;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_GET_TAG_INFO_FLAG_FROM_HASH] Failed to find flag for hash: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

void func_413(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Setting none with persistent tags of: ", func_247(iParam1));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_485(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_486(iVar0, iParam1))
			{
				vVar4 = { func_231(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953612.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					DEBUG::_0xF0783374333FD8CE(2728, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Persistent item: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]), " is not the same as our saved item: ", UNK_0x4379B6FA65D55295(func_487(iVar0, -1)), " | Transferring saved item!");
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_488(iVar0, 4))
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Clearing persistent hide flag for [", func_335(func_258(iVar0, 1), 0), "]");
					func_489(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Setting persistent hide flag for [", func_335(func_258(iVar0, 1), 0), "]");
					func_490(iVar0, 4, 6);
				}
				Jump @357; //curOff = 294
				if (bParam2)
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Clearing out [", func_335(func_258(iVar0, 1), 0), "]");
					vVar1.x = Global_1953612.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_414(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_UNSAVED_META_FLAG] Setting[", func_335(bParam0, 0), "]: ", func_247(iParam1));
	Global_1953612.f_83[func_234(bParam0, 1) /*12*/].f_11 = (Global_1953612.f_83[func_234(bParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_415(bool bParam0)
{
	int iVar0;
	var uVar1;

	Global_1953612.f_1046.f_2 = 0;
	iVar0 = 1226838104;
	func_426(&(Global_1953612.f_1046), iVar0, -367421157, 1409451727, 1, bParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1953612.f_1046));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1953612.f_1046), 1409451727))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 185, "[METAPED_PLAYER_COMPONENTS_DOES_META_COMPONENT_SUPPORT_WEARBLE_STATES] Meta Type: ", func_335(bParam0, 0), " does not support wearable states | RELOOP");
		return false;
	}
	return true;
}

int func_416(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_4(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_417(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_17(uParam0->f_1[34 /*3*/], -166674229))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_HANDLE_PARTIAL_OUTFIT_POST_FILLOUT] Player is wearing an unalterable outfit | EXIT");
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_488(iVar0, 16);
		if (bVar1)
		{
			func_489(iVar0, 16, 9);
		}
		if (Global_1953612.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[__METAPED_PLAYER_COMPONENTS_HANDLE_PARTIAL_OUTFIT_POST_FILLOUT] Bypassing: ", func_335(func_258(iVar0, 1), 0), " as it does not have a component tag setup for it | RELOOP");
		}
		else
		{
			if (bVar1)
			{
				func_254(iVar0, iParam3);
			}
			if (!bParam2 && func_416(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(168, 208, "[METAPED_PLAYER_COMPONENTS_REMOVE_COMPONENTS_WITH_SYSTEM_TAG] Bypassing: ", func_335(func_258(iVar0, 1), 0), " as it is tagged as a role item | RELOOP");
			}
			else if (func_486(iVar0, iParam1) && !bVar1)
			{
				DEBUG::_0x4DC69742196F818A(40, 208, "[METAPED_PLAYER_COMPONENTS_REMOVE_COMPONENTS_WITH_SYSTEM_TAG] Removing: ", func_335(func_258(iVar0, 1), 0));
				uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_256(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_254(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_256(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_418(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_491(0, -1591664384, bParam0, -1591664384, 0, 0, 0) };
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__FIND_VALID_CLOTHING_ITEM_IN_SLOT] Let's see if the player owns something in: ", func_212(bParam0, 0));
	if (func_492(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_493(iVar0, iVar1, iParam1);
		}
		func_494(iVar0);
	}
	return iVar2;
}

struct<8> func_419(int iParam0)
{
	char cVar0[64];

	if (func_223(4, iParam0))
	{
		return Global_17414.f_2645[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(func_495(iParam0)), 64);
	return cVar0;
}

char* func_420(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_421(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_496(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_497(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_498(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &bVar14) && func_499(bVar14))
			{
				func_500(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_500(iVar11);
	}
	return false;
}

bool func_422(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_4(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_501(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int func_423()
{
	return Global_1953612.f_1694;
}

char* func_424(int iParam0, int iParam1)
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

void func_425(char* sParam0, char* sParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(680, 212, "Set MOB_APP_DISPLAY_TRANSACTION_FEED_UPDATE sFeedText =  ", sParam0, " and sTextureDict =  ", sParam1);
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_426(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_427(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_428(var uParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENTS_CACHE_SET_FLAG] Setting ", func_335(func_258(*uParam0, 1), 0), " Flags:  ", func_247(iParam1));
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_429(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_430(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS_SET_CACHE_FLAG] Setting: ", func_502(iParam1, 0));
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_431(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_17(bVar1, 160827531) || func_209(bVar1) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FACE_MASK_LOGIC] We're equipping a big mask, time to unequip the small mask!");
	}
}

void func_432(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HEADBAND_LOGIC] We're equipping eyewear that restricts headbands, removing the headband!");
	}
}

bool func_433(bool bParam0)
{
	if (!func_4(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_BANDANA: attempting to process an invalid item!");
		return false;
	}
	if (func_17(bParam0, 160827531) || func_209(bParam0) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */)
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "ITEM_PROPERTY_BANDANA");
		return true;
	}
	return false;
}

void func_434(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */ == func_209(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BANDANA_LOGIC] We're equipping a small mask, time to unequip the big mask!");
	}
}

bool func_435(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_209(bParam0);
	if (iParam2 == 0)
	{
		return (bVar0 == 1759215194 || bVar0 == 344283346);
	}
	return (!bParam1 && (bVar0 == -1740828670 || bVar0 == 344283346));
}

bool func_436(int iParam0)
{
	return (Global_17414.f_55.f_664.f_1734 && iParam0) != 0;
}

void func_437(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 16;
	iVar1 = 0;
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	func_254(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */ || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_371(uParam0->f_1[iVar0 /*3*/], iVar1, -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_ROLLING_UP_SLEEVES] Setting shirt to Closed_Collar_Rolled_Sleeve wearable state!");
			return;
		}
	}
	if (func_371(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_ROLLING_UP_SLEEVES] Setting shirt to open_collar_rolled_sleeve wearable state!");
	}
}

void func_438(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, -1527414429)) && !func_17(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_VEST_LOGIC] Vest is being applied that removes neckwear, we need to remove neckwear!");
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_17(bParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_254(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			func_254(iVar0, iParam3);
		}
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_VEST_LOGIC] We're wearing a vest that restricts shirt collars | closing shirt collar");
	}
}

void func_439(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Corset is being applied, we need to remove suspenders!");
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_17(bVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_254(iParam2, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Equipping corset but we're wearing pants that force the corset wearable state | force corset under pants!");
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && 1769055947 == func_209(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_254(iParam2, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Chaps are equipped so we need to force our corset to be under pants!");
			}
		}
	}
}

void func_440(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_254(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_254(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_254(iVar0, iParam3);
			func_364(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being unequipped, we need to re-apply the gauntlets");
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being unequipped, we need to re-apply our suspenders!");
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being applied that remove belts, we need to remove belts!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat that closes the collar is being equipped | setting wearable state to Base");
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat that closes the collar is being equipped | setting wearable state to Closed_Collar_Rolled_Sleeve");
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, -1527414429)) && !func_17(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being applied that remove neckwear, we need to remove neckwear!");
	}
}

void func_441(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_254(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && !func_17(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied, we need to remove neckwear 1!");
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied, we need to remove neckwear 2!");
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied that doesn't support a bandolier, removing bandolier!");
	}
}

bool func_442(bool bParam0)
{
	return Global_1953612.f_1694.f_1[func_234(bParam0, 1) /*3*/] != Global_1953612.f_83[func_234(bParam0, 1) /*12*/];
}

void func_443(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lowers are being applied, we need to remove suspenders!");
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_254(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lower is getting applied, we need to re-apply the player's coat if they have one!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_17(uParam0->f_1[iVar0 /*3*/], -928740153))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lower is getting applied and we're wearing footwear that doesn't support them | Time to remove them!");
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lower is getting applied, we need to force boots to be in the base wearable state!");
		}
		func_254(iVar0, iParam1);
	}
}

void func_444(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/] && func_209(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_418(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Pants are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 36;
	func_254(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, -1473580422))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_17(bVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			DEBUG::_0xA308F935BDECCEC0(168, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that are forcing the boot wearable state to under_pants | ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]), " doesn't support this | removing the boot!");
		}
		else if (func_371(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that are forcing the boot wearable state to under_pants");
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Pants are forcing boots to be under but these boots don't have that state forcing to base and hope it works?");
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_209(bVar1) == 912453393)
		{
			bVar2 = true;
			if (func_17(bParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_254(iVar0, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that force the corset under pants | forcing corset wearable state!");
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_209(bVar1) == 1868067663 && func_17(bParam2, -1016441646))
		{
			func_503(uParam0, iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] pants are being applied that restricts coats, we need to remove coats!");
		}
		else if (bVar2)
		{
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] We need to push an update for the coat!");
		}
	}
	iVar0 = 34;
	if (1759215194 == func_209(uParam0->f_1[iVar0 /*3*/]))
	{
		func_254(16, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] The previous item we were wearing was unionsuit lower | updating upper layer 2!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, -1650340550))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_209(bVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that don't support chaps | removing chaps!");
		}
	}
}

void func_445(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/] && func_209(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_418(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirts are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_17(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_451(uParam0, iParam3, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] skirt is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else if (func_17(bParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt is getting applied, Item is forcing boots to be in the base wearable state!");
		}
	}
	func_254(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt is getting applied, going to remove the chaps!");
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_17(bVar1, 1090938458) && func_17(bParam2, 475297062))
		{
			func_503(uParam0, iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt that doesn't support long coats is getting applied, going to remove the long coat!");
		}
	}
}

void func_446(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_254(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove vests!");
	}
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_418(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam2);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953612.f_83[iVar0 /*12*/] && func_17(bVar1, 353024991))
	{
		func_503(uParam0, iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove short coats!");
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove suspenders!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && 1769055947 == func_209(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove chaps!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove belts!");
	}
}

void func_447(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_209(bVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove vests!");
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_209(bVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_254(iVar0, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, force the corset wearable state!");
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove vests!");
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove suspenders!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove shirts!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove belts!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove chaps!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_17(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_451(uParam0, iParam3, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] dress is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else if (func_17(bParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] dress is getting applied, Item is forcing boots to be in the base wearable state!");
		}
	}
}

void func_448(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_503(uParam0, iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove coats!");
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove gauntlets!");
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove upper layer 4!");
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove suspenders!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove shirts!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove belts!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove chaps!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_17(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_451(uParam0, iParam2, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] nightgown is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_254(iVar0, iParam2);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to force the boots to base!");
		}
	}
}

void func_449(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set pants to base wearable state!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set boots to be under pants!");
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_17(bParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied and they don't support spurs, removing the spurs!");
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_209(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_254(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set the corset to be under pants!");
		}
	}
}

void func_450(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_17(bParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SPATS_LOGIC] Previewing spats that do not support spurs | Removing spurs");
	}
}

void func_451(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_BOOT_REMOVAL] Removing spurs as we're removing boots!");
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_209(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_BOOT_REMOVAL] Removing spats as we're removing boots!");
	}
}

int func_452(bool bParam0)
{
	switch (bParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[GET_BLEND_TYPE_FROM_HASH] Failed to find TEX_BLEND_TYPE for: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

char* func_453(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TEX_BLEND_ALPHA";
		case 1:
			return "TEX_BLEND_OVERLAY";
		case 2:
			return "TEX_BLEND_MULTIPLY";
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

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_SLOTID_FROM_LAYER_TYPE] Failed to find a slot id mapping for: ", func_373(iParam0, 0));
	return 0;
}

struct<18> func_455(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "FILLOUT_CASHINVENTORY_WEARABLE_ITEM - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&uParam0));
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var18.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_96(bParam4), &uParam0, &Var18, 15, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "FILLOUT_CASHINVENTORY_WEARABLE_ITEM - failed to read data!");
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var0 = { func_98(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

float func_456(int iParam0)
{
	return func_148((BUILTIN::TO_FLOAT(iParam0) / 10000f), 0.001f, 100f);
}

void func_457(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_SORT_LAYER_BY_PRIORITY] Comparing[", iVar0, "] - ", (uParam1[iVar0 /*18*/])->f_1, " to [", (iVar0 - 1), "] - ", (uParam1[(iVar0 - 1) /*18*/])->f_1);
		if ((uParam1[iVar0 /*18*/])->f_1 < (uParam1[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[(iVar0 - 1) /*18*/])->f_2);
			DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_SORT_LAYER_BY_PRIORITY] Swapping: [", iVar0, "] P=", (uParam1[iVar0 /*18*/])->f_1, " with: [", (iVar0 - 1), "] P=", (uParam1[(iVar0 - 1) /*18*/])->f_1);
			Var2 = { *(uParam1[iVar0 /*18*/]) };
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[(iVar0 - 1) /*18*/]) };
			*(uParam1[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_458(uParam0, uParam1[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_458(var uParam0, var uParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_ADD_LAYER_TO_TEXTURE_BLEND] Adding Layer: ", func_373(uParam1->f_17, 0));
	uParam1->f_2 = PED::_ADD_TEXTURE_LAYER(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_378(uParam0, uParam1, 0);
}

void func_459(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_460(bool bParam0, bool bParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_504(bParam0, bParam1, &Var0))
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

bool func_461(int iParam0)
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
	DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL_STATS__ADD_STAT_ID_TO_UPDATE_QUEUE - adding stat ", func_462(iParam0, 0), " to update queue. Total stats in queue: ", Global_1146683.f_2165);
	return true;
}

char* func_462(int iParam0, int iParam1)
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

bool func_463(int iParam0)
{
	int iVar0;

	iVar0 = func_464(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_464(int iParam0, int iParam1)
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

char* func_465(int iParam0, int iParam1)
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

void func_466()
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
		if (!func_326(Global_1277758[Global_1275959 /*87*/].f_86, 1))
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

void func_467()
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

char* func_468(int iParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_POSTFX_NAME - Stat Flag: ", func_399(iParam0, 0), " does not have a Post FX name. Should you set one up? ");
	return "";
}

int func_469(int iParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_SCRIPT_ID - Stat Flag: ", func_399(iParam0, 0), " does not have a Particle FX. Should you set one up? ");
	return 0;
}

void func_470(int iParam0)
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

void func_471()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__DISABLE_NED_KELLY_BASE_INTERNAL - Cleaning up Ned Kelly base properties and application... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275959.f_8);
}

bool func_472(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_311(iParam0))
	{
		return false;
	}
	iVar0 = func_187(iParam0, 1);
	iVar2 = Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_313(Global_1146683.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146683.f_35859.f_9286[func_396(iVar2, 1) /*3*/];
		Var4 = { func_473(iVar3) };
		if (iVar3 != iParam0 && Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - A stronger perk in the perk stack group: ", func_315(iVar2, 0), " is already active. Active Perk: ", func_183(iVar3, 0));
			return false;
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Evaluating Activation Trigger: ", func_322(Global_1146683.f_35859.f_3116[iVar0 /*31*/], 0), " for activation... ");
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_505() && !func_506())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can only be activated when you are in Free Roam or running COOP. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can be activated! ");
			return true;
		case -2010146101:
			if (!func_505())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can only be activated when you are in Free Roam. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_309(iParam1);
			if (iVar1 == Global_1275959)
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can only be activated from REMOTE players. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can be activated from Remote Player Index: ", iVar1);
			return true;
		case -2129621195:
			iVar1 = func_309(iParam1);
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
			iVar1 = func_309(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is Invalid... ");
				return false;
			}
			if (iVar1 != Global_1275959 && !func_507(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT an Ally... ");
				return false;
			}
			if (!func_508(512, iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT in Dead Eye.. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can be activated! ");
			return true;
		case -1503245593:
			if (!Global_1957252.f_1716[8])
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player is not currently Lassoed... ");
				return false;
			}
			iVar1 = func_309(iParam1);
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " can be activated! ");
			return true;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_183(iParam0, 0), " has no activation logic defined, fix this... ");
	return false;
}

struct<31> func_473(int iParam0)
{
	int iVar0;

	iVar0 = func_187(iParam0, 1);
	return Global_1146683.f_35859.f_3116[iVar0 /*31*/];
}

bool func_474(bool bParam0, bool bParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_504(bParam0, bParam1, &Var0))
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

char* func_475(int iParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_BONE - Stat Flag: ", func_399(iParam0, 0), " does not have a Particle FX bone. Should you set one up? ");
	return "";
}

void func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_477()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__ENABLE_NED_KELLY_BASE_INTERNAL - Ned Kelly is equipped... Initializing Base properties... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275959.f_8, 0.7f);
}

char* func_478(int iParam0, int iParam1)
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

char* func_479(int iParam0)
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

char* func_480(int iParam0)
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

bool func_481(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_482(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_509(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_1(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

void func_483(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_510(&(uParam0->f_4));
}

char* func_484(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPCO_FLAG_CLEAR";
		case 1:
			return "MPCO_FLAG_OUTFIT_CUSTOMIZED";
		case 2:
			return "MPCO_FLAG_OUTFIT_CUSTOMIZATION_SAVED";
		case 4:
			return "MPCO_FLAG_OUTFIT_HAS_CUSTOM_NAME";
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

bool func_485(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_486(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953612.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

var func_487(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_231(iParam0, iParam1) };
	return vVar0.x;
}

bool func_488(int iParam0, int iParam1)
{
	return (Global_1953612.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_489(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG_BY_INDEX] Clearing[", func_335(bParam0, 0), "]: ", func_247(iParam1));
	Global_1953612.f_83[bParam0 /*12*/].f_11 = (Global_1953612.f_83[bParam0 /*12*/].f_11 - (Global_1953612.f_83[bParam0 /*12*/].f_11 && iParam1));
}

void func_490(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_UNSAVED_META_FLAG] Setting[", func_335(bParam0, 0), "]: ", func_247(iParam1));
	Global_1953612.f_83[bParam0 /*12*/].f_11 = (Global_1953612.f_83[bParam0 /*12*/].f_11 || iParam1);
}

struct<14> func_491(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_1(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_212(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_212(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_212(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_235(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_203(iParam6, 0));
	}
	return Var0;
}

bool func_492(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_96(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

int func_493(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	bool bVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_291() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_511(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_416(Var1.f_4) != 0)
			{
			}
			else if (func_17(Var1.f_4, -166674229))
			{
			}
			else if (func_17(Var1.f_4, 525391395))
			{
			}
			else
			{
				bVar15 = func_209(Var1.f_4);
				if (func_513(iParam2, func_512(bVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

int func_494(int iParam0)
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

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793 /* GXTEntry: "Outfit One" */;
		case 2:
			return 97391779 /* GXTEntry: "Outfit Two" */;
		case 3:
			return -808817534 /* GXTEntry: "Outfit Three" */;
		case 4:
			return 1270922359 /* GXTEntry: "Outfit Four" */;
		case 5:
			return -2011879201 /* GXTEntry: "Outfit Five" */;
		case 6:
			return -1063340820 /* GXTEntry: "Outfit Six" */;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201 /* GXTEntry: "Outfit Eight" */;
		case 9:
			return 1632140501 /* GXTEntry: "Outfit Nine" */;
		case 10:
			return 967218463 /* GXTEntry: "Outfit Ten" */;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(136, 208, "METAPED_SAVE__GET_INVENTORY_ITEM_FOR_OUTFIT_SAVE_SLOT: No inventory item mapped for slot ", iParam0, ".");
	return 0;
}

int func_496(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_4(bParam0, 0))
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

struct<10> func_497(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_498(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, char* sParam12)
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

bool func_499(bool bParam0)
{
	if (!func_4(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_STYLE: attempting to process an invalid item!");
	}
	if (func_17(bParam0, -393037696))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_STYLE");
		return true;
	}
	return false;
}

int func_500(int iParam0)
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

int func_501(bool bParam0, bool bParam1)
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

char* func_502(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_COMPONENT_CACHE_FLAG_CLEAR";
		case 1:
			return "MP_COMPONENT_CACHE_FLAG_CACHE_EXISTS";
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

void func_503(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_17(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_354(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953612.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_254(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_254(iVar0, iParam2);
	}
}

bool func_504(bool bParam0, bool bParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_514(iVar7);
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

bool func_505()
{
	return Global_1572887.f_6;
}

bool func_506()
{
	if (!Global_1048577)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Mission controller not active, not in COOP. Returning FALSE... ");
		return false;
	}
	if (!func_516(func_515(0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - No active/valid UID. Returning FALSE... ");
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is not a mission. Returning FALSE...");
		return false;
	}
	if (func_517(Global_524288.f_40400))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is coop sub-type. Returning TRUE...");
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Content is not COOP. Returning FALSE. ");
	return false;
}

bool func_507(char* sParam0)
{
	if (func_518(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_519(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

bool func_508(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_509(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_96(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_212(bParam1, 0));
		return false;
	}
	if (!func_331(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_212(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_1(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_212(bParam1, 0));
	return true;
}

void func_510(var uParam0)
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

bool func_511(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_512(bool bParam0)
{
	switch (bParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_513(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_514(int iParam0)
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

struct<2> func_515(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_516(struct<2> Param0)
{
	if (!func_520(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_521(Param0))
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0)
{
	return (((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414) || iParam0 == 31269700);
}

bool func_518(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_519(char* sParam0)
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
		func_522(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_523(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

bool func_520(int iParam0)
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

int func_521(int iParam0)
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

void func_522(char* sParam0)
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
	func_523(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_523(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

