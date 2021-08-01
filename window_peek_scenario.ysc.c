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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22[4] = { 0, 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_38 = 0;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	bool bLocal_48 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	iLocal_13 = 1;
	iLocal_29 = 20;
	iLocal_30 = 10;
	iLocal_31 = 3;
	vLocal_32 = { -287.356f, 818.9039f, 119.8698f };
	vLocal_35 = { -13.3335f, 0.0591f, -170.8708f };
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
	if (PED::IS_PED_INJURED(Global_33))
	{
		iLocal_13 = 0;
		return;
	}
	if (func_13(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!func_13(2))
			{
				func_14();
			}
		}
	}
	func_15();
	switch (iLocal_19)
	{
		case 0:
			DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] CAMERA_INIT: Creating START camera.");
			iLocal_20 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -287.0813f, 818.8734f, 119.85f, -11.269f, 0f, -171.0697f, 50f, false, 2);
			func_16(1);
			func_17(1);
			break;
		case 1:
			if (ENTITY::GET_ENTITY_SPEED(Global_33) > 0f)
			{
				DEBUG::_0x4DC69742196F818A(24, 160, "[PROCESS_SCENARIO] CAMERA_INIT: Waiting for the player to be still, as he's currently moving at a speed of ", ENTITY::GET_ENTITY_SPEED(Global_33));
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 160, "[PROCESS_SCENARIO] CAMERA_WAIT: Activating the first camera.");
			CAM::SET_CAM_ACTIVE(iLocal_20, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, 4000, true, false, 0);
			func_17(2);
			break;
		case 2:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_20))
			{
				return;
			}
			DEBUG::_0x4DC69742196F818A(8, 160, "[PROCESS_SCENARIO] CAMERA_INTERP1: Creating and setting END camera. Deleting the start camera.");
			iLocal_21 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_32, vLocal_35, 40f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_21, iLocal_20, 4000, 3, 1);
			CAM::DESTROY_CAM(iLocal_20, false);
			func_17(3);
			break;
		case 3:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_21))
			{
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 160, "[PROCESS_SCENARIO] CAMERA_INTERP2: END camera is done interpolating.");
			func_17(4);
			break;
		case 4:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
			{
				if (!TASK::_0x0C3CB2E600C8977D(Global_33, 0))
				{
					func_18(&iLocal_21, 1);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 160, "[PROCESS_SCENARIO] CAMERA_UPDATE: Player is exiting scenario. Stop updating camera.");
					func_17(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_8()
{
	DEBUG::_0xF0783374333FD8CE(8, 160, "CUSTOM_CLEANUP: Cleanup called for window peek");
	CAM::DESTROY_CAM(iLocal_20, false);
	CAM::DESTROY_CAM(iLocal_21, false);
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
		func_19(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_20(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_21(&iVar0);
	}
}

bool func_13(int iParam0)
{
	return (uLocal_18 && iParam0) != 0;
}

void func_14()
{
	if (func_13(2))
	{
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 160, "[WINDOW_PEEK_EXIT_SCENARIO] Ending peek scenario behavior. Disabling scripted camera and interpolating to game camera.");
	func_22();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	func_23(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
	CAM::DESTROY_CAM(iLocal_21, false);
	func_16(2);
}

void func_15()
{
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		if (TASK::_0x0C3CB2E600C8977D(Global_33, 0))
		{
			func_14();
		}
		return;
	}
	if (!func_13(2))
	{
		func_14();
	}
	else if (CAM::_0x251241CAEC707106())
	{
		func_22();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		iLocal_13 = 0;
	}
}

void func_16(int iParam0)
{
	if (func_13(iParam0))
	{
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 160, "[SET_WINDOW_PEEK_FLAG] Setting flag ", func_24(iParam0, 0));
	uLocal_18 = (uLocal_18 || iParam0);
}

void func_17(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(2271400, 160, "[WINDOW_PEEK_SET_CAM_STATE] Set CAMERA STATE from ", func_25(iLocal_19, 0), " ( ", iLocal_19, " )", " to ", func_25(iParam0, 0), " ( ", iParam0, " )");
	iLocal_19 = iParam0;
}

void func_18(int iParam0, bool bParam1)
{
	float fVar0;
	vector3 vVar1;

	func_26(&(uLocal_22[0]), &(uLocal_22[1]), &(uLocal_22[2]), &(uLocal_22[3]), joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (iLocal_27 == uLocal_22[2] && iLocal_28 == uLocal_22[3])
	{
		if (iLocal_38 < MISC::GET_GAME_TIMER())
		{
			iLocal_27 = 0;
			iLocal_28 = 0;
		}
	}
	else
	{
		iLocal_27 = uLocal_22[2];
		iLocal_28 = uLocal_22[3];
		iLocal_38 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam1)
	{
		vLocal_39.f_2 = (-(BUILTIN::TO_FLOAT(uLocal_22[2]) / 127f) * IntToFloat(iLocal_29));
		vLocal_39.f_1 = ((-vLocal_39.z * IntToFloat(iLocal_31)) / IntToFloat(iLocal_29));
		if (PAD::IS_LOOK_INVERTED())
		{
			vLocal_39.x = ((BUILTIN::TO_FLOAT(uLocal_22[3]) / 127f) * IntToFloat(iLocal_30));
		}
		else
		{
			vLocal_39.x = (-(BUILTIN::TO_FLOAT(uLocal_22[3]) / 127f) * IntToFloat(iLocal_30));
		}
	}
	else
	{
		vLocal_39 = { 0f, 0f, 0f };
		iLocal_27 = 0;
		iLocal_28 = 0;
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	vVar1 = { vLocal_39 + vLocal_45 };
	vLocal_42.x = (vLocal_42.x + func_27((((vVar1.x - vLocal_42.x) * 0.05f) * fVar0), -3f, 3f));
	vLocal_42.f_1 = (vLocal_42.y + func_27((((vVar1.y - vLocal_42.y) * 0.05f) * fVar0), -3f, 3f));
	vLocal_42.f_2 = (vLocal_42.z + func_27((((vVar1.z - vLocal_42.z) * 0.05f) * fVar0), -3f, 3f));
	if (bLocal_48)
	{
		vLocal_42.x = func_27(vLocal_42.x, BUILTIN::TO_FLOAT(-iLocal_30), BUILTIN::TO_FLOAT(iLocal_30));
		vLocal_42.f_1 = func_27(vLocal_42.y, BUILTIN::TO_FLOAT(-iLocal_31), BUILTIN::TO_FLOAT(iLocal_31));
		vLocal_42.f_2 = func_27(vLocal_42.z, BUILTIN::TO_FLOAT(-iLocal_29), BUILTIN::TO_FLOAT(iLocal_29));
	}
	CAM::SET_CAM_PARAMS(*iParam0, vLocal_32, vLocal_35 + vLocal_42, 40f, 0, 1, 1, 2, 1, 0);
}

void func_19(int iParam0)
{
}

void func_20(int iParam0)
{
}

void func_21(int iParam0)
{
}

void func_22()
{
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
}

void func_23(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

char* func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WINDOW_PEEK_FLAG_NONE";
		case 1:
			return "WINDOW_PEEK_FLAG_CAN_CHECK_PLAYER_INPUT";
		case 2:
			return "WINDOW_PEEK_FLAG_STARTED_INTERP_TO_GAME_CAM";
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

char* func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAMERA_INIT";
		case 1:
			return "CAMERA_WAIT";
		case 2:
			return "CAMERA_INTERP1";
		case 3:
			return "CAMERA_INTERP2";
		case 4:
			return "CAMERA_UPDATE";
		case 5:
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

void func_26(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}

float func_27(float fParam0, float fParam1, float fParam2)
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

