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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	struct<8> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_35 = 0;
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
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = -1082130432;
	var uLocal_56 = -1082130432;
	var uLocal_57 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&Local_16, vScriptParam_0);
	if (func_2() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) == 7)
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "No Jewelry Chests.  Deleting Jewelry Chest blip.");
			func_5(&Local_16);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_16);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_16.f_7))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "net_buried_lost_jewelry SCRIPT was launched with no scenario point");
		func_5(&Local_16);
	}
	while (func_6(&Local_16))
	{
		if (func_7())
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_RANDOM_DIG_SITE_SCRIPT_RUN: Start cleanup!");
			func_5(&Local_16);
		}
		if (func_8(&Local_16))
		{
			func_5(&Local_16);
		}
		BUILTIN::WAIT(0);
	}
	DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_RANDOM_DIG_SITE_CHEST_SCRIPT_RUN = FALSE: Start cleanup!");
	func_5(&Local_16);
}

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(4);
	*uParam0 = 6;
	uParam0->f_1 = func_9(vParam1);
	func_10(uParam0);
	if (func_11(uParam0, 1))
	{
		uParam0->f_16 = func_12(uParam0->f_1);
	}
	if (uParam0->f_1 <= 80)
	{
		if (!func_11(uParam0, 8))
		{
			func_13(uParam0, 8);
		}
	}
	if (func_11(uParam0, 8))
	{
		uParam0->f_10 = "script@mech@treasure_hunting@chest";
		uParam0->f_11 = "PBL_CHEST_01";
		uParam0->f_17 = func_14();
		uParam0->f_14 = func_15(0);
		uParam0->f_15 = func_16();
	}
	else
	{
		uParam0->f_10 = "script@mech@treasure_hunting@grab";
		uParam0->f_11 = "PBL_GRAB_01";
	}
	uParam0->f_2 = 0;
	if (func_11(uParam0, 1))
	{
		uParam0->f_19 = joaat("COLLECTIBLE_ITEMS_BURIED_MOUNDS");
	}
	else
	{
		uParam0->f_19 = joaat("COLLECTIBLE_ITEMS_BURIED_FLAT_GROUND");
	}
	uParam0->f_8 = vParam1.x;
	uParam0->f_7 = vParam1.y;
	uParam0->f_4 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_7, true) };
	func_17(&(uParam0->f_30), uParam0->f_4);
	func_18(*uParam0, uParam0->f_1);
	func_19();
	if (func_20(uParam0->f_4))
	{
		if (func_11(uParam0, 8))
		{
			if (func_21())
			{
				if (!func_11(uParam0, 16))
				{
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: Set Flag RANDOM_DIG_SITE_FLAG_DUG_UP_CHEST_AVAILABLE");
					func_13(uParam0, 16);
				}
			}
		}
	}
}

int func_2()
{
	return Global_1572887.f_13;
}

struct<2> func_3(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT CLEANUP_RANDOM_DIG_SITE:");
	Global_1213072[PLAYER::PLAYER_ID() /*9*/] = -1;
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	func_22(&(uParam0->f_12), 1, 1);
	func_23(uParam0);
	if (func_11(uParam0, 2))
	{
		func_24(uParam0->f_4);
	}
	func_25(*uParam0, uParam0->f_1, 1);
	func_25(*uParam0, uParam0->f_1, 16);
	func_25(*uParam0, uParam0->f_1, 32);
	func_26();
	func_27();
	func_28(&(uParam0->f_30));
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_25))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_25, false);
	}
	func_29(0);
	func_30(&(uParam0->f_30));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_RANDOM_DIG_SITE_SCRIPT_RUN: iScenarioScriptID = ", uParam0->f_8);
		func_5(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_31(uParam0) < 10)
	{
		if (func_11(uParam0, 8))
		{
			if (!func_32(*uParam0, uParam0->f_1, 16))
			{
				if (func_33(uParam0->f_4, &(uParam0->f_22), &(uParam0->f_20), &(uParam0->f_21), func_11(uParam0, 1), 1073741824 /* Float: 2f */))
				{
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: Dug up chest fournd. Set Flag COLLECTIBLE_FLAG_CHEST_DUG_UP");
					func_34(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (func_35(*uParam0) && func_36(uParam0))
		{
			func_37(uParam0, 11);
			if (func_38(uParam0->f_12))
			{
				func_22(&(uParam0->f_12), 1, 1);
			}
			func_27();
		}
		else if (func_31(uParam0) <= 6 && func_31(uParam0) > 1)
		{
			if (func_32(*uParam0, uParam0->f_1, 16))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: Chest already dug up, while near by.");
				func_37(uParam0, 12);
			}
		}
		bVar1 = (func_31(uParam0) <= 6 && !func_39(uParam0->f_12, 1));
		if (func_40(func_11(uParam0, 2)))
		{
			if (func_11(uParam0, 2))
			{
				func_41(uParam0->f_12, uParam0->f_4);
			}
			else
			{
				func_42(&(uParam0->f_30), uParam0->f_4, bVar1, 1, 1, 0);
			}
		}
		func_43(uParam0->f_12);
		func_44(uParam0->f_4, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	}
	switch (func_31(uParam0))
	{
		case 0:
			if (func_11(uParam0, 8))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_14, false);
				STREAMING::REQUEST_MODEL(uParam0->f_17, false);
				STREAMING::REQUEST_MODEL(uParam0->f_15, false);
			}
			if (func_11(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_16, false);
			}
			func_45(&(uParam0->f_30.f_6), uParam0->f_4, 1.5f, 1, 319, 0);
			if (func_32(*uParam0, uParam0->f_1, 16))
			{
				if (func_46(&(uParam0->f_9), uParam0->f_10, "PBL_LOOTED", uParam0->f_4, uParam0->f_22, uParam0->f_16, uParam0->f_20, uParam0->f_14, uParam0->f_21, uParam0->f_17, func_11(uParam0, 1)))
				{
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_INIT - UPDATE_RANDOM_DIG_SITE: Chest already dug up, when script kicked off.");
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_INIT - int of eCollectible ->, ", *uParam0);
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_INIT - iLastRandomItem ->, ", Global_1213365.f_2764);
					if (Global_1213365.f_2764 != *uParam0)
					{
						func_37(uParam0, 12);
					}
					else
					{
						func_37(uParam0, 15);
					}
				}
			}
			else if (!func_20(uParam0->f_4))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_INIT - NET_COLLECTIBLES_IS_DIRT_PILE_AVAIABLE - FALSE - Scenario Looted");
				func_37(uParam0, 15);
			}
			else if (!func_11(uParam0, 16))
			{
				func_37(uParam0, 1);
			}
			break;
		case 1:
			if (func_11(uParam0, 8))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_15))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_14, uParam0->f_4 + Vector(-10f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_4 + Vector(-20f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					return false;
				}
			}
			if (func_11(uParam0, 1))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					uParam0->f_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_16, uParam0->f_4, true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					return false;
				}
				if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_4 + Vector(1f, 0f, 0f), &(uParam0->f_29), &(uParam0->f_26)))
				{
					return false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_22, func_47(uParam0->f_26, 0), 2, true);
				}
			}
			func_37(uParam0, 2);
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_10, 64, uParam0->f_11, true, true);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: anim scene NOT loaded.");
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
			func_37(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_9, true, false))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: Anim Scene loaded.");
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (func_11(uParam0, 8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "CHEST", uParam0->f_20, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "DRESSING", uParam0->f_21, 0);
				}
				if (func_11(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "MOUND", uParam0->f_22, 0);
					}
				}
				func_37(uParam0, 4);
			}
			break;
		case 4:
			if (func_40(func_11(uParam0, 2)))
			{
				if (func_11(uParam0, 1))
				{
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY on Dirt Mound.");
					func_48(uParam0->f_22, uParam0->f_22, 0);
					func_37(uParam0, 5);
				}
				else
				{
					DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: No Dirt Mound.");
					func_37(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_49(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!func_38(uParam0->f_12))
				{
					uParam0->f_12 = func_50("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_4, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				func_37(uParam0, 6);
			}
			break;
		case 6:
			if (func_38(uParam0->f_12))
			{
				func_51(uParam0->f_12, &(uParam0->f_30.f_5));
				if (func_52(uParam0->f_12, 1))
				{
					if (func_32(*uParam0, uParam0->f_1, 32))
					{
						func_29(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_22(&(uParam0->f_12), 1, 1);
						func_53(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_25(*uParam0, uParam0->f_1, 32);
						func_37(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (func_54(uParam0->f_12, 1) > 0f)
					{
						func_55();
						func_57(func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1));
					}
					else if (func_54(uParam0->f_12, 1) == 0f)
					{
						func_27();
					}
				}
			}
			break;
		case 7:
			func_55();
			if ((((func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("WEAPON_UNARMED") && func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == joaat("WEAPON_UNARMED")) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::_IS_PED_CARRYING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_23(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, func_59(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_4, 1), 2);
				func_37(uParam0, 8);
			}
			break;
		case 8:
			func_60();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_9, "player", uParam0->f_11, 1069379748 /* Float: 1.48f */, true, 128, 20000, -1082130432 /* Float: -1f */);
			uParam0->f_25 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_4, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			func_37(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_9, false))
			{
				func_37(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_9, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_9, false))
			{
				if (!func_61(uParam0))
				{
					return false;
				}
				func_62(uParam0->f_7);
				func_63(func_11(uParam0, 1), func_11(uParam0, 2));
				func_29(0);
				func_30(&(uParam0->f_30));
				if (func_11(uParam0, 2))
				{
					func_24(uParam0->f_4);
				}
				if (func_11(uParam0, 8))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_20, "ChestDugUp", true);
					TASK::_0x188F8071F244B9B8(uParam0->f_20, 1);
					func_34(*uParam0, uParam0->f_1, 16);
				}
				func_62(uParam0->f_7);
				func_27();
				if (func_11(uParam0, 2))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("WEAPON_KIT_METAL_DETECTOR"), false, 0, false, false);
				}
				func_37(uParam0, 15);
			}
			break;
		case 11:
			if (func_32(*uParam0, uParam0->f_1, 1))
			{
				if (func_64())
				{
					func_25(*uParam0, uParam0->f_1, 1);
					func_37(uParam0, 12);
				}
				else if (!func_35(*uParam0))
				{
					func_37(uParam0, 4);
					func_25(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (func_38(uParam0->f_12))
			{
				func_22(&(uParam0->f_12), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: delete oiLootEntItem on client that is not digging.");
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_23));
			}
			bVar0 = func_65();
			if (!func_66(bVar0, 0))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM DIG SITE - wait for Remote digging Player to send item to be awarded.");
				return false;
			}
			DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM DIG SITE - item received from Remote digging Player! eItem = ", bVar0);
			uParam0->f_3 = bVar0;
			uParam0->f_19 = func_67(uParam0->f_3);
			if (!func_11(uParam0, 4))
			{
				func_13(uParam0, 4);
			}
			if (func_11(uParam0, 8))
			{
				uParam0->f_18 = func_68(uParam0->f_3);
				DEBUG::_0x4DC69742196F818A(40, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_WAIT_FOR_REMOTE_PLAYER_TO_BE_DONE request model for post dig loot item - ", func_69(uParam0->f_18, 0));
				STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			}
			func_25(*uParam0, uParam0->f_1, 1);
			if (func_11(uParam0, 8))
			{
				func_37(uParam0, 13);
			}
			else
			{
				func_37(uParam0, 4);
			}
			break;
		case 13:
			if (!func_35(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_4 + Vector(0.1f, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_CREATE_POST_DIG_LOOT_ITEM - post dig loot item doesnt exist - ");
						return false;
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_24, true, true);
					MAP::_0x1726963E6049DB53(uParam0->f_24);
					func_37(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_24) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_24))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_CHEST_LOOT_WAIT - post dig loot item doesnt exist. Let's create it again.");
				uParam0->f_24 = 0;
				func_37(uParam0, 13);
				return false;
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_CHEST_LOOT_WAIT - Player using valid Ransack Scenario Pt.");
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), true), uParam0->f_4, true) < 1.5f)
				{
					func_62(uParam0->f_7);
					Global_1213365.f_2764 = *uParam0;
					DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT UPDATE_RANDOM_DIG_SITE: RANDOM_DIG_SITE_CHEST_LOOT_WAIT - iLastRandomItem , ", Global_1213365.f_2764);
					func_37(uParam0, 15);
				}
			}
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		DEBUG::_0x4DC69742196F818A(8, 215, "GET_RANDOM_DIG_SITE_FROM_SCENARIO: Scenario Point Radius = ", iVar0);
		Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_2 = iVar0;
	}
	return iVar0;
}

