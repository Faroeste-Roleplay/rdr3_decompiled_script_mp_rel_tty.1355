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
	struct<181> Var0;
	bool bVar182;
	bool bVar183;
	int iVar184;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	DEBUG::_0xF0783374333FD8CE(8, 157, "generic_alcohol_item - starting ...");
	Var0.f_2.f_2 = 1086324736;
	Var0.f_2.f_11.f_1 = 20;
	Var0.f_2.f_33 = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ITEM INTERACTION SCRIPT - HAS_FORCE_CLEANUP_OCCURRED");
		if (!ScriptParam_0.f_3 && !Var0.f_180)
		{
			func_1(0);
		}
		func_2();
	}
	func_3(&ScriptParam_0, &(Var0.f_2));
	Var0.f_180 = 1;
	bVar182 = func_4(&Var0, &(ScriptParam_0.f_1));
	if (Var0.f_180)
	{
		Var0.f_2.f_2 = 1f;
	}
	else
	{
		Var0.f_2.f_2 = 4f;
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		func_1(1);
		func_5();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			if (!Var0.f_180)
			{
				iVar184 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33);
				func_6(&Var0);
				if (iVar184 == 1587785400 || iVar184 == 1183277175)
				{
					func_7(&Var0);
				}
				else if (iVar184 == 1342098323 || iVar184 == 79398913)
				{
					func_8(&Var0);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(Global_33, true))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_33, 1.5f);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			func_9(&(Var0.f_2));
		}
		switch (Var0)
		{
			case 0:
				if (func_10(Var0.f_2, 0))
				{
					func_11(&(Var0.f_2));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_2.f_2 = 1f;
					func_12(&Var0, 3);
				}
				else
				{
					func_12(&Var0, 1);
				}
				break;
			case 1:
				if (!Var0.f_180)
				{
					func_13(iVar184);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
				{
					Var0.f_2.f_1 = (1 + Var0.f_2.f_1);
					DEBUG::_0xF0783374333FD8CE(392, 11, "drink sipped: sData.sItemData.iTimesUsed = ", Var0.f_2.f_1, "; g_DrinkData.fDrinkPotencyMeter = ", Global_1940237.f_9);
					func_14(bVar182);
					func_15(&(Var0.f_2), IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2);
				}
				if (IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2)
				{
					func_16(Var0.f_2, 0);
					func_12(&Var0, 2);
				}
				if (!Var0.f_180)
				{
					if ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33) > 0.2f)
					{
						func_12(&Var0, 2);
					}
				}
				break;
			case 2:
				if (!Var0.f_180)
				{
					if (iVar184 == -1493684811 || iVar184 == -752898125)
					{
						TASK::_0xB35370D5353995CB(Global_33, func_17(Var0.f_2, iVar184), 1048576000 /* Float: 0.25f */);
						func_12(&Var0, 4);
					}
					else if (iVar184 == 1587785400)
					{
						if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"))
						{
							DEBUG::_0xF0783374333FD8CE(8, 158, "Forcing transition now, from AWAITING_DISCARD");
							PED::_0xD65FDC686A031C83(Global_33, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
							PED::_0x6D07B371E9439019(Global_33);
						}
						else
						{
							PED::_0xD65FDC686A031C83(Global_33, joaat("PLAYER_BARCUSTOMER_RETURN_BEER"), 3f);
							PED::_0x6D07B371E9439019(Global_33);
						}
						func_12(&Var0, 4);
					}
					else if (iVar184 != 1342098323)
					{
					}
					else
					{
						PED::_0xD65FDC686A031C83(Global_33, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
						PED::_0x6D07B371E9439019(Global_33);
						func_12(&Var0, 4);
					}
				}
				else
				{
					func_12(&Var0, 4);
				}
				break;
			case 3:
				func_15(&(Var0.f_2), 1);
				func_16(Var0.f_2, 0);
				func_12(&Var0, 4);
				break;
			case 4:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				else if (!bVar183)
				{
					if ((func_18() == -1 && func_19(0)) && func_20(Var0.f_2, 1490540191))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
						{
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_33))
							{
								if (func_21(Global_33, "Player_Sick_Drinking_Cough", joaat("SPEECH_PARAMS_FORCE"), 0, 1, 0, 0, 1))
								{
									bVar183 = true;
								}
							}
						}
					}
					else
					{
						bVar183 = true;
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if ((Var0 <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && Var0.f_180)
	{
		if ((!PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_VAULTING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
		{
			func_15(&(Var0.f_2), 1);
			func_16(Var0.f_2, 0);
		}
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		func_1(0);
	}
	DEBUG::_0xF0783374333FD8CE(8, 158, "generic_alcohol_item - terminating ...");
}

void func_1(int iParam0)
{
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 50, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 49, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 11, 0, iParam0);
}

void func_2()
{
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	DEBUG::_0xF0783374333FD8CE(40, 158, "Interacting with ", func_22(*uParam1, 0));
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_33;
}

float func_4(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;

	DEBUG::_0xF0783374333FD8CE(40, 157, "GET_POTENCY_PER_SIP: sData.sItemData.eItem = ", HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_2));
	switch (uParam0->f_2)
	{
		case joaat("CONSUMABLE_RUM_USED"):
			fVar0 = 0.1f;
			break;
		case joaat("CONSUMABLE_BRANDY_USED"):
			fVar0 = 0.1f;
			break;
		case joaat("CONSUMABLE_GIN_USED"):
			fVar0 = 0.1f;
			break;
		case joaat("CONSUMABLE_RUM"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_SALOON_BEER"):
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case joaat("CONSUMABLE_SALOON_WHISKEY"):
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case joaat("CONSUMABLE_BRANDY"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_GIN"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
			fVar0 = 0.13f;
			break;
		case joaat("CONSUMABLE_WHISKEY"):
			fVar0 = 0.25f;
			break;
		case -1679900928:
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case -520953319:
			fVar0 = 0.13f;
			uParam0->f_180 = 0;
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			fVar0 = 0.3f;
			break;
		case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
			fVar0 = 0.5f;
			break;
		case joaat("CONSUMABLE_PLYMOUTH_GIN"):
			fVar0 = 0.15f;
			break;
		case joaat("CONSUMABLE_CARIB_RUM"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_LONDRY_GIN"):
		case joaat("CONSUMABLE_OLDTOM_GIN"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_COGNAC"):
			fVar0 = 0.25f;
			break;
		case joaat("CONSUMABLE_TENN_WHISKEY"):
		case joaat("CONSUMABLE_IRISH_WHISKEY"):
		case joaat("CONSUMABLE_SCOTCH_WHISKEY"):
			fVar0 = 0.3f;
			break;
		case joaat("CONSUMABLE_CYPRUS_BRANDY"):
			fVar0 = 0.45f;
			break;
		default:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
				if (iVar1 == joaat("P_BOTTLEBEER01A"))
				{
					DEBUG::_0xF0783374333FD8CE(8, 157, "GET_POTENCY_PER_SIP: saloon beer");
					uParam0->f_2 = joaat("CONSUMABLE_SALOON_BEER");
					fVar0 = 0.025f;
					uParam0->f_180 = 0;
				}
				else if (iVar1 == joaat("P_BOTTLEJD01X"))
				{
					DEBUG::_0xF0783374333FD8CE(8, 157, "GET_POTENCY_PER_SIP: saloon whiskey");
					uParam0->f_2 = joaat("CONSUMABLE_SALOON_WHISKEY");
					fVar0 = 0.025f;
					uParam0->f_180 = 0;
				}
			}
			break;
	}
	DEBUG::_0xF0783374333FD8CE(24, 157, "GET_POTENCY_PER_SIP: fPotency = ", fVar0);
	return fVar0;
}

void func_5()
{
	if (PED::IS_PED_MALE(Global_33))
	{
		if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33) == -664271430)
		{
			STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_BEER_TRANS_GENERIC_A"));
		}
		else
		{
			STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_WHISKEY_TRANS_GENERIC_A"));
		}
	}
	else if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33) == -664271430)
	{
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MP_AMB_PLAYER@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@MP_FEMALE_A@TRANS@A_BEER_TRANS_GENERIC_A"));
	}
	else
	{
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MP_AMB_PLAYER@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@MP_FEMALE_A@TRANS@A_WHISKEY_TRANS_GENERIC_A"));
	}
}

void func_6(var uParam0)
{
	if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) > 0.5f)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_AWAY_PROMPT", true, 1);
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (1f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2089200315))
				{
					uParam0->f_1 = 1;
				}
			}
			break;
		case 1:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_ALLOW_CHUG_B", true, 1);
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (2f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2089200315))
				{
					uParam0->f_1 = 2;
				}
			}
			break;
		case 2:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_ALLOW_CHUG_C", true, 1);
			if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= 1f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2089200315))
				{
					uParam0->f_1 = 3;
				}
			}
			break;
		case 3:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			break;
	}
}

void func_7(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 574156416))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "Forcing transition now.");
		PED::_0x6D07B371E9439019(Global_33);
		PED::_0xD65FDC686A031C83(Global_33, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
	}
}

void func_8(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 574156416))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "Forcing transition now.");
		PED::_0x6D07B371E9439019(Global_33);
		PED::_0xD65FDC686A031C83(Global_33, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
	}
}

int func_9(var uParam0)
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
			func_23(uParam0);
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

bool func_10(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_11(var uParam0)
{
	int iVar0;

	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(*uParam0, &(uParam0->f_11));
	DEBUG::_0xA308F935BDECCEC0(168, 157, "GENERIC_ITEM_INTERACTION_FILLOUT_EFFECTS: ", func_22(*uParam0, 0), " Num Effects ", uParam0->f_11);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		DEBUG::_0x4DC69742196F818A(648, 157, "GENERIC_ITEM_INTERACTION_FILLOUT_EFFECTS - Effect ", iVar0, ":", func_24(uParam0->f_11.f_1[iVar0], 0));
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(uParam0->f_11.f_1[iVar0], &(uParam0->f_33[iVar0 /*7*/]));
		DEBUG::_0x4DC69742196F818A(35496, 157, "GENERIC_ITEM_INTERACTION_FILLOUT_EFFECTS - Key ", func_24(uParam0->f_33[iVar0 /*7*/], 0), " Enum ID ", func_25(uParam0->f_33[iVar0 /*7*/].f_1, 0), " Value ", uParam0->f_33[iVar0 /*7*/].f_2, " Time ", uParam0->f_33[iVar0 /*7*/].f_3);
		iVar0++;
	}
}

void func_12(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(680, 158, "SET_ALCOHOL_ITEM_STATE: from ", func_26(*uParam0, 0), " to ", func_26(iParam1, 0));
	*uParam0 = iParam1;
}

void func_13(int iParam0)
{
	if (iParam0 == -1493684811)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("WORLD_HUMAN_BARCUSTOMER") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")))
		{
			TASK::_0xB35370D5353995CB(Global_33, 1587785400, 1f);
		}
	}
	else if (iParam0 == 1587785400)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::_0x0C3CB2E600C8977D(Global_33, 0))
		{
			TASK::_0xB35370D5353995CB(Global_33, -1493684811, 1f);
		}
	}
	else if (iParam0 == -752898125)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"))
		{
			TASK::_0xB35370D5353995CB(Global_33, 1342098323, 1f);
		}
	}
	else if (iParam0 == 1342098323)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::_0x0C3CB2E600C8977D(Global_33, 0))
		{
			TASK::_0xB35370D5353995CB(Global_33, -752898125, 1f);
		}
	}
}

