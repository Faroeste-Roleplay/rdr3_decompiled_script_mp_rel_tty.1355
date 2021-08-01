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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	bool bVar8;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Start");
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
	}
	bVar7 = func_2() == -1;
	while (bVar7 || !func_3(0, 0))
	{
		bVar8 = (!func_4(1024) && (!func_4(32) || !func_4(64)));
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0) && bVar8)
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var3))
			{
				DEBUG::_0xF0783374333FD8CE(2728, 139, "[GENERIC_SHOP_UI_EVENTS] - Event ID: ", func_5(Var3, 0), " Hash parameter: ", UNK_0x4379B6FA65D55295(Var3.f_2), " Int parameter: ", Var3.f_1);
				if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var3.f_3))
				{
					DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Event datastore is valid!");
					DEBUG::_0xF0783374333FD8CE(40, 139, "[GENERIC_SHOP_UI_EVENTS] - Item Type: ", func_7(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_6()), 0));
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Event datastore is invalid!");
				}
				switch (Var3)
				{
					case -722926211:
					case 703281244:
						DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS - Changing page filter");
						func_8(64);
						func_8(1024);
						break;
					case -1151569080:
						if (Var3.f_2 == -2105535423)
						{
							func_9(Var3.f_1);
							func_8(4);
							func_8(32768);
							func_8(2);
							func_8(1024);
						}
						else
						{
							func_10(Var3.f_1);
							func_11(Var3.f_2);
							if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var3.f_3))
							{
								func_12(&(Var3.f_3));
							}
							func_8(16384);
							func_8(1024);
						}
						break;
					case -1740156697:
						func_12(&(Var3.f_3));
						func_13(Var3.f_1);
						DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS - Focused Index: ", Var3.f_1);
						iVar2 = func_14();
						DEBUG::_0xF0783374333FD8CE(40, 139, "[GENERIC_SHOP_UI_EVENTS - Focused Item Type: ", func_7(iVar2, 0));
						if (((iVar2 == -627085098 || iVar2 == 1751567119) || iVar2 == -419167294) || iVar2 == -841939068)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_15());
							bVar1 = iVar0;
							func_16(bVar1);
							DEBUG::_0xF0783374333FD8CE(40, 139, "[GENERIC_SHOP_UI_EVENTS - Focused Item: ", func_17(bVar1, 0));
						}
						else if (iVar2 != 336033112 || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_6());
							bVar1 = iVar0;
							func_16(bVar1);
							DEBUG::_0xF0783374333FD8CE(40, 139, "[GENERIC_SHOP_UI_EVENTS - Focused Item: ", func_17(bVar1, 0));
						}
						if (Var3.f_2 != -401761271)
						{
							func_8(2);
						}
						else
						{
							func_8(32);
						}
						func_8(1024);
						break;
					case -632467210:
						func_18(&(Var3.f_3));
						func_19(Var3.f_1);
						iVar2 = func_20();
						if (iVar2 != 336033112 || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_6());
							bVar1 = iVar0;
							func_21(bVar1);
						}
						func_8(32768);
						func_8(1024);
						break;
					case -1203660660:
						if (Var3.f_2 == -729996127)
						{
						}
						else
						{
							func_22(Var3.f_1);
							DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS - Selected Index: ", Var3.f_1);
							iVar2 = func_23();
							DEBUG::_0xF0783374333FD8CE(40, 139, "[GENERIC_SHOP_UI_EVENTS - Selected Item Type: ", func_7(iVar2, 0));
							func_24(&(Var3.f_3));
							if (iVar2 != 336033112 || iVar2 != 0)
							{
								iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_6());
								bVar1 = iVar0;
								func_25(bVar1);
								DEBUG::_0xF0783374333FD8CE(40, 139, "[GENERIC_SHOP_UI_EVENTS - Selected Item: ", func_17(bVar1, 0));
							}
						}
						func_26(Var3.f_2);
						if (Var3.f_2 == 1285135021)
						{
							func_8(512);
						}
						func_8(8);
						func_8(1024);
						break;
					case -2075827635:
						if (Var3.f_2 != 1130992209)
						{
							if (Var3.f_2 != -1980648788)
							{
								if (Var3.f_2 == -401761271)
								{
									func_8(128);
									DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Going to the next page");
								}
								else if (Var3.f_2 == 516329682)
								{
									func_8(256);
									DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Going to the prev page");
								}
							}
							else
							{
								func_8(256);
								DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Going to the prev scene");
							}
						}
						else
						{
							func_8(128);
							DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Going to the next scene");
						}
						func_4(16);
						func_8(1024);
						break;
					case 922460030:
						if (Var3.f_2 == 416030390)
						{
							Global_1915867.f_20241.f_3.f_3 = 1;
							DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] Setting that we just entered the flow!");
						}
						else if (Var3.f_2 != -1424072773)
						{
						}
						else if (Global_1915867.f_20241.f_3.f_3)
						{
							Global_1915867.f_20241.f_3.f_3 = 0;
							Global_1915867.f_20241.f_3.f_2 = 0;
							DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] We just entered the flow - ignore the first bypass!");
						}
						else
						{
							Global_1915867.f_20241.f_3.f_2 = 1;
							DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] We went through a bypass - store it.");
						}
						break;
					case -114265581:
						func_27(Var3.f_2);
						func_8(4096);
						func_8(1024);
						DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] Setting the new item collection with ID: ", Var3.f_2);
						break;
					case -120002582:
						func_27(Var3.f_2);
						func_8(4096);
						func_8(1024);
						DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] Setting the new item collection with ID: ", Var3.f_2);
						break;
					case 368072021:
						func_28(Var3.f_2);
						func_29(Var3.f_1);
						func_8(8192);
						func_8(1024);
						DEBUG::_0xF0783374333FD8CE(136, 139, "[GENERIC_SHOP_UI_EVENTS] Requesting new items to be added to the collection: ", Var3.f_2, " from starting: ", Var3.f_1);
						break;
					default:
						DEBUG::_0xF0783374333FD8CE(2728, 139, "[GENERIC_SHOP_UI_EVENTS] - Received unhandled event type! Event ID: ", func_5(Var3, 0), " Hash parameter: ", UNK_0x4379B6FA65D55295(Var3.f_2), " Int parameter: ", Var3.f_1);
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_EVENTS] - Terminate");
	func_30();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887.f_13;
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_31(Global_1572887, 0), ", so skipping");
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