void func_10(var uParam0)
{
	if (uParam0->f_1 <= 50)
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_RANDOM_DIG_SITE_STATE: Set Flag RANDOM_DIG_SITE_FLAG_SHOULD_HAVE_DIRT_PILE");
		func_13(uParam0, 1);
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_RANDOM_DIG_SITE_STATE: Set Flag RANDOM_DIG_SITE_FLAG_ACTIVATE_METAL_DETECTOR");
		func_13(uParam0, 2);
	}
}

bool func_11(var uParam0, int iParam1)
{
	return func_70(uParam0->f_13, iParam1);
}

int func_12(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 2:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 3:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 4:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 5:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 6:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 7:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 8:
			iVar0 = joaat("MP005_P_DIRTPILE_RIO_BURIED");
			break;
		case 9:
			iVar0 = joaat("MP005_P_DIRTPILE_RIO_BURIED");
			break;
		case 10:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 11:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 12:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 13:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 14:
			iVar0 = joaat("MP005_P_DIRTPILE_RIO_BURIED");
			break;
		case 15:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 16:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 17:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 18:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 19:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 20:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 21:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
			break;
		case 22:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 23:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 24:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 25:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 26:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 27:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 28:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
			break;
		case 29:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 30:
			iVar0 = joaat("MP005_P_DIRTPILE_CUM_BURIED");
			break;
		case 31:
			iVar0 = joaat("MP005_P_DIRTPILE_CUM_BURIED");
			break;
		case 32:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 33:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 34:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 35:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 36:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA01_BURIED");
			break;
		case 37:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA03_BURIED");
			break;
		case 38:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA03_BURIED");
			break;
		case 39:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 40:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 41:
			iVar0 = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
			break;
		case 42:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 43:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 44:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 45:
			iVar0 = joaat("MP005_P_DIRTPILE_BAY_BURIED");
			break;
		case 46:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 47:
			iVar0 = joaat("MP005_P_DIRTPILE_GEN_BURIED");
			break;
		case 48:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 49:
			iVar0 = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
			break;
		case 50:
			iVar0 = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
			break;
	}
	return iVar0;
}

void func_13(var uParam0, int iParam1)
{
	if (!func_70(uParam0->f_13, iParam1))
	{
		func_71(&(uParam0->f_13), iParam1);
	}
}

int func_14()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 40000);
	if (iVar0 > 30000)
	{
		return joaat("MP005_P_DRESSINGLBMHAY04X");
	}
	else if (iVar0 > 20000)
	{
		return joaat("MP005_P_DRESSINGLBMHAY03X");
	}
	else if (iVar0 > 10000)
	{
		return joaat("MP005_P_DRESSINGLBMHAY02X");
	}
	return joaat("MP005_P_DRESSINGLBMHAY01X");
}

int func_15(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 4;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (bParam0)
	{
		return joaat("P_STRONGBOX_SNOW_01X");
	}
	switch (iVar1)
	{
		case 0:
			return joaat("P_STRONGBOX_MUDDY_01X");
		case 1:
			return joaat("P_STRONGBOX_SNOW_01X");
		case 2:
			return joaat("P_STRONGBOX_WATERLOGGED_01X");
		case 3:
			return joaat("P_STRONGBOX_RUSTED_01X");
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "GET_NET_COLLECTIBLE_RANDOM_CHEST_MODEL: random value out of range: ", iVar1);
	return joaat("P_STRONGBOX_MUDDY_01X");
}

int func_16()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	switch (iVar1)
	{
		case 0:
			return joaat("S_JEWLERYBOX_SM_FANCY01X");
		case 1:
			return joaat("S_JEWLERYBOX_SM_FANCY02X");
		case 2:
			return joaat("S_JEWLERYBOX_SM_PLAIN01X");
		case 3:
			return joaat("S_JEWLERYBOX_SM_PLAIN02X");
		case 4:
			return joaat("S_JEWLERYBOX_SM_POOR01X");
		case 5:
			return joaat("S_JEWLERYBOX_SM_POOR02X");
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "GET_NET_COLLECTIBLE_RANDOM_LOOT_ENTITY_MODEL: random value out of range: ", iVar1);
	return joaat("S_JEWLERYBOX_SM_POOR01X");
}

void func_17(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_7, 6, 0, false, -1, -1, 0);
	}
}

void func_18(var uParam0, var uParam1)
{
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
}

void func_19()
{
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
}

bool func_20(vector3 vParam0)
{
	return !PERSISTENCE::_0xB6E1A185C2B9319A(vParam0);
}

