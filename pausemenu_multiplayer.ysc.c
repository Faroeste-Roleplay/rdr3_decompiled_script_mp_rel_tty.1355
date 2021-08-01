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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	DEBUG::_0xF0783374333FD8CE(34952, 155, "Multiplayer Pause Menu Launched with args: ", ScriptParam_0, ", Menu: ", ScriptParam_0.f_1, ", Prev:", ScriptParam_0.f_2, ", Unique: ", ScriptParam_0.f_3);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	switch (ScriptParam_0)
	{
		case 2:
			if (ScriptParam_0.f_1 == -821438348 || ScriptParam_0.f_1 == -968517323)
			{
				if (!NETWORK::_0x2A8112A974DE1EF6())
				{
					DEBUG::_0xF0783374333FD8CE(8, 21, "Multiplayer Pause Menu - LaunchMP..., but we can't access MP.  Bailing.");
					return;
				}
				CAM::DO_SCREEN_FADE_OUT(0);
				func_1();
				HUD::SET_FRONTEND_ACTIVE(false);
				DEBUG::_0xF0783374333FD8CE(8, 155, "Multiplayer Pause Menu - LaunchMP");
			}
			else if (ScriptParam_0.f_1 == 745042118)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_2();
				HUD::SET_FRONTEND_ACTIVE(false);
				DEBUG::_0xF0783374333FD8CE(8, 155, "Multiplayer Pause Menu - LaunchSP");
			}
			else if (ScriptParam_0.f_1 == 173068202)
			{
				if (!NETWORK::_0x2A8112A974DE1EF6())
				{
					DEBUG::_0xF0783374333FD8CE(8, 21, "Multiplayer Pause Menu - LaunchMissionCreator..., but we can't access MP.  Bailing.");
					return;
				}
				if (func_3())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					HUD::SET_FRONTEND_ACTIVE(false);
					DEBUG::_0xF0783374333FD8CE(8, 155, "Multiplayer Pause Menu - LaunchMissionCreator");
				}
			}
			break;
		default:
			break;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	func_4(68);
	func_5();
	func_6(joaat("FREEROAM"), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_7(3);
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__MULTIPLAYER");
}

void func_2()
{
	func_4(4);
	func_5();
	func_7(2);
	func_6(joaat("SINGLE_PLAYER"), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__SINGLE_PLAYER");
}

bool func_3()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
		{
			NETWORK::_0x5C497525F803486B();
			DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__MULTIPLAYER__MISSION_CREATOR - We can't do that.  UGC is restricted on this account.");
			return false;
		}
	}
	func_4(68);
	func_5();
	func_6(joaat("MISSION_CREATOR"), joaat("SHIFT_F"), 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_7(3);
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__MULTIPLAYER__MISSION_CREATOR");
	return true;
}

void func_4(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 21, "SET_GAME_RESET_FLAG - Called.  Set DEBUG_ROUTER to debug 1 for more info.");
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
	DEBUG::_0xA308F935BDECCEC0(8, 21, "SET_GAME_RESET_FLAG - Done.");
}

void func_5()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 21, "CLEAR_ALL_LAUNCH_PARAM_ARGS");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_415.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887.f_415 = iParam0;
	if (iParam1 != 0)
	{
		func_8(iParam1);
	}
	if (iParam2 != 0)
	{
		func_8(iParam2);
	}
	if (iParam3 != 0)
	{
		func_8(iParam3);
	}
	if (iParam4 != 0)
	{
		func_8(iParam4);
	}
	if (iParam5 != 0)
	{
		func_8(iParam5);
	}
	if (iParam6 != 0)
	{
		func_8(iParam6);
	}
	if (iParam7 != 0)
	{
		func_8(iParam7);
	}
	if (iParam8 != 0)
	{
		func_8(iParam8);
	}
	if (iParam9 != 0)
	{
		func_8(iParam9);
	}
	if (iParam10 != 0)
	{
		func_8(iParam10);
	}
	func_9();
}

