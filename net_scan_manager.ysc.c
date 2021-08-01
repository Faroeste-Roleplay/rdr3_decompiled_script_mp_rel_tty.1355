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
#endregion

void __EntryFunction__()
{
	func_1();
	DEBUG::_0xF0783374333FD8CE(8, 73, "Starting net_scan_manager");
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	DEBUG::_0xF0783374333FD8CE(8, 73, "Terminating net_scan_manager");
	func_5();
}

void func_1()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 73, "NET_SCAN_MANAGER_PROCESS_PRE_GAME");
	iVar0 = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	DEBUG::_0xF0783374333FD8CE(2216, 34, "{ss}", UNK_0x8F77B33B6A34D8BA(), " pre-process took ", (MISC::GET_GAME_TIMER() - iVar0), " ms.");
}

bool func_2()
{
	if (func_11(0, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 73, "NET_SCAN_MANAGER_SHOULD_TERMINATE - KILL_EVENT_CAUGHT");
		return true;
	}
	return false;
}

void func_3()
{
	if (func_12())
	{
		func_13();
	}
	func_14();
}

void func_4()
{
	func_15();
}

void func_5()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_7()
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_16(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_5();
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
					func_5();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_5();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_5();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_5();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_5();
		}
		if (func_17() == 0)
		{
			if (func_18())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_5();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

bool func_8()
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

void func_9()
{
	int iVar0;

	func_19();
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1255496[iVar0 /*10*/].f_1 = TASK::_0xE1C105E6BBA48270();
		iVar0++;
	}
	func_20();
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_5();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_5();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_5();
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
			func_5();
			return;
		}
		DEBUG::_0xF0783374333FD8CE(10408, 8, "WAIT_FOR_FIRST_NETWORK_BROADCAST(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] STILL WAITING (frames: ", iVar9, " ) - ", &Var1);
		BUILTIN::WAIT(0);
	}
}

bool func_11(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_21(Global_1572887, 0), ", so skipping");
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

bool func_12()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051590.f_16[17], false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_scan_manager", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(Global_1051590.f_16[17]);
}

void func_13()
{
	int iVar0;

	while (iVar0 < 5)
	{
		func_22(Global_1254516.f_146);
		Global_1254516.f_146++;
		if (Global_1254516.f_146 > 4)
		{
			Global_1254516.f_146 = 0;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;

	while (iVar0 < 3)
	{
		func_23(Global_1255496.f_74);
		Global_1255496.f_74++;
		if (Global_1255496.f_74 > 4)
		{
			Global_1255496.f_74 = 0;
		}
		iVar0++;
	}
	func_24();
}

void func_15()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 21)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1255496.f_51[iVar0]))
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 73, "NET_SCAN_MANAGER_CLEANUP_AMBIENT_SCANNER_VOLUMES - Removing ambient scanner volume ", func_25(iVar0, 0));
			VOLUME::_DELETE_VOLUME(Global_1255496.f_51[iVar0]);
		}
		iVar0++;
	}
}

char* func_16(int iParam0)
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

int func_17()
{
	return Global_1572887.f_13;
}

bool func_18()
{
	return Global_1051590.f_8;
}

void func_19()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1254516, 147, 7);
	func_26(NETWORK::_0xBA24095EA96DFE17(&Global_1254516), 147, "g_mpScanManagerHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1254663, 833, 8);
	func_27(NETWORK::_0x690806BC83BC8CA2(&(Global_1254663[0 /*26*/])), 833, "g_mpScanManagerPlayerData");
}

