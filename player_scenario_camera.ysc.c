#region Local Var
	struct<45> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_45 = ScriptParam_0;
	iLocal_46 = ScriptParam_0.f_1;
	DEBUG::_0xF0783374333FD8CE(8, 0, "Script has loaded, starting ", sLocal_45);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (func_2())
	{
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xF0783374333FD8CE(8, 0, "Exiting script ", sLocal_45);
	func_1();
}

void func_1()
{
	SCRIPTS::_0xE7282390542F570D(sLocal_45);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_46)) || !PED::_IS_PED_USING_SCENARIO_POINT(PLAYER::PLAYER_PED_ID(), iLocal_46))
	{
		func_3();
		return 0;
	}
	return func_4();
}

void func_3()
{
	DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, cleanup");
	if (Local_0.f_44)
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(Local_0.f_1)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, unloading dictionary");
			CAM::_0x798BE43C9393632B(&(Local_0.f_1));
		}
		if (CAM::_0x927B810E43E99932(&(Local_0.f_1)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, destroying camera");
			CAM::_0x0A5A4F1979ABB40E(&(Local_0.f_1));
		}
		Local_0.f_44 = 0;
	}
	if (DATAFILE::_0x603AC35FD4602C76(Local_0.f_34))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_0.f_34);
	}
}

int func_4()
{
	switch (Local_0)
	{
		case 0:
			DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, initializing");
			Local_0.f_32 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_0.f_32))
			{
				DEBUG::_0x83407B92D46F25C3(8, 0, "RUN_PLAYER_SCENARIO_CAMERA, player is not in a valid scenario! returning false.");
				return 0;
			}
			Local_0.f_33 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(Local_0.f_32);
			Local_0.f_34 = DATAFILE::_0xD97D8D905F1562F2(82155782);
			Local_0.f_35 = TASK::_GET_SCENARIO_POINT_TYPE(Local_0.f_32);
			DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, state change to LOAD");
			Local_0 = 1;
			break;
		case 1:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && DATAFILE::_0x603AC35FD4602C76(Local_0.f_34))
			{
				func_5();
				if (!func_6())
				{
					DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, no request found! Returning false.");
					func_3();
					DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, state change to DONE");
					Local_0 = 5;
					return 0;
				}
				DATAFILE::_DATAFILE_UNLOAD(Local_0.f_34);
				func_7("player_scenario_orbit_cam", &(Local_0.f_36));
				DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, state change to START");
				Local_0 = 2;
			}
			break;
		case 2:
			if (func_8())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, state change to RUN");
				Local_0 = 3;
			}
			break;
		case 3:
			if (Local_0.f_33 != 0)
			{
				CAM::_0xD904F75DBD7AB865(Local_0.f_33);
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, state change to STOP");
				Local_0 = 4;
			}
			break;
		case 4:
			func_3();
			DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, state change to DONE");
			Local_0 = 5;
			break;
		case 5:
			return 0;
	}
	return 1;
}

void func_5()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_0.f_34, -1296226829, "CameraData/Scenarios/Camera");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_0.f_34, 279908099, "CameraData/Scenarios/Camera(%i):scenario");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_0.f_34, -302997874, "CameraData/Scenarios/Camera(%i):request");
}

bool func_6()
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;

	Var0 = Local_0.f_34;
	Var0.f_2 = -1296226829;
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var0.f_3 = iVar6;
		Var0.f_2 = 279908099;
		DATAFILE::_DATAFILE_GET_HASH(&iVar7, &Var0);
		if (iVar7 == Local_0.f_35)
		{
			Var0.f_2 = -302997874;
			DATAFILE::_DATAFILE_GET_STRING(&(Local_0.f_36), &Var0);
			DEBUG::_0xA308F935BDECCEC0(40, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, setting (scenario) request to: ", &(Local_0.f_36));
			return true;
		}
		iVar6++;
	}
	DEBUG::_0x83407B92D46F25C3(168, 0, "PLAYER SCENARIO CAMERA: No camera has been added for: ", UNK_0x4379B6FA65D55295(Local_0.f_35), ". Please bug to Default Design (Scenarios)");
	return false;
}

void func_7(char* sParam0, char* sParam1)
{
	StringCopy(&(Local_0.f_1), sParam0, 64);
	StringCopy(&(Local_0.f_1.f_8), sParam1, 64);
	CAM::_0x6A4D224FC7643941(&(Local_0.f_1));
	Local_0.f_44 = 1;
	DEBUG::_0xA308F935BDECCEC0(40, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, loading dictionary: ", sParam0);
}

bool func_8()
{
	if (CAM::_0xDD0B7C5AE58F721D(&(Local_0.f_1)) && !CAM::_0x927B810E43E99932(&(Local_0.f_1)))
	{
		CAM::_0xB8B207C34285E978(&(Local_0.f_1));
		Local_0.f_1.f_16 = Global_33;
		Local_0.f_1.f_21 = 1;
		Local_0.f_1.f_22 = { 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(Local_0.f_32, true) };
		CAM::_0xAC77757C05DE9E5A(&(Local_0.f_1));
		DEBUG::_0xA308F935BDECCEC0(8, 0, "PLAYER_SCENARIO_CAMERA_SUPPORT, starting camera");
		return true;
	}
	return false;
}

