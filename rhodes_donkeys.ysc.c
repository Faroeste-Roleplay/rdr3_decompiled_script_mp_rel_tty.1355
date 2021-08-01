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
	int iLocal_15 = 0;
	char* sLocal_16 = NULL;
	char* sLocal_17[2] = { NULL, NULL };
	char* sLocal_20 = NULL;
	int iLocal_21 = 0;
	int iLocal_22[2] = { 0, 0 };
	bool bLocal_25 = false;
	vector3 vLocal_26[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_33[2] = { 0, 0 };
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = -1;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 1097859072;
	var uLocal_62 = 1000;
	var uLocal_63 = 500;
	var uLocal_64 = 1067450368;
	var uLocal_65 = 5000;
	var uLocal_66 = 42;
	var uLocal_67 = 1103626240;
	var uLocal_68 = 1077936128;
	var uLocal_69 = 1106247680;
	var uLocal_70 = 1103101952;
	var uLocal_71 = 1109393408;
	var uLocal_72 = 1097859072;
	var uLocal_73 = 1103626240;
	var uLocal_74 = 1067450368;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77[2] = { 0, 0 };
	int iLocal_80 = 0;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_42 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	int iVar0;

	if (iLocal_41 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_41))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_41);
		}
	}
	if (bLocal_82)
	{
		func_3();
		bLocal_82 = false;
	}
	if (STREAMING::IS_MODEL_VALID(bLocal_25))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(bLocal_25);
	}
	if (STREAMING::IS_MODEL_VALID(bLocal_37))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(bLocal_37);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_22)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_77[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_77[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_22[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_22[iVar0]));
		}
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_33[iVar0]))
		{
			PHYSICS::DELETE_ROPE(&(iLocal_33[iVar0]));
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_21))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_21);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_76))
	{
		VOLUME::_DELETE_VOLUME(iLocal_76);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_80))
	{
		VOLUME::_DELETE_VOLUME(iLocal_80);
	}
	if (iLocal_42 != -1)
	{
		func_4();
		AUDIO::RELEASE_SOUND_ID(iLocal_42);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (func_5())
	{
		return true;
	}
	if (!bLocal_81)
	{
		bLocal_81 = func_6();
	}
	switch (func_7())
	{
		case 0:
			func_8();
			func_9(1);
			break;
		case 1:
			func_10();
			func_9(2);
			break;
		case 2:
			if (func_11())
			{
				func_9(3);
			}
			break;
		case 3:
			if (func_12())
			{
				func_9(4);
			}
			break;
		case 4:
			if (func_13() && func_14())
			{
				if (func_15(12))
				{
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
		case 5:
			if (func_17())
			{
				func_9(6);
			}
			break;
		case 6:
			if (func_18())
			{
				func_9(8);
			}
			break;
		case 7:
			if (func_19())
			{
				func_9(10);
			}
			if (func_20())
			{
				bLocal_81 = false;
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_21))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_21, 0);
				}
				func_21(iLocal_80, 0, 0, 1, 1, 0);
				if (func_15(12))
				{
					func_22();
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
		case 8:
			if (func_19())
			{
				func_9(10);
			}
			func_23();
			if (bLocal_81)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_21))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_21) < 0.99f)
					{
						return false;
					}
				}
				func_4();
				func_24();
				func_9(7);
			}
			if (func_25())
			{
				func_24();
				func_9(7);
			}
			break;
		case 9:
			if (func_19())
			{
				func_9(10);
			}
			if (bLocal_81)
			{
				func_9(7);
			}
			break;
		case 10:
			func_4();
			func_26();
			func_9(11);
			break;
		case 11:
			if (func_20())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1939807.f_291[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			DEBUG::_0xF0783374333FD8CE(136, 218, "WORLD_STATE_CLENAUP_THREAD_POPULATION_BUDGET_ALLOCATION: restoring ", Global_1939807.f_291[iVar0 /*2*/].f_1, "mb from this thread");
			Global_1939807.f_302 = (Global_1939807.f_302 + Global_1939807.f_291[iVar0 /*2*/].f_1);
			Global_1939807.f_291[iVar0 /*2*/] = 0;
			Global_1939807.f_291[iVar0 /*2*/].f_1 = 0;
			func_27();
			return;
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 218, "WORLD_STATE_CLENAUP_THREAD_POPULATION_BUDGET_ALLOCATION: couldn't find a request for this thread");
}

void func_4()
{
	if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_42))
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_42);
	}
}

bool func_5()
{
	if (func_28() != -1)
	{
		DEBUG::_0x4DC69742196F818A(8, 11, "SHOULD_DONKEY_SCRIPT_CLEANUP - Shutting down, transitioning to MP.");
		return true;
	}
	if (func_29() != 111)
	{
		DEBUG::_0x4DC69742196F818A(8, 11, "SHOULD_DONKEY_SCRIPT_CLEANUP - Shutting down, player is no longer in Rhodes.");
		return true;
	}
	return false;
}

int func_6()
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		if (func_7() == 8 && func_15(12))
		{
			return 1;
		}
		if (func_7() == 9 && func_15(3))
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	return iLocal_15;
}

void func_8()
{
	bLocal_25 = joaat("A_C_DONKEY_01");
	bLocal_37 = joaat("P_RHO_COTTONGIN_03");
	vLocal_38 = { 1404.02f, -1324.268f, 76.7704f };
	vLocal_26[0 /*3*/] = { 1400.77f, -1315.403f, 76.6572f };
	vLocal_26[1 /*3*/] = { 1407.911f, -1332.822f, 76.6569f };
	sLocal_16 = "script@ambient@generic@cotton_gin@action";
	sLocal_17[0] = "DONKEY_0";
	sLocal_17[1] = "DONKEY_1";
	sLocal_20 = "COTTON_PRESS";
	func_30(&(vLocal_26[0 /*3*/]), 50, 10, 0, 0);
	func_30(&(vLocal_26[1 /*3*/]), 50, 10, 0, 0);
	func_31(&uLocal_43, 0);
	func_32(&uLocal_43, 1);
	func_33(&uLocal_43, 1);
	func_34(&uLocal_43, 1);
	func_35(&uLocal_43, 1);
	func_36(&uLocal_43, 1);
	func_37(&uLocal_43, 1);
	func_38(&uLocal_43, 1);
	func_39(&uLocal_43, 1);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_76))
	{
		iLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1439.646f, -1296.078f, 78.22333f, 0f, 0f, 15.93833f, 5.460037f, 5.05896f, 3.246991f, "m_volDonkeyPen");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_80))
	{
		iLocal_80 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1403.892f, -1324.662f, 76.65739f, 0f, 0f, 0f, 19.09795f, 13.32395f, 7.186517f, "m_volVehicleAntiGrief");
	}
	iLocal_42 = AUDIO::GET_SOUND_ID();
}

void func_9(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(40, 11, "Setting donkey script state to ", func_40(iParam0, 0));
	iLocal_15 = iParam0;
}

void func_10()
{
	STREAMING::REQUEST_MODEL(bLocal_25, false);
	STREAMING::REQUEST_MODEL(bLocal_37, false);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_21))
	{
		iLocal_21 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_16, 1, 0, false, true);
	}
	if (PED::_0x5C16855277819BBF() <= 2)
	{
		PED::_0xED9582B3DA8F02B4(2);
	}
}

bool func_11()
{
	if (!STREAMING::HAS_MODEL_LOADED(bLocal_25) || !STREAMING::HAS_MODEL_LOADED(bLocal_37))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_21, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_21, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_21);
		}
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	return true;
}

bool func_12()
{
	if (BUILTIN::VDIST2(Global_34, vLocal_38) > 10000f)
	{
		return false;
	}
	return true;
}

int func_13()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_22[iVar0]))
		{
			iLocal_22[iVar0] = func_41(bLocal_25, vLocal_26[iVar0 /*3*/], 95f, 1, 1, 0, 1, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_22[iVar0]))
			{
				PED::_SET_PED_SCALE(iLocal_22[iVar0], 0.67f);
				PED::SET_PED_CONFIG_FLAG(iLocal_22[iVar0], 136, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_22[iVar0], 441, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_22[iVar0], 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_22[iVar0], 407, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_22[iVar0], 419, true);
				PED::_0xAE6004120C18DF97(iLocal_22[iVar0], 0, false);
				TASK::TASK_STAND_STILL(iLocal_22[iVar0], -1);
				PED::_SET_PED_BODY_COMPONENT(iLocal_22[iVar0], -937613161);
				PED::_UPDATE_PED_VARIATION(iLocal_22[iVar0], false, true, true, true, false);
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_77[iVar0]))
				{
					iLocal_77[iVar0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vLocal_26[iVar0 /*3*/], 0f, 0f, 0f, 1.5f, 1.5f, 1f);
					PED::_0x7C00CFC48A782DC0(iLocal_77[iVar0], iLocal_22[iVar0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (!bLocal_82)
	{
		func_42(10);
		bLocal_82 = true;
	}
	return 1;
}

int func_14()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (iLocal_41 == 0)
		{
			iLocal_41 = ENTITY::_0x6F3068258A499E52(bLocal_37, vLocal_38, 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_41))
		{
			iLocal_36 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_41);
		}
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_44(func_43());
	if (func_45(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_45(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_45(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_45(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_45(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_45(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_45(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_45(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_45(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_45(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_45(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_45(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_45(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_45(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_45(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_45(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_45(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_16()
{
	int iVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_76))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_22[iVar0]))
		{
			func_46(iLocal_22[iVar0], VOLUME::_GET_VOLUME_COORDS(iLocal_76) + Vector(0f, 0f, (IntToFloat(iVar0) * 1f)), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 2, 1073741824 /* Float: 2f */);
			TASK::TASK_WANDER_IN_VOLUME(iLocal_22[iVar0], iLocal_76, 1f, 3f, 1);
		}
		iVar0++;
	}
}

bool func_17()
{
	int iVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_21))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_21, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_21, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_21);
		}
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_21, 1404.02f, -1324.268f, 76.71f, 0f, 0f, -81f, 2);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_22[iVar0]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_21, sLocal_17[iVar0], iLocal_22[iVar0], 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_36))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_21, sLocal_20, iLocal_36, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_21);
	return true;
}

bool func_18()
{
	int iVar0;

	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_36) && !ENTITY::IS_ENTITY_DEAD(iLocal_22[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_22[1]))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PHYSICS::DOES_ROPE_EXIST(iLocal_33[iVar0]))
			{
				iLocal_33[iVar0] = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iLocal_22[iVar0], true, false), 0f, 0f, 0f, 1f, 6, true, -1, -1f);
				PHYSICS::_0x522FA3F490E2F7AC(iLocal_33[iVar0], 1, 1);
				PHYSICS::_0x8D59079C37C21D78(iLocal_33[iVar0], 2.5f);
				return false;
			}
			iVar0++;
		}
		PHYSICS::_0x462FF2A432733A44(iLocal_33[0], iLocal_22[0], iLocal_36, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect1");
		PHYSICS::_0x462FF2A432733A44(iLocal_33[1], iLocal_22[1], iLocal_36, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect2");
		return true;
	}
	return false;
}

bool func_19()
{
	var uVar0;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_47(iLocal_22[iLocal_75], 0, &uLocal_43, &uVar0, 0, 0))
		{
			return true;
		}
		if (PED::_0x77525BBF433F2CD6(iLocal_22[iLocal_75]))
		{
			return true;
		}
		iLocal_75++;
		if (iLocal_75 >= 2)
		{
			iLocal_75 = 0;
		}
	}
	return false;
}

bool func_20()
{
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_34, vLocal_38) < 3600f)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(1439.646f, -1296.078f, 78.22333f, 2f) || CAM::IS_SPHERE_VISIBLE(1403.686f, -1324.119f, 73.60623f, 9.5f))
	{
		return false;
	}
	return true;
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_22()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_33[iVar0]))
		{
			PHYSICS::DELETE_ROPE(&(iLocal_33[iVar0]));
		}
		iVar0++;
	}
}

void func_23()
{
	if (AUDIO::_0xE368E8422C860BA7("COTTON_GIN", "OFF_MISSION_SOUNDS", -2) && AUDIO::_0x84848E1C0FC67DBB(iLocal_42))
	{
		AUDIO::_0xDCF5BA95BBF0FABA(iLocal_42, "COTTON_GIN", vLocal_38, "OFF_MISSION_SOUNDS", 0, 0, true);
	}
}

void func_24()
{
	int iVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_21))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_21, true);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_22[iVar0]))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_21, sLocal_17[iVar0], iLocal_22[iVar0]);
			TASK::TASK_STAND_STILL(iLocal_22[iVar0], -1);
		}
		iVar0++;
	}
}

bool func_25()
{
	int iVar0;
	int iVar1;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_34, vLocal_38) > 625f)
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_80))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iLocal_80, iVar0, 2, 1, 0, 0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_26()
{
	int iVar0;
	int iVar1;

	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_21, true);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_48(iLocal_22[iVar1], 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_21, sLocal_17[iVar1], iLocal_22[iVar1]);
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_33[iVar1]))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_33[iVar1], iLocal_22[iVar1]);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Global_34, 3, 256, 10000f, 10000, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_22[iVar1], 3f);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_22[iVar1], iVar0);
			PED::SET_PED_KEEP_TASK(iLocal_22[iVar1], true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		iVar1++;
	}
}

void func_27()
{
	if (Global_1939807.f_302 > 300)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 218, "MANAGE_WORLD_STATE_POPULATION_BUDGET_REQUESTS: pop budget somehow got above WORLD_STATE_MAX_POP_BUDGET, was ", Global_1939807.f_302);
		Global_1939807.f_302 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(func_49());
	DEBUG::_0xF0783374333FD8CE(24, 218, "WORLD_STATE_ALLOCATE_POPULATION_BUDGET: setting pop budget multiplier to - ", func_49());
}

