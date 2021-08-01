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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	var uLocal_48 = 1;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	iLocal_13 = 1;
	fLocal_63 = 1f;
	fLocal_64 = 1f;
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
	var uVar0;
	bool bVar1;

	func_13();
	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		switch (iLocal_66)
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(8, 216, "BLOCKING DYNAMIC SCENARIO PROMPT THIS FRAME");
				PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 1);
				func_14(&iLocal_66, 1);
				break;
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1208591336))
				{
					if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, false, false) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) == 0)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
						if (func_15() == 0)
						{
							if (func_16(joaat("UPGRADE_UPG_MORTAR_PESTLE"), 1) && (!func_17(0, 0, 1) || func_18()))
							{
								iLocal_67 = func_19("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
								func_20(iLocal_67, 342152817, 0, 1);
								MISC::SET_BIT(&(Global_1959011.f_1), 2);
								MISC::CLEAR_BIT(&(Global_1959011.f_1), 3);
							}
						}
						else
						{
							if (!(func_21("simple_crafting") || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) > 0))
							{
								if (func_16(-1448210800 /* GXTEntry: "Crafting Tools" */, 1) && (!func_17(0, 0, 1) || func_18()))
								{
									if (!func_22())
									{
										iLocal_67 = func_19("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
										func_20(iLocal_67, 342152817, 0, 1);
									}
								}
								if (func_23(0, 0) && (func_16(joaat("KIT_CAMP"), 1) || func_16(joaat("KIT_CAMP_SIMPLE"), 1)))
								{
									iLocal_68 = func_19("SET_CAMP", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
									func_20(iLocal_68, 342152817, 0, 1);
								}
							}
							MISC::SET_BIT(&(Global_1959011.f_1), 2);
							MISC::CLEAR_BIT(&(Global_1959011.f_1), 3);
						}
						iLocal_69 = func_19("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_24(iLocal_69, 17, 1, 1);
						func_20(iLocal_69, 342152817, 0, 1);
						func_14(&iLocal_66, 2);
					}
				}
				break;
			case 2:
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, false, false) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
				{
					func_25();
					func_14(&iLocal_66, 1);
					return;
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
				bVar1 = PED::IS_PED_IN_COMBAT(Global_33, 0);
				if ((func_26(joaat("SIMPLE_CRAFTING")) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) > 0) || Global_1913845.f_1581)
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1959011.f_1), 2);
					func_14(&iLocal_66, 3);
					return;
				}
				else if (func_27())
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1959011.f_1), 2);
					func_14(&iLocal_66, 4);
					return;
				}
				else if (func_28())
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1959011.f_1), 2);
					func_14(&iLocal_66, 5);
					return;
				}
				else if (TASK::_0xEC7E480FF8BD0BED(Global_33))
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1959011.f_1), 2);
					func_14(&iLocal_66, 6);
					return;
				}
				if (func_29(iLocal_67, 1))
				{
					func_30(0);
					func_25();
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					MISC::CLEAR_BIT(&(Global_1959011.f_1), 2);
					func_14(&iLocal_66, 3);
				}
				else if (func_29(iLocal_68, 1))
				{
					if ((func_16(joaat("KIT_CAMP"), 1) && func_31(joaat("KIT_CAMP"), 0, 0, 0, 1, 0, 0)) || (func_16(joaat("KIT_CAMP_SIMPLE"), 1) && func_31(joaat("KIT_CAMP_SIMPLE"), 0, 0, 0, 1, 0, 0)))
					{
						func_25();
						MISC::CLEAR_BIT(&(Global_1959011.f_1), 2);
					}
				}
				else if (func_32(iLocal_69, 1) || bVar1)
				{
					if (!bVar1)
					{
						PED::_0xD65FDC686A031C83(Global_33, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 2f);
					}
					TASK::CLEAR_PED_TASKS(Global_33, !PED::IS_PED_MALE(Global_33), false);
					func_25();
				}
				if (!func_33(&uLocal_70))
				{
					if (func_34())
					{
						func_35(&uLocal_70);
						if (!PED::IS_PED_MALE(Global_33))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Global_33, false, 0, false);
						}
					}
				}
				else if (!func_34())
				{
					bLocal_73 = false;
					func_36(&uLocal_70);
				}
				else if (!func_37(&uLocal_70, 0.15f))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SPRINT")))
					{
						bLocal_73 = true;
					}
				}
				else if (!bLocal_73)
				{
					PED::_0xD65FDC686A031C83(Global_33, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 0.2f);
				}
				break;
			case 3:
				if ((!func_21("simple_crafting") && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) == 0) && !Global_1913845.f_1581)
				{
					func_14(&iLocal_66, 1);
				}
				break;
			case 4:
				if (!func_27())
				{
					func_14(&iLocal_66, 1);
				}
				break;
			case 5:
				if (!func_28())
				{
					func_14(&iLocal_66, 1);
				}
				break;
			case 6:
				if (!TASK::_0xEC7E480FF8BD0BED(Global_33))
				{
					func_14(&iLocal_66, 1);
				}
				break;
		}
		if ((!PED::IS_PED_USING_ANY_SCENARIO(Global_33) || (iLocal_66 > 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) != iLocal_16)
		{
			iLocal_13 = 0;
			DEBUG::_0xF0783374333FD8CE(8, 0, "PROCESS_EXIT_TRIGGER: Back button pressed on scenario");
		}
	}
}

void func_8()
{
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
	func_25();
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 0);
	MISC::CLEAR_BIT(&(Global_1959011.f_1), 2);
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
		func_38(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_39(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_40(&iVar0);
	}
}

void func_13()
{
	func_41(0);
}

void func_14(int iParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 141, "SET_DYNAMIC_CRAFT_SCENARIO_STATE from: ", func_42(*iParam0, 0), " to: ", func_42(iParam1, 0));
	*iParam0 = iParam1;
}

int func_15()
{
	return Global_1572887.f_13;
}

