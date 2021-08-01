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
	var uLocal_14 = 0;
	var uLocal_15 = 255;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 4;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 15;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	func_1(&uScriptParam_0);
	func_2(&uLocal_61, &uScriptParam_0);
	while (!func_3(&uLocal_61))
	{
		func_4(&uLocal_13, &uLocal_28, &uLocal_61);
		BUILTIN::WAIT(0);
	}
	func_5(&uLocal_13, &uLocal_61);
}

void func_1(var uParam0)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(40, 47, "NET_TRAIN_PROCESS_PRE_GAME - ", func_6(*uParam0, 0));
	iVar0 = MISC::GET_GAME_TIMER();
	func_7(32, *uParam0);
	func_8();
	if (func_9())
	{
		func_10();
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_13, 15, 7);
	func_11(NETWORK::_0xBA24095EA96DFE17(&uLocal_13), 15, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_28, 33, 8);
	func_12(NETWORK::_0x690806BC83BC8CA2(&(uLocal_28[0])), 33, "m_clientData");
	func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	DEBUG::_0xF0783374333FD8CE(2216, 34, "{ss}", UNK_0x8F77B33B6A34D8BA(), " pre-process took ", (MISC::GET_GAME_TIMER() - iVar0), " ms.");
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
}

bool func_3(var uParam0)
{
	if (func_14(0, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_SHOULD_TERMINATE - ", func_6(*uParam0, 0), " KILL_EVENT_CAUGHT");
		return true;
	}
	else if (uParam0->f_2 == 5)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 47, "NET_TRAIN_SHOULD_TERMINATE - ", func_6(*uParam0, 0), " eState: ", func_15(uParam0->f_2, 0));
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_16(uParam0, uParam1, uParam2);
	}
	func_17(uParam0, uParam1, uParam2);
}

void func_5(var uParam0, var uParam1)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(40, 47, "NET_TRAIN_TERMINATE - ", func_6(*uParam1, 0));
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		DEBUG::_0xF0783374333FD8CE(168, 47, "NET_TRAIN_TERMINATE - ", func_6(*uParam1, 0), " this is the final participant! Attempt to delete!");
		func_18(uParam0, uParam1);
		DEBUG::_0xF0783374333FD8CE(168, 47, "NET_TRAIN_TERMINATE - ", func_6(*uParam1, 0), " releasing vol locks");
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (VOLUME::_0xA4A4359320345B34(uParam0->f_3[iVar0]))
			{
				uParam0->f_3[iVar0] = 0;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_8[iVar0]))
			{
				VOLUME::_0xFDFECC6EE4491E11(uParam0->f_8[iVar0]);
			}
			iVar0++;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam1->f_3))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_3));
	}
	func_19(uParam1->f_1);
	func_10();
}

char* func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_TRAIN_PRIMARY";
		case 1:
			return "NET_TRAIN_SECONDARY";
		case 2:
			return "NET_TRAIN_TROLLEY";
		case 3:
			return "NET_TRAIN_MAX";
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

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_10();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_8()
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_20(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_10();
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
					func_10();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_10();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_10();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_10();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_10();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_10();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_10();
		}
		if (func_21() == 0)
		{
			if (func_22())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_10();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_10();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

bool func_9()
{
	if (Global_1572887.f_9)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "SHOULD_THIS_MULTIPLAYER_SCRIPT_TERMINATE NETWORK_IS_GAME_IN_PROGRESS() = FALSE, bail.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "SHOULD_THIS_MULTIPLAYER_SCRIPT_TERMINATE - NETWORK_IS_SIGNED_ONLINE = FALSE");
		UNK_0x355E72323AEE83CC(-1, 6);
		return true;
	}
	return false;
}

void func_10()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_13(bool bParam0)
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
					func_10();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_10();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_10();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_10();
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
			func_10();
			return;
		}
		DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] STILL WAITING (frames: ", iVar9, " ) - ", &Var1);
		BUILTIN::WAIT(0);
	}
}

bool func_14(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_23(Global_1572887, 0), ", so skipping");
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

char* func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_TRAIN_STATE_INIT";
		case 1:
			return "NET_TRAIN_STATE_STREAM";
		case 2:
			return "NET_TRAIN_STATE_CREATE";
		case 3:
			return "NET_TRAIN_STATE_MAIN";
		case 4:
			return "NET_TRAIN_STATE_DELETE";
		case 5:
			return "NET_TRAIN_STATE_TERMINATE";
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

void func_16(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			func_24(uParam0, uParam2);
			break;
		case 1:
			func_25(uParam0, uParam2);
			break;
		case 2:
			func_26(uParam0, uParam2);
			break;
		case 3:
			func_27(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_28(uParam0, uParam2);
			break;
	}
}

void func_17(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 >= 4 && uParam2->f_2 < 4)
	{
		func_29(uParam2, 4);
	}
	switch (uParam2->f_2)
	{
		case 0:
			func_30(uParam0, uParam2);
			break;
		case 1:
			func_31(uParam0, uParam2);
			break;
		case 2:
			func_32(uParam0, uParam2);
			break;
		case 3:
			func_33(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_34(uParam0, uParam2);
			break;
	}
}

