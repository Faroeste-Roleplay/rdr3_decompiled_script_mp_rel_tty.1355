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
	struct<2> Local_13 = { 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 195, "Saloon_conversations force cleaned up");
		func_1();
	}
	Local_13 = vScriptParam_0.x;
	Local_13.f_1 = vScriptParam_0.y;
	DEBUG::_0xF0783374333FD8CE(680, 195, "Saloon conversations launched. Saloon = ", func_2(Local_13, 0), ". Saloon Type = ", func_3(Local_13.f_1, 0));
	if (func_4(Local_13.f_1) && func_5(Local_13))
	{
		while (!func_6(1) && !func_7(32768))
		{
			if (func_8(vScriptParam_0.f_2))
			{
			}
			else
			{
				BUILTIN::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	DEBUG::_0xF0783374333FD8CE(168, 195, "SALOON_CONVO_CLEANUP_SCRIPT: **** Saloon ", func_9(Local_13), " is terminating");
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_2(int iParam0, int iParam1)
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

char* func_3(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "SALOON_TYPE_INVALID";
		case 0:
			return "SALOON_TYPE_GENERAL";
		case 1:
			return "SALOON_TYPE_SLUM";
		case 2:
			return "SALOON_TYPE_FANCY";
		case 3:
			return "NUM_SALOON_TYPES";
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

int func_4(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return 1;
}

int func_5(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	return 1;
}

bool func_6(bool bParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT__SP - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
				return true;
			case 1:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT__SP - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
				return true;
			case 2:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT__SP - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
				if (!bParam0)
				{
					return true;
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT__SP - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE - but bIgnoreSessionMerge = TRUE, so skipping");
				}
				break;
			case 4:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT__SP - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
				return true;
			case 3:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT__SP - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
				return true;
			default:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT__SP - THREAD_EXIT_REQUESTED = UNKNOWN");
				return true;
		}
	}
	return false;
}

bool func_7(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_8(vector3 vParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!Global_1940170.f_5[Local_13.f_1 /*11*/])
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam0, true) > 20f)
			{
				DEBUG::_0xF0783374333FD8CE(8, 195, "SALOON_SHOULD_CLEANUP: Returning TRUE. Player is not in saloon and far from interior");
				return true;
			}
		}
		if (func_10(Global_1940410, 4194304))
		{
			DEBUG::_0xF0783374333FD8CE(8, 195, "SALOON_SHOULD_CLEANUP: Returning TRUE. PF_IN_MISSION_COMBAT is TRUE");
			return true;
		}
	}
	return false;
}

char* func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Blackwater - General Saloon";
		case 2:
			return "Saint Denis - La Bastille";
		case 1:
			return "Saint Denis - Slums Bar";
		case 3:
			return "Rhodes - Parlor House";
		case 4:
			return "Tumbleweed - General Saloon";
		case 7:
			return "Armadillo - General Saloon";
		case 5:
			return "Valentine - Smithfields";
		case 6:
			return "Valentine - Keanes";
		case 8:
			return "Van Horn - General Saloon";
		default:
			break;
	}
	return "INVALID SALOON";
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

