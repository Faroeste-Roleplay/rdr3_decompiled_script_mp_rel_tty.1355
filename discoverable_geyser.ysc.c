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
	struct<10> Local_13 = { 3, 0, 6, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 6;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 6;
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
	int iLocal_47 = 0;
	char* sLocal_48 = NULL;
	struct<2> Local_49 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_48 = ScriptParam_0;
	Local_49.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		DEBUG::_0x4DC69742196F818A(8, 0, "DISCOVERABLE: HAS_FORCE_CLEANUP_OCCURRED = TRUE!");
		func_1();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		DEBUG::_0x4DC69742196F818A(8, 0, "DISCOVERABLE: DOES_SCENARIO_POINT_EXIST = FALSE!");
		func_1();
	}
	while (func_2())
	{
		switch (iLocal_47)
		{
			case 0:
				if (func_3(&Local_49))
				{
					iLocal_47 = 1;
					DEBUG::_0x1B08D1EB9D8C4931(40, 211, "The location is...", func_4(Local_49, 0));
				}
				break;
			case 1:
				func_5();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	func_6();
	SCRIPTS::_0xE7282390542F570D(sLocal_48);
	DEBUG::_0x4DC69742196F818A(8, 0, "DISCOVERABLE_CLEANUP_SCRIPT");
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		DEBUG::_0x4DC69742196F818A(8, 0, "SHOULD_DISCOVERABLE_RUN: IS_THREAD_EXIT_REQUESTED = TRUE!");
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	int iVar0;

	if (Local_49 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_49 = func_7(iVar0);
		DEBUG::_0x1B08D1EB9D8C4931(40, 211, "[DISCOVERABLE_INIT] - LOCATION IS: ", func_4(Local_49, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 211, "[DISCOVERABLE_INIT] -- COMPLETED FOR: ", func_4(Local_49, 0));
	return true;
}

char* func_4(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DISCOVER_LOC_INVALID";
		case 1351526287:
			return "DISCOVER_LOC_GEYSER";
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

void func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	Local_13.f_32 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (!func_8(iVar1))
		{
			return;
		}
		if (func_9(Global_33, Local_13[iVar0 /*10*/].f_1[2], 0, 1, 0))
		{
			iVar2 = 3;
			while (iVar2 <= 5)
			{
				if (func_9(Global_33, Local_13[iVar0 /*10*/].f_1[iVar2], 0, 1, 0))
				{
					Local_13.f_31 = iVar2;
					bVar3 = PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID());
					if (bVar3)
					{
						iVar4 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
					}
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || (bVar3 && ENTITY::IS_ENTITY_IN_WATER(iVar4)))
					{
						if (!func_10())
						{
							func_11(1);
						}
					}
					else if (func_10())
					{
						func_11(0);
					}
				}
				else if (func_10() && Local_13.f_31 == iVar2)
				{
					func_11(0);
				}
				iVar2++;
			}
		}
		switch (Local_13[iVar0 /*10*/])
		{
			case 0:
				func_12(&(Local_13[iVar0 /*10*/]), 1);
				break;
			case 1:
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 211, "WAITING ON FX TO LOAD");
					return;
				}
				func_12(&(Local_13[iVar0 /*10*/]), 2);
				break;
			case 2:
				iVar5 = 0;
				while (iVar5 <= 5)
				{
					if (!func_14(&(Local_13[iVar0 /*10*/].f_1[iVar5]), func_13(iVar1, iVar5)))
					{
						return;
					}
					iVar5++;
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iVar0 /*10*/].f_8))
				{
					Local_13[iVar0 /*10*/].f_8 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_amb_steam_geyser", func_15(iVar1), 0f, 0f, 0f, 1f, false, false, false, false);
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iVar0 /*10*/].f_8))
				{
					return;
				}
				if (func_12(&(Local_13[iVar0 /*10*/]), func_16(iVar1)))
				{
					func_17(iVar1, Local_13[iVar0 /*10*/]);
				}
				break;
			case 3:
			case 4:
			case 5:
			case 6:
				func_18(iVar1);
				if (func_12(&(Local_13[iVar0 /*10*/]), func_16(iVar1)))
				{
					func_17(iVar1, Local_13[iVar0 /*10*/]);
				}
				break;
			case 7:
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			func_19(&(Local_13[iVar0 /*10*/].f_1[iVar1]));
			iVar1++;
		}
		iVar0++;
	}
	EVENT::REMOVE_SHOCKING_EVENT(Local_13.f_33);
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WB_DISCO_GEYSER"):
			return 1351526287;
		default:
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 211, "[DISCO_GET_LOCATION_FROM_SCENARIO_HASH] - RETURNING INVALID -- HASH WAS NOT IN SWITCH STATEMENT: ", iParam0);
	return 0;
}

