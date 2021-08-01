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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2(&uLocal_19, &uScriptParam_0);
	while (!func_3(1, 1) && func_4(&uLocal_19))
	{
		BUILTIN::WAIT(0);
	}
	func_5(&uLocal_19);
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = { uParam1->f_2 };
	uParam0->f_6 = BRAIN::_0x6818D1A194E29983();
	DEBUG::_0xF0783374333FD8CE(40, 58, "NET_ENTITY_BRAIN_INIT - ", func_6(uParam0->f_6));
}

bool func_3(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and NETWORK_SESSION_IS_TRANSITIONING = TRUE, so skipping");
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and NETWORK_SESSION_IS_ACTIVE = TRUE, so skipping");
		}
		else if (bParam1 && Global_1572887 < 39)
		{
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_7(Global_1572887, 0), ", so skipping");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE");
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_SIGNED_ONLINE = FALSE");
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
				return true;
			case 1:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
				return true;
			case 2:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
				if (!bParam0)
				{
					return true;
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE - but bIgnoreSessionMerge = TRUE, so skipping");
				}
				break;
			case 4:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
				return true;
			case 3:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
				return true;
			default:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = UNKNOWN");
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			DEBUG::_0xF0783374333FD8CE(8, 32, "KILL_EVENT_CAUGHT - EVENT_NETWORK_NETWORK_BAIL caught.  Bailing from MP.");
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_4(var uParam0)
{
	if (func_8(uParam0))
	{
		return false;
	}
	if (func_9(uParam0))
	{
		func_10(uParam0->f_6);
		return true;
	}
	if (func_11(uParam0))
	{
		func_12(uParam0->f_6);
		return true;
	}
	func_13(uParam0);
	func_14(uParam0);
	if (func_15(*uParam0))
	{
		func_16(uParam0);
	}
	else if (func_17(*uParam0))
	{
		func_18(uParam0);
	}
	return true;
}

void func_5(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 58, "NET_ENTITY_BRAIN_TERMINATE - ", func_6(uParam0->f_6));
	func_19(&(uParam0->f_11), 1, 1);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

var func_6(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "ent: ", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, " type: ", 64);
	StringConCat(&cVar0, func_21(func_20(iParam0)), 64);
	StringConCat(&cVar0, " id: ", 64);
	StringIntConCat(&cVar0, func_22(iParam0), 64);
	return func_23(&cVar0);
}

