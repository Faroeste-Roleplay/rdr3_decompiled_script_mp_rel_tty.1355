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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	iLocal_13 = 1;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	bVar0 = func_13(iLocal_30, 0);
	bVar1 = func_14(iLocal_41);
	bVar2 = ENTITY::DOES_ENTITY_EXIST(iLocal_31);
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_16))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Barcustomer Shutting Down");
		iLocal_29 = 6;
		return;
	}
	if (iLocal_29 <= 1 && func_15(Global_34, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true)) >= 1600f)
	{
		return;
	}
	if (iLocal_29 <= 1 && ENTITY::GET_ENTITY_SPEED(Global_33) >= 8f)
	{
		return;
	}
	if ((iLocal_29 > 1 && iLocal_29 != 6) && Global_1940170.f_51)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: SERVING PLAYER GOING TO WAITING", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
		func_16();
		iLocal_29 = 2;
		bLocal_38 = true;
	}
	if (iLocal_29 > 1 && iLocal_29 != 6)
	{
		if ((iLocal_29 != 5 && iLocal_29 != 2) && !bVar0)
		{
			func_16();
			if (bLocal_33)
			{
				iLocal_29 = 5;
				iLocal_28 = 0;
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: CHARACTER NOT ACTIVE going to cleaning", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: CHARACTER NOT ACTIVE NOT SERVED GOING TO WAIT", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				iLocal_29 = 2;
			}
			return;
		}
		if (!bVar2)
		{
			iLocal_29 = 6;
			return;
		}
		if (PED::IS_PED_IN_COMBAT(iLocal_31, 0))
		{
			iLocal_29 = 6;
			return;
		}
	}
	func_17();
	func_18(bVar0);
	switch (iLocal_29)
	{
		case 0:
			DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: RUNNING INIT  THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
			iVar3 = func_19();
			iLocal_52 = func_21(func_20(), iVar3);
			DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: CURRENT SALOON ", func_22(iLocal_52, 0));
			if (iLocal_52 == -1)
			{
				return;
			}
			bLocal_32 = false;
			bLocal_39 = false;
			STREAMING::REQUEST_MODEL(joaat("P_COIN01X"), false);
			bLocal_38 = false;
			iLocal_27 = 0;
			if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
			{
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEBEER01X"), false);
				iVar4 = joaat("WORLD_HUMAN_BARTENDER_BEER");
				iLocal_18 = joaat("CUSTOMER_GRAB_BEER");
				iLocal_19 = joaat("CUSTOMER_GRAB_BEER_MALE_B");
				iLocal_21 = joaat("BARFRONT_TRANS_UNDER_BEER");
				iLocal_22 = joaat("UNDERBAR_TRANS_OVERBAR_BEER");
				iLocal_23 = joaat("BARTENDER_RETURN_TO_IDLE");
				iLocal_24 = joaat("BARTENDER_CLEAN_BEER_OVER_BAR");
				iLocal_25 = -1931194237;
				iLocal_26 = joaat("BARTENDER_CLEAN_BEER_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BARTENDER_BEER"), 262144, 0, 0);
			}
			else
			{
				iVar4 = joaat("WORLD_HUMAN_BARTENDER_WHISKEY");
				iLocal_18 = joaat("CUSTOMER_GRAB_WHISKEY");
				iLocal_19 = joaat("CUSTOMER_GRAB_WHISKEY_MALE_B");
				iLocal_21 = joaat("BARFRONT_TRANS_UNDER_WHISKEY");
				iLocal_22 = joaat("UNDER_TRANS_OVER_WHISKEY");
				iLocal_23 = joaat("UNDER_TRANS_BARFRONT_WHISKEY");
				iLocal_24 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_BAR");
				iLocal_25 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_TRANS_UNDER_BAR");
				iLocal_26 = joaat("BARTENDER_CLEAN_WHISKEY_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BARTENDER_WHISKEY"), 262144, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("P_SHOTGLASS01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
			}
			fVar5 = TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true);
			iLocal_42 = TASK::CREATE_SCENARIO_POINT(iVar4, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), fVar5, func_23()), (fVar5 - 180f), 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_HEADING(iLocal_42, (fVar5 - 180f), true);
			TASK::_0xA7479FB665361EDB(iLocal_42, 0);
			TASK::_0xE69FDA40AAC3EFC0(iLocal_42, 0);
			iLocal_30 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
			iLocal_41 = func_24(iLocal_52);
			if (func_25(iLocal_41))
			{
				iLocal_31 = func_26(iLocal_41);
			}
			DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: STARTING GETTING ASSETS");
			iLocal_29 = 1;
			func_27(&uLocal_46, 1);
			break;
		case 2:
			if (((!func_28() && !bVar1) && !Global_1940170.f_51) && bVar0)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: Batender free going to first serve", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				iLocal_28 = 0;
				iLocal_29 = 3;
				if (bLocal_33)
				{
					iLocal_29 = 5;
				}
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_COIN01X")))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Coin has Not loaded");
				return;
			}
			if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEBEER01X")))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Bottle has not loaded");
					return;
				}
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BARTENDER_BEER"), false))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: sceanrio assets not loaded");
					return;
				}
			}
			else
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_SHOTGLASS01X")))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Shot has not loaded");
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Bottle JD has not loaded");
					return;
				}
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BARTENDER_WHISKEY"), false))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: sceanrio assets not loaded");
					return;
				}
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_42))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Scenario not found");
				return;
			}
			if (!func_13(iLocal_30, 0))
			{
				iLocal_30 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
				return;
			}
			if (!bVar2)
			{
				if (func_25(iLocal_41))
				{
					iLocal_31 = func_26(iLocal_41);
				}
				return;
			}
			func_27(&uLocal_43, 1);
			iLocal_28 = 0;
			iLocal_29 = 3;
			break;
		case 3:
			func_29(bVar0, bVar1, bVar2);
			break;
		case 4:
			func_30();
			break;
		case 5:
			func_31(bVar0, bVar1, bVar2);
			break;
		case 6:
			iLocal_13 = 0;
			break;
	}
}

