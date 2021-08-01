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
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<44> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 104, "----==== STARTING HANGING CARCASS SCRIPT ====----");
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1) || func_1() != -1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 104, "HANGING CARCASS -- SCRIPT LAUNCHED WITHOUT ANY SCENARIO POINTS. TERMINATING THREAD.");
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_40 = joaat("P_CARCASSHANGLRG02X");
	Var0.f_41 = joaat("P_CARCASSHANGMED01B");
	Var0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var0.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	Var0.f_43 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(ScriptParam_0.f_1));
	Var0.f_39 = ENTITY::GET_ENTITY_MODEL(Var0.f_43);
	StringCopy(&(Var0.f_22), "Dead_Hanging", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, Var0, " HANGING CARCASS -- FORCE CLEAN-UP HAS BEEN TRIGGERED. TERMINATING THREAD.");
		func_2(&Var0, 0);
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_3(&Var0) || func_4(&Var0))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, Var0, " HANGING CARCASS -- LOCATION WAS UNSUITABLE / ALREADY LOOTED. TERMINATING THREAD.");
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_5(&(ScriptParam_0.f_1)) && !func_6(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xA308F935BDECCEC0(32, 104, Var0, " HANGING CARCASS -- PASSED THE WHILE LOOP. STOPPING SCRIPT.");
	func_2(&Var0, 0);
	SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	return Global_1572887.f_13;
}

void func_2(char* sParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- CLEANUP REQUESTED");
	if (TASK::_DOES_SCENARIO_POINT_EXIST(sParam0->f_49))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- DELETING RANSACK SCENARIO POINT");
		TASK::_DELETE_SCENARIO_POINT(sParam0->f_49);
	}
	if (bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- ONLY DELETING RANSACK SCENARIO. EXITING CLEANUP");
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(sParam0->f_44))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- DELETING ANIMATED HANGER");
		OBJECT::DELETE_OBJECT(&(sParam0->f_44));
	}
	if (ENTITY::DOES_ENTITY_EXIST(sParam0->f_45))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- DELETING ROPE TIE");
		OBJECT::DELETE_OBJECT(&(sParam0->f_45));
	}
	if (PHYSICS::DOES_ROPE_EXIST(sParam0->f_46))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- DELETING ROPE");
		PHYSICS::DELETE_ROPE(&(sParam0->f_46));
	}
	if (PHYSICS::DOES_ROPE_EXIST(sParam0->f_47))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- DELETING BROKEN ROPE TOP");
		PHYSICS::DELETE_ROPE(&(sParam0->f_47));
	}
	if (PHYSICS::DOES_ROPE_EXIST(sParam0->f_48))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- DELETING BROKEN ROPE BOTTOM");
		PHYSICS::DELETE_ROPE(&(sParam0->f_48));
	}
	if (ENTITY::DOES_ENTITY_EXIST(sParam0->f_42))
	{
		DEBUG::_0x4DC69742196F818A(3744, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- Cleaning-up a ", func_7(sParam0->f_38, 0), " carcass at coords: ", &(sParam0->f_1));
		if (func_8(sParam0, 256))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- SETTING CARCASS AS NO LONGER NEEDED");
			if (!func_8(sParam0, 32))
			{
				DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- SETTING CARCASS TO RAGDOLL");
				PED::SET_PED_TO_RAGDOLL(sParam0->f_42, 10000, 20000, 0, false, true, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sParam0->f_42));
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- DELETING CARCASS");
			PED::DELETE_PED(&(sParam0->f_42));
		}
		PED::_0x7D4E70A67A651C71(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(sParam0->f_43))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_CLEANUP -- SETTING HANGER AS NO LONGER NEEDED");
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(sParam0->f_43));
	}
}

int func_3(char* sParam0)
{
	DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_WAS_LOCATION_LOOTED -- CHECKING IF THIS LOCATION BEEN LOOTED BEFORE...");
	return 0;
}