char* func_7(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_STATE__INIT__STARTUP";
		case 1:
			return "MP_STATE__INIT__RESURRECT_PLAYER";
		case 2:
			return "MP_STATE__INIT__VERIFY_PLAYER_RESURRECTION";
		case 3:
			return "MP_STATE__INIT__KILL_EXISTING_THREADS";
		case 4:
			return "MP_STATE__INIT__WAIT_FOR_THREAD_TERMINATION";
		case 5:
			return "MP_STATE__INIT__KILL_EXISTING_SESSION";
		case 6:
			return "MP_STATE__INIT__WAIT_FOR_SESSION_END";
		case 7:
			return "MP_STATE__INIT__WIPE_ACCOUNT_DATA";
		case 8:
			return "MP_STATE__INIT__REINITIALIZE_GLOBAL_DATA";
		case 9:
			return "MP_STATE__INIT__START_TUNABLES_LOAD";
		case 10:
			return "MP_STATE__INIT__VALIDATE_TUNABLES_LOAD";
		case 11:
			return "MP_STATE__INIT__PREPARE_TRANSITION";
		case 12:
			return "MP_STATE__INIT__VALIDATE_GAMER_HANDLE";
		case 13:
			return "MP_STATE__INIT__GAME_FRAMEWORK_MANAGER_INIT";
		case 14:
			return "MP_STATE__TRANSITION__START";
		case 15:
			return "MP_STATE__TRANSITION__SAVE_DATA__WIPE_ON_LOAD";
		case 16:
			return "MP_STATE__TRANSITION__SAVE_DATA__END";
		case 17:
			return "MP_STATE__TRANSITION__SAVE_DATA__INITIALIZE_INVENTORY";
		case 18:
			return "MP_STATE__TRANSITION__SAVE_DATA__LOAD_INVENTORY";
		case 19:
			return "MP_STATE__TRANSITION__POSSE__SET_UP_POSSE_TRANSITION";
		case 20:
			return "MP_STATE__TRANSITION__UGC__START";
		case 21:
			return "MP_STATE__TRANSITION__UGC__CONFIRM_LOAD";
		case 22:
			return "MP_STATE__TRANSITION__SESSION__START";
		case 23:
			return "MP_STATE__TRANSITION__SESSION__WAIT_FOR_DEBUG_PROGRESSION";
		case 24:
			return "MP_STATE__TRANSITION__SESSION__PREPARE_FOR_SESSION_TRANSITION";
		case 25:
			return "MP_STATE__TRANSITION__SESSION__TERMINATE_EXISTING_SESSION";
		case 26:
			return "MP_STATE__TRANSITION__SESSION__REQUEST_SESSION";
		case 27:
			return "MP_STATE__TRANSITION__SESSION__CONFIRM_SESSION_REQUEST";
		case 28:
			return "MP_STATE__TRANSITION__THREAD__START";
		case 29:
			return "MP_STATE__TRANSITION__THREAD__LOAD_DEBUG_UPDATE";
		case 30:
			return "MP_STATE__TRANSITION__THREAD__LOAD_NET_MAIN_OFFLINE";
		case 31:
			return "MP_STATE__TRANSITION__THREAD__WAIT_FOR_NET_MAIN_OFFLINE";
		case 32:
			return "MP_STATE__TRANSITION__THREAD__LOAD_AUTO_START_THREAD";
		case 33:
			return "MP_STATE__TRANSITION__THREAD__LOAD_SP_MAIN_THREADS";
		case 34:
			return "MP_STATE__TRANSITION__THREAD__LOAD_MISSION_CREATOR";
		case 35:
			return "MP_STATE__TRANSITION__END";
		case 36:
			return "MP_STATE__BAIL__START";
		case 37:
			return "MP_STATE__BAIL__CONFIRM_BAIL_TO_FRONTEND";
		case 38:
			return "MP_STATE__BAIL__END";
		case 39:
			return "MP_STATE__MAIN__UPDATE";
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

bool func_8(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_TERMINATE - DOES_ENTITY_EXIST - ", func_6(uParam0->f_6));
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_24(uParam0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_DELETE - NET_ENTITY_BRAIN_BIT_IS_EXPIRED - ", func_6(uParam0->f_6));
		return true;
	}
	else if (func_25() != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_DELETE - !GAME_MODE_MP - ", func_6(uParam0->f_6));
		return true;
	}
	else if (Global_1048576 || Global_2883584)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_DELETE - g_bMissionCreatorActive - ", func_6(uParam0->f_6));
		return true;
	}
	else if (Global_1048577)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_DELETE - g_bMissionControllerActive - ", func_6(uParam0->f_6));
		return true;
	}
	else if (func_27(func_26(0)) == 7)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_DELETE - UNLOCK_GROUP__MISSION_UGC - ", func_6(uParam0->f_6));
		return true;
	}
	return false;
}

int func_10(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_DELETE - ", func_6(iParam0));
		ENTITY::DELETE_ENTITY(&iParam0);
		return 1;
	}
	return 0;
}

bool func_11(var uParam0)
{
	if (func_15(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_RELEASE - Dead - ", func_6(uParam0->f_6));
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false, false))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_RELEASE - Undriveable - ", func_6(uParam0->f_6));
			return true;
		}
	}
	else if (func_17(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_SHOULD_RELEASE - Dead - ", func_6(uParam0->f_6));
			return true;
		}
	}
	return false;
}

