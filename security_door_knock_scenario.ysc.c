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
	var uLocal_18 = 0;
	int iLocal_19 = 0;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 4;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	vector3 vLocal_62[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_72 = false;
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
	int iVar0;

	iLocal_13 = 0;
	return;
	if (PED::IS_PED_INJURED(Global_33))
	{
		iLocal_13 = 0;
		return;
	}
	if (func_13(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!func_13(3))
			{
				DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] Ending peek scenario behavior");
				func_14(1);
				func_15();
				func_16(3);
			}
		}
	}
	switch (iLocal_19)
	{
		case 0:
			DEBUG::_0xA308F935BDECCEC0(8, 160, "[PROCESS_SCENARIO] CAMERA_INIT: Determine which door the peek will play on.");
			vLocal_62[0 /*3*/] = { func_17() };
			vLocal_62[1 /*3*/] = { func_18() };
			vLocal_62[2 /*3*/] = { func_19() };
			func_20(Global_33, &vLocal_62, &iVar0);
			bLocal_72 = func_21(iVar0);
			DEBUG::_0xA308F935BDECCEC0(40, 160, "[PROCESS_SCENARIO] CAMERA_INIT: The door ID for peeking is ", func_22(bLocal_72, 0));
			func_16(1);
			break;
		case 1:
			if (!func_23(&uLocal_20))
			{
				DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] CAMERA_WAIT: Starting timer before triggering first-person camera.");
				OBJECT::_0x276AAF0F1C7F2494(bLocal_72, 1);
				func_24(&uLocal_20, 0);
			}
			else if (func_25(&uLocal_20, 3f))
			{
				DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] CAMERA_WAIT: Timer is ready.");
				func_26(&uLocal_20);
				func_27(1);
				func_16(2);
			}
			break;
		case 2:
			if (!func_28())
			{
				DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] CAMERA_WAIT: Initializing the first-person camera.");
				return;
			}
			func_29(&uLocal_23, 1, 1, 0, 0, 1);
			if (func_25(&uLocal_20, 3.5f))
			{
				DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] CAMERA_UPDATE: Done with the first-person camera.");
				func_15();
				func_14(1);
				func_16(3);
			}
			break;
		case 3:
			break;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] Player is no longer using the peek scenario.");
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		OBJECT::_0x276AAF0F1C7F2494(bLocal_72, 0);
		iLocal_13 = 0;
	}
}

void func_8()
{
	DEBUG::_0x4DC69742196F818A(8, 160, "CUSTOM_CLEANUP: Cleanup called for security door peek");
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
		func_30(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_31(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_32(&iVar0);
	}
}

bool func_13(int iParam0)
{
	return (uLocal_18 && iParam0) != 0;
}

void func_14(int iParam0)
{
	if (!func_13(iParam0))
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 160, "[CLEAR_DOOR_PEEK_FLAG] Clearing flag ", func_33(iParam0, 0));
	iParam0 = (iParam0 - (iParam0 && iParam0));
}

void func_15()
{
	DEBUG::_0x4DC69742196F818A(8, 160, "[DOOR_PEEK_END_SCENARIO_BEHAVIOR] Procedure started.");
	func_34(&uLocal_23);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	OBJECT::_0x276AAF0F1C7F2494(bLocal_72, 0);
	func_27(3);
}

void func_16(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(2271400, 160, "[DOOR_PEEK_SET_CAM_STATE] Set CAMERA STATE from ", func_35(iLocal_19, 0), " ( ", iLocal_19, " )", " to ", func_35(iParam0, 0), " ( ", iParam0, " )");
	iLocal_19 = iParam0;
}

Vector3 func_17()
{
	return 2710.57f, -1291.2f, 48.63f;
}

Vector3 func_18()
{
	return -290.86f, 813.36f, 118.42f;
}

Vector3 func_19()
{
	return -281.07f, 815.24f, 118.42f;
}