int func_4(char* sParam0)
{
	int iVar0;
	vector3 vVar1[5];

	DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_IS_LOCATION_UNSUITABLE -- CHECKIGN IF THIS LOCATION IS SUITABLE FOR A HANGING CARCASS...");
	vVar1[0 /*3*/] = { -2844.586f, 133.7118f, 183.6223f };
	vVar1[1 /*3*/] = { -1008.624f, -544.7607f, 98.21857f };
	vVar1[2 /*3*/] = { 2074.396f, 996.5762f, 111.6177f };
	vVar1[3 /*3*/] = { 2832.072f, -1226.912f, 46.65f };
	vVar1[4 /*3*/] = { -2255.234f, -1914.754f, 116.158f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_9(vVar1[iVar0 /*3*/], sParam0->f_1, 5f, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(736, 104, *sParam0, " HANGING_CARCASS_IS_LOCATION_UNSUITABLE -- THIS LOCATION: ", &(vVar1[iVar0 /*3*/]), " IS UNSUITABLE (TRAPPER)");
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_5(var uParam0)
{
	if ((SCRIPTS::_0x9E4EF615E307FBBE() || !TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0)) || func_10())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 104, "HANGING CARCASS -- TERMINATION REQUESTED");
		return true;
	}
	return false;
}

bool func_6(char* sParam0)
{
	switch (sParam0->f_57)
	{
		case 0:
			if (func_11(sParam0))
			{
				func_12(sParam0, 1);
			}
			break;
		case 1:
			if (func_13(sParam0))
			{
				func_12(sParam0, 2);
			}
			break;
		case 2:
			if (func_14(sParam0))
			{
				func_12(sParam0, 3);
			}
			break;
		case 3:
			if (func_15(sParam0))
			{
				if (func_16(3, sParam0))
				{
					func_12(sParam0, 5);
				}
				else
				{
					func_12(sParam0, 4);
				}
			}
			break;
		case 4:
			if (func_17(sParam0))
			{
				func_12(sParam0, 5);
			}
			break;
		case 5:
			if (func_18(sParam0))
			{
				func_19(&(sParam0->f_52));
				func_12(sParam0, 6);
			}
			break;
		case 6:
			if (func_20(sParam0))
			{
				func_12(sParam0, 7);
			}
			break;
		case 7:
			if (func_21(sParam0))
			{
				func_19(&(sParam0->f_52));
				func_12(sParam0, 8);
			}
			break;
		case 8:
			if (func_22(sParam0))
			{
				func_19(&(sParam0->f_52));
				func_12(sParam0, 9);
			}
			break;
		case 9:
			break;
	}
	return false;
}

var func_7(bool bParam0, int iParam1)
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

bool func_8(char* sParam0, int iParam1)
{
	return (sParam0->f_56 && iParam1) != 0;
}

