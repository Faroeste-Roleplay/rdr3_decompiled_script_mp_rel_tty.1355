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
	char* sLocal_20 = NULL;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<126> Var0;
	int iVar127;
	int iVar128;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection - HAS_FORCE_CLEANUP_OCCURRED");
	}
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_102 = TASK::_0x804425C4BBD00883(Global_33);
	if (!func_2(Var0.f_102, 0))
	{
		Global_1913653 = 0;
	}
	else
	{
		Global_1913653 = Var0.f_102;
	}
	DEBUG::_0xF0783374333FD8CE(40, 157, "generic_document_inspection - launched with ", func_3(Global_1913653, 0));
	Var0.f_105 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Var0.f_102);
	DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection: docData.iNumTotalLabelTypes - ", Var0.f_105);
	iVar127 = 0;
	while (iVar127 < Var0.f_105)
	{
		Var0.f_5.f_2[iVar127 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(Var0.f_102, iVar127);
		Var0.f_5.f_2[iVar127 /*5*/].f_2 = Var0.f_5.f_2[iVar127 /*5*/];
		Var0.f_5.f_2[iVar127 /*5*/].f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(Var0.f_102, Var0.f_5.f_2[iVar127 /*5*/].f_2);
		DEBUG::_0xF0783374333FD8CE(136, 157, "generic_document_inspection - GOT LABEL TYPE ", iVar127, " = ", Var0.f_5.f_2[iVar127 /*5*/]);
		DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection - iNumValuesForType = ", Var0.f_5.f_2[iVar127 /*5*/].f_1);
		iVar127++;
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_33) && (PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !PED::GET_PED_CONFIG_FLAG(Global_33, 464, true)))
	{
		Var0.f_116 = 1;
	}
	if (func_4(Var0.f_102, -1903335637))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	while (!func_5())
	{
		Var0.f_104 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33);
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Var0.f_108) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Var0.f_108, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Var0.f_108, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_34, ENTITY::GET_ENTITY_ROTATION(Global_33, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_33, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		iVar128 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_33);
		if (iVar128 == -1215562113 || iVar128 == -982676640)
		{
			if (Var0.f_105 > 0)
			{
				if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
					DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection: enabling GENERIC_BOOK_READ_AVAILABLE");
				}
				if (PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_CONTEXT_X")))
				{
					if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("GENERIC")) != 0)
					{
					}
					else
					{
						func_6(&Var0);
						DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection: launching TRANSLATION_OVERLAY_DOCUMENT_HASH");
					}
				}
			}
			else if (PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
				DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection: disabling GENERIC_BOOK_READ_AVAILABLE");
			}
		}
		else
		{
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
				DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection: disabling GENERIC_BOOK_READ_AVAILABLE");
			}
			if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
			{
				UIAPPS::_CLOSE_APP_BY_HASH(joaat("TRANSLATION_OVERLAY"));
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	DEBUG::_0xF0783374333FD8CE(8, 157, "generic_document_inspection - cleaning up");
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(sLocal_20))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sLocal_20);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

var func_3(bool bParam0, int iParam1)
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

bool func_4(bool bParam0, bool bParam1)
{
	if (!func_2(bParam0, 0))
	{
		return func_8(func_7(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_9(bParam1, 0), " for item ", func_3(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

bool func_5()
{
	if (Global_1572887.f_13 == 0 && func_10(0, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "SHOULD_GENERIC_ITEM_WRITING_ON_BACK_SCRIPT_TERMINATE: KILL_EVENT_CAUGHT");
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "SHOULD_GENERIC_ITEM_WRITING_ON_BACK_SCRIPT_TERMINATE: IS_ENTITY_DEAD");
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "SHOULD_GENERIC_ITEM_WRITING_ON_BACK_SCRIPT_TERMINATE: IS_THREAD_EXIT_REQUESTED");
		return true;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "SHOULD_GENERIC_ITEM_WRITING_ON_BACK_SCRIPT_TERMINATE: IS_PED_RUNNING_INSPECTION_TASK");
		return true;
	}
	if (!func_11())
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "SHOULD_GENERIC_ITEM_WRITING_ON_BACK_SCRIPT_TERMINATE: CAN_PLAYER_INSPECT");
		return true;
	}
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(sLocal_20))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sLocal_20);
	}
	func_12(uParam0);
	sLocal_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sLocal_20, "Generic");
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(uParam0->f_102, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			DEBUG::_0xF0783374333FD8CE(8, 157, "GENERIC_ITEM_WRITING_UPDATE_OVERLAY - iLabelHash = ", uParam0->f_5);
			DEBUG::_0xF0783374333FD8CE(40, 157, "GENERIC_ITEM_WRITING_UPDATE_OVERLAY - sOverlayCreateData.iLabelHash string = ", HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_5));
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_13(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_13(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_7(bool bParam0)
{
	return bParam0;
}

int func_8(bool bParam0, bool bParam1)
{
	if (!func_14(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_9(bParam1, 0), " for bundle ", func_15(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_9(bool bParam0, int iParam1)
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

bool func_10(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_16(Global_1572887, 0), ", so skipping");
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

bool func_11()
{
	return func_17(1);
}

void func_12(var uParam0)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 157, "DOCUMENT_INSPECTION_CLEANUP_BINDINGS");
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_64[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[iVar0]);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_76[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_76[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
}

void func_13(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[16];

	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_76[iParam1], "isVisible", bParam3);
}

bool func_14(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

var func_15(bool bParam0, int iParam1)
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

char* func_16(int iParam0, int iParam1)
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

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

bool func_18(int iParam0)
{
	return func_19(Global_1940296.f_38, iParam0);
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

