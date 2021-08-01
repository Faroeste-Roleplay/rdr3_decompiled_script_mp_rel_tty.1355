#region Local Var
	struct<15> Local_0 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 7;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	struct<5> ScriptParam_0 = { 0, -1, -1, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_36 = 1f;
	fLocal_37 = 1f;
	func_1(ScriptParam_0.f_4);
	func_2(&ScriptParam_0);
	DEBUG::_0xF0783374333FD8CE(40, 70, func_3(), "Starting HIDEOUT LEADER Fetch script");
	while (!func_4() && func_5())
	{
		BUILTIN::WAIT(0);
	}
	func_6();
	DEBUG::_0xF0783374333FD8CE(40, 70, func_3(), "Terminating HIDEOUT LEADER Fetch script");
	func_7();
}

void func_1(int iParam0)
{
	func_8(32, iParam0);
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_22, 1, 40);
	func_10(NETWORK::_0xBA24095EA96DFE17(&uLocal_22), 1, "m_hostData");
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(var uParam0)
{
	int iVar0;

	Local_0.f_2 = { uParam0->f_1 };
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 70, "NET_FETCH_HIDEOUT_LEADER_INIT: GET_SCRIPT_BRAIN_ENTITY returned an entity that doesn't exist.");
		func_12(2);
		return;
	}
	Local_0.f_1 = *uParam0;
	Local_0.f_4 = uParam0->f_4;
	Local_0.f_11 = uParam0->f_6;
	Local_0.f_13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	Local_0.f_12 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	func_13(&(Local_0.f_5), 0);
	func_13(&(Local_0.f_8), 0);
}

var func_3()
{
	return func_14(&(Local_0.f_14));
}

bool func_4()
{
	if (func_15(0, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 70, "NET_FETCH_HIDEOUT_LEADER_SHOULD_SHUTDOWN - Kill event caught.");
		return true;
	}
	if (func_16(Local_0.f_2, 1, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 70, "NET_FETCH_HIDEOUT_LEADER_SHOULD_SHUTDOWN - NETWORK_SHOULD_FREEMODE_CONTENT_END.");
		return true;
	}
	if ((Local_0.f_4 == -1 || Local_0.f_11 == -1) || Global_1216137.f_356[Local_0.f_4 /*2*/] != Local_0.f_11)
	{
		DEBUG::_0xF0783374333FD8CE(8, 70, "NET_FETCH_HIDEOUT_LEADER_SHOULD_SHUTDOWN - sPostMissionThreadData[iInstanceId].eRunningMission != m_localData.eRunningMission.");
		return true;
	}
	if (Local_0.f_12 != 0 && GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != Local_0.f_12)
	{
		DEBUG::_0xF0783374333FD8CE(8, 70, "NET_FETCH_HIDEOUT_LEADER_SHOULD_SHUTDOWN - Our gang ID changed.");
		return true;
	}
	return false;
}

bool func_5()
{
	switch (Local_0)
	{
		case 0:
			func_17();
			break;
		case 1:
			func_18();
			break;
		case 2:
			return false;
	}
	return true;
}

void func_6()
{
}

void func_7()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_7();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	char cVar7[64];

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	StringCopy(&cVar3, "tID: ", 32);
	StringIntConCat(&cVar3, SCRIPTS::GET_ID_OF_THIS_THREAD(), 32);
	StringCopy(&cVar7, "sID: ", 64);
	StringConCat(&cVar7, UNK_0x8F77B33B6A34D8BA(), 64);
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_19(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_7();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
					break;
				case 1:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
					func_7();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_7();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_7();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_7();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_7();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_7();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_7();
		}
		if (func_20() == 0)
		{
			if (func_21())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_7();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_7();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
					break;
				case 1:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
					func_7();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_7();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_7();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_7();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(168, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] EXIT (Fail) - Network Game Not In Progress");
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] EXIT (Success) - First Network Broadcast Received after ", iVar9, " frames - ", &Var1);
			UNK_0x355E72323AEE83CC(-1, 6);
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(680, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] EXIT (Fail) - Waiting too long for first network broadcast - but allowing script to continue - ", &Var1);
			func_7();
			return;
		}
		DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] STILL WAITING (frames: ", iVar9, " ) - ", &Var1);
		BUILTIN::WAIT(0);
	}
}

