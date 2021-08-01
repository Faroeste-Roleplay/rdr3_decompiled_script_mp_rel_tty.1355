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
	vector3 vLocal_16 = { 0f, 0f, 0f };
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_22 = 0;
	char* sLocal_23 = NULL;
	int iLocal_24[5] = { 0, 0, 0, 0, 0 };
	int iLocal_30[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = -1;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = -1082130432;
	var uLocal_66 = -1082130432;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 10;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
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
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_23 = ScriptParam_0;
	iLocal_22 = ScriptParam_0.f_1;
	if (func_1() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_3(func_2(0)) == 7)
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "No gatore eggs in gametypes.  Deleting gator egg blip.");
			func_4(&uLocal_42);
		}
	}
	if (func_1() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_4(&uLocal_42);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_22))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GATOR_EGGS SCRIPT was launched with no scenario point");
		func_4(&uLocal_42);
	}
	func_5(&uLocal_42, joaat("COLLECTIBLE_EGG_HERON"), joaat("PROVISION_HERON_EGG"), joaat("MP005_S_BDEG_HERONNEST01X"), joaat("MP005_S_BDEG_HERON_EGG01X"), 8, 1);
	while (func_6(&uLocal_42))
	{
		if (func_7())
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_BIRD_EGGS_CLEANUP: Start cleanup!");
			func_4(&uLocal_42);
		}
		if (func_8(&uLocal_42))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_BIRD_EGGS: Start cleanup!");
			func_4(&uLocal_42);
		}
		func_9(&uLocal_42);
		BUILTIN::WAIT(0);
	}
	DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_BIRD_EGGS_SCRIPT_RUN = FALSE: Start cleanup!");
	func_4(&uLocal_42);
}

int func_1()
{
	return Global_1572887.f_13;
}

struct<2> func_2(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_3(var uParam0, var uParam1)
{
	return uParam0;
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT GATOR_EGGS: CLEANUP_BIRD_EGGS!");
	func_10(0);
	func_11(&(uParam0->f_14));
	if (iLocal_39 != iVar0)
	{
		TASK::_0x5758B1EE0C3FD4AC(iLocal_39, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_2));
	}
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar1]))
		{
			func_13(iLocal_24[iVar1], iLocal_24[iVar1], 0);
		}
		iVar1++;
	}
	if (func_14(Global_1213365[*uParam0 /*251*/][uParam0->f_13], 2))
	{
		func_15(&(Global_1213365[*uParam0 /*251*/][uParam0->f_13]), 2);
	}
	func_16(&(uParam0->f_14));
	SCRIPTS::_0xE7282390542F570D(sLocal_23);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*uParam0 = 5;
	vLocal_16 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	vLocal_19 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	uParam0->f_4 = iParam6;
	uParam0->f_13 = iParam5;
	bLocal_36 = iParam3;
	bLocal_37 = iParam4;
	uParam0->f_3 = iParam2;
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

bool func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "GATOR_EGGS SCRIPT: CLEANUP_BIRD_EGGS for m_iScenarioScriptID = ", sLocal_23);
		func_4(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_17(uParam0);
			break;
		case 0:
			func_18(uParam0);
			break;
	}
	return false;
}

int func_9(var uParam0)
{
	int iVar0;

	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (func_19(uParam0))
			{
				DEBUG::_0x4DC69742196F818A(40, 215, "ADD_BIRD_EGG_TO_SATCHEL: [ground] picked up: ", func_20(uParam0->f_11, 0));
				DEBUG::_0x4DC69742196F818A(8, 215, "ADD_BIRD_EGG_TO_SATCHEL: anim even AddEgg fired.");
				func_10(1);
				func_21(uParam0->f_11, &iVar0);
				func_10(0);
				func_16(&(uParam0->f_14));
				uParam0->f_4 = -1;
				return 1;
			}
			break;
	}
	return 0;
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_SET_PLAYER_NON_GRIEFABLE - Set as Ghost");
		func_22(0, 6);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_SET_PLAYER_NON_GRIEFABLE - Clearing Ghost");
		func_23(0, 6, 0);
	}
}