void func_7(int iParam0)
{
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 21, "SET_NEXT_ROUTER_CONTEXT - eNextRouterContext = ROUTER_CONTEXT_NONE.  That's BAD.  Defaulting to interface.  You should stop doing things and make an A/PT now.");
		iParam0 = 1;
	}
	DEBUG::_0xF0783374333FD8CE(680, 21, "SET_NEXT_ROUTER_CONTEXT - current next router context = ", func_10(Global_1572864.f_1, 0), ", next next router context = ", func_10(iParam0, 0));
	Global_1572864.f_1 = iParam0;
}

void func_8(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 21, "SET_LAUNCH_PARAM_ARG - Setting ", func_11(iParam0, 0));
	func_13(&(Global_1572887.f_415.f_1), func_12(iParam0), 3);
}

void func_9()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 21, "===== Launch Parameters ===== start");
	DEBUG::_0xF0783374333FD8CE(40, 21, "===== Mode - ", func_14(Global_1572887.f_415, 0));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_15(iVar0))
		{
			DEBUG::_0xF0783374333FD8CE(40, 21, "===== Arg - ", func_17(func_16(iVar0)));
		}
		iVar0++;
	}
	if (Global_1572887.f_415.f_5 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== Playlist - ", func_18(Global_1572887.f_415.f_5, 0));
	}
	if (Global_1572887.f_415.f_12 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 21, "===== NomContentID - ", Global_1572887.f_415.f_12);
	}
	if (Global_1572887.f_415.f_6 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== Region - ", func_19(Global_1572887.f_415.f_6, 0));
	}
	if (Global_1572887.f_415.f_7 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== District - ", func_20(Global_1572887.f_415.f_7, 0));
	}
	if (Global_1572887.f_415.f_8 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== State - ", func_21(Global_1572887.f_415.f_8, 0));
	}
	if (Global_1572887.f_415.f_9 != -1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 21, "===== Minigame - ", func_22(Global_1572887.f_415.f_9, 0));
	}
	if (Global_1572887.f_415.f_11 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 21, "===== Mission - ", Global_1572887.f_415.f_11);
	}
	DEBUG::_0xF0783374333FD8CE(8, 21, "===== Launch Parameters ===== end");
}

