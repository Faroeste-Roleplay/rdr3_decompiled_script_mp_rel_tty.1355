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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_35 = 4;
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
	var uLocal_48 = 0;
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
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
#endregion

void __EntryFunction__()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT] - Script Start - ************************ ");
	func_1();
	if (func_2(&iLocal_13) == 1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT] - Error! - Initailize Failed.");
		func_3(&iLocal_13);
	}
	if (func_4(&iLocal_13) == 1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT] - Error! - Asset Load Failed.");
		func_3(&iLocal_13);
	}
	func_5(&iLocal_13);
	func_3(&iLocal_13);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT] - Script Finish - ************************ ");
}

void func_1()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][TELEMETRY] - INTERACTION BEGIN.");
	UNK_0x355E72323AEE83CC(162, 6);
	TELEMETRY::_0xF0D54E0651DD7E07();
}

int func_2(int* iParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT] - Termiante - Force Cleanup Occured... ");
		return 1;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_6(iParam0, -2017342099);
	if (!func_7(iParam0))
	{
		return 1;
	}
	if (!func_8(iParam0))
	{
		return 1;
	}
	func_9(iParam0, -488492526);
	func_10(iParam0);
	return 0;
}

void func_3(int iParam0)
{
	func_11(0, -1343026476);
	func_12();
	func_13(iParam0);
	if (!func_14(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][SCRIPT_TERMINATE] - failed cleanup for shared databindings.");
	}
	if (!func_15(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][SCRIPT_TERMINATE] - Error! - Failed to initailize Page Weapons.");
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT_TERMINATE] - Cleanup - ************************ FINISHED, terminating.");
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT_TERMINATE] - Cleanup - ************************ Thread termiantion already requested.");
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_4(int iParam0)
{
	if (!func_16(joaat("WEAPON_LOCKER")))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][SCRIPT] - Error! - Failed to launch UIAPP: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")));
		return 1;
	}
	return 0;
}

void func_5(int* iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT] - Termiante - Thread exit requested.");
			bVar0 = true;
		}
		if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("WEAPON_LOCKER")))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][SCRIPT] - Termiante - UiApp is no longer active, request script close.");
			bVar0 = true;
		}
		if (!bVar0)
		{
			func_17(iParam0);
			func_9(iParam0, UIAPPS::_0x96FD694FE5BE55DC(joaat("WEAPON_LOCKER")));
			func_18(iParam0);
		}
		BUILTIN::WAIT(0);
	}
}

void func_6(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][PAGE] - New Page: ", func_19(iParam1, 0));
	uParam0->f_1 = iParam1;
}

bool func_7(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][UI_DATABINDINGS_SHARED_INTIALIZE] Initailize databindings.");
	uParam0->f_93 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "weapon_locker");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_93))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_DATABINDINGS_SHARED_INTIALIZE] - Error! dsRoot is not valid.");
		return false;
	}
	uParam0->f_93.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_93, "header_text", MISC::_CREATE_VAR_STRING(2, "WL_HEADER"));
	uParam0->f_93.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_93, "footer_text", "");
	uParam0->f_93.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_93, "footer_color", joaat("COLOR_WHITE"));
	return true;
}

bool func_8(var uParam0)
{
	var uVar0;
	char[] cVar6[8];
	int iVar7;

	if (!func_20(uParam0, &(uParam0->f_93)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][PW_INITIALIZE] - Error! sSharedDatabindings.dsRoot is not valid.");
		return false;
	}
	if (!func_21(&(uParam0->f_2.f_2), &(uParam0->f_2), &uVar0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][PW_INITIALIZE] - Error! Failed to initialize weapon stats.");
		return false;
	}
	if (func_22(&(uParam0->f_2.f_13), &(uParam0->f_2)))
	{
		func_23(&(uParam0->f_2.f_13), &(uParam0->f_2.f_20));
		iVar7 = 0;
		while (iVar7 < 4)
		{
			cVar6 = func_24(iVar7);
			cVar6 = MISC::_CREATE_VAR_STRING(2, cVar6);
			if (!func_25(&(uParam0->f_2.f_13), &(uParam0->f_2.f_20), cVar6))
			{
				DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][PW_INITIALIZE] - ERROR! Failed to add tab at index: ", iVar7);
			}
			iVar7++;
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][PW_INITIALIZE] - ERROR! - failed to initialize tabFilter.");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][PW_INITIALIZE] Success.");
	return true;
}

void func_9(int* iParam0, int iParam1)
{
	if (func_26(iParam0) != iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 162, "[WEAPON_LOCKER][SCRIPT] - CurrentPage: ", func_19(func_26(iParam0), 0), " does not match UiAppPage: ", func_19(iParam1, 0));
		func_6(iParam0, iParam1);
		func_27(iParam0, func_26(iParam0));
		func_28(iParam0, func_26(iParam0));
	}
	func_29(iParam0, func_26(iParam0));
	func_30(iParam0, func_26(iParam0));
}

void func_10(int* iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][PREPARE_PLAYER] Called");
	WEAPON::_0x94A3C1B804D291EC(Global_33, 0, 0, 1, 0);
}

int func_11(bool bParam0, int iParam1)
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
	if (!func_31())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - We still haven't completed the transition.  Bailing.");
		return 0;
	}
	if (!func_32())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - We are still in the intro flow.  Bailing");
		return 0;
	}
	Global_0 = iParam1;
	DEBUG::_0x9A6C65DDDBEC9C52(40, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - request type: ", func_33(Global_0, 0));
	if (bParam0)
	{
		func_34(&Global_0, 8);
	}
	func_34(&Global_0, 1);
	DEBUG::_0x9A6C65DDDBEC9C52(40, 144, "MAKE_MULTIPLAYER_AUTOSAVE_REQUEST - ", UNK_0x8F77B33B6A34D8BA());
	UNK_0x355E72323AEE83CC(144, 6);
	return 1;
}

void func_12()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][TELEMETRY] - INTERACTION END.");
	UNK_0x355E72323AEE83CC(162, 6);
	TELEMETRY::_TELEMETRY_GUN_LOCKER();
}

void func_13(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][UI_FLOW_SHUTDOWN] - UIAPP: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")));
	if (!UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][UI_FLOW_SHUTDOWN] - ERROR! UIAPP: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")), " is not running!");
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("WEAPON_LOCKER"));
	DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][UI_FLOW_SHUTDOWN] - UIAPP: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")), " closing.");
}

bool func_14(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_93))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_DATABINDINGS_SHARED_CLEANUP] - Error! dsRoot does not exist, nothing to clear.");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][UI_DATABINDINGS_SHARED_CLEANUP] - Databinding root removed.");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_93);
	return true;
}

bool func_15(int iParam0)
{
	if (!func_35(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_WL_CLEANUP] - ERROR! failed to cleanup databindings.");
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][_WP_CLEANUP] - Success.");
	return true;
}

bool func_16(int iParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][UI_APP_LAUNCH] - ERROR! Can not launch: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")));
		return false;
	}
	switch (UIAPPS::_LAUNCH_APP_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		case 0:
			DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][SCRIPT] - UIAPP: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")), " launched successfully.");
			return true;
		case 1:
			DEBUG::_0x83407B92D46F25C3(168, 162, "[WEAPON_LOCKER][SCRIPT] - ERROR! UIAPP: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")), " launch blocked!");
			return false;
		case 2:
			DEBUG::_0x83407B92D46F25C3(168, 162, "[WEAPON_LOCKER][SCRIPT] - ERROR! UIAPP: ", UNK_0x4379B6FA65D55295(joaat("WEAPON_LOCKER")), " launch failed!");
			return false;
		default:
			break;
	}
	return false;
}

void func_17(int* iParam0)
{
	struct<4> Var0;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1600976403))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1600976403, &Var0))
		{
			DEBUG::_0xA308F935BDECCEC0(2728, 162, "[WEAPON_LOCKER][UI_EVENT] Received event. EventType: ", func_36(Var0, 0), " Hash: ", UNK_0x4379B6FA65D55295(Var0.f_2), " Int: ", Var0.f_1);
			func_37(iParam0, &Var0);
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(1600976403);
		}
	}
	if (func_38(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][UI_EVENT] Received SCRIPT event");
		Var0 = { func_39(iParam0) };
		func_37(iParam0, &Var0);
		func_40(iParam0);
	}
}

void func_18(int* iParam0)
{
	struct<4> Var0;

	if (func_38(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][UI_EVENT] Received SCRIPT event");
		Var0 = { func_39(iParam0) };
		func_37(iParam0, &Var0);
		func_40(iParam0);
	}
}

char* func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2017342099:
			return "WEAPON_LOCKER_PAGE_TYPE_INVALID";
		case -488492526:
			return "WEAPON_LOCKER_PAGE_TYPE_WEAPONS";
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

bool func_20(var uParam0, var uParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][_PW__DATABINDINGS_INITAILIZE] Initailize databindings.");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW__DATABINDINGS_INITAILIZE] - Error! sSharedDatabindings.dsRoot is not valid.");
		return false;
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW__DATABINDINGS_INITAILIZE] - Error! sPageWeapons.dsRoot is not valid.");
		return false;
	}
	uParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "weapon_list");
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(uParam0->f_2.f_1);
	}
	uParam0->f_2.f_89 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "weapon_list_hint_visible", false);
	uParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2, "weapon_list_hint_label", false);
	return true;
}

bool func_21(var uParam0, var uParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_UI_WEAPON_STATS_INITIALIZE_DATABINDINGS] - ERROR! - invalid _dsRoot.");
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, "weapon_stat_visible", *uParam2);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponPowerNew", uParam2->f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponRangeNew", uParam2->f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponAccuracyNew", uParam2->f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponFireRateNew", uParam2->f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponReloadNew", uParam2->f_5);
	return true;
}

bool func_22(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[UI_TAB_FILTER][INITAILIZE] - ERROR! Unable to initailize, _dsRoot is not valid.");
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", false);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", false);
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	DEBUG::_0xA308F935BDECCEC0(168, 162, "[UI_TAB_FILTER][CLEANUP][", UNK_0x8F77B33B6A34D8BA(), "] ## Initialize OK.");
	return true;
}

void func_23(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_4 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		(uParam1[iVar0 /*17*/])->f_16 = 0;
		StringCopy(uParam1[iVar0 /*17*/], "", 128);
		iVar0++;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 162, "[UI_TAB_FILTER][CLEANUP][", UNK_0x8F77B33B6A34D8BA(), "] ## Clear OK.");
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WL_FILTER_ALL";
		case 1:
			return "WL_FILTER_LOCKER";
		case 2:
			return "WL_FILTER_HORSE";
		case 3:
			return "WL_FILTER_EQUIPPED";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(168, 162, "[WEAPON_LOCKER][_PW_GET_FILTER_LABEL] - ERROR! - was not able to grab a label for eTabFilter ", func_41(iParam0, 0), " Value: ", iParam0);
	return "INVALID_LABEL";
}

bool func_25(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;

	iVar0 = *uParam1;
	if (uParam0->f_4 >= iVar0)
	{
		DEBUG::_0x83407B92D46F25C3(2216, 162, "[UI_TAB_FILTER][ADD_ENTRY_STRUCT][", UNK_0x8F77B33B6A34D8BA(), "] ## Reached tab limit: ", iVar0, " Increase the size of _sTabEntryArray");
		return false;
	}
	if (!uParam0->f_5)
	{
		DEBUG::_0x83407B92D46F25C3(2216, 162, "[UI_TAB_FILTER][ADD_ENTRY_STRUCT][", UNK_0x8F77B33B6A34D8BA(), "] ## Reached tab limit: ", iVar0, " Not bInitailized.");
		return false;
	}
	*(uParam1[uParam0->f_4 /*17*/]) = { func_42(sParam2) };
	(uParam1[uParam0->f_4 /*17*/])->f_16 = 0;
	DEBUG::_0xA308F935BDECCEC0(2216, 162, "[UI_TAB_FILTER][ADD_ENTRY_STRUCT][", UNK_0x8F77B33B6A34D8BA(), "] ## New Tab, Index: ", uParam0->f_4, "/", iVar0);
	DEBUG::_0xA308F935BDECCEC0(680, 162, "[UI_TAB_FILTER][ADD_ENTRY_STRUCT][", UNK_0x8F77B33B6A34D8BA(), "] ## New Tab, tlText: ", uParam1[uParam0->f_4 /*17*/]);
	uParam0->f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return true;
}

