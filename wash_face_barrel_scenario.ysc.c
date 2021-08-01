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
	bool bLocal_20 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	iLocal_13 = 1;
	fLocal_18 = 1f;
	fLocal_19 = 1f;
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
	if (PED::IS_PED_INJURED(Global_33) || func_13() != 0)
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_20 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "Washing player's face/hands now.");
		PED::_0xEB8886E1065654CD(Global_33, 4, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_33, 6, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_33, 1, "ALL", 0.5f);
		PED::_0xA7A806677F8DE138(Global_33);
		bLocal_20 = true;
		iLocal_13 = 0;
		if (func_14(1))
		{
			func_15(-0.3f, 0);
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		iLocal_13 = 0;
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

int func_13()
{
	return Global_1572887.f_13;
}

bool func_14(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

void func_15(bool bParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(168, 157, "[DRUNK] Incrementing drunk potency by ", MISC::_0x2B6846401D68E563(bParam0, 4), ".");
	func_19((Global_1940237.f_9 + bParam0), bParam1);
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

void func_19(bool bParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(168, 157, "[DRUNK] Potency set to ", MISC::_0x2B6846401D68E563(bParam0, 4), ".");
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (bParam0 >= func_20())
		{
			Global_1940237.f_9 = (func_20() - 0.01f);
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

bool func_20()
{
	return 0.75f;
}