void func_20()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 73, "NET_SCAN_MANAGER_CREATE_VOLUMES - Creating volumes");
	Global_1255496.f_51[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2661.152f, -1484.681f, 46.283f, 0f, 0f, 0f, 100f, 13.5f, 10.25f, "BadTiles_SaintDenisTrainTracks");
	Global_1255496.f_51[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3523.964f, 817.257f, 42f, 0f, 0f, 80.1952f, 2275.5f, 610.5f, 200f, "BadTiles_Annesburg");
	Global_1255496.f_51[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3734.058f, -840.8746f, 42f, 0f, 0f, 105.9452f, 1417.75f, 1235.25f, 200f, "BadTiles_Siska");
	Global_1255496.f_51[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2772.144f, -2239.2f, 42f, 0f, 0f, 27.36972f, 3500f, 736.5f, 200f, "BadTiles_SaintDenisBay");
	Global_1255496.f_51[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1.913f, -2816.89f, 42f, 0f, 0f, 0.36973f, 2529.75f, 913.25f, 200f, "BadTiles_SouthFlatIronLake");
	Global_1255496.f_51[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1113.942f, -2260.829f, 42f, 0f, 0f, 0f, 283.25f, 420f, 200f, "BadTiles_QuakersCove");
	Global_1255496.f_51[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(458.9158f, -1037.307f, 52.07294f, 0f, 0f, 0f, 160f, 160f, 30f, "BadTiles_ScarlettMeadowsTreelessIsland");
	Global_1255496.f_51[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3094.862f, -2471.42f, 59.01997f, 0f, 0f, -10f, 19f, 5f, 4f, "BadTiles_ArmadilloCliff");
	Global_1255496.f_51[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-221.1699f, 1336.444f, 163.4222f, 0f, 0f, 0f, 85.8828f, 114.2864f, 61.82489f, "RelocateOrigin_DakotaRiverCanyon");
	Global_1255496.f_51[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(461.5739f, 1603.823f, 196.7019f, 0f, 0f, 0f, 100f, 125f, 50f, "RelocateOrigin_DakotaRiverCanyonEast");
	Global_1255496.f_51[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5187.701f, -2106.909f, 24.13687f, 0f, 0f, 6.750001f, 200f, 140f, 100f, "RelocateOrigin_RathskellerFork");
	Global_1255496.f_51[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-6695.072f, -3567.247f, -22.21381f, 0f, 0f, 30.49729f, 150f, 100f, 50f, "RelocateOrigin_CoronadoNorth");
	Global_1255496.f_51[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-6569.904f, -3773.847f, -12.74948f, 0f, 0f, 16.91815f, 280f, 100f, 50f, "RelocateOrigin_CoronadoSouth");
	Global_1255496.f_51[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3411.939f, -1815.859f, 56.37196f, 0f, 0f, 0f, 300f, 100f, 50f, "RelocateOrigin_HennigansSteadRailBridge");
	Global_1255496.f_51[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2640.393f, 700.1597f, 172.832f, 0f, 0f, 0f, 80f, 80f, 80f, "RelocateOrigin_HangingDogRanchCave");
	Global_1255496.f_51[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(435.5826f, 1784.918f, 190.0176f, 0f, 0f, -10.5f, 191f, 43.5f, 20f, "RelocateOrigin_BachhusBridge");
	Global_1255496.f_51[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-220.0916f, 1302.687f, 177.1935f, 0f, 0f, -44.74999f, 750f, 2500f, 345f, "CanyonArea_DakotaRiverCanyon");
	Global_1255496.f_51[18] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1142.307f, 1793.674f, 194.5337f, 0f, 0f, 24.87119f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelEast");
	Global_1255496.f_51[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1006.591f, 1730.76f, 194.5337f, 0f, 0f, 24.87119f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelWest");
	Global_1255496.f_51[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2119.513f, 79.23312f, 253.9226f, 0f, 0f, 0f, 100f, 103.5f, 40f, "UnscannableVolume_MountShannCave");
	Global_1255496.f_51[20] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2720.393f, 700.1597f, 172.832f, 0f, 0f, 0f, 80f, 80f, 80f, "UnscannableVolume_HangingDogRanchCave");
	Global_1255496.f_51[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2269.427f, 1091.326f, 56.73091f, 0f, 0f, 0f, 100f, 110f, 80f, "UnscannableVolume_ElysianPoolCave");
}

char* func_21(int iParam0, int iParam1)
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

void func_22(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;

	func_28(iParam0);
	switch (Global_1254516[iParam0 /*29*/])
	{
		case 0:
			if (func_30(iParam0, 2, func_29(iParam0)))
			{
				if (func_30(iParam0, 64, func_29(iParam0)))
				{
					DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_HOST_SET_SCAN_FAILED - No players were within range for ", func_31(iParam0), ". Failing the scan as no players are nearby the original position of ", MISC::_0x6C4DBF553885F9EB(Global_1254516[iParam0 /*29*/].f_12.f_1));
					func_32(iParam0, 1);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(168, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " failed to find a valid position. Setting that the scan attempt failed");
					func_33(iParam0, 0);
				}
			}
			else if (func_34(iParam0, 4, func_29(iParam0)))
			{
				vVar0 = { func_35(iParam0) };
				if (func_36(vVar0))
				{
					DEBUG::_0xA308F935BDECCEC0(168, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " returned that it was successful, but an invalid point was found. Setting that the scan attempt failed");
					func_33(iParam0, 0);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(15016, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " found a valid scan position. vOriginalPosition = ", MISC::_0x6C4DBF553885F9EB(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPosition = ", &vVar0);
					Global_1254516[iParam0 /*29*/].f_22 = { vVar0 };
					func_37(iParam0, 1);
				}
			}
			break;
		case 1:
			if (func_38(Global_1254516[iParam0 /*29*/].f_22, &iVar3))
			{
				vVar4 = { func_39(iVar3) };
				if (!func_36(vVar4))
				{
					Global_1254516[iParam0 /*29*/].f_22 = { vVar4 };
					DEBUG::_0xA308F935BDECCEC0(10920, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " using a pre-authored point of ", MISC::_0x6C4DBF553885F9EB(Global_1254516[iParam0 /*29*/].f_22), " to spawn at, as the point found by the scanner was on a bad tile inside ", func_25(iVar3, 0));
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(2728, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " is unable to find a valid backup position for bad tile volume ", func_25(iVar3, 0), ". Setting that the scan attempt failed.");
					func_33(iParam0, 0);
					return;
				}
			}
			if (func_40(Global_1254516[iParam0 /*29*/].f_12.f_1, Global_1254516[iParam0 /*29*/].f_22))
			{
				Global_1254516[iParam0 /*29*/].f_12.f_4 = { func_41(Global_1254516[iParam0 /*29*/].f_12.f_1 - Global_1254516[iParam0 /*29*/].f_22) };
				Global_1254516[iParam0 /*29*/].f_12.f_8 = 35f;
				func_42(iParam0, 48);
				DEBUG::_0xA308F935BDECCEC0(15272, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " FAILED. Coords cross over an impassable canyon. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPosition = ", &(Global_1254516[iParam0 /*29*/].f_22));
				func_33(iParam0, 0);
				return;
			}
			func_37(iParam0, 2);
			break;
		case 2:
			if (func_30(iParam0, 8, func_29(iParam0)))
			{
				if (func_34(iParam0, 16, func_29(iParam0)))
				{
					DEBUG::_0xA308F935BDECCEC0(15272, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " FAILED, players see spawn. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vSpawnPos = ", &(Global_1254516[iParam0 /*29*/].f_22));
					func_33(iParam0, 0);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(15272, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN - ", func_31(iParam0), " found good spawn point, returning TRUE. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPosition = ", &(Global_1254516[iParam0 /*29*/].f_22));
					func_43(iParam0);
					return;
				}
			}
			break;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = func_29(iParam0);
	if (func_44(iParam0, -1) != iVar0)
	{
		func_45(iParam0);
	}
	switch (Global_1254516[iParam0 /*29*/])
	{
		case 0:
			if (!func_46(iParam0, 2, -1) && !func_46(iParam0, 4, -1))
			{
				if (!func_47(Global_1254516[iParam0 /*29*/].f_12.f_1))
				{
					func_48(iParam0, 64);
					DEBUG::_0xA308F935BDECCEC0(179112, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " FAILED, NET_SCAN_HAS_AMBIENT_SCANNER_LOADED_AROUND_COORD was unsuccessful. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPosition = ", &(Global_1255496[iParam0 /*10*/].f_3), ", eScanType = ", func_49(Global_1254516[iParam0 /*29*/].f_12, 0));
					func_48(iParam0, 2);
					return;
				}
				Global_1255496[iParam0 /*10*/].f_6 = { Global_1254516[iParam0 /*29*/].f_12.f_4 };
				func_48(iParam0, 1);
				if (!func_50(Global_1254516[iParam0 /*29*/].f_12.f_1, &(Global_1255496[iParam0 /*10*/]), &bVar1, Global_1254516[iParam0 /*29*/].f_12, 0, Global_1254516[iParam0 /*29*/].f_12.f_8, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, Global_1254516[iParam0 /*29*/].f_12.f_7))
				{
					if (bVar1)
					{
						DEBUG::_0xA308F935BDECCEC0(179112, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " FAILED, SCAN_GROUND_COORD was unsuccessful. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPos = ", &(Global_1255496[iParam0 /*10*/].f_3), ", eScanType = ", func_49(Global_1254516[iParam0 /*29*/].f_12, 0));
						func_48(iParam0, 2);
					}
				}
				else
				{
					Global_1255496[iParam0 /*10*/].f_3.f_2 = (Global_1255496[iParam0 /*10*/].f_3.f_2 + 10f);
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Global_1255496[iParam0 /*10*/].f_3, &fVar4, false))
					{
						DEBUG::_0xA308F935BDECCEC0(179112, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - Scan ", func_31(iParam0), " FAILED, didn't find ground Z. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPos = ", &(Global_1255496[iParam0 /*10*/].f_3), ", eScanType = ", func_49(Global_1254516[iParam0 /*29*/].f_12, 0));
						func_48(iParam0, 2);
						return;
					}
					else if (fVar4 == 0f)
					{
						DEBUG::_0xA308F935BDECCEC0(179112, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - Scan ", func_31(iParam0), " FAILED, ground Z was 0. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPos = ", &(Global_1255496[iParam0 /*10*/].f_3), ", eScanType = ", func_49(Global_1254516[iParam0 /*29*/].f_12, 0));
						func_48(iParam0, 2);
						return;
					}
					if (!PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Global_1255496[iParam0 /*10*/].f_3, Global_1255496[iParam0 /*10*/].f_3))
					{
						DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " FAILED, no navmesh is loaded at point ", MISC::_0x6C4DBF553885F9EB(Global_1255496[iParam0 /*10*/].f_3));
						func_48(iParam0, 2);
						return;
					}
					Global_1255496[iParam0 /*10*/].f_3.f_2 = fVar4;
					DEBUG::_0xA308F935BDECCEC0(179112, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " SUCCESSFUL. vOriginalPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1), ", vFoundPos = ", &(Global_1255496[iParam0 /*10*/].f_3), ", eScanType = ", func_49(Global_1254516[iParam0 /*29*/].f_12, 0));
					Global_1254663[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/].f_2 = { Global_1255496[iParam0 /*10*/].f_3 };
					func_48(iParam0, 4);
				}
			}
			break;
		case 2:
			if (!func_46(iParam0, 8, -1))
			{
				if (!func_51(iParam0, 4))
				{
					fVar3 = BUILTIN::VDIST(Global_34, Global_1254516[iParam0 /*29*/].f_22);
					if (fVar3 < 18f)
					{
						DEBUG::_0xA308F935BDECCEC0(2472, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " failed, the player is ", fVar3, " away from the spawn position");
						func_48(iParam0, 16);
						func_48(iParam0, 8);
						return;
					}
				}
				if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), Global_1254516[iParam0 /*29*/].f_22, 1.5f, 100f))
				{
					if (!func_46(iParam0, 32, -1))
					{
						Global_1255496[iParam0 /*10*/].f_9 = GRAPHICS::CREATE_TRACKED_POINT();
						if (Global_1255496[iParam0 /*10*/].f_9 != 0 || Global_1255496[iParam0 /*10*/].f_9 != -1)
						{
							GRAPHICS::SET_TRACKED_POINT_INFO(Global_1255496[iParam0 /*10*/].f_9, Global_1254516[iParam0 /*29*/].f_22 + Vector(0.5f, 0f, 0f), 1f);
							func_48(iParam0, 32);
						}
						else
						{
							DEBUG::_0x4DC69742196F818A(168, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " failed to create tracked index.");
							func_48(iParam0, 8);
							return;
						}
					}
					iVar2 = GRAPHICS::_0xDFE332A5DA6FE7C9(Global_1255496[iParam0 /*10*/].f_9);
					if (iVar2 != -1)
					{
						if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1255496[iParam0 /*10*/].f_9))
						{
							func_48(iParam0, 16);
						}
						DEBUG::_0xA308F935BDECCEC0(2216, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " has ", iVar2, " pixels visible for entity.");
						if ((Global_1255496[iParam0 /*10*/].f_9 != 0 && Global_1255496[iParam0 /*10*/].f_9 != -1) && GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1255496[iParam0 /*10*/].f_9))
						{
							GRAPHICS::DESTROY_TRACKED_POINT(Global_1255496[iParam0 /*10*/].f_9);
						}
						func_48(iParam0, 8);
					}
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(168, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_SCAN - ", func_31(iParam0), " sphere not visible for entity.");
					func_48(iParam0, 8);
				}
			}
			break;
	}
}