int func_26(int* iParam0)
{
	return iParam0->f_1;
}

void func_27(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][PAGE_INITAILIZE] ePage: ", func_19(iParam1, 0));
	switch (iParam1)
	{
		case -488492526:
			func_43(uParam0);
			break;
	}
}

void func_28(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_44(&(uParam0->f_2.f_13));
			break;
	}
}

void func_29(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_45(iParam0);
			break;
	}
}

void func_30(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_46(&(iParam0->f_2.f_13), &(iParam0->f_2.f_20));
			break;
	}
}

bool func_31()
{
	return !Global_1572887.f_9;
}

bool func_32()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

char* func_33(int iParam0, int iParam1)
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

void func_34(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 144, "SET_SAVE_FLAG: setting flag - ", func_47(iParam1, 0));
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_35(int iParam0)
{
	return true;
}

char* func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2075827635:
			return "UISCRIPTEVENTTYPE_NEW_PAGE";
		case -1740156697:
			return "UISCRIPTEVENTTYPE_ITEM_FOCUSED";
		case -1683534847:
			return "UISCRIPTEVENTTYPE_ITEM_HOLD_ACTION_CANCELLED";
		case -1340543710:
			return "UISCRIPTEVENTTYPE_FEED_MESSAGE_INTERACTED";
		case -1203660660:
			return "UISCRIPTEVENTTYPE_ITEM_SELECTED";
		case -1151569080:
			return "UISCRIPTEVENTTYPE_DATA_ADJUSTABLE_CHANGED";
		case -722926211:
			return "UISCRIPTEVENTTYPE_TAB_PAGE_DECREMENT";
		case -632467210:
			return "UISCRIPTEVENTTYPE_ITEM_UNFOCUSED";
		case -493190640:
			return "UISCRIPTEVENTTYPE_ITEM_SELECTED_ACTION_SUCCEEDED";
		case -445432096:
			return "UISCRIPTEVENTTYPE_STICKY_FEED_CLEARED";
		case -120002582:
			return "UISCRIPTEVENTTYPE_PAGED_COLLECTION_INITIALIZED";
		case -114265581:
			return "UISCRIPTEVENTTYPE_PAGED_COLLECTION_RESET";
		case 0:
			return "UISCRIPTEVENTTYPE_INVALID";
		case 368072021:
			return "UISCRIPTEVENTTYPE_PAGED_COLLECTION_REQUEST";
		case 703281244:
			return "UISCRIPTEVENTTYPE_TAB_PAGE_INCREMENT";
		case 922460030:
			return "UISCRIPTEVENTTYPE_NEW_ACTIVITY";
		case 923814653:
			return "UISCRIPTEVENTTYPE_ITEM_HOLD_ACTION_STARTED";
		case 1177283456:
			return "UISCRIPTEVENTTYPE_INDEX_CHANGE_REQUESTED";
		case 1576345536:
			return "UISCRIPTEVENTTYPE_ENTER_TRANSITION_COMPLETED";
		case 1617053448:
			return "UISCRIPTEVENTTYPE_DATA_ADJUSTABLE_CHANGED_ABSOLUTE";
		case 1856962233:
			return "UISCRIPTEVENTTYPE_INDEX_CHANGED";
		case 1933864603:
			return "UISCRIPTEVENTTYPE_VIRTUAL_KEYBOARD_RESULT";
		case 2080441048:
			return "UISCRIPTEVENTTYPE_EXIT_TRANSITION_COMPLETED";
		case 2099701247:
			return "UISCRIPTEVENTTYPE_PINNED_ITEM_VALIDATION";
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

void func_37(int* iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = bParam1->f_2;
	switch (*bParam1)
	{
		case -632467210:
			func_48(iParam0);
			break;
		case -1740156697:
			if (func_49(&(iParam0->f_2.f_13)))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][UI_EVENT] Trying to focus on something, while receiving a tab event same frame..");
			}
			else
			{
				func_50(iParam0, bParam1);
				switch (iVar0)
				{
					case -2060496899:
					case -1694113483:
					case -1174213347:
					case -337881065:
						if (!func_51(iParam0, &(bParam1->f_3)))
						{
							DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT] - failed to store focused.");
						}
						if (!func_52(&(iParam0->f_2.f_2), &(bParam1->f_3)))
						{
							DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT] - failed to update weapon stats widget.");
						}
						break;
				}
				func_53(iParam0, iVar0);
			}
			break;
		case -1203660660:
			switch (iVar0)
			{
				case -1313710397:
					if (func_54(&(bParam1->f_3), 2))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: WEAPON_ATTACH_POINT_PISTOL_R.");
					}
					break;
				case -1756222973:
					if (func_54(&(bParam1->f_3), 3))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: WEAPON_ATTACH_POINT_PISTOL_L.");
					}
					break;
				case -1073027202:
					if (func_56(&(bParam1->f_3)))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: MOVE_TO_LOCKER.");
					}
					break;
				case -1103499950:
					if (weaponMoveHorse(&(bParam1->f_3)))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: MOVE_TO_HORSE.");
					}
					break;
				case -946029012:
					if (func_54(&(bParam1->f_3), 10))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: WEAPON_ATTACH_POINT_RIFLE_ALTERNATE.");
					}
					break;
				case 1554581363:
					if (func_54(&(bParam1->f_3), 9))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: WEAPON_ATTACH_POINT_RIFLE.");
					}
					break;
				case 941907253:
					if (func_54(&(bParam1->f_3), 4))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: WEAPON_ATTACH_POINT_KNIFE.");
					}
					break;
				case -466398939:
					if (func_54(&(bParam1->f_3), 7))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: WEAPON_ATTACH_POINT_BOW.");
					}
					break;
				case -260514364:
					if (func_54(&(bParam1->f_3), 8))
					{
						func_55(iParam0, 0, 1);
					}
					else
					{
						DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE] - ERROR! failed to move weapon: WEAPON_ATTACH_POINT_BOW_ALTERNATE.");
					}
					break;
			}
			break;
		case -722926211:
		case 703281244:
			switch (iVar0)
			{
				case 752670436:
					func_44(&(iParam0->f_2.f_13));
					func_58(iParam0);
					break;
			}
			break;
	}
}

bool func_38(int* iParam0)
{
	return iParam0->f_97 != 0;
}

struct<4> func_39(int* iParam0)
{
	return iParam0->f_97;
}

void func_40(int* iParam0)
{
	var uVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][UI_SCRIPT_EVENT_CLEAR] Cleared current event.");
	iParam0->f_97 = 0;
	iParam0->f_97.f_2 = 0;
	iParam0->f_97.f_1 = 0;
	iParam0->f_97.f_3 = uVar0;
}

char* func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WL_UI_WEAPON_LIST_TAB_FILTER_ALL";
		case 1:
			return "WL_UI_WEAPON_LIST_TAB_FILTER_LOCKER";
		case 2:
			return "WL_UI_WEAPON_LIST_TAB_FILTER_HORSE";
		case 3:
			return "WL_UI_WEAPON_LIST_TAB_FILTER_EQUIPPED";
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

struct<16> func_42(char* sParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

void func_43(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][_PW_PAGE_INITIALIZE] - initialize weapons page.");
}

void func_44(var uParam0)
{
	UNK_0x355E72323AEE83CC(162, 6);
	if (!func_59(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[UI_TAB_FILTER][TAB_SWITCH][", UNK_0x8F77B33B6A34D8BA(), "] ## ERROR! Tab Filter not initailized.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 162, "[UI_TAB_FILTER][TAB_SWITCH][", UNK_0x8F77B33B6A34D8BA(), "] ## Tab Switched.");
	uParam0->f_6 = 1;
}

void func_45(int* iParam0)
{
	int iVar0;

	if (func_49(&(iParam0->f_2.f_13)))
	{
		func_55(iParam0, 0, 1);
	}
	if (func_60(iParam0, 0))
	{
		func_55(iParam0, 0, 0);
		iVar0 = func_61(iParam0);
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][WEAPON_UPDATE] Weapon list update requested. eTabFilterTab: ", func_41(iVar0, 0), " Current iWeaponListSize: ", func_62(iParam0));
		if (!func_63(iParam0, iVar0))
		{
			DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][WEAPON_UPDATE] ERROR! Failed to fill weapon list with tab index: ", func_41(iVar0, 0));
		}
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_UPDATE] iWeaponListSize After Fill: ", func_62(iParam0));
		func_64(iParam0);
		func_65(iParam0, iVar0);
		func_66(iParam0, iVar0);
	}
}

void func_46(var uParam0, var uParam1)
{
	int iVar0;

	if (!func_59(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 162, "[UI_TAB_FILTER][UPDATE][", UNK_0x8F77B33B6A34D8BA(), "] ## ERROR! Trying to update uninitialized filter.");
		uParam0->f_6 = 0;
		return;
	}
	if (!func_49(uParam0))
	{
		return;
	}
	iVar0 = func_67(uParam0);
	if (!func_68(uParam0, iVar0))
	{
		DEBUG::_0x83407B92D46F25C3(2216, 162, "[UI_TAB_FILTER][UPDATE][", UNK_0x8F77B33B6A34D8BA(), "] ## ERROR! iCurrentIndex: ", iVar0, " out of bounds.");
		uParam0->f_6 = 0;
		return;
	}
	func_69(uParam0, uParam1, iVar0);
	uParam0->f_6 = 0;
}

char* func_47(int iParam0, int iParam1)
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

int func_48(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_93.f_2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][FOOTER_CLEAR] - ERROR! - dsFooterRawText is invalid.");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][FOOTER_CLEAR] - Success");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_93.f_2, "");
	UNK_0x355E72323AEE83CC(162, 6);
	return 1;
}

bool func_49(var uParam0)
{
	return uParam0->f_6;
}

int func_50(var uParam0, bool bParam1)
{
	if (*bParam1 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_SET_LAST_FOCUS_MESSAGE] - UISCRIPTEVENTTYPE is invalid.");
		return 0;
	}
	MISC::_COPY_MEMORY(&(uParam0->f_101), bParam1, 4);
	return 1;
}

bool func_51(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][PAGE_WEAPONS_SET_FOCUSED_WEAPON_VIA_WEAPON_WIDGET] - invalid dsEntry.");
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item");
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item_slot");
	Var2 = { getPlayerInventoryItemGuid(bVar0, func_70(0), bVar1, 0) };
	if (!isInventoryItemGuidValid(&Var2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][PAGE_WEAPONS_SET_FOCUSED_WEAPON_VIA_WEAPON_WIDGET] - invalid sWeaponGuid.");
		return false;
	}
	pageWeaponsSetFocusedWeapon(uParam0, Var2);
	return true;
}

bool func_52(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_UI_WIDGET_WEAPON_STATS_FILL_VIA_WEAPON_WIDGET] - ERROR! - invalid _dsWeaponWidget.");
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_damage"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_range"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_accuracy"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_firerate"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_reload"));
	return true;
}

void func_53(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -2060496899:
		case -1694113483:
		case -1174213347:
		case -337881065:
			if (!func_74(iParam0, iParam1))
			{
				DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_PROCESS_FOOTER] ERROR! Failed to set footer for WeaponList...");
				func_48(iParam0);
			}
			break;
		default:
			func_48(iParam0);
			break;
	}
}

bool func_54(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_PLAYER] - ERROR! _dsWeaponEntry is invalid unable to move weapon.");
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!isItemValid(bVar0, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_PLAYER] - ERROR! eWeapon is invalid unable to move weapon.");
		return false;
	}
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	DEBUG::_0xA308F935BDECCEC0(680, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_PLAYER] - Request to move Weapon: ", getItemName(bVar0), " To attach point: ", weaponAttachPointEnumToString(iParam1, 0));
	if (!weaponMoveToPlayer(bVar0, bVar1, iParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_PLAYER] - ERROR! failed to move weapon.");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_PLAYER] - Weapon move ok!");
	return true;
}