void func_18(var uParam0, var uParam1)
{
	int iVar0;

	func_35(uParam1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_1))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_CLIENT_DELETE_TRAIN - ", func_6(*uParam1, 0), " deleting train from net id!");
			iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
			VEHICLE::DELETE_MISSION_TRAIN(&iVar0);
			func_36(*uParam1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_4[0]))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_CLIENT_DELETE_TRAIN - ", func_6(*uParam1, 0), " deleting train from local entity id!");
		VEHICLE::DELETE_MISSION_TRAIN(&(uParam1->f_4[0]));
		func_36(*uParam1, 0);
	}
}

void func_19(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar1 = VEHICLE::_0x635423D55CA84FC8(bParam0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		bVar0 = VEHICLE::_0x8DF5F6A19F99F0D5(bParam0, iVar2);
		if (bVar0 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(bVar0);
		}
		iVar2++;
	}
}

char* func_20(int iParam0)
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

int func_21()
{
	return Global_1572887.f_13;
}

bool func_22()
{
	return Global_1051590.f_8;
}

char* func_23(int iParam0, int iParam1)
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

void func_24(var uParam0, var uParam1)
{
	func_37(uParam0, uParam1, 1);
}

void func_25(var uParam0, var uParam1)
{
	if (func_38(uParam1->f_1))
	{
		func_37(uParam0, uParam1, 2);
	}
}

void func_26(var uParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(168, 47, "NET_TRAIN_HOST_UPDATE_CREATE - ", func_6(*uParam1, 0), " Cannot register 1 mission vehicle!");
			return;
		}
		vVar0 = { func_39(*uParam1) };
		sVar3 = func_40(*uParam1);
		DEBUG::_0xA308F935BDECCEC0(680, 47, "NET_TRAIN_HOST_UPDATE_CREATE - ", func_6(*uParam1, 0), " eConfig: ", UNK_0x4379B6FA65D55295(uParam1->f_1));
		DEBUG::_0xA308F935BDECCEC0(184, 47, "vPosition - ", &vVar0, " bDirection: ", sVar3);
		iVar4 = func_41(uParam1->f_1);
		if (!func_42(&(uParam0->f_1), uParam1->f_1, vVar0, sVar3, iVar4, 0, 1, 1))
		{
			DEBUG::_0x83407B92D46F25C3(168, 47, "NET_TRAIN_HOST_UPDATE_CREATE - ", func_6(*uParam1, 0), " Failed creation!");
			func_37(uParam0, uParam1, 4);
			return;
		}
		iVar5 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
		}
		fVar6 = func_43(uParam1->f_1);
		VEHICLE::SET_TRAIN_SPEED(iVar5, fVar6);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar5, fVar6);
		VEHICLE::_0x160C1B5AB48AB87C(iVar5, func_44(uParam1->f_1));
		VEHICLE::_0x4182C037AA1F0091(iVar5, func_45(uParam1->f_1));
		VEHICLE::_0xE6BD7DD3FD474415(iVar5, func_46(uParam1->f_1));
		VEHICLE::_0x06A09A6E0C6D2A84(iVar5, 0);
		if (!func_47(uParam1->f_1))
		{
			VEHICLE::_0xA72B1BF3857B94D7(iVar5, 1);
		}
		if (func_48(uParam1->f_1))
		{
			VEHICLE::_0x1BFBAFCC6760FF02(iVar5, false);
		}
	}
	else
	{
		iVar7 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			DEBUG::_0x83407B92D46F25C3(168, 47, "NET_TRAIN_HOST_UPDATE_CREATE - ", func_6(*uParam1, 0), " Train does not exist!");
			func_37(uParam0, uParam1, 4);
		}
		else if (ENTITY::IS_ENTITY_DEAD(iVar7))
		{
			DEBUG::_0x83407B92D46F25C3(168, 47, "NET_TRAIN_HOST_UPDATE_CREATE - ", func_6(*uParam1, 0), " Train is dead!");
			func_37(uParam0, uParam1, 4);
		}
		else if (VEHICLE::_0xBD3C4A2ED509205E(iVar7))
		{
			func_37(uParam0, uParam1, 3);
		}
	}
}

void func_27(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (func_49(uParam0, uParam2))
	{
		func_37(uParam0, uParam2, 4);
		return;
	}
	if (uParam0->f_14 == 0 && func_50(uParam1))
	{
		uParam0->f_14 = 1;
	}
	func_51(uParam0, uParam2);
	if (uParam0->f_2 == 255)
	{
		iVar0 = 255;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (func_52(uParam1, 1, iVar1))
			{
				iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
					DEBUG::_0xA308F935BDECCEC0(40, 47, "NET_TRAIN_HOST_UPDATE_MAIN - playerWaitingToTerminate: ", PLAYER::GET_PLAYER_NAME(uParam0->f_2));
					return;
				}
			}
			iVar1++;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_2))
	{
		uParam0->f_2 = 255;
		DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_HOST_UPDATE_MAIN - ", func_6(*uParam2, 0), " Clearing playerWaitingToTerminate");
	}
}