void func_11(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_7);
	}
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case joaat("PROVISION_VULTURE_EGG"):
				return 1;
			case joaat("PROVISION_LOON_EGG"):
				return 3;
			case joaat("PROVISION_DUCK_EGG"):
				return 5;
			case joaat("PROVISION_GOOSE_EGG"):
				return 4;
			case joaat("PROVISION_HERON_EGG"):
				return 1;
			case joaat("PROVISION_EGRET_EGG"):
				return 1;
			case joaat("PROVISION_EAGLE_EGG"):
				return 1;
			case joaat("PROVISION_HAWK_EGG"):
				return 1;
			case joaat("PROVISION_SPOONBILL_EGG"):
				return 1;
			case joaat("PROVISION_CONDOR_EGG"):
				return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: invalid entity!");
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276832.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276832.f_32))
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: removing entity with model ", func_24(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " from tracking itemset");
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276832.f_32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: itemset was invalid or entity with model ", func_24(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " was not in tracking itemset");
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276832[iVar0 /*2*/]) && Global_1276832[iVar0 /*2*/] == iParam0)
		{
			DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: unregistering entity with model ", func_24(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " at index ", iVar0);
			MISC::_COPY_MEMORY(&(Global_1276832[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: couldn't find entity in the manager");
	return 0;
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_15(var uParam0, int iParam1)
{
	func_25(uParam0, iParam1);
}

void func_16(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_DO_COMMON_CLEANUP");
	func_26(uParam0);
	func_27(&(uParam0->f_6), 1);
}

void func_17(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (func_28(uParam0) > 4)
	{
		func_29(&iLocal_38);
	}
	bVar0 = (func_30(uParam0) && !func_19(uParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iLocal_38, "EggBroken"))
		{
			func_31(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < Global_17414.f_2989.f_1)
		{
			if (uParam0->f_3 == Global_17414.f_2989.f_1[iVar1 /*5*/].f_4)
			{
				if (func_32(Global_34, Global_17414.f_2989.f_1[iVar1 /*5*/].f_1, 50f, 1))
				{
					if (!Global_17414.f_2989.f_1[iVar1 /*5*/])
					{
						Global_17414.f_2989.f_1[iVar1 /*5*/] = 1;
						func_33("COLLECTIBLE_MAP_BIRD_EGG_SHOT", 10000, 0, 0, 0, 1);
					}
				}
			}
			iVar1++;
		}
	}
	if (func_34(Global_1275959.f_8, vLocal_16, 1) < 2f)
	{
		func_35(&(uParam0->f_14.f_5));
	}
	if (func_14(Global_1213365[*uParam0 /*251*/][uParam0->f_13], 4))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: COLLECTIBLE_FLAG_BIRD_NEST_SHOT bit received and cleared.");
		func_36(iLocal_38, 0);
		func_37(uParam0, 9);
		func_15(&(Global_1213365[*uParam0 /*251*/][uParam0->f_13]), 4);
	}
	else if (func_14(Global_1213365[*uParam0 /*251*/][uParam0->f_13], 8))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: COLLECTIBLE_FLAG_BIRD_NEST_DESTROYED bit received and cleared.");
		func_36(iLocal_38, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			func_13(iLocal_38, iLocal_38, 0);
		}
		func_37(uParam0, 12);
		func_15(&(Global_1213365[*uParam0 /*251*/][uParam0->f_13]), 8);
	}
	switch (func_28(uParam0))
	{
		case 0:
			func_38(&(uParam0->f_14.f_6), vLocal_16, 1.5f, 1, 319, 0);
			func_39(uParam0);
			func_37(uParam0, 1);
			break;
		case 1:
			if (func_40(uParam0))
			{
				func_37(uParam0, 2);
			}
			break;
		case 2:
			if (func_30(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_41(uParam0))
				{
					func_37(uParam0, 3);
				}
			}
			else
			{
				func_37(uParam0, 13);
			}
			break;
		case 3:
			func_37(uParam0, 4);
			break;
		case 4:
			func_42(&(uParam0->f_3));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
			{
				if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_38))
				{
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: Reg. Eagle Eye Nest");
					func_43(iLocal_38, iLocal_38, 0);
					MAP::_0x7563CBCA99253D1A(iLocal_38, joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					func_37(uParam0, 5);
				}
			}
			break;
		case 5:
			if (uParam0->f_11 != joaat("COLLECTIBLE_EGG_CONDOR"))
			{
				if (func_44())
				{
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: BIRD_EGGS_STATE_CHECK_RUMBLE_DISTANCE - Nest Shot Premature.");
					func_13(iLocal_38, iLocal_38, 0);
					func_37(uParam0, 11);
				}
				if (func_34(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vLocal_16, 0) < 10f)
				{
					func_37(uParam0, 6);
				}
			}
			else
			{
				func_37(uParam0, 9);
			}
			break;
		case 6:
			func_37(uParam0, 7);
			break;
		case 7:
			if (func_44())
			{
				func_13(iLocal_38, iLocal_38, 0);
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: BIRD_EGGS_STATE_CHECK_BLIP_DISTANCE - Nest Shot Premature.");
				func_37(uParam0, 11);
			}
			if (func_34(Global_33, vLocal_16, 0) < 8f)
			{
				func_37(uParam0, 8);
			}
			break;
		case 8:
			if (func_44())
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: Nest Shot");
				func_13(iLocal_38, iLocal_38, 0);
				func_37(uParam0, 11);
			}
			break;
		case 11:
			if (!DECORATOR::DECOR_GET_BOOL(iLocal_38, "EggBroken"))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: BIRD_EGGS_STATE_CHECK_DAMAGED egg good.");
				func_45(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: BIRD_EGGS_STATE_CHECK_DAMAGED egg destroyed.");
				func_46(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
			break;
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
			{
				ENTITY::_0xF41E2979D5BC5370(bLocal_37);
				iLocal_24[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(bLocal_37, vLocal_16, false, false, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
			{
				if (!TASK::_0x0CCFE72B43C9CF96(iLocal_24[0]))
				{
					if (!uParam0->f_26)
					{
						DEBUG::_0xF0783374333FD8CE(8, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: Nest shot event received and falling Egg created.");
						PHYSICS::ACTIVATE_PHYSICS(iLocal_24[0]);
						TASK::_0x78B4567E18B54480(iLocal_24[0]);
						func_13(iLocal_38, iLocal_38, 0);
						func_43(iLocal_24[0], iLocal_24[0], 0);
						MAP::_0x7563CBCA99253D1A(iLocal_24[0], joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
						ENTITY::_0x5826EFD6D73C4DE5(iLocal_24[0]);
						func_15(&(Global_1213365[*uParam0 /*251*/][uParam0->f_13]), 4);
						uParam0->f_26 = 1;
					}
				}
				else
				{
					TASK::_0x8E1DDE26D270CC5E(iLocal_24[0], 1);
					func_37(uParam0, 10);
				}
				if (uParam0->f_26)
				{
					func_47(uParam0);
				}
			}
			break;
		case 10:
			func_47(uParam0);
			func_37(uParam0, 13);
			break;
		case 12:
			PERSISTENCE::_0x8245C1F3262F4AC2(iLocal_22);
			MISC::_0x082C043C7AFC3747(iLocal_39, 0);
			break;
		case 13:
			break;
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_30(uParam0) && !func_19(uParam0));
	if (func_48(uParam0, &iLocal_24) > 0)
	{
		func_31(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
	}
	if (func_34(Global_1275959.f_8, vLocal_16, 1) < 3.5f)
	{
		func_35(&(uParam0->f_14.f_5));
	}
	switch (func_28(uParam0))
	{
		case 0:
			func_38(&(uParam0->f_14.f_6), vLocal_16, 1.5f, 1, 319, 0);
			func_49(&(uParam0->f_14), vLocal_16);
			func_50(uParam0);
			func_37(uParam0, 1);
			break;
		case 1:
			if (func_51(uParam0))
			{
				func_37(uParam0, 2);
			}
			break;
		case 2:
			if (func_30(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_52(uParam0))
				{
					func_37(uParam0, 3);
				}
			}
			else
			{
				func_37(uParam0, 13);
			}
			break;
		case 3:
			func_37(uParam0, 4);
			break;
		case 4:
			func_42(&(uParam0->f_3));
			if (func_53(&iLocal_24, &iLocal_30, func_12(&(uParam0->f_3)), vLocal_16, 5f) > 0)
			{
				iVar1 = 0;
				while (iVar1 < func_12(&(uParam0->f_3)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar1]))
					{
						DEBUG::_0x4DC69742196F818A(136, 215, "BIRD_EGGS_STATE_CREATE_EAGLE_EYE: index = ", iVar1, " | Gator Egg Exists...");
						OBJECT::_0x46CBCF0E98A4E156(iLocal_24[iVar1], 1);
						if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_24[iVar1]))
						{
							func_43(iLocal_24[iVar1], iLocal_24[iVar1], 0);
						}
						MAP::_0x7563CBCA99253D1A(iLocal_24[iVar1], joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					}
					iVar1++;
				}
			}
			iVar2 = TASK::_0x96C6ED22FB742C3E(iLocal_39, &(uParam0->f_28));
			if (iVar2 > 0 && iVar2 <= 10)
			{
				DEBUG::_0xF0783374333FD8CE(8, 215, "UPDATE_GROUND_NEST_BIRD_EGGS: iNumEntities - ", iVar2);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar3 /*2*/]))
					{
						OBJECT::_0x46CBCF0E98A4E156(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_28[iVar3 /*2*/]), 1);
						if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_28[iVar3 /*2*/]))
						{
							func_43(uParam0->f_28[iVar3 /*2*/], uParam0->f_28[iVar3 /*2*/], 0);
						}
						MAP::_0x7563CBCA99253D1A(uParam0->f_28[iVar3 /*2*/], joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					}
					iVar3++;
				}
			}
			if (func_48(uParam0, &iLocal_24) == func_12(&(uParam0->f_3)))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "BIRD_EGGS_STATE_CREATE_EAGLE_EYE: ARE_EGGS_VALID = TRUE...");
				func_37(uParam0, 5);
			}
			break;
		case 5:
			func_37(uParam0, 6);
			break;
		case 6:
			func_37(uParam0, 7);
			break;
		case 7:
			if (func_34(Global_33, vLocal_16, 0) < 8f)
			{
				func_37(uParam0, 8);
			}
			break;
		case 8:
			break;
		case 9:
			func_37(uParam0, 11);
			break;
		case 10:
			func_37(uParam0, 13);
			break;
		case 11:
			func_37(uParam0, 13);
			break;
		case 12:
			MISC::_0x082C043C7AFC3747(iLocal_39, 0);
			break;
		case 13:
			break;
	}
}

bool func_19(var uParam0)
{
	if (uParam0->f_4 == 0)
	{
		if (func_34(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_5, 1) <= 1f)
		{
			return (func_54(uParam0) || func_55(uParam0));
		}
	}
	return (func_54(uParam0) || func_55(uParam0));
}

var func_20(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-126735818);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

int func_21(bool bParam0, int* iParam1)
{
	struct<2> Var0;

	DEBUG::_0x1B08D1EB9D8C4931(40, 215, "NET_COLLECTIBLE_PERSONA_REQUEST_AWARD_LOOT: ", func_20(bParam0, 0));
	Var0.f_1 = 10;
	func_56(&Var0, joaat("LOOT_TYPE_NORMAL"));
	return func_57(bParam0, &Var0, iParam1, 0, 0);
}

void func_22(int iParam0, int iParam1)
{
	if (!func_58(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 162, "NET_HUD__SET_LOCAL_PLAYER_GHOSTED: Setting ghost type ", func_59(iParam0, 0), " from source ", func_60(iParam1, 0), " for local player.");
		UNK_0x355E72323AEE83CC(162, 7);
		MISC::SET_BIT(&(Global_1072032.f_22542.f_417[iParam0 /*12*/]), iParam1);
		Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_61();
	}
}

void func_23(int iParam0, int iParam1, bool bParam2)
{
	if (func_58(iParam0, iParam1) && (!bParam2 || Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 162, "NET_HUD__CLEAR_LOCAL_PLAYER_GHOSTED: Clearing ghost type ", func_59(iParam0, 0), " from source ", func_60(iParam1, 0), " for local player.");
		UNK_0x355E72323AEE83CC(162, 7);
		MISC::CLEAR_BIT(&(Global_1072032.f_22542.f_417[iParam0 /*12*/]), iParam1);
		Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_61();
	}
}

var func_24(bool bParam0, int iParam1)
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

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_26(var uParam0)
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_4 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_27(var uParam0, int iParam1)
{
	if (func_62(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "REMOVE_VEG_MODIFIER_SPHERE_SAFE: Removing veg modifier");
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

int func_28(var uParam0)
{
	return uParam0->f_1;
}

void func_29(int iParam0)
{
	if (func_63(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "EggBroken"))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*iParam0))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, joaat("WEAPON_RIFLE_VARMINT"), 10000) || func_64())
					{
						DEBUG::_0x4DC69742196F818A(8, 215, "MANAGE_NET_BIRD_EGGS_NEST_DAMAGE_EVENT: NOT EggBroken");
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", false);
					}
					else
					{
						DEBUG::_0x4DC69742196F818A(8, 215, "MANAGE_NET_BIRD_EGGS_NEST_DAMAGE_EVENT: EggBroken");
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", true);
						func_65(818, 1);
					}
				}
			}
		}
	}
}

bool func_30(var uParam0)
{
	struct<5> Var0;

	Var0 = { func_66(uParam0->f_3, 0, 1) };
	if (func_67(uParam0->f_3, &Var0, 1, 0, 0, -1, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "SHOULD_BIRD_NEST_SPAWN_EGGS: not spawning eggs because inventory is maxed");
		return false;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_22))
	{
		if (PERSISTENCE::_0xFB7CF1DE938A3E22(iLocal_22))
		{
			return false;
		}
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_BIRD_NEST_SPAWN_EGGS: scenario point does not exist");
	}
	return true;
}