void func_55(int* iParam0, int iParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][FLAGS] eFlag: ", func_79(iParam1, 0), " new state: ", bParam2);
	UNK_0x355E72323AEE83CC(162, 6);
	if (bParam2)
	{
		func_80(iParam0, iParam1);
	}
	else
	{
		func_81(iParam0, iParam1);
	}
}

bool func_56(var uParam0)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_LOCKER] - ERROR! _dsWeaponEntry is invalid unable to move weapon.");
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!isItemValid(bVar0, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_LOCKER] - ERROR! eWeapon is invalid unable to move weapon.");
		return false;
	}
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	DEBUG::_0xA308F935BDECCEC0(2728, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_LOCKER] - Request to move Weapon: ", getItemName(bVar0), " Slot: ", func_82(bVar1, 0), " To locker.");
	Var2 = { getPlayerInventoryItemGuid(bVar0, func_70(0), bVar1, 0) };
	if (!isInventoryItemGuidValid(&Var2))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_LOCKER] ERROR! eInventoryItemGUID is not valid.");
		return false;
	}
	if (!func_83(&Var2))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_LOCKER] ERROR! failed to move weapon.");
		return false;
	}
	return true;
}

bool weaponMoveHorse(var uParam0)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_HORSE] - ERROR! _dsWeaponEntry is invalid unable to move weapon.");
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!isItemValid(bVar0, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_HORSE] - ERROR! eWeapon is invalid unable to move weapon.");
		return false;
	}
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	DEBUG::_0xA308F935BDECCEC0(2728, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_HORSE] - Request to move Weapon: ", getItemName(bVar0), " Slot: ", func_82(bVar1, 0), " To horse.");
	Var2 = { getPlayerInventoryItemGuid(bVar0, func_70(0), bVar1, 0) };
	if (!isInventoryItemGuidValid(&Var2))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_HORSE] ERROR! eInventoryItemGUID is not valid.");
		return false;
	}
	if (!moveWeaponHorse(&Var2))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "[WEAPON_LOCKER][UI_EVENT][WEAPON_MOVE_HORSE] ERROR! failed to move weapon.");
		return false;
	}
	return true;
}

void func_58(int* iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][CLEAR_FOCUSED_WEAPON_GUID] - Cleared.");
	func_85(&(iParam0->f_2.f_9));
}

bool func_59(var uParam0)
{
	return uParam0->f_5;
}

bool func_60(int* iParam0, int iParam1)
{
	return func_86(*iParam0, iParam1);
}

int func_61(int* iParam0)
{
	return func_67(&(iParam0->f_2.f_13));
}

int func_62(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_LIST_SIZE] - ERROR! dsWeaponList is not valid.");
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
}

bool func_63(int* iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	struct<10> Var2;
	int iVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;

	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ");
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ################### FILL WEAPON LIST ################### ");
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST] - Fill request via type: ", func_41(iParam1, 0));
	if (!func_87("ALL WEAPONS", &sVar0, &iVar1, -1591664384, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] - ERROR! Failed to grab 'ALL WEAPONS' from local player.");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 162, "[WEAPON_LOCKER][WEAPON_LIST] - Collection: ", sVar0, " Size: ", iVar1);
	Var2.f_9 = -1591664384;
	bVar17 = false;
	iVar19 = 0;
	while (iVar19 < 7)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ");
		DEBUG::_0xA308F935BDECCEC0(10376, 162, "[WEAPON_LOCKER][WEAPON_LIST] FILTER, iSortIndex: ", iVar19, "/Count: ", 7, " Enum: ", func_88(iVar19, 0));
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ");
		bVar18 = false;
		while (bVar18 < iVar1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST]");
			DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST]");
			DEBUG::_0xA308F935BDECCEC0(136, 162, "[WEAPON_LOCKER][WEAPON_LIST] ++++++++++++++++++++++ WEAPON START ++++ COLLECTION_INDEX: ", bVar18, " ++++++++++++++++++++++");
			if (!playerInventoryGetItemDataByCollectionIndex(&Var2, bVar18, sVar0, iVar1))
			{
				DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] - ERROR! Failed to ge the item from Collection: ", sVar0);
			}
			else if (!isWeaponValid(Var2.f_4))
			{
				DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER][WEAPON_LIST] - ERROR! Not a valid weapon at index: ", bVar18, " Name: ", getItemName(Var2.f_4));
			}
			else if (weaponListFilterGetItemCorespondingFilter(Var2.f_4) != iVar19)
			{
				DEBUG::_0xA308F935BDECCEC0(10920, 162, "[WEAPON_LOCKER][WEAPON_LIST] - Item: ", func_92(Var2.f_4, 0), " Filter: ", func_88(weaponListFilterGetItemCorespondingFilter(Var2.f_4), 0), " !=!=!= Has not passed the filter. ", func_88(iVar19, 0));
			}
			else
			{
				iVar16 = getWeaponLocation(&Var2);
				if (iParam1 != 0)
				{
					switch (iVar16)
					{
						case -1:
							DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] - ERROR! was not able to get an attach point at index: ", bVar18);
							Jump @660; //curOff = 427
							Jump @523; //curOff = 430
							if (iParam1 != 3)
							{
								DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST] - Weapon is on player, not required for filter: ", func_41(iParam1, 0));
							}
							else
							{
								Jump @523; //curOff = 460
								if (iParam1 != 2)
								{
									DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST] - Weapon is on horse, not required for filter: ", func_41(iParam1, 0));
								}
								else
								{
									Jump @523; //curOff = 490
									if (iParam1 != 1)
									{
										DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST] - Weapon is in locker, not required for filter: ", func_41(iParam1, 0));
									}
									else
									{
										DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST] Weapon: ", getItemName(Var2.f_4));
										DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] Count in Player inventory: ", INVENTORY::_0xE787F05DFC977BDE(func_94(1), Var2.f_4, false));
										DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST] Inventory Slot: ", func_82(Var2.f_9, 0));
										DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST] Location: ", func_95(iVar16, 0));
										if (!weaponListAddItem(iParam0, bVar17, Var2.f_4, Var2.f_9, iVar16, iParam1))
										{
											DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ERROR! Failed to add item.");
										}
										else
										{
											bVar17++;
											DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ####################################");
										}
									}
								}
							}
							bVar18++;
							iVar19++;
							if (!func_97(iParam0, bVar17))
							{
								DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ERROR! Failed clear list from index: ", bVar17);
							}
							if (!playerInventoryReleaseItemCollection(sVar0))
							{
								DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ERROR! failed to release inventory collection, ID: ", sVar0);
							}
							DEBUG::_0xA308F935BDECCEC0(136, 162, "[WEAPON_LOCKER][WEAPON_LIST] ######### ADDED ITEM COUNT: ", bVar17, " ##########");
							DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ###################");
							DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ");
							return true;
						}
					}
				}
			}
		}

void func_64(int* iParam0)
{
	int iVar0;

	iVar0 = func_62(iParam0);
	func_99(&(iParam0->f_2.f_2), func_62(iParam0) > 0);
	if (iVar0 == 0)
	{
		func_100(&(iParam0->f_2.f_2));
	}
}

void func_65(int* iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_62(iParam0);
	switch (iParam1)
	{
		case 1:
			func_101(iParam0, iVar0 == 0);
			func_102(iParam0, -2012945523 /* GXTEntry: "You have no weapons in your locker." */);
			break;
		case 2:
			func_101(iParam0, iVar0 == 0);
			func_102(iParam0, -1705332461 /* GXTEntry: "You have no weapons on your horse." */);
			break;
		default:
			func_101(iParam0, 0);
			break;
	}
}

void func_66(int* iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_62(iParam0);
	if (iVar0 > 0)
	{
		Var1 = -1740156697;
		if (func_49(&(iParam0->f_2.f_13)))
		{
			Var1.f_1 = 0;
		}
		else
		{
			Var1.f_1 = func_103(iParam0);
			if (Var1.f_1 >= iVar0)
			{
				DEBUG::_0xA308F935BDECCEC0(2184, 162, "[WEAPON_LOCKER][WEAPON_UPDATE] Last focus: ", Var1.f_1, " is less than current list size: ", iVar0, " new focus index: ", (iVar0 - 1));
				Var1.f_1 = (iVar0 - 1);
			}
		}
		Var1.f_2 = func_104(iParam1);
		if (!func_105(iParam0, Var1.f_1, &(Var1.f_3)))
		{
			DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_UPDATE] ERROR! failed to get datastore from weaponlist at index: ", Var1.f_1);
		}
		if (!func_106(iParam0, &Var1))
		{
			DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_UPDATE] ERROR! failed to set script event.");
		}
	}
}

int func_67(var uParam0)
{
	if (!uParam0->f_5)
	{
		DEBUG::_0x83407B92D46F25C3(168, 162, "[UI_TAB_FILTER][SET_CURRENT_INDEX][", UNK_0x8F77B33B6A34D8BA(), "] ## not initialized.");
		return -1;
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_3);
}

bool func_68(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_4)
	{
		DEBUG::_0x83407B92D46F25C3(2216, 162, "[UI_TAB_FILTER][IS_TAB_INDEX_VALID][", UNK_0x8F77B33B6A34D8BA(), "] ## _iTabIndex: ", iParam1, " out of bounds: ", uParam0->f_4);
		return false;
	}
	return true;
}

void func_69(var uParam0, var uParam1, char* sParam2)
{
	DEBUG::_0xA308F935BDECCEC0(168, 162, "[UI_TAB_FILTER][SET_ACTIVE_TAB][", UNK_0x8F77B33B6A34D8BA(), "] _iTabIndex: ", sParam2);
	func_108(uParam0, func_107(uParam1, sParam2));
	func_109(uParam1, sParam2);
}

struct<4> func_70(bool bParam0)
{
	int iVar0;