char* func_10(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ROUTER_CONTEXT_NONE";
		case 1:
			return "ROUTER_CONTEXT_INTERFACE";
		case 2:
			return "ROUTER_CONTEXT_SP";
		case 3:
			return "ROUTER_CONTEXT_MP";
		case 4:
			return "ROUTER_CONTEXT_TLG";
		case 5:
			return "ROUTER_CONTEXT_CLIP";
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

char* func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("TRADE_7"):
			return "LP_ARG_VALUE_TRADE_7";
		case joaat("FOLLOW_INVITE"):
			return "LP_ARG_VALUE_INT_FOLLOW_INVITE";
		case joaat("COUPON"):
			return "LP_ARG_VALUE_OPEN_COUPON_MENU";
		case joaat("RANDOM_POKER"):
			return "LP_ARG_VALUE_GO_TO_RAND_PKR_TBL";
		case joaat("LAST_MISSION"):
			return "LP_ARG_VALUE_GO_TO_LAST_MISSION";
		case -1480790826:
			return "LP_ARG_VALUE_INT_ASYNC_MM";
		case -1369260209:
			return "LP_ARG_VALUE_TRADE_9";
		case joaat("LAST_REGION"):
			return "LP_ARG_VALUE_GO_TO_LAST_REGION";
		case joaat("CCHAR"):
			return "LP_ARG_VALUE_GO_TO_CHAR_CREATE";
		case joaat("OPEN_POSSE"):
			return "LP_ARG_VALUE_START_IN_OPEN_POSSE";
		case joaat("NEW_GAME"):
			return "LP_ARG_VALUE_NEW_GAME";
		case joaat("LAST_LOCATION"):
			return "LP_ARG_VALUE_GO_TO_LAST_LOCATION";
		case joaat("RANDOM_REGION"):
			return "LP_ARG_VALUE_GO_TO_RAND_REGION";
		case 0:
			return "LP_ARG_VALUE_NULL";
		case joaat("TRADE_1"):
			return "LP_ARG_VALUE_TRADE_1";
		case 413241879:
			return "LP_ARG_VALUE_OPEN_OUTLAW_PASS_MENU";
		case joaat("TRADE_2"):
			return "LP_ARG_VALUE_TRADE_2";
		case joaat("TRADE_6"):
			return "LP_ARG_VALUE_TRADE_6";
		case joaat("BG_CUSTOM_3"):
			return "LP_ARG_VALUE_INT_BG_CUSTOM_3";
		case joaat("TRADE_3"):
			return "LP_ARG_VALUE_TRADE_3";
		case 928971890:
			return "LP_ARG_VALUE_OPEN_MISSION_LETTER";
		case joaat("BG_CUSTOM_2"):
			return "LP_ARG_VALUE_INT_BG_CUSTOM_2";
		case joaat("TRADE_4"):
			return "LP_ARG_VALUE_TRADE_4";
		case joaat("INTRO_NOT_DONE"):
			return "LP_ARG_VALUE_INTRO_NOT_DONE";
		case 1449824096:
			return "LP_ARG_VALUE_TRADE_8";
		case joaat("BG_CUSTOM_1"):
			return "LP_ARG_VALUE_INT_BG_CUSTOM_1";
		case joaat("SHIFT_F"):
			return "LP_ARG_VALUE_INT_SHIFT_F";
		case joaat("TRADE_5"):
			return "LP_ARG_VALUE_TRADE_5";
		case 1735278055:
			return "LP_ARG_VALUE_GO_TO_MY_MOON";
		case joaat("NEAR_POSSE"):
			return "LP_ARG_VALUE_GO_TO_NEAREST_POSSE";
		case joaat("HUB"):
			return "LP_ARG_VALUE_OPEN_HUB_MENU";
		case joaat("CAMP"):
			return "LP_ARG_VALUE_GO_TO_MY_CAMP";
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

int func_12(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case joaat("NEW_GAME"):
			iVar0 = 1;
			break;
		case joaat("INTRO_NOT_DONE"):
			iVar0 = 2;
			break;
		case joaat("FOLLOW_INVITE"):
			iVar0 = 3;
			break;
		case -1480790826:
			iVar0 = 4;
			break;
		case joaat("SHIFT_F"):
			iVar0 = 5;
			break;
		case joaat("BG_CUSTOM_1"):
			iVar0 = 6;
			break;
		case joaat("BG_CUSTOM_2"):
			iVar0 = 7;
			break;
		case joaat("BG_CUSTOM_3"):
			iVar0 = 8;
			break;
		case joaat("OPEN_POSSE"):
			iVar0 = 9;
			break;
		case joaat("NEAR_POSSE"):
			iVar0 = 10;
			break;
		case joaat("RANDOM_REGION"):
			iVar0 = 11;
			break;
		case joaat("LAST_REGION"):
			iVar0 = 12;
			break;
		case joaat("LAST_LOCATION"):
			iVar0 = 13;
			break;
		case joaat("LAST_MISSION"):
			iVar0 = 14;
			break;
		case joaat("RANDOM_POKER"):
			iVar0 = 15;
			break;
		case joaat("CCHAR"):
			iVar0 = 16;
			break;
		case joaat("CAMP"):
			iVar0 = 17;
			break;
		case 1735278055:
			iVar0 = 18;
			break;
		case joaat("TRADE_1"):
			iVar0 = 19;
			break;
		case joaat("TRADE_2"):
			iVar0 = 20;
			break;
		case joaat("TRADE_3"):
			iVar0 = 21;
			break;
		case joaat("TRADE_4"):
			iVar0 = 22;
			break;
		case joaat("TRADE_5"):
			iVar0 = 23;
			break;
		case joaat("TRADE_6"):
			iVar0 = 24;
			break;
		case joaat("TRADE_7"):
			iVar0 = 25;
			break;
		case 1449824096:
			iVar0 = 26;
			break;
		case -1369260209:
			iVar0 = 27;
			break;
		case joaat("COUPON"):
			iVar0 = 28;
			break;
		case joaat("HUB"):
			iVar0 = 29;
			break;
		case 413241879:
			iVar0 = 30;
			break;
		case 928971890:
			iVar0 = 31;
			break;
	}
	return iVar0;
}