void func_8()
{
	func_16();
	TASK::_0x4161648394262FDF(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), 0.15f);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_42))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_42);
	}
	DEBUG::_0xA308F935BDECCEC0(40, 23, "SHUTTING DOWN SCRIPT BARCUSTOMER INTERACTION", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
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
		func_32(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_33(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_34(&iVar0);
	}
}

bool func_13(int iParam0, int iParam1)
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
	if (func_35(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_35(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_35(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_14(int iParam0)
{
	return func_36(iParam0, 1);
}

float func_15(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_16()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPT BARCUSTOMER INTERACTION: RELEASE PED", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
	if (!Global_1940170.f_51)
	{
		if (Global_1940170.f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1940170.f_50 = 0;
		}
		iVar0 = func_37(iLocal_41);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0xA2B18FF8D39F6D87(iVar0);
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
	}
	else
	{
		Global_1940170.f_50 = 0;
	}
}

void func_17()
{
	if (bLocal_34 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, -1342079302))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			OBJECT::DELETE_OBJECT(&iLocal_55);
		}
		bLocal_34 = false;
	}
	if (bLocal_35 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 2131322378))
	{
		PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", 1);
		DEBUG::_0xA308F935BDECCEC0(8, 23, "CLEARING WHISKEY");
		bLocal_35 = false;
	}
}

void func_18(bool bParam0)
{
	int iVar0;

	if (bLocal_37 && PED::_0xC488B8C0E52560D8(iLocal_30))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_30, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_30, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_30, 0, 1);
	}
	if ((!bLocal_32 && bLocal_38) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_30, 864365833))
	{
		if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: PED GRABBING BEER BOTTLE");
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: PED GRABBING WHISKEY");
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
	}
	if (bLocal_36 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_30, 350240706))
	{
		iLocal_54 = PED::_0x4D0D2E3D8BC000EB(iLocal_30, "p_shotGlass01x_PH_L_Hand", 1);
		bLocal_36 = false;
	}
	if (bParam0)
	{
		iVar0 = PED::_0x569F1E1237508DEB(iLocal_30);
	}
	if (((bLocal_40 && !bLocal_32) && !bLocal_33) && (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A") || iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A")))
	{
		if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: PED GRABBING BEER BOTTLE");
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: PED GRABBING WHISKEY");
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
	}
	if (((bLocal_40 && !bLocal_32) && !PED::_0x68821369A2CEADD5(iLocal_30, iLocal_18)) && !PED::_0x68821369A2CEADD5(iLocal_30, iLocal_19))
	{
		PED::_0x6D07B371E9439019(iLocal_30);
		if (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_A"))
		{
			PED::_0xD65FDC686A031C83(iLocal_30, iLocal_18, 3f);
			bLocal_37 = true;
		}
		else if (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_B"))
		{
			PED::_0xD65FDC686A031C83(iLocal_30, iLocal_19, 3f);
			bLocal_37 = true;
		}
	}
}

int func_19()
{
	switch (func_20())
	{
		case 81:
			if (func_39(func_38(0), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 40:
		case 98:
		case 121:
		case 127:
			return 0;
		case 5:
			if (func_39(func_38(2), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true)))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 111:
			return 2;
	}
	return -1;
}

int func_20()
{
	return Global_1893599.f_2;
}

int func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 195, "GET_SALOON_FROM_REGION_AND_SALOON_TYPE - Doesn't have a link setup for this region/type and saloon enum. Region: ", func_40(iParam0), ", Saloon Type: ", func_41(iParam1));
	return -1;
}