	iVar0 = func_94(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { getPlayerInventoryItemGuid(923904168, getPlayerInventoryGuid(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { getPlayerInventoryItemGuid(923904168, getPlayerInventoryGuid(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return getPlayerInventoryItemGuid(923904168, getPlayerInventoryGuid(bParam0), -740156546, 0);
}

struct<4> getPlayerInventoryItemGuid(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_92(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_94(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

bool isInventoryItemGuidValid(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int pageWeaponsSetFocusedWeapon(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	UNK_0x355E72323AEE83CC(-1, 6);
	if (!isInventoryItemGuidValid(&uParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][PAGE_WEAPONS_SET_FOCUSED_WEAPON] - ERROR! Unalbe to focus and invalid _eInventoryItemGuid.");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][PAGE_WEAPONS_SET_FOCUSED_WEAPON] - New focused weapon");
	MISC::_COPY_MEMORY(&(uParam0->f_2.f_9), &uParam1, 4);
	return 1;
}

bool func_74(int* iParam0, int iParam1)
{
	char* sVar0;
	struct<4> Var1;
	struct<10> Var5;

	switch (iParam1)
	{
		case -1174213347:
			break;
		case -1694113483:
			sVar0 = "WL_NUMBER_STORED_IN_WL";
			break;
		case -337881065:
			sVar0 = "WL_NUMBER_STOWED_ON_HORSE";
			break;
		case -2060496899:
			sVar0 = "WL_NUMBER_EQUIPPED";
			break;
		default:
			return false;
	}
	Var1 = { func_111(iParam0) };
	if (isInventoryItemGuidValid(&Var1))
	{
		Var5.f_9 = -1591664384;
		if (INVENTORY::_0x025A1B1FB03FBF61(2, &Var1, &Var5, 22, 1))
		{
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_UI_EVENT_FOCUS_WEAPON_LIST_ENTRY] - Failed to get inventory Item weapon.");
		}
		switch (isPlayerWeaponPrimary(&Var1))
		{
			case 3:
				func_113(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_MELEE"));
				return true;
			case 4:
			case 5:
				func_113(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				return true;
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_UI_EVENT_FOCUS_WEAPON_LIST_ENTRY] ERROR! invalid weapon guid.");
	}
	if (func_62(iParam0) > 0)
	{
		func_113(iParam0, MISC::_CREATE_VAR_STRING(2, sVar0, func_62(iParam0)));
	}
	else
	{
		func_48(iParam0);
	}
	return true;
}

bool isItemValid(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

char* getItemName(bool bParam0)
{
	bool bVar0;

	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	bVar0 = func_114(bParam0, 0);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_NAME - No name specified for ", func_92(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(bVar0);
}

char* weaponAttachPointEnumToString(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WEAPON_ATTACH_POINT_HAND_PRIMARY";
		case 1:
			return "WEAPON_ATTACH_POINT_HAND_SECONDARY";
		case 2:
			return "WEAPON_ATTACH_POINT_PISTOL_R";
		case 3:
			return "WEAPON_ATTACH_POINT_PISTOL_L";
		case 4:
			return "WEAPON_ATTACH_POINT_KNIFE";
		case 5:
			return "WEAPON_ATTACH_POINT_LASSO";
		case 6:
			return "WEAPON_ATTACH_POINT_THROWER";
		case 7:
			return "WEAPON_ATTACH_POINT_BOW";
		case 8:
			return "WEAPON_ATTACH_POINT_BOW_ALTERNATE";
		case 9:
			return "WEAPON_ATTACH_POINT_RIFLE";
		case 10:
			return "WEAPON_ATTACH_POINT_RIFLE_ALTERNATE";
		case 11:
			return "WEAPON_ATTACH_POINT_LANTERN";
		case 12:
			return "WEAPON_ATTACH_POINT_TEMP_LANTERN";
		case 13:
			return "WEAPON_ATTACH_POINT_MELEE";
		case 14:
			return "WEAPON_ATTACH_POINT_HIP";
		case 15:
			return "WEAPON_ATTACH_POINT_BOOT";
		case 16:
			return "WEAPON_ATTACH_POINT_BACK";
		case 17:
			return "WEAPON_ATTACH_POINT_FRONT";
		case 18:
			return "WEAPON_ATTACH_POINT_SHOULDERSLING";
		case 19:
			return "WEAPON_ATTACH_POINT_LEFTBREAST";
		case 20:
			return "WEAPON_ATTACH_POINT_RIGHTBREAST";
		case 21:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT";
		case 22:
			return "WEAPON_ATTACH_POINT_RIGHTARMPIT";
		case 23:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_RIFLE";
		case 24:
			return "WEAPON_ATTACH_POINT_SATCHEL";
		case 25:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_BOW";
		case 26:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_EXTRA";
		case 27:
			return "WEAPON_ATTACH_POINT_LEFT_HAND_EXTRA";
		case 28:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_AUX";
		case 29:
			return "MAX_WEAPON_ATTACH_POINTS";
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

bool weaponMoveToPlayer(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	struct<15> Var5;
	int iVar27;
	struct<15> Var28;
	var uVar50;
	bool bVar54;
	var uVar55;
	struct<10> Var59;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;

	DEBUG::_0xA308F935BDECCEC0(10920, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] Moving weapon: ", func_92(bParam0, 0), " In Slot: ", func_82(bParam1, 0), " To new attach point: ", weaponAttachPointEnumToString(iParam2, 0));
	Var1 = { getPlayerInventoryItemGuid(bParam0, func_70(0), bParam1, 0) };
	Var5.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, &Var1, &Var5, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] - eNewWeapon Failed to get inventory Item weapon.");
		return false;
	}
	iVar0 = Var5.f_14;
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] ----------------------------------------------------------------");
	Var28.f_9 = -1591664384;
	if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_33, iParam2, &uVar50))
	{
		if (!INVENTORY::_0x025A1B1FB03FBF61(2, &uVar50, &Var28, 22, 1))
		{
			DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] - sDestWeaponData Failed to get inventory Item weapon.");
			return false;
		}
		iVar27 = Var28.f_14;
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] - no weapon at attach point: ", weaponAttachPointEnumToString(iParam2, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] ----------------------------------------------------------------");
	bVar54 = false;
	if (isWeaponValid(Var28.f_4))
	{
		Var59.f_9 = -1591664384;
		iVar83 = getAttachPointCount(bParam0);
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] iWeaponAttachPointCount: ", iVar83);
		iVar84 = 0;
		while (iVar84 < iVar83)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] Index: ", iVar84, "/", (iVar83 - 1));
			if (iVar84 >= (iVar83 - 1))
			{
				DEBUG::_0xA308F935BDECCEC0(136, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] iWeaponAttachPointIndex: ", iVar84, " is the last index.");
			}
			else if (!getAttachPoint(bParam0, iVar84, &iVar82))
			{
				DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] failed to get the attach point at index: ", iVar84, " for gun: ", func_117(bParam0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] Index: ", iVar84, " AttachPoint: ", weaponAttachPointEnumToString(iVar82, 0));
				if (iParam2 != iVar82)
				{
					DEBUG::_0xA308F935BDECCEC0(680, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] not the right attach point: ", weaponAttachPointEnumToString(iVar82, 0), " looking for: ", weaponAttachPointEnumToString(iParam2, 0));
				}
				else if (!getAttachPoint(bParam0, iVar84 + 1, &iVar81))
				{
					DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] failed to get the attach point at index+1: ", iVar84 + 1, " for gun: ", func_117(bParam0));
				}
				else if (!canAttachPointBeUsed(iVar81))
				{
					DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] Failed - attach point: ", weaponAttachPointEnumToString(iVar81, 0), " can not be used, locked");
				}
				else
				{
					if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_33, iVar81, &uVar55))
					{
						DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] grabbed Guid at attach index: ", iVar84 + 1, " Location: ", func_95(getWeaponLocation(&uVar55), 0));
						if (INVENTORY::_0x025A1B1FB03FBF61(2, &uVar55, &Var59, 22, 1))
						{
							DEBUG::_0xA308F935BDECCEC0(10408, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] - Weapon: ", func_117(Var59.f_4), " INT: ", Var59.f_4, " EnumString: ", func_92(Var59.f_4, 0));
							if (isWeaponValid(Var59.f_4))
							{
								DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] Already a weapon in that location, do not move here..");
							}
							else
							{
								Jump @671; //curOff = 654
								DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] - failed to get full weapon data.");
								Jump @738; //curOff = 668
								Jump @692; //curOff = 671
								DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] - No weapon equipped at attach point: ", weaponAttachPointEnumToString(iVar81, 0));
								if (wlGiveWeaponToPed(&Var28, &iVar81, 1))
								{
									DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] - Weapon Swap Success!");
									bVar54 = true;
									Jump @747; //curOff = 718
								}
								else
								{
									DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] - Weapon Swap Failed!");
								}
								else
								{
									iVar84++;
								}
								Jump @761; //curOff = 747
								DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][MOVE_TO_EMPTY] - There is no weapon at the destinations, nothing to move to next slot.");
								DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] ----------------------------------------------------------------");
								if (getWeaponLocation(&Var5) == 2)
								{
									telemetryWeaponRemovedFromLocker(Var5.f_4);
								}
								if (wlGiveWeaponToPed(&Var1, &iParam2, 0))
								{
									DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][GENERAL] - Weapon Swap Success!");
								}
								else
								{
									DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][GENERAL] - Weapon Swap Failed!");
								}
								DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER] ----------------------------------------------------------------");
								if (!bVar54)
								{
									if (isInventoryItemGuidValid(&uVar50))
									{
										if (weaponMoveToPlayerShouldSwap(bParam0, iVar27, iVar0))
										{
											if (wlGiveWeaponToPed(&Var28, &iVar0, 1))
											{
												DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][SWAP] - Weapon Swap Success!");
											}
											else
											{
												DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][SWAP] - Weapon Swap Failed!");
											}
										}
										else
										{
											DEBUG::_0xA308F935BDECCEC0(43688, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][SWAP] - _eWeapon: ", getItemName(bParam0), " DestPoint: ", weaponAttachPointEnumToString(iVar27, 0), " NewPoint: ", weaponAttachPointEnumToString(iVar0, 0), " Should not swap!");
										}
									}
									else
									{
										DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][SWAP] - No weapon is stored at AttachPoint: ", weaponAttachPointEnumToString(iParam2, 0));
									}
								}
								else
								{
									DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER][SWAP] - No swap check, weapon already got moved to empty.");
								}
								return true;
							}
						}
					}
				}
			}
		}
	}
}

char* func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WL_FLAG_WEAPON_LIST_UPDATE";
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

void func_80(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_81(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

var func_82(bool bParam0, int iParam1)
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

bool func_83(int iParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, iParam0, &Var0, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 139, "[WEAPON_LOCKER][MOVE_WEAPON_LOCKER] - Failed to get inventory Item weapon.");
		return false;
	}
	Var0.f_21 = 0;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, iParam0, &Var0, 22))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][MOVE_WEAPON_LOCKER] - Failed to update inventory Item weapon.");
		return false;
	}
	telemetryWeaponAddedToLocker(Var0.f_4);
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, Var0.f_14, false, false);
	}
	DEBUG::_0xA308F935BDECCEC0(174248, 162, "[WEAPON_LOCKER][MOVE_WEAPON_LOCKER] - Weapon: ", getItemName(Var0.f_4), " AttachPoint(", Var0.f_14, "): ", weaponAttachPointEnumToString(Var0.f_14, 0), " moved. Current Location: ", func_95(getWeaponLocation(&Var0), 0));
	return true;
}

bool moveWeaponHorse(int iParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, iParam0, &Var0, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][MOVE_WEAPON_HORSE] - Failed to get inventory Item weapon.");
		return false;
	}
	Var0.f_21 = 1;
	if (getWeaponLocation(&Var0) == 2)
	{
		telemetryWeaponRemovedFromLocker(Var0.f_4);
	}
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, iParam0, &Var0, 22))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][MOVE_WEAPON_HORSE] - Failed to update inventory Item weapon.");
		return false;
	}
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, Var0.f_14, false, false);
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 162, "[WEAPON_LOCKER][MOVE_WEAPON_HORSE] - Weapon: ", getItemName(Var0.f_4), " AttachPoint: ", weaponAttachPointEnumToString(Var0.f_14, 0), " moved. Current Location: ", func_95(getWeaponLocation(&Var0), 0));
	return true;
}