bool func_9(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_10()
{
	return Global_1900777.f_67;
}

bool func_11(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- INITIALIZING DATA");
	vVar0 = { 799.362f, 1512.22f, 203.6078f };
	vVar3 = { 2558f, 795f, 75f };
	vVar6 = { -754f, -1284.5f, 42.75f };
	if (func_9(uParam0->f_1, vVar3, 60f, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- AREA IS BUTCHER CREEK. USING DECOMPOSED CARCASSES");
		func_23(uParam0, 128);
		func_23(uParam0, 64);
	}
	if (func_9(uParam0->f_1, vVar6, 10f, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- AREA IS BLACKWATER'S BUTCHER. DISABLING CARCASS INTERACTIVITY");
		func_23(uParam0, 64);
	}
	switch (uParam0->f_39)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LARGE");
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (func_24(uParam0->f_1))
			{
				case 0:
				case 2:
				case 4:
				case 9:
				case 11:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- AREA DOES NOT HAVE WOLVES. USING DEER");
					iVar9 = 0;
					break;
			}
			if (func_9(uParam0->f_1, vVar0, 10f, 1))
			{
				DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- AREA IS HUNTER STORYTELLER. USING WOLF");
				iVar9 = 1;
			}
			if (func_8(uParam0, 128))
			{
				DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- DECOMPOSED CARCASS. USING ONLY DEER");
				iVar9 = 0;
			}
			switch (iVar9)
			{
				case 0:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LARGE -- LAUNCHING DEER");
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@DEER@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_DEER_01");
					StringCopy(&(uParam0->f_30), "PD_Deer_aged_carcass_Hvy", 64);
					break;
				case 1:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LARGE -- LAUNCHING WOLF");
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@WOLF_MEDIUM@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_WOLF_MEDIUM");
					break;
			}
			uParam0->f_50 = 45454;
			uParam0->f_51 = 33646;
			uParam0->f_55 = 0;
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGMED01X"):
			DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- MEDIUM -- MIXED");
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (uParam0->f_39 == joaat("P_CARCASSHANGMED01X"))
			{
				if (func_8(uParam0, 128))
				{
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- DECOMPOSED CARCASS. USING ONLY FOXES & RABBITS");
					iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- USING NON-INTERACTIVE RABBIT");
					iVar9 = 1;
				}
			}
			switch (iVar9)
			{
				case 0:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LAUNCHING FOX");
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@FOX@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_FOX_01");
					StringCopy(&(uParam0->f_30), "PD_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 1:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LAUNCHING RABBIT");
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@RABBIT@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_RABBIT_01");
					StringCopy(&(uParam0->f_30), "PD_Ex_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 2:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LAUNCHING DUCK");
					StringCopy(&(uParam0->f_14), "CREATURES_BIRD@DUCK@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_DUCK_01");
					uParam0->f_55 = 1;
					uParam0->f_50 = 14285;
					break;
			}
			break;
		case joaat("P_CARCASSHANGFISH01A"):
			DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- FISH");
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar9)
			{
				case 0:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LAUNCHING RAINBOW (STEELHEAD) TROUT");
					uParam0->f_38 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
					break;
				case 1:
					DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- LAUNCHING SOCKEYE SALMON");
					uParam0->f_38 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
					break;
			}
			uParam0->f_55 = 3;
			break;
		case joaat("P_CARCASSHANGSML01X"):
			break;
	}
	return true;
}

void func_12(char* sParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(2720, 104, *sParam0, " HANGING_CARCASS_UPDATE_STATE -- CHANGING STATE FROM ", func_25(sParam0->f_57, 0), " TO ", func_25(iParam1, 0));
	sParam0->f_57 = iParam1;
}

bool func_13(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- REQUESTING ASSETS");
	STREAMING::REQUEST_MODEL(uParam0->f_39, false);
	STREAMING::REQUEST_MODEL(uParam0->f_38, false);
	PED::_0xF008E0BA1FE1D644(1);
	if (func_16(0, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_40, false);
	}
	if (func_16(1, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_41, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_14));
	}
	return true;
}

bool func_14(var uParam0)
{
	if ((!STREAMING::HAS_MODEL_LOADED(uParam0->f_39) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_38)) || !PED::_0x5E420FF293EE5472())
	{
		DEBUG::_0x1B08D1EB9D8C4931(32, 104, *uParam0, " HANGING CARCASS -- WAITING ON ASSETS TO LOAD...");
		return false;
	}
	if (func_16(0, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_40))
		{
			return false;
		}
	}
	if (func_16(1, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_41))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_14)))
		{
			DEBUG::_0x1B08D1EB9D8C4931(32, 104, *uParam0, " HANGING CARCASS -- WAITING ON ANIM DICTIONARY TO LOAD...");
			return false;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- ALL ASSESTS HAVE LOADED");
	return true;
}

bool func_15(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- CREATING ENTITIES");
	fVar0 = -90f;
	vVar1 = { uParam0->f_1 };
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_43);
	if (func_16(3, uParam0))
	{
		vVar1 = { func_26(uParam0) };
	}
	if (func_16(1, uParam0))
	{
		uParam0->f_45 = OBJECT::CREATE_OBJECT(uParam0->f_41, vVar1, false, true, false, false, false);
		OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_45);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_45, false, false);
	}
	uParam0->f_42 = func_27(uParam0->f_38, vVar1, (uParam0->f_4 + fVar0), 0, 1, 0, 1, 1, 1, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_42, true);
	PED::_SET_PED_SCALE(uParam0->f_42, 1f);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 186, false);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 243, true);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_42, uParam0->f_42, false);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, false, false);
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_43);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_43, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
	if (func_16(3, uParam0))
	{
		func_28(uParam0->f_42, 1, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	if (func_8(uParam0, 128))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- APPLYING DECOMPOSITION SETTINGS");
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_30)))
		{
			PED::APPLY_PED_DAMAGE_PACK(uParam0->f_42, &(uParam0->f_30), 0f, 1f);
		}
	}
	func_29(uParam0, 0);
	return true;
}

