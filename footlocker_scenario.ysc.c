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
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<165> Local_23 = { 0, 0, 10, 0, 0, 0, 0, 0, -1, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_188 = { 0f, 1f, 0f };
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	bool bLocal_193 = false;
	bool bLocal_194 = false;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	var uLocal_197[2] = { 0, 0 };
	var uLocal_200[2] = { 0, 0 };
	char* sLocal_203 = NULL;
	int iLocal_204 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	iLocal_13 = 1;
	fLocal_18 = 1f;
	fLocal_19 = 1f;
	iLocal_22 = -1;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	bLocal_17 = vScriptParam_0.z;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_16))
	{
		vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true) };
	}
	func_1();
	DEBUG::_0xF0783374333FD8CE(764040, 164, "SCENARIO START - m_iScriptUID = ", iLocal_15, " m_thisScenario = ", iLocal_16, " m_scenarioType = ", func_2(bLocal_17, 0), " coords ", &vVar0, " - thread - ", SCRIPTS::GET_ID_OF_THIS_THREAD());
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_4())
	{
		func_5();
		func_6();
		func_7();
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1()
{
}

var func_2(bool bParam0, int iParam1)
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

void func_3()
{
	func_8();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_4()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 0, "GENERIC_SCENARIO_SHOULD_RUN - m_iChildScriptHash = ", iLocal_14, " cannot shutdown - thread - ", SCRIPTS::GET_ID_OF_THIS_THREAD());
			return true;
		}
	}
	return iLocal_13;
}

void func_5()
{
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_10(iVar0);
				break;
			case -456923784:
				func_11(iVar0);
				break;
			case -843555838:
				func_12(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_7()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_33))
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_196 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
	{
		bLocal_196 = true;
	}
	sLocal_203 = "scenario@MECH@PLAYER_OPEN_MISCCHEST@EXIT";
	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_5))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "getting footlocker entity");
		bLocal_193 = true;
		Local_23.f_6 = iLocal_16;
		Local_23.f_5 = func_13();
	}
	switch (iLocal_204)
	{
		case 0:
			DEBUG::_0x4DC69742196F818A(8, 164, "Footlocker init");
			if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_5))
			{
				func_14(&Local_23);
				func_15(Local_23.f_5);
				Local_23.f_3 = !func_16(Local_23.f_5);
				Local_23.f_1 = ENTITY::GET_ENTITY_MODEL(Local_23.f_5);
				vLocal_188.f_2 = 0.122f;
				vLocal_188.f_1 = 0.736f;
				func_17(&Local_23);
				Local_23.f_12[0] = func_18();
				if (Local_23.f_12[0] == 0)
				{
					DEBUG::_0x4DC69742196F818A(8, 164, "No item in footlocker");
					iLocal_204 = 3;
				}
				else
				{
					Local_23.f_12[1] = func_19();
					func_20();
					iLocal_204 = 1;
				}
			}
			break;
		case 1:
			if (Local_23.f_12[1] == 0)
			{
				if (iLocal_22 < 0)
				{
					iLocal_22 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_203, 0, 0, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_22);
				}
			}
			if (bLocal_193)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_22(&(uLocal_197[iVar0]), &Local_23, iVar0, &(uLocal_200[iVar0]), func_21(iVar0), 0, 1, 1, 0);
					iVar0++;
				}
			}
			if (uLocal_197[0] >= 2 && uLocal_197[1] >= 2)
			{
				iLocal_204 = 2;
			}
			break;
		case 2:
			if (bLocal_193)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_22(&(uLocal_197[iVar0]), &Local_23, iVar0, &(uLocal_200[iVar0]), func_21(iVar0), 0, 1, 0, 0);
					iVar0++;
				}
			}
			if (uLocal_197[0] == 4 && uLocal_197[1] == 4)
			{
				iLocal_204 = 3;
			}
			break;
		case 3:
			break;
	}
	if (!bLocal_194 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_188.x))
	{
		func_23(&vLocal_188, &bLocal_195, &bLocal_194);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1755159785))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "SearchStart");
		if (!bLocal_195)
		{
			vLocal_188.x = TASK::_0x2C497BDEF897C6DF(Global_33);
			bLocal_195 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2072536589))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "LootSound");
		if (iLocal_21 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[0]))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_33, Local_23.f_26[0]);
			}
		}
		else if (iLocal_21 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[1]))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_33, Local_23.f_26[1]);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("OBJECTEXCHANGE")))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "ObjectExchange");
		iLocal_21++;
		if (iLocal_21 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[0]))
			{
				func_24(uLocal_200[0], 0, 1);
				OBJECT::DELETE_OBJECT(&(uLocal_200[0]));
				func_25(&(Local_23.f_23), 2, 0, 752097756);
			}
		}
		else if (iLocal_21 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[1]))
			{
				func_24(uLocal_200[1], 0, 1);
				OBJECT::DELETE_OBJECT(&(uLocal_200[1]));
				func_25(&(Local_23.f_26), 10, 0, 752097756);
			}
			bLocal_194 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 266921527))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "CriticalFrame");
		if (Local_23.f_12[1] == 0)
		{
			TASK::_0xD999E379265A4501(Global_33, sLocal_203, 0);
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
			bLocal_194 = true;
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "Not using scenario");
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		iLocal_13 = 0;
		bLocal_194 = true;
	}
}

void func_8()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 164, "CUSTOM_CLEANUP");
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_5))
	{
		if (bLocal_196)
		{
			if (!func_26(Local_23.f_5))
			{
				func_27(Local_23.f_5);
			}
		}
		else
		{
			func_28(&Local_23);
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_29(&(uLocal_200[iVar0]), bLocal_196);
		iVar0++;
	}
}

void func_9()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_30(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_31(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_32(&iVar0);
	}
}

int func_13()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!PED::IS_PED_INJURED(Global_33))
	{
		iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 164, "looking for entity");
				iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 164, "looking for scenario prop");
				iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(iVar1, "PROP");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 164, "looking for ped prop");
				iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_33, "PROP", 1);
			}
		}
	}
	return iVar0;
}

void func_14(var uParam0)
{
	int iVar0;

	DEBUG::_0x4DC69742196F818A(8, 164, "INIT_SCRIPTED_LOOT_OVERRIDES");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_103[iVar0 /*5*/] = -1;
		uParam0->f_103[iVar0 /*5*/].f_3 = 0;
		uParam0->f_103[iVar0 /*5*/].f_1 = 0;
		uParam0->f_103[iVar0 /*5*/].f_2 = 0f;
		uParam0->f_103[iVar0 /*5*/].f_4 = 0;
		uParam0->f_154[iVar0] = -1;
		iVar0++;
	}
}

void func_15(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = OBJECT::_0x250EBB11E81A10BE(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_33(OBJECT::_0x2BF1953C0C21AC88(iVar0), 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
		return;
	}
	OBJECT::_0x7D4411D6736CD295(iVar0, &Var1);
	if (Var1 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_money", Var1);
	}
	if (Var1.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", Var1.f_1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", Var1.f_2);
	}
	if (Var1.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", Var1.f_3);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", Var1.f_4);
	}
	if (Var1.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", Var1.f_5);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", Var1.f_6);
	}
	if (Var1.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", Var1.f_7);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", Var1.f_8);
	}
	if (Var1.f_9 != 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", Var1.f_9);
	}
}

bool func_16(int iParam0)
{
	if ((((((((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 147, "Entity is using scripted loot.");
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 147, "Entity is not using scripted loot");
	return true;
}

void func_17(var uParam0)
{
	struct<13> Var0;
	int iVar23;
	int iVar24;
	int iVar25;

	DEBUG::_0x4DC69742196F818A(8, 164, "Getting items from loot table");
	if (uParam0->f_3 && func_34(uParam0->f_5))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "Container scripted empty");
		return;
	}
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!func_35(uParam0->f_5))
	{
		MISC::_0x48E4D50F87A96AA5(*uParam0, 1, 1, uParam0->f_1, &Var0, 0);
	}
	DEBUG::_0x4DC69742196F818A(8, 164, "Number of items: ", Var0);
	if (Var0 <= 0 && !uParam0->f_3)
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "Container empty");
		return;
	}
	if (uParam0->f_3)
	{
		func_36(uParam0, &Var0, 10);
	}
	if (uParam0->f_2 > 10)
	{
		uParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < uParam0->f_2)
	{
		uParam0->f_26[iVar23] = Var0.f_1[iVar23];
		DEBUG::_0x4DC69742196F818A(40, 164, " SATCHEL ITEM: ", func_37(uParam0->f_26[iVar23], 0));
		if (uParam0->f_103[iVar23 /*5*/].f_4 != 0)
		{
			uParam0->f_12[iVar23] = uParam0->f_103[iVar23 /*5*/].f_4;
			iVar25++;
		}
		else
		{
			iVar24 = TASK::_0xE47DD64B9F02677D(Var0.f_1[iVar23]);
			if (iVar24 == 0 && uParam0->f_26[iVar23] != 0)
			{
				uParam0->f_12[iVar23] = joaat("SCRIPTEDBALL");
			}
			else
			{
				uParam0->f_12[iVar23] = iVar24;
				iVar25++;
			}
		}
		iVar23++;
	}
	if (iVar25 > 0)
	{
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(iVar25);
	}
}

int func_18()
{
	int iVar0;

	if (func_38(&(Local_23.f_6)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "GET_FIRST_ITEM - IS_CHEST_LOOT_UNIQUE = TRUE");
		iVar0 = func_39(Local_23, &(Local_23.f_26[0]));
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "IS_CHEST_LOOT_UNIQUE = FALSE");
		iVar0 = func_40(&Local_23, &(Local_23.f_26[0]), 0);
	}
	return iVar0;
}

int func_19()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 157, "GET_SECOND_ITEM - IS_CHEST_LOOT_UNIQUE = FALSE");
	iVar0 = func_40(&Local_23, &(Local_23.f_26[1]), 1);
	return iVar0;
}

void func_20()
{
	Local_23.f_37[0 /*3*/] = { -0.0131f, 0.052f, 0.0977f };
	Local_23.f_68[0 /*3*/] = { 0f, 0f, -12.264f };
	Local_23.f_37[1 /*3*/] = { 0.1751f, -0.0163f, 0.1059f };
	Local_23.f_68[1 /*3*/] = { 0f, 0f, -52.5738f };
}

char[] func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OBJECT1";
		case 1:
			return "OBJECT2";
		default:
			break;
	}
	return "";
}