void func_85(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_86(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

bool func_87(char* sParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_94(bParam4), sParam0, bParam3, bParam2);
	if (*uParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *uParam1, "' with size ", *bParam2, " from predicate '", sParam0, "' with ", func_82(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

char* func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "WEAPON_LIST_FILTER_INVALID";
		case 0:
			return "WEAPON_LIST_FILTER_PISTOL";
		case 1:
			return "WEAPON_LIST_FILTER_REVOLVER";
		case 2:
			return "WEAPON_LIST_FILTER_SHOTGUN";
		case 3:
			return "WEAPON_LIST_FILTER_REPEATER";
		case 4:
			return "WEAPON_LIST_FILTER_RIFLE";
		case 5:
			return "WEAPON_LIST_FILTER_BOW";
		case 6:
			return "WEAPON_LIST_FILTER_NON_FILTERED";
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

bool playerInventoryGetItemDataByCollectionIndex(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (bParam1 < 0 || bParam1 >= iParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", bParam1, " Size: ", iParam3);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, bParam1, iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", bParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool isWeaponValid(bool bParam0)
{
	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_VALID] - ERROR! Invalid inventoy item.");
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][WEAPON_VALID] - eWeapon: ", getItemName(bParam0), " not a weapon.");
		return false;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(bParam0) && !WEAPON::_IS_WEAPON_BOW(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(2216, 162, "[WEAPON_LOCKER][WEAPON_VALID] - eWeapon: ", getItemName(bParam0), " invalid weapon. IS_WEAPON_A_GUN? ", WEAPON::_0x705BE297EEBDB95D(bParam0), " IS_WEAPON_BOW? ", WEAPON::_IS_WEAPON_BOW(bParam0));
		return false;
	}
	return true;
}

int weaponListFilterGetItemCorespondingFilter(bool bParam0)
{
	if (!isWeaponValid(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST_FILTER_GET_ITEM_CORESPONDING_FILTER] - Not a valid _eInventoryItem");
		return -1;
	}
	if (WEAPON::_IS_WEAPON_PISTOL(bParam0))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(bParam0))
	{
		return 1;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(bParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(bParam0))
	{
		return 3;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(bParam0))
	{
		return 4;
	}
	else if (WEAPON::_IS_WEAPON_BOW(bParam0))
	{
		return 5;
	}
	return 6;
}

var func_92(bool bParam0, int iParam1)
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

int getWeaponLocation(int iParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, iParam0, &Var0, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 139, "[WL_GET_WEAPON_LOCATION] - Failed to get weapon.");
		return -1;
	}
	DEBUG::_0xA308F935BDECCEC0(2216, 139, "[WL_GET_WEAPON_LOCATION] Weapon: ", func_92(Var0.f_4, 0), " favourite: ", Var0.f_21, " attachPoint: ", Var0.f_14);
	if (!Var0.f_21)
	{
		return 2;
	}
	else if (Var0.f_21 && Var0.f_14 != -1)
	{
		return 0;
	}
	else if (Var0.f_21 && Var0.f_14 == -1)
	{
		return 1;
	}
	return -1;
}

int func_94(bool bParam0)
{
	if (func_123() == -1)
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

char* func_95(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "WL_WEAPON_LOCATION_INVALID";
		case 0:
			return "WL_WEAPON_LOCATION_PLAYER";
		case 1:
			return "WL_WEAPON_LOCATION_HORSE";
		case 2:
			return "WL_WEAPON_LOCATION_LOCKER";
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

bool weaponListAddItem(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<13> Var0;
	bool bVar53;
	var uVar54;

	if (!isWeaponValid(bParam2))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LIST_ADD_ITEM] - ERROR! Not a valid weapon, Name: ", getItemName(bParam2));
		return false;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	if (!uiWidgetWeaponFill(bParam2, bParam3, &Var0, iParam4, iParam5))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] ERROR! Failed to fill data.");
		return false;
	}
	bVar53 = true;
	if (bParam1 < func_62(iParam0))
	{
		if (func_105(iParam0, bParam1, &uVar54))
		{
			if (func_125(&uVar54, &Var0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] Writing entry at index: ", bParam1);
				bVar53 = false;
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][WEAPON_LIST] Failed to write at index: ", bParam1);
			}
		}
	}
	if (bVar53)
	{
		if (!func_126(iParam0, &Var0))
		{
			DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER][WEAPON_LIST] iIndex: ", bParam1, " failed to add weapon to list.. Name: ", getItemName(bParam2));
			return false;
		}
	}
	return true;
}

bool func_97(int* iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CLEAR_FROM_ENTRY] - ERROR! dsWeaponList is invalid.");
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
	if (bVar0 == 0)
	{
		return true;
	}
	if (bParam1 < 0 || bParam1 > bVar0)
	{
		DEBUG::_0x83407B92D46F25C3(136, 162, "[WEAPON_LOCKER][CLEAR_FROM_ENTRY] - ERROR! _iFromEntry: ", bParam1, " is out of bounds, max: ", bVar0);
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 162, "[WEAPON_LOCKER][CLEAR_FROM_ENTRY] - Clearing from index: ", bParam1, " list size: ", bVar0);
	bVar1 = bVar0;
	while (bVar1 >= bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][CLEAR_FROM_ENTRY] - Removing at index: ", bVar1);
		DATABINDING::_0x6318FB3BE37E11B3(iParam0->f_2.f_1, bVar1);
		bVar1 = (bVar1 + -1);
	}
	return true;
}

bool playerInventoryReleaseItemCollection(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_RELEASE_ITEM_COLLECTION - Failed to release collection!");
		return false;
	}
	return true;
}

int func_99(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_UI_WEAPON_STATS_SET_VISIBLE] - ERROR! - invalid dsVisible.");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][_UI_WEAPON_STATS_SET_VISIBLE] New Values: ", bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	return 1;
}

int func_100(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, false);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, false);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, false);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, false);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, false);
	return 1;
}

int func_101(int* iParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_89))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_HINT_VISIBLE] - ERROR! dsWeaponListHintVisible invalid.");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][_PW_HINT_VISIBLE] - New visible state: ", bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_2.f_89, bParam1);
	return 1;
}

int func_102(int* iParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_90))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_HINT_LABEL] - ERROR! dsWeaponListHintVisible invalid.");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][_PW_HINT_LABEL] - New _iLabelHash : ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0->f_2.f_90, bParam1);
	return 1;
}

var func_103(int* iParam0)
{
	return iParam0->f_101.f_1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1174213347;
		case 1:
			return -1694113483;
		case 2:
			return -337881065;
		case 3:
			return -2060496899;
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][_PW_GET_TAB_FILTER_ENTRY_FOCUS_EVENT_HASH] - ERROR! - Failed to get entry focus hash for _eTabFilter: ", func_41(iParam0, 0));
	return 0;
}

bool func_105(int* iParam0, bool bParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_LIST_SIZE] - ERROR! dsWeaponList is not valid.");
		return false;
	}
	if (bParam1 < 0 || bParam1 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_LIST_SIZE] - ERROR! _iIndex is out of bounds, max:", DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1));
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2.f_1, bParam1);
	return true;
}

bool func_106(int* iParam0, bool bParam1)
{
	if (*bParam1 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_SCRIPT_EVENT_SET] - UISCRIPTEVENTTYPE is invalid.");
		return false;
	}
	if (iParam0->f_97 != 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_SCRIPT_EVENT_SET] - Message is currently in use.");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(690344, 162, "[WEAPON_LOCKER][UI_SCRIPT_EVENT_SET] - EventType: ", func_36(*bParam1, 0), " Int: ", bParam1->f_1, " Hash: ", bParam1->f_2, " HashName: ", UNK_0x4379B6FA65D55295(bParam1->f_2), " DatastoreValid: ", DATABINDING::_DATABINDING_IS_DATA_ID_VALID(bParam1->f_3));
	MISC::_COPY_MEMORY(&(iParam0->f_97), bParam1, 4);
	return true;
}

char* func_107(var uParam0, int iParam1)
{
	return func_127(*(uParam0[iParam1 /*17*/]));
}

void func_108(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, sParam1);
}

void func_109(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(168, 162, "[UI_TAB_FILTER][SET_TAB_VIEWED][", UNK_0x8F77B33B6A34D8BA(), "] _iTabIndex: ", iParam1);
	(uParam0[iParam1 /*17*/])->f_16 = 1;
}

struct<4> getPlayerInventoryGuid(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_94(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { getPlayerInventoryItemGuid(joaat("CHARACTER"), func_128(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { getPlayerInventoryItemGuid(joaat("CHARACTER"), func_128(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return getPlayerInventoryItemGuid(joaat("CHARACTER"), func_128(), -1591664384, bParam0);
}

struct<4> func_111(var uParam0)
{
	return uParam0->f_2.f_9;
}

int isPlayerWeaponPrimary(int iParam0)
{
	struct<15> Var0;
	int iVar22;

	if (!isInventoryItemGuidValid(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][IS_PLAYER_WEAPON_PRIMARY] - ERROR! _sWeaponGUID is not valid.");
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_94(0), iParam0, &Var0, 22, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][IS_PLAYER_WEAPON_PRIMARY] - ERROR! failed to get full inventory item.");
		return 2;
	}
	iVar22 = Var0.f_14;
	switch (iVar22)
	{
		case 3:
			return 4;
		case 2:
			return 5;
		case 4:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_113(int* iParam0, char* sParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_93.f_2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][FOOTER_SET_TEXT] - ERROR! - dsFooterRawText is invalid.");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][FOOTER_SET_TEXT] - New Text: ", sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_93.f_2, sParam1);
	return 1;
}

bool func_114(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_129(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int getAttachPointCount(bool bParam0)
{
	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "[WEAPONS][GET_ATTACH_POINT_COUNT] eWeapon is not a valid inventory item.");
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 150, "[WEAPONS][GET_ATTACH_POINT_COUNT] eWeapon: ", func_92(bParam0, 0), " is not a weapon.");
		return 0;
	}
	if (WEAPON::_IS_WEAPON_BOW(bParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(bParam0))
	{
		return 1;
	}
	return 0;
}

bool getAttachPoint(bool bParam0, int iParam1, var uParam2)
{
	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "[WEAPONS][GET_ATTACH_POINT] eWeapon is not a valid inventory item.");
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 150, "[WEAPONS][GET_ATTACH_POINT] eWeapon: ", func_92(bParam0, 0), " is not a weapon.");
		return false;
	}
	if (WEAPON::_IS_WEAPON_BOW(bParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 8;
				return true;
			case 1:
				*uParam2 = 7;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 10;
				return true;
			case 1:
				*uParam2 = 9;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 2;
				return true;
			case 1:
				*uParam2 = 3;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_MELEE(bParam0))
	{
		*uParam2 = 4;
		return true;
	}
	DEBUG::_0x83407B92D46F25C3(648, 150, "[WEAPONS][GET_ATTACH_POINT] ERROR! Unable to get attach point at index: ", iParam1, " for weapon: ", func_92(bParam0, 0));
	return false;
}

char* func_117(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "WT_INVALID";
		case joaat("WEAPON_UNARMED"):
			return "WT_UNARMED";
		case joaat("GROUP_PISTOL"):
			return "WT_PISTOL";
		case joaat("GROUP_REVOLVER"):
			return "WT_REVOLVER";
		case joaat("GROUP_RIFLE"):
			return "WT_RIFLE";
		case joaat("GROUP_REPEATER"):
			return "WT_ASSAULTRIFLE";
		case joaat("GROUP_SHOTGUN"):
			return "WT_SHOTGUN";
		case joaat("GROUP_SNIPER"):
			return "WT_SNIPERRIFLE";
		default:
			return WEAPON::_GET_WEAPON_NAME(bParam0);
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get name of an unknown weapon ", bParam0);
	return "WT_INVALID";
}

bool canAttachPointBeUsed(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return canOffHandHolsterBeUsed();
	}
	return true;
}

bool wlGiveWeaponToPed(int iParam0, int iParam1, bool bParam2)
{
	struct<15> Var0;
	struct<13> Var22;
	var uVar38;
	int iVar44;
	char cVar45[64];
	char cVar53[64];

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, iParam0, &Var0, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WL_GIVE_WEAPON_TO_PED] - ERROR! Failed to get sWeaponInventoryData.");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(2728, 162, "[WEAPON_LOCKER][WL_GIVE_WEAPON_TO_PED] - Request to give weapon: ", getItemName(Var0.f_4), " New Slot: ", weaponAttachPointEnumToString(*iParam1, 0), " bTickerMessage: ", bParam2);
	Var0.f_21 = 1;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, iParam0, &Var0, 22))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WL_GIVE_WEAPON_TO_PED] - ERROR! Failed to update sWeaponInventoryData.");
		return false;
	}
	Var22.f_7 = 752097756;
	Var22.f_8 = 1056964608;
	Var22.f_9 = 1065353216;
	Var22.f_4 = Var0.f_4;
	Var22 = { Var0 };
	Var22.f_6 = *iParam1;
	Var22.f_12 = 1;
	if (WEAPON::_GIVE_WEAPON_TO_PED(Global_33, &Var22, &uVar38))
	{
		DEBUG::_0xA308F935BDECCEC0(43688, 162, "[WEAPON_LOCKER][WL_GIVE_WEAPON_TO_PED] Weapon: ", getItemName(Var22.f_4), " moving from point: ", weaponAttachPointEnumToString(Var0.f_14, 0), " to ", weaponAttachPointEnumToString(Var22.f_6, 0), " SUCCESS!");
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WL_GIVE_WEAPON_TO_PED] ERROR! Failed GIVE_WEAPON_TO_PED_WITH_OPTIONS");
		return false;
	}
	if (bParam2)
	{
		if (getAttachPointLabelForAttachPoint(Var22.f_6, &iVar44))
		{
			StringCopy(&cVar45, getItemName(Var22.f_4), 64);
			StringCopy(&cVar53, HUD::_GET_LABEL_TEXT_BY_HASH(iVar44), 64);
			func_132(MISC::_CREATE_VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &cVar45, &cVar53), -2, 0, 0, 0, 1);
			DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WL_GIVE_WEAPON_TO_PED][WL_GIVE_WEAPON_TO_PED] - TICKER: ", MISC::_CREATE_VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &cVar45, &cVar53));
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][WL_GIVE_WEAPON_TO_PED] - Failed to get AttachPoint label for: ", weaponAttachPointEnumToString(Var22.f_6, 0));
		}
	}
	return true;
}