bool func_4(int iParam0)
{
	return func_32(Global_1915867.f_20241.f_3, iParam0);
}

char* func_5(int iParam0, int iParam1)
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

char* func_6()
{
	return "uiItemEnum";
}

char* func_7(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2092532275:
			return "GSUI_ACTION_APPLY_POMADE";
		case -2056428614:
			return "GSUI_WARDROBE_TALISMAN";
		case -2022628635:
			return "GSUI_VEHICLE_EQUIPMENT";
		case -1968468235:
			return "GSUI_PALETTE_OPTION";
		case -1928601151:
			return "GSUI_MOONSHINE_FLAVOR";
		case -1702260384:
			return "GSUI_MOONSHINE_BUYER";
		case -1594421938:
			return "GSUI_ACTION_APPLY_VEHICLE_INSURANCE";
		case -1502467280:
			return "GSUI_WEAPON_DECORATION";
		case -1499658354:
			return "GSUI_BUSINESS_MENU_OPTION";
		case -1395073769:
			return "GSUI_TEETH";
		case -1352600334:
			return "GSUI_ACTION_CARE_HORSE";
		case -1198174119:
			return "GSUI_VEHICLE_STABLE_SLOT";
		case -1086794738:
			return "GSUI_MOONSHINE_MASH";
		case -1080155519:
			return "GSUI_SELL_HORSE";
		case -1048755899:
			return "GSUI_WEAPON_AMMO";
		case -853534656:
			return "GSUI_CLOTHING";
		case -841939068:
			return "GSUI_COUPON";
		case -772187037:
			return "GSUI_ACTION_CLEAN_WEAPON";
		case -760956867:
			return "GSUI_HAIR";
		case -698448975:
			return "GSUI_ITEM_BOUNTY";
		case -627085098:
			return "GSUI_ITEM_RECEIVE_MAIL";
		case -584027224:
			return "GSUI_CAMP_ITEM";
		case -467661559:
			return "GSUI_EMOTE_ITEM";
		case -419167294:
			return "GSUI_ITEM_RECEIVE_MISSION_DROP_TELEGRAM";
		case -395279071:
			return "GSUI_CLOTHING_MODIFY";
		case -384358143:
			return "GSUI_INVENTORY";
		case -349391286:
			return "GSUI_CRAFTED";
		case -348190488:
			return "GSUI_ITEM_STYLE";
		case -339889117:
			return "GSUI_WEAPON_CUSTOMIZE";
		case -239176093:
			return "GSUI_HORSE";
		case -87783305:
			return "GSUI_CAMP_DOG";
		case 0:
			return "GSUI_NONE";
		case 38807286:
			return "GSUI_FACIAL_HAIR";
		case 193788635:
			return "GSUI_STABLE_SLOT";
		case 317179309:
			return "GSUI_ACTION_APPLY_HORSE_INSURANCE";
		case 336033112:
			return "GSUI_MENU_OPTION";
		case 420195545:
			return "GSUI_ITEM_TRAIN_TICKET";
		case 753463028:
			return "GSUI_WARDROBE_GARMENT_SET";
		case 761079318:
			return "GSUI_WARDROBE_CLOTHING";
		case 777890122:
			return "GSUI_WEAPON_MOD";
		case 848718617:
			return "GSUI_VEHICLE";
		case 1119253406:
			return "GSUI_STABLE_SADDLE_SLOT";
		case 1394581936:
			return "GSUI_HORSE_EQUIPMENT";
		case 1425890997:
			return "GSUI_MAKEUP";
		case 1702073444:
			return "GSUI_ITEM_COLLECTION";
		case 1751567119:
			return "GSUI_ITEM_RECEIVE_COLLECTIBLE_LIST";
		case 1837492866:
			return "GSUI_STABLE_SADDLE_MONITOR";
		case 1850514202:
			return "GSUI_MAX_MOONSHINE_FLAVOR";
		case 1942587409:
			return "GSUI_WARDROBE_MASK";
		case 2036169888:
			return "GSUI_MAX_CRAFTED";
		case 2073652352:
			return "GSUI_ACTION_RENAME_HORSE";
		case 2077448405:
			return "GSUI_WARDROBE_OUTFIT";
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

void func_8(int iParam0)
{
	func_33(&(Global_1915867.f_20241.f_3), iParam0);
}

void func_9(var uParam0)
{
	Global_1915867.f_20241.f_3.f_19 = uParam0;
}

void func_10(var uParam0)
{
	Global_1915867.f_20241.f_3.f_17 = uParam0;
}

void func_11(var uParam0)
{
	Global_1915867.f_20241.f_3.f_18 = uParam0;
}

void func_12(var uParam0)
{
	Global_1915867.f_20241.f_3.f_13 = *uParam0;
}

void func_13(var uParam0)
{
	Global_1915867.f_20241.f_3.f_11 = uParam0;
}

int func_14()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_34(), func_35());
	return iVar0;
}