int func_28()
{
	return Global_1572887.f_13;
}

int func_29()
{
	return Global_1893599.f_2;
}

int func_30(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_50(*uParam0, 0f, 0f, 0f))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "FIND_GROUND_INTERSECTION_FROM_WORLD_COORDS: vProbe is <<0,0,0>>, returning vProbe");
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing higher coords - ", &vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &sVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing higher coords - ", &vVar4);
		}
		else
		{
			bVar2 = true;
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: couldn't find probe while going up");
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing lower coords - ", &vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &sVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
				DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: lower coords down - ", &vVar4);
			}
			else
			{
				bVar3 = true;
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: couldn't find probe while going down");
			}
		}
	}
	else
	{
		uParam0->f_2 = sVar0;
		DEBUG::_0x1B08D1EB9D8C4931(24, 0, "FIND_GROUND_INTERSECTION: fGroundZ - ", sVar0);
		return 1;
	}
	if (bVar2 && bVar3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: ran out of iters, returning vProbe");
		return 0;
	}
	uParam0->f_2 = sVar0;
	DEBUG::_0x1B08D1EB9D8C4931(24, 0, "FIND_GROUND_INTERSECTION: fGroundZ - ", sVar0);
	return 1;
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_2 = 0;
		func_51(uParam0, 1);
		func_52(uParam0, 1);
		func_53(uParam0, 1);
		func_54(uParam0, 1);
		func_55(uParam0, 1);
		func_37(uParam0, 1);
		func_56(uParam0, 1);
	}
	else
	{
		uParam0->f_2 = -1;
		func_51(uParam0, 0);
		func_52(uParam0, 0);
		func_53(uParam0, 0);
		func_54(uParam0, 0);
		func_55(uParam0, 0);
		func_37(uParam0, 0);
		func_56(uParam0, 0);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_2), 256);
	}
	else
	{
		func_58(&(uParam0->f_2), 256);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_2), 4);
	}
	else
	{
		func_58(&(uParam0->f_2), 4);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_2), 2);
	}
	else
	{
		func_58(&(uParam0->f_2), 2);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_2), 1);
	}
	else
	{
		func_58(&(uParam0->f_2), 1);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_2), 16);
	}
	else
	{
		func_58(&(uParam0->f_2), 16);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 1024);
	}
	else
	{
		func_57(uParam0, 1024);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_2), 2048);
	}
	else
	{
		func_58(&(uParam0->f_2), 2048);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 128);
	}
	else
	{
		func_57(uParam0, 128);
	}
}

char* func_40(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DONKEY_INIT";
		case 1:
			return "DONKEY_REQUEST_ASSETS";
		case 2:
			return "DONKEY_LOADING_ASSETS";
		case 3:
			return "DONKEY_WAIT_TO_START";
		case 4:
			return "DONKEY_CREATE_ENTITIES";
		case 5:
			return "DONKEY_START_ANIM_SCENE";
		case 6:
			return "DONKEY_ATTACH_ROPES";
		case 7:
			return "DONKEY_TOD_TRANSITION";
		case 8:
			return "DONKEY_RUNNING";
		case 9:
			return "DONKEY_RESTING";
		case 10:
			return "DONKEY_FLEE";
		case 11:
			return "DONKEY_DONE";
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

int func_41(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_59(iVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_42(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 218, "WORLD_STATE_REQUEST_POPULATION_BUDGET_ADJUSTMENT: max request is ", 150);
		iParam0 = 150;
	}
	if (iParam0 > (Global_1939807.f_302 - 150))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 218, "WORLD_STATE_REQUEST_POPULATION_BUDGET_ADJUSTMENT: not enough budget left, we're currently at - ", Global_1939807.f_302, " with a min of ", 150);
	}
	if (func_60(&iVar0))
	{
		if (Global_1939807.f_291[iVar0 /*2*/].f_1 != iParam0)
		{
			DEBUG::_0xF0783374333FD8CE(8, 218, "WORLD_STATE_ALLOCATE_POPULATION_BUDGET: updating this thread's budgtet to ", iParam0);
			Global_1939807.f_302 = (Global_1939807.f_302 + Global_1939807.f_291[iVar0 /*2*/].f_1);
			Global_1939807.f_291[iVar0 /*2*/].f_1 = iParam0;
			Global_1939807.f_302 = (Global_1939807.f_302 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_49());
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 218, "WORLD_STATE_ALLOCATE_POPULATION_BUDGET: this thread already allocated ", Global_1939807.f_291[iVar0 /*2*/].f_1);
		}
		return;
	}
	iVar0 = func_61();
	if (iVar0 == -1)
	{
		DEBUG::_0x83407B92D46F25C3(8, 218, "WORLD_STATE_REQUEST_POPULATION_BUDGET_ADJUSTMENT: unable to allocate, too many other allocations - ", 5);
		return;
	}
	Global_1939807.f_291[iVar0 /*2*/].f_1 = iParam0;
	Global_1939807.f_291[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1939807.f_302 = (Global_1939807.f_302 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_49());
	DEBUG::_0xF0783374333FD8CE(392, 218, "WORLD_STATE_ALLOCATE_POPULATION_BUDGET: allocating ", iParam0, "mb for this thread and setting pop budget multiplier to - ", (BUILTIN::TO_FLOAT(Global_1939807.f_302) / BUILTIN::TO_FLOAT(300)));
}

int func_43()
{
	return Global_1902870;
}