bool func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (Global_1213072[iVar3 /*9*/].f_1 == Global_1213072[iVar2 /*9*/].f_1)
				{
					if (Global_1213072[iVar3 /*9*/].f_2 == Global_1213072[iVar2 /*9*/].f_2)
					{
						DEBUG::_0x4DC69742196F818A(136, 215, "IS_NET_COLLECTIBLE_DIG_SITE_DUG_UP_CHEST_AVAILABLE: iRemotePlayer iItem = ", Global_1213072[iVar3 /*9*/].f_2, " iLocalPlayer iItem = ", Global_1213072[iVar2 /*9*/].f_2);
						if (Global_1213072[iVar3 /*9*/].f_6)
						{
							DEBUG::_0x4DC69742196F818A(8, 215, "IS_NET_COLLECTIBLE_DIG_SITE_DUG_UP_CHEST_AVAILABLE: -> T");
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_22(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_72(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_73(iVar0);
	*uParam0 = 0;
}

void func_23(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
	{
		DEBUG::_0x4DC69742196F818A(40, 215, "CLEAR_RANDOM_DIG_SITE_MOUND_EAGLE_EYE: Mound Model = ", func_69(ENTITY::GET_ENTITY_MODEL(uParam0->f_22), 0));
		func_74(uParam0->f_22, uParam0->f_22, 0);
	}
}

void func_24(vector3 vParam0)
{
	if (func_75(Global_1213361, vParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_CLEAR_METAL_DETECTOR_GLOBAL Setting metal detector global back to <<0,0,0>>");
		Global_1213361 = { 0f, 0f, 0f };
	}
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	func_76(&(Global_1213365[iParam0 /*251*/][iParam1]), iParam2);
}

void func_26()
{
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
}

void func_27()
{
	if (Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}
}

void func_28(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_DO_COMMON_CLEANUP");
	func_77(uParam0);
	func_78(&(uParam0->f_6), 1);
}

void func_29(bool bParam0)
{
	if (bParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_SET_PLAYER_NON_GRIEFABLE - Set as Ghost");
		func_79(0, 6);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_SET_PLAYER_NON_GRIEFABLE - Clearing Ghost");
		func_80(0, 6, 0);
	}
}

void func_30(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_7);
	}
}

int func_31(var uParam0)
{
	return uParam0->f_2;
}

bool func_32(int iParam0, int iParam1, int iParam2)
{
	return func_70(Global_1213365[iParam0 /*251*/][iParam1], iParam2);
}

bool func_33(vector3 vParam0, var uParam3, bool bParam4, int iParam5, bool bParam6, char* sParam7)
{
	var uVar0[1];
	var uVar2[1];
	var uVar4[1];
	int iVar6[4];
	int iVar11[4];
	int iVar16[30];

	DEBUG::_0x1B08D1EB9D8C4931(408, 215, "SEARCH_DIG_SITE_FOR_DUG_UP_CHEST - range: ", sParam7, " | distance: ", BUILTIN::VDIST(Global_34, vParam0));
	iVar6[0] = joaat("P_STRONGBOX_MUDDY_01X");
	iVar6[1] = joaat("P_STRONGBOX_SNOW_01X");
	iVar6[2] = joaat("P_STRONGBOX_WATERLOGGED_01X");
	iVar6[3] = joaat("P_STRONGBOX_RUSTED_01X");
	iVar11[0] = joaat("MP005_P_DRESSINGLBMHAY04X");
	iVar11[1] = joaat("MP005_P_DRESSINGLBMHAY03X");
	iVar11[2] = joaat("MP005_P_DRESSINGLBMHAY02X");
	iVar11[3] = joaat("MP005_P_DRESSINGLBMHAY01X");
	if (bParam6)
	{
		iVar16[0] = joaat("MP005_P_DIRTPILE_HEN_B_BURIED");
		iVar16[1] = joaat("MP005_P_DIRTPILE_GEN_BURIED");
		iVar16[2] = joaat("MP005_P_DIRTPILE_SCA03_BURIED");
		iVar16[3] = joaat("MP005_P_DIRTPILE_BAY_BURIED");
		iVar16[4] = joaat("MP005_P_DIRTPILE_BAY_UNBURIED");
		iVar16[5] = joaat("MP005_P_DIRTPILE_BIG01_BURIED");
		iVar16[6] = joaat("MP005_P_DIRTPILE_BIG01_UNBURIED");
		iVar16[7] = joaat("MP005_P_DIRTPILE_BIG02_MINE_BURIED");
		iVar16[8] = joaat("MP005_P_DIRTPILE_BIG02_MINE_UNBURIED");
		iVar16[9] = joaat("MP005_P_DIRTPILE_BIG03_BURIED");
		iVar16[10] = joaat("MP005_P_DIRTPILE_BIG03_UNBURIED");
		iVar16[11] = joaat("MP005_P_DIRTPILE_CUM_BURIED");
		iVar16[12] = joaat("MP005_P_DIRTPILE_CUM_UNBURIED");
		iVar16[13] = joaat("MP005_P_DIRTPILE_GRI_MINES_BURIED");
		iVar16[14] = joaat("MP005_P_DIRTPILE_GRI_MINES_UNBURIED");
		iVar16[15] = joaat("MP005_P_DIRTPILE_HEA_BURIED");
		iVar16[16] = joaat("MP005_P_DIRTPILE_HEA_UNBURIED");
		iVar16[17] = joaat("MP005_P_DIRTPILE_HEN_BURIED");
		iVar16[18] = joaat("MP005_P_DIRTPILE_HEN_UNBURIED");
		iVar16[19] = joaat("MP005_P_DIRTPILE_RIO_BURIED");
		iVar16[20] = joaat("MP005_P_DIRTPILE_RIO_UNBURIED");
		iVar16[21] = joaat("MP005_P_DIRTPILE_ROA_BURIED");
		iVar16[22] = joaat("MP005_P_DIRTPILE_ROA_UNBURIED");
		iVar16[23] = joaat("MP005_P_DIRTPILE_SCA01_BURIED");
		iVar16[24] = joaat("MP005_P_DIRTPILE_SCA01_UNBURIED");
		iVar16[25] = joaat("MP005_P_DIRTPILE_SCA02_BURIED");
		iVar16[26] = joaat("MP005_P_DIRTPILE_SCA02_UNBURIED");
		iVar16[27] = joaat("MP005_P_DIRTPILE_SHOVEL01X");
		iVar16[28] = joaat("MP005_P_DIRTPILE_TALL_BURIED");
		iVar16[29] = joaat("MP005_P_DIRTPILE_TALL_UNBURIED");
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (func_81(&uVar0, &iVar16, 1, vParam0, sParam7) > 0)
			{
				DEBUG::_0x4DC69742196F818A(24, 215, "SEARCH_DIG_SITE_FOR_DUG_UP_CHEST - Found oiMound at range: ", sParam7);
				*uParam3 = uVar0[0];
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		if (func_81(&uVar4, &iVar11, 1, vParam0, sParam7) > 0)
		{
			DEBUG::_0x4DC69742196F818A(24, 215, "SEARCH_DIG_SITE_FOR_DUG_UP_CHEST - Found oiDressing at range: ", sParam7);
			*iParam5 = uVar4[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam4))
	{
		if (func_81(&uVar2, &iVar6, 1, vParam0, sParam7) > 0)
		{
			DEBUG::_0x4DC69742196F818A(24, 215, "SEARCH_DIG_SITE_FOR_DUG_UP_CHEST - Found oiChest at range: ", sParam7);
			if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "SEARCH_DIG_SITE_FOR_DUG_UP_CHEST - Chest already dug up");
				*bParam4 = uVar2[0];
				return true;
			}
		}
	}
	else if (func_81(&uVar2, &iVar6, 1, vParam0, sParam7) > 0)
	{
		DEBUG::_0x4DC69742196F818A(24, 215, "SEARCH_DIG_SITE_FOR_DUG_UP_CHEST - Found extra oiChest at range: ", sParam7);
		if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SEARCH_DIG_SITE_FOR_DUG_UP_CHEST - Chest already dug up");
			*bParam4 = uVar2[0];
			return true;
		}
	}
	return false;
}

void func_34(int iParam0, int iParam1, int iParam2)
{
	func_71(&(Global_1213365[iParam0 /*251*/][iParam1]), iParam2);
}

bool func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = -1f;
	iVar4 = PLAYER::PLAYER_ID();
	if (Global_1213072[iVar4 /*9*/].f_1 != iParam0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar5 = iVar1;
			if (Global_1213072[iVar5 /*9*/].f_1 == Global_1213072[iVar4 /*9*/].f_1)
			{
				if (Global_1213072[iVar5 /*9*/].f_2 == Global_1213072[iVar4 /*9*/].f_2)
				{
					if (Global_1213072[iVar5 /*9*/].f_4)
					{
						if (fVar2 == -1f || fVar2 >= Global_1213072[iVar5 /*9*/].f_8)
						{
							fVar2 = Global_1213072[iVar5 /*9*/].f_8;
							iVar3 = iVar5;
							DEBUG::_0x4DC69742196F818A(392, 215, "IS_NET_COLLECTIBLE_DIG_SITE_BEING_USED_BY_REMOTE_PLAYER: iPlayerIDStore = ", iVar3, "| fDistStore = ", fVar2);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > 0f)
	{
		if (Global_1275959.f_154[Global_1275959] != Global_1275959.f_154[iVar3])
		{
			DEBUG::_0x4DC69742196F818A(2440, 215, "IS_NET_COLLECTIBLE_DIG_SITE_BEING_USED_BY_REMOTE_PLAYER: iPlayerID = ", iVar3, "| distance = ", Global_1213072[iVar3 /*9*/].f_8, " -> T");
			if (!func_70(Global_1213365[Global_1213072[iVar4 /*9*/].f_1 /*251*/][Global_1213072[iVar4 /*9*/].f_2], 1))
			{
				func_71(&(Global_1213365[Global_1213072[iVar4 /*9*/].f_1 /*251*/][Global_1213072[iVar4 /*9*/].f_2]), 1);
			}
			return true;
		}
		if (!func_70(Global_1213365[Global_1213072[iVar4 /*9*/].f_1 /*251*/][Global_1213072[iVar4 /*9*/].f_2], 32))
		{
			func_71(&(Global_1213365[Global_1213072[iVar4 /*9*/].f_1 /*251*/][Global_1213072[iVar4 /*9*/].f_2]), 32);
		}
	}
	return false;
}

bool func_36(var uParam0)
{
	return Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
}

void func_37(var uParam0, int iParam1)
{
	DEBUG::_0x4DC69742196F818A(680, 215, "SET_RANDOM_DIG_SITE_STATE: ", func_82(uParam0->f_2, 0), " -> ", func_82(iParam1, 0));
	uParam0->f_2 = iParam1;
}

bool func_38(int iParam0)
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

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_72(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3);
}

bool func_40(bool bParam0)
{
	if (func_83(joaat("KIT_COLLECTOR_SPADE"), 1))
	{
		if (bParam0)
		{
			if (func_83(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_41(var uParam0, vector3 vParam1)
{
	if (!func_20(vParam1))
	{
		func_24(vParam1);
		return;
	}
	if (func_84(Global_1213361))
	{
		DEBUG::_0xF0783374333FD8CE(56, 215, "NET_COLLECTIBLES_UPDATE_METAL_DETECTOR_GLOBAL Metal detector global is not defined - Setting to ", &vParam1);
		Global_1213361 = { vParam1 };
	}
	else if (!func_75(Global_1213361, vParam1))
	{
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1213361))
		{
			DEBUG::_0xF0783374333FD8CE(56, 215, "NET_COLLECTIBLES_UPDATE_METAL_DETECTOR_GLOBAL Metal detector global is defined but this location is closer, setting to ", &vParam1);
			Global_1213361 = { vParam1 };
		}
	}
}

void func_42(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_84(Global_1213361))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_10 == -1f)
		{
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1213361, vParam1, true);
		}
		if (uParam0->f_10 <= 5f)
		{
			bVar0 = true;
		}
	}
	bVar1 = func_85(uParam0, bParam4, bVar0);
	if (!bVar1)
	{
		if (uParam0->f_8)
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE: rumble disabled in state - ", func_86(uParam0->f_11, 0));
			uParam0->f_8 = 0;
		}
	}
	if (uParam0->f_11 < 8)
	{
		uParam0->f_11++;
	}
	else
	{
		uParam0->f_11 = 0;
	}
	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
		{
			uParam0->f_8 = 1;
			DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE: end of checks, re-enabling rumble for next cycle");
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_9 == -1f)
	{
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);
	}
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_87()));
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
						if (Global_1940410.f_38 != joaat("WEAPON_KIT_METAL_DETECTOR"))
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_88(uParam0, 1);
					}
				}
				else
				{
					func_88(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - uParam0->f_9) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - uParam0->f_9) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (uParam0->f_9 < 3f && bParam7)
			{
				DEBUG::_0xF0783374333FD8CE(8, 191, "COLLECTIBLE_RUMBLE_STATE_DIST_CHECK - disable respawn");
				func_89(250);
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_90(&(uParam0->f_1));
			func_88(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_77(uParam0);
				}
				func_88(uParam0, 0);
			}
			else if (func_91(&(uParam0->f_1)) >= 2f)
			{
				func_88(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				DEBUG::_0xF0783374333FD8CE(8, 191, "COLLECTIBLE_RUMBLE_STATE_WITHIN_RADIUS - disable respawn");
				func_89(250);
			}
			break;
	}
}

