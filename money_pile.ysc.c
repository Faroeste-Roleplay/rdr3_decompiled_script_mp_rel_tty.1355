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
	bool bLocal_18 = false;
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
	float fVar0;
	float fVar1;
	bool bVar2;

	if (PED::IS_PED_INJURED(Global_33))
	{
		iLocal_13 = 0;
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("OBJECTEXCHANGE")) && !bLocal_18)
	{
		fVar0 = 1f;
		fVar1 = 1f;
		bVar2 = false;
		bLocal_18 = true;
		func_14(BUILTIN::FLOOR((fVar0 * BUILTIN::TO_FLOAT(func_13(joaat("SCENARIOS_MONEY_PILE"))))), bVar2, fVar1, 1, 0, 0, 1);
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
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
		func_15(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_16(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_17(&iVar0);
	}
}

char* func_13(char* sParam0)
{
	struct<5> Var0;
	char* sVar5;

	if (func_18())
	{
		return 0;
	}
	if (!func_19(3, &Var0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "Parsed Data file was somehow null on attempting to get cash tag");
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = sParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_INT(&sVar5, &Var0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 0, "We found our cashtag! ", sParam0, "=", sVar5);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "Did not find cashtag ", sParam0);
	}
	return sVar5;
}

void func_14(char* sParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6)
{
	if (func_20() == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2216, 84, "ADD_PLAYER_MONEY (", UNK_0x8F77B33B6A34D8BA(), ") - Player ", PLAYER::NETWORK_PLAYER_ID_TO_INT(), " got money.  Actual value = ", sParam0);
		if (((func_21(sParam0, sParam4, bParam6) == -1 && !bParam6) && func_22(0)) && !func_23())
		{
			func_24(sParam0, sParam4, iParam5, 0);
		}
	}
	else
	{
		if (!bParam1)
		{
			func_24(sParam0, sParam4, iParam5, 0);
		}
		func_25(sParam0, bParam1, fParam2, iParam3);
	}
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

bool func_18()
{
	return false;
}

bool func_19(int iParam0, var uParam1)
{
	if (!func_26(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 185, "GET_PARSED_DATA_FILE: attempt made to get file data with an invalid type!");
		return false;
	}
	*uParam1 = Global_1915817[iParam0];
	if (*uParam1 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 185, "GET_PARSED_DATA_FILE: No valid parsed data file found!", Global_1915817[iParam0]);
		return false;
	}
	return true;
}

int func_20()
{
	return Global_1572887.f_13;
}

int func_21(char* sParam0, char* sParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(10376, 84, "[MP_MONEY_EARN] iAmount: ", sParam0, ", bPlayerOnly: ", bParam2, ", Active Inventory: ", func_28(func_27(0), 0));
	if (func_23())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "[MP_MONEY_EARN] Transaction mirroring is enabled, forcing bPlayerOnly = TRUE!");
		bParam2 = true;
	}
	if (!bParam2 && func_22(0))
	{
		func_29(joaat("CURRENCY_CASH"), sParam0, -334626412);
		return -1;
	}
	DEBUG::_0x83407B92D46F25C3(136, 84, "[MP_MONEY_EARN] Cannot directly add  ", sParam0, " CURRENCY_CASH in MP, use awards instead!");
	UNK_0x355E72323AEE83CC(84, 1);
	return -1;
}

bool func_22(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_27(bParam0));
}

bool func_23()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "IS_INVENTORY_MIRROING_TRANSACTIONS - Not using INVENTORY_MP_MISSION, returning FALSE");
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