void func_24()
{
	if (!func_52())
	{
		return;
	}
	if (func_53(Global_1255496.f_75))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 73, "NET_SCAN_MANAGER_CLIENT_UPDATE_PENDING_SCANS - Clearing ", func_54(), " because the scan has started");
		func_55();
		return;
	}
	if (!func_56(Global_1255496.f_86))
	{
		func_57(&(Global_1255496.f_86));
	}
	if (func_58(Global_1255496.f_86) > 1000)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 73, "NET_SCAN_MANAGER_CLIENT_UDPATE_PENDING_SCANS - Clearing ", func_54(), " because the pending scan has not started after ", 1000);
		func_55();
		return;
	}
}

char* func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_SCAN_MANAGER_AMBIENT_SCANNER_VOLUME_INVALID";
		case 0:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_SAINT_DENIS_TRAIN_TRACKS";
		case 1:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_SAINT_DENIS_BAY";
		case 2:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_SISKA";
		case 3:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_ANNESBURG";
		case 4:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_SOUTH_FLAT_IRON_LAKE";
		case 5:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_QUAKERS_COVE";
		case 6:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_SCARLETT_MEADOWS_TREELESS_ISLAND";
		case 7:
			return "NET_SCAN_MANAGER_BAD_TILE_VOLUME_ARMADILLO_CLIFF";
		case 8:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_DAKOTA_RIVER_CANYON";
		case 9:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_DAKOTA_RIVER_CANYON_EAST";
		case 10:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_RATHSKELLER_FORK";
		case 11:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_SEA_OF_CORONADO_SOUTH";
		case 12:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_SEA_OF_CORONADO_NORTH";
		case 13:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_HENNIGANS_STEAD_RAIL_BRIDGE";
		case 14:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_HANGING_DOG_RANCH_CAVE";
		case 15:
			return "NET_SCAN_MANAGER_RELOCATE_SCAN_ORIGIN_VOLUME_LAST";
		case 16:
			return "NET_SCAN_MANAGER_CANYON_AREA_VOLUME_DAKOTA_RIVER_CANYON";
		case 17:
			return "NET_SCAN_MANAGER_UNSCANNABLE_VOLUME_FIRST";
		case 18:
			return "NET_SCAN_MANAGER_UNSCANNABLE_VOLUME_OCREAGHS_RUN_TRAIN_TUNNEL_EAST";
		case 19:
			return "NET_SCAN_MANAGER_UNSCANNABLE_VOLUME_MOUNT_SHANN_CAVE";
		case 20:
			return "NET_SCAN_MANAGER_UNSCANNABLE_VOLUME_HANGING_DOG_RANCH_CAVE";
		case 21:
			return "NET_SCAN_MANAGER_UNSCANNABLE_VOLUME_ELYSIAN_POOL";
		case 22:
			return "NET_SCAN_MANAGER_VOLUME_MAX";
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