Vector3 func_20(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;

	iVar5 = *uParam1;
	DEBUG::_0x4DC69742196F818A(136, 160, "[DOOR_PEEK_GET_CLOSEST_COORD_FROM_PED] The array passed in has ", iVar5, " elements.");
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		DEBUG::_0x4DC69742196F818A(904, 160, "[DOOR_PEEK_GET_CLOSEST_COORD_FROM_PED] Iterating through coord #", iVar0, " at position ", uParam1[iVar0 /*3*/]);
		*uParam2 = iVar0;
		fVar6 = func_36(iParam0, *(uParam1[iVar0 /*3*/]), 1);
		if (func_37(*(uParam1[iVar0 /*3*/])))
		{
		}
		else if (iVar0 == 0)
		{
			fVar4 = fVar6;
			vVar1 = { *(uParam1[iVar0 /*3*/]) };
			DEBUG::_0x4DC69742196F818A(904, 160, "[DOOR_PEEK_GET_CLOSEST_COORD_FROM_PED] Coord #", iVar0, " is the first element, so setting it the closest coord to ", uParam1[iVar0 /*3*/]);
		}
		else if (fVar4 > fVar6)
		{
			DEBUG::_0x4DC69742196F818A(235912, 160, "[DOOR_PEEK_GET_CLOSEST_COORD_FROM_PED] The distance in coord #", iVar0, " of ", fVar6, " is LESS than the stored distance of ", fVar4, ". Updating closest distance and coord to ", uParam1[iVar0 /*3*/]);
			vVar1 = { *(uParam1[iVar0 /*3*/]) };
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(39304, 160, "[DOOR_PEEK_GET_CLOSEST_COORD_FROM_PED] The distance in coord #", iVar0, " of ", fVar6, " is GREATER than the stored distance of ", fVar4, ".");
		}
		iVar0++;
	}
	DEBUG::_0x4DC69742196F818A(184, 160, "[DOOR_PEEK_GET_CLOSEST_COORD_FROM_PED] Returning closest coord as ", &vVar1, " of index ", *uParam2);
	return vVar1;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOOR_NEW_GUNSHOP_INT_BACK");
		case 1:
			return joaat("DOOR_VAL_DOC_BACK_RM");
		case 2:
			return joaat("DOOR_VAL_DOC_BACK");
		default:
			break;
	}
	return 0;
}

var func_22(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-411541292);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_23(var uParam0)
{
	return func_38(*uParam0, 1);
}

void func_24(var uParam0, bool bParam1)
{
	if (bParam1 || !func_23(uParam0))
	{
		func_26(uParam0);
	}
}

bool func_25(var uParam0, float fParam1)
{
	if (!func_23(uParam0))
	{
		return false;
	}
	if (func_39(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_26(var uParam0)
{
	func_40(uParam0, 0f);
}

void func_27(int iParam0)
{
	if (func_13(iParam0))
	{
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 160, "[SET_DOOR_PEEK_FLAG] Setting flag ", func_33(iParam0, 0));
	uLocal_18 = (uLocal_18 || iParam0);
}

bool func_28()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	if (!func_41(bLocal_72))
	{
		DEBUG::_0x4DC69742196F818A(8, 160, "[IS_DOOR_PEEK_INIT_FIRST_PERSON_CAMERA_DONE] The door ID is invalid. Exiting.");
		return false;
	}
	DEBUG::_0x4DC69742196F818A(8, 160, "[IS_DOOR_PEEK_INIT_FIRST_PERSON_CAMERA_DONE] Calculating the position and orientation of the camera.");
	iVar0 = func_42(bLocal_72, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x4DC69742196F818A(8, 160, "[IS_DOOR_PEEK_INIT_FIRST_PERSON_CAMERA_DONE] The door does not exist. Exiting.");
		return false;
	}
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, func_43()) };
	DEBUG::_0x4DC69742196F818A(936, 160, "[IS_DOOR_PEEK_INIT_FIRST_PERSON_CAMERA_DONE] Getting position of the door using offset ", MISC::_0x6C4DBF553885F9EB(func_43()), " to get the camera position ", &vVar1);
	if (func_37(vVar1))
	{
		DEBUG::_0x4DC69742196F818A(8, 160, "[IS_DOOR_PEEK_INIT_FIRST_PERSON_CAMERA_DONE] The camera position from the offset is 0. Exiting.");
		return false;
	}
	vVar4 = { func_44() };
	switch (bLocal_72)
	{
		case joaat("DOOR_NEW_GUNSHOP_INT_BACK"):
			fVar7 = 115f;
			break;
		case joaat("DOOR_VAL_DOC_BACK_RM"):
			fVar7 = 10f;
			break;
		case joaat("DOOR_VAL_DOC_BACK"):
			fVar7 = 100f;
			break;
	}
	fVar7 = (fVar7 + vVar4.z);
	DEBUG::_0x4DC69742196F818A(440, 160, "[IS_DOOR_PEEK_INIT_FIRST_PERSON_CAMERA_DONE] The position of the camera is ", &vVar1, " and the heading is ", fVar7);
	func_45(&uLocal_23, vVar1, vVar4.x, vVar4.y, fVar7, 35f, 20, 10, 1077936128 /* Float: 3f */, 1101004800 /* Float: 20f */, 1, 0, 0.24f, 0, 0, 1044549468 /* Float: 0.19f */);
	func_27(2);
	return true;
}