void func_24(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 84, "_PUSH_MONEY_EARN_UI_MESSAGE - Using delayed queue for cash event with amount ", iParam0);
			func_30(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_31(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_25(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "_SP_EARN_MONEY: iTotalCents <= 0");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(168, 0, "[SP-MONEY] Total: $", func_32(iParam0), ".");
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_33() || func_34())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_31(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		DEBUG::_0xF0783374333FD8CE(168, 0, "[SP-MONEY] Gang Savings: $", func_32(iVar0), ".");
		iParam0 = (iParam0 - iVar0);
		DEBUG::_0xF0783374333FD8CE(2216, 0, "[SP-MONEY] Remainder: $", func_32(iParam0), ". Split between ", iParam3, ", with player getting ", iVar1);
		if (iVar0 > 0)
		{
		}
		func_31(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		DEBUG::_0xF0783374333FD8CE(40, 0, "[SP-MONEY] Player: $", func_32(iVar1));
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_36(func_35(joaat("CAREER_CASH")), iVar1);
		DEBUG::_0xF0783374333FD8CE(43688, 0, "[inventory_playerbalance] Event: [EARN], Current Cash: [", UNK_0xAB3EA66D3B2C264A(), "], Value: [$", func_32(iVar1), "] Category:[", UNK_0x8F77B33B6A34D8BA(), "]");
	}
	UNK_0x355E72323AEE83CC(-1, 6);
}

bool func_26(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 26);
}

int func_27(bool bParam0)
{
	if (func_20() == -1)
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

char* func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "INVENTORY_INVALID";
		case 1:
			return "INVENTORY_SP_PLAYER";
		case 2:
			return "INVENTORY_MP_PLAYER";
		case 3:
			return "INVENTORY_MP_MISSION";
		case 4:
			return "INVENTORY_SECOND_SCREEN";
		case 5:
			return "INVENTORY_SP_BACKUP";
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

int func_29(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_37(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "ADD_ITEM_TO_PLAYER_INVENTORY - Attempting to remove an invalid item from an inventory!");
		return 0;
	}
	if (iParam1 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(2696, 157, "ADD_ITEM_TO_PLAYER_INVENTORY - Attempting to add ", iParam1, " of ", func_38(bParam0, 0), ", must be a non-zero positive amount");
		return 0;
	}
	iVar0 = func_39(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_40(bParam0, iParam1, iParam2);
	}
	Var1 = { func_41(bParam0, 0, 1) };
	Var6 = { func_42(bParam0, Var1, Var1.f_4, 0) };
	return func_43(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

void func_30(int iParam0, char* sParam1)
{
	if (iParam0 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: ", iParam0, " is non-positive, ignoring!");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Adding ", iParam0, ", Current = ", Global_1913655.f_127);
	if (func_44())
	{
		Global_1913655.f_125 = MISC::GET_GAME_TIMER();
		Global_1913655.f_126 = sParam1;
		DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Queue is currently empty, setting timer to ", sParam1, "ms");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Queue timer is already started, timer will trigger in ", ((Global_1913655.f_125 + Global_1913655.f_126) - MISC::GET_GAME_TIMER()), "ms");
	}
	Global_1913655.f_127 = (Global_1913655.f_127 + iParam0);
}

var func_31(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_45(sParam0, sParam1, iParam2);
	return uVar20;
}

char* func_32(int iParam0)
{
	return MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iParam0) / 100f), 2);
}

bool func_33()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_34()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