bool func_13(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

char* func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MISSION"):
			return "LP_MODE_VALUE_MISSION";
		case joaat("GOLDSTORE"):
			return "LP_MODE_VALUE_GOLDSTORE";
		case joaat("SERIES"):
			return "LP_MODE_VALUE_SERIES";
		case joaat("FREEROAM"):
			return "LP_MODE_VALUE_FREEROAM";
		case joaat("CLIP"):
			return "LP_MODE_VALUE_CLIP";
		case 0:
			return "LP_MODE_VALUE_NULL";
		case joaat("MISSION_CREATOR"):
			return "LP_MODE_VALUE_MISSION_CREATOR";
		case joaat("SINGLE_PLAYER"):
			return "LP_MODE_VALUE_SINGLE_PLAYER";
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

bool func_15(int iParam0)
{
	return func_23(&(Global_1572887.f_415.f_1), iParam0, 3);
}

int func_16(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = joaat("NEW_GAME");
			break;
		case 2:
			iVar0 = joaat("INTRO_NOT_DONE");
			break;
		case 3:
			iVar0 = joaat("FOLLOW_INVITE");
			break;
		case 4:
			iVar0 = -1480790826;
			break;
		case 5:
			iVar0 = joaat("SHIFT_F");
			break;
		case 6:
			iVar0 = joaat("BG_CUSTOM_1");
			break;
		case 7:
			iVar0 = joaat("BG_CUSTOM_2");
			break;
		case 8:
			iVar0 = joaat("BG_CUSTOM_3");
			break;
		case 9:
			iVar0 = joaat("OPEN_POSSE");
			break;
		case 10:
			iVar0 = joaat("NEAR_POSSE");
			break;
		case 11:
			iVar0 = joaat("RANDOM_REGION");
			break;
		case 12:
			iVar0 = joaat("LAST_REGION");
			break;
		case 13:
			iVar0 = joaat("LAST_LOCATION");
			break;
		case 14:
			iVar0 = joaat("LAST_MISSION");
			break;
		case 15:
			iVar0 = joaat("RANDOM_POKER");
			break;
		case 16:
			iVar0 = joaat("CCHAR");
			break;
		case 17:
			iVar0 = joaat("CAMP");
			break;
		case 18:
			iVar0 = 1735278055;
			break;
		case 19:
			iVar0 = joaat("TRADE_1");
			break;
		case 20:
			iVar0 = joaat("TRADE_2");
			break;
		case 21:
			iVar0 = joaat("TRADE_3");
			break;
		case 22:
			iVar0 = joaat("TRADE_4");
			break;
		case 23:
			iVar0 = joaat("TRADE_5");
			break;
		case 24:
			iVar0 = joaat("TRADE_6");
			break;
		case 25:
			iVar0 = joaat("TRADE_7");
			break;
		case 26:
			iVar0 = 1449824096;
			break;
		case 27:
			iVar0 = -1369260209;
			break;
		case 28:
			iVar0 = joaat("COUPON");
			break;
		case 29:
			iVar0 = joaat("HUB");
			break;
		case 30:
			iVar0 = 413241879;
			break;
		case 31:
			iVar0 = 928971890;
			break;
	}
	return iVar0;
}