void func_43(int iParam0)
{
	int iVar0;

	if (func_38(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1275959.f_8);
		if ((((((((((((PED::_IS_PED_CARRYING(Global_1275959.f_8) || TASK::IS_PED_GETTING_UP(Global_1275959.f_8)) || PED::IS_PED_RAGDOLL(Global_1275959.f_8)) || !func_92()) || Global_1102630.f_3664) || ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_JUMPING(Global_1275959.f_8)) || PED::IS_PED_CLIMBING(Global_1275959.f_8)) || PED::IS_PED_FALLING(Global_1275959.f_8)) || PED::_IS_PED_HOGTIED(Global_33)) || func_93(Global_33)) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
		{
			if (func_94(iParam0, 0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 215, "NET_COLLECTIBLES_USE_CONTEXT_DISABLE_CHECK - Disable Dig Prompt.");
				func_95(iParam0, 0, 1, 1);
			}
		}
		else if (!func_94(iParam0, 0))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 215, "NET_COLLECTIBLES_USE_CONTEXT_DISABLE_CHECK - Enable Dig Prompt.");
			func_95(iParam0, 1, 1, 1);
		}
	}
}

void func_44(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_56(Global_33, vParam0, 1) < fParam5)
	{
		if (Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_1 != iParam3)
		{
			DEBUG::_0x4DC69742196F818A(680, 215, "UPDATE_NET_COLLECTIBLE_LOCATION_PLAYER_DATA: Set iCollectibleType in Player Data from ", func_96(Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_1, 0), " to ", func_96(iParam3, 0));
			Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam3;
		}
		if (Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam4)
		{
			DEBUG::_0x4DC69742196F818A(136, 215, "UPDATE_NET_COLLECTIBLE_LOCATION_PLAYER_DATA: Set iItem in Player Data from ", Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_2, " to ", iParam4);
			Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_2 = iParam4;
		}
	}
}

void func_45(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	if (!func_97(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, bParam4, iParam5, bParam6, iParam7);
		if (func_97(uParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(440, 0, "ADD_VEG_MODIFIER_SPHERE_SAFE: Adding a veg modifier at pos: ", &vParam1, " and radius: ", bParam4);
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(440, 0, "ADD_VEG_MODIFIER_SPHERE_SAFE: Failed to add veg modifier at pos: ", &vParam1, " and radius: ", bParam4);
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "Trying to create a veg modifier with a veg modifier handle that is already in use. Please remove veg modifier before using the same handle again");
	}
}

bool func_46(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (bParam12)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam7))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: request eMoundModel model.");
			STREAMING::REQUEST_MODEL(iParam7, false);
			return false;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam9))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: request eChestModel model.");
		STREAMING::REQUEST_MODEL(iParam9, false);
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam11))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: request eDressingModel model.");
		STREAMING::REQUEST_MODEL(iParam11, false);
		return false;
	}
	if (bParam12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: creating oiMound.");
			iParam6 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam7, vParam3, true, true, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: oiMound doesn't exist.");
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: creating oiChest.");
		iParam8 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam9, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: oiChest doesn't exist.");
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: creating oiChest.");
		bParam10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam11, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: oiDressing doesn't exist.");
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 64, sParam2, false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: anim scene NOT loaded.");
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: load anim scene.");
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam3, 0f, 0f, 0f, 2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: register oiMound to anim scene.");
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "MOUND", iParam6, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam8))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: oiChest oiMound to anim scene.");
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CHEST", iParam8, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam10))
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: register oiDressing to anim scene.");
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "DRESSING", bParam10, 0);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(*uParam0, "player", false) == Global_33)
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: removing player from anim scene.");
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "player", Global_33);
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam2, true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
		DEBUG::_0x4DC69742196F818A(8, 215, "SET_DIG_SITE_DIRT_MOUND_DUG: ->T");
		return true;
	}
	return false;
}

Vector3 func_47(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_98(vParam0) };
	vVar3 = { func_100(func_100(vVar0, func_99((fParam3 - 90f))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_100(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_101(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_101(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: invalid entity!");
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276832.f_32))
	{
		Global_1276832.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276832.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276832.f_32);
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: adding entity with model ", func_69(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " to tracking itemset");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: model ", func_69(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " was already a member of the itemset!?");
	}
	if (!func_102(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2, 0);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276832[iVar0 /*2*/]))
		{
			DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: registering entity with model ", func_69(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " at index ", iVar0);
			Global_1276832[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: no space in the array for the entity, won't be trackable in eagle eye!");
	return 0;
}

bool func_49(var uParam0, float fParam1)
{
	if (func_83(joaat("KIT_COLLECTOR_SPADE"), 1))
	{
		if (Global_1102630.f_3664)
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "g_mpPlayerStatusLocalData.bDamagedThisFrame - dig shouldn't be active");
			return false;
		}
		if (func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) > fParam1)
		{
			return false;
		}
		if (func_11(uParam0, 2))
		{
			if (func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("WEAPON_KIT_METAL_DETECTOR") && func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) <= 1.6f)
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_RANDOM_DIG_SITE_DIG_SITE_BE_ACTIVE: RANDOM_DIG_SITE_FLAG_ACTIVATE_METAL_DETECTOR -> T");
				return true;
			}
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_RANDOM_DIG_SITE_DIG_SITE_BE_ACTIVE: RANDOM_DIG_SITE_FLAG_SHOULD_HAVE_DIRT_PILE -> T");
			return true;
		}
	}
	return false;
}

int func_50(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	DEBUG::_0xA308F935BDECCEC0(40, 145, "REGISTER_USE_CONTEXT_AREA ", sParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_AREA - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_AREA - Cannot register a context with an invalid control!");
		return 0;
	}
	if (func_84(vParam2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_AREA - Cannot register a context with a zero position!");
		return 0;
	}
	if (fParam5 <= 0f)
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_AREA - Cannot register a context with a non-existent radius!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_103(iVar0, 2))
		{
			if (func_104(vParam2, Global_1952230[iVar0 /*23*/].f_6, 0.01f, 1) && iParam1 == Global_1952230[iVar0 /*23*/].f_4)
			{
				iVar2 = iVar0;
				DEBUG::_0xA308F935BDECCEC0(40, 145, "REGISTER_USE_CONTEXT_AREA - Registered context that already exist for script ", func_105(iVar2));
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_106(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, bParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_AREA - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_AREA - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_51(int iParam0, var uParam1)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 215, "NET_COLLECTIBLE_HANDLE_USE_CONTEXT_SOUND: IS_USE_CONTEXT_BEING_DISPLAYED(ucCollectible) - ", MISC::_0xF216F74101968DB0(func_39(iParam0, 1)));
		if (func_39(iParam0, 1))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
				DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLE_HANDLE_USE_CONTEXT_SOUND: playing collectible_found sound");
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}
}

bool func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_72(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		if (Global_1952230[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1952230[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1952230[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1952230[iVar0 /*23*/].f_18) * (1f - Global_1952230[iVar0 /*23*/].f_22)));
			DEBUG::_0x1B08D1EB9D8C4931(559272, 162, "USE_CONTEXT_HAS_METERED_CONTEXT_FILLED - fProgress = ", MISC::_0x2B6846401D68E563(Global_1952230[iVar0 /*23*/].f_22, 4), ", iAutoFillTime = ", Global_1952230[iVar0 /*23*/].f_18, ", iTimeRemaining = ", iVar4, ", iTimeElapsed = ", iVar3, ", iCurrentTime = ", iVar1);
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1952230[iVar0 /*23*/].f_21 = iVar1;
			Global_1952230[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
}

void func_53(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
	}
}

float func_54(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return 0f;
	}
	iVar0 = func_72(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1952230[iVar0 /*23*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1952230[iVar0 /*23*/].f_3);
}

void func_55()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
}