char* func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "SALOONS_INVALID";
		case 0:
			return "SALOONS_FIRST_SALOON";
		case 1:
			return "SALOONS_SDN_SLUMS";
		case 2:
			return "SALOONS_SDN_FANCY";
		case 3:
			return "SALOONS_RHO_PARLOR_HOUSE";
		case 4:
			return "SALOONS_TBL_GENERAL";
		case 5:
			return "SALOONS_VAL_SMITHFIELDS";
		case 6:
			return "SALOONS_VAL_KEANES";
		case 7:
			return "SALOONS_AMD_GENERAL";
		case 8:
			return "SALOONS_VHT_GENERAL";
		case 9:
			return "SALOONS_MAX";
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

Vector3 func_23()
{
	return -0.235327f, 1.850775f, 0f;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 6:
			return 2;
		case 3:
			return 69;
		case 2:
			return 137;
		case 1:
			return 138;
		case 8:
			return 437;
		case 0:
			return 502;
		case 4:
			return 345;
		case 7:
			return 426;
		default:
			break;
	}
	return -1;
}

bool func_25(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

int func_26(int iParam0)
{
	if (!func_25(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "REFERENCE_REGIONAL_CHARACTER - Attempting to reference an invalid regional character ", iParam0);
		return 0;
	}
	if (!func_36(iParam0, 2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "REFERENCE_REGIONAL_CHARACTER - Attempting to reference an uninitialized regional character ", iParam0);
		return 0;
	}
	if (func_43(func_42(iParam0)))
	{
		return func_44(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_45(iParam0), 0);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_46(uParam0))
	{
		func_47(uParam0);
	}
}

bool func_28()
{
	if (Global_1940170.f_50 != SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		if (Global_1940170.f_50 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if (Global_1940170.f_51)
	{
		return true;
	}
	return false;
}

void func_29(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (Global_1940170.f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			bVar0 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_30, iLocal_16);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 1))
			{
				func_16();
				iLocal_29 = 5;
				iLocal_28 = 0;
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: PED NOT USING THIS SCENARIO TRANSITION TO CLEAN", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_55) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_30, 1))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: TAKE COIN", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				iLocal_55 = PED::_0x4D0D2E3D8BC000EB(iLocal_30, "p_coin01x", 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_55, 2, false);
				}
				bLocal_34 = true;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_30, 0) && bVar0)
			{
				DEBUG::_0xA308F935BDECCEC0(168, 23, "SCRIPTED BAR CUSTOMER: PEd in Conditional Anim: ", UNK_0x431FA7BDC40BE730(iLocal_30), " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				if ((bParam1 && !func_48(iLocal_41)) || func_28())
				{
					DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER:Bartender stolen going to waiting", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
					iLocal_29 = 2;
					return;
				}
				else
				{
					func_49();
				}
				iVar1 = PED::_0x569F1E1237508DEB(iLocal_30);
				if ((iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_A") && iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_B")) && iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_ARTHUR"))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: PED ALREADY HAS BEER");
					iLocal_29 = 5;
					iLocal_28 = 0;
					bLocal_33 = true;
					func_16();
					return;
				}
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: Bartender tasked to use the scenario", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				if (!Global_1940170.f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_31);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1f, false);
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			bVar2 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_31, iLocal_42);
			if (!bVar2 && !func_50(iLocal_31, -76381094))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER:DID NOT GET TASK", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				iLocal_28 = 0;
			}
			bVar0 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_30, iLocal_16);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 1))
			{
				func_16();
				iLocal_29 = 5;
				iLocal_28 = 0;
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: PED NOT USING THIS SCENARIO TRANSITION TO CLEAN", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				return;
			}
			if (!bVar2 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_31, 0))
			{
				return;
			}
			if (!PED::_0x68821369A2CEADD5(iLocal_31, iLocal_21))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 23, "CommandHashNotPresent, requesting ", iLocal_21);
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_31);
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_21, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_27++;
			}
			if (iLocal_27 > 5)
			{
				func_16();
				iLocal_28 = 0;
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_31))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "BARTENDER TRANS UNDER BAR");
				func_27(&uLocal_49, 1);
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (func_51())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "BARTENDER TRANS UNDER TO OVER BAR");
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_22, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_WHISKEY"))
				{
					iLocal_21 = joaat("OVER_TRANS_UNDER_WHISKEY");
				}
				func_27(&uLocal_49, 1);
				iLocal_28 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 595016159) && !bLocal_39)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "CREATE TAG GOT CALLED");
				func_52();
			}
			if (func_51())
			{
				if (!bLocal_39)
				{
					func_52();
				}
				if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "BARTENDER TRANS BARFRONT BEER");
					iLocal_28 = 6;
					iLocal_53 = PED::_0x4D0D2E3D8BC000EB(iLocal_31, "p_bottleBeer01x_PH_R_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 23, "CREATED THE BEER");
					}
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: BARTENDER LEAVING BEER BOTTLE");
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "BARTENDER TRANS UNDER BAR WHISKEY");
					iLocal_28 = 5;
					iLocal_54 = PED::_0x4D0D2E3D8BC000EB(iLocal_31, "p_shotGlass01x_PH_L_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 23, "CREATED THE SHOT");
					}
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: BARTENDER LEAVING WHISKEY SHOT");
				}
				if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					PED::_0xD65FDC686A031C83(iLocal_31, iLocal_23, 3f);
				}
				else
				{
					PED::_0xD65FDC686A031C83(iLocal_31, iLocal_21, 3f);
				}
				PED::_0x6D07B371E9439019(iLocal_31);
				bLocal_38 = true;
				bLocal_40 = true;
				func_27(&uLocal_49, 1);
			}
			break;
		case 5:
			if (func_51())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_23, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				func_27(&uLocal_49, 1);
				DEBUG::_0xA308F935BDECCEC0(8, 23, "BARTENDER TRANS UNDER BAR");
				iLocal_28 = 7;
			}
			break;
		case 7:
			if (func_53())
			{
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: Bartender finished transition releasing.", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				func_16();
				func_54(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
		case 6:
			if (func_53())
			{
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: Bartender finished transition releasing.", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				func_16();
				func_54(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
	}
}

void func_30()
{
}

void func_31(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (Global_1940170.f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			if (bParam0)
			{
				bVar0 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_30, iLocal_16);
			}
			else
			{
				bVar0 = false;
			}
			if ((bParam1 && !func_48(iLocal_41)) || func_28())
			{
				iLocal_29 = 2;
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: PED STOLEN DURING CLEANUP PRE ENTER", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				return;
			}
			if (!bLocal_36 && TASK::_0x0C3CB2E600C8977D(iLocal_30, 0))
			{
				bLocal_36 = true;
			}
			if ((bParam0 && bVar0) && !bLocal_33)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: PED HAS NOT BEEN SERVED YET");
				iLocal_29 = 0;
				iLocal_28 = 0;
				return;
			}
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 0))
			{
				if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					if (!TASK::_0xEA31F199A73801D3(iLocal_16))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Scenario point has no props to clean exiting");
						iLocal_29 = 6;
						return;
					}
				}
				else if (!bLocal_33)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Scenario point has no props to clean exiting");
					iLocal_29 = 6;
					return;
				}
				bLocal_35 = true;
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: PED LEFT SCENARIO");
				if (!Global_1940170.f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_31);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1f, false);
					DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Start Cleaning");
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			if ((bParam1 && !func_48(iLocal_41)) || func_28())
			{
				iLocal_29 = 2;
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: PED STOLEN DURING CLEANUP ENTER", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				iLocal_28 = 0;
				return;
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_31, iLocal_42))
			{
				return;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_31, 0) && !PED::_0x68821369A2CEADD5(iLocal_31, iLocal_24))
			{
				func_49();
				DEBUG::_0x1B08D1EB9D8C4931(8, 23, "CommandHashNotPresent, requesting ", iLocal_24);
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: CLEANING SCENARIO POINT");
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_24, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_31))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: TRANSITIONING TO Clean Over Bar");
				func_27(&uLocal_49, 1);
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (func_51())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: enter trans over bar");
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_25, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_28 = 3;
				func_27(&uLocal_49, 1);
			}
			break;
		case 3:
			if (func_51())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER:  OVER TRANS UNDER BAR");
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_26, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_28 = 7;
				func_27(&uLocal_49, 1);
			}
			break;
		case 7:
			if (func_53())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 23, "SCRIPTED BAR CUSTOMER: Bartender finished cleaning releasing");
				func_16();
				iLocal_29 = 6;
			}
			break;
	}
}

