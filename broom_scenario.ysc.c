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
	struct<13> Local_19[5];
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	bool bLocal_92 = false;
	var uLocal_93[1] = { 0 };
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	iLocal_13 = 1;
	iLocal_87 = 5;
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
	int iVar1;

	switch (iLocal_18)
	{
		case 0:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_16))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_INIT - Broom script is shutting down due to an invalid scenario being passed in.");
				iLocal_18 = 7;
				return;
			}
			iLocal_85 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
			if (!func_13(iLocal_85, 0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_INIT - Broom script is shutting down due to the scenario user being dead.");
				iLocal_18 = 7;
				return;
			}
			bLocal_92 = PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x32A1E3B83D501096(iLocal_85));
			if (!bLocal_92)
			{
				TASK::_0xE7BBC4E56B989449(iLocal_16, &uLocal_93, 1);
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_93[0]))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_INIT - Broom script is shutting down due to not having a chained put down scenario.");
					iLocal_18 = 7;
					return;
				}
			}
			iVar0 = BUILTIN::FLOOR(TASK::_0x6718F40313A2B5A6(iLocal_16));
			DEBUG::_0xA308F935BDECCEC0(136, 104, "BS_INIT = Playlist at index - ", iVar0, " - selected.");
			if (!func_14(iVar0, bLocal_17))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_INIT - Broom script is shutting down due to not finding a valid playlist.");
				iLocal_18 = 7;
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_INIT - State change - BS_CREATE_SCENARIO_GRID");
			iLocal_18 = 1;
			break;
		case 1:
			if (!func_13(Global_33, 0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PRESTREAM - Broom script is shutting down, player is dead.");
				iLocal_18 = 7;
				return;
			}
			if (!func_13(iLocal_85, 0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PRESTREAM - Broom script is shutting down, scenario user is dead.");
				iLocal_18 = 7;
				return;
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, iLocal_16))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PRESTREAM - Broom script is shutting down, scenario user is dead.");
				iLocal_18 = 7;
				return;
			}
			if (func_15(Global_33, iLocal_85, 1) > 1225f)
			{
				return;
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PRESTREAM - Player is within range of scenario user.");
				if (ENTITY::GET_ENTITY_SPEED(Global_33) < 9.5f)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PRESTREAM - Player is not galloping through town, moving to BS_CREATE_SCENARIO_GRID.");
					iLocal_18 = 2;
					return;
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PRESTREAM - Player is galloping through town, moving to BS_CLEANUP.");
					iLocal_18 = 7;
					return;
				}
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Local_19[iVar1 /*13*/].f_1 == 0)
				{
					iLocal_87 = iVar1;
				}
				else
				{
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[iVar1 /*13*/]))
					{
						if (iVar1 > 0)
						{
							Local_19[iVar1 /*13*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(Local_19[(iVar1 - 1) /*13*/], true), TASK::_GET_SCENARIO_POINT_HEADING(Local_19[(iVar1 - 1) /*13*/], true), Local_19[iVar1 /*13*/].f_4) };
							Local_19[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(Local_19[(iVar1 - 1) /*13*/], true) + Local_19[iVar1 /*13*/].f_10);
						}
						else
						{
							Local_19[iVar1 /*13*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), Local_19[iVar1 /*13*/].f_4) };
							Local_19[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true) + Local_19[iVar1 /*13*/].f_10);
						}
						Local_19[iVar1 /*13*/] = TASK::CREATE_SCENARIO_POINT(Local_19[iVar1 /*13*/].f_1, Local_19[iVar1 /*13*/].f_7, Local_19[iVar1 /*13*/].f_11, 0, 0, 0);
						TASK::_0xE69FDA40AAC3EFC0(Local_19[iVar1 /*13*/], 0);
						TASK::_0xA7479FB665361EDB(Local_19[iVar1 /*13*/], 0);
					}
					iVar1++;
				}
			}
			DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_CREATE_SCENARIO_GRID - State change - BS_IDLE");
			iLocal_18 = 3;
			break;
		case 3:
			if (func_16())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_IDLE - Broom script is shutting down due to termination function.");
				iLocal_18 = 7;
				return;
			}
			if (!func_17(&uLocal_88))
			{
				func_18(&uLocal_88, 0);
			}
			if (func_19(&uLocal_88, fLocal_91) && TASK::_0x02EBBB3989B7E695(iLocal_85))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_IDLE - State change - BS_TRANSITION");
				iLocal_18 = 4;
			}
			break;
		case 4:
			if (func_16())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_TRANSITION - Broom script is shutting down due to termination function.");
				iLocal_18 = 7;
				return;
			}
			if (TASK::_0x79197F7D2BB5E73A(iLocal_85, Local_19[iLocal_86 /*13*/], Local_19[iLocal_86 /*13*/].f_2, Local_19[iLocal_86 /*13*/].f_3, 0, 0))
			{
				if (PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, Local_19[iLocal_86 /*13*/]))
				{
					fLocal_91 = Local_19[iLocal_86 /*13*/].f_12;
					iLocal_86++;
					func_20(&uLocal_88);
					if (iLocal_86 < iLocal_87)
					{
						DEBUG::_0xA308F935BDECCEC0(392, 104, "BS_TRANSITION - Moving to BS_IDLE, next scenario index is: ", iLocal_86, ", Use time for this point is: ", fLocal_91);
						iLocal_18 = 3;
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_TRANSITION - Moving to BS_WAIT_TO_PUT_DOWN");
						iLocal_18 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_16())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_IDLE - Broom script is shutting down due to termination function.");
				iLocal_18 = 7;
				return;
			}
			if (!func_17(&uLocal_88))
			{
				func_18(&uLocal_88, 0);
			}
			if (func_19(&uLocal_88, fLocal_91) && TASK::_0x02EBBB3989B7E695(iLocal_85))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_WAIT_TO_PUT_DOWN - State change - BS_PROP_PUT_DOWN");
				iLocal_18 = 6;
			}
			break;
		case 6:
			if (func_16())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PROP_PUT_DOWN - Broom script is shutting down due to termination function.");
				iLocal_18 = 7;
				return;
			}
			if (!bLocal_92)
			{
				if (!func_21(iLocal_85, -76381094))
				{
					TASK::CLEAR_PED_TASKS(iLocal_85, true, false);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_85, uLocal_93[0], 0, 0, true, false, 0, false, -1f, false);
					PED::SET_PED_KEEP_TASK(iLocal_85, true);
				}
				if (PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, uLocal_93[0]))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PROP_PUT_DOWN - Moving to BS_CLEANUP");
					iLocal_18 = 7;
				}
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_PROP_PUT_DOWN - Moving to BS_CLEANUP");
				iLocal_18 = 7;
			}
			break;
		case 7:
			DEBUG::_0xA308F935BDECCEC0(8, 104, "BS_CLEANUP - Shutting down script thread");
			iLocal_13 = 0;
			return;
	}
}