void func_22(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	char* sVar6;
	int iVar7;

	switch (*uParam0)
	{
		case 0:
			DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_REQUEST");
			if (uParam1->f_12[iParam2] != 0)
			{
				STREAMING::REQUEST_MODEL(uParam1->f_12[iParam2], false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_WAIT");
			if (STREAMING::HAS_MODEL_LOADED(uParam1->f_12[iParam2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (uParam1->f_154[iParam2] != -1)
					{
						vVar3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam1->f_5, uParam1->f_154[iParam2]) };
						DEBUG::_0x4DC69742196F818A(648, 164, "ITEM_WAIT -- Entity bone ", uParam1->f_154[iParam2], " is located at ", MISC::_0x6C4DBF553885F9EB(vVar3));
						vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(uParam1->f_5), uParam1->f_37[iParam2 /*3*/]) };
					}
					else
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_5, uParam1->f_37[iParam2 /*3*/]) };
						DEBUG::_0x4DC69742196F818A(56, 164, "ITEM_WAIT -- Bone not specified, using offset of ", &(uParam1->f_37[iParam2 /*3*/]));
					}
				}
				else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam1->f_6))
				{
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(uParam1->f_6, true), TASK::_GET_SCENARIO_POINT_HEADING(uParam1->f_6, true), uParam1->f_37[iParam2 /*3*/]) };
				}
				else
				{
					DEBUG::_0xD9911C7B5F8CD69C(8, 164, "ITEM_WAIT -- No entity or scenario point provided");
				}
				else
				{
					DEBUG::_0x4DC69742196F818A(40, 164, "ITEM_WAIT -- Creating item at: ", MISC::_0x6C4DBF553885F9EB(vVar0));
					*uParam3 = OBJECT::CREATE_OBJECT(uParam1->f_12[iParam2], vVar0, func_41(&(uParam1->f_5)), true, false, false, bParam5);
					func_42(uParam1, uParam3, uParam1->f_12[iParam2], uParam1->f_26[iParam2]);
					ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
					OBJECT::_0x1461DF6DB886BE3F(*uParam3);
					if (bParam6)
					{
						sVar6 = func_43(uParam1->f_4, uParam1->f_154[iParam2], 0);
						DEBUG::_0x4DC69742196F818A(8, 164, "Attaching loot to bone: ", sVar6);
						vVar0 = { func_44(uParam1->f_4, uParam1->f_37[iParam2 /*3*/], ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam1->f_5, vVar0)) };
						DEBUG::_0x4DC69742196F818A(40, 164, "ITEM_WAIT -- Adjusting item position to: ", MISC::_0x6C4DBF553885F9EB(vVar0));
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam3, uParam1->f_5, sVar6, vVar0, uParam1->f_68[iParam2 /*3*/], false, false, false, false, 2, true, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_ROTATION(*uParam3, uParam1->f_68[iParam2 /*3*/], 2, true);
					}
					DEBUG::_0x4DC69742196F818A(8, 164, "Item created");
					*uParam0 = 2;
					Jump @638; //curOff = 589
					if (bParam8)
					{
						DEBUG::_0x4DC69742196F818A(8, 164, "waiting on model with hash: ", uParam1->f_12[iParam2]);
					}
					else
					{
						DEBUG::_0x4DC69742196F818A(8, 164, "waiting on model with hash: ", uParam1->f_12[iParam2]);
					}
					Jump @919; //curOff = 638
					if (!bParam7)
					{
						DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_ASSOCIATE");
						if (uParam1->f_26[iParam2] != 0)
						{
							iVar7 = 3;
						}
						else
						{
							iVar7 = 4;
						}
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
						{
							DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_DONE -- no name to associate!");
							*uParam0 = iVar7;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
						{
							DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_DONE -- no object exists!");
							*uParam0 = iVar7;
						}
						else if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam1->f_6))
						{
							DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_DONE -- no scenario exists!");
							*uParam0 = iVar7;
						}
						else if (TASK::_0x8360C47380B6F351(uParam1->f_6, *uParam3, sParam4, 1))
						{
							DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_DONE");
							*uParam0 = iVar7;
						}
						else if (bParam8)
						{
							DEBUG::_0x4DC69742196F818A(8, 164, "ITEM_DONE -- forced exit!");
							*uParam0 = iVar7;
						}
					}
					Jump @919; //curOff = 825
					if (uParam1->f_26[iParam2] != 0)
					{
						DEBUG::_0x4DC69742196F818A(10888, 164, "ITEM_ASSOCIATE -- Overriding model hash ", uParam1->f_12[iParam2], " (", UNK_0x1B7C373FB4E76B85(uParam1->f_12[iParam2]), ") to give ", func_37(uParam1->f_26[iParam2], 0));
						TASK::_0xA6A76D666A281F2D(*uParam3, uParam1->f_26[iParam2]);
						*uParam0 = 4;
					}
				}
			}
			default:
				break;
	}
}

void func_23(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 164, "SET_PROGRESS -- No anim scene");
		return;
	}
	if (*bParam1)
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam0);
		fVar1 = ((fVar0 - iParam0->f_2) / (iParam0->f_1 - iParam0->f_2));
		if (fVar1 >= 0f)
		{
			iParam0->f_3 = fVar1;
		}
		if (iParam0->f_3 >= 1f && !*bParam2)
		{
			*bParam2 = 1;
		}
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
		{
			iParam0->f_4 = iParam0->f_3;
		}
	}
}

void func_24(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_25(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (func_45((*uParam0)[iVar0], 0))
		{
			func_46((*uParam0)[iVar0], 1, bParam2, 0, 0, iParam3, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

bool func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return false;
}

void func_27(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 164, "CHEST_MARK_AS_OPEN");
		DECORATOR::DECOR_SET_BOOL(iParam0, "chest_open", true);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_48(func_47(joaat("CHESTS_LOOTED")), 1);
	}
	else
	{
		func_48(func_47(joaat("CHESTS_SEARCHED")), 1);
	}
}

void func_28(var uParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x4DC69742196F818A(8, 164, "RESTORE_SCRIPTED_LOOT_OVERRIDES");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_5);
		switch (uParam0->f_103[iVar0 /*5*/])
		{
			case 0:
				func_49(0, 0f, 0f, 0f, &iVar1, uParam0->f_103[iVar0 /*5*/].f_2, 0, 0);
				break;
			case 2:
				func_51(0, 0f, 0f, 0f, &iVar1, WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(func_50(uParam0->f_103[iVar0 /*5*/].f_3, 1)), 0, 0, 0);
				break;
			case 3:
				func_53(0, 0f, 0f, 0f, &iVar1, func_52(uParam0->f_103[iVar0 /*5*/].f_3, 1), 0, 0);
				break;
			case 1:
				func_54(0, 0f, 0f, 0f, uParam0->f_37[iVar0 /*3*/], uParam0->f_68[iVar0 /*3*/], &iVar1, uParam0->f_103[iVar0 /*5*/].f_3, 1, 0, 0, uParam0->f_103[iVar0 /*5*/].f_4, uParam0->f_154[iVar0]);
				break;
			case -1:
				Jump @250; //curOff = 235
				iVar0++;
			}
		}

void func_29(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
	}
}

void func_30(int iParam0)
{
}

void func_31(int iParam0)
{
}

void func_32(int iParam0)
{
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_34(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 164, "Entity does not exist!");
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, "scripted_loot_only")) && DECORATOR::DECOR_GET_BOOL(iParam0, "scripted_loot_only"))
	{
		return true;
	}
	return false;
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	bool bVar10;
	var uVar11;
	var uVar12;

	DEBUG::_0x4DC69742196F818A(8, 164, "Getting items from script");
	while (!func_16(uParam0->f_5) && iVar8 < iParam2)
	{
		bVar0 = func_55(uParam0->f_5, &uVar9, &iVar1, &uVar11, &uVar12, &vVar2, &vVar5, &bVar10);
		DEBUG::_0x4DC69742196F818A(168, 164, "Adding ", func_37(bVar0, 0), " from script");
		if (func_45(bVar0, 0))
		{
			func_56(uParam0, iVar1, vVar2, vVar5, bVar0, uVar9, uVar11, uVar12, bVar10);
			iParam1->f_1[iVar8] = bVar0;
			iVar8++;
		}
	}
}

var func_37(bool bParam0, int iParam1)
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

bool func_38(var uParam0)
{
	return TASK::_0x6718F40313A2B5A6(*uParam0) >= 0.99f;
}

int func_39(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;

	switch (func_57())
	{
		case 10:
			if (func_59(Param0.f_5, func_58(1), 1) < 15f)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "GIVE_CHEST_UNIQUE_LOOT: UNIQUE_CHEST_ROA_A = CONSUMABLE_MEDICINE");
				iVar0 = joaat("SCRIPTEDBALL");
				*uParam165 = joaat("CONSUMABLE_MEDICINE");
			}
			break;
		case -1:
			if (func_59(Param0.f_5, func_58(2), 1) < 15f)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "GIVE_CHEST_UNIQUE_LOOT: UNIQUE_CHEST_NONE_A = CONSUMABLE_MEDICINE");
				iVar0 = joaat("SCRIPTEDBALL");
				*uParam165 = joaat("CONSUMABLE_MEDICINE");
			}
			break;
	}
	return iVar0;
}

int func_40(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= uParam0->f_26)
	{
		*uParam1 = 0;
		return joaat("SCRIPTEDBALL");
	}
	DEBUG::_0xF0783374333FD8CE(166536, 164, "GET_LOOT_MODEL_DATA - eLoot.eLongLootItems[", iParam2, "] = ", func_37(uParam0->f_26[iParam2], 0), " eLoot.eLongLootModels[", iParam2, "] = ", func_60(uParam0->f_12[iParam2], 0));
	*uParam1 = uParam0->f_26[iParam2];
	return uParam0->f_12[iParam2];
}

bool func_41(var uParam0)
{
	return !(DECORATOR::DECOR_EXIST_ON(*uParam0, "chest_local_only") && DECORATOR::DECOR_GET_BOOL(*uParam0, "chest_local_only"));
}

void func_42(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		iParam2 = ENTITY::GET_ENTITY_MODEL(*uParam1);
	}
	if (iParam2 == joaat("MP004_S_MP_BONDROLLED01X") || iParam3 == joaat("KIT_PLACED_EXPLOSIVES"))
	{
		DECORATOR::DECOR_SET_BOOL(*uParam1, "loot_mp_mission_only", true);
	}
}