void func_28(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_HOST_UPDATE_DELETE - ", func_6(*uParam1, 0), " Train no longer exists!");
		func_37(uParam0, uParam1, 5);
	}
}

void func_29(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(10920, 47, "NET_TRAIN_CLIENT_SET_STATE - ", func_6(*uParam0, 0), " from: ", func_15(uParam0->f_2, 0), " to: ", func_15(iParam1, 0));
		uParam0->f_2 = iParam1;
	}
}

void func_30(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_29(uParam1, 1);
	}
}

void func_31(var uParam0, var uParam1)
{
	if (func_38(uParam1->f_1) && *uParam0 > 1)
	{
		func_29(uParam1, 2);
	}
}

void func_32(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;

	if (*uParam0 > 2 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			DEBUG::_0x83407B92D46F25C3(168, 47, "NET_TRAIN_CLIENT_UPDATE_CREATE - ", func_6(*uParam1, 0), " Train does not exist!");
			func_29(uParam1, 4);
		}
		else if (VEHICLE::_0xBD3C4A2ED509205E(iVar0))
		{
			func_53(*uParam1, iVar0);
			if (func_54(uParam1->f_1))
			{
				uParam1->f_3 = MAP::_BLIP_ADD_FOR_ENTITY(-399496385, iVar0);
				MAP::SET_BLIP_SPRITE(uParam1->f_3, joaat("BLIP_AMBIENT_TRAIN"), true);
				if (!func_55(*uParam1, 16))
				{
					MAP::_BLIP_REMOVE_MODIFIER(uParam1->f_3, -1186550032);
					DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_CLIENT_UPDATE_CREATE - ", func_6(*uParam1, 0), " train blip should be displayed");
				}
				else
				{
					MAP::_BLIP_SET_MODIFIER(uParam1->f_3, -1186550032);
					DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_CLIENT_UPDATE_CREATE - ", func_6(*uParam1, 0), " train blip should be hidden");
				}
				func_56(*uParam1, uParam1->f_3);
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_CLIENT_UPDATE_CREATE - ", func_6(*uParam1, 0), " train blip shouldn't be displayed");
			}
			if (!func_57(uParam1->f_1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, PLAYER::PLAYER_ID(), true);
				VEHICLE::_0x63DC1F22C903B709(iVar0, true);
			}
			iVar1 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
			DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_CLIENT_UPDATE_CREATE - ", func_6(*uParam1, 0), " iNumCars: ", iVar1);
			func_58(*uParam1, iVar1);
			iVar12 = 0;
			iVar12 = 0;
			while (iVar12 <= (iVar1 - 1))
			{
				uParam1->f_4[iVar12] = VEHICLE::GET_TRAIN_CARRIAGE(iVar0, iVar12);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[iVar12]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_4[iVar12]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_4[iVar12]))
					{
						if (func_59(uParam1->f_1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_4[iVar12], true);
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_4[iVar12], false);
						}
						ENTITY::_0xA91E6CF94404E8C9(uParam1->f_4[iVar12]);
					}
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_4[iVar12]), &vVar3, &vVar6);
					vVar9 = { vVar6 - vVar3 };
					vVar9.x = (vVar9.x * 0.9f);
					vVar9.f_2 = (vVar9.z * 1.25f);
					iVar2 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(uParam1->f_4[iVar12], false, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_4[iVar12]), vVar9);
					PED::_0x7C00CFC48A782DC0(iVar2, uParam1->f_4[iVar12], 0f, 0f, (vVar9.z * 0.6f), 0f, 0f, 0f, 2, 1);
					func_60(*uParam1, iVar12, uParam1->f_4[iVar12]);
					func_61(*uParam1, iVar12, iVar2);
				}
				iVar12++;
			}
			func_62(*uParam1, 4);
			func_19(uParam1->f_1);
			func_29(uParam1, 3);
		}
	}
}