void func_12(int iParam0)
{
	if (Local_0 != iParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 70, "NET_FETCH_HIDEOUT_LEADER_GO_TO_STATE: Moving to state ", func_22(iParam0, 0));
		Local_0 = iParam0;
	}
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1 || !func_23(uParam0))
	{
		func_24(uParam0);
	}
}

var func_14(var uParam0)
{
	return uParam0;
}

bool func_15(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_25(Global_1572887, 0), ", so skipping");
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

bool func_16(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265378.f_131719.f_135 & 8 != 0)
	{
		Global_1072032.f_28392 = 1;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eLoaderFlags != UGC_GLOBAL_LOADER_FLAG_NONE");
		return true;
	}
	if (func_26(Global_1051214) && !func_27(Global_1051214, Param0))
	{
		Global_1072032.f_28392 = 2;
		return true;
	}
	if (iParam2 != 0 && func_28(iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_ANYONE");
		return true;
	}
	if (iParam3 != 0 && func_29(iParam3, 255))
	{
		Global_1072032.f_28392 = 4;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_PLAYER");
		return true;
	}
	if (Global_263042[Global_1275959 /*70*/] > 2)
	{
		Global_1072032.f_28392 = 5;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState > UGC_GLOBAL_LOADER_STATE_IDLE, ", func_30(Global_263042[Global_1275959 /*70*/], 0));
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1072032.f_28392 = 6;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState >= UGC_GLOBAL_LOADER_HS_MISSION_UPDATE, ", func_31(Global_262155, 0));
		return true;
	}
	if (func_32())
	{
		Global_1072032.f_28392 = 7;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NETWORK_IS_GLOBAL_UGC_MISSION_ACTIVE");
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_26(Global_1051214))
		{
			Global_1072032.f_28392 = 8;
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, TMF_IS_MATCHMAKING");
			return true;
		}
	}
	if (Global_265378.f_131877 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265378.f_131877))
	{
		Global_1072032.f_28392 = 9;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, g_UGCData.tiMissionController");
		return true;
	}
	Global_1072032.f_28392 = 0;
	return false;
}

void func_17()
{
	if (func_33())
	{
		DEBUG::_0xF0783374333FD8CE(40, 70, func_3(), "NET_FETCH_HIDEOUT_LEADER_UPDATE_RUNNING: NET_FETCH_HIDEOUT_PROCESS_PED_KILLED_EVENT returned true.");
		func_12(1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_0.f_13))
	{
		DEBUG::_0xF0783374333FD8CE(40, 70, func_3(), "NET_FETCH_HIDEOUT_LEADER_UPDATE_RUNNING: The hideout leader ped no longer exists.");
		func_12(2);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_0.f_13) && !PED::GET_PED_CONFIG_FLAG(Local_0.f_13, 11, false))
	{
		if (PED::_IS_PED_HOGTIED(Local_0.f_13) && PED::_0x3D9F958834AB9C30(Local_0.f_13) == Global_33)
		{
			DEBUG::_0xF0783374333FD8CE(40, 70, func_3(), "NET_FETCH_HIDEOUT_LEADER_UPDATE_RUNNING: The hideout leader died and was hogtied.");
			func_12(1);
			return;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 70, func_3(), "NET_FETCH_HIDEOUT_LEADER_UPDATE_RUNNING: The hideout leader died but was not hogtied");
			func_12(2);
			return;
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_34();
	}
}

void func_18()
{
	if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (Local_0.f_1)
		{
			func_35(joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"), 1, 1);
		}
		else
		{
			func_35(joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"), 1, 1);
		}
	}
	func_12(2);
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NETSCRIPT_NOT_ACTIVE";
		case 1:
			return "NETSCRIPT_JOINING";
		case 2:
			return "NETSCRIPT_PLAYING";
		case 3:
			return "NETSCRIPT_TERMINATED";
		case 4:
			return "NETSCRIPT_FAILED_SESSION_FULL";
		case 5:
			return "NETSCRIPT_FAILED_NO_JOIN_IN_PROGRESS";
		case 6:
			return "NETSCRIPT_FAILED_NO_JOIN_IN_PROGRESS";
		default:
			break;
	}
	return "";
}