void func_32(int iParam0)
{
}

void func_33(int iParam0)
{
}

void func_34(int iParam0)
{
}

bool func_35(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_36(int iParam0, int iParam1)
{
	if (func_55() != -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_FLAG_SET - Not in SP");
		return false;
	}
	if (!func_25(iParam0))
	{
		return false;
	}
	return (Global_9895[iParam0 /*2*/] && iParam1) != 0;
}

int func_37(int iParam0)
{
	if (!func_25(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/].f_1;
}

int func_38(int iParam0)
{
	int iVar0;

	switch (func_20())
	{
		case 81:
			if (iParam0 == 0)
			{
				return VOLUME::_CREATE_VOLUME_BOX(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 8.286f, 7.345f, 5f);
			}
			break;
		case 98:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			return iVar0;
		case 127:
			return VOLUME::_CREATE_VOLUME_BOX(-3701.056f, -2595.456f, -14.37373f, 0f, 0f, 0f, 21.94766f, 22.09092f, 14.36038f);
		case 121:
			return VOLUME::_CREATE_VOLUME_BOX(-5514.454f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f);
		case 40:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
			return iVar0;
		case 5:
			if (iParam0 == 2)
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
				VOLUME::_0x39816F6F94F385AD(iVar0, 2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
				return iVar0;
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f);
			}
			break;
		case 111:
			return VOLUME::_CREATE_VOLUME_BOX(1345.534f, -1375.4f, 81.161f, 0f, 0f, 80.2f, 11.601f, 14.755f, 3.376f);
	}
	return VOLUME::_CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

bool func_39(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1);
}

char* func_40(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
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
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
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
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
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
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
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
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
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
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
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
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xD9911C7B5F8CD69C(8, 11, "No definition for current region for GET_REGION_LITERAL_NAME. Region enum ", iParam0);
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALOON_TYPE_GENERAL";
		case 1:
			return "SALOON_TYPE_SLUM";
		case 2:
			return "SALOON_TYPE_FANCY";
		default:
			break;
	}
	return "Missing saloon type string";
}

