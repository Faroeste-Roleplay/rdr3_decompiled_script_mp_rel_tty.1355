#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;

	if (ScriptParam_0 == -1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_SC: Invalid Emote Type Found: ", ScriptParam_0);
		return;
	}
	iVar0 = 0;
	bVar1 = ScriptParam_0.f_1;
	iVar2 = ScriptParam_0.f_2;
	uVar3 = ScriptParam_0;
	iVar4 = -1;
	if (Global_1072032.f_28398.f_25.f_72 == bVar1)
	{
		iVar4 = Global_1072032.f_28398.f_25.f_71;
		Global_1072032.f_28398.f_25.f_71 = -1;
		Global_1072032.f_28398.f_25.f_72 = 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 75, "NET_PLAYER_WHEEL_ITEM_USE_SC: ENUM INVENTORY_ITEM: ", func_1(bVar1, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 75, "NET_PLAYER_WHEEL_ITEM_USE_SC: Wheel Item Type: ", func_2(iVar2, 0));
	iVar5 = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	while (!func_3(&iVar5, &bVar1, &iVar0) && func_4(&iVar0, &iVar2, &bVar1, &uVar3, &iVar4, &(ScriptParam_0.f_3)))
	{
		BUILTIN::WAIT(0);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_SC: Complete");
}

var func_1(bool bParam0, int iParam1)
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

char* func_2(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYER_WHEEL_ITEM_TYPE_ANIMATION";
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

bool func_3(int iParam0, bool bParam1, int iParam2)
{
	if (func_5(0, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_GESTURE_USE__SHOULD_THREAD_TERMINATE(): KILL_EVENT_CAUGHT()");
		DEBUG::_0xF0783374333FD8CE(40, 0, "PLAYER_GESTURE_USE__SHOULD_THREAD_TERMINATE(): iScriptName = ", UNK_0x4379B6FA65D55295(*iParam0));
		DEBUG::_0xF0783374333FD8CE(40, 0, "PLAYER_GESTURE_USE__SHOULD_THREAD_TERMINATE(): Player ID = ", PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
		return true;
	}
	if (*iParam2 == 2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_GESTURE_USE__SHOULD_THREAD_TERMINATE(): PLAYER_GESTURE_ENUM_STATE = NET_PLAYER_GESTURE_ENUM_STATE_COMPLETE");
		DEBUG::_0xF0783374333FD8CE(40, 0, "PLAYER_GESTURE_USE__SHOULD_THREAD_TERMINATE(): Player ID = ", PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
		DEBUG::_0xF0783374333FD8CE(40, 0, "PLAYER_GESTURE_USE__SHOULD_THREAD_TERMINATE(): Gesture Used: ", UNK_0x4379B6FA65D55295(func_6(*bParam1, 0)));
		return true;
	}
	return false;
}

bool func_4(int iParam0, int iParam1, bool bParam2, var uParam3, int iParam4, var uParam5)
{
	DEBUG::_0x1B08D1EB9D8C4931(40, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE__RUN: Cur State: ", func_7(*iParam0, 0));
	switch (*iParam0)
	{
		case 0:
			if (func_8(iParam1, bParam2, uParam3, iParam4, uParam5))
			{
				*iParam0 = 1;
				DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE__RUN: Init Complete");
			}
			else
			{
				*iParam0 = 2;
				DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE__RUN: Init go to shutdown");
			}
			break;
		case 1:
			if (func_9(iParam1, uParam5))
			{
				*iParam0 = 2;
				DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE__RUN: Update Complete");
			}
			break;
		case 2:
			func_10(iParam1, uParam5);
			DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE__RUN: Shutting Down");
			return false;
	}
	return true;
}

bool func_5(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_11(Global_1572887, 0), ", so skipping");
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

bool func_6(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_12(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_13(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_7(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYER_WHEEL_ITEM_USE_ENUM_STATE_INIT";
		case 1:
			return "NET_PLAYER_WHEEL_ITEM_USE_ENUM_STATE_UPDATE";
		case 2:
			return "NET_PLAYER_WHEEL_ITEM_USE_ENUM_STATE_COMPLETE";
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

int func_8(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE_INIT: player is dead");
		return 0;
	}
	switch (*iParam0)
	{
		case 0:
			return func_14(bParam1, uParam2, iParam3, uParam4);
		default:
			break;
	}
	return 0;
}

int func_9(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 0:
			return func_15(uParam1);
		default:
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE_UPDATE: Func End");
	return 1;
}

int func_10(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 0:
			return func_16(uParam1);
		default:
			break;
	}
	return 1;
}

char* func_11(int iParam0, int iParam1)
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

bool func_12(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_13(bool bParam0, bool bParam1)
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

int func_14(bool bParam0, var uParam1, int iParam2, var uParam3)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE__INIT__ANIMATION_USE_EMOTE - IS PLAYER ON A HORSE: ", *uParam3);
	if (*uParam3)
	{
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 75, "NET_PLAYER_WHEEL_ITEM_USE__INIT__ANIMATION_USE_EMOTE - PLAYER IS ABOUT TO USE A GESTURE: ", func_1(*bParam0, 0));
		func_17(*bParam0, uParam1, iParam2);
	}
	return 1;
}

int func_15(var uParam0)
{
	int iVar0;

	if (*uParam0)
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1275959.f_8, 655598529, true);
		DEBUG::_0x1B08D1EB9D8C4931(40, 75, "NET_PLAYER_WHEEL_ITEM_USE__UPDATE__ANIMATION_USE_EMOTE - Emote Task Status: ", func_18(iVar0, 0));
		if (!((iVar0 == 1 || iVar0 == 0) || iVar0 == 6))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE__UPDATE__ANIMATION_USE_EMOTE: About to performing / performing emote task");
			return 1;
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE__UPDATE__ANIMATION_USE_EMOTE: Func End");
	return 0;
}

int func_16(var uParam0)
{
	if (*uParam0)
	{
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 75, "NET_PLAYER_WHEEL_ITEM_USE_CORE_SHUTDOWN(): Is Over");
	}
	return 1;
}

void func_17(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;

	if ((PED::_0x84D0BF2B21862059(Global_1275959.f_8) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Global_1275959.f_8)) || PED::IS_PED_ON_MOUNT(Global_1275959.f_8))
	{
		iVar0 = 0;
		DEBUG::_0x4DC69742196F818A(8, 75, "NET_PLAYER_GESTURES__PLAY_PLAYER_GESTURE: Player ped sitting");
	}
	else
	{
		if (*iParam2 != -1)
		{
			iVar0 = *iParam2;
		}
		else
		{
			iVar0 = 2;
		}
		DEBUG::_0x4DC69742196F818A(8, 75, "NET_PLAYER_GESTURES__PLAY_PLAYER_GESTURE: Player ped not sitting");
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 75, "NET_PLAYER_GESTURES__PLAY_PLAYER_GESTURE: Task Emote Item about to used - type: ", func_19(*uParam1, 0), " playback mode: ", func_20(iVar0, 0), " - wanted emote: ", func_1(bParam0, 0));
	TASK::_TASK_EMOTE_2(Global_1275959.f_8, *uParam1, iVar0, bParam0, false, true, false, false, false);
}

char* func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WAITING_TO_START_TASK";
		case 1:
			return "PERFORMING_TASK";
		case 2:
			return "DORMANT_TASK";
		case 3:
			return "VACANT_STAGE";
		case 4:
			return "GROUP_TASK_STAGE";
		case 5:
			return "ATTRACTOR_SCRIPT_TASK_STAGE";
		case 6:
			return "SECONDARY_TASK_STAGE";
		case 7:
			return "TASK_NOT_FOUND";
		case 8:
			return "FINISHED_TASK";
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

char* func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "EMOTE_TYPE_INVALID";
		case 0:
			return "EMOTE_TYPE_REACT";
		case 1:
			return "EMOTE_TYPE_ACTION";
		case 2:
			return "EMOTE_TYPE_TAUNT";
		case 3:
			return "EMOTE_TYPE_GREET";
		case 4:
			return "EMOTE_TYPE_TWIRL_GUN";
		case 5:
			return "EMOTE_TYPE_DANCE_FLOOR";
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

char* func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "EMOTE_PM_INVALID";
		case 0:
			return "EMOTE_PM_UPPERBODY";
		case 1:
			return "EMOTE_PM_UPPERBODY_LOOP";
		case 2:
			return "EMOTE_PM_FULLBODY";
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