float func_56(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_57(char* sParam0)
{
	if (!Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_4 = 1;
		if (Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_8 < 0f)
		{
			DEBUG::_0x4DC69742196F818A(24, 215, "SET_NET_COLLECTIBLE_DIG_SITE_BEING_USED_FLAG: My dist = ", sParam0);
			Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_8 = sParam0;
		}
	}
}

int func_58(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_59(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_60()
{
	if (Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;
	}
}

bool func_61(var uParam0)
{
	int iVar0;

	Global_1213072[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;
	while (!func_107(uParam0->f_19, &iVar0))
	{
		return false;
	}
	func_109(func_108(joaat("COLLECTIBLES_COLLECTED"), joaat("W_SHOVEL")), 1);
	if (func_11(uParam0, 2))
	{
		func_109(func_108(joaat("COLLECTIBLES_COLLECTED"), joaat("W_METAL_DETECTOR")), 1);
	}
	DEBUG::_0x4DC69742196F818A(8, 215, "ADD_RANDOM_DIG_SITE_ITEM_TO_SATCHEL: -> T");
	return true;
}

void func_62(int iParam0)
{
	if (PERSISTENCE::_0xFB7CF1DE938A3E22(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_MARK_DIRT_PILE_DUG scenario already marked as looted.");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_MARK_DIRT_PILE_DUG marking scenario as looted");
	PERSISTENCE::_0x8245C1F3262F4AC2(iParam0);
}

void func_63(bool bParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(136, 215, "NET_COLLECTIBLE_IS_SET_COMPLETE Dirt Pile: ", bParam0, " Metal Detector: ", bParam1);
	if (bParam1)
	{
		func_110(-753305330, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_110(11389876, 0, 255, 0, 0);
	}
}

bool func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (Global_1213072[iVar3 /*9*/].f_1 == Global_1213072[iVar2 /*9*/].f_1)
				{
					if (Global_1213072[iVar3 /*9*/].f_2 == Global_1213072[iVar2 /*9*/].f_2)
					{
						DEBUG::_0x4DC69742196F818A(136, 215, "IS_NET_COLLECTIBLE_DIG_SITE_DUG_UP_BY_REMOTE_PLAYER: iRemotePlayer iItem = ", Global_1213072[iVar3 /*9*/].f_2, " iLocalPlayer iItem = ", Global_1213072[iVar2 /*9*/].f_2);
						if (Global_1213072[iVar3 /*9*/].f_5)
						{
							DEBUG::_0x4DC69742196F818A(8, 215, "IS_NET_COLLECTIBLE_DIG_SITE_DUG_UP_BY_REMOTE_PLAYER: -> T");
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_65()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar4 = iVar2;
			if (iVar4 != iVar3)
			{
				DEBUG::_0x4DC69742196F818A(136, 215, "GET_NET_COLLECTIBLE_DIG_SITE_INVENOTRY_ITEM_RECEIVED_BY_REMOTE_PLAYER: iRemotePlayer iRandomDigLocation = ", Global_1213072[iVar4 /*9*/], " iLocalPlayer iRandomDigLocation = ", Global_1213072[iVar3 /*9*/]);
				if (Global_1213072[iVar4 /*9*/].f_1 == Global_1213072[iVar3 /*9*/].f_1)
				{
					DEBUG::_0x4DC69742196F818A(136, 215, "GET_NET_COLLECTIBLE_DIG_SITE_INVENOTRY_ITEM_RECEIVED_BY_REMOTE_PLAYER: iRemotePlayer iCollectibleType = ", Global_1213072[iVar4 /*9*/].f_1, " iLocalPlayer iCollectibleType = ", Global_1213072[iVar3 /*9*/].f_1);
					if (Global_1213072[iVar4 /*9*/].f_2 == Global_1213072[iVar3 /*9*/].f_2)
					{
						DEBUG::_0x4DC69742196F818A(136, 215, "GET_NET_COLLECTIBLE_DIG_SITE_INVENOTRY_ITEM_RECEIVED_BY_REMOTE_PLAYER: iRemotePlayer iItem = ", Global_1213072[iVar4 /*9*/].f_2, " iLocalPlayer iItem = ", Global_1213072[iVar3 /*9*/].f_2);
						DEBUG::_0x4DC69742196F818A(8, 215, "IS_NET_COLLECTIBLE_DIG_SITE_BEING_USED_BY_REMOTE_PLAYER: iRemotePlayer = ", iVar4);
						if (Global_1213072[iVar4 /*9*/].f_6)
						{
							bVar1 = Global_1213072[iVar4 /*9*/].f_3;
							DEBUG::_0x4DC69742196F818A(40, 215, "GET_NET_COLLECTIBLE_DIG_SITE_INVENOTRY_ITEM_RECEIVED_BY_REMOTE_PLAYER: eItem = ", func_111(bVar1, 0));
							return bVar1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return bVar1;
}

bool func_66(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ARROWHEAD_AGATE"):
			return joaat("COLLECTIBLE_ARROWHEAD_AGATE");
		case joaat("PROVISION_ARROWHEAD_BONE"):
			return joaat("COLLECTIBLE_ARROWHEAD_BONE");
		case joaat("PROVISION_ARROWHEAD_CHIPPED"):
			return joaat("COLLECTIBLE_ARROWHEAD_CHIPPED");
		case joaat("PROVISION_ARROWHEAD_CRUDE"):
			return joaat("COLLECTIBLE_ARROWHEAD_CRUDE");
		case joaat("PROVISION_ARROWHEAD_FELDSPAR"):
			return joaat("COLLECTIBLE_ARROWHEAD_FELDSPAR");
		case joaat("PROVISION_ARROWHEAD_FLINT"):
			return joaat("COLLECTIBLE_ARROWHEAD_FLINT");
		case joaat("PROVISION_ARROWHEAD_OBSIDIAN"):
			return joaat("COLLECTIBLE_ARROWHEAD_OBSIDIAN");
		case joaat("PROVISION_ARROWHEAD_QUARTZ"):
			return joaat("COLLECTIBLE_ARROWHEAD_QUARTZ");
		case joaat("PROVISION_ARROWHEAD_RAW"):
			return joaat("COLLECTIBLE_ARROWHEAD_RAW");
		case joaat("PROVISION_ARROWHEAD_ROUGH"):
			return joaat("COLLECTIBLE_ARROWHEAD_ROUGH");
		case joaat("PROVISION_ARROWHEAD_SLATE"):
			return joaat("COLLECTIBLE_ARROWHEAD_SLATE");
		case joaat("PROVISION_ARROWHEAD_SPLINTERED"):
			return joaat("COLLECTIBLE_ARROWHEAD_SPLINTERED");
		case joaat("PROVISION_HRLM_BRUSH_BOAR"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_BOAR");
		case joaat("PROVISION_HRLM_BRUSH_EBONY"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_EBONY");
		case joaat("PROVISION_HRLM_BRUSH_GOATHAIR"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_GOATHAIR");
		case joaat("PROVISION_HRLM_BRUSH_HORSEHAIR"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_HORSEHAIR");
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD");
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD_NG"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD_NG");
		case joaat("PROVISION_HRLM_COMB_BOXWOOD"):
			return joaat("COLLECTIBLE_HRLM_COMB_BOXWOOD");
		case joaat("PROVISION_HRLM_COMB_CHERRYWOOD"):
			return joaat("COLLECTIBLE_HRLM_COMB_CHERRYWOOD");
		case joaat("PROVISION_HRLM_COMB_IVORY"):
			return joaat("COLLECTIBLE_HRLM_COMB_IVORY");
		case joaat("PROVISION_HRLM_COMB_TORTOISESHELL"):
			return joaat("COLLECTIBLE_HRLM_COMB_TORTOISESHELL");
		case joaat("PROVISION_HRLM_HAIRPIN_EBONY"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_EBONY");
		case joaat("PROVISION_HRLM_HAIRPIN_IVORY"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_IVORY");
		case joaat("PROVISION_HRLM_HAIRPIN_JADE"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_JADE");
		case joaat("PROVISION_HRLM_HAIRPIN_METAL"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_METAL");
		case joaat("PROVISION_HRLM_HAIRPIN_WOODEN"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_WOODEN");
		case joaat("PROVISION_JEWELRY_AMETHYST_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_AMETHYST_NECKLACE");
		case joaat("PROVISION_JEWELRY_BLCK_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_BLCK_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_CARVED_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_CARVED_BRACELET");
		case joaat("PROVISION_JEWELRY_CORAL_DNGL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_CORAL_DNGL_EARRING");
		case joaat("PROVISION_JEWELRY_CORAL_RING"):
			return joaat("COLLECTIBLE_JEWELRY_CORAL_RING");
		case joaat("PROVISION_JEWELRY_DMND_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_DMND_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_DMND_PENDT_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_DMND_PENDT_EARRING");
		case joaat("PROVISION_JEWELRY_DROP_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_DROP_EARRING");
		case joaat("PROVISION_JEWELRY_ELK_TOOTH_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_ELK_TOOTH_EARRING");
		case joaat("PROVISION_JEWELRY_EMERALD_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_EMERALD_EARRING");
		case joaat("PROVISION_JEWELRY_EMERALD_RING"):
			return joaat("COLLECTIBLE_JEWELRY_EMERALD_RING");
		case joaat("PROVISION_JEWELRY_FRENCH_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_FRENCH_DMND_RING");
		case joaat("PROVISION_JEWELRY_GLD_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_GLD_CROSS_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_CROSS_NECKLACE");
		case joaat("PROVISION_JEWELRY_GLD_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_GLD_PENDT_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_PENDT_NECKLACE");
		case joaat("PROVISION_JEWELRY_GRNET_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_GRNET_BRACELET");
		case joaat("PROVISION_JEWELRY_GRNET_POST_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_GRNET_POST_EARRING");
		case joaat("PROVISION_JEWELRY_MOON_RING"):
			return joaat("COLLECTIBLE_JEWELRY_MOON_RING");
		case joaat("PROVISION_JEWELRY_MTHR_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_MTHR_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_ONYX_RING"):
			return joaat("COLLECTIBLE_JEWELRY_ONYX_RING");
		case joaat("PROVISION_JEWELRY_PEARL_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_BRACELET");
		case joaat("PROVISION_JEWELRY_PEARL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_EARRING");
		case joaat("PROVISION_JEWELRY_PEARL_RING"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_RING");
		case joaat("PROVISION_JEWELRY_PERS_TURQ_RING"):
			return joaat("COLLECTIBLE_JEWELRY_PERS_TURQ_RING");
		case joaat("PROVISION_JEWELRY_PORCELAIN_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_PORCELAIN_NECKLACE");
		case joaat("PROVISION_JEWELRY_QN_DMND_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_QN_DMND_EARRING");
		case joaat("PROVISION_JEWELRY_RUDY_DNGL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_RUDY_DNGL_EARRING");
		case joaat("PROVISION_JEWELRY_SLVR_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_SLVR_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_SPHR_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_SPHR_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_SPHR_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_SPHR_BRACELET");
		case joaat("PROVISION_JEWELRY_TOPAZ_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_TOPAZ_NECKLACE");
		case joaat("PROVISION_JEWELRY_TOPAZ_RING"):
			return joaat("COLLECTIBLE_JEWELRY_TOPAZ_RING");
		case joaat("PROVISION_JEWELRY_TURQ_STUD_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_TURQ_STUD_EARRING");
		case joaat("PROVISION_JEWELRY_TURQUOISE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_TURQUOISE_BRACELET");
		case joaat("PROVISION_JEWELRY_TURQUOISE_RING"):
			return joaat("COLLECTIBLE_JEWELRY_TURQUOISE_RING");
		case joaat("PROVISION_JEWELRY_WHT_DMND_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_WHT_DMND_EARRING");
		case joaat("PROVISION_JEWELRY_WHTGLD_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_WHTGLD_DMND_RING");
		case joaat("PROVISION_JEWELRY_YLWGLD_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_YLWGLD_DMND_RING");
		case joaat("PROVISION_COIN_1700_NY_TKN"):
			return joaat("COLLECTIBLE_COIN_1700_NY_TKN");
		case joaat("PROVISION_COIN_1787_CENT_TKN"):
			return joaat("COLLECTIBLE_COIN_1787_CENT_TKN");
		case joaat("PROVISION_COIN_1789_PNY"):
			return joaat("COLLECTIBLE_COIN_1789_PNY");
		case joaat("PROVISION_COIN_1792_LIB_QTR"):
			return joaat("COLLECTIBLE_COIN_1792_LIB_QTR");
		case joaat("PROVISION_COIN_1792_NICKEL"):
			return joaat("COLLECTIBLE_COIN_1792_NICKEL");
		case joaat("PROVISION_COIN_1792_QTR"):
			return joaat("COLLECTIBLE_COIN_1792_QTR");
		case joaat("PROVISION_COIN_1794_SLV_DLR"):
			return joaat("COLLECTIBLE_COIN_1794_SLV_DLR");
		case joaat("PROVISION_COIN_1795_HLF_EAG"):
			return joaat("COLLECTIBLE_COIN_1795_HLF_EAG");
		case joaat("PROVISION_COIN_1796_HLF_PNY"):
			return joaat("COLLECTIBLE_COIN_1796_HLF_PNY");
		case joaat("PROVISION_COIN_1797_GLD_EAG"):
			return joaat("COLLECTIBLE_COIN_1797_GLD_EAG");
		case joaat("PROVISION_COIN_1798_SLV_DLR"):
			return joaat("COLLECTIBLE_COIN_1798_SLV_DLR");
		case joaat("PROVISION_COIN_1800_FIVE_DLR"):
			return joaat("COLLECTIBLE_COIN_1800_FIVE_DLR");
		case joaat("PROVISION_COIN_1800_GLD_DLR"):
			return joaat("COLLECTIBLE_COIN_1800_GLD_DLR");
		case joaat("PROVISION_COIN_1800_GLD_QTR"):
			return joaat("COLLECTIBLE_COIN_1800_GLD_QTR");
		case joaat("PROVISION_COIN_1800_HLF_DIME"):
			return joaat("COLLECTIBLE_COIN_1800_HLF_DIME");
		case joaat("PROVISION_CONDOR_EGG"):
			return joaat("COLLECTIBLE_EGG_CONDOR");
		case joaat("PROVISION_DUCK_EGG"):
			return joaat("COLLECTIBLE_EGG_DUCK");
		case joaat("PROVISION_EAGLE_EGG"):
			return joaat("COLLECTIBLE_EGG_EAGLE");
		case joaat("PROVISION_EGRET_EGG"):
			return joaat("COLLECTIBLE_EGG_EGRET");
		case joaat("PROVISION_GOOSE_EGG"):
			return joaat("COLLECTIBLE_EGG_GOOSE");
		case joaat("PROVISION_HAWK_EGG"):
			return joaat("COLLECTIBLE_EGG_HAWK");
		case joaat("PROVISION_HERON_EGG"):
			return joaat("COLLECTIBLE_EGG_HERON");
		case joaat("PROVISION_LOON_EGG"):
			return joaat("COLLECTIBLE_EGG_LOON");
		case joaat("PROVISION_SPOONBILL_EGG"):
			return joaat("COLLECTIBLE_EGG_SPOONBILL");
		case joaat("PROVISION_VULTURE_EGG"):
			return joaat("COLLECTIBLE_EGG_VULTURE");
		case 972001444:
			return -1926116512;
		case 1051711290:
			return 1832068122;
		case -1574273736:
			return 237248172;
		case -564862271:
			return 1798945032;
		case 698668228:
			return 151002497;
		case -282219948:
			return -1199922785;
		case -925996336:
			return -408379377;
		case -488648162:
			return -1465903195;
		case -1471980896:
			return -930591306;
		case 1287909434:
			return -1021507854;
		case -399160143:
			return -14146038;
		case -413279196:
			return -1189402959;
		case -1901964465:
			return 1925678741;
		case -1962391614:
			return 1736254176;
		case 1081670855:
			return 732479966;
		case 2031475177:
			return 256108181;
		case -669648037:
			return -1668855818;
		case -1695562218:
			return -14631498;
		case 866218183:
			return -1747721085;
		case 212472674:
			return -754054823;
		default:
			break;
	}
	return joaat("COLLECTIBLE_ARROWHEAD_AGATE");
}

int func_68(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

var func_69(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(joaat("DUMMY_MODEL_FOR_SCRIPT"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_70(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_71(var uParam0, int iParam1)
{
	func_112(uParam0, iParam1);
}

int func_72(int iParam0)
{
	return iParam0;
}

void func_73(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_113(iParam0))
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

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: invalid entity!");
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276832.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276832.f_32))
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: removing entity with model ", func_69(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " from tracking itemset");
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276832.f_32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: itemset was invalid or entity with model ", func_69(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " was not in tracking itemset");
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276832[iVar0 /*2*/]) && Global_1276832[iVar0 /*2*/] == iParam0)
		{
			DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: unregistering entity with model ", func_69(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " at index ", iVar0);
			MISC::_COPY_MEMORY(&(Global_1276832[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: couldn't find entity in the manager");
	return 0;
}

bool func_75(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_76(var uParam0, int iParam1)
{
	func_114(uParam0, iParam1);
}

void func_77(var uParam0)
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_4 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_78(var uParam0, int iParam1)
{
	if (func_97(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "REMOVE_VEG_MODIFIER_SPHERE_SAFE: Removing veg modifier");
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_79(int iParam0, int iParam1)
{
	if (!func_115(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 162, "NET_HUD__SET_LOCAL_PLAYER_GHOSTED: Setting ghost type ", func_116(iParam0, 0), " from source ", func_117(iParam1, 0), " for local player.");
		UNK_0x355E72323AEE83CC(162, 7);
		MISC::SET_BIT(&(Global_1072032.f_22542.f_417[iParam0 /*12*/]), iParam1);
		Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_118();
	}
}

void func_80(int iParam0, int iParam1, bool bParam2)
{
	if (func_115(iParam0, iParam1) && (!bParam2 || Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 162, "NET_HUD__CLEAR_LOCAL_PLAYER_GHOSTED: Clearing ghost type ", func_116(iParam0, 0), " from source ", func_117(iParam1, 0), " for local player.");
		UNK_0x355E72323AEE83CC(162, 7);
		MISC::CLEAR_BIT(&(Global_1072032.f_22542.f_417[iParam0 /*12*/]), iParam1);
		Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_118();
	}
}

int func_81(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_119(uParam0, iParam1, iVar0, iParam2);
	func_120(iVar0);
	return iVar1;
}

char* func_82(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "RANDOM_DIG_SITE_STATE_INVALID";
		case 0:
			return "RANDOM_DIG_SITE_INIT";
		case 1:
			return "RANDOM_DIG_SITE_CREATE_ENTITIES";
		case 2:
			return "RANDOM_DIG_SITE_REQUEST_ANIM_SCENE";
		case 3:
			return "RANDOM_DIG_SITE_LOAD_ANIM_SCENE";
		case 4:
			return "RANDOM_DIG_SITE_CREATE_CLUES";
		case 5:
			return "RANDOM_DIG_SITE_CREATE_USE_CONTEXT";
		case 6:
			return "RANDOM_DIG_SITE_USE_CONTEXT_HOLD_CHECK";
		case 7:
			return "RANDOM_DIG_SITE_STATE_PRE_ANIM_SCENE_START";
		case 8:
			return "RANDOM_DIG_SITE_STATE_ANIM_SCENE_START";
		case 9:
			return "RANDOM_DIG_SITE_STATE_ANIM_SCENE_RUNNING_CHECK";
		case 10:
			return "RANDOM_DIG_SITE_ANIM_SCENE_FINISH_WAIT";
		case 11:
			return "RANDOM_DIG_SITE_WAIT_FOR_REMOTE_PLAYER_TO_BE_DONE";
		case 12:
			return "RANDOM_DIG_SITE_SETUP_WHEN_REMOTE_PLAYER_DUG";
		case 13:
			return "RANDOM_DIG_SITE_CREATE_POST_DIG_LOOT_ITEM";
		case 14:
			return "RANDOM_DIG_SITE_CHEST_LOOT_WAIT";
		case 15:
			return "RANDOM_DIG_SITE_STATE_DONE";
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

bool func_83(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_66(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_121(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Found weapon item in player's satchel.");
				return true;
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find weapon item in player's satchel.");
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_122(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_123(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_124(bParam0, 0, 0, 0) >= iParam1;
}

bool func_84(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_85(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_124(joaat("KIT_COLLECTORS_BAG"), 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_125(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_126())
			{
				return 0;
			}
			break;
		case 3:
			if (Global_1048576)
			{
				return 0;
			}
			break;
		case 4:
			if (func_127())
			{
				return 0;
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::_0xEC7E480FF8BD0BED(Global_33))
			{
				return 0;
			}
			break;
		case 7:
			if (!bParam1 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		case 8:
			if (bParam2 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		default:
			uParam0->f_11 = 0;
			DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE_CHECKS: netCollectibleDivinationState couldn't be handled, moving to NET_COLLECTIBLE_RUMBLE_CHECK_FIRST_CHECK");
			break;
	}
	return 1;
}

char* func_86(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_COLLECTORS_BAGS";
		case 1:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_SHOP";
		case 2:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_MINIGAME";
		case 3:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_MISSION";
		case 4:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_IS_ANIMAL";
		case 5:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_PLAYER_CONTROL";
		case 6:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_ITEM_INTERACTION";
		case 7:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_RUMBLE_DISTANCE";
		case 8:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_DETECTING_DISTANCE";
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

float func_87()
{
	return Global_1146683.f_2169[89 /*205*/].f_201;
}

void func_88(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_89(int iParam0)
{
	UNK_0x355E72323AEE83CC(223, 6);
	DEBUG::_0xA308F935BDECCEC0(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] Request to delay respawn availability for _iMilliseconds: ", iParam0);
	if (iParam0 <= 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] ERROR! Disable duration can not be <= 0");
		return;
	}
	Global_1896750.f_3977 = MISC::GET_GAME_TIMER();
	Global_1896750.f_3977.f_1 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] iRespawnDisabledTimeStamp: ", Global_1896750.f_3977);
}

void func_90(var uParam0)
{
	func_128(uParam0, 0f);
}

float func_91(var uParam0)
{
	if (!func_129(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_130(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_131() - uParam0->f_1);
}

bool func_92()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_132(Global_33, 1369124074)) && !func_132(Global_33, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_93(int iParam0)
{
	if (func_133(iParam0))
	{
		return true;
	}
	if (func_134(iParam0))
	{
		return true;
	}
	if (func_135(iParam0))
	{
		return true;
	}
	if (func_136(iParam0))
	{
		return true;
	}
	if (func_137(iParam0))
	{
		return true;
	}
	return false;
}

bool func_94(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 145, "IS_USE_CONTEXT_ENABLED - Invalid context! Returning false.");
		return false;
	}
	return !func_103(iParam0, 4);
}

void func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (bParam2 && !func_38(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ENABLED - Invalid context!");
		return;
	}
	sVar0 = func_72(iParam0);
	if (bParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Enable use context, ", sVar0);
		func_138(iParam0, 4);
		if (bParam3)
		{
			func_139(sVar0, 1);
		}
		func_140(sVar0, 1);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Disable use context, ", sVar0);
		func_141(iParam0, 4);
		func_140(sVar0, 0);
	}
}

char* func_96(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_COLLECTIBLE_INVALID";
		case 0:
			return "NET_COLLECTIBLE_TAROT_CARDS";
		case 1:
			return "NET_COLLECTIBLE_ARROWHEADS";
		case 2:
			return "NET_COLLECTIBLE_JEWELRY";
		case 3:
			return "NET_COLLECTIBLE_HEIRLOOMS";
		case 4:
			return "NET_COLLECTIBLE_COINS";
		case 5:
			return "NET_COLLECTIBLE_BIRD_EGGS";
		case 6:
			return "NET_COLLECTIBLE_RANDOM";
		case 7:
			return "NET_COLLECTIBLE_FOSSILS_MUD";
		case 8:
			return "NET_COLLECTIBLE_FOSSILS_SNOW";
		case 9:
			return "NET_COLLECTIBLE_FOSSILS_SNOW_DIRT";
		case 10:
			return "NET_COLLECTIBLE_FOSSILS_WATER_FRESH";
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

bool func_97(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_98(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

Vector3 func_99(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_100(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_101(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_102(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	bool bVar15;

	if (func_142() == 0)
	{
		DEBUG::_0x4423BBAB7EB2B96B(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: net_collectibles file does not exist");
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_142()))
	{
		DEBUG::_0x4423BBAB7EB2B96B(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: net_collectibles file not loaded");
		return false;
	}
	Var0 = func_142();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: found node at index - ", iVar14);
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: found model ", &uVar5, " at index - ", iVar14);
				bVar15 = MISC::GET_HASH_KEY(&uVar5);
				DEBUG::_0x4DC69742196F818A(168, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: checking model - ", func_69(bVar15, 0), " against model - ", iVar13);
				if (iVar13 == bVar15)
				{
					DEBUG::_0xF0783374333FD8CE(40, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: the models match - ", func_69(bVar15, 0));
					return true;
				}
			}
		}
		iVar14++;
	}
	DEBUG::_0xF0783374333FD8CE(136, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: entity with model ", iVar13, " is not set up as a dirt pile in net_collectibles.xml");
	return false;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_104(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_105(int iParam0)
{
	int iVar0;

	iVar0 = func_72(iParam0);
	if (!func_113(iVar0))
	{
		return "Invalid Use Context";
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1952230[iVar0 /*23*/].f_16, false))
	{
		return "Thread Inactive";
	}
	return UNK_0xD2ADB90D13FA15A8(Global_1952230[iVar0 /*23*/].f_16);
}

void func_106(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1952230[iParam0 /*23*/].f_4 = iParam1;
	Global_1952230[iParam0 /*23*/] = iParam4;
	Global_1952230[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1952230[iParam0 /*23*/].f_2 = iParam5;
	Global_1952230[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1952230[iParam0 /*23*/].f_9 = fParam9;
	Global_1952230[iParam0 /*23*/].f_10 = iParam10;
	Global_1952230[iParam0 /*23*/].f_11 = iParam11;
	Global_1952230[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_5 = iParam12;
	Global_1952230[iParam0 /*23*/].f_1 = 2;
	Global_1952230[iParam0 /*23*/].f_17 = -1;
	Global_1952230[iParam0 /*23*/].f_18 = bParam16;
	Global_1952230[iParam0 /*23*/].f_19 = iParam15;
	Global_1952230[iParam0 /*23*/].f_20 = bParam25;
	Global_1952230[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1952230[iParam0 /*23*/].f_3 = iVar0;
	func_139(iParam0, 1);
	func_140(iParam0, 1);
	func_141(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_143(iParam14, 0));
}

bool func_107(bool bParam0, int* iParam1)
{
	struct<2> Var0;

	DEBUG::_0x1B08D1EB9D8C4931(40, 215, "NET_COLLECTIBLE_PERSONA_REQUEST_AWARD_LOOT: ", func_144(bParam0, 0));
	Var0.f_1 = 10;
	func_145(&Var0, joaat("LOOT_TYPE_NORMAL"));
	return func_146(bParam0, &Var0, iParam1, 0, 0);
}

struct<2> func_108(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_109(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_110(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	int iVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_147(bParam0, &iVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

var func_111(bool bParam0, int iParam1)
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

void func_112(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_113(int iParam0)
{
	return func_103(iParam0, 2);
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_115(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072032.f_22542.f_417[iParam0 /*12*/], iParam1);
}

char* func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_GHOST_TYPE_ALL_PLAYERS";
		case 1:
			return "NET_GHOST_TYPE_ALL_PLAYERS_BUT_ALLIES";
		case 2:
			return "NET_GHOST_TYPE_ALL_PLAYERS_BUT_ALLIES_INCLUDE_HORSES";
		case 3:
			return "NUM_NET_GHOST_TYPES";
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

char* func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_GHOST_SOURCE_CUTSCENE";
		case 1:
			return "NET_GHOST_SOURCE_MISSION";
		case 2:
			return "NET_GHOST_SOURCE_SHOP";
		case 3:
			return "NET_GHOST_SOURCE_GFH_GIVER";
		case 4:
			return "NET_GHOST_SOURCE_FAST_TRAVEL_BARKER";
		case 5:
			return "NET_GHOST_SOURCE_TRANSITION";
		case 6:
			return "NET_GHOST_SOURCE_COLLECTABLES";
		case 7:
			return "NET_GHOST_SOURCE_STABLES";
		case 8:
			return "NET_GHOST_SOURCE_MOONSHINE_SHACK";
		case 9:
			return "NET_GHOST_SOURCE_CLOUD_DROP";
		case 10:
			return "NUM_NET_GHOST_SOURCES";
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

void func_118()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "NET_HUD_SET_ALL_PLAYERS_NEED_UPDATED: Setting that all players need updated.");
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1072032.f_21420.f_260));
}

int func_119(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	DEBUG::_0xA308F935BDECCEC0(8, 0, "FIND_OBJECTS_IN_VOLUME: Get entities in area returned a count of: ", iVar6);
	if (iVar6 >= iParam3)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "FIND_OBJECTS_IN_VOLUME: We found more entities in area than our max count.. some entities might be left out");
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if ((*iParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*iParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_120(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
		DEBUG::_0x4DC69742196F818A(8, 87, "Deleting volume ");
	}
}

int func_121(bool bParam0)
{
	vector3 vVar0;

	if (!func_66(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_122(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<10> Var4;

	if (!func_66(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_148(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_149("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		bVar3 = false;
		while (bVar3 < iVar2)
		{
			if (!func_150(&Var4, bVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", bVar3);
			}
			else if (!func_151(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_111(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_111(Var4.f_4, 0), " that uses the ammo - ", func_111(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_152(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_111(Var4.f_4, 0), " that uses the ammo - ", func_111(bParam0, 0));
					return true;
				}
			}
			bVar3++;
		}
		func_152(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_111(bParam0, 0));
	return false;
}

bool func_123(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_66(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_153(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_154(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_155(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_111(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_156(bParam0);
	iVar2 = func_155(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_111(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_66(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_111(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_121(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_148(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_157(bParam0, 0);
	}
	if (func_158(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_159(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_160(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_111(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_159(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_111(bParam0, 0));
	return iVar0;
}

bool func_125(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

bool func_126()
{
	return func_161() != -1;
}

bool func_127()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_128(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_131() - fParam1);
	func_162(uParam0, 1);
	func_163(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_129(var uParam0)
{
	return func_164(*uParam0, 1);
}

bool func_130(var uParam0)
{
	return func_164(*uParam0, 2);
}

float func_131()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_132(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_133(int iParam0)
{
	return func_165(iParam0, 0);
}

bool func_134(int iParam0)
{
	return func_165(iParam0, 3);
}

bool func_135(int iParam0)
{
	return (func_165(iParam0, 4) || func_165(iParam0, 5));
}

bool func_136(int iParam0)
{
	return func_165(iParam0, 6);
}

bool func_137(int iParam0)
{
	return func_165(iParam0, 7);
}

void func_138(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 - (Global_1952230[iParam0 /*23*/].f_1 && iParam1));
}

void func_139(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_103(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_140(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_141(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

int func_142()
{
	return Global_1072032.f_28503[47 /*4*/].f_3;
}

char* func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UCM_PRESS";
		case 1:
			return "UCM_TIMED_PRESS";
		case 2:
			return "UCM_RELEASE";
		case 3:
			return "UCM_HOLD";
		case 4:
			return "UCM_METERED";
		case 5:
			return "UCM_METER_STANDARD_TIME";
		case 6:
			return "UCM_AUTO_FILL";
		case 7:
			return "UCM_AUTO_FILL_WITH_DECAY";
		case 8:
			return "UCM_MASH";
		case 9:
			return "UCM_MASH_AUTO_FILL";
		case 10:
			return "UCM_MASH_RESISTANCE";
		case 11:
			return "UCM_MASH_RESISTANCE_CAN_FAIL";
		case 12:
			return "UCM_MASH_RESISTANCE_DYNAMIC";
		case 13:
			return "UCM_MASH_RESISTANCE_DYNAMIC_CAN_FAIL";
		case 14:
			return "UCM_MASH_INDEFINITELY";
		case 15:
			return "UCM_ROTATE";
		case 16:
			return "UCM_TARGET_METER";
		case 17:
			return "UCM_NONE";
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

var func_144(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-126735818);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_145(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == bParam1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(2216, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") already exists, ignoring");
			return;
		}
		switch (bParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(567464, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") is exclusive with existing conditional ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1]), " (", uParam0->f_1[iVar1], "), replacing existing entry");
			uParam0->f_1[iVar1] = bParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(34984, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Adding conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") failed as max capacity (", 10, ") has been reached.");
		return;
	}
	DEBUG::_0x4DC69742196F818A(2216, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Adding conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ")");
	uParam0->f_1[*uParam0] = bParam1;
	*uParam0++;
}

int func_146(bool bParam0, var uParam1, int* iParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (bParam0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REQUEST_AWARD_LOOT - Invalid loot table supplied, ignoring!");
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_LOOT - CashInventory Session is NOT ready, aborting");
		UNK_0x355E72323AEE83CC(205, 8);
		return 0;
	}
	func_166(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_REQUEST_AWARD_LOOT - Failed to request loot award ", func_144(bParam0, 0));
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_167(iParam2, bParam0, Var1);
	return 1;
}

int func_147(bool bParam0, int* iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (bParam0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Invalid award requested, aborting");
		UNK_0x355E72323AEE83CC(205, 4);
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - CashInventory Session is NOT ready, aborting");
		UNK_0x355E72323AEE83CC(205, 8);
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(bParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Award ", func_168(bParam0, 0), "(", bParam0, ") has already reached maxclaims. Ignoring and returning TRUE.");
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		DEBUG::_0xF0783374333FD8CE(10920, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - bPosseSplits: ", MISC::_0xF216F74101968DB0(bParam7), " bGangActive: ", MISC::_0xF216F74101968DB0(bVar0), " so bPosseSplits is now: ", MISC::_0xF216F74101968DB0(bVar0));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_169(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), iParam1))
		{
			DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Failed to request award ", func_168(bParam0, 0), "(", bParam0, ")");
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), iParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Posse Split - Failed to request award ", func_168(bParam0, 0), "(", bParam0, ")");
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_170(iParam1, bParam0, Var3);
	return 1;
}

bool func_148(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_66(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_111(bParam0, 0));
		return false;
	}
	iVar0 = func_121(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_171(bParam0, 1399091007))
	{
		func_172(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_111(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

bool func_149(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_159(bParam4), sParam0, bParam3, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *bParam2, " from predicate '", sParam0, "' with ", func_173(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_150(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (bParam1 < 0 || bParam1 >= bParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", bParam1, " Size: ", bParam3);
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

bool func_151(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_152(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_RELEASE_ITEM_COLLECTION - Failed to release collection!");
		return 0;
	}
	return 1;
}

int func_153(bool bParam0)
{
	struct<2> Var0;

	if (!func_66(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_154(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case -28107610:
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_LAYER_TYPE_FROM_NONE_LAYER] Failed none layer for hash: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

int func_155(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_174(iParam1, 0));
	return -1;
}

int func_156(bool bParam0)
{
	int iVar0;

	iVar0 = func_153(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		case 1115104855:
			return -2118203104;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_111(bParam0, 0));
	return 0;
}

char* func_157(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char* sVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_175(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_177(&Var0, func_176(0));
	}
	if (!func_178(&Var0, &iVar14, &sVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_111(bParam0, 0));
		return 0;
	}
	func_152(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", sVar15, " of item ", func_111(bParam0, 0));
	return sVar15;
}

int func_158(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_180(func_179(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_159(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_160(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_181(bParam0, bParam1, 0) };
	return func_182(bParam0, Var0, Var0.f_4, bParam1);
}

int func_161()
{
	return Global_1139425.f_137;
}

void func_162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_164(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_165(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

void func_166(var uParam0)
{
	func_145(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_183() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_145(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_145(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_167(int* iParam0, bool bParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_184(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_2539 < 20)
	{
		Global_1272425.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_2539.f_1[iVar0 /*22*/] = { Global_1272425.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *iParam0 };
	Var1.f_4 = bParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1272425.f_2539.f_1[(Global_1272425.f_2539 - 1) /*22*/] = { Var1 };
	DEBUG::_0xA308F935BDECCEC0(40, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA - Added transaction data for: ", SCRIPTS::_NET_RPC_GUID_TO_STRING(iParam0));
	DEBUG::_0x4DC69742196F818A(2696, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eLootTable:                     ", Var1.f_4, " (", func_144(Var1.f_4, 0), ")");
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eStatus:                        ", func_185(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.iNumConditionals:  ", Var1.f_7.f_3);
}

var func_168(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(126614033);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_169(int iParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PUSH_AWARD_MODIFIER: Failed to push modifier ", func_186(bParam1, 0), ", array is full");
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PUSH_AWARD_MODIFIER: Adding modifier ", func_186(bParam1, 0));
}

void func_170(int* iParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_184(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 205, "ADD_AWARD_TRANSACTION_DATA - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_2012 < 20)
	{
		Global_1272425.f_2012++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_2012.f_1[iVar0 /*24*/] = { Global_1272425.f_2012.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *iParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1272425.f_2012.f_1[(Global_1272425.f_2012 - 1) /*24*/] = { Var1 };
	DEBUG::_0xA308F935BDECCEC0(40, 205, "ADD_AWARD_TRANSACTION_DATA - Added transaction data for: ", SCRIPTS::_NET_RPC_GUID_TO_STRING(iParam0));
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eAward:                         ", func_168(Var1.f_4, 0));
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eStatus:                        ", func_187(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7.f_13);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.piOverheadPlayer:  ", Var1.f_7.f_16);
}

int func_171(bool bParam0, bool bParam1)
{
	if (!func_66(bParam0, 0))
	{
		return func_188(func_179(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_189(bParam1, 0), " for item ", func_111(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

void func_172(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

var func_173(bool bParam0, int iParam1)
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

char* func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137717153:
			return "MPC_OVERLAY_LAYER_END";
		case -2118203104:
			return "MPC_OVERLAY_LAYER_FACIAL_HAIR";
		case -2056583192:
			return "MPC_OVERLAY_LAYER_FOUNDATION";
		case -1811760631:
			return "MPC_OVERLAY_LAYER_HEAD_HAIR";
		case -1180698265:
			return "MPC_OVERLAY_LAYER_COMPLEXION";
		case -1177453988:
			return "MPC_OVERLAY_LAYER_ROOT";
		case -875805376:
			return "MPC_OVERLAY_LAYER_EYESHADOW";
		case -768760704:
			return "MPC_OVERLAY_LAYER_LIPSTICK";
		case -559080197:
			return "MPC_OVERLAY_LAYER_FACE_PAINT";
		case -487028314:
			return "MPC_OVERLAY_LAYER_COMPLEXION_2";
		case -340627321:
			return "MPC_OVERLAY_LAYER_EYELINER";
		case 0:
			return "MPC_OVERLAY_LAYER_INVALID";
		case 12857284:
			return "MPC_OVERLAY_LAYER_SKIN_MOTTLING";
		case 241235545:
			return "MPC_OVERLAY_LAYER_FRECKLES";
		case 299749022:
			return "MPC_OVERLAY_LAYER_AGEING";
		case 1015239729:
			return "MPC_OVERLAY_LAYER_BLUSHER";
		case 1089431066:
			return "MPC_OVERLAY_LAYER_EYEBROWS";
		case 1285634184:
			return "MPC_OVERLAY_LAYER_GRIME";
		case 1301555144:
			return "MPC_OVERLAY_LAYER_SPOTS";
		case 1827902148:
			return "MPC_OVERLAY_LAYER_MOLES";
		case 1858448324:
			return "MPC_OVERLAY_LAYER_SCAR";
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

struct<14> func_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_111(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_173(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_173(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_173(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_190(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_191(iParam6, 0));
	}
	return Var0;
}

struct<4> func_176(bool bParam0)
{
	int iVar0;

	iVar0 = func_159(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_182(923904168, func_192(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_182(923904168, func_192(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_182(923904168, func_192(bParam0), -740156546, 0);
}

void func_177(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_178(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_159(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *bParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_179(bool bParam0)
{
	return bParam0;
}

bool func_180(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

struct<5> func_181(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_192(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_121(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_111(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_191(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_182(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_176(bParam1) };
			if (bParam2 && func_193(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_194(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_194(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_195(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_196(bParam1) };
			switch (func_153(bParam0))
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
			if (func_197(bParam0, -1823706425))
			{
				Var0 = { func_182(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_197(bParam0, -1483207246))
			{
				Var0 = { func_182(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_182(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_197(bParam0, -1653629781))
			{
				Var0 = { func_182(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_198(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_197(bParam0, -1653629781))
			{
				Var0 = { func_182(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_111(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_111(bParam0, 0), ": ", func_173(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_182(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_66(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_111(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_159(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_183()
{
	return Global_1953612.f_1;
}

bool func_184(int* iParam0)
{
	if (((*iParam0 == 0 && iParam0->f_1 == 0) && iParam0->f_2 == 0) && iParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_185(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "LOOT_STATUS_NONE";
		case 1:
			return "LOOT_STATUS_PENDING";
		case 2:
			return "LOOT_STATUS_SUCCEEDED";
		case 3:
			return "LOOT_STATUS_FAILED";
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

var func_186(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1140065811);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "AWARD_STATUS_NONE";
		case 1:
			return "AWARD_STATUS_PENDING";
		case 2:
			return "AWARD_STATUS_SUCCEEDED";
		case 3:
			return "AWARD_STATUS_FAILED";
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

int func_188(bool bParam0, bool bParam1)
{
	if (!func_180(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_189(bParam1, 0), " for bundle ", func_199(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_189(bool bParam0, int iParam1)
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

var func_190(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1982857120);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_191(int iParam0, int iParam1)
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

struct<4> func_192(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_159(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_182(joaat("CHARACTER"), func_200(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_182(joaat("CHARACTER"), func_200(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_182(joaat("CHARACTER"), func_200(), -1591664384, bParam0);
}

bool func_193(bool bParam0, bool bParam1)
{
	if (func_153(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_201();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_194(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_202(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_195(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_203(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_196(bool bParam0)
{
	int iVar0;

	iVar0 = func_159(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_182(271701509, func_192(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_182(271701509, func_192(bParam0), 12999093, 0);
}

bool func_197(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_153(bParam0);
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
			if (func_204(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_198(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_205(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_199(bool bParam0, int iParam1)
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

struct<4> func_200()
{
	struct<4> Var0;

	return Var0;
}

bool func_201()
{
	return (func_206(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_207(func_182(joaat("WARDROBE"), func_192(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_202(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_66(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_158(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_111(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_111(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_173(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_182(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_111(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_159(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_111(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_159(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_111(bParam0, 0));
	}
	return iVar0;
}

bool func_203(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_159(0);
	*iParam1 = { func_182(bParam0, func_176(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_111(bParam0, 0), " eSlot: ", func_173(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_111(bParam0, 0));
		return false;
	}
	return true;
}

bool func_204(bool bParam0, bool bParam1, bool bParam2)
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

bool func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_159(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_111(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_173(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_206(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_208(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_159(bParam1), bParam0, bParam3);
}

int func_207(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_209(&uParam0, bParam4, bParam5, iParam6);
}

bool func_208(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_209(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_210(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_111(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_210(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_159(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_173(bParam1, 0));
		return false;
	}
	if (!func_205(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_173(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_111(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_173(bParam1, 0));
	return true;
}