int func_44(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_45(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_46(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_62(Global_33) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "TELEPORT_ENTITY: tryin to move player but he's in middle of teleport");
	}
	if (func_63(iParam0))
	{
		if (func_64(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
			DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "TELEPORT_ENTITY: trying to teleport a hitched horse...unhitching this but you shouldn't be doing this");
		}
	}
	if (func_65(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_46(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_46(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_65(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
			DEBUG::_0xF0783374333FD8CE(40, 0, "TELEPORT_ENTITY: trying to teleport a ped with attachments, clearing peds tasks immediately...may conflict with TELEPORT_KEEP_TASK...ped name: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam0)));
		}
	}
	if (func_65(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_65(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_65(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_65(iParam5, 129))
	{
		if (func_65(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &sVar5))
			{
				vParam1.f_2 = sVar5;
				DEBUG::_0xF0783374333FD8CE(24, 0, "TELEPORT_ENTITY: water height is: ", sVar5);
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "TELEPORT_ENTITY: couldn't find water height");
			}
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iParam0, vParam1, fParam4, func_65(iParam5, 32), true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_65(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_65(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_63(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_65(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_33 && !func_65(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "TELEPORT_ENTITY: moving the player and reseting gameplay cam while screen isn't faded out");
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_47(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_66(uParam2, 1, iVar0);
	}
	if (!Global_1940410.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_67(iParam0, uParam2))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: saw dead body aggro triggered");
				*uParam3 = 128;
				func_68(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940410.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_69(iParam0, uParam2))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: aiming aggro triggered");
					*uParam3 = 8;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_70(iParam0, iParam1, uParam2))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: aiming at vehicle aggro triggered");
					*uParam3 = 8;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_71(iParam0, uParam2))
				{
					DEBUG::_0xF0783374333FD8CE(8, 0, "DO_AGGRO_CHECK: Threat seen alerted triggered");
					*uParam3 = 64;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940410.f_20 && func_72(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Wanted level aggro triggered");
				*uParam3 = 16384;
				func_68(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940410.f_19)
		{
			if (func_73(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_74(Global_33, iParam0, uParam2))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Shot near aggro triggeres");
						*uParam3 = 4;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_75(Global_33, iParam0, uParam2))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: heard shot aggro triggered");
						*uParam3 = 256;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940410.f_23) < 300)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "DO_AGGRO_CHECK: Using full fire near");
				if (func_76(Global_33, iParam0, uParam2, 0))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Fire near alerted triggered");
					*uParam3 = 16;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_76(Global_33, iParam0, uParam2, 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Fire near alerted triggered");
				*uParam3 = 16;
				func_68(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940410.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_77(iParam0, uParam2))
				{
					DEBUG::_0xF0783374333FD8CE(8, 0, "DO_AGGRO_CHECK: Damage seen alerted triggered");
					*uParam3 = 32;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940410.f_19 || uParam2->f_13 < 20f)
			{
				if (func_78(&iParam0, uParam2))
				{
					DEBUG::_0xF0783374333FD8CE(8, 0, "DO_AGGRO_CHECK: Property Damage alerted triggered");
					*uParam3 = 4096;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940410.f_24 || Global_1940410.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_79(uParam2, 4000))
				{
					if ((func_80(iParam0, Global_1940410.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_81(uParam2, iParam0)) && func_82(uParam2, iParam0))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: check attacked aggro triggered");
						*uParam3 = 2;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_80(iParam0, Global_1940410.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_81(uParam2, iParam0)) && func_82(uParam2, iParam0))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: check attacked aggro triggered");
					*uParam3 = 2;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940410.f_34 == 0)
			{
				if (Global_1940410.f_35 != 0)
				{
					if (func_83(iParam0, Global_1940410.f_35))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: check attacked aggro triggered");
						func_84();
						*uParam3 = 2;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_85(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_86() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: check attacked for wagon aggro triggered");
						func_84();
						*uParam3 = 2;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940410.f_36 != 0)
			{
				if (func_87())
				{
					if (func_83(iParam0, Global_1940410.f_36))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: check attacked aggro triggered");
						func_84();
						*uParam3 = 2;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_88(uParam2, iParam0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Theft aggro triggered");
				*uParam3 = 1024;
				func_68(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_89(uParam2, iParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Spitting aggro triggered");
			*uParam3 = 1048576;
			func_68(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_90(iParam0, iParam1, uParam2))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: minor attacked aggro triggered");
					*uParam3 = 2048;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_91(iParam0, uParam2))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Player is dangerous");
						*uParam3 = 8192;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_92(iParam0, uParam2))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Player is sick");
					*uParam3 = 32768;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_93(uParam2, 4000))
				{
					if (func_94(&iParam0, uParam2))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Player is robbing ped");
						*uParam3 = 512;
						func_68(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_95(iParam0, uParam2))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Player is annoying ped");
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_68(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_96(uParam2, iParam0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "DO_AGGRO_CHECK: Ped panicking because player or player horse has killed them");
				*uParam3 = 1;
				func_68(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_48(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_65(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_65(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_65(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

float func_49()
{
	return (func_97(150f, BUILTIN::TO_FLOAT(Global_1939807.f_302)) / BUILTIN::TO_FLOAT(300));
}

bool func_50(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 4);
	}
	else
	{
		func_57(uParam0, 4);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 8);
	}
	else
	{
		func_57(uParam0, 8);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 16);
	}
	else
	{
		func_57(uParam0, 67108864);
		func_57(uParam0, 16);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 32);
	}
	else
	{
		func_57(uParam0, 32);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 64);
	}
	else
	{
		func_57(uParam0, 64);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 1048576);
	}
	else
	{
		func_57(uParam0, 1048576);
	}
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_59(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_98(iParam0, 0, 1);
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
			func_99(iParam0, 0);
			bVar0 = true;
		}
		func_100(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_60(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1939807.f_291[iVar0 /*2*/], false) && Global_1939807.f_291[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_61()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1939807.f_291[iVar0 /*2*/], false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_62(var uParam0)
{
	return uParam0;
}

bool func_63(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_64(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "IS_HORSE_USING_HITCHING_POST_SCENARIO - Horse doesn't exist");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "IS_HORSE_USING_HITCHING_POST_SCENARIO - Horse is dead or injured");
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_65(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_66(var uParam0, bool bParam1, int iParam2)
{
	func_101(iParam2);
	if (Global_1572887.f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			return;
		}
		if (Global_1940410.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1275959.f_11)
		{
			return;
		}
		if (Global_1275959.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_13 == -1)
	{
		uParam0->f_14 = Global_1940410.f_38;
	}
	else
	{
		uParam0->f_14 = func_102(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_14 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_33))
						{
							DEBUG::_0xA308F935BDECCEC0(8, 0, "EVALUATE_AGGRO_CHECKS: Player is planting a bomb");
							func_58(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_103(1, 1))
						{
							DEBUG::_0xA308F935BDECCEC0(8, 0, "EVALUATE_AGGRO_CHECKS: Player has hogtied ped");
							func_58(uParam0, 33554432);
						}
					}
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "EVALUATE_AGGRO_CHECKS: Player being dangerous");
					if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_103(1, 1) || *uParam0 & 8192 != 0))
					{
						func_57(uParam0, 33554432);
					}
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_104(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				DEBUG::_0xA308F935BDECCEC0(8, 0, "EVALUATE_AGGRO_CHECKS_EVERY_FRAME: Theft behavior has occurred");
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
					DEBUG::_0xA308F935BDECCEC0(8, 0, "EVALUATE_AGGRO_CHECKS_EVERY_FRAME: Looted ped and timestamp reset");
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_105(uParam0);
}

bool func_67(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_SAW_DEAD_BODY: Returning FALSE. Dead thing isn't a ped");
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_SAW_DEAD_BODY: Returning FALSE. Dead thing isn't human");
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_SAW_DEAD_BODY: Returning FALSE. Dead ped must be ignored");
				return false;
			}
			if (iVar2 == Global_1940410.f_27)
			{
				DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_SAW_DEAD_BODY: Returning FALSE. Dead ped is on player horse");
				return false;
			}
			if (iVar2 == Global_1940410.f_26)
			{
				DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_SAW_DEAD_BODY: Returning FALSE. Dead ped is being carried");
				return false;
			}
			if (!func_106(iParam0, uParam1, iVar2))
			{
				DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_SAW_DEAD_BODY: Returning FALSE. Dead ped has rel group difference");
				return false;
			}
			if (func_107(iParam0, iVar2) <= func_108(uParam1))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 0, "CHECK_SAW_DEAD_BODY: Dead body found with event ", func_109(iVar0, 0));
				return true;
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_SAW_DEAD_BODY: Returning FALSE. Dead ped not close enough");
			}
			break;
	}
	return false;
}

void func_68(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_110(iParam2, 1, 1, 1, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_HANDLE_SHARED_TERMINATION_FUNCTIONALITY: Aggro is an aggressive act");
		func_58(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_111(uParam1, 1);
	func_112();
}

bool func_69(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_113(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_114(uParam1);
			if (func_115(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_AIMING: Setting aim timer to ", uParam1->f_3);
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_116(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_111(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_117(uParam1))
						{
							func_111(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_70(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_118(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_114(uParam2);
		if (func_115(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_AIMING_VEHICLE: Setting aim timer to ", uParam2->f_3);
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_116(uParam2)
				{
					func_111(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_71(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_CHECK_THREAT_SEEN: Player is interacting with a ped not a threat");
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1940410.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940410.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_106(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_116(uParam1)
		{
			fVar3 = func_114(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_33, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_72(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	DEBUG::_0x1B08D1EB9D8C4931(559240, 111, "IS_PLAYER_WANTED(", iParam0, ", ", bParam1, ", ", bParam2, ", ", bParam3, ")");
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_119(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1275959.f_10)
		{
			if (!Global_1275959.f_11)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - Player ", iParam0, " does not exist");
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - Player ", iParam0, " does not exist");
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - Player ", iParam0, " does not exist");
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : TRUE - IS_LAW_INCIDENT_ACTIVE(", iParam0, ")");
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - bRequireActiveIncident AND NOT IS_LAW_INCIDENT_ACTIVE(", iParam0, ")");
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : TRUE - GET_PLAYER_REGISTERED_CRIME(", iParam0, ") AND thisCrime.m_WasReported");
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : TRUE - bConsiderActiveWitnesses AND ARE_WITNESSES_ACTIVE(", iParam0, ")");
				return 1;
			}
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 111, "IS_PLAYER_WANTED : FALSE - Default case");
	return 0;
}

bool func_73(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_86();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		DEBUG::_0xA308F935BDECCEC0(100488, 0, "AGGRO_HAS_RESET_TIME_ELAPSED_SHOT: TRUE. iResetAggroTime = ", uParam0->f_9, " game timer = ", iVar0, ". Delta = ", iVar1, ". Just shot delay = ", (fParam1 * 1000f));
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(100488, 0, "AGGRO_HAS_RESET_TIME_ELAPSED_SHOT: FALSE. iResetAggroTime = ", uParam0->f_9, " game timer = ", iVar0, ". Delta = ", iVar1, ". Just shot delay = ", (fParam1 * 1000f));
	return false;
}

bool func_74(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHECK_SHOT_NEAR: In function");
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_120(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940410.f_40) || Global_1940410.f_40 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940410.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940410.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940410.f_40) || Global_1940410.f_40 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1940410.f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1940410.f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		DEBUG::_0x1B08D1EB9D8C4931(152, 0, "CHECK_SHOT_NEAR: In fPlayerJustShotTime = ", fVar2, ". iShotNearRecentlyTime = ", iVar1);
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(iParam0) <= fVar2)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHECK_SHOT_NEAR: Succeeded shot near");
			if (func_82(uParam2, iParam1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_SHOT_NEAR: Ped panicking because player shot near them recently");
				func_111(uParam2, 1);
				return true;
			}
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHECK_SHOT_NEAR: Failed shot near");
		}
	}
	return false;
}

bool func_75(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHECK_HEARD_SHOT: In function");
	if (uParam2->f_13 < IntToFloat(func_121(uParam2)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHECK_HEARD_SHOT: In range");
		if ((WEAPON::IS_WEAPON_VALID(Global_1940410.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940410.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHECK_HEARD_SHOT: Passed weapon check");
			if (func_82(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(iParam0) <= 1f)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_HEARD_SHOT: Ped panicking because player is shooting and ped heard it!");
					DEBUG::_0xA308F935BDECCEC0(152, 0, "CHECK_HEARD_SHOT: Player distance to ped = ", uParam2->f_13, ". Range is ", func_121(uParam2));
					func_111(uParam2, 1);
					return true;
				}
			}
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 0, "CHECK_HEARD_SHOT: Failed weapon check. Weapon = ", func_122(Global_1940410.f_40, 0));
		}
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "CHECK_HEARD_SHOT: Outside of range");
	}
	return false;
}

bool func_76(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_123(uParam2);
	if (!bParam3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "CHECK_FIRE_NEAR: In Full fire near check. Fire type to check = ", func_124(iVar3, 0));
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_FIRE_NEAR: Ped panicking because something exploded near them recently");
					func_111(uParam2, 1);
					return true;
				}
				break;
			case 1:
				DEBUG::_0x1B08D1EB9D8C4931(440, 0, "CHECK_FIRE_NEAR: Ped pos ", &vVar0, " fire close range = ", uParam2->f_30);
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_FIRE_NEAR: Ped panicking because player started fire near them recently");
					func_111(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					DEBUG::_0xA308F935BDECCEC0(56, 0, "CHECK_FIRE_NEAR: Dynamite currently at: ", &vVar4);
					if (func_125(iParam1, vVar0, vVar4))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_FIRE_NEAR: Ped panicking because they see dynamite thrown");
						func_111(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_FIRE_NEAR: Ped panicking because something exploded near them recently");
					func_111(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					DEBUG::_0xA308F935BDECCEC0(56, 0, "CHECK_FIRE_NEAR: Dynamite currently at: ", &vVar7);
					if (func_125(iParam1, vVar0, vVar7))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_FIRE_NEAR: Ped panicking because they see dynamite thrown");
						func_111(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"), vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE"), vVar0, 15f))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_FIRE_NEAR: Ped panicking because player threw toxic moonshine near");
		return true;
	}
	return false;
}

bool func_77(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940410.f_33)
	{
		if (!func_106(iParam0, uParam1, Global_1940410.f_28[iVar0]) || iParam0 == Global_1940410.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_126(Global_1940410.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940410.f_28[iVar0], false, false), vVar9);
			if (func_127(Global_1940410.f_28[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940410.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940410.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940410.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						DEBUG::_0xF0783374333FD8CE(8, 0, "AGGRO_CHECK_DAMAGE_SEEN: target ped heard horse die");
						DEBUG::_0xF0783374333FD8CE(952, 0, "AGGRO_CHECK_DAMAGE_SEEN: damaged ped: ", &(vVar2[0 /*3*/]), " || hearing ped: ", &(vVar2[1 /*3*/]));
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_128(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940410.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				DEBUG::_0xF0783374333FD8CE(8, 0, "AGGRO_CHECK_DAMAGE_SEEN: target ped heard other ped die");
				DEBUG::_0xF0783374333FD8CE(952, 0, "AGGRO_CHECK_DAMAGE_SEEN: damaged ped: ", &(vVar2[0 /*3*/]), " || hearing ped: ", &(vVar2[1 /*3*/]));
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_129(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940410.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				DEBUG::_0xF0783374333FD8CE(8, 0, "AGGRO_CHECK_DAMAGE_SEEN: target ped heard other ped get injured");
				DEBUG::_0xF0783374333FD8CE(952, 0, "AGGRO_CHECK_DAMAGE_SEEN: damaged ped: ", &(vVar2[0 /*3*/]), " || hearing ped: ", &(vVar2[1 /*3*/]));
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_130(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940410.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				DEBUG::_0xF0783374333FD8CE(8, 0, "AGGRO_CHECK_DAMAGE_SEEN: target ped saw other ped get injured/die");
				DEBUG::_0xF0783374333FD8CE(952, 0, "AGGRO_CHECK_DAMAGE_SEEN: damaged ped: ", &(vVar2[0 /*3*/]), " || hearing ped: ", &(vVar2[1 /*3*/]));
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_78(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			DEBUG::_0xA308F935BDECCEC0(56, 0, "AGGRO_CHECK_PROPERTY_DAMAGE: Source coords = ", &vVar5);
			DEBUG::_0xA308F935BDECCEC0(56, 0, "AGGRO_CHECK_PROPERTY_DAMAGE: Target coords = ", &vVar8);
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			DEBUG::_0xA308F935BDECCEC0(40, 0, "AGGRO_CHECK_PROPERTY_DAMAGE: Property damage found with event ", func_109(iVar0, 0));
			return true;
	}
	return false;
}

bool func_79(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_86();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(34952, 0, "AGGRO_HAS_RESET_TIME_ELAPSED_ATTACKED: TRUE. iResetAggroTime = ", uParam0->f_9, " game timer = ", iVar0, ". Delta = ", iVar1, ". Player attack delay = ", iParam1);
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(34952, 0, "AGGRO_HAS_RESET_TIME_ELAPSED_ATTACKED: FALSE. iResetAggroTime = ", uParam0->f_9, " game timer = ", iVar0, ". Delta = ", iVar1, ". Player attack delay = ", iParam1);
	return false;
}

int func_80(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because player has damaged him");
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because the player's vehicle caused damage to the ped");
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because the player's horse caused damage to the ped");
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because the player's horse caused damage to the ped while not mounted");
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_131(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because the player's leading horse caused damage to the ped while not mounted");
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because player has shoved them");
			return 1;
		}
	}
	if (func_132(iVar0, iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because player is lassoing them!");
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because player is grappling them");
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because player is jacking their vehicle!");
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED: Ped panicking because player is performing a stealth kill on them");
			return 1;
		}
	}
	return 0;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "SHOULD_AGGRO_ATTACK_REGISTER_NOW: Attempting to set attack damage frame ", uParam0->f_6);
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "SHOULD_AGGRO_ATTACK_REGISTER_NOW: Damage frame for CHECK_ATTACKED is ", uParam0->f_6);
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_82(var uParam0, int iParam1)
{
	if (func_133(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: Ped bypassed ragdoll requirement");
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: Ped shoved recently. Returning TRUE.");
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: Returning FALSE. Target is dead or dying");
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: Returning FALSE. Ped is being stealth killed");
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: Returning FALSE. Ped is being taken down");
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_33) != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: Ped being lassoed");
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_33, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: pedTarget is constrained by my bolas");
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_PASSES_RAGDOLL_REQUIREMENT: Ped done ragdolling and not in melee takedown");
		return true;
	}
	return false;
}

bool func_83(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED_HORSE: Ped panicking because a horse has caused damage to the ped while not mounted");
			return true;
		}
		if (func_134(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_ATTACKED_HORSE: Ped panicking because a horse has ragdolled the ped while not mounted");
				return true;
			}
		}
	}
	return false;
}

void func_84()
{
}

bool func_85(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_135(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_86();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_136(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_86();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_86()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_87()
{
	if (Global_1940410.f_36 == 0)
	{
		return false;
	}
	if (Global_1940410.f_36 == Global_1940410.f_34)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "_AGGRO_HAS_PLAYER_FLED_UNMOUNTED_HORSE_RECENTLY: Returning FALSE. Player on mount");
		return false;
	}
	if (Global_1940410.f_37 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "_AGGRO_HAS_PLAYER_FLED_UNMOUNTED_HORSE_RECENTLY: Returning FALSE. Command not given");
		return false;
	}
	if ((func_86() - Global_1940410.f_37) >= 10000)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "_AGGRO_HAS_PLAYER_FLED_UNMOUNTED_HORSE_RECENTLY: Returning FALSE. Timeout");
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 0, "_AGGRO_HAS_PLAYER_FLED_UNMOUNTED_HORSE_RECENTLY: Returning TRUE");
	return true;
}

bool func_88(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_108(uParam0);
	if (uParam0->f_13 > func_137(uParam0) && uParam0->f_13 > fVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(6552, 0, "AGGRO_CHECK_THEFT_SEEN: Dist cached is ", uParam0->f_13, ". Dist seen = ", func_137(uParam0), ". DistClose = ", fVar0);
		return false;
	}
	iVar2 = func_138(iParam1);
	iVar1 = func_139(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_33, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_CHECK_THEFT_SEEN: Horse being looted or stolen out of sight of onlooker");
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_CHECK_THEFT_SEEN: Horse being looted or stolen is not on affiliated team of owner");
	}
	return false;
}

bool func_89(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940410.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_140(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_141(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_PLAYER_SPITTING: Spitting aggro triggered");
	return true;
}

int func_90(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_142(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_91(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_IS_PLAYER_DANGEROUS: Player has killed a human while in close range");
		return true;
	}
	if (Global_1940410.f_18)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_IS_PLAYER_DANGEROUS: Peds are in combat with the player nearby");
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_143(iParam0, uParam1, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_IS_PLAYER_DANGEROUS: Ped panicking because player has hogtied ped nearby");
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_33, true, false) == 1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_IS_PLAYER_DANGEROUS: Player is planting dynamite");
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_33);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940410.f_24)
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_IS_PLAYER_DANGEROUS: Player is jacking or attacking someone");
			return true;
		}
	}
	if (!func_144(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			if (func_145(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_33)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			DEBUG::_0xA308F935BDECCEC0(40, 0, "CHECK_IS_PLAYER_DANGEROUS: Robbery found with event ", func_109(iVar1, 0));
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!func_146(uParam1, iParam0))
					{
						if (func_136(iVar4, Global_34, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::_0x06087579E7AA85A9(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_92(int iParam0, var uParam1)
{
	if (!func_147(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_93(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_86();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(34952, 0, "AGGRO_HAS_RESET_TIME_ELAPSED_ROBBED: TRUE. iResetAggroTime = ", uParam0->f_9, " game timer = ", iVar0, ". Delta = ", iVar1, ". Player rob delay = ", iParam1);
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(34952, 0, "AGGRO_HAS_RESET_TIME_ELAPSED_ROBBED: FALSE. iResetAggroTime = ", uParam0->f_9, " game timer = ", iVar0, ". Delta = ", iVar1, ". Player rob delay = ", iParam1);
	return false;
}

bool func_94(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_95(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_86();
		DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_IS_PED_ANNOYED: Starting annoy timer");
	}
	else if (func_86() - uParam1->f_5) > func_148(uParam1)
	{
		return func_149(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_96(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_33 == iVar1 || Global_1940410.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

float func_97(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_98(int iParam0, bool bParam1, bool bParam2)
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

void func_99(int iParam0, bool bParam1)
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

void func_100(char* sParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(648, 28, "HORSE_SET_GENDER - pedHorse: ", sParam0, " eGender = ", func_150(iParam1, 0));
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 1f);
	}
}

void func_101(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "UPDATE_AGGRO_CACHE: already updated");
		return;
	}
	iVar0 = (iParam0 - Global_1940410.f_32);
	Global_1940410.f_21 = func_151();
	if (Global_1940410.f_21)
	{
		Global_1940410.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940410.f_38))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "UPDATE_AGGRO_CACHE: valid weapon");
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_33))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "Using vehicle weapon");
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "Using normal weapon");
				uVar2 = Global_1940410.f_38;
			}
			Global_1940410.f_40 = uVar2;
			DEBUG::_0xA308F935BDECCEC0(168, 0, "UPDATE_AGGRO_CACHE: Last fired weapon is ", func_122(Global_1940410.f_40, 0), " hash ", Global_1940410.f_40);
		}
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "UPDATE_AGGRO_CACHE: Invalid weapon");
	}
	switch (iVar0)
	{
		case 0:
			func_152(&(Global_1940410.f_28), &(Global_1940410.f_33));
			Global_1940410.f_32 = iParam0;
			break;
		case 1:
			Global_1940410.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940410.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940410.f_38))
				{
					Global_1940410.f_24 = PED::_GET_LASSO_TARGET(Global_33) != 0;
				}
				if (Global_1940410.f_40 == joaat("WEAPON_THROWN_BOLAS"))
				{
					Global_1940410.f_24 = WEAPON::_0x46D42883E873C1D7(Global_33) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940410.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940410.f_40))
			{
				Global_1940410.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1940410.f_40))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 0, "UPDATE_AGGRO_CACHE: Silent weapon");
					Global_1940410.f_19 = PED::_0x285D36C5C72B0569(Global_33) <= 3f;
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 0, "UPDATE_AGGRO_CACHE: Loud weapon");
					Global_1940410.f_19 = PED::_0x285D36C5C72B0569(Global_33) <= 1f;
				}
				if (Global_1940410.f_19)
				{
					Global_1940410.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940410.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
	DEBUG::_0x4DC69742196F818A(8, 0, "UPDATE_AGGRO_CACHE: updated");
}

var func_102(int iParam0)
{
	return Global_1102630.f_3705[iParam0 /*3*/];
}

bool func_103(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_153(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_104(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940410.f_34;
	if (func_28() == -1)
	{
		if (Global_1940410.f_34 == 0)
		{
			iVar0 = func_154(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940410.f_34) || !Global_1957252.f_1716[4])
	{
		iVar0 = func_154(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_139(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_105(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_155(uParam0);
	}
}

bool func_106(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_139(iParam2);
	}
	else
	{
		iVar1 = func_138(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_139(iParam0);
	}
	else
	{
		iVar0 = func_138(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_45(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_107(int iParam0, int iParam1)
{
	return func_134(iParam0, iParam1, 1, 1);
}

float func_108(var uParam0)
{
	return uParam0->f_29;
}

char* func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EVENT_WITHIN_GUN_COMBAT_AREA"):
			return "EVENT_WITHIN_GUN_COMBAT_AREA";
		case -2129179673:
			return "EVENT_CALM_HORSE";
		case -2122443649:
			return "EVENT_CATCH_ITEM";
		case -2119801478:
			return "EVENT_NETWORK_SESSION_MERGE_END";
		case -2117667982:
			return "EVENT_NETWORK_LASSO_DETACH";
		case joaat("EVENT_SHOCKING_BEAT_TERRIFYING_NEW"):
			return "EVENT_SHOCKING_BEAT_TERRIFYING_NEW";
		case joaat("EVENT_SHOCKING_PED_DROPPED"):
			return "EVENT_SHOCKING_PED_DROPPED";
		case -2100213574:
			return "EVENT_NETWORK_CREW_INVITE_REQUEST_RECEIVED";
		case -2095977185:
			return "EVENT_NETWORK_PLATFORM_INVITE_ACCEPTED";
		case -2091944374:
			return "EVENT_CALCULATE_LOOT";
		case -2090275807:
			return "EVENT_REVIVED";
		case joaat("EVENT_INTERACTION"):
			return "EVENT_INTERACTION";
		case -2052708993:
			return "EVENT_SWITCH_2_NM_TASK";
		case joaat("EVENT_SHOCKING_BAIT_DROPPED"):
			return "EVENT_SHOCKING_BAIT_DROPPED";
		case -2036121834:
			return "EVENT_NETWORK_PROJECTILE_ATTACHED";
		case joaat("EVENT_SHOCKING_BAR_BRAWL_ACTION"):
			return "EVENT_SHOCKING_BAR_BRAWL_ACTION";
		case joaat("EVENT_MOUNT_DAMAGED_BY_PLAYER"):
			return "EVENT_MOUNT_DAMAGED_BY_PLAYER";
		case joaat("EVENT_SHOCKING_SUBMERGED_VEHICLE"):
			return "EVENT_SHOCKING_SUBMERGED_VEHICLE";
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
			return "EVENT_SHOCKING_SEEN_PED_ROBBED";
		case -2020006491:
			return "EVENT_NETWORK_POSSE_EX_ADMIN_DISBANDED";
		case joaat("EVENT_PLAYER_APPROACHED"):
			return "EVENT_PLAYER_APPROACHED";
		case joaat("EVENT_SHOCKING_STUDIO_BOMB"):
			return "EVENT_SHOCKING_STUDIO_BOMB";
		case -2001102517:
			return "EVENT_NETWORK_PLAYER_JOIN_SCRIPT";
		case joaat("EVENT_SHOCKING_BREACH_ATTEMPT"):
			return "EVENT_SHOCKING_BREACH_ATTEMPT";
		case -1985279805:
			return "EVENT_CALM_PED";
		case joaat("EVENT_ACQUAINTANCE_PED_DISLIKE"):
			return "EVENT_ACQUAINTANCE_PED_DISLIKE";
		case joaat("EVENT_SHOCKING_SEEN_WEIRD_PED_APPROACHING"):
			return "EVENT_SHOCKING_SEEN_WEIRD_PED_APPROACHING";
		case -1961481354:
			return "EVENT_CALL_FOR_COVER";
		case joaat("EVENT_SHOCKING_REACTION_TEST_LOW"):
			return "EVENT_SHOCKING_REACTION_TEST_LOW";
		case -1936963085:
			return "EVENT_DEBUG_SETUP_CUTSCENE_WORLD_STATE";
		case joaat("EVENT_ANIMAL_RESPONDED_TO_THREAT"):
			return "EVENT_ANIMAL_RESPONDED_TO_THREAT";
		case joaat("EVENT_SHOCKING_BEAT_SURPRISING"):
			return "EVENT_SHOCKING_BEAT_SURPRISING";
		case -1905067041:
			return "EVENT_VOICE_CONNECTION_TERMINATED";
		case joaat("EVENT_PED_COLLISION_WITH_PED"):
			return "EVENT_PED_COLLISION_WITH_PED";
		case joaat("EVENT_SHOCKING_PLAYER_CROUCHING"):
			return "EVENT_SHOCKING_PLAYER_CROUCHING";
		case joaat("EVENT_PED_JACKING_MY_VEHICLE"):
			return "EVENT_PED_JACKING_MY_VEHICLE";
		case joaat("EVENT_SHOT_FIRED_WHIZZED_BY_ENTITY"):
			return "EVENT_SHOT_FIRED_WHIZZED_BY_ENTITY";
		case -1863021589:
			return "EVENT_VEHICLE_CREATED";
		case joaat("EVENT_SHOCKING_WEAPON_DRAWN"):
			return "EVENT_SHOCKING_WEAPON_DRAWN";
		case -1832939826:
			return "EVENT_NETWORK_SYSTEM_SERVICE_EVENT";
		case joaat("EVENT_VEHICLE_ON_FIRE"):
			return "EVENT_VEHICLE_ON_FIRE";
		case -1816722641:
			return "EVENT_PLAYER_ESCALATED_PED";
		case joaat("EVENT_SHOCKING_PLAYER_DUEL"):
			return "EVENT_SHOCKING_PLAYER_DUEL";
		case -1778603064:
			return "EVENT_ACQUAINTANCE_PED_LIKE";
		case joaat("EVENT_SHOCKING_LOCK_PICKED"):
			return "EVENT_SHOCKING_LOCK_PICKED";
		case -1749240836:
			return "EVENT_NETWORK_POSSE_DATA_OR_MEMBERSHIP_CHANGED";
		case -1730772208:
			return "EVENT_OBJECT_INTERACTION";
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
			return "EVENT_SHOCKING_PROPERTY_DAMAGE";
		case joaat("EVENT_SHOCKING_ENTITY_LASSOED"):
			return "EVENT_SHOCKING_ENTITY_LASSOED";
		case -1692828063:
			return "EVENT_NETWORK_POSSE_MEMBER_DISBANDED";
		case -1691761750:
			return "EVENT_LEADER_ENTERED_COVER";
		case -1688530399:
			return "EVENT_NETWORK_NETWORK_ROS_CHANGED";
		case -1682387274:
			return "EVENT_PLAYER_MOUNT_WILD_HORSE";
		case joaat("EVENT_SHOCKING_RUNNING_STAMPEDE"):
			return "EVENT_SHOCKING_RUNNING_STAMPEDE";
		case -1651585854:
			return "EVENT_HITCH_ANIMAL";
		case joaat("EVENT_SHOCKING_PAIN_VOCALIZATION"):
			return "EVENT_SHOCKING_PAIN_VOCALIZATION";
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			return "EVENT_SHOCKING_ENTITY_HOGTIED";
		case -1578459229:
			return "EVENT_NETWORK_POSSE_MEMBER_SET_ACTIVE";
		case joaat("EVENT_LASSO_DETACHED"):
			return "EVENT_LASSO_DETACHED";
		case joaat("EVENT_BEING_LOOTED"):
			return "EVENT_BEING_LOOTED";
		case -1538469261:
			return "EVENT_PERSCHAR_PED_SPAWNED";
		case -1513138189:
			return "EVENT_NETWORK_POSSE_STATS_READ_COMPLETE";
		case -1511724297:
			return "EVENT_LOOT";
		case -1509407906:
			return "EVENT_LOOT_VALIDATION_FAIL";
		case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
			return "EVENT_SHOT_FIRED_BULLET_IMPACT";
		case -1500256914:
			return "EVENT_NETWORK_PERMISSION_CHECK_RESULT";
		case joaat("EVENT_CRIME_CRY_FOR_HELP"):
			return "EVENT_CRIME_CRY_FOR_HELP";
		case -1485628607:
			return "EVENT_NETWORK_ATTEMPT_HOST_MIGRATION";
		case -1482146560:
			return "EVENT_NETWORK_PLAYER_JOIN_SESSION";
		case -1471622011:
			return "EVENT_NETWORK_DRAG_PED";
		case joaat("EVENT_SHOCKING_SEEN_WEAPON_THREAT"):
			return "EVENT_SHOCKING_SEEN_WEAPON_THREAT";
		case joaat("EVENT_SHOCKING_SEEN_WEIRD_PED"):
			return "EVENT_SHOCKING_SEEN_WEIRD_PED";
		case joaat("EVENT_KNOCKEDOUT"):
			return "EVENT_KNOCKEDOUT";
		case joaat("EVENT_SHOCKING_PED_KNOCKED_OUT"):
			return "EVENT_SHOCKING_PED_KNOCKED_OUT";
		case joaat("EVENT_PED_COLLISION_WITH_PLAYER"):
			return "EVENT_PED_COLLISION_WITH_PLAYER";
		case joaat("EVENT_SHOCKING_CAR_PILE_UP"):
			return "EVENT_SHOCKING_CAR_PILE_UP";
		case -1373728085:
			return "EVENT_WAIT_FOR_INTERACTION";
		case -1373301352:
			return "EVENT_NETWORK_PLAYER_SIGNED_ONLINE";
		case joaat("EVENT_DEATH"):
			return "EVENT_DEATH";
		case joaat("EVENT_SHOCKING_SEEN_CONFRONTATION"):
			return "EVENT_SHOCKING_SEEN_CONFRONTATION";
		case joaat("EVENT_SHOCKING_BICYCLE_CRASH"):
			return "EVENT_SHOCKING_BICYCLE_CRASH";
		case joaat("EVENT_SHOCKING_NON_VIOLENT_WEAPON_AIMED_AT"):
			return "EVENT_SHOCKING_NON_VIOLENT_WEAPON_AIMED_AT";
		case -1325700282:
			return "EVENT_NETWORK_SPECTATE_LOCAL";
		case -1315570756:
			return "EVENT_NETWORK_DAMAGE_ENTITY";
		case -1315453179:
			return "EVENT_NETWORK_CREW_JOINED";
		case -1312424871:
			return "EVENT_PLAYER_STRIPPED_WEAPON";
		case joaat("EVENT_SHOCKING_PED_RUN_OVER"):
			return "EVENT_SHOCKING_PED_RUN_OVER";
		case -1308368394:
			return "EVENT_NETWORK_CREW_RANK_CHANGE";
		case -1288743481:
			return "EVENT_PED_TO_FLEE";
		case -1286831256:
			return "EVENT_PLAYER_HAT_KNOCKED_OFF";
		case -1267317510:
			return "EVENT_UI_QUICK_ITEM_USED";
		case -1246119244:
			return "EVENT_PED_ANIMAL_INTERACTION";
		case -1241852893:
			return "EVENT_CARRIABLE_VEHICLE_STOW_START";
		case -1231347001:
			return "EVENT_VEHICLE_DESTROYED";
		case joaat("EVENT_UNIT_TEST_SCENARIO_EXIT"):
			return "EVENT_UNIT_TEST_SCENARIO_EXIT";
		case joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"):
			return "EVENT_SHOCKING_BEAT_DISTURBING_NEW";
		case joaat("EVENT_SHOCKING_RANSACK"):
			return "EVENT_SHOCKING_RANSACK";
		case joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"):
			return "EVENT_SHOCKING_BEAT_DANGEROUS_NEW";
		case joaat("EVENT_LASSO_WHIZZED_BY"):
			return "EVENT_LASSO_WHIZZED_BY";
		case -1171710795:
			return "EVENT_NETWORK_REVIVED_ENTITY";
		case -1156527968:
			return "EVENT_PLAYER_UNABLE_TO_ENTER_VEHICLE";
		case joaat("EVENT_SEEN_TERRIFIED_PED"):
			return "EVENT_SEEN_TERRIFIED_PED";
		case -1147066642:
			return "EVENT_NETWORK_TOO_MANY_SCRIPTED_GAME_EVENTS";
		case joaat("EVENT_SHOCKING_STRANGE_OUTFIT"):
			return "EVENT_SHOCKING_STRANGE_OUTFIT";
		case -1130756835:
			return "EVENT_DAILY_CHALLENGE_STREAK_COMPLETED";
		case joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"):
			return "EVENT_SHOCKING_BEAT_INTERESTING_NEW";
		case -1126217932:
			return "EVENT_NETWORK_MINIGAME_REQUEST_COMPLETE";
		case joaat("EVENT_SHOCKING_ITEM_STOLEN"):
			return "EVENT_SHOCKING_ITEM_STOLEN";
		case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
			return "EVENT_SHOT_FIRED_WHIZZED_BY";
		case joaat("EVENT_SHOCKING_PLAYER_GRIEFING"):
			return "EVENT_SHOCKING_PLAYER_GRIEFING";
		case -1065733433:
			return "EVENT_NETWORK_HOGTIE_BEGIN";
		case joaat("EVENT_WHISTLING_HEARD"):
			return "EVENT_WHISTLING_HEARD";
		case -1034120588:
			return "EVENT_HELP_TEXT_REQUEST";
		case -1024103845:
			return "EVENT_REACTION_COMBAT_VICTORY";
		case joaat("EVENT_POTENTIAL_CRIME"):
			return "EVENT_POTENTIAL_CRIME";
		case -1009774763:
			return "EVENT_ERRORS_GLOBAL_BLOCK_INACCESSIBLE";
		case -1002640900:
			return "EVENT_NETWORK_PRESENCE_EMAIL";
		case joaat("EVENT_SHOT_FIRED_BASE"):
			return "EVENT_SHOT_FIRED_BASE";
		case joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"):
			return "EVENT_SHOCKING_BEAT_ALARMING_NEW";
		case -992702923:
			return "EVENT_ERRORS_ARRAY_OVERFLOW";
		case joaat("EVENT_PLAYER_DEATH"):
			return "EVENT_PLAYER_DEATH";
		case joaat("EVENT_DAMAGE"):
			return "EVENT_DAMAGE";
		case joaat("EVENT_POTENTIAL_WALK_INTO_FIRE"):
			return "EVENT_POTENTIAL_WALK_INTO_FIRE";
		case -968272321:
			return "EVENT_MOUNT_REACTION";
		case joaat("EVENT_SHOCKING_POTENTIAL_BLAST"):
			return "EVENT_SHOCKING_POTENTIAL_BLAST";
		case joaat("EVENT_WITHIN_LAW_RESPONSE_AREA"):
			return "EVENT_WITHIN_LAW_RESPONSE_AREA";
		case joaat("EVENT_POTENTIAL_BE_WALKED_INTO"):
			return "EVENT_POTENTIAL_BE_WALKED_INTO";
		case -930155091:
			return "EVENT_NETWORK_CASHINVENTORY_NOTIFICATION";
		case -921472336:
			return "EVENT_ERRORS_UNKNOWN_ERROR";
		case -919500771:
			return "EVENT_NETWORK_HOGTIE_END";
		case joaat("EVENT_OBJECT_COLLISION"):
			return "EVENT_OBJECT_COLLISION";
		case joaat("EVENT_VEHICLE_WAITING_ON_PED_TO_MOVE_AWAY"):
			return "EVENT_VEHICLE_WAITING_ON_PED_TO_MOVE_AWAY";
		case -895552461:
			return "EVENT_PICKUP_SPAWNED";
		case joaat("EVENT_RESPONDED_TO_THREAT"):
			return "EVENT_RESPONDED_TO_THREAT";
		case -885048077:
			return "EVENT_NETWORK_VEHICLE_LOOTED";
		case joaat("EVENT_SHOCKING_SEEN_GANG_FIGHT"):
			return "EVENT_SHOCKING_SEEN_GANG_FIGHT";
		case -880791236:
			return "EVENT_NETWORK_SCADMIN_PLAYER_UPDATED";
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
			return "EVENT_SHOCKING_SEEN_PED_INTIMIDATED";
		case joaat("EVENT_POTENTIAL_THREAT_APPROACHING"):
			return "EVENT_POTENTIAL_THREAT_APPROACHING";
		case -857756425:
			return "EVENT_NETWORK_SESSION_MERGE_START";
		case -843924932:
			return "EVENT_NETWORK_PLAYER_DROPPED_PORTABLE_PICKUP";
		case -843555838:
			return "EVENT_SCENARIO_DESTROY_PROP";
		case joaat("EVENT_CRIME_REPORTED"):
			return "EVENT_CRIME_REPORTED";
		case joaat("EVENT_SHOCKING_FISHING_CAST"):
			return "EVENT_SHOCKING_FISHING_CAST";
		case -818205375:
			return "EVENT_STAT_VALUE_CHANGED";
		case joaat("EVENT_PED_ENTERED_MY_VEHICLE"):
			return "EVENT_PED_ENTERED_MY_VEHICLE";
		case joaat("EVENT_SHOCKING_SIREN"):
			return "EVENT_SHOCKING_SIREN";
		case -751866762:
			return "EVENT_STATIC_COUNT_REACHED_MAX";
		case -745090075:
			return "EVENT_IMPENDING_SAMPLE_PROMPT";
		case joaat("EVENT_SHOCKING_TOXIC_MOONSHINE"):
			return "EVENT_SHOCKING_TOXIC_MOONSHINE";
		case -725272239:
			return "EVENT_NETWORK_ROCKSTAR_INVITE_RECEIVED";
		case -716406075:
			return "EVENT_NETWORK_FRIEND_STATUS_UPDATED";
		case joaat("EVENT_SHOCKING_DOOR_BROKEN"):
			return "EVENT_SHOCKING_DOOR_BROKEN";
		case -687266558:
			return "EVENT_PICKUP_CARRIABLE";
		case -684883982:
			return "EVENT_NETWORK_CLOUD_EVENT";
		case joaat("EVENT_SHOCKING_PLAYER_POURING_MOONSHINE"):
			return "EVENT_SHOCKING_PLAYER_POURING_MOONSHINE";
		case -660243554:
			return "EVENT_STUCK_IN_AIR";
		case joaat("EVENT_SHOCKING_WITNESS_REPORTING"):
			return "EVENT_SHOCKING_WITNESS_REPORTING";
		case joaat("EVENT_RECOVER_AFTER_KNOCKOUT"):
			return "EVENT_RECOVER_AFTER_KNOCKOUT";
		case joaat("EVENT_SHOCKING_GUARD_DOG_BARKING"):
			return "EVENT_SHOCKING_GUARD_DOG_BARKING";
		case -648745775:
			return "EVENT_NETWORK_GANG";
		case -642309294:
			return "EVENT_NETWORK_SCADMIN_RECEIVED_CASH";
		case -634062504:
			return "EVENT_NETWORK_SC_FEED_POST_NOTIFICATION";
		case joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"):
			return "EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD";
		case -617453104:
			return "EVENT_CHALLENGE_REWARD";
		case joaat("EVENT_LASSO_HIT"):
			return "EVENT_LASSO_HIT";
		case joaat("EVENT_SHOCKING_PLAYER_ARRIVAL"):
			return "EVENT_SHOCKING_PLAYER_ARRIVAL";
		case joaat("EVENT_DRAFT_ANIMAL_DETACHED_FROM_VEHICLE"):
			return "EVENT_DRAFT_ANIMAL_DETACHED_FROM_VEHICLE";
		case joaat("EVENT_SHOT_FIRED"):
			return "EVENT_SHOT_FIRED";
		case -582361627:
			return "EVENT_CARRIABLE_PROMPT_INFO_REQUEST";
		case joaat("EVENT_SHOCKING_PED_TIED_BY_BOLAS"):
			return "EVENT_SHOCKING_PED_TIED_BY_BOLAS";
		case -569301261:
			return "EVENT_MISS_INTENDED_TARGET";
		case joaat("EVENT_SHOCKING_VISIBLE_REACTION"):
			return "EVENT_SHOCKING_VISIBLE_REACTION";
		case joaat("EVENT_REACTION_ANALYSIS_ACTION"):
			return "EVENT_REACTION_ANALYSIS_ACTION";
		case joaat("EVENT_SHOCKING_DANGEROUS_ANIMAL"):
			return "EVENT_SHOCKING_DANGEROUS_ANIMAL";
		case -526667468:
			return "EVENT_NETWORK_BAIL_DECISION_PENDING";
		case -507840394:
			return "EVENT_NETWORK_SCRIPT_EVENT";
		case joaat("EVENT_HORSE_STARTED_BREAKING"):
			return "EVENT_HORSE_STARTED_BREAKING";
		case -496141780:
			return "EVENT_SCENARIO_RELEASE_BUTTON";
		case joaat("EVENT_POTENTIAL_GET_RUN_OVER"):
			return "EVENT_POTENTIAL_GET_RUN_OVER";
		case -474465748:
			return "EVENT_LEADER_UNHOLSTERED_WEAPON";
		case -467733578:
			return "EVENT_NETWORK_HOST_MIGRATION";
		case joaat("EVENT_INJURED_DRIVER"):
			return "EVENT_INJURED_DRIVER";
		case -462231716:
			return "EVENT_SADDLE_TRANSFER";
		case -456923784:
			return "EVENT_SCENARIO_REMOVE_PED";
		case joaat("EVENT_SHOUT_TARGET_POSITION"):
			return "EVENT_SHOUT_TARGET_POSITION";
		case -454144443:
			return "EVENT_NETWORK_PLAYER_COLLECTED_PICKUP";
		case joaat("EVENT_SHOCKING_PLAYER_WITHIN_LOCKDOWN_REGION"):
			return "EVENT_SHOCKING_PLAYER_WITHIN_LOCKDOWN_REGION";
		case -439157431:
			return "EVENT_CLEAR_PED_TASKS";
		case -437497832:
			return "EVENT_NETWORK_PLAYER_LEFT_SCRIPT";
		case joaat("EVENT_FOOT_STEP_HEARD"):
			return "EVENT_FOOT_STEP_HEARD";
		case -421353837:
			return "EVENT_NETWORK_POSSE_DISBANDED";
		case joaat("EVENT_CRIME_WITNESSED"):
			return "EVENT_CRIME_WITNESSED";
		case -406996059:
			return "EVENT_ACQUAINTANCE_PED_RESPECT";
		case joaat("EVENT_SHOCKING_BICYCLE_ON_PAVEMENT"):
			return "EVENT_SHOCKING_BICYCLE_ON_PAVEMENT";
		case joaat("EVENT_SHOCKING_CAR_ALARM"):
			return "EVENT_SHOCKING_CAR_ALARM";
		case -378297983:
			return "EVENT_REACTION_INVESTIGATE_DEAD_PED";
		case -369170747:
			return "EVENT_PLAYER_HAT_EQUIPPED";
		case joaat("EVENT_SHOCKING_HORSE_FLEE_FROM_PLAYER_PROMPT"):
			return "EVENT_SHOCKING_HORSE_FLEE_FROM_PLAYER_PROMPT";
		case -346212524:
			return "EVENT_UI_ITEM_INSPECT_ACTIONED";
		case -339257625:
			return "EVENT_NETWORK_EMAIL_RECEIVED";
		case joaat("EVENT_SHOCKING_AUDIBLE_REACTION"):
			return "EVENT_SHOCKING_AUDIBLE_REACTION";
		case joaat("EVENT_PED_RAN_OVER_SCRIPT"):
			return "EVENT_PED_RAN_OVER_SCRIPT";
		case joaat("EVENT_ENTITY_BROKEN"):
			return "EVENT_ENTITY_BROKEN";
		case -308071988:
			return "EVENT_NETWORK_POSSE_LEFT";
		case joaat("EVENT_DUMMY_CONVERSION"):
			return "EVENT_DUMMY_CONVERSION";
		case -295316025:
			return "EVENT_PROVIDING_COVER";
		case joaat("EVENT_CALL_FOR_BACKUP"):
			return "EVENT_CALL_FOR_BACKUP";
		case joaat("EVENT_SHOCKING_TRAIN_WHISTLE"):
			return "EVENT_SHOCKING_TRAIN_WHISTLE";
		case joaat("EVENT_HELP_AMBIENT_FRIEND"):
			return "EVENT_HELP_AMBIENT_FRIEND";
		case joaat("EVENT_INJURED_RIDER"):
			return "EVENT_INJURED_RIDER";
		case -240786091:
			return "EVENT_HITCHING_POST";
		case -231935285:
			return "EVENT_NETWORK_POSSE_CREATED";
		case -231390325:
			return "EVENT_VOICE_SESSION_ENDED";
		case joaat("EVENT_FRIENDLY_AIMED_AT"):
			return "EVENT_FRIENDLY_AIMED_AT";
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
			return "EVENT_ACQUAINTANCE_PED_DEAD";
		case joaat("EVENT_SHOCKING_PED_JUMP"):
			return "EVENT_SHOCKING_PED_JUMP";
		case joaat("EVENT_SHOCKING_BEAT_DANGEROUS_GO_INSIDE_NEW"):
			return "EVENT_SHOCKING_BEAT_DANGEROUS_GO_INSIDE_NEW";
		case joaat("EVENT_SHOCKING_CAR_ON_CAR"):
			return "EVENT_SHOCKING_CAR_ON_CAR";
		case joaat("EVENT_SHOCKING_BEAT_AMUSING"):
			return "EVENT_SHOCKING_BEAT_AMUSING";
		case -178091376:
			return "EVENT_PLAYER_COLLECTED_AMBIENT_PICKUP";
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			return "EVENT_SHOCKING_SEEN_MELEE_ACTION";
		case joaat("EVENT_EXPLOSION_HEARD"):
			return "EVENT_EXPLOSION_HEARD";
		case joaat("EVENT_ENTITY_EXPLOSION"):
			return "EVENT_ENTITY_EXPLOSION";
		case -111015184:
			return "EVENT_NETWORK_KNOCKEDOUT_ENTITY";
		case -97516606:
			return "EVENT_NETWORK_LASSO_ATTACH";
		case joaat("EVENT_VEHICLE_DAMAGE_WEAPON"):
			return "EVENT_VEHICLE_DAMAGE_WEAPON";
		case -84591983:
			return "EVENT_PLAYER_LOCK_ON_TARGET";
		case -69092029:
			return "EVENT_LEADER_EXITED_CAR_AS_DRIVER";
		case -60262143:
			return "EVENT_TRANSITION_TO_HOGTIED";
		case -45008988:
			return "EVENT_SCENARIO_ADD_PED";
		case joaat("EVENT_ANIMAL_DETECTED_PREY"):
			return "EVENT_ANIMAL_DETECTED_PREY";
		case joaat("EVENT_SHOCKING_BEAT_INTERESTING"):
			return "EVENT_SHOCKING_BEAT_INTERESTING";
		case -20789381:
			return "EVENT_LEADER_ENTERED_CAR_AS_DRIVER";
		case 0:
			return "EVENT_INVALID";
		case 23105215:
			return "EVENT_NETWORK_POSSE_LEADER_SET_ACTIVE";
		case joaat("EVENT_SHOCKING_BEAT_DISTURBING"):
			return "EVENT_SHOCKING_BEAT_DISTURBING";
		case 71122427:
			return "EVENT_START_CONVERSATION";
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
			return "EVENT_SHOCKING_SEEN_CAR_STOLEN";
		case joaat("EVENT_SHOCKING_MAD_DRIVER"):
			return "EVENT_SHOCKING_MAD_DRIVER";
		case joaat("EVENT_SHOCKING_MAD_DRIVER_BICYCLE"):
			return "EVENT_SHOCKING_MAD_DRIVER_BICYCLE";
		case 141007368:
			return "EVENT_NETWORK_LOOT_CLAIMED";
		case joaat("EVENT_SHOCKING_UNCONSCIOUS_PED"):
			return "EVENT_SHOCKING_UNCONSCIOUS_PED";
		case joaat("EVENT_SHOCKING_HIJACKING"):
			return "EVENT_SHOCKING_HIJACKING";
		case joaat("EVENT_ON_FIRE"):
			return "EVENT_ON_FIRE";
		case joaat("EVENT_SHOCKING_DISTURBANCE"):
			return "EVENT_SHOCKING_DISTURBANCE";
		case joaat("EVENT_GUN_AIMED_AT"):
			return "EVENT_GUN_AIMED_AT";
		case joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"):
			return "EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW";
		case 163683216:
			return "EVENT_NETWORK_SIGN_IN_STATE_CHANGED";
		case 176872144:
			return "EVENT_NETWORK_POSSE_MEMBER_KICKED";
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
			return "EVENT_PED_SEEN_DEAD_PED";
		case 182250203:
			return "EVENT_CLIMB_LADDER_ON_ROUTE";
		case joaat("EVENT_SHOCKING_HORSE_REARED"):
			return "EVENT_SHOCKING_HORSE_REARED";
		case 205245793:
			return "EVENT_COMMUNICATE_EVENT";
		case 212329117:
			return "EVENT_NETWORK_FRIENDS_LIST_UPDATED";
		case joaat("EVENT_SHOCKING_EXPLOSION"):
			return "EVENT_SHOCKING_EXPLOSION";
		case 218595333:
			return "EVENT_HORSE_BROKEN";
		case joaat("EVENT_SHOCKING_SHOP_ROBBED"):
			return "EVENT_SHOCKING_SHOP_ROBBED";
		case 237247060:
			return "EVENT_NETWORK_POSSE_PRESENCE_REQUEST_COMPLETE";
		case 239947537:
			return "EVENT_NETWORK_SIGN_IN_START_NEW_GAME";
		case joaat("EVENT_SCRIPT_COMMAND"):
			return "EVENT_SCRIPT_COMMAND";
		case joaat("EVENT_SHOCKING_PLAYER_RUNNING"):
			return "EVENT_SHOCKING_PLAYER_RUNNING";
		case joaat("EVENT_PED_ON_VEHICLE_ROOF"):
			return "EVENT_PED_ON_VEHICLE_ROOF";
		case joaat("EVENT_WON_APPROACH_ELECTION"):
			return "EVENT_WON_APPROACH_ELECTION";
		case 295704064:
			return "EVENT_VOICE_CONNECTION_REQUESTED";
		case 295876924:
			return "EVENT_CUT_FREE";
		case joaat("EVENT_SHOCKING_SEEN_NICE_CAR"):
			return "EVENT_SHOCKING_SEEN_NICE_CAR";
		case 304848651:
			return "EVENT_NONE";
		case 313219550:
			return "EVENT_PLAYER_GREETED_PED";
		case joaat("EVENT_PLAYER_COLLISION_WITH_PED"):
			return "EVENT_PLAYER_COLLISION_WITH_PED";
		case joaat("EVENT_INJURED_OWNER"):
			return "EVENT_INJURED_OWNER";
		case joaat("EVENT_RAN_OVER_PED"):
			return "EVENT_RAN_OVER_PED";
		case 353377915:
			return "EVENT_HOGTIED_ENTITY_PICKED_UP";
		case joaat("EVENT_SUSPICIOUS_ACTIVITY"):
			return "EVENT_SUSPICIOUS_ACTIVITY";
		case joaat("EVENT_SHOCKING_IN_DANGEROUS_VEHICLE"):
			return "EVENT_SHOCKING_IN_DANGEROUS_VEHICLE";
		case 397004310:
			return "EVENT_ERRORS_INSTRUCTION_LIMIT";
		case joaat("EVENT_ENTITY_DAMAGED"):
			return "EVENT_ENTITY_DAMAGED";
		case joaat("EVENT_SHOCKING_WITNESS_CALL_FOR_LAW"):
			return "EVENT_SHOCKING_WITNESS_CALL_FOR_LAW";
		case 413931470:
			return "EVENT_COMBAT_TAUNT";
		case 415022413:
			return "EVENT_PLAYER_SIM_UPDATE";
		case 415576404:
			return "EVENT_NETWORK_POSSE_DATA_CHANGED";
		case joaat("EVENT_HEARD_DEAD_PED_COLLISION"):
			return "EVENT_HEARD_DEAD_PED_COLLISION";
		case joaat("EVENT_ACQUAINTANCE_PED_HATE"):
			return "EVENT_ACQUAINTANCE_PED_HATE";
		case joaat("EVENT_DRAGGED_OUT_CAR"):
			return "EVENT_DRAGGED_OUT_CAR";
		case 446963576:
			return "EVENT_NETWORK_CASHINVENTORY_DELETE_CHAR";
		case 453501714:
			return "EVENT_NETWORK_HUB_UPDATE";
		case joaat("EVENT_SHOCKING_BEAT_TERRIFYING"):
			return "EVENT_SHOCKING_BEAT_TERRIFYING";
		case 498393689:
			return "EVENT_PLAYER_HAT_REMOVED_AT_SHOP";
		case joaat("EVENT_SHOCKING_PED_ENTERED_COVER"):
			return "EVENT_SHOCKING_PED_ENTERED_COVER";
		case joaat("EVENT_SHOCKING_PED_SHOT"):
			return "EVENT_SHOCKING_PED_SHOT";
		case joaat("EVENT_SHOCKING_VISIBLE_LIT_EXPLOSIVE"):
			return "EVENT_SHOCKING_VISIBLE_LIT_EXPLOSIVE";
		case joaat("EVENT_ACQUAINTANCE_PED_WANTED"):
			return "EVENT_ACQUAINTANCE_PED_WANTED";
		case joaat("EVENT_SHOCKING_BEAT_DANGEROUS"):
			return "EVENT_SHOCKING_BEAT_DANGEROUS";
		case 516249386:
			return "EVENT_NETWORK_JOIN_REQUEST_TIMED_OUT";
		case 519123279:
			return "EVENT_MUST_LEAVE_BOAT";
		case 526946626:
			return "EVENT_GET_UP";
		case joaat("EVENT_SHOCKING_MULTIKILL"):
			return "EVENT_SHOCKING_MULTIKILL";
		case 543140406:
			return "EVENT_NETWORK_ROCKSTAR_INVITE_REMOVED";
		case 545528824:
			return "EVENT_NETWORK_INCREMENT_STAT";
		case 557673123:
			return "EVENT_NETWORK_CHEAT_TRIGGERED";
		case joaat("EVENT_ANIMAL_DETECTED_TRAIN"):
			return "EVENT_ANIMAL_DETECTED_TRAIN";
		case joaat("EVENT_SHOCKING_PLAYER_LAND"):
			return "EVENT_SHOCKING_PLAYER_LAND";
		case joaat("EVENT_BOLAS_HIT"):
			return "EVENT_BOLAS_HIT";
		case 586277309:
			return "EVENT_NETWORK_SOCIAL_CLUB_ACCOUNT_LINKED";
		case 587071841:
			return "EVENT_NETWORK_APP_LAUNCHED";
		case joaat("EVENT_INJURED_CRY_FOR_HELP"):
			return "EVENT_INJURED_CRY_FOR_HELP";
		case joaat("EVENT_POTENTIAL_BLAST"):
			return "EVENT_POTENTIAL_BLAST";
		case joaat("EVENT_SHOCKING_PLANE_FLY_BY"):
			return "EVENT_SHOCKING_PLANE_FLY_BY";
		case 671637744:
			return "EVENT_REACTION_INVESTIGATE_THREAT";
		case 676208328:
			return "EVENT_NETWORK_INCAPACITATED_ENTITY";
		case 678947301:
			return "EVENT_NETWORK_GANG_WAYPOINT_CHANGED";
		case joaat("EVENT_SHOCKING_BEAT_AMUSING_NEW"):
			return "EVENT_SHOCKING_BEAT_AMUSING_NEW";
		case 701022886:
			return "EVENT_NETWORK_BAIL_DECISION_MADE";
		case joaat("EVENT_PULLED_FROM_MOUNT"):
			return "EVENT_PULLED_FROM_MOUNT";
		case 735942751:
			return "EVENT_PED_CREATED";
		case joaat("EVENT_SHOCKING_INTERESTING_MELEE_FIGHT"):
			return "EVENT_SHOCKING_INTERESTING_MELEE_FIGHT";
		case 750867124:
			return "EVENT_TEXT_MESSAGE_RECEIVED";
		case 753021595:
			return "EVENT_NETWORK_CREW_KICKED";
		case 769834622:
			return "EVENT_LOCKED_DOOR";
		case joaat("EVENT_DISTURBANCE"):
			return "EVENT_DISTURBANCE";
		case joaat("EVENT_SHOCKING_BEAT_SURPRISING_NEW"):
			return "EVENT_SHOCKING_BEAT_SURPRISING_NEW";
		case 797969925:
			return "EVENT_NETWORK_POSSE_EX_INACTIVE_DISBANDED";
		case 809652668:
			return "EVENT_NETWORK_INVITE_RESPONSE";
		case joaat("EVENT_PRE_MELEE_KILL"):
			return "EVENT_PRE_MELEE_KILL";
		case 832287042:
			return "EVENT_PLAYER_ROBBED_PED";
		case joaat("EVENT_SHOCKING_PURSUIT"):
			return "EVENT_SHOCKING_PURSUIT";
		case 867155253:
			return "EVENT_CARRIABLE_VEHICLE_STOW_COMPLETE";
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
			return "EVENT_SHOCKING_DEAD_BODY";
		case joaat("EVENT_IN_AIR"):
			return "EVENT_IN_AIR";
		case joaat("EVENT_SHOCKING_DOOR_BARGED_OPEN"):
			return "EVENT_SHOCKING_DOOR_BARGED_OPEN";
		case joaat("EVENT_RIDER_DISMOUNTED"):
			return "EVENT_RIDER_DISMOUNTED";
		case joaat("EVENT_SHOCKING_ENGINE_REVVED"):
			return "EVENT_SHOCKING_ENGINE_REVVED";
		case joaat("EVENT_SHOCKING_THROWN_FROM_HORSE"):
			return "EVENT_SHOCKING_THROWN_FROM_HORSE";
		case 904577075:
			return "EVENT_NETWORK_INVITE_RESULT";
		case 904763044:
			return "EVENT_CLOUD_FILE_RESPONSE";
		case joaat("EVENT_ARMED_PED_APPROACHING"):
			return "EVENT_ARMED_PED_APPROACHING";
		case joaat("EVENT_SHOCKING_ENTERED_INTERIOR"):
			return "EVENT_SHOCKING_ENTERED_INTERIOR";
		case 936374126:
			return "EVENT_PEER_WINDOW";
		case joaat("EVENT_SHOCKING_FIRE"):
			return "EVENT_SHOCKING_FIRE";
		case 980298223:
			return "EVENT_VOICE_CONNECTION_RESPONSE";
		case 995882143:
			return "EVENT_NETWORK_IS_VOLUME_EMPTY_RESULT";
		case joaat("EVENT_SHOVE_PED"):
			return "EVENT_SHOVE_PED";
		case joaat("EVENT_NEW_TASK"):
			return "EVENT_NEW_TASK";
		case 1027163239:
			return "EVENT_NETWORK_ONLINE_PERMISSIONS_UPDATED";
		case 1028782110:
			return "EVENT_NETWORK_CREW_INVITE_RECEIVED";
		case 1028822748:
			return "EVENT_ERRORS_GLOBAL_BLOCK_NOT_RESIDENT";
		case joaat("EVENT_MOUNTED_COLLISION"):
			return "EVENT_MOUNTED_COLLISION";
		case 1047667690:
			return "EVENT_NETWORK_POSSE_MEMBER_LEFT";
		case joaat("EVENT_VEHICLE_COLLISION"):
			return "EVENT_VEHICLE_COLLISION";
		case 1068922597:
			return "EVENT_VOICE_SESSION_STARTED";
		case joaat("EVENT_SHOCKING_PLANTED_EXPLOSIVE"):
			return "EVENT_SHOCKING_PLANTED_EXPLOSIVE";
		case joaat("EVENT_INCOMING_THREAT"):
			return "EVENT_INCOMING_THREAT";
		case 1081092949:
			return "EVENT_INVENTORY_ITEM_PICKED_UP";
		case 1082572570:
			return "EVENT_PLACE_CARRIABLE_ONTO_PARENT";
		case 1113682948:
			return "EVENT_ENTITY_DISARMED";
		case 1121131740:
			return "EVENT_NETWORK_EXTENDED_INVITE";
		case joaat("EVENT_SHOCKING_PLAYER_CROUCHING_IN_FOLIAGE_WITH_WEAPON"):
			return "EVENT_SHOCKING_PLAYER_CROUCHING_IN_FOLIAGE_WITH_WEAPON";
		case joaat("EVENT_SHOCKING_PLAYER_REVIVED"):
			return "EVENT_SHOCKING_PLAYER_REVIVED";
		case 1165534493:
			return "EVENT_HEADSHOT_BLOCKED_BY_HAT";
		case 1176209503:
			return "EVENT_PLAYER_LOOK_FOCUS";
		case 1189677571:
			return "EVENT_LEADER_LEFT_COVER";
		case joaat("EVENT_SHOCKING_CRIME_SCENE"):
			return "EVENT_SHOCKING_CRIME_SCENE";
		case 1194448728:
			return "EVENT_NETWORK_CREW_LEFT";
		case 1197193638:
			return "EVENT_PED_TO_CHASE";
		case 1198436399:
			return "EVENT_SHOUT_BLOCKING_LOS";
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			return "EVENT_SHOCKING_MOUNT_STOLEN";
		case 1208357138:
			return "EVENT_CARRIABLE_UPDATE_CARRY_STATE";
		case joaat("EVENT_SHOCKING_PED_PLANTING_EXPLOSIVE"):
			return "EVENT_SHOCKING_PED_PLANTING_EXPLOSIVE";
		case joaat("EVENT_INTERACTION_ACTION"):
			return "EVENT_INTERACTION_ACTION";
		case joaat("EVENT_SHOCKING_FLEEING_PED"):
			return "EVENT_SHOCKING_FLEEING_PED";
		case 1234058372:
			return "EVENT_LEADER_HOLSTERED_WEAPON";
		case 1234888675:
			return "EVENT_NETWORK_CREW_CREATION";
		case joaat("EVENT_HOGTIED"):
			return "EVENT_HOGTIED";
		case 1268264445:
			return "EVENT_NETWORK_POSSE_JOINED";
		case joaat("EVENT_SHOCKING_FLEEING_VEHICLE"):
			return "EVENT_SHOCKING_FLEEING_VEHICLE";
		case joaat("EVENT_OWNED_ENTITY_INTERACTION"):
			return "EVENT_OWNED_ENTITY_INTERACTION";
		case 1274067014:
			return "EVENT_NETWORK_PLAYER_COLLECTED_PORTABLE_PICKUP";
		case joaat("EVENT_SHOCKING_LAW_ARRESTING_CRIMINAL"):
			return "EVENT_SHOCKING_LAW_ARRESTING_CRIMINAL";
		case joaat("EVENT_SHOCKING_SPEECH"):
			return "EVENT_SHOCKING_SPEECH";
		case joaat("EVENT_PLAYER_IN_CLOSE_PROXIMITY_TO_HORSE"):
			return "EVENT_PLAYER_IN_CLOSE_PROXIMITY_TO_HORSE";
		case 1327216456:
			return "EVENT_PED_WHISTLE";
		case 1342634267:
			return "EVENT_NETWORK_PED_HAT_SHOT_OFF";
		case 1347843421:
			return "EVENT_SHOCKING_ANIMAL_CHARGING";
		case 1351025667:
			return "EVENT_CHALLENGE_GOAL_COMPLETE";
		case 1352063587:
			return "EVENT_CONTAINER_INTERACTION";
		case joaat("EVENT_PLAYER_ON_ROOFTOP"):
			return "EVENT_PLAYER_ON_ROOFTOP";
		case 1355399116:
			return "EVENT_NETWORK_PLAYER_SIGNED_OFFLINE";
		case joaat("EVENT_SHOCKING_REACTION_TEST_HIGH"):
			return "EVENT_SHOCKING_REACTION_TEST_HIGH";
		case 1373658008:
			return "EVENT_NETWORK_PRIMARY_CREW_CHANGED";
		case 1376140891:
			return "EVENT_LOOT_COMPLETE";
		case joaat("EVENT_SHOCKING_REACTION_TEST_ACTIVE_LOOK"):
			return "EVENT_SHOCKING_REACTION_TEST_ACTIVE_LOOK";
		case joaat("EVENT_ANIMAL_TAMING_CALLOUT"):
			return "EVENT_ANIMAL_TAMING_CALLOUT";
		case joaat("EVENT_FIRE_NEARBY"):
			return "EVENT_FIRE_NEARBY";
		case 1385704366:
			return "EVENT_NETWORK_PICKUP_RESPAWNED";
		case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
			return "EVENT_PLAYER_PROMPT_TRIGGERED";
		case 1415355908:
			return "EVENT_NETWORK_PRESENCE_STAT_UPDATE";
		case 1417095237:
			return "EVENT_BUCKED_OFF";
		case joaat("EVENT_ANIMAL_DETECTED_THREAT"):
			return "EVENT_ANIMAL_DETECTED_THREAT";
		case 1434205464:
			return "EVENT_NETWORK_PLAYER_SPAWN";
		case joaat("EVENT_SHOCKING_HORN_SOUNDED"):
			return "EVENT_SHOCKING_HORN_SOUNDED";
		case joaat("EVENT_SHOCKING_PLAYER_CLIMB"):
			return "EVENT_SHOCKING_PLAYER_CLIMB";
		case 1473676746:
			return "EVENT_PLAYER_DEBUG_TELEPORTED";
		case joaat("EVENT_SHOCKING_BEAT_ALARMING"):
			return "EVENT_SHOCKING_BEAT_ALARMING";
		case joaat("EVENT_NEARBY_AMBIENT_THREAT"):
			return "EVENT_NEARBY_AMBIENT_THREAT";
		case joaat("EVENT_SHOCKING_MAD_DRIVER_EXTREME"):
			return "EVENT_SHOCKING_MAD_DRIVER_EXTREME";
		case 1505348054:
			return "EVENT_INVENTORY_ITEM_REMOVED";
		case 1538190288:
			return "EVENT_IN_WATER";
		case joaat("EVENT_ANIMAL_DETECTED_PREDATOR"):
			return "EVENT_ANIMAL_DETECTED_PREDATOR";
		case joaat("EVENT_COP_CAR_BEING_STOLEN"):
			return "EVENT_COP_CAR_BEING_STOLEN";
		case joaat("EVENT_SHOCKING_BEAT_DANGEROUS_GO_INSIDE"):
			return "EVENT_SHOCKING_BEAT_DANGEROUS_GO_INSIDE";
		case joaat("EVENT_RADIO_TARGET_POSITION"):
			return "EVENT_RADIO_TARGET_POSITION";
		case 1553659161:
			return "EVENT_REVIVE_ENTITY";
		case 1559647390:
			return "EVENT_NETWORK_PICKUP_COLLECTION_FAILED";
		case 1570376850:
			return "EVENT_GET_OUT_OF_WATER";
		case joaat("EVENT_SHOCKING_MUGGING"):
			return "EVENT_SHOCKING_MUGGING";
		case 1586716140:
			return "EVENT_CLIMB_NAVMESH_ON_ROUTE";
		case 1588672286:
			return "EVENT_NETWORK_NOMINATED_GO_TO_NEXT_CONTENT_RESPONSE";
		case joaat("EVENT_DEAD_PED_FOUND"):
			return "EVENT_DEAD_PED_FOUND";
		case joaat("EVENT_SHOCKING_INJURED_PED"):
			return "EVENT_SHOCKING_INJURED_PED";
		case joaat("EVENT_SHOCKING_PED_SCREAMED"):
			return "EVENT_SHOCKING_PED_SCREAMED";
		case joaat("EVENT_SHOCKING_SEEN_VEHICLE_TOWED"):
			return "EVENT_SHOCKING_SEEN_VEHICLE_TOWED";
		case 1626145032:
			return "EVENT_NETWORK_PLAYER_MISSED_SHOT";
		case 1626561060:
			return "EVENT_PED_DESTROYED";
		case 1629782592:
			return "EVENT_NETWORK_REQUEST_DELAY";
		case 1638298852:
			return "EVENT_MOUNT_OVERSPURRED";
		case 1640116056:
			return "EVENT_LOOT_PLANT_START";
		case 1652530845:
			return "EVENT_STOP_CONVERSATION";
		case 1655597605:
			return "EVENT_PLAYER_HORSE_AGITATED_BY_ANIMAL";
		case 1658389497:
			return "EVENT_NETWORK_SESSION_EVENT";
		case 1660856426:
			return "EVENT_NETWORK_TIMED_EXPLOSION";
		case joaat("EVENT_SHOCKING_PED_KNOCKED_INTO_BY_PLAYER"):
			return "EVENT_SHOCKING_PED_KNOCKED_INTO_BY_PLAYER";
		case 1669410864:
			return "EVENT_CHALLENGE_GOAL_UPDATE";
		case joaat("EVENT_SHOCKING_HELICOPTER_OVERHEAD"):
			return "EVENT_SHOCKING_HELICOPTER_OVERHEAD";
		case 1694142010:
			return "EVENT_NETWORK_BOUNTY_REQUEST_COMPLETE";
		case 1697477512:
			return "EVENT_NETWORK_PLAYER_LEFT_SESSION";
		case 1699948728:
			return "EVENT_NETWORK_NOMINATED_GET_UPCOMING_CONTENT_RESPONSE";
		case joaat("EVENT_SHOCKING_SEEN_PED_KILLED"):
			return "EVENT_SHOCKING_SEEN_PED_KILLED";
		case 1725992066:
			return "EVENT_NETWORK_DEBUG_TOGGLE_MP";
		case 1727082765:
			return "EVENT_NETWORK_DROP_PED";
		case 1731288223:
			return "EVENT_NETWORK_CASHINVENTORY_TRANSACTION";
		case joaat("EVENT_ACQUAINTANCE_PED_DISGUISE"):
			return "EVENT_ACQUAINTANCE_PED_DISGUISE";
		case 1741908893:
			return "EVENT_NETWORK_AWARD_CLAIMED";
		case joaat("EVENT_SHOCKING_SEEN_PED_LOOTED"):
			return "EVENT_SHOCKING_SEEN_PED_LOOTED";
		case joaat("EVENT_UNIDENTIFIED_PED"):
			return "EVENT_UNIDENTIFIED_PED";
		case joaat("EVENT_SHOCKING_PED_LEAPT_TO_TRANSPORT"):
			return "EVENT_SHOCKING_PED_LEAPT_TO_TRANSPORT";
		case joaat("EVENT_SHOCKING_TRESPASSING"):
			return "EVENT_SHOCKING_TRESPASSING";
		case 1784289253:
			return "EVENT_TRIGGERED_ANIMAL_WRITHE";
		case 1793200955:
			return "EVENT_NETWORK_PED_DISARMED";
		case 1794914733:
			return "EVENT_ENTITY_HOGTIED";
		case 1811873798:
			return "EVENT_PLAYER_ANTAGONIZED_PED";
		case 1814485447:
			return "EVENT_NETWORK_PED_LEFT_BEHIND";
		case 1827342969:
			return "EVENT_NETWORK_CASH_TRANSACTION_LOG";
		case 1830788491:
			return "EVENT_NETWORK_POSSE_MEMBER_JOINED";
		case 1832265142:
			return "EVENT_NETWORK_VEHICLE_UNDRIVABLE";
		case 1860341470:
			return "EVENT_NETWORK_INVITE_UNAVAILABLE";
		case joaat("EVENT_SHOCKING_DRIVING_ON_PAVEMENT"):
			return "EVENT_SHOCKING_DRIVING_ON_PAVEMENT";
		case joaat("EVENT_AMBIENT_THREAT_LEVEL_MAXED"):
			return "EVENT_AMBIENT_THREAT_LEVEL_MAXED";
		case 1890598297:
			return "EVENT_NETWORK_PRESENCE_TRIGGER";
		case joaat("EVENT_MELEE_ACTION"):
			return "EVENT_MELEE_ACTION";
		case 1908962476:
			return "EVENT_OPEN_DOOR";
		case 1924269094:
			return "EVENT_CRIME_CONFIRMED";
		case joaat("EVENT_SHOCKING_EQUIPPED_MASK"):
			return "EVENT_SHOCKING_EQUIPPED_MASK";
		case joaat("EVENT_SHOCKING_SEEN_INSULT"):
			return "EVENT_SHOCKING_SEEN_INSULT";
		case joaat("EVENT_INCAPACITATED"):
			return "EVENT_INCAPACITATED";
		case joaat("EVENT_SHOCKING_MELEE_FIGHT"):
			return "EVENT_SHOCKING_MELEE_FIGHT";
		case joaat("EVENT_GIVE_PED_TASK"):
			return "EVENT_GIVE_PED_TASK";
		case joaat("EVENT_EXPLOSION"):
			return "EVENT_EXPLOSION";
		case 1976253964:
			return "EVENT_NETWORK_NETWORK_BAIL";
		case joaat("EVENT_SHOCKING_VISIBLE_WEAPON"):
			return "EVENT_SHOCKING_VISIBLE_WEAPON";
		case 1994340821:
			return "EVENT_POTENTIAL_WALK_INTO_OBJECT";
		case 2004694700:
			return "EVENT_ERRORS_STACK_OVERFLOW";
		case 2012933482:
			return "EVENT_CAR_UNDRIVEABLE";
		case 2013393302:
			return "EVENT_NETWORK_BULLET_IMPACTED_MULTIPLE_PEDS";
		case 2030961287:
			return "EVENT_PED_HAT_KNOCKED_OFF";
		case 2034746601:
			return "EVENT_SCENARIO_FORCE_ACTION";
		case joaat("EVENT_SHOCKING_CAR_CRASH"):
			return "EVENT_SHOCKING_CAR_CRASH";
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			return "EVENT_SHOCKING_WINDOW_SMASHED";
		case 2045969979:
			return "EVENT_FLUSH_TASKS";
		case joaat("EVENT_ACQUAINTANCE_PED_THIEF"):
			return "EVENT_ACQUAINTANCE_PED_THIEF";
		case 2058084749:
			return "EVENT_NETWORK_POSSE_KICKED";
		case 2058130545:
			return "EVENT_NETWORK_PROJECTILE_NO_DAMAGE_IMPACT";
		case joaat("EVENT_SHOCKING_REACTION_TEST_MEDIUM"):
			return "EVENT_SHOCKING_REACTION_TEST_MEDIUM";
		case joaat("EVENT_SHOCKING_PLAYER_RESTING"):
			return "EVENT_SHOCKING_PLAYER_RESTING";
		case joaat("EVENT_POTENTIAL_WALK_INTO_VEHICLE"):
			return "EVENT_POTENTIAL_WALK_INTO_VEHICLE";
		case joaat("EVENT_SHOCKING_PED_FALLING"):
			return "EVENT_SHOCKING_PED_FALLING";
		case 2099179610:
			return "EVENT_ITEM_PROMPT_INFO_REQUEST";
		case 2108920557:
			return "EVENT_NETWORK_INBOX_MSGS_RCVD";
		case 2114586158:
			return "EVENT_NETWORK_CREW_DISBANDED";
		case joaat("EVENT_SHOCKING_ABANDONED_VEHICLE"):
			return "EVENT_SHOCKING_ABANDONED_VEHICLE";
		case joaat("EVENT_ANIMAL_PROVOKED"):
			return "EVENT_ANIMAL_PROVOKED";
		case 2143094135:
			return "EVENT_NETWORK_PLAYER_ARREST";
		case 2145012826:
			return "EVENT_ENTITY_DESTROYED";
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

bool func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(uParam0, 134217728);
	}
	else
	{
		func_57(uParam0, 134217728);
	}
}

void func_112()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_113(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940410.f_38) || joaat("WEAPON_THROWN_BOLAS") == Global_1940410.f_38) && Global_1940410.f_21)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "IS_PLAYER_AIMING_AT_PED: Player is using lasso, which doesn't clear the interaction entity, so ignore that check");
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "IS_PLAYER_AIMING_AT_PED: Player is interacting with specified target");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "IS_PLAYER_AIMING_AT_PED: Player is interacting with valid but non-specified target");
		}
	}
	if (Global_1940410.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940410.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_134(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_156(iVar0, 0)))
		{
			if (func_157(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_114(var uParam0)
{
	return uParam0->f_18;
}

bool func_115(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_45(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_33, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

int func_116(var uParam0)
{
	return uParam0->f_19;
}

int func_117(var uParam0)
{
	return uParam0->f_20;
}

bool func_118(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_156(iVar0, 0)))
		{
			if (func_158(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940410.f_12)
	{
		if ((bParam2 || Global_1940410.f_13 > 0) || Global_1940410.f_11 > 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : TRUE - IS_LAW_INCIDENT_ACTIVE(", PLAYER::PLAYER_ID(), ")");
			return 1;
		}
	}
	else if (bParam1 && !Global_1940410.f_9 == 1370593166)
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : FALSE - bRequireActiveIncident AND NOT IS_LAW_INCIDENT_ACTIVE(", PLAYER::PLAYER_ID(), ")");
		return 0;
	}
	if (Global_1940410.f_14 > 0 || (bParam2 && Global_1940410.f_14 > -1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : TRUE - GET_PLAYER_REGISTERED_CRIME(", PLAYER::PLAYER_ID(), ") AND thisCrime.m_WasReported");
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940410.f_7)
		{
			if (bParam2 || Global_1940410.f_15 > 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : TRUE - bConsiderActiveWitnesses AND ARE_WITNESSES_ACTIVE(", PLAYER::PLAYER_ID(), ")");
				return 1;
			}
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 111, "IS_LOCAL_PLAYER_WANTED : FALSE - Default case");
	return 0;
}

float func_120(var uParam0)
{
	return uParam0->f_25;
}

int func_121(var uParam0)
{
	return uParam0->f_23;
}

var func_122(bool bParam0, int iParam1)
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

int func_123(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_7)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char* func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CFT_TYPE_EXPLOSION";
		case 1:
			return "CFT_TYPE_FIRE";
		case 2:
			return "CFT_TYPE_POTENTIAL_BLAST";
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

bool func_125(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_159(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_126(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 0, "__AGGRO_GET_DAMAGE_SEEN_KILLED_BY_STEALTH: Ped killed by stealth with ", func_122(Global_1940410.f_40, 0));
		if (Global_1940410.f_38 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940410.f_40))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1940410.f_40) || WEAPON::_IS_WEAPON_BOW(Global_1940410.f_40))
			{
				return 1;
			}
		}
	}
	if (func_160(iParam0, 200, 0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 0, "__AGGRO_GET_DAMAGE_SEEN_KILLED_BY_STEALTH: Ped killed with melee weapon recently. Weapon = ", func_122(Global_1940410.f_38, 0));
		return 1;
	}
	return 0;
}

bool func_127(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_128(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_161(iParam1, 0))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 184, "__AGGRO_SHOULD_PED_HEAR_DEATH: Returning TRUE");
		return true;
	}
	return false;
}

bool func_129(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_161(iParam1, 0))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 184, "__AGGRO_SHOULD_PED_HEAR_DAMAGE: Returning TRUE");
		return true;
	}
	return false;
}

bool func_130(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_162(uParam0);
	if (func_161(iParam1, 0))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940410.f_28[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1940410.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 184, "__AGGRO_SHOULD_PED_SEE_DAMAGE: Returning TRUE");
				return true;
			}
		}
	}
	return false;
}

bool func_131(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_132(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "__AGGRO_IS_TARGET_PED_IN_LASSO_TAKEDOWN: targetis constrained by my bolas");
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_163(iParam0, 1, 0, 0)) && !func_163(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "__AGGRO_IS_TARGET_PED_IN_LASSO_TAKEDOWN: Target is the target");
			return true;
		}
	}
	return false;
}

bool func_133(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_134(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES - entity1 does not exist");
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES - entity2 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_135(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_136(iParam0, vParam2, 1);
	DEBUG::_0x1B08D1EB9D8C4931(24, 0, "IS_WAGON_BODY_TOUCHING: fDist = ", fVar0);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_136(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_137(var uParam0)
{
	return uParam0->f_26;
}

int func_138(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_139(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_164(iParam0, vVar0, iParam2);
}

float func_141(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_142(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940410.f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because player has damaged their car");
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940410.f_34, 1, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because player's horse has damaged them");
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because player has bumped the target");
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because player has bumped the target");
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_131(Global_33, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because the player's leading horse caused damage to the ped while not mounted");
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because player has shoved them");
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_134(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because player has touched them");
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because player has touched/ragdolled them");
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_134(iParam0, Global_1940410.f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940410.f_34, iParam0))
			{
				if (!bParam2)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because horse has touched them");
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "CHECK_MINOR_ATTACKED: Ped panicking because horse has touched/ragdolled them");
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_143(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_153(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!bParam2 || !func_146(uParam1, iVar0))
					{
						DEBUG::_0xA308F935BDECCEC0(24, 0, "AGGRO_CAN_PED_SEE_PLAYER_WITH_HOGTIED_PED: Distance to danger is: ", uParam1->f_13);
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
			{
				if (!bParam2 || !func_146(uParam1, iVar1))
				{
					if (func_136(iVar1, Global_34, 1) < 5f)
					{
						DEBUG::_0xA308F935BDECCEC0(24, 0, "AGGRO_CAN_PED_SEE_PLAYER_WITH_HOGTIED_PED: Player has carriable ped on horse. Distance to danger is: ", uParam1->f_13);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_144(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_145(var uParam0)
{
	return func_45(*uParam0, 131072);
}

bool func_146(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_147(int iParam0)
{
	return false;
}

int func_148(var uParam0)
{
	return uParam0->f_22;
}

int func_149(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_IS_PED_ANNOYED: Player within annoy range and visible after annoy time. Returning TRUE");
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_33))
		{
			DEBUG::_0x4DC69742196F818A(8, 0, "CHECK_IS_PED_ANNOYED: Player within annoy range and touching after annoy time. Returning TRUE");
			return 1;
		}
	}
	return 0;
}

char* func_150(int iParam0, int iParam1)
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

bool func_151()
{
	if (func_165())
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		if (Global_1940410.f_38 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_33, 311);
	}
	else
	{
		return Global_1957252.f_1716[3];
	}
	return false;
}

void func_152(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "AGGRO_POPULATE_DAMAGED_PEDS_ARRAY: - But the damaged wasn't human");
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "AGGRO_POPULATE_DAMAGED_PEDS_ARRAY: - But the damaged was set to be ignored");
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_153(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940410.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940410.f_26))
		{
			*iParam1 = Global_1940410.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940410.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940410.f_27))
		{
			if (PED::_IS_PED_HOGTIED(Global_1940410.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940410.f_27))
			{
				*iParam2 = Global_1940410.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940410.f_24 && !PED::IS_PED_INJURED(Global_33))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_154(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_GET_HORSE_BEING_LOOTED: Detach control pressed");
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_GET_HORSE_BEING_LOOTED: Detach control pressed. Interact target active");
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_GET_HORSE_BEING_LOOTED: Detach control pressed. Interact target is a ped");
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_GET_HORSE_BEING_LOOTED: Horse being detached from wagon");
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940410.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_33);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_33);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "AGGRO_GET_HORSE_BEING_LOOTED: Horse being looted");
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_155(var uParam0)
{
	int iVar0;

	if (Global_1940410.f_32 == 0)
	{
		func_57(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940410.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940410.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940410.f_28[iVar0]))
				{
					func_58(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_156(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_157(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_158(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_158(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			DEBUG::_0xA308F935BDECCEC0(408, 0, "IS_COORD_NEAR_CENTER_OF_SCREEN: fScreenX = ", fVar0, " and fScreenY = ", fVar1);
			return true;
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "IS_COORD_NEAR_CENTER_OF_SCREEN: coord is off screen");
	}
	return false;
}

bool func_159(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_160(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940410.f_38))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1940410.f_38) || Global_1940410.f_38 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1940410.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_161(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	DEBUG::_0x1B08D1EB9D8C4931(8, iParam1, "IS_PED_SLEEPING -- ped is using scenario hash: ", iVar0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT")) || iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

float func_162(var uParam0)
{
	return uParam0->f_28;
}

int func_163(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_164(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_166(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_167(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_165()
{
	switch (Global_1940410.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

float func_166(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_167(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

