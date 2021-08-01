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
	struct<26> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_18))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "PROCESS_SCENARIO: [wanted_poster] The ped is injured. Exiting...");
		iLocal_13 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_18)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_18)))
		{
			if (func_13())
			{
				func_14(0);
			}
		}
		return;
	}
	switch (func_15())
	{
		case 0:
			if (func_16())
			{
				Local_18.f_7 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Local_18);
				if (Local_18.f_7 == -630818830)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER_CHAIN_GANG", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_chain_gang", 32);
					Local_18.f_8.f_2 = 0;
				}
				else if (Local_18.f_7 == -1325774943)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_player", 32);
					Local_18.f_8.f_2 = 0;
				}
				else
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster", 32);
					Local_18.f_8.f_2 = 0;
				}
				Local_18.f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_18, false);
				Local_18.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_18.f_6, &(Local_18.f_1));
				Local_18.f_8.f_1 = Local_18.f_6;
				Local_18.f_8 = Local_18.f_5;
				Local_18.f_8.f_3 = 1;
				Local_18.f_22 = 1024;
				func_17();
			}
			func_18(1);
			break;
		case 1:
			if (func_16())
			{
				SCRIPTS::REQUEST_SCRIPT(&(Local_18.f_18));
				func_14(1);
				func_17();
			}
			func_18(2);
			break;
		case 2:
			if (func_16())
			{
				func_17();
			}
			if (SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_18)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_18, 0))
			{
				Local_18.f_23 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Local_18.f_18), &(Local_18.f_8), 10, Local_18.f_22);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_18.f_18));
				func_18(3);
			}
			break;
		case 3:
			if (func_16())
			{
				func_17();
			}
			if ((!PED::IS_PED_USING_ANY_SCENARIO(Local_18) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_BOUNTY_POSTER_CHAIN_GANG")) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_BOUNTY_POSTER")) == 0)
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "PROCESS_SCENARIO: [register_scenario] No longer using scenario. Exiting...");
				iLocal_13 = 0;
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
		func_19(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_20(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_21(&iVar0);
	}
}

bool func_13()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::_0x038B1F1674F0E242(Global_33))
	{
		return true;
	}
	return false;
}

void func_14(int iParam0)
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

int func_15()
{
	return Local_18.f_25;
}

bool func_16()
{
	return Local_18.f_24;
}

void func_17()
{
	Local_18.f_24 = 0;
}

void func_18(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 0, "SET_POSTER_STATE: moving from ", func_22(func_15()), " to ", func_22(iParam0));
	Local_18.f_25 = iParam0;
	func_23();
}

void func_19(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 0, "PROCESS_EVENT_SCENARIO_ADD_PED: [register_scenario] Processing ped entry to using register_scenario object...");
	Local_18 = iParam0->f_1;
}

void func_20(int iParam0)
{
	if ((Local_18.f_25 >= 3 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_BOUNTY_POSTER_CHAIN_GANG")) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_BOUNTY_POSTER")) == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "PROCESS_EVENT_SCENARIO_REMOVE_PED: [register_scenario] Processing ped removal from using register_scenario object...");
		iLocal_13 = 0;
	}
}

void func_21(int iParam0)
{
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "POSTER_INVALID";
		case 0:
			return "POSTER_INIT";
		case 1:
			return "POSTER_REQUEST_ASSETS";
		case 2:
			return "POSTER_STREAMING";
		case 3:
			return "POSTER_USE_PROCESSING";
	}
	return "POSTER_INVALID";
}

void func_23()
{
	Local_18.f_24 = 1;
}