int func_12(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 58, "NET_ENTITY_BRAIN_RELEASE - ", func_6(iParam0));
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iParam0);
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == -507840394)
		{
			Var1 = { Var5 };
			SCRIPTS::GET_EVENT_DATA(1, iVar0, &Var1, 4);
			if (Var1 == 18)
			{
				func_28(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_14(var uParam0)
{
	int iVar0;

	if (!func_29(&(uParam0->f_8)))
	{
		func_30(&(uParam0->f_8));
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_6))
	{
		if (func_31(&(uParam0->f_8)) > 7000)
		{
			if (!func_32(uParam0))
			{
				func_33(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			else
			{
				iVar0 = func_34(uParam0->f_6);
				if (uParam0->f_5 != iVar0)
				{
					uParam0->f_5 = iVar0;
				}
				else
				{
					func_35(uParam0, 1);
				}
			}
			func_36(&(uParam0->f_8));
		}
	}
	else if (func_31(&(uParam0->f_8)) > 3000)
	{
		if (!func_32(uParam0))
		{
			func_37(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
		func_36(&(uParam0->f_8));
	}
}

bool func_15(int iParam0)
{
	return (iParam0 >= 1 && iParam0 <= 1);
}

void func_16(var uParam0)
{
	func_38(uParam0);
	func_39(uParam0);
}

bool func_17(int iParam0)
{
	return (iParam0 >= 2 && iParam0 <= 2);
}

void func_18(var uParam0)
{
	func_40(uParam0);
	func_41(uParam0);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_42(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_43(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_44(iVar0);
	*uParam0 = 0;
}

int func_20(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_45()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_45());
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Invalid";
		case 1:
			return "Coach_Rustling";
		case 2:
			return "Mount_Rustling";
		default:
			break;
	}
	return "undefined";
}

int func_22(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_46()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_46());
}

char[] func_23(char[4] cParam0)
{
	return cParam0;
}

bool func_24(var uParam0, int iParam1)
{
	return func_47(uParam0->f_4, iParam1);
}

int func_25()
{
	return Global_1572887.f_13;
}

struct<2> func_26(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_27(var uParam0, var uParam1)
{
	return uParam0;
}

void func_28(var uParam0, int iParam1)
{
	struct<11> Var0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam1, &Var0, 12))
	{
		if (Var0.f_5 == *uParam0 && Var0.f_6 == uParam0->f_1)
		{
			switch (Var0.f_4)
			{
				case 0:
					func_48(uParam0->f_6, Var0.f_9);
					break;
				case 1:
					func_49(uParam0->f_6, Var0.f_9);
					break;
				case 2:
					func_33(uParam0->f_6, Var0.f_10);
					break;
				case 3:
					func_50(uParam0->f_6, Var0.f_10);
					break;
				case 4:
					func_51(uParam0->f_6, Var0.f_8);
					break;
				case 5:
					func_10(uParam0->f_6);
					break;
				case 6:
					func_12(uParam0->f_6);
					break;
			}
		}
	}
}

bool func_29(var uParam0)
{
	return func_52(*uParam0, 1);
}

void func_30(var uParam0)
{
	func_53(uParam0, 0);
}

int func_31(var uParam0)
{
	if (!func_29(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to get value of NET_TIMER that has not been started! Starting it");
		UNK_0x355E72323AEE83CC(0, 1);
		return 0;
	}
	if (func_54(uParam0))
	{
		return uParam0->f_2;
	}
	return func_55(uParam0->f_1);
}

bool func_32(var uParam0)
{
	if (func_24(uParam0, 2) || func_24(uParam0, 4))
	{
		return false;
	}
	if (BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_56(*uParam0))
	{
		return false;
	}
	if (func_57(uParam0->f_2) && (func_58(uParam0->f_2) || func_59(uParam0->f_2)))
	{
		return false;
	}
	return true;
}

bool func_33(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_34(iParam0) != iParam1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 58, "NET_ENTITY_BRAIN_SET_TIME_STAMP - ", func_6(iParam0), " - ", iParam1);
			DECORATOR::DECOR_SET_INT(iParam0, func_60(), iParam1);
		}
		return true;
	}
	return false;
}

int func_34(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_60()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_60());
}

void func_35(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 58, "NET_ENTITY_BRAIN_SET_BIT - ", func_6(uParam0->f_6), " - ", func_61(iParam1, 0));
	func_62(&(uParam0->f_4), iParam1);
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_37(int iParam0, int iParam1)
{
	struct<11> Var0;

	if (!func_33(iParam0, iParam1))
	{
		Var0.f_4 = 2;
		Var0.f_5 = func_20(iParam0);
		Var0.f_6 = func_22(iParam0);
		Var0.f_10 = iParam1;
		func_64(&Var0, func_63(0, 8));
	}
}

void func_38(var uParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6);
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(Global_33, false) == iVar0)
		{
			if (!func_24(uParam0, 4))
			{
				func_35(uParam0, 4);
			}
			if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_33)
			{
				if (!func_24(uParam0, 8))
				{
					func_35(uParam0, 8);
				}
			}
			else if (func_24(uParam0, 8))
			{
				func_65(uParam0, 8);
			}
		}
		else
		{
			if (func_24(uParam0, 4))
			{
				func_65(uParam0, 4);
			}
			if (func_24(uParam0, 8))
			{
				func_65(uParam0, 8);
			}
		}
	}
	else
	{
		if (func_24(uParam0, 4))
		{
			func_65(uParam0, 4);
		}
		if (func_24(uParam0, 8))
		{
			func_65(uParam0, 8);
		}
	}
}