int func_43(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

Vector3 func_44(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

bool func_45(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_46(bool bParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	DEBUG::_0x1B08D1EB9D8C4931(2216, 157, "ADD_PLAYER_SATCHEL_ITEM: Func Start: Item: ", func_37(bParam0, 0), " Add Amount: ", sParam1, " Add Silently: ", bParam2);
	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Attempting to add an invalid item to the player's inventory: ", UNK_0x4379B6FA65D55295(bParam0));
		return 0;
	}
	if (!func_61(bParam0, sParam1, bParam2, iParam5))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "ADD_PLAYER_SATCHEL_ITEM: __ADD_SATCHEL_ITEM_EXCEPTION_CHECKS: False");
		return 0;
	}
	if (!func_62(bParam0, &iVar0, sParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "ADD_PLAYER_SATCHEL_ITEM: __ADD_SATCHEL_ITEM_ADJUST_COUNT: False");
		return 0;
	}
	func_63(bParam0, bParam2);
	bVar2 = false;
	if (func_64(bParam0) == joaat("CLOTHING"))
	{
		if (!func_65(bParam0, 866047851) && !func_65(bParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_66(bParam0, 8388608) && !func_67(27))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "@@@ ADD_PLAYER_SATCHEL_ITEM: Received a mailable item, need to unlock the Post Office!");
		func_68(27);
	}
	func_69(bParam0);
	if (!bVar3)
	{
		if (func_65(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			DEBUG::_0xA308F935BDECCEC0(40, 147, "ADD_PLAYER_SATCHEL_ITEM: Trying to add thrown weapon- ", HUD::_GET_LABEL_TEXT_BY_HASH(func_70(bParam0, 0)));
			bVar1 = func_52(func_71(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_72() == -1)
				{
					func_73(bVar1);
				}
				if (func_74(0) && func_75(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_76(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_77(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_64(bParam0) == joaat("WEAPON"))
		{
			if (!func_78(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_64(bParam0) == joaat("AMMO") && func_79(bParam0))
		{
			if (!func_80(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_65(bParam0, -103750053))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - claw");
			func_48(func_47(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_48(func_81(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_65(bParam0, -121341956) && !func_65(bParam0, 606799272))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - valuable");
				func_82(536, 0);
			}
			if (func_65(bParam0, -2017733358) || func_65(bParam0, -1369131378))
			{
			}
		}
		else if (func_65(bParam0, -136654233))
		{
			if (func_65(bParam0, -1021472396))
			{
				DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - canned fruit");
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - canned food");
			}
		}
		else if (func_65(bParam0, -1466706512) && func_65(bParam0, 1147021565))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - used consumable");
			func_82(519, 0);
		}
		else if (func_65(bParam0, 1147021565) && func_65(bParam0, -524514947))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - snacks");
		}
		else if (func_65(bParam0, 554195525))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - candy");
		}
		else if (func_65(bParam0, 589988438))
		{
			if (func_83())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 147, "POSTER LOGIC IF CHECK IS PASSING");
				func_84(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_65(bParam0, 787083290) && func_65(bParam0, 949916894))
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, "CI_TAG_ITEM_LETTER_INVITATION: eItemToAdd = ", func_37(bParam0, 0));
			func_85(bParam0);
		}
		else if (func_65(bParam0, -1718133314))
		{
			func_86(bParam0);
		}
		else if (func_65(bParam0, -1738650224))
		{
			func_87(bParam0);
		}
		else if (func_65(bParam0, -1112814642) && func_65(bParam0, 949916894))
		{
			func_88(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940296.f_21 = 0;
		}
		else if (func_65(bParam0, 1841149704))
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, "CI_TAG_ITEM_TREASURE_HUNTER_MAP: eItemToAdd = ", func_37(bParam0, 0));
			func_89();
		}
		else if (func_65(bParam0, -1979000645))
		{
		}
		else if (func_65(bParam0, 606799272))
		{
		}
		else if (func_65(bParam0, -1112814642) && func_65(bParam0, -1697809989))
		{
		}
		else if (func_65(bParam0, -2017733358) || func_65(bParam0, -1369131378))
		{
		}
		else if (func_65(bParam0, -1921346699))
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 158, "ADD_PLAYER_SATCHEL_ITEM - Cannot add MONEY items in MP, aborting!");
			return 0;
		}
		else if (func_65(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_90(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_46(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_90(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_46(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_90(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_46(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_90(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_46(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_90(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_46(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_90(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_46(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_65(bParam0, -839724752) && func_66(bParam0, 4))
		{
		}
		else if (func_65(bParam0, 1399091007))
		{
			func_91(bParam0, &bVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_92(272, func_70(joaat("CONSUMABLE_AGED_PIRATE_RUM"), 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_92(270, func_70(joaat("CONSUMABLE_GINSENG_ELIXIER"), 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_92(271, func_70(joaat("CONSUMABLE_VALERIAN_ROOT"), 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_93(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_93(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_93(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_93(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_93(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_93(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_82(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_82(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_67(1))
				{
					func_82(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_82(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_72() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_82(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 139, "ADD_PLAYER_SATCHEL_ITEM - Can't get a negative amount of satchel items!");
			return 0;
		}
		bVar5 = bParam0;
		func_94(&bVar5);
		DEBUG::_0xF0783374333FD8CE(680, 139, "ADD_PLAYER_SATCHEL_ITEM - eTempItemToAdd = ", func_37(bVar5, 0), " eItemToAdd = ", func_37(bParam0, 0));
		if (!func_77(bVar5, iVar0, iParam5))
		{
			DEBUG::_0xF0783374333FD8CE(8, 139, "ADD_PLAYER_SATCHEL_ITEM - Failed to add item to players inventory, returning false.");
			return 0;
		}
		else if (!func_74(0))
		{
			return 1;
		}
		if (func_64(bParam0) == joaat("CLOTHING"))
		{
			func_95(bParam0);
		}
	}
	else if (bVar2 != 0)
	{
		if (func_74(0) && !func_96())
		{
			DEBUG::_0xA308F935BDECCEC0(8, 147, "Using loot table inside ADD_PLAYER_SATCHEL_ITEM!");
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_33, 0, 0, bVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_46(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				DEBUG::_0xA308F935BDECCEC0(40, 147, "Item: ", HUD::_GET_LABEL_TEXT_BY_HASH(func_70(Var6.f_1[iVar29], 0)));
				DEBUG::_0xA308F935BDECCEC0(8, 147, "Amount: ", Var6.f_12[iVar29]);
				iVar29++;
			}
		}
		else
		{
			func_97(bVar2, 0);
		}
	}
	Var30 = { func_98(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_99(bParam0);
	DEBUG::_0xF0783374333FD8CE(40, 158, "ADD_PLAYER_SATCHEL_ITEM: bAddSilently - ", MISC::_0xF216F74101968DB0(bParam2));
	if (fParam6 > 0f)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "item has weight");
		if (func_65(bParam0, -839724752))
		{
			func_100(bParam0, fParam6);
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(8, 157, "ADD_PLAYER_SATCHEL_ITEM - item is not fish so should not have weight");
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_101(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

struct<2> func_47(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_48(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_49(bool bParam0, vector3 vParam1, var uParam4, char* sParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_102(bParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		DEBUG::_0xA308F935BDECCEC0(152, 164, "Give chest in world ", sParam5, " money modifier");
		func_103(uParam4);
		return func_104(*uParam4, sParam5);
	}
	return false;
}

bool func_50(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_37(bParam0, 0));
		return false;
	}
	iVar0 = func_64(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_65(bParam0, 1399091007))
	{
		func_105(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_37(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

void func_51(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_102(bParam0, vParam1, iParam7, iParam8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 164, "Give chest in world ", func_37(bParam5, 0), " ammo");
		func_103(uParam4);
		func_106(*uParam4, bParam5, iParam6, 1);
	}
}

bool func_52(bool bParam0, bool bParam1)
{
	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_WEAPON_TYPE_FROM_SATCHEL_ITEM - Invalid item.");
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_WEAPON_TYPE_FROM_SATCHEL_ITEM - Invalid weapon item!");
	}
	return false;
}

void func_53(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_102(bParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 164, "Give chest in world weapon ", func_107(bParam5));
		func_103(uParam4);
		func_108(*uParam4, bParam5);
	}
}

void func_54(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, char* sParam16)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = func_102(bParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 164, "Give chest in world ", func_37(bParam11, 0));
		if (!func_109(vParam4) || !func_109(vParam7))
		{
			func_110(*iParam10, vParam4, vParam7);
		}
		func_103(iParam10);
		DEBUG::_0xA308F935BDECCEC0(8, 164, "Use bone ", sParam16);
		func_111(*iParam10, sParam16);
		func_112(*iParam10, bParam11, iParam12, iParam15);
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 164, "unable to find chest in world to give item!");
	}
}

int func_55(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	char cVar6[16];
	struct<2> Var8;
	struct<2> Var10;
	int iVar12;
	int iVar13;

	iVar0 = 0;
	iVar1 = 0;
	*uParam1 = 0;
	*bParam7 = -1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- loot_empty");
		return 0;
	}
	*uParam1 = 1;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- loot_money");
		*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_money");
		*iParam2 = 0;
		return joaat("CURRENCY_CASH");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money"))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- fLoot_money");
		*uParam3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "fLoot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "fLoot_money");
		*iParam2 = 0;
		return func_113(*uParam3);
	}
	StringCopy(&cVar6, "loot_ammo", 16);
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		Var8 = { cVar6 };
		Var10 = { cVar6 };
		StringIntConCat(&Var8, iVar5, 16);
		StringIntConCat(&Var10, iVar5, 16);
		StringConCat(&Var8, "_type", 16);
		StringConCat(&Var10, "_amt", 16);
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var8))
		{
			DEBUG::_0x4DC69742196F818A(40, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- ", &Var8);
			iVar1 = DECORATOR::DECOR_GET_INT(iParam0, &Var8);
			if (iVar1 != 0)
			{
				iVar0 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar1);
				DECORATOR::DECOR_REMOVE(iParam0, &Var8);
				if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var10))
				{
					*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, &Var10);
					DECORATOR::DECOR_REMOVE(iParam0, &Var10);
					*iParam2 = 2;
				}
				return iVar0;
			}
		}
		iVar5++;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- loot_weapon");
		iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_weapon");
		if (iVar1 != 0)
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_weapon");
			*iParam2 = 3;
			return func_114(iVar1);
		}
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- loot_item_type1");
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt1"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_bone1"))
		{
			*bParam7 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_bone1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_bone1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model1"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model1");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1z");
		}
		iVar12 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type1");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
		*iParam2 = 1;
		return iVar12;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- loot_item_type2");
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt2"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_bone2"))
		{
			*bParam7 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_bone2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_bone2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model2"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model2");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2z");
		}
		iVar13 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type2");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
		*iParam2 = 1;
		return iVar13;
	}
	DEBUG::_0x4DC69742196F818A(8, 164, "GET_LOOTING_ITEM_FROM_SCRIPT_AND_REMOVE_OVERRIDE -- no overrides");
	return 0;
}

void func_56(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, char* sParam9, char* sParam10, var uParam11, bool bParam12)
{
	int iVar0;

	DEBUG::_0x4DC69742196F818A(101032, 164, "SAVE_SCRIPTED_LOOT_OVERRIDE -- ", func_115(iParam1, 0), " ", func_37(bParam8, 0), " ", sParam9, " ", sParam10);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_103[iVar0 /*5*/] == -1)
		{
			uParam0->f_103[iVar0 /*5*/] = iParam1;
			uParam0->f_154[iVar0] = bParam12;
			uParam0->f_103[iVar0 /*5*/].f_3 = bParam8;
			uParam0->f_103[iVar0 /*5*/].f_1 = sParam9;
			uParam0->f_103[iVar0 /*5*/].f_2 = sParam10;
			uParam0->f_103[iVar0 /*5*/].f_4 = uParam11;
			if (func_116(uParam0->f_103[iVar0 /*5*/].f_3) && func_117(uParam0->f_103[iVar0 /*5*/].f_3))
			{
				func_118(&(uParam0->f_37[iVar0 /*3*/]), &(uParam0->f_68[iVar0 /*3*/]));
			}
			else
			{
				if (!func_109(vParam2))
				{
					uParam0->f_37[iVar0 /*3*/] = { vParam2 };
				}
				if (!func_109(vParam5))
				{
					uParam0->f_68[iVar0 /*3*/] = { vParam5 };
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
}

int func_57()
{
	return Global_1896634.f_41;
}

Vector3 func_58(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0 = { 2313.51f, 1031.721f, 78.5643f };
			break;
		case 2:
			vVar0 = { 159.2609f, -1436.622f, 42f };
			break;
	}
	return vVar0;
}

float func_59(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

var func_60(bool bParam0, int iParam1)
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

bool func_61(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_72() == -1)
	{
		DEBUG::_0xF0783374333FD8CE(2216, 157, "__ADD_SATCHEL_ITEM_EXCEPTION_CHECKS: ADDING ", HUD::_GET_LABEL_TEXT_BY_HASH(func_70(bParam0, 0)), "; DOES_PLAYER_HAVE_ITEM_IN_SATCHEL = ", func_90(bParam0, 1), ", CHECK_ITEM_DATA_ITEM_FLAG = ", func_66(bParam0, 1048576));
		if (func_116(bParam0) && func_119(bParam0))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "__ADD_SATCHEL_ITEM_EXCEPTION_CHECKS: Can't add this item as it has a purchase limit...");
			func_120(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_62(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_121(bParam0, iParam1);
	Var0 = { func_122(bParam0, 0, 1) };
	iVar5 = func_123(bParam0, &Var0, 0, 0);
	iVar6 = func_124(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "__ADD_SATCHEL_ITEM_ADJUST_COUNT - tutorial should run now....");
		if (func_65(bParam0, -2051813666))
		{
			func_82(674, 1);
		}
		else if (func_72() == -1)
		{
			func_82(673, 0);
		}
	}
	if (func_125(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
			DEBUG::_0xA308F935BDECCEC0(136, 157, "__ADD_SATCHEL_ITEM_ADJUST_COUNT: Adjusted count from ", iParam2, " to ", *iParam1);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 157, "__ADD_SATCHEL_ITEM_ADJUST_COUNT: iCurrentItemCnt = ", iVar6, " iItemsMaxCount = ", iVar5);
			return false;
		}
	}
	return true;
}

void func_63(bool bParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT");
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT: bAddSilently");
		return;
	}
	if (!func_126())
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT: NOT SHOULD_QUICK_INSPECT_TRIGGER()");
		return;
	}
	switch (func_127(bParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT: TRUE");
			Global_1940296.f_70.f_5 = 1;
			Global_1940296.f_70.f_6 = 0;
			Global_1940296.f_70.f_1 = bParam0;
			break;
	}
}

int func_64(bool bParam0)
{
	vector3 vVar0;

	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_65(bool bParam0, bool bParam1)
{
	if (!func_45(bParam0, 0))
	{
		return func_129(func_128(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_130(bParam1, 0), " for item ", func_37(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

bool func_66(bool bParam0, int iParam1)
{
	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "CHECK_ITEM_DATA_ITEM_FLAG - Attempting to check the flag of an invalid item.");
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

bool func_67(int iParam0)
{
	if (!func_131(iParam0))
	{
		return false;
	}
	return func_132(iParam0);
}

void func_68(int iParam0)
{
	if (!func_131(iParam0))
	{
		return;
	}
	func_133(iParam0);
	func_134(iParam0);
}

void func_69(bool bParam0)
{
	if (func_65(bParam0, -1522723129))
	{
		func_135(-848633709, 0, 255, 0, 0);
	}
	else if (func_65(bParam0, -283942357))
	{
		func_135(-981153234, 0, 255, 0, 0);
	}
	else if (func_65(bParam0, 683680997))
	{
		func_135(-756350192, 0, 255, 0, 0);
	}
	else if (func_65(bParam0, 1307628809))
	{
		func_135(603094518, 0, 255, 0, 0);
	}
}

bool func_70(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_136(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_71(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			bVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			bVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(40, 157, "GET_THROWN_WEAPON_FROM_AMMO - could not find weapon for ammo: ", func_37(bParam0, 0));
			break;
	}
	if (func_45(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_137(bVar0) || func_138(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

int func_72()
{
	return Global_1572887.f_13;
}

void func_73(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		DEBUG::_0x83407B92D46F25C3(168, 150, "UNLOCK_WEAPON_FOR_USE: Trying to call UNLOCK_SET_UNLOCKED on ", func_37(bParam0, 0), " but this only works in SP.  You should be using awards when in MP.  This won't work in release builds!");
		return;
	}
	if (!func_139(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 150, "UNLOCK_WEAPON_FOR_USE: Weapon ", func_37(bParam0, 0), " is invalid and can not be unlocked.");
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 150, "UNLOCK_WEAPON_FOR_USE: Weapon had an invalid unlock ID. Failed to unlock.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(2216, 150, "Unlocking weapon ", func_37(bParam0, 0), "(", bParam0, " for use.");
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_74(bool bParam0)
{
	if (func_72() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_140(bParam0));
}

bool func_75(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - Tried to add an invalid weapon: ", func_37(bParam0, 0));
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(34984, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - ", func_37(bParam0, 0), ", iAmmoAmount = ", iParam1, ", bForceInHand = ", bParam2, ", bForceInHolster = ", bParam3);
	DEBUG::_0xF0783374333FD8CE(43176, 157, "  attachPoint = ", func_141(iParam4, 0), ", bAllowMultipleCopies = ", bParam5, ", eAddReason = ", func_142(iParam6, 0), ", bIgnoreUnlocks = ", bParam7);
	if (WEAPON::_IS_WEAPON_MELEE(bParam0) && iParam1 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "[ADD_WEAPON_AMMO_TO_PLAYER_INVENTORY] - Tried to add ammo to a melee weapon: ", func_37(bParam0, 0));
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_122(bParam0, 0, 1) };
		if (func_143(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_144(bParam0, &Var5, Var0.f_4))
			{
				DEBUG::_0xF0783374333FD8CE(680, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] We have removed 'worn' ", func_37(bParam0, 0), " from ", func_145(Var0.f_4, 0));
				Var27 = { func_146(bParam0, Var0, Var0.f_4, 0) };
				func_147(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_74(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			DEBUG::_0xD9911C7B5F8CD69C(42, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Failed to add ", func_37(bParam0, 0), "!");
			return false;
		}
		func_76(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_148(bParam0, iParam1);
		DEBUG::_0xF0783374333FD8CE(168, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - GIVE_WEAPON_TO_PED for ", UNK_0x4379B6FA65D55295(bParam0), " succeeded");
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Player does not already have weapon ", func_37(bParam0, 0), " to equip, cannot directly add items in MP!");
		return false;
	}
	if (iParam1 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Cannot directly add ammo in MP, ", iParam1, "x ammo parameter will be ignored!");
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	DEBUG::_0xF0783374333FD8CE(40, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - GIVE_WEAPON_TO_PED used on existing ", func_37(bParam0, 0));
	return true;
}

bool func_76(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_79(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Tried to add invalid ammo: ", func_37(bParam0, 0));
		return false;
	}
	if (!func_74(0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Cannot add ammo directly in MP. Use awards instead!");
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	DEBUG::_0xF0783374333FD8CE(648, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Ammo add for ", iParam1, "x ", func_37(bParam0, 0));
	return true;
}

int func_77(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "ADD_ITEM_TO_PLAYER_INVENTORY - Attempting to remove an invalid item from an inventory!");
		return 0;
	}
	if (iParam1 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(2696, 157, "ADD_ITEM_TO_PLAYER_INVENTORY - Attempting to add ", iParam1, " of ", func_37(bParam0, 0), ", must be a non-zero positive amount");
		return 0;
	}
	iVar0 = func_149(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_150(bParam0, iParam1, iParam2);
	}
	Var1 = { func_122(bParam0, 0, 1) };
	Var6 = { func_146(bParam0, Var1, Var1.f_4, 0) };
	return func_151(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_78(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_52(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_72() == -1)
		{
			func_73(bVar0);
			if (iParam1 == 1248274121)
			{
				func_152(bVar0);
			}
		}
		if (!func_125(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_120(bParam0, 1, 0, bParam2, iParam1);
			DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Trying to give weapon to player: ", func_153(bVar0));
			iVar6 = func_154(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_75(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_75(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_75(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_155())
				{
					DEBUG::_0xF0783374333FD8CE(8, 157, "[ADD_PLAYER_SATCHEL_ITEM] john's knife not added because player not john");
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
					DEBUG::_0xF0783374333FD8CE(40, 157, "[ADD_PLAYER_SATCHEL_ITEM] but SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED so ignoring it - ", UNK_0x4379B6FA65D55295(bVar0));
				}
				else if (!func_156(bVar0))
				{
					func_75(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_75(bVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_157(Global_33, 2, 0, 1);
				if ((((func_139(bVar7) && !Global_26681) && bVar7 != bVar0) && !func_90(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_33, bVar7);
					DEBUG::_0xF0783374333FD8CE(40, 157, "[ADD_PLAYER_SATCHEL_ITEM] sending weapon to inventory, as we already have a 1-handed gun in pistol_r - ", UNK_0x4379B6FA65D55295(bVar7));
				}
				if (func_139(bVar7) && func_90(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_75(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
					DEBUG::_0xF0783374333FD8CE(8, 157, "[ADD_PLAYER_SATCHEL_ITEM] Equipping pistol to the left hand, as we have an offhand holster available!");
				}
				else
				{
					if (!func_75(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
					{
						return false;
					}
					DEBUG::_0xF0783374333FD8CE(8, 157, "[ADD_PLAYER_SATCHEL_ITEM] Equipping pistol to the right hand, as our right slot is available!");
				}
			}
			else if (!func_75(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Player already has the maximum amount of weapon: ", func_153(bVar0));
		}
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Trying to give an unhandled weapon to the player: ", func_153(bVar0));
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_82(515, 1);
	}
	return true;
}

bool func_79(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_80(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_79(bParam0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Trying to give an unhandled ammo to the player: ", func_37(bParam0, 0));
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_139(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_33, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	DEBUG::_0xA308F935BDECCEC0(34952, 147, "MAX_AMMO ", iVar2, " Current Ammo ", iVar3, " Needed Ammo ", iVar5, " New Ammo ", iVar6);
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_92(func_158(bParam0), func_70(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(559240, 215, "PLAYER HAS MAX AMMO SO POST THE TUTORIAL HELP MESSAGE | MAX_AMMO ", iVar2, " | Current Ammo ", iVar3, " | Needed Ammo ", iVar5, " | New Ammo ", iVar6, " | iAmmoCount ", iVar0);
	}
	DEBUG::_0xA308F935BDECCEC0(136, 157, "Giving player ", iVar0, " ammo");
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_74(0))
	{
		if (func_76(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			DEBUG::_0xF0783374333FD8CE(2216, 0, "[AMMO Recieved],[", UNK_0x4379B6FA65D55295(bVar4), "],", iVar0, "[ADD_PLAYER_SATCHEL_ITEM]");
			return 1;
		}
	}
	else
	{
		return func_77(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_81(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_82(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_159(iParam0, &iVar0, &iVar1);
	if (!func_160(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_161(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_162(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

bool func_83()
{
	return false;
}

int func_84(bool bParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_72() == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "GIVE_PLAYER_REWARD - This command is deprecated for MP, should probably use PERSONA_REQUEST_AWARD_LOOT directly instead!");
		func_97(bParam0, 0);
		return 0;
	}
	iVar0 = func_163(bParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_164(iVar0, sParam4, iParam5, 0);
	}
	func_165(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_85(bool bParam0)
{
}

void func_86(bool bParam0)
{
}

void func_87(bool bParam0)
{
}

void func_88(bool bParam0)
{
}

void func_89()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "PROCESS_ADD_ITEM_TREASURE_MAP: THIS SHOULD ONLY TRIGGER ONCE WHEN PLAYER GETS FIRST MAP DURING FIRST CHALLENGE...");
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

bool func_90(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_64(bParam0);
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
			if (!func_166(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_167(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_168(bParam0, 0, 0, 0) >= iParam1;
}

void func_91(bool bParam0, bool bParam1)
{
	var uVar0;

	func_105(bParam0, bParam1, &uVar0);
}

void func_92(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_159(iParam0, &iVar0, &iVar1);
	if (!func_160(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_169(iParam0, 1024))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_MARK_RUN_WITH_SUBSTR_HASH - Selected tutorial doesn't support substrings!");
		return;
	}
	func_161(iVar0, iVar1);
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	DEBUG::_0x4DC69742196F818A(2184, 105, "TUTORIAL_MARK_RUN_WITH_SUBSTR_HASH - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run.");
}

void func_93(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_159(iParam0, &iVar0, &iVar1);
	if (!func_160(iParam0, iVar0, iVar1, bParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_MARK_RUN_WITH_NUMBER - Selected tutorial can't display now.");
		return;
	}
	if (!func_169(iParam0, 1024))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_MARK_RUN_WITH_NUMBER - Selected tutorial doesn't support substrings or a number!");
		return;
	}
	func_161(iVar0, iVar1);
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
	DEBUG::_0xF0783374333FD8CE(10376, 105, "TUTORIAL_MARK_RUN_WITH_NUMBER - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_162(iParam0));
}

void func_94(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_95(bool bParam0)
{
	if (func_72() != -1)
	{
		return;
	}
}

bool func_96()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "IS_INVENTORY_MIRROING_TRANSACTIONS - Not using INVENTORY_MP_MISSION, returning FALSE");
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_97(bool bParam0, int iParam1)
{
	int iVar0;
	struct<2> Var4;

	if (0 == bParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_LOOT - invalid loot table.  Bailing.");
		UNK_0x355E72323AEE83CC(84, 6);
		return 0;
	}
	Var4.f_1 = 10;
	func_170(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_171(bParam0, &Var4, &iVar0, iParam1, 0);
}

struct<2> func_98(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "GET_ITEMS_GROUP_STAT_HASH: attempting to process an invalid item!");
		return Var0;
	}
	if (func_65(bParam0, -305066475))
	{
		if (func_72() == -1)
		{
			if (func_65(bParam0, -537818634))
			{
				return func_172(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_172(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_65(bParam0, -537818634))
	{
		return func_172(joaat("MEDICINE_ITEMS"));
	}
	if (func_65(bParam0, 2084895747))
	{
		return func_172(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_99(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_100(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_173(Global_1903123.f_37);
	func_175(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_174(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_101(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_45(bParam0, 0))
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
	if (!func_176() || bParam6)
	{
		func_177(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_178(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
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
		StringCopy(&cVar2, func_178(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_66(bParam0, 2097152))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been read.");
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been used.");
		bVar0 = true;
	}
	iVar6 = func_64(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((((((((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER")) && bParam0 != joaat("AMMO_HATCHET_HUNTER")) && bParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && bParam0 != joaat("AMMO_POISONBOTTLE")) && bParam0 != joaat("AMMO_MOONSHINEJUG_MP")) && !func_65(bParam0, -1982291600)) && !func_65(bParam0, 137764179))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_179(bParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_180(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
		DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find UI Data for: ", func_37(bParam0, 0), " | Using _PLACEHOLDER texture");
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find a valid texture for item ", func_37(bParam0, 0));
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
	if (func_65(bParam0, 474910316))
	{
		sVar17 = func_181(bParam0);
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
	if (func_65(bParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_182(bParam0))
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
	bVar18 = func_70(bParam0, 0);
	if ((func_183(iVar12) && func_65(bParam0, -306684263)) && bVar18 != 0)
	{
		bVar18 = func_184(bParam0);
	}
	else if (func_64(bParam0) == joaat("CLOTHING"))
	{
		bVar19 = func_185(bParam0);
		if (func_45(bVar19, 0))
		{
			bVar18 = func_70(bVar19, 0);
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 158, "[ADD_QUEUED_ITEM_DISPLAY] - Failed to override clothing item display name with style item display name!");
	}
	if (func_186(bParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_187(bParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_188(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, bVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -1839668642 && bParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && bParam0 != 1326838792) && bParam0 != -230310728) || ((iVar12 == 231148558 && bParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && bParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && bParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && bParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_189(bParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_190(bParam0, &cVar22))
		{
			sVar21 = func_192(func_191(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	DEBUG::_0xF0783374333FD8CE(174760, 158, "ADD_QUEUED_ITEM_DISPLAY: Adding - ", func_37(bParam0, 0), " with color ", func_193(iVar13, 0), " sound ", sVar14, " set ", sVar15);
	func_175(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_102(bool bParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	STREAMING::REQUEST_MODEL(bParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(bParam0))
	{
		return 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam4) && bParam5 != 0)
	{
		DEBUG::_0x4DC69742196F818A(680, 164, "GET_CHEST_AMBIENT_PROP -- finding scenario point in world: ", MISC::_0x6C4DBF553885F9EB(vParam1), " ", func_2(bParam5, 0));
		iParam4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, bParam5, 1f, 0, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		DEBUG::_0x4DC69742196F818A(8, 164, "GET_CHEST_AMBIENT_PROP -- attempting to get chest from scenario");
		if (TASK::_0xEA31F199A73801D3(iParam4))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				DEBUG::_0x4DC69742196F818A(8, 164, "GET_CHEST_AMBIENT_PROP -- prop found");
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(8, 164, "GET_CHEST_AMBIENT_PROP -- SCENARIO HAS NO PROPS!");
		}
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(680, 164, "GET_CHEST_AMBIENT_PROP -- attempting to get chest from world: ", MISC::_0x6C4DBF553885F9EB(vParam1), " ", UNK_0x1B7C373FB4E76B85(bParam0));
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, bParam0, false, false, true);
	}
	return iVar0;
}

void func_103(int iParam0)
{
	if (func_194())
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "loot_mp_mission_only", true);
	}
}

bool func_104(int iParam0, float fParam1)
{
	return DECORATOR::DECOR_SET_FLOAT(iParam0, "fLoot_money", fParam1);
}

void func_105(bool bParam0, bool bParam1, var uParam2)
{
	*bParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*bParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*bParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*bParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*bParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*bParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*bParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*bParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*bParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*bParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*bParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

void func_106(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_195(iParam0);
		func_196(iParam0, bParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo1_type") == bParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", bParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo2_type") == bParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", bParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo3_type") == bParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", bParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", iParam2);
	}
}

char* func_107(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "Invalid Weapon";
		case joaat("WEAPON_UNARMED"):
			return "Unarmed";
		default:
			return HUD::_GET_LABEL_TEXT_2(func_153(bParam0));
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get display name of an unknown weapon ", bParam0);
	return "Unknown Weapon";
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_195(iParam0);
		func_196(iParam0, bParam1, 1, iVar0);
	}
	else
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", bParam1);
	}
}

bool func_109(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_110(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_111(int iParam0, int iParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		if (iParam1 >= 0)
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_bone1", iParam1);
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		if (iParam1 >= 0)
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_bone2", iParam1);
		}
	}
}

void func_112(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_195(iParam0);
		func_196(iParam0, bParam1, iParam2, iVar0);
	}
	else
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", bParam1);
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
			return;
		}
		else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", bParam1);
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
			return;
		}
		DEBUG::_0xD9911C7B5F8CD69C(8, 147, "SET_LOOT_ITEM - Entities only have 2 slots for looting items, and both are filled. Get Evan L.");
	}
}

int func_113(var uParam0)
{
	return 0;
}

int func_114(int iParam0)
{
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_WEAPON_TYPE_FROM_SATCHEL_ITEM - Invalid weapon item!");
	return 0;
}

char* func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "LOOT_TYPE_INVALID";
		case 0:
			return "LOOT_TYPE_MONEY";
		case 1:
			return "LOOT_TYPE_ITEM";
		case 2:
			return "LOOT_TYPE_AMMO";
		case 3:
			return "LOOT_TYPE_WEAPON";
		case 4:
			return "NUM_LOOT_TYPES";
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

bool func_116(bool bParam0)
{
	return func_64(bParam0) == joaat("WEAPON");
}

bool func_117(bool bParam0)
{
	return WEAPON::_IS_WEAPON_BOW(bParam0);
}

void func_118(var uParam0, var uParam1)
{
	*uParam0 = { -0.12f, 0.12f, 0.12f };
	*uParam1 = { 90f, 0f, 115f };
}

bool func_119(bool bParam0)
{
	var uVar0;

	if (func_72() != -1)
	{
		return false;
	}
	if (func_66(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_125(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_90(bParam0, 1);
}

void func_120(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_64(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_52(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_138(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_168(bParam0, 0, 0, 0) == 0))
		{
			if (func_72() == -1)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "HANDLE_WEAPON_PICKUP_UNLOCK: Unlock the weapon");
				func_73(bVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "HANDLE_WEAPON_PICKUP_UNLOCK: Add with a sound");
				func_101(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_121(bool bParam0, int iParam1)
{
	if (func_65(bParam0, 58855631))
	{
		func_187(bParam0, -915411861, iParam1, 1);
		DEBUG::_0xF0783374333FD8CE(8, 157, "__ADD_SATCHEL_ITEM_CONVERT_ADD_AMOUNT_TO_USES adding uses = ", *iParam1);
	}
}

struct<5> func_122(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_197(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_64(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_37(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_198(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_146(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_199(bParam1) };
			if (bParam2 && func_200(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_143(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_143(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_144(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_201(bParam1) };
			switch (func_179(bParam0))
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
			if (func_202(bParam0, -1823706425))
			{
				Var0 = { func_146(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_202(bParam0, -1483207246))
			{
				Var0 = { func_146(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_146(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_202(bParam0, -1653629781))
			{
				Var0 = { func_146(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_203(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_202(bParam0, -1653629781))
			{
				Var0 = { func_146(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_37(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_37(bParam0, 0), ": ", func_145(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

int func_123(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - Attempting to check for an invalid item in the player's inventory!");
		if (func_204(func_128(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_64(bParam0) == joaat("FEE"))
	{
		return -1;
	}
	DEBUG::_0x1B08D1EB9D8C4931(567976, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - eInventoryItem: ", func_37(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(iParam1), " eSlot: ", func_145(iParam1->f_4, 0), " bCurrentSlotOnly: ", bParam2, " bPlayerOnly: ", bParam3);
	if (!bParam2 && func_149(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - ", func_37(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, iParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_140(bParam3), bParam0);
}

int func_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_79(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_140(bParam1), bParam0, bParam3);
}

bool func_125(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_205(&bParam0);
	if (!func_45(bParam0, 0) && !func_204(func_128(bParam0), 2))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "[PLAYER_INVENTORY_IS_ITEM_MAXED] Item is invalid - Failing!");
		return false;
	}
	if (!bParam3 && func_149(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - ", func_37(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam3 = true;
	}
	if (func_116(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		Var0 = { func_199(0) };
		Var4.f_9 = -1591664384;
		if (!func_143(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_144(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_200(bParam0, 1))
		{
			if (!func_143(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_144(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - No free slots for ", func_37(bParam0, 0));
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_123(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_206(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, bParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_126()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_207(Global_33, 1369124074)) && !func_207(Global_33, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

int func_127(bool bParam0, int iParam1)
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "Failed to fillout item data for item ", func_37(bParam0, 0));
	}
	return 0;
}

bool func_128(bool bParam0)
{
	return bParam0;
}

int func_129(bool bParam0, bool bParam1)
{
	if (!func_204(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_130(bParam1, 0), " for bundle ", func_208(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_130(bool bParam0, int iParam1)
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

bool func_131(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3647[iVar1], iVar2);
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_38.f_3647[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_38.f_3647[iVar1] = uVar3;
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Extra Honor Levels");
			break;
		case 7:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Invite Companions");
			break;
		case 8:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Purchase Property");
			break;
		case 9:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Skinning");
			break;
		case 11:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unLock: Pick Up Hat");
			func_209(1);
			break;
		case 14:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Looting");
			break;
		case 15:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Efficiency");
			break;
		case 16:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Body Heat");
			break;
		case 17:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Health Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_210(1);
			break;
		case 18:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Stamina Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_210(2);
			break;
		case 19:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Deadeye Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_210(3);
			break;
		case 20:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Health Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Stamina Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: RPG Stats");
			break;
		case 10:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Pick Herb");
			break;
		case 12:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Change Outfits");
			break;
		case 13:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Fast Travel");
			break;
		case 31:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Whistle");
			break;
		case 32:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Command Follow");
			func_211(1);
			break;
		case 33:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Command Stay");
			func_212(1);
			break;
		case 34:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Command Flee");
			func_213(1);
			break;
		case 35:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Inventory");
			break;
		case 36:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Item Wheel");
			func_214(0);
			break;
		case 37:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse ILO Feed");
			func_215(0);
			break;
		case 38:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse ILO Brush");
			func_216(0);
			break;
		case 39:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Core");
			break;
		case 40:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Efficiency");
			break;
		case 41:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Saddle Transfer");
			break;
		case 42:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Bonding With New Horses");
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_217(iParam0));
			break;
		case 2:
			if (func_218() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_219("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_82(677, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_217(iParam0));
			break;
		case 3:
			if (func_218() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_219("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_82(678, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_217(iParam0));
			break;
		case 4:
			if (func_218() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_219("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_82(679, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_217(iParam0));
			break;
		case 5:
			if (func_218() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_219("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_82(680, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_217(iParam0));
			break;
		case 23:
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: FEATURE_DUAL_WIELD...UNLOCK_SP_WEAPON_DUALWIELD was previously - ", MISC::_0xF216F74101968DB0(UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"))));
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_LONG_ARM_BONUS_AMMO");
			if (func_72() == -1)
			{
				if (!func_90(1013902307, 1))
				{
					func_77(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_LONG_ARM_REINFORCED_BONUS_AMMO");
			if (func_72() == -1)
			{
				if (!func_90(1013902307, 1))
				{
					func_77(1013902307, 1, 752097756);
				}
				if (!func_90(142640135, 1))
				{
					func_77(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_SHORT_ARM_BONUS_AMMO");
			if (func_72() == -1)
			{
				if (!func_90(786809402, 1))
				{
					func_77(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_SHORT_ARM_REINFORCED_BONUS_AMMO");
			if (func_72() == -1)
			{
				if (!func_90(786809402, 1))
				{
					func_77(786809402, 1, 752097756);
				}
				if (!func_90(-518019409, 1))
				{
					func_77(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Disabled Mount Prompt");
			break;
		case 24:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Crafting");
			break;
		case 25:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Gang Tithing");
			break;
		case 26:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Gang Tithe Return Animals to Pearson");
			break;
		case 27:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Post Office availability");
			break;
		case 28:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Barber Shop availability");
			break;
		case 29:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Shop availability");
			break;
		case 43:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Rhodes Deputy");
			break;
		case 44:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: In Endless Summer");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940410.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), true);
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Eagle Eye");
			break;
		case 51:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Gang 1 complete");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Native American Dialogue Receptive");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Native American Dialogue Trusted");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Compendium");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: peds will now react to sick arthur");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_135(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	int iVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_220(bParam0, &iVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_136(bool bParam0, bool bParam1)
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

bool func_137(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 150, "IS_WEAPON_UNLOCKED_FOR_PURCHASE: No unlock assigned for weapon ", func_37(bParam0, 0), ".");
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_PURCHASE: Weapon is unlocked: ", func_37(bParam0, 0));
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_PURCHASE: Weapon is locked: ", func_37(bParam0, 0));
	return false;
}

bool func_138(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 150, "IS_WEAPON_UNLOCKED_FOR_USE: No unlock assigned for weapon ", func_37(bParam0, 0), ".");
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_USE: Weapon is unlocked: ", func_37(bParam0, 0));
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_USE: Weapon is locked: ", func_37(bParam0, 0));
	return false;
}

bool func_139(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_140(bool bParam0)
{
	if (func_72() == -1)
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

char* func_141(int iParam0, int iParam1)
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

char* func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1965281643:
			return "ADD_REASON_INCENTIVE";
		case -1924444172:
			return "ADD_REASON_SYNCING";
		case -1216041698:
			return "ADD_REASON_AWARDS";
		case -983395630:
			return "ADD_REASON_NOTIFICATION";
		case -902540058:
			return "ADD_REASON_LOADOUT";
		case -897553835:
			return "ADD_REASON_LOOTED";
		case -746211728:
			return "ADD_REASON_USE_FAILED";
		case -669481339:
			return "ADD_REASON_GET_INVENTORY";
		case -490406031:
			return "ADD_REASON_CREATE_CHARACTER";
		case -334626412:
			return "ADD_REASON_MP_MISSION";
		case 444010018:
			return "ADD_REASON_PICKUP";
		case 752097756:
			return "ADD_REASON_DEFAULT";
		case 1157919518:
			return "ADD_REASON_SET_AMOUNT";
		case 1248274121:
			return "ADD_REASON_PURCHASED";
		case 1445013766:
			return "ADD_REASON_LOAD_SAVEGAME";
		case 1543882317:
			return "ADD_REASON_DEBUG";
		case 2073812199:
			return "ADD_REASON_MELEE";
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

bool func_143(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_206(bParam0, *uParam1, iParam2, bParam3, 1, bParam4) > 0;
}

bool func_144(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_221(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

var func_145(bool bParam0, int iParam1)
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

struct<4> func_146(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_37(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_140(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

bool func_147(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
	if (func_222(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", func_37(bParam0, 0), " is an intrinsic item, aborting!");
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_203(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_74(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item is already expired and does not need to be removed, ignoring");
		}
		else if (func_72() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			DEBUG::_0xF0783374333FD8CE(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Sending a Use transaction for ", iParam3, "x item ", func_37(bParam0, 0), " in ", func_145(uParam2->f_4, 0));
			iVar14 = func_223(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -142743235;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_224(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Removing ", iParam3, "x item ", func_37(bParam0, 0), " in ", func_145(uParam2->f_4, 0), " with reason ", func_225(iParam4, 0));
	if (!INVENTORY::_0x3E4E811480B3AE79(func_140(bParam6), iParam1, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to remove inventory item!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

void func_148(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_226(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
		DEBUG::_0xF0783374333FD8CE(168, 157, "[REFILL_CLIP_FOR_WEAPON] - refilled clip for ", UNK_0x4379B6FA65D55295(bParam0), " with this many bullets - ", iVar2);
	}
}

int func_149(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_204(func_128(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_150(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Inventory item is invalid!");
		return 0;
	}
	iVar0 = func_149(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Default item path is invalid!");
		return 0;
	}
	Var1 = { func_122(bParam0, 0, 0) };
	if (func_125(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Cannot add ", iParam1, "x of item ", func_37(bParam0, 0), " as it would exceed max quantity, aborting!");
		return 0;
	}
	if (!func_74(0))
	{
		DEBUG::_0x83407B92D46F25C3(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Cannot directly add  ", iParam1, "x item ", func_37(bParam0, 0), " in MP, use awards instead!");
		UNK_0x355E72323AEE83CC(157, 1);
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Adding ", iParam1, "x item ", func_37(bParam0, 0), " to ", func_145(Var1.f_4, 0), " with reason ", func_142(iParam2, 0));
	if (!INVENTORY::_0xCB5D11F9508A928D(func_140(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Failed to add inventory item!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Successfully added to inventory");
	return 1;
}

int func_151(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM - Inventory item is invalid!");
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM - Parent guid is invalid!");
		return 0;
	}
	if (func_125(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "PLAYER_INVENTORY_ADD_ITEM - Cannot add ", iParam3, "x of item ", func_37(bParam0, 0), " as it would exceed max quantity, aborting!");
		return 0;
	}
	if (!func_74(0))
	{
		DEBUG::_0x83407B92D46F25C3(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Cannot directly add  ", iParam3, "x item ", func_37(bParam0, 0), " in MP, use awards instead!");
		UNK_0x355E72323AEE83CC(157, 1);
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Adding ", iParam3, "x item ", func_37(bParam0, 0), " to ", func_145(iParam2->f_4, 0), " with reason ", func_142(iParam4, 0));
	if (!INVENTORY::_0xCB5D11F9508A928D(func_140(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Failed to add inventory item!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Successfully added to inventory");
	return 1;
}

void func_152(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "REGISTER_NEW_PLAYER_WEAPON - invalid weapon type!");
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940410.f_6)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "REGISTER_NEW_PLAYER_WEAPON - invalid player reference!");
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(bParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "REGISTER_NEW_PLAYER_WEAPON - Tried to set a bow - Not Registering");
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DEBUG::_0xF0783374333FD8CE(168, 0, "REGISTER_NEW_PLAYER_WEAPON - Flagging ", func_227(bParam0), " as temporarily new for the player!");
	DECORATOR::DECOR_SET_INT(Global_33, sVar0, bParam0);
	iVar2 = func_228();
	func_229(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

char* func_153(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "WT_INVALID";
		case joaat("WEAPON_UNARMED"):
			return "WT_UNARMED";
		case joaat("GROUP_PISTOL"):
			return "WT_PISTOL";
		case joaat("GROUP_REVOLVER"):
			return "WT_REVOLVER";
		case joaat("GROUP_RIFLE"):
			return "WT_RIFLE";
		case joaat("GROUP_REPEATER"):
			return "WT_ASSAULTRIFLE";
		case joaat("GROUP_SHOTGUN"):
			return "WT_SHOTGUN";
		case joaat("GROUP_SNIPER"):
			return "WT_SNIPERRIFLE";
		default:
			return WEAPON::_GET_WEAPON_NAME(bParam0);
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get name of an unknown weapon ", bParam0);
	return "WT_INVALID";
}

int func_154(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_117(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
		DEBUG::_0xF0783374333FD8CE(648, 157, "GET_AMMO_TO_ADD_FOR_WEAPON: going to give the bow this amount of ammo - ", iVar0, " for the weapon ", func_153(bParam0));
	}
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
		DEBUG::_0xF0783374333FD8CE(648, 157, "GET_AMMO_TO_ADD_FOR_WEAPON: going to give the gun this amount of ammo - ", iVar0, " for the weapon ", func_153(bParam0));
	}
	return iVar0;
}

bool func_155()
{
	return false;
}

bool func_156(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_157(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_158(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_67(49))
			{
				if (!func_67(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_67(50))
			{
				if (!func_67(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_160(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_230(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_162(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_231(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_232(iParam0, 0));
		return false;
	}
	if (func_233(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_232(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_169(iParam0, 1)) || func_234(32768))
	{
		if (!func_169(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_235())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_161(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_162(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

int func_163(bool bParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_72() == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "GET_PLAYER_REWARD - This command is deprecated for MP, use PERSONA_REQUEST_AWARD instead!");
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_90(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_33, 1, 1, bParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = Var1.f_1[iVar24];
			if (func_45(bVar25, 0) && func_65(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_164(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 84, "_PUSH_MONEY_EARN_UI_MESSAGE - Using delayed queue for cash event with amount ", iParam0);
			func_236(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_175(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_165(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "_SP_EARN_MONEY: iTotalCents <= 0");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(168, 0, "[SP-MONEY] Total: $", func_237(iParam0), ".");
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_238() || func_239())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_175(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		DEBUG::_0xF0783374333FD8CE(168, 0, "[SP-MONEY] Gang Savings: $", func_237(iVar0), ".");
		iParam0 = (iParam0 - iVar0);
		DEBUG::_0xF0783374333FD8CE(2216, 0, "[SP-MONEY] Remainder: $", func_237(iParam0), ". Split between ", iParam3, ", with player getting ", iVar1);
		if (iVar0 > 0)
		{
		}
		func_175(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		DEBUG::_0xF0783374333FD8CE(40, 0, "[SP-MONEY] Player: $", func_237(iVar1));
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_48(func_172(joaat("CAREER_CASH")), iVar1);
		DEBUG::_0xF0783374333FD8CE(43688, 0, "[inventory_playerbalance] Event: [EARN], Current Cash: [", UNK_0xAB3EA66D3B2C264A(), "], Value: [$", func_237(iVar1), "] Category:[", UNK_0x8F77B33B6A34D8BA(), "]");
	}
	UNK_0x355E72323AEE83CC(-1, 6);
}

bool func_166(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_50(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_240("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_241(&Var4, iVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", iVar3);
			}
			else if (!func_139(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_37(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_37(Var4.f_4, 0), " that uses the ammo - ", func_37(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_242(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_37(Var4.f_4, 0), " that uses the ammo - ", func_37(bParam0, 0));
					return true;
				}
			}
			iVar3++;
		}
		func_242(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_37(bParam0, 0));
	return false;
}

bool func_167(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_45(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_179(bParam0);
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
	iVar1 = func_243(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_244(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_37(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_245(bParam0);
	iVar2 = func_244(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_37(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_168(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_37(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_64(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_50(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_246(bParam0, 0);
	}
	if (func_149(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_140(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_247(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_37(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_140(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_37(bParam0, 0));
	return iVar0;
}

bool func_169(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_170(var uParam0, bool bParam1)
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

int func_171(bool bParam0, var uParam1, int* iParam2, int iParam3, int iParam4)
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
	func_248(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_REQUEST_AWARD_LOOT - Failed to request loot award ", func_249(bParam0, 0));
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_250(iParam2, bParam0, Var1);
	return 1;
}

struct<2> func_172(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get name of an unknown fishtype ", iParam0);
	return "FISHTYPE_UNKNOWN";
}

int func_174(bool bParam0)
{
	var uVar0;

	if (!func_251(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_SATCHEL_ITEM_TEXTURE: Failed to find UI Data for: ", func_37(bParam0, 0), " | Using _PLACEHOLDER texture");
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_175(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_252(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_176()
{
	return !Global_1913655;
}

void func_177(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913655.f_3)
	{
		if ((((Global_1913655.f_4[iVar0 /*6*/] == bParam0 && Global_1913655.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913655.f_4[iVar0 /*6*/].f_3 == iParam3) && Global_1913655.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913655.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913655.f_4[iVar0 /*6*/].f_1 = (Global_1913655.f_4[iVar0 /*6*/].f_1 + iParam1);
			DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_37(bParam0, 0), " to existing entry ", iVar0);
			return;
		}
		iVar0++;
	}
	if (Global_1913655.f_3 < 19)
	{
		DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_37(bParam0, 0), " to new entry ", Global_1913655.f_3);
		Global_1913655.f_4[Global_1913655.f_3 /*6*/] = bParam0;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_1 = iParam1;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_2 = bParam2;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_3 = iParam3;
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

char* func_178(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_179(bool bParam0)
{
	struct<2> Var0;

	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_180(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eItem = ", func_37(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eTextureType = ", func_253(iParam2, 0));
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with type: ", func_253(Var3.f_2[iVar0 /*3*/].f_2, 0));
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Type: ", func_253(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to fillout UI data for item ", func_37(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to find texture of type ", func_253(iParam2, 0), " for item ", func_37(bParam0, 0));
	return false;
}

char* func_181(bool bParam0)
{
	if (func_65(bParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_65(bParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_65(bParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_65(bParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_65(bParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_65(bParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_65(bParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_65(bParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_65(bParam0, -352095726) || func_65(bParam0, -2014783736)) || func_65(bParam0, -545064757)) || func_65(bParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_182(bool bParam0)
{
	if (func_65(bParam0, -189374246))
	{
		if (((func_254(bParam0, -1305775593) || func_254(bParam0, 1384151091)) || func_254(bParam0, 2075388272)) || func_254(bParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_65(bParam0, -753854379) || func_65(bParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_183(int iParam0)
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

int func_184(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_45(bParam0, 0))
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

bool func_185(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_255(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_256(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_257(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &bVar14) && func_258(bVar14))
			{
				func_259(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_259(iVar11);
	}
	return false;
}

bool func_186(bool bParam0, bool bParam1)
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
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_INTERACTION_TAG] Found tag ", func_130(bParam1, 0), " for item ", func_37(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

int func_187(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_45(bParam0, 0) && !func_204(func_128(bParam0), 2))
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
			DEBUG::_0xA308F935BDECCEC0(680, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Unable to find cost ", func_260(iParam1, 0), " for item ", func_37(bParam0, 0));
		}
		return 0;
	}
	if (!bParam3)
	{
		DEBUG::_0x4DC69742196F818A(168, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Found requested identifier of ", func_260(iParam1, 0), " with output quantity ", Var0.f_1);
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_188(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_189(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_261(bParam0, iParam1);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_TAG_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	return bVar0;
}

bool func_190(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_45(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_262(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_263(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 162, "[GET_COUPON_FULL_NAME] Item: ", func_37(bParam0, 0), " is not a coupon or voucher. Setting name to ", sParam1);
		return false;
	}
	StringCopy(&cVar1, func_264(bParam0), 128);
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

char* func_191(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_192(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_188(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_193(int iParam0, int iParam1)
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

bool func_194()
{
	return Global_3145858 != 371211549;
}

int func_195(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_196(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = bParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

struct<4> func_197(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_140(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_146(joaat("CHARACTER"), func_265(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_146(joaat("CHARACTER"), func_265(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_146(joaat("CHARACTER"), func_265(), -1591664384, bParam0);
}

char* func_198(int iParam0, int iParam1)
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

struct<4> func_199(bool bParam0)
{
	int iVar0;

	iVar0 = func_140(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_146(923904168, func_197(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_146(923904168, func_197(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_146(923904168, func_197(bParam0), -740156546, 0);
}

bool func_200(bool bParam0, bool bParam1)
{
	if (func_179(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_266();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_201(bool bParam0)
{
	int iVar0;

	iVar0 = func_140(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_146(271701509, func_197(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_146(271701509, func_197(bParam0), 12999093, 0);
}

bool func_202(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_179(bParam0);
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
			if (func_267(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_203(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_268(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_204(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

int func_205(bool bParam0)
{
	if (!func_45(*bParam0, 0))
	{
		return 0;
	}
	if (!func_269(*bParam0))
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
	DEBUG::_0xA308F935BDECCEC0(40, 158, "[GET_ITEM_WITHIN_ITEM_PACKAGING] Found packaged item: ", func_37(*bParam0, 0));
	return 1;
}

int func_206(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_149(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_37(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_37(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_145(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_146(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_37(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_140(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_37(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_140(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_37(bParam0, 0));
	}
	return iVar0;
}

bool func_207(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

var func_208(bool bParam0, int iParam1)
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

void func_209(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 0, "PLAYER_TOGGLE_PICK_UP_HATS - bEnable = ", MISC::_0xF216F74101968DB0(bParam0));
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_TOGGLE_PICK_UP_HATS - Player doesn't exist!");
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_210(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1957252.f_5.f_7))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "RPG_GLOBAL_UI_ADD_PANEL - calling when ui has not been init");
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1957252.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1957252.f_5.f_7, iParam0);
		if (iVar0 == Global_1957252.f_5.f_14[iParam0 /*102*/])
		{
			DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL_UI_ADD_PANEL - entry already exist at index ", func_270(iParam0, 0));
			return;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL_UI_ADD_PANEL - adding ", func_270(iParam0, 0));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1957252.f_5.f_7, iParam0, "pause_info_panel_list", Global_1957252.f_5.f_14[iParam0 /*102*/]);
}

void func_211(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_ENABLE_HORSE_COMMAND_FOLLOW - Player ped doesn't exist!");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
}

void func_212(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_ENABLE_HORSE_COMMAND_STAY - Player ped doesn't exist!");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
}

void func_213(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_ENABLE_HORSE_COMMAND_FLEE - Player ped doesn't exist!");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
}

void func_214(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_215(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_216(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

char* func_217(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Dead-Eye - Auto Painting";
		case 2:
			return "Dead-Eye - Manual Painting";
		case 3:
			return "Dead-Eye - Stay in Deadeye After Shooting";
		case 4:
			return "Dead-Eye - Fatal Damage Region Display";
		case 5:
			return "Dead-Eye - Critical Damage Region Display";
		case 6:
			return "Extra Honor Levels";
		case 7:
			return "Invite Companions";
		case 8:
			return "Purchase property";
		case 9:
			return "Skinning";
		case 11:
			return "Pick Up Hat";
		case 14:
			return "Looting";
		case 15:
			return "Efficiency";
		case 16:
			return "Body Heat";
		case 17:
			return "Health Meter";
		case 18:
			return "Stamina Meter";
		case 19:
			return "Deadeye Meter";
		case 20:
			return "Horse Health Meter";
		case 21:
			return "Horse Stamina Meter";
		case 30:
			return "RPG Stats";
		case 10:
			return "Pick Herb";
		case 12:
			return "Change Outfits";
		case 13:
			return "Fast Travel";
		case 22:
			return "Disabled Mount Prompt";
		case 24:
			return "Crafting";
		case 25:
			return "Gang Tithing";
		case 26:
			return "Return Animals";
		case 27:
			return "Post Office availability";
		case 28:
			return "Barber Shop availability";
		case 29:
			return "Horse Shop availability";
		case 31:
			return "Horse Whistle";
		case 32:
			return "Horse Command Follow";
		case 33:
			return "Horse Command Stay";
		case 34:
			return "Horse Command Flee";
		case 35:
			return "Horse Inventory";
		case 36:
			return "Horse Item Wheel";
		case 37:
			return "Horse ILO Feed";
		case 38:
			return "Horse ILO Brush";
		case 39:
			return "Horse Core";
		case 40:
			return "Horse Efficiency";
		case 41:
			return "Saddle Transfer";
		case 42:
			return "Bonding With New Horses";
		case 43:
			return "Rhodes Deputy";
		case 44:
			return "Endless Summer";
		case 45:
			return "Endless Summer Weapons";
		case 46:
			return "Eagle Eye";
		case 51:
			return "Gang 1 Complete";
		case 52:
			return "Native Americans Receptive";
		case 53:
			return "Native Americans Trusted";
		case 54:
			return "Compendium";
		case 55:
			return "Ped Reaction to Sick Arthur";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get display name of an unknown feature ", iParam0);
	return "Unknown Feature";
}

bool func_218()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

var func_219(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_220(bool bParam0, int* iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		DEBUG::_0x9A6C65DDDBEC9C52(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Award ", func_271(bParam0, 0), "(", bParam0, ") has already reached maxclaims. Ignoring and returning TRUE.");
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
		func_272(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), iParam1))
		{
			DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Failed to request award ", func_271(bParam0, 0), "(", bParam0, ")");
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), iParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Posse Split - Failed to request award ", func_271(bParam0, 0), "(", bParam0, ")");
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_273(iParam1, bParam0, Var3);
	return 1;
}

bool func_221(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_140(0);
	*iParam1 = { func_146(bParam0, func_199(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_37(bParam0, 0), " eSlot: ", func_145(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_37(bParam0, 0));
		return false;
	}
	return true;
}

bool func_222(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_223(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - ", func_274(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_275(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_277(func_276(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_278(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

void func_224(int iParam0, struct<17> Param1)
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
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   eStatus:                        ", func_279(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
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

char* func_225(int iParam0, int iParam1)
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

int func_226(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

var func_227(bool bParam0)
{
	return WEAPON::_0x6D3AC61694A791C5(bParam0);
}

int func_228()
{
	return Global_1902870;
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_280(*iParam0);
	iVar1 = func_281(*iParam0);
	iVar2 = func_282(*iParam0);
	iVar3 = func_283(*iParam0);
	iVar4 = func_284(*iParam0);
	iVar5 = func_285(*iParam0);
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
	iVar6 = func_286(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_286(iVar1, iVar0);
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
	func_287(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_230(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_231(int iParam0)
{
	if (func_169(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_232(int iParam0, int iParam1)
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

bool func_233(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_232(iParam0, 0), " Seconds ", iVar2);
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

bool func_234(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_235()
{
	if (!func_288())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

void func_236(int iParam0, char* sParam1)
{
	if (iParam0 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: ", iParam0, " is non-positive, ignoring!");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Adding ", iParam0, ", Current = ", Global_1913655.f_127);
	if (func_289())
	{
		Global_1913655.f_125 = MISC::GET_GAME_TIMER();
		Global_1913655.f_126 = sParam1;
		DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Queue is currently empty, setting timer to ", sParam1, "ms");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Queue timer is already started, timer will trigger in ", ((Global_1913655.f_125 + Global_1913655.f_126) - MISC::GET_GAME_TIMER()), "ms");
	}
	Global_1913655.f_127 = (Global_1913655.f_127 + iParam0);
}

char* func_237(int iParam0)
{
	return MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iParam0) / 100f), 2);
}

bool func_238()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_239()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

bool func_240(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_140(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_145(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_241(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_242(int iParam0)
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

int func_243(bool bParam0)
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

int func_244(var uParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_290(iParam1, 0));
	return -1;
}

int func_245(bool bParam0)
{
	int iVar0;

	iVar0 = func_179(bParam0);
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
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_37(bParam0, 0));
	return 0;
}

char[] func_246(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char[] cVar15[8];

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_291(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_292(&Var0, func_199(0));
	}
	if (!func_293(&Var0, &iVar14, &cVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_37(bParam0, 0));
		return 0;
	}
	func_242(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", cVar15, " of item ", func_37(bParam0, 0));
	return cVar15;
}

struct<4> func_247(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_122(bParam0, bParam1, 0) };
	return func_146(bParam0, Var0, Var0.f_4, bParam1);
}

void func_248(var uParam0)
{
	func_170(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_294() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_170(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_170(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

var func_249(bool bParam0, int iParam1)
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

void func_250(int* iParam0, bool bParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_295(iParam0))
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
	DEBUG::_0x4DC69742196F818A(2696, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eLootTable:                     ", Var1.f_4, " (", func_249(Var1.f_4, 0), ")");
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eStatus:                        ", func_296(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.iNumConditionals:  ", Var1.f_7.f_3);
}

bool func_251(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Item Name: ", UNK_0x4379B6FA65D55295(Var3));
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Item Desc: ", UNK_0x4379B6FA65D55295(Var3.f_1));
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @437; //curOff = 94
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with type: ", func_253(Var3.f_2[iVar0 /*3*/].f_2, 0));
					Jump @437; //curOff = 202
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					Jump @437; //curOff = 246
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
					Jump @437; //curOff = 288
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
				}
				else
				{
					DEBUG::_0x4DC69742196F818A(168, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Texture: ", Var3.f_2[iVar0 /*3*/], " with hash ", iVar1);
					DEBUG::_0x4DC69742196F818A(168, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED:    Dict: ", Var3.f_2[iVar0 /*3*/].f_1, " with hash ", iVar2);
					DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED:    Type: ", func_253(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Unable to fillout UI data for item ", func_37(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Unable to find texture of type ", func_253(iParam2, 0), " for item ", func_37(bParam0, 0));
	return false;
}

void func_252(char* sParam0, char* sParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(680, 212, "Set MOB_APP_DISPLAY_TRANSACTION_FEED_UPDATE sFeedText =  ", sParam0, " and sTextureDict =  ", sParam1);
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

char* func_253(int iParam0, int iParam1)
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

int func_254(bool bParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1224357681))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_FOLDER_TAG] Found tag ", func_130(bParam1, 0), " for item ", func_37(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

int func_255(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_45(bParam0, 0))
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

struct<10> func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_257(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, char* sParam12)
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

bool func_258(bool bParam0)
{
	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_STYLE: attempting to process an invalid item!");
	}
	if (func_65(bParam0, -393037696))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_STYLE");
		return true;
	}
	return false;
}

int func_259(int iParam0)
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

char* func_260(int iParam0, int iParam1)
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

bool func_261(bool bParam0, int iParam1)
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
				DEBUG::_0x4DC69742196F818A(10920, 158, "[INVENTORY_ITEM__HAS_TAG_OF_TYPE] Found tag type ", func_297(iParam1, 0), " for item ", func_37(bParam0, 0), ", returning tag : ", func_130(bVar41, 0));
				return bVar41;
			}
			iVar43++;
		}
	}
	return false;
}

char* func_262(bool bParam0)
{
	bool bVar0;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	bVar0 = func_70(bParam0, 0);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_NAME - No name specified for ", func_37(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(bVar0);
}

bool func_263(bool bParam0)
{
	if (func_179(bParam0) == -126813555 || func_179(bParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_264(bool bParam0)
{
	int iVar0;

	if (!func_45(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ALT_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	iVar0 = func_184(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_ALT_NAME - No AltName specified for ", func_37(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

struct<4> func_265()
{
	struct<4> Var0;

	return Var0;
}

bool func_266()
{
	return (func_124(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_298(func_146(joaat("WARDROBE"), func_197(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_267(bool bParam0, int iParam1, int iParam2)
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

bool func_268(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_140(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_37(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_145(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_269(bool bParam0)
{
	return func_65(bParam0, 1279601681);
}

char* func_270(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RPG_PAUSE_PANEL_GENERAL";
		case 1:
			return "RPG_PAUSE_PANEL_HEALTH";
		case 2:
			return "RPG_PAUSE_PANEL_STAMINA";
		case 3:
			return "RPG_PAUSE_PANEL_DEADEYE";
		case 4:
			return "RPG_PAUSE_PANEL_STATS";
		case 5:
			return "RPG_PAUSE_PANEL_HORSE";
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

var func_271(bool bParam0, int iParam1)
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

void func_272(int iParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PUSH_AWARD_MODIFIER: Failed to push modifier ", func_299(bParam1, 0), ", array is full");
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PUSH_AWARD_MODIFIER: Adding modifier ", func_299(bParam1, 0));
}

void func_273(int* iParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_295(iParam0))
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
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eAward:                         ", func_271(Var1.f_4, 0));
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eStatus:                        ", func_300(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7.f_13);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.piOverheadPlayer:  ", Var1.f_7.f_16);
}

char* func_274(int iParam0, int iParam1)
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

bool func_275(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_274(iParam0, 0), " -> ", func_37(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_301(iParam1->f_8, iParam0, sVar0, 2048) || func_301(iParam1->f_8, iParam0, sVar0, 32768)) || func_301(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_301(iParam1->f_8, iParam0, sVar0, 4) || func_301(iParam1->f_8, iParam0, sVar0, 256)) || func_301(iParam1->f_8, iParam0, sVar0, 65536)) || func_301(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_301(iParam1->f_8, iParam0, sVar0, 1) || func_301(iParam1->f_8, iParam0, sVar0, 8)) || func_301(iParam1->f_8, iParam0, sVar0, 65536)) || func_301(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_301(iParam1->f_8, iParam0, sVar0, 1) || func_301(iParam1->f_8, iParam0, sVar0, 16)) || func_301(iParam1->f_8, iParam0, sVar0, 2)) || func_301(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_301(iParam1->f_8, iParam0, sVar0, 8) || func_301(iParam1->f_8, iParam0, sVar0, 4096)) || func_301(iParam1->f_8, iParam0, sVar0, 256)) || func_301(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_276(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_277(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_37(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_302(iParam1, 1, 0, 0);
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
	func_302(iParam1, 2, 0, 0);
	return -1;
}

int func_278(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_37(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_302(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

char* func_279(int iParam0, int iParam1)
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

int func_280(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_43(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_281(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_282(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_283(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_284(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_285(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_286(int iParam0, int iParam1)
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

void func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_303(iParam0, iParam6);
	func_304(iParam0, iParam5);
	func_305(iParam0, iParam4);
	func_306(iParam0, iParam3);
	func_307(iParam0, iParam2);
	func_308(iParam0, iParam1);
}

bool func_288()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_289()
{
	return Global_1913655.f_127 == 0;
}

char* func_290(int iParam0, int iParam1)
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

struct<14> func_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_37(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_145(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_145(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_145(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_309(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_198(iParam6, 0));
	}
	return Var0;
}

void func_292(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_293(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_140(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

int func_294()
{
	return Global_1953612.f_1;
}

bool func_295(int* iParam0)
{
	if (((*iParam0 == 0 && iParam0->f_1 == 0) && iParam0->f_2 == 0) && iParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_296(int iParam0, int iParam1)
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

char* func_297(int iParam0, int iParam1)
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

int func_298(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_310(&uParam0, bParam4, bParam5, iParam6);
}

var func_299(bool bParam0, int iParam1)
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

char* func_300(int iParam0, int iParam1)
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

int func_301(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_311(sParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_302(int iParam0, int iParam1, int iParam2, int iParam3)
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
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_279(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_279(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_279(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_274(iParam2, 0), " and action B to ", func_274(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_312(iParam0, iParam1, iParam2, iParam3);
}

void func_303(int iParam0, int iParam1)
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

void func_304(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_305(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_281(*iParam0);
	iVar1 = func_280(*iParam0);
	if (iParam1 < 1 || iParam1 > func_286(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_286(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_306(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_307(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_308(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

var func_309(bool bParam0, int iParam1)
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

int func_310(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_313(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_37(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_311(char* sParam0, int iParam1)
{
	return (sParam0 && iParam1) != 0;
}

void func_312(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_314(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_274(iParam2, 0), " and action B ", func_274(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_279(iParam1, 0));
}

bool func_313(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_140(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_145(bParam1, 0));
		return false;
	}
	if (!func_268(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_145(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_37(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_145(bParam1, 0));
	return true;
}

void func_314(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_315(&(uParam0->f_4));
}

void func_315(var uParam0)
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