void func_31(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_68(Global_1213361))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_10 == -1f)
		{
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1213361, vParam1, true);
		}
		if (uParam0->f_10 <= 5f)
		{
			bVar0 = true;
		}
	}
	bVar1 = func_69(uParam0, bParam4, bVar0);
	if (!bVar1)
	{
		if (uParam0->f_8)
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE: rumble disabled in state - ", func_70(uParam0->f_11, 0));
			uParam0->f_8 = 0;
		}
	}
	if (uParam0->f_11 < 8)
	{
		uParam0->f_11++;
	}
	else
	{
		uParam0->f_11 = 0;
	}
	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
		{
			uParam0->f_8 = 1;
			DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE: end of checks, re-enabling rumble for next cycle");
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_9 == -1f)
	{
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);
	}
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_71()));
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
						if (Global_1940410.f_38 != joaat("WEAPON_KIT_METAL_DETECTOR"))
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_72(uParam0, 1);
					}
				}
				else
				{
					func_72(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - uParam0->f_9) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - uParam0->f_9) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (uParam0->f_9 < 3f && bParam7)
			{
				DEBUG::_0xF0783374333FD8CE(8, 191, "COLLECTIBLE_RUMBLE_STATE_DIST_CHECK - disable respawn");
				func_73(250);
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_74(&(uParam0->f_1));
			func_72(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_26(uParam0);
				}
				func_72(uParam0, 0);
			}
			else if (func_75(&(uParam0->f_1)) >= 2f)
			{
				func_72(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				DEBUG::_0xF0783374333FD8CE(8, 191, "COLLECTIBLE_RUMBLE_STATE_WITHIN_RADIUS - disable respawn");
				func_73(250);
			}
			break;
	}
}

bool func_32(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

var func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

float func_34(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_35(var uParam0)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 215, "NET_COLLECTIBLE_HANDLE_USE_CONTEXT_SOUND: UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(INPUT_LOOT3) - ", MISC::_0xF216F74101968DB0(HUD::_UIPROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3"))));
		if (HUD::_UIPROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
				DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLE_HANDLE_USE_CONTEXT_SOUND: playing collectible_found sound");
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

void func_36(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam1)
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_BIRD_EGGS_NEST_DAMAGE: NOT EggBroken");
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(1E-07f, 0f, 0f), 1, true, joaat("WEAPON_RIFLE_VARMINT"), 0, false, false, -1f, false);
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_BIRD_EGGS_NEST_DAMAGE: EggBroken");
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(1E-07f, 0f, 0f), 1, true, joaat("WEAPON_REPEATER_CARBINE"), 0, false, false, -1f, false);
		}
	}
}

void func_37(var uParam0, int iParam1)
{
	DEBUG::_0x4DC69742196F818A(680, 215, "SET_BIRD_EGGS_STATE: ", func_76(uParam0->f_1, 0), " -> ", func_76(iParam1, 0));
	uParam0->f_1 = iParam1;
}

void func_38(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	if (!func_62(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, bParam4, iParam5, bParam6, iParam7);
		if (func_62(uParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(440, 0, "ADD_VEG_MODIFIER_SPHERE_SAFE: Adding a veg modifier at pos: ", &vParam1, " and radius: ", bParam4);
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(440, 0, "ADD_VEG_MODIFIER_SPHERE_SAFE: Failed to add veg modifier at pos: ", &vParam1, " and radius: ", bParam4);
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "Trying to create a veg modifier with a veg modifier handle that is already in use. Please remove veg modifier before using the same handle again");
	}
}

void func_39(var uParam0)
{
	STREAMING::REQUEST_MODEL(bLocal_36, false);
	STREAMING::REQUEST_MODEL(bLocal_37, false);
	DEBUG::_0x4DC69742196F818A(168, 215, "REQUEST_HIGH_BIRD_NEST_ASSETS: model: ", func_77(iLocal_40, 0), " requested.");
}

bool func_40(var uParam0)
{
	if (STREAMING::HAS_MODEL_LOADED(bLocal_36) && STREAMING::HAS_MODEL_LOADED(bLocal_37))
	{
		DEBUG::_0x4DC69742196F818A(168, 215, "HAVE_HIGH_BIRD_NEST_ASSETS_LOADED: model: ", func_24(bLocal_36, 0), " has finished loading.");
		DEBUG::_0x4DC69742196F818A(168, 215, "HAVE_HIGH_BIRD_NEST_ASSETS_LOADED: model: ", func_24(bLocal_37, 0), " has finished loading.");
		return true;
	}
	DEBUG::_0x4DC69742196F818A(168, 215, "HAVE_HIGH_BIRD_NEST_ASSETS_LOADED: waiting on model: ", func_24(bLocal_36, 0), " to load.");
	return false;
}

bool func_41(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		iLocal_38 = OBJECT::CREATE_OBJECT_NO_OFFSET(bLocal_36, vLocal_19, false, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		return false;
	}
	DEBUG::_0x4DC69742196F818A(8, 215, "HAS_HIGH_BIRD_NEST_BEEN_CREATED -> T");
	return true;
}

void func_42(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case joaat("PROVISION_VULTURE_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_VULTURE_EGG01X");
				break;
			case joaat("PROVISION_LOON_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_LOON_EGG01X");
				break;
			case joaat("PROVISION_DUCK_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_DUCK_EGG01X");
				break;
			case joaat("PROVISION_GOOSE_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_GOOSE_EGG01X");
				break;
			case joaat("PROVISION_EAGLE_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_EAGLENEST01X");
				break;
			case joaat("PROVISION_EGRET_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_EGRETNEST01X");
				break;
			case joaat("PROVISION_HAWK_EGG"):
				iLocal_30[iVar0] = 990159072;
				break;
			case joaat("PROVISION_CONDOR_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_CONDOR_EGG01X");
				break;
			case joaat("PROVISION_HERON_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_HERONNEST01X");
				break;
			case joaat("PROVISION_SPOONBILL_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_SPOONBILLNEST01X");
				break;
		}
		iVar0++;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: invalid entity!");
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276832.f_32))
	{
		Global_1276832.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276832.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276832.f_32);
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: adding entity with model ", func_24(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " to tracking itemset");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: model ", func_24(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " was already a member of the itemset!?");
	}
	if (!func_78(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2, 0);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276832[iVar0 /*2*/]))
		{
			DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: registering entity with model ", func_24(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " at index ", iVar0);
			Global_1276832[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: no space in the array for the entity, won't be trackable in eagle eye!");
	return 0;
}

bool func_44()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		return DECORATOR::DECOR_EXIST_ON(iLocal_38, "EggBroken");
	}
	return false;
}

void func_45(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	DEBUG::_0xA308F935BDECCEC0(8, 215, "[NET_COLLECTIBLES__BIRD_NEST_SHOT] Bird nest shot. ");
	uVar0 = func_79(0, 8);
	Var1.f_4 = 1;
	Var1 = 42;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1275959.f_154[Global_1275959];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_81(Var8, func_80(Global_34, 0f, 0f, 0f, 150f, 150f, 150f, joaat("VOLSPHERE"), 0, 8), 0, 0);
	func_82(&Var1, &uVar0);
}

void func_46(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	DEBUG::_0xA308F935BDECCEC0(8, 215, "[NET_COLLECTIBLES__BIRD_NEST_DESTROYED] Bird nest destroyed. ");
	uVar0 = func_79(0, 8);
	Var1.f_4 = 1;
	Var1 = 43;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1275959.f_154[Global_1275959];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_81(Var8, func_80(Global_34, 0f, 0f, 0f, 150f, 150f, 150f, joaat("VOLSPHERE"), 0, 8), 0, 0);
	func_82(&Var1, &uVar0);
}

void func_47(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
	{
		if (!uParam0->f_27)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_24[0], true, false) };
			vVar3 = { vVar0 };
			if (func_83(&vVar3, 50, 10, 0, 0))
			{
				DEBUG::_0xF0783374333FD8CE(24, 215, "UPDATE_HIGH_NEST_BIRD_EGGS: ABSF(vGroundPos.z-vEggPos.z) - ", MISC::ABSF((vVar3.z - vVar0.z)));
				if (MISC::ABSF((vVar3.z - vVar0.z)) <= 0.025f)
				{
					PHYSICS::SET_DAMPING(iLocal_24[0], 0, 100000f);
					PHYSICS::SET_DAMPING(iLocal_24[0], 4, 100000f);
					uParam0->f_27 = 1;
				}
			}
		}
		else
		{
			vVar6 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_24[0], -1) };
			vVar9 = { vVar6 };
			vVar9 = { vVar9 * Vector(0.75f, 0.75f, 0.75f) };
			if (MISC::ABSF(vVar6.x) < vVar9.x)
			{
				vVar9.x = vVar6.x;
			}
			if (MISC::ABSF(vVar6.y) < vVar9.y)
			{
				vVar9.f_1 = vVar6.y;
			}
			if (MISC::ABSF(vVar6.z) < vVar9.z)
			{
				vVar9.f_2 = vVar6.z;
			}
			if (func_32(vVar9, 0f, 0f, 0f, 0.05f, 1))
			{
				vVar9 = { 0f, 0f, 0f };
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_24[0], true);
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(56, 215, "MANAGE_FALLEN_EGG_PHYSICS: vNewVelocity) - ", &vVar9);
				ENTITY::SET_ENTITY_VELOCITY(iLocal_24[0], vVar9);
			}
		}
	}
}