int func_20()
{
	return Global_1572887.f_13;
}

bool func_21()
{
	return Global_1051590.f_8;
}

char* func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_FETCH_HIDEOUT_LEADER_STATE_RUNNING";
		case 1:
			return "NET_FETCH_HIDEOUT_LEADER_STATE_KILLED";
		case 2:
			return "NET_FETCH_HIDEOUT_LEADER_STATE_CLEANUP";
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

bool func_23(var uParam0)
{
	return func_36(*uParam0, 1);
}

void func_24(var uParam0)
{
	func_37(uParam0, 0);
}

char* func_25(int iParam0, int iParam1)
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

bool func_26(struct<2> Param0)
{
	if (!func_38(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_39(Param0))
	{
		return false;
	}
	return true;
}

bool func_27(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_28(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1198211.f_1 && iParam0) != 0;
}

bool func_29(int iParam0, int iParam1)
{
	if (!Global_1072032.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197826[iParam1 /*12*/] && iParam0) != 0;
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_GLOBAL_LOADER_STATE_INVALID";
		case 1:
			return "UGC_GLOBAL_LOADER_STATE_PRE_DOWNLOAD_DATA";
		case 2:
			return "UGC_GLOBAL_LOADER_STATE_IDLE";
		case 3:
			return "UGC_GLOBAL_LOADER_STATE_DOWNLOADING_DATA";
		case 4:
			return "UGC_GLOBAL_LOADER_STATE_DATA_DOWNLOADED";
		case 5:
			return "UGC_GLOBAL_LOADER_STATE_SESSIONING_PLAYERS";
		case 6:
			return "UGC_GLOBAL_LOADER_STATE_PLAYERS_SESSIONED";
		case 7:
			return "UGC_GLOBAL_LOADER_STATE_LAUNCHING_MISSION";
		case 8:
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_LAUNCH";
		case 9:
			return "UGC_GLOBAL_LOADER_STATE_MISSION_LAUNCHED";
		case 10:
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_RESTART";
		case 11:
			return "UGC_GLOBAL_LOADER_STATE_RESTART_MISSION";
		case 12:
			return "UGC_GLOBAL_LOADER_STATE_WAIT_FOR_TEAM_SORT";
		case 13:
			return "UGC_GLOBAL_LOADER_STATE_SET_UP_NEXT_MISSION";
		case 14:
			return "UGC_GLOBAL_LOADER_STATE_KICK_PLAYER";
		case 15:
			return "UGC_GLOBAL_LOADER_STATE_CLEAR_CONTENT";
		case 16:
			return "UGC_GLOBAL_LOADER_STATE_RESTART_FREEROAM";
		case 17:
			return "UGC_GLOBAL_LOADER_STATE_END_INSTANCED_SESSION";
		case 18:
			return "UGC_GLOBAL_LOADER_STATE_CLEAR_MISSION";
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

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "UGC_GLOBAL_LOADER_HS_INVALID";
		case 0:
			return "UGC_GLOBAL_LOADER_HS_MANAGE_INSTIGATORS";
		case 1:
			return "UGC_GLOBAL_LOADER_HS_MISSION_UPDATE";
		case 2:
			return "UGC_GLOBAL_LOADER_HS_TEAM_SORT_AND_REBALANCE";
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

bool func_32()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_26(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_33()
{
	int iVar0;
	struct<25> Var1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &Var1, 32))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Var1) || !ENTITY::DOES_ENTITY_EXIST(Var1.f_1))
				{
					return false;
				}
				if (!ENTITY::IS_ENTITY_A_PED(Var1.f_1))
				{
					return false;
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1) != Local_0.f_13)
				{
					return false;
				}
				if (!Var1.f_3 && !ENTITY::IS_ENTITY_DEAD(Var1))
				{
					return false;
				}
				if (Var1.f_24)
				{
					return false;
				}
				if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
				{
					return false;
				}
				return GANG::_0x901E0DC25080C8B9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))) == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		}
		iVar0++;
	}
	return false;
}