int func_26(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_27(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_28(int iParam0)
{
	if (Global_1254516[iParam0 /*29*/] == -1)
	{
		return;
	}
	if (!func_56(Global_1254516[iParam0 /*29*/].f_27))
	{
		func_57(&(Global_1254516[iParam0 /*29*/].f_27));
	}
	if (Global_1254516[iParam0 /*29*/] == 4 || Global_1254516[iParam0 /*29*/] == 3)
	{
		if (func_58(Global_1254516[iParam0 /*29*/].f_27) > 5000)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(2216, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN_EXPIRATION - Killing ", func_31(iParam0), " because the thread that requested it has not checked the results within ", 5000, " ms");
			func_59(iParam0);
			return;
		}
	}
	else if (func_58(Global_1254516[iParam0 /*29*/].f_27) > 10000)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2216, 73, "NET_SCAN_MANAGER_HOST_UPDATE_SCAN_EXPIRATION - ", func_31(iParam0), " is cancelling because it has not finished scanning within ", 10000, " ms");
		func_32(iParam0, 3);
		return;
	}
}

int func_29(int iParam0)
{
	return Global_1254516[iParam0 /*29*/].f_1.f_2;
}

bool func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (!func_46(iParam0, iParam1, iVar0) || func_44(iParam0, iVar0) != iParam2))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

var func_31(int iParam0)
{
	struct<11> Var0;
	char cVar11[64];

	Var0 = { Global_1254516[iParam0 /*29*/].f_1 };
	StringCopy(&cVar11, "scan ", 64);
	StringConCat(&cVar11, &(Var0.f_3), 64);
	StringConCat(&cVar11, " : ", 64);
	StringIntConCat(&cVar11, iParam0, 64);
	StringConCat(&cVar11, " : ", 64);
	StringConCat(&cVar11, UNK_0x4379B6FA65D55295(Var0), 64);
	StringConCat(&cVar11, " ", 64);
	StringIntConCat(&cVar11, Var0.f_1, 64);
	StringConCat(&cVar11, " : ", 64);
	StringIntConCat(&cVar11, Var0.f_2, 64);
	return func_60(&cVar11);
}

void func_32(int iParam0, int iParam1)
{
	func_57(&(Global_1254516[iParam0 /*29*/].f_27));
	func_61(iParam0, iParam1);
	func_37(iParam0, 4);
}

void func_33(int iParam0, int iParam1)
{
	if (Global_1254516[iParam0 /*29*/].f_26 > 0)
	{
		Global_1254516[iParam0 /*29*/].f_26 = (Global_1254516[iParam0 /*29*/].f_26 - 1);
	}
	DEBUG::_0xA308F935BDECCEC0(168, 73, "NET_SCAN_MANAGER_HOST_HANDLE_SCAN_ATTEMPT_FAILED - ", func_31(iParam0), " failed the last attempt. Remaining attempts: ", Global_1254516[iParam0 /*29*/].f_26);
	if (Global_1254516[iParam0 /*29*/].f_26 > 0)
	{
		func_62(iParam0);
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(168, 73, "NET_SCAN_MANAGER_HOST_HANDLE_SCAN_ATTEMPT_FAILED - ", func_31(iParam0), " has used up all of its attempts. Going to the failed state.");
		func_32(iParam0, iParam1);
	}
}

bool func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_46(iParam0, iParam1, iVar0)) && func_44(iParam0, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_35(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_46(iParam0, 4, iVar0)) && func_44(iParam0, iVar0) == func_29(iParam0))
		{
			return Global_1254663[iVar0 /*26*/][iParam0 /*5*/].f_2;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

bool func_36(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_37(int iParam0, int iParam1)
{
	if (Global_1254516[iParam0 /*29*/] != iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_HOST_GO_TO_SCAN_STATE: Host is moving to state ", func_63(iParam1, 0), " for ", func_31(iParam0));
		Global_1254516[iParam0 /*29*/] = iParam1;
	}
}

bool func_38(vector3 vParam0, var uParam3)
{
	*uParam3 = 0;
	while (*uParam3 <= 7)
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1255496.f_51[*uParam3], vParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_IS_COORD_IN_BAD_TILE_VOLUME - ", MISC::_0x6C4DBF553885F9EB(vParam0), " is inside of ", func_25(*uParam3, 0));
			return true;
		}
		*uParam3++;
	}
	return false;
}

Vector3 func_39(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return 2761.631f, -1374.273f, 46.4021f;
				case 1:
					return 2584.707f, -1408.874f, 46.1841f;
				case 2:
					return 2657.596f, -1359.973f, 48.7346f;
				case 3:
					return 2591.586f, -1439.41f, 46.5108f;
				default:
					break;
			}
			break;
		case 6:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					return 692.1992f, -1059.64f, 53.6229f;
				case 1:
					return 683.2755f, -1089.386f, 54.6198f;
				case 2:
					return 680.8776f, -1030.875f, 47.1735f;
				case 3:
					return 665.3676f, -1133.833f, 48.3046f;
				case 4:
					return 682.7866f, -1116.154f, 51.5915f;
				case 5:
					return 682.3309f, -1059.608f, 53.6422f;
				default:
					break;
			}
			break;
		case 7:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return -3097.274f, -2489.697f, 70.0502f;
				case 1:
					return -3124.842f, -2493.998f, 70.9493f;
				case 2:
					return -3118.868f, -2500.998f, 70.9476f;
				case 3:
					return -3090.036f, -2494.092f, 72.052f;
				default:
					break;
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 73, "NET_SCAN_MANAGER_GET_BACKUP_SPAWN_POSITION_FOR_BAD_TILE_VOLUME - Did not find a valid bad scanner volume when looking for backup positions. Passed in bad scanner volume is ", func_25(iParam0, 0));
	return 0f, 0f, 0f;
}

bool func_40(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	int iVar9;

	if (!func_64(vParam3))
	{
		return false;
	}
	vVar4 = { vParam3 - vParam0 };
	vVar4 = { func_41(vVar4) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, true);
	fVar8 = (fVar7 / 6f);
	iVar9 = 1;
	while (iVar9 <= 5)
	{
		vVar0 = { vParam0 + vVar4 * Vector(fVar8, fVar8, fVar8) * FtoV(IntToFloat(iVar9)) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar3, false))
		{
			if (MISC::ABSF((vVar0.z - fVar3)) > 30f)
			{
				DEBUG::_0xA308F935BDECCEC0(2440, 73, "NET_SCAN_MANAGER_DO_COORDS_CROSS_IMPASSABLE_CANYON - Height difference at probe point ", iVar9, " is ", (vVar0.z - fVar3), ". The points cross an impassable canyon");
				return true;
			}
		}
		iVar9++;
	}
	return false;
}

Vector3 func_41(vector3 vParam0)
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

void func_42(int iParam0, int iParam1)
{
	if (Global_1254516[iParam0 /*29*/].f_12 != iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_HOST_SET_SCAN_TYPE - Setting ", func_31(iParam0), " type to ", func_49(iParam1, 0));
		Global_1254516[iParam0 /*29*/].f_12 = iParam1;
	}
}

void func_43(int iParam0)
{
	func_57(&(Global_1254516[iParam0 /*29*/].f_27));
	func_37(iParam0, 3);
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return Global_1254663[iParam1 /*26*/][iParam0 /*5*/].f_1;
}