int func_48(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar1]))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "ARE_EGGS_VALID: DOES_ENTITY_EXIST: index = ", iVar1);
			iVar0++;
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "ARE_EGGS_VALID: NOT DOES_ENTITY_EXIST: index = ", iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

void func_49(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_7, 6, 0, false, -1, -1, 0);
	}
}

void func_50(var uParam0)
{
	TASK::_0x73F0D0327BFA0812(iLocal_40);
	DEBUG::_0x4DC69742196F818A(168, 215, "REQUEST_BIRD_NEST_ASSETS: composite assets: ", func_77(iLocal_40, 0), " requested.");
}

bool func_51(var uParam0)
{
	if (TASK::_0x5E5D96BE25E9DF68(iLocal_40))
	{
		DEBUG::_0x4DC69742196F818A(168, 215, "HAVE_BIRD_NEST_COMPOSITE_ASSETS_LOADED: composite assets: ", func_77(iLocal_40, 0), " has finished loading.");
		return true;
	}
	DEBUG::_0x4DC69742196F818A(168, 215, "HAVE_BIRD_NEST_COMPOSITE_ASSETS_LOADED: waiting on composite assets: ", func_77(iLocal_40, 0), " to load.");
	return false;
}

bool func_52(var uParam0)
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		if (bLocal_41)
		{
			DEBUG::_0x4DC69742196F818A(136, 215, "HAS_BIRD_NEST_BEEN_CREATED: m_bSpawnFullNest = ", bLocal_41, " | Spawn Full Nest.");
			iLocal_39 = TASK::_0x5B4BBE80AD5972DC(iLocal_40, vLocal_16, 0f, 0, &uVar0, -1);
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(136, 215, "HAS_BIRD_NEST_BEEN_CREATED: m_bSpawnFullNest = ", bLocal_41, " | Spawn Empty Nest.");
			iLocal_39 = TASK::_0x5B4BBE80AD5972DC(iLocal_40, vLocal_16, 0f, 1, &uVar0, -1);
		}
		return true;
	}
	return false;
}

int func_53(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_84(iParam0, iParam1, iVar0, iParam2);
	func_85(iVar0);
	return iVar1;
}

int func_54(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 89266752))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "HAS_BIRD_EGG_PICK_UP_DONE_EVENT_FIRED: AddEgg event fired.");
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_22))
		{
			PERSISTENCE::_0x8245C1F3262F4AC2(iLocal_22);
			DEBUG::_0x4DC69742196F818A(8, 215, "HAS_BIRD_EGG_PICK_UP_DONE_EVENT_FIRED: marking scenario as looted");
		}
		func_86(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		return 1;
	}
	return 0;
}

int func_55(var uParam0)
{
	if (func_14(Global_1213365[*uParam0 /*251*/][uParam0->f_13], 2))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_BIRD_EGG_BE_GIVEN_AS_POSSE_MEMBER: -> T");
		return 1;
	}
	return 0;
}

void func_56(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == bParam1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(2216, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") already exists, ignoring");
			return;
		}
		switch (bParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(567464, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") is exclusive with existing conditional ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1]), " (", uParam0->f_1[iVar1], "), replacing existing entry");
			uParam0->f_1[iVar1] = bParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(34984, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Adding conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") failed as max capacity (", 10, ") has been reached.");
		return;
	}
	DEBUG::_0x4DC69742196F818A(2216, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Adding conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ")");
	uParam0->f_1[*uParam0] = bParam1;
	*uParam0++;
}

int func_57(bool bParam0, var uParam1, int* iParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (bParam0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REQUEST_AWARD_LOOT - Invalid loot table supplied, ignoring!");
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_LOOT - CashInventory Session is NOT ready, aborting");
		UNK_0x355E72323AEE83CC(205, 8);
		return 0;
	}
	func_87(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_REQUEST_AWARD_LOOT - Failed to request loot award ", func_20(bParam0, 0));
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_88(iParam2, bParam0, Var1);
	return 1;
}

bool func_58(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072032.f_22542.f_417[iParam0 /*12*/], iParam1);
}

char* func_59(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_GHOST_TYPE_ALL_PLAYERS";
		case 1:
			return "NET_GHOST_TYPE_ALL_PLAYERS_BUT_ALLIES";
		case 2:
			return "NET_GHOST_TYPE_ALL_PLAYERS_BUT_ALLIES_INCLUDE_HORSES";
		case 3:
			return "NUM_NET_GHOST_TYPES";
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

char* func_60(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_GHOST_SOURCE_CUTSCENE";
		case 1:
			return "NET_GHOST_SOURCE_MISSION";
		case 2:
			return "NET_GHOST_SOURCE_SHOP";
		case 3:
			return "NET_GHOST_SOURCE_GFH_GIVER";
		case 4:
			return "NET_GHOST_SOURCE_FAST_TRAVEL_BARKER";
		case 5:
			return "NET_GHOST_SOURCE_TRANSITION";
		case 6:
			return "NET_GHOST_SOURCE_COLLECTABLES";
		case 7:
			return "NET_GHOST_SOURCE_STABLES";
		case 8:
			return "NET_GHOST_SOURCE_MOONSHINE_SHACK";
		case 9:
			return "NET_GHOST_SOURCE_CLOUD_DROP";
		case 10:
			return "NUM_NET_GHOST_SOURCES";
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

void func_61()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "NET_HUD_SET_ALL_PLAYERS_NEED_UPDATED: Setting that all players need updated.");
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1072032.f_21420.f_260));
}

bool func_62(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_63(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			switch (iVar0)
			{
				case joaat("MP005_S_BDEG_EAGLENEST01X"):
				case joaat("MP005_S_BDEG_CONDORNEST01X"):
				case joaat("MP005_S_BDEG_SPOONBILLNEST01X"):
				case joaat("MP005_S_BDEG_HERONNEST01X"):
				case joaat("MP005_S_BDEG_EGRETNEST01X"):
				case 990159072:
					return true;
			}
		}
	}
	return false;
}

bool func_64()
{
	bool bVar0;

	if (func_90(func_89(Global_33, 1, 0, 0)))
	{
		bVar0 = WEAPON::_0x7E7B19A4355FEE13(Global_33, WEAPON::_0x6CA484C9A7377E4F(Global_33, 1));
		if (bVar0 == joaat("AMMO_ARROW_SMALL_GAME"))
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, " : WAS_NET_BIRD_EGG_NEST_SHOT_BY_ARROW_SMALL_GAME() : TRUE ", func_91(bVar0, 0));
			return true;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, " : WAS_NET_BIRD_EGG_NEST_SHOT_BY_ARROW_SMALL_GAME() : FALSE ", func_91(bVar0, 0));
			return false;
		}
	}
	return false;
}