void func_34()
{
	if ((!func_40(uLocal_22, 1) && func_41(&(Local_0.f_5), 6000)) && func_42())
	{
		DEBUG::_0xA308F935BDECCEC0(40, 70, func_3(), "NET_FETCH_HIDEOUT_LEADER_HOST_UPDATE_DIALOGUE: Playing flee line.");
		func_43(Local_0.f_13, "HIDEOUT_LEADER_FLEE", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
		func_44(&uLocal_22, 1);
	}
	if ((!func_40(uLocal_22, 2) && func_41(&(Local_0.f_8), 1000)) && PED::_0x5203038FF8BAE577(Local_0.f_13, 26, 750))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 70, func_3(), "NET_FETCH_HIDEOUT_LEADER_HOST_UPDATE_DIALOGUE: Playing attack line.");
		func_43(Local_0.f_13, "HIDEOUT_LEADER_TURN", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
		func_44(&uLocal_22, 2);
	}
}

void func_35(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	char[] cVar7[8];
	int iVar8;

	if (func_20() != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 84, "PERSONA_HONOR_LOG_ACTION - [", func_45(iParam0, 0), "] - Gamemode not supported.");
		return;
	}
	if (func_46())
	{
		DEBUG::_0xA308F935BDECCEC0(680, 84, "PERSONA_HONOR_LOG_ACTION - [", func_45(iParam0, 0), "] - Honor disabled. Active config = ", func_47(Global_1139844.f_3876.f_711, 0));
		return;
	}
	if (PED::_0x0E2F43516F998269(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_HONOR_LOG_ACTION - player is an animal");
		return;
	}
	if (iParam0 == -1)
	{
		DEBUG::_0x83407B92D46F25C3(168, 84, "PERSONA_HONOR_LOG_ACTION - [", func_45(iParam0, 0), "] - Invalid honor action.");
		return;
	}
	if (!bParam1)
	{
		if (!Global_1139844.f_3876.f_2[func_48(iParam0, 1) /*4*/])
		{
			DEBUG::_0xA308F935BDECCEC0(2728, 84, "PERSONA_HONOR_LOG_ACTION - [", func_45(iParam0, 0), "] - ", "Currently disabled. Active config = ", func_47(Global_1139844.f_3876.f_711, 0));
			return;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(168, 84, "*********************** PERSONA_HONOR_LOG_ACTION - ", func_45(iParam0, 0), " ***********************");
	DEBUG::_0xA308F935BDECCEC0(40, 84, "*********************** PERSONA_HONOR_LOG_ACTION - Active Config = ", func_47(Global_1139844.f_3876.f_711, 0));
	DEBUG::_0xA308F935BDECCEC0(8, 84, "*********************** PERSONA_HONOR_LOG_ACTION - Bypass Config = ", bParam1);
	UNK_0x355E72323AEE83CC(84, 6);
	DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_HONOR_LOG_ACTION - Giving award! bApplyToPosse: ", bParam2);
	Global_1139844.f_3876.f_2[func_48(iParam0, 1) /*4*/].f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1275959.f_16 != Global_1275959)
	{
		DEBUG::_0x4423BBAB7EB2B96B(680, 84, "PERSONA_HONOR_LOG_ACTION - [", func_45(iParam0, 0), "] - ", "bApplyToPosse is TRUE but local player is not the posse leader. This can only be used by the posse leader!");
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275959.f_154[iVar8]))
		{
		}
		else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1275959.f_15, Global_1275959.f_154[iVar8]))
		{
		}
		else if (Global_1275959.f_154[iVar8] == Global_1275959.f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&cVar7, Global_1275959.f_154[iVar8]);
		}
		iVar8++;
	}
	func_49(&Var0, cVar7);
}