void func_33(var uParam0, var uParam1, var uParam2)
{
	if (func_49(uParam0, uParam2))
	{
		func_29(uParam2, 4);
		return;
	}
	func_35(uParam2);
	if (func_63(uParam0, uParam2))
	{
		if (!func_52(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_64(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT());
			func_65();
		}
	}
	if (func_66(uParam2))
	{
		if (!func_52(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_64(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT());
		}
		if (uParam0->f_2 == PLAYER::PLAYER_ID())
		{
			func_29(uParam2, 5);
		}
	}
}

void func_34(var uParam0, var uParam1)
{
	func_18(uParam0, uParam1);
	if (*uParam0 > 4)
	{
		func_29(uParam1, 5);
	}
}

void func_35(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = uParam0->f_4[0];
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		if (!func_67(vVar1))
		{
			vVar4 = { Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 };
			if (BUILTIN::VDIST(vVar4, vVar1) > 10f)
			{
				Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 = { vVar1 };
				DEBUG::_0x1B08D1EB9D8C4931(936, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_MANAGER_POSITION - ", func_6(*uParam0, 0), " vPosition: ", &(Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1));
			}
		}
	}
	else if (!func_67(Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1))
	{
		Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 = { 0f, 0f, 0f };
		DEBUG::_0x1B08D1EB9D8C4931(936, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_MANAGER_POSITION - ", func_6(*uParam0, 0), " vPosition: ", &(Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1));
	}
}

int func_36(int iParam0, bool bParam1)
{
	struct<13> Var0;

	DEBUG::_0xA308F935BDECCEC0(40, 48, "NET_TRAIN_MANAGER_CLIENT_REQUEST_DESTROY_TRAIN - ", func_6(iParam0, 0));
	UNK_0x355E72323AEE83CC(48, 6);
	if (!func_68(iParam0, bParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 3;
		Var0.f_5 = iParam0;
		if (bParam1)
		{
			func_69(iParam0);
		}
		return func_71(&Var0, func_70(0, 8));
	}
	return 1;
}

void func_37(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 != iParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(10920, 47, "NET_TRAIN_HOST_SET_STATE - ", func_6(*uParam1, 0), " from: ", func_15(*uParam0, 0), " to: ", func_15(iParam2, 0));
		*uParam0 = iParam2;
	}
}

bool func_38(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = VEHICLE::_0x635423D55CA84FC8(bParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		bVar1 = VEHICLE::_0x8DF5F6A19F99F0D5(bParam0, iVar3);
		if (bVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(bVar1, false);
			if (!STREAMING::HAS_MODEL_LOADED(bVar1))
			{
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_39(int iParam0)
{
	return Global_1138768.f_2[iParam0 /*17*/].f_2;
}

char* func_40(int iParam0)
{
	return Global_1138768.f_2[iParam0 /*17*/].f_5;
}

int func_41(int iParam0)
{
	if (func_72(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_42(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(VEHICLE::_0x635423D55CA84FC8(bParam1)))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "CREATE_NET_TRAIN_DISTRIBUTED: CAN_REGISTER_MISSION_VEHICLES() = FALSE");
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "CREATE_NET_TRAIN_DISTRIBUTED: NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED. Terminating function.");
		return false;
	}
	if (bParam7)
	{
		iVar1 = VEHICLE::_0x635423D55CA84FC8(bParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			if (!func_73(VEHICLE::_0x8DF5F6A19F99F0D5(bParam1, iVar0)))
			{
				bVar2 = true;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return false;
		}
	}
	iVar3 = VEHICLE::_CREATE_MISSION_TRAIN(bParam1, vParam2, bParam5, bParam6, true, bParam8);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		DEBUG::_0x83407B92D46F25C3(904, 8, "CREATE_NET_TRAIN_DISTRIBUTED: Failed to create eTrainConfig: ", bParam1, " vPosition: ", &vParam2);
		return false;
	}
	VEHICLE::_0x06A09A6E0C6D2A84(iVar3, 0);
	*uParam0 = NETWORK::VEH_TO_NET(iVar3);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 8, "CREATE_NET_TRAIN_DISTRIBUTED: net id doesn't exist");
		return false;
	}
	if (bParam9)
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar3, true);
	}
	else
	{
		NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
	}
	return true;
}

float func_43(int iParam0)
{
	if (func_72(iParam0))
	{
		return 4.5f;
	}
	switch (iParam0)
	{
		case joaat("NET_FETCH_TRAIN_VIP_RESCUE_00"):
			return 0f;
		case joaat("NET_FETCH_TRAIN_CAMP_RESUPPLY_00"):
			return 0f;
		case joaat("NET_FETCH_TRAIN_MOVING_BOUNTY_1"):
			return 0f;
		case -735194130:
			return 0f;
		case joaat("NET_FETCH_TRAIN_KIDNAPPED_BUYER_00"):
			return 0f;
		case -1371026825:
			return 0f;
		default:
			break;
	}
	return 8f;
}

float func_44(int iParam0)
{
	if (func_72(iParam0))
	{
		return 5f;
	}
	return 30f;
}

int func_45(int iParam0)
{
	if (func_72(iParam0))
	{
		return 1;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (func_72(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_47(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

bool func_48(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return true;
		default:
			break;
	}
	return false;
}

bool func_49(var uParam0, var uParam1)
{
	if (func_74(1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_HOST_SHOULD_DELETE - ", func_6(*uParam1, 0), " NET_TRAIN_MANAGER_BIT_IS_DISABLED");
		return true;
	}
	else if (Global_1139291.f_2[*uParam1 /*42*/].f_3 == 0f)
	{
		DEBUG::_0x83407B92D46F25C3(168, 47, "NET_TRAIN_HOST_SHOULD_DELETE - ", func_6(*uParam1, 0), " 0 launch radius!");
		return true;
	}
	else if (func_75(*uParam1) != uParam1->f_1)
	{
		DEBUG::_0x83407B92D46F25C3(10920, 47, "NET_TRAIN_HOST_SHOULD_DELETE - ", func_6(*uParam1, 0), " manager eConfig: ", func_76(func_75(*uParam1), 0), " eConfig: ", func_76(uParam1->f_1, 0));
		return true;
	}
	else if (Global_1139291.f_2[*uParam1 /*42*/] != 3)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 47, "NET_TRAIN_HOST_SHOULD_DELETE - ", func_6(*uParam1, 0), " eState: ", func_77(Global_1139291.f_2[*uParam1 /*42*/], 0));
		return true;
	}
	else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_HOST_SHOULD_DELETE - ", func_6(*uParam1, 0), " Train net id does not exist!");
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[0]))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 47, "NET_TRAIN_HOST_SHOULD_DELETE - ", func_6(*uParam1, 0), " Train entity does not exist!");
		return true;
	}
	return false;
}

bool func_50(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 2;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_78((*uParam0)[iVar0], iVar1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_51(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	uParam1->f_21++;
	if (uParam1->f_21 < 15)
	{
		return;
	}
	uParam1->f_21 = 0;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
	iVar2 = uParam0->f_13;
	iVar3 = uParam0->f_13 * 4;
	if (iVar3 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[iVar3]))
		{
			func_79(uParam0, uParam1, iVar2, uParam1->f_4[iVar3]);
		}
		iVar2++;
	}
	else
	{
		iVar2 = 0;
	}
	if (iVar2 >= 4)
	{
		iVar2 = 0;
	}
	uParam0->f_13 = iVar2;
}

bool func_52(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	return func_78((*uParam0)[iParam2], iParam1);
}

void func_53(int iParam0, int iParam1)
{
	Global_1139291.f_2[iParam0 /*42*/].f_2 = iParam1;
}

bool func_54(int iParam0)
{
	if (func_72(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

bool func_55(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_78(Global_1138874[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_56(int iParam0, var uParam1)
{
	DEBUG::_0x1B08D1EB9D8C4931(40, 48, "NET_TRAIN_MANAGER_CLIENT_SET_TRAIN_BLIP - ", func_6(iParam0, 0));
	Global_1139291.f_2[iParam0 /*42*/].f_6 = uParam1;
}

bool func_57(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

void func_58(int iParam0, char* sParam1)
{
	DEBUG::_0x4DC69742196F818A(168, 48, "NET_TRAIN_MANAGER_CLIENT_SET_TRAIN_NUM_CARS - ", func_6(iParam0, 0), " iNumCars: ", sParam1);
	Global_1139291.f_2[iParam0 /*42*/].f_5 = sParam1;
}

bool func_59(var uParam0)
{
	return true;
}

void func_60(int iParam0, int iParam1, var uParam2)
{
	Global_1139291.f_2[iParam0 /*42*/].f_11[iParam1 /*2*/] = uParam2;
}

void func_61(int iParam0, int iParam1, int iParam2)
{
	Global_1139291.f_2[iParam0 /*42*/].f_11[iParam1 /*2*/].f_1 = iParam2;
}

void func_62(int iParam0, int iParam1)
{
	if (!func_78(Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 48, "NET_TRAIN_MANAGER_CLIENT_SET_TRAIN_BIT - ", func_6(iParam0, 0), " ", func_80(iParam1, 0));
		func_81(&(Global_1138874[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/]), iParam1);
	}
}

bool func_63(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_4[0];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 47, "Train Engine does not exist");
		return false;
	}
	if (uParam0->f_14 == 1)
	{
		return false;
	}
	iVar1 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0);
	if (iVar1 == Global_33)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 47, "Player driving Engine  returning TRUE");
		return true;
	}
	return false;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return;
	}
	if (!func_78((*uParam0)[iParam2], iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 47, "NET_TRAIN_CLIENT_SET_BIT - ", func_82(iParam1, 0));
		func_81(uParam0[iParam2], iParam1);
	}
}

void func_65()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3[3];
	var uVar7;
	struct<10> Var9;

	fVar2 = 25f;
	uVar7 = 1;
	iVar0 = func_83(&uVar3, &uVar7, 3, Global_34, fVar2, 0, 0, 0, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar3[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uVar3[iVar1])) && !LAW::_0x40851BCC33ACD9AB(uVar3[iVar1]))
		{
			Var9 = Global_33;
			Var9.f_3 = { Global_34 };
			Var9.f_6 = func_84();
			Var9.f_9 = 1;
			Var9.f_2 = joaat("CRIME_TRAIN_ROBBERY");
			Var9.f_8 = 1;
			LAW::_0x018F30D762E62DF8(uVar3[iVar1], &Var9);
			func_85(uVar3[iVar1], Global_34, 2, 1, 1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uVar3[iVar1], Global_33, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar1++;
	}
}

bool func_66(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;

	if (func_86(uParam0, 1))
	{
		return true;
	}
	iVar0 = uParam0->f_4[0];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	if (func_67(vVar1))
	{
		DEBUG::_0xA308F935BDECCEC0(952, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_POSITION - vPlayer: ", &Global_34, " vTrain: ", &vVar1);
		func_87(uParam0, 1);
		return true;
	}
	fVar4 = Global_1139291.f_2[*uParam0 /*42*/].f_3;
	if (fVar4 > 0f)
	{
		fVar5 = (fVar4 + 50f);
		fVar6 = BUILTIN::VDIST(Global_34, vVar1);
		if (fVar6 > fVar5 && !func_88(*uParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(952, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_POSITION - vPlayer: ", &Global_34, " vTrain: ", &vVar1);
			DEBUG::_0xA308F935BDECCEC0(408, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_POSITION - fDist: ", fVar6, " fAbandonRadius: ", fVar5);
			func_87(uParam0, 1);
			return true;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(952, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_POSITION FALSE - vPlayer: ", &Global_34, " vTrain: ", &vVar1);
			DEBUG::_0xA308F935BDECCEC0(408, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_POSITION FALSE - fDist: ", fVar6, " fAbandonRadius: ", fVar5);
			DEBUG::_0xA308F935BDECCEC0(8, 47, "NET_TRAIN_CLIENT_UPDATE_TRAIN_POSITION - DISTANCE DISABLE CLEANUO THIS FRAME: ", func_88(*uParam0));
		}
	}
	return false;
}

bool func_67(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_68(int iParam0, bool bParam1)
{
	if (!func_89())
	{
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 48, "NET_TRAIN_MANAGER_HOST_ON_REQUEST_DESTROY_TRAIN - ", func_6(iParam0, 0));
	if (Global_1138768.f_2[iParam0 /*17*/].f_1 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 48, "NET_TRAIN_MANAGER_HOST_ON_REQUEST_DESTROY_TRAIN - ", func_6(iParam0, 0), " eConfig: ", func_76(Global_1138768.f_2[iParam0 /*17*/].f_1, 0));
		return false;
	}
	if (bParam1)
	{
		func_69(iParam0);
	}
	func_90(iParam0, 4);
	return true;
}

void func_69(int iParam0)
{
	Global_1139291.f_2[iParam0 /*42*/].f_10 = Global_1275959.f_21 + 60;
}

var func_70(int iParam0, int iParam1)
{
	return func_91(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

int func_71(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 48, "NET_TRAIN_MANAGER_CLIENT_BROADCAST_EVENT - playerBits is 0");
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 0, &uParam1);
	return 1;
}

bool func_72(int iParam0)
{
	switch (iParam0)
	{
		case -1865722934:
		case -1643549114:
		case -1083616881:
		case -272646696:
		case 1936859429:
			return true;
		default:
			break;
	}
	return false;
}

bool func_73(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(bParam0, false);
	return STREAMING::HAS_MODEL_LOADED(bParam0);
}

bool func_74(int iParam0)
{
	return func_78(Global_1139291.f_1, iParam0);
}

bool func_75(int iParam0)
{
	DEBUG::_0x1B08D1EB9D8C4931(680, 48, "NET_TRAIN_MANAGER_GET_TRAIN_CONFIG - ", func_6(iParam0, 0), " TRAINS_ENUM: ", func_76(Global_1138768.f_2[iParam0 /*17*/].f_1, 0));
	return Global_1138768.f_2[iParam0 /*17*/].f_1;
}

var func_76(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1599294664);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_77(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_INVALID";
		case 1:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_INIT";
		case 2:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_LAUNCH";
		case 3:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_MAIN";
		case 4:
			return "NET_TRAIN_MANAGER_TRAIN_STATE_CLEANUP";
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

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_79(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	struct<8> Var5;
	vector3 vVar14;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 47, "NET_TRAIN_HOST_UPDATE_VOLUME_LOCK - Entity is dead ");
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
	if (func_67(vVar0))
	{
		return;
	}
	fVar3 = 40f;
	if (!VOLUME::_0xA4A4359320345B34(uParam0->f_3[iParam2]))
	{
		iVar4 = MISC::GET_HASH_KEY("NET_TRAIN");
		if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 1, 0, iVar4))
		{
			DEBUG::_0x4DC69742196F818A(2216, 47, "NET_TRAIN_HOST_UPDATE_VOLUME_LOCK - ", func_6(*uParam1, 0), " iLock: ", iParam2, " - DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK");
			return;
		}
		DEBUG::_0xA308F935BDECCEC0(2216, 47, "NET_TRAIN_HOST_UPDATE_VOLUME_LOCK - ", func_6(*uParam1, 0), " iLock: ", iParam2, " - REQUEST_VOLUME_LOCK_WITH_ARGS");
		Var5 = { vVar0 };
		Var5.f_4 = 40f;
		Var5.f_6 = MISC::GET_HASH_KEY("NET_TRAIN");
		Var5.f_7 = *uParam1;
		Var5.f_5 = 48;
		uParam0->f_3[iParam2] = VOLUME::_0x183C0B6CFEFFCAE4(&Var5);
	}
	else if (!VOLUME::_0xF6A8A652A6B186CD(uParam0->f_8[iParam2]))
	{
		switch (VOLUME::_0xB33A604345F58202(uParam0->f_3[iParam2]))
		{
			case 3:
				DEBUG::_0xA308F935BDECCEC0(2216, 47, "NET_TRAIN_HOST_UPDATE_VOLUME_LOCK - ", func_6(*uParam1, 0), " iLock: ", iParam2, " - VOLUME_LOCK_REQUEST_STATUS_SUCCEEDED");
				uParam0->f_8[iParam2] = VOLUME::_0x351D71B8B72B858B(uParam0->f_3[iParam2]);
				break;
			case 4:
				DEBUG::_0x4DC69742196F818A(2216, 47, "NET_TRAIN_HOST_UPDATE_VOLUME_LOCK - ", func_6(*uParam1, 0), " iLock: ", iParam2, " - VOLUME_LOCK_REQUEST_STATUS_FAILED");
				uParam0->f_3[iParam2] = 0;
				break;
			default:
				DEBUG::_0x4DC69742196F818A(168, 47, "NET_TRAIN_HOST_UPDATE_VOLUME_LOCK - ", func_6(*uParam1, 0), " iLock: ", iParam2);
				break;
		}
	}
	else
	{
		vVar14 = { VOLUME::_0xC4019CF9AE8E931A(uParam0->f_8[iParam2]) };
		if (BUILTIN::VDIST(vVar14, vVar0) > fVar3)
		{
			VOLUME::_0xEC43C2FFB70E3F30(uParam0->f_8[iParam2], vVar0);
		}
	}
}

char* func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_INITIALIZED";
		case 2:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_LAUNCHED";
		case 4:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_CREATED";
		case 8:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_TEMPORARY_STOP";
		case 16:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_BLIP_HIDDEN_REQUESTED";
		case 32:
			return "NET_TRAIN_MANAGER_TRAIN_BIT_IS_BLIP_HIDDEN";
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

void func_81(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

char* func_82(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_TRAIN_BIT_IS_WAITING_TO_TERMINATE";
		case 2:
			return "NET_TRAIN_BIT_HAS_TRAIN_BEEN_STOLEN";
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

int func_83(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_93(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_94(iVar0);
	return iVar1;
}

var func_84()
{
	return Global_1939313.f_26;
}

void func_85(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_95(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(136, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing immediate scenario exit");
		PED::_0xF1C03A5352243A30(iParam0);
		return;
	}
	if (func_67(vParam1))
	{
		DEBUG::_0x83407B92D46F25C3(168, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped was tasked with ", func_96(iParam4, 0), " exit type but had a zero vector react position provided");
	}
	switch (iParam4)
	{
		case 3:
			DEBUG::_0xF0783374333FD8CE(648, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing combat scenario exit with look intensity: ", func_97(iParam6, 0));
			PED::_0x802092B07E3B1EEA(iParam0, vParam1, iParam6);
			break;
		case 5:
			DEBUG::_0xF0783374333FD8CE(648, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing combat scenario exit with look intensity: ", func_97(iParam6, 0));
			PED::_0x463803429297117C(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			DEBUG::_0xF0783374333FD8CE(648, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing emotional scenario exit with look intensity: ", func_97(iParam6, 0));
			PED::_0x62FDAD5E01D2DD47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			DEBUG::_0xF0783374333FD8CE(136, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing directed scenario exit");
			PED::_0xEC6935EBE0847B90(iParam0, vParam1);
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(648, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing flee scenario exit with look intensity: ", func_97(iParam6, 0));
			PED::_0xEEED8FAFEC331A70(iParam0, vParam1, iParam6);
			break;
		case 1:
			DEBUG::_0xF0783374333FD8CE(136, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing NO specified scenario exit");
			PED::_0xF1C03A5352243A30(iParam0);
			break;
		case 7:
			DEBUG::_0xF0783374333FD8CE(136, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing normal scenario exit");
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(136, 0, "SET_SCENARIO_EXIT_FOR_PED: Ped ", iParam0, " is playing normal scenario exit as choice was undefined");
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
	}
}

bool func_86(var uParam0, int iParam1)
{
	return func_78(uParam0->f_20, iParam1);
}

void func_87(var uParam0, int iParam1)
{
	if (!func_78(uParam0->f_20, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 47, "NET_TRAIN_CLIENT_SET_LOCAL_BIT - ", func_6(*uParam0, 0), " ", func_98(iParam1, 0));
		func_81(&(uParam0->f_20), iParam1);
	}
}

bool func_88(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1139291.f_2[iParam0 /*42*/].f_9 == iVar0 || Global_1139291.f_2[iParam0 /*42*/].f_9 == (iVar0 - 1))
	{
		DEBUG::_0x4DC69742196F818A(648, 84, "NET_TRAIN_MANAGER_GET_DISABLE_DISTANCE_CLEANUP_THIS_FRAME: TRUE ", iVar0, " etrain: ", func_6(iParam0, 0));
		return true;
	}
	DEBUG::_0x4DC69742196F818A(10376, 84, "NET_TRAIN_MANAGER_GET_DISABLE_DISTANCE_CLEANUP_THIS_FRAME: FALSE iThisFrame", iVar0, " g_mpTrainManagerLocalData.trainData[eTrain].iIgnoreDistanceCleanupThisFrame ", Global_1139291.f_2[iParam0 /*42*/].f_9, " etrain: ", func_6(iParam0, 0));
	return false;
}

bool func_89()
{
	return (((SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[3]) && SCRIPTS::IS_THREAD_ACTIVE(Global_1051590.f_16[3], false)) && NETWORK::_0x31DAD2CD6D49546E(Global_1051590.f_16[3])) && NETWORK::_0xB4A25351D79B444C(Global_1051590.f_16[3]) == PLAYER::PLAYER_ID());
}

void func_90(int iParam0, int iParam1)
{
	if (Global_1138768.f_2[iParam0 /*17*/] != iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(10920, 48, "NET_TRAIN_MANAGER_HOST_SET_TRAIN_STATE - ", func_6(iParam0, 0), " from: ", func_77(Global_1138768.f_2[iParam0 /*17*/], 0), " to: ", func_77(iParam1, 0));
		Global_1138768.f_2[iParam0 /*17*/] = iParam1;
	}
}

var func_91(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - Not online.  This will return nothing now.");
		return uVar0;
	}
	if (func_99() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return just you at bit index ", iVar1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return nothing.");
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275959.f_10;
	iVar6 = Global_1275959.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_100());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_100());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_100());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_101(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - k_iNET_PQFLAG_PARTICIPANT but this thread is not a networked script.  Clearing k_iNET_PQFLAG_PARTICIPANT and setting NET_PQFLAG_ACTIVE_PLAYERS.");
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275959.f_154[iVar2]))
		{
			iVar10 = Global_1275959.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_102(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1275959.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_103(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_104(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_93(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_PEDS_IN_VOLUME returned a count of: ", iVar6);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_105(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_106(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							DEBUG::_0xA308F935BDECCEC0(8, 117, "FIND_PEDS_IN_VOLUME: Found a ped!");
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 0, "We found more actors in area than our max count.. some actors might be left out");
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_PEDS_IN_VOLUME only found this many legit peds: ", iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_94(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
		DEBUG::_0x4DC69742196F818A(8, 87, "Deleting volume ");
	}
}

bool func_95(int iParam0, int iParam1)
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
	if (func_78(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_78(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_78(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

char* func_96(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SCEN_EXIT_UNDEFINED";
		case 1:
			return "SCEN_EXIT_INSTANT";
		case 2:
			return "SCEN_EXIT_FLEE";
		case 3:
			return "SCEN_EXIT_COMBAT";
		case 4:
			return "SCEN_EXIT_DIRECTED";
		case 5:
			return "SCEN_EXIT_QUICK";
		case 6:
			return "SCEN_EXIT_EMOTIONAL";
		case 7:
			return "SCEN_EXIT_NORMAL";
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

char* func_97(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "REACT_LOOK_NONE";
		case 1:
			return "REACT_LOOK_LOW";
		case 2:
			return "REACT_LOOK_MEDIUM";
		case 3:
			return "REACT_LOOK_HIGH";
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

char* func_98(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_TRAIN_LOCAL_BIT_IS_ABANDONED";
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

int func_99()
{
	return Global_1051590.f_12;
}

char* func_100()
{
	return "unnamed";
}

int func_101(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_102(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_107(36, iParam0);
}

int func_103(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102630.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_GET_PARENT_STATE invalid playerID, iPlayerID=", iParam0);
		return 26;
	}
	if (Global_1275959.f_22[iParam0])
	{
		return Global_1100880[iParam0 /*53*/].f_1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_GET_STATE - Player ", iParam0, " is not active!");
	return 26;
}

bool func_104(char* sParam0)
{
	if (func_108(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_109(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

bool func_105(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "VALIDATION_CHECKS failed on IS_ENTITY_A_MISSION_ENTITY");
			return false;
		}
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_110(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_106(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_107(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_111(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_112())
	{
		return func_111(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_111(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_108(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_109(char* sParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1275959.f_22[iVar0])
	{
		func_113(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_114(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

int func_110(int iParam0, bool bParam1)
{
	return func_115(iParam0, Global_1893599.f_2, bParam1);
}

bool func_111(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_112()
{
	return Global_1102630.f_3672;
}

void func_113(char* sParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_114(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_114(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_115(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_116(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_117(iParam0, uVar0, iVar1, bParam2);
}

bool func_116(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_21() != -1;
	switch (iParam0)
	{
		case 81:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*uParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*uParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*uParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*uParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*uParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*uParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*uParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*uParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*uParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*uParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*uParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*uParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*uParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*uParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 709;
			}
			else
			{
				*uParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*uParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*uParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*uParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*uParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*uParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*uParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*uParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*uParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*uParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*uParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*uParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*uParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*uParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*uParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*uParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*uParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*uParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*uParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*uParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			DEBUG::_0xA308F935BDECCEC0(40, 138, "Attempting to get regional character bounds for a region that doesn't have them yet ", func_118(iParam0));
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_117(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_119(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(func_120(iVar2)))
		{
			if (func_120(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
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
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
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
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
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
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
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
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
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
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
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
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xD9911C7B5F8CD69C(8, 11, "No definition for current region for GET_REGION_LITERAL_NAME. Region enum ", iParam0);
	return "REGION_INVALID";
	return "REGION_INVALID";
}

int func_119(int iParam0)
{
	if (!func_121(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_NAME - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/];
}

int func_120(int iParam0)
{
	if (!func_121(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 138, "GET_REGIONAL_CHARACTER_PERSCHAR_INDEX - Invalid ", iParam0);
		return 0;
	}
	return Global_1893787[iParam0 /*3*/].f_1;
}

bool func_121(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