bool func_16(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			return sParam1->f_39 == joaat("P_CARCASSHANGLRG01X");
		case 1:
			return (sParam1->f_39 == joaat("P_CARCASSHANGMED01X") || sParam1->f_39 == joaat("P_CARCASSHANGMED01A"));
		case 2:
			return sParam1->f_39 == joaat("P_CARCASSHANGSML01X");
		case 3:
			return sParam1->f_39 == joaat("P_CARCASSHANGFISH01A");
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(160, 104, *sParam1, " IS_HANGING_CARCASS_OF_TYPE -- Invalid type given: ", func_30(iParam0, 0));
	return false;
}

bool func_17(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- PLAYING ANIM");
		TASK::TASK_PLAY_ANIM(uParam0->f_42, &(uParam0->f_14), &(uParam0->f_22), 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- KILLING ANIMAL");
		func_28(uParam0->f_42, 1, 1);
	}
	if (func_16(1, uParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, true);
	}
	return true;
}

bool func_18(var uParam0)
{
	if (!func_31(&(uParam0->f_52)))
	{
		func_32(&(uParam0->f_52));
		uParam0->f_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f);
		DEBUG::_0xA308F935BDECCEC0(608, 104, *uParam0, " HANGING CARCASS -- STARTING ATTACHMENT DELAY TIMER OF: ", uParam0->f_5, " SECONDS");
	}
	if (func_33(&(uParam0->f_52), uParam0->f_5))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_42))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING CARCASS -- TIMER COMPLETE. THE ANIMAL IS DEAD. ATTACHING CARCASS");
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, true, false);
			switch (uParam0->f_55)
			{
				case 0:
					func_34(uParam0);
					break;
				case 1:
				case 2:
				case 3:
					func_35(uParam0);
					break;
			}
			if (func_16(1, uParam0) || func_16(3, uParam0))
			{
				if (func_16(1, uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, false);
				}
				func_36(uParam0);
			}
			return true;
		}
		DEBUG::_0x83407B92D46F25C3(32, 104, *uParam0, " HANGING CARCASS -- Someting went wrong. The animal isn't dead yet. Please send bug to Ainkaran Saba.");
	}
	return false;
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_20(char* sParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_8(sParam0, 64))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- NOT CREATING SCENARIO POINT. RANSACKING HAS BEEN DISABLED.");
		bVar0 = true;
	}
	else if (!TASK::_DOES_SCENARIO_POINT_EXIST(sParam0->f_49))
	{
		if ((ENTITY::IS_ENTITY_ATTACHED(sParam0->f_42) || PED::_0x7020839C7302D8AC(sParam0->f_42)) || (PHYSICS::DOES_ROPE_EXIST(sParam0->f_46) && !PHYSICS::_0x79C2BEC82CFD7F7F(sParam0->f_46)))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- CREATING SCENARIO POINT");
			func_37(sParam0);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- SETTING CARCASS TO RAGDOLL");
		PED::SET_PED_TO_RAGDOLL(sParam0->f_42, 1000, 60000, 0, false, true, false);
	}
	return bVar0;
}