char* func_15()
{
	return "uiItemID";
}

void func_16(bool bParam0)
{
	Global_1915867.f_20241.f_3.f_12 = bParam0;
}

var func_17(bool bParam0, int iParam1)
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

void func_18(var uParam0)
{
	Global_1915867.f_20241.f_3.f_16 = *uParam0;
}

void func_19(var uParam0)
{
	Global_1915867.f_20241.f_3.f_14 = uParam0;
}

int func_20()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_36(), func_35());
	return iVar0;
}

void func_21(bool bParam0)
{
	Global_1915867.f_20241.f_3.f_15 = bParam0;
}

void func_22(var uParam0)
{
	Global_1915867.f_20241.f_3.f_8 = uParam0;
}

int func_23()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_37(), func_35());
	return iVar0;
}

void func_24(var uParam0)
{
	Global_1915867.f_20241.f_3.f_10 = *uParam0;
}

void func_25(bool bParam0)
{
	Global_1915867.f_20241.f_3.f_9 = bParam0;
}

void func_26(var uParam0)
{
	Global_1915867.f_20241.f_3.f_1 = uParam0;
}

void func_27(char* sParam0)
{
	Global_1915867.f_20241.f_3.f_36 = sParam0;
	DEBUG::_0xF0783374333FD8CE(8, 139, "[GENERIC_SHOP_UI_SET_COLLECTION_ID] Setting collection ID to: ", sParam0);
}

bool func_28(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1915867.f_20241.f_3.f_39 != iParam0;
	Global_1915867.f_20241.f_3.f_39 = iParam0;
	return bVar0;
}

bool func_29(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1915867.f_20241.f_3.f_38 != iParam0;
	Global_1915867.f_20241.f_3.f_38 = iParam0;
	return bVar0;
}

void func_30()
{
	Global_1915867.f_20241.f_3 = 0;
}

char* func_31(int iParam0, int iParam1)
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

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_33(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_34()
{
	return Global_1915867.f_20241.f_3.f_13;
}

char* func_35()
{
	return "uiItemType";
}

var func_36()
{
	return Global_1915867.f_20241.f_3.f_16;
}

var func_37()
{
	return Global_1915867.f_20241.f_3.f_10;
}