void func_8()
{
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
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_23(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_24(&iVar0);
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
	if (func_25(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_25(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_25(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_25(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_25(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_25(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_25(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_25(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_14(int iParam0, bool bParam1)
{
	switch (bParam1)
	{
		case joaat("SC_WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_26(&(Local_19[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10f);
						func_26(&(Local_19[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10f);
						func_26(&(Local_19[2 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10f);
					}
					else
					{
						func_26(&(Local_19[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10f);
						func_26(&(Local_19[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10f);
						func_26(&(Local_19[2 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10f);
					}
					return true;
				case 1:
					fLocal_91 = 10f;
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_26(&(Local_19[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 1, 10f);
						func_26(&(Local_19[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 1, 10f);
					}
					else
					{
						func_26(&(Local_19[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 0, 10f);
						func_26(&(Local_19[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 0, 10f);
					}
					return true;
			}
			break;
		case joaat("SC_WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					func_26(&(Local_19[0 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					func_26(&(Local_19[1 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					func_26(&(Local_19[2 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					func_26(&(Local_19[3 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					return true;
				case 1:
					fLocal_91 = 10f;
					func_26(&(Local_19[0 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10f);
					func_26(&(Local_19[1 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10f);
					func_26(&(Local_19[2 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10f);
					return true;
			}
			break;
	}
	return false;
}

float func_15(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES_SQUARED - entity1 does not exist");
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES_SQUARED - entity2 does not exist");
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_27(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_16()
{
	if (!func_13(Global_33, 0))
	{
		return true;
	}
	if (!func_13(iLocal_85, 0))
	{
		return true;
	}
	if (iLocal_86 <= 0)
	{
		if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, iLocal_16) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, Local_19[iLocal_86 /*13*/]))
		{
			return true;
		}
	}
	else if (iLocal_86 >= iLocal_87)
	{
		if (!bLocal_92)
		{
			if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, Local_19[(iLocal_86 - 1) /*13*/]) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, uLocal_93[0]))
			{
				return true;
			}
		}
	}
	else if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, Local_19[(iLocal_86 - 1) /*13*/]) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_85, Local_19[iLocal_86 /*13*/]))
	{
		return true;
	}
	return false;
}

bool func_17(var uParam0)
{
	return func_28(*uParam0, 1);
}

void func_18(var uParam0, bool bParam1)
{
	if (bParam1 || !func_17(uParam0))
	{
		func_29(uParam0);
	}
}

bool func_19(var uParam0, float fParam1)
{
	if (!func_17(uParam0))
	{
		return false;
	}
	if (func_30(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_20(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_21(int iParam0, int iParam1)
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

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

void func_24(int iParam0)
{
}

bool func_25(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_26(var uParam0, int iParam1, int iParam2, float fParam3)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_31(iParam1, iParam2);
	uParam0->f_3 = func_32(iParam1, iParam2);
	uParam0->f_4 = { func_33(iParam1, iParam2) };
	uParam0->f_10 = func_34(iParam1, iParam2);
	uParam0->f_12 = fParam3;
}

float func_27(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_29(var uParam0)
{
	func_35(uParam0, 0f);
}

float func_30(var uParam0)
{
	if (!func_17(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_36(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_37() - uParam0->f_1);
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			if (PED::IS_PED_MALE(iLocal_85))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
					default:
						break;
				}
			}
			break;
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
				case 1:
					return "BASE_TRANS_RTURN_90";
				case 4:
					return "BASE_TRANS_RIGHT";
				case 2:
					return "BASE_TRANS_BACKRIGHT";
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
				case 5:
					return "BASE_TRANS_LEFT";
				case 6:
					return "BASE_TRANS_BACKLEFT";
				case 7:
					return "BASE_TRANS_FRONTLEFT";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 4:
					return 0.53823f, 0f, 0f;
				case 2:
					return 0.380574f, -0.380598f, 0f;
				case 3:
					return 0.380598f, 0.380574f, 0f;
				case 5:
					return -0.53823f, 0f, 0f;
				case 6:
					return -0.380574f, -0.380598f, 0f;
				case 7:
					return -0.380598f, 0.380574f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return 90f;
				case 1:
					return -90f;
				case 4:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_37() - fParam1);
	func_38(uParam0, 1);
	func_39(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_36(var uParam0)
{
	return func_28(*uParam0, 2);
}

float func_37()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