bool func_21(char* sParam0)
{
	if (func_16(0, sParam0))
	{
		if (!func_8(sParam0, 256))
		{
			if (PED::_0xBA208A8D6399A3AC(sParam0->f_42, 10) || PED::_0xBA208A8D6399A3AC(sParam0->f_42, 13))
			{
				DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- CARCASS HAS TAKEN GORE DAMAGE");
				PED::_0x5A1A929C8B729B4A(sParam0->f_42);
				PED::SET_PED_TO_RAGDOLL(sParam0->f_42, 1000, 60000, 0, false, true, false);
				ENTITY::SET_ENTITY_VISIBLE(sParam0->f_43, false);
				ENTITY::SET_ENTITY_VISIBLE(sParam0->f_42, true);
				func_38(sParam0);
				func_2(sParam0, 1);
				func_23(sParam0, 256);
				return true;
			}
		}
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(sParam0->f_49) && PED::_IS_PED_USING_SCENARIO_POINT(Global_33, sParam0->f_49))
	{
		if (!func_8(sParam0, 8))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- TASKING THE PLAYER TO LOOK AT THE CARCASS");
			TASK::TASK_LOOK_AT_COORD(Global_33, func_26(sParam0), -1, 0, 21, 0);
			func_23(sParam0, 8);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1900650591))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- 'LookAtCarcass' ANIM EVENT HAS FIRED");
			TASK::TASK_LOOK_AT_ENTITY(Global_33, sParam0->f_42, 5000, 0, 21, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1244474073))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- 'AttachPeg' ANIM EVENT HAS FIRED");
			ENTITY::SET_ENTITY_VISIBLE(sParam0->f_43, false);
			ENTITY::SET_ENTITY_VISIBLE(sParam0->f_42, true);
			sParam0->f_44 = OBJECT::CREATE_OBJECT(joaat("P_CARCASSHANGLRG02X"), sParam0->f_1, false, true, false, false, false);
			ENTITY::SET_ENTITY_COLLISION(sParam0->f_44, false, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(sParam0->f_44, Global_33, 4, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			func_23(sParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2118990041))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- 'ReleaseCarcass' ANIM EVENT HAS FIRED");
			DEBUG::_0xA308F935BDECCEC0(3744, 104, *sParam0, " HANGING CARCASS -- Detaching the hanging ", func_7(sParam0->f_38, 0), " carcass at coords: ", &(sParam0->f_1));
			if (func_16(1, sParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(sParam0->f_46), &(sParam0->f_47), &(sParam0->f_48), 0.1f, 0.2f, 0.1f, -1);
			}
			else if (func_16(3, sParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(sParam0->f_46), &(sParam0->f_47), &(sParam0->f_48), 0.001f, 0.199f, 0.001f, -1);
			}
			else
			{
				PED::_0x5A1A929C8B729B4A(sParam0->f_42);
			}
			func_23(sParam0, 4);
			return false;
		}
		if (func_8(sParam0, 4) && !func_8(sParam0, 32))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- SKIPPED AHEAD ONE FRAME. SETTING CARCASS TO RAGDOLL");
			PED::SET_PED_TO_RAGDOLL(sParam0->f_42, 1000, 60000, 0, false, true, false);
			func_29(sParam0, 1);
			func_23(sParam0, 32);
			func_38(sParam0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 519570738))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- 'DropPeg' ANIM EVENT HAS FIRED");
			ENTITY::DETACH_ENTITY(sParam0->f_44, true, true);
			ENTITY::SET_ENTITY_COLLISION(sParam0->f_44, true, false);
			ENTITY::SET_ENTITY_COLLISION(sParam0->f_43, false, false);
			func_23(sParam0, 4);
		}
	}
	else if (func_8(sParam0, 8) && !func_8(sParam0, 16))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- PLAYER HAS EXITED THE RANSACK SCENARIO. DECREASING HONOUR");
		TASK::TASK_CLEAR_LOOK_AT(Global_33);
		func_2(sParam0, 1);
		func_23(sParam0, 16);
		func_23(sParam0, 256);
		return true;
	}
	else if ((!PED::_0x7020839C7302D8AC(sParam0->f_42) && !ENTITY::IS_ENTITY_ATTACHED(sParam0->f_42)) && ((func_16(1, sParam0) || func_16(3, sParam0)) && PHYSICS::_0x79C2BEC82CFD7F7F(sParam0->f_46)))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- THE CARCASS IS NO LONGER HANGING");
		if (func_8(sParam0, 128))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- ENABLING SET_PED_DECOMPOSED");
			MISC::_0x674B90BE1115846D(sParam0->f_42, 1);
			func_29(sParam0, 1);
		}
		if (!func_8(sParam0, 64))
		{
			func_29(sParam0, 1);
		}
		func_23(sParam0, 256);
		func_38(sParam0);
		func_2(sParam0, 1);
		return true;
	}
	return false;
}