void func_39(var uParam0)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_66(uParam0))
		{
			uParam0->f_7 = MAP::_BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("BLIP_AMBIENT_WAGON"), true);
		}
	}
	else if (!func_66(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
}

void func_40(var uParam0)
{
	if (PED::_GET_RIDER_OF_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false) == Global_33)
	{
		if (!func_24(uParam0, 4))
		{
			func_67(uParam0);
		}
	}
	else if (func_24(uParam0, 4))
	{
		func_68(uParam0);
	}
}

void func_41(var uParam0)
{
	if (func_24(uParam0, 4) && !func_24(uParam0, 32))
	{
		func_35(uParam0, 32);
	}
	else if (!func_24(uParam0, 4))
	{
		func_65(uParam0, 32);
	}
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_69(uParam0))
		{
			uParam0->f_7 = MAP::_BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("BLIP_AMBIENT_HORSE"), true);
		}
	}
	else if (!func_69(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
}

bool func_42(int iParam0)
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

var func_43(var uParam0)
{
	return uParam0;
}

void func_44(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_70(iParam0))
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

char* func_45()
{
	return "brain_type";
}

char* func_46()
{
	return "brain_id";
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_48(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_71(iParam0) != bParam1)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 58, "NET_ENTITY_BRAIN_SET_HIDDEN - ", func_6(iParam0), " - ", bParam1);
			DECORATOR::DECOR_SET_BOOL(iParam0, func_72(), bParam1);
		}
		return 1;
	}
	return 0;
}

int func_49(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_73(iParam0) != bParam1)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 58, "NET_ENTITY_BRAIN_SET_DISABLED - ", func_6(iParam0), " - ", bParam1);
			DECORATOR::DECOR_SET_BOOL(iParam0, func_74(), bParam1);
			if (TASK::_0x0CCFE72B43C9CF96(iParam0))
			{
				ENTITY::_0x18FF3110CF47115D(iParam0, 2, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 3, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 11, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 12, !bParam1);
			}
		}
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_75(iParam0) != iParam1)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 58, "NET_ENTITY_BRAIN_SET_VALUE - ", func_6(iParam0), " - ", iParam1);
			DECORATOR::DECOR_SET_INT(iParam0, func_76(), iParam1);
		}
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_77(iParam0) != iParam1)
		{
			if (iParam1 == 255)
			{
				DEBUG::_0xA308F935BDECCEC0(168, 58, "NET_ENTITY_BRAIN_SET_PLAYER - ", func_6(iParam0), " - INVALID_PLAYER_ID");
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(680, 58, "NET_ENTITY_BRAIN_SET_PLAYER - ", func_6(iParam0), " - ", PLAYER::GET_PLAYER_NAME(iParam1));
			}
			DECORATOR::_DECOR_SET_UINT8(iParam0, func_78(), iParam1);
		}
		return 1;
	}
	return 0;
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_53(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_79(uParam0, 1);
	func_80(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_54(var uParam0)
{
	return func_52(*uParam0, 2);
}

int func_55(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

float func_56(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_81();
	}
	else if (func_17(iParam0))
	{
		return func_82();
	}
	return 0f;
}

bool func_57(struct<2> Param0)
{
	if (!func_83(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_84(Param0))
	{
		return false;
	}
	return true;
}

bool func_58(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_85(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_59(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_85(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

char* func_60()
{
	return "brain_timeStamp";
}

char* func_61(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_ENTITY_BRAIN_BIT_IS_EXPIRED";
		case 2:
			return "NET_ENTITY_BRAIN_BIT_IS_CARRYING";
		case 4:
			return "NET_ENTITY_BRAIN_BIT_IS_RIDING";
		case 8:
			return "NET_ENTITY_BRAIN_BIT_IS_DRIVING";
		case 16:
			return "NET_ENTITY_BRAIN_BIT_IS_DELIVERING";
		case 32:
			return "NET_ENTITY_BRAIN_BIT_HELP_TEXT_SHOWN";
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

void func_62(var uParam0, int iParam1)
{
	func_86(uParam0, iParam1);
}

var func_63(int iParam0, int iParam1)
{
	return func_87(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_64(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 18;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 10, &uParam1);
}

void func_65(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 58, "NET_ENTITY_BRAIN_CLEAR_BIT - ", func_6(uParam0->f_6), " - ", func_61(iParam1, 0));
	func_88(&(uParam0->f_4), iParam1);
}

bool func_66(var uParam0)
{
	if (*uParam0 == 1)
	{
		return ((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_71(uParam0->f_6)) && !func_24(uParam0, 4)) && BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_81()) && func_59(uParam0->f_2));
	}
	return false;
}

void func_67(var uParam0)
{
	func_35(uParam0, 4);
}

void func_68(var uParam0)
{
	func_65(uParam0, 4);
}

bool func_69(var uParam0)
{
	return ((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_71(uParam0->f_6)) && !func_24(uParam0, 4)) && BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_82()) && func_59(uParam0->f_2));
}

bool func_70(int iParam0)
{
	return func_89(iParam0, 2);
}

bool func_71(int iParam0)
{
	return ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, func_72())) && DECORATOR::DECOR_GET_BOOL(iParam0, func_72()));
}

char* func_72()
{
	return "brain_isHidden";
}

bool func_73(int iParam0)
{
	return ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, func_74())) && DECORATOR::DECOR_GET_BOOL(iParam0, func_74()));
}