int telemetryWeaponRemovedFromLocker(bool bParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][TELEMETRY] - WEAPON_REMOVED_FROM_LOCKER. _eInventoryItem: ", func_92(bParam0, 0));
	UNK_0x355E72323AEE83CC(162, 6);
	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][TELEMETRY] - WEAPON_REMOVED_FROM_LOCKER. invalid inventory item: ", bParam0);
		return 0;
	}
	TELEMETRY::_0x317D9C9560529CC2(bParam0);
	return 1;
}

bool weaponMoveToPlayerShouldSwap(bool bParam0, int iParam1, int iParam2)
{
	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WEAPON_MOVE_TO_PLAYER_SHOULD_SWAP] - ERROR! _eWeapon is not valid.");
		return false;
	}
	if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
	{
		if (iParam1 == 10 && iParam2 == 9)
		{
			return true;
		}
		if (iParam2 == 10 && iParam1 == 9)
		{
			return true;
		}
	}
	return false;
}

int telemetryWeaponAddedToLocker(bool bParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][TELEMETRY] - WEAPON_ADDED_TO_LOCKER. _eInventoryItem: ", func_92(bParam0, 0));
	UNK_0x355E72323AEE83CC(162, 6);
	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][TELEMETRY] - WEAPON_ADDED_TO_LOCKER. invalid inventory item: ", bParam0);
		return 0;
	}
	TELEMETRY::_0xC3ADF4880784FA9C(bParam0);
	return 1;
}

int func_123()
{
	return Global_1572887.f_13;
}

bool uiWidgetWeaponFill(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4)
{
	struct<5> Var0;

	if (!isWeaponValid(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_WIDGET_WEAPON_FILL] - Error! Failed to fill item, _eWeapon is not a valid weapon.");
		return false;
	}
	if (INVENTORY::_0xE787F05DFC977BDE(func_94(1), bParam0, false) > 1)
	{
		if (func_133(bParam1, &(uParam2->f_28), &(uParam2->f_27)))
		{
			uParam2->f_29 = 1;
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][WEAPON_WIDGET_FILL] - ERROR! Failed to get variation icon for slot: ", func_82(bParam1, 0));
		}
	}
	uParam2->f_4 = 1600976403;
	switch (iParam4)
	{
		case 0:
			uParam2->f_5 = -1174213347;
			break;
		case 3:
			uParam2->f_5 = -2060496899;
			break;
		case 2:
			uParam2->f_5 = -337881065;
			break;
		case 1:
			uParam2->f_5 = -1694113483;
			break;
	}
	StringCopy(&(uParam2->f_16), getItemName(bParam0), 64);
	if (!func_134(bParam0, &Var0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][UI_WIDGET_WEAPON_FILL] - ERROR! Failed to grab weapon stats for weapon: ", func_117(bParam0));
	}
	uParam2->f_30 = Var0;
	uParam2->f_31 = Var0.f_1;
	uParam2->f_32 = Var0.f_4;
	uParam2->f_33 = Var0.f_2;
	uParam2->f_34 = Var0.f_3;
	uParam2->f_8 = 0;
	uParam2->f_9 = 0;
	if (!setPrompts(bParam0, bParam1, uParam2))
	{
		DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][UI_WIDGET_WEAPON_FILL] - ERROR! Failed to set prompts for _eWeapon:", func_92(bParam0, 0));
		return false;
	}
	if (!func_136(iParam3, uParam2))
	{
		DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][UI_WIDGET_WEAPON_FILL] - ERROR! Failed to set loaction icon for _eWeapon:", func_92(bParam0, 0));
		return false;
	}
	uParam2->f_51 = bParam0;
	uParam2->f_52 = bParam1;
	return true;
}

bool func_125(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_WIDGET_WEAPON_WRITE_DATABINDINGS_VIA_ROOT] - Error! nParentRootID databinding is not valid.");
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_137(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_137(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(54), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(55), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(57), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(56), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(58), uParam1->f_7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_137(59), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_137(60), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(9), uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(10), uParam1->f_28);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_137(11), uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, func_137(15), &(uParam1->f_16));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(21), uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_137(22), uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_137(23), uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_damage", uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_range", uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_accuracy", uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_firerate", uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_reload", uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam1->f_35);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam1->f_38);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_label", uParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam1->f_39);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_visible", uParam1->f_40);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_hash", uParam1->f_42);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam1->f_45);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam1->f_44);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam1->f_46);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_label", uParam1->f_49);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam1->f_47);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam1->f_48);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam1->f_50);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item", uParam1->f_51);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot", uParam1->f_52);
	return true;
}

bool func_126(int* iParam0, var uParam1)
{
	char cVar0[64];
	int iVar8;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_LIST_ADD_WEAPON] - Error! Failed to add new item, dsRoot is not valid.");
		return false;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_PW_LIST_ADD_WEAPON] - Error! Failed to add new item, dsWeaponList is not valid.");
		return false;
	}
	StringCopy(&cVar0, "Entry_", 64);
	StringIntConCat(&cVar0, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1), 64);
	func_138(&iVar8, iParam0->f_2.f_1, cVar0, uParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0->f_2.f_1, -1, "pm_dynamic_text_and_end_image", iVar8);
	return true;
}

char* func_127(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<4> func_128()
{
	struct<4> Var0;

	return Var0;
}

int func_129(bool bParam0, bool bParam1)
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

bool canOffHandHolsterBeUsed()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "[WEAPON_LOCKER][CAN_OFF_HAND_HOLSTER_BE_USED] UPGRADE_OFFHAND_HOLSTER : ", func_139(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "[WEAPON_LOCKER][CAN_OFF_HAND_HOLSTER_BE_USED] SHORTARM_WEAPONS_COUNT : ", getShortArmWeaponsCount());
	if (!func_141())
	{
		return false;
	}
	if (getShortArmWeaponsCount() < 2)
	{
		return false;
	}
	return true;
}

bool getAttachPointLabelForAttachPoint(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			*iParam1 = 825261881; /* GXTEntry: "Melee" */
			return true;
		case 3:
			*iParam1 = -2078679563; /* GXTEntry: "Off-Hand Sidearm" */
			return true;
		case 2:
			*iParam1 = 258571561; /* GXTEntry: "Sidearm" */
			return true;
		case 9:
			*iParam1 = 1282885388; /* GXTEntry: "Back" */
			return true;
		case 10:
			*iParam1 = -1522249011; /* GXTEntry: "Shoulder" */
			return true;
		default:
			break;
	}
	return false;
}

var func_132(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = UIFEED::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_133(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1728382685: /* GXTEntry: "Right" */
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("CLUB");
			return true;
		case -649335959: /* GXTEntry: "Left" */
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("DIAMOND");
			return true;
		default:
			break;
	}
	return false;
}

bool func_134(bool bParam0, var uParam1)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	struct<2> Var35;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<5> Var41;
	struct<4> Var46;
	int iVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	int iVar56;

	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][_UI_WIDGET_WEAPON_STATS_FILL_DATA] - ERROR! - invalid _eWeapon.");
		return false;
	}
	if (!func_142(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][_UI_WIDGET_WEAPON_STATS_FILL_DATA] - ERROR! - Item is not a weapon: ", getItemName(bParam0));
		return false;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam0, &Var0))
	{
		DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][_UI_WIDGET_WEAPON_STATS_FILL_DATA] - ERROR! - Was not able to fillout item effects for weapon: ", getItemName(bParam0));
		return false;
	}
	if (Var0 <= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][_UI_WIDGET_WEAPON_STATS_FILL_DATA] - num effects for weapon: ", getItemName(bParam0), " is <= 0");
		return false;
	}
	fVar34 = 100f;
	Var35 = { func_143(joaat("SKILL"), WEAPON::_0x8EC44AE8DECFF841(bParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_GET_FLOAT(&Var35, &fVar34);
	}
	iVar37 = 0;
	while (iVar37 < Var0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar37], &vVar22))
		{
			if (vVar22.y == -266488916)
			{
				iVar29 = (iVar29 + vVar22.z);
			}
			else if (vVar22.y == 1648497600)
			{
				iVar30 = (iVar30 + vVar22.z);
			}
			else if (vVar22.y == -1856731002)
			{
				iVar31 = (iVar31 + vVar22.z);
			}
			else if (vVar22.y == 2038990430)
			{
				iVar32 = (iVar32 + vVar22.z);
			}
			else if (vVar22.y == 983649838)
			{
				iVar33 = (iVar33 + vVar22.z);
			}
			if (vVar22.y == 1465168878)
			{
				iVar30 = (iVar30 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
			else if (vVar22.y == -1103443887)
			{
				iVar32 = (iVar32 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
			else if (vVar22.y == -800430237)
			{
				iVar33 = (iVar33 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
		}
		iVar37++;
	}
	iVar38 = 0;
	iVar39 = 0;
	iVar40 = 0;
	Var41 = { playerInventoryGetDefaultItemSlotInfo(bParam0, 0, 0) };
	Var46 = { getPlayerInventoryItemGuid(bParam0, Var41, Var41.f_4, 0) };
	iVar50 = func_145(bParam0);
	bVar51 = false;
	while (bVar51 < iVar50)
	{
		iVar52 = func_146(bParam0, bVar51);
		if (iVar52 != 0)
		{
			bVar53 = func_147(Var46, iVar52, 0, -1);
			if (isItemValid(bVar53, 0))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][_UI_WIDGET_WEAPON_STATS_FILL_DATA] Adding stats for: ", func_92(bVar53, 0));
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar53, &Var0))
				{
					iVar37 = 0;
					iVar37 = 0;
					while (iVar37 < Var0)
					{
						if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar37], &vVar22))
						{
							DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER][_UI_WIDGET_WEAPON_STATS_FILL_DATA] Failed to fillout weapon mod effect at index: ", iVar37, " eEquippedModNAME: ", getItemName(bVar53));
						}
						else if (vVar22.y == 1999781523)
						{
							iVar38 = (iVar38 + vVar22.z);
						}
						else if (vVar22.y == 1173003838)
						{
							iVar40 = (iVar40 + vVar22.z);
						}
						else if (vVar22.y == -1657343230)
						{
							iVar39 = (iVar39 + vVar22.z);
						}
						iVar37++;
					}
				}
			}
		}
		bVar51++;
	}
	iVar54 = (iVar29 + iVar38);
	iVar55 = (iVar30 + iVar39);
	iVar56 = (iVar33 + iVar40);
	*uParam1 = iVar54;
	uParam1->f_1 = iVar55;
	uParam1->f_4 = iVar56;
	uParam1->f_2 = iVar31;
	uParam1->f_3 = iVar32;
	return true;
}