bool func_22(char* sParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!func_31(&(sParam0->f_52)))
	{
		if (PED::_0x758F081DB204DDDE(Global_33))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- PLAYER IS PERFORMING LOOTING PICKUP");
			iVar0 = PED::_0x14169FA823679E41(Global_33);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == sParam0->f_42)
			{
				func_32(&(sParam0->f_52));
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1) == 1376140891)
			{
				SCRIPTS::GET_EVENT_DATA(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_33 && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar2.y) == sParam0->f_42)
				{
					if (vVar2.z)
					{
						DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- PLAYER STOLE THE CARCASS (GET_LOOTING_PICKUP_TARGET_ENTITY). TRIGGERING HONOR PENALTY");
						return true;
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- Received unsucessful EVENT_LOOT_COMPLETE");
						return true;
					}
				}
				else if (vVar2.x == 0 || vVar2.y == 0)
				{
					DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- Received bad data for EVENT_LOOT_COMPLETE");
					return true;
				}
			}
			iVar1++;
		}
	}
	if (ENTITY::_0x61914209C36EFDDB(sParam0->f_42) == 5)
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING CARCASS -- PLAYER STOLE THE CARCASS (GET_CARRIABLE_ENTITY_STATE). TRIGGERING HONOR PENALTY");
		return true;
	}
	return false;
}

void func_23(char* sParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(160, 104, *sParam0, " SET_HANGING_CARCASS_FLAG -- SETTING BIT FLAG: ", func_39(iParam1, 0));
	sParam0->f_56 = (sParam0->f_56 || iParam1);
}

int func_24(vector3 vParam0)
{
	return func_40(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

char* func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "HANGING_CARCASS_STATE_INIT";
		case 1:
			return "HANGING_CARCASS_STATE_REQUEST";
		case 2:
			return "HANGING_CARCASS_STATE_STREAM";
		case 3:
			return "HANGING_CARCASS_STATE_CREATE";
		case 4:
			return "HANGING_CARCASS_STATE_PLAY";
		case 5:
			return "HANGING_CARCASS_STATE_ATTACH";
		case 6:
			return "HANGING_CARCASS_STATE_DETACH";
		case 7:
			return "HANGING_CARCASS_STATE_RANSACK";
		case 8:
			return "HANGING_CARCASS_STATE_PICKUP";
		case 9:
			return "HANGING_CARCASS_STATE_WAIT";
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

Vector3 func_26(char* sParam0)
{
	vector3 vVar0;
	int iVar3;

	DEBUG::_0xA308F935BDECCEC0(160, 104, *sParam0, " HANGING_CARCASS_GET_ATTACHMENT_POSITION -- RETURN ATTACHMENT POSITION FOR: ", func_7(sParam0->f_39, 0));
	switch (sParam0->f_39)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			iVar3 = 4;
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGMED01X"):
		case joaat("P_CARCASSHANGFISH01A"):
			iVar3 = 4;
			break;
	}
	vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(sParam0->f_43, iVar3) };
	DEBUG::_0xA308F935BDECCEC0(224, 104, *sParam0, " HANGING_CARCASS_GET_ATTACHMENT_POSITION -- ATTACHMENT POSITION IS: ", &vVar0);
	return vVar0;
}

int func_27(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_41(iVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_33 == iParam0)
		{
			UNK_0x355E72323AEE83CC(-1, 6);
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_29(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " SET_HANGING_CARCASS_LOOT_FLAGS -- ENABLING LOOTING OPTIONS FOR CARCASS");
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " SET_HANGING_CARCASS_LOOT_FLAGS -- DISABLING LOOTING OPTIONS FOR CARCASS");
	}
	PED::_0x6569F31A01B4C097(sParam0->f_42, 0, bParam1);
	ENTITY::_0x18FF3110CF47115D(sParam0->f_42, 7, bParam1);
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "HANGING_CARCASS_TYPE_STAKE";
		case 1:
			return "HANGING_CARCASS_TYPE_ROPE";
		case 2:
			return "HANGING_CARCASS_TYPE_HOOK";
		case 3:
			return "HANGING_CARCASS_TYPE_FISH";
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