char* func_74()
{
	return "brain_isDisabled";
}

int func_75(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_76()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_76());
}

char* func_76()
{
	return "brain_value";
}

int func_77(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_78()))
	{
		return 255;
	}
	return DECORATOR::_DECOR_GET_UINT8(iParam0, func_78());
}

char* func_78()
{
	return "brain_player";
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_81()
{
	return 100f;
}

float func_82()
{
	return 100f;
}

bool func_83(int iParam0)
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

int func_84(int iParam0)
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

int func_85(struct<2> Param0)
{
	int iVar0;

	if (!func_57(Param0))
	{
		return -1;
	}
	iVar0 = func_90(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072032.f_19554.f_1[iVar0 /*3*/].f_2;
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_87(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_91() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_92());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_92());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_92());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_93(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_94(iVar2))
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
				if (iVar9 & 8192 != 0 && func_95(iVar2) != 1)
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
					if (!func_96(iVar10))
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

void func_88(var uParam0, int iParam1)
{
	func_97(uParam0, iParam1);
}

bool func_89(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_90(struct<2> Param0)
{
	char* sVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	sVar0 = func_98(Param0);
	if (Global_1072032.f_19554 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - Trying to find ", sVar0, " but ths list is empty.");
		return -1;
	}
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	if (!func_99(Param0, &vVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - ", sVar0, " is invalid.");
		return -1;
	}
	iVar7 = 0;
	iVar8 = (Global_1072032.f_19554 - 1);
	iVar10 = 0;
	while (iVar7 <= iVar8)
	{
		iVar9 = (iVar7 + ((iVar8 - iVar7) / 2));
		func_99(Global_1072032.f_19554.f_1[iVar9 /*3*/], &vVar4);
		if (vVar4.x > vVar1.x)
		{
			iVar8 = (iVar9 - 1);
		}
		else if (vVar4.x < vVar1.x)
		{
			iVar7 = iVar9 + 1;
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(2696, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to find ", sVar0, " at index ", iVar9);
			return iVar9;
		}
		iVar10++;
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to NOT find ", sVar0);
	return -1;
}

int func_91()
{
	return Global_1051590.f_12;
}

char* func_92()
{
	return "unnamed";
}

int func_93(int iParam0)
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

bool func_94(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_100(36, iParam0);
}

int func_95(int iParam0)
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

bool func_96(char* sParam0)
{
	if (func_101(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_102(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

void func_97(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_98(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_103(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_57(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_104(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

bool func_99(struct<2> Param0, int iParam2)
{
	if (!func_57(Param0))
	{
		return false;
	}
	func_105(iParam2);
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

bool func_100(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_106(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_107())
	{
		return func_106(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_106(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_101(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_102(char* sParam0)
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
		func_108(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_109(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

char* func_103(int iParam0)
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

int func_104(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_99(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_105(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_106(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_107()
{
	return Global_1102630.f_3672;
}

void func_108(char* sParam0)
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
	func_109(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_109(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