bool func_36(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_50(uParam0, 1);
	func_51(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_38(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1072032.f_640.f_601;
		case 3:
			return Global_1072032.f_640.f_2103;
		case 4:
			return Global_1072032.f_640.f_12605;
		case 5:
			return Global_1072032.f_640.f_12907;
		case 6:
			return Global_1072032.f_640.f_15909;
		case 7:
			return Global_1072032.f_640.f_16511;
		case 8:
			return Global_1072032.f_640.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_40(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_41(var uParam0, int iParam1)
{
	if (!func_23(uParam0))
	{
		return false;
	}
	if (func_52(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

bool func_42()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && GANG::_0x901E0DC25080C8B9(iVar1) == Local_0.f_12)
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::GET_ENTITY_SPEED(iVar2) > 0f) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(Local_0.f_13, true, false)) < 8f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_43(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_53(iParam0, &Var0);
}

void func_44(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

char* func_45(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return "PERSONA_HONOR_ACTION__KILL_SEDATED_ANIMAL";
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return "PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL";
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return "PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN";
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return "PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT";
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return "PERSONA_HONOR_ACTION__MURDER_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE";
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return "PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER";
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return "PERSONA_HONOR_ACTION__REVIVE_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return "PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE";
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return "PERSONA_HONOR_ACTION__NB_WILDMAN_KILL";
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return "PERSONA_HONOR_ACTION__MURDER_RAMPAGE";
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return "PERSONA_HONOR_ACTION__SLAUGHTER_PETS";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_FIFTY";
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return "PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return "PERSONA_HONOR_ACTION__LOOTING";
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return "PERSONA_HONOR_ACTION__EXECUTION_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return "PERSONA_HONOR_ACTION__ANIMAL_CRUELTY";
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return "PERSONA_HONOR_ACTION__REVIVE_POSSE";
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return "PERSONA_HONOR_ACTION__MURDER_BUTCHER";
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return "PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG";
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return "PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL";
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return "PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER";
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return "PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL";
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return "PERSONA_HONOR_ACTION__NB_WILDMAN_FEED";
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return "PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION";
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return "PERSONA_HONOR_ACTION__WATCH_BLEED_OUT";
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return "PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE";
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return "PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return "PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE";
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return "PERSONA_HONOR_ACTION__INTRO_MISSION_NEG";
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return "PERSONA_HONOR_ACTION__MURDER_HORSE";
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return "PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL";
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return "PERSONA_HONOR_ACTION__RESOURCEFUL";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_TEN";
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return "PERSONA_HONOR_ACTION__MISSION_OUTLAW";
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return "PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return "PERSONA_HONOR_ACTION__INTRO_MISSION_POS";
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return "PERSONA_HONOR_ACTION__WAGON_THIEF_AI";
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return "PERSONA_HONOR_ACTION__THEFT";
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return "PERSONA_HONOR_ACTION__MURDER";
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return "PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE";
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return "PERSONA_HONOR_ACTION__HORSE_CARE";
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return "PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP";
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return "PERSONA_HONOR_ACTION__CLEAR_HIDEOUT";
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return "PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN";
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return "PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return "PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL";
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return "PERSONA_HONOR_ACTION__LOOTING_BODIES";
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return "PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE";
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return "PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_TWENTY";
		case -29468993:
			return "PERSONA_HONOR_ACTION__NB_SUSPENSION_TRAP_SAVE";
		case -1:
			return "PERSONA_HONOR_ACTION__INVALID";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE";
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return "PERSONA_HONOR_ACTION__IGNORE_MISSION";
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return "PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP";
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return "PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE";
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return "PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL";
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return "PERSONA_HONOR_ACTION__REVIVE_MULTI";
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return "PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL";
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return "PERSONA_HONOR_ACTION__HERDING_STEAL";
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return "PERSONA_HONOR_ACTION__VANDALISM_LOW";
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return "PERSONA_HONOR_ACTION__GRIEFING";
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return "PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT";
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return "PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS";
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return "PERSONA_HONOR_ACTION__ARSON";
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return "PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED";
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return "PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY";
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return "PERSONA_HONOR_ACTION__MERCY_KILL";
		case 669386338:
			return "PERSONA_HONOR_ACTION__NB_SUSPENSION_TRAP_MURDER";
		case 796310207:
			return "PERSONA_HONOR_ACTION__REVIVE_SEDATED_ANIMAL";
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return "PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD";
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return "PERSONA_HONOR_ACTION__HORSE_CARE_FULL";
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return "PERSONA_HONOR_ACTION__CLEAR_AMBUSH";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_FIVE";
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return "PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE";
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return "PERSONA_HONOR_ACTION__HORSE_THIEF_AI";
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return "PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER";
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return "PERSONA_HONOR_ACTION__GFH_CRIMINAL";
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return "PERSONA_HONOR_ACTION__RUSTLING";
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return "PERSONA_HONOR_ACTION__GFH_LAWFUL";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_FORTY";
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return "PERSONA_HONOR_ACTION__MISSION_GUNSLINGER";
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return "PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT";
		case 1623086000:
			return "PERSONA_HONOR_ACTION__KILL_CAGED_ANIMAL";
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return "PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN";
		case 1723535349:
			return "PERSONA_HONOR_ACTION__NB_HOBO_DOG_LOOT_BODY";
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return "PERSONA_HONOR_ACTION__HOGTIE_PLAYER";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_FIVE";
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return "PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_TEN";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_FORTY";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN";
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return "PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL";
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return "PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE";
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return "PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS";
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return "PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD";
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return "PERSONA_HONOR_ACTION__MISSION_POS_THIRTY";
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return "PERSONA_HONOR_ACTION__TRAMPLE";
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

bool func_46()
{
	if (func_20() != 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_HONOR_IS_DISABLED - Persona honor is MP specific, and not supported in the current game");
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_HONOR_IS_DISABLED - Honor is disabled by the unlock");
		return true;
	}
	if (Global_1139844.f_3876.f_1 & 2 != 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_HONOR_IS_DISABLED - Honor is disabled by the state flag");
		return true;
	}
	if (Global_1139844.f_3876.f_1 & 4 != 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_HONOR_IS_DISABLED - Honor is disabled by the every frame flag");
		return true;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_HONOR_IS_DISABLED - Network time hasn't started yet");
		return true;
	}
	return false;
}

char* func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FREEMODE_EVENT"):
			return "PERSONA_HONOR_CONFIG__FREEMODE_EVENT";
		case joaat("CAN_KILL"):
			return "PERSONA_HONOR_CONFIG__CAN_KILL";
		case joaat("FREEMODE"):
			return "PERSONA_HONOR_CONFIG__FREEMODE";
		case joaat("INSTANCED_GENERAL"):
			return "PERSONA_HONOR_CONFIG__INSTANCED_GENERAL";
		case 0:
			return "PERSONA_HONOR_CONFIG__INVALID";
		case joaat("NONE"):
			return "PERSONA_HONOR_CONFIG__NONE";
		case joaat("MP_INTRO"):
			return "PERSONA_HONOR_CONFIG__MP_INTRO";
		case joaat("CANNOT_KILL"):
			return "PERSONA_HONOR_CONFIG__CANNOT_KILL";
		case joaat("INSTANCED_STORY"):
			return "PERSONA_HONOR_CONFIG__INSTANCED_STORY";
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

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case 1623086000:
			return 65;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
		case 1723535349:
			return 58;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", iParam0, ", returning '-1'");
	}
	return -1;
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", iParam0, ", returning '-1'");
	}
	return -1;
}

void func_49(var uParam0, char* sParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&sParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_HONOR_BROADCAST_EVENT - No players defined in sPlayerBits, cannot broadcast event.");
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 14, &sParam1);
	DEBUG::_0xA308F935BDECCEC0(168, 84, "PERSONA_HONOR_BROADCAST_EVENT - Successfully sent event: ", func_55(uParam0->f_4, 0), ", Targets(bitset): ", sParam1);
}

void func_50(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_52(var uParam0)
{
	if (!func_23(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to get value of NET_TIMER that has not been started! Starting it");
		UNK_0x355E72323AEE83CC(0, 1);
		return 0;
	}
	if (func_56(uParam0))
	{
		return uParam0->f_2;
	}
	return func_57(uParam0->f_1);
}

bool func_53(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_54(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERSONA_HONOR_EVENT_NONE";
		case 0:
			return "PERSONA_HONOR_EVENT_POSSE_HONOR_ACTION";
		case 1:
			return "PERSONA_HONOR_EVENT_HOGTIED_PLAYER";
		case 2:
			return "PERSONA_HONOR_EVENT_REMOTE_HONOR_ACTION";
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

bool func_56(var uParam0)
{
	return func_36(*uParam0, 2);
}

int func_57(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