bool func_31(var uParam0)
{
	return func_42(*uParam0, 1);
}

void func_32(var uParam0)
{
	func_43(uParam0, 0f);
}

bool func_33(var uParam0, float fParam1)
{
	if (!func_31(uParam0))
	{
		return false;
	}
	if (func_44(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING_CARCASS_DOUBLE_POINT_ATTACH -- ATTACHING ANIMAL BY TWO POINTS TO PROP");
	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_51);
	iVar2 = func_45(uParam0->f_39, 0);
	iVar3 = func_45(uParam0->f_39, 1);
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar2) };
	vVar7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar3) };
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar0, iVar2, vVar4, -1f, 1, 0, 0);
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar1, iVar3, vVar7, -1f, 1, 0, 0);
}

void func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING_CARCASS_SINGLE_POINT_ATTACH -- ATTACHING ANIMAL BY ONE POINT TO PROP");
	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = func_45(uParam0->f_39, 2);
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { 0f, 90f, 0f };
	switch (uParam0->f_38)
	{
		case joaat("A_C_FOX_01"):
			vVar5 = { -0.0125f, -0.03f, 0.0125f };
			vVar8 = { 90f, 0f, 90f };
			break;
		case joaat("A_C_RABBIT_01"):
			vVar2 = { -0.0125f, 0f, -0.025f };
			vVar8 = { 0f, 90f, 0f };
			break;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_45, uParam0->f_42, iVar1, iVar0, vVar5, vVar2, vVar8, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
}

void func_36(var uParam0)
{
	int iVar0;
	float fVar1;

	if (func_16(3, uParam0))
	{
		iVar0 = 8;
		fVar1 = 0.2f;
	}
	else
	{
		iVar0 = 1;
		fVar1 = 0.3f;
	}
	uParam0->f_46 = PHYSICS::_ADD_ROPE_2(uParam0->f_1, 0f, 0f, 0f, fVar1, iVar0, false, 1, -1f);
	if (func_16(3, uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING_CARCASS_ATTACH_BY_ROPE -- ATTACHING FISH TO ROPE");
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_42, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 32157);
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *uParam0, " HANGING_CARCASS_ATTACH_BY_ROPE -- ATTACHING PROP TO ROPE");
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_45, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 33568);
	}
	PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_46, 0, 0, fVar1, 1);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_46, "ROPE_SETTINGS_DEFAULT");
	PHYSICS::_0x7A54D82227A139DB(&(uParam0->f_46), 1);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_46, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_46, 1f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_46, 1);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_46, 1);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_46, 1, 1);
	AUDIO::_0x2651DDC0EA269073(uParam0->f_46, 1f);
}

void func_37(char* sParam0)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = false;
	vVar1 = { 0f, 0f, 0f };
	switch (sParam0->f_39)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			bVar0 = joaat("WORLD_PLAYER_CARCASS_PEG_2M15");
			vVar1 = { 0.155f, -0.9f, 0f };
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGFISH01A"):
			bVar0 = joaat("WORLD_PLAYER_CARCASS_CUT_1M80");
			vVar1 = { -0.1f, -0.61f, 0f };
			break;
	}
	if (bVar0 != 0)
	{
		sParam0->f_49 = TASK::CREATE_SCENARIO_POINT(bVar0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(sParam0->f_1, sParam0->f_4, vVar1), sParam0->f_4, 0, 0, 0);
		DEBUG::_0xA308F935BDECCEC0(160, 104, *sParam0, " HANGING_CARCASS_CREATE_SCENARIO -- CREATING SCENARIO: ", func_46(bVar0, 0));
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(160, 104, *sParam0, " HANGING_CARCASS_CREATE_SCENARIO -- NOT CREATING SCENARIO FOR: ", func_7(sParam0->f_39, 0));
	}
}