char* func_17(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case joaat("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case joaat("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case -1480790826:
			sVar0 = "async_mm";
			break;
		case joaat("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case joaat("BG_CUSTOM_1"):
			sVar0 = "bg_custom_1";
			break;
		case joaat("BG_CUSTOM_2"):
			sVar0 = "bg_custom_2";
			break;
		case joaat("BG_CUSTOM_3"):
			sVar0 = "bg_custom_3";
			break;
		case joaat("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case joaat("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case joaat("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case joaat("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case joaat("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case joaat("LAST_MISSION"):
			sVar0 = "last_mission";
			break;
		case joaat("RANDOM_POKER"):
			sVar0 = "random_poker";
			break;
		case joaat("CCHAR"):
			sVar0 = "cchar";
			break;
		case joaat("CAMP"):
			sVar0 = "camp";
			break;
		case 1735278055:
			sVar0 = "my_moon";
			break;
		case joaat("TRADE_1"):
			sVar0 = "trade_1";
			break;
		case joaat("TRADE_2"):
			sVar0 = "trade_2";
			break;
		case joaat("TRADE_3"):
			sVar0 = "trade_3";
			break;
		case joaat("TRADE_4"):
			sVar0 = "trade_4";
			break;
		case joaat("TRADE_5"):
			sVar0 = "trade_5";
			break;
		case joaat("TRADE_6"):
			sVar0 = "trade_6";
			break;
		case joaat("TRADE_7"):
			sVar0 = "trade_7";
			break;
		case 1449824096:
			sVar0 = "trade_8";
			break;
		case -1369260209:
			sVar0 = "trade_9";
			break;
		case joaat("COUPON"):
			sVar0 = "coupon";
			break;
		case joaat("HUB"):
			sVar0 = "hub";
			break;
		case 413241879:
			sVar0 = "outlaw_pass";
			break;
		case 928971890:
			sVar0 = "mission_letter";
			break;
	}
	return sVar0;
}

char* func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_PLAYLIST_INVALID";
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
		case 2:
			return "NET_PLAYLIST_ADVERSARY_SMALL";
		case 3:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
		case 4:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
		case 6:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
		case 7:
			return "NET_PLAYLIST_ELIMINATION_SMALL";
		case 8:
			return "NET_PLAYLIST_ELIMINATION_MEDIUM";
		case 9:
			return "NET_PLAYLIST_ELIMINATION_LARGE";
		case 10:
			return "NET_PLAYLIST_NOMINATED_SERIES_START";
		case 11:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
		case 12:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
		case 13:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
		case 14:
			return "NET_PLAYLIST_PRIVATE_SERIES";
		case 15:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
		case 16:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
		case 17:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
		case 18:
			return "NET_PLAYLIST_SHOOTOUT";
		case 19:
			return "NET_PLAYLIST_CAPTURE";
		case 20:
			return "NET_PLAYLIST_HARDCORE_SERIES";
		case 21:
			return "NET_PLAYLIST_MAX";
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
			return "REGION_INVALID";
		case 0:
			return "REGION_FIRST";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 30:
			return "REGION_BGV_LAST";
		case 31:
			return "REGION_BLU_FIRST";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_LAST";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_LAST";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRW_FIRST";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 45:
			return "REGION_GRZ_COLTER";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 52:
			return "REGION_GRW_LAST";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_FIRST";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_LAST";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_FIRST";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_LAST";
		case 99:
			return "REGION_SCM_FIRST";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_LAST";
		case 113:
			return "REGION_TAL_FIRST";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 120:
			return "REGION_GAP_FIRST";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_LAST";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_LAST";
		case 127:
			return "REGION_CHO_FIRST";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_LAST";
		case 135:
			return "REGION_HEN_FIRST";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 139:
			return "REGION_CENTRALUNIONRR";
		case 140:
			return "REGION_LAST";
		case 150:
			return "REGION_MAX";
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
			return "DISTRICT_INVALID";
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		case 17:
			return "NUM_DISTRICTS";
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

char* func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "RDR_STATE_INVALID";
		case 0:
			return "RDR_STATE_AMBARINO";
		case 1:
			return "RDR_STATE_LEMOYNE";
		case 2:
			return "RDR_STATE_NEWAUSTIN";
		case 3:
			return "RDR_STATE_NEWHANOVER";
		case 4:
			return "RDR_STATE_WESTELIZABETH";
		case 5:
			return "RDR_STATE_GUARMA";
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

char* func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "MINIGAME_INVALID";
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_MP_POKER_SWANSONS_STATION";
		case 3:
			return "MINIGAME_MP_POKER_TUMBLEWEED";
		case 4:
			return "MINIGAME_MP_POKER_VALENTINE";
		case 5:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 6:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 7:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 8:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 9:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 10:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 11:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 12:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 13:
			return "MINIGAME_SP_LAST";
		case 14:
			return "MINIGAME_SP_MAX";
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

bool func_23(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