bool setPrompts(bool bParam0, bool bParam1, var uParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WLBOW] SET_PROMPTS - for item/weapon: ", getItemName(bParam0));
	if (!isWeaponValid(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WLBOW] SET_PROMPTS - ERROR! not a valid weapon item.");
		return false;
	}
	Var0 = { getPlayerInventoryItemGuid(bParam0, func_70(0), bParam1, 0) };
	if (!isInventoryItemGuidValid(&Var0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][WLBOW] SET_PROMPTS - ERROR! not a valid sSelectedWeaponGUID.");
		return false;
	}
	if (!func_148(bParam0, 1728382685 /* GXTEntry: "Right" */, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WLBOW] SET_PROMPTS - SLOTID_WEAPON_0 player does not own weapon: ", getItemName(bParam0));
		if (!func_148(bParam0, -649335959 /* GXTEntry: "Left" */, 1))
		{
			DEBUG::_0x83407B92D46F25C3(40, 162, "[WEAPON_LOCKER][WLBOW] SET_PROMPTS - ERROR! SLOTID_WEAPON_1 Unable to properly setup prompts, player does not own weapon: ", getItemName(bParam0));
			return false;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(2184, 162, "[WEAPON_LOCKER] SET_PROMPTS - Two_hand: ", WEAPON::_IS_WEAPON_TWO_HANDED(bParam0), " One_hand: ", WEAPON::_IS_WEAPON_ONE_HANDED(bParam0), " Melee: ", WEAPON::_IS_WEAPON_MELEE(bParam0));
	iVar5 = getAttachPointCount(bParam0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER] SET_PROMPTS - iWeaponAttachPointCount: ", iVar5);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (!getAttachPoint(bParam0, iVar6, &iVar4))
		{
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(648, 162, "[WEAPON_LOCKER] SET_PROMPTS - LOOP index: ", iVar6, " AttachPoint: ", weaponAttachPointEnumToString(iVar4, 0));
			if (iVar6 == 0)
			{
				uParam2->f_36 = canAttachPointBeUsed(iVar4);
				uParam2->f_35 = canMoveWeaponToPlayer(&Var0, iVar4) == 0;
				if (!func_150(iVar4, &(uParam2->f_37)))
				{
				}
				if (!func_151(iVar4, &(uParam2->f_38)))
				{
				}
			}
			else if (iVar6 == 1)
			{
				uParam2->f_40 = canAttachPointBeUsed(iVar4);
				uParam2->f_39 = canMoveWeaponToPlayer(&Var0, iVar4) == 0;
				if (!func_150(iVar4, &(uParam2->f_41)))
				{
				}
				if (!func_151(iVar4, &(uParam2->f_42)))
				{
				}
			}
		}
		iVar6++;
	}
	uParam2->f_44 = 1;
	uParam2->f_43 = canMoveWeaponToLocker(&Var0) == 0;
	uParam2->f_45 = 1039601264; /* GXTEntry: "Store in Locker" */
	uParam2->f_46 = -1073027202;
	uParam2->f_48 = 1;
	uParam2->f_47 = canMoveWeaponToHorse(&Var0) == 0;
	uParam2->f_49 = 1901059961; /* GXTEntry: "Stow on your horse" */
	uParam2->f_50 = -1103499950;
	return true;
}

bool func_136(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (!func_154(iParam0, &uVar0, &uVar1))
	{
		uParam1->f_26 = 0;
		DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][WEAPON_LOCATION_ICON] - Failed to grab weapon location for eWeaponLocation: ", func_95(iParam0, 0));
		return false;
	}
	uParam1->f_26 = 1;
	uParam1->f_25 = uVar0;
	uParam1->f_24 = uVar1;
	return true;
}

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		case 94:
			return "dynamic_list_item_overlay_tick_visible";
		case 95:
			return "dynamic_list_item_overlay_time_visible";
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(40, 162, "[GET_STRING_FROM_UI_DYNAMIC_ITEM_ENTRY_DATABINDING_TYPE] Could not find a valid Data Binding Type. Please add a valid entry for new Dynamic List Item Type.", func_155(iParam0, 0));
	return "null";
}

int func_138(int iParam0, char* sParam1, char[32] cParam2, var uParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(sParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_WIDGET_WEAPON_INITIALIZE] - Error! nParentRootID databinding is not valid.");
		return 0;
	}
	func_156(iParam0, sParam1, cParam2, *uParam10);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][UI_WIDGET_WEAPON_INITIALIZE] - Error! dsRootID databinding is not valid.");
		return 0;
	}
	iParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(9), uParam10->f_27);
	iParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(10), uParam10->f_28);
	iParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(11), uParam10->f_29);
	iParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_damage", uParam10->f_30);
	iParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_range", uParam10->f_31);
	iParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_accuracy", uParam10->f_32);
	iParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_firerate", uParam10->f_33);
	iParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_reload", uParam10->f_34);
	iParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_toggle_label", uParam10->f_37);
	iParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_toggle_enabled", uParam10->f_35);
	iParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_toggle_visible", uParam10->f_36);
	iParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_toggle_hash", uParam10->f_38);
	iParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_option_label", uParam10->f_41);
	iParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_option_enabled", uParam10->f_39);
	iParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_option_visible", uParam10->f_40);
	iParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_option_hash", uParam10->f_42);
	iParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dleft_label", uParam10->f_45);
	iParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dleft_enabled", uParam10->f_43);
	iParam0->f_40 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dleft_visible", uParam10->f_44);
	iParam0->f_41 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dleft_hash", uParam10->f_46);
	iParam0->f_42 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dright_label", uParam10->f_49);
	iParam0->f_43 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dright_enabled", uParam10->f_47);
	iParam0->f_44 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dright_visible", uParam10->f_48);
	iParam0->f_45 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dright_hash", uParam10->f_50);
	iParam0->f_46 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "inventory_item", uParam10->f_51);
	iParam0->f_47 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "inventory_item_slot", uParam10->f_52);
	return 1;
}

int func_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_157(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_94(bParam1), bParam0, bParam3);
}

int getShortArmWeaponsCount()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<10> Var4;

	Var4.f_9 = -1591664384;
	if (func_87("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (!playerInventoryGetItemDataByCollectionIndex(&Var4, bVar2, iVar0, iVar1))
			{
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4))
			{
				iVar3++;
			}
			bVar2++;
		}
		playerInventoryReleaseItemCollection(iVar0);
	}
	return iVar3;
}