int func_42(int iParam0)
{
	if (!func_25(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_NAME - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/];
}

bool func_43(int iParam0)
{
	return iParam0 != 0;
}

int func_44(int iParam0)
{
	int iVar0;

	iVar0 = func_37(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_PED_INDEX - Character is invalid");
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

int func_45(int iParam0)
{
	if (!func_25(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_MODEL_NAME - Invalid ", iParam0);
		return 0;
	}
	return PERSCHAR::_0xA00DF706C60173D1(Global_1893787[iParam0 /*3*/]);
}

bool func_46(var uParam0)
{
	return func_56(*uParam0, 1);
}

void func_47(var uParam0)
{
	func_57(uParam0, 0f);
}

bool func_48(int iParam0)
{
	if (!func_25(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "IS_REGIONAL_CHARACTER_OWNED_BY_THIS_THREAD - Invalid ", iParam0);
		return false;
	}
	return Global_1893787[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_49()
{
	int iVar0;

	if (Global_1940170.f_51)
	{
		return;
	}
	Global_1940170.f_50 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar0 = func_37(iLocal_41);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x406808610220405B(func_37(iLocal_41));
	}
	DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPT BARCUSTOMER INTERACTION: STEAL BARTENDER", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
}

bool func_50(int iParam0, int iParam1)
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

bool func_51()
{
	if (((!Global_1940170.f_51 && func_58(&uLocal_49) > 1250) && !TASK::_0x916B8E075ABC8B4E(iLocal_31, 1)) && (!PED::_0xC488B8C0E52560D8(iLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 1004907005)))
	{
		return true;
	}
	return false;
}

void func_52()
{
	if (!bLocal_39)
	{
		if (bLocal_17 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEBEER01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
				PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
				DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: CREATING BEER BOTTLE", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
				bLocal_39 = true;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			iLocal_53 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEJD01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			iLocal_54 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_53, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			DEBUG::_0xA308F935BDECCEC0(40, 23, "SCRIPTED BAR CUSTOMER: BARTENDER CREATING Whiskey SHOT", " THREADID: ", SCRIPTS::GET_ID_OF_THIS_THREAD());
			bLocal_39 = true;
		}
	}
}

bool func_53()
{
	if ((!PED::_0xC488B8C0E52560D8(iLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 1004907005)) && func_58(&uLocal_49) > 1250)
	{
		return true;
	}
	return false;
}

void func_54(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_55()
{
	return Global_1572887.f_13;
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_57(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_59() - fParam1);
	func_60(uParam0, 1);
	func_61(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_58(var uParam0)
{
	if (!func_46(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_62(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_63() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

float func_59()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_62(var uParam0)
{
	return func_56(*uParam0, 2);
}

int func_63()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