void func_38(char* sParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_SAVE_LOCATION_AS_LOOTED -- SAVING LOOTED LOCATION TO PERSISTENCE...");
	if (Global_1960395.f_31 > 9 || Global_1960395.f_31 < 0)
	{
		DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_SAVE_LOCATION_AS_LOOTED -- ALL SLOTS HAVE BEEN FILLED, ROLLING INDEX BACK TO 0");
		Global_1960395.f_31 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_9(Global_1960395[iVar0 /*3*/], sParam0->f_1, 0.1f, 0))
		{
			DEBUG::_0xA308F935BDECCEC0(32, 104, *sParam0, " HANGING_CARCASS_SAVE_LOCATION_AS_LOOTED -- LOCATION WAS ALREADY SAVED IN INDEX ", iVar0);
			return;
		}
		iVar0++;
	}
	DEBUG::_0xA308F935BDECCEC0(736, 104, *sParam0, " HANGING_CARCASS_SAVE_LOCATION_AS_LOOTED -- SAVING LOCATION ", &(sParam0->f_1), " TO INDEX ", Global_1960395.f_31);
	Global_1960395[Global_1960395.f_31 /*3*/] = { sParam0->f_1 };
	Global_1960395.f_31++;
}

char* func_39(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "HANGING_CARCASS_FLAG_GRIPPED_PEG";
		case 2:
			return "HANGING_CARCASS_FLAG_RELEASED_CARCASS";
		case 4:
			return "HANGING_CARCASS_FLAG_RELEASED_PEG";
		case 8:
			return "HANGING_CARCASS_FLAG_RANSACKING";
		case 16:
			return "HANGING_CARCASS_FLAG_DONE_RANSACKING";
		case 32:
			return "HANGING_CARCASS_FLAG_RAGDOLLED";
		case 64:
			return "HANGING_CARCASS_FLAG_DISABLE_RANSACKING";
		case 128:
			return "HANGING_CARCASS_FLAG_DECOMPOSED_CARCASS";
		case 256:
			return "HANGING_CARCASS_FLAG_NOT_HANGING";
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

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_41(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			DEBUG::_0xA308F935BDECCEC0(40, 0, "CREATE_PED_WITH_DEFAULTS: applying random outfit to ped - ", UNK_0xE02C950E4C991632(iParam0));
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_47(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_48(iParam0, 0);
			bVar0 = true;
		}
		func_49(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_43(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_50() - fParam1);
	func_51(uParam0, 1);
	func_52(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_44(var uParam0)
{
	if (!func_31(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_53(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_50() - uParam0->f_1);
}

int func_45(bool bParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(2728, 104, "HANGING_CARCASS_HANGER_GET_BONE_INDEX -- RETURNING BONE INDEX FOR: ", func_7(bParam0, 0), "'S ", func_54(iParam1, 0), " ATTACHMENT");
	switch (bParam0)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 5;
			}
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGMED01X"):
		case joaat("P_CARCASSHANGFISH01A"):
			if (iParam1 == 3)
			{
				return 2;
			}
			if (iParam1 == 2)
			{
				return 4;
			}
			if (iParam1 == 0)
			{
				return 5;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
		case joaat("P_CARCASSHANGSML01X"):
			if (iParam1 == 2)
			{
				return 6;
			}
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
	}
	return 4;
}

var func_46(bool bParam0, int iParam1)
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

void func_47(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "SET_PED_HAT_VISIBLE: pedIndex is dead");
		return;
	}
	if (bParam1)
	{
		PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HATS"), 0, 1);
	}
	else
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 25, "HORSE_ADD_META_PED_OUTFIT_SADDLE - pedMount doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "HORSE_ADD_META_PED_OUTFIT_SADDLE - pedMount is dead or injured.");
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_49(char* sParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(648, 28, "HORSE_SET_GENDER - pedHorse: ", sParam0, " eGender = ", func_55(iParam1, 0));
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 1f);
	}
}

float func_50()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_52(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_53(var uParam0)
{
	return func_42(*uParam0, 2);
}

char* func_54(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "HANGING_CARCASS_LEFT_LEG_BONE";
		case 1:
			return "HANGING_CARCASS_RIGHT_LEG_BONE";
		case 2:
			return "HANGING_CARCASS_NECK_FOOT_BONE";
		case 3:
			return "HANGING_CARCASS_MOUTH_BONE";
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

char* func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PG_EITHER";
		case 1:
			return "PG_MALE";
		case 2:
			return "PG_FEMALE";
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