bool func_141()
{
	return (func_139(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_147(getPlayerInventoryItemGuid(joaat("WARDROBE"), getPlayerInventoryGuid(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_142(bool bParam0)
{
	return func_158(bParam0) == joaat("WEAPON");
}

struct<2> func_143(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

struct<5> playerInventoryGetDefaultItemSlotInfo(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { getPlayerInventoryGuid(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_158(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_92(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_159(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { getPlayerInventoryItemGuid(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_70(bParam1) };
			if (bParam2 && func_160(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_161(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_161(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_162(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { getPlayerInventoryEmoteWheelGUID(bParam1) };
			switch (func_164(bParam0))
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
			if (func_165(bParam0, -1823706425))
			{
				Var0 = { getPlayerInventoryItemGuid(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_165(bParam0, -1483207246))
			{
				Var0 = { getPlayerInventoryItemGuid(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { getPlayerInventoryItemGuid(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_165(bParam0, -1653629781))
			{
				Var0 = { getPlayerInventoryItemGuid(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_166(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_165(bParam0, -1653629781))
			{
				Var0 = { getPlayerInventoryItemGuid(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_92(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_92(bParam0, 0), ": ", func_82(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

int func_145(bool bParam0)
{
	bool bVar0;

	if (!isItemValid(bParam0, 0))
	{
		return 0;
	}
	bVar0 = func_164(bParam0);
	if (bVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(bVar0);
}

int func_146(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	if (bParam0 != 0)
	{
		bVar0 = func_164(bParam0);
		if (bVar0 != 0)
		{
			if (bParam1 >= 0 && bParam1 < func_145(bParam0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(bVar0, bParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_147(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return playerInventoryGetItemEquippedInSlotByRef(&uParam0, bParam4, bParam5, iParam6);
}

bool func_148(bool bParam0, bool bParam1, bool bParam2)
{
	struct<10> Var0;
	var uVar22;

	Var0.f_9 = -1591664384;
	if (!isItemValid(bParam0, 0))
	{
		return false;
	}
	if (!shopGetInventoryWeaponData(bParam0, &uVar22, &Var0, bParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		if (func_162(bParam0, &Var0, bParam1))
		{
			return false;
		}
	}
	return true;
}

int canMoveWeaponToPlayer(int iParam0, int iParam1)
{
	struct<10> Var0;
	var uVar22;

	if (!isInventoryItemGuidValid(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_PLAYER] - ERROR! _sWeaponGUID is not valid.");
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_94(0), iParam0, &Var0, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_PLAYER] - ERROR! failed to get full inventory item.");
		return 2;
	}
	if (!WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_33, iParam1, &uVar22))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_PLAYER] - Failed to get weapon at attachPoint: ", weaponAttachPointEnumToString(iParam1, 0));
	}
	if (getWeaponLocation(iParam0) == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_PLAYER] - Weapon: ", getItemName(Var0.f_4), " already on player.");
		if (isInventoryItemGuidValid(&uVar22))
		{
			if (areInventoryItemGUIDsEqual(iParam0, &uVar22))
			{
				DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_PLAYER] - Query weapon and current weapon at AttachPoint: ", weaponAttachPointEnumToString(iParam1, 0), " are the same.");
				return 3;
			}
		}
		switch (canPlayerWeaponBeRemoved(iParam0))
		{
			case 3:
				return 5;
		}
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(Var0.f_4) && iParam1 == 9)
	{
		if (!canOffHandHolsterBeUsed())
		{
			DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_PLAYER] - can not be moved to offhand.");
			return 4;
		}
	}
	return 0;
}

bool func_150(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 1000849983; /* GXTEntry: "Equip to Melee" */
			return true;
		case 3:
			*uParam1 = -327947319; /* GXTEntry: "Equip Off-Hand Sidearm" */
			return true;
		case 2:
			*uParam1 = 1588146127; /* GXTEntry: "Equip Sidearm" */
			return true;
		case 7:
		case 9:
			*uParam1 = 297513196; /* GXTEntry: "Equip to Back" */
			return true;
		case 8:
		case 10:
			*uParam1 = 108789798; /* GXTEntry: "Equip to Shoulder" */
			return true;
		default:
			break;
	}
	return false;
}

bool func_151(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 941907253;
			return true;
		case 3:
			*uParam1 = -1756222973;
			return true;
		case 2:
			*uParam1 = -1313710397;
			return true;
		case 9:
			*uParam1 = 1554581363;
			return true;
		case 10:
			*uParam1 = -946029012;
			return true;
		case 7:
			*uParam1 = -466398939;
			return true;
		case 8:
			*uParam1 = -260514364;
			return true;
		default:
			break;
	}
	return false;
}

int canMoveWeaponToLocker(int iParam0)
{
	struct<10> Var0;

	if (!isInventoryItemGuidValid(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_LOCKER] - ERROR! _sWeaponGUID is not valid.");
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_94(0), iParam0, &Var0, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_LOCKER] - ERROR! failed to get full inventory item.");
		return 2;
	}
	if (getWeaponLocation(iParam0) == 2)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_LOCKER] - Weapon: ", func_117(Var0.f_4), " is already stored in the locker.");
		return 3;
	}
	if (getWeaponLocation(iParam0) == 0)
	{
		switch (canPlayerWeaponBeRemoved(iParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

int canMoveWeaponToHorse(int iParam0)
{
	struct<10> Var0;

	if (!isInventoryItemGuidValid(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_HORSE] - ERROR! _sWeaponGUID is not valid.");
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_94(0), iParam0, &Var0, 22, 1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_HORSE] - ERROR! failed to get full inventory item.");
		return 1;
	}
	if (getWeaponLocation(iParam0) == 1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_HORSE] - Weapon: ", func_117(Var0.f_4), " is already stowed on the horse.");
		return 3;
	}
	if (WEAPON::_IS_WEAPON_MELEE(Var0.f_4))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][CAN_MOVE_WEAPON_TO_HORSE] - Weapon: ", func_117(Var0.f_4), " is melee and can not be stowed on a horse.");
		return 5;
	}
	if (getWeaponLocation(iParam0) == 0)
	{
		switch (canPlayerWeaponBeRemoved(iParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

bool func_154(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_HOLSTER");
			return true;
		case 1:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_ON_HORSE");
			return true;
		case 2:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = -229529296;
			return true;
		default:
			break;
	}
	return false;
}

char* func_155(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_ENABLED";
		case 1:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_VISIBLE";
		case 2:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_MAIN_COLOR";
		case 3:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_SECONDARY_COLOR";
		case 4:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_TERTIARY_COLOR";
		case 5:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_MAIN_IMAGE_TEXTURE_DICTIONARY";
		case 6:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_MAIN_IMAGE_TEXTURE";
		case 7:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_MAIN_IMAGE_VISIBLE";
		case 8:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_MAIN_IMAGE_ENABLED";
		case 9:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_STATUS_TEXTURE_DICTIONARY";
		case 10:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_STATUS_TEXTURE";
		case 11:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_STATUS_VISIBLE";
		case 12:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_DECORATION_TEXTURE_DICTIONARY";
		case 13:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_DECORATION_TEXTURE";
		case 14:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_DECORATION_VISIBLE";
		case 15:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_MAIN_RAW_TEXT_ENTRY";
		case 16:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_MAIN_TEXT_LABEL_ENTRY";
		case 17:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_SECONDARY_RAW_TEXT_ENTRY";
		case 18:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_SECONDARY_TEXT_LABEL_ENTRY";
		case 19:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_SECONDARY_TEXT_VISIBLE";
		case 20:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_SECONDARY_TEXT_ENABLED";
		case 21:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_END_IMAGE_TEXTURE_DICTIONARY";
		case 22:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_END_IMAGE_TEXTURE";
		case 23:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_END_IMAGE_VISIBLE";
		case 24:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_CORNER_END_IMAGE_TEXTURE_DICTIONARY";
		case 25:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_CORNER_END_IMAGE_TEXTURE";
		case 26:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_CORNER_END_IMAGE_VISIBLE";
		case 27:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PLAYER_INDEX";
		case 28:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_FRIEND_INDEX";
		case 29:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_GAMER_HANDLE";
		case 30:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_VISIBLE";
		case 31:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_TEXT_ENABLED";
		case 32:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_ARRAY";
		case 33:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_CURRENT_HASH";
		case 34:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_CURRENT_INDEX";
		case 35:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_MAX_INDEX";
		case 36:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_LEFT_CHEVRON_ENABLED";
		case 37:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_RIGHT_CHEVRON_ENABLED";
		case 38:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_STEPPER_INDEX_CHANGE_UI_EVENT_HASH";
		case 39:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_FILL_MAXIMUM";
		case 40:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_FILL_VALUE";
		case 41:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_TEXT_FIELD_ONE";
		case 42:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_TEXT_FIELD_TWO";
		case 43:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_TEXT_FIELD_THREE";
		case 44:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_TEXT_FIELD_ONE_VISIBILITY";
		case 45:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_TEXT_FIELD_TWO_VISIBILITY";
		case 46:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_TEXT_FIELD_THREE_VISIBILITY";
		case 47:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_IMAGE_TEXTURE_ONE_DICTIONARY";
		case 48:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_IMAGE_ONE_TEXTURE";
		case 49:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_IMAGE_ONE_VISIBLE";
		case 50:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_INT_FIELD_ONE";
		case 51:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_INT_FIELD_TWO";
		case 52:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_VECTOR_FIELD_ONE";
		case 53:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_EXTRA_BOOL_FIELD_ONE";
		case 54:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_UI_FLOW_LINK";
		case 55:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_UI_EVENT_CHANNEL_HASH";
		case 56:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_UI_EVENT_FOCUS_HASH";
		case 57:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_UI_EVENT_SELECTION_HASH";
		case 58:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_TEXT";
		case 59:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_ENABLED";
		case 60:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_VISIBLE";
		case 61:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_UI_EVENT_CHANNEL_HASH";
		case 62:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_UI_EVENT_FOCUS_HASH";
		case 63:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OPTION_UI_EVENT_SELECTION_HASH";
		case 64:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_OPTION_TEXT";
		case 65:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_OPTION_ENABLED";
		case 66:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_OPTION_VISIBLE";
		case 67:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_OPTION_SELECT_HASH";
		case 68:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_TOGGLE_TEXT";
		case 69:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_TOGGLE_ENABLED";
		case 70:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_TOGGLE_VISIBLE";
		case 71:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_TOGGLE_SELECT_HASH";
		case 72:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_R3_TEXT";
		case 73:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_R3_ENABLED";
		case 74:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_R3_VISIBLE";
		case 75:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_R3_SELECT_HASH";
		case 76:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_DPAD_LEFT_RIGHT_TEXT";
		case 77:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_DPAD_LEFT_RIGHT_ENABLED";
		case 78:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_DPAD_LEFT_RIGHT_VISIBLE";
		case 79:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_PROMPT_DPAD_LEFT_RIGHT_SELECT_HASH";
		case 80:
			return "UI_DYNAMIC_MOUNT_ITEM_ENTRY_TYPE_COLLECTION_INDEX";
		case 81:
			return "UI_DYNAMIC_MOUNT_ITEM_ENTRY_TYPE_RENAME_PROMPT_ENABLED";
		case 82:
			return "UI_DYNAMIC_MOUNT_ITEM_ENTRY_TYPE_RENAME_PROMPT_VISIBLE";
		case 83:
			return "UI_DYNAMIC_MOUNT_ITEM_ENTRY_TYPE_STATS_INFO_PROMPT_TEXT";
		case 84:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_UNIQUE_ID";
		case 85:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_TRACKED";
		case 86:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_PROCESSED";
		case 87:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_SCRIPT_TYPE";
		case 88:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_GANG_ID";
		case 89:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_EXPIRATION_TIME";
		case 90:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_FILTER_TYPE";
		case 91:
			return "UI_DYNAMIC_INVITE_ENTRY_TYPE_FEED_MESSAGE_ID";
		case 92:
			return "UI_DYNAMIC_INVITE_ALL_ENABLED";
		case 93:
			return "UI_DYNAMIC_INVITE_ALL_VISIBLE";
		case 94:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OVERLAY_IMG_TICK_VISIBLE";
		case 95:
			return "UI_DYNAMIC_ITEM_ENTRY_TYPE_OVERLAY_IMG_CLOCK_VISIBLE";
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

void func_156(int iParam0, char* sParam1, char[32] cParam2, struct<27> Param10)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "[UI_INITIALIZE_DYNAMIC_TEXT_AND_END_IMAGE_ENTRY_DATABINDINGS] Initializing Dynamic Text and End Image Databindings...");
	func_171(iParam0, sParam1, cParam2, Param10);
	iParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam0, func_137(15), &(Param10.f_16));
	iParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(21), Param10.f_24);
	iParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(22), Param10.f_25);
	iParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(23), Param10.f_26);
}

bool func_157(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_158(bool bParam0)
{
	vector3 vVar0;

	if (!isItemValid(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

char* func_159(int iParam0, int iParam1)
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

bool func_160(bool bParam0, bool bParam1)
{
	if (func_164(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_141();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_161(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return playerInventoryGetItemCount(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_162(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (shopGetInventoryWeaponData(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> getPlayerInventoryEmoteWheelGUID(bool bParam0)
{
	int iVar0;

	iVar0 = func_94(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { getPlayerInventoryItemGuid(271701509, getPlayerInventoryGuid(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return getPlayerInventoryItemGuid(271701509, getPlayerInventoryGuid(bParam0), 12999093, 0);
}

int func_164(bool bParam0)
{
	struct<2> Var0;

	if (!isItemValid(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_165(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_164(bParam0);
	if (bVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(bVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bVar1, iVar2, &bVar0))
		{
			if (func_173(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_166(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return playerInventoryGetItemData(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int playerInventoryGetItemEquippedInSlotByRef(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_175(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_92(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool shopGetInventoryWeaponData(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_94(0);
	*iParam1 = { getPlayerInventoryItemGuid(bParam0, func_70(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_92(bParam0, 0), " eSlot: ", func_82(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_92(bParam0, 0));
		return false;
	}
	return true;
}

bool areInventoryItemGUIDsEqual(int iParam0, var uParam1)
{
	if (((*iParam0 == *uParam1 && iParam0->f_1 == uParam1->f_1) && iParam0->f_2 == uParam1->f_2) && iParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int canPlayerWeaponBeRemoved(int iParam0)
{
	struct<15> Var0;
	int iVar22;

	if (!isInventoryItemGuidValid(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 162, "[WEAPON_LOCKER][CAN_PLAYER_WEAPON_BE_REMOVED] - ERROR! _sWeaponGUID is not valid.");
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_94(0), iParam0, &Var0, 22, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "[WEAPON_LOCKER][CAN_PLAYER_WEAPON_BE_REMOVED] - ERROR! failed to get full inventory item.");
		return 2;
	}
	iVar22 = Var0.f_14;
	if (WEAPON::_IS_WEAPON_ONE_HANDED(Var0.f_4))
	{
		if (iVar22 == 2)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][CAN_PLAYER_WEAPON_BE_REMOVED] - Weapon: ", getItemName(Var0.f_4), " can not be removed, from primary slot.");
			return 3;
		}
	}
	else if (WEAPON::_IS_WEAPON_MELEE(Var0.f_4))
	{
		if (iVar22 == 4)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 162, "[WEAPON_LOCKER][CAN_PLAYER_WEAPON_BE_REMOVED] - Weapon: ", getItemName(Var0.f_4), " can not be removed, from primary slot.");
			return 3;
		}
	}
	return 0;
}

void func_171(int iParam0, char* sParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[UI_INITIALIZE_DYNAMIC_SHARED_DATABINDINGS] Initializing Dynamic Item Shared Databindings...: ", &cParam2);
	*iParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sParam1, &cParam2);
	iParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(0), Param10);
	iParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(1), Param10.f_1);
	iParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(2), Param10.f_2);
	iParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(54), Param10.f_3);
	iParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(55), Param10.f_4);
	iParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(57), Param10.f_5);
	iParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	iParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(58), Param10.f_7);
	iParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(59), Param10.f_8);
	iParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(60), Param10.f_9);
	iParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(61), Param10.f_10);
	iParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(67), Param10.f_11);
	iParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("IB_SELECT");
	}
	iParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_137(64), Param10.f_13);
	iParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(65), Param10.f_14);
	iParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_137(66), Param10.f_15);
	DEBUG::_0xA308F935BDECCEC0(2696, 157, "[UI_INITIALIZE_DYNAMIC_SHARED_DATABINDINGS] Setting Up Focus Hash as: ", Param10.f_6, " Name: ", UNK_0x4379B6FA65D55295(Param10.f_6), " Reading Hash: ", DATABINDING::_0x81D7183E7A8ECA72(iParam0->f_6));
	DEBUG::_0xA308F935BDECCEC0(2696, 157, "[UI_INITIALIZE_DYNAMIC_SHARED_DATABINDINGS] Setting Up Selection Hash as: ", Param10.f_5, " Name: ", UNK_0x4379B6FA65D55295(Param10.f_5), " Reading Hash: ", DATABINDING::_0x81D7183E7A8ECA72(iParam0->f_7));
	DEBUG::_0xA308F935BDECCEC0(2696, 157, "[UI_INITIALIZE_DYNAMIC_SHARED_DATABINDINGS] Setting Up UI Event Channel Hash as: ", Param10.f_4, " Name: ", UNK_0x4379B6FA65D55295(Param10.f_4), " Reading Hash: ", DATABINDING::_0x81D7183E7A8ECA72(iParam0->f_5));
}

int playerInventoryGetItemCount(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!isItemValid(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && getInventoryItemPathset(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_92(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_92(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_82(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { getPlayerInventoryItemGuid(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_92(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_94(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_92(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_94(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_92(bParam0, 0));
	}
	return iVar0;
}

bool func_173(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(bParam1, joaat("DEFAULT")) == -1925887917)
		{
			DEBUG::_0x4DC69742196F818A(8, 158, "[ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_WITH_SCRIPT_VALIDATION] SLOTID_WEAPON_LONGARM_WRAP_TINT blocked on weapon item");
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, bParam1, bParam2);
}

bool playerInventoryGetItemData(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_94(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_92(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_82(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_175(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_94(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_82(bParam1, 0));
		return false;
	}
	if (!playerInventoryGetItemData(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_82(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_92(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_82(bParam1, 0));
	return true;
}

int getInventoryItemPathset(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_178(func_177(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

bool func_177(bool bParam0)
{
	return bParam0;
}

bool func_178(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

