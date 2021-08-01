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
	bool bLocal_13 = false;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	bool bLocal_18 = false;
	struct<8> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	bLocal_13 = true;
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
			return bLocal_13;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 0, "GENERIC_SCENARIO_SHOULD_RUN - m_iChildScriptHash = ", iLocal_14, " cannot shutdown - thread - ", SCRIPTS::GET_ID_OF_THIS_THREAD());
			return true;
		}
	}
	return bLocal_13;
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
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_16))
	{
		bLocal_13 = false;
	}
	if (bLocal_18)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_3))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Ped does not exist. Terminating script.");
			bLocal_13 = false;
		}
		else if (PED::IS_PED_DEAD_OR_DYING(Local_19.f_3, true))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Ped dead or dying. Terminating script.");
			bLocal_13 = false;
		}
		else if (!PED::_IS_PED_USING_SCENARIO_POINT(Local_19.f_3, iLocal_16))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Ped is no longer using scenario point. Terminating script.");
			bLocal_13 = false;
		}
	}
	if (!bLocal_13)
	{
		return;
	}
	switch (Local_19.f_7)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_3))
			{
				Local_19.f_3 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
				bLocal_18 = true;
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Found a ped using this scenario.");
				Local_19.f_7 = 1;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19.f_3, -1134697563))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: 'ObjectCreated' anim event has fired.");
				if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
				{
					Local_19.f_2 = PED::_0x4D0D2E3D8BC000EB(Local_19.f_3, "s_meatbit_Chunck_small01x_PH_L_HAND", 0);
				}
				Local_19.f_7 = 2;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Found the meat prop.");
				Local_19.f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_19.f_2);
				OBJECT::_SET_OBJECT_BURN_LEVEL(Local_19.f_1, 0f, true);
				Local_19.f_7 = 3;
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Prop does not exist. Terminating script.");
				bLocal_13 = false;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19.f_3, -1334721097))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: 'StartedCooking' anim event has fired.");
				if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
				{
					if (!func_13(&(Local_19.f_4)))
					{
						func_14(&(Local_19.f_4));
					}
					Local_19.f_7 = 4;
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Prop does not exist. Terminating script.");
					bLocal_13 = false;
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
			{
				Local_19 = func_15(&(Local_19.f_4));
				if (Local_19 > 0f && Local_19 <= 10f)
				{
					OBJECT::_SET_OBJECT_BURN_LEVEL(Local_19.f_1, (Local_19 / 10f), true);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 104, "CAMP_FIRE_COOKING: Cooking complete. Terminating script.");
					bLocal_13 = false;
				}
			}
			break;
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
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_17(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_18(&iVar0);
	}
}

bool func_13(var uParam0)
{
	return func_19(*uParam0, 1);
}

void func_14(var uParam0)
{
	func_20(uParam0, 0f);
}

float func_15(var uParam0)
{
	if (!func_13(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_21(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_22() - uParam0->f_1);
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

void func_18(int iParam0)
{
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_20(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_22() - fParam1);
	func_23(uParam0, 1);
	func_24(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_21(var uParam0)
{
	return func_19(*uParam0, 2);
}

float func_22()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_24(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