void func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_92(iParam0, &iVar0, &iVar1);
	if (!func_93(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_94(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_95(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

struct<5> func_66(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_96(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_97(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_91(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_98(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_99(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_100(bParam1) };
			if (bParam2 && func_101(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_102(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_102(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_103(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_104(bParam1) };
			switch (func_105(bParam0))
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
			if (func_106(bParam0, -1823706425))
			{
				Var0 = { func_99(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_106(bParam0, -1483207246))
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
			else if (func_106(bParam0, -1653629781))
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
				if (!func_107(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_106(bParam0, -1653629781))
			{
				Var0 = { func_99(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_91(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_91(bParam0, 0), ": ", func_108(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

bool func_67(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_109(&bParam0);
	if (!func_110(bParam0, 0) && !func_112(func_111(bParam0), 2))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "[PLAYER_INVENTORY_IS_ITEM_MAXED] Item is invalid - Failing!");
		return false;
	}
	if (!bParam3 && func_113(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - ", func_91(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam3 = true;
	}
	if (func_114(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		Var0 = { func_100(0) };
		Var4.f_9 = -1591664384;
		if (!func_102(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_103(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_101(bParam0, 1))
		{
			if (!func_102(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_103(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - No free slots for ", func_91(bParam0, 0));
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_115(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_116(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, bParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_69(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_117(joaat("KIT_COLLECTORS_BAG"), 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_118(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_119())
			{
				return 0;
			}
			break;
		case 3:
			if (Global_1048576)
			{
				return 0;
			}
			break;
		case 4:
			if (func_120())
			{
				return 0;
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::_0xEC7E480FF8BD0BED(Global_33))
			{
				return 0;
			}
			break;
		case 7:
			if (!bParam1 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		case 8:
			if (bParam2 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		default:
			uParam0->f_11 = 0;
			DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE_CHECKS: netCollectibleDivinationState couldn't be handled, moving to NET_COLLECTIBLE_RUMBLE_CHECK_FIRST_CHECK");
			break;
	}
	return 1;
}

char* func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_COLLECTORS_BAGS";
		case 1:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_SHOP";
		case 2:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_MINIGAME";
		case 3:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_MISSION";
		case 4:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_IS_ANIMAL";
		case 5:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_PLAYER_CONTROL";
		case 6:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_ITEM_INTERACTION";
		case 7:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_RUMBLE_DISTANCE";
		case 8:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_DETECTING_DISTANCE";
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

float func_71()
{
	return Global_1146683.f_2169[89 /*205*/].f_201;
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_73(int iParam0)
{
	UNK_0x355E72323AEE83CC(223, 6);
	DEBUG::_0xA308F935BDECCEC0(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] Request to delay respawn availability for _iMilliseconds: ", iParam0);
	if (iParam0 <= 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] ERROR! Disable duration can not be <= 0");
		return;
	}
	Global_1896750.f_3977 = MISC::GET_GAME_TIMER();
	Global_1896750.f_3977.f_1 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] iRespawnDisabledTimeStamp: ", Global_1896750.f_3977);
}

void func_74(var uParam0)
{
	func_121(uParam0, 0f);
}

float func_75(var uParam0)
{
	if (!func_122(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_123(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_124() - uParam0->f_1);
}

char* func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "BIRD_EGGS_STATE_INVALID";
		case 0:
			return "BIRD_EGGS_STATE_REQUEST_NEST";
		case 1:
			return "BIRD_EGGS_STATE_STREAM_NEST";
		case 2:
			return "BIRD_EGGS_STATE_CREATE_NEST";
		case 3:
			return "BIRD_EGGS_STATE_CHECK_EAGLE_EYE_DISTANCE";
		case 4:
			return "BIRD_EGGS_STATE_CREATE_EAGLE_EYE";
		case 5:
			return "BIRD_EGGS_STATE_CHECK_RUMBLE_DISTANCE";
		case 6:
			return "BIRD_EGGS_STATE_SET_CONTROLLER_RUMBLE";
		case 7:
			return "BIRD_EGGS_STATE_CHECK_BLIP_DISTANCE";
		case 8:
			return "BIRD_EGGS_STATE_CREATE_BLIP";
		case 9:
			return "BIRD_EGGS_STATE_CHECK_PICKING_ANIM";
		case 10:
			return "BIRD_EGGS_STATE_SET_PICKED";
		case 11:
			return "BIRD_EGGS_STATE_CHECK_DAMAGED";
		case 12:
			return "BIRD_EGGS_STATE_DISABLED_LOOTABLE";
		case 13:
			return "BIRD_EGGS_STATE_WAITING";
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

char* func_77(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("COMPOSITE_LOOTABLE_CREEPING_THYME_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_CREEPING_THYME_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_TEXAS_BONNET_DEF"):
			return "COMPOSITE_LOOTABLE_TEXAS_BONNET_DEF";
		case joaat("COMPOSITE_LOOTABLE_BLACK_CURRANT_DEF"):
			return "COMPOSITE_LOOTABLE_BLACK_CURRANT_DEF";
		case joaat("COMPOSITE_LOOTABLE_DESERT_SAGE_DEF"):
			return "COMPOSITE_LOOTABLE_DESERT_SAGE_DEF";
		case joaat("COMPOSITE_LOOTABLE_CHOC_DAISY_DEF"):
			return "COMPOSITE_LOOTABLE_CHOC_DAISY_DEF";
		case joaat("COMPOSITE_LOOTABLE_BLOODFLOWER_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_BLOODFLOWER_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_TEXAS_BONNET_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_TEXAS_BONNET_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_INTERACTABLE_DEF";
		case -1541470630:
			return "COMPOSITE_LOOTABLE_HARRIETUM_OFFICINALIS_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF"):
			return "COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF";
		case joaat("COMPOSITE_LOOTABLE_GOOSE_EGG_4_DEF"):
			return "COMPOSITE_LOOTABLE_GOOSE_EGG_4_DEF";
		case joaat("COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF"):
			return "COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF";
		case joaat("COMPOSITE_LOOTABLE_VULTURE_EGG_DEF"):
			return "COMPOSITE_LOOTABLE_VULTURE_EGG_DEF";
		case joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF"):
			return "COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_QUEENS_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_QUEENS_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_ACUNA_STAR_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_ACUNA_STAR_DEF";
		case joaat("COMPOSITE_LOOTABLE_PARASOL_MUSHROOM_DEF"):
			return "COMPOSITE_LOOTABLE_PARASOL_MUSHROOM_DEF";
		case joaat("COMPOSITE_LOOTABLE_CHOC_DAISY_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_CHOC_DAISY_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_DESERT_SAGE_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_DESERT_SAGE_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_OLEANDER_SAGE_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_OLEANDER_SAGE_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_CLAM_SHELL_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_CLAM_SHELL_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_FEVERFEW_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_FEVERFEW_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_FEVERFEW_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_FEVERFEW_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_BITTERWEED_DEF"):
			return "COMPOSITE_LOOTABLE_BITTERWEED_DEF";
		case joaat("COMPOSITE_LOOTABLE_GOLDEN_CURRANT_DEF"):
			return "COMPOSITE_LOOTABLE_GOLDEN_CURRANT_DEF";
		case joaat("COMPOSITE_LOOTABLE_LOON_EGG_3_DEF"):
			return "COMPOSITE_LOOTABLE_LOON_EGG_3_DEF";
		case joaat("COMPOSITE_LOOTABLE_MILKWEED_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_MILKWEED_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_SPARROWS_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_SPARROWS_DEF";
		case -839537088:
			return "COMPOSITE_LOOTABLE_HARRIETUM_OFFICINALIS_DEF";
		case joaat("COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_EVERGREEN_HUCKLEBERRY_DEF"):
			return "COMPOSITE_LOOTABLE_EVERGREEN_HUCKLEBERRY_DEF";
		case joaat("COMPOSITE_LOOTABLE_BAY_BOLETE_DEF"):
			return "COMPOSITE_LOOTABLE_BAY_BOLETE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_NIGHT_SCENTED_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_NIGHT_SCENTED_DEF";
		case joaat("COMPOSITE_LOOTABLE_RED_SAGE_DEF"):
			return "COMPOSITE_LOOTABLE_RED_SAGE_DEF";
		case joaat("COMPOSITE_LOOTABLE_WISTERIA_DEF"):
			return "COMPOSITE_LOOTABLE_WISTERIA_DEF";
		case joaat("COMPOSITE_LOOTABLE_GATOR_EGG_5_DEF"):
			return "COMPOSITE_LOOTABLE_GATOR_EGG_5_DEF";
		case joaat("COMPOSITE_LOOTABLE_RAMS_HEAD_DEF"):
			return "COMPOSITE_LOOTABLE_RAMS_HEAD_DEF";
		case joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_ENGLISH_MACE_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_GOLDEN_CURRANT_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_GOLDEN_CURRANT_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_GHOST_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_GHOST_DEF";
		case joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_INDIAN_TOBACCO_INTERACTABLE_DEF";
		case 0:
			return "INVALID_COMPOSITE_LOOTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_BLOODFLOWER_DEF"):
			return "COMPOSITE_LOOTABLE_BLOODFLOWER_DEF";
		case joaat("COMPOSITE_LOOTABLE_YARROW_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_YARROW_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_WINTERGREEN_BERRY_DEF"):
			return "COMPOSITE_LOOTABLE_WINTERGREEN_BERRY_DEF";
		case joaat("COMPOSITE_LOOTABLE_CARDINAL_FLOWER_DEF"):
			return "COMPOSITE_LOOTABLE_CARDINAL_FLOWER_DEF";
		case joaat("COMPOSITE_LOOTABLE_COMMON_BULRUSH_DEF"):
			return "COMPOSITE_LOOTABLE_COMMON_BULRUSH_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_SLIPPER_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_LADY_SLIPPER_DEF";
		case joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF"):
			return "COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_RHUBARB_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_RHUBARB_DEF";
		case joaat("COMPOSITE_LOOTABLE_YARROW_DEF"):
			return "COMPOSITE_LOOTABLE_YARROW_DEF";
		case joaat("COMPOSITE_LOOTABLE_DUCK_EGG_5_DEF"):
			return "COMPOSITE_LOOTABLE_DUCK_EGG_5_DEF";
		case joaat("COMPOSITE_LOOTABLE_RED_RASPBERRY_DEF"):
			return "COMPOSITE_LOOTABLE_RED_RASPBERRY_DEF";
		case joaat("COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_DEF"):
			return "COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_DEF";
		case joaat("COMPOSITE_LOOTABLE_GATOR_EGG_3_DEF"):
			return "COMPOSITE_LOOTABLE_GATOR_EGG_3_DEF";
		case joaat("COMPOSITE_LOOTABLE_BLACK_BERRY_DEF"):
			return "COMPOSITE_LOOTABLE_BLACK_BERRY_DEF";
		case joaat("COMPOSITE_LOOTABLE_PRAIRIE_POPPY_DEF"):
			return "COMPOSITE_LOOTABLE_PRAIRIE_POPPY_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_CARROT_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_CARROT_DEF";
		case joaat("COMPOSITE_LOOTABLE_BITTERWEED_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_BITTERWEED_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_CIGAR_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_CIGAR_DEF";
		case joaat("COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_DEF"):
			return "COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_RAT_TAIL_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_RAT_TAIL_DEF";
		case joaat("COMPOSITE_LOOTABLE_RED_SAGE_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_RED_SAGE_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_AGARITA_DEF"):
			return "COMPOSITE_LOOTABLE_AGARITA_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_VANILLA_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_VANILLA_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_MOCCASIN_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_MOCCASIN_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_VANILLA_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_VANILLA_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_MINT_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_MINT_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_BLACK_CURRANT_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_BLACK_CURRANT_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_CHANTERELLES_DEF"):
			return "COMPOSITE_LOOTABLE_CHANTERELLES_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_NIGHT_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_LADY_NIGHT_DEF";
		case joaat("COMPOSITE_LOOTABLE_OREGANO_DEF"):
			return "COMPOSITE_LOOTABLE_OREGANO_DEF";
		case joaat("COMPOSITE_LOOTABLE_CREEPING_THYME_DEF"):
			return "COMPOSITE_LOOTABLE_CREEPING_THYME_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_CARROT_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_CARROT_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_GATOR_EGG_4_DEF"):
			return "COMPOSITE_LOOTABLE_GATOR_EGG_4_DEF";
		case joaat("COMPOSITE_LOOTABLE_CARDINAL_FLOWER_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_CARDINAL_FLOWER_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_DRAGONS_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_DRAGONS_DEF";
		case joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_BURDOCK_ROOT_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_PRAIRIE_POPPY_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_PRAIRIE_POPPY_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_OREGANO_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_OREGANO_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_VULTURE_EGG_VARIATION_01_DEF"):
			return "COMPOSITE_LOOTABLE_VULTURE_EGG_VARIATION_01_DEF";
		case joaat("COMPOSITE_LOOTABLE_CREEKPLUM_DEF"):
			return "COMPOSITE_LOOTABLE_CREEKPLUM_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_MINT_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_MINT_DEF";
		case joaat("COMPOSITE_LOOTABLE_WILD_RHUBARB_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_WILD_RHUBARB_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_COMMON_BULRUSH_INTERACTABLE_DEF"):
			return "COMPOSITE_LOOTABLE_COMMON_BULRUSH_INTERACTABLE_DEF";
		case joaat("COMPOSITE_LOOTABLE_ORCHID_SPIDER_DEF"):
			return "COMPOSITE_LOOTABLE_ORCHID_SPIDER_DEF";
		case joaat("COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_DEF"):
			return "COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_DEF";
		case joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF"):
			return "COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF";
		case joaat("COMPOSITE_LOOTABLE_MILKWEED_DEF"):
			return "COMPOSITE_LOOTABLE_MILKWEED_DEF";
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

bool func_78(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	bool bVar15;

	if (func_125() == 0)
	{
		DEBUG::_0x4423BBAB7EB2B96B(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: net_collectibles file does not exist");
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_125()))
	{
		DEBUG::_0x4423BBAB7EB2B96B(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: net_collectibles file not loaded");
		return false;
	}
	Var0 = func_125();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: found node at index - ", iVar14);
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: found model ", &uVar5, " at index - ", iVar14);
				bVar15 = MISC::GET_HASH_KEY(&uVar5);
				DEBUG::_0x4DC69742196F818A(168, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: checking model - ", func_24(bVar15, 0), " against model - ", iVar13);
				if (iVar13 == bVar15)
				{
					DEBUG::_0xF0783374333FD8CE(40, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: the models match - ", func_24(bVar15, 0));
					return true;
				}
			}
		}
		iVar14++;
	}
	DEBUG::_0xF0783374333FD8CE(136, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: entity with model ", iVar13, " is not set up as a dirt pile in net_collectibles.xml");
	return false;
}

var func_79(int iParam0, int iParam1)
{
	return func_80(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

var func_80(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - Not online.  This will return nothing now.");
		return uVar0;
	}
	if (func_126() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return just you at bit index ", iVar1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return nothing.");
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275959.f_10;
	iVar6 = Global_1275959.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_127());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_127());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_127());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_128(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - k_iNET_PQFLAG_PARTICIPANT but this thread is not a networked script.  Clearing k_iNET_PQFLAG_PARTICIPANT and setting NET_PQFLAG_ACTIVE_PLAYERS.");
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275959.f_154[iVar2]))
		{
			iVar10 = Global_1275959.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_129(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1275959.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_130(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_131(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

void func_81(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 32, "BROADCAST_TICKER_EVENT - playerflags = 0 so not broadcasting");
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_132(&(Global_1072032.f_23083), Var0);
				DEBUG::_0x1B08D1EB9D8C4931(40, 32, "BROADCAST_TICKER_EVENT - storing message - ", func_133(Param0.f_4));
				return;
			}
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 32, "BROADCAST_TICKER_EVENT - broadcasting - ", func_133(Param0.f_4));
	DEBUG::_0x1B08D1EB9D8C4931(8, 32, "structTickerEventData.eventDetails.timeStamp = ", Param0.f_2);
	DEBUG::_0x1B08D1EB9D8C4931(8, 32, "structTickerEventData.playerID                = ", Param0.f_14);
	DEBUG::_0x1B08D1EB9D8C4931(40, 32, "structTickerEventData.playerID Name           = ", func_134(Param0.f_14));
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_82(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x179A6F0EE2E79026(uParam1))
	{
		uParam0->f_1 = Global_1275959.f_154[Global_1275959];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 18, uParam1);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "[NET_COLLECTIBLES__DIG_COMPLETE] event was not broadcast, iPlayerBits was 0");
	}
}

bool func_83(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_135(*uParam0, 0f, 0f, 0f))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "FIND_GROUND_INTERSECTION_FROM_WORLD_COORDS: vProbe is <<0,0,0>>, returning vProbe");
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing higher coords - ", &vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &sVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing higher coords - ", &vVar4);
		}
		else
		{
			bVar2 = true;
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: couldn't find probe while going up");
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing lower coords - ", &vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &sVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
				DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: lower coords down - ", &vVar4);
			}
			else
			{
				bVar3 = true;
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: couldn't find probe while going down");
			}
		}
	}
	else
	{
		uParam0->f_2 = sVar0;
		DEBUG::_0x1B08D1EB9D8C4931(24, 0, "FIND_GROUND_INTERSECTION: fGroundZ - ", sVar0);
		return true;
	}
	if (bVar2 && bVar3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: ran out of iters, returning vProbe");
		return false;
	}
	uParam0->f_2 = sVar0;
	DEBUG::_0x1B08D1EB9D8C4931(24, 0, "FIND_GROUND_INTERSECTION: fGroundZ - ", sVar0);
	return true;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	DEBUG::_0xA308F935BDECCEC0(8, 0, "FIND_OBJECTS_IN_VOLUME: Get entities in area returned a count of: ", iVar6);
	if (iVar6 >= iParam3)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "FIND_OBJECTS_IN_VOLUME: We found more entities in area than our max count.. some entities might be left out");
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if ((*iParam1)[iVar5] == 0)
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*iParam1)[iVar5])
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_85(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
		DEBUG::_0x4DC69742196F818A(8, 87, "Deleting volume ");
	}
}

void func_86(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	DEBUG::_0xA308F935BDECCEC0(8, 215, "[NET_COLLECTIBLES__GIVE_COLLECTIBLE_TO_GANG_MEMBERS] Sending initiate dig event. ");
	if (iParam2 == 0)
	{
		iParam2 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	}
	if (!GANG::_0xD6F6ACF4392187FB(iParam2))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "NET_COLLECTIBLES__GIVE_COLLECTIBLE_TO_GANG_MEMBERS: Invalid Gang ID.");
	}
	uVar0 = func_136(iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&uVar0, PLAYER::PLAYER_ID());
	Var1.f_4 = 1;
	Var1 = 41;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1275959.f_154[Global_1275959];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_81(Var8, func_80(Global_34, 0f, 0f, 0f, 300f, 300f, 300f, joaat("VOLSPHERE"), 0, 8), 0, 0);
	func_82(&Var1, &uVar0);
}

void func_87(var uParam0)
{
	func_56(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_137() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_56(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_56(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_88(int* iParam0, bool bParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_138(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_2539 < 20)
	{
		Global_1272425.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_2539.f_1[iVar0 /*22*/] = { Global_1272425.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *iParam0 };
	Var1.f_4 = bParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1272425.f_2539.f_1[(Global_1272425.f_2539 - 1) /*22*/] = { Var1 };
	DEBUG::_0xA308F935BDECCEC0(40, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA - Added transaction data for: ", SCRIPTS::_NET_RPC_GUID_TO_STRING(iParam0));
	DEBUG::_0x4DC69742196F818A(2696, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eLootTable:                     ", Var1.f_4, " (", func_20(Var1.f_4, 0), ")");
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eStatus:                        ", func_139(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.iNumConditionals:  ", Var1.f_7.f_3);
}

int func_89(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_90(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

var func_91(bool bParam0, int iParam1)
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

void func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_93(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_140(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_95(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_141(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_142(iParam0, 0));
		return false;
	}
	if (func_143(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_142(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_144(iParam0, 1)) || func_145(32768))
	{
		if (!func_144(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_146())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_94(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_95(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

struct<4> func_96(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_147(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_99(joaat("CHARACTER"), func_148(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_99(joaat("CHARACTER"), func_148(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_99(joaat("CHARACTER"), func_148(), -1591664384, bParam0);
}

int func_97(bool bParam0)
{
	vector3 vVar0;

	if (!func_110(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

char* func_98(int iParam0, int iParam1)
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

struct<4> func_99(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_110(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_91(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_147(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_100(bool bParam0)
{
	int iVar0;

	iVar0 = func_147(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_99(923904168, func_96(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_99(923904168, func_96(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_99(923904168, func_96(bParam0), -740156546, 0);
}

bool func_101(bool bParam0, bool bParam1)
{
	if (func_105(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_149();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_102(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_116(bParam0, *uParam1, iParam2, bParam3, 1, bParam4) > 0;
}

bool func_103(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_150(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_104(bool bParam0)
{
	int iVar0;

	iVar0 = func_147(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_99(271701509, func_96(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_99(271701509, func_96(bParam0), 12999093, 0);
}

int func_105(bool bParam0)
{
	struct<2> Var0;

	if (!func_110(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_106(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_105(bParam0);
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
			if (func_151(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_107(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_152(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_108(bool bParam0, int iParam1)
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

int func_109(bool bParam0)
{
	if (!func_110(*bParam0, 0))
	{
		return 0;
	}
	if (!func_153(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			DEBUG::_0x83407B92D46F25C3(8, 158, "[GET_ITEM_WITHIN_ITEM_PACKAGING] Packaged item not found.");
			return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 158, "[GET_ITEM_WITHIN_ITEM_PACKAGING] Found packaged item: ", func_91(*bParam0, 0));
	return 1;
}

bool func_110(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_111(bool bParam0)
{
	return bParam0;
}

bool func_112(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

int func_113(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_112(func_111(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

bool func_114(bool bParam0)
{
	return func_97(bParam0) == joaat("WEAPON");
}

int func_115(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_110(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - Attempting to check for an invalid item in the player's inventory!");
		if (func_112(func_111(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_97(bParam0) == joaat("FEE"))
	{
		return -1;
	}
	DEBUG::_0x1B08D1EB9D8C4931(567976, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - eInventoryItem: ", func_91(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(iParam1), " eSlot: ", func_108(iParam1->f_4, 0), " bCurrentSlotOnly: ", bParam2, " bPlayerOnly: ", bParam3);
	if (!bParam2 && func_113(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - ", func_91(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, iParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_147(bParam3), bParam0);
}

int func_116(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_110(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_113(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_91(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_91(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_108(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_99(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_91(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_147(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_91(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_147(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_91(bParam0, 0));
	}
	return iVar0;
}

int func_117(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_110(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_91(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_97(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_154(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_155(bParam0, 0);
	}
	if (func_113(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_147(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_156(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_91(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_147(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_91(bParam0, 0));
	return iVar0;
}

bool func_118(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

bool func_119()
{
	return func_157() != -1;
}

bool func_120()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_121(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_124() - fParam1);
	func_158(uParam0, 1);
	func_159(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_122(var uParam0)
{
	return func_160(*uParam0, 1);
}

bool func_123(var uParam0)
{
	return func_160(*uParam0, 2);
}

float func_124()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_125()
{
	return Global_1072032.f_28503[47 /*4*/].f_3;
}

int func_126()
{
	return Global_1051590.f_12;
}

char* func_127()
{
	return "unnamed";
}

int func_128(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_129(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_161(36, iParam0);
}

int func_130(int iParam0)
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

bool func_131(char* sParam0)
{
	if (func_162(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_163(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

int func_132(var uParam0, struct<21> Param1)
{
	if (!func_164(uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 32, "DELAYED_TICKER_MESSAGES__PUSH_MESSAGE - Queue is full. Allocate more space.");
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

char* func_133(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "TICKER_EVENT_JOINED_DEFAULT";
			break;
		case 2:
			sVar0 = "TICKER_EVENT_VERSUS_NORMAL";
			break;
		case 3:
			sVar0 = "TICKER_EVENT_VERSUS_TEAMKILL";
			break;
		case 4:
			sVar0 = "TICKER_EVENT_VERSUS_SUICIDE";
			break;
		case 6:
			sVar0 = "TICKER_EVENT_VERSUS_INCAPACITATED";
			break;
		case 7:
			sVar0 = "TICKER_EVENT_VERSUS_INCAPACITATED_EXECUTION";
			break;
		case 8:
			sVar0 = "TICKER_EVENT_INCAPACITATION_REVIVE";
			break;
		case 9:
			sVar0 = "TICKER_EVENT_INCAPACITATION_SELF_REVIVE";
			break;
		case 10:
			sVar0 = "TICKER_EVENT_MONEYBAG_PICKUP";
			break;
		case 11:
			sVar0 = "TICKER_EVENT_MONEYBAG_DROPPED";
			break;
		case 12:
			sVar0 = "TICKER_EVENT_INVITE_RECEIVED";
			break;
		case 13:
			sVar0 = "TICKER_EVENT_J_SKIP";
			break;
		case 14:
			sVar0 = "TICKER_EVENT_P_SKIP";
			break;
		case 15:
			sVar0 = "TICKER_EVENT_F_SKIP";
			break;
		case 16:
			sVar0 = "TICKER_EVENT_S_SKIP";
			break;
		case 17:
			sVar0 = "TICKER_EVENT_MISSION_TIMER_SKIP";
			break;
		case 18:
			sVar0 = "TICKER_EVENT_TIME_SKIP";
			break;
		case 19:
			sVar0 = "TICKER_EVENT_WEATHER";
			break;
		case 20:
			sVar0 = "TICKER_EVENT_INVULNERABLE";
			break;
		case 21:
			sVar0 = "TICKER_EVENT_VULNERABLE";
			break;
		case 22:
			sVar0 = "TICKER_EVENT_WEAPONS";
			break;
		case 23:
			sVar0 = "TICKER_EVENT_CHEAT_XP_PLUS";
			break;
		case 24:
			sVar0 = "TICKER_EVENT_CHEAT_XP_MINUS";
			break;
		case 25:
			sVar0 = "TICKER_EVENT_CHEAT_MONEY";
			break;
		case 26:
			sVar0 = "TICKER_EVENT_CHEAT_HONOR_PLUS";
			break;
		case 27:
			sVar0 = "TICKER_EVENT_CHEAT_HONOR_MINUS";
			break;
		case 28:
			sVar0 = "TICKER_EVENT_CHEAT_WARP";
			break;
		case 29:
			sVar0 = "TICKER_EVENT_CHEAT_DEADEYE";
			break;
		case 30:
			sVar0 = "TICKER_EVENT_CHEAT_INFINITE_DEADEYE";
			break;
		case 36:
			sVar0 = "TICKER_EVENT_CHEAT_DISABLE_INFINITE_DEADEYE";
			break;
		case 31:
			sVar0 = "TICKER_EVENT_CHEAT_INFINITE_STAMINA";
			break;
		case 35:
			sVar0 = "TICKER_EVENT_CHEAT_DISABLE_INFINITE_STAMINA";
			break;
		case 32:
			sVar0 = "TICKER_EVENT_CHEAT_REFILL_RPG_CORES";
			break;
		case 33:
			sVar0 = "TICKER_EVENT_CHEAT_REFILL_RPG_TANKS";
			break;
		case 34:
			sVar0 = "TICKER_EVENT_CHEAT_OVERPOWER_RPG_CORES";
			break;
		case 37:
			sVar0 = "TICKER_EVENT_CHEAT_DEADEYE_REMOVE_ALL";
			break;
		case 38:
			sVar0 = "TICKER_EVENT_CHEAT_HEALTH";
			break;
		case 39:
			sVar0 = "TICKER_EVENT_CHEAT_VEHICLE";
			break;
		case 44:
			sVar0 = "TICKER_EVENT_NET_UNLOCK";
			break;
		case 45:
			sVar0 = "TICKER_EVENT_PERSONA_LEVEL_UP";
			break;
		case 46:
			sVar0 = "TICKER_EVENT_GANG_INVITE";
			break;
		case 47:
			sVar0 = "TICKER_EVENT_GANG_REQUEST";
			break;
		case 48:
			sVar0 = "TICKER_EVENT_GANG_JOINED";
			break;
		case 50:
			sVar0 = "TICKER_EVENT_GANG_KICKED";
			break;
		case 51:
			sVar0 = "TICKER_EVENT_GANG_LEFT";
			break;
		case 52:
			sVar0 = "TICKER_EVENT_GANG_STARTED";
			break;
		case 60:
			sVar0 = "TICKER_EVENT_GANG_ON_MISSION";
			break;
		case 53:
			sVar0 = "TICKER_EVENT_GANG_CAMP_PLACED";
			break;
		case 54:
			sVar0 = "TICKER_EVENT_GANG_CAMP_FAIL";
			break;
		case 55:
			sVar0 = "TICKER_EVENT_GANG_CAMP_READY";
			break;
		case 57:
			sVar0 = "TICKER_EVENT_GANG_CAMP_SEARCH";
			break;
		case 56:
			sVar0 = "TICKER_EVENT_GANG_CAMP_ATTEMPT";
			break;
		case 58:
			sVar0 = "TICKER_EVENT_GANG_CAMP_SHUTDOWN";
			break;
		case 61:
			sVar0 = "TICKER_EVENT_P_POSSE_START";
			break;
		case 62:
			sVar0 = "TICKER_EVENT_P_POSSE_FAIL";
			break;
		case 63:
			sVar0 = "TICKER_EVENT_P_POSSE_JOIN";
			break;
		case 64:
			sVar0 = "TICKER_EVENT_P_POSSE_LEAVE";
			break;
		case 65:
			sVar0 = "TICKER_EVENT_P_POSSE_PROMOTED";
			break;
		case 66:
			sVar0 = "TICKER_EVENT_P_POSSE_DEMOTED";
			break;
		case 68:
			sVar0 = "TICKER_EVENT_STORY_MISSION_INVITE_RECEIVED";
			break;
		case 71:
			sVar0 = "TICKER_EVENT_NET_GANG_BOUNTY_TURNIN";
			break;
		case 94:
			sVar0 = "TICKER_EVENT_PLAYER_FORCE_DEBUG_WARP";
			break;
		case 72:
			sVar0 = "TICKER_EVENT_VS_MISSION_INVITE";
			break;
		case 73:
			sVar0 = "TICKER_EVENT_VS_MISSION_FAILED_TO_JOIN";
			break;
		case 74:
			sVar0 = "TICKER_EVENT_VS_MISSION_REQUEST_TO_LEADER";
			break;
		case 75:
			sVar0 = "TICKER_EVENT_VS_MISSION_FORCE_JOIN";
			break;
		case 76:
			sVar0 = "TICKER_EVENT_VS_MISSION_FORCE_LEAVE_FULL";
			break;
		case 77:
			sVar0 = "TICKER_EVENT_VS_MISSION_FORCE_REMOVE_INVITE";
			break;
		case 78:
			sVar0 = "TICKER_EVENT_IN_WORLD_DEATHMATCH_1V1";
			break;
		case 79:
			sVar0 = "TICKER_EVENT_IN_WORLD_DEATHMATCH_POSSE_V_POSSE";
			break;
		case 81:
			sVar0 = "TICKER_EVENT_IN_WORLD_DEATHMATCH_POSSE_FEUD";
			break;
		case 80:
			sVar0 = "TICKER_EVENT_IN_WORLD_DEATHMATCH_POSSE_LEADER_FEUD";
			break;
		case 83:
			sVar0 = "TICKER_EVENT_IN_WORLD_DEATHMATCH_POSSE_FEUD_MEMBERS";
			break;
		case 84:
			sVar0 = "TICKER_EVENT_IN_WORLD_DEATHMATCH_POSSE_LEADER_FEUD_MEMBERS";
			break;
		case 82:
			sVar0 = "TICKER_EVENT_IN_WORLD_DEATHMATCH_POSSE_INFIGHTING";
			break;
		case 92:
			sVar0 = "TICKER_EVENT_HUNTSMEN_PRISTINE_SKIN_FOUND";
			break;
		case 93:
			sVar0 = "TICKER_EVENT_CONVOY_ROBBERY_TURN_IN";
			break;
		case 95:
			sVar0 = "TICKER_EVENT_ANIMAL_ATTACK_REWARD";
			break;
		case 96:
			sVar0 = "TICKER_EVENT_MINIGAME_INVITE";
			break;
		case 101:
			sVar0 = "TICKER_EVENT_SHOP_SPLIT_MONEY_WITH_POSSE";
			break;
		case 102:
			sVar0 = "TICKER_EVENT_PASSIVE_MODE_ENDED";
			break;
		case 108:
			sVar0 = "TICKER_EVENT_PLAYER_BOUNTY_PVP_MISSION_FAILED_TO_LAUNCH";
			break;
		case 112:
			sVar0 = "TICKER_EVENT_ABANDONED_LOOT_OPENED";
			break;
		case 103:
			sVar0 = "TICKER_EVENT_PRESSED_CHARGES";
			break;
		case 109:
			sVar0 = "TICKER_EVENT_PLAYER_FLAVORED_MOONSHINE";
			break;
		case 110:
			sVar0 = "TICKER_EVENT_PLAYER_KILLED_LEGENDARY_ANIMAL";
			break;
		case 111:
			sVar0 = "TICKER_EVENT_PLAYER_TRANQUILIZED_LEGENDARY_ANIMAL";
			break;
		default:
			sVar0 = "undefined";
			DEBUG::_0x9A6C65DDDBEC9C52(8, 161, "GET_STRING_FROM_TICKER_EVENTS received an undefined ticker - ", iParam0);
			break;
	}
	return sVar0;
}

char* func_134(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 36, "NET_PLAYER_STATUS_GET_PLAYER_NAME_FROM_PLAYER_ID - ", iVar0, " is out of range.");
		return "";
	}
	return func_165(iVar0);
}

bool func_135(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_136(int iParam0)
{
	struct<7> Var0[7];
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar51 = GANG::_0xD1BF325C8252A982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar52 /*7*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

int func_137()
{
	return Global_1953612.f_1;
}

bool func_138(int* iParam0)
{
	if (((*iParam0 == 0 && iParam0->f_1 == 0) && iParam0->f_2 == 0) && iParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "LOOT_STATUS_NONE";
		case 1:
			return "LOOT_STATUS_PENDING";
		case 2:
			return "LOOT_STATUS_SUCCEEDED";
		case 3:
			return "LOOT_STATUS_FAILED";
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

bool func_140(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_141(int iParam0)
{
	if (func_144(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_142(int iParam0, int iParam1)
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

bool func_143(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_142(iParam0, 0), " Seconds ", iVar2);
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

bool func_144(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_145(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_146()
{
	if (!func_166())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

int func_147(bool bParam0)
{
	if (func_1() == -1)
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

struct<4> func_148()
{
	struct<4> Var0;

	return Var0;
}

bool func_149()
{
	return (func_167(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_168(func_99(joaat("WARDROBE"), func_96(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_150(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_147(0);
	*iParam1 = { func_99(bParam0, func_100(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_91(bParam0, 0), " eSlot: ", func_108(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_91(bParam0, 0));
		return false;
	}
	return true;
}

bool func_151(bool bParam0, bool bParam1, bool bParam2)
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

bool func_152(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_147(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_91(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_108(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_153(bool bParam0)
{
	return func_169(bParam0, 1279601681);
}

bool func_154(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_110(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_91(bParam0, 0));
		return false;
	}
	iVar0 = func_97(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_169(bParam0, 1399091007))
	{
		func_170(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_91(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

char* func_155(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char* sVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_171(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_172(&Var0, func_100(0));
	}
	if (!func_173(&Var0, &iVar14, &sVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_91(bParam0, 0));
		return 0;
	}
	func_174(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", sVar15, " of item ", func_91(bParam0, 0));
	return sVar15;
}

struct<4> func_156(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_66(bParam0, bParam1, 0) };
	return func_99(bParam0, Var0, Var0.f_4, bParam1);
}

int func_157()
{
	return Global_1139425.f_137;
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_159(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_161(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_175(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_176())
	{
		return func_175(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_175(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_162(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_163(char* sParam0)
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
		func_177(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_178(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

bool func_164(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

char* func_165(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_161(40, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1102630.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102630.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(136, 36, "NET_PLAYER_STATUS_GET_PLAYER_NAME - ", iParam0, " is out of range.");
		return "";
	}
	sVar0 = "";
	if (!Global_1275959.f_22[iParam0])
	{
		return sVar0;
	}
	if (func_161(40, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1100880[iParam0 /*53*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1100880[iParam0 /*53*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1275959.f_154[iParam0]);
}

bool func_166()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_179(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_147(bParam1), bParam0, bParam3);
}

int func_168(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_180(&uParam0, bParam4, bParam5, iParam6);
}

int func_169(bool bParam0, bool bParam1)
{
	if (!func_110(bParam0, 0))
	{
		return func_181(func_111(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_182(bParam1, 0), " for item ", func_91(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

void func_170(bool bParam0, var uParam1, var uParam2)
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

struct<14> func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_91(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_108(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_108(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_108(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_183(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_98(iParam6, 0));
	}
	return Var0;
}

void func_172(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_173(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_147(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *bParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

int func_174(int iParam0)
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

bool func_175(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_176()
{
	return Global_1102630.f_3672;
}

void func_177(char* sParam0)
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
	func_178(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_178(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_179(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_180(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_184(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_91(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

int func_181(bool bParam0, bool bParam1)
{
	if (!func_112(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_182(bParam1, 0), " for bundle ", func_185(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_182(bool bParam0, int iParam1)
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

var func_183(bool bParam0, int iParam1)
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

bool func_184(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_147(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_108(bParam1, 0));
		return false;
	}
	if (!func_152(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_108(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_91(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_108(bParam1, 0));
	return true;
}

var func_185(bool bParam0, int iParam1)
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