bool func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
	}
	return false;
}

bool func_9(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, iParam2, "IS_PED_IN_VOLUME: entity is dead");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, iParam2, "IS_PED_IN_VOLUME: Invalid volume passed into IS_PED_IN_VOLUME");
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam3, iParam4);
}

bool func_10()
{
	if (func_20())
	{
		return false;
	}
	return Global_1957252.f_1431.f_96 == 0;
}

void func_11(int iParam0)
{
	Global_1957252.f_1431 = iParam0;
}

bool func_12(var uParam0, int iParam1)
{
	DEBUG::_0x1B08D1EB9D8C4931(680, 211, "[GEYSER_SET_STATE] current State: ", func_21(*uParam0, 0), " new state: ", func_21(iParam1, 0));
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return true;
	}
	return false;
}

struct<11> func_13(int iParam0, int iParam1)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 224.4436f, 1906.525f, 207.2073f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 1:
					Var0 = { 224.4328f, 1906.671f, 203.5702f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1.25f, 1.25f, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 2:
					Var0 = { 224.5328f, 1922.529f, 203.5702f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 40f, 40f, 25f };
					Var0.f_9 = "DISCO_GEYSER_LOCATION1";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 3:
					Var0 = { 251.9829f, 1909.192f, 204.0304f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 7f, 7f, 10f };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 4:
					Var0 = { 234.7751f, 1939.719f, 203.8331f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 18f, 18f, 10f };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 5:
					Var0 = { 197.2354f, 1911.487f, 203.8331f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 8f, 8f, 10f };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 191.666f, 1831.29f, 202.4614f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 1:
					Var0 = { 191.766f, 1831.39f, 198.4614f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1.25f, 1.25f, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 2:
					Var0 = { 188.2542f, 1819.456f, 198.4614f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 28f, 28f, 25f };
					Var0.f_9 = "DISCO_GEYSER_LOCATION2";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 3:
					Var0 = { 173.5744f, 1836.124f, 200.0205f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 4f, 4f, 10f };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 4:
					Var0 = { 176.4688f, 1813.247f, 200.0197f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 12f, 12f, 10f };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 5:
					Var0 = { 208.2183f, 1821.611f, 200.0197f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 5.5f, 5.5f, 10f };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 129.107f, 1878.372f, 201.1505f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 1:
					Var0 = { 129.107f, 1878.372f, 198.1505f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1.25f, 1.25f, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 2:
					Var0 = { 139.0299f, 1875.571f, 198.1505f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 25f, 25f, 25f };
					Var0.f_9 = "DISCO_GEYSER_LOCATION3";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 3:
					Var0 = { 125.8097f, 1865.035f, 200.3174f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 10f };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 4:
					Var0 = { 143.7371f, 1866.656f, 200.2199f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 9f, 9f, 10f };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
				case 5:
					Var0 = { 136.359f, 1890.56f, 200.2199f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 4f, 4f, 10f };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = joaat("VOLCYLINDER");
					break;
			}
			break;
	}
	return Var0;
}

bool func_14(var uParam0, struct<10> Param1, var uParam11)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Param1.f_10, Param1, Param1.f_3, Param1.f_6, Param1.f_9);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 224.4436f, 1906.525f, 206.0843f;
		case 1:
			return 191.666f, 1831.29f, 200.4614f;
		case 2:
			return 129.107f, 1878.372f, 200.1505f;
	}
	return 0f, 0f, 0f;
}