struct<2> func_35(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_37(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

var func_38(bool bParam0, int iParam1)
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

int func_39(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_47(func_46(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_40(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_37(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Inventory item is invalid!");
		return 0;
	}
	iVar0 = func_39(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Default item path is invalid!");
		return 0;
	}
	Var1 = { func_41(bParam0, 0, 0) };
	if (func_48(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Cannot add ", iParam1, "x of item ", func_38(bParam0, 0), " as it would exceed max quantity, aborting!");
		return 0;
	}
	if (!func_22(0))
	{
		DEBUG::_0x83407B92D46F25C3(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Cannot directly add  ", iParam1, "x item ", func_38(bParam0, 0), " in MP, use awards instead!");
		UNK_0x355E72323AEE83CC(157, 1);
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Adding ", iParam1, "x item ", func_38(bParam0, 0), " to ", func_49(Var1.f_4, 0), " with reason ", func_50(iParam2, 0));
	if (!INVENTORY::_0xCB5D11F9508A928D(func_27(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Failed to add inventory item!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Successfully added to inventory");
	return 1;
}

struct<5> func_41(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_51(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_52(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_38(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_53(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_42(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_54(bParam1) };
			if (bParam2 && func_55(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_56(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_56(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_57(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_58(bParam1) };
			switch (func_59(bParam0))
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
			if (func_60(bParam0, -1823706425))
			{
				Var0 = { func_42(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_60(bParam0, -1483207246))
			{
				Var0 = { func_42(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_42(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_60(bParam0, -1653629781))
			{
				Var0 = { func_42(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_61(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_60(bParam0, -1653629781))
			{
				Var0 = { func_42(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_38(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_38(bParam0, 0), ": ", func_49(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_42(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_37(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_38(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_27(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_43(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_37(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM - Inventory item is invalid!");
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM - Parent guid is invalid!");
		return 0;
	}
	if (func_48(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "PLAYER_INVENTORY_ADD_ITEM - Cannot add ", iParam3, "x of item ", func_38(bParam0, 0), " as it would exceed max quantity, aborting!");
		return 0;
	}
	if (!func_22(0))
	{
		DEBUG::_0x83407B92D46F25C3(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Cannot directly add  ", iParam3, "x item ", func_38(bParam0, 0), " in MP, use awards instead!");
		UNK_0x355E72323AEE83CC(157, 1);
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Adding ", iParam3, "x item ", func_38(bParam0, 0), " to ", func_49(iParam2->f_4, 0), " with reason ", func_50(iParam4, 0));
	if (!INVENTORY::_0xCB5D11F9508A928D(func_27(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Failed to add inventory item!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Successfully added to inventory");
	return 1;
}

bool func_44()
{
	return Global_1913655.f_127 == 0;
}

void func_45(char* sParam0, char* sParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(680, 212, "Set MOB_APP_DISPLAY_TRANSACTION_FEED_UPDATE sFeedText =  ", sParam0, " and sTextureDict =  ", sParam1);
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_46(bool bParam0)
{
	return bParam0;
}

bool func_47(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

bool func_48(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_62(&bParam0);
	if (!func_37(bParam0, 0) && !func_47(func_46(bParam0), 2))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "[PLAYER_INVENTORY_IS_ITEM_MAXED] Item is invalid - Failing!");
		return false;
	}
	if (!bParam3 && func_39(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - ", func_38(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam3 = true;
	}
	if (func_63(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		Var0 = { func_54(0) };
		Var4.f_9 = -1591664384;
		if (!func_56(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_57(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_55(bParam0, 1))
		{
			if (!func_56(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_57(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - No free slots for ", func_38(bParam0, 0));
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_64(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_65(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, bParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

var func_49(bool bParam0, int iParam1)
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

char* func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1965281643:
			return "ADD_REASON_INCENTIVE";
		case -1924444172:
			return "ADD_REASON_SYNCING";
		case -1216041698:
			return "ADD_REASON_AWARDS";
		case -983395630:
			return "ADD_REASON_NOTIFICATION";
		case -902540058:
			return "ADD_REASON_LOADOUT";
		case -897553835:
			return "ADD_REASON_LOOTED";
		case -746211728:
			return "ADD_REASON_USE_FAILED";
		case -669481339:
			return "ADD_REASON_GET_INVENTORY";
		case -490406031:
			return "ADD_REASON_CREATE_CHARACTER";
		case -334626412:
			return "ADD_REASON_MP_MISSION";
		case 444010018:
			return "ADD_REASON_PICKUP";
		case 752097756:
			return "ADD_REASON_DEFAULT";
		case 1157919518:
			return "ADD_REASON_SET_AMOUNT";
		case 1248274121:
			return "ADD_REASON_PURCHASED";
		case 1445013766:
			return "ADD_REASON_LOAD_SAVEGAME";
		case 1543882317:
			return "ADD_REASON_DEBUG";
		case 2073812199:
			return "ADD_REASON_MELEE";
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

struct<4> func_51(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_27(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_42(joaat("CHARACTER"), func_66(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_42(joaat("CHARACTER"), func_66(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_42(joaat("CHARACTER"), func_66(), -1591664384, bParam0);
}

int func_52(bool bParam0)
{
	vector3 vVar0;

	if (!func_37(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

char* func_53(int iParam0, int iParam1)
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

struct<4> func_54(bool bParam0)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_42(923904168, func_51(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_42(923904168, func_51(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_42(923904168, func_51(bParam0), -740156546, 0);
}

bool func_55(bool bParam0, bool bParam1)
{
	if (func_59(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_67();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_56(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_65(bParam0, *uParam1, iParam2, bParam3, 1, bParam4) > 0;
}

bool func_57(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_68(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_58(bool bParam0)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_42(271701509, func_51(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_42(271701509, func_51(bParam0), 12999093, 0);
}

int func_59(bool bParam0)
{
	struct<2> Var0;

	if (!func_37(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_60(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_59(bParam0);
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
			if (func_69(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_61(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_70(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_62(bool bParam0)
{
	if (!func_37(*bParam0, 0))
	{
		return 0;
	}
	if (!func_71(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			DEBUG::_0x83407B92D46F25C3(8, 158, "[GET_ITEM_WITHIN_ITEM_PACKAGING] Packaged item not found.");
			return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 158, "[GET_ITEM_WITHIN_ITEM_PACKAGING] Found packaged item: ", func_38(*bParam0, 0));
	return 1;
}

bool func_63(bool bParam0)
{
	return func_52(bParam0) == joaat("WEAPON");
}

int func_64(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_37(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - Attempting to check for an invalid item in the player's inventory!");
		if (func_47(func_46(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_52(bParam0) == joaat("FEE"))
	{
		return -1;
	}
	DEBUG::_0x1B08D1EB9D8C4931(567976, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - eInventoryItem: ", func_38(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(iParam1), " eSlot: ", func_49(iParam1->f_4, 0), " bCurrentSlotOnly: ", bParam2, " bPlayerOnly: ", bParam3);
	if (!bParam2 && func_39(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - ", func_38(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, iParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_27(bParam3), bParam0);
}

int func_65(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_37(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_39(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_38(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_38(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_49(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_42(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_38(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_27(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_38(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_27(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_38(bParam0, 0));
	}
	return iVar0;
}

struct<4> func_66()
{
	struct<4> Var0;

	return Var0;
}

bool func_67()
{
	return (func_72(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_73(func_42(joaat("WARDROBE"), func_51(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_68(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_27(0);
	*iParam1 = { func_42(bParam0, func_54(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_38(bParam0, 0), " eSlot: ", func_49(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_38(bParam0, 0));
		return false;
	}
	return true;
}

bool func_69(bool bParam0, bool bParam1, bool bParam2)
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

bool func_70(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_27(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_38(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_49(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_71(bool bParam0)
{
	return func_74(bParam0, 1279601681);
}

int func_72(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_75(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_27(bParam1), bParam0, bParam3);
}

int func_73(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_76(&uParam0, bParam4, bParam5, iParam6);
}

int func_74(bool bParam0, bool bParam1)
{
	if (!func_37(bParam0, 0))
	{
		return func_77(func_46(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_78(bParam1, 0), " for item ", func_38(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

bool func_75(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_76(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_79(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_38(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

int func_77(bool bParam0, bool bParam1)
{
	if (!func_47(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_78(bParam1, 0), " for bundle ", func_80(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_78(bool bParam0, int iParam1)
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

bool func_79(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_27(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_49(bParam1, 0));
		return false;
	}
	if (!func_70(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_49(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_38(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_49(bParam1, 0));
	return true;
}

var func_80(bool bParam0, int iParam1)
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