void func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	if (bParam4)
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f));
	}
	else
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f));
	}
	if (uParam0->f_29[2] != 0 || uParam0->f_29[3] != 0)
	{
	}
	if (uParam0->f_34 == uParam0->f_29[2] && uParam0->f_35 == uParam0->f_29[3])
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 182, "UPDATE_FIRST_PERSON_CAMERA - moved from old focus position");
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = uParam0->f_29[2];
		uParam0->f_35 = uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
		DEBUG::_0x1B08D1EB9D8C4931(136, 182, "UPDATE_FIRST_PERSON_CAMERA -new positions: fpCam.iOldStickRX: ", uParam0->f_34, " fpCam.iOldStickRY: ", uParam0->f_35);
	}
	if (bParam2)
	{
		uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[2]) / 127f) * IntToFloat(uParam0->f_25));
		uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
		if (PAD::IS_LOOK_INVERTED())
		{
			uParam0->f_13 = ((BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * IntToFloat(uParam0->f_26));
		}
		else
		{
			uParam0->f_13 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * IntToFloat(uParam0->f_26));
		}
		DEBUG::_0x1B08D1EB9D8C4931(56, 182, "UPDATE_FIRST_PERSON_CAMERA - fpCam.vCamRotStickOffsetTarget: ", &(uParam0->f_13));
	}
	else
	{
		uParam0->f_13 = { 0f, 0f, 0f };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	if (!func_46(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + MISC::GET_FRAME_TIME());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_47(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + func_48((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + func_48((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + func_48((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_48(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = func_48(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_48(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	if (bParam1)
	{
		if (bParam3)
		{
			if (BUILTIN::TO_FLOAT(uParam0->f_29[1]) < 0f)
			{
				uParam0->f_22 = (uParam0->f_22 + IntToFloat(BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128f) * uParam0->f_24))));
			}
		}
		else
		{
			uParam0->f_22 = (uParam0->f_22 + IntToFloat(BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128f) * uParam0->f_24))));
		}
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f)));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, iParam5, 0);
}

void func_30(int iParam0)
{
}

void func_31(int iParam0)
{
}

void func_32(int iParam0)
{
}

char* func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DOOR_PEEK_FLAG_NONE";
		case 1:
			return "DOOR_PEEK_FLAG_CAN_CHECK_PLAYER_INPUT";
		case 2:
			return "DOOR_PEEK_FLAG_INIT_FPS_CAM_DONE";
		case 3:
			return "DOOR_PEEK_FLAG_STARTED_INTERP_TO_GAME_CAM";
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

void func_34(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

char* func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAMERA_INIT";
		case 1:
			return "CAMERA_WAIT";
		case 2:
			return "CAMERA_UPDATE";
		case 3:
			return "CAMERA_DONE";
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

float func_36(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_37(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_39(var uParam0)
{
	if (!func_23(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_49(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_50() - uParam0->f_1);
}

void func_40(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_50() - fParam1);
	func_51(uParam0, 1);
	func_52(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_41(bool bParam0)
{
	return bParam0 != 0;
}

int func_42(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_53(bParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 87, "GET_DOOR_ENTITY_FROM_ID_SAFE - Door entity ", bParam0, " does not exist");
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 87, "GET_DOOR_ENTITY_FROM_ID_SAFE - Door entity ", bParam0, " is a dummy object");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 87, "GET_DOOR_ENTITY_FROM_ID_SAFE - Door entity ", bParam0, " is dead");
		return 0;
	}
	return iVar0;
}

Vector3 func_43()
{
	return 0.585564f, 0.325876f, 1.6871f;
}

Vector3 func_44()
{
	return -7.766f, 0f, 175.2488f;
}

void func_45(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = iParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = fParam12;
	uParam0->f_24 = iParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

bool func_46(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_47(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_48(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_49(var uParam0)
{
	return func_38(*uParam0, 2);
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

int func_53(bool bParam0, int iParam1)
{
	int iVar0;

	func_54(bParam0, 0, 0);
	if (func_55(bParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(bParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "GET_DOOR_ENTITY_FROM_ID - Invalid Door ID");
	}
	return 0;
}

bool func_54(bool bParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_22(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, false, false, 0, 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add Door ", func_22(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(bParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_22(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(bParam0, 1);
		DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Set door ", func_22(bParam0, 0), " able to change open ratio while locked");
		UNK_0x355E72323AEE83CC(183, 7);
	}
	return bParam0;
}

bool func_55(bool bParam0)
{
	if (func_41(bParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0);
	}
	return false;
}