void func_45(int iParam0)
{
	var uVar0;

	DEBUG::_0x4DC69742196F818A(2216, 73, "NET_SCAN_MANAGER_CLIENT_SYNC_SCAN - Syncing ", func_31(iParam0), ". Host request ID ", func_29(iParam0), ". Client request ID ", func_44(iParam0, -1));
	if ((Global_1255496[iParam0 /*10*/].f_9 != 0 && Global_1255496[iParam0 /*10*/].f_9 != -1) && GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1255496[iParam0 /*10*/].f_9))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Global_1255496[iParam0 /*10*/].f_9);
	}
	Global_1255496[iParam0 /*10*/].f_9 = 0;
	if (func_46(iParam0, 1, -1))
	{
		func_65(&(Global_1255496[iParam0 /*10*/]), 1, 0);
		MISC::_COPY_MEMORY(&(Global_1255496[iParam0 /*10*/]), &uVar0, 9);
		func_66(iParam0, 1);
	}
	Global_1255496[iParam0 /*10*/].f_2 = (func_67(iParam0) - Global_1254516[iParam0 /*29*/].f_26);
	func_68(iParam0, func_29(iParam0));
	Global_1254663[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/] = 0;
	DEBUG::_0xA308F935BDECCEC0(2216, 73, "NET_SCAN_MANAGER_CLIENT_SYNC_SCAN - Synced ", func_31(iParam0), ". Current Number of Attempts: ", Global_1255496[iParam0 /*10*/].f_2, " -- Remaining Attempts: ", Global_1254516[iParam0 /*29*/].f_26);
}

bool func_46(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return func_69(Global_1254663[iParam2 /*26*/][iParam0 /*5*/], iParam1);
}

bool func_47(vector3 vParam0)
{
	int iVar0;
	var uVar1;

	uVar1 = TASK::_0x74F0209674864CBD();
	if (TASK::_0xFE5D28B9B7837CC1(uVar1, vParam0))
	{
		iVar0 = 1;
	}
	TASK::_0xBEEFBB608D2AA68A(uVar1);
	return iVar0;
}