int func_16(int iParam0)
{
	if (func_22(iParam0))
	{
		return 3;
	}
	if (func_23(iParam0))
	{
		return 4;
	}
	if (func_24(iParam0))
	{
		return 5;
	}
	if (func_25(iParam0))
	{
		return 6;
	}
	return 2;
}

void func_17(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 0.25f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 0f, false);
				if (Local_13.f_33 != 0)
				{
					EVENT::REMOVE_SHOCKING_EVENT(Local_13.f_33);
					Local_13.f_33 = 0;
				}
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
		case 4:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 1f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 0f, false);
				if (Local_13.f_33 != 0)
				{
					EVENT::REMOVE_SHOCKING_EVENT(Local_13.f_33);
					Local_13.f_33 = 0;
				}
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
		case 5:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 0.5f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 1f, false);
				if (Local_13.f_33 == 0)
				{
					Local_13.f_33 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_15(iParam0), -1f, -1f, -1f, -1f, -1f, 3, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_33)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_33)))
				{
					PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_33), 1, 0.15f, 0);
				}
				PED::_0x23BDE06596A22CEC(Global_33, 1, 1f, 0);
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
		case 6:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 0.75f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 1f, false);
				if (Local_13.f_33 == 0)
				{
					Local_13.f_33 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_15(iParam0), -1f, -1f, -1f, -1f, -1f, 3, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_33)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_33)))
				{
					PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_33), 1, 0.15f, 0);
				}
				PED::_0x23BDE06596A22CEC(Global_33, 1, 1f, 0);
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
	}
}

void func_18(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (Local_13[iParam0 /*10*/].f_9)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_13[iParam0 /*10*/].f_1[0]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_33, Local_13[iParam0 /*10*/].f_1[0], true, 0))
	{
		return;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	vVar6 = { func_15(iParam0) };
	vVar6.f_2 = vVar3.z;
	vVar0 = { vVar3 - vVar6 };
	vVar0 = { func_26(vVar0) };
	PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_33, 3000, 5000, 0, vVar0, 204f, 0f, 0f, 0f, 0f, 0f, 0f);
	ENTITY::APPLY_FORCE_TO_ENTITY(Global_33, 1, vVar0 * Vector(6f, 6f, 6f), 0f, 0f, 0f, 0, false, false, true, false, true);
	Local_13[iParam0 /*10*/].f_9 = 1;
}

void func_19(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
}

bool func_20()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

char* func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DISCO_GEYSER_STATE_INIT";
		case 1:
			return "DISCO_GEYSER_STATE_REQUEST";
		case 2:
			return "DISCO_GEYSER_STATE_CREATE";
		case 3:
			return "DISCO_GEYSER_STATE_STEAM";
		case 4:
			return "DISCO_GEYSER_STATE_STEAM_FULL";
		case 5:
			return "DISCO_GEYSER_STATE_ERUPT";
		case 6:
			return "DISCO_GEYSER_STATE_ERUPT_FULL";
		case 7:
			return "DISCO_GEYSER_STATE_COMPLETE";
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

bool func_22(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_27(iParam0));
	if (iVar0 >= 0 && iVar0 < func_28(iParam0))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_27(iParam0));
	if (iVar0 >= func_28(iParam0) && iVar0 < (func_28(iParam0) + func_29(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_24(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_27(iParam0));
	if (iVar0 >= (func_28(iParam0) + func_29(iParam0)) && iVar0 < ((func_28(iParam0) + func_29(iParam0)) + func_30(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_25(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_27(iParam0));
	if (iVar0 >= ((func_28(iParam0) + func_29(iParam0)) + func_30(iParam0)) && iVar0 < (((func_28(iParam0) + func_29(iParam0)) + func_30(iParam0)) + func_31(iParam0)))
	{
		return true;
	}
	return false;
}

Vector3 func_26(vector3 vParam0)
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

int func_27(int iParam0)
{
	return (((func_28(iParam0) + func_29(iParam0)) + func_30(iParam0)) + func_31(iParam0));
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 30;
		case 1:
			return 42;
		case 2:
			return 57;
		default:
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 12;
		case 2:
			return 7;
		default:
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 3;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 7;
		default:
			break;
	}
	return 0;
}