bool func_16(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_44(bParam0);
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
			if (!func_45(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_46(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_47(bParam0, 0, 0, 0) >= iParam1;
}

bool func_17(int iParam0, bool bParam1, bool bParam2)
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
		if (func_48())
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
	if (iParam0 == 0 && func_50(func_49(0)))
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
	switch (func_51(func_49(0)))
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

bool func_18()
{
	return Global_1913845.f_1578;
}

int func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_52(iVar0, 2))
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
		func_53(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, sParam6, sParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_20(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_54(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_GROUP - Cannot set a group for an invalid context!");
		return;
	}
	iVar0 = func_55(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1952230[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_21(char* sParam0)
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

bool func_22()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		return false;
	}
	return false;
}

bool func_23(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940463.f_1496.f_54.f_85);
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_54(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_PROMPT_ATTRIBUTE - Cannot set a label for an invalid context!");
		return;
	}
	iVar0 = func_55(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1952230[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_25()
{
	if (func_54(iLocal_67))
	{
		func_56(&iLocal_67, 1, 1);
	}
	if (func_54(iLocal_68))
	{
		func_56(&iLocal_68, 1, 1);
	}
	if (func_54(iLocal_69))
	{
		func_56(&iLocal_69, 1, 1);
	}
}

bool func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939645.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939645[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_27()
{
	return (Global_1940463.f_2 || Global_1940463 == 1);
}

bool func_28()
{
	return Global_1896750.f_398;
}

bool func_29(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_54(iParam0))
	{
		return false;
	}
	iVar0 = func_55(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1952230[iVar0 /*23*/].f_3);
}

void func_30(bool bParam0)
{
	if ((func_15() != -1 || !bParam0) || func_57(Global_33))
	{
		func_58();
		return;
	}
}

bool func_31(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;

	DEBUG::_0xA308F935BDECCEC0(40, 157, "[SATCHEL_USE_ITEM_CUSTOM] bPreload: ", MISC::_0xF216F74101968DB0(bParam5));
	DEBUG::_0xA308F935BDECCEC0(40, 157, "[SATCHEL_USE_ITEM_CUSTOM] bForceBaseState: ", MISC::_0xF216F74101968DB0(bParam6));
	DEBUG::_0xA308F935BDECCEC0(40, 157, "[SATCHEL_USE_ITEM_CUSTOM] bForceBaseState: ", MISC::_0xF216F74101968DB0(bParam1));
	if (func_59())
	{
		Global_1940463.f_11702 = bParam0;
		func_60(bParam0, 1, -142743235, 0, 0);
		DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] - PEARSON");
		return false;
	}
	if (!func_61(bParam0, bParam4))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] - CAN RUN");
		return false;
	}
	if (func_62(bParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] - DISABLED");
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] cannot use item as currently inspecting");
		return false;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_63(bParam0))
	{
		Global_1913653 = bParam0;
		Global_1913844 = MISC::GET_GAME_TIMER();
		Global_1913654 = MISC::GET_GAME_TIMER() + 3000;
		DEBUG::_0xF0783374333FD8CE(40, 157, "[SATCHEL_USE_ITEM_CUSTOM] - SATCHEL__USE_ITEM_LAUNCH_SCRIPT. setting itemUsed to = ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam0));
		return true;
	}
	if (func_64(bParam0, -2081717885))
	{
		func_65(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_64(bParam0, -1909684001))
	{
		func_66(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_64(bParam0, 587975446))
	{
		func_67(bParam0, Var10);
	}
	else if (func_64(bParam0, 566155764))
	{
		if (!func_68(bParam0))
		{
			return false;
		}
	}
	if (func_69(bParam0))
	{
		Global_1913653 = bParam0;
		Global_1913844 = MISC::GET_GAME_TIMER();
		DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL_LAUNCH_CLOUD_DROP_LETTER TRUE");
		return true;
	}
	if (func_70(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1913653 = bParam0;
		Global_1913844 = MISC::GET_GAME_TIMER();
		DEBUG::_0xF0783374333FD8CE(40, 157, "[SATCHEL_USE_ITEM_CUSTOM] - setting itemUsed to = ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam0));
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] - no interaction task found, CONTINUING ON");
	if (func_64(bParam0, -1227898937))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] - SATCHEL: SCRIPT OPENING VIEWABLE ITEM: NEWSPAPER.");
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_71(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_64(bParam0, -1472964441) || func_64(bParam0, -228153877)) || func_64(bParam0, 566155764))
	{
	}
	else if (func_64(bParam0, 1919582297))
	{
		DEBUG::_0xF0783374333FD8CE(168, 139, "[SATCHEL_USE_ITEM_CUSTOM] - @@ We believe ", func_72(bParam0), " is a __BAIT!");
		if (((func_73() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1)) || TASK::_0x0C3CB2E600C8977D(Global_33, 1)) || !PED::IS_PED_ON_FOOT(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] - EXITING bait use PLAYER IN CAMP");
			return false;
		}
		switch (bParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] - SATCHEL: SCRIPT SHOULD ATTRACT HERBIVORES.");
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] SATCHEL: SCRIPT SHOULD ATTRACT PREDATORS.");
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case -252071901:
				DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] SATCHEL: USED PHEROMONE VIAL.");
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_71(Var10, 0);
		bVar28 = false;
	}
	else if (func_74(bParam0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "[SATCHEL_USE_ITEM_CUSTOM] - SATCHEL: SCRIPT USE EMOTE ITEM: ", func_75(bParam0, 0));
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_76(Global_1072032.f_28398.f_25.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_71(Var10, 0);
		iVar29 = 1;
	}
	else if (func_44(bParam0) == joaat("CLOTHING"))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] Dealing with clothing!");
		if (!func_77(bParam0))
		{
			func_78("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		bVar32 = func_79(bParam0);
		switch (bVar32)
		{
			case -2061583405:
			case -999503751:
			case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
				bVar30 = func_80();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_81(PLAYER::PLAYER_ID()))
			{
				func_78("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_78("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (bVar32 == -999503751)
		{
			if (Global_1953612.f_1694 != bParam0)
			{
				func_82(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (bVar32)
			{
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
				case -68128151:
				case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
					UNK_0x355E72323AEE83CC(-1, 6);
					DEBUG::_0xA308F935BDECCEC0(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] Please use 'BANDANA__SUPPORT_EXTERNAL__' it's better and safer");
					func_83(bParam0, 0);
					return iVar29;
				case -2061583405:
					func_84(bParam0);
					func_82(35, 0, 0, 0, 0);
					return true;
				case -1719060085:
					if (bParam0 == Global_1953612.f_1694.f_1[23 /*3*/])
					{
						func_85(Global_33, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_86(bParam0, 0, 0);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_86(bParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (bParam0 == Global_1953612.f_1694.f_1[10 /*3*/])
					{
						func_85(Global_33, Global_1953612.f_83[10 /*12*/], 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_86(bParam0, 0, 0);
						return true;
					}
					else
					{
						func_86(bParam0, 1, 0);
						func_87(-2061583405, 0);
						if (bVar32 == 1388798186)
						{
							func_87(119907797, 0);
						}
						else if (bVar32 == 119907797)
						{
							func_87(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_64(bParam0, 160827531))
					{
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(8, 157, "[SATCHEL_USE_ITEM_CUSTOM] Please use 'BANDANA__SUPPORT_EXTERNAL__' it's better and safer");
						func_83(bParam0, 0);
					}
					break;
			}
			func_85(Global_33, bParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "[SATCHEL_USE_ITEM_CUSTOM] SATCHEL_USE_ITEM_CUSTOM: eItemUsed - ", func_75(bParam0, 0));
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_88(1, 0);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_15() != -1)
				{
				}
				else if (!func_77(bParam0))
				{
					func_78("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_89(7, bParam0);
					bVar31 = func_89(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17335))
						{
							MAP::REMOVE_BLIP(&Global_17335);
						}
						Global_17335 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_17335, 673950256);
						func_78(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17335), 10000, 0, 0, 0, 1);
					}
					else if (!func_90(7))
					{
						func_78("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_92(Global_33, func_91(7), 0))
						{
							func_78("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17335))
							{
								MAP::REMOVE_BLIP(&Global_17335);
							}
							Global_17335 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_17335, 673950256);
							func_78(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17335), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
							DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "SATCHEL_USE_ITEM_CUSTOM: Already trying to swap an outfit item!");
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(8, 0, "SATCHEL_USE_ITEM_CUSTOM: Trying to launch wardrobe script for: KIT_WARDROBE ");
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_71(Var10, 0);
						}
						Jump @2868; //curOff = 2140
						func_93();
						Jump @2868; //curOff = 2147
						DEBUG::_0x1B08D1EB9D8C4931(8, 141, "SATCHEL_USE_ITEM_CUSTOM: STARTING A CAMP");
						if (func_77(joaat("KIT_CAMP")))
						{
							if (func_94(1, 1))
							{
								func_95(2, 1);
								DEBUG::_0xA308F935BDECCEC0(8, 20, "SATCHEL_USE_ITEM_CUSTOM - Camp Kit was used. Launching Camp Selection!");
							}
							else if (func_96(1))
							{
								func_78("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_97())
							{
								func_78("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
								{
									func_98();
								}
								else
								{
									func_78("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_99(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
						{
							func_78("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_99(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
						}
						else if (func_97())
						{
							func_78("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_78("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2868; //curOff = 2390
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_100(Global_33, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return true;
						Jump @2868; //curOff = 2428
						if (func_100(Global_33, 1, 0, 0) != bParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return true;
						Jump @2868; //curOff = 2463
						Jump @2868; //curOff = 2466
						DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL: USED CAMP ITEM.");
						func_101(535, 1);
						Jump @2868; //curOff = 2488
						func_30(1);
						Jump @2868; //curOff = 2496
						DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL: Interacting with player journal.");
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return true;
						Jump @2868; //curOff = 2542
						UIAPPS::_LAUNCH_APP_BY_HASH(joaat("COLLECTORS"));
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COLLECTORS")) > 0)
						{
							DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "SATCHEL_USE_ITEM_CUSTOM: Collector's bag script is already running!");
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL_USE_ITEM_CUSTOM: Trying to launch collectors bag script");
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_71(Var10, 0);
						}
						return true;
						Jump @2868; //curOff = 2640
						UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
						if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("SATCHEL_UI_EVENT_HANDLER"))
						{
							UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
							DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL_USE_ITEM_CUSTOM: Trying to launch field guide script from satchel");
						}
						else
						{
							UIAPPS::_LAUNCH_APP_BY_HASH(1976336482);
							DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL_USE_ITEM_CUSTOM: Trying to launch field guide script from other than satchel");
						}
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(698150113) > 0)
						{
							DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "SATCHEL_USE_ITEM_CUSTOM: Field guide script is already running!");
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_3 = !SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("SATCHEL_UI_EVENT_HANDLER");
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_71(Var10, 0);
						}
						return true;
						Jump @2868; //curOff = 2803
						DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL_USE_ITEM_CUSTOM: calling NET_PLAYER_CAMP_MANAGER_START_CAMP for wilderness camp");
						if (Global_1138479[PLAYER::PLAYER_ID() /*9*/].f_4)
						{
							func_78("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_102();
						}
						return true;
						Jump @2868; //curOff = 2859
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_54(iParam0))
	{
		return false;
	}
	iVar0 = func_55(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		if (Global_1952230[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1952230[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1952230[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1952230[iVar0 /*23*/].f_18) * (1f - Global_1952230[iVar0 /*23*/].f_22)));
			DEBUG::_0x1B08D1EB9D8C4931(559272, 162, "USE_CONTEXT_HAS_METERED_CONTEXT_FILLED - fProgress = ", MISC::_0x2B6846401D68E563(Global_1952230[iVar0 /*23*/].f_22, 4), ", iAutoFillTime = ", Global_1952230[iVar0 /*23*/].f_18, ", iTimeRemaining = ", iVar4, ", iTimeElapsed = ", iVar3, ", iCurrentTime = ", iVar1);
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1952230[iVar0 /*23*/].f_21 = iVar1;
			Global_1952230[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
}

bool func_33(var uParam0)
{
	return func_103(*uParam0, 1);
}

bool func_34()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.1f * 0.1f))
	{
		return true;
	}
	return false;
}

void func_35(var uParam0)
{
	func_104(uParam0, 0f);
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_37(var uParam0, float fParam1)
{
	if (func_105(uParam0, fParam1))
	{
		func_36(uParam0);
		return true;
	}
	return false;
}

void func_38(int iParam0)
{
}

void func_39(int iParam0)
{
}

void func_40(int iParam0)
{
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		func_106(4);
	}
	func_106(2);
	MISC::SET_BIT(&(Global_1959011.f_1), 0);
}

char* func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DCSS_START";
		case 1:
			return "DCSS_INIT";
		case 2:
			return "DCSS_IDLE";
		case 3:
			return "DCSS_CRAFTING";
		case 4:
			return "DCSS_SATCHEL";
		case 5:
			return "DCSS_PLAYERMENU";
		case 6:
			return "DCSS_INTERACTION";
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

bool func_43(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_44(bool bParam0)
{
	vector3 vVar0;

	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_45(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_107(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_108("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_109(&Var4, iVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", iVar3);
			}
			else if (!func_110(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_75(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_75(Var4.f_4, 0), " that uses the ammo - ", func_75(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_111(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_75(Var4.f_4, 0), " that uses the ammo - ", func_75(bParam0, 0));
					return true;
				}
			}
			iVar3++;
		}
		func_111(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_75(bParam0, 0));
	return false;
}

bool func_46(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	bVar0 = func_79(bParam0);
	switch (bVar0)
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
	iVar1 = func_112(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_113(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_75(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_114(bParam0);
	iVar2 = func_113(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_75(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_47(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_75(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_44(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_107(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_115(bParam0, 0);
	}
	if (func_116(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_117(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_118(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_75(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_117(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_75(bParam0, 0));
	return iVar0;
}

bool func_48()
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
	if (!func_50(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_49(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

bool func_50(struct<2> Param0)
{
	if (!func_119(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_120(Param0))
	{
		return false;
	}
	return true;
}

int func_51(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_52(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_53(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_121(iParam0, 1);
	func_122(iParam0, 1);
	func_123(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_124(iParam14, 0));
}

bool func_54(int iParam0)
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

int func_55(int iParam0)
{
	return iParam0;
}

void func_56(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_54(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_55(*iParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*iParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_125(iVar0);
	*iParam0 = 0;
}

bool func_57(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "IS_PED_ON_MOUNT_SAFE: ped is dead");
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_58()
{
	DEBUG::_0xA308F935BDECCEC0(8, 216, "SET_CRAFT_LAUNCH_REQUIRED");
	Global_1913845.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913845.f_1581 = 1;
}

bool func_59()
{
	if (Global_1940463.f_39 == 3)
	{
		return true;
	}
	return false;
}

bool func_60(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove an invalid item from an inventory!");
		return false;
	}
	if (iParam1 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(2696, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove ", iParam1, " of ", func_75(bParam0, 0), ", must be a non-zero positive amount");
		return false;
	}
	iVar0 = func_116(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_126(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_127(bParam0, bParam4, 0) };
	Var6 = { func_128(bParam0, Var1, Var1.f_4, bParam4) };
	return func_129(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_61(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_64(bParam0, 1816455607);
	if (!func_43(bParam0, 0))
	{
		if (!bVar0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 157, "SATCHEL_USE_ITEM_CUSTOM_CAN_RUN: this is not a valid item ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam0));
			return false;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(168, 157, "SATCHEL_USE_ITEM_CUSTOM_CAN_RUN: ignoring validity check of ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam0), " due to CI_TAG_MISSION_DROP_ENABLED tag");
		}
	}
	if (Global_1940463.f_8)
	{
		return false;
	}
	if (((bParam0 != 1259508039 && bParam0 != joaat("KIT_CAMP")) && bParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar1 = func_130(bParam0);
		if (func_64(bParam0, 1147021565))
		{
			iVar1 |= 64;
		}
		if (!func_131(1, iVar1))
		{
			DEBUG::_0x1B08D1EB9D8C4931(680, 157, "SATCHEL_USE_ITEM_CUSTOM_CAN_RUN: player cannot use this item right now: ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam0), " ignore flags: ", func_132(iVar1));
			return false;
		}
	}
	if (bParam0 == -1448210800 || bParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_133())
		{
			return false;
		}
	}
	if (!bVar0 && !func_16(bParam0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 0, "SATCHEL_USE_ITEM_CUSTOM_CAN_RUN - Attempted to use ", func_75(bParam0, 0), " when none are in the player's inventory, ignoring");
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_62(bool bParam0)
{
	if (func_74(bParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_117(0), bParam0, func_134(0)))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_23(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			DEBUG::_0xF0783374333FD8CE(40, 157, "SATCHEL_IS_ITEM_DISABLED: Camp special logic. Cannot use ", func_75(bParam0, 0));
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_135() != -1)
			{
				func_78(func_136(func_135()), 10000, 0, 0, 0, 1);
				func_137(-1);
			}
			break;
	}
	DEBUG::_0xF0783374333FD8CE(168, 157, "SATCHEL_IS_ITEM_DISABLED: eItem ", func_75(bParam0, 0), " is disabled so cannot use.");
	return true;
}

bool func_63(bool bParam0)
{
	struct<16> Var0;

	if (bParam0 == 17745825)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "[USE_ITEM_LAUNCH_SCRIPT] = DOCUMENT_MAP_ROLE_NATURALIST_LEGENDARY_ANIMAL");
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_71(Var0, 0);
		return true;
	}
	return false;
}

bool func_64(bool bParam0, bool bParam1)
{
	if (!func_43(bParam0, 0))
	{
		return func_139(func_138(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_140(bParam1, 0), " for item ", func_75(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

void func_65(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_66(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_67(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_68(bool bParam0)
{
	if (func_15() == 0 && func_142(func_141(bParam0), 1, 0) != 0)
	{
		func_78("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_69(bool bParam0)
{
	if (func_143(bParam0, 1120943070) == 1816455607)
	{
		func_144(0);
		func_146(func_145(bParam0));
		return true;
	}
	return false;
}

bool func_70(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_147(bParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1913654 = MISC::GET_GAME_TIMER() + 3000;
		DEBUG::_0xF0783374333FD8CE(8, 157, "[SATCHEL_LAUNCH_INTERACTION_TASK] TRUE");
		return true;
	}
	DEBUG::_0xF0783374333FD8CE(40, 157, "[SATCHEL_LAUNCH_INTERACTION_TASK] GET_INVENTORY_ITEM_TAG_OF_TYPE: ", func_140(func_143(bParam0, -949239683), 0));
	switch (func_143(bParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_148())
				{
					if (func_149(&Global_33))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					func_78("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913654 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913654 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913654 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::_0x5407B7288D0478B7(Global_33, 0) > 0)
				{
					func_150(bParam0);
				}
				else
				{
					func_151(bParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_152(bParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_153(bParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL: SCRIPT SHOULD USE THE PLAYER'S WHISKEY.");
				func_154(bParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::_0x5407B7288D0478B7(Global_33, 0) > 0)
				{
					func_150(bParam0);
				}
				else
				{
					func_155(bParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::_0x5407B7288D0478B7(Global_33, 0) > 0)
				{
					func_150(bParam0);
				}
				else
				{
					func_156(bParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::_0x5407B7288D0478B7(Global_33, 0) > 0)
				{
					func_150(bParam0);
				}
				else
				{
					func_157(bParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::_0x5407B7288D0478B7(Global_33, 0) > 0)
				{
					func_150(bParam0);
				}
				else
				{
					func_158(bParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_159(bParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_160(bParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_161(bParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_150(bParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_162(bParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_163(bParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_71(struct<16> Param0, int iParam16)
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
	if (!func_164(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_21(&(Param0.f_10)))
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
			func_165(iParam16);
			DEBUG::_0xF0783374333FD8CE(34984, 106, "QUEUE_SCRIPT_LAUNCH: inserting new process script ", &(Param0.f_10), " at queue slot ", iVar0, "; count is now = ", Global_1939645.f_161, "!");
			return;
		}
		iVar0++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 106, "QUEUE_SCRIPT_LAUNCH: Failed to find an expected empty queue slot!");
}

char* func_72(bool bParam0)
{
	bool bVar0;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	bVar0 = func_166(bParam0, 0);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_NAME - No name specified for ", func_75(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(bVar0);
}

bool func_73()
{
	return Global_1893599 & 2 != 0;
}

bool func_74(bool bParam0)
{
	if (!func_43(bParam0, 0))
	{
		return false;
	}
	if (func_44(bParam0) == joaat("EMOTE"))
	{
		return true;
	}
	return false;
}

var func_75(bool bParam0, int iParam1)
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

int func_76(int iParam0)
{
	return func_167(iParam0);
}

bool func_77(bool bParam0)
{
	if (bParam0 == 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "IS_ITEM_USABLE: INVALID ITEM");
		return false;
	}
	if (func_44(bParam0) == joaat("CLOTHING"))
	{
		if (func_79(bParam0) == -999503751)
		{
		}
	}
	return true;
}

var func_78(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_79(bool bParam0)
{
	struct<2> Var0;

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return false;
	}
	return Var0.f_1;
}

int func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_ITEM__CAN_WHEEL_ITEM_BE_USED - ped doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_ITEM__CAN_WHEEL_ITEM_BE_USED - ped is dead or injured.");
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar2) || PED::IS_PED_SWIMMING(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_ITEM__CAN_WHEEL_ITEM_BE_USED - player or ped is swimming.");
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true) < 2f && PED::_0xD543D3A8FDE4F185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_81(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_82(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_168(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_169(Var0);
}

int func_83(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_170())
	{
		DEBUG::_0xA308F935BDECCEC0(40, 208, "BANDANA__SUPPORT_EXTERNAL__USE_FACE_COVER: Not Enabled: Can't use: ", func_75(bParam0, 0));
		return 0;
	}
	if (!func_171(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "BANDANA__SUPPORT_EXTERNAL__USE_FACE_COVER: Face cover usage not allowed");
		return 0;
	}
	if (func_172(bParam0))
	{
		iVar0 = 0;
		DEBUG::_0xA308F935BDECCEC0(40, 208, "BANDANA__SUPPORT_EXTERNAL__USE_FACE_COVER: Valid face cover: ", func_75(bParam0, 0));
		if ((func_79(bParam0) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ || func_64(bParam0, 160827531)) && !func_64(bParam0, -1303648999))
		{
			if (bParam1)
			{
				func_173(&iVar0, 2);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "BANDANA__SUPPORT_EXTERNAL__USE_FACE_COVER: We want the bandana up");
			}
		}
		return func_174(bParam0, iVar0);
	}
	DEBUG::_0xA308F935BDECCEC0(8, 208, "BANDANA__SUPPORT_EXTERNAL__USE_FACE_COVER: Not valid face cover");
	return 0;
}

void func_84(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 10;
	bVar1 = Global_1953612.f_1694.f_1[iVar0 /*3*/];
	if (bVar1 == bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][SAME] We are wearing the item we selected | REMOVING");
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_85(Global_33, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_86(bParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_85(Global_33, bParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_175(32768))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][TEMP] Temp hat is equipped | KNOCKING IT OFF");
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_176();
		func_168(128);
		return;
	}
	if (bVar1 == Global_1953612.f_83[iVar0 /*12*/])
	{
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][NONE ITEM] Ticking item in wheel: ", func_75(bParam0, 0));
		func_86(bParam0, 1, 0);
		return;
	}
	if (func_177(-2061583405, 0))
	{
		if (func_178(bVar1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][AVAILABLE SPACE] Unticking item in wheel: ", func_75(bVar1, 0));
			func_86(bVar1, 0, 0);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][AVAILABLE SPACE] Adding to wheel: ", func_75(bVar1, 0));
			func_179(bVar1, 1, 1, 0, 0, 0);
		}
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][AVAILABLE SPACE] Ticking item in wheel: ", func_75(bParam0, 0));
		func_86(bParam0, 1, 0);
		return;
	}
	if (func_178(bVar1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][NO SPACE] Unticking item in wheel: ", func_75(bVar1, 0));
		func_86(bVar1, 0, 0);
		func_86(bParam0, 1, 0);
	}
	else if (func_178(bParam0))
	{
		if (bParam0 != func_180(0))
		{
			DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][NO SPACE] Replacing: ", func_75(bParam0, 0), " with what we were wearing: ", func_75(bVar1, 0));
			func_181(bParam0, bVar1, 0, 0, 0);
			func_86(bParam0, 0, 0);
			func_86(bVar1, 0, 0);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][NO SPACE] Knocking off: ", func_75(bVar1, 0));
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_168(128);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_HANDLE_EQUIP_FROM_WHEEL][NO SPACE] Ticking item in wheel: ", func_75(bParam0, 0));
			func_86(bParam0, 1, 0);
		}
	}
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -358215195)
	{
		Var0 = { func_127(bParam1, 1, 0) };
		bParam3 = func_182(Var0.f_4);
		if (bParam3 == -358215195)
		{
			DEBUG::_0x83407B92D46F25C3(40, 208, "[METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT] Failed to find meta type for slot: ", func_183(Var0.f_4, 0));
			return 0;
		}
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT] Inventory Item: ", UNK_0x4379B6FA65D55295(bParam1), " meta component: ", func_184(bParam3, 0));
	if (!func_186(bParam1, bParam2, func_185(bParam3, 1), bParam4, 1, 0, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT] Failed to equip component: ", UNK_0x4379B6FA65D55295(bParam1), " | RETURN FALSE");
		return 0;
	}
	func_187(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_188(bParam1, 0))
		{
			func_189(Global_1953612.f_1694.f_1[func_185(bParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_189(bParam1, 1, 0);
		}
	}
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != Global_1953612.f_83[func_185(bParam3, 1) /*12*/])
			{
				func_82(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_175(32768))
			{
				func_176();
				func_82(21, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_190(bParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_191(&iVar5, 4);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT - ped update suppressed");
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_82(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_82(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_86(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_127(bParam0, bParam2, 0) };
	Var5 = { func_128(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_192(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_SET_ITEM_IN_USE] ", func_75(bParam0, 0), " is not in the player's inventory yet, we can't set its use state!");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_SET_ITEM_IN_USE] Setting: ", func_75(bParam0, 0), " In Use: ", MISC::_0xF216F74101968DB0(bParam1));
	INVENTORY::_0x65A5F70F4A292EBE(func_117(bParam2), &Var5, bParam1);
}

bool func_87(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<4> Var3;
	bool bVar7;
	struct<4> Var8;

	bVar2 = false;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bParam0, 0, &bVar7))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_MARK_ALL_ITEMS_IN_CATEGORY_AS_NOT_USED] Category does not have a fitslot? ", func_193(bParam0, 0));
		return false;
	}
	Var8 = { func_128(joaat("WARDROBE"), func_194(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1953612.f_3411.f_26)
	{
		bVar1 = Global_1953612.f_3411[iVar0];
		if (func_79(bVar1) == bParam0 || (bParam0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && func_64(bVar1, 160827531)))
		{
			Var3 = { func_128(bVar1, Var8, bVar7, bParam1) };
			if (INVENTORY::_0x70E3A884ED000A01(func_117(bParam1), &Var3))
			{
				bVar2 = bVar1;
				INVENTORY::_0x65A5F70F4A292EBE(func_117(bParam1), &Var3, false);
				DEBUG::_0x1B08D1EB9D8C4931(40, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_MARK_ALL_ITEMS_IN_CATEGORY_AS_NOT_USED] Clearing: ", func_75(bVar1, 0));
			}
		}
		iVar0++;
	}
	return bVar2;
}

void func_88(bool bParam0, int iParam1)
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

int func_89(int iParam0, bool bParam1)
{
	int iVar0;

	iParam0 = func_195(iParam0);
	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_CAN_PLAYER_USE_HORSE_ITEM - eSlot = PH_SLOT_INVALID");
		return 0;
	}
	if (iParam0 >= 7)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_CAN_PLAYER_USE_HORSE_ITEM - eSlot >= NUM_PLAYER_HORSE_SLOTS");
		return 0;
	}
	iVar0 = func_91(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 25, "PLAYER_HORSE_CAN_PLAYER_USE_HORSE_ITEM - ped doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 25, "PLAYER_HORSE_CAN_PLAYER_USE_HORSE_ITEM - ped is dead or injured.");
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_33) || PED::IS_PED_SWIMMING(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 25, "PLAYER_HORSE_CAN_PLAYER_USE_HORSE_ITEM - player or ped is swimming.");
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_33)
		{
			if (bParam1 == joaat("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_196(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0)
{
	int iVar0;

	iParam0 = func_195(iParam0);
	if (iParam0 <= -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "DOES_PLAYER_HORSE_HAVE_PLAYER_SADDLE_EQUIPPED - eSlot <= PH_SLOT_INVALID");
		return false;
	}
	if (iParam0 >= 7)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "DOES_PLAYER_HORSE_HAVE_PLAYER_SADDLE_EQUIPPED - eSlot >= NUM_PLAYER_HORSE_SLOTS");
		return false;
	}
	iVar0 = func_91(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_197())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

int func_91(int iParam0)
{
	iParam0 = func_195(iParam0);
	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_GET_PED_INDEX - eSlot = PH_SLOT_INVALID");
		return 0;
	}
	if (iParam0 >= 7)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_GET_PED_INDEX - eSlot >= NUM_PLAYER_HORSE_SLOTS");
		return 0;
	}
	return Global_1903188[iParam0 /*43*/];
}

bool func_92(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_93()
{
	int iVar0;

	if (func_198())
	{
		UNK_0x355E72323AEE83CC(139, 6);
		DEBUG::_0x9A6C65DDDBEC9C52(8, 139, "[HANDHELD_CATALOG][NET_SHOP_LAUNCH_HANDHELD] Handheld Catalog is already running!");
		return;
	}
	if (func_199(8))
	{
		switch (Global_1051777.f_3637)
		{
			case 0:
				if (func_199(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::_0xF1C03A5352243A30(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
					func_200(16);
				}
				func_201(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
				{
				}
				else
				{
					func_200(8);
					func_201(0);
				}
		}
		return;
	}
	if (func_202())
	{
		DEBUG::_0xF0783374333FD8CE(8, 139, "[HANDHELD_CATALOG][NET_SHOP_LAUNCH_HANDHELD] Launching Handheld Catalogue.");
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432 /* Float: -1f */);
		Global_1915867.f_22504.f_1 = 1;
		Global_1051777.f_43 = 0;
		func_203();
	}
	else
	{
		iVar0 = func_205(func_204());
		if (iVar0 != -1)
		{
			func_78(func_136(iVar0), 10000, 0, 0, 0, 1);
			DEBUG::_0x9A6C65DDDBEC9C52(40, 139, "[HANDHELD_CATALOG][NET_SHOP_LAUNCH_HANDHELD] Fail Reason: ", func_206(iVar0, 0));
			Global_1051777.f_3636 = 0;
			Global_1051777.f_3637 = 0;
			func_207(0);
			func_137(-1);
			UNK_0x355E72323AEE83CC(139, 6);
		}
	}
}

bool func_94(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_208() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_209(16))
	{
		return false;
	}
	if (func_210())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return false;
		}
	}
	if (!func_211())
	{
		return false;
	}
	if (func_212(16))
	{
		return false;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::_0xD6F6ACF4392187FB(iVar0) || !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_213(Global_1137477.f_8, 1))
	{
		return false;
	}
	if (func_97())
	{
		return false;
	}
	return true;
}

int func_95(int iParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "PLAYER_MENU_LAUNCH - Player Menu Launch requested... ");
	if (bParam1)
	{
		func_214();
	}
	if (!func_215(bParam1, bParam1, !bParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "PLAYER_MENU_LAUNCH - Player Menu Launch request FAILED with entry point ", func_216(iParam0, 0));
		UNK_0x355E72323AEE83CC(162, 6);
		return 0;
	}
	func_217(iParam0);
	Global_1896750.f_402 = 1;
	Global_1896750.f_403 = bParam1;
	DEBUG::_0xA308F935BDECCEC0(40, 162, "PLAYER_MENU_LAUNCH - Player Menu Launch request succeeded with entry point ", func_216(iParam0, 0));
	UNK_0x355E72323AEE83CC(162, 6);
	return 1;
}

bool func_96(int iParam0)
{
	return func_213(Global_1137477.f_8, iParam0);
}

bool func_97()
{
	int iVar0;

	iVar0 = func_218(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1131626[iVar0 /*27*/].f_18.f_1 != 0 && func_213(Global_1131626[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_98()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_49(0) };
	if (func_50(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_219(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_220(iVar2) == joaat("POSSE_VERSUS"))
				{
					func_78("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_78("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_78("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_78("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_99(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_222(Var0, func_221(0, 8), 0, 0);
}

int func_100(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_223(iParam0, &iVar0, &iVar1);
	if (!func_224(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_225(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_226(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

void func_102()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	func_227(1, iVar0);
}

bool func_103(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_104(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_228() - fParam1);
	func_229(uParam0, 1);
	func_230(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_105(var uParam0, float fParam1)
{
	if (!func_33(uParam0))
	{
		return false;
	}
	if (func_231(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_106(int iParam0)
{
	Global_1903188.f_302 = (Global_1903188.f_302 || iParam0);
}

bool func_107(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_75(bParam0, 0));
		return false;
	}
	iVar0 = func_44(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_64(bParam0, 1399091007))
	{
		func_232(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_75(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

bool func_108(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_117(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_183(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_109(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_110(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_111(int iParam0)
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

int func_112(bool bParam0)
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

int func_113(var uParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_233(iParam1, 0));
	return -1;
}

int func_114(bool bParam0)
{
	bool bVar0;

	bVar0 = func_79(bParam0);
	switch (bVar0)
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
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_75(bParam0, 0));
	return 0;
}

char[] func_115(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char[] cVar15[8];

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_234(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_236(&Var0, func_235(0));
	}
	if (!func_237(&Var0, &iVar14, &cVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_75(bParam0, 0));
		return 0;
	}
	func_111(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", cVar15, " of item ", func_75(bParam0, 0));
	return cVar15;
}

int func_116(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_238(func_138(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_117(bool bParam0)
{
	if (func_15() == -1)
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

struct<4> func_118(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_127(bParam0, bParam1, 0) };
	return func_128(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_119(int iParam0)
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

int func_120(int iParam0)
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

void func_121(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_52(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_122(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

char* func_124(int iParam0, int iParam1)
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

void func_125(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_239(iParam0))
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

int func_126(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_240(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_75(bParam0, 0), " is an intrinsic item, aborting!");
		return 0;
	}
	if (iParam1 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Amount to remove <= 0: ", iParam1);
		return 0;
	}
	iVar0 = func_116(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_75(bParam0, 0), " does not have a default pathset, aborting!");
		return 0;
	}
	if (!func_241(bParam4))
	{
		if (iVar0 == 0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - No pathset specified, bailing!");
			return 0;
		}
		if (!func_242(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
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
			Var65 = { func_243(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_244(joaat("USE"), &Var65, 1);
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
			func_245(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Removing ", iParam1, "x item ", func_75(bParam0, 0), " with reason ", func_246(iParam2, 0));
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_117(bParam4), bParam0, iParam1, iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Failed to remove: ", iParam1, " of inventory item: ", func_75(bParam0, 0));
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	return 1;
}

struct<5> func_127(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_194(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_44(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_75(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_247(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_128(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_235(bParam1) };
			if (bParam2 && func_248(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_249(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_249(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_250(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_251(bParam1) };
			switch (func_79(bParam0))
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
			if (func_252(bParam0, -1823706425))
			{
				Var0 = { func_128(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_252(bParam0, -1483207246))
			{
				Var0 = { func_128(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_128(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_252(bParam0, -1653629781))
			{
				Var0 = { func_128(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_253(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_252(bParam0, -1653629781))
			{
				Var0 = { func_128(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_75(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_75(bParam0, 0), ": ", func_183(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_128(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_75(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_117(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

bool func_129(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	if (func_240(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", func_75(bParam0, 0), " is an intrinsic item, aborting!");
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_253(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_241(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item is already expired and does not need to be removed, ignoring");
		}
		else if (func_15() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			DEBUG::_0xF0783374333FD8CE(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Sending a Use transaction for ", iParam3, "x item ", func_75(bParam0, 0), " in ", func_183(uParam2->f_4, 0));
			iVar14 = func_244(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -142743235;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_245(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Removing ", iParam3, "x item ", func_75(bParam0, 0), " in ", func_183(uParam2->f_4, 0), " with reason ", func_246(iParam4, 0));
	if (!INVENTORY::_0x3E4E811480B3AE79(func_117(bParam6), iParam1, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to remove inventory item!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

int func_130(bool bParam0)
{
	if (func_64(bParam0, 1573112293))
	{
		return func_254(bParam0);
	}
	if (func_64(bParam0, 1816455607))
	{
		return func_255();
	}
	if (func_256(bParam0))
	{
		return func_257();
	}
	switch (func_79(bParam0))
	{
		case -77448735:
			if (func_258(bParam0))
			{
				return func_254(bParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_254(bParam0);
		case -1520388130:
		case 1802292908:
			return func_259();
		case -2061583405:
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
		case 1477698721:
			return func_260();
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			return func_260();
		case 1779021115:
			if (bParam0 == joaat("WEAPON_KIT_CAMERA") || bParam0 == 332793555)
			{
				return func_261();
			}
			return func_262();
		case -1823706425:
			if (bParam0 == -1115561122)
			{
				return func_263();
			}
			else
			{
				return func_264();
			}
			break;
		case -854348463:
			return func_265();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_266();
		default:
			if (func_43(bParam0, 0))
			{
				if (func_64(bParam0, 1919582297))
				{
					return func_267();
				}
				else if (bParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || bParam0 == -1448210800)
				{
					return func_268();
				}
				else if (bParam0 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_269();
				}
				else if (func_64(bParam0, 1147021565))
				{
					return func_270();
				}
			}
			return func_271();
	}
	return func_271();
}

bool func_131(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1940410.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (func_15() == 0)
	{
		if (func_272(131072))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 1))
	{
		if (func_272(1024))
		{
			return false;
		}
	}
	if (Global_1940410.f_16)
	{
		return false;
	}
	if (!func_273(iParam1, 2) && func_272(32))
	{
		return false;
	}
	if (!func_273(iParam1, 4))
	{
		if (func_272(4096))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 8) && func_272(512))
	{
		return false;
	}
	if (!func_273(iParam1, 512) && !func_274(bParam0))
	{
		return false;
	}
	if (!func_273(iParam1, 262144) && !func_275(bParam0, func_273(iParam1, 524288)))
	{
		return false;
	}
	if (!func_273(iParam1, 64) && !func_276(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_273(iParam1, 128))
	{
		if (func_277(Global_33, 1868526510) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
			{
				func_78("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_273(iParam1, 16))
	{
		if (func_278(Global_33))
		{
			iVar0 = PED::GET_MOUNT(Global_33);
			if (!func_279(iVar0, 1))
			{
				if (bParam0)
				{
					func_78("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_273(iParam1, 256) && func_272(8192))
	{
		return false;
	}
	if (!func_273(iParam1, 1024) && func_272(65536))
	{
		if (bParam0)
		{
			func_78("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_273(iParam1, 2048))
	{
		if (func_272(32768))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 4096))
	{
		if (func_272(16384))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 8192))
	{
		if (!func_272(16))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 67108864))
	{
		if (!func_272(268435456))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 16384))
	{
		if (func_272(256))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 32768))
	{
		if (func_27())
		{
			if (bParam0)
			{
				func_78("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_273(iParam1, 131072))
	{
		if (!func_272(524288))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 65536))
	{
		if (!func_272(262144))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 1048576))
	{
		if (!func_272(2097152))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 2097152))
	{
		if (!func_272(8388608))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 4194304))
	{
		if (!func_272(16777216))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 8388608))
	{
		if (func_272(33554432))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 16777216))
	{
		if (func_272(67108864))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 33554432))
	{
		if (func_272(134217728))
		{
			return false;
		}
	}
	if (func_272(64))
	{
		return false;
	}
	else if (func_272(128))
	{
		return false;
	}
	else if (func_272(1048576))
	{
		return false;
	}
	else if (func_272(4))
	{
		return false;
	}
	if (!func_273(iParam1, 134217728))
	{
		if (func_280(256))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 268435456))
	{
		if (func_272(536870912))
		{
			return false;
		}
	}
	if (!func_273(iParam1, 536870912))
	{
		if (func_272(1073741824 /* Float: 2f */))
		{
			return false;
		}
	}
	return true;
}

var func_132(int iParam0)
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

bool func_133()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		iVar1 = iVar0;
		if (iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
		{
			return true;
		}
	}
	return false;
}

var func_134(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

int func_135()
{
	return Global_1915867.f_22504.f_5;
}

char* func_136(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	switch (iParam0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var0 = -1;
			Var0.f_1 = -1;
			Var0 = { func_49(0) };
			if (!func_50(Var0))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(8, 139, "NET_SHOP_GET_SHOP_FAIL_REASON_STRING - invalid active uid");
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar2 = func_281(&Var0, 1);
			if (iVar2 == -1)
			{
				DEBUG::_0xD9911C7B5F8CD69C(40, 139, "NET_SHOP_GET_SHOP_FAIL_REASON_STRING - active uid = ", func_282(Var0));
				DEBUG::_0x4423BBAB7EB2B96B(8, 139, "NET_SHOP_GET_SHOP_FAIL_REASON_STRING - invalid mission type for active uid");
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_283(iVar2, 461218520, 1))
			{
				DEBUG::_0xD9911C7B5F8CD69C(40, 139, "NET_SHOP_GET_SHOP_FAIL_REASON_STRING - mission type = ", func_284(iVar2));
				DEBUG::_0x4423BBAB7EB2B96B(8, 139, "NET_SHOP_GET_SHOP_FAIL_REASON_STRING - invalid handheld catalogue fail string for mission type");
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			DEBUG::_0xA308F935BDECCEC0(168, 139, "NET_SHOP_GET_SHOP_FAIL_REASON_STRING - \"", func_286(func_285(iVar2, 461218520)), "\"");
			return func_286(func_285(iVar2, 461218520));
	}
	return "";
}

void func_137(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 139, "[SHOP_SET_HANDHELD_CATALOG_FAIL_REASON] Setting Handheld Catalogue fail reason to ", func_206(iParam0, 0));
	Global_1915867.f_22504.f_5 = iParam0;
}

bool func_138(bool bParam0)
{
	return bParam0;
}

int func_139(bool bParam0, bool bParam1)
{
	if (!func_238(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_140(bParam1, 0), " for bundle ", func_287(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_140(bool bParam0, int iParam1)
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

int func_141(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_288(iVar0, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_289(iParam0))
	{
		return 1;
	}
	if (!func_290(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211864.f_48[iParam0 /*21*/].f_17)
	{
		if (bParam2 || Global_1211864.f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_291(iParam0))
	{
		return 3;
	}
	if (func_292(iParam0) && !func_293())
	{
		return 4;
	}
	return 0;
}

bool func_143(bool bParam0, int iParam1)
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "Failed to fillout item data for item ", func_75(bParam0, 0));
	}
	return false;
}

void func_144(int iParam0)
{
	Global_1940463.f_11712 = iParam0;
}

int func_145(bool bParam0)
{
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DESCRIPTION_HASH - Attempting to get the display name of an invalid item.");
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(bParam0);
}

void func_146(int iParam0)
{
	Global_1940463.f_11718 = iParam0;
}

bool func_147(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	bool bVar0;

	DEBUG::_0xF0783374333FD8CE(680, 157, "SATCHEL_LAUNCH_INTERACTION_TASKS_DOCUMENTS eITemUsed = ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam0), " HashName: ", func_75(bParam0, 0));
	switch (func_143(bParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				bVar0 = 2129866661;
				if (bParam2)
				{
					bVar0 = 1607869040;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for MP_DOCUMENT_INSPECT@Paper_W48-2_H32-2_FoldVerticalHorizontal");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				bVar0 = 1589555562;
				if (bParam2)
				{
					bVar0 = -1424266966;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W15_1_H24_FOLDVERTICAL");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				bVar0 = 1159762194;
				if (bParam2)
				{
					bVar0 = -1791047090;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				bVar0 = 343713021;
				if (bParam2)
				{
					bVar0 = 760057945;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				bVar0 = 889797228;
				if (bParam2)
				{
					bVar0 = -1043439814;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W48_2_H32_2_FOLDVERTICALHORIZONTAL");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				bVar0 = 1254219723;
				if (bParam2)
				{
					bVar0 = -2077441721;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W15_24_H10_16");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				bVar0 = 436157482;
				if (bParam2)
				{
					bVar0 = 1972630951;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W10_16_H15_24");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				bVar0 = -138141811;
				if (bParam2)
				{
					bVar0 = 2000759837;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W12_7_H17_78");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				bVar0 = 1801769345;
				if (bParam2)
				{
					bVar0 = 374699583;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W17_78_H12_7");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				bVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					bVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_D2_H32_ROLLED");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				bVar0 = -27851152;
				if (bParam2)
				{
					bVar0 = -1340223099;
				}
				DEBUG::_0xF0783374333FD8CE(8, 157, "START_TASK_ITEM_INTERACTION for CI_TAG_PAPER_W11_5_H20_5");
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				bVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					bVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				bVar0 = -1418730365;
				if (bParam2)
				{
					bVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				bVar0 = 1014486005;
				if (bParam2)
				{
					bVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				bVar0 = -1246302402;
				if (bParam2)
				{
					bVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, bVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

bool func_148()
{
	return Global_1953612.f_1694.f_1[1 /*3*/].f_1 == joaat("POMADE");
}

bool func_149(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_294(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_150(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_FROM_CONTAINER for item: ", func_75(bParam0, 0));
	bVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			bVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			bVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		if (func_64(bParam0, 1573112293))
		{
			func_297(func_296(bParam0), 1, 1);
		}
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_FROM_CONTAINER launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_151(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CANNED_FOOD for item: ", func_75(bParam0, 0));
	bVar0 = 16939881;
	switch (func_295())
	{
		case 0:
			bVar0 = 16939881;
			break;
		case 1:
			bVar0 = -1165614444;
			break;
		case 3:
			bVar0 = 968591133;
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CANNED_FOOD launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_BOTTLE_OVAL_L5_5_W9_5H10_NECK_A6_B2_5 for item: ", func_75(bParam0, 0));
	bVar0 = -45077177;
	switch (func_295())
	{
		case 0:
			if (bParam1)
			{
				bVar0 = -2137817968;
			}
			else
			{
				bVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				bVar0 = -1947358597;
			}
			else
			{
				bVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				bVar0 = -750686877;
			}
			else
			{
				bVar0 = 1293288723;
			}
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_BOTTLE_OVAL_L5_5_W9_5H10_NECK_A6_B2_5 launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_153(bool bParam0, bool bParam1)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_BOTTLE_OVAL_L6_5_W12_H9_5_NECK_A12_5_B4 for item: ", func_75(bParam0, 0));
	bVar0 = 1700817728;
	switch (func_295())
	{
		case 0:
			if (bParam1)
			{
				bVar0 = -447623645;
			}
			else
			{
				bVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				bVar0 = 1880532390;
			}
			else
			{
				bVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				bVar0 = 468890170;
			}
			else
			{
				bVar0 = 764367205;
			}
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_BOTTLE_OVAL_L6_5_W12_H9_5_NECK_A12_5_B4 launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_154(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_LARGE_DRINK_COMBAT for item: ", func_75(bParam0, 0));
	bVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			bVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			bVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_LARGE_DRINK_COMBAT launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_155(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CARROT_ITEM for item: ", func_75(bParam0, 0));
	bVar0 = 2105609037;
	switch (func_295())
	{
		case 0:
			bVar0 = 2105609037;
			break;
		case 3:
			bVar0 = -457187977;
			break;
		case 1:
			bVar0 = -1595716047;
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CARROT_ITEM launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_156(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_FRUIT_ITEM for item: ", func_75(bParam0, 0));
	bVar0 = 1964324114;
	switch (func_295())
	{
		case 0:
			bVar0 = 1964324114;
			break;
		case 3:
			bVar0 = -654111932;
			break;
		case 1:
			bVar0 = 1826089606;
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_FRUIT_ITEM launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_157(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_SANDWICH_ITEM for item: ", func_75(bParam0, 0));
	bVar0 = -1530144981;
	switch (func_295())
	{
		case 0:
			bVar0 = -1530144981;
			break;
		case 3:
			bVar0 = -389189374;
			break;
		case 1:
			bVar0 = -312546963;
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_SANDWICH_ITEM launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_158(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CHEESE_ITEM for item: ", func_75(bParam0, 0));
	bVar0 = -1074475556;
	switch (func_295())
	{
		case 0:
			bVar0 = -1074475556;
			break;
		case 3:
			bVar0 = 392506445;
			break;
		case 1:
			bVar0 = -1846586910;
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CHEESE_ITEM launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_159(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_INJECTION_ITEM for item: ", func_75(bParam0, 0));
	bVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_INJECTION_ITEM launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_160(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CIGARETTE_ITEM for item: ", func_75(bParam0, 0));
	bVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			bVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			bVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CIGARETTE_ITEM launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_161(bool bParam0)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CIGAR_ITEM for item: ", func_75(bParam0, 0));
	bVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			bVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			bVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_CIGAR_ITEM launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		func_298(Global_33, bParam0, bVar0, 1, 0);
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_162(bool bParam0, bool bParam1)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_BOTTLE_REMEDY for item: ", func_75(bParam0, 0));
	bVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			bVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			bVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_BOTTLE_REMEDY launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		if (!func_298(Global_33, bParam0, bVar0, 1, 0) && bParam1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 158, "SATCHEL_USE_BOTTLE_REMEDY: SATCHEL_LAUNCH_CONSUMABLE_INTERACTION failed but we're quick use so using generic");
			func_299(bParam0);
			func_300(bParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

void func_163(bool bParam0, bool bParam1)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_TONIC_POTENT for item: ", func_75(bParam0, 0));
	bVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			bVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			bVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	if (bVar0 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_USE_TONIC_POTENT launching interaction: ", UNK_0x4379B6FA65D55295(bVar0));
		if (!func_298(Global_33, bParam0, bVar0, 1, bParam1) && bParam1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 158, "SATCHEL_USE_BOTTLE_REMEDY: SATCHEL_LAUNCH_CONSUMABLE_INTERACTION failed but we're quick use so using generic");
			func_299(bParam0);
			func_300(bParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_299(bParam0);
		func_300(bParam0, 1, 0, 562618531);
	}
}

bool func_164(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_165(int iParam0)
{
	if (func_164(iParam0, 1))
	{
		func_301(1);
	}
}

bool func_166(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_302(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

void func_168(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_SET_FLAG] Setting: ", func_303(iParam0, 0));
	Global_1953612 = (Global_1953612 || iParam0);
}

void func_169(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(40, 208, "PUSH_METAPED_CLOTHING_SYSTEM_REQUEST: Request Type: ", func_304(Param0, 0));
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
			if (func_305(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_918)
				{
					iVar1 = ((Global_1953612.f_923 + iVar0) % 25);
					if ((Global_1953612.f_736[iVar1 /*4*/] == Param0 && Global_1953612.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_304(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
						return;
					}
					iVar0++;
				}
			}
			func_306(Param0);
			Global_1953612.f_736[Global_1953612.f_924 /*4*/] = { Param0 };
			Global_1953612.f_918++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] No Restriction Request Type: ", func_304(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_924);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_918);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_132(Param0.f_2));
			Global_1953612.f_924 = (Global_1953612.f_924 + 1 % 25);
			func_168(8);
			break;
		case 24:
		case 25:
			if (Global_1953612.f_919 >= 25)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sUpdateRestrictionsRequestData Size Exceeded | Attempting to Insert more than ", 25);
				return;
			}
			if (func_305(Param0))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_304(Param0, 0), " has already been created | BYPASSING ADD!");
				return;
			}
			func_306(Param0);
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Restriction Request Type: ", func_304(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]   Adding Request to slot: ", Global_1953612.f_919);
			Global_1953612.f_635[Global_1953612.f_919 /*4*/] = { Param0 };
			Global_1953612.f_919++;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]           New Queue Size: ", Global_1953612.f_919);
			func_168(8);
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
			if (func_305(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_920)
				{
					iVar1 = ((Global_1953612.f_921 + iVar0) % 20);
					if ((Global_1953612.f_837[iVar1 /*4*/] == Param0 && Global_1953612.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_304(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
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
			func_306(Param0);
			Global_1953612.f_837[Global_1953612.f_922 /*4*/] = { Param0 };
			Global_1953612.f_920++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]         System Request Type: ", func_304(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_922);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_920);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_132(Param0.f_2));
			Global_1953612.f_922 = (Global_1953612.f_922 + 1 % 20);
			func_168(8);
			break;
			break;
	}
}

bool func_170()
{
	return Global_1953612.f_3561;
}

bool func_171(bool bParam0)
{
	if (func_307())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_ALLOWED: Usage already in progress");
		return false;
	}
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 157, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_ALLOWED: this is not a valid item ", func_75(bParam0, 0));
		return false;
	}
	if (!func_16(bParam0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_ALLOWED - Item not in satchel", func_75(bParam0, 0), " when none are in the player's inventory, ignoring");
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_ALLOWED: Can use");
	return true;
}

int func_172(bool bParam0)
{
	return func_308(bParam0);
}

void func_173(int iParam0, int iParam1)
{
	func_309(iParam0, iParam1);
}

int func_174(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Item: ", func_75(bParam0, 0));
	bVar3 = func_310(bParam0);
	if (func_79(bParam0) == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */ || func_64(bParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Item being worn");
		if (func_311(&bVar2))
		{
			if (bVar1)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull down mask");
				bVar0 = func_312();
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull down bandana");
				bVar0 = func_313();
			}
		}
		else if (bVar1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull up mask");
			bVar0 = func_314();
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull up bandana");
			bVar0 = func_315();
		}
	}
	else if (func_316(&bVar2))
	{
		if (func_64(bVar2, -1303648999) || func_79(bVar2) == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */)
		{
			DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to remove prev mask: ", func_75(bVar2, 0));
			bVar0 = func_312();
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to remove prev bandana: ", func_75(bVar2, 0));
			bVar0 = func_313();
		}
	}
	else if (bVar1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to equip mask");
		bVar0 = func_314();
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to equip bandana");
		bVar0 = func_315();
	}
	if (bVar0 != 0)
	{
		Global_1953612.f_3560 = MISC::GET_GAME_TIMER();
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Buffer Time: ", Global_1953612.f_3560);
		DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Yay Interaction: Item: ", func_75(bParam0, 0));
		DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Yay Interaction: Flags: ", func_132(iParam1));
		TASK::_TASK_ITEM_INTERACTION(Global_33, bParam0, bVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_175(int iParam0)
{
	return (Global_1953612 && iParam0) != 0;
}

void func_176()
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__CLEAR_TEMP_HAT] Clearing temp hat");
	UNK_0x355E72323AEE83CC(208, 6);
	Global_1953612.f_3544 = 0;
	Global_1953612.f_3544.f_1 = 0;
	Global_1953612.f_3544.f_8 = 0;
	Global_1953612.f_3544.f_2 = 0;
	Global_1953612.f_3544.f_3[0] = 0;
	Global_1953612.f_3544.f_3[1] = 0;
	Global_1953612.f_3544.f_3[2] = 0;
	Global_1953612.f_3544.f_3[3] = 0;
	Global_1953612.f_3544.f_9 = 0;
	Global_1953612.f_3544.f_10 = 0;
	Global_1953612.f_3544.f_11 = 0;
	if (Global_1953612.f_3544.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1953612.f_3544.f_13);
	}
	Global_1953612.f_3544.f_12 = 0;
	func_317(32768);
	func_318(1108822547, 8, 6);
}

bool func_177(int iParam0, bool bParam1)
{
	return func_319(iParam0, 0) < func_320(iParam0, bParam1);
}

bool func_178(bool bParam0)
{
	var uVar0;

	return func_321(bParam0, &uVar0);
}

void func_179(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_79(bParam0);
	bVar1 = false;
	switch (bVar0)
	{
		case -2061583405:
			if (func_64(bParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_28), Global_1953612.f_3411.f_33.f_1, bParam1, bParam5);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_27), Global_1953612.f_3411.f_33, bParam1, bParam5);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_29), Global_1953612.f_3411.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_64(bParam0, 160827531))
			{
				bVar1 = func_322(bParam0, &(Global_1953612.f_3411.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_323();
	if (func_324(bVar0) || (bVar0 != -999503751 && func_64(bParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_117(bParam5), bParam0, 0);
	}
	func_86(bParam0, bParam3, bParam5);
	if (bParam4)
	{
		func_325(1, bParam0);
	}
	if (bParam2)
	{
		func_326(0, 0);
	}
}

int func_180(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_327();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_328(bParam0, bParam1))
	{
		func_329(bParam0, bParam1, 1, bParam2, bParam3, bParam4);
		return;
	}
	DEBUG::_0x83407B92D46F25C3(2728, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_REPLACE_ITEM] Items do not share the same category item to replace: ", UNK_0x4379B6FA65D55295(bParam0), " item to add: ", UNK_0x4379B6FA65D55295(bParam1), " | EXIT");
}

bool func_182(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953612.f_83[iVar0 /*12*/].f_9 == bParam0)
		{
			return func_330(iVar0, 1);
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_INVENTORY_SLOTID] Failed to find: ", func_183(bParam0, 0));
	return -358215195;
}

var func_183(bool bParam0, int iParam1)
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

char* func_184(bool bParam0, int iParam1)
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

int func_185(bool bParam0, int iParam1)
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

bool func_186(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] Setting: ", UNK_0x4379B6FA65D55295(bParam0));
	func_331();
	if (iParam2 == 39)
	{
		Var0 = { func_127(bParam0, 1, 0) };
		iParam2 = func_185(func_182(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2184, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] iMetaIndex is out of bounds: ", iParam2, " Max: ", 39, " | RETURN FALSE");
		return false;
	}
	if (func_175(32768) && iParam2 == 10)
	{
		func_332(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_188(bParam0, 1))
	{
		func_333(&(Global_1953612.f_1575), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_334(iParam2);
	}
	func_335(iParam2, iVar5);
	func_336(&(Global_1953612.f_1575.f_1[iParam2 /*3*/]), 4, 6);
	func_336(&(Global_1953612.f_1694.f_1[iParam2 /*3*/]), 4, 6);
	func_337(&(Global_1953612.f_1575), bParam0, iParam2, 1, iVar5);
	if (bParam1 == 0)
	{
		bParam1 = Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953612.f_1575.f_1[iParam2 /*3*/] = bParam0;
	Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1 = func_338(bParam0, iParam2, bParam1);
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
				func_318(func_330(Global_1953612.f_2956.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] ...Ending");
	return true;
}

void func_187(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	DEBUG::_0xF0783374333FD8CE(174760, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_CACHE_DATA] Transfer to Current: ", MISC::_0xF216F74101968DB0(bParam0), " Transfer to Save: ", MISC::_0xF216F74101968DB0(bParam1), " Request Save: ", MISC::_0xF216F74101968DB0(bParam2), " handle outfit switch: ", MISC::_0xF216F74101968DB0(bParam3));
	func_339(&(Global_1953612.f_2956), bParam0, bParam1, bParam2, bParam3);
}

bool func_188(bool bParam0, bool bParam1)
{
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_NONE_ITEM: attempting to process an invalid item!");
	}
	if (!bParam1 && (bParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || bParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_64(bParam0, 265372629))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_NONE_ITEM");
		return true;
	}
	return false;
}

bool func_189(bool bParam0, bool bParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	bool bVar9;

	Var4 = { func_127(bParam0, bParam2, 0) };
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS_MARK_COMPONENT_AS_EQUIPPED] Equipping Clothing Item: ", func_75(bParam0, 0), " Equipped: ", MISC::_0xF216F74101968DB0(bParam1));
	if (func_188(bParam0, 0))
	{
		bVar9 = func_340(Var4, Var4.f_4, bParam2, -1);
		if (bVar9 != 0)
		{
			Var4 = { func_127(bVar9, bParam2, 0) };
			Var0 = { func_128(bVar9, Var4, Var4.f_4, bParam2) };
			return func_341(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_128(bParam0, Var4, Var4.f_4, bParam2) };
	return func_341(Var0, bParam1, bParam2);
}

int func_190(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_185(bParam0, 1);
	switch (bParam0)
	{
		case 1108822547:
			if (Global_1953612.f_1694.f_1[iVar1 /*3*/] == Global_1953612.f_83[iVar1 /*12*/] || Global_1953612.f_1575.f_1[iVar1 /*3*/] == Global_1953612.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_191(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_192(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_116(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_75(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_75(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_183(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_128(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_75(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_117(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_75(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_117(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_75(bParam0, 0));
	}
	return iVar0;
}

var func_193(bool bParam0, int iParam1)
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

struct<4> func_194(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_117(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_128(joaat("CHARACTER"), func_342(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_128(joaat("CHARACTER"), func_342(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_128(joaat("CHARACTER"), func_342(), -1591664384, bParam0);
}

int func_195(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_285;
	}
	return iParam0;
}

bool func_196(int iParam0)
{
	int iVar0;

	iParam0 = func_195(iParam0);
	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_IS_PLAYER_NEAR_HORSE_FOR_INTERACTION - eSlot = PH_SLOT_INVALID");
		return false;
	}
	if (iParam0 >= 7)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_IS_PLAYER_NEAR_HORSE_FOR_INTERACTION - eSlot >= NUM_PLAYER_HORSE_SLOTS");
		return false;
	}
	iVar0 = func_91(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_IS_PLAYER_NEAR_HORSE_FOR_INTERACTION - ped doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "PLAYER_HORSE_IS_PLAYER_NEAR_HORSE_FOR_INTERACTION - ped is dead or injured.");
		return false;
	}
	if (func_343(iVar0))
	{
		return true;
	}
	return false;
}

int func_197()
{
	return Global_38.f_285.f_3222;
}

bool func_198()
{
	return Global_1915867.f_22504.f_1;
}

bool func_199(int iParam0)
{
	return (Global_1051777.f_3636 && iParam0) != 0;
}

void func_200(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 55, "[NET_SHOP_HANDHELD_LOCAL_CLEAR_LAUNCH_FLAG] ", func_344(iParam0, 0));
	Global_1051777.f_3636 = (Global_1051777.f_3636 - (Global_1051777.f_3636 && iParam0));
}

void func_201(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 139, "[NET_SHOP_HANDHELD_SET_LAUNCH_SCENARIO_SHUTDOWN_STATE] Moving to: ", func_345(iParam0, 0), " was: ", func_345(Global_1051777.f_3637, 0));
	Global_1051777.f_3637 = iParam0;
}

bool func_202()
{
	return Global_1915867.f_22504;
}

void func_203()
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HANDHELDCATALOGUE"));
}

bool func_204()
{
	return func_199(4);
}

int func_205(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_346())
	{
		return 3;
	}
	if ((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PAUSE_MENU")) > 0 && Global_1051777.f_3638 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915867.f_20638)
	{
		return 10;
	}
	if (Global_1051777.f_3726 != 0)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 12;
	}
	if ((func_347(1106247680 /* Float: 30f */, 0) || PED::_IS_PED_HOGTIED(Global_33)) || PED::_IS_PED_HOGTYING(Global_33))
	{
		return 13;
	}
	if (PED::_0x1D46B417F926D34D(Global_33) || PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			switch (iVar2)
			{
				case joaat("BREACH_CANNON"):
				case joaat("GATLING_GUN"):
				case joaat("GATLINGMAXIM02"):
				case joaat("HOTCHKISS_CANNON"):
					return 14;
			}
		}
		return 11;
	}
	if (TASK::_0x038B1F1674F0E242(Global_33) && !Global_1915867.f_22504.f_1)
	{
		return 16;
	}
	if (PED::_IS_PED_CARRYING(Global_33))
	{
		return 17;
	}
	if (TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return 18;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		iVar3 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		if ((iVar3 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar3 != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")) && iVar3 != joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"))
		{
			return 19;
		}
	}
	if (func_348(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108789.f_935.f_28 != -1 && Global_1108789.f_935.f_28 != 6) && Global_1108789.f_935.f_28 != 8)
	{
		if (func_349(Global_1108789.f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (PED::_0x2942457417A5FD24(Global_33) >= 1f)
	{
		return 22;
	}
	if (Global_1572887.f_108.f_75 >= 11 && Global_1572887.f_108.f_75 < 15)
	{
		return 42;
	}
	if (((PED::IS_PED_FALLING(Global_33) || PED::IS_PED_CLIMBING(Global_33)) || PED::_IS_PED_SLIDING(Global_33)) || PED::IS_PED_SWIMMING(Global_33))
	{
		return 15;
	}
	if (PED::_0x7FC84E85D98F063D(Global_33))
	{
		return 21;
	}
	if (func_350())
	{
		return 43;
	}
	return -1;
}

char* func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "SHOPS_HANDHELD_FAIL_INVALID";
		case 0:
			return "SHOPS_HANDHELD_FAIL_DEFAULT";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_LOCKED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_SHOP";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TRANSPORT";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_PERFORMING_ACTION";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_PERFORMING_INTERACTION";
		case 22:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_POSSE_VERSUS";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_POSSE_VERSUS_HUNT_THE_POSSE_LEADER";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_POSSE_VERSUS_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_POSSE_VERSUS_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_POSSE_VERSUS_HERBALIST";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 43:
			return "SHOPS_HANDHELD_FAIL_PLAYING_AS_ANIMAL";
		case 44:
			return "SHOPS_HANDHELD_FAIL_MINIGAME_ACTIVE";
		case 45:
			return "SHOPS_HANDHELD_FAIL_UI_APP_ACTIVE_PAUSE_MENU";
		case 46:
			return "SHOPS_HANDHELD_FAIL_MISSION_FREEMODE";
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

void func_207(bool bParam0)
{
	int iVar0;

	UNK_0x355E72323AEE83CC(139, 6);
	if (!func_204())
	{
		func_351(1);
	}
	Global_1051777.f_3638 = bParam0;
	DEBUG::_0xF0783374333FD8CE(40, 139, "[HANDHELD_CATALOG][HANDHELD_CATALOG_SET_ITEM_TO_OPEN_AT] Setting g_mpShopsData.eItemToOpenAt = ", func_75(bParam0, 0));
	iVar0 = func_205(1);
	if (iVar0 != -1)
	{
		func_137(iVar0);
		func_352(0);
	}
	else
	{
		func_352(1);
	}
}

bool func_208()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_3;
}

bool func_209(int iParam0)
{
	return func_213(Global_1134820[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_210()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_211()
{
	return !func_209(2);
}

bool func_212(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1198211.f_1 && iParam0) != 0;
}

bool func_213(char* sParam0, int iParam1)
{
	return (sParam0 && iParam1) != 0;
}

void func_214()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

bool func_215(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_354(bParam2, func_353(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 20, "[IS_PLAYER_MENU_LAUNCHABLE] Disabled by IS_SAFE_TO_OPEN_MENU - ", MISC::_0xF216F74101968DB0(!bVar0));
		return false;
	}
	return true;
}

char* func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PLAYER_MENU_ENTRYPOINT_INVALID";
		case 0:
			return "PLAYER_MENU_ENTRYPOINT_DEFAULT";
		case 1:
			return "PLAYER_MENU_ENTRYPOINT_MATCHMAKING";
		case 2:
			return "PLAYER_MENU_ENTRYPOINT_CAMP_SELECTION";
		case 3:
			return "PLAYER_MENU_ENTRYPOINT_MOONSHINE_SELECTION";
		case 4:
			return "PLAYER_MENU_ENTRYPOINT_MOONSHINE_PLAYER_INVITE";
		case 5:
			return "PLAYER_MENU_ENTRYPOINT_INVITES";
		case 6:
			return "PLAYER_MENU_ENTRYPOINT_POST_OFFICE";
		case 7:
			return "PLAYER_MENU_ENTRYPOINT_MISSIONS";
		case 8:
			return "PLAYER_MENU_ENTRYPOINT_EMOTE_TYPES";
		case 9:
			return "PLAYER_MENU_ENTRYPOINT_MINIGAME";
		case 10:
			return "PLAYER_MENU_ENTRYPOINT_MINIGAME_LANDING";
		case 11:
			return "PLAYER_MENU_ENTRYPOINT_MINIGAME_JIP_LANDING";
		case 12:
			return "PLAYER_MENU_ENTRYPOINT_MINIGAME_INVITES";
		case 13:
			return "PLAYER_MENU_ENTRYPOINT_MINIGAME_INVITE_PLAYERS";
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

void func_217(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 162, "__PLAYER_MENU_SET_LAUNCH_ENTRY_POINT - Setting new Launch entry point: ", func_216(iParam0, 0));
	UNK_0x355E72323AEE83CC(162, 6);
	Global_1896750.f_411 = iParam0;
}

int func_218(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134820[iVar0 /*83*/].f_38.f_3;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 62, "[GET_NET_CAMP_CACHED_INDEX_FROM_PLAYER] Invalid player! Returning invalid camp index");
	return -1;
}

int func_219(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196810.f_1[iVar1 /*26*/].f_1 != -1 && func_355(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (Global_1197369.f_78[iVar1 /*20*/] >= 2)
					{
						return Global_1196810.f_1[iVar1 /*26*/].f_1;
					}
				}
				else if (Global_1197369.f_78[iVar1 /*20*/] >= 5)
				{
					return Global_1196810.f_1[iVar1 /*26*/].f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 57, "NET_FME_MANAGER_GET_EVENT_TYPE - Invalid event");
		return 0;
	}
	return Global_1197369.f_1[iParam0 /*4*/];
}

var func_221(int iParam0, int iParam1)
{
	return func_356(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_222(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_357(&(Global_1072032.f_23083), Var0);
				DEBUG::_0x1B08D1EB9D8C4931(40, 32, "BROADCAST_TICKER_EVENT - storing message - ", func_358(Param0.f_4));
				return;
			}
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 32, "BROADCAST_TICKER_EVENT - broadcasting - ", func_358(Param0.f_4));
	DEBUG::_0x1B08D1EB9D8C4931(8, 32, "structTickerEventData.eventDetails.timeStamp = ", Param0.f_2);
	DEBUG::_0x1B08D1EB9D8C4931(8, 32, "structTickerEventData.playerID                = ", Param0.f_14);
	DEBUG::_0x1B08D1EB9D8C4931(40, 32, "structTickerEventData.playerID Name           = ", func_359(Param0.f_14));
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_223(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_224(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_360(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_226(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_361(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_362(iParam0, 0));
		return false;
	}
	if (func_363(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_362(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_364(iParam0, 1)) || func_365(32768))
	{
		if (!func_364(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_366())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_225(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_226(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

void func_227(int iParam0, int iParam1)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 141, "NET_PLAYER_CAMP_MANAGER_SET_PLAYER_FLAG ", func_367(iParam0, 0));
	iVar0 = iParam1;
	Global_1138479[iVar0 /*9*/].f_7 = (Global_1138479[iVar0 /*9*/].f_7 || iParam0);
}

float func_228()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_231(var uParam0)
{
	if (!func_33(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_368(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_228() - uParam0->f_1);
}

void func_232(bool bParam0, var uParam1, var uParam2)
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

char* func_233(int iParam0, int iParam1)
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

struct<14> func_234(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_75(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_183(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_183(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_183(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_193(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_247(iParam6, 0));
	}
	return Var0;
}

struct<4> func_235(bool bParam0)
{
	int iVar0;

	iVar0 = func_117(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_128(923904168, func_194(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_128(923904168, func_194(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_128(923904168, func_194(bParam0), -740156546, 0);
}

void func_236(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_237(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_117(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_238(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

bool func_239(int iParam0)
{
	return func_52(iParam0, 2);
}

bool func_240(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_241(bool bParam0)
{
	if (func_15() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_117(bParam0));
}

bool func_242(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Invalid quantity of ", iParam4, " supplied for ", func_75(bParam2, 0));
		return false;
	}
	else if (*uParam0 != 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - sOutPlacementInfo array is not the correct size, needs to be MAX_ITEMPATH_PLACEMENTS");
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_116(bParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(40, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - No pathset supplied and no default pathset is available for ", func_75(bParam2, 0));
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement info");
		return false;
	}
	if (!func_369(uParam0, iParam1, iParam4, bParam5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement data, returning FALSE");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Returning ", *iParam1, " placements for ", func_75(bParam2, 0));
	return true;
}

struct<17> func_243(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_128(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_244(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - ", func_370(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_371(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_373(func_372(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_374(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

void func_245(int iParam0, struct<17> Param1)
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
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   eStatus:                        ", func_375(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
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

char* func_246(int iParam0, int iParam1)
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

char* func_247(int iParam0, int iParam1)
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

bool func_248(bool bParam0, bool bParam1)
{
	if (func_79(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_376();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_249(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_192(bParam0, *uParam1, iParam2, bParam3, 1, bParam4) > 0;
}

bool func_250(bool bParam0, var uParam1, bool bParam2)
{
	var uVar0;

	if (func_377(bParam0, &uVar0, uParam1, bParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_251(bool bParam0)
{
	int iVar0;

	iVar0 = func_117(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_128(271701509, func_194(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_128(271701509, func_194(bParam0), 12999093, 0);
}

bool func_252(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_79(bParam0);
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
			if (func_378(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_253(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_379(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_254(bool bParam0)
{
	if (func_43(bParam0, 0))
	{
		if (func_64(bParam0, -1242251796))
		{
			if (func_64(bParam0, 2060589226))
			{
				return func_380();
			}
			return func_381();
		}
		else if (func_64(bParam0, 1919582297))
		{
			return func_267();
		}
		else if (func_64(bParam0, 1647670816))
		{
			return func_382();
		}
		else if (func_64(bParam0, 1147021565))
		{
			return func_270();
		}
	}
	if (Global_1940296.f_12)
	{
		return func_381();
	}
	else
	{
		return func_270();
	}
	return func_270();
}

int func_255()
{
	return 225949718;
}

bool func_256(bool bParam0)
{
	return (bParam0 == 1401465909 || bParam0 == joaat("KIT_COLLECTORS_BAG"));
}

int func_257()
{
	return 1039657088;
}

bool func_258(bool bParam0)
{
	if ((((((((((func_64(bParam0, 1147021565) || func_64(bParam0, -136654233)) || func_64(bParam0, -524514947)) || func_64(bParam0, -1238310989)) || func_64(bParam0, 1765172170)) || func_64(bParam0, 1490540191)) || func_64(bParam0, 1573112293)) || func_64(bParam0, -1242251796)) || func_64(bParam0, 1919582297)) || func_64(bParam0, -2085281117)) || bParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return true;
	}
	return false;
}

int func_259()
{
	return 1039392896;
}

int func_260()
{
	return 1039645941;
}

int func_261()
{
	return 1039907016;
}

int func_262()
{
	return 1039902864;
}

int func_263()
{
	return 955497620;
}

int func_264()
{
	return 1022861303;
}

int func_265()
{
	return 1039902720;
}

int func_266()
{
	return 972554239;
}

int func_267()
{
	return 905165831;
}

int func_268()
{
	return 1038822532;
}

int func_269()
{
	return 1037713383;
}

int func_270()
{
	return 1039645911;
}

int func_271()
{
	return 1039655040;
}

bool func_272(int iParam0)
{
	return func_213(Global_1940296.f_7, iParam0);
}

bool func_273(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_274(bool bParam0)
{
	int iVar0;

	if (func_272(1))
	{
		if (bParam0)
		{
			func_78("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "CAN_PLAYER_INSPECT - Ped is picking up something.");
		return false;
	}
	if (func_272(2) && MISC::GET_GAME_TIMER() >= Global_17391)
	{
		if (bParam0)
		{
			iVar0 = func_383(Global_33);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_78("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					DEBUG::_0x1B08D1EB9D8C4931(8, 157, "CAN_PLAYER_INSPECT - Ped is skinning.");
					return false;
				}
			}
			func_78("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "CAN_PLAYER_INSPECT - Ped is looting.");
		return false;
	}
	if (func_272(4194304))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "CAN_PLAYER_INSPECT - Ped is stowing something.");
		return false;
	}
	return true;
}

bool func_275(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::_IS_PED_CARRYING(Global_33))
	{
		PED::_0x6B67320E0D57856A(Global_33, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_78("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "CAN_PLAYER_INSPECT - Ped is carrying something.");
		return false;
	}
	return true;
}

bool func_276(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				DEBUG::_0x4DC69742196F818A(8, 157, "CAN_PLAYER_INSPECT_IN_VEHICLE: player in non-inspection vehicle, cancel inspection");
				if (bParam0)
				{
					func_78("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				DEBUG::_0x4DC69742196F818A(8, 157, "CAN_PLAYER_INSPECT_IN_VEHICLE: player in non-inspection cannon, cancel inspection");
				if (bParam0)
				{
					func_78("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_273(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam2 || VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_33)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "CAN_PLAYER_INSPECT_IN_VEHICLE: player in driver's seat, should not be able to inspect");
				return false;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "CAN_PLAYER_INSPECT_IN_VEHICLE: player in process of entering vehicle, cancel inspection");
		return false;
	}
	return true;
}

bool func_277(int iParam0, int iParam1)
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

bool func_278(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return false;
}

bool func_279(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "IS_HORSE_SPEED_VALID_TO_USE_ITEM - ped doesn't exist.");
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "IS_HORSE_SPEED_VALID_TO_USE_ITEM - ped is dead or injured.");
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0)
{
	return (Global_1959052 && iParam0) != 0;
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_50(*iParam0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__EXTERNAL__GET_MISSION_TYPE_FROM_UID - invalid uid provided");
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_384(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_385(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_386(iVar1);
			}
			break;
		case 3:
			iVar3 = func_387(iVar5);
			iVar4 = func_388(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_389(iVar4);
			}
			break;
		default:
			DEBUG::_0x4423BBAB7EB2B96B(168, 0, "NET_FREEMODE_MISSION__EXTERNAL__GET_MISSION_TYPE_FROM_UID - ", func_390(*iParam0, 0), " undefined");
			break;
	}
	return iVar0;
}

var func_282(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_391(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_50(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_392(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

bool func_283(int iParam0, int iParam1, bool bParam2)
{
	return !MISC::_IS_STRING_SPACE(func_286(func_393(iParam0, iParam1, bParam2)));
}

char* func_284(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "Mission#", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	return func_286(cVar0);
}

struct<8> func_285(int iParam0, int iParam1)
{
	return func_393(iParam0, iParam1, 1);
}

char* func_286(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_287(bool bParam0, int iParam1)
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

bool func_288(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211864.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && Global_1211864.f_48[iParam0 /*21*/].f_18[iVar0] == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_289(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_290(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_17414.f_2989 == 1)
	{
		if (iParam0 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(8, 74, "NET_ABANDONED_LOOT_MANAGER_CAN_ANY_LOOT_LOCATION_RUN - Invalid Location Index && Collectibles is Running");
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17414.f_2989.f_1[iVar1 /*5*/].f_4 == 0)
			{
			}
			else if (func_394(Global_17414.f_2989.f_1[iVar1 /*5*/].f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_394(Global_1211864.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1))
					{
					}
					else
					{
						fVar0 = func_395(Global_17414.f_2989.f_1[iVar1 /*5*/].f_1, Global_1211864.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1);
						if (fVar0 < 300f)
						{
							DEBUG::_0xF0783374333FD8CE(8, 74, "NET_ABANDONED_LOOT_MANAGER_CAN_ANY_LOOT_LOCATION_RUN - Too close to a collectable search mission to run");
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_396(4))
	{
		return false;
	}
	if (func_293())
	{
		DEBUG::_0xF0783374333FD8CE(8, 74, "NET_ABANDONED_LOOT_MANAGER_CAN_ANY_LOOT_LOCATION_RUN - forcing run as we are in the MP intro mission");
		return true;
	}
	if (func_397())
	{
		return false;
	}
	if (func_398(1, 255))
	{
		return false;
	}
	if (func_50(func_399()) && Global_1211864.f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_291(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211864.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_16(Global_1211864.f_48[iParam0 /*21*/].f_18[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_292(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211864.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_400(Global_1211864.f_48[iParam0 /*21*/].f_18[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_293()
{
	return func_401(func_49(0));
}

bool func_294(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

int func_295()
{
	bool bVar0;
	bool bVar1;

	if (PED::_IS_PED_CARRYING(Global_33))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "Player carrying something, falling back to RIGHT hand");
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar0, true, 0, false))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 157, "Player has weapon in RIGHT hand: ", func_75(bVar0, 0));
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar1, true, 1, false))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 157, "Player has weapon in LEFT hand: ", func_75(bVar1, 0));
	}
	if (bVar1 == joaat("WEAPON_UNARMED"))
	{
		if (bVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(bVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(bVar0)) && !func_402(bVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_33, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(bVar0) && func_402(bVar0)) || WEAPON::_IS_WEAPON_LASSO(bVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (bVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_296(bool bParam0)
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

void func_297(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_403(iParam0);
	iVar1 = func_296(bVar0);
	if (iVar1 != iParam0)
	{
		func_404(iVar1, 4);
	}
	if (!func_405(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 191, "HERB_TYPE_UNLOCK_PROPERTY_DISPLAY: Attempting to unlock the property display of an invalid herb type!");
		return;
	}
	if (func_406(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 191, "HERB_TYPE_UNLOCK_PROPERTY_DISPLAY: Property display is already unlocked for the herb type!");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(168, 191, "HERB_TYPE_UNLOCK_PROPERTY_DISPLAY: herb type ", func_407(iParam0, 0), " has had display of its properties unlocked!");
	func_404(iParam0, 4);
	func_408(iParam0, bParam1);
	if (!func_409(iParam0))
	{
		func_410(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_17(0, 0, 1))
		{
			func_411(1, 6);
		}
	}
}

bool func_298(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	DEBUG::_0xA308F935BDECCEC0(680, 158, "SATCHEL_LAUNCH_CONSUMABLE_INTERACTION: eItem - ", func_75(bParam1, 0), ", bQuickUse - ", MISC::_0xF216F74101968DB0(bParam4));
	if (TASK::_0x2D19BC4DF626CBE7(iParam0, bParam1, bParam2, iParam3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 158, "SATCHEL_LAUNCH_CONSUMABLE_INTERACTION: CAN_START_ITEM_INTERACTION returned TRUE");
		TASK::_TASK_ITEM_INTERACTION(iParam0, bParam1, bParam2, iParam3, 0, -1082130432 /* Float: -1f */);
		Global_1940296.f_26 = 1;
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 158, "SATCHEL_LAUNCH_CONSUMABLE_INTERACTION: failed, CAN_START_ITEM_INTERACTION returned FALSE");
	ATTRIBUTE::_0xD962F8579D702DB5();
	return false;
}

void func_299(bool bParam0)
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
	if ((func_64(bParam0, 1573112293) || func_64(bParam0, 672467738)) || func_64(bParam0, -550842268))
	{
		bVar37 = true;
	}
	DEBUG::_0x4DC69742196F818A(40, 158, "PROCESS_GENERIC_ITEM_USE - Inventory Item Group - ", func_247(func_44(bParam0), 0));
	if (func_44(bParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam0, &Var0);
		DEBUG::_0xF0783374333FD8CE(168, 158, "PROCESS_GENERIC_ITEM_USE - ", func_75(bParam0, 0), " Num Effects ", Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			DEBUG::_0xF0783374333FD8CE(648, 158, "PROCESS_GENERIC_ITEM_USE - Effect ", iVar29, ":", func_412(Var0.f_1[iVar29], 0));
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2696, 158, "PROCESS_GENERIC_ITEM_USE - Effect ", iVar29, ":", func_412(Var0.f_1[iVar29], 0), " failed to Fillout via ITEMDATABASE_FILLOUT_EFFECT_ID_INFO.");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(25725608, 158, "PROCESS_GENERIC_ITEM_USE - Key ", func_412(Var22, 0), " Enum ID ", func_413(Var22.f_1, 0), " Value ", Var22.f_2, " Time ", Var22.f_3, " unit ", Var22.f_4, " percent ", Var22.f_5);
				if (-943921969 == Var22.f_1)
				{
					fVar30 = func_414(0, Var22.f_2);
					func_415(Var22.f_2);
					bVar39 = true;
				}
				else if (-1104847406 == Var22.f_1)
				{
					fVar31 = func_414(2, Var22.f_2);
					func_416(Var22.f_2, 0);
					bVar38 = true;
				}
				else if (381158954 == Var22.f_1)
				{
					fVar32 = func_414(1, Var22.f_2);
					func_417(Var22.f_2);
				}
				else if (-416929031 == Var22.f_1)
				{
					fVar33 = func_418(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
					func_419(0, fVar33, 1, 1, bVar37);
					bVar39 = true;
				}
				else if (1857353317 == Var22.f_1)
				{
					fVar34 = func_418(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
					func_419(2, fVar34, 1, 1, bVar37);
					bVar38 = true;
				}
				else if (1681823811 == Var22.f_1)
				{
					fVar35 = func_418(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
					func_419(1, fVar35, 1, 1, bVar37);
				}
				else if (2062242710 == Var22.f_1)
				{
					fVar36 = func_420(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_421(19, fVar36, 1, 1);
					bVar39 = true;
				}
				else if (-826379728 == Var22.f_1)
				{
					fVar36 = func_420(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_421(20, fVar36, 1, 1);
					bVar38 = true;
				}
				else if (-1191740624 == Var22.f_1)
				{
					fVar36 = func_420(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_421(18, fVar36, 1, 1);
				}
				else if (1869697234 == Var22.f_1)
				{
					fVar36 = func_420(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_421(0, fVar36, 1, 1);
					bVar39 = true;
				}
				else if (1342237631 == Var22.f_1)
				{
					fVar36 = func_420(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_421(2, fVar36, 1, 1);
					bVar38 = true;
				}
				else if (-1240225157 == Var22.f_1)
				{
					fVar36 = func_420(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
					func_421(1, fVar36, 1, 1);
				}
				else if (-816334026 == Var22.f_1)
				{
					func_422(BUILTIN::TO_FLOAT(Var22.f_2), 1);
				}
			}
			iVar29++;
		}
		if (bVar39 || func_64(bParam0, -537818634))
		{
			func_424(func_423(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_64(bParam0, -1457797660))
		{
			func_424(func_423(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_424(func_423(joaat("DEADEYE_ITEMS_USED")), 1);
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

int func_300(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	DEBUG::_0xF0783374333FD8CE(648, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Attempting to remove: ", iParam1, " of ", func_75(bParam0, 0));
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Attempting to remove an invalid item from the player's inventory!");
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_425(bParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Updating REMOVE_REASON_DEFAULT to REMOVE_REASON_USED for ", func_75(bParam0, 0));
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_107(bParam0, 1);
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
			func_426(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_16(bParam0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Player doesn't have item: ", func_75(bParam0, 0), " in satchel!");
		return 0;
	}
	Var5 = { func_427(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_47(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_47(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_300(bParam0, func_47(bParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Unhandled Stat Decrement!");
		}
	}
	if (func_44(bParam0) == joaat("WEAPON"))
	{
		if (!func_428(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_60(bParam0, iParam1, iParam3, bParam2, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Failed to remove item: ", func_75(bParam0, 0));
		return 0;
	}
	else
	{
		Var7 = { func_127(bParam0, 0, 0) };
		if (func_241(0) && Var7.f_4 == 1084182731)
		{
			func_429(1, 0, 0);
		}
		DEBUG::_0xF0783374333FD8CE(40, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Removed item: ", func_75(bParam0, 0));
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940296.f_21 = 0;
	}
	if (!func_241(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_426(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_301(int iParam0)
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

int func_302(bool bParam0, bool bParam1)
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

char* func_303(int iParam0, int iParam1)
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

char* func_304(int iParam0, int iParam1)
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

bool func_305(int iParam0)
{
	return Global_1953612.f_595[iParam0] > 0;
}

void func_306(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_REQUEST_INCREMENT_TYPE] Incrementing: ", func_304(iParam0, 0));
	Global_1953612.f_595[iParam0]++;
}

bool func_307()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_IN_PROGRESS **********");
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_IN_PROGRESS: Func Start");
	if (Global_1953612.f_3562)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_IN_PROGRESS: Bandana processing in progress");
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1953612.f_3560)) < 1250)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_IN_PROGRESS: Safety time has not passed");
		return true;
	}
	if (func_430())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_IN_PROGRESS: Metaped clothing event still pending");
		return true;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_IN_PROGRESS: Item task still going on");
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_FACE_COVER_USAGE_IN_PROGRESS: We're good");
	return false;
}

int func_308(bool bParam0)
{
	bool bVar0;

	bVar0 = func_79(bParam0);
	if (((bVar0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ || bVar0 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */) || func_64(bParam0, 160827531)) || func_64(bParam0, -1303648999))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_ITEM_A_FACE_COVER: It's a face cover");
		return 1;
	}
	DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_ITEM_A_FACE_COVER: It's a face cover");
	return 0;
}

void func_309(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_310(bool bParam0)
{
	bool bVar0;

	if (bParam0 == 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Invalid Compare Item");
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Ref Item: ", func_75(bParam0, 0));
	bVar0 = false;
	if (func_316(&bVar0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Found Item: ", func_75(bVar0, 0));
		if (bParam0 == bVar0)
		{
			DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Items match");
			return 1;
		}
	}
	return 0;
}

bool func_311(bool bParam0)
{
	DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Func Start");
	if (-1829635046 == func_431(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: WARDROBE_MASK Hash Up");
		if (func_316(bParam0))
		{
			DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found Item: ", func_75(*bParam0, 0));
			return true;
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found no item even though the wearable state was found");
	}
	else if (func_432(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, bParam0) || func_64(func_433(1742327865), -1303648999))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: WARDROBE_BIG_MASK Hash Up");
		if (func_316(bParam0))
		{
			DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found Big mask item: ", func_75(*bParam0, 0));
			return true;
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found no big mask item even though the wearable state was found");
	}
	DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: No item found");
	return false;
}

bool func_312()
{
	bool bVar0;

	bVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_MASK_OFF_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_313()
{
	bool bVar0;

	bVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_BANDANA_OFF_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_314()
{
	bool bVar0;

	bVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_MASK_ON_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_315()
{
	bool bVar0;

	bVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_295())
	{
		case 0:
			bVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_BANDANA_ON_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_316(bool bParam0)
{
	if (func_432(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */, bParam0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_CURRENT_FACE_COVER: Found Mask item: ", func_75(*bParam0, 0));
		return true;
	}
	if (func_432(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, bParam0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_CURRENT_FACE_COVER: Found Big Mask item: ", func_75(*bParam0, 0));
		return true;
	}
	return false;
}

void func_317(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_CLEAR_FLAG] Clearing: ", func_303(iParam0, 0));
	Global_1953612 = (Global_1953612 - (Global_1953612 && iParam0));
}

void func_318(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG] Clearing[", func_184(bParam0, 0), "]: ", func_132(iParam1));
	Global_1953612.f_83[func_185(bParam0, 1) /*12*/].f_11 = (Global_1953612.f_83[func_185(bParam0, 1) /*12*/].f_11 - (Global_1953612.f_83[func_185(bParam0, 1) /*12*/].f_11 && iParam1));
}

int func_319(int iParam0, bool bParam1)
{
	switch (iParam0)
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
				return func_434();
			}
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_GET_ITEMS_IN_CATEGORY] Passed category not supported. Returning 0.");
	return 0;
}

int func_320(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1953612.f_3411.f_33.f_1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			iVar0 = Global_1953612.f_3411.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1953612.f_3411.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
			iVar0 = 1;
			break;
		default:
			DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_PORTABLE_WARDROBE_GET_MAX_ITEMS_IN_CATEGORY] Passed category not supported. Returning 0.");
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

bool func_321(bool bParam0, char* sParam1)
{
	*sParam1 = 0;
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__FIND_ITEM_HASH] Portable Items: ", Global_1953612.f_3411.f_26);
	*sParam1 = 0;
	while (*sParam1 < Global_1953612.f_3411.f_26)
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__FIND_ITEM_HASH] Looking For: ", UNK_0x4379B6FA65D55295(bParam0), " comparing to: ", UNK_0x4379B6FA65D55295(Global_1953612.f_3411[*sParam1]));
		if (bParam0 == Global_1953612.f_3411[*sParam1])
		{
			return true;
		}
		*sParam1++;
	}
	return false;
}

int func_322(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1953612.f_3411.f_26 >= 25)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_ADD] we are attempting to add too many items next item to be added: ", UNK_0x4379B6FA65D55295(bVar1), " | RETURN FALSE");
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_ADD] Trying to add too many items of a particular type item is: ", UNK_0x4379B6FA65D55295(bVar1), " | RETURN FALSE");
		return 0;
	}
	if (func_321(bVar1, &sVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(2216, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_ADD] ", UNK_0x4379B6FA65D55295(bVar1), " is already in the portable wardrobe at index: ", sVar0, " | RETURN FALSE");
		return 0;
	}
	if (!func_435(bParam0, 0))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_ADD] ", UNK_0x4379B6FA65D55295(bVar1), " is not compatible with current player type: ", func_436(func_327(), 0), " | RETURN FALSE");
		return 0;
	}
	if (bParam3 && !func_437(bParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1953612.f_3411[Global_1953612.f_3411.f_26] = bVar1;
	Global_1953612.f_3411.f_26++;
	*uParam1++;
	DEBUG::_0xA308F935BDECCEC0(2216, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_ADD] Adding: ", UNK_0x4379B6FA65D55295(bVar1), " to index: ", (Global_1953612.f_3411.f_26 - 1), " array size: ", Global_1953612.f_3411.f_26);
	return 1;
}

void func_323()
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

bool func_324(bool bParam0)
{
	return func_439(func_438(bParam0));
}

void func_325(bool bParam0, bool bParam1)
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

	if (!func_43(bParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_440(bParam1, &Var0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
		DEBUG::_0x83407B92D46F25C3(168, 139, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_ITEM_MESSAGE: Failed to find UI data for ", func_75(bParam1, 0), " using _PLACEHOLDER texture.");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 139, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_ITEM_MESSAGE: Failed to find a valid texture for item ", func_75(bParam1, 0), ".");
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_441(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_442(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_286(func_443(iVar7));
		}
		else
		{
			bVar8 = func_444(bParam1);
			if (func_43(bVar8, 0))
			{
				bParam1 = bVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_166(bParam1, 0));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_441(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_442(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_286(func_443(iVar7));
		}
		else
		{
			bVar9 = func_444(bParam1);
			if (func_43(bVar9, 0))
			{
				bParam1 = bVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_166(bParam1, 0));
		}
	}
	sVar10 = func_445(MISC::_CREATE_VAR_STRING(10, sVar3, sVar5), iVar6);
	DEBUG::_0xF0783374333FD8CE(680, 158, "__METAPED_PLAYER_PORTABLE_WARDROBE_SHOW_ITEM_MESSAGE: Showing ", func_75(bParam1, 0), " with color ", func_446(iVar6, 0));
	func_447(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_326(bool bParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_SAVE_METAPED_REQUEST] Pushing a save request for the player metaped!");
	if (bParam1)
	{
		func_448();
	}
	if (bParam0)
	{
		func_168(8);
		func_168(512);
	}
	else
	{
		func_168(8);
		func_168(16);
	}
}

int func_327()
{
	return Global_1953612.f_1;
}

bool func_328(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_79(bParam1);
	bVar1 = func_79(bParam0);
	if (bVar0 == bVar1)
	{
		return true;
	}
	if (func_449(bParam1) && func_449(bParam0))
	{
		return true;
	}
	return false;
}

void func_329(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	DEBUG::_0xF0783374333FD8CE(680, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_REPLACE] Removing: ", func_75(bParam0, 0), " Adding: ", func_75(bParam1, 0));
	func_450(bParam0, 0, 0, bParam3, bParam5);
	func_179(bParam1, 1, bParam2, bParam4, bParam3, bParam5);
}

bool func_330(int iParam0, int iParam1)
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

void func_331()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__TRANSFER_CURRENT_DATA_TO_TEMP_DATA] Transfering Current Data to Temp Data");
	Global_1953612.f_1575 = Global_1953612.f_1694;
	Global_1953612.f_1571 = Global_1953612.f_1573;
	Global_1953612.f_1571.f_1 = Global_1953612.f_1573.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[METAPED_PLAYER_COMPONENTS__TRANSFER_CURRENT_DATA_TO_TEMP_DATA] TransferingMeta Type: ", func_184(func_330(iVar0, 1), 0), " Component: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1694.f_1[iVar0 /*3*/]));
		Global_1953612.f_1575.f_1[iVar0 /*3*/] = { Global_1953612.f_1694.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_332(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS_SET_META_TYPE_TO_BE_BYPASSED] Marking: ", func_184(bParam0, 0), " to be bypassed!");
	UNK_0x355E72323AEE83CC(208, 6);
	func_318(bParam0, 8, 6);
}

void func_333(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*bParam1 == 832230214 || *bParam1 == 30652334) || *bParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_79(uParam0->f_1[iVar0 /*3*/]) != 1882579758)
			{
				return;
			}
			iVar1 = func_451(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1953612.f_83[iParam2 /*12*/])
			{
				*bParam1 = iVar1;
				DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] None item mapped to: ", UNK_0x4379B6FA65D55295(*bParam1));
				return;
			}
		}
		if (!func_452(*bParam1, iParam2))
		{
			*bParam1 = Global_1953612.f_1694.f_1[iParam2 /*3*/];
			DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] Changing item to the current item: ", UNK_0x4379B6FA65D55295(*bParam1));
			return;
		}
	}
	*bParam1 = Global_1953612.f_83[iParam2 /*12*/];
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] Using default none item: ", UNK_0x4379B6FA65D55295(*bParam1));
}

void func_334(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Cleaning Cache");
	func_453(&(Global_1953612.f_2956), iParam0);
}

void func_335(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_454(&(Global_1953612.f_2956), iParam0, iParam1);
}

void func_336(var uParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(160, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_META_FLAG] Setting: ", func_132(iParam1));
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_337(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_188(bVar0, 1);
	if (bParam3 && func_64(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_455(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_330(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_456(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_457(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_458(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_459(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_460(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_461(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_462(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_463(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_464(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_465(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_466(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_467(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_468(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_469(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_470(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_471(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

bool func_338(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (bParam2 == 289238755)
	{
		DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] Item: ", UNK_0x4379B6FA65D55295(bParam0), " has a wearable removal action | Bypass Wearable State Check");
		return 289238755;
	}
	if (bParam2 != 0 && func_472(bParam0, iVar0, bParam2) != -1)
	{
		DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] ", UNK_0x4379B6FA65D55295(bParam0), " contains the wearable state passed in | RETURNING ", UNK_0x4379B6FA65D55295(bParam2));
		return bParam2;
	}
	if (func_473(bParam0, func_330(iParam1, 1), &bParam2))
	{
		return bParam2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] Failed to find a working wearable state for: ", UNK_0x4379B6FA65D55295(bParam0), " type: ", func_184(func_330(iParam1, 1), 0));
	return false;
}

void func_339(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_175(4718592) && !func_474(func_79(Global_1953612.f_1575.f_1[uParam0->f_2[iVar0 /*2*/] /*3*/])))
		{
			DEBUG::_0xF0783374333FD8CE(40, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__SAVE_CACHE_DATA] Player has override data present, bypassing save for: ", func_184(func_330(uParam0->f_2[iVar0 /*2*/], 1), 0));
		}
		else
		{
			func_475(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
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
		if (Global_1953612.f_1694 != 491602716 || !func_442(2, -1))
		{
			bVar2 = true;
		}
		else if (!func_64(Global_1953612.f_1694, -166674229) && (Global_1953612.f_1694 != 491602716 || !func_442(2, -1)))
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			Global_1953612.f_1694 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1953612.f_1575 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_476(-1, 0, 6);
			func_82(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_326(0, 1);
	}
}

int func_340(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_477(&uParam0, bParam4, bParam5, iParam6);
}

bool func_341(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_241(0))
	{
		return func_478(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(&Param0));
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_253(Param0, &Var0, bParam5, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - Failed to get item data");
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - Equipped value of ", bParam4, " is already set for item, ignoring");
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_117(bParam5), &Param0, bParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - failed to equip item with GUID ", UNK_0xD2E4270E5D98EEE4(&Param0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - item with GUID ", UNK_0xD2E4270E5D98EEE4(&Param0), " equipped successfully!");
	return true;
}

struct<4> func_342()
{
	struct<4> Var0;

	return Var0;
}

bool func_343(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_479(Global_33, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_33, iParam0))
	{
		return true;
	}
	return false;
}

char* func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NSHL_FLAG_CLEAR";
		case 1:
			return "NSHL_FLAG_LAUNCH_HANDHELD";
		case 2:
			return "NSHL_FLAG_RESET_VELOCITY";
		case 4:
			return "NSHL_FLAG_OPEN_AT_REQUESTED";
		case 8:
			return "NSHL_FLAG_WAIT_FOR_SCENARIO_END";
		case 16:
			return "NSHL_FLAG_FORCE_SHUTDOWN_SCENARIO";
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

char* func_345(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NSHL_SCENARIO_SHUTDOWN_INIT";
		case 1:
			return "NSHL_SCENARIO_SHUTDOWN_WAIT";
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

bool func_346()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SHOP_ANYWHERE_HANDHELD")))
	{
		func_137(2);
		return false;
	}
	if (!func_210())
	{
		func_137(9);
		return false;
	}
	if (Global_1051777.f_80[34 /*75*/].f_1 & 128 != 0)
	{
		func_137(3);
		return false;
	}
	Var0 = { func_49(0) };
	if (func_50(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_219(PLAYER::PLAYER_ID(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_480(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_281(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_283(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_137(iVar2);
			return false;
		}
	}
	if (func_481())
	{
		func_137(4);
		return false;
	}
	if (func_398(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051777.f_80[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_137(5);
		return false;
	}
	if (func_482(131072, 255))
	{
		func_137(7);
		return false;
	}
	if (func_483())
	{
		func_137(8);
		return false;
	}
	return true;
}

bool func_347(int iParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || func_273(iParam1, 1024)) && PED::_0x336B3D200AB007CB(Global_33, Global_34, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_348(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102630.f_3 & 32 != 0;
	}
	return func_482(32, iParam0);
}

bool func_349(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_350()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_351(bool bParam0)
{
	UNK_0x355E72323AEE83CC(139, 6);
	if (bParam0)
	{
		func_484(4);
	}
	else
	{
		func_200(4);
	}
	DEBUG::_0xF0783374333FD8CE(8, 139, "[HANDHELD_CATALOG][NET_SHOP_SET_HANDHELD_OPEN_AT_REQUEST_STATE] Setting g_mpShopsData.bOpenAtRequested = ", bParam0);
}

void func_352(bool bParam0)
{
	if (!(bParam0 && Global_1915867.f_22504))
	{
		if (bParam0)
		{
			INVENTORY::_0x6A564540FAC12211(2, joaat("KIT_HANDHELD_CATALOG"));
		}
		else
		{
			INVENTORY::_0x766315A564594401(2, joaat("KIT_HANDHELD_CATALOG"), 0);
		}
	}
	Global_1915867.f_22504 = bParam0;
}

bool func_353()
{
	return Global_1915867.f_20643;
}

int func_354(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	UNK_0x355E72323AEE83CC(162, 8);
	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 20, "[IS_SAFE_TO_OPEN_MENU] Not safe because other UI is currently running... ");
		return 0;
	}
	iVar0 = Global_1275959.f_154[Global_1275959];
	iVar1 = Global_1275959.f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	DEBUG::_0x4DC69742196F818A(8, 162, "IS_SAFE_TO_OPEN_MENU - INFO");
	DEBUG::_0x4DC69742196F818A(40, 162, "IS_SAFE_TO_OPEN_MENU - DEAD: ", MISC::_0xF216F74101968DB0(bVar2));
	DEBUG::_0x4DC69742196F818A(40, 162, "IS_SAFE_TO_OPEN_MENU - INCAP: ", MISC::_0xF216F74101968DB0(bVar3));
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is dead and use while dead is not allowed. ");
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_33))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is running an item interaction task");
				return 0;
			}
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "inInspectionMode"))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is in inspection mode according to blackboard");
				return 0;
			}
		}
		DEBUG::_0x1B08D1EB9D8C4931(40, 162, "IS_SAFE_TO_OPEN_MENU - Check Player Control?: ", MISC::_0xF216F74101968DB0(bParam0));
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Player Control is not on... ");
			if (bParam6 && Global_1102630.f_3 & 32 != 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Player control is off, but this menu is allowed in Spectator Camera. Skip other Player Control checks... ");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Player control is off, but we are in a table minigame");
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player control is off, we allow this menu while dead, but you aren't dead.");
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915867.f_20638 || Global_1915867.f_22504.f_1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is in shop");
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_33) != 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is in ransack");
			return 0;
		}
	}
	if (func_485())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because a cutscene is playing");
		return 0;
	}
	if (Global_15)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 162, "@@ IS_SAFE_TO_OPEN_MENU: Not safe because leadin is running");
		return 0;
	}
	if (!bParam2 && (((Global_1940296.f_10 || Global_1940296.f_11) || Global_1940296.f_12) || Global_1940296.f_13))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because a wheel hud is active");
		DEBUG::_0x1B08D1EB9D8C4931(40, 162, "IS_SAFE_TO_OPEN_MENU - Weapon Wheel: ", MISC::_0xF216F74101968DB0(Global_1940296.f_10));
		DEBUG::_0x1B08D1EB9D8C4931(40, 162, "IS_SAFE_TO_OPEN_MENU - Item Wheel: ", MISC::_0xF216F74101968DB0(Global_1940296.f_11));
		DEBUG::_0x1B08D1EB9D8C4931(40, 162, "IS_SAFE_TO_OPEN_MENU - Fishing Wheel: ", MISC::_0xF216F74101968DB0(Global_1940296.f_13));
		DEBUG::_0x1B08D1EB9D8C4931(40, 162, "IS_SAFE_TO_OPEN_MENU - Horse Wheel: ", MISC::_0xF216F74101968DB0(Global_1940296.f_12));
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1226712.f_9505 != -1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is watching a fetch mission cutscene");
			return 0;
		}
		if (Global_1129002[iVar4 /*56*/].f_34 & 1 != 0 && Global_1129002[iVar4 /*56*/].f_34 & 2 == 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is watching a gfh cutscene");
			return 0;
		}
		if (Global_1131064.f_293)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is in the board board ui");
			return 0;
		}
		if (Global_1572887.f_108.f_75 > 11 && Global_1572887.f_108.f_75 < 15)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is in the matchhmaking process...");
			return 0;
		}
		else if (Global_1572887.f_108.f_75 > 15)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 162, "IS_SAFE_TO_OPEN_MENU - Not safe because player is in the matchhmaking process...");
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 20, "[IS_PLAYER_MENU_LAUNCHABLE] BLOCKED by mission creator");
				return 0;
			}
			if (Global_1048581)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 20, "[IS_PLAYER_MENU_LAUNCHABLE] BLOCKED by UGC instanced content celebrate screen");
				return 0;
			}
			if (Global_1048585)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 20, "[IS_PLAYER_MENU_LAUNCHABLE] BLOCKED by UGC instanced content because of an active cutscene");
				return 0;
			}
		}
	}
	return 1;
}

bool func_355(int iParam0, int iParam1, int iParam2)
{
	return func_213(Global_1197038[iParam2 /*10*/][iParam0], iParam1);
}

var func_356(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_486() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_487());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_487());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_487());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_488(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_489(iVar2))
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
				if (iVar9 & 8192 != 0 && func_490(iVar2) != 1)
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
					if (!func_491(iVar10))
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

int func_357(var uParam0, struct<21> Param1)
{
	if (!func_492(uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 32, "DELAYED_TICKER_MESSAGES__PUSH_MESSAGE - Queue is full. Allocate more space.");
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

char* func_358(int iParam0)
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

char* func_359(int iParam0)
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
	return func_493(iVar0);
}

bool func_360(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_361(int iParam0)
{
	if (func_364(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_362(int iParam0, int iParam1)
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

bool func_363(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_362(iParam0, 0), " Seconds ", iVar2);
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

bool func_364(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_365(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_366()
{
	if (!func_210())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

char* func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NPCM_PLAYER_DATA_FLAG_DEFAULT";
		case 1:
			return "NPCM_PLAYER_DATA_FLAG_START_CAMP_SIGNALED";
		case 2:
			return "NPCM_PLAYER_DATA_FLAG_START_NON_OWNER_SIGNALED";
		case 4:
			return "NPCM_PLAYER_DATA_FLAG_LAUNCH_OWNER_CAMP";
		case 8:
			return "NPCM_PLAYER_DATA_FLAG_LAUNCH_NON_OWNER_CAMP";
		case 16:
			return "NPCM_PLAYER_DATA_FLAG_REQUEST_VOLUME_LOCK";
		case 32:
			return "NPCM_PLAYER_DATA_FLAG_VALIDATED_BY_HOST";
		case 64:
			return "NPCM_PLAYER_DATA_FLAG_CLEAR_CAMP_DATA";
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

bool func_368(var uParam0)
{
	return func_103(*uParam0, 2);
}

bool func_369(var uParam0, int iParam1, int iParam2, bool bParam3)
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
			Jump @365; //curOff = 49
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @356; //curOff = 67
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @356; //curOff = 85
		}
		else if (func_494(uParam0[iVar0 /*6*/]))
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
				DEBUG::_0x4DC69742196F818A(2696, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_183((uParam0[*iParam1 /*6*/])->f_4, 0), ", 0 Remaining");
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
				DEBUG::_0x4DC69742196F818A(35464, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_183((uParam0[*iParam1 /*6*/])->f_4, 0), ", ", iParam2, " Remaining");
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_342() };
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

char* func_370(int iParam0, int iParam1)
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

bool func_371(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_370(iParam0, 0), " -> ", func_75(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_495(iParam1->f_8, iParam0, sVar0, 2048) || func_495(iParam1->f_8, iParam0, sVar0, 32768)) || func_495(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_495(iParam1->f_8, iParam0, sVar0, 4) || func_495(iParam1->f_8, iParam0, sVar0, 256)) || func_495(iParam1->f_8, iParam0, sVar0, 65536)) || func_495(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_495(iParam1->f_8, iParam0, sVar0, 1) || func_495(iParam1->f_8, iParam0, sVar0, 8)) || func_495(iParam1->f_8, iParam0, sVar0, 65536)) || func_495(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_495(iParam1->f_8, iParam0, sVar0, 1) || func_495(iParam1->f_8, iParam0, sVar0, 16)) || func_495(iParam1->f_8, iParam0, sVar0, 2)) || func_495(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_495(iParam1->f_8, iParam0, sVar0, 8) || func_495(iParam1->f_8, iParam0, sVar0, 4096)) || func_495(iParam1->f_8, iParam0, sVar0, 256)) || func_495(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_372(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_373(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_75(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_496(iParam1, 1, 0, 0);
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
	func_496(iParam1, 2, 0, 0);
	return -1;
}

int func_374(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_75(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_496(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

char* func_375(int iParam0, int iParam1)
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

bool func_376()
{
	return (func_497(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_340(func_128(joaat("WARDROBE"), func_194(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_377(bool bParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_117(0);
	*iParam1 = { func_128(bParam0, func_235(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_75(bParam0, 0), " eSlot: ", func_183(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, uParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_75(bParam0, 0));
		return false;
	}
	return true;
}

bool func_378(bool bParam0, int iParam1, int iParam2)
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

bool func_379(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_117(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_75(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_183(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_380()
{
	return 1037647863;
}

int func_381()
{
	return 1037746167;
}

int func_382()
{
	return 1035451607;
}

int func_383(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_384(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_498(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_385(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_499(&Var1, iParam0))
	{
		iVar0 = ((func_500() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_386(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1236221[iParam0 /*5*/].f_1;
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
		case 1:
			return 2124631622;
		case 2:
			return joaat("ROBBERY_TRAIN");
		case 3:
			return 1443764480;
		case 4:
			return -668110249;
		case 5:
			return -1381389849;
		case 6:
			return 536699577;
		case 7:
			return 541147288;
		case 8:
			return 377122918;
		case 9:
			return 1158195437;
		case 10:
			return joaat("AMBUSH");
		case 11:
			return -621956193;
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
		case 14:
			return -867762478;
		case 15:
			return 602097925;
		case 16:
			return joaat("TRAIN_ESCORT");
		case 17:
			return joaat("IWD_1V1");
		case 18:
			return joaat("IWD_PVP");
		case 20:
			return joaat("IWD_PF");
		case 21:
			return joaat("IWD_PLF");
		case 28:
			return joaat("IWD_F");
		case 19:
			return joaat("IWD_INF");
		case 22:
			return joaat("ASSASSINATION");
		case 23:
			return joaat("ASSASSINATION_TRACKING");
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
		case 30:
			return 1518877519;
		default:
			break;
	}
	return 0;
}

var func_388(int iParam0)
{
	int iVar0;

	iVar0 = func_502(0, (func_501() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_503(iVar0);
}

int func_389(int iParam0)
{
	return Global_1110228.f_5737[iParam0 /*5*/];
}

char* func_390(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -3:
			return "UNLOCK_GROUP__XP_AWARDS";
		case -2:
			return "UNLOCK_GROUP__GOLD";
		case -1:
			return "UNLOCK_GROUP__INVALID";
		case 0:
			return "UNLOCK_GROUP__START";
		case 1:
			return "UNLOCK_GROUP__FEATURE";
		case 2:
			return "UNLOCK_GROUP__MISSION_STORY";
		case 3:
			return "UNLOCK_GROUP__MISSION_PROCEDURAL";
		case 4:
			return "UNLOCK_GROUP__MISSION_FETCH";
		case 5:
			return "UNLOCK_GROUP__MISSION_MINIGAME";
		case 6:
			return "UNLOCK_GROUP__MISSION_FREE_MODE_EVENT";
		case 7:
			return "UNLOCK_GROUP__MISSION_UGC";
		case 8:
			return "UNLOCK_GROUP__MISSION_BEAT";
		case 9:
			return "UNLOCK_GROUP__PROPERTY";
		case 10:
			return "UNLOCK_GROUP__RECIPE";
		case 11:
			return "UNLOCK_GROUP__TITLE";
		case 12:
			return "UNLOCK_GROUP__SHOP";
		case 13:
			return "UNLOCK_GROUP__GFH_MISSION_GIVERS";
		case 14:
			return "UNLOCK_GROUP__GFH_LOCATIONS";
		case 15:
			return "UNLOCK_GROUP__TEAMSTER_VEHICLES";
		case 16:
			return "UNLOCK_GROUP__MOONSHINE_UNLOCKS";
		case 17:
			return "UNLOCK_GROUP__GVO_UNLOCKS";
		case 18:
			return "UNLOCK_GROUP__TEAMSTER_SECTORS";
		case 19:
			return "UNLOCK_GROUP__TEAMSTER_TIERS";
		case 20:
			return "UNLOCK_GROUP__MAX";
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

char* func_391(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

int func_392(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_498(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

struct<8> func_393(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_504(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - NET_FREEMODE_MISSION__GET__IS_MISSION_TYPE_VALID() = FALSE");
		DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - critical failure - NET_FREEMODE_MISSION__GET__IS_MISSION_TYPE_VALID() = FALSE");
		return Var5;
	}
	if (!func_505(&Var0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - NET_FREEMODE_MISSION__XML__SETUP_QUERY__INIT() = FALSE");
		DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - critical failure - NET_FREEMODE_MISSION__XML__SETUP_QUERY__INIT() = FALSE");
		return Var5;
	}
	if (!func_506(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - \"", func_284(iParam0), "\" failed to move to <mission_types>");
		DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - critical failure - <mission_types> undefined");
		return Var5;
	}
	if (!func_506(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - \"", func_284(iParam0), "\" failed to move to <mission_type> at index ", iParam0);
		DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - critical failure - eMissionType undefined");
		return Var5;
	}
	if (!func_506(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - \"", func_284(iParam0), "\" failed to move to <strings> for <mission_type> at index ", iParam0);
		DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - critical failure - <strings> undefined");
		return Var5;
	}
	if (!func_506(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
			DEBUG::_0xD9911C7B5F8CD69C(2728, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - \"", func_284(iParam0), "\" failed to move to <string:id> for ", func_507(iParam1, 0), " for <mission_type> at index ", iParam0);
			DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - critical failure - <string:id> undefined");
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(2728, 0, "NET_FREEMODE_MISSION__XML__GET_STRING_FOR_MISSION_TYPE - \"", func_284(iParam0), "\" failed to move to <string:id> for ", func_507(iParam1, 0), " for <mission_type> at index ", iParam0);
		}
		return Var5;
	}
	return func_508(Var0);
}

bool func_394(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_395(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_396(int iParam0)
{
	return func_213(Global_1211864.f_1196, iParam0);
}

bool func_397()
{
	return Global_263042[Global_1275959 /*70*/] > 2;
}

bool func_398(int iParam0, int iParam1)
{
	if (!Global_1072032.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197826[iParam1 /*12*/] && iParam0) != 0;
}

struct<2> func_399()
{
	if (Global_1196676.f_129 <= 0)
	{
		return func_49(0);
	}
	if (Global_1196676.f_130 < 0 || Global_1196676.f_131 == 0)
	{
		return func_49(0);
	}
	return Global_1196676[Global_1196676.f_130 /*4*/].f_1;
}

bool func_400(int iParam0)
{
	if (func_509(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_401(struct<2> Param0)
{
	return func_510(Param0, 1, 4);
}

bool func_402(bool bParam0)
{
	return WEAPON::_IS_WEAPON_BOW(bParam0);
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return -241666815;
		case 20:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 21:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 24:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 27:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 28:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 29:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 30:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 32:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 34:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 35:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 38:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 39:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 49:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 50:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 51:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 52:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 53:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 40:
			return joaat("PROVISION_WLDFLWR_AGARITA");
		case 41:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 42:
			return joaat("PROVISION_WLDFLWR_BITTERWEED");
		case 43:
			return joaat("PROVISION_WLDFLWR_BLOOD_FLOWER");
		case 44:
			return joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER");
		case 45:
			return joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY");
		case 46:
			return joaat("PROVISION_WLDFLWR_CREEK_PLUM");
		case 47:
			return joaat("PROVISION_WLDFLWR_WILD_RHUBARB");
		case 48:
			return joaat("PROVISION_WLDFLWR_WISTERIA");
		default:
			DEBUG::_0x83407B92D46F25C3(168, 191, "GET_SATCHEL_ITEM_FROM_HERB - herb type ", func_407(iParam0, 0), " undefined in switch");
			break;
	}
	return 0;
}

void func_404(int iParam0, int iParam1)
{
	if (!func_405(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 191, "HERB_SET_TYPE_FLAG: Attempting to set a flag on an invalid herb type!");
		return;
	}
	Global_17414[iParam0] = (Global_17414[iParam0] || iParam1);
	DEBUG::_0x4DC69742196F818A(680, 157, "HERB_SET_TYPE_FLAG - Setting :  ", func_407(iParam0, 0), " ", func_511(iParam1, 0));
}

bool func_405(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_406(int iParam0)
{
	if (!func_405(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 191, "IS_HERB_PROPERTY_DISPLAY_UNLOCKED: Attempting to check the property display status of an invalid herb type!");
		return false;
	}
	return func_512(iParam0, 4, 1);
}

char* func_407(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "HERB_TYPE_INVALID";
		case 1:
			return "HERB_ACUNAS_STAR_ORCHID";
		case 2:
			return "HERB_ALASKAN_GINSENG";
		case 3:
			return "HERB_AMERICAN_GINSENG";
		case 4:
			return "HERB_BAY_BOLETE";
		case 5:
			return "HERB_BLACK_BERRY";
		case 6:
			return "HERB_BLACK_CURRANT";
		case 7:
			return "HERB_BURDOCK_ROOT";
		case 8:
			return "HERB_CHANTERELLES";
		case 9:
			return "HERB_CIGAR_ORCHID";
		case 10:
			return "HERB_CLAMSHELL_ORCHID";
		case 11:
			return "HERB_COMMON_BULRUSH";
		case 12:
			return "HERB_CREEPING_THYME";
		case 13:
			return "HERB_DESERT_SAGE";
		case 14:
			return "HERB_DRAGONS_MOUTH_ORCHID";
		case 15:
			return "HERB_ENGLISH_MACE";
		case 16:
			return "HERB_EVERGREEN_HUCKLEBERRY";
		case 17:
			return "HERB_GHOST_ORCHID";
		case 18:
			return "HERB_GOLDEN_CURRANT";
		case 19:
			return "HERB_HARRIETUM_OFFICINALIS";
		case 20:
			return "HERB_HUMMINGBIRD_SAGE";
		case 21:
			return "HERB_INDIAN_TOBACCO";
		case 22:
			return "HERB_LADY_OF_NIGHT_ORCHID";
		case 23:
			return "HERB_LADY_SLIPPER_ORCHID";
		case 24:
			return "HERB_MILKWEED";
		case 25:
			return "HERB_MOCCASIN_FLOWER_ORCHID";
		case 26:
			return "HERB_NIGHT_SCENTED_ORCHID";
		case 27:
			return "HERB_OLEANDER_SAGE";
		case 28:
			return "HERB_OREGANO";
		case 29:
			return "HERB_PARASOL_MUSHROOM";
		case 30:
			return "HERB_PRAIRIE_POPPY";
		case 31:
			return "HERB_QUEENS_ORCHID";
		case 32:
			return "HERB_RAMS_HEAD";
		case 33:
			return "HERB_RAT_TAIL_ORCHID";
		case 34:
			return "HERB_RED_RASPBERRY";
		case 35:
			return "HERB_RED_SAGE";
		case 36:
			return "HERB_SPARROWS_EGG_ORCHID";
		case 37:
			return "HERB_SPIDER_ORCHID";
		case 38:
			return "HERB_VANILLA_FLOWER";
		case 39:
			return "HERB_VIOLET_SNOWDROP";
		case 40:
			return "HERB_WILD_FLWR_AGARITA";
		case 41:
			return "HERB_WILD_FLWR_BLUE_BONNET";
		case 42:
			return "HERB_WILD_FLWR_BITTERWEED";
		case 43:
			return "HERB_WILD_FLWR_BLOOD_FLOWER";
		case 44:
			return "HERB_WILD_FLWR_CARDINAL_FLOWER";
		case 45:
			return "HERB_WILD_FLWR_CHOCOLATE_DAISY";
		case 46:
			return "HERB_WILD_FLWR_CREEK_PLUM";
		case 47:
			return "HERB_WILD_FLWR_RHUBARB";
		case 48:
			return "HERB_WILD_FLWR_WISTERIA";
		case 49:
			return "HERB_WILD_CARROTS";
		case 50:
			return "HERB_WILD_FEVERFEW";
		case 51:
			return "HERB_WILD_MINT";
		case 52:
			return "HERB_WINTERGREEN_BERRY";
		case 53:
			return "HERB_YARROW";
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

void func_408(int iParam0, bool bParam1)
{
	if (!func_405(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 191, "HERB_TYPE_UNLOCK_BLIPPING: Attempting to unlock blipping of an invalid herb type!");
		return;
	}
	if (func_513(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 191, "HERB_TYPE_UNLOCK_BLIPPING: Blipping is already unlocked for the herb type!");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(168, 191, "HERB_TYPE_UNLOCK_BLIPPING: herb type ", func_407(iParam0, 0), " has had blipping unlocked!");
	func_404(iParam0, 2);
	if (bParam1)
	{
		if (!func_17(0, 0, 1))
		{
			func_514(1, 1017438712);
		}
	}
}

bool func_409(int iParam0)
{
	if (!func_405(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 191, "HAS_HERB_TYPE_BEEN_PICKED: Attempting to check if an invalid herb type has ever been picked!");
		return false;
	}
	return func_512(iParam0, 1, 1);
}

void func_410(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_405(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 191, "HERB_TYPE_FLAG_AS_PICKED: Attempting to set the picked status of an invalid herb type!");
		return;
	}
	if (func_409(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 191, "HERB_TYPE_FLAG_AS_PICKED: Attempting to flag an already picked herb type!");
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_515(iParam0);
		DEBUG::_0xF0783374333FD8CE(8, 215, "HERB_TYPE_FLAG_AS_PICKED: bSuppressMessage = ", bParam1);
	}
	if (!bParam1)
	{
		func_516(iParam0);
	}
	DEBUG::_0xF0783374333FD8CE(168, 191, "HERB_TYPE_FLAG_AS_PICKED: herb type ", func_407(iParam0, 0), " has been picked for the first time!");
	func_404(iParam0, 1);
	func_408(iParam0, 1);
	DEBUG::_0xF0783374333FD8CE(680, 191, "HERB_TYPE_FLAG_AS_PICKED: herb type ", func_407(iParam0, 0), " will make save request: ", MISC::_0xF216F74101968DB0(bParam2));
	if (bParam2)
	{
		if (!func_17(0, 0, 1))
		{
			func_411(1, 6);
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(168, 191, "HERB_TYPE_FLAG_AS_PICKED: herb type ", func_407(iParam0, 0), " save cancelled due to IS_ANYTHING_RUNNING()");
		}
	}
}

void func_411(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		DEBUG::_0xF0783374333FD8CE(8, 144, "MAKE_AUTOSAVE_REQUEST: IS_MAG_DEMO_1_ACTIVE is active, ignoring save request");
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_517(&Global_0, 8);
	}
	if (!func_518() || func_15() != -1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 144, "MAKE_AUTOSAVE_REQUEST: Gameflow is active or we're in MP | EXIT");
		return;
	}
	func_517(&Global_0, 1);
	UNK_0x355E72323AEE83CC(-1, 6);
}

var func_412(bool bParam0, int iParam1)
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

var func_413(bool bParam0, int iParam1)
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

float func_414(int iParam0, int iParam1)
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

void func_415(int iParam0)
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
	iVar1 = func_519(2);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Refilling ", iParam0, " Health Tanks ");
	func_520(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
}

void func_416(int iParam0, bool bParam1)
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
	iVar0 = func_521(2);
	DEBUG::_0xF0783374333FD8CE(2184, 84, "RPG_GLOBAL_REFILL_PLAYER_DEADEYE_TANKS - Refilling ", iParam0, " Dead Eye Tanks ( ", iVar0, " per tank )");
	func_522(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_417(int iParam0)
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
	iVar1 = func_523(2);
	func_524(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_418(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_419(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_525(iParam0, fParam1, 1);
	}
	func_527(iParam0, (func_526(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_420(float fParam0, int iParam1)
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

int func_421(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Player Entity is not valid, and therefore cannot be overpowered at this time... ");
		return 0;
	}
	DEBUG::_0xF0783374333FD8CE(2472, 84, "RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE - Attribute: ", func_528(iParam0, 0), " will be Overpowered this frame for  ", sParam1, " seconds");
	return func_529(iParam0, sParam1, bParam2, bParam3);
}

void func_422(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_530())
	{
		func_531(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17414.f_55.f_2459.f_41++;
		if (5 == Global_17414.f_55.f_2459.f_41)
		{
			func_101(109, 0);
		}
	}
}

struct<2> func_423(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_424(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_425(bool bParam0)
{
	return func_44(bParam0) == joaat("CONSUMABLE");
}

void func_426(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	bool bVar12;
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

	if (!func_43(bParam0, 0))
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
	if (!func_532() || bParam6)
	{
		func_533(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_534(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
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
		StringCopy(&cVar2, func_534(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_535(bParam0, 2097152))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been read.");
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been used.");
		bVar0 = true;
	}
	iVar6 = func_44(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((((((((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER")) && bParam0 != joaat("AMMO_HATCHET_HUNTER")) && bParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && bParam0 != joaat("AMMO_POISONBOTTLE")) && bParam0 != joaat("AMMO_MOONSHINEJUG_MP")) && !func_64(bParam0, -1982291600)) && !func_64(bParam0, 137764179))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	bVar12 = func_79(bParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || bVar12 == -1674363638) || bVar12 == 252325943) || bVar12 == 829857647) || bVar12 == -636562458) || bVar12 == 1341188928) || bVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_440(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
		DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find UI Data for: ", func_75(bParam0, 0), " | Using _PLACEHOLDER texture");
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find a valid texture for item ", func_75(bParam0, 0));
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
	if (func_64(bParam0, 474910316))
	{
		sVar17 = func_536(bParam0);
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
	if (func_64(bParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_537(bParam0))
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
	bVar18 = func_166(bParam0, 0);
	if ((func_538(bVar12) && func_64(bParam0, -306684263)) && bVar18 != 0)
	{
		bVar18 = func_539(bParam0);
	}
	else if (func_44(bParam0) == joaat("CLOTHING"))
	{
		bVar19 = func_444(bParam0);
		if (func_43(bVar19, 0))
		{
			bVar18 = func_166(bVar19, 0);
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 158, "[ADD_QUEUED_ITEM_DISPLAY] - Failed to override clothing item display name with style item display name!");
	}
	if (func_540(bParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_541(bParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_445(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, bVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, bVar18);
	}
	if ((((((bVar12 == -1839668642 && bParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && bParam0 != 1326838792) && bParam0 != -230310728) || ((bVar12 == 231148558 && bParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && bParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (bVar12 == 252325943 && bParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (bVar12 == -636562458 && bParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_542(bParam0, -442898163));
	}
	if (bVar12 == -126813555 || bVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_543(bParam0, &cVar22))
		{
			sVar21 = func_545(func_544(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	DEBUG::_0xF0783374333FD8CE(174760, 158, "ADD_QUEUED_ITEM_DISPLAY: Adding - ", func_75(bParam0, 0), " with color ", func_446(iVar13, 0), " sound ", sVar14, " set ", sVar15);
	func_447(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_427(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "GET_ITEMS_GROUP_STAT_HASH: attempting to process an invalid item!");
		return Var0;
	}
	if (func_64(bParam0, -305066475))
	{
		if (func_15() == -1)
		{
			if (func_64(bParam0, -537818634))
			{
				return func_423(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_423(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_64(bParam0, -537818634))
	{
		return func_423(joaat("MEDICINE_ITEMS"));
	}
	if (func_64(bParam0, 2084895747))
	{
		return func_423(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_428(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Tried to remove an invalid weapon: ", func_75(bParam0, 0));
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(166056, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - ", func_75(bParam0, 0), ", iAmountToRemove = ", iParam1, ", bCarriedOnly = ", bParam2, ", removeReason = ", func_246(iParam3, 0));
	Var0 = { func_234(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_236(&Var0, func_235(0));
	}
	if (!func_237(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_109(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_129(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_111(iVar14);
	DEBUG::_0xF0783374333FD8CE(648, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Removed ", iVar36, " of weapon ", func_75(bParam0, 0));
	if (iVar36 < iParam1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Requested to remove ", iParam1, " of weapon ", func_75(bParam0, 0), " but there were only ", iVar15);
	}
	return true;
}

void func_429(int iParam0, bool bParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL SET INVENTORY CHANGED called");
	UNK_0x355E72323AEE83CC(157, 6);
	Global_1940463.f_5 = iParam0;
	Global_1940463.f_37 = iParam2;
	if (bParam1 || (func_546() && iParam2 == 0))
	{
		func_547(1);
		func_548(1);
	}
}

bool func_430()
{
	int iVar0;

	iVar0 = Global_1953612.f_595[8];
	iVar0 = (iVar0 + Global_1953612.f_595[10]);
	iVar0 = (iVar0 + Global_1953612.f_595[1]);
	iVar0 = (iVar0 + Global_1953612.f_595[2]);
	iVar0 = (iVar0 + Global_1953612.f_595[5]);
	iVar0 = (iVar0 + Global_1953612.f_595[25]);
	iVar0 = (iVar0 + Global_1953612.f_595[23]);
	iVar0 = (iVar0 + Global_1953612.f_595[18]);
	iVar0 = (iVar0 + Global_1953612.f_595[19]);
	return iVar0 > 0;
}

int func_431(bool bParam0)
{
	int iVar0;

	iVar0 = func_185(func_549(bParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953612.f_1694.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_432(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_185(func_549(bParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953612.f_1694.f_1[iVar1 /*3*/] != 0 && Global_1953612.f_1694.f_1[iVar1 /*3*/] != Global_1953612.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953612.f_1694.f_1[iVar1 /*3*/];
		if (func_79(bVar0) == bParam0 || (bParam0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && func_64(bVar0, 160827531)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

bool func_433(bool bParam0)
{
	return Global_1953612.f_1694.f_1[func_185(bParam0, 1) /*3*/];
}

int func_434()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1953612.f_3411.f_26)
	{
		bVar1 = Global_1953612.f_3411[iVar0];
		if (func_79(bVar1) == -999503751)
		{
			if (func_550() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_435(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_551(0);
	}
	if (func_79(bParam0) == -999503751 && func_441(bParam0) != -1)
	{
		return true;
	}
	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return func_64(bParam0, -287432114);
	}
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return func_64(bParam0, -133342564);
	}
	return false;
}

char* func_436(int iParam0, int iParam1)
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

bool func_437(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_127(bParam0, bParam2, 0) };
	Var5 = { func_128(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_192(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__SET_ITEM_HIDDEN] Item is not in the player's inventory yet, we can't hide or unhide it!");
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__SET_ITEM_HIDDEN] Setting: ", func_75(bParam0, 0), " hidden: ", MISC::_0xF216F74101968DB0(bParam1));
	INVENTORY::_0x9A113C660AEA3832(func_117(bParam2), &Var5, bParam1);
	return true;
}

int func_438(bool bParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE_GET_DISABLE_FLAG_FROM_CATEGORY] Category ", func_193(bParam0, 0), " does not support the portable wardrobe | RETURN MPP_FLAG_CLEAR");
	return 0;
}

bool func_439(int iParam0)
{
	return (Global_1953612.f_3411.f_33.f_6 && iParam0) != 0;
}

bool func_440(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eItem = ", func_75(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eTextureType = ", func_552(iParam2, 0));
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with type: ", func_552(Var3.f_2[iVar0 /*3*/].f_2, 0));
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
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Type: ", func_552(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to fillout UI data for item ", func_75(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to find texture of type ", func_552(iParam2, 0), " for item ", func_75(bParam0, 0));
	return false;
}

int func_441(bool bParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[GET_SAVE_SLOT_FROM_OUTFIT_ITEM] Invalid save slot passed in ", func_75(bParam0, 0), " | RETURN k_iMETAPED_CLOTHING_INVALID_INDEX");
	return -1;
}

bool func_442(int iParam0, int iParam1)
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

struct<8> func_443(int iParam0)
{
	char cVar0[64];

	if (func_442(4, iParam0))
	{
		return Global_17414.f_2645[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(func_553(iParam0)), 64);
	return cVar0;
}

bool func_444(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_554(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_555(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_556(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &bVar14) && func_557(bVar14))
			{
				func_558(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_558(iVar11);
	}
	return false;
}

char* func_445(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

char* func_446(int iParam0, int iParam1)
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

var func_447(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_559(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_448()
{
	UNK_0x355E72323AEE83CC(208, 6);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_SYSTEM_SET_ITEMS_BEING_PREVIEWED] Clearing preview type");
	Global_1953612.f_1060 = 0;
}

bool func_449(bool bParam0)
{
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_BANDANA: attempting to process an invalid item!");
		return false;
	}
	if (func_64(bParam0, 160827531) || func_79(bParam0) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */)
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "ITEM_PROPERTY_BANDANA");
		return true;
	}
	return false;
}

void func_450(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	bool bVar122;

	bVar0 = false;
	switch (func_79(bParam0))
	{
		case -2061583405:
			bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_28), bParam4);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_27), bParam4);
			if (func_64(bParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_561(&Var1, bParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						bVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_43(bVar122, 0))
						{
							func_450(bVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_33.f_7), bParam4);
			break;
		default:
			if (func_64(bParam0, 160827531))
			{
				bVar0 = func_560(bParam0, &(Global_1953612.f_3411.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_325(0, bParam0);
	}
	if (bParam2)
	{
		func_323();
	}
	if (bParam1)
	{
		func_326(0, 0);
	}
}

int func_451(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_562(&uVar1, 9044914, bParam0, 0, 0, 0);
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

bool func_452(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_79(Global_1953612.f_1694.f_1[iParam1 /*3*/]);
	if (func_79(bParam0) == bVar0)
	{
		return true;
	}
	else if (bParam0 == -992705550)
	{
		return func_64(Global_1953612.f_1694.f_1[iParam1 /*3*/], 160827531);
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

void func_453(var uParam0, int iParam1)
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
			if ((func_563(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Clearing: ", func_184(func_330(uParam0->f_2[iVar0 /*2*/], 1), 0));
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_563(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_564(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
					DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] marking as OLD: ", func_184(func_330(uParam0->f_2[iVar0 /*2*/], 1), 0));
				}
				DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Keeping cached meta type: ", func_184(func_330(uParam0->f_2[iVar0 /*2*/], 1), 0));
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

void func_454(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		DEBUG::_0x83407B92D46F25C3(8, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__ADD_COMPONENT_REFERENCE_TO_CACHE] Cache size will be exceeded with this add: ", *uParam0);
		return;
	}
	if (!func_565(uParam0, 1))
	{
		func_566(uParam0, 1);
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

void func_455(var uParam0, bool bParam1)
{
	struct<4> Var0;
	bool bVar7;
	int iVar8;

	Var0 = func_567(0);
	Var0.f_1 = bParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Starting for: ", func_75(bParam1, 0));
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 185, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Failed to find first row for: ", func_75(bParam1, 0));
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&bVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_185(bVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] eMetaType is invalid: ", func_184(func_330(iVar8, 1), 0), " | Index: ", iVar8, " | RELOOP");
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
				func_335(iVar8, 0);
			}
		}
	}
}

void func_456(var uParam0, bool bParam1, int iParam2, int iParam3)
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
	bVar1 = func_79(uParam0->f_1[iVar0 /*3*/]);
	if (bVar1 == 119907797)
	{
		if (func_64(bParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support hair accessories, time to unequip the hair accessory!");
		}
	}
	else if (bVar1 == 2086043523)
	{
		if (func_64(bParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support headbands, time to unequip the headband!");
		}
	}
	else if (bVar1 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */)
	{
		if (func_64(bParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support headbands, time to unequip the face mask!");
		}
	}
	iVar0 = 11;
	if (func_64(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_64(bParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support this eyewear, time to unequip the eyewear!");
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam1, -93469181)) && func_64(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support this neckwear, time to unequip the neckwear!");
	}
}

void func_457(var uParam0, bool bParam1, int iParam2)
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

void func_458(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_335(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_188(bVar1, 0) && func_64(bVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping eyewear that restricts neckwear, remove the neckwear!");
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953612.f_83[iVar0 /*12*/] && func_79(bVar1) == 2086043523) && func_64(bParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping eyewear that restricts headbands, remove the headband!");
	}
}

void func_459(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_79(bParam2))
	{
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			func_568(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_569(uParam0, bParam1, iParam3);
			break;
	}
}

void func_460(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_79(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_335(iVar0, iParam3);
	}
	func_335(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_449(bParam2))
	{
		func_570(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_64(bParam2, -180472385) && !func_188(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping neckwear that restricts eyewear, remove the eyewear!");
	}
	if (func_64(bParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Closing shirt collar to base state");
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Changing shirt wearable state, we need to re-apply our coat!");
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Closing shirt collar to Closed_Collar_Rolled_Sleeve state");
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Changing shirt wearable state, we need to re-apply our coat!");
		}
	}
}

void func_461(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_64(bParam2, 1872585553)) || func_79(bParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] None Shirt is getting equipped, remove the necktie!");
		}
	}
	iVar0 = 17;
	if (!func_188(uParam0->f_1[iVar0 /*3*/], 0) && func_64(bParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Shirt does not support suspenders | Removing Suspenders");
	}
	iVar0 = 29;
	if (!func_188(uParam0->f_1[iVar0 /*3*/], 0) && func_64(bParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Shirt does not support belts | Removing belt");
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_79(bVar2) == 1759215194 && func_79(bParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_451(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Unionsuit is equipped with not pants | updating the unionsuit lower: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]));
	}
	else if (func_571(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_79(bVar2) == 912453393 && func_572(32))
		{
			iVar3 |= 1;
		}
		if (func_64(bParam2, 525391395))
		{
			iVar3 |= 2;
		}
		bVar2 = func_573(Global_1953612.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			func_469(uParam0, 0, bVar2, iParam3);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Full item is equipped | updating to ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]));
		}
	}
	iVar0 = 21;
	iVar4 = 23;
	if (!func_188(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953612.f_83[iVar4 /*12*/] && func_64(uParam0->f_1[iVar4 /*3*/], -1655064541)))
	{
		func_574(uParam0, iParam3);
	}
}

void func_462(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
	}
}

void func_463(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_79(bParam2))
	{
		case 698653232:
			func_575(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_576(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_464(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_79(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_577(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_578(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_465(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_79(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_335(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GAUNTLET_LOGIC] Gauntlets are getting applied, but they have the no gloves tag and we're wearing gloves | Removing Gloves!");
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_574(uParam0, iParam3);
	}
}

void func_466(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			if (func_64(uParam0->f_1[iVar0 /*3*/], 1537768121))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] We are equipping gloves but our gauntlets have a no gloves tag | Removing the gauntlets!");
			}
			func_335(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_64(bParam2, -1655064541))
		{
			func_574(uParam0, iParam3);
		}
		else
		{
			func_335(iVar0, iParam3 | 16);
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
	func_335(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_335(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_335(iVar0, iParam3);
	}
}

void func_467(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_579(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_64(bParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GUNBELT_LOGIC] We're equipping a gunbelt that restricts buckles, remove the buckle!");
	}
	iVar0 = 32;
	if (!func_188(uParam0->f_1[iVar0 /*3*/], 0) && func_64(bParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GUNBELT_LOGIC] We're equipping a gunbelt that restricts gunbelt trinkets, remove the trinket!");
	}
}

void func_468(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
	}
}

void func_469(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_79(bParam2))
	{
		case 1759215194:
			func_580(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_581(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_582(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_583(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_584(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_585(uParam0, bParam1, iParam3);
			break;
	}
}

void func_470(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_79(bParam2))
	{
		case 1769055947:
			func_586(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_587(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_471(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_588(uParam0, iParam3, 0, 1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Equipping none boot!");
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_64(bParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/]) && func_79(bVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support spats");
	}
	if ((func_64(bParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/]) && func_79(bVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support chaps");
	}
	iVar0 = 37;
	if (func_64(bParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support spurs");
	}
}

int func_472(bool bParam0, int iParam1, bool bParam2)
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

bool func_473(bool bParam0, bool bParam1, bool bParam2)
{
	*bParam2 = joaat("BASE");
	return true;
}

bool func_474(bool bParam0)
{
	return (((((((((bParam0 == -1839668642 || bParam0 == -1415811768) || bParam0 == 231148558) || bParam0 == -1674363638) || bParam0 == 252325943) || bParam0 == 1216664798) || bParam0 == 1341188928) || bParam0 == 829857647) || bParam0 == -636562458) || bParam0 == 1115104855);
}

void func_475(int iParam0, bool bParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Starting for: ", func_184(func_330(iParam0, 1), 0));
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
	func_589(&(Global_1953612.f_1694.f_1[iParam0 /*3*/]), iParam0, Global_17414.f_55.f_664.f_1777);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] ...Ending");
}

void func_476(int iParam0, bool bParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_PLAYER_COMPONENTS__TRANSFER_TEMP_DATA_TO_SAVE_DATA] Starting...");
	func_590(&(Global_1953612.f_1575), iParam0);
	func_591(2, iParam0, 6);
	if (bParam1)
	{
		func_326(0, 1);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_PLAYER_COMPONENTS__TRANSFER_TEMP_DATA_TO_SAVE_DATA] ...Ending");
}

int func_477(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_592(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_75(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

int func_478(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<29> Var16;
	struct<26> Var45;
	struct<18> Var71;
	struct<17> Var89;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_253(*iParam0, &Var1, 1, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Failed to get item data");
		return iVar0;
	}
	if (Var1.f_10 == bParam1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equipped value of ", bParam1, " is already set for item, ignoring");
		return iVar0;
	}
	if (Var1.f_13)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Item is expired, cannot update so ignoring");
		return iVar0;
	}
	iVar15 = func_44(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_593(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_594(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var45 = { func_595(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_596(joaat("UPDATE"), &Var45, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var71 = { func_597(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_598(joaat("UPDATE"), &Var71, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_599(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_244(joaat("UPDATE"), &Var89, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(168, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Successfully sent CI_ACTION_UPDATE transaction for ", func_75(Var1.f_4, 0), " as bEquipped = ", bParam1);
	return iVar0;
}

float func_479(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 139, "NET_GET_HANDHELD_FAIL_REASON_FROM_FREEMODE_EVENT - No fail reason defined for ", func_600(iParam0, 0));
	if (func_220(iParam0) == joaat("POSSE_VERSUS"))
	{
		return 37;
	}
	return 23;
}

bool func_481()
{
	if ((func_48() || Global_1572887.f_108.f_75 > 10) || func_601())
	{
		if ((!func_293() && Global_265378.f_131719.f_71.f_21.f_2 != -504335712) && !func_602(Global_265378.f_131719.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_482(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_483()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051777.f_3267 == iVar0 || Global_1051777.f_3267 == (iVar0 - 1));
}

void func_484(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 55, "[NET_SHOP_HANDHELD_LOCAL_SET_LAUNCH_FLAG] ", func_344(iParam0, 0));
	Global_1051777.f_3636 = (Global_1051777.f_3636 || iParam0);
}

bool func_485()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26566) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26566, false));
}

int func_486()
{
	return Global_1051590.f_12;
}

char* func_487()
{
	return "unnamed";
}

int func_488(int iParam0)
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

bool func_489(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_603(36, iParam0);
}

int func_490(int iParam0)
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

bool func_491(char* sParam0)
{
	if (func_604(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_605(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

bool func_492(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

char* func_493(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_603(40, iParam0))
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
	if (func_603(40, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1100880[iParam0 /*53*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1100880[iParam0 /*53*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1275959.f_154[iParam0]);
}

bool func_494(var uParam0)
{
	if (!func_606(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "IS_ITEM_EXPIRED - ERROR! sItemGUID is not valid.");
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_495(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_213(sParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_496(int iParam0, int iParam1, int iParam2, int iParam3)
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
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_375(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_375(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_375(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_370(iParam2, 0), " and action B to ", func_370(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_607(iParam0, iParam1, iParam2, iParam3);
}

int func_497(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_608(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_117(bParam1), bParam0, bParam3);
}

bool func_498(struct<2> Param0, var uParam2)
{
	if (!func_50(Param0))
	{
		return false;
	}
	func_609(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_499(var uParam0, int iParam1)
{
	*uParam0 = Global_1236221.f_9222;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_500()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1236221.f_9222;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_501()
{
	return Global_1110228.f_5737.f_632;
}

int func_502(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	DEBUG::_0x1B08D1EB9D8C4931(166024, 65, "GFH_MISSION__FIND_INDEX - iLower = ", iParam0, " iUpper = ", iParam1, " i = ", iVar0, " eValue = ", UNK_0x4379B6FA65D55295(*iParam2));
	if (*iParam2 < Global_1110228.f_5737.f_451[iVar0 /*2*/])
	{
		return func_502(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1110228.f_5737.f_451[iVar0 /*2*/])
	{
		return func_502(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_503(int iParam0)
{
	return Global_1110228.f_5737.f_451[iParam0 /*2*/].f_1;
}

bool func_504(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_505(var uParam0)
{
	char* sVar0;
	var uVar1;

	sVar0 = func_610();
	if (!DATAFILE::_0x7907969497EA92F5(sVar0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(136, 0, "NET_FREEMODE_MISSION__XML__SETUP_QUERY__INIT - PARSEDDATA_IS_FILE_VALID(", sVar0, ") = FALSE");
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(sVar0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(136, 0, "NET_FREEMODE_MISSION__XML__SETUP_QUERY__INIT - PARSEDDATA_IS_FILE_LOADED(", sVar0, ") = FALSE");
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = sVar0;
	return true;
}

bool func_506(struct<5> Param0, bool bParam5, int iParam6, char* sParam7, char* sParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = sParam7;
	Param0.f_4 = sParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(bParam5, &Param0))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(2216, 0, "NET_FREEMODE_MISSION__XML__SETUP_QUERY__MOVE_TO_NODE - query moved to node <", func_611(iParam6), "> with args ", sParam7, " and ", sParam8);
	return true;
}

char* func_507(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("NAME"):
			return "NET_FREEMODE_MISSION_STRING_TYPE__NAME";
		case 461218520:
			return "NET_FREEMODE_MISSION_STRING_TYPE__HANDHELD_CATALOGUE_FAIL";
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

struct<8> func_508(struct<5> Param0)
{
	return func_612(Param0, 52, 1);
}

int func_509(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_5"):
			return 0;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_3"):
			return 1;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_1"):
			return 2;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_5"):
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_510(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_50(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_613(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

char* func_511(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "HTFLAG_INVALID";
		case 0:
			return "HTFLAG_NONE";
		case 1:
			return "HTFLAG_PICKED";
		case 2:
			return "HTFLAG_BLIP_UNLOCKED";
		case 4:
			return "HTFLAG_PROPERTY_UNLOCKED";
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

bool func_512(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_405(iParam0))
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 191, "HERB_IS_TYPE_FLAG_SET: Attempting to check a flag on an invalid herb type!");
			return false;
		}
	}
	if (Global_1572887.f_13 != -1)
	{
		return (Global_17414[iParam0] && iParam1) != 0;
	}
	return (Global_38.f_4671[iParam0] && iParam1) != 0;
}

bool func_513(int iParam0)
{
	if (!func_405(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 191, "IS_HERB_BLIP_UNLOCKED: Attempting to check the blipping status of an invalid herb type!");
		return false;
	}
	return func_512(iParam0, 2, 1);
}

int func_514(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - Network is not in session.  Bailing.");
		return 0;
	}
	if (!Global_1102630.f_16)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - We still haven't completed the first respawn.  Bailing.");
		return 0;
	}
	if (!func_614())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - We still haven't completed the transition.  Bailing.");
		return 0;
	}
	if (!func_210())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - We are still in the intro flow.  Bailing");
		return 0;
	}
	Global_0 = iParam1;
	DEBUG::_0x9A6C65DDDBEC9C52(40, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - request type: ", func_615(Global_0, 0));
	if (bParam0)
	{
		func_517(&Global_0, 8);
	}
	func_517(&Global_0, 1);
	DEBUG::_0x9A6C65DDDBEC9C52(40, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - ", UNK_0x8F77B33B6A34D8BA());
	UNK_0x355E72323AEE83CC(144, 6);
	return 1;
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_516(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_101(239, 0);
			break;
		case 16:
			func_101(240, 0);
			break;
		case 34:
			func_101(241, 0);
			break;
		case 52:
			func_101(242, 0);
			break;
		case 2:
			func_101(243, 0);
			break;
		case 3:
			func_101(244, 0);
			break;
		case 53:
			func_101(245, 0);
			break;
		case 15:
			func_101(246, 0);
			break;
		case 24:
			func_101(247, 0);
			break;
		case 38:
			func_101(248, 0);
			break;
		case 27:
			func_101(249, 0);
			break;
		case 13:
			func_101(250, 0);
			break;
		case 19:
			func_101(251, 0);
			break;
		case 20:
			func_101(252, 0);
			break;
		case 35:
			func_101(253, 0);
			break;
		case 39:
			func_101(254, 0);
			break;
		case 50:
			func_101(255, 0);
			break;
		case 7:
			func_101(256, 0);
			break;
		case 21:
			func_101(257, 0);
			break;
		case 18:
			func_101(258, 0);
			break;
		case 6:
			func_101(259, 0);
			break;
		case 30:
			func_101(260, 0);
			break;
		case 49:
			func_101(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_101(263, 0);
			break;
		case 8:
			func_101(264, 0);
			break;
		case 29:
			func_101(265, 0);
			break;
		case 32:
			func_101(266, 0);
			break;
		case 12:
			func_101(267, 0);
			break;
		case 28:
			func_101(268, 0);
			break;
		case 51:
			func_101(269, 0);
			break;
	}
}

void func_517(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 144, "SET_SAVE_FLAG: setting flag - ", func_616(iParam1, 0));
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_518()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_519(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_617(1);
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

void func_520(float fParam0, int iParam1)
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

int func_521(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_617(1);
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

void func_522(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_618(iVar0))
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

int func_523(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_617(1);
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

void func_524(float fParam0, int iParam1)
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

float func_525(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_619();
	func_620(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_621(iParam0, 2);
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Count: ", iVar1);
	if (func_623(iVar0, func_622(iParam0, 2), 1))
	{
		func_624(iParam0, 0, 2);
		iVar1 = 0;
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Reseting Degrade Count to 0, it's a whole new day!");
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Degrade Time of Day: ", func_625(iVar0));
		DEBUG::_0x1B08D1EB9D8C4931(40, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Current Time of Day: ", func_625(func_622(iParam0, 2)));
	}
	if (iVar1 >= 2)
	{
		func_101(103, bParam2);
		DEBUG::_0x1B08D1EB9D8C4931(136, 84, "_RPG_GLOBAL_APPLY_CORE_FIX_DEGRADE - Dregrade Count is over: ", 2, " uses. Will not work until tomorrow... ");
		return 0f;
	}
	func_626(iParam0, func_619(), 2);
	func_624(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_526(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_617(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DISPLAY_STATE - Failed to retrieve Core Value for ", func_627(iParam0, 0), " Returning -1.0. This is really bad. ");
	return -1f;
}

int func_527(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_617(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_628(iVar0, iParam0, fParam1))
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
			func_629(iParam0, 7000, iParam5);
		}
		func_630(iVar0, iParam0, fParam1);
		DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE_CORE - Caching Player Attribute Core ", func_627(iParam0, 0), " Value Data. Setting to: ", fParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_631()));
		func_632(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

char* func_528(int iParam0, int iParam1)
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

int func_529(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_528(iParam0, 0), " will be Overpowered this frame for  ", fParam1, " seconds on local player...");
	if (fParam1 == -1f)
	{
		if (func_633(iParam0))
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
		DEBUG::_0x6D2A5155B260E879(2472, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_528(iParam0, 0), " was set to a Duration of: ", fParam1, " this is really bad. Correct this. ");
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_634(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_415(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_634(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_635(joaat("STATUS_EFFECT__TRACKING"));
			func_417(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_634(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_416(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_635(joaat("STATUS_EFFECT__POISON"));
			func_636(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_636(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_636(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17414.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_SET_OVERPOWER_FOR_PLAYER_ATTRIBUTE_INTERNAL - Attribute: ", func_528(iParam0, 0), " cannot be overpowered... Why are you doing this?");
			return 0;
	}
	return 1;
}

bool func_530()
{
	if (Global_1957252.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_637(Global_1957252.f_1431.f_107, 0);
}

void func_531(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_638(13, 2);
	iVar1 = func_639(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_640(fVar0, 0f, 100f);
	iVar2 = func_639(fVar0);
	DEBUG::_0xF0783374333FD8CE(10648, 84, "RPG_GLOBAL_ALTER_WEIGHT - Altering Weight amount by: ", fParam0, " New Weight: ", fVar0, " Force Weight Update: ", MISC::_0xF216F74101968DB0(bParam1));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_ALTER_WEIGHT - Old Weight Rank: ", iVar1, " New Weight Rank: ", iVar2);
	if (iVar1 != iVar2)
	{
		Global_1957252.f_1431.f_107 = func_619();
		func_641(&(Global_1957252.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_642(13, fVar0, 2);
	Global_1957252.f_1431.f_99 = bParam1;
}

bool func_532()
{
	return !Global_1913655;
}

void func_533(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913655.f_3)
	{
		if ((((Global_1913655.f_4[iVar0 /*6*/] == bParam0 && Global_1913655.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913655.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913655.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913655.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913655.f_4[iVar0 /*6*/].f_1 = (Global_1913655.f_4[iVar0 /*6*/].f_1 + iParam1);
			DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_75(bParam0, 0), " to existing entry ", iVar0);
			return;
		}
		iVar0++;
	}
	if (Global_1913655.f_3 < 19)
	{
		DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_75(bParam0, 0), " to new entry ", Global_1913655.f_3);
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

char* func_534(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_535(bool bParam0, int iParam1)
{
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "CHECK_ITEM_DATA_ITEM_FLAG - Attempting to check the flag of an invalid item.");
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

char* func_536(bool bParam0)
{
	if (func_64(bParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_64(bParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_64(bParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_64(bParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_64(bParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_64(bParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_64(bParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_64(bParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_64(bParam0, -352095726) || func_64(bParam0, -2014783736)) || func_64(bParam0, -545064757)) || func_64(bParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_537(bool bParam0)
{
	if (func_64(bParam0, -189374246))
	{
		if (((func_643(bParam0, -1305775593) || func_643(bParam0, 1384151091)) || func_643(bParam0, 2075388272)) || func_643(bParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_64(bParam0, -753854379) || func_64(bParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_538(bool bParam0)
{
	switch (bParam0)
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

int func_539(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_43(bParam0, 0))
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

bool func_540(bool bParam0, bool bParam1)
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
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_INTERACTION_TAG] Found tag ", func_140(bParam1, 0), " for item ", func_75(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

int func_541(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_43(bParam0, 0) && !func_238(func_138(bParam0), 2))
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
			DEBUG::_0xA308F935BDECCEC0(680, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Unable to find cost ", func_644(iParam1, 0), " for item ", func_75(bParam0, 0));
		}
		return 0;
	}
	if (!bParam3)
	{
		DEBUG::_0x4DC69742196F818A(168, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Found requested identifier of ", func_644(iParam1, 0), " with output quantity ", Var0.f_1);
	}
	*iParam2 = Var0.f_1;
	return 1;
}

bool func_542(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_645(bParam0, iParam1);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_TAG_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	return bVar0;
}

bool func_543(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_72(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_646(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 162, "[GET_COUPON_FULL_NAME] Item: ", func_75(bParam0, 0), " is not a coupon or voucher. Setting name to ", sParam1);
		return false;
	}
	StringCopy(&cVar1, func_647(bParam0), 128);
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

char* func_544(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_545(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_445(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_546()
{
	if ((Global_1940463.f_11709 != (Global_1940463.f_41.f_203 - 1) || func_649(func_648(0), Global_1940463.f_11701, 0, 1, 1) > 0) || Global_1940463.f_11709 == 15)
	{
		return true;
	}
	func_650(0);
	if (Global_1940463.f_7)
	{
		return true;
	}
	return false;
}

void func_547(int iParam0)
{
	Global_1940463.f_11 = iParam0;
}

void func_548(int iParam0)
{
	Global_1940463.f_10 = iParam0;
}

bool func_549(bool bParam0)
{
	bool bVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bParam0, 0, &bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_CASH_INVENTORY_CATEGORY] Category does not have a fitslot? ", func_193(bParam0, 0));
		return -358215195;
	}
	return func_182(bVar0);
}

int func_550()
{
	return Global_1953612.f_1694;
}

int func_551(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	bool bVar19;
	int iVar20;
	int iVar21;
	struct<14> Var22;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_128(joaat("WARDROBE"), func_194(1), 1034665895, 1) };
	bVar19 = func_340(Var15, 552979403, 1, -1);
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_GET_SERVER_PLAYER_TYPE] Retrieved gender item: ", UNK_0x4379B6FA65D55295(bVar19));
	if (bVar19 != 0)
	{
		if (bVar19 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		}
		else if (bVar19 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
		}
		DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_GET_SERVER_PLAYER_TYPE] Returning Gender: ", func_436(iVar14, 0));
		return iVar14;
	}
	Var22 = { func_234(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_237(&Var22, &iVar20, &iVar21, 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_SYSTEM_GET_SERVER_PLAYER_TYPE] Collection size is: ", iVar21);
		if (iVar21 > 0 && func_109(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (Var0.f_4 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_111(iVar20);
				return 0;
			}
			DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_GET_SERVER_PLAYER_TYPE] Returning Gender: ", func_436(iVar14, 0));
			if (bParam0)
			{
				func_341(Var0, 1, 0);
			}
			func_111(iVar20);
			return iVar14;
		}
		func_111(iVar20);
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_CLOTHING_SYSTEM_GET_SERVER_PLAYER_TYPE] Failed to retrieve a gender from the server!");
	return 0;
}

char* func_552(int iParam0, int iParam1)
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

int func_553(int iParam0)
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

int func_554(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_43(bParam0, 0))
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

struct<10> func_555(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_556(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, char* sParam12)
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

bool func_557(bool bParam0)
{
	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_STYLE: attempting to process an invalid item!");
	}
	if (func_64(bParam0, -393037696))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_STYLE");
		return true;
	}
	return false;
}

int func_558(int iParam0)
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

void func_559(char* sParam0, char* sParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(680, 212, "Set MOB_APP_DISPLAY_TRANSACTION_FEED_UPDATE sFeedText =  ", sParam0, " and sTextureDict =  ", sParam1);
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_560(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (*uParam1 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_REMOVAL] Item type count is already zero for: ", func_193(func_79(bParam0), 0));
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
		func_437(bParam0, 1, bParam2);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__HANDLE_ITEM_REMOVAL] Removed item: ", bVar1);
	return bVar1;
}

bool func_561(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<4> Var5;
	int iVar12;

	iVar12 = 0;
	Var5 = func_567(iParam6);
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
		func_652(uParam0, func_651(bVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_334(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, -1212855483))
		{
			iVar12 = func_651(bVar0);
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
			iVar1 = func_185(bVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] eMetaType is invalid: ", func_184(func_330(iVar1, 1), 0), " | Index: ", iVar1, " | RELOOP");
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, joaat("COMPONENT")))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(136, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to find component for clothing item entry[", iVar4, "] | RELOOP");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2728, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Assigning: ", UNK_0x4379B6FA65D55295(bVar0), " to [", func_184(func_330(iVar1, 1), 0), "]");
				uParam0->f_1[iVar1 /*3*/] = bVar0;
				if (bVar2)
				{
					func_653(bVar3, 16, 6);
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
							if (func_654(bVar3) && func_473(uParam0->f_1[iVar1 /*3*/], bVar3, &bVar0))
							{
								DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Meta Type: ", func_184(bVar3, 0), " has default wearable state: ", UNK_0x4379B6FA65D55295(bVar0));
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
							func_656(uParam0, iVar12, func_655(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1953612.f_83[iVar1 /*12*/]) && func_655(uParam0->f_1[34 /*3*/]) == 0) && !func_175(32)) && !func_175(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_573(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Dynamically selected a shirt: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1 /*3*/]), " for outfit: ", UNK_0x4379B6FA65D55295(bParam1));
						func_337(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
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

void func_562(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_563(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_564(var uParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENTS_CACHE_SET_FLAG] Setting ", func_184(func_330(*uParam0, 1), 0), " Flags:  ", func_132(iParam1));
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_565(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_566(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS_SET_CACHE_FLAG] Setting: ", func_657(iParam1, 0));
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_567(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_327();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

void func_568(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_64(bVar1, 160827531) || func_79(bVar1) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FACE_MASK_LOGIC] We're equipping a big mask, time to unequip the small mask!");
	}
}

void func_569(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HEADBAND_LOGIC] We're equipping eyewear that restricts headbands, removing the headband!");
	}
}

void func_570(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */ == func_79(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BANDANA_LOGIC] We're equipping a small mask, time to unequip the big mask!");
	}
}

bool func_571(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_79(bParam0);
	if (iParam2 == 0)
	{
		return (bVar0 == 1759215194 || bVar0 == 344283346);
	}
	return (!bParam1 && (bVar0 == -1740828670 || bVar0 == 344283346));
}

bool func_572(int iParam0)
{
	return (Global_17414.f_55.f_664.f_1734 && iParam0) != 0;
}

int func_573(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_234(0, -1591664384, bParam0, -1591664384, 0, 0, 0) };
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__FIND_VALID_CLOTHING_ITEM_IN_SLOT] Let's see if the player owns something in: ", func_183(bParam0, 0));
	if (func_237(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_658(iVar0, iVar1, iParam1);
		}
		func_111(iVar0);
	}
	return iVar2;
}

void func_574(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 16;
	iVar1 = 0;
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	func_335(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */ || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_472(uParam0->f_1[iVar0 /*3*/], iVar1, -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_ROLLING_UP_SLEEVES] Setting shirt to Closed_Collar_Rolled_Sleeve wearable state!");
			return;
		}
	}
	if (func_472(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_ROLLING_UP_SLEEVES] Setting shirt to open_collar_rolled_sleeve wearable state!");
	}
}

void func_575(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, -1527414429)) && !func_64(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_VEST_LOGIC] Vest is being applied that removes neckwear, we need to remove neckwear!");
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_64(bParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_335(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			func_335(iVar0, iParam3);
		}
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_VEST_LOGIC] We're wearing a vest that restricts shirt collars | closing shirt collar");
	}
}

void func_576(var uParam0, bool bParam1, int iParam2, int iParam3)
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
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Corset is being applied, we need to remove suspenders!");
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_64(bVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_335(iParam2, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Equipping corset but we're wearing pants that force the corset wearable state | force corset under pants!");
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && 1769055947 == func_79(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_335(iParam2, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Chaps are equipped so we need to force our corset to be under pants!");
			}
		}
	}
}

void func_577(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_335(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_335(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_335(iVar0, iParam3);
			func_465(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being unequipped, we need to re-apply the gauntlets");
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being unequipped, we need to re-apply our suspenders!");
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being applied that remove belts, we need to remove belts!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, -985549034))
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
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, -1527414429)) && !func_64(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being applied that remove neckwear, we need to remove neckwear!");
	}
}

void func_578(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_335(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && !func_64(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied, we need to remove neckwear 1!");
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied, we need to remove neckwear 2!");
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied that doesn't support a bandolier, removing bandolier!");
	}
}

bool func_579(bool bParam0)
{
	return Global_1953612.f_1694.f_1[func_185(bParam0, 1) /*3*/] != Global_1953612.f_83[func_185(bParam0, 1) /*12*/];
}

void func_580(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lowers are being applied, we need to remove suspenders!");
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_335(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lower is getting applied, we need to re-apply the player's coat if they have one!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_64(uParam0->f_1[iVar0 /*3*/], -928740153))
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
		func_335(iVar0, iParam1);
	}
}

void func_581(var uParam0, bool bParam1, bool bParam2, int iParam3)
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
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/] && func_79(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_573(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Pants are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 36;
	func_335(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, -1473580422))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_64(bVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			DEBUG::_0xA308F935BDECCEC0(168, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that are forcing the boot wearable state to under_pants | ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]), " doesn't support this | removing the boot!");
		}
		else if (func_472(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
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
		func_335(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_79(bVar1) == 912453393)
		{
			bVar2 = true;
			if (func_64(bParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_335(iVar0, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that force the corset under pants | forcing corset wearable state!");
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_79(bVar1) == 1868067663 && func_64(bParam2, -1016441646))
		{
			func_659(uParam0, iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] pants are being applied that restricts coats, we need to remove coats!");
		}
		else if (bVar2)
		{
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] We need to push an update for the coat!");
		}
	}
	iVar0 = 34;
	if (1759215194 == func_79(uParam0->f_1[iVar0 /*3*/]))
	{
		func_335(16, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] The previous item we were wearing was unionsuit lower | updating upper layer 2!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, -1650340550))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_79(bVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that don't support chaps | removing chaps!");
		}
	}
}

void func_582(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/] && func_79(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_573(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirts are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_64(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_588(uParam0, iParam3, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] skirt is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else if (func_64(bParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt is getting applied, Item is forcing boots to be in the base wearable state!");
		}
	}
	func_335(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt is getting applied, going to remove the chaps!");
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_64(bVar1, 1090938458) && func_64(bParam2, 475297062))
		{
			func_659(uParam0, iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt that doesn't support long coats is getting applied, going to remove the long coat!");
		}
	}
}

void func_583(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_335(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove vests!");
	}
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_573(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam2);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953612.f_83[iVar0 /*12*/] && func_64(bVar1, 353024991))
	{
		func_659(uParam0, iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove short coats!");
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove suspenders!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && 1769055947 == func_79(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove chaps!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove belts!");
	}
}

void func_584(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_79(bVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove vests!");
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_79(bVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_335(iVar0, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, force the corset wearable state!");
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove vests!");
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove suspenders!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove shirts!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove belts!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove chaps!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_64(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_588(uParam0, iParam3, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] dress is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else if (func_64(bParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] dress is getting applied, Item is forcing boots to be in the base wearable state!");
		}
	}
}

void func_585(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_659(uParam0, iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove coats!");
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove gauntlets!");
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove upper layer 4!");
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove suspenders!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove shirts!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove belts!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove chaps!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_64(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_588(uParam0, iParam2, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] nightgown is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_335(iVar0, iParam2);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to force the boots to base!");
		}
	}
}

void func_586(var uParam0, bool bParam1, bool bParam2, int iParam3)
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
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set pants to base wearable state!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set boots to be under pants!");
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_64(bParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied and they don't support spurs, removing the spurs!");
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_79(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_335(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set the corset to be under pants!");
		}
	}
}

void func_587(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_64(bParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SPATS_LOGIC] Previewing spats that do not support spurs | Removing spurs");
	}
}

void func_588(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_BOOT_REMOVAL] Removing spurs as we're removing boots!");
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_79(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_BOOT_REMOVAL] Removing spats as we're removing boots!");
	}
}

void func_589(var uParam0, int iParam1, int iParam2)
{
	DEBUG::_0x1B08D1EB9D8C4931(2796168, 208, "[METAPED_SAVE_MP__SET_SAVED_COMPONENT] Outfit: ", iParam2, " Setting: ", func_184(func_330(iParam1, 1), 0), " to component: ", UNK_0x4379B6FA65D55295(*uParam0), " Wearable: ", UNK_0x4379B6FA65D55295(uParam0->f_1), " flags: ", func_132(uParam0->f_2));
	Global_17414.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_590(var uParam0, int iParam1)
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
		func_589(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_591(int iParam0, int iParam1, char* sParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17414.f_55.f_664.f_33[iParam1 /*120*/] = (Global_17414.f_55.f_664.f_33[iParam1 /*120*/] || iParam0);
		DEBUG::_0xEF256AE8A5A27966(672, 208, sParam2, "[METAPED_PLAYER_COMPONENT_OUTFIT__SET_FLAG][MP] Setting: ", func_660(iParam0, 0), " for outfit: ", iParam1);
	}
}

bool func_592(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_117(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_183(bParam1, 0));
		return false;
	}
	if (!func_379(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_183(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_75(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_183(bParam1, 0));
	return true;
}

struct<29> func_593(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "FILLOUT_CASHINVENTORY_HORSE_ITEM - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&uParam0));
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var29.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_117(bParam4), &uParam0, &Var29, 29, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "FILLOUT_CASHINVENTORY_HORSE_ITEM - failed to read data!");
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var0 = { func_599(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_594(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_HORSE_TRANSACTION - ", func_370(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_371(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_373(func_661(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_374(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_HORSE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

struct<26> func_595(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<26> Var0;
	struct<24> Var26;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "FILLOUT_CASHINVENTORY_VEHICLE_ITEM - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&uParam0));
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var26.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_117(bParam4), &uParam0, &Var26, 24, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "FILLOUT_CASHINVENTORY_VEHICLE_ITEM - failed to read data!");
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var0 = { func_599(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_596(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_VEHICLE_TRANSACTION - ", func_370(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_373(func_662(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_374(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_VEHICLE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

struct<18> func_597(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_117(bParam4), &uParam0, &Var18, 15, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "FILLOUT_CASHINVENTORY_WEARABLE_ITEM - failed to read data!");
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var0 = { func_599(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_598(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - ", func_370(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_371(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_373(func_663(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_374(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

struct<17> func_599(var uParam0, bool bParam1)
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
		Var0.f_15 = func_116(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_342() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

char* func_600(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_FME_INVALID";
		case 0:
			return "NET_FME_FIRST";
		case 1:
			return "NET_FME_CHALLENGES";
		case 2:
			return "NET_FME_DEAD_DROP";
		case 3:
			return "NET_FME_GOLDEN_HAT";
		case 4:
			return "NET_FME_HOT_PROPERTY";
		case 5:
			return "NET_FME_KING_OF_THE_CASTLE";
		case 6:
			return "NET_FME_KING_OF_THE_RAILS";
		case 7:
			return "NET_FME_WILDLIFE_PHOTOGRAPHER";
		case 8:
			return "NET_FME_THEMED_ESCAPED_CONVICTS";
		case 9:
			return "NET_FME_THEMED_ROUND_UP";
		case 10:
			return "NET_FME_THEMED_SUPPLY_TRAIN";
		case 11:
			return "NET_FME_THEMED_WRECKAGE";
		case 12:
			return "NET_FME_THEMED_CONDOR_EGG";
		case 13:
			return "NET_FME_THEMED_ANIMAL_TAGGING";
		case 14:
			return "NET_FME_THEMED_LAST";
		case 15:
			return "NET_FME_PV_CHALLENGE_HERBALIST";
		case 16:
			return "NET_FME_PV_CHALLENGE_BIGGEST_FISH";
		case 17:
			return "NET_FME_PV_CHALLENGE_FLYING_BIRD";
		case 18:
			return "NET_FME_HUNT_THE_POSSE_LEADER";
		case 19:
			return "NET_FME_MAX";
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

bool func_601()
{
	return func_50(Global_1051214);
}

bool func_602(int iParam0)
{
	return (((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414) || iParam0 == 31269700);
}

bool func_603(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_664(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_665())
	{
		return func_664(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_664(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_604(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_605(char* sParam0)
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
		func_666(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_667(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

bool func_606(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_607(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_668(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_370(iParam2, 0), " and action B ", func_370(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_375(iParam1, 0));
}

bool func_608(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

void func_609(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

char* func_610()
{
	return Global_1072032.f_28503[32 /*4*/].f_3;
}

char* func_611(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mission_type";
		case 1:
			return "stat";
		case 2:
			return "string";
		case 3:
			return "element";
		case 4:
			return "requirement";
		case 5:
			return "flags";
		case 6:
			return "flag";
		case 7:
			return "challenge";
		case 8:
			return "override";
		case 9:
			return "cooldown";
		case 10:
			return "award";
		case 11:
			return "condition_group";
		case 12:
			return "condition";
		case 13:
			return "mission_types";
		case 14:
			return "mission_type(%i)";
		case 15:
			return "mission_type(id=%x)";
		case 16:
			return "stats";
		case 17:
			return "stat(%i)";
		case 18:
			return "stat(id=%x)";
		case 19:
			return "strings";
		case 20:
			return "string(%i)";
		case 21:
			return "string(id=%x)";
		case 22:
			return "mappings";
		case 23:
			return "map(id=%x)";
		case 24:
			return "cooldowns";
		case 25:
			return "cooldown(id=%x)";
		case 26:
			return "cooldown(%i)";
		case 27:
			return "element(%i)";
		case 28:
			return "honor_configs";
		case 29:
			return "honor_config(id=%x)";
		case 30:
			return "overrides";
		case 31:
			return "override(id=%x)";
		case 32:
			return "override(%i)";
		case 33:
			return "launch_requirements";
		case 34:
			return "launch_requirement(id=%x)";
		case 35:
			return "requirement(%i)";
		case 36:
			return "requirement(id=%x)";
		case 37:
			return "challenges";
		case 38:
			return "challenge(%i)";
		case 39:
			return "challenge(id=%x)";
		case 40:
			return "flags(id=%x)";
		case 41:
			return "flag(%i)";
		case 42:
			return "awards";
		case 43:
			return "award(%i)";
		case 44:
			return "award(id=%x)";
		case 45:
			return "conditionals";
		case 46:
			return "condition_group(%i)";
		case 47:
			return "condition(%i)";
		case 48:
			return "items";
		case 49:
			return ":id";
		case 50:
			return ":base_id";
		case 51:
			return ":item";
		case 52:
			return ":label";
		case 53:
			return ":hash";
		case 54:
			return ":honor_action";
		case 55:
			return ":int";
		case 56:
			return ":honor_gain";
		case 57:
			return ":role";
		case 58:
			return ":challenge";
		case 59:
			return ":data_type";
		case 60:
			return ":increment";
		case 61:
			return ":type";
		case 62:
			return ":award";
		case 63:
			return ":condition";
		case 64:
			return ":condition_check";
		case 65:
			return ":condition_value";
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 0, "NET_FREEMODE_MISSION__XML__GET_RQID_STRING - ", func_669(iParam0, 0), " undefined");
	DEBUG::_0x4423BBAB7EB2B96B(8, 0, "NET_FREEMODE_MISSION__XML__GET_RQID_STRING - rqid undefined. Check for error logs");
	return "";
}

struct<8> func_612(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	struct<8> Var0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_613(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_384(Param0);
	}
	return -1;
}

bool func_614()
{
	return !Global_1572887.f_9;
}

char* func_615(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1706799532:
			return "SAVEGAMETYPE_END_MISSION";
		case -1559124284:
			return "SAVEGAMETYPE_END_SHOPPING";
		case -1375030386:
			return "SAVEGAMETYPE_SP_PROPERTY";
		case -1343026476:
			return "SAVEGAMETYPE_SCRIPT_MP_GLOBALS";
		case -881930112:
			return "SAVEGAMETYPE_DEFAULT";
		case -852100793:
			return "SAVEGAMETYPE_DELETE_CHAR";
		case -497057769:
			return "SAVEGAMETYPE_RANKUP";
		case -462361264:
			return "SAVEGAMETYPE_END_MATCH";
		case -189896212:
			return "SAVEGAMETYPE_SP_AUTOSAVE";
		case 1017438712:
			return "SAVEGAMETYPE_AMBIENT";
		case 1280353230:
			return "SAVEGAMETYPE_END_CREATE_NEWCHAR";
		case 1786847997:
			return "SAVEGAMETYPE_SP_DEBUG";
		case 1831048556:
			return "SAVEGAMETYPE_END_SESSION";
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

char* func_616(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SF_NO_SAVE_FLAGS";
		case 1:
			return "SF_SAVE_REQUESTED";
		case 2:
			return "SF_SAVE_PERFORMING";
		case 4:
			return "SF_SAVE_FIRST_AUTO";
		case 8:
			return "SF_SAVE_SOUND";
		case 16:
			return "SF_SAVE_BLOCK_AUTOSAVE";
		case 1024:
			return "SF_SAVE_SOFT_AMBIENT_REQUESTED";
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

int func_617(int iParam0)
{
	return func_671(func_670(iParam0));
}

bool func_618(int iParam0)
{
	float fVar0;

	fVar0 = (func_672(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

int func_619()
{
	return Global_1902870;
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_673(*iParam0);
	iVar1 = func_674(*iParam0);
	iVar2 = func_675(*iParam0);
	iVar3 = func_676(*iParam0);
	iVar4 = func_677(*iParam0);
	iVar5 = func_678(*iParam0);
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
		iVar7 = func_679(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_680(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_621(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_617(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to retrieve Core Degrade Count for ", func_627(iParam0, 0), " Returning -1. This is really bad. ");
	return -1;
}

int func_622(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_617(2);
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to retrieve Core Degrade Time of Day for ", func_627(iParam0, 0), " Returning -1. This is really bad. ");
	return -15;
}

bool func_623(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_681(iParam1) || !func_681(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_624(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_617(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Setting Core Degrade Count for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_COUNT - Failed to set Core Degrade Count for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_625(int iParam0)
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
	iVar0 = func_673(iParam0);
	iVar1 = func_674(iParam0);
	iVar2 = func_675(iParam0);
	iVar3 = func_676(iParam0);
	iVar4 = func_677(iParam0);
	iVar5 = func_678(iParam0);
	switch (func_683(iParam0))
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

void func_626(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_617(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", func_625(iParam1));
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Setting Core Degrade Time of Day for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", func_625(iParam1));
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DEGRADE_TIME_OF_DAY - Failed to set Core Degrade Time of Day for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_627(int iParam0, int iParam1)
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

bool func_628(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_684(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_629(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_617(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", iParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Setting Core Display Time for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", iParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_DISPLAY_TIME - Failed to set Core Display Time for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), ". This is really bad. ");
			break;
	}
}

void func_630(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_685(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_686(iParam1), fParam2, -1);
	}
	else
	{
		DEBUG::_0x6D2A5155B260E879(40, 84, "__RPG_GLOBAL_HANDLE_BLACKBOARD_FOR_ATTRIBUTE - INVALID BLACK BOARD NAME for Attribute Core: ", func_627(iParam1, 0));
	}
}

bool func_631()
{
	return func_670(0);
}

void func_632(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_617(2);
	}
	sVar0 = Global_1275959.f_21;
	DEBUG::_0xA308F935BDECCEC0(43432, 84, "__RPG_GLOBAL_CACHE_ATTRIBUTE_CORE_DATA - Caching Attribute Core ", func_627(iParam0, 0), " Value Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_631()), " Time Stamp: ", sVar0);
	func_687(iParam0, sParam1, iParam3);
	if (bParam2)
	{
		func_688(iParam0, sVar0, iParam3);
	}
}

bool func_633(int iParam0)
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

char* func_634(int iParam0)
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
	DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_GET_OVERPOWER_POSTFX_STRING_FOR_ATTRIBUTE - Attribute: ", func_528(iParam0, 0), " does not have an overpower post fx... Returning NULL ");
	return "";
}

void func_635(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Now disabling all Status Effects with Perk Group: ", func_689(iParam0, 0));
	iVar1 = Global_1146683.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146683.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_690(iVar0, 1);
		if (Global_1146683.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL__DISABLE_ALL_STATUS_EFFECT_SOURCES_OF_TYPE - Disabling Source: ", func_691(Global_1146683.f_47689.f_1[iVar2 /*2*/], 0), " at index: ", iVar2);
			func_692(iVar0);
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

void func_636(int iParam0, bool bParam1, bool bParam2)
{
	func_527(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_637(int iParam0, bool bParam1)
{
	return func_623(func_619(), iParam0, bParam1);
}

float func_638(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_617(1);
	}
	switch (iParam1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_693(0, 0), " Value: ", Global_1957252.f_1431.f_26[iParam0]);
			return Global_1957252.f_1431.f_26[iParam0];
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(424, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Pool for Attributes: ", func_693(1, 0), " Value: ", Global_1957252.f_1565.f_2.f_26[iParam0]);
			return Global_1957252.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_XP] Couldn't retrieve Cached Attribute XP data for Attribute: ", func_528(iParam0, 0));
	return -1f;
}

int func_639(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_640(float fParam0, float fParam1, float fParam2)
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

void func_641(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_673(*iParam0);
	iVar1 = func_674(*iParam0);
	iVar2 = func_675(*iParam0);
	iVar3 = func_676(*iParam0);
	iVar4 = func_677(*iParam0);
	iVar5 = func_678(*iParam0);
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
	iVar6 = func_679(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_679(iVar1, iVar0);
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
	func_680(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_642(int iParam0, char* sParam1, int iParam2)
{
	if (!func_694(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_617(2);
	}
	DEBUG::_0xA308F935BDECCEC0(10664, 84, "__RPG_GLOBAL_SET_PLAYER_ATTRIBUTE - Caching Attribute ", func_528(iParam0, 0), " XP Data. Setting to: ", sParam1, " Override Enabled: ", MISC::_0xF216F74101968DB0(func_631()));
	func_695(iParam0, sParam1, iParam2);
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

int func_643(bool bParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1224357681))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_FOLDER_TAG] Found tag ", func_140(bParam1, 0), " for item ", func_75(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

char* func_644(int iParam0, int iParam1)
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

bool func_645(bool bParam0, int iParam1)
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
				DEBUG::_0x4DC69742196F818A(10920, 158, "[INVENTORY_ITEM__HAS_TAG_OF_TYPE] Found tag type ", func_696(iParam1, 0), " for item ", func_75(bParam0, 0), ", returning tag : ", func_140(bVar41, 0));
				return bVar41;
			}
			iVar43++;
		}
	}
	return false;
}

bool func_646(bool bParam0)
{
	if (func_79(bParam0) == -126813555 || func_79(bParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_647(bool bParam0)
{
	int iVar0;

	if (!func_43(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ALT_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	iVar0 = func_539(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_ALT_NAME - No AltName specified for ", func_75(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_648(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_649(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_47(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_697(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_698(bParam1, bParam4));
	}
	return iVar0;
}

void func_650(bool bParam0)
{
	if (!func_43(Global_1940463.f_11701, 0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 20, "CHECK_CURRENT_ITEM_FOR_LIST_VIEW: g_satchelData.eCurrItem is invalid, bMissionDropItem - ", MISC::_0xF216F74101968DB0(bParam0));
		Global_1940463.f_7 = bParam0;
	}
	else if ((((func_143(Global_1940463.f_11701, 1224357681) != 0 && Global_1940463.f_11700 != 0) && Global_1940463.f_11700 != -2074770370) && !Global_1915867.f_20638) && !Global_1915867.f_22504.f_1)
	{
		Global_1940463.f_7 = 1;
	}
	else
	{
		Global_1940463.f_7 = 0;
	}
}

int func_651(bool bParam0)
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

void func_652(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Setting none with persistent tags of: ", func_132(iParam1));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_699(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_700(iVar0, iParam1))
			{
				vVar4 = { func_701(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953612.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					DEBUG::_0xF0783374333FD8CE(2728, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Persistent item: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]), " is not the same as our saved item: ", UNK_0x4379B6FA65D55295(func_702(iVar0, -1)), " | Transferring saved item!");
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_703(iVar0, 4))
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Clearing persistent hide flag for [", func_184(func_330(iVar0, 1), 0), "]");
					func_704(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Setting persistent hide flag for [", func_184(func_330(iVar0, 1), 0), "]");
					func_705(iVar0, 4, 6);
				}
				Jump @357; //curOff = 294
				if (bParam2)
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Clearing out [", func_184(func_330(iVar0, 1), 0), "]");
					vVar1.x = Global_1953612.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_653(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_UNSAVED_META_FLAG] Setting[", func_184(bParam0, 0), "]: ", func_132(iParam1));
	Global_1953612.f_83[func_185(bParam0, 1) /*12*/].f_11 = (Global_1953612.f_83[func_185(bParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_654(bool bParam0)
{
	int iVar0;
	var uVar1;

	Global_1953612.f_1046.f_2 = 0;
	iVar0 = 1226838104;
	func_562(&(Global_1953612.f_1046), iVar0, -367421157, 1409451727, 1, bParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1953612.f_1046));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1953612.f_1046), 1409451727))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 185, "[METAPED_PLAYER_COMPONENTS_DOES_META_COMPONENT_SUPPORT_WEARBLE_STATES] Meta Type: ", func_184(bParam0, 0), " does not support wearable states | RELOOP");
		return false;
	}
	return true;
}

int func_655(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_43(bParam0, 0))
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

void func_656(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_64(uParam0->f_1[34 /*3*/], -166674229))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_HANDLE_PARTIAL_OUTFIT_POST_FILLOUT] Player is wearing an unalterable outfit | EXIT");
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_703(iVar0, 16);
		if (bVar1)
		{
			func_704(iVar0, 16, 9);
		}
		if (Global_1953612.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[__METAPED_PLAYER_COMPONENTS_HANDLE_PARTIAL_OUTFIT_POST_FILLOUT] Bypassing: ", func_184(func_330(iVar0, 1), 0), " as it does not have a component tag setup for it | RELOOP");
		}
		else
		{
			if (bVar1)
			{
				func_335(iVar0, iParam3);
			}
			if (!bParam2 && func_655(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(168, 208, "[METAPED_PLAYER_COMPONENTS_REMOVE_COMPONENTS_WITH_SYSTEM_TAG] Bypassing: ", func_184(func_330(iVar0, 1), 0), " as it is tagged as a role item | RELOOP");
			}
			else if (func_700(iVar0, iParam1) && !bVar1)
			{
				DEBUG::_0x4DC69742196F818A(40, 208, "[METAPED_PLAYER_COMPONENTS_REMOVE_COMPONENTS_WITH_SYSTEM_TAG] Removing: ", func_184(func_330(iVar0, 1), 0));
				uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_337(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_335(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_337(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

char* func_657(int iParam0, int iParam1)
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

int func_658(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	bool bVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_327() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_109(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_655(Var1.f_4) != 0)
			{
			}
			else if (func_64(Var1.f_4, -166674229))
			{
			}
			else if (func_64(Var1.f_4, 525391395))
			{
			}
			else
			{
				bVar15 = func_79(Var1.f_4);
				if (func_707(iParam2, func_706(bVar15)))
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

void func_659(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_64(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_455(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953612.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_335(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_335(iVar0, iParam2);
	}
}

char* func_660(int iParam0, int iParam1)
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

bool func_661(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_662(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_663(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_664(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_665()
{
	return Global_1102630.f_3672;
}

void func_666(char* sParam0)
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
	func_667(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_667(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_668(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_708(&(uParam0->f_4));
}

char* func_669(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_FREEMODE_MISSION_RQID__COUNT__MISSION_TYPE";
		case 1:
			return "NET_FREEMODE_MISSION_RQID__COUNT__STAT";
		case 2:
			return "NET_FREEMODE_MISSION_RQID__COUNT__STRING";
		case 3:
			return "NET_FREEMODE_MISSION_RQID__COUNT__ELEMENT";
		case 4:
			return "NET_FREEMODE_MISSION_RQID__COUNT__REQUIREMENT";
		case 5:
			return "NET_FREEMODE_MISSION_RQID__COUNT__FLAGS";
		case 6:
			return "NET_FREEMODE_MISSION_RQID__COUNT__FLAG";
		case 7:
			return "NET_FREEMODE_MISSION_RQID__COUNT__CHALLENGE";
		case 8:
			return "NET_FREEMODE_MISSION_RQID__COUNT__OVERRIDE";
		case 9:
			return "NET_FREEMODE_MISSION_RQID__COUNT__COOLDOWN";
		case 10:
			return "NET_FREEMODE_MISSION_RQID__COUNT__AWARD";
		case 11:
			return "NET_FREEMODE_MISSION_RQID__COUNT__CONDITION_GROUP";
		case 12:
			return "NET_FREEMODE_MISSION_RQID__COUNT__CONDITION";
		case 13:
			return "NET_FREEMODE_MISSION_RQID__NODE__MISSION_TYPES";
		case 14:
			return "NET_FREEMODE_MISSION_RQID__NODE__MISSION_TYPE_BY_IDX";
		case 15:
			return "NET_FREEMODE_MISSION_RQID__NODE__MISSION_TYPE_BY_HASH";
		case 16:
			return "NET_FREEMODE_MISSION_RQID__NODE__STATS";
		case 17:
			return "NET_FREEMODE_MISSION_RQID__NODE__STAT_BY_IDX";
		case 18:
			return "NET_FREEMODE_MISSION_RQID__NODE__STAT_BY_HASH";
		case 19:
			return "NET_FREEMODE_MISSION_RQID__NODE__STRINGS";
		case 20:
			return "NET_FREEMODE_MISSION_RQID__NODE__STRING_BY_IDX";
		case 21:
			return "NET_FREEMODE_MISSION_RQID__NODE__STRING_BY_HASH";
		case 22:
			return "NET_FREEMODE_MISSION_RQID__NODE__MAPPINGS";
		case 23:
			return "NET_FREEMODE_MISSION_RQID__NODE__MAP_BY_HASH";
		case 24:
			return "NET_FREEMODE_MISSION_RQID__NODE__COOLDOWNS";
		case 25:
			return "NET_FREEMODE_MISSION_RQID__NODE__COOLDOWN_BY_HASH";
		case 26:
			return "NET_FREEMODE_MISSION_RQID__NODE__COOLDOWN_BY_IDX";
		case 27:
			return "NET_FREEMODE_MISSION_RQID__NODE__ELEMENT_BY_IDX";
		case 28:
			return "NET_FREEMODE_MISSION_RQID__NODE__HONOR_CONFIGS";
		case 29:
			return "NET_FREEMODE_MISSION_RQID__NODE__HONOR_CONFIG_BY_HASH";
		case 30:
			return "NET_FREEMODE_MISSION_RQID__NODE__OVERRIDES";
		case 31:
			return "NET_FREEMODE_MISSION_RQID__NODE__OVERRIDE_BY_HASH";
		case 32:
			return "NET_FREEMODE_MISSION_RQID__NODE__OVERRIDE_BY_IDX";
		case 33:
			return "NET_FREEMODE_MISSION_RQID__NODE__LAUNCH_REQUIREMENTS";
		case 34:
			return "NET_FREEMODE_MISSION_RQID__NODE__LAUNCH_REQUIREMENT_BY_HASH";
		case 35:
			return "NET_FREEMODE_MISSION_RQID__NODE__REQUIREMENT_BY_IDX";
		case 36:
			return "NET_FREEMODE_MISSION_RQID__NODE__REQUIREMENT_BY_HASH";
		case 37:
			return "NET_FREEMODE_MISSION_RQID__NODE__CHALLENGES";
		case 38:
			return "NET_FREEMODE_MISSION_RQID__NODE__CHALLENGE_BY_IDX";
		case 39:
			return "NET_FREEMODE_MISSION_RQID__NODE__CHALLENGE_BY_HASH";
		case 40:
			return "NET_FREEMODE_MISSION_RQID__NODE__FLAGS_BY_HASH";
		case 41:
			return "NET_FREEMODE_MISSION_RQID__NODE__FLAG_BY_IDX";
		case 42:
			return "NET_FREEMODE_MISSION_RQID__NODE__AWARDS";
		case 43:
			return "NET_FREEMODE_MISSION_RQID__NODE__AWARD_BY_IDX";
		case 44:
			return "NET_FREEMODE_MISSION_RQID__NODE__AWARD_BY_HASH";
		case 45:
			return "NET_FREEMODE_MISSION_RQID__NODE__CONDITIONALS";
		case 46:
			return "NET_FREEMODE_MISSION_RQID__NODE__CONDITION_GROUP_BY_IDX";
		case 47:
			return "NET_FREEMODE_MISSION_RQID__NODE__CONDITION_BY_IDX";
		case 48:
			return "NET_FREEMODE_MISSION_RQID__NODE__ITEMS";
		case 49:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__ID";
		case 50:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__BASE_ID";
		case 51:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__ITEM";
		case 52:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__LABEL";
		case 53:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__HASH";
		case 54:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__HONOR_ACTION";
		case 55:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__INT";
		case 56:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__HONOR_GAIN";
		case 57:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__ROLE";
		case 58:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__CHALLENGE";
		case 59:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__DATA_TYPE";
		case 60:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__INCREMENT";
		case 61:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__TYPE";
		case 62:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__AWARD";
		case 63:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__CONDITION";
		case 64:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__CONDITION_CHECK";
		case 65:
			return "NET_FREEMODE_MISSION_RQID__ATTRIBUTE__CONDITION_VALUE";
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

bool func_670(int iParam0)
{
	return func_664(&(Global_1957252.f_1565), iParam0, 1);
}

int func_671(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_672(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_709(2)));
}

int func_673(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_710(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_674(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_675(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_676(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_677(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_678(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_679(int iParam0, int iParam1)
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

void func_680(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_711(iParam0, iParam6);
	func_712(iParam0, iParam5);
	func_713(iParam0, iParam4);
	func_714(iParam0, iParam3);
	func_715(iParam0, iParam2);
	func_716(iParam0, iParam1);
}

bool func_681(int iParam0)
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
	iVar0 = func_678(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_677(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_676(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_673(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_674(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_675(iParam0);
	if (iVar5 < 1 || iVar5 > func_679(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

char* func_682(int iParam0)
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

int func_683(int iParam0)
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
	iVar0 = func_675(iParam0);
	switch (func_674(iParam0))
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
	iVar2 = func_673(iParam0);
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

int func_684(int iParam0)
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
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_PED_ATTRIBUTE_FROM_RPG_GLOBAL_CORE - Attribute Core: ", func_627(iParam0, 0), " does not have an associated PED Attribute. This is REALLY bad, correct immediately... ");
	return 0;
}

char* func_685(int iParam0)
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

char* func_686(int iParam0)
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

void func_687(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_617(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_6[iParam0 /*3*/] = sParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Setting Core Value for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_VALUE - Failed to set Core Value for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), ". This is really bad. ");
			break;
	}
}

void func_688(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_617(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", sParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = sParam1;
			DEBUG::_0xF0783374333FD8CE(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Setting Last Updated Timestamp for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), " to ", sParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_ATTRIBUTE_CORE_LAST_UPDATED_TIMESTAMP - Failed to set Last Updated Timestamp for ", func_627(iParam0, 0), " Pool: ", func_682(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_689(int iParam0, int iParam1)
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

int func_690(int iParam0, int iParam1)
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

char* func_691(int iParam0, int iParam1)
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

int func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_717(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - invalid Source ID ", iParam0);
		return 0;
	}
	iVar0 = func_690(iParam0, 1);
	if (!func_718(Global_1146683.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_719(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Attempting to disable all Perks in Perk Group: ", func_689(Global_1146683.f_35859.f_919[iVar0 /*12*/], 0), " it has: ", Global_1146683.f_35859[iVar3 /*6*/].f_5, " perks...");
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146683.f_35859[iVar3 /*6*/][iVar4];
		DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Disabling Perk: ", func_720(iVar1, 0), " from Source: ", func_691(iParam0, 0));
		switch (func_721(iParam0, iVar1))
		{
			case 0:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - deactivating perk ", func_720(iVar1, 0), " directly");
				func_722(iVar1, iParam0, iVar4);
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
						DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - removing perk ", func_720(iVar1, 0), " from the activation queue");
						func_722(iVar1, iParam0, iVar4);
						func_723(&(Global_1146683.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146683.f_35859.f_11700 = (Global_1146683.f_35859.f_11700 - 1);
						Global_1146683.f_35859.f_9503[iVar5 /*3*/] = { Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/] };
						func_723(&(Global_1146683.f_35859.f_9503[Global_1146683.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - ignoring perk ", func_720(iVar1, 0), "...");
				Jump @1002; //curOff = 566
				iVar2 = func_724(iVar1, 1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_720(iVar1, 0), " currently has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				func_725(iVar2, -1);
				DEBUG::_0xA308F935BDECCEC0(2216, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Perk: ", func_720(iVar1, 0), " has num sources: ", Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29, " remaining... ");
				if (Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_726(iVar2, 0);
					DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - all sources for Perk: ", func_720(iVar1, 0), " have been removed, disabling it");
					iVar6 = 0;
					while (iVar6 < Global_1146683.f_35859.f_9502)
					{
						if (Global_1146683.f_35859.f_9302[iVar6] != iVar1)
						{
							DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_720(iVar1, 0), " does not equal perk in slot: ", func_720(Global_1146683.f_35859.f_9302[iVar6], 0));
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL__DISABLE_PERK_SOURCE_INTERNAL - Evaluated Perk: ", func_720(iVar1, 0), " matches perk in slot! ");
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
			func_727(&(Global_1146683.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

char* func_693(int iParam0, int iParam1)
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

bool func_694(int iParam0)
{
	if (func_633(iParam0))
	{
		return true;
	}
	else if (func_728(iParam0))
	{
		return true;
	}
	return false;
}

void func_695(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_617(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1957252.f_1431.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_528(iParam0, 0), " Pool: ", func_682(iParam2), " to ", fParam1);
			break;
		case 1:
			Global_1957252.f_1565.f_2.f_26[iParam0] = fParam1;
			DEBUG::_0xF0783374333FD8CE(6824, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Setting Attribute XP for ", func_528(iParam0, 0), " Pool: ", func_682(iParam2), " to ", fParam1);
			break;
		default:
			DEBUG::_0x6D2A5155B260E879(2728, 84, "__RPG_GLOBAL_SET_CACHED_ATTRIBUTE_XP - Failed to set Attribute XP for ", func_528(iParam0, 0), " Pool: ", func_682(iParam2), ". This is really bad. ");
			break;
	}
}

char* func_696(int iParam0, int iParam1)
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

int func_697(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_729(bParam1))
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
			return func_730(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), bParam1);
		}
	}
	return 0;
}

int func_698(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_731())
	{
		return func_192(bParam0, func_194(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

bool func_699(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_700(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953612.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_701(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	return Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

var func_702(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_701(iParam0, iParam1) };
	return vVar0.x;
}

bool func_703(int iParam0, int iParam1)
{
	return (Global_1953612.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_704(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG_BY_INDEX] Clearing[", func_184(bParam0, 0), "]: ", func_132(iParam1));
	Global_1953612.f_83[bParam0 /*12*/].f_11 = (Global_1953612.f_83[bParam0 /*12*/].f_11 - (Global_1953612.f_83[bParam0 /*12*/].f_11 && iParam1));
}

void func_705(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_UNSAVED_META_FLAG] Setting[", func_184(bParam0, 0), "]: ", func_132(iParam1));
	Global_1953612.f_83[bParam0 /*12*/].f_11 = (Global_1953612.f_83[bParam0 /*12*/].f_11 || iParam1);
}

int func_706(bool bParam0)
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

bool func_707(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_708(var uParam0)
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

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_519(2) * 2;
		case 1:
			return func_523(2) * 2;
		case 2:
			return func_521(2) * 2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL_GET_ATTRIBUTE_CORE_MAX_SIZE - Attribute Core: ", func_627(iParam0, 0), " is INVALID. Correct this immediately... ");
	return -1;
}

int func_710(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_711(int iParam0, int iParam1)
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

void func_712(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_713(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_674(*iParam0);
	iVar1 = func_673(*iParam0);
	if (iParam1 < 1 || iParam1 > func_679(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_679(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_714(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_715(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_716(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_717(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_718(int iParam0)
{
	int iVar0;

	iVar0 = func_719(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_719(int iParam0, int iParam1)
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

char* func_720(int iParam0, int iParam1)
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

int func_721(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_732(iParam0);
	iVar1 = Global_1275959;
	iVar2 = func_724(iParam1, 1);
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "RPG_GLOBAL_STAT_GET_DEACTIVATION_TYPE - Source: ", func_691(iParam0, 0), " Perk: ", func_720(iParam1, 0), " Deactivation Trigger: ", func_733(Global_1146683.f_35859.f_3116[iVar2 /*31*/].f_1, 0));
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

int func_722(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_717(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid Source ID ", iParam1);
		return 0;
	}
	if (!func_734(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - invalid perk ID ", iParam0);
		return 0;
	}
	iVar0 = func_724(iParam0, 1);
	func_735(iParam0, iParam1, iParam2);
	if (func_736(Global_1146683.f_35859.f_3116[iVar0 /*31*/]) && func_737(iParam0, Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Now checking Stack Group: ", func_738(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " for any perks that could be enabled now that this perk is diabled... ");
		vVar1 = { func_739(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_740(vVar1))
		{
			if (func_741(vVar1.x, vVar1.y, vVar1.z))
			{
				func_742(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_743(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
				DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - Failed to activate next availible perk in Stack Group: ", func_738(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), " there was a critical failure... ");
			}
		}
		else
		{
			func_743(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4);
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK - No suitable replacement for active perk in Stack Group: ", func_738(Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4, 0), "...");
		}
	}
	return 1;
}

void func_723(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_724(int iParam0, int iParam1)
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

void func_725(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 84, "__RPG_GLOBAL__ALTER_SOURCES_FOR_PERK_ID - Perk: ", func_720(func_744(iParam0, 1), 0), " is being altered by: ", iParam1, " to a total of: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_726(int iParam0, int iParam1)
{
	Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	DEBUG::_0xF0783374333FD8CE(168, 84, "__RPG_GLOBAL__SET_SOURCES_FOR_PERK_ID - Perk: ", func_720(func_744(iParam0, 1), 0), " is being set to: ", Global_1146683.f_35859.f_3116[iParam0 /*31*/].f_29);
}

void func_727(var uParam0)
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

bool func_728(int iParam0)
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

bool func_729(bool bParam0)
{
	if (!func_540(bParam0, 1955773996))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item does not have required horse cargo tag - ", func_75(bParam0, 0));
		return false;
	}
	if (!func_745(bParam0, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item considered too small to be stowable - ", func_75(bParam0, 0));
		return false;
	}
	return true;
}

int func_730(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_43(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PED_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - Checking if item: ", func_75(bParam1, 0), " has a valid GUID.");
	Var0 = { func_746(iParam0, bParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - No GUID found for item ", func_75(bParam1, 0), ", returning 0");
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, false);
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PED_SATCHEL_ITEM_COUNT - Found ", iVar4, " of item ", func_75(bParam1, 0));
	return iVar4;
}

bool func_731()
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
	if (!func_747(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: not a hunting wagon...");
		return false;
	}
	return true;
}

int func_732(int iParam0)
{
	if (func_748(iParam0))
	{
		return (func_749(iParam0) % 32);
	}
	return Global_1275959;
}

char* func_733(int iParam0, int iParam1)
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

bool func_734(int iParam0)
{
	int iVar0;

	iVar0 = func_724(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_735(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_690(iParam1, 1);
	iVar1 = func_724(iParam0, 1);
	iVar2 = func_719(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_720(iParam0, 0), " from a source that hasn't previously enabled it ", func_691(iParam1, 0));
		return 0;
	}
	if (!Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - deactivating perk ", func_720(iParam0, 0), " and source ", func_691(iParam1, 0));
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_750(iVar3, 1);
		if (!func_751(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 - func_752(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_PERK_INTERNAL - removing perk ", func_720(iParam0, 0), " to stat mod ", func_753(iVar3, 0), " with strength ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/].f_1);
			func_754(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_755(iVar6))
		{
		}
		else
		{
			iVar8 = func_756(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1] = (Global_1146683.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146683.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146683.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 0;
				func_757(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_736(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_737(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_734(iParam0))
	{
		return false;
	}
	if (!func_758(iParam1))
	{
		return false;
	}
	iVar0 = func_759(iParam1, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

char* func_738(int iParam0, int iParam1)
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

Vector3 func_739(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_760(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146683.f_35859.f_9503[iVar0 /*3*/];
}

bool func_740(vector3 vParam0)
{
	if (!func_734(vParam0.x))
	{
		return false;
	}
	if (!func_717(vParam0.y))
	{
		return false;
	}
	if (!func_761(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_741(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_690(iParam1, 1);
	iVar1 = func_724(iParam0, 1);
	iVar2 = func_719(Global_1146683.f_35859.f_919[iVar0 /*12*/], 1);
	DEBUG::_0xA308F935BDECCEC0(2184, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to activate perk with data - Group Index: ", iVar2, " Source Index: ", iVar0, " Perk Index: ", iVar1);
	if (Global_1146683.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - attempting to disable perk ", func_720(iParam0, 0), " from a source that hasn't previously enabled it ", func_691(iParam1, 0));
		return false;
	}
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1275959.f_21;
	if (Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK - activating perk ", func_720(iParam0, 0), " and source ", func_691(iParam1, 0), " at POSIX time: ", Global_1275959.f_21);
	Global_1146683.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_750(iVar3, 1);
		if (!func_751(iVar3))
		{
		}
		else
		{
			Global_1146683.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146683.f_2169[iVar5 /*205*/].f_201 = (Global_1146683.f_2169[iVar5 /*205*/].f_201 + func_752(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_720(iParam0, 0), " to stat mod ", func_753(iVar3, 0), " with strength ", func_752(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			DEBUG::_0xA308F935BDECCEC0(6824, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - adding perk ", func_720(iParam0, 0), " to stat mod ", func_753(iVar3, 0), " with total ", Global_1146683.f_2169[iVar5 /*205*/].f_201);
			func_762(iVar3);
		}
		iVar4++;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - perk: ", func_720(iParam0, 0), " Flag Count: ", Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28);
	iVar7 = 0;
	while (iVar7 < Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_755(iVar6))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_763(iVar6, 0), " is not valid... skipping... ");
		}
		else if (!func_764(&(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Flag: ", func_763(iVar6, 0), " is not currently disabled by tunables... skipping... ");
		}
		else
		{
			iVar8 = func_756(iVar6, 1);
			Global_1146683.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146683.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146683.f_21645[iVar8 /*209*/].f_208)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_PERK_INTERNAL - Turning on flag ", func_763(iVar6, 0));
				Global_1146683.f_21645[iVar8 /*209*/].f_208 = 1;
				func_765(iVar6);
			}
		}
		iVar7++;
	}
	func_766(Global_1146683.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_742(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_758(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_738(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_759(iParam0, 1);
	if (!func_734(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk: ", func_720(iParam1, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_717(iParam2))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Source: ", func_691(iParam2, 0), " is not valid... Bailing out... ");
		return;
	}
	if (!func_761(iParam3))
	{
		DEBUG::_0x83407B92D46F25C3(136, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Index in Group: ", iParam3, " is not valid... Bailing out... ");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Setting Perk: ", func_720(iParam1, 0), " active for Perk Group: ", func_738(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_743(int iParam0)
{
	int iVar0;

	if (!func_758(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA - Perk Group: ", func_738(iParam0, 0), " is not valid... Bailing out... ");
		return;
	}
	iVar0 = func_759(iParam0, 1);
	DEBUG::_0xF0783374333FD8CE(680, 84, "__RPG_GLOBAL_STACKING_SET_STACK_GROUP_DATA_AS_INVALID - Setting Perk: ", func_720(-1, 0), " active for Perk Group: ", func_738(iParam0, 0));
	Global_1146683.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146683.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

int func_744(int iParam0, int iParam1)
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

bool func_745(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_767(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_746(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_768(iParam0) };
	return func_769(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_747(int iParam0)
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

bool func_748(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_749(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (func_748(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_770(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_771(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_772(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_773(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_774(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_775(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_750(int iParam0, int iParam1)
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

bool func_751(int iParam0)
{
	int iVar0;

	iVar0 = func_750(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_752(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_753(*uParam0, 0), " has a Tunable associated with impact, looking up... ");
		fVar0 = func_776(794259616, uParam0->f_2, uParam0->f_1, "");
		DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_753(*uParam0, 0), " has an associated Tunable with impact: ", fVar0);
		return fVar0;
	}
	DEBUG::_0xF0783374333FD8CE(424, 84, "RPG_GLOBAL_STATS_GET_STAT_MOD_IMPACT - Stat Mod: ", func_753(*uParam0, 0), " using default Impact: ", uParam0->f_1);
	return uParam0->f_1;
}

char* func_753(int iParam0, int iParam1)
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

void func_754(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_751(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - Stat Mod: ", func_753(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_750(iParam0, 1);
	if (!func_777(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_753(iParam0, 0));
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - stat mod ", func_753(iParam0, 0), " is no longer impacting stat ", func_778(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_779(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_780(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__UNSUBSCRIBE_STAT_MOD - removing stat ", func_778(Global_1146683.f_2169[iVar0 /*205*/], 0), " from subscribed action ", func_781(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
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

bool func_755(int iParam0)
{
	int iVar0;

	iVar0 = func_756(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_756(int iParam0, int iParam1)
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

void func_757(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Now Disabling Stat Flag: ", func_763(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_782();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_783();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - End Bleeding for local player. ");
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer being tracked... ");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_784(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer drained! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_784(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer disoriented! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_784(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer poisoned. Stop periodic icon. ");
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_101(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Player is no longer in a Toxic Cloud! Remove Post FX. ");
			GRAPHICS::_0xC5CB91D65852ED7E(func_784(iParam0));
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
			DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Remove VFX ", func_763(iParam0, 0));
			func_786(func_785(iParam0));
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
			func_787();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_777(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_777(16);
			break;
	}
}

bool func_758(int iParam0)
{
	int iVar0;

	iVar0 = func_759(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_759(int iParam0, int iParam1)
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

int func_760(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_788(iParam0);
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
		iVar64 = func_724(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 1);
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "RPG_GLOBAL_GET_ACTIVATION_QUEUE_PERK_INDEX_FROM_NEXT_AVAILIBLE_PERK_IN_STACK_GROUP - Now processing Perk: ", func_720(Global_1146683.f_35859.f_9503[iVar65 /*3*/], 0), "...");
		if (Global_1146683.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146683.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_789(Global_1146683.f_35859.f_9503[iVar65 /*3*/], Global_1146683.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_790(Global_1146683.f_35859.f_9503[iVar65 /*3*/]) };
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

bool func_761(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_STATS_IS_PERK_INDEX_IN_GROUP_VALID - Invalid perk group index ", iParam0);
		return false;
	}
	return true;
}

void func_762(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_751(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - Stat Mod: ", func_753(iParam0, 0), " is Invalid... ");
		return;
	}
	iVar0 = func_750(iParam0, 1);
	if (!func_777(Global_1146683.f_2169[iVar0 /*205*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - no RPG stat associated with stat mod ", func_753(iParam0, 0));
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - subcribing stat mod ", func_753(iParam0, 0), " to stat ", func_778(Global_1146683.f_2169[iVar0 /*205*/], 0));
	Global_1146683[Global_1146683.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146683.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_779(Global_1146683.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_780(Global_1146683.f_2169[iVar0 /*205*/].f_203, 1);
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
	DEBUG::_0xA308F935BDECCEC0(680, 84, "__RPG_GLOBAL_STATS__PRIVATE__SUBSCRIBE_STAT_MOD - adding stat ", func_778(Global_1146683.f_2169[iVar0 /*205*/], 0), " to action ", func_781(Global_1146683.f_2169[iVar0 /*205*/].f_203, 0));
	Global_1146683.f_47561[iVar1 /*25*/][Global_1146683.f_47561[iVar1 /*25*/].f_23] = Global_1146683.f_2169[iVar0 /*205*/];
	Global_1146683.f_47561[iVar1 /*25*/].f_23++;
}

char* func_763(int iParam0, int iParam1)
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

bool func_764(var uParam0)
{
	bool bVar0;

	DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_763(*uParam0, 0), " Associated Tunable: ", UNK_0x4379B6FA65D55295(uParam0->f_1));
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_791(794259616, uParam0->f_1, 1, "");
		DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL_STATS_IS_STAT_FLAG_TUNABLE_ENABLED - Stat Flag: ", func_763(*uParam0, 0), " is has Tunable Enabled State: ", MISC::_0xF216F74101968DB0(bVar0));
		return bVar0;
	}
	return true;
}

void func_765(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0xF0783374333FD8CE(40, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Now Enabling Stat Flag: ", func_763(iParam0, 0));
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Lock On Immunities... ");
			func_782();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Handling Headshot Immunities... ");
			func_783();
			break;
		case joaat("WOUND_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Start Wound for local player.");
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now being tracked...");
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_784(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now drained! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_784(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now disoriented! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_784(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is poisoned. Start core periodic icon. ");
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_101(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Player is now in a Toxic Cloud! Play Post FX. ");
			GRAPHICS::ANIMPOSTFX_PLAY(func_784(iParam0));
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
			iVar2 = func_785(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_792(iParam0, 0));
			func_793(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_792(iParam0, 1));
			func_793(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_792(iParam0, 2));
			func_793(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_792(iParam0, 3));
			func_793(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Moment to Recuperate VFX start. ");
			iVar2 = func_785(iParam0);
			func_793(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Slow and Steady VFX start. ");
			iVar2 = func_785(iParam0);
			func_793(iVar2, 4, 1, -1, 0);
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
			func_794();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Speed Flags have been changed, update relevant stats... ");
			func_777(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Incapacitation Flags have been changed, update relevant stats... ");
			func_777(16);
			break;
	}
}

void func_766(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Attempting to play Activation Sound: ", func_795(iParam0, 0));
	sVar0 = func_796(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound name associated with Activation Sound: ", func_795(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound name: ", sVar0, " associated with Activation Sound: ", func_795(iParam0, 0));
	sVar1 = func_797(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - There is no sound set associated with Activation Sound: ", func_795(iParam0, 0), " not playing anything...");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Found sound set: ", sVar1, " associated with Activation Sound: ", func_795(iParam0, 0));
	DEBUG::_0xF0783374333FD8CE(10920, 84, "__RPG_GLOBAL__STATS__PLAY_PERK_SOUND - Playing sound name: ", sVar0, " in sound set: ", sVar1, " for Activation Sound: ", func_795(iParam0, 0));
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275959.f_8, sVar1, false, 0, 0);
}

int func_767(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "GET_INVENTORY_ITEM_SATCHEL_SIZE - failed to retreive the satchel item data from the itemdatabase for item: ", func_75(bParam0, 0));
		return -1;
	}
	return uVar0;
}

struct<5> func_768(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_769(iParam0, joaat("CHARACTER"), func_342(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_769(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_43(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PED_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_75(bParam1, 0), " (", bParam1, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, bParam1, bParam6, &Var0);
	return Var0;
}

bool func_770(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_771(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_772(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_773(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_774(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_775(int iParam0)
{
	int iVar0;

	iVar0 = func_690(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_776(bool bParam0, bool bParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_798(bParam0, bParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(bParam0, bParam1, Var0.f_10.f_1);
		DEBUG::_0xA308F935BDECCEC0(680, 188, "NET_TUNABLES__RETRIEVE_TUNABLE__FLOAT - ", &(Var0.f_1), " = ", MISC::_0x2B6846401D68E563(fVar22, 4));
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(bParam0, bParam1, fParam2);
		DEBUG::_0xA308F935BDECCEC0(168, 188, "NET_TUNABLES__RETRIEVE_TUNABLE__FLOAT - ", sParam3, " not found in pardata");
	}
	return fVar22;
}

bool func_777(int iParam0)
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
	DEBUG::_0xA308F935BDECCEC0(168, 84, "RPG_GLOBAL_STATS__ADD_STAT_ID_TO_UPDATE_QUEUE - adding stat ", func_778(iParam0, 0), " to update queue. Total stats in queue: ", Global_1146683.f_2165);
	return true;
}

char* func_778(int iParam0, int iParam1)
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

bool func_779(int iParam0)
{
	int iVar0;

	iVar0 = func_780(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_780(int iParam0, int iParam1)
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

char* func_781(int iParam0, int iParam1)
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

void func_782()
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
		if (!func_213(Global_1277758[Global_1275959 /*87*/].f_86, 1))
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

void func_783()
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

char* func_784(int iParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_POSTFX_NAME - Stat Flag: ", func_763(iParam0, 0), " does not have a Post FX name. Should you set one up? ");
	return "";
}

int func_785(int iParam0)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_SCRIPT_ID - Stat Flag: ", func_763(iParam0, 0), " does not have a Particle FX. Should you set one up? ");
	return 0;
}

void func_786(int iParam0)
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

void func_787()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__DISABLE_NED_KELLY_BASE_INTERNAL - Cleaning up Ned Kelly base properties and application... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275959.f_8);
}

int func_788(int iParam0)
{
	int iVar0;

	if (!func_758(iParam0))
	{
		return -1;
	}
	iVar0 = func_759(iParam0, 1);
	return Global_1146683.f_35859.f_9286[iVar0 /*3*/];
}

bool func_789(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_734(iParam0))
	{
		return false;
	}
	iVar0 = func_724(iParam0, 1);
	iVar2 = Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_736(Global_1146683.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146683.f_35859.f_9286[func_759(iVar2, 1) /*3*/];
		Var4 = { func_790(iVar3) };
		if (iVar3 != iParam0 && Global_1146683.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - A stronger perk in the perk stack group: ", func_738(iVar2, 0), " is already active. Active Perk: ", func_720(iVar3, 0));
			return false;
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Evaluating Activation Trigger: ", func_799(Global_1146683.f_35859.f_3116[iVar0 /*31*/], 0), " for activation... ");
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_800() && !func_801())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can only be activated when you are in Free Roam or running COOP. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can be activated! ");
			return true;
		case -2010146101:
			if (!func_800())
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can only be activated when you are in Free Roam. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can be activated! ");
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_732(iParam1);
			if (iVar1 == Global_1275959)
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can only be activated from REMOTE players. Returning FALSE. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can be activated from Remote Player Index: ", iVar1);
			return true;
		case -2129621195:
			iVar1 = func_732(iParam1);
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
			iVar1 = func_732(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is Invalid... ");
				return false;
			}
			if (iVar1 != Global_1275959 && !func_491(Global_1275959.f_154[iVar1]))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT an Ally... ");
				return false;
			}
			if (!func_482(512, iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player Index: ", iVar1, " is NOT in Dead Eye.. ");
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can be activated! ");
			return true;
		case -1503245593:
			if (!Global_1957252.f_1716[8])
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - FAILED to activate because Player is not currently Lassoed... ");
				return false;
			}
			iVar1 = func_732(iParam1);
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " can be activated! ");
			return true;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "__RPG_GLOBAL__STATS_CAN_PERK_BE_ACTIVATED - Perk: ", func_720(iParam0, 0), " has no activation logic defined, fix this... ");
	return false;
}

struct<31> func_790(int iParam0)
{
	int iVar0;

	iVar0 = func_724(iParam0, 1);
	return Global_1146683.f_35859.f_3116[iVar0 /*31*/];
}

bool func_791(bool bParam0, bool bParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_798(bParam0, bParam1, &Var0))
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

char* func_792(int iParam0, int iParam1)
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
	DEBUG::_0x9A6C65DDDBEC9C52(168, 84, "RPG_GLOBAL_GET_STAT_FLAG_PTFX_BONE - Stat Flag: ", func_763(iParam0, 0), " does not have a Particle FX bone. Should you set one up? ");
	return "";
}

void func_793(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_794()
{
	DEBUG::_0xF0783374333FD8CE(8, 84, "__RPG_GLOBAL__EQUIPMENT__ENABLE_NED_KELLY_BASE_INTERNAL - Ned Kelly is equipped... Initializing Base properties... ");
	PED::SET_PED_CONFIG_FLAG(Global_1275959.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275959.f_8, 0.7f);
}

char* func_795(int iParam0, int iParam1)
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

char* func_796(int iParam0)
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

char* func_797(int iParam0)
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

bool func_798(bool bParam0, bool bParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_802(iVar7);
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

char* func_799(int iParam0, int iParam1)
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

bool func_800()
{
	return Global_1572887.f_6;
}

bool func_801()
{
	if (!Global_1048577)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Mission controller not active, not in COOP. Returning FALSE... ");
		return false;
	}
	if (!func_50(func_49(0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - No active/valid UID. Returning FALSE... ");
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is not a mission. Returning FALSE...");
		return false;
	}
	if (func_602(Global_524288.f_40400))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Active content is coop sub-type. Returning TRUE...");
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 8, "NETWORK_IS_IN_COOP - Content is not COOP. Returning FALSE. ");
	return false;
}

int func_802(int iParam0)
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