void func_14(bool bParam0)
{
	if (bParam0 > 0f)
	{
		if (func_27())
		{
			func_28(bParam0, 0);
		}
		Global_1940237.f_3 = MISC::GET_GAME_TIMER();
	}
}

void func_15(var uParam0, bool bParam1)
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

	if ((func_20(*uParam0, 1573112293) || func_20(*uParam0, 672467738)) || func_20(*uParam0, -550842268))
	{
		bVar10 = true;
	}
	bVar11 = func_29(*uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1940296.f_26 = 0;
	DEBUG::_0xA308F935BDECCEC0(2216, 157, "GENERIC_ITEM_INTERACTION_APPLY_EFFECTS: ", func_22(*uParam0, 0), " Used: ", uParam0->f_1, " Final Use: ", bParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		DEBUG::_0xF0783374333FD8CE(25725576, 157, "GENERIC_ITEM_INTERACTION_APPLY_EFFECTS - Effect ", iVar0, ":", func_25(uParam0->f_33[iVar0 /*7*/].f_1, 0), " Value ", uParam0->f_33[iVar0 /*7*/].f_2, " Time ", uParam0->f_33[iVar0 /*7*/].f_3, " unit ", uParam0->f_33[iVar0 /*7*/].f_4, " percent ", uParam0->f_33[iVar0 /*7*/].f_5);
		switch (uParam0->f_33[iVar0 /*7*/].f_1)
		{
			case -943921969:
				fVar1 = func_30(0, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_31((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				bVar9 = true;
				break;
			case -1104847406:
				fVar2 = func_30(2, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_32((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 0);
				bVar8 = true;
				break;
			case 381158954:
				fVar3 = func_30(1, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_33((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				break;
			case -416929031:
				fVar4 = func_34((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_35(0, fVar4, 1, 1, bVar10);
				bVar9 = true;
				break;
			case 1857353317:
				fVar5 = func_34((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_35(2, fVar5, 1, 1, bVar10);
				bVar8 = true;
				break;
			case 1681823811:
				fVar6 = func_34((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_35(1, fVar6, 1, 1, bVar10);
				break;
			case -816334026:
				func_36((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
				break;
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[iVar0 /*7*/].f_1)
					{
						case 2062242710:
							fVar7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_38(19, fVar7, bVar11, 1);
							bVar9 = true;
							break;
						case -826379728:
							fVar7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_38(20, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1191740624:
							fVar7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_38(18, fVar7, bVar11, 1);
							break;
						case 1869697234:
							fVar7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_38(0, fVar7, bVar11, 1);
							bVar9 = true;
							break;
						case 1342237631:
							fVar7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_38(2, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1240225157:
							fVar7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_38(1, fVar7, bVar11, 1);
							break;
					}
				}
				break;
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_39(uParam0);
		func_40(*uParam0, bVar8, bVar9, 562618531);
	}
	func_23(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_16(int iParam0, bool bParam1)
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
			func_42(func_41(iParam0));
			break;
		case -611782825:
			DEBUG::_0xF0783374333FD8CE(8, 157, "DO_CUSTOM_EFFECTS_FROM_ITEM - Blending Tonic");
			func_43(-813902658, -2082434331, 1800);
			break;
		case -1088257729:
			DEBUG::_0xF0783374333FD8CE(8, 157, "DO_CUSTOM_EFFECTS_FROM_ITEM - Hardy Tonic");
			func_43(-1685270562, -2038430863, 1800);
			if (func_44() || func_45())
			{
				func_47(func_46(joaat("USED"), 1001560750), 1);
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
			func_48(Var10, 0);
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
			func_49(joaat("STATUS_EFFECT__POISON"));
			break;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			if ((bParam1 || !func_50()) || !PED::IS_PED_ON_FOOT(Global_33))
			{
				return;
			}
			if (iParam0 != joaat("CONSUMABLE_HERB_PRAIRIE_POPPY") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var10 = { Var0 };
				StringCopy(&(Var10.f_10), "generic_puking_item", 32);
				Var10.f_14 = 512;
				func_48(Var10, 0);
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
			func_51();
			break;
	}
}

int func_17(bool bParam0, int iParam1)
{
	switch (func_52(bParam0, -949239683))
	{
		case -476940445:
			if (iParam1 == 1587785400)
			{
				return 1534923913;
			}
			else
			{
				return -2061488501;
			}
			break;
		case -2001232688:
			return -458747598;
	}
	return -2061488501;
}

int func_18()
{
	return Global_1572887.f_13;
}

bool func_19(int iParam0)
{
	return false;
}

bool func_20(bool bParam0, bool bParam1)
{
	if (!func_10(bParam0, 0))
	{
		return func_54(func_53(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_55(bParam1, 0), " for item ", func_22(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

bool func_21(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_56(iParam0, &Var0);
}

var func_22(bool bParam0, int iParam1)
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

void func_23(var uParam0)
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

var func_24(bool bParam0, int iParam1)
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

var func_25(bool bParam0, int iParam1)
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

char* func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "AIS_INIT";
		case 1:
			return "AIS_CONSUMING";
		case 2:
			return "AIS_AWAITING_DISCARD";
		case 3:
			return "AIS_FALLBACK";
		case 4:
			return "AIS_FINISHED";
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

bool func_27()
{
	if (func_57())
	{
		return false;
	}
	return true;
}

void func_28(bool bParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(168, 157, "[DRUNK] Incrementing drunk potency by ", MISC::_0x2B6846401D68E563(bParam0, 4), ".");
	func_58((Global_1940237.f_9 + bParam0), bParam1);
}

int func_29(int iParam0)
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

float func_30(int iParam0, float fParam1)
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

void func_31(float fParam0)
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
	iVar1 = func_59(2);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
	DEBUG::_0xF0783374333FD8CE(152, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Refilling ", fParam0, " Health Tanks ");
	func_60((fParam0 * IntToFloat(iVar1)), 0);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
}

void func_32(float fParam0, bool bParam1)
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
	iVar0 = func_61(2);
	DEBUG::_0xF0783374333FD8CE(2200, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Refilling ", fParam0, " Dead Eye Tanks ( ", iVar0, " per tank )");
	func_62((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_33(float fParam0)
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
	iVar1 = func_63(2);
	func_64((fParam0 * IntToFloat(iVar1)), 0);
}

float func_34(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_35(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_65(iParam0, fParam1, 1);
	}
	func_67(iParam0, (func_66(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_36(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_68())
	{
		func_69(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17414.f_55.f_2459.f_41++;
		if (5 == Global_17414.f_55.f_2459.f_41)
		{
			func_70(109, 0);
		}
	}
}

float func_37(float fParam0, int iParam1)
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

int func_38(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Player Entity is not valid, and therefore cannot be overpowered at this time... ");
		return 0;
	}
	DEBUG::_0xF0783374333FD8CE(2472, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Attribute: ", func_71(iParam0, 0), " will be Overpowered this frame for  ", sParam1, " seconds");
	return func_72(iParam0, sParam1, bParam2, bParam3);
}

void func_39(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(168, 157, "GENERIC_ITEM_INTERACTION_APPLY_FINAL_USE_EFFECTS - Item: ", func_22(*uParam0, 0), " is being processed...");
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
			DEBUG::_0xF0783374333FD8CE(168, 157, "GENERIC_ITEM_INTERACTION_APPLY_FINAL_USE_EFFECTS - Item: ", func_22(*uParam0, 0), " is a Daily Stew Meal! Push RPG Effects... ");
			func_43(-1196069774, joaat("CONSUMABLE__DAILY_STEW"), 8100);
			break;
	}
}

void func_40(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	DEBUG::_0xF0783374333FD8CE(10920, 157, "GENERIC_ITEM_INTERACTION_INCREMENT_STATS - ", func_22(bParam0, 0), ", bDeadeyeEffect - ", MISC::_0xF216F74101968DB0(bParam1), ", bHealthEffect - ", MISC::_0xF216F74101968DB0(bParam2));
	if (bParam2 || func_20(bParam0, -537818634))
	{
		func_47(func_73(joaat("MEDICINE_ITEMS_USED")), 1);
	}
	if (func_20(bParam0, -1457797660))
	{
		func_47(func_73(joaat("PROVISION_ITEMS_USED")), 1);
	}
	if (func_20(bParam0, 1573112293))
	{
		func_75(func_74(bParam0), 1);
	}
	if (func_20(bParam0, 1939071949))
	{
		func_47(func_46(joaat("USED"), joaat("TONIC")), 1);
	}
	if (func_20(bParam0, 1992556171))
	{
		func_47(func_73(joaat("CAMP_STEWS_CONSUMED")), 1);
	}
	if (func_20(bParam0, 1239889275))
	{
		func_47(func_73(joaat("ANTIQUE_BOTTLES_DRUNK")), 1);
	}
	switch (bParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			func_47(func_46(joaat("USED"), joaat("FEED_BAG")), 1);
			break;
	}
	switch (bParam0)
	{
		case -611782825:
			func_47(func_46(joaat("USED"), -1875859641), 1);
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			func_47(func_46(joaat("USED"), joaat("MOONSHINE")), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			func_47(func_46(joaat("USED"), joaat("WHISKEY")), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			func_47(func_46(joaat("USED"), joaat("COCAINE_GUM")), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			func_47(func_46(joaat("USED"), joaat("SNAKE_OIL")), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			func_47(func_46(joaat("USED"), joaat("CHEWING_TOBACCO")), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			func_47(func_46(joaat("USED"), joaat("HORSE_PILLS")), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			func_47(func_46(joaat("USED"), joaat("POTENT_HERBIVORE_BAIT")), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			func_47(func_46(joaat("USED"), joaat("POTENT_PREDATOR_BAIT")), 1);
			break;
	}
	if (func_18() == -1)
	{
		if (bParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
		{
			func_47(func_46(joaat("USED"), joaat("SPECIAL_TONIC")), 1);
		}
	}
	if (bParam1)
	{
		func_47(func_73(joaat("DEADEYE_ITEMS_USED")), 1);
	}
	func_76(bParam0, iParam3);
}

bool func_41(char* sParam0)
{
	struct<5> Var0;

	if (!func_77(&Var0))
	{
		return false;
	}
	if (!func_78(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_78(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_78(&Var0, 39, sParam0, 0, 1))
	{
		return false;
	}
	return func_79(Var0);
}

void func_42(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 157, "DO_CUSTOM_EFFECTS_FROM_ITEM - Animal Essence Tonic - Type: ", func_80(bParam0, 0));
	func_81(bParam0);
	func_82(1, 1);
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_83(iParam1))
	{
		DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Perk Group: ", func_84(iParam1, 0), " is not for Consumables. Bailing... ");
		return 0;
	}
	if (!func_85(iParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Provided Perk Group: ", func_84(iParam1, 0), " is not valid. Bailing... ");
		return 0;
	}
	if (!func_86(iParam0))
	{
		DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Perk Source: ", func_87(iParam0, 0), " is not for Consumables. Bailing... ");
		return 0;
	}
	if (!func_88(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - Provided Perk Source: ", func_87(iParam0, 0), " is not valid. Bailing... ");
		return 0;
	}
	if (!func_89(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2728, 84, "RPG_GLOBAL_CONSUMABLE_PUSH_TO_SOURCE - There was already a Perk Group of Type: ", func_84(Global_1146683.f_35859.f_919[func_90(iParam0, 1) /*12*/], 0), " in Source: ", func_87(iParam0, 0), " disabling previous perk group before attempting to add new Perk Group... ");
		func_91(iParam0);
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 84, "RPG_GLOBAL_CONTENT_EFFECT_PUSH_TO_SOURCE - attempting to active Perk Group: ", func_84(iParam1, 0), " at Perk Source: ", func_87(iParam0, 0), " with Duration: ", iParam2);
	if (func_92(iParam0, iParam1))
	{
		iVar0 = func_93(iParam0);
		Global_1146683.f_47689.f_63[iVar0 /*2*/] = iParam0;
		Global_1146683.f_47689.f_63[iVar0 /*2*/].f_1 = (Global_1275959.f_21 + iParam2);
		DEBUG::_0xA308F935BDECCEC0(680, 84, "RPG_GLOBAL_CONTENT_EFFECT_PUSH_TO_SOURCE - Enabled Source: ", func_87(iParam0, 0), " with Perk Group: ", func_84(iParam1, 0));
		DEBUG::_0xA308F935BDECCEC0(2216, 84, "RPG_GLOBAL_CONTENT_EFFECT_PUSH_TO_SOURCE - Source: ", func_87(iParam0, 0), " will be disabled automatically at timestamp: ", Global_1146683.f_47689.f_1[iVar0 /*2*/].f_1, " Current Time: ", Global_1275959.f_21);
		return 1;
	}
	return 0;
}

bool func_44()
{
	if (func_94())
	{
		return false;
	}
	return Global_1957252.f_1431.f_96 == 0;
}

bool func_45()
{
	if (func_94())
	{
		return false;
	}
	return Global_1957252.f_1431.f_96 == 2;
}

struct<2> func_46(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_47(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_48(struct<16> Param0, int iParam16)
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
	if (!func_95(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_96(&(Param0.f_10)))
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
			func_97(iParam16);
			DEBUG::_0xF0783374333FD8CE(34984, 106, "QUEUE_SCRIPT_LAUNCH: inserting new process script ", &(Param0.f_10), " at queue slot ", iVar0, "; count is now = ", Global_1939645.f_161, "!");
			return;
		}
		iVar0++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 106, "QUEUE_SCRIPT_LAUNCH: Failed to find an expected empty queue slot!");
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Now disabling all Status Effects with Perk Group: ", func_84(iParam0, 0));
	iVar1 = Global_1146683.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146683.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_90(iVar0, 1);
		if (Global_1146683.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Disabling Source: ", func_87(Global_1146683.f_47689.f_1[iVar2 /*2*/], 0), " at index: ", iVar2);
			func_91(iVar0);
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

bool func_50()
{
	return func_98(1);
}

void func_51()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_CURED_BY_ANTIDOTE - Now disabling all Status Effect Sources that are cured by Antidote... ");
	func_49(joaat("STATUS_EFFECT__POISON"));
	func_49(joaat("STATUS_EFFECT__TRACKING"));
}

int func_52(bool bParam0, int iParam1)
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "Failed to fillout item data for item ", func_22(bParam0, 0));
	}
	return 0;
}

bool func_53(bool bParam0)
{
	return bParam0;
}

int func_54(bool bParam0, bool bParam1)
{
	if (!func_99(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_55(bParam1, 0), " for bundle ", func_100(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_55(bool bParam0, int iParam1)
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

bool func_56(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_57()
{
	return func_102(func_101(0));
}

void func_58(bool bParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(168, 157, "[DRUNK] Potency set to ", MISC::_0x2B6846401D68E563(bParam0, 4), ".");
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (bParam0 >= func_103())
		{
			Global_1940237.f_9 = (func_103() - 0.01f);
			DEBUG::_0xA308F935BDECCEC0(168, 157, "[DRUNK] Potency capped to ", MISC::_0x2B6846401D68E563(bParam0, 4), "mounted or driving.");
			return;
		}
	}
	if (bParam0 < 0f)
	{
		Global_1940237.f_9 = 0f;
		PED::_0x06D26A96CA1BCA75(Global_33, 10, Global_1940237.f_9, 0);
	}
	else if (bParam0 >= 1f && Global_1940237.f_14)
	{
		Global_1940237.f_9 = 0.99f;
	}
	else if (bParam0 > 1f)
	{
		Global_1940237.f_9 = 1f;
	}
	else
	{
		Global_1940237.f_9 = bParam0;
	}
	if (bParam1)
	{
		Global_1940237.f_12 = 1;
	}
}

int func_59(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_104(1);
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

void func_60(float fParam0, int iParam1)
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

int func_61(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_104(1);
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

void func_62(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_105(iVar0))
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

int func_63(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_104(1);
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

void func_64(float fParam0, int iParam1)
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

float func_65(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_106();
	func_107(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_108(iParam0, 2);
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Count: ", iVar1);
	if (func_110(iVar0, func_109(iParam0, 2), 1))
	{
		func_111(iParam0, 0, 2);
		iVar1 = 0;
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Reseting Degrade Count to 0, it's a whole new day!");
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Time of Day: ", func_112(iVar0));
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Current Time of Day: ", func_112(func_109(iParam0, 2)));
	}
	if (iVar1 >= 2)
	{
		func_70(103, bParam2);
		DEBUG::_0x1B08D1EB9D8C4931(136, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Dregrade Count is over: ", 2, " uses. Will not work until tomorrow... ");
		return 0f;
	}
	func_113(iParam0, func_106(), 2);
	func_111(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_66(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_104(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DISPLAY_STATE - Failed to retrieve Core Value for ", func_114(iParam0, 0), " Returning -1.0. This is really bad. ");
	return -1f;
}

int func_67(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_104(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_115(iVar0, iParam0, fParam1))
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
			func_116(iParam0, 7000, iParam5);
		}
		func_117(iVar0, iParam0, fParam1);
		DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE_CORE - Caching Player Attribute Core ", func_114(iParam0, 0), " Value Data. Setting to: ", fParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_118()));
		func_119(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_68()
{
	if (Global_1957252.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_120(Global_1957252.f_1431.f_107, 0);
}

void func_69(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_121(13, 2);
	iVar1 = func_122(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_123(fVar0, 0f, 100f);
	iVar2 = func_122(fVar0);
	DEBUG::_0xF0783374333FD8CE(10648, 84, "RPG_GLOBAL_ALTER_WEIGHT - Altering Weight amount by: ", fParam0, " New Weight: ", fVar0, " Force Weight Update: ", MISC::_0xF216F74101968DB0(bParam1));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_ALTER_WEIGHT - Old Weight Rank: ", iVar1, " New Weight Rank: ", iVar2);
	if (iVar1 != iVar2)
	{
		Global_1957252.f_1431.f_107 = func_106();
		func_124(&(Global_1957252.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_125(13, fVar0, 2);
	Global_1957252.f_1431.f_99 = bParam1;
}

void func_70(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_126(iParam0, &iVar0, &iVar1);
	if (!func_127(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_128(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_129(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

char* func_71(int iParam0, int iParam1)
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

int func_72(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_71(iParam0, 0), " will be Overpowered this frame for  ", fParam1, " seconds on local player...");
	if (fParam1 == -1f)
	{
		if (func_130(iParam0))
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
		DEBUG::_0x6D2A5155B260E879(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_71(iParam0, 0), " was set to a Duration of: ", fParam1, " this is really bad. Correct this. ");
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_131(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_132(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_131(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_49(joaat("STATUS_EFFECT__TRACKING"));
			func_133(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_131(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_134(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_49(joaat("STATUS_EFFECT__POISON"));
			func_135(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_135(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_135(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_71(iParam0, 0), " cannot be overpowered... Why are you doing this?");
			return 0;
	}
	return 1;
}

struct<2> func_73(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_74(bool bParam0)
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

void func_75(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_46(joaat("EATEN"), func_136(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_47(func_137(joaat("HERBS_EATEN")), iParam1);
}

void func_76(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_18() == 0)
	{
		bVar0 = func_52(bParam0, -949239683);
		DEBUG::_0xF0783374333FD8CE(10920, 183, "GENERIC_ITEM_DAILY_CHALLENGES ", func_22(bParam0, 0), " with Tag ", func_55(bVar0, 0), " removed with reason ", func_138(iParam1, 0));
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_20(bParam0, -136654233))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_CANNEDGOODSEATEN_00"), 1);
		}
		if ((func_20(bParam0, 1765172170) || 1443104131 == bVar0) || -1919515848 == bVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TOBACCOSMOKEDCHEWED_00"), 1);
		}
		if (func_20(bParam0, 1573112293))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_HERBSTASTED_00"), 1);
		}
		if (func_20(bParam0, -2085281117) && !func_20(bParam0, -1237028043))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_FRESHPRODUCEEATEN_00"), 1);
		}
		if (func_20(bParam0, 200705431))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_DRYGOODSEATEN_00"), 1);
		}
		if (((func_20(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_20(bParam0, -839724752)) || func_20(bParam0, 1264218912)) || bParam0 == joaat("CONSUMABLE_OFFAL"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_MEATEATEN_00"), 1);
		}
		if (func_20(bParam0, -764700608))
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

bool func_77(int iParam0)
{
	var uVar0;

	MISC::_COPY_MEMORY(iParam0, &uVar0, 5);
	if (!func_139(1))
	{
		return false;
	}
	*iParam0 = Global_1072032.f_28503[51 /*4*/].f_3;
	return true;
}

bool func_78(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4)
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
	DEBUG::_0x4DC69742196F818A(559272, 41, "ANIMAL_TRANSFORMATION__XML__SETUP_QUERY__MOVE_TO_NODE - moved to \"", func_140(iParam1), "\" with ", bParam2, " and ", sParam3, " - node ", sVar0, " to ", uParam0->f_1);
	return true;
}

bool func_79(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_141(&uParam0, 61, 1);
}

char* func_80(int iParam0, int iParam1)
{
	switch (iParam0)
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
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_81(bool bParam0)
{
	bool bVar0;

	func_142(bParam0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 1, false, false);
	func_143();
	func_144(8388608);
	if (func_145(bParam0, &bVar0))
	{
		DEBUG::_0xF0783374333FD8CE(42, "[__CHANGE_TO_ANIMAL_COMMON] Model is: ", func_146(bVar0, 0), " hash: ", bVar0);
		func_148(func_147(bVar0));
	}
}

void func_82(bool bParam0, bool bParam1)
{
	if (func_149(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_150(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (!bParam0)
	{
		func_151(0);
	}
	else
	{
		if (bParam1)
		{
			func_152(0, 0, 0, 1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Not clearing the spectator lock!");
			UNK_0x355E72323AEE83CC(36, 6);
		}
		func_153(0);
		func_154(&(Global_1102630.f_3849));
		Global_1102630.f_3849 = 0f;
		Global_1102630.f_3849.f_5 = 1;
		Global_1102630.f_3849.f_16 = 0;
		Global_1102630.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_17 = { Global_1901988.f_50.f_1, Global_1901988.f_50.f_1, Global_1901988.f_50.f_1 };
		Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_155(&(Global_1102630.f_3888));
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
	func_156(Global_1102630.f_3849, 36);
	func_157(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

bool func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_158(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 152)
	{
		return true;
	}
	return false;
}

char* func_84(int iParam0, int iParam1)
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

bool func_85(int iParam0)
{
	int iVar0;

	iVar0 = func_158(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

bool func_86(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

char* func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT1";
		case -2059285007:
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__BEAVER_TOOTH";
		case -2006026692:
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_5";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_13";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_7";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONSUMABLE__HARDY_TONIC";
			return "RPG_GLOBAL_PERK_SOURCE_ID__EQUIPMENT__SLOT_OUTFIT";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_19";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__RAM_HORN";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__AWARENESS_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONSUMABLE__STEW";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_8";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_18";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__INTUITION_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_11__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_13__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONSUMABLE__BLENDING_TONIC";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_16";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_10";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__EAGLE_EYE_PLUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_16__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_6";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_5__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_15";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_19__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__BUCK_ANTLER";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_9";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_14";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_NET_CAMP__REGENERATION";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ALL_SOURCES";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_4__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__ANIMAL_FOCUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_10__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_6__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__INVALID";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__PROTECTION_TRADER_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_20";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__END";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__DIVINATION_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_INSTANCED__EQUIPMENT_OVERRIDE";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__JAVELINA_TUSK";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_23__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ITEM__TRINKET__SNOWY_EGRET";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_ACTIVE_DEED__SLOT_4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_1__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_27__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_12";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__FOCUS_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_25__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_15__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_0__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_22__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_5";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_8__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_11";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_12__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__EFFICIENCY_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__MERCY";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_26__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_17";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__LEGENDARY_ANIMAL_LAUNCH_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__EAGLE_EYE_LEGENDARY_ANIMAL";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_7__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_14__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__PERCEPTION_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__CONTENT_NOTORIETY__PASSIVE_MODE";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_2__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_17__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_18__SLOT1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_20__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_31__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__MASTER_TRACKER";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_29__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__POTENTIAL_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_28__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_9__SLOT2";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_30__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__STATUS_EFFECT__SLOT_1";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_21__SLOT4";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_3__SLOT3";
			return "RPG_GLOBAL_PERK_SOURCE_ID__UNLOCK__ROLE__MASTER_DISTILLER_BONUS";
			return "RPG_GLOBAL_PERK_SOURCE_ID__ABILITY_CARD__PLAYER_24__SLOT1";
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

bool func_88(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_89(int iParam0)
{
	if (!func_88(iParam0))
	{
		return false;
	}
	return Global_1146683.f_35859.f_919[func_90(iParam0, 1) /*12*/] == -1;
}

int func_90(int iParam0, int iParam1)
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

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_88(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - invalid Source ID ", iParam0);
		return 0;
	}
	iVar0 = func_90(iParam0, 1);
	if (!func_85(Global_1146683.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_158(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Attempting to disable all Perks in Perk Group: ", func_84(Global_1146683.f_35859.f_919[iVar0 /*12*/], 0), " it has: ", Global_1146683.f_35859[iVar3 /*6*/].f_5, " perks...");
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146683.f_35859[iVar3 /*6*/][iVar4];
		DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Disabling Perk: ", func_159(iVar1, 0), " from Source: ", func_87(iParam0, 0));
		switch (func_160(iParam0, iVar1))
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - deactivating perk ", func_159(iVar1, 0), " directly");
				func_161(iVar1, iParam0, iVar4);
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
						DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - removing perk ", func_159(iVar1, 0), " from the activation queue");
						func_161(iVar1, iParam0, iVar4);
						func_162(&(Global_1146683.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146683.f_35859.f_11700 = (Global_1146683.f_35859.f_11700 - 1);
						Global_1146683.f_35859.f_9503[iVar5 /*3*/] = { Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/] };
						func_162(&(Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - ignoring perk ", func_159(iVar1, 0), "...");
				Jump @977; //curOff = 554
				iVar2 = func_163(iVar1, 1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_159(iVar1, 0), " currently has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				func_164(iVar2, -1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_159(iVar1, 0), " has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				if (Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_165(iVar2, 0);
					DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - all sources for Perk: ", func_159(iVar1, 0), " have been removed, disabling it");
					iVar6 = 0;
					while (iVar6 < Global_1146683.f_35859.f_9502)
					{
						if (Global_1146683.f_35859.f_9302[iVar6] != iVar1)
						{
							DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_159(iVar1, 0), " does not equal perk in slot: ", func_159(Global_1146683.f_35859.f_9302[iVar6], 0));
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_159(iVar1, 0), " matches perk in slot! ");
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
			func_166(&(Global_1146683.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_88(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(648, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - invalid Source ID ", iParam0, " Name: ", func_87(iParam0, 0));
		return false;
	}
	iVar0 = func_90(iParam0, 1);
	if (!func_85(iParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(648, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - invalid Perk ID ", iParam1, " Name: ", func_84(iParam1, 0));
		return false;
	}
	iVar1 = func_158(iParam1, 1);
	if (Global_1146683.f_35859.f_919[iVar0 /*12*/] == iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Perk Group is already active: ", func_84(iParam1, 0));
		return true;
	}
	if (func_85(Global_1146683.f_35859.f_919[iVar0 /*12*/]))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - disabling previously set perk source");
		func_91(iParam0);
	}
	Global_1146683.f_35859.f_919[iVar0 /*12*/] = iParam1;
	DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Attempting to enable all Perks in Perk Group: ", func_84(Global_1146683.f_35859.f_919[iVar0 /*12*/], 0), " it has: ", Global_1146683.f_35859[iVar1 /*6*/].f_5, " perks...");
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859[iVar1 /*6*/].f_5)
	{
		iVar2 = Global_1146683.f_35859[iVar1 /*6*/][iVar4];
		iVar3 = func_163(iVar2, 1);
		switch (func_167(iParam0, iVar2))
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Activating perk ", func_159(iVar2, 0), " from enable");
				func_168(iVar2, iParam0, iVar4);
				break;
			case 1:
				DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - adding perk ", func_159(iVar2, 0), " + source ", func_87(iParam0, 0), " to activation queue");
				Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/] = iVar2;
				Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/].f_2 = iVar4;
				Global_1146683.f_35859.f_11700++;
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - ignoring perk ", func_159(iVar2, 0), "...");
				Jump @731; //curOff = 555
				if (Global_1146683.f_35859.f_3116[iVar3 /*31*/].f_29 <= 0)
				{
					Global_1146683.f_35859.f_9302[Global_1146683.f_35859.f_9502] = iVar2;
					Global_1146683.f_35859.f_9502++;
					DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - adding perk ", func_159(iVar2, 0), " to enabled queue. Number of enabled perks is now: ", Global_1146683.f_35859.f_9502);
				}
				func_164(iVar3, 1);
				DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL__ENABLE_PERK_SOURCE_INTERNAL - Registering perk ", func_159(iVar2, 0), " from source ", func_87(iParam0, 0), ". total sources: ", Global_1146683.f_35859.f_3116[iVar3 /*31*/].f_29);
				iVar4++;
			}
			return true;
		}

int func_93(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (func_169(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_170(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_171(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_172(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_173(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_86(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_174(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

bool func_94()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_95(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_96(char* sParam0)
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

void func_97(int iParam0)
{
	if (func_95(iParam0, 1))
	{
		func_175(1);
	}
}

bool func_98(int iParam0)
{
	return func_176(iParam0);
}

bool func_99(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

var func_100(bool bParam0, int iParam1)
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

struct<2> func_101(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_102(struct<2> Param0)
{
	return func_177(Param0, 1, 4);
}

bool func_103()
{
	return 0.75f;
}

int func_104(int iParam0)
{
	return func_179(func_178(iParam0));
}

bool func_105(int iParam0)
{
	float fVar0;

	fVar0 = (func_180(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

int func_106()
{
	return Global_1902870;
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_181(*iParam0);
	iVar1 = func_182(*iParam0);
	iVar2 = func_183(*iParam0);
	iVar3 = func_184(*iParam0);
	iVar4 = func_185(*iParam0);
	iVar5 = func_186(*iParam0);
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
		iVar7 = func_187(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_188(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_108(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_104(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to retrieve Core Degrade Count for ", func_114(iParam0, 0), " Returning -1. This is really bad. ");
	return -1;
}

int func_109(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_104(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to retrieve Core Degrade Time of Day for ", func_114(iParam0, 0), " Returning -1. This is really bad. ");
	return -15;
}

bool func_110(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_189(iParam1) || !func_189(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_111(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_104(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to set Core Degrade Count for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_112(int iParam0)
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
	iVar0 = func_181(iParam0);
	iVar1 = func_182(iParam0);
	iVar2 = func_183(iParam0);
	iVar3 = func_184(iParam0);
	iVar4 = func_185(iParam0);
	iVar5 = func_186(iParam0);
	switch (func_191(iParam0))
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

void func_113(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_104(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", func_112(iParam1));
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", func_112(iParam1));
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to set Core Degrade Time of Day for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_114(int iParam0, int iParam1)
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

bool func_115(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_192(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_104(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", iParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", iParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Failed to set Core Display Time for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), ". This is really bad. ");
			break;
	}
}

void func_117(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_193(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_194(iParam1), fParam2, -1);
	}
	else
	{
		DEBUG::_0x6D2A5155B260E879(40, 84, "__RPG_GLOBAL_HANDLE_BLACKBOARD_FOR_ATTRIBUTE - INVALID BLACK BOARD NAME for Attribute Core: ", func_114(iParam1, 0));
	}
}

bool func_118()
{
	return func_178(0);
}

void func_119(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_104(2);
	}
	sVar0 = Global_1275959.f_21;
	DEBUG::_0xA308F935BDECCEC0(43432, 84, "__RPG_GLOBAL_CACHE_ATTRIBUTE_CORE_DATA - Caching Attribute Core ", func_114(iParam0, 0), " Value Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_118()), " Time Stamp: ", sVar0);
	func_195(iParam0, sParam1, iParam3);
	if (bParam2)
	{
		func_196(iParam0, sVar0, iParam3);
	}
}

bool func_120(int iParam0, bool bParam1)
{
	return func_110(func_106(), iParam0, bParam1);
}

float func_121(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_104(1);
	}
	switch (iParam1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_197(0, 0), " Value: ", Global_1957252.f_1431.f_26[iParam0]);
			return Global_1957252.f_1431.f_26[iParam0];
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_197(1, 0), " Value: ", Global_1957252.f_1565.f_2.f_26[iParam0]);
			return Global_1957252.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Couldn't retrieve Cached Attribute XP data for Attribute: ", func_71(iParam0, 0));
	return -1f;
}

int func_122(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_123(float fParam0, float fParam1, float fParam2)
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

void func_124(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_181(*uParam0);
	iVar1 = func_182(*uParam0);
	iVar2 = func_183(*uParam0);
	iVar3 = func_184(*uParam0);
	iVar4 = func_185(*uParam0);
	iVar5 = func_186(*uParam0);
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
	iVar6 = func_187(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_187(iVar1, iVar0);
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
	func_188(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_125(int iParam0, char* sParam1, int iParam2)
{
	if (!func_198(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_104(2);
	}
	DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE - Caching Attribute ", func_71(iParam0, 0), " XP Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_118()));
	func_199(iParam0, sParam1, iParam2);
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

void func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_127(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_200(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_129(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_201(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_202(iParam0, 0));
		return false;
	}
	if (func_203(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_202(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_204(iParam0, 1)) || func_205(32768))
	{
		if (!func_204(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_206())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_128(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_129(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

bool func_130(int iParam0)
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

char* func_131(int iParam0)
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
	DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_GET_OVERPOWER_POSTFX_STRING_FOR_ATTRIBUTE - Attribute: ", func_71(iParam0, 0), " does not have an overpower post fx... Returning NULL ");
	return "";
}

void func_132(int iParam0)
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
	iVar1 = func_59(2);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Refilling ", iParam0, " Health Tanks ");
	func_60(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
}

void func_133(int iParam0)
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
	iVar1 = func_63(2);
	func_64(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_134(int iParam0, bool bParam1)
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
	iVar0 = func_61(2);
	DEBUG::_0xF0783374333FD8CE(2184, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Refilling ", iParam0, " Dead Eye Tanks ( ", iVar0, " per tank )");
	func_62(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_135(int iParam0, bool bParam1, bool bParam2)
{
	func_67(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_136(int iParam0)
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

struct<2> func_137(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

char* func_138(int iParam0, int iParam1)
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

bool func_139(int iParam0)
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

char* func_140(int iParam0)
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
	DEBUG::_0xD9911C7B5F8CD69C(168, 41, "ANIMAL_TRANSFORMATION__XML__GET_RQID - ", func_207(iParam0, 0), " undefined");
	DEBUG::_0x4423BBAB7EB2B96B(8, 41, "ANIMAL_TRANSFORMATION__XML__GET_RQID - undefined query");
	return "";
}

bool func_141(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&bVar0, uParam0))
	{
	}
	DEBUG::_0x4DC69742196F818A(43176, 41, "ANIMAL_TRANSFORMATION__XML__RETRIEVE_ATTRIBUTE__HASH - filled out ", UNK_0x4379B6FA65D55295(bVar0), " ", bVar0, " from \"", func_140(iParam1), "\"");
	return bVar0;
}

void func_142(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_CLOTHING_SYSTEM_SET_PLAYER_TYPE] Setting to: ", func_80(iParam0, 0), " from: ", func_80(func_208(), 0));
	Global_1953612.f_1 = iParam0;
}

void func_143()
{
	func_209(128);
}

void func_144(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_CLEAR_FLAG] Clearing: ", func_210(iParam0, 0));
	Global_1953612 = (Global_1953612 - (Global_1953612 && iParam0));
}

bool func_145(bool bParam0, var uParam1)
{
	int iVar0;

	switch (bParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			*uParam1 = joaat("MP_MALE");
			break;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			*uParam1 = joaat("MP_FEMALE");
			break;
		default:
			iVar0 = func_211(0, bParam0);
			if (iVar0 != -1)
			{
				*uParam1 = func_212(iVar0);
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_SYSTEM_RETURN_CURRENT_PLAYER_MODEL] MP Player Model Not Specified");
				*uParam1 = joaat("MP_MALE");
				return false;
			}
			break;
	}
	return true;
}

var func_146(bool bParam0, int iParam1)
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

bool func_147(bool bParam0)
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_77(&Var2))
	{
		return false;
	}
	if (!func_78(&Var2, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_78(&Var2, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_78(&Var2, 40, bParam0, 0, 1))
	{
		return false;
	}
	if (!func_78(&Var2, 59, 0, 0, 1))
	{
		return false;
	}
	iVar1 = func_213(&Var2, 12);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (!func_78(&Var2, 60, bVar0, 0, 1))
	{
		return false;
	}
	return func_214(Var2);
}

void func_148(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(10408, 208, "[METAPED_CLOTHING_SYSTEM_SET_ANIMAL_OUTFIT] Setting to: ", func_215(bParam0, 0), " | Hash:  ", bParam0, " from: ", func_215(Global_1953612.f_3, 0));
	Global_1953612.f_3 = bParam0;
}

int func_149(int iParam0)
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

bool func_150(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_151(int iParam0)
{
	if (func_216(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_217(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

void func_152(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_218(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_219(iParam0, 0));
	if (!func_220(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_221(128) && !func_222(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_223() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_151(18);
	}
	func_224(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

int func_153(int iParam0)
{
	if (func_225(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_217(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

void func_154(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_155(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_156(struct<30> Param0, int iParam30)
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
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_226(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_226(Param0.f_6.f_9, 0));
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

void func_157(struct<7> Param0, var uParam7, var uParam8, int iParam9)
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

int func_158(int iParam0, int iParam1)
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

char* func_159(int iParam0, int iParam1)
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

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_227(iParam0);
	iVar1 = Global_1275959;
	iVar2 = func_163(iParam1, 1);
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Source: ", func_87(iParam0, 0), " Perk: ", func_159(iParam1, 0), " Deactivation Trigger: ", func_228(Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_1, 0));
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

int func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_88(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid Source ID ", iParam1);
		return 0;
	}
	if (!func_229(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid perk ID ", iParam0);
		return 0;
	}
	iVar0 = func_163(iParam0, 1);
	func_230(iParam0, iParam1, iParam2);
	if (func_231(Global_1146683.f_35859.f_3116[iVar0 /*31*/]) && func_232(iParam0, Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Now checking Stack Group: ", func_233(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " for any perks that could be enabled now that this perk is diabled... ");
		vVar1 = { func_234(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_235(vVar1))
		{
			if (func_236(vVar1.x, vVar1.y, vVar1.z))
			{
				func_237(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_238(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
				DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Failed to activate next availible perk in Stack Group: ", func_233(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " there was a critical failure... ");
			}
		}
		else
		{
			func_238(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - No suitable replacement for active perk in Stack Group: ", func_233(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), "...");
		}
	}
	return 1;
}

void func_162(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_163(int iParam0, int iParam1)
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

void func_164(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 84, "__RPG_GLOBAL__ALTER_SOURCES_FOR_PERK_ID - Perk: ", func_159(func_239(iParam0, 1), 0), " is being altered by: ", iParam1, " to a total of: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_165(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	DEBUG::_0xF0783374333FD8CE(168, 84, "__RPG_GLOBAL__SET_SOURCES_FOR_PERK_ID - Perk: ", func_159(func_239(iParam0, 1), 0), " is being set to: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_166(var uParam0)
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

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_227(iParam0);
	iVar1 = Global_1275959;
	iVar2 = func_163(iParam1, 1);
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "RPG_GLOBAL_STAT_GET_ACTIVATION_TYPE -	Source: ", func_87(iParam0, 0), " Perk: ", func_159(iParam1, 0), " Activation Trigger: ", func_240(Global_1146683.f_35859.f_3116[iVar2 /*31*/], 0));
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

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_88(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - invalid Source ID ", iParam1);
		return 0;
	}
	if (!func_229(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - invalid perk ID ", iParam0);
		return 0;
	}
	iVar0 = func_163(iParam0, 1);
	if (!func_241(iParam2))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - invalid perk group index ", iParam2);
		return 0;
	}
	bVar1 = func_231(Global_1146683.f_35859.f_3116[iVar0 /*31*/]);
	if (bVar1 && func_242(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - There is an active perk already in stack group: ", func_233(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " will need to disable perk first... ");
		vVar2 = { func_243(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (!func_230(vVar2.x, vVar2.y, vVar2.z))
		{
			DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - critical failure to deactivate active perk in stacking group: ", func_233(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " bailing out... ");
			return 0;
		}
	}
	if (func_236(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_237(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_170(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_171(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_173(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

void func_175(int iParam0)
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

bool func_176(int iParam0)
{
	return func_244(Global_1940296.f_38, iParam0);
}

bool func_177(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_245(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_246(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_178(int iParam0)
{
	return func_247(&(Global_1957252.f_1565), iParam0, 1);
}

int func_179(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_180(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_248(2)));
}

int func_181(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_249(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_182(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_183(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_184(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_185(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_186(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_250(iParam0, iParam6);
	func_251(iParam0, iParam5);
	func_252(iParam0, iParam4);
	func_253(iParam0, iParam3);
	func_254(iParam0, iParam2);
	func_255(iParam0, iParam1);
}

bool func_189(int iParam0)
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
	iVar0 = func_186(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_185(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_184(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_181(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_182(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_183(iParam0);
	if (iVar5 < 1 || iVar5 > func_187(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

char* func_190(int iParam0)
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

int func_191(int iParam0)
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
	iVar0 = func_183(iParam0);
	switch (func_182(iParam0))
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
	iVar2 = func_181(iParam0);
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

int func_192(int iParam0)
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_PED_ATTRIBUTE_FROM_RPG_GLOBAL_CORE - Attribute Core: ", func_114(iParam0, 0), " does not have an associated PED Attribute. This is REALLY bad, correct immediately... ");
	return 0;
}

char* func_193(int iParam0)
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

char* func_194(int iParam0)
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

void func_195(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_104(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Failed to set Core Value for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), ". This is really bad. ");
			break;
	}
}

void func_196(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_104(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Failed to set Last Updated Timestamp for ", func_114(iParam0, 0), " Pool: ", func_190(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_197(int iParam0, int iParam1)
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

bool func_198(int iParam0)
{
	if (func_130(iParam0))
	{
		return true;
	}
	else if (func_256(iParam0))
	{
		return true;
	}
	return false;
}

void func_199(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_104(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_71(iParam0, 0), " Pool: ", func_190(iParam2), " to ", fParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_71(iParam0, 0), " Pool: ", func_190(iParam2), " to ", fParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Failed to set Attribute XP for ", func_71(iParam0, 0), " Pool: ", func_190(iParam2), ". This is really bad. ");
			break;
	}
}

bool func_200(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_201(int iParam0)
{
	if (func_204(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_202(int iParam0, int iParam1)
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
			return "TF_TRAIN_ROBBERY_STOP2";
			return "TF_TRAIN_ROBBERY_TRGTS";
			return "TF_TRAIN_ROBBERY_HLDP";
			return "TF_TRAIN_ROBBERY_RESIST";
			return "TF_TRAIN_ROBBERY_ROB_IN_COMBAT";
			return "TF_LOANSHARKING";
			return "TF_LS_DONATE";
			return "TF_LS_CONFRONT";
			return "TF_LS_SEARCH";
			return "TF_LS_SKIN";
			return "TF_LS_LOOT";
			return "TF_LS_FIRST_SEARCH";
			return "TF_LS_RETURN_DEBT";
			return "TF_COMPANIONS";
			return "TF_COMPANION_WHEEL";
			return "TF_INVITE_COMPANION";
			return "TF_COMPANION_ACTIVITY_COOL_DOWN";
			return "TF_COMPANION_ACTIVITY_BLOCKED";
			return "TF_COMPANION_PROPERTY_RESTRICTION";
			return "TF_COMPANIONS_REVIVE";
			return "TF_COMPANIONS_INJURED_RETURN_TO_CAMP";
			return "TF_COMPANIONS_ABANDONED";
			return "TF_COMPANION_DRAG";
			return "TF_ITEM_REQUEST_FIRST_TRACKED";
			return "TF_COMPANION_REQUEST_OBTAINED";
			return "TF_COMPANIONS_RETURN_TO_CAMP";
			return "TF_DOG_LEVEL_UP";
			return "TF_CAMP_NO_COMBAT";
			return "TF_TOWN_NO_COMBAT";
			return "TF_TOWN_DISMOUNT";
			return "TF_CAMP_CRAFT_QUICK";
			return "TF_CAMP_DISABLE_COMBAT";
			return "TF_FIRST_RC_APPROACHED";
			return "TF_FIRST_RC_AREA_APPROACHED";
			return "TF_FIRST_RSC_TASK";
			return "TF_FIRST_RSC_TASK_AREA";
			return "TF_FIRST_RC_TASK";
			return "TF_FIRST_RC_NO_TASK";
			return "TF_RCM_FIRST_CARAVAN_CAMP_LETTER";
			return "TF_RCM_CARAVAN_CAMP_LETTER";
			return "TF_JOURNAL_ACCESS0";
			return "TF_JOURNAL_ACCESS1";
			return "TF_JOURNAL_ACCESS2";
			return "TF_FIRST_HERB_FOUND";
			return "TF_COACHROB_INTRO";
			return "TF_SKINNING";
			return "TF_MEAT_SPOIL_SKINNING";
			return "TF_BED";
			return "TF_DEADEYE_1";
			return "TF_EAGLE_EYE";
			return "TF_ROWBOAT";
			return "TF_HUNTING_BLIP";
			return "TF_TRACKING_ZONE_DISCOVERED";
			return "TF_TRACKING_ZONE_AREA_BUSY";
			return "TF_TRACKING_ZONE_COOLDOWN";
			return "TF_AMB_DUEL_START";
			return "TF_AMB_DUEL_CHAL";
			return "TF_AMB_DUEL_CAN_CHAL";
			return "TF_AMB_DUEL_NO_WEAPON";
			return "TF_RECIPE_JOURNAL_ADD";
			return "TF_HERB_JOURNAL_ADD";
			return "TF_HERB_JOURNAL_PROP";
			return "TF_HERB_FULL_JOURNAL_ADD";
			return "TF_BERRY_BLACK_BERRY";
			return "TF_BERRY_EVERGREEN_HUCKLEBERRY";
			return "TF_BERRY_RED_RASPBERRY";
			return "TF_BERRY_WINTERGREEN_BERRY";
			return "TF_HERB_ALASKAN_GINSENG";
			return "TF_HERB_AMERICAN_GINSENG";
			return "TF_HERB_YARROW";
			return "TF_HERB_ENGLISH_MACE";
			return "TF_HERB_MILKWEED";
			return "TF_HERB_VANILLA_FLOWER";
			return "TF_HERB_OLEANDER_SAGE";
			return "TF_HERB_DESERT_SAGE";
			return "TF_HERB_HARRIETUM_OFFICINALIS";
			return "TF_HERB_HUMMINGBIRD_SAGE";
			return "TF_HERB_RED_SAGE";
			return "TF_HERB_VIOLET_SNOWDROP";
			return "TF_HERB_WILD_FEVERFEW";
			return "TF_HERB_BURDOCK_ROOT";
			return "TF_HERB_INDIAN_TOBACCO";
			return "TF_HERB_GOLDEN_CURRANT";
			return "TF_HERB_BLACK_CURRANT";
			return "TF_HERB_PRAIRIE_POPPY";
			return "TF_HORSE_HERB_WILD_CARROTS";
			return "TF_HORSE_HERB_COMMON_BULRUSH";
			return "TF_MUSHROOM_BAY_BOLETE";
			return "TF_MUSHROOM_CHANTERELLES";
			return "TF_MUSHROOM_PARASOL_MUSHROOM";
			return "TF_MUSHROOM_RAMS_HEAD";
			return "TF_SPICE_CREEPING_THYME";
			return "TF_SPICE_OREGANO";
			return "TF_SPICE_WILD_MINT";
			return "TF_HEALTH_XP_ITEM";
			return "TF_DEADEYE_XP_ITEM";
			return "TF_STAMINA_XP_ITEM";
			return "TF_DEADEYE_ITEM_MAX_LEVEL";
			return "TF_HEALTH_ITEM_MAX_LEVEL";
			return "TF_STAMINA_ITEM_MAX_LEVEL";
			return "TF_HEALTH_LEVEL_UP";
			return "TF_DEADEYE_LEVEL_UP";
			return "TF_STAMINA_LEVEL_UP";
			return "TF_TITHE_ENTER_CAMP";
			return "TF_TITHE_FIRST_REQUEST";
			return "TF_TITHE_HAVE_REQUEST";
			return "TF_TITHE_FINISH_REQUEST";
			return "TF_TITHE_FOUND_REQUEST";
			return "TF_TITHE_GIVE_MONEY";
			return "TF_TITHE_GIVE_CARCASS";
			return "TF_TITHE_CRAFT1";
			return "TF_TITHE_CRAFT2";
			return "TF_WAYPOINTS";
			return "TTL_LAW_WITNESS_INV";
			return "TTL_LAW_WITNESS_KNOWN";
			return "TTL_LAW_WITNESS_UNKNOWN";
			return "TTL_LAW_WITNESS_SCARE";
			return "TTL_LAW_WANTED_1";
			return "TTL_LAW_WANTED_2";
			return "TTL_LAW_WANTED_1_GUA";
			return "TTL_LAW_WANTED_2_GUA";
			return "TTL_LAW_EVADE";
			return "TTL_LAW_ARREST";
			return "TTL_LAW_LOITERING";
			return "TTL_LAW_TRESPASSING";
			return "TTL_LAW_INTERROGATE";
			return "TTL_LAW_APPEARANCE_MEMORY";
			return "TTL_LAW_BOUNTY_SPAWN";
			return "TTL_LAW_BOUNTY_RESPAWN";
			return "TTL_LAW_BOUNTY_JAIL";
			return "TTL_PLAYER_ARRESTED";
			return "TTL_LAW_CAPTURED";
			return "TTL_LAW_EXTRA_COPS1";
			return "TTL_LAW_EXTRA_COPS2";
			return "TTL_LAW_LESS_COPS";
			return "TTL_LAW_BOUNTY_SAVED";
			return "TTL_LAW_PURSUIT_END";
			return "TTL_LAW_BOUNTY_POSTED";
			return "TTL_LAW_CRIME_WITH_MASK";
			return "TTL_LAW_CHANGED_CLOTHES";
			return "TTL_LAW_GRABBED_POSTER";
			return "TTL_LAW_JAIL_SENTENCE";
			return "TTL_LAW_JAIL_ESCAPE";
			return "TTL_AGGRO_PED";
			return "TF_WAIT_CAMP_UPGRADE";
			return "TF_WAIT_CAMP_CHORE";
			return "TTL_CAMPING_BUY";
			return "TF_PLAYER_CHORES_1";
			return "TF_PLAYER_CHORES_2";
			return "TF_PLAYER_CHORES_3";
			return "TF_PLAYER_CHORES_START";
			return "TF_PLAYER_CHORES_START_BEECHERS";
			return "TTL_WPN_PLACEEXPLOSIVE";
			return "TF_RARE_FISH";
			return "TTL_FIGHTINT";
			return "TF_CAMPFIRE_OFFER1";
			return "TF_CAMPFIRE_GREET";
			return "TF_SP_GANG_HIDEOUTS";
			return "TF_SP_GANG_CAMPS";
			return "TF_CAMPITEM_REST_OPT";
			return "TF_CAMPFIRE_SIT";
			return "TF_RP_KNOWN_RECIPE";
			return "TF_RP_SPECIAL_HORSE_MEDICINE";
			return "TF_RP_SPECIAL_HORSE_REVIVER";
			return "TF_RP_HORSE_OINTMENT";
			return "TF_RP_SPECIAL_HORSE_STIMULANT";
			return "TF_RP_SUPER_MEAL";
			return "TF_RP_SPECIAL_MEDICINE";
			return "TF_RP_SPECIAL_RESTORATIVE";
			return "TF_RP_SPECIAL_SNAKE_OIL";
			return "TF_RP_SPECIAL_TONIC";
			return "TF_RP_POTENT_HERBIVORE_BAIT";
			return "TF_RP_POTENT_PREDATOR_BAIT";
			return "TF_RP_PREDATOR_BAIT";
			return "TF_RP_DYNAMITE_ARROW";
			return "TF_RP_FIRE_ARROW";
			return "TF_RP_IMPROVED_ARROW";
			return "TF_RP_POISON_ARROW";
			return "TF_RP_SMALL_GAME_ARROW";
			return "TF_RP_VOLATILE_DYNAMITE";
			return "TF_RP_FIRE_BOTTLE";
			return "TF_RP_VOLATILE_FIRE_BOTTLE";
			return "TF_RP_HOMING_TOMAHAWK";
			return "TF_RP_IMPROVED_THROWING_KNIFE";
			return "TF_RP_IMPROVED_TOMAHAWK";
			return "TF_RP_POISON_THROWING_KNIFE";
			return "TF_RP_SPLIT_POINT_AMMO";
			return "TF_RP_EXPRESS_EXPLOSIVE_AMMO";
			return "TF_RP_SHOTGUN_BUCKSHOT_INCENDIARY";
			return "TF_RP_SHOTGUN_SLUG_EXPLOSIVE";
			return "TF_BAIT_HERBIVORE_USED";
			return "TF_BAIT_PREDATOR_USED";
			return "TF_TREASUREMAP_FIRST_FIND";
			return "TF_TREASUREMAP_LS_HORSECHASE";
			return "TF_TREASURE_HUNTER_REMINDER";
			return "TF_DINO_BONES";
			return "TF_DINO_BONES_FIRST_REMINDER";
			return "TF_DINO_BONES_FIRST_REMINDER_STAGE1";
			return "TF_DINO_BONES_LAST_REMINDER";
			return "TF_DINO_BONES_ALL_TURNED_IN";
			return "TF_DINO_BONES_FINGER_BONE";
			return "TF_DINO_BONES_INVITATION_USED";
			return "TF_LEGENDARY_FISH_INVITATION_USED";
			return "TF_LITTLE_EGRET_BEFORE_QUEST";
			return "TF_LITTLE_EGRET_PLUME_TURN_IN";
			return "TF_REDDISH_EGRET_BEFORE_QUEST";
			return "TF_REDDISH_EGRET_PLUME_TURN_IN";
			return "TF_SNOWY_EGRET_BEFORE_QUEST";
			return "TF_SNOWY_EGRET_PLUME_TURN_IN";
			return "TF_HERON_FEATHERS_BEFORE_QUEST";
			return "TF_HERON_FEATHERS_TURN_IN";
			return "TF_SPOONBILL_FEATHERS_BEFORE_QUEST";
			return "TF_SPOONBILL_FEATHERS_TURN_IN";
			return "TF_EXOTIC_FOUND";
			return "TF_GATOR_EGGS_BEFORE_QUEST";
			return "TF_GATOR_EGGS_FOUND";
			return "TF_GATOR_EGGS_TURN_IN";
			return "TF_LEGENDARY_FISH_CAUGHT";
			return "TF_LEGENDARY_FISH_CAUGHT_AFTER_STAGE1";
			return "TF_LEGENDARY_FISH_MAILED_ONE";
			return "TF_LEGENDARY_FISH_MAILED_TEN";
			return "TF_LEGENDARY_FISH_MAILED_ALL";
			return "TF_DINO_BONE_MAILED_ONE";
			return "TF_DINO_BONE_MAILED_FIFTEEN";
			return "TF_DINO_BONE_MAILED_ALL";
			return "TF_ROCK_CARVING_MAILED_ONE";
			return "TF_ROCK_CARVING_MAILED_FIVE";
			return "TF_ROCK_CARVING_MAILED_ALL";
			return "TF_TAXIDERMY_MAILED_ONE";
			return "TF_TAXIDERMY_MAILED_TWO";
			return "TF_TAXIDERMY_MAILED_THREE";
			return "TF_TAXIDERMY_MAILED_FOUR";
			return "TF_TAXIDERMY_MAILED_ALL";
			return "TF_RARE_FISHING_SPOT_FOUND";
			return "TF_RARE_FISHING_SPOT_FOUND_NO_POLE";
			return "TF_RARE_FISHING_SPOT_AFTER_ABIGAIL1";
			return "TF_RARE_ORCHID_ACUNAS_STAR_FOUND";
			return "TF_RARE_ORCHID_CIGAR_FOUND";
			return "TF_RARE_ORCHID_CLAMSHELL_FOUND";
			return "TF_RARE_ORCHID_DRAGONS_MOUTH_FOUND";
			return "TF_RARE_ORCHID_GHOST_FOUND";
			return "TF_RARE_ORCHID_LADY_SLIPPER_FOUND";
			return "TF_RARE_ORCHID_LADY_OF_NIGHT_FOUND";
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER_FOUND";
			return "TF_RARE_ORCHID_NIGHT_SCENTED_FOUND";
			return "TF_RARE_ORCHID_QUEENS_FOUND";
			return "TF_RARE_ORCHID_RAT_TAIL_FOUND";
			return "TF_RARE_ORCHID_SPARROWS_EGG_FOUND";
			return "TF_RARE_ORCHID_SPIDER_FOUND";
			return "TF_RARE_ORCHID_ACUNAS_STAR";
			return "TF_RARE_ORCHID_CIGAR";
			return "TF_RARE_ORCHID_CLAMSHELL";
			return "TF_RARE_ORCHID_DRAGONS_MOUTH";
			return "TF_RARE_ORCHID_GHOST";
			return "TF_RARE_ORCHID_LADY_SLIPPER";
			return "TF_RARE_ORCHID_LADY_OF_NIGHT";
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER";
			return "TF_RARE_ORCHID_NIGHT_SCENTED";
			return "TF_RARE_ORCHID_QUEENS";
			return "TF_RARE_ORCHID_RAT_TAIL";
			return "TF_RARE_ORCHID_SPARROWS_EGG";
			return "TF_RARE_ORCHID_SPIDER";
			return "TF_ROCK_CARVINGS";
			return "TF_ROCK_CARVINGS_CABIN";
			return "TF_ROCK_CARVINGS_FIRST_REMINDER";
			return "TF_ROCK_CARVINGS_FIRST_REMINDER_STAGE1";
			return "TF_ROCK_CARVINGS_LAST_REMINDER";
			return "TF_ROCK_CARVINGS_INVITATION_USED";
			return "TF_TAXIDERMY_INVITATION_USED";
			return "TF_LEGEND_OF_EAST_OUTFIT_UNLOCKED";
			return "TF_LEGEND_OF_EAST_OUTFIT_ACQUIRED";
			return "TF_FULL_AMMO_REINFORCED_EQUIPMENT";
			return "TF_TX_RABBIT_FOUND";
			return "TF_TX_SQUIRREL_FOUND";
			return "TF_TX_CARDINAL_FOUND";
			return "TF_TX_RAT_FOUND";
			return "TF_TX_WOODPECKER_FOUND";
			return "TF_TX_CHIPMUNK_FOUND";
			return "TF_TX_OPOSSUM_FOUND";
			return "TF_TX_ORIOLE_FOUND";
			return "TF_TX_ROBIN_FOUND";
			return "TF_TX_SONGBIRD_FOUND";
			return "TF_TX_SPARROW_FOUND";
			return "TF_TX_TOAD_FOUND";
			return "TF_TX_SKUNK_FOUND";
			return "TF_TX_BULLFROG_FOUND";
			return "TF_TX_CEDARWAXWING_FOUND";
			return "TF_TX_BAT_FOUND";
			return "TF_TX_BLUEJAY_FOUND";
			return "TF_TX_CROW_FOUND";
			return "TF_TX_BEAVER_FOUND";
			return "TF_TX_ALL_INGREDIENTS_FOUND";
			return "TF_TX_FIRST_ORDER_RECEIVED";
			return "TF_TX_FINAL_ORDER_RECEIVED";
			return "TF_TX_ORDER_RECEIVED";
			return "TF_TX_HUNTING_WEAPONS";
			return "TF_CHAL_LOG";
			return "TF_CHAL_LOG_2";
			return "TF_CHAL_MULTIPLE_LOG_UNLOCKED";
			return "TF_CHAL_BANDIT_LOG_UNLOCKED";
			return "TF_CHAL_EXPLORER_LOG_UNLOCKED";
			return "TF_CHAL_GAMBLER_LOG_UNLOCKED";
			return "TF_CHAL_HERBALIST_LOG_UNLOCKED";
			return "TF_CHAL_HORSEMANSHIP_LOG_UNLOCKED";
			return "TF_CHAL_MASTER_HUNTER_LOG_UNLOCKED";
			return "TF_CHAL_SHARPSHOOTER_LOG_UNLOCKED";
			return "TF_CHAL_SURVIVALIST_LOG_UNLOCKED";
			return "TF_CHAL_WEAPONS_EXPERT_LOG_UNLOCKED";
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED";
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED_02";
			return "TF_REINFORCED_HEALTH_TANK";
			return "TF_REINFORCED_STAMINA_TANK";
			return "TF_REINFORCED_DEADEYE_TANK";
			return "TF_EA_LOGGING_HM";
			return "TF_EA_LOGGING_HM_FAIL";
			return "TF_RSC_H_JRN_AD";
			return "TF_RSC_H_JRN_UP";
			return "TF_ANIMAL_NEW_SKIN";
			return "TF_ANIMAL_NEW_PLUCK";
			return "TF_FIRST_SKIN";
			return "TF_FIRST_CARRY_COOK";
			return "TF_LEGENDARY_SKINNING";
			return "TF_LEGENDARY_ABANDONED";
			return "TF_MP_LEGENDARY_FIRST_SKIN";
			return "TF_MP_FIRST_SKIN";
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

bool func_203(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_202(iParam0, 0), " Seconds ", iVar2);
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

bool func_204(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_205(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_206()
{
	if (!func_257())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

char* func_207(int iParam0, int iParam1)
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

int func_208()
{
	return Global_1953612.f_1;
}

void func_209(int iParam0)
{
	func_258(&Global_1280543, iParam0);
}

char* func_210(int iParam0, int iParam1)
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

var func_211(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_259(iParam0, 0, Global_1280545.f_52.f_31, bParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_260(iParam0, iVar0);
}

var func_212(int iParam0)
{
	return Global_1280545.f_52[iParam0 /*3*/].f_1;
}

int func_213(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	DEBUG::_0x4DC69742196F818A(2696, 41, "ANIMAL_TRANSFORMATION__XML__GET_NODE_COUNT - ", DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0), " \"", func_140(iParam1), "\" nodes found");
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

bool func_214(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_141(&uParam0, 61, 0);
}

var func_215(bool bParam0, int iParam1)
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

bool func_216(var uParam0, int iParam1, int iParam2)
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

char* func_217(int iParam0)
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

void func_218(var uParam0)
{
	Global_1102630.f_26.f_12 = uParam0;
}

char* func_219(int iParam0, int iParam1)
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

bool func_220(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

bool func_221(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_222(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
}

int func_223()
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

void func_224(int iParam0)
{
	if (func_261(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

bool func_225(var uParam0, int iParam1, int iParam2)
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

char* func_226(int iParam0, int iParam1)
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

int func_227(int iParam0)
{
	if (func_169(iParam0))
	{
		return (func_93(iParam0) % 32);
	}
	return Global_1275959;
}

char* func_228(int iParam0, int iParam1)
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

bool func_229(int iParam0)
{
	int iVar0;

	iVar0 = func_163(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_230(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_90(iParam1, 1);
	iVar1 = func_163(iParam0, 1);
	iVar2 = func_158(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_159(iParam0, 0), " from a source that hasn't previously enabled it ", func_87(iParam1, 0));
		return false;
	}
	if (!Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - deactivating perk ", func_159(iParam0, 0), " and source ", func_87(iParam1, 0));
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_262(iVar3, 1);
		if (!func_263(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 - func_264(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - removing perk ", func_159(iParam0, 0), " to stat mod ", func_265(iVar3, 0), " with strength ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/].f_1);
			func_266(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_267(iVar6))
		{
		}
		else
		{
			iVar8 = func_268(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1] = (Global_1146683.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146683.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146683.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 0;
				func_269(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_231(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_232(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_229(iParam0))
	{
		return false;
	}
	if (!func_270(iParam1))
	{
		return false;
	}
	iVar0 = func_271(iParam1, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

char* func_233(int iParam0, int iParam1)
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

Vector3 func_234(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_272(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146683.f_35859.f_9503[iVar0 /*3*/];
}

bool func_235(vector3 vParam0)
{
	if (!func_229(vParam0.x))
	{
		return false;
	}
	if (!func_88(vParam0.y))
	{
		return false;
	}
	if (!func_241(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_236(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_90(iParam1, 1);
	iVar1 = func_163(iParam0, 1);
	iVar2 = func_158(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2184, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to activate perk with data - Group Index: ", iVar2, " Source Index: ", iVar0, " Perk Index: ", iVar1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_159(iParam0, 0), " from a source that hasn't previously enabled it ", func_87(iParam1, 0));
		return false;
	}
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1275959.f_21;
	if (Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - activating perk ", func_159(iParam0, 0), " and source ", func_87(iParam1, 0), " at POSIX time: ", Global_1275959.f_21);
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_262(iVar3, 1);
		if (!func_263(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 + func_264(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_159(iParam0, 0), " to stat mod ", func_265(iVar3, 0), " with strength ", func_264(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_159(iParam0, 0), " to stat mod ", func_265(iVar3, 0), " with total ", Global_1146683.f_2169[iVar5 /*205*/].f_201);
			func_273(iVar3);
		}
		iVar4++;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - perk: ", func_159(iParam0, 0), " Flag Count: ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28);
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_267(iVar6))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_274(iVar6, 0), " is not valid... skipping... ");
		}
		else if (!func_275(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_274(iVar6, 0), " is not currently disabled by tunables... skipping... ");
		}
		else
		{
			iVar8 = func_268(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146683.f_21645[iVar8 /*209*/].f_208)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Turning on flag ", func_274(iVar6, 0));
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 1;
				func_276(iVar6);
			}
		}
		iVar7++;
	}
	func_277(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_237(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_270(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_233(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_271(iParam0, 1);
	if (!func_229(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk: ", func_159(iParam1, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_88(iParam2))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Source: ", func_87(iParam2, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_241(iParam3))
	{
		DEBUG::_0x83407B92D46F25C3(136, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Index in Group: ", iParam3, " is not valid... Bailing out... ");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Setting Perk: ", func_159(iParam1, 0), " active for Perk Group: ", func_233(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_238(int iParam0)
{
	int iVar0;

	if (!func_270(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_233(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_271(iParam0, 1);
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA_AS_INVALID - Setting Perk: ", func_159(-1, 0), " active for Perk Group: ", func_233(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

int func_239(int iParam0, int iParam1)
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

char* func_240(int iParam0, int iParam1)
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

bool func_241(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STATS_IS_PERK_INDEX_IN_GROUP_VALID - Invalid perk group index ", iParam0);
		return false;
	}
	return true;
}

bool func_242(int iParam0)
{
	int iVar0;

	if (!func_270(iParam0))
	{
		return false;
	}
	iVar0 = func_278(iParam0);
	if (!func_229(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_243(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_270(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_233(iParam0, 0), " is not valid... Bailing out... ");
		return vVar0;
	}
	iVar3 = func_271(iParam0, 1);
	return Global_1146683.f_35859.f_9286[iVar3 /*3*/];
}

bool func_244(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_245(struct<2> Param0)
{
	if (!func_279(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_280(Param0))
	{
		return false;
	}
	return true;
}

int func_246(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_281(Param0);
	}
	return -1;
}

bool func_247(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_59(2) * 2;
		case 1:
			return func_63(2) * 2;
		case 2:
			return func_61(2) * 2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_MAX_SIZE - Attribute Core: ", func_114(iParam0, 0), " is INVALID. Correct this immediately... ");
	return -1;
}

int func_249(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_250(int iParam0, int iParam1)
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

void func_251(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_252(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_182(*iParam0);
	iVar1 = func_181(*iParam0);
	if (iParam1 < 1 || iParam1 > func_187(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_187(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_253(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_254(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_255(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_256(int iParam0)
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

bool func_257()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_258(var uParam0, int iParam1)
{
	func_282(uParam0, iParam1);
}

int func_259(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		return func_259(iParam0, iParam1, (iVar0 - 1), bParam3);
	}
	if (bParam3 > Global_1280545.f_84[iParam0 /*21*/][iVar0 /*2*/])
	{
		return func_259(iParam0, iVar0 + 1, iParam2, bParam3);
	}
	return iVar0;
}

var func_260(int iParam0, int iParam1)
{
	return Global_1280545.f_84[iParam0 /*21*/][iParam1 /*2*/].f_1;
}

bool func_261(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

int func_262(int iParam0, int iParam1)
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

bool func_263(int iParam0)
{
	int iVar0;

	iVar0 = func_262(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_264(var uParam0)
{
	bool bVar0;

	if (uParam0->f_2 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_265(*uParam0, 0), " has a Tunable associated with impact, looking up... ");
		bVar0 = func_283(794259616, uParam0->f_2, uParam0->f_1, "");
		DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_265(*uParam0, 0), " has an associated Tunable with impact: ", bVar0);
		return bVar0;
	}
	DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_265(*uParam0, 0), " using default Impact: ", uParam0->f_1);
	return uParam0->f_1;
}

char* func_265(int iParam0, int iParam1)
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

void func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_263(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - Stat Mod: ", func_265(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_262(iParam0, 1);
	if (!func_284(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_265(iParam0, 0));
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - stat mod ", func_265(iParam0, 0), " is no longer impacting stat ", func_285(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_286(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_287(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - removing stat ", func_285(Global_1146683.f_2169[iVar0 /*205*/], 0), " from subscribed action ", func_288(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
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

bool func_267(int iParam0)
{
	int iVar0;

	iVar0 = func_268(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_268(int iParam0, int iParam1)
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

void func_269(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Now Disabling Stat Flag: ", func_274(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_289();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_290();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - End Bleeding for local player. ");
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer being tracked... ");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_291(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer drained! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_291(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer disoriented! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_291(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer poisoned. Stop periodic icon. ");
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_70(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer in a Toxic Cloud! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_291(iParam0));
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
			DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Remove VFX ", func_274(iParam0, 0));
			func_293(func_292(iParam0));
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
			func_294();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_284(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_284(16);
			break;
	}
}

bool func_270(int iParam0)
{
	int iVar0;

	iVar0 = func_271(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_271(int iParam0, int iParam1)
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

int func_272(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_278(iParam0);
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
		iVar64 = func_163(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 1);
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "RPG_GLOBAL_GET_ACTIVATION_QUEUE_PERK_INDEX_FROM_NEXT_AVAILIBLE_PERK_IN_STACK_GROUP - Now processing Perk: ", func_159(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 0), "...");
		if (Global_1146683.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146683.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_295(Global_1146683.f_35859.f_9503[iVar65 /*3*/], Global_1146683.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_296(Global_1146683.f_35859.f_9503[iVar65 /*3*/]) };
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

void func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_263(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - Stat Mod: ", func_265(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_262(iParam0, 1);
	if (!func_284(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_265(iParam0, 0));
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - subcribing stat mod ", func_265(iParam0, 0), " to stat ", func_285(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_286(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_287(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
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
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - adding stat ", func_285(Global_1146683.f_2169[iVar0 /*205*/], 0), " to action ", func_288(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
	Global_1146683.f_47561[iVar1 /*25*/][Global_1146683.f_47561[iVar1 /*25*/].f_23] = Global_1146683.f_2169[iVar0 /*205*/];
	Global_1146683.f_47561[iVar1 /*25*/].f_23++;
}

char* func_274(int iParam0, int iParam1)
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

bool func_275(var uParam0)
{
	bool bVar0;

	DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_274(*uParam0, 0), " Associated Tunable: ", UNK_0x4379B6FA65D55295(uParam0->f_1));
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_297(794259616, uParam0->f_1, 1, "");
		DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_274(*uParam0, 0), " is has Tunable Enabled State: ", MISC::_0xF216F74101968DB0(bVar0));
		return bVar0;
	}
	return true;
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Now Enabling Stat Flag: ", func_274(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_289();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_290();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Start Wound for local player.");
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now being tracked...");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_291(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now drained! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_291(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now disoriented! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_291(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is poisoned. Start core periodic icon. ");
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_70(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now in a Toxic Cloud! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_291(iParam0));
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
			iVar2 = func_292(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_298(iParam0, 0));
			func_299(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_298(iParam0, 1));
			func_299(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_298(iParam0, 2));
			func_299(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_298(iParam0, 3));
			func_299(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Moment to Recuperate VFX start. ");
			iVar2 = func_292(iParam0);
			func_299(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Slow and Steady VFX start. ");
			iVar2 = func_292(iParam0);
			func_299(iVar2, 4, 1, -1, 0);
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
			func_300();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_284(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_284(16);
			break;
	}
}

void func_277(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Attempting to play Activation Sound: ", func_301(iParam0, 0));
	sVar0 = func_302(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound name associated with Activation Sound: ", func_301(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound name: ", sVar0, " associated with Activation Sound: ", func_301(iParam0, 0));
	sVar1 = func_303(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound set associated with Activation Sound: ", func_301(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound set: ", sVar1, " associated with Activation Sound: ", func_301(iParam0, 0));
	DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Playing sound name: ", sVar0, " in sound set: ", sVar1, " for Activation Sound: ", func_301(iParam0, 0));
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275959.f_8, sVar1, false, 0, 0);
}

int func_278(int iParam0)
{
	int iVar0;

	if (!func_270(iParam0))
	{
		return -1;
	}
	iVar0 = func_271(iParam0, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/];
}

bool func_279(int iParam0)
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

int func_280(int iParam0)
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

int func_281(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_304(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_283(bool bParam0, bool bParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_305(bParam0, bParam1, &Var0))
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

bool func_284(int iParam0)
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
	DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL_STATS__ADD_STAT_ID_TO_UPDATE_QUEUE - adding stat ", func_285(iParam0, 0), " to update queue. Total stats in queue: ", Global_1146683.f_2165);
	return true;
}

char* func_285(int iParam0, int iParam1)
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

bool func_286(int iParam0)
{
	int iVar0;

	iVar0 = func_287(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_287(int iParam0, int iParam1)
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

char* func_288(int iParam0, int iParam1)
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

void func_289()
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
		if (!func_244(Global_1277758[Global_1275959 /*87*/].f_86, 1))
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

void func_290()
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

char* func_291(int iParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_POSTFX_NAME - Stat Flag: ", func_274(iParam0, 0), " does not have a Post FX name. Should you set one up? ");
	return "";
}

int func_292(int iParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_SCRIPT_ID - Stat Flag: ", func_274(iParam0, 0), " does not have a Particle FX. Should you set one up? ");
	return 0;
}

void func_293(int iParam0)
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

void func_294()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__DISABLE_NED_KELLY_BASE_INTERNAL - Cleaning up Ned Kelly base properties and application... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275959.f_8);
}

bool func_295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_229(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0, 1);
	iVar2 = Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_231(Global_1146683.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146683.f_35859.f_9286[func_271(iVar2, 1) /*3*/];
		Var4 = { func_296(iVar3) };
		if (iVar3 != iParam0 && Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - A stronger perk in the perk stack group: ", func_233(iVar2, 0), " is already active. Active Perk: ", func_159(iVar3, 0));
			return false;
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Evaluating Activation Trigger: ", func_240(Global_1146683.f_35859.f_3116[iVar0 /*31*/], 0), " for activation... ");
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_306() && !func_307())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can only be activated when you are in Free Roam or running COOP. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can be activated! ");
			return true;
		case -2010146101:
			if (!func_306())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can only be activated when you are in Free Roam. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_227(iParam1);
			if (iVar1 == Global_1275959)
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can only be activated from REMOTE players. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can be activated from Remote Player Index: ", iVar1);
			return true;
		case -2129621195:
			iVar1 = func_227(iParam1);
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
			iVar1 = func_227(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is Invalid... ");
				return false;
			}
			if (iVar1 != Global_1275959 && !func_308(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT an Ally... ");
				return false;
			}
			if (!func_309(512, iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT in Dead Eye.. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can be activated! ");
			return true;
		case -1503245593:
			if (!Global_1957252.f_1716[8])
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player is not currently Lassoed... ");
				return false;
			}
			iVar1 = func_227(iParam1);
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " can be activated! ");
			return true;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_159(iParam0, 0), " has no activation logic defined, fix this... ");
	return false;
}

struct<31> func_296(int iParam0)
{
	int iVar0;

	iVar0 = func_163(iParam0, 1);
	return Global_1146683.f_35859.f_3116[iVar0 /*31*/];
}

bool func_297(bool bParam0, bool bParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_305(bParam0, bParam1, &Var0))
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

char* func_298(int iParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_BONE - Stat Flag: ", func_274(iParam0, 0), " does not have a Particle FX bone. Should you set one up? ");
	return "";
}

void func_299(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_300()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__ENABLE_NED_KELLY_BASE_INTERNAL - Ned Kelly is equipped... Initializing Base properties... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275959.f_8, 0.7f);
}

char* func_301(int iParam0, int iParam1)
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

char* func_302(int iParam0)
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

char* func_303(int iParam0)
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

bool func_304(struct<2> Param0, int iParam2)
{
	if (!func_245(Param0))
	{
		return false;
	}
	func_310(iParam2);
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

bool func_305(bool bParam0, bool bParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_311(iVar7);
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

bool func_306()
{
	return Global_1572887.f_6;
}

bool func_307()
{
	if (!Global_1048577)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Mission controller not active, not in COOP. Returning FALSE... ");
		return false;
	}
	if (!func_245(func_101(0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - No active/valid UID. Returning FALSE... ");
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is not a mission. Returning FALSE...");
		return false;
	}
	if (func_312(Global_524288.f_40400))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is coop sub-type. Returning TRUE...");
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Content is not COOP. Returning FALSE. ");
	return false;
}

bool func_308(char* sParam0)
{
	if (func_313(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_314(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

bool func_309(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

void func_310(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_311(int iParam0)
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

bool func_312(int iParam0)
{
	return (((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414) || iParam0 == 31269700);
}

bool func_313(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_314(char* sParam0)
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
		func_315(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_316(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

void func_315(char* sParam0)
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
	func_316(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_316(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