void func_48(int iParam0, int iParam1)
{
	if (!func_46(iParam0, iParam1, -1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_CLIENT_SET_SCAN_BIT: Setting bit ", func_70(iParam1, 0), " for ", func_31(iParam0));
		func_71(&(Global_1254663[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/]), iParam1);
	}
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "SCAN_INVALID";
		case 0:
			return "SCAN_PLANT";
		case 1:
			return "SCAN_PED";
		case 2:
			return "SCAN_CAMP";
		case 3:
			return "SCAN_SMALL_CAMP";
		case 4:
			return "SCAN_BNTY_CAMP_INNER";
		case 5:
			return "SCAN_BNTY_CAMP_MID";
		case 6:
			return "SCAN_BNTY_CAMP_OUTER";
		case 7:
			return "SCAN_BNTY_TARGET";
		case 8:
			return "SCAN_BNTY_GUARDS";
		case 9:
			return "SCAN_BNTY_HORSES";
		case 10:
			return "SCAN_NET_CAMP";
		case 11:
			return "SCAN_WATER";
		case 12:
			return "SCAN_HORSE";
		case 13:
			return "SCAN_HORSE_LENIENT";
		case 14:
			return "SCAN_ROAD_FAR";
		case 15:
			return "SCAN_ROAD_MID";
		case 16:
			return "SCAN_ROADBLOCK";
		case 17:
			return "SCAN_TOWN_MOB";
		case 18:
			return "SCAN_SECLUDED_CAMP";
		case 19:
			return "SCAN_PED_NEARBY";
		case 20:
			return "SCAN_HUNTER_ANIMAL";
		case 21:
			return "SCAN_TRAPPED_WOMAN_POSSE";
		case 22:
			return "SCAN_SAVAGE_CAMP_REINFORCEMENTS";
		case 23:
			return "SCAN_LARGE_BODY_WATER";
		case 24:
			return "SCAN_MEDIUM_BODY_WATER";
		case 25:
			return "SCAN_SMALL_BODY_WATER";
		case 26:
			return "SCAN_MOUNTED_CHASE_DROP";
		case 27:
			return "SCAN_MOUNTAIN_MEN_ROAD";
		case 28:
			return "SCAN_AMBUSH_RIDER_PED";
		case 29:
			return "SCAN_AMBUSH_HIDDEN_PED";
		case 30:
			return "SCAN_RE_WATER";
		case 31:
			return "SCAN_RUSTLING_EVENT";
		case 32:
			return "SCAN_FMA_PASS_THE_PARCEL_WAGON";
		case 33:
			return "SCAN_FMA_PENNED_IN";
		case 34:
			return "SCAN_TNRB_TRACKS_AMBUSH";
		case 35:
			return "SCAN_REFLO_CHASERS";
		case 36:
			return "SCAN_NET_TRAIN_JOB_AMBUSH";
		case 37:
			return "SCAN_NET_TRAIN_JOB_AMBUSH_WAVE";
		case 38:
			return "SCAN_NET_TRAIN_JOB_AMBUSH_WAVE_SPECIAL";
		case 39:
			return "SCAN_NET_TRAIN_JOB_CLUSTER";
		case 40:
			return "SCAN_NET_TRAIN_JOB_FOLLOW";
		case 41:
			return "SCAN_NET_TRAIN_JOB_SNIPE";
		case 42:
			return "SCAN_NET_FETCH_MOUNTED_CHASER_WAVE";
		case 43:
			return "SCAN_NET_FETCH_WATER_CHASER_WAVE";
		case 44:
			return "SCAN_NET_FETCH_CLUSTER";
		case 45:
			return "SCAN_NET_FETCH_SINGLE_PED";
		case 46:
			return "SCAN_NET_FETCH_BOUNTY_HUNTER";
		case 47:
			return "SCAN_NET_FETCH_ORIGIN_OFFSET";
		case 48:
			return "SCAN_NET_FETCH_WEDGE";
		case 49:
			return "SCAN_NET_FETCH_CAMP_RAID_INITIAL";
		case 50:
			return "SCAN_NET_LEGENDARY_WOLF";
		case 51:
			return "SCAN_NET_LEGENDARY_BIG_CAT";
		case 52:
			return "SCAN_NET_LEGENDARY_ANIMAL_CLOSE";
		case 53:
			return "SCAN_MOCAP";
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

bool func_50(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*uParam3)
	{
		case 0:
			if (uParam3->f_2 > 4)
			{
				DEBUG::_0x4DC69742196F818A(8, 192, "scanData.iSpawnAttempts > MAX_SCAN_ATTEMPTS");
				*iParam4 = 1;
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(8, 192, "SCAN_GROUND_COORD: scan count = ", uParam3->f_2);
			uParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_72(&(uParam3->f_1), uParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_73(&(uParam3->f_1), iParam5, vParam0);
				if (!func_36(uParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_41(uParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(uParam3->f_1);
			}
			*uParam3 = 3;
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(8, 192, "SCAN_RESULTS");
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
				DEBUG::_0x4DC69742196F818A(8, 192, "Scan became invalid? Treat it like failure");
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(uParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD failed to find valid terrain");
					if (bParam6 && uParam3->f_2 < 4)
					{
						DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD is going to re-scan");
						uParam3->f_2++;
						*uParam3 = 0;
					}
					else
					{
						DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD has failed with no re-scan");
						*iParam4 = 1;
					}
					break;
				case 3:
					DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD has found a valid location");
					uParam3->f_3 = { TASK::_0x865732725536EE39(&(uParam3->f_1)) };
					*uParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_51(int iParam0, int iParam1)
{
	return func_74(Global_1254516[iParam0 /*29*/].f_12.f_9, iParam1);
}

bool func_52()
{
	return Global_1255496.f_75.f_1 != -1;
}

bool func_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_75(&uParam0, &(Global_1254516[iVar0 /*29*/].f_1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_54()
{
	char cVar0[64];

	if (!func_52())
	{
		return func_76("no pending scan", joaat("COLOR_PURE_WHITE"));
	}
	StringCopy(&cVar0, "pending scan ", 64);
	StringConCat(&cVar0, &(Global_1255496.f_75.f_3), 64);
	StringConCat(&cVar0, " : ", 64);
	StringConCat(&cVar0, UNK_0x4379B6FA65D55295(Global_1255496.f_75), 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, Global_1255496.f_75.f_1, 64);
	return func_60(&cVar0);
}

void func_55()
{
	vector3 vVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 73, "NET_SCAN_MANAGER_CLIENT_CLEAR_PENDING_SCAN - Clearing ", func_54());
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	MISC::_COPY_MEMORY(&(Global_1255496.f_75), &vVar0, 11);
	func_77(&(Global_1255496.f_86));
}

bool func_56(int iParam0)
{
	return iParam0 != 0;
}

void func_57(var uParam0)
{
	*uParam0 = Global_1275959.f_21;
}

int func_58(int iParam0)
{
	return (Global_1275959.f_21 - iParam0) * 1000;
}

void func_59(int iParam0)
{
	struct<23> Var0;

	DEBUG::_0xA308F935BDECCEC0(168, 73, "NET_SCAN_MANAGER_HOST_RESET_SCAN - ", func_31(iParam0), " is being reset");
	UNK_0x355E72323AEE83CC(73, 6);
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_12 = -1;
	Var0.f_22.f_3 = -1;
	MISC::_COPY_MEMORY(&(Global_1254516[iParam0 /*29*/]), &Var0, 29);
	func_77(&(Global_1254516[iParam0 /*29*/].f_27));
}

char[] func_60(char[4] cParam0)
{
	return cParam0;
}

void func_61(int iParam0, int iParam1)
{
	if (func_78(iParam0) != -1)
	{
		DEBUG::_0x83407B92D46F25C3(10920, 73, "NET_SCAN_MANAGER_HOST_SET_SCAN_FAILURE_REASON - ", func_31(iParam0), " already has a failure reason of ", func_79(func_78(iParam0), 0), ", but attempting to set its failure reason to ", func_79(iParam1, 0));
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_HOST_SET_SCAN_FAILURE_REASON - Setting that ", func_31(iParam0), " has a failure reason of ", func_79(iParam1, 0));
	Global_1254516[iParam0 /*29*/].f_22.f_3 = iParam1;
}

void func_62(int iParam0)
{
	func_80(iParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 65536));
	if (func_51(iParam0, 2))
	{
		if (Global_1254516[iParam0 /*29*/].f_26 < func_67(iParam0))
		{
			func_81(iParam0, 2);
			func_82(iParam0);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(936, 73, "NET_SCAN_MANAGER_HOST_INIT_SCAN_ATTEMPT - ", func_31(iParam0), " only checking LOS. vPosition = ", &(Global_1254516[iParam0 /*29*/].f_12.f_1));
			Global_1254516[iParam0 /*29*/].f_22 = { Global_1254516[iParam0 /*29*/].f_12.f_1 };
			func_37(iParam0, 2);
		}
	}
	else if (Global_1254516[iParam0 /*29*/].f_26 == func_67(iParam0))
	{
		func_82(iParam0);
	}
	else
	{
		func_37(iParam0, 0);
	}
}

char* func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_SCAN_MANAGER_SCAN_STATE_INVALID";
		case 0:
			return "NET_SCAN_MANAGER_SCAN_STATE_SCANNING";
		case 1:
			return "NET_SCAN_MANAGER_SCAN_STATE_VALIDATE_SCAN_POSITION";
		case 2:
			return "NET_SCAN_MANAGER_SCAN_STATE_LOS";
		case 3:
			return "NET_SCAN_MANAGER_SCAN_STATE_PASSED";
		case 4:
			return "NET_SCAN_MANAGER_SCAN_STATE_FAILED";
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

bool func_64(vector3 vParam0)
{
	int iVar0;

	iVar0 = 16;
	while (iVar0 <= 16)
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1255496.f_51[iVar0], vParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_IS_COORD_IN_IMPASSABLE_CANYON_VOLUME - ", MISC::_0x6C4DBF553885F9EB(vParam0), " is inside of ", func_25(iVar0, 0));
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_65(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_66(int iParam0, int iParam1)
{
	if (func_46(iParam0, iParam1, -1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_CLIENT_CLEAR_SCAN_BIT - Clearing bit ", func_70(iParam1, 0), " for ", func_31(iParam0));
		func_83(&(Global_1254663[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/]), iParam1);
	}
}

int func_67(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	if (func_51(iParam0, 1))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_68(int iParam0, int iParam1)
{
	if (Global_1254663[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/].f_1 != iParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 73, "NET_SCAN_MANAGER_CLIENT_SET_SCAN_REQUEST_ID - Setting request ID for ", func_31(iParam0), " to ", iParam1);
		Global_1254663[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/].f_1 = iParam1;
	}
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_SCAN_MANAGER_SCAN_BIT_SCAN_CREATED";
		case 2:
			return "NET_SCAN_MANAGER_SCAN_BIT_SCAN_FAILED";
		case 4:
			return "NET_SCAN_MANAGER_SCAN_BIT_SCAN_SUCCESSFUL";
		case 8:
			return "NET_SCAN_MANAGER_SCAN_BIT_LOS_CHECKED";
		case 16:
			return "NET_SCAN_MANAGER_SCAN_BIT_CAN_SEE_SPAWN";
		case 32:
			return "NET_SCAN_MANAGER_SCAN_BIT_TRACKED_POINT_CREATED";
		case 64:
			return "NET_SCAN_MANAGER_SCAN_BIT_TILES_NOT_LOADED";
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

void func_71(var uParam0, int iParam1)
{
	func_84(uParam0, iParam1);
}

void func_72(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_36(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			break;
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80f - 40f) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(40f, 100f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_85(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_85(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_86(vParam2, 1);
				iVar1 = func_87(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_85(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_85(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_85(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(80f, 150f, 17.5f, iParam1));
				}
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_85(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_85(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			default:
				if (iParam1 == 0)
				{
					DEBUG::_0x4DC69742196F818A(8, 192, "initializing scan settings for first scan attempt 1");
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					DEBUG::_0x4DC69742196F818A(8, 192, "initializing scan settings for second scan attempt 2");
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					DEBUG::_0x4DC69742196F818A(8, 192, "initializing scan settings for third scan attempt 3");
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					DEBUG::_0x4DC69742196F818A(8, 192, "initializing scan settings for fourth scan attempt 4");
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_73(var uParam0, int iParam1, vector3 vParam2)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_86(vParam2, 1) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

bool func_74(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_75(var uParam0, var uParam1)
{
	if (uParam0->f_1 != uParam1->f_1)
	{
		return false;
	}
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_3), &(uParam1->f_3)))
	{
		return false;
	}
	return true;
}

char* func_76(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_88(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_77(var uParam0)
{
	*uParam0 = 0;
}

int func_78(int iParam0)
{
	return Global_1254516[iParam0 /*29*/].f_22.f_3;
}

char* func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_SCAN_MANAGER_SCAN_FAILURE_REASON_INVALID";
		case 0:
			return "NET_SCAN_MANAGER_SCAN_FAILURE_REASON_NO_VALID_POSITION_FOUND";
		case 1:
			return "NET_SCAN_MANAGER_SCAN_FAILURE_REASON_PLAYERS_FAR_FROM_SCAN";
		case 2:
			return "NET_SCAN_MANAGER_SCAN_FAILURE_REASON_INVALID_SCAN_PARAMETERS";
		case 3:
			return "NET_SCAN_MANAGER_SCAN_FAILURE_REASON_EXPIRED";
		case 4:
			return "NET_SCAN_MANAGER_SCAN_FAILURE_REASON_NEAR_MAP_BOUNDARY";
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

void func_80(int iParam0, int iParam1)
{
	if (Global_1254516[iParam0 /*29*/].f_1.f_2 != iParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 73, "NET_SCAN_MANAGER_HOST_SET_SCAN_REQUEST_ID - Setting request ID for ", func_31(iParam0), " to ", iParam1);
		Global_1254516[iParam0 /*29*/].f_1.f_2 = iParam1;
	}
}

void func_81(int iParam0, int iParam1)
{
	if (func_51(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_HOST_CLEAR_SCAN_BEHAVIOR_FLAG - Clearing flag ", func_89(iParam1, 0), " for ", func_31(iParam0));
		func_90(&(Global_1254516[iParam0 /*29*/].f_12.f_9), iParam1);
	}
}

void func_82(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	vVar0 = { Global_1254516[iParam0 /*29*/].f_12.f_1 };
	if (func_91(vVar0, &iVar9))
	{
		DEBUG::_0xA308F935BDECCEC0(10920, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - ", func_31(iParam0), " which originated at ", MISC::_0x6C4DBF553885F9EB(vVar0), " is inside origin relocation volume ", func_25(iVar9, 0));
		Global_1254516[iParam0 /*29*/].f_12.f_1 = { func_92(iVar9) };
		DEBUG::_0xA308F935BDECCEC0(2728, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - ", func_31(iParam0), " will now originate at backup scan origin of ", MISC::_0x6C4DBF553885F9EB(Global_1254516[iParam0 /*29*/].f_12.f_1), " and will use a scan type of SCAN_NET_FETCH_ORIGIN_OFFSET");
		func_42(iParam0, 47);
		func_37(iParam0, 0);
		return;
	}
	if (func_93(vVar0, &iVar9))
	{
		DEBUG::_0xA308F935BDECCEC0(10920, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - ", func_31(iParam0), " which originated at ", MISC::_0x6C4DBF553885F9EB(vVar0), " is unscannable! Inside of unscannable VOLUME ", func_25(iVar9, 0));
		Global_1254516[iParam0 /*29*/].f_22 = { func_94(iVar9) };
		DEBUG::_0xA308F935BDECCEC0(40, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - Current scan moving to LOS to check the authored backup position found at ", MISC::_0x6C4DBF553885F9EB(Global_1254516[iParam0 /*29*/].f_22));
		func_37(iParam0, 2);
		return;
	}
	if (func_95(vVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - ", func_31(iParam0), " which originated at ", MISC::_0x6C4DBF553885F9EB(vVar0), " is on or past the map boundary. Need to find a new valid position to use as the origin point");
		iVar10 = 0;
		while (iVar10 <= 7)
		{
			vVar6 = { func_96(iVar10) };
			vVar3 = { vVar0 + vVar6 };
			if (!func_95(vVar3))
			{
				DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - Found a valid scan probe at ", MISC::_0x6C4DBF553885F9EB(vVar3), " when looking ", func_97(iVar10, 0));
				Global_1254516[iParam0 /*29*/].f_12.f_4 = { vVar6 };
				Global_1254516[iParam0 /*29*/].f_12.f_8 = 35f;
				func_42(iParam0, 48);
				func_37(iParam0, 0);
				return;
			}
			iVar10++;
		}
		DEBUG::_0x9A6C65DDDBEC9C52(2728, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - Was not able to find a valid scan coord near ", MISC::_0x6C4DBF553885F9EB(vVar0), " for ", func_31(iParam0), ". Not attempting to spawn entities as we may spawn them off the map!");
		func_32(iParam0, 4);
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(936, 73, "NET_SCAN_MANAGER_HOST_VALIDATE_SCAN_ORIGIN - ", func_31(iParam0), " has a valid scan origin of ", &(Global_1254516[iParam0 /*29*/].f_12.f_1));
	func_37(iParam0, 0);
}

void func_83(var uParam0, int iParam1)
{
	func_98(uParam0, iParam1);
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_85(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_86(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_99();
	if (func_100(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887351[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_101(vParam0, iParam3);
}

int func_87(vector3 vParam0)
{
	return func_102(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

char* func_88(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

char* func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NET_SCAN_MANAGER_SCAN_BEHAVIOR_FLAG_ONLY_ONE_ATTEMPT";
		case 2:
			return "NET_SCAN_MANAGER_SCAN_BEHAVIOR_FLAG_FIRST_ATTEMPT_ONLY_CHECK_LOS";
		case 4:
			return "NET_SCAN_MANAGER_SCAN_BEHAVIOR_FLAG_IGNORE_DIST_FOR_LOS_CHECK";
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

void func_90(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_91(vector3 vParam0, var uParam3)
{
	*uParam3 = 8;
	while (*uParam3 <= 15)
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1255496.f_51[*uParam3], vParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_IS_COORD_IN_ORIGIN_RELOCATION_VOLUME - ", MISC::_0x6C4DBF553885F9EB(vParam0), " is inside of ", func_25(*uParam3, 0));
			return true;
		}
		*uParam3++;
	}
	return false;
}

Vector3 func_92(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return -100.8f, 1323.5f, 175.2f;
		case 9:
			return 466.8f, 1453.4f, 167.6f;
		case 10:
			return -5187.461f, -2234.014f, 4.4936f;
		case 12:
			return -6443.831f, -3520.823f, -26.0969f;
		case 11:
			return -6340.91f, -3696.913f, -14.1772f;
		case 14:
			return -2552.11f, 676.8995f, 139.4233f;
		case 15:
			return 431.3042f, 1882.343f, 200.1935f;
		case 13:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar0)
			{
				case 0:
					return -3551.093f, -1892.741f, 6.6481f;
				case 1:
					return -3614.111f, -1824.39f, 42.1228f;
				default:
					break;
			}
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(40, 73, "NET_SCAN_MANAGER_GET_BACKUP_SCAN_ORIGIN_FOR_SCAN_RELOCATION_VOLUME - Did not find a valid backup scan origin for relocation volume volume ", func_25(iParam0, 0));
	return 0f, 0f, 0f;
}

bool func_93(vector3 vParam0, int iParam3)
{
	*iParam3 = 17;
	while (*iParam3 <= 21)
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1255496.f_51[*iParam3], vParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(680, 73, "NET_SCAN_MANAGER_IS_COORD_IN_UNSCANNABLE_VOLUME - ", MISC::_0x6C4DBF553885F9EB(vParam0), " is inside of ", func_25(*iParam3, 0));
			return true;
		}
		*iParam3++;
	}
	return false;
}

Vector3 func_94(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 17:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar0)
			{
				case 0:
					return 801.0809f, 1590.761f, 191.8018f;
				case 1:
					return 787.089f, 1578.206f, 192.1368f;
				default:
					break;
			}
			break;
		case 18:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar0)
			{
				case 0:
					return 1361.741f, 1834.185f, 191.9639f;
				case 1:
					return 1366.334f, 1825.952f, 191.9067f;
				default:
					break;
			}
			break;
		case 19:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return -2133.484f, 21.9821f, 267.3751f;
				case 1:
					return -2102.551f, 19.7074f, 271.3395f;
				case 2:
					return -2138.653f, -18.8593f, 249.3509f;
				case 3:
					return -2151.525f, -30.694f, 243.5381f;
				default:
					break;
			}
			break;
		case 20:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return -2621.178f, 707.432f, 166.5945f;
				case 1:
					return -2661.782f, 701.2828f, 182.7456f;
				case 2:
					return -2640.054f, 696.5616f, 178.054f;
				case 3:
					return -2632.107f, 710.8809f, 170.3972f;
				default:
					break;
			}
			break;
		case 21:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return 2328.97f, 984.2775f, 74.5295f;
				case 1:
					return 2379.057f, 986.2366f, 73.9579f;
				case 2:
					return 2322.657f, 990.1773f, 76.9349f;
				case 3:
					return 2358.901f, 1005.723f, 85.4943f;
				default:
					break;
			}
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(40, 73, "NET_SCAN_MANAGER_GET_BACKUP_SPAWN_POSITION_FOR_UNSCANNABLE_VOLUME - Did not find a unscannable volume when looking for backup positions. Passed in unscannable volume is ", func_25(iParam0, 0));
	return 0f, 0f, 0f;
}

bool func_95(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	fVar0 = 150f;
	fVar1 = (fVar0 * 1.5f);
	fVar1 = (fVar1 + 0.1f);
	vVar2.x = (vParam0.x - fVar1);
	vVar2.f_1 = (vParam0.y - fVar1);
	vVar2.f_2 = (vParam0.z - fVar1);
	vVar5.x = (vParam0.x + fVar1);
	vVar5.f_1 = (vParam0.y + fVar1);
	vVar5.f_2 = (vParam0.z + fVar1);
	iVar8 = PATHFIND::_0x01708E8DD3FF8C65(vVar2, vVar5);
	if (iVar8 < 16)
	{
		return true;
	}
	return false;
}

Vector3 func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 250f, 0f;
		case 1:
			return (BUILTIN::SIN(45f) * 250f), (BUILTIN::COS(45f) * 250f), 0f;
		case 2:
			return 250f, 0f, 0f;
		case 3:
			return (BUILTIN::SIN(45f) * 250f), (-1f * (BUILTIN::COS(45f) * 250f)), 0f;
		case 4:
			return 0f, (250f * -1f), 0f;
		case 5:
			return (-1f * (BUILTIN::SIN(45f) * 250f)), (-1f * (BUILTIN::COS(45f) * 250f)), 0f;
		case 6:
			return (250f * -1f), 0f, 0f;
		case 7:
			return (-1f * (BUILTIN::SIN(45f) * 250f)), (BUILTIN::COS(45f) * 250f), 0f;
	}
	DEBUG::_0x83407B92D46F25C3(40, 73, "NET_SCAN_MANAGER_GET_OFFSET_FOR_SCAN_DIRECTION - A valid direction was not supplied. Could not find a matching vector offset for ", func_97(iParam0, 0));
	return 0f, 0f, 0f;
}

char* func_97(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_NORTH";
		case 1:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_NORTH_EAST";
		case 2:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_EAST";
		case 3:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_SOUTH_EAST";
		case 4:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_SOUTH";
		case 5:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_SOUTH_WEST";
		case 6:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_WEST";
		case 7:
			return "NET_SCAN_MANAGER_VALIDATION_DIRECTION_LAST";
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

void func_98(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_99()
{
	return Global_1893599.f_2;
}

bool func_100(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_101(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_103(vParam0);
	iVar1 = -1;
	if (Global_1893582[iVar0] > 0)
	{
		iVar2 = (Global_1893582[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892765[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1887351[iVar4 /*36*/].f_4))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887351[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887351[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(696, 11, "FIND_REGION_WITHIN_REGION_SECTORS checking pos: ", &vParam0, " found... ", &(Global_1887351[iVar1 /*36*/].f_23));
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(56, 11, "FIND_REGION_WITHIN_REGION_SECTORS found NO REGION for pos ", &vParam0);
	}
	return iVar1;
}

int func_102(int iParam0)
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

int func_103(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_104(vParam0, 0f, 0f, 0, 2);
	return func_104(vParam0, Global_1892752[iVar0 /*3*/].f_1, Global_1892752[iVar0 /*3*/].f_2, Global_1892752[iVar0 /*3*/], 4);
}

int func_104(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

