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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
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
	struct<2> Local_40[32];
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	DEBUG::_0xA308F935BDECCEC0(8, 63, "net_camp_dog.sc is starting up. iInstanceId = ", vScriptParam_0.x);
	DEBUG::_0xA308F935BDECCEC0(8, 63, "net_camp_dog.sc - iInstanceId = ", vScriptParam_0.x);
	DEBUG::_0xA308F935BDECCEC0(40, 63, "net_camp_dog.sc - playerDogOwner = ", PLAYER::GET_PLAYER_NAME(vScriptParam_0.y));
	DEBUG::_0xA308F935BDECCEC0(40, 63, "net_camp_dog.sc - eDogItem = ", func_1(vScriptParam_0.z, 0));
	func_2(vScriptParam_0);
	while (!func_3(0, 0) && func_4(&uLocal_21, &Local_40, &iLocal_105, vScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xA308F935BDECCEC0(8, 63, "net_camp_dog.sc is terminating. iInstanceId = ", vScriptParam_0.x);
	func_5();
}

var func_1(bool bParam0, int iParam1)
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

void func_2(int iParam0, char[4] cParam1, char[4] cParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_LAUNCH");
	func_6(32, iParam0);
	func_7();
	func_8(&uLocal_21);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_21, 19, 48);
	func_9(NETWORK::_0xBA24095EA96DFE17(&uLocal_21), 19, "m_sNetCampDogHostData");
	func_10(&Local_40);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_40, 65, 49);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_40[0 /*2*/])), 65, "m_sNetCampDogPlayerData");
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_3(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_13(Global_1572887, 0), ", so skipping");
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

bool func_4(var uParam0, var uParam1, int* iParam2, char[12] cParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_UPDATE");
	bVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	bVar2 = false;
	bVar3 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
		bVar2 = ENTITY::DOES_ENTITY_EXIST(iVar1);
	}
	if (bVar2)
	{
		bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1);
	}
	if (bVar0)
	{
		if (!func_14(uParam0, uParam1, iParam2, cParam3))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_UPDATE - Host update finished.");
			return false;
		}
	}
	if (bVar3)
	{
		func_15(uParam0, uParam1, iParam2);
		func_16(uParam0, uParam1, iParam2);
	}
	if (!func_17(uParam0, uParam1, iParam2, cParam3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_UPDATE - Local update finished.");
		return false;
	}
	return true;
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
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_18(iVar0));
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
		if (func_19() == 0)
		{
			if (func_20())
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

void func_8(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HOST_DATA_INIT");
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 255;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_21(&(uParam0->f_6));
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	func_22(&(uParam0->f_12));
	func_23(&(uParam0->f_18));
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_10(var uParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PLAYER_DATA_INIT_ARRAY");
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_24(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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

char* func_13(int iParam0, int iParam1)
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

bool func_14(var uParam0, var uParam1, int* iParam2, char[12] cParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_UPDATE");
	iVar0 = func_25(uParam0);
	bVar1 = false;
	bVar1 = bVar1;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar2 = NETWORK::NET_TO_PED(uParam0->f_1);
		bVar3 = ENTITY::DOES_ENTITY_EXIST(iVar2);
	}
	if (bVar3)
	{
		bVar4 = ENTITY::IS_ENTITY_DEAD(iVar2);
		bVar4 = bVar4;
	}
	if (bVar3)
	{
		bVar5 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2);
	}
	switch (iVar0)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			func_8(uParam0);
			func_27(uParam0, cParam3);
			func_28(uParam0, 1);
			break;
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			if (func_29(uParam0, uParam1, iParam2, cParam3))
			{
				func_28(uParam0, 2);
			}
			break;
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			func_30(uParam0, iVar2);
			bVar1 = func_31(uParam0, uParam1, iParam2);
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_UPDATE - NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - bSuccess = ", MISC::_0xF216F74101968DB0(bVar1));
			if (func_32(uParam0, uParam1, iParam2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_UPDATE - Dog should cleanup.");
				func_28(uParam0, 3);
			}
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			if (bVar3)
			{
				if (bVar5)
				{
					func_33(uParam0, uParam1, iParam2);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
				}
			}
			else
			{
				func_28(uParam0, 4);
			}
			break;
		case 4:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_UPDATE - eHostState = ", func_26(iVar0, 0));
			return false;
	}
	return true;
}

void func_15(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = ENTITY::IS_ENTITY_DEAD(iVar0);
	if (bVar1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_DOG_DEATH - Dog is dead.");
		if (!func_34(iParam2, 0))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_DOG_DEATH - Send dog died event.");
			func_35(uParam0->f_2);
			func_36(iParam2, 0);
		}
	}
}

bool func_16(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING");
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - niDog doesn't exist.");
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - Dog doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - Dog is dead.");
		return false;
	}
	iVar1 = func_37(uParam0);
	bVar2 = false;
	switch (iVar1)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			break;
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			bVar2 = func_39(uParam0, uParam1, iParam2);
			break;
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			bVar2 = func_40(uParam0, uParam1, iParam2);
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			break;
		case 4:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			DEBUG::_0x1B08D1EB9D8C4931(136, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - Setting dog to happy mode for ", 20000, "ms.");
			PED::_0xAAB050DA48B57978(iVar0, "Interaction_Happy", 0, 20000, 4);
			break;
		case 5:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			break;
		case 6:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			bVar2 = func_41(uParam0, uParam1, iParam2);
			break;
		case 7:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			bVar2 = func_42(uParam0, uParam1, iParam2);
			break;
		case 8:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - eTaskState = ", func_38(iVar1, 0));
			bVar2 = func_43(uParam0, uParam1, iParam2);
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_HANDLE_DOG_TASKING - bSuccess = ", MISC::_0xF216F74101968DB0(bVar2));
	return bVar2;
}

bool func_17(var uParam0, var uParam1, int* iParam2, int iParam3, char[4] cParam4, char[4] cParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_LOCAL_UPDATE");
	bVar0 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			bVar0 = true;
		}
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = iVar2;
	iVar4 = func_44(uParam1[iVar3 /*2*/]);
	switch (iVar4)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_UPDATE - eState = ", func_45(iVar4, 0));
			func_46(iParam2);
			func_24(uParam1[iVar3 /*2*/]);
			func_47(iParam2, iParam3);
			func_48(uParam1[iVar3 /*2*/]);
			func_49(uParam1[iVar3 /*2*/], 1);
			break;
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_UPDATE - eState = ", func_45(iVar4, 0));
			func_50(uParam0, uParam1, iParam2);
			func_51(uParam0, iParam2);
			if (func_52(uParam0) != 11)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_LOCAL_UPDATE - Waiting for dog to be spawned...");
				return true;
			}
			if (bVar0)
			{
				func_53(uParam0, iVar1);
				func_54(iParam2);
				func_55(uParam0, iParam2);
				func_56(iVar3, iVar1);
				func_57(uParam1, iParam2, uParam0->f_2, iVar1);
				func_58(iParam2, uParam0->f_2, 2);
				func_59(uParam1, iParam2, uParam0->f_2, iVar1);
				func_58(iParam2, uParam0->f_2, 4);
				func_60(uParam0, uParam1[iVar3 /*2*/], iVar1, iVar2);
				func_61(uParam0, uParam1[iVar3 /*2*/]);
				func_62(uParam0, uParam1[iVar3 /*2*/], iVar1);
				func_63(uParam0, uParam1, iVar1);
				return true;
			}
			if (!bVar0)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_LOCAL_UPDATE - pedDog doesn't exist. Cleanup.");
				func_49(uParam1[iVar3 /*2*/], 2);
			}
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_UPDATE - eState = ", func_45(iVar4, 0));
			if (!func_64(uParam0, uParam1, iParam2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_LOCAL_UPDATE - NET_CAMP_DOG_CLIENT_CLEANUP - Failed.");
				return true;
			}
			func_49(uParam1[iVar3 /*2*/], 3);
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_UPDATE - eState = ", func_45(iVar4, 0));
			break;
	}
	return true;
}

char* func_18(int iParam0)
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

int func_19()
{
	return Global_1572887.f_13;
}

bool func_20()
{
	return Global_1051590.f_8;
}

void func_21(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_SPAWN_DATA_INIT");
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
}

void func_22(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_GREET_DATA_INIT");
	*uParam0 = 255;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -15;
	uParam0->f_5 = -15;
}

void func_23(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_WARN_DATA_INIT");
	*uParam0 = -15;
}

void func_24(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PLAYER_DATA_INIT");
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

int func_25(var uParam0)
{
	return uParam0->f_4;
}

char* func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDHS_INIT";
		case 1:
			return "NCDHS_CREATING_DOG";
		case 2:
			return "NCDHS_RUNNING";
		case 3:
			return "NCDHS_CLEANUP";
		case 4:
			return "NCDHS_FINISHED";
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

void func_27(var uParam0, vector3 vParam1)
{
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_INIT_INSTANCE_DATA");
	*uParam0 = vParam1.x;
	uParam0->f_2 = vParam1.y;
	uParam0->f_3 = vParam1.z;
}

void func_28(var uParam0, int iParam1)
{
	if (uParam0->f_4 == iParam1)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 63, "NET_CAMP_DOG_HOST_SET_STATE - eState = ", func_26(uParam0->f_4, 0), " -> ", func_26(iParam1, 0));
	uParam0->f_4 = iParam1;
}

bool func_29(var uParam0, var uParam1, int* iParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_SPAWN");
	iVar0 = func_52(uParam0);
	switch (iVar0)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			func_66(uParam0, uParam1, iParam2);
			func_67(uParam0, 1);
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_68(uParam0, uParam1, iParam2))
			{
				func_67(uParam0, 2);
			}
			break;
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_69(uParam0, uParam1, iParam2))
			{
				func_67(uParam0, 3);
			}
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_70(uParam0, uParam1, iParam2))
			{
				func_67(uParam0, 4);
			}
			break;
		case 4:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			iVar1 = uParam0->f_2;
			bVar2 = false;
			if (func_71(iVar1) && !func_72(iVar1))
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				func_67(uParam0, 6);
			}
			else
			{
				func_67(uParam0, 5);
			}
			break;
		case 6:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_73(uParam1, uParam0->f_2))
			{
				func_74(uParam0->f_2, 451736625);
				func_67(uParam0, 7);
			}
			break;
		case 7:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_75(uParam0, 2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_SPAWN - Camp dog's owner has unlocked the camp raid warning feature.");
				func_67(uParam0, 8);
			}
			if (func_75(uParam0, 3))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_SPAWN - Camp dog's owner has not unlocked the camp raid warning feature.");
				func_67(uParam0, 5);
			}
			break;
		case 5:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_76(uParam0))
			{
				func_67(uParam0, 10);
			}
			break;
		case 8:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_73(uParam1, uParam0->f_2))
			{
				func_77(uParam0->f_2);
				func_67(uParam0, 9);
			}
			break;
		case 9:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_75(uParam0, 1))
			{
				vVar3 = { func_78(&(iParam2->f_10)) };
				func_79(uParam0, vVar3, 0f);
				func_80(uParam0, 1);
				func_67(uParam0, 10);
			}
			break;
		case 10:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			if (func_81(uParam0, uParam1, iParam2))
			{
				func_67(uParam0, 11);
			}
			break;
		case 11:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_SPAWN - eSpawnState = ", func_65(iVar0, 0));
			return true;
	}
	return false;
}

void func_30(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	bVar0 = func_75(uParam0, 0);
	bVar1 = ENTITY::IS_ENTITY_VISIBLE(iParam1);
	if (bVar0 && bVar1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_SPAWN_FADE_IN - Clearing ", func_82(0, 0));
		func_80(uParam0, 0);
	}
}

int func_31(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES");
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - niDog doesn't exist.");
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - Dog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - Dog is dead.");
		return 0;
	}
	iVar1 = uParam0->f_2;
	if (func_83(uParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - Camp raid is pending or running. Fast switch to Camp Raid Running.");
		func_84(uParam0, 8);
	}
	if (func_85(uParam0, uParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - Animal Interaction is going on between the dog and a player. Fast switch to Animal Interaction.");
		func_84(uParam0, 4);
	}
	iVar2 = func_37(uParam0);
	switch (iVar2)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			if (func_71(iVar1))
			{
				iVar3 = 6;
				func_84(uParam0, iVar3);
			}
			else
			{
				iVar3 = 1;
				func_84(uParam0, iVar3);
			}
			break;
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			iVar3 = func_86(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_84(uParam0, iVar3);
			}
			break;
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			iVar3 = func_87(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_84(uParam0, iVar3);
			}
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			break;
		case 4:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			func_88(uParam0->f_2);
			func_84(uParam0, 5);
			break;
		case 5:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			if (!func_89(uParam1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - Dog is no longer interacting with the player.");
				func_84(uParam0, 1);
			}
			break;
		case 6:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			iVar3 = func_90(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_84(uParam0, iVar3);
			}
			break;
		case 7:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			iVar3 = func_91(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_84(uParam0, iVar3);
			}
			break;
		case 8:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_DOG_TASK_STATES - eTaskState = ", func_38(iVar2, 0));
			iVar3 = func_92(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_84(uParam0, iVar3);
			}
			break;
	}
	return 1;
}

bool func_32(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	var uVar12;
	bool bVar13;
	vector3 vVar14;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - niDog doesn't exist.");
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - pedDog doesn't exist.");
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = uParam0->f_2;
	iVar2 = iVar1;
	iVar3 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - pedPlayerDogOwner doesn't exist.");
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - pedPlayerDogOwner is dead.");
	}
	bVar4 = func_93(iVar2);
	if (!func_94(bVar4, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - Player's eDogItem is invalid.");
		return true;
	}
	if (!func_95(iVar2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - Camp Dog isn't equipped.");
		return true;
	}
	if (func_96(iVar2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - Camp Dog is marked as dead.");
		return true;
	}
	if (bVar4 != uParam0->f_3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - Player's eDogItem doesn't match. Probably due to equipping another dog.");
		DEBUG::_0x1B08D1EB9D8C4931(680, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - eDogItem = ", func_1(bVar4, 0), " sHostData.eDogItem = ", func_1(uParam0->f_3, 0));
		return true;
	}
	bVar5 = func_71(iVar2);
	bVar6 = func_97(iVar2);
	bVar7 = true;
	if (bVar5 || bVar6)
	{
		bVar7 = false;
	}
	if (func_89(uParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - Dog interaction in progress, bCheckCampScenario = FALSE");
		bVar7 = false;
	}
	if (bVar7)
	{
		bVar13 = func_98(iVar1, &uVar8, &uVar9, &uVar12);
		if (!bVar13)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - Couldn't get spawn location data.");
			return true;
		}
	}
	vVar14 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	if (!func_99(vVar14, 150f))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_SHOULD_CLEANUP - No players near the dog.");
		return true;
	}
	return false;
}

int func_33(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HOST_CLEANUP");
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_CLEANUP - niDog doesn't exist.");
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_CLEANUP - pedDog doesn't exist.");
		return 1;
	}
	bVar1 = ENTITY::IS_ENTITY_DEAD(iVar0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_CLEANUP - bDogDead = ", MISC::_0xF216F74101968DB0(bVar1));
	if (bVar1)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	else
	{
		PED::_0x7043D0681285BA2D(&iVar0);
	}
	return 1;
}

bool func_34(int* iParam0, int iParam1)
{
	if (func_100(*iParam0, iParam1))
	{
		return true;
	}
	return false;
}

void func_35(var uParam0)
{
	struct<20> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "BROADCAST_CAMP_DOG_EVENT_DOG_DIED");
	Var0.f_4 = 0;
	Var0.f_7 = uParam0;
	func_102(Var0, func_101(0, 8));
}

void func_36(int* iParam0, int iParam1)
{
	if (func_100(*iParam0, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_SET_BIT - Setting bit ", func_103(iParam1, 0));
	func_104(iParam0, iParam1);
}

int func_37(var uParam0)
{
	return uParam0->f_11;
}

char* func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDTS_INIT";
		case 1:
			return "NCDTS_WAITING_AT_TENT";
		case 2:
			return "NCDTS_GREET_PLAYER";
		case 3:
			return "NCDTS_FOLLOW_PLAYER";
		case 4:
			return "NCDTS_ANIMAL_INTERACT_START";
		case 5:
			return "NCDTS_ANIMAL_INTERACT_RUNNING";
		case 6:
			return "NCDTS_CAMP_RAID_WARN_OWNER";
		case 7:
			return "NCDTS_CAMP_RAID_RUN_TO_CAMP";
		case 8:
			return "NCDTS_CAMP_RAID_RUNNING";
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

bool func_39(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!func_105(iVar0, -76381094))
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_HANDLE_WAITING_AT_TENT - Dog isn't using the the scenario. Attempting to give the task...");
		bVar1 = func_75(uParam0, 0);
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_WAITING_AT_TENT - bNeedToFadeIn = ", MISC::_0xF216F74101968DB0(bVar1));
		bVar2 = func_106(uParam0->f_2, iVar0, bVar1);
		DEBUG::_0x4DC69742196F818A(40, 63, "NET_CAMP_DOG_HANDLE_WAITING_AT_TENT - bSuccess = ", MISC::_0xF216F74101968DB0(bVar2));
		return bVar2;
	}
	return true;
}

bool func_40(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!func_105(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_HANDLE_GREET_PLAYER - Dog isn't currently greeting a player. Attempting to give the task...");
		iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_12);
		bVar2 = func_107(iVar0, iVar1);
		DEBUG::_0x4DC69742196F818A(40, 63, "NET_CAMP_DOG_HANDLE_GREET_PLAYER - NET_CAMP_DOG_TASK_DOG_TO_GREET_PED - bSuccess = ", MISC::_0xF216F74101968DB0(bVar2));
		return bVar2;
	}
	PED::SET_PED_RESET_FLAG(iVar0, 229, true);
	return true;
}

bool func_41(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_WARN_OWNER - pedPlayerDogOwner doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_WARN_OWNER - pedPlayerDogOwner is dead.");
		return false;
	}
	bVar2 = func_108(iVar0, iVar1, 1, 1) > 8f;
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_WARN_OWNER - bApproachPlayer = ", MISC::_0xF216F74101968DB0(bVar2));
	if (bVar2)
	{
		if (!func_105(iVar0, 1227113341))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_WARN_OWNER - Dog isn't using SCRIPT_TASK_GO_TO_ENTITY. Attempting to give the task...");
			bVar3 = func_109(iVar0, uParam0->f_2);
			DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_WARN_OWNER - bSuccess = ", MISC::_0xF216F74101968DB0(bVar3));
			return bVar3;
		}
		return true;
	}
	if (!func_105(iVar0, -1927882907))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_WARN_OWNER - Dog isn't using SCRIPT_TASK_BARK. Attempting to give the task...");
		bVar4 = func_110(iVar0, iVar1);
		DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_WARN_OWNER - bSuccess = ", MISC::_0xF216F74101968DB0(bVar4));
		return bVar4;
	}
	return true;
}

bool func_42(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAIN_RUN_TO_CAMP - pedPlayerDogOwner doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAIN_RUN_TO_CAMP - pedPlayerDogOwner is dead.");
		return false;
	}
	if (!func_105(iVar0, 713668775))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAIN_RUN_TO_CAMP - Dog isn't using SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD. Attempting to give the task...");
		bVar2 = func_111(iVar0, uParam0->f_2);
		DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAIN_RUN_TO_CAMP - bSuccess = ", MISC::_0xF216F74101968DB0(bVar2));
		return bVar2;
	}
	return true;
}

bool func_43(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bool bVar18;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_RUNNING - pedPlayerDogOwner doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_RUNNING - pedPlayerDogOwner is dead.");
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar5 = { func_112(uParam0->f_2) };
	if (func_113(vVar5))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_RUNNING - vCampPos is a zero vector.");
		return false;
	}
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar5, true);
	if (fVar8 > 12f)
	{
		if (!func_105(iVar0, 713668775))
		{
			bVar9 = func_114(iVar0, vVar5, 6f);
			DEBUG::_0x4DC69742196F818A(40, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_RUNNING - bSuccess = ", MISC::_0xF216F74101968DB0(bVar9));
			return bVar9;
		}
		return true;
	}
	bVar12 = func_115(iVar1, vVar2, 60f, &iVar10, &uVar11);
	iVar13 = PLAYER::PLAYER_ID();
	iVar14 = iVar13;
	if (bVar12)
	{
		func_116(uParam1[iVar14 /*2*/], 3);
	}
	else
	{
		func_117(uParam1[iVar14 /*2*/], 3);
	}
	if (bVar12)
	{
		if (!func_105(iVar0, -1927882907))
		{
			bVar15 = func_110(iVar0, iVar10);
			DEBUG::_0x4DC69742196F818A(40, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_RUNNING - bSuccess = ", MISC::_0xF216F74101968DB0(bVar15));
			return bVar15;
		}
	}
	else
	{
		if (!func_118(vVar2, &iVar16, &fVar8))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_RUNNING - Couldn't find a close player.");
			return false;
		}
		iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
		if (!func_105(iVar0, -1927882907))
		{
			bVar18 = func_110(iVar0, iVar17);
			DEBUG::_0x4DC69742196F818A(40, 63, "NET_CAMP_DOG_HANDLE_CAMP_RAID_RUNNING - bSuccess = ", MISC::_0xF216F74101968DB0(bVar18));
			return bVar18;
		}
	}
	return true;
}

int func_44(var uParam0)
{
	return *uParam0;
}

char* func_45(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDPS_INIT";
		case 1:
			return "NCDPS_RUNNING";
		case 2:
			return "NCDPS_CLEANUP";
		case 3:
			return "NCDPS_FINISHED";
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

void func_46(int* iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_LOCAL_DATA_INIT");
	*iParam0 = 0;
	StringCopy(&(iParam0->f_1), "", 64);
	iParam0->f_9 = -1;
	func_119(&(iParam0->f_10));
}

void func_47(int* iParam0, int iParam1)
{
	if (!func_120(iParam0, iParam1))
	{
		return;
	}
	func_121(2, Global_1137881.f_6, joaat("REL_COP"));
	func_121(6, Global_1137881.f_6, joaat("REL_GUAMA_LAW"));
	func_121(6, Global_1137881.f_6, joaat("REL_PINKERTONS"));
	func_121(6, Global_1137881.f_6, joaat("REL_CRIMINALS"));
	func_121(6, Global_1137881.f_6, joaat("REL_GUNSLINGERS"));
	func_121(6, Global_1137881.f_6, joaat("REL_GANG_LARAMIE_GANG"));
	func_121(6, Global_1137881.f_6, joaat("REL_GANG_SKINNER_BROTHERS"));
	func_121(6, Global_1137881.f_6, joaat("REL_GANG_CREOLE"));
	func_121(6, Global_1137881.f_6, joaat("REL_GANG_LEMOYNE_RAIDERS"));
	func_121(6, Global_1137881.f_6, joaat("REL_GANG_SMUGGLERS"));
	func_121(6, Global_1137881.f_6, joaat("REL_GANG_ODRISCOLL"));
	func_121(6, Global_1137881.f_6, joaat("REL_GANG_MURFREE_BROOD"));
	func_121(6, Global_1137881.f_6, joaat("REL_FETCH_ENEMY_1"));
	func_121(6, Global_1137881.f_6, joaat("REL_FETCH_ENEMY_2"));
	if (Global_1132718.f_2060 != 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_LOCAL_INIT_REL_GROUPS: The camp follower rel group exists, adding relationship");
		func_121(2, Global_1137881.f_6, Global_1132718.f_2060);
	}
}

void func_48(var uParam0)
{
	bool bVar0;

	if (func_122(uParam0, 4))
	{
		return;
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_PLAYER_UGC_RESTRICTIONS - Orbis version is running.");
		bVar0 = false;
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_PLAYER_UGC_RESTRICTIONS - localPlayer does not have permission to view custom user content.");
			bVar0 = true;
		}
		if (!NETWORK::_UGC_HAS_PRIVILEGE())
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_PLAYER_UGC_RESTRICTIONS - localPlayer does not have permission to display their own custom user content.");
			bVar0 = true;
		}
		if (bVar0)
		{
			func_116(uParam0, 5);
		}
	}
	func_116(uParam0, 4);
}

void func_49(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 63, "NET_CAMP_DOG_PLAYER_SET_STATE - eState = ", func_45(*uParam0, 0), " -> ", func_45(iParam1, 0));
	*uParam0 = iParam1;
}

void func_50(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_PROCESS_EVENTS");
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_CLIENT_PROCESS_EVENTS - eEventName = ", func_123(iVar1, 0));
				func_124(iVar0, uParam0, iParam2);
				break;
		}
		iVar0++;
	}
}

void func_51(var uParam0, int* iParam1)
{
	vector3 vVar0;

	if (!func_34(iParam1, 5))
	{
		return;
	}
	if (func_125(&(iParam1->f_10)))
	{
		vVar0 = { func_78(&(iParam1->f_10)) };
		func_126(uParam0->f_2, vVar0);
		func_127(iParam1, 5);
	}
}

int func_52(var uParam0)
{
	return uParam0->f_5;
}

void func_53(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_SPAWN_FADE_IN - ped doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_SPAWN_FADE_IN - ped is dead.");
	}
	bVar0 = func_75(uParam0, 0);
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_37(uParam0);
	bVar2 = false;
	switch (iVar1)
	{
		case 1:
			bVar2 = true;
			break;
	}
	if (bVar2)
	{
		if (!func_128(iParam1, -76381094))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_SPAWN_FADE_IN - Dog isn't performing scenario task.");
			return;
		}
		if (!TASK::_0x02EBBB3989B7E695(iParam1))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_SPAWN_FADE_IN - Dog isn't in scenario base.");
			return;
		}
	}
	if (ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_SPAWN_FADE_IN - Dog is already visible.");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_SPAWN_FADE_IN - Setting to dog as visible and to fade in.");
	ENTITY::SET_ENTITY_VISIBLE(iParam1, true);
	ENTITY::_0xA91E6CF94404E8C9(iParam1);
}

void func_54(int* iParam0)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_REL_GROUPS");
	iVar0 = PLAYER::PLAYER_PED_ID();
	func_121(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0), Global_1137881.f_6);
}

void func_55(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	iVar3 = uParam0->f_2;
	bVar4 = false;
	if (func_71(iVar3) || func_97(iVar3))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_BLIPS - Camp Raid is pending or running.");
		bVar4 = true;
	}
	bVar5 = false;
	if (bVar4)
	{
		bVar5 = true;
	}
	if (bVar2)
	{
		bVar5 = false;
	}
	if (bVar5)
	{
		if (!MAP::DOES_BLIP_EXIST(iParam1->f_9))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_BLIPS - Adding blip for the dog.");
			iParam1->f_9 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iVar1);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(iParam1->f_9))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_BLIPS - Removing blip from the dog.");
		MAP::REMOVE_BLIP(&(iParam1->f_9));
	}
}

void func_56(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = NETWORK::NETWORK_IS_IN_MP_CUTSCENE();
	if (!bVar0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_FAST_INSTANCE - pedDog doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_FAST_INSTANCE - pedDog is dead.");
	}
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_FAST_INSTANCE - Setting pedDog invisible in Fast Instance.");
	iVar1 = NETWORK::_0xD9267375834C5EAB(iParam0);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, false, true, iVar1);
}

void func_57(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char cVar5[64];
	int iVar13;
	bool bVar14;
	bool bVar15;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_127(iParam1, 1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		func_127(iParam1, 1);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_ILO_PROMPT - playerDogOwner isn't an active player.");
		func_127(iParam1, 1);
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = ENTITY::IS_ENTITY_DEAD(iParam3);
	fVar4 = func_129(iVar1, iParam3, 1);
	StringCopy(&cVar5, "", 64);
	bVar15 = false;
	if (!func_34(iParam1, 1))
	{
		if (fVar4 <= BUILTIN::POW(5f, 2f))
		{
			iVar13 = func_130(uParam0, iParam1, iParam2, &cVar5, &bVar15);
			bVar14 = MISC::_0x870708A6E147A9AD(iParam3, &cVar5, 2.5f, 0, 0, 0, 0, 0, iVar13, -1);
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_CLIENT_HANDLE_ILO_PROMPT - REGISTER_INTERACTION_LOCKON_PROMPT - bSuccess = ", MISC::_0xF216F74101968DB0(bVar14));
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_CLIENT_HANDLE_ILO_PROMPT - REGISTER_INTERACTION_LOCKON_PROMPT - bIsUGCRestricted = ", MISC::_0xF216F74101968DB0(bVar15));
			if (bVar14 || bVar15)
			{
				func_36(iParam1, 1);
			}
		}
	}
	else if ((bVar2 || bVar3) || fVar4 > BUILTIN::POW(7.5f, 2f))
	{
		bVar14 = MISC::_0xE98D55C5983F2509(iParam3);
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_CLIENT_HANDLE_ILO_PROMPT - UNREGISTER_INTERACTION_LOCKON_PROMPT - bSuccess = ", MISC::_0xF216F74101968DB0(bVar14));
		if (bVar14)
		{
			func_127(iParam1, 1);
		}
	}
}

void func_58(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var9;

	if (!func_34(iParam0, iParam2))
	{
		return;
	}
	iVar0 = iParam1;
	Var9 = { func_131(iParam0) };
	if (!func_132(iVar0, &uVar1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_NEW_NAME_FLAGS - Unabled to retrieve tlStoredName");
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&uVar1, &Var9))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_NEW_NAME_FLAGS - tlStoredName does not match tlNewName");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_CLIENT_HANDLE_NEW_NAME_FLAGS - Clearing local flag: ", func_103(iParam2, 0));
	func_127(iParam0, iParam2);
}

void func_59(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (!func_34(iParam1, 4) && func_34(iParam1, 3))
	{
		return;
	}
	bVar0 = func_133(uParam0, iParam1, iParam2, iParam3);
	if (!bVar0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_NAME_TO_ILO - Failed to set new ILO prompt for pedDog.");
		return;
	}
}

void func_60(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam3);
	iVar1 = func_134(iVar0);
	iVar2 = func_134(iParam2);
	bVar3 = false;
	if (iVar1 && iVar2)
	{
		bVar3 = PED::_0x8BE24D74D74C6E9B(iVar0) == iParam2;
	}
	if (bVar3)
	{
		func_116(uParam1, 1);
	}
	else
	{
		func_117(uParam1, 1);
	}
	bVar4 = false;
	if (func_25(uParam0) == 3)
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		func_135(iVar0);
		func_135(iParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			ENTITY::IS_ENTITY_DEAD(iParam2);
			DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_CLIENT_HANDLE_ANIMAL_INTERACTION - Disabling ILO on pedDog.");
			PED::SET_PED_CONFIG_FLAG(iParam2, 301, true);
		}
	}
}

void func_61(var uParam0, var uParam1)
{
	int iVar0;

	if (func_37(uParam0) == 7)
	{
		iVar0 = uParam0->f_2;
		func_136(iVar0);
		func_117(uParam1, 2);
	}
}

void func_62(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_122(uParam1, 2))
	{
		return;
	}
	if (func_37(uParam0) != 6)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (func_108(iParam2, iVar1, 1, 1) > 8f)
	{
		return;
	}
	if (!func_137())
	{
		return;
	}
	iVar2 = MAP::_0x3E593DF9C2962EC6(776060936);
	Global_1904703.f_8789 = PLAYER::PLAYER_ID();
	func_138(620, iVar2, 1);
	func_116(uParam1, 2);
}

void func_63(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (func_122(uParam1[iVar1 /*2*/], 3))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	bVar2 = false;
	iVar3 = func_37(uParam0);
	switch (iVar3)
	{
		case 6:
		case 7:
			bVar2 = true;
			break;
		case 8:
			if (bVar0)
			{
				bVar2 = true;
			}
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	bVar4 = PED::IS_PED_USING_ACTION_MODE(iParam2);
	if (bVar2 != bVar4)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_CLIENT_HANDLE_ACTION_MODE - Toggling Action Mode. bActionModeEnabled = ", MISC::_0xF216F74101968DB0(bVar2));
		PED::SET_PED_USING_ACTION_MODE(iParam2, bVar2, -1, 0);
	}
}

bool func_64(var uParam0, var uParam1, int* iParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_CLIENT_CLEANUP");
	PED::REMOVE_RELATIONSHIP_GROUP(Global_1137881.f_6);
	return true;
}

char* func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDSS_INIT";
		case 1:
			return "NCDSS_WAIT_FOR_PED_RESERVATION";
		case 2:
			return "NCDSS_REQUEST_ASSETS";
		case 3:
			return "NCDSS_LOADING_ASSETS";
		case 4:
			return "NCDSS_DETERMINE_SPAWN_LOCATION";
		case 5:
			return "NCDSS_FIND_CAMP_SPAWN_LOCATION";
		case 6:
			return "NCDSS_BROADCAST_RAID_WARNING_UNLOCK_INQUIRY";
		case 7:
			return "NCDSS_PROCESS_RAID_WARNING_UNLOCK";
		case 8:
			return "NCDSS_BROADCAST_SCAN_REQUEST";
		case 9:
			return "NCDSS_PROCESS_SPAWN_LOCATION";
		case 10:
			return "NCDSS_CREATE_ENTITIES";
		case 11:
			return "NCDSS_FINISHED";
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

void func_66(var uParam0, var uParam1, int* iParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_RESERVE_PEDS");
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_RESERVE_PEDS - Can't register mission peds.");
		return;
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_67(var uParam0, int iParam1)
{
	if (uParam0->f_5 == iParam1)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 63, "NET_CAMP_DOG_SET_SPAWN_STATE - eState = ", func_65(uParam0->f_5, 0), " -> ", func_65(iParam1, 0));
	uParam0->f_5 = iParam1;
}

bool func_68(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_LOCAL_WAIT_FOR_PED_RESERVATION");
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);
	if (iVar0 < 1)
	{
		DEBUG::_0x4DC69742196F818A(136, 63, "NET_CAMP_DOG_LOCAL_WAIT_FOR_PED_RESERVATION - Waiting for ped reservation. Need: ", 1, " Have: ", iVar0);
		return false;
	}
	return true;
}

bool func_69(var uParam0, var uParam1, int* iParam2)
{
	bool bVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_LOCAL_REQUEST_ASSETS");
	bVar0 = func_139(uParam0->f_3);
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_REQUEST_ASSETS - eModel = ", func_140(bVar0, 0));
	if (!STREAMING::IS_MODEL_VALID(bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 63, "NET_CAMP_DOG_LOCAL_REQUEST_ASSETS - Model isn't valid. eModel = ", func_140(bVar0, 0));
		return false;
	}
	STREAMING::REQUEST_MODEL(bVar0, false);
	return true;
}

bool func_70(var uParam0, var uParam1, int* iParam2)
{
	bool bVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_LOCAL_ARE_ASSETS_LOADED");
	bVar0 = func_139(uParam0->f_3);
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_ARE_ASSETS_LOADED - eModel = ", func_140(bVar0, 0));
	if (!STREAMING::IS_MODEL_VALID(bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 63, "NET_CAMP_DOG_LOCAL_ARE_ASSETS_LOADED - Model isn't valid. eModel = ", func_140(bVar0, 0), " - ", bVar0);
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(bVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_ARE_ASSETS_LOADED - Model hasn't loaded yet. eModel = ", func_140(bVar0, 0));
		STREAMING::REQUEST_MODEL(bVar0, false);
		return false;
	}
	return true;
}

bool func_71(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_IS_CAMP_RAID_PENDING_EXTERN - Invalid player index.");
		return false;
	}
	if (func_141(&(Global_1137888[iParam0 /*12*/]), 2))
	{
		return true;
	}
	return false;
}

bool func_72(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_IS_CAMP_RAID_WARNING_DONE_EXTERN - Invalid player index.");
		return false;
	}
	if (func_141(&(Global_1137888[iParam0 /*12*/]), 3))
	{
		return true;
	}
	return false;
}

bool func_73(var uParam0, int iParam1)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_CAN_PLAYER_PROCESS_BROADCAST_EVENTS");
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return false;
	}
	iVar0 = iParam1;
	if (func_44(uParam0[iVar0 /*2*/]) != 1)
	{
		return false;
	}
	return true;
}

void func_74(int iParam0, int iParam1)
{
	struct<20> Var0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "BROADCAST_CAMP_DOG_EVENT_IS_UNLOCK_LOCKED");
	Var0.f_4 = 5;
	Var0.f_7 = iParam0;
	Var0.f_6 = iParam1;
	func_102(Var0, func_142(iParam0));
}

bool func_75(var uParam0, int iParam1)
{
	if (func_100(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

bool func_76(var uParam0)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_INIT_SPAWN_DATA_FOR_CAMP");
	if (!func_98(uParam0->f_2, &uVar0, &vVar1, &uVar4))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_INIT_SPAWN_DATA_FOR_CAMP - Failed to get a valid spawn location.");
		return false;
	}
	uParam0->f_6 = { vVar1 };
	uParam0->f_6.f_3 = uVar4;
	return true;
}

void func_77(int iParam0)
{
	struct<20> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "BROADCAST_CAMP_DOG_EVENT_FIND_SPAWN_POSITION");
	Var0.f_4 = 3;
	Var0.f_7 = iParam0;
	func_102(Var0, func_142(iParam0));
}

Vector3 func_78(var uParam0)
{
	return uParam0->f_3.f_3;
}

int func_79(var uParam0, vector3 vParam1, char* sParam4)
{
	DEBUG::_0xA308F935BDECCEC0(440, 63, "NET_CAMP_DOG_INIT_SPAWN_DATA_FOR_CAMP - vSpawnPos = ", &vParam1, " fSpawnHeading = ", sParam4);
	uParam0->f_6 = { vParam1 };
	uParam0->f_6.f_3 = sParam4;
	return 1;
}

void func_80(var uParam0, int iParam1)
{
	if (!func_100(uParam0->f_10, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_SET_BIT - Clearing bit ", func_82(iParam1, 0));
	func_143(&(uParam0->f_10), iParam1);
}

bool func_81(var uParam0, var uParam1, int* iParam2)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES");
	bVar0 = uParam0->f_3;
	bVar1 = func_139(bVar0);
	vVar2 = { uParam0->f_6 };
	sVar5 = uParam0->f_6.f_3;
	DEBUG::_0x1B08D1EB9D8C4931(7080, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES - eModel = ", func_140(bVar1, 0), " vSpawnPos = ", &vVar2, " fSpawnHeading = ", sVar5);
	if (!func_144(&(uParam0->f_1), bVar1, vVar2, sVar5, 1, 0, 0, 1, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES - Ped hasn't been created.");
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES - Create succeeded, but we don't have a network index.");
		return false;
	}
	iVar6 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES - Entity doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar6))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES - Entity is dead.");
	}
	iVar7 = func_145(bVar0);
	PED::_SET_PED_OUTFIT_PRESET(iVar6, iVar7, false);
	if (!NETWORK::_0xB07D3185E11657A5(iVar6))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
	}
	iVar8 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
	}
	NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(uParam0->f_1, 1, 1, 256);
	NETWORK::_0xF3354D6CA46F419D(iVar6, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, Global_1137881.f_6);
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES - Setting camp dog as invisible.");
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	func_146(uParam0, 0);
	func_147(iVar6);
	func_133(uParam1, iParam2, uParam0->f_2, iVar6);
	return true;
}

char* func_82(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDH_FLAG_NEED_DOG_ENTITY_TO_FADE_IN";
		case 1:
			return "NCDH_FLAG_NEW_SPAWN_DATA_AVAILABLE";
		case 2:
			return "NCDH_FLAG_RAID_WARNING_UNLOCKED";
		case 3:
			return "NCDH_FLAG_RAID_WARNING_LOCKED";
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

bool func_83(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;

	iVar0 = func_37(uParam0);
	if (iVar0 == 8)
	{
		return false;
	}
	iVar1 = uParam0->f_2;
	iVar2 = NETWORK::NET_TO_PED(uParam0->f_1);
	bVar3 = func_71(iVar1);
	bVar4 = func_97(iVar1);
	if (!bVar3 && !bVar4)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_RUN_CAMP_RAID_RUNNING - Dog doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_RUN_CAMP_RAID_RUNNING - Dog is dead.");
		return false;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
	vVar8 = { func_112(iVar1) };
	fVar11 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vVar8, true);
	if (fVar11 > 30f)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_RUN_CAMP_RAID_RUNNING - Dog is too far away from camp.");
		return false;
	}
	return true;
}

void func_84(var uParam0, int iParam1)
{
	if (uParam0->f_11 == iParam1)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 63, "NET_CAMP_DOG_SET_TASK_STATE - eState = ", func_38(uParam0->f_11, 0), " -> ", func_38(iParam1, 0));
	uParam0->f_11 = iParam1;
}

bool func_85(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_37(uParam0);
	if (iVar0 == 4 || iVar0 == 5)
	{
		return false;
	}
	if (!func_89(uParam1))
	{
		return false;
	}
	return true;
}

int func_86(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char* sVar7;
	char[] cVar8[8];
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	bVar1 = func_75(uParam0, 0);
	if (bVar1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_WAITING_AT_TENT - Dog hasn't faded in yet.");
		return 1;
	}
	if (func_148(uParam0->f_2, iVar0, &iVar2))
	{
		iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		iVar4 = iVar3;
		if (func_122(uParam1[iVar4 /*2*/], 0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_WAITING_AT_TENT - Greeted player bit already set.");
			return 1;
		}
		iVar5 = func_149();
		bVar6 = func_150(uParam0->f_12.f_5);
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_WAITING_AT_TENT - bLastGreetTimestampValid = ", MISC::_0xF216F74101968DB0(bVar6));
		if (bVar6)
		{
			func_151(iVar5, uParam0->f_12.f_5, &sVar7, &cVar8, &iVar9, &uVar10, &uVar11, &uVar12);
			DEBUG::_0x1B08D1EB9D8C4931(2184, 63, "NET_CAMP_DOG_HOST_HANDLE_WAITING_AT_TENT - Time passed since last greet. iSeconds = ", sVar7, " iMinutes = ", cVar8, " iHours = ", iVar9);
			if (iVar9 < 2)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 63, "NET_CAMP_DOG_HOST_HANDLE_WAITING_AT_TENT - Dog has already greeted a player within the last ", 2, " game hours.");
				return 1;
			}
		}
		if (func_152(iVar2))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_WAITING_AT_TENT - playerGreetTarget is resting at the camp fire.");
			return 1;
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_WAITING_AT_TENT - Dog should greet the player.");
		uParam0->f_12 = iVar2;
		return 2;
	}
	return 1;
}

int func_87(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	char* sVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	vector3 vVar12;
	int iVar15;
	float fVar16;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER");
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = func_149();
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	bVar5 = true;
	if (uParam0->f_12.f_4 == -15)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - Setting TOD for greet starting.");
		func_22(&(uParam0->f_12));
		uParam0->f_12.f_1 = { vVar2 };
		uParam0->f_12.f_4 = iVar1;
	}
	func_151(iVar1, uParam0->f_12.f_4, &sVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
	DEBUG::_0x1B08D1EB9D8C4931(136, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - Time passed since Greet started. iSeconds = ", sVar6, " iMinutes = ", iVar7);
	if (iVar7 >= 20)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - Dog has exceeded Greet time. Duration is greater than ", 20, " game minutes.");
		bVar5 = false;
	}
	vVar12 = { vVar2 };
	iVar15 = PED::_0x243E1B4607040057(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar15))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - Successfully retrieved pedTarget from GET_PED_MOTION_FOCUS_ENTITY.");
		vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar15, true, false) };
	}
	fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar12, uParam0->f_12.f_1, true);
	DEBUG::_0xA308F935BDECCEC0(24, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - Distance between dog and Greet start pos = ", fVar16);
	if (fVar16 >= 15f)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - Dog is too far away from start position. Cancel greet.");
		bVar5 = false;
	}
	if (func_152(uParam0->f_12))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - playerGreetTarget is resting at the camp fire.");
		bVar5 = false;
	}
	if (!bVar5)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_GREET_PLAYER - Dog Greet has finished.");
		func_22(&(uParam0->f_12));
		uParam0->f_12.f_5 = iVar1;
		return 1;
	}
	return 2;
}

void func_88(var uParam0)
{
	struct<20> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "BROADCAST_CAMP_DOG_EVENT_DOG_PATTED");
	Var0.f_4 = 2;
	Var0.f_7 = uParam0;
	func_102(Var0, func_101(0, 8));
}

bool func_89(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_153(iVar0, 1, 1))
		{
		}
		else if (func_122(uParam0[iVar0 /*2*/], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_90(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	char* sVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_WARN_OWNER");
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	bVar2 = false;
	fVar3 = func_108(iVar0, iVar1, 1, 1);
	if (fVar3 <= 8f)
	{
		bVar2 = true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_WARN_OWNER - bInRangeForWarn = ", MISC::_0xF216F74101968DB0(bVar2));
	iVar4 = func_149();
	if (bVar2)
	{
		if (uParam0->f_18 == -15)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_WARN_OWNER - Setting TOD for Warn starting.");
			func_23(&(uParam0->f_18));
			uParam0->f_18 = iVar4;
		}
	}
	bVar5 = true;
	if (uParam0->f_18 != -15)
	{
		func_151(iVar4, uParam0->f_18, &sVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
		DEBUG::_0x1B08D1EB9D8C4931(136, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_WARN_OWNER - Time passed since Warn started. iSeconds = ", sVar6, " iMinutes = ", iVar7);
		if (iVar7 >= 5)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_WARN_OWNER - Dog has exceeded Warn time. Duration is greater than ", 5, " game minutes.");
			bVar5 = false;
		}
	}
	if (!bVar5)
	{
		return 7;
	}
	return 6;
}

int func_91(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_RUN_BACK_TO_CAMP");
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { func_112(uParam0->f_2) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar4, true);
	DEBUG::_0xA308F935BDECCEC0(24, 63, "NET_CAMP_DOG_HOST_HANDLE_RUN_BACK_TO_CAMP - Distance between vDogPos and vCampPos = ", fVar7);
	if (fVar7 <= 15f)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_RUN_BACK_TO_CAMP - Dog has returned to camp. Camp Raid isn't pending or running");
		return 1;
	}
	return 7;
}

int func_92(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_RUNNING");
	iVar0 = uParam0->f_2;
	iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	vVar5 = { func_112(iVar0) };
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar5, true);
	DEBUG::_0xA308F935BDECCEC0(24, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_RUNNING - Distance between vDogPos and vCampPos = ", fVar8);
	if (fVar8 > 30f)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_RUNNING - Dog is too far away from camp.");
		return 7;
	}
	if (!func_97(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HOST_HANDLE_CAMP_RAID_RUNNING - Camp Raid isn't running. Return to Tent.");
		return 1;
	}
	return 8;
}

int func_93(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_GET_DOG_ITEM_FOR_PLAYER_EXTERN - Invalid player index. iPlayer = ", iParam0);
		return 0;
	}
	return Global_1137888[iParam0 /*12*/].f_1;
}

bool func_94(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_95(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_IS_DOG_ITEM_EQUIPPED_EXTERN - Invalid player index. iPlayer = ", iParam0);
		return false;
	}
	bVar0 = func_141(&(Global_1137888[iParam0 /*12*/]), 0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_IS_DOG_ITEM_EQUIPPED_EXTERN - bEquipped = ", MISC::_0xF216F74101968DB0(bVar0));
	return bVar0;
}

bool func_96(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_IS_DOG_MARKED_DEAD_EXTERN - Invalid player index.");
		return false;
	}
	bVar0 = func_141(&(Global_1137888[iParam0 /*12*/]), 1);
	return bVar0;
}

bool func_97(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_IS_CAMP_RAID_RUNNING_EXTERN - Invalid player index.");
		return false;
	}
	if (func_141(&(Global_1137888[iParam0 /*12*/]), 4))
	{
		return true;
	}
	return false;
}

bool func_98(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_154(iParam0, &iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_CAMP_SPAWN_LOCATION_DATA - Couldn't find a scenario point.");
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_CAMP_SPAWN_LOCATION_DATA - Returned scenario point doesn't exist.");
	}
	*iParam1 = iVar0;
	*uParam2 = { TASK::_GET_SCENARIO_POINT_COORDS(*iParam1, true) };
	*uParam3 = TASK::_GET_SCENARIO_POINT_HEADING(*iParam1, true);
	return true;
}

bool func_99(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!func_153(iVar3, 1, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_155(iVar0), vParam0, true);
			if (fVar2 <= fParam3)
			{
				return true;
			}
		}
		iVar3++;
	}
	return false;
}

bool func_100(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

var func_101(int iParam0, int iParam1)
{
	return func_156(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_102(struct<8> Param0, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "BROADCAST_CAMP_DOG_EVENT");
	UNK_0x355E72323AEE83CC(63, 9);
	iVar0 = PLAYER::PLAYER_ID();
	DEBUG::_0xA308F935BDECCEC0(40, 63, "BROADCAST_CAMP_DOG_EVENT - eEventType = ", func_157(Param0.f_4, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 63, "BROADCAST_CAMP_DOG_EVENT - playerBroadcaster = ", PLAYER::GET_PLAYER_NAME(iVar0));
	DEBUG::_0xA308F935BDECCEC0(40, 63, "BROADCAST_CAMP_DOG_EVENT - playerDogOwner = ", PLAYER::GET_PLAYER_NAME(Param0.f_7));
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam20))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 32, "BROADCAST_CAMP_DOG_EVENT - playerflags = 0. Not broadcasting.");
		return;
	}
	Param0 = 11;
	Param0.f_1 = iVar0;
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 20, 5, &uParam20);
	DEBUG::_0x4DC69742196F818A(40, 32, "BROADCAST_CAMP_EVENT - event sent - ", func_157(Param0.f_4, 0));
}

char* func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDL_FLAG_DOG_DIED";
		case 1:
			return "NCDL_FLAG_ILO_PROMPT_SET";
		case 2:
			return "NCDL_FLAG_ILO_PROMPT_USE_NEW_NAME";
		case 3:
			return "NCDL_FLAG_ILO_GROUP_TITLE_SET";
		case 4:
			return "NCDL_FLAG_ILO_GROUP_TITLE_USE_NEW_NAME";
		case 5:
			return "NCDL_FLAG_FIND_SPAWN_POSITION";
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

void func_104(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_105(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	var uVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_USE_TENT_SCENARIO - pedDog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_USE_TENT_SCENARIO - pedDog is dead.");
		return 0;
	}
	if (TASK::_0x0C3CB2E600C8977D(iParam1, 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_USE_TENT_SCENARIO - pedDog is currently exiting a scenario.");
		return 0;
	}
	bVar5 = func_98(iParam0, &iVar0, &uVar1, &uVar4);
	if (!bVar5)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_USE_TENT_SCENARIO - Couldn't retrieve camp spawn location data.");
		return 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_USE_TENT_SCENARIO - Scenario point doesn't exist.");
		return 0;
	}
	bVar6 = true;
	iVar7 = 0;
	fVar8 = -1f;
	if (bParam2)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_USE_TENT_SCENARIO - Warping to scenario idle.");
		bVar6 = false;
		iVar7 = joaat("WORLD_ANIMAL_DOG_SITTING");
		fVar8 = 0f;
	}
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_USE_TENT_SCENARIO - Giving the dog the task.");
	TASK::_TASK_USE_SCENARIO_POINT(iParam1, iVar0, 0, 0, bVar6, bParam2, iVar7, false, fVar8, false);
	return 1;
}

int func_107(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_GREET_PED - pedDog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_GREET_PED - pedDog is dead.");
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_GREET_PED - pedToGreet doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_GREET_PED - pedToGreet is dead.");
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_GREET_PED - Tasking the pedDog to greet pedToGreet.");
	TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, 0, 0, 2f, 2f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, 0);
	PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	PED::_0xAAB050DA48B57978(iParam0, "Interaction_Happy", iParam1, 20000, 4);
	return 1;
}

float func_108(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_109(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_APPROACH_OWNER - pedDog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_APPROACH_OWNER - pedDog is dead.");
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_APPROACH_OWNER - pedPlayerDogOwner doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_APPROACH_OWNER - pedPlayerDogOwner is dead.");
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_APPROACH_OWNER - Giving the dog the task.");
	TASK::TASK_GO_TO_ENTITY(iParam0, iVar0, -1, 8f, 2f, 12f, 0);
	return 1;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_BARK_AT_PED - pedDog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_BARK_AT_PED - pedDog is dead.");
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_BARK_AT_PED - pedTarget doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_BARK_AT_PED - pedTarget is dead.");
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_BARK_AT_PED - Giving the dog the task.");
	iVar0 = joaat("MOODSTRESSED");
	TASK::TASK_BARK(iParam0, iParam1, iVar0);
	return 1;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_RUN_TO_CAMP - pedDog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_RUN_TO_CAMP - pedDog is dead.");
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_RUN_TO_CAMP - pedPlayerDogOwner doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_RUN_TO_CAMP - pedPlayerDogOwner is dead.");
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_RUN_TO_CAMP - Giving the dog the task.");
	vVar1 = { func_112(iParam1) };
	if (func_113(vVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_RUN_TO_CAMP - vCampPos is a zero vector.");
		return 0;
	}
	iVar4 = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar1, 2f, -1, 10f, iVar4, 40000f);
	return 1;
}

Vector3 func_112(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1134820[func_158() /*83*/].f_38.f_4;
	}
	return Global_1134820[iParam0 /*83*/].f_38.f_4;
}

bool func_113(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_114(int iParam0, vector3 vParam1, char* sParam4)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_GOTO_COORD - pedDog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_TASK_DOG_TO_GOTO_COORD - pedDog is dead.");
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(440, 63, "NET_CAMP_DOG_TASK_DOG_TO_GOTO_COORD - Tasking the dog to goto a coord. vPos = ", &vParam1, " fRadius = ", sParam4);
	iVar0 = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vParam1, 2f, -1, sParam4, iVar0, 40000f);
	return 1;
}

int func_115(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_ARE_ANY_ENEMIES_OF_PED_IN_AREA - Itemset failed to create.");
		return 0;
	}
	iVar1 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 1);
	DEBUG::_0x1B08D1EB9D8C4931(136, 63, "NET_CAMP_DOG_ARE_ANY_ENEMIES_OF_PED_IN_AREA - Found ", iVar1, " peds.");
	fVar3 = 1000000f;
	bVar4 = false;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar6))
		{
		}
		else
		{
			iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
			if (ENTITY::IS_ENTITY_DEAD(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_A_PED(iVar7))
			{
			}
			else
			{
				iVar8 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar7);
				iVar9 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam0, iVar8);
				if (iVar9 != 6)
				{
				}
				else
				{
					fVar10 = func_108(iParam0, iVar8, 1, 1);
					if (fVar10 < fVar3)
					{
						bVar4 = true;
						iVar2 = iVar8;
						fVar3 = fVar10;
					}
				}
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (bVar4)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_ARE_ANY_ENEMIES_OF_PED_IN_AREA - Returning closest ped and distance.");
		*iParam5 = iVar2;
		*uParam6 = fVar3;
		return 1;
	}
	return 0;
}

void func_116(var uParam0, int iParam1)
{
	if (func_100(uParam0->f_1, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PLAYER_SET_BIT - Setting bit ", func_159(iParam1, 0));
	func_104(&(uParam0->f_1), iParam1);
}

void func_117(var uParam0, int iParam1)
{
	if (!func_100(uParam0->f_1, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PLAYER_SET_BIT - Clearing bit ", func_159(iParam1, 0));
	func_143(&(uParam0->f_1), iParam1);
}

bool func_118(vector3 vParam0, int iParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;

	fVar1 = 1000000f;
	bVar2 = false;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!func_153(iVar3, 1, 1))
		{
		}
		else
		{
			iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar6, true, false) };
			if (ENTITY::IS_ENTITY_DEAD(iVar6))
			{
			}
			else
			{
				fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar7, vParam0, true);
				if (fVar10 < fVar1)
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_CLOSEST_PLAYER_TO_COORD - Found a closer player.");
					iVar0 = iVar5;
					fVar1 = fVar10;
					bVar2 = true;
				}
			}
		}
		iVar3++;
	}
	if (bVar2)
	{
		*iParam3 = iVar0;
		*fParam4 = fVar1;
		return true;
	}
	return false;
}

void func_119(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 25, "HORSE_FIND_SPAWN_POS_PARAMS__INIT");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_160(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

bool func_120(int* iParam0, int iParam1)
{
	char cVar0[64];
	bool bVar8;

	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_CLIENT_ADD_REL_GROUP");
	StringCopy(&cVar0, "relGroupCampDog", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	bVar8 = PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Global_1137881.f_6));
	return bVar8;
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
}

bool func_122(var uParam0, int iParam1)
{
	if (func_100(uParam0->f_1, iParam1))
	{
		return true;
	}
	return false;
}

char* func_123(int iParam0, int iParam1)
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

void func_124(int iParam0, var uParam1, int* iParam2)
{
	int iVar0;

	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_PROCESSING");
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_PROCESSING - GET_EVENT_DATA - Returned false.");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_EVENT_PROCESSING - sEventDetails.eEventType = ", func_161(iVar0, 0));
	switch (iVar0)
	{
		case 11:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HANDLE_EVENT_PROCESSING - eEventType = ", func_161(iVar0, 0));
			func_162(iParam0, uParam1, iParam2);
			break;
	}
}

bool func_125(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	int iVar20;
	int iVar21;
	bool bVar22;
	vector3 vVar23;
	var uVar26;
	vector3 vVar27;
	int iVar30;
	int iVar31;
	var uVar32;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION");
	vVar0 = { func_112(PLAYER::NETWORK_PLAYER_ID_TO_INT()) };
	iVar6 = 1;
	vVar7 = { Global_1275959.f_17 };
	if (func_113(vVar0))
	{
		vVar11 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar10 = vVar11.z;
	}
	else
	{
		fVar10 = func_163(vVar0, vVar7, 1);
	}
	fVar14 = 40f;
	fVar15 = 80f;
	DEBUG::_0x1B08D1EB9D8C4931(2456, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Spawn distance Min = ", fVar14, "m and Max = ", fVar15, "m");
	iVar16 = (uParam0->f_2 % 20);
	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - iSwingVal = ", iVar16);
	fVar10 = (fVar10 + ((BUILTIN::TO_FLOAT(iVar16) * 30f) * func_164((uParam0->f_2 % 2) == 0, 1f, -1f)));
	DEBUG::_0x1B08D1EB9D8C4931(24, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - fHeading = ", fVar10);
	vVar17 = { vVar7 + Vector(0f, -BUILTIN::COS(fVar10), BUILTIN::SIN(fVar10)) * FtoV(((fVar15 + fVar14) * 0.5f)) };
	DEBUG::_0x1B08D1EB9D8C4931(56, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - vOffsetInWorld = ", &vVar17);
	iVar20 = func_165(uParam0);
	switch (iVar20)
	{
		case 0:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eState = ", func_166(iVar20, 0));
			func_168(uParam0, func_167());
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_169(uParam0, 1);
			break;
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eState = ", func_166(iVar20, 0));
			iVar21 = 0;
			while (iVar21 < 10)
			{
				if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar17, iVar21, &vVar3, 1, 1077936128 /* Float: 3f */, 0))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - No nearby road node.");
					func_169(uParam0, 2);
					return false;
				}
				if (!func_170(vVar3))
				{
					DEBUG::_0x1B08D1EB9D8C4931(136, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Road node ", iVar21, " failed verification.");
				}
				else
				{
					func_168(uParam0, vVar3);
					func_169(uParam0, 3);
					return false;
				}
				iVar21++;
			}
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - No valid road nodes found. Trying scanner.");
			func_169(uParam0, 2);
			break;
		case 2:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eState = ", func_166(iVar20, 0));
			if (func_171(vVar17, &(uParam0->f_3), &bVar22, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				vVar23 = { func_78(uParam0) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar23, &uVar26, true))
				{
					vVar23 = { vVar23.x, vVar23.y, uVar26 };
				}
				if (!func_170(vVar23))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Scan Failed.");
					func_169(uParam0, 5);
				}
				func_169(uParam0, 3);
				return false;
			}
			if (bVar22)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Scanner failed.");
				func_169(uParam0, 5);
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Scanner continue proccessing...");
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eState = ", func_166(iVar20, 0));
			if (uParam0->f_13 == 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Build Navmesh query for dog spawn.");
				vVar27 = { func_78(uParam0) };
				iVar30 = 23;
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(0, vVar27, vVar7, iVar30);
				if (uParam0->f_13 == -1)
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Call to NAVMESH_REQUEST_PATH failed.");
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						DEBUG::_0x1B08D1EB9D8C4931(136, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Failed to create a navmesh query after ", 50, " attempts.");
						func_169(uParam0, 5);
					}
				}
			}
			else
			{
				iVar31 = PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13);
				switch (iVar31)
				{
					case 2:
						DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eNavMeshQueryStatus = ", func_172(iVar31, 0));
						break;
					case 0:
						DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eNavMeshQueryStatus = ", func_172(iVar31, 0));
						DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - QS not found! Our query was reset or purged.");
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						func_169(uParam0, 5);
						return false;
					case 1:
						DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eNavMeshQueryStatus = ", func_172(iVar31, 0));
						if (!PATHFIND::_0x8800776E410EB669(uParam0->f_13))
						{
							DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Failed to find path to player.");
							PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
							func_169(uParam0, 5);
							return false;
						}
						uVar32 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (func_173(uVar32, 2))
						{
							DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Path to player has water.");
							PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
							func_169(uParam0, 5);
							return false;
						}
						DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Found path to player!");
						func_169(uParam0, 4);
						break;
				}
			}
			break;
		case 4:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eState = ", func_166(iVar20, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Verified scanner coords = ", MISC::_0x6C4DBF553885F9EB(uParam0->f_3.f_3));
			uParam0->f_2 = 0;
			func_169(uParam0, 0);
			return true;
		case 5:
			DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - eState = ", func_166(iVar20, 0));
			uParam0->f_2++;
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Attempts so far ", uParam0->f_2);
			if (uParam0->f_2 > 20)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_PROCESS_FIND_SPAWN_POSITION - Could not find a good spawn position.");
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_169(uParam0, 0);
			break;
	}
	return false;
}

void func_126(var uParam0, vector3 vParam1)
{
	struct<20> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "BROADCAST_CAMP_DOG_EVENT_FOUND_SPAWN_POSITION");
	Var0.f_4 = 4;
	Var0.f_7 = uParam0;
	Var0.f_16 = { vParam1 };
	func_102(Var0, func_101(0, 8));
}

void func_127(int* iParam0, int iParam1)
{
	if (!func_100(*iParam0, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_LOCAL_SET_BIT - Clearing bit ", func_103(iParam1, 0));
	func_143(iParam0, iParam1);
}

bool func_128(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1)
			{
				return true;
			}
		}
	}
	return false;
}

float func_129(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES_SQUARED - entity1 does not exist");
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES_SQUARED - entity2 does not exist");
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_174(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_130(var uParam0, int* iParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (!func_122(uParam0[iVar1 /*2*/], 4))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_DOG_NAME - localPlayer's UGC status is not yet known.");
		return false;
	}
	iVar2 = iParam2;
	if (!func_122(uParam0[iVar2 /*2*/], 4))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_GET_DOG_NAME - playerDogOwner's UGC status is not yet known.");
		return false;
	}
	bVar3 = true;
	if (iParam2 == iVar0)
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if (func_122(uParam0[iVar1 /*2*/], 5) || func_122(uParam0[iVar2 /*2*/], 5))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_GET_DOG_NAME - There is a UGC restriction in place between the localPlayer and playerDogOwner.");
			*bParam4 = 1;
			return false;
		}
	}
	if (func_34(iParam1, 2))
	{
		*cParam3 = { func_131(iParam1) };
		return true;
	}
	else
	{
		return func_132(iVar2, cParam3);
	}
	return false;
}

struct<8> func_131(int* iParam0)
{
	return iParam0->f_1;
}

bool func_132(int iParam0, char[4] cParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_GET_DOG_ITEM_FOR_PLAYER_EXTERN - Invalid player index. iPlayer = ", iParam0);
		return false;
	}
	*cParam1 = { Global_1137888[iParam0 /*12*/].f_2 };
	return true;
}

int func_133(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	bool bVar8;
	bool bVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SET_DOG_NAME_TO_ILO - pedDog doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SET_DOG_NAME_TO_ILO - pedDog is dead.");
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SET_DOG_NAME_TO_ILO - playerDogOwner isn't an active player.");
		return 0;
	}
	StringCopy(&cVar0, "", 64);
	bVar8 = false;
	bVar9 = func_130(uParam0, iParam1, iParam2, &cVar0, &bVar8);
	if (bVar8)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_SETUP_DOG_NAME_TO_ILO - bIsUGCRestricted = ", MISC::_0xF216F74101968DB0(bVar8));
		func_36(iParam1, 3);
		return 1;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_SET_DOG_NAME_TO_ILO - bSuccess = ", MISC::_0xF216F74101968DB0(bVar9));
	if (bVar9)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(func_175(&cVar0)) <= 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SET_DOG_NAME_TO_ILO - tlName is empty.");
			return 0;
		}
		DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_SET_DOG_NAME_TO_ILO - Setting ILO prompt for pedDog to ", &cVar0);
		PED::_SET_PED_PROMPT_NAME(iParam3, &cVar0);
		func_36(iParam1, 3);
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_IS_RUNNING_ANIMAL_INTERACTION - ped doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_IS_RUNNING_ANIMAL_INTERACTION - ped is dead.");
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_IS_RUNNING_ANIMAL_INTERACTION - Network doesn't have control of the entity.");
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_STOP_ANIMAL_INTERACTION_FOR_PED - ped doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_STOP_ANIMAL_INTERACTION_FOR_PED - ped is dead.");
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_STOP_ANIMAL_INTERACTION_FOR_PED - Network doesn't have control of the entity.");
		return;
	}
	if (PED::_0x7FC84E85D98F063D(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_STOP_ANIMAL_INTERACTION_FOR_PED - Animal Interaction is running. Clear tasks.");
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
	}
}

void func_136(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_MANAGER_SET_CAMP_RAID_WARNING_DONE_EXTERN - Invalid player index.");
		return;
	}
	func_176(&(Global_1137888[iParam0 /*12*/]), 3);
}

bool func_137()
{
	if (!func_177() && func_178(1))
	{
		return true;
	}
	return false;
}

void func_138(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_179(iParam0, &iVar0, &iVar1);
	if (!func_180(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_181(iParam0, 1024))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_MARK_RUN_WITH_BLIP - Selected tutorial doesn't support blips!");
		return;
	}
	func_182(iVar0, iVar1);
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	DEBUG::_0x4DC69742196F818A(10376, 105, "TUTORIAL_MARK_RUN_WITH_BLIP - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_183(iParam0));
}

int func_139(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

var func_140(bool bParam0, int iParam1)
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

bool func_141(var uParam0, int iParam1)
{
	if (func_100(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

var func_142(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	DEBUG::_0x4DC69742196F818A(680, 8, "NETWORK_GET_SPECIFIC_PLAYER_BIT_INDEX() - iPlayerFlags.m_bits[0] = ", func_184(SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&uVar0, 0)), ", iPlayerBits.m_bits[1] = ", func_184(SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&uVar0, 1)));
	return uVar0;
}

void func_143(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_144(var uParam0, bool bParam1, vector3 vParam2, char* sParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "CREATE_NET_PED Called by non host when bScriptHostPed = TRUE.  Terminating function.");
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "CREATE_NET_PED: CAN_REGISTER_MISSION_PEDS() = FALSE.  Terminating function.");
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "CREATE_NET_PED: NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED. Terminating function.");
		return false;
	}
	if (!func_185(bParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "CREATE_NET_PED: LOAD_MODEL()  = FALSE");
		return false;
	}
	iVar0 = func_186(bParam1, vParam2, sParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

int func_145(bool bParam0)
{
	int iVar0;

	if (func_187(bParam0, -1372720971))
	{
		iVar0 = 0;
	}
	else if (func_187(bParam0, 1028787971))
	{
		iVar0 = 1;
	}
	else if (func_187(bParam0, 1271835644))
	{
		iVar0 = 2;
	}
	else
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 63, "NET_CAMP_DOG_LOCAL_CREATE_ENTITIES - eItem ", func_1(bParam0, 0), " doesn't have a coat variation tag.");
		iVar0 = 0;
	}
	return iVar0;
}

void func_146(var uParam0, int iParam1)
{
	if (func_100(uParam0->f_10, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_HOST_SET_BIT - Setting bit ", func_82(iParam1, 0));
	func_104(&(uParam0->f_10), iParam1);
}

void func_147(int iParam0)
{
	DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_SETUP_CAMP_DOG_ATTRIBUTES");
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SETUP_CAMP_DOG_ATTRIBUTES - pedDog doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SETUP_CAMP_DOG_ATTRIBUTES - pedDog is dead.");
		return;
	}
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_CAN_RAGDOLL(iParam0, false);
	PED::_0x6569F31A01B4C097(iParam0, 1, false);
	PED::_0x6569F31A01B4C097(iParam0, 0, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 2, false);
}

bool func_148(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	var uVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - pedDog doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - pedDog is dead.");
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	bVar8 = func_98(iParam0, &uVar3, &vVar4, &uVar7);
	if (!bVar8)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - Couldn't retrieve camp spawn location data.");
		return false;
	}
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar4, true);
	if (fVar9 > 10f)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - Dog isn't close enough to tent to greet a player.");
		return false;
	}
	if (!func_118(vVar0, &iVar10, &fVar9))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - No players eligible to greet.");
		return false;
	}
	iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - Player doesn't exist.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar11))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - Player is dead.");
		return false;
	}
	if (fVar9 <= 10f)
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_SHOULD_DOG_GREET_A_PLAYER - A player is within greet distance.");
		*iParam2 = iVar10;
		return true;
	}
	return false;
}

int func_149()
{
	return Global_1902870;
}

bool func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_188(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_189(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_190(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_191(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_192(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_193(iParam0);
	if (iVar5 < 1 || iVar5 > func_194(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_151(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_195(iParam0, iParam1, 1))
	{
		iVar0 = func_192(iParam1);
		iVar1 = func_191(iParam0);
		iVar2 = (func_191(iParam0) - func_191(iParam1));
		iVar3 = (func_192(iParam0) - func_192(iParam1));
		iVar4 = (func_193(iParam0) - func_193(iParam1));
		iVar5 = (func_190(iParam0) - func_190(iParam1));
		iVar6 = (func_189(iParam0) - func_189(iParam1));
		iVar7 = (func_188(iParam0) - func_188(iParam1));
	}
	else
	{
		iVar0 = func_192(iParam0);
		iVar1 = func_191(iParam1);
		iVar2 = (func_191(iParam1) - func_191(iParam0));
		iVar3 = (func_192(iParam1) - func_192(iParam0));
		iVar4 = (func_193(iParam1) - func_193(iParam0));
		iVar5 = (func_190(iParam1) - func_190(iParam0));
		iVar6 = (func_189(iParam1) - func_189(iParam0));
		iVar7 = (func_188(iParam1) - func_188(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_194(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_196(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*sParam2 = iVar7;
	*sParam3 = iVar6;
	*iParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_IS_PLAYER_RESTING_AT_CAMP_FIRE");
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iVar0);
	iVar2 = iVar1;
	switch (iVar2)
	{
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"):
			return true;
	}
	return false;
}

bool func_153(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	return true;
}

bool func_154(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_197(iParam0, &vVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 62, "NET_CAMP_MANAGER_CLIENT_FIND_DOG_SCENARIO_FOR_PLAYER_TENT - Unable to find player tent data");
		return false;
	}
	if (func_113(vVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 62, "NET_CAMP_MANAGER_CLIENT_FIND_DOG_SCENARIO_FOR_PLAYER_TENT - Player tent pos is not defined");
		return false;
	}
	iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("WORLD_ANIMAL_DOG_PLAYER_TENT_TG"), 5.5f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3))
	{
		*iParam1 = iVar3;
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(696, 61, "Find Dog Scenario - Can't find scenario near tent position: ", &vVar0, " for player: ", PLAYER::GET_PLAYER_NAME(iParam0));
	return false;
}

Vector3 func_155(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

var func_156(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_198() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_199());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_199());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_199());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_200(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_201(iVar2))
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
				if (iVar9 & 8192 != 0 && func_202(iVar2) != 1)
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
					if (!func_203(iVar10))
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

char* func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_DOG_EVENT_TYPE_DOG_DIED";
		case 1:
			return "CAMP_DOG_EVENT_TYPE_DOG_NAME_CHANGED";
		case 2:
			return "CAMP_DOG_EVENT_TYPE_DOG_PATTED";
		case 3:
			return "CAMP_DOG_EVENT_TYPE_FIND_SPAWN_POSITION";
		case 4:
			return "CAMP_DOG_EVENT_TYPE_FOUND_SPAWN_POSITION";
		case 5:
			return "CAMP_DOG_EVENT_TYPE_IS_UNLOCK_LOCKED";
		case 6:
			return "CAMP_DOG_EVENT_TYPE_UNLOCK_LOCKED";
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

int func_158()
{
	return Global_1102630.f_3672;
}

char* func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDP_FLAG_GREETED_PLAYER";
		case 1:
			return "NCDP_FLAG_ANIMAL_INTERACTION";
		case 2:
			return "NCDP_FLAG_CAMP_RAID_WARNED";
		case 3:
			return "NCDP_FLAG_CAMP_RAID_ENEMIES_IN_AREA";
		case 4:
			return "NCDP_FLAG_PLAYER_UGC_STATUS_KNOWN";
		case 5:
			return "NCDP_FLAG_PLAYER_IS_UGC_RESTRICTED";
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

void func_160(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

char* func_161(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_EVENT_TICKER_MESSAGE";
		case 1:
			return "SCRIPT_EVENT_INVITE_TO_JOIN";
		case 2:
			return "SCRIPT_EVENT_INVITE_TO_JOIN_MP_MISSION";
		case 3:
			return "SCRIPT_EVENT_PLAYER_STATUS";
		case 4:
			return "SCRIPT_EVENT_AMBIENT_CONTENT_EVALUATOR";
		case 5:
			return "SCRIPT_EVENT_ACE_LAUNCHER";
		case 6:
			return "SCRIPT_EVENT_IMPROMPTU_RACE_MANAGER";
		case 7:
			return "SCRIPT_EVENT_TRAIN_ROBBERY_MANAGER";
		case 8:
			return "SCRIPT_EVENT_ANIMAL_ATTACK_MANAGER";
		case 9:
			return "SCRIPT_EVENT_GUN_FOR_HIRE_MANAGER";
		case 10:
			return "SCRIPT_EVENT_CAMP";
		case 11:
			return "SCRIPT_EVENT_CAMP_DOG";
		case 12:
			return "SCRIPT_EVENT_CAMP_DEFENSE";
		case 13:
			return "SCRIPT_EVENT_MOONSHINE";
		case 14:
			return "SCRIPT_EVENT_MOONSHINE_BAND";
		case 15:
			return "SCRIPT_EVENT_MOONSHINE_BAR";
		case 16:
			return "SCRIPT_EVENT_MOONSHINE_SCENARIO_TAKEN";
		case 17:
			return "SCRIPT_EVENT_MOONSHINE_SCENARIO_FREED";
		case 18:
			return "SCRIPT_EVENT_NET_ENTITY_BRAIN";
		case 19:
			return "SCRIPT_EVENT_GLOBAL_TRAIN";
		case 20:
			return "SCRIPT_EVENT_TRAIN_MANAGER";
		case 21:
			return "SCRIPT_EVENT_TEAM_ASSIGNMENT";
		case 22:
			return "SCRIPT_EVENT_NET_GANG";
		case 23:
			return "SCRIPT_EVENT_PERSISTENT_POSSE";
		case 24:
			return "SCRIPT_EVENT_FM_ACTIVITY_MANAGER";
		case 25:
			return "SCRIPT_EVENT_FM_ACTIVITY";
		case 26:
			return "SCRIPT_EVENT_FME_MANAGER";
		case 27:
			return "SCRIPT_EVENT_TRAIN_JOB";
		case 28:
			return "SCRIPT_EVENT_PARLEY";
		case 29:
			return "SCRIPT_EVENT_POSSE_VERSUS";
		case 30:
			return "SCRIPT_EVENT_NET_GANGFEUDS";
		case 31:
			return "SCRIPT_EVENT_NET_SHOW_MANAGEMENT";
		case 32:
			return "SCRIPT_EVENT_NET_SHOW_BITS";
		case 33:
			return "SCRIPT_EVENT_ABANDONED_LOOT_MANAGER";
		case 34:
			return "SCRIPT_EVENT_NET_PLAYER_BOUNTY";
		case 35:
			return "SCRIPT_EVENT_NOTORIETY_PRESS_CHARGES";
		case 36:
			return "SCRIPT_EVENT_NOTORIETY_FORCE_PASSIVE";
		case 37:
			return "SCRIPT_EVENT_NOTORIETY_FORCE_NOT_PASSIVE_HORSE";
		case 38:
			return "SCRIPT_EVENT_NOTORIETY_PASSIVE_REQUEST";
		case 39:
			return "SCRIPT_EVENT_COLLECTIBLE_DIG_START";
		case 40:
			return "SCRIPT_EVENT_COLLECTIBLE_DIG_COMPLETE";
		case 41:
			return "SCRIPT_EVENT_COLLECTIBLE_GIVE_ITEM_TO_POSSE_MEMBERS";
		case 42:
			return "SCRIPT_EVENT_COLLECTIBLE_BIRD_NEST_SHOT";
		case 43:
			return "SCRIPT_EVENT_COLLECTIBLE_BIRD_NEST_DESTROYED";
		case 44:
			return "SCRIPT_EVENT_NET_MINIGAME_MANAGER";
		case 45:
			return "SCRIPT_EVENT_NET_EMOTE";
		case 46:
			return "SCRIPT_EVENT_NET_STABLE";
		case 47:
			return "SCRIPT_EVENT_NET_STABLE_MOUNT";
		case 48:
			return "SCRIPT_EVENT_NET_ROLLING_PLAYLIST";
		case 49:
			return "SCRIPT_EVENT_NET_VS_MISSION_INTRO";
		case 50:
			return "SCRIPT_EVENT_NET_SHOPS";
		case 51:
			return "SCRIPT_EVENT_NET_SESSION_REQUEST";
		case 52:
			return "SCRIPT_EVENT_FM_COACH_HOLDUP";
		case 53:
			return "SCRIPT_EVENT_NET_ASSASSINATION";
		case 54:
			return "SCRIPT_EVENT_FME_ROYAL_RUMBLE";
		case 55:
			return "SCRIPT_EVENT_FME_WRECKAGE";
		case 56:
			return "SCRIPT_EVENT_FME_ANIMAL_TAGGING";
		case 57:
			return "SCRIPT_EVENT_FME_WILDLIFE_PHOTOGRAPHER";
		case 58:
			return "SCRIPT_EVENT_FME_PROTECT_LEGENDARY_ANIMAL";
		case 59:
			return "SCRIPT_EVENT_FME_BASE";
		case 60:
			return "SCRIPT_EVENT_FME_CHALLENGES";
		case 61:
			return "SCRIPT_EVENT_FM_DEAD_DROP";
		case 62:
			return "SCRIPT_EVENT_OHD_IN_MP_CUTSCENE";
		case 63:
			return "SCRIPT_EVENT_OHD_IS_WANTED";
		case 64:
			return "SCRIPT_EVENT_OHD_IS_CUFFED";
		case 65:
			return "SCRIPT_EVENT_OHD_IS_BEING_PROCESSED";
		case 66:
			return "SCRIPT_EVENT_OHD_IN_CUSTODY";
		case 67:
			return "SCRIPT_EVENT_OHD_IS_BEING_CUFFED";
		case 68:
			return "SCRIPT_EVENT_OHD_IS_BEING_UNCUFFED";
		case 69:
			return "SCRIPT_EVENT_OHD_TALKING";
		case 70:
			return "SCRIPT_EVENT_OHD_INVISIBLE";
		case 71:
			return "SCRIPT_EVENT_OHD_TELEPORT";
		case 72:
			return "SCRIPT_EVENT_OHD_PARTNER";
		case 73:
			return "SCRIPT_EVENT_OHD_IS_VOTING";
		case 74:
			return "SCRIPT_EVENT_OHD_IS_PLAYER_SPECTATING";
		case 75:
			return "SCRIPT_EVENT_OHD_IN_MP_CUTSCENE_RESET";
		case 76:
			return "SCRIPT_EVENT_OHD_IS_WANTED_RESET";
		case 77:
			return "SCRIPT_EVENT_OHD_IS_CUFFED_RESET";
		case 78:
			return "SCRIPT_EVENT_OHD_IS_BEING_PROCESSED_RESET";
		case 79:
			return "SCRIPT_EVENT_OHD_IN_CUSTODY_RESET";
		case 80:
			return "SCRIPT_EVENT_OHD_IS_BEING_CUFFED_RESET";
		case 81:
			return "SCRIPT_EVENT_OHD_IS_BEING_UNCUFFED_RESET";
		case 82:
			return "SCRIPT_EVENT_OHD_TALKING_RESET";
		case 83:
			return "SCRIPT_EVENT_OHD_INVISIBLE_RESET";
		case 84:
			return "SCRIPT_EVENT_OHD_TELEPORT_RESET";
		case 85:
			return "SCRIPT_EVENT_OHD_PARTNER_RESET";
		case 86:
			return "SCRIPT_EVENT_OHD_IS_VOTING_RESET";
		case 87:
			return "SCRIPT_EVENT_OHD_IS_PLAYER_SPECTATING_RESET";
		case 88:
			return "SCRIPT_EVENT_MGLIB_NET_REGISTRATION";
		case 89:
			return "SCRIPT_EVENT_MGLIB_NET_REPLY";
		case 90:
			return "SCRIPT_EVENT_MGLIB_PED_UPDATE";
		case 91:
			return "SCRIPT_EVENT_MGLIB_OBJECT_UPDATE";
		case 92:
			return "SCRIPT_EVENT_MGLIB_FULL_UPDATE";
		case 93:
			return "SCRIPT_EVENT_MC_OBJECTIVE_MID_POINT";
		case 94:
			return "SCRIPT_EVENT_MC_PED_GIVEN_GUNONRULE";
		case 95:
			return "SCRIPT_EVENT_MC_TRAIN_PLAYER_CONTROL_SPEED_CHANGE";
		case 96:
			return "SCRIPT_EVENT_MC_CREATE_TRAIN_DESTROYED_EXPLOSIONS";
		case 97:
			return "SCRIPT_EVENT_MC_TRAIN_PLAYER_CONTROL_BLOW_WHISTLE";
		case 98:
			return "SCRIPT_EVENT_MC_TRAIN_DAMAGE_EVENT";
		case 99:
			return "SCRIPT_EVENT_MC_OBJECTIVE_COMPLETE";
		case 100:
			return "SCRIPT_EVENT_MC_OBJECTIVE_COMPLETE_HOST";
		case 101:
			return "SCRIPT_EVENT_MC_PLAYER_SCORE";
		case 102:
			return "SCRIPT_EVENT_MC_DIALOGUE_LOOK";
		case 103:
			return "SCRIPT_EVENT_MC_DEBUG_OBJECTIVE_SKIP_FOR_TEAM";
		case 104:
			return "SCRIPT_EVENT_MC_DEBUG_SET_PED_INVINCIBILITY";
		case 105:
			return "SCRIPT_EVENT_MC_DEBUG_UPDATE_TO_ALERT_RECORD";
		case 106:
			return "SCRIPT_EVENT_MC_TEAM_CHANGE_REQUEST";
		case 107:
			return "SCRIPT_EVENT_MC_UPDATE_CUTSCENE_WIDGETS";
		case 108:
			return "SCRIPT_EVENT_MC_MISSION_RESTART";
		case 109:
			return "SCRIPT_EVENT_MC_ACTOR_ALERTED";
		case 110:
			return "SCRIPT_EVENT_MC_TEAM_DEBUG_SKIP_CUTSCENE";
		case 111:
			return "SCRIPT_EVENT_MC_OVERRIDE_LIVES_FAIL";
		case 112:
			return "SCRIPT_EVENT_MC_REMOVE_ACTOR_FROM_GROUP";
		case 113:
			return "SCRIPT_EVENT_MC_VEHICLE_DRAFT_ANIMALS_SET_UP";
		case 114:
			return "SCRIPT_EVENT_MC_TASK_OWNER_PROCESSED";
		case 115:
			return "SCRIPT_EVENT_MC_PED_CHANGED_REL_GROUP";
		case 116:
			return "SCRIPT_EVENT_MC_ANIMAL_CHANGED_REL_GROUP";
		case 117:
			return "SCRIPT_EVENT_MC_PED_SET_INTO_INVESTIGATION";
		case 118:
			return "SCRIPT_EVENT_MC_START_STREAMING_END_MOCAP";
		case 119:
			return "SCRIPT_EVENT_MC_SWAP_DOOR_FOR_DAMAGED_VERSION";
		case 120:
			return "SCRIPT_EVENT_MC_TEAM_HAS_FINISHED_CUSTOM_RULE";
		case 121:
			return "SCRIPT_EVENT_MC_ANIMAL_CANCEL_TASKS";
		case 122:
			return "SCRIPT_EVENT_MC_TNT_REQUEST_MINIGAME_LOCK";
		case 123:
			return "SCRIPT_EVENT_MC_MINIGAME_ROPE_BROKEN";
		case 124:
			return "SCRIPT_EVENT_MC_PLANT_DYNAMITE_REQUEST_MINIGAME_LOCK";
		case 125:
			return "SCRIPT_EVENT_MC_PLANT_DYNAMITE_REQUEST_MINIGAME_UNLOCK";
		case 126:
			return "SCRIPT_EVENT_MC_INTERACT_WITH_REQUEST_MINIGAME_LOCK";
		case 127:
			return "SCRIPT_EVENT_MC_SAFE_CRACK_REQUEST_MINIGAME_LOCK";
		case 128:
			return "SCRIPT_EVENT_MC_SAFE_CRACK_REMOVE_MINIGAME_LOCK";
		case 129:
			return "SCRIPT_EVENT_MC_DECISION_MINIGAME_OPTION_SELECTED";
		case 130:
			return "SCRIPT_EVENT_MC_DEBUG_KILL_ENTITY";
		case 131:
			return "SCRIPT_EVENT_MC_TRAIN_UNDRIVABLE";
		case 132:
			return "SCRIPT_EVENT_MC_TRAIN_CRUISE_SPEED_SET";
		case 133:
			return "SCRIPT_EVENT_MC_TRAIN_WHISTLE_START";
		case 134:
			return "SCRIPT_EVENT_MC_TRAIN_WHISTLE_DONE";
		case 135:
			return "SCRIPT_EVENT_MC_DAMAGE_MOONSHINE";
		case 136:
			return "SCRIPT_EVENT_MC_NEW_FOCUS_TEAM";
		case 137:
			return "SCRIPT_EVENT_MC_PLAYER_FAIL";
		case 138:
			return "SCRIPT_EVENT_MC_KILL_FOCUS_TEAM";
		case 139:
			return "SCRIPT_EVENT_MC_INCREMENT_CONTROL_KILLS";
		case 140:
			return "SCRIPT_EVENT_MC_PLAYER_BRANCH_REQUEST";
		case 141:
			return "SCRIPT_EVENT_MC_GET_AND_DELIVER_ENTITY_HELD";
		case 142:
			return "SCRIPT_EVENT_MC_GET_AND_DELIVER_ENTITY_DROPPED";
		case 143:
			return "SCRIPT_EVENT_MC_VEHICLE_DISABLE_DRIVING";
		case 144:
			return "SCRIPT_EVENT_MC_TEAM_EARLY_END_BAIL";
		case 145:
			return "SCRIPT_EVENT_MC_START_LOOP_PTFX";
		case 146:
			return "SCRIPT_EVENT_MC_STOP_LOOP_PTFX";
		case 147:
			return "SCRIPT_EVENT_MC_DELETE_NET_ID";
		case 148:
			return "SCRIPT_EVENT_MC_CLEANUP_NET_ID";
		case 149:
			return "SCRIPT_EVENT_MC_POSSE_LEADER_TIEBREAK";
		case 150:
			return "SCRIPT_EVENT_MC_OBJECT_FORCE_WARPED_TO_SPAWN";
		case 151:
			return "SCRIPT_EVENT_MC_OBJECT_NEEDS_WARPING_TO_SPAWN";
		case 152:
			return "SCRIPT_EVENT_MC_OBJECT_MINIGAME_PASSED";
		case 153:
			return "SCRIPT_EVENT_MC_HOST_DELETE_FMMC_PED";
		case 154:
			return "SCRIPT_EVENT_MC_PED_DROWNED";
		case 155:
			return "SCRIPT_EVENT_DEATHMATCH_MARKED_MAN_UPDATE";
		case 156:
			return "SCRIPT_EVENT_DEATHMATCH_PITP_KILL";
		case 157:
			return "SCRIPT_EVENT_DEATHMATCH_JIP_EVENT";
		case 158:
			return "SCRIPT_EVENT_DEATHMATCH_FIRST_KILL";
		case 159:
			return "SCRIPT_EVENT_DEATHMATCH_LAST_KILL";
		case 160:
			return "SCRIPT_EVENT_DEATHMATCH_OBJECT_MINIGAME_PASSED";
		case 161:
			return "SCRIPT_EVENT_RC_CHECKPOINT_HIT";
		case 162:
			return "SCRIPT_EVENT_UGC_GAMEPLAY_CHANGE";
		case 163:
			return "SCRIPT_EVENT_UGC_UPDATE_PLAYER_LOCAL_HUD_SETTINGS";
		case 164:
			return "SCRIPT_EVENT_UGC_TRIGGER_FIRED";
		case 165:
			return "SCRIPT_EVENT_UGC_TRIGGER_FRIENDLY_FIRED";
		case 166:
			return "SCRIPT_EVENT_UGC_TRIGGER_COMPLETE";
		case 167:
			return "SCRIPT_EVENT_UGC_JIP_PLAYER_JOIN";
		case 168:
			return "SCRIPT_EVENT_UGC_JIP_SPECTATOR_JOIN";
		case 169:
			return "SCRIPT_EVENT_UGC_CONSTRIG_BINDING_RESET";
		case 170:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_HOST";
		case 171:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_SESSION_HOST";
		case 172:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_PROCESSED_SESSION_HOST";
		case 173:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_OWNER";
		case 174:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_PROCESSED_OWNER";
		case 175:
			return "SCRIPT_EVENT_UGC_CONSTRIG_BINDING_TRIGGERED";
		case 176:
			return "SCRIPT_EVENT_FETCH_MANAGER";
		case 177:
			return "SCRIPT_EVENT_FETCH";
		case 178:
			return "SCRIPT_EVENT_FETCH_CUTSCENE";
		case 179:
			return "SCRIPT_EVENT_FETCH_DIALOGUE";
		case 180:
			return "SCRIPT_EVENT_FETCH_VOLUME";
		case 181:
			return "SCRIPT_EVENT_BEAT_MANAGER";
		case 182:
			return "SCRIPT_EVENT_SCAN_MANAGER";
		case 183:
			return "SCRIPT_EVENT_NET_BEAT";
		case 184:
			return "SCRIPT_EVENT_NET_HUD";
		case 185:
			return "SCRIPT_EVENT_AMBIENT_DM_MANAGER";
		case 186:
			return "SCRIPT_EVENT_PERSONA_HONOR";
		case 187:
			return "SCRIPT_EVENT_PERSONA_PEDSHOTS";
		case 188:
			return "SCRIPT_EVENT_STORY_MISSION_INTRO_CORE_DIALOGUE";
		case 189:
			return "SCRIPT_EVENT_STORY_MISSION_INTRO_WARP_TO_MISSION";
		case 190:
			return "SCRIPT_EVENT_LOBBY_TOGGLE_MATCHMAKING";
		case 191:
			return "SCRIPT_EVENT_LOBBY_REQUESTED_PLAYERS_HORSE_DATA";
		case 192:
			return "SCRIPT_EVENT_LOBBY_RECEIVED_PLAYERS_HORSE_DATA";
		case 193:
			return "SCRIPT_EVENT_BOUNTY_TARGET";
		case 194:
			return "SCRIPT_EVENT_UGC_MISSION_REQUEST";
		case 195:
			return "SCRIPT_EVENT_LA_PHEROMONE_VIAL";
		case 196:
			return "SCRIPT_EVENT_TURN_IN";
		case 197:
			return "SCRIPT_EVENT_FREE_FROM_HOGTIE";
		case 198:
			return "SCRIPT_EVENT_PLAYER_CAMP";
		case 199:
			return "SCRIPT_EVENT_BG_SCRIPT";
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

void func_162(int iParam0, var uParam1, int* iParam2)
{
	struct<5> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_EVENT");
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_EVENT - GET_EVENT_DATA - Returned false.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_PROCESS_EVENT - sEventData.eEventType = ", func_157(Var0.f_4, 0));
	switch (Var0.f_4)
	{
		case 1:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_EVENT - Camp dog name has been changed.");
			func_204(&Var0, uParam1, iParam2);
			break;
		case 3:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_EVENT - Host is requesting playerDogOwner finds a spawn position for the dog.");
			func_205(&Var0, iParam2);
			break;
		case 4:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_EVENT - playerDogOwner has found a spawn positoin for the dog.");
			func_206(&Var0, uParam1, iParam2);
			break;
		case 5:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_EVENT - Host is inquiring if playerDogOwner has unlocked the camp raid feature.");
			func_207(&Var0, uParam1);
			break;
		case 6:
			DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_PROCESS_EVENT - playerDogOwner has checked whether or not they have unlocked the camp raid feature.");
			func_208(&Var0, uParam1);
			break;
	}
}

float func_163(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

float func_164(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_165(var uParam0)
{
	return *uParam0;
}

char* func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDFSP_NEEDS_RESET";
		case 1:
			return "NCDFSP_ROAD_NODES";
		case 2:
			return "NCDFSP_SCANNER";
		case 3:
			return "NCDFSP_TRAVERSABLE_PATH";
		case 4:
			return "NCDFSP_SUCCESS";
		case 5:
			return "NCDFSP_FAILURE";
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

Vector3 func_167()
{
	return 0f, 0f, 0f;
}

void func_168(var uParam0, vector3 vParam1)
{
	DEBUG::_0xA308F935BDECCEC0(56, 63, "NET_CAMP_DOG_FIND_SPAWN_COORDS_SET_COORDS setting location to ", &vParam1);
	uParam0->f_3.f_3 = { vParam1 };
}

void func_169(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_FIND_SPAWN_COORDS_SET_STATE - setting state to ", func_166(iParam1, 0));
	*uParam0 = iParam1;
}

bool func_170(vector3 vParam0)
{
	var uVar0;
	bool bVar1;

	DEBUG::_0x1B08D1EB9D8C4931(56, 63, "NET_CAMP_DOG_VERIFY_SPAWN_LOCATION - ", &vParam0);
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_VERIFY_SPAWN_LOCATION - vSpawnPos is inside a interior.");
		return false;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_VERIFY_SPAWN_LOCATION - Collision isn't marked as outside.");
		return false;
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar0, false))
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_VERIFY_SPAWN_LOCATION - No ground found.");
		return false;
	}
	bVar1 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bVar1)
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_VERIFY_SPAWN_LOCATION - Spawn position is visible.");
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		DEBUG::_0x4DC69742196F818A(8, 63, "NET_CAMP_DOG_VERIFY_SPAWN_LOCATION - vSpawnPos too close to a vehicle.");
		return false;
	}
	if (VOLUME::_0x769BB7626B8CDB06(vParam0, 15f, 0, 0, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_HORSE_FIND_VERIFY_SPAWN_POSITION - Too close to a volume lock center!");
		return false;
	}
	return true;
}

bool func_171(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				DEBUG::_0x4DC69742196F818A(8, 192, "scanData.iSpawnAttempts > MAX_SCAN_ATTEMPTS");
				*bParam4 = 1;
				return false;
			}
			DEBUG::_0x1B08D1EB9D8C4931(8, 192, "SCAN_GROUND_COORD: scan count = ", iParam3->f_2);
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_209(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_210(&(iParam3->f_1), iParam5, vParam0);
				if (!func_113(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_211(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			DEBUG::_0x1B08D1EB9D8C4931(8, 192, "SCAN_RESULTS");
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				DEBUG::_0x4DC69742196F818A(8, 192, "Scan became invalid? Treat it like failure");
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD failed to find valid terrain");
					if (bParam6 && iParam3->f_2 < 4)
					{
						DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD is going to re-scan");
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD has failed with no re-scan");
						*bParam4 = 1;
					}
					break;
				case 3:
					DEBUG::_0x4DC69742196F818A(8, 192, "SCAN_GROUND_COORD has found a valid location");
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
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

char* func_172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "QS_NOT_FOUND";
		case 1:
			return "QS_COMPLETE";
		case 2:
			return "QS_PENDING";
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

bool func_173(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_174(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

char[] func_175(char[4] cParam0)
{
	return cParam0;
}

void func_176(var uParam0, int iParam1)
{
	if (func_100(uParam0->f_10, iParam1))
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 63, "NET_CAMP_DOG_MANAGER_PLAYER_SET_BIT - Setting bit ", func_212(iParam1, 0));
	func_104(&(uParam0->f_10), iParam1);
}

bool func_177()
{
	int iVar0;

	if (func_213())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904703[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_178(bool bParam0)
{
	DEBUG::_0x4DC69742196F818A(8, 105, "Checking CAN_TUTORIAL_DISPLAY ");
	if (func_214())
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Another help running. Not updating tutorial manager.");
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Screen isn't fully faded in. Not updating tutorial manager.");
		return false;
	}
	if (func_215(&(Global_1102630.f_4), 1, 5))
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Currently Respawning. Not updating tutorial manager.");
		return false;
	}
	if (!bParam0)
	{
		if (!func_177())
		{
			DEBUG::_0x4DC69742196F818A(8, 105, "No tutorials are pending. Not updating tutorial manager.");
			return false;
		}
	}
	if ((Global_13 || Global_1048584) || func_216())
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Tutorials can't run when cutscene is active.");
		return false;
	}
	if (!func_217())
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Tutorials are currently disabled...");
		return false;
	}
	if (func_218())
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Tutorials can't run when player menu is up.");
		return false;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "Tutorials can't run while in the mission creator.");
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "Tutorials can't run while pause menu is up.");
		return false;
	}
	if ((Global_1915867.f_20638 && Global_1915867.f_20241.f_43 == 2) && Global_1940463.f_2)
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Tutorials can't run while satchel sell menu is up.");
		return false;
	}
	if (func_219())
	{
		DEBUG::_0x4DC69742196F818A(8, 105, "Tutorials are currently disabled (this frame only)...");
		return false;
	}
	return true;
}

void func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_180(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_220(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_183(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_221(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_222(iParam0, 0));
		return false;
	}
	if (func_223(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_222(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_181(iParam0, 1)) || func_224(32768))
	{
		if (!func_181(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_217())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

bool func_181(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_182(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_183(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

char* func_184(int iParam0)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, "BIT0 ", 64);
	iVar8 = 0;
	iVar8 = 1;
	while (iVar8 <= 32)
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			StringIntConCat(&cVar0, 1, 64);
		}
		else
		{
			StringIntConCat(&cVar0, 0, 64);
		}
		if ((iVar8 % 4) == 0)
		{
			StringConCat(&cVar0, " ", 64);
		}
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar8++;
	}
	StringConCat(&cVar0, "BIT31", 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

bool func_185(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(bParam0, false);
	return STREAMING::HAS_MODEL_LOADED(bParam0);
}

int func_186(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(bParam0, vParam1, bParam4, bParam6, bParam7, false, !bParam9);
	DEBUG::_0xA308F935BDECCEC0(174760, 0, "CREATE_SCRIPT_PED - created ped ", UNK_0xE02C950E4C991632(iVar0), " with model ", func_140(bParam0, 0), " at ", MISC::_0x6C4DBF553885F9EB(vParam1), " : ", MISC::_0x2B6846401D68E563(bParam4, 4));
	UNK_0x355E72323AEE83CC(0, 6);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
		DEBUG::_0xA308F935BDECCEC0(40, 0, "CREATE_SCRIPT_PED - applying random outfit to ped ", UNK_0xE02C950E4C991632(iVar0));
	}
	return iVar0;
}

int func_187(bool bParam0, bool bParam1)
{
	if (!func_94(bParam0, 0))
	{
		return func_226(func_225(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_227(bParam1, 0), " for item ", func_1(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_189(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_190(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_191(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_228(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_192(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_193(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_194(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 0, "GET_NUMBER_OF_DAYS_IN_MONTH: Invalid year [", iParam1, "] passed. iYear < 0. Using default year 0.");
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 0, "GET_NUMBER_OF_DAYS_IN_MONTH: Invalid month passed. Returning default 30 days.");
	return 30;
}

bool func_195(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_150(iParam1) || !func_150(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_196(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_197(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	*uParam1 = { Global_1134820[iVar0 /*83*/].f_38.f_8 };
	return true;
}

int func_198()
{
	return Global_1051590.f_12;
}

char* func_199()
{
	return "unnamed";
}

int func_200(int iParam0)
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

bool func_201(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_229(36, iParam0);
}

int func_202(int iParam0)
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

bool func_203(char* sParam0)
{
	if (func_230(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_231(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

void func_204(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_DOG_NAME_CHANGED");
	if (uParam0->f_7 != uParam1->f_2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_DOG_NAME_CHANGED - sEventData.playerDogOwner is not this camp's playerDogOwner.");
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_DOG_NAME_CHANGED - pedDog does not exist.");
		return;
	}
	func_232(iParam2, uParam0->f_8);
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_DOG_NAME_CHANGED - sEventData.tlNewName = ", &(uParam0->f_8));
	bVar1 = MISC::_0xE98D55C5983F2509(iVar0);
	DEBUG::_0xA308F935BDECCEC0(40, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_DOG_NAME_CHANGED - ILO prompt unregister bSuccess = ", MISC::_0xF216F74101968DB0(bVar1));
	func_127(iParam2, 1);
	func_127(iParam2, 3);
	func_36(iParam2, 2);
	func_36(iParam2, 4);
}

void func_205(var uParam0, int* iParam1)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_FIND_SPAWN_POSITION");
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_7)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_FIND_SPAWN_POSITION - localPlayer is not the sEventData.playerDogOwner");
		return;
	}
	func_119(&(iParam1->f_10));
	func_36(iParam1, 5);
}

void func_206(var uParam0, var uParam1, int* iParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_FOUND_SPAWN_POSITION");
	if (uParam0->f_7 != uParam1->f_2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_FOUND_SPAWN_POSITION - sEventData.playerDogOwner is not this camp's playerDogOwner.");
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_FOUND_SPAWN_POSITION - Local player is not the host of this camp dog script.");
		return;
	}
	func_119(&(iParam2->f_10));
	func_168(&(iParam2->f_10), uParam0->f_16);
	func_146(uParam1, 1);
}

void func_207(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_CHECK_UNLOCK");
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_7)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_CHECK_UNLOCK - localPlayer is not the sEventData.playerDogOwner");
		return;
	}
	bVar1 = UNLOCK::_UNLOCK_IS_UNLOCKED(uParam0->f_6);
	func_233(uParam1->f_2, 451736625, bVar1);
}

void func_208(var uParam0, var uParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_UNLOCK_LOCKED");
	if (uParam0->f_7 != uParam1->f_2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_UNLOCK_LOCKED - sEventData.playerDogOwner is not this camp's playerDogOwner.");
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_UNLOCK_LOCKED - Local player is not the host of this camp dog script.");
		return;
	}
	if (uParam0->f_19)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_UNLOCK_LOCKED - This camp dog's owner has unlocked the camp raid warning feature.");
		func_146(uParam1, 2);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 63, "NET_CAMP_DOG_HANDLE_EVENT_TYPE_UNLOCK_LOCKED - This camp dog's owner has not unlocked the camp raid warning feature.");
		func_146(uParam1, 3);
	}
}

void func_209(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_113(vParam2))
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(40f, 100f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_234(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_234(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_235(vParam2, 1);
				iVar1 = func_236(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_234(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_234(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_234(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(80f, 150f, 17.5f, iParam1));
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
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_234(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_234(150f, 190f, 10f, iParam1));
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

void func_210(var uParam0, int iParam1, vector3 vParam2)
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
			if (func_235(vParam2, 1) == 5)
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

Vector3 func_211(vector3 vParam0)
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

char* func_212(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NCDMP_FLAG_DOG_IS_EQUIPPED";
		case 1:
			return "NCDMP_FLAG_DOG_HAS_DIED";
		case 2:
			return "NCDMP_FLAG_CAMP_RAID_PENDING";
		case 3:
			return "NCDMP_FLAG_CAMP_RAID_WARNING_DONE";
		case 4:
			return "NCDMP_FLAG_CAMP_RAID_RUNNING";
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

bool func_213()
{
	return Global_1904703.f_8782 != -1;
}

bool func_214()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_215(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_216()
{
	return Global_1072032.f_28725.f_22.f_3 != 0;
}

bool func_217()
{
	if (!func_237())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

bool func_218()
{
	return Global_1896750.f_398;
}

bool func_219()
{
	var uVar0;

	if (!func_237())
	{
		return false;
	}
	uVar0 = Global_1904703.f_8784;
	Global_1904703.f_8784 = 0;
	return uVar0;
}

bool func_220(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_221(int iParam0)
{
	if (func_181(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_222(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2:
			return "TF_DUMMY_FLAG";
		case -1:
			return "TF_INVALID";
		case 0:
			return "TF_SICK_ITEM_DEGRADE";
		case 1:
			return "TF_WHISTLE_OUT_OF_RANGE_LONG_1";
		case 2:
			return "TF_WHISTLE_OUT_OF_RANGE_SHORT";
		case 3:
			return "TF_WHISTLE_OUT_OF_RANGE_MAIN";
		case 4:
			return "TF_WHISTLE_OUT_OF_RANGE_TEMP";
		case 5:
			return "TF_WHISTLE_BOTH_OUT_OF_RANGE";
		case 6:
			return "TF_WHISTLE_OUT_OF_RANGE_LONG_2";
		case 7:
			return "TF_WHISTLE_UNBONDED";
		case 8:
			return "TF_WHISTLE_CAMP";
		case 9:
			return "TF_WHISTLE_CAMP_HITCHED";
		case 10:
			return "TF_WHISTLE_HORSE_LOST";
		case 11:
			return "TF_WHISTLE_NO_HORSES";
		case 12:
			return "TF_WHISTLE_NO_HORSE_GUAMA";
		case 13:
			return "TF_WHISTLE_IN_INTERIOR";
		case 14:
			return "TF_WHISTLE_IN_CAVE";
		case 15:
			return "TF_WHISTLE_IN_TUNNEL";
		case 16:
			return "TF_WHISTLE_SPOOKED";
		case 17:
			return "TF_HORSE_CMD_CAMP";
		case 18:
			return "TF_HORSE_CMD_RANCH";
		case 19:
			return "TF_HORSE_NEW_TEMP_BONDED";
		case 20:
			return "TF_HORSE_NEW_TEMP_BONDED_PRE_SADDLE";
		case 21:
			return "TF_HORSE_BONDLVL_2_PERKS";
		case 22:
			return "TF_HORSE_BONDLVL_3_PERKS";
		case 23:
			return "TF_HORSE_BONDLVL_4_PERKS";
		case 24:
			return "TF_HORSE_HUNGRY";
		case 25:
			return "TF_HORSE_STARVING";
		case 26:
			return "TF_HORSE_DIRTY";
		case 27:
			return "TF_HORSE_FILTHY";
		case 28:
			return "TF_HORSE_CORE_HEALTH_50";
		case 29:
			return "TF_HORSE_CORE_STAMINA_50";
		case 30:
			return "TF_HORSE_CORE_HEALTH_EMPTY";
		case 31:
			return "TF_HORSE_CORE_STAMINA_EMPTY";
		case 32:
			return "TF_HORSE_CORE_BOTH_EMPTY";
		case 33:
			return "TF_HORSE_CORE_STAMINA_EMPTY_IN_WATER";
		case 34:
			return "TF_HORSE_SPRINT_STAMINA_1";
		case 35:
			return "TF_HORSE_SPRINT_STAMINA_2";
		case 36:
			return "TF_HORSE_BUCK_OVERSPURRED";
		case 37:
			return "TF_HORSE_BUCK_PLAYER_PREDATOR";
		case 38:
			return "TF_COMPANION_HORSE_BUCK_PLAYER";
		case 39:
			return "TF_COMPANION_HORSE_MOUNTED";
		case 40:
			return "TF_COMPANION_HORSE_BLOCKED";
		case 41:
			return "TF_HORSE_SADDLED_HORSE";
		case 42:
			return "TF_HORSE_SADDLE_SENT_TO_SHOP";
		case 43:
			return "TF_HORSE_FED";
		case 44:
			return "TF_HORSE_HITCHED";
		case 45:
			return "TF_HORSE_COMMANDS_UNLOCKED";
		case 46:
			return "TF_HORSE_BOND_LOCK_ACTION";
		case 47:
			return "TF_HORSE_TAME_LOCKON";
		case 48:
			return "TF_HORSE_TAME_LOCKON_2";
		case 49:
			return "TF_HORSE_TAME_APPROACH";
		case 50:
			return "TF_HORSE_TAME_SPOOKED";
		case 51:
			return "TF_HORSE_TAME_MOUNT";
		case 52:
			return "TF_HORSE_TAME_MOUNTED";
		case 53:
			return "TF_HORSE_TAME_SUCCESS";
		case 54:
			return "TF_HORSE_TAME_BUCKED_OFF";
		case 55:
			return "TF_HORSE_DEAD_CHPT2";
		case 56:
			return "TF_HORSE_REVIVE";
		case 57:
			return "TF_HORSE_REVIVE_NO_ITEM";
		case 58:
			return "TF_HORSE_REVIVE_NO_ITEM_PRE_CRAFT";
		case 59:
			return "TF_HORSE_STABLE_OWNED_1";
		case 60:
			return "TF_HORSE_STABLE_OWNED_2";
		case 61:
			return "TF_HORSE_AGITATED_ANIMAL_FOOT";
		case 62:
			return "TF_HORSE_AGITATED_ANIMAL_MOUNT";
		case 63:
			return "TF_HORSE_CARRYING_ITEMS";
		case 64:
			return "TF_HORSE_SADDLE_DROPPED";
		case 65:
			return "TF_HORSE_SADDLE_OUT_OF_REACH";
		case 66:
			return "TF_HORSE_STAMINA_WITH_LARGE_ITEM";
		case 67:
			return "TF_HORSE_SADDLE_BLOCKED";
		case 68:
			return "TF_HORSE_CARGO_KILL_FAST";
		case 69:
			return "TF_HORSE_CARGO_KILL_STABLE";
		case 70:
			return "TF_VEHICLE_DESTROYED";
		case 71:
			return "TF_VEHICLE_FULL_CARCASS";
		case 72:
			return "TF_VEHICLE_FULL_PELTS";
		case 73:
			return "TF_VEHICLE_CARGO_DISABLED";
		case 74:
			return "TF_VEHICLE_UNSUPPORTED_CARCASS";
		case 75:
			return "TF_VEHICLE_UNSUPPORTED_PELT";
		case 76:
			return "TF_VEHICLE_UNSUPPORTED_GENERAL";
		case 77:
			return "TF_VEHICLE_WHISTLE_MOUNTED";
		case 78:
			return "TF_VEHICLE_WHISTLE_BOUNTY_IN_BACK";
		case 79:
			return "TF_VEHICLE_COULDNT_FIND";
		case 80:
			return "TF_VEHICLE_KICKED_BY_OWNER";
		case 81:
			return "TF_VEHICLE_YOU_DO_NOT_OWN";
		case 82:
			return "TF_HORSE_MATCH_SPEED_STAMINA";
		case 83:
			return "TF_HAT_DESTROYED";
		case 84:
			return "TF_HAT_DESTROYED_NO_HORSE_ACCESS";
		case 85:
			return "TF_HAT_PICKED_UP_OWNABLE_HAT_INTRO";
		case 86:
			return "TF_HAT_PICKED_UP_OWNABLE_HAT";
		case 87:
			return "TF_HAT_PICKED_UP_TEMP_HAT";
		case 88:
			return "TF_WARDROBE_NO_COLD";
		case 89:
			return "TF_WARDROBE_NO_HOT";
		case 90:
			return "TF_WARDROBE_NO_BOTH";
		case 91:
			return "TF_OFFHAND_HOLSTER_UNLOCK";
		case 92:
			return "TF_RPG_STAT_GAIN";
		case 93:
			return "TF_TALISMAN_SINGLE_INGREDIENT";
		case 94:
			return "TF_TALISMAN_CAN_CRAFT";
		case 95:
			return "TF_TRINKET_CAN_CRAFT";
		case 96:
			return "TF_HOT_START";
		case 97:
			return "TF_COLD_START";
		case 98:
			return "TF_DRUNK_START";
		case 99:
			return "TF_CORE_LOW";
		case 100:
			return "TF_LOW_STAMINA_CORE_START";
		case 101:
			return "TF_LOW_DEAD_EYE_CORE_START";
		case 102:
			return "TF_LOW_HEALTH_CORE_START";
		case 103:
			return "TF_ITEM_DEGRADE";
		case 104:
			return "TF_PLAYER_POISONED";
		case 105:
			return "TF_PLAYER_POISONED_WORN_OFF";
		case 106:
			return "TF_WEIGHT_CHANGED";
		case 107:
			return "TF_WEIGHT_MAX";
		case 108:
			return "TF_WEIGHT_MIN";
		case 109:
			return "TF_EAT_FOOD_1";
		case 110:
			return "TF_EAT_FOOD_2";
		case 111:
			return "TF_MEAT_SPOIL_1";
		case 112:
			return "TF_MEAT_SPOIL_2";
		case 113:
			return "TF_MEAT_SPOIL_3";
		case 114:
			return "TF_TIMED_CAMPFIRE";
		case 115:
			return "TF_TIMED_GINSENG";
		case 116:
			return "TF_TIMED_SAGE";
		case 117:
			return "TF_TIMED_INDIAN_TOBACCO";
		case 118:
			return "TF_TIMED_YARROW";
		case 119:
			return "TF_TIMED_WILD_CARROTS";
		case 120:
			return "TF_TIMED_BULRUSH";
		case 121:
			return "TF_TIMED_OLEANDER";
		case 122:
			return "TF_TIMED_BERRIES";
		case 123:
			return "TF_TIMED_SKINNING";
		case 124:
			return "TF_TIMED_FLIGHT_FEATHER";
		case 125:
			return "TF_DEATH_HEALTH_TIP";
		case 126:
			return "TF_DEATH_MONEY_LOSS";
		case 127:
			return "TF_DEATH_LOCATION";
		case 128:
			return "TF_LEAVE_BOAT";
		case 129:
			return "TF_BOUNTY_HUNTER";
		case 130:
			return "TF_BOUNTY_POSTER";
		case 131:
			return "TF_BOUNTY_CRIMINAL";
		case 132:
			return "TF_BOUNTY_WANTED";
		case 133:
			return "TF_TOWN_LOCKDOWN_1";
		case 134:
			return "TF_TOWN_LOCKDOWN_2";
		case 135:
			return "TF_BLACKWATER_LOCKDOWN";
		case 136:
			return "TF_WAGON_FENCE";
		case 137:
			return "TF_WAGON_FENCE_STOLEN";
		case 138:
			return "TF_WAGON_FENCE_AGGRO";
		case 139:
			return "TF_WAGON_FENCE_PLAYER_WANTED";
		case 140:
			return "TF_WAGON_FENCE_DESTROYED";
		case 141:
			return "TF_HORSE_FENCE";
		case 142:
			return "TF_HORSE_FENCE_SP";
		case 143:
			return "TF_HORSE_FENCE_RIDE";
		case 144:
			return "TF_HORSE_FENCE_MP";
		case 145:
			return "TF_HOME_ROBBERY";
		case 146:
			return "TF_RUSTLING";
		case 147:
			return "TF_RHMR0_SHADY_SHOP";
		case 148:
			return "TF_POKER_UNLOCK";
		case 149:
			return "TF_UPGRADE_AMMO_BANDOLIER";
		case 150:
			return "TF_UPGRADE_AMMO_BELT";
		case 151:
			return "TF_UPGRADE_AMMO_RE_BANDOLIER";
		case 152:
			return "TF_UPGRADE_AMMO_RE_BELT";
		case 153:
			return "TF_UPGRADE_AMMO_DEFAULT";
		case 154:
			return "TF_HOME_ROBBERY_TIP";
		case 155:
			return "TF_INTERMENT_CAMP_TIP";
		case 156:
			return "TF_LASSO_ACQUIRED";
		case 157:
			return "TF_LASSO";
		case 158:
			return "TF_LASSO_ON_HORSE";
		case 159:
			return "TF_HOGTIE";
		case 160:
			return "TF_HOGTIE_CARRY";
		case 161:
			return "TF_PLAYER_BEING_GRAPPLED";
		case 162:
			return "TF_NO_GUNS_IN_RHODES";
		case 163:
			return "TF_NO_GUNS_IN_RHODES_DEPUTY";
		case 164:
			return "TF_NO_GUNS_IN_CALIGA";
		case 165:
			return "TF_NO_GUNS_IN_CALIGA_DEPUTY";
		case 166:
			return "TF_WORN_WEAPON";
		case 167:
			return "TF_COMPANION_GROUP_INVITE_INSIDE_CARAVAN";
		case 168:
			return "TF_COMPANION_GROUP_INVITE_OUTSIDE_CARAVAN";
		case 169:
			return "TF_COACH_ROBBERY";
		case 170:
			return "TF_SHOP_ROBBERY";
		case 171:
			return "TF_TRAIN_ROBBERY";
		case 172:
			return "TF_TRAIN_ROBBERY_HORSE";
		case 173:
			return "TF_TRAIN_ROBBERY_AGGRO";
		case 174:
			return "TF_TRAIN_ROBBERY_AGGRO2";
		case 175:
			return "TF_TRAIN_ROBBERY_STOP";
		case 176:
			return "TF_TRAIN_ROBBERY_STOP2";
		case 177:
			return "TF_TRAIN_ROBBERY_TRGTS";
		case 178:
			return "TF_TRAIN_ROBBERY_HLDP";
		case 179:
			return "TF_TRAIN_ROBBERY_RESIST";
		case 180:
			return "TF_TRAIN_ROBBERY_ROB_IN_COMBAT";
		case 181:
			return "TF_LOANSHARKING";
		case 182:
			return "TF_LS_DONATE";
		case 183:
			return "TF_LS_CONFRONT";
		case 184:
			return "TF_LS_SEARCH";
		case 185:
			return "TF_LS_SKIN";
		case 186:
			return "TF_LS_LOOT";
		case 187:
			return "TF_LS_FIRST_SEARCH";
		case 188:
			return "TF_LS_RETURN_DEBT";
		case 189:
			return "TF_COMPANIONS";
		case 190:
			return "TF_COMPANION_WHEEL";
		case 191:
			return "TF_INVITE_COMPANION";
		case 192:
			return "TF_COMPANION_ACTIVITY_COOL_DOWN";
		case 193:
			return "TF_COMPANION_ACTIVITY_BLOCKED";
		case 194:
			return "TF_COMPANION_PROPERTY_RESTRICTION";
		case 195:
			return "TF_COMPANIONS_REVIVE";
		case 196:
			return "TF_COMPANIONS_INJURED_RETURN_TO_CAMP";
		case 197:
			return "TF_COMPANIONS_ABANDONED";
		case 198:
			return "TF_COMPANION_DRAG";
		case 199:
			return "TF_ITEM_REQUEST_FIRST_TRACKED";
		case 200:
			return "TF_COMPANION_REQUEST_OBTAINED";
		case 201:
			return "TF_COMPANIONS_RETURN_TO_CAMP";
		case 202:
			return "TF_DOG_LEVEL_UP";
		case 203:
			return "TF_CAMP_NO_COMBAT";
		case 204:
			return "TF_TOWN_NO_COMBAT";
		case 205:
			return "TF_TOWN_DISMOUNT";
		case 206:
			return "TF_CAMP_CRAFT_QUICK";
		case 207:
			return "TF_CAMP_DISABLE_COMBAT";
		case 208:
			return "TF_FIRST_RC_APPROACHED";
		case 209:
			return "TF_FIRST_RC_AREA_APPROACHED";
		case 210:
			return "TF_FIRST_RSC_TASK";
		case 211:
			return "TF_FIRST_RSC_TASK_AREA";
		case 212:
			return "TF_FIRST_RC_TASK";
		case 213:
			return "TF_FIRST_RC_NO_TASK";
		case 214:
			return "TF_RCM_FIRST_CARAVAN_CAMP_LETTER";
		case 215:
			return "TF_RCM_CARAVAN_CAMP_LETTER";
		case 216:
			return "TF_JOURNAL_ACCESS0";
		case 217:
			return "TF_JOURNAL_ACCESS1";
		case 218:
			return "TF_JOURNAL_ACCESS2";
		case 219:
			return "TF_FIRST_HERB_FOUND";
		case 220:
			return "TF_COACHROB_INTRO";
		case 221:
			return "TF_SKINNING";
		case 222:
			return "TF_MEAT_SPOIL_SKINNING";
		case 223:
			return "TF_BED";
		case 224:
			return "TF_DEADEYE_1";
		case 225:
			return "TF_EAGLE_EYE";
		case 226:
			return "TF_ROWBOAT";
		case 227:
			return "TF_HUNTING_BLIP";
		case 228:
			return "TF_TRACKING_ZONE_DISCOVERED";
		case 229:
			return "TF_TRACKING_ZONE_AREA_BUSY";
		case 230:
			return "TF_TRACKING_ZONE_COOLDOWN";
		case 231:
			return "TF_AMB_DUEL_START";
		case 232:
			return "TF_AMB_DUEL_CHAL";
		case 233:
			return "TF_AMB_DUEL_CAN_CHAL";
		case 234:
			return "TF_AMB_DUEL_NO_WEAPON";
		case 235:
			return "TF_RECIPE_JOURNAL_ADD";
		case 236:
			return "TF_HERB_JOURNAL_ADD";
		case 237:
			return "TF_HERB_JOURNAL_PROP";
		case 238:
			return "TF_HERB_FULL_JOURNAL_ADD";
		case 239:
			return "TF_BERRY_BLACK_BERRY";
		case 240:
			return "TF_BERRY_EVERGREEN_HUCKLEBERRY";
		case 241:
			return "TF_BERRY_RED_RASPBERRY";
		case 242:
			return "TF_BERRY_WINTERGREEN_BERRY";
		case 243:
			return "TF_HERB_ALASKAN_GINSENG";
		case 244:
			return "TF_HERB_AMERICAN_GINSENG";
		case 245:
			return "TF_HERB_YARROW";
		case 246:
			return "TF_HERB_ENGLISH_MACE";
		case 247:
			return "TF_HERB_MILKWEED";
		case 248:
			return "TF_HERB_VANILLA_FLOWER";
		case 249:
			return "TF_HERB_OLEANDER_SAGE";
		case 250:
			return "TF_HERB_DESERT_SAGE";
		case 251:
			return "TF_HERB_HARRIETUM_OFFICINALIS";
		case 252:
			return "TF_HERB_HUMMINGBIRD_SAGE";
		case 253:
			return "TF_HERB_RED_SAGE";
		case 254:
			return "TF_HERB_VIOLET_SNOWDROP";
		case 255:
			return "TF_HERB_WILD_FEVERFEW";
		case 256:
			return "TF_HERB_BURDOCK_ROOT";
		case 257:
			return "TF_HERB_INDIAN_TOBACCO";
		case 258:
			return "TF_HERB_GOLDEN_CURRANT";
		case 259:
			return "TF_HERB_BLACK_CURRANT";
		case 260:
			return "TF_HERB_PRAIRIE_POPPY";
		case 261:
			return "TF_HORSE_HERB_WILD_CARROTS";
		case 262:
			return "TF_HORSE_HERB_COMMON_BULRUSH";
		case 263:
			return "TF_MUSHROOM_BAY_BOLETE";
		case 264:
			return "TF_MUSHROOM_CHANTERELLES";
		case 265:
			return "TF_MUSHROOM_PARASOL_MUSHROOM";
		case 266:
			return "TF_MUSHROOM_RAMS_HEAD";
		case 267:
			return "TF_SPICE_CREEPING_THYME";
		case 268:
			return "TF_SPICE_OREGANO";
		case 269:
			return "TF_SPICE_WILD_MINT";
		case 270:
			return "TF_HEALTH_XP_ITEM";
		case 271:
			return "TF_DEADEYE_XP_ITEM";
		case 272:
			return "TF_STAMINA_XP_ITEM";
		case 273:
			return "TF_DEADEYE_ITEM_MAX_LEVEL";
		case 274:
			return "TF_HEALTH_ITEM_MAX_LEVEL";
		case 275:
			return "TF_STAMINA_ITEM_MAX_LEVEL";
		case 276:
			return "TF_HEALTH_LEVEL_UP";
		case 277:
			return "TF_DEADEYE_LEVEL_UP";
		case 278:
			return "TF_STAMINA_LEVEL_UP";
		case 279:
			return "TF_TITHE_ENTER_CAMP";
		case 280:
			return "TF_TITHE_FIRST_REQUEST";
		case 281:
			return "TF_TITHE_HAVE_REQUEST";
		case 282:
			return "TF_TITHE_FINISH_REQUEST";
		case 283:
			return "TF_TITHE_FOUND_REQUEST";
		case 284:
			return "TF_TITHE_GIVE_MONEY";
		case 285:
			return "TF_TITHE_GIVE_CARCASS";
		case 286:
			return "TF_TITHE_CRAFT1";
		case 287:
			return "TF_TITHE_CRAFT2";
		case 288:
			return "TF_WAYPOINTS";
		case 289:
			return "TTL_LAW_WITNESS_INV";
		case 290:
			return "TTL_LAW_WITNESS_KNOWN";
		case 291:
			return "TTL_LAW_WITNESS_UNKNOWN";
		case 292:
			return "TTL_LAW_WITNESS_SCARE";
		case 293:
			return "TTL_LAW_WANTED_1";
		case 294:
			return "TTL_LAW_WANTED_2";
		case 295:
			return "TTL_LAW_WANTED_1_GUA";
		case 296:
			return "TTL_LAW_WANTED_2_GUA";
		case 297:
			return "TTL_LAW_EVADE";
		case 298:
			return "TTL_LAW_ARREST";
		case 299:
			return "TTL_LAW_LOITERING";
		case 300:
			return "TTL_LAW_TRESPASSING";
		case 301:
			return "TTL_LAW_INTERROGATE";
		case 302:
			return "TTL_LAW_APPEARANCE_MEMORY";
		case 303:
			return "TTL_LAW_BOUNTY_SPAWN";
		case 304:
			return "TTL_LAW_BOUNTY_RESPAWN";
		case 305:
			return "TTL_LAW_BOUNTY_JAIL";
		case 306:
			return "TTL_PLAYER_ARRESTED";
		case 307:
			return "TTL_LAW_CAPTURED";
		case 308:
			return "TTL_LAW_EXTRA_COPS1";
		case 309:
			return "TTL_LAW_EXTRA_COPS2";
		case 310:
			return "TTL_LAW_LESS_COPS";
		case 311:
			return "TTL_LAW_BOUNTY_SAVED";
		case 312:
			return "TTL_LAW_PURSUIT_END";
		case 313:
			return "TTL_LAW_BOUNTY_POSTED";
		case 314:
			return "TTL_LAW_CRIME_WITH_MASK";
		case 315:
			return "TTL_LAW_CHANGED_CLOTHES";
		case 316:
			return "TTL_LAW_GRABBED_POSTER";
		case 317:
			return "TTL_LAW_JAIL_SENTENCE";
		case 318:
			return "TTL_LAW_JAIL_ESCAPE";
		case 319:
			return "TTL_AGGRO_PED";
		case 320:
			return "TF_WAIT_CAMP_UPGRADE";
		case 321:
			return "TF_WAIT_CAMP_CHORE";
		case 322:
			return "TTL_CAMPING_BUY";
		case 323:
			return "TF_PLAYER_CHORES_1";
		case 324:
			return "TF_PLAYER_CHORES_2";
		case 325:
			return "TF_PLAYER_CHORES_3";
		case 326:
			return "TF_PLAYER_CHORES_START";
		case 327:
			return "TF_PLAYER_CHORES_START_BEECHERS";
		case 328:
			return "TTL_WPN_PLACEEXPLOSIVE";
		case 329:
			return "TF_RARE_FISH";
		case 330:
			return "TTL_FIGHTINT";
		case 331:
			return "TF_CAMPFIRE_OFFER1";
		case 332:
			return "TF_CAMPFIRE_GREET";
		case 333:
			return "TF_SP_GANG_HIDEOUTS";
		case 334:
			return "TF_SP_GANG_CAMPS";
		case 335:
			return "TF_CAMPITEM_REST_OPT";
		case 336:
			return "TF_CAMPFIRE_SIT";
		case 337:
			return "TF_RP_KNOWN_RECIPE";
		case 338:
			return "TF_RP_SPECIAL_HORSE_MEDICINE";
		case 339:
			return "TF_RP_SPECIAL_HORSE_REVIVER";
		case 340:
			return "TF_RP_HORSE_OINTMENT";
		case 341:
			return "TF_RP_SPECIAL_HORSE_STIMULANT";
		case 342:
			return "TF_RP_SUPER_MEAL";
		case 343:
			return "TF_RP_SPECIAL_MEDICINE";
		case 344:
			return "TF_RP_SPECIAL_RESTORATIVE";
		case 345:
			return "TF_RP_SPECIAL_SNAKE_OIL";
		case 346:
			return "TF_RP_SPECIAL_TONIC";
		case 347:
			return "TF_RP_POTENT_HERBIVORE_BAIT";
		case 348:
			return "TF_RP_POTENT_PREDATOR_BAIT";
		case 349:
			return "TF_RP_PREDATOR_BAIT";
		case 350:
			return "TF_RP_DYNAMITE_ARROW";
		case 351:
			return "TF_RP_FIRE_ARROW";
		case 352:
			return "TF_RP_IMPROVED_ARROW";
		case 353:
			return "TF_RP_POISON_ARROW";
		case 354:
			return "TF_RP_SMALL_GAME_ARROW";
		case 355:
			return "TF_RP_VOLATILE_DYNAMITE";
		case 356:
			return "TF_RP_FIRE_BOTTLE";
		case 357:
			return "TF_RP_VOLATILE_FIRE_BOTTLE";
		case 358:
			return "TF_RP_HOMING_TOMAHAWK";
		case 359:
			return "TF_RP_IMPROVED_THROWING_KNIFE";
		case 360:
			return "TF_RP_IMPROVED_TOMAHAWK";
		case 361:
			return "TF_RP_POISON_THROWING_KNIFE";
		case 362:
			return "TF_RP_SPLIT_POINT_AMMO";
		case 363:
			return "TF_RP_EXPRESS_EXPLOSIVE_AMMO";
		case 364:
			return "TF_RP_SHOTGUN_BUCKSHOT_INCENDIARY";
		case 365:
			return "TF_RP_SHOTGUN_SLUG_EXPLOSIVE";
		case 366:
			return "TF_BAIT_HERBIVORE_USED";
		case 367:
			return "TF_BAIT_PREDATOR_USED";
		case 368:
			return "TF_TREASUREMAP_FIRST_FIND";
		case 369:
			return "TF_TREASUREMAP_LS_HORSECHASE";
		case 370:
			return "TF_TREASURE_HUNTER_REMINDER";
		case 371:
			return "TF_DINO_BONES";
		case 372:
			return "TF_DINO_BONES_FIRST_REMINDER";
		case 373:
			return "TF_DINO_BONES_FIRST_REMINDER_STAGE1";
		case 374:
			return "TF_DINO_BONES_LAST_REMINDER";
		case 375:
			return "TF_DINO_BONES_ALL_TURNED_IN";
		case 376:
			return "TF_DINO_BONES_FINGER_BONE";
		case 377:
			return "TF_DINO_BONES_INVITATION_USED";
		case 378:
			return "TF_LEGENDARY_FISH_INVITATION_USED";
		case 379:
			return "TF_LITTLE_EGRET_BEFORE_QUEST";
		case 380:
			return "TF_LITTLE_EGRET_PLUME_TURN_IN";
		case 381:
			return "TF_REDDISH_EGRET_BEFORE_QUEST";
		case 382:
			return "TF_REDDISH_EGRET_PLUME_TURN_IN";
		case 383:
			return "TF_SNOWY_EGRET_BEFORE_QUEST";
		case 384:
			return "TF_SNOWY_EGRET_PLUME_TURN_IN";
		case 385:
			return "TF_HERON_FEATHERS_BEFORE_QUEST";
		case 386:
			return "TF_HERON_FEATHERS_TURN_IN";
		case 387:
			return "TF_SPOONBILL_FEATHERS_BEFORE_QUEST";
		case 388:
			return "TF_SPOONBILL_FEATHERS_TURN_IN";
		case 389:
			return "TF_EXOTIC_FOUND";
		case 390:
			return "TF_GATOR_EGGS_BEFORE_QUEST";
		case 391:
			return "TF_GATOR_EGGS_FOUND";
		case 392:
			return "TF_GATOR_EGGS_TURN_IN";
		case 393:
			return "TF_LEGENDARY_FISH_CAUGHT";
		case 394:
			return "TF_LEGENDARY_FISH_CAUGHT_AFTER_STAGE1";
		case 395:
			return "TF_LEGENDARY_FISH_MAILED_ONE";
		case 396:
			return "TF_LEGENDARY_FISH_MAILED_TEN";
		case 397:
			return "TF_LEGENDARY_FISH_MAILED_ALL";
		case 398:
			return "TF_DINO_BONE_MAILED_ONE";
		case 399:
			return "TF_DINO_BONE_MAILED_FIFTEEN";
		case 400:
			return "TF_DINO_BONE_MAILED_ALL";
		case 401:
			return "TF_ROCK_CARVING_MAILED_ONE";
		case 402:
			return "TF_ROCK_CARVING_MAILED_FIVE";
		case 403:
			return "TF_ROCK_CARVING_MAILED_ALL";
		case 404:
			return "TF_TAXIDERMY_MAILED_ONE";
		case 405:
			return "TF_TAXIDERMY_MAILED_TWO";
		case 406:
			return "TF_TAXIDERMY_MAILED_THREE";
		case 407:
			return "TF_TAXIDERMY_MAILED_FOUR";
		case 408:
			return "TF_TAXIDERMY_MAILED_ALL";
		case 409:
			return "TF_RARE_FISHING_SPOT_FOUND";
		case 410:
			return "TF_RARE_FISHING_SPOT_FOUND_NO_POLE";
		case 411:
			return "TF_RARE_FISHING_SPOT_AFTER_ABIGAIL1";
		case 412:
			return "TF_RARE_ORCHID_ACUNAS_STAR_FOUND";
		case 413:
			return "TF_RARE_ORCHID_CIGAR_FOUND";
		case 414:
			return "TF_RARE_ORCHID_CLAMSHELL_FOUND";
		case 415:
			return "TF_RARE_ORCHID_DRAGONS_MOUTH_FOUND";
		case 416:
			return "TF_RARE_ORCHID_GHOST_FOUND";
		case 417:
			return "TF_RARE_ORCHID_LADY_SLIPPER_FOUND";
		case 418:
			return "TF_RARE_ORCHID_LADY_OF_NIGHT_FOUND";
		case 419:
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER_FOUND";
		case 420:
			return "TF_RARE_ORCHID_NIGHT_SCENTED_FOUND";
		case 421:
			return "TF_RARE_ORCHID_QUEENS_FOUND";
		case 422:
			return "TF_RARE_ORCHID_RAT_TAIL_FOUND";
		case 423:
			return "TF_RARE_ORCHID_SPARROWS_EGG_FOUND";
		case 424:
			return "TF_RARE_ORCHID_SPIDER_FOUND";
		case 425:
			return "TF_RARE_ORCHID_ACUNAS_STAR";
		case 426:
			return "TF_RARE_ORCHID_CIGAR";
		case 427:
			return "TF_RARE_ORCHID_CLAMSHELL";
		case 428:
			return "TF_RARE_ORCHID_DRAGONS_MOUTH";
		case 429:
			return "TF_RARE_ORCHID_GHOST";
		case 430:
			return "TF_RARE_ORCHID_LADY_SLIPPER";
		case 431:
			return "TF_RARE_ORCHID_LADY_OF_NIGHT";
		case 432:
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER";
		case 433:
			return "TF_RARE_ORCHID_NIGHT_SCENTED";
		case 434:
			return "TF_RARE_ORCHID_QUEENS";
		case 435:
			return "TF_RARE_ORCHID_RAT_TAIL";
		case 436:
			return "TF_RARE_ORCHID_SPARROWS_EGG";
		case 437:
			return "TF_RARE_ORCHID_SPIDER";
		case 438:
			return "TF_ROCK_CARVINGS";
		case 439:
			return "TF_ROCK_CARVINGS_CABIN";
		case 440:
			return "TF_ROCK_CARVINGS_FIRST_REMINDER";
		case 441:
			return "TF_ROCK_CARVINGS_FIRST_REMINDER_STAGE1";
		case 442:
			return "TF_ROCK_CARVINGS_LAST_REMINDER";
		case 443:
			return "TF_ROCK_CARVINGS_INVITATION_USED";
		case 444:
			return "TF_TAXIDERMY_INVITATION_USED";
		case 445:
			return "TF_LEGEND_OF_EAST_OUTFIT_UNLOCKED";
		case 446:
			return "TF_LEGEND_OF_EAST_OUTFIT_ACQUIRED";
		case 447:
			return "TF_FULL_AMMO_REINFORCED_EQUIPMENT";
		case 448:
			return "TF_TX_RABBIT_FOUND";
		case 449:
			return "TF_TX_SQUIRREL_FOUND";
		case 450:
			return "TF_TX_CARDINAL_FOUND";
		case 451:
			return "TF_TX_RAT_FOUND";
		case 452:
			return "TF_TX_WOODPECKER_FOUND";
		case 453:
			return "TF_TX_CHIPMUNK_FOUND";
		case 454:
			return "TF_TX_OPOSSUM_FOUND";
		case 455:
			return "TF_TX_ORIOLE_FOUND";
		case 456:
			return "TF_TX_ROBIN_FOUND";
		case 457:
			return "TF_TX_SONGBIRD_FOUND";
		case 458:
			return "TF_TX_SPARROW_FOUND";
		case 459:
			return "TF_TX_TOAD_FOUND";
		case 460:
			return "TF_TX_SKUNK_FOUND";
		case 461:
			return "TF_TX_BULLFROG_FOUND";
		case 462:
			return "TF_TX_CEDARWAXWING_FOUND";
		case 463:
			return "TF_TX_BAT_FOUND";
		case 464:
			return "TF_TX_BLUEJAY_FOUND";
		case 465:
			return "TF_TX_CROW_FOUND";
		case 466:
			return "TF_TX_BEAVER_FOUND";
		case 467:
			return "TF_TX_ALL_INGREDIENTS_FOUND";
		case 468:
			return "TF_TX_FIRST_ORDER_RECEIVED";
		case 469:
			return "TF_TX_FINAL_ORDER_RECEIVED";
		case 470:
			return "TF_TX_ORDER_RECEIVED";
		case 471:
			return "TF_TX_HUNTING_WEAPONS";
		case 472:
			return "TF_CHAL_LOG";
		case 473:
			return "TF_CHAL_LOG_2";
		case 474:
			return "TF_CHAL_MULTIPLE_LOG_UNLOCKED";
		case 475:
			return "TF_CHAL_BANDIT_LOG_UNLOCKED";
		case 476:
			return "TF_CHAL_EXPLORER_LOG_UNLOCKED";
		case 477:
			return "TF_CHAL_GAMBLER_LOG_UNLOCKED";
		case 478:
			return "TF_CHAL_HERBALIST_LOG_UNLOCKED";
		case 479:
			return "TF_CHAL_HORSEMANSHIP_LOG_UNLOCKED";
		case 480:
			return "TF_CHAL_MASTER_HUNTER_LOG_UNLOCKED";
		case 481:
			return "TF_CHAL_SHARPSHOOTER_LOG_UNLOCKED";
		case 482:
			return "TF_CHAL_SURVIVALIST_LOG_UNLOCKED";
		case 483:
			return "TF_CHAL_WEAPONS_EXPERT_LOG_UNLOCKED";
		case 484:
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED";
		case 485:
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED_02";
		case 486:
			return "TF_REINFORCED_HEALTH_TANK";
		case 487:
			return "TF_REINFORCED_STAMINA_TANK";
		case 488:
			return "TF_REINFORCED_DEADEYE_TANK";
		case 489:
			return "TF_EA_LOGGING_HM";
		case 490:
			return "TF_EA_LOGGING_HM_FAIL";
		case 491:
			return "TF_RSC_H_JRN_AD";
		case 492:
			return "TF_RSC_H_JRN_UP";
		case 493:
			return "TF_ANIMAL_NEW_SKIN";
		case 494:
			return "TF_ANIMAL_NEW_PLUCK";
		case 495:
			return "TF_FIRST_SKIN";
		case 496:
			return "TF_FIRST_CARRY_COOK";
		case 497:
			return "TF_LEGENDARY_SKINNING";
		case 498:
			return "TF_LEGENDARY_ABANDONED";
		case 499:
			return "TF_MP_LEGENDARY_FIRST_SKIN";
		case 500:
			return "TF_MP_FIRST_SKIN";
		case 501:
			return "TF_MP_FIRST_ANIMAL_PARTS";
		case 502:
			return "TF_ITEM_BANDANA_WORN";
		case 503:
			return "TF_ITEM_BANDANA_USE";
		case 504:
			return "TF_ITEM_BANDANA_OFF";
		case 505:
			return "TF_MP_RUSTLING_OWNER_DEAD";
		case 506:
			return "TF_PROPERTY_PDOC_COLLECTED";
		case 507:
			return "TF_BINO_SATCHEL";
		case 508:
			return "TF_BINO_AIM";
		case 509:
			return "TF_BINO_ZOOM";
		case 510:
			return "TF_FAST_TRAVEL";
		case 511:
			return "TF_FAST_TRAVEL_COST";
		case 512:
			return "TTL_LAW_UNPAID_BOUNTY";
		case 513:
			return "TF_COMPANION_FOLLOW";
		case 514:
			return "TF_PLACED_DYNAMITE";
		case 515:
			return "TF_GUN_SWAP";
		case 516:
			return "TF_RIFLE_SCOPE";
		case 517:
			return "TF_CIG_CARD_FOUND";
		case 518:
			return "TF_CIG_CARD_FOUND_AFTER_STAGE1";
		case 519:
			return "TF_USEDITEM_FOUND";
		case 520:
			return "TF_CIG_PACK_FOUND";
		case 521:
			return "TF_GUN_OIL_FOUND";
		case 522:
			return "TF_COFFEE_FOUND";
		case 523:
			return "TF_INSTRUMENT_FOUND";
		case 524:
			return "TF_WHITKNIFE_FOUND";
		case 525:
			return "TF_WHITBLOCK_FOUND";
		case 526:
			return "TF_HAIRTONIC_FOUND";
		case 527:
			return "TF_BRDTONIC_REQUIRED";
		case 528:
			return "TF_BRDTONIC_WORNOFF";
		case 529:
			return "TF_HAIRGRS_FOUND";
		case 530:
			return "TF_HAIRGRS_WORNOFF";
		case 531:
			return "TF_SHAVING";
		case 532:
			return "TF_SEASONED_MEAT";
		case 533:
			return "TF_SEASONING_NEEDED";
		case 534:
			return "TF_COFFEE_KIT";
		case 535:
			return "TF_CAMP_ITEMS";
		case 536:
			return "TF_JEWELRY_FOUND";
		case 537:
			return "TF_SHOPROB_INTRO";
		case 538:
			return "TF_SHOPROB_RHDGUN";
		case 539:
			return "TF_SHOP_CATALOG";
		case 540:
			return "TF_SHOP_ILO";
		case 541:
			return "TF_SHOP_ILO_FOREMAN";
		case 542:
			return "TF_SHOP_POST_OFFICE";
		case 543:
			return "TF_SHOP_POST_MP";
		case 544:
			return "TF_SHOP_POST_MP_CAMP";
		case 545:
			return "TF_SHOP_DUAL_BUY";
		case 546:
			return "TF_SHOP_SHELF_INTERACT";
		case 547:
			return "TF_SHOP_NO_CLOTHES";
		case 548:
			return "TF_SHOP_ON_FOOT";
		case 549:
			return "TF_SHOP_TRAPPER_MEET";
		case 550:
			return "TF_SHOP_TRAPPER_WANDER";
		case 551:
			return "TF_SHOP_TRAPPER_LEGENDARY_CRAFT";
		case 552:
			return "TF_SHOP_BUTCHER_HORSE_CARGO";
		case 553:
			return "TF_SHOP_TRAPPER_HORSE_CARGO";
		case 554:
			return "TF_SHOP_PRONGHORN_CATALOGUE";
		case 555:
			return "TF_SHOP_PRONGHORN_GUNSMITH";
		case 556:
			return "TF_SHOP_PRONGHORN_FENCE";
		case 557:
			return "TF_SHOP_PRONGHORN_TRAPPER";
		case 558:
			return "TF_WEAPON_SHOP_UNLOCK";
		case 559:
			return "TF_WEAPON_MOD_UNLOCK";
		case 560:
			return "TF_WEAPON_SHOP_MOD_UNLOCK";
		case 561:
			return "TF_WEAPONS_MULTI_UNLOCK";
		case 562:
			return "TF_SPECIAL_LURES_UNLOCK";
		case 563:
			return "TF_HONOR_HIGH_SHOP";
		case 564:
			return "TF_MP_WHISTLE_CAMP";
		case 565:
			return "TF_MP_INTRO_MISSION";
		case 566:
			return "TF_MP_GANG_SETUP";
		case 567:
			return "TF_MP_GANG_BOUNTY";
		case 568:
			return "TF_MP_BOUNTY_LIMIT_REACHED";
		case 569:
			return "TF_MP_STAT_CHALLENGES";
		case 570:
			return "TF_MP_PVP_SHOWDOWN";
		case 571:
			return "TF_MP_DEADEYE_REPLACEMENT";
		case 572:
			return "TF_MP_DEADEYE_PASSIVE";
		case 573:
			return "TF_MP_RECIPE_JOURNAL_ADD";
		case 574:
			return "TF_MP_HERB_JOURNAL_ADD";
		case 575:
			return "TF_MP_HERB_JOURNAL_PROP";
		case 576:
			return "TF_MP_ALASKAN_GINSENG_NOT_LEARNED";
		case 577:
			return "TF_MP_AMERICAN_GINSENG_NOT_LEARNED";
		case 578:
			return "TF_MP_BURDOCK_NOT_LEARNED";
		case 579:
			return "TF_MP_HUMMINGBIRD_NOT_LEARNED";
		case 580:
			return "TF_MP_SNOWDROP_NOT_LEARNED";
		case 581:
			return "TF_MP_BUY_HORSE_EQUIPMENT";
		case 582:
			return "TF_MP_SKINNING";
		case 583:
			return "TF_MP_REVIVE";
		case 584:
			return "TF_MP_CANT_REVIVE_CARRYING";
		case 585:
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT";
		case 586:
			return "TF_MP_SHOP_HORSE_PROTECTION";
		case 587:
			return "TF_MP_BARBER_HORSE_PROTECTION";
		case 588:
			return "TF_MP_HANDHELD_CATALOUGE";
		case 589:
			return "TF_MP_ABILITY_CARD_SLOT_EMPTY";
		case 590:
			return "TF_MP_LOOTABLES_1";
		case 591:
			return "TF_MP_LOOTABLES_2";
		case 592:
			return "TF_MP_HORSE_REVIVE";
		case 593:
			return "TF_MP_HORSE_REVIVE_NO_ITEM";
		case 594:
			return "TF_MP_BONDING_EARNED_TRAMPLE_ENEMY";
		case 595:
			return "TF_MP_BONDING_EARNED_BOW_KILL";
		case 596:
			return "TF_MP_PLAYER_HORSE_STOLEN";
		case 597:
			return "TF_MP_STABLE_UPKEEP_FEE";
		case 598:
			return "TF_MP_HORSE_TAME_MOUNT";
		case 599:
			return "TF_MP_HORSE_TAME_MOUNTED";
		case 600:
			return "TF_MP_HORSE_TAME_SUCCESS";
		case 601:
			return "TF_MP_HORSE_TAME_BUCKED_OFF";
		case 602:
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD";
		case 603:
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 604:
			return "TF_MP_HORSE_VET_FEES";
		case 605:
			return "TF_MP_CAMP_CRAFTING";
		case 606:
			return "TF_MP_CAMP_NO_SKINNED_ANIMAL";
		case 607:
			return "TF_MP_CAMP_BIGGER_WAGON_NEEDED";
		case 608:
			return "TF_MP_CAMP_WHITE_FLAG_RAISED";
		case 609:
			return "TF_MP_CAMP_WHITE_FLAG_RAISED_LEADER";
		case 610:
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED";
		case 611:
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED_LEADER";
		case 612:
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_RAISE";
		case 613:
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_LOWER";
		case 614:
			return "TF_MP_CAMP_WHITE_FLAG_CONTENT";
		case 615:
			return "TF_MP_CAMP_WHITE_FLAG_TURRET";
		case 616:
			return "TF_MP_CAMP_FOLLOWER_DEAD";
		case 617:
			return "TF_MP_CAMP_SLEEP";
		case 618:
			return "TF_MP_CAMP_CUSTOMIZE";
		case 619:
			return "TF_MP_WEAPON_LOCKER_PURCHASED";
		case 620:
			return "TF_MP_CAMP_DOG_CAMP_RAID_WARN";
		case 621:
			return "TF_MP_CHALLENGE_COMPLETED_AWARD";
		case 622:
			return "TF_MP_XMAS_2019_KRAMPUS_AWARD";
		case 623:
			return "TF_AMBIENT_HORSE_TRADING_AVAILABLE";
		case 624:
			return "TF_FIRST_STOLEN_HORSE_WITH_HORSE_TRADING";
		case 625:
			return "TF_COMPANION_ACTIVITY";
		case 626:
			return "TF_COMPANION_BANK";
		case 627:
			return "TF_CARAVAN_HORSE_DISMOUNT";
		case 628:
			return "TF_CARAVAN_WAGON_DISMOUNT";
		case 629:
			return "TF_CARAVAN_NO_CARRY_DEAD";
		case 630:
			return "TF_CARAVAN_NO_CARRY_HOGTIED";
		case 631:
			return "TF_CARAVAN_BLIP";
		case 632:
			return "TF_CARAVAN_SUPPLIES";
		case 633:
			return "TTL_LAW_DELAYED_RESPONSE";
		case 634:
			return "TTL_LAW_DELAYED_RESPONSE_FUS";
		case 635:
			return "TTL_LAW_BOUNTY_HUNTERS";
		case 636:
			return "TTL_LAW_STATE_BOUNTY";
		case 637:
			return "TTL_LAW_REGION_INCREASE";
		case 638:
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_1";
		case 639:
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_2";
		case 640:
			return "TTL_LAW_RESTRICTED_AREA";
		case 641:
			return "TTL_HIDE_BODY";
		case 642:
			return "TF_CARAVAN_HUNGER";
		case 643:
			return "TF_CARAVAN_STEW_MISSING";
		case 644:
			return "TF_CARAVAN_STEW_ALREADY_SERVED";
		case 645:
			return "TF_CARAVAN_STEW_PLAYER_SERVED";
		case 646:
			return "TF_DISTRICT_CAMP_MAP";
		case 647:
			return "TF_CARAVAN_SHOOTING";
		case 648:
			return "TF_CARAVAN_SHOOTING_BEECHERS";
		case 649:
			return "TF_VIGNETTE_WASH";
		case 650:
			return "TF_PED_INTERACTION";
		case 651:
			return "TF_HERDING_1";
		case 652:
			return "TF_HERDING_2";
		case 653:
			return "TF_HERDING_3";
		case 654:
			return "TF_HERDING_4";
		case 655:
			return "TF_HERDING_STRAGGLER_1";
		case 656:
			return "TF_HERDING_STRAGGLER_2";
		case 657:
			return "TF_BADGER_CLAW_TRINKET";
		case 658:
			return "TF_GRY3_RHODES_LAW";
		case 659:
			return "TF_RDTC1_GOLD";
		case 660:
			return "TF_RDTC1_FIRST_PERSON_REMINDER";
		case 661:
			return "TF_CARAVAN_MISSION_BLIPS";
		case 662:
			return "TF_INSPECTION_TOGGLE_VIEW";
		case 663:
			return "TF_HONOR_GAIN_CHAPTER_2_BOUNTY_1";
		case 664:
			return "TF_HONOR_CHAPTER_3_MARY_0_2";
		case 665:
			return "TF_HONOR_LOSS_CHAPTER_3_MARY_1";
		case 666:
			return "TF_HONOR_GAIN_CHAPTER_3_MARY_1";
		case 667:
			return "TF_HONOR_GAIN_CHAPTER_4_NATIVE_0";
		case 668:
			return "TF_HONOR_GAIN_CHAPTER_4_SUSAN_1";
		case 669:
			return "TF_HONOR_LOSE_CHAPTER_4_SUSAN_1";
		case 670:
			return "TF_HONOR_OPTIONAL_MISSION";
		case 671:
			return "TF_SCENT_BLOCKER_USED";
		case 672:
			return "TF_SCENT_BLOCKER_EXPIRED";
		case 673:
			return "TF_SATCHEL_FULL";
		case 674:
			return "TF_SATCHEL_FULL_ANIMAL";
		case 675:
			return "TF_INCREASE_POUCH_CAPACITY";
		case 676:
			return "TF_DEADEYE_EMPTY";
		case 677:
			return "TF_DEADEYE_UNLOCK_LEVEL_2";
		case 678:
			return "TF_DEADEYE_UNLOCK_LEVEL_3";
		case 679:
			return "TF_DEADEYE_UNLOCK_LEVEL_4";
		case 680:
			return "TF_DEADEYE_UNLOCK_LEVEL_5";
		case 681:
			return "TF_DEADEYE_UNLOCK_LEVEL_2_REMINDER";
		case 682:
			return "TF_DEADEYE_UNLOCK_LEVEL_3_REMINDER";
		case 683:
			return "TF_DEADEYE_UNLOCK_LEVEL_4_REMINDER";
		case 684:
			return "TF_DEADEYE_UNLOCK_LEVEL_5_REMINDER";
		case 685:
			return "TF_FORTIFY_TANK";
		case 686:
			return "TF_FORTIFY_CORE";
		case 687:
			return "TF_MISSION_AREA_BLIP";
		case 688:
			return "TF_ALT_AMMO";
		case 689:
			return "TF_COMPASS";
		case 690:
			return "TF_NO_RADAR";
		case 691:
			return "TF_VIEW_PHOTOS";
		case 692:
			return "TF_PICK_HERB";
		case 693:
			return "TF_CARAVAN_HITCHED_HORSE";
		case 694:
			return "TF_CARAVAN_HITCHED_HORSE_EXISTS";
		case 695:
			return "TF_CARAVAN_CRAFTING_FIRE";
		case 696:
			return "TF_BEECHERS_CRAFTING_FIRE";
		case 697:
			return "TF_STUDY_BINOC";
		case 698:
			return "TF_MISSIONS_LOCKED_WANTED";
		case 699:
			return "TF_AIM_AMBUSH";
		case 700:
			return "TF_ROB_AMBUSH";
		case 701:
			return "TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES";
		case 702:
			return "TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD";
		case 703:
			return "TF_CAMERA_ITEM";
		case 704:
			return "TF_CAMP_CARRIABLES_NO_CORPSES";
		case 705:
			return "TF_CAMP_CARRIABLES_NO_CORPSES_RANCH";
		case 706:
			return "TF_CAMP_CARRIABLES_PEARSON";
		case 707:
			return "TF_CAMP_CARRIABLES_UNCLE";
		case 708:
			return "TF_WEAPON_FAMILIARITY";
		case 709:
			return "TF_DIFFERENT_HORSES";
		case 710:
			return "TF_PLAY_SPECIAL";
		case 711:
			return "TF_PLAY_ULTIMATE";
		case 712:
			return "TF_GANG_TAKE";
		case 713:
			return "TF_MP_LB_DPAD";
		case 714:
			return "TF_MP_LB_HLP";
		case 715:
			return "TF_MP_IC_EWC";
		case 716:
			return "TF_MP_IC_FTB";
		case 717:
			return "TF_MP_IC_WOC_FFA";
		case 718:
			return "TF_MP_IC_WOC_TEAM";
		case 719:
			return "TF_MP_IC_TT";
		case 720:
			return "TF_MP_IC_SO";
		case 721:
			return "TF_MP_IC_TSO";
		case 722:
			return "TF_MP_IC_GR_FFA";
		case 723:
			return "TF_MP_IC_GR_TEAM";
		case 724:
			return "TF_MP_STD_RACE";
		case 725:
			return "TF_MP_OPEN_RACE";
		case 726:
			return "TF_MP_FL_OL";
		case 727:
			return "TF_MP_FL_GS";
		case 728:
			return "TF_MP_FL_HOR";
		case 729:
			return "TF_MP_FL_HOR_R";
		case 730:
			return "TF_MP_FL_HOR_C";
		case 731:
			return "TF_MP_FL_HOR_J";
		case 732:
			return "TF_MP_FL_HOR_END";
		case 733:
			return "TF_MP_BONUS_EXCLUSIVE";
		case 734:
			return "TF_MP_BONUS_SPECIAL";
		case 735:
			return "TF_MP_XP_BONUS_ULTIMATE";
		case 736:
			return "TF_MP_COOP_HELP_TEXT_WITH_POSSE";
		case 737:
			return "TF_MP_COOP_HELP_TEXT_SOLO";
		case 738:
			return "TF_MP_WANTED_LOOTING";
		case 739:
			return "TF_MP_SATCHEL_FULL";
		case 740:
			return "TF_MP_SATCHEL_FULL_ANIMAL";
		case 741:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT1";
		case 742:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT2";
		case 743:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT3";
		case 744:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT4";
		case 745:
			return "TF_MP_BOUNTY_LOW";
		case 746:
			return "TF_MP_BOUNTY_MEDIUM";
		case 747:
			return "TF_MP_BOUNTY_HIGH";
		case 748:
			return "TF_MP_BOUNTY_FOLLOW_UP";
		case 749:
			return "TF_MP_BOUNTY_PAID_OFF";
		case 750:
			return "TF_MP_BOUNTY_HUNTERS_KILLED";
		case 751:
			return "TF_MP_BOUNTY_HUNTERS_ESCAPED";
		case 752:
			return "TF_MP_TARGET_RACE";
		case 753:
			return "TF_MP_IC_CTF_DROP";
		case 754:
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT_LB";
		case 755:
			return "TF_MP_DAILY_CHALLENGES_FIRST_TIME";
		case 756:
			return "TF_MP_BOUNTY_HUNTERS_CANT_PAY";
		case 757:
			return "TF_MP_NOTORIETY_FIRST_TIME";
		case 758:
			return "TF_MP_SHOP_NO_INTERACT_BANDANA";
		case 759:
			return "TF_MP_REMOVE_DEFENSIVE_MODE";
		case 760:
			return "TF_MP_CHARGES_PRESSED";
		case 761:
			return "TF_MP_PRESSED_CHARGES";
		case 762:
			return "TF_MP_KILLED_DEFENSIVE_PLAYER";
		case 763:
			return "TF_MP_DEFENSIVE_FORCE";
		case 764:
			return "TF_MP_DEFENSIVE_FIRST";
		case 765:
			return "TF_MP_LEMAT_REVOLVER";
		case 766:
			return "TF_MP_HELP_HOSTILITY_RESET";
		case 767:
			return "TF_MP_DEFEND_AGAINST_HOSTILE_PLAYERS";
		case 768:
			return "TF_MP_HOSTILE_JOINED_POSSE";
		case 769:
			return "TF_MP_SHOP_TRAVELLING_SALESMAN_CAMP";
		case 770:
			return "TF_MP_COLLECTORS_BAG";
		case 771:
			return "TF_MP_COLLECTIBLE_MAP_RANDOM";
		case 772:
			return "TF_MP_COLLECTIBLE_MAP";
		case 773:
			return "TF_MP_COLLECTIBLE_WEEKLY_AVAILABLE";
		case 774:
			return "TF_MP_COLLECTIBLE_OPEN_WEEKLY_LIST";
		case 775:
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_INTRO";
		case 776:
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_INTRO";
		case 777:
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_INTRO";
		case 778:
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_INTRO";
		case 779:
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_INTRO";
		case 780:
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_INTRO";
		case 781:
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_INTRO";
		case 782:
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_INTRO";
		case 783:
			return "TF_MP_COLLECTIBLE_BOTTLES_INTRO";
		case 784:
			return "TF_MP_COLLECTIBLE_COINS_INTRO";
		case 785:
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_INTRO";
		case 786:
			return "TF_MP_COLLECTIBLE_ARROWHEADS_INTRO";
		case 787:
			return "TF_MP_COLLECTIBLE_FLOWERS_INTRO";
		case 788:
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_INTRO";
		case 789:
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_SET_COMPLETE";
		case 790:
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_SET_COMPLETE";
		case 791:
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_SET_COMPLETE";
		case 792:
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_SET_COMPLETE";
		case 793:
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_SET_COMPLETE";
		case 794:
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_SET_COMPLETE";
		case 795:
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_SET_COMPLETE";
		case 796:
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_SET_COMPLETE";
		case 797:
			return "TF_MP_COLLECTIBLE_BOTTLES_SET_COMPLETE";
		case 798:
			return "TF_MP_COLLECTIBLE_COINS_SET_COMPLETE";
		case 799:
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_SET_COMPLETE";
		case 800:
			return "TF_MP_COLLECTIBLE_ARROWHEADS_SET_COMPLETE";
		case 801:
			return "TF_MP_COLLECTIBLE_FLOWERS_SET_COMPLETE";
		case 802:
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_SET_COMPLETE";
		case 803:
			return "TF_MP_COLLECTIBLE_BUY_BAG";
		case 804:
			return "TF_MP_COLLECTIBLE_FIND_SALESWOMAN";
		case 805:
			return "TF_MP_COLLECTIBLE_FOUND_CONDOR_EGG";
		case 806:
			return "TF_MP_COLLECTIBLES_COLLECTED";
		case 807:
			return "TF_MP_NB_RIVAL_COLLECTOR_RC_KILLED";
		case 808:
			return "TF_MP_NB_GRAVEROBBER_INTRO";
		case 809:
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL";
		case 810:
			return "TF_MP_NB_GRAVEROBBER_DIGGING_SITES";
		case 811:
			return "TF_MP_NB_GRAVEROBBER_NO_FIND";
		case 812:
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL_POSSE";
		case 813:
			return "TF_LEARN_RECIPE";
		case 814:
			return "TF_HORSE_CALL_HORSE_VEHICLE";
		case 815:
			return "TF_VEHICLE_FULL_FISH";
		case 816:
			return "TF_VEHICLE_UNSUPPORTED_FISH";
		case 817:
			return "TF_MP_METAL_DETECTOR";
		case 818:
			return "TF_MP_BROKE_EGG_IN_NEST";
		case 819:
			return "TF_MP_SKILL_POTENTIAL";
		case 820:
			return "TF_MP_SKILL_INTUITION";
		case 821:
			return "TF_MP_SKILL_DIVNATION";
		case 822:
			return "TF_MP_SKILL_ASSISTANCE";
		case 823:
			return "TF_MP_SKILL_COLLECTOR_EVENTS";
		case 824:
			return "TF_MP_SKILL_EAGLE_EYE_PLUS";
		case 825:
			return "TF_MP_SKILL_FOCUS";
		case 826:
			return "TF_MP_SKILL_PERCEPTION";
		case 827:
			return "TF_MP_SKILL_DUCKING_INTRO";
		case 828:
			return "TF_MP_SKILL_DUCKING";
		case 829:
			return "TF_MP_SKILL_BOUNTY_EVENTS";
		case 830:
			return "TF_MP_SKILL_BOUNTY_MEDIUM";
		case 831:
			return "TF_MP_SKILL_BOUNTY_HARD";
		case 832:
			return "TF_MP_SKILL_BOUNTY_PLAYER";
		case 833:
			return "TF_MP_SKILL_EFFICIENCY";
		case 834:
			return "TF_MP_SKILL_AWARENESS";
		case 835:
			return "TF_MP_SKILL_PROTECTION";
		case 836:
			return "TF_MP_SKILL_DOG_WARNING";
		case 837:
			return "TF_MP_SKILL_DOG_WARNING_NO_DOG";
		case 838:
			return "TF_MP_SKILL_TRADER_EVENTS";
		case 839:
			return "TF_MP_SKILL_GUN_TRICK_FIRST";
		case 840:
			return "TF_MP_SKILL_GUN_TRICK";
		case 841:
			return "TF_MP_SKILL_GUN_TRICK_DUAL";
		case 842:
			return "TF_MP_SKILL_TONIC_INCREASE";
		case 843:
			return "TF_MP_SKILL_KIT_INCREASE";
		case 844:
			return "TF_MP_SKILL_PROVISION_INCREASE";
		case 845:
			return "TF_MP_SKILL_VALUABLES_INCREASE";
		case 846:
			return "TF_MP_SKILL_INGREDIENTS_INCREASE";
		case 847:
			return "TF_MP_SKILL_HUNTING_MAT_INCREASE";
		case 848:
			return "TF_MP_GET_METAL_DETECTOR";
		case 849:
			return "TF_MP_GET_IMPROVED_BINOCULARS";
		case 850:
			return "TF_MP_GET_SHOVEL";
		case 851:
			return "TF_HUNTING_WAGON_INTRO";
		case 852:
			return "TF_BOUNTY_WAGON_INTRO";
		case 853:
			return "TF_MP_BOUNTY_WAGON_ON_MISSION";
		case 854:
			return "TF_MP_BOUNTY_WAGON_DESTROYED_ON_MISSION";
		case 855:
			return "TF_MP_BOUNTY_WAGON_STOW";
		case 856:
			return "TF_HUNTING_WAGON_STOW_INTRO";
		case 857:
			return "TF_TRADDER_LETTER_INTRO";
		case 858:
			return "TF_MP_FL_TRA_COL";
		case 859:
			return "TF_MP_FL_TRA_COLA";
		case 860:
			return "TF_MP_FL_TRA_READ";
		case 861:
			return "TF_MP_FL_TRA_MEET";
		case 862:
			return "TF_MP_CROSS_PROMO_GTAO_CARDS";
		case 863:
			return "TF_MP_CROSS_PROMO_GTAO_CARDS_PONCHO";
		case 864:
			return "TF_MP_CROSS_PROMO_GTAO_MASK";
		case 865:
			return "TF_MP_START_MOONSHINER";
		case 866:
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN1";
		case 867:
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN2";
		case 868:
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN1";
		case 869:
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN2";
		case 870:
			return "TF_MP_FL_GVO_DONE_NONE_REMAIN";
		case 871:
			return "TF_MP_FL_WEAPON_QUICK_SWAP_ASSIGN";
		case 872:
			return "TF_MP_FL_WEAPON_QUICK_SWAP_HOSLTER";
		case 873:
			return "TF_MP_FL_MOONSHINER_PROPERTY_MOVED";
		case 874:
			return "TF_MP_MOONSHINER_ENTER_PROPERTY";
		case 875:
			return "TF_MP_MOONSHINER_FIRST_SETUP_COMPLETE";
		case 876:
			return "TF_MP_MOONSHINER_BUSINESS_READY1";
		case 877:
			return "TF_MP_MOONSHINER_BUSINESS_READY2";
		case 878:
			return "TF_MP_MOONSHINER_NO_XP";
		case 879:
			return "TF_MP_MOONSHINER_GATING_ITEM_NOT_BOUGHT";
		case 880:
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED";
		case 881:
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED2";
		case 882:
			return "TF_MP_MOONSHINER_PROPERTY_SELECTED_POSSE";
		case 883:
			return "TF_MP_MOONSHINER_FIRST_TIME_GOT_DRUNK";
		case 884:
			return "TF_MP_SKILL_MOONSHINE_FLAVOUR";
		case 885:
			return "TF_MP_SKILL_UNLOCKED";
		case 886:
			return "TF_MP_MOONSHINER_DANCE_SHORTCUTS";
		case 887:
			return "TF_MP_MOONSHINER_DANCE_INSTRUCT";
		case 888:
			return "TF_MP_MOONSHINER_APPROACH";
		case 889:
			return "TF_MP_MOONSHINER_THEME_CHANGED";
		case 890:
			return "TF_MP_MOONSHINER_BAR_OPEN";
		case 891:
			return "TF_MP_MOONSHINER_STANDARD_MOONSHINE_STOCK";
		case 892:
			return "TF_MP_MOONSHINER_BARTENDING_AVAILABLE";
		case 893:
			return "TF_MP_MOONSHINER_PLAYER_TENDING_BAR";
		case 894:
			return "TF_MP_MOONSHINER_BAND_INTRO";
		case 895:
			return "TF_MP_MOONSHINER_BAND_WRAP_UP";
		case 896:
			return "TF_MP_MOONSHINE_JUG";
		case 897:
			return "TF_MP_MOONSHINE_LAST_BATCH";
		case 898:
			return "TF_MP_MOONSHINE_NOT_POSSE_LEADER";
		case 899:
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P1";
		case 900:
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P2";
		case 901:
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON";
		case 902:
			return "TF_MP_MOONSHINE_MAGGIE_NO_BOOT";
		case 903:
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON_OR_BOOT";
		case 904:
			return "TF_MP_MOONSHINE_NOT_ELIGIBLE_FROM_LANDING";
		case 905:
			return "TF_MP_MOONSHINE_USE_CINEMATIC_CAM";
		case 906:
			return "TF_MP_MOONSHINE_STORY_MISSIONS";
		case 907:
			return "TF_MP_MOONSHINE_LOWEST_MASH_PRICE";
		case 908:
			return "TF_MP_NATURALIST_INTRO_HARRIET";
		case 909:
			return "TF_MP_NATURALIST_INTRO_GUS";
		case 910:
			return "TF_MP_NATURALIST_ROLE_INTRO";
		case 911:
			return "TF_MP_NATURALIST_HARRIETS_SHOP";
		case 912:
			return "TF_MP_NATURALIST_COMPENDIUM";
		case 913:
			return "TF_MP_NATURALIST_COMPENDIUM2";
		case 914:
			return "TF_MP_NATURALIST_COMPENDIUM3";
		case 915:
			return "TF_MP_NATURALIST_COMPENDIUM4";
		case 916:
			return "TF_MP_NATURALIST_COMPENDIUM5";
		case 917:
			return "TF_MP_NATURALIST_COMPENDIUM6";
		case 918:
			return "TF_MP_NATURALIST_BUY_VARMINT_RIFLE";
		case 919:
			return "TF_MP_NATURALIST_HARRIET_CLOSED";
		case 920:
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_PRE_INTRO";
		case 921:
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_POST_INTRO";
		case 922:
			return "TF_MP_NATURALIST_GROUP_COMPLETE";
		case 923:
			return "TF_MP_NATURALIST_FARMLAND_GROUP_COMPLETE";
		case 924:
			return "TF_MP_NATURALIST_DESERT_GROUP_COMPLETE";
		case 925:
			return "TF_MP_NATURALIST_BAYOU_GROUP_COMPLETE";
		case 926:
			return "TF_MP_NATURALIST_MOUNTAIN_GROUP_COMPLETE";
		case 927:
			return "TF_MP_NATURALIST_FOREST_GROUP_COMPLETE";
		case 928:
			return "TF_MP_NATURALIST_LEGMELANISTIC_GROUP_COMPLETE";
		case 929:
			return "TF_MP_NATURALIST_LEGALBINO_GROUP_COMPLETE";
		case 930:
			return "TF_MP_NATURALIST_LEGREDBLOND_GROUP_COMPLETE";
		case 931:
			return "TF_MP_NATURALIST_LEGPATTERN_GROUP_COMPLETE";
		case 932:
			return "TF_MP_NATURALIST_COMMON_GROUP_COMPLETE";
		case 933:
			return "TF_MP_VEHICLE_APPROACHING_CLEANUP";
		case 934:
			return "TF_MP_TRANQUILZER_AMMO";
		case 935:
			return "TF_MP_KILL_TRANQUILZER_AMMO";
		case 936:
			return "TF_MP_NATURALIST_MAX_SAMPLES";
		case 937:
			return "TF_MP_NATURALIST_REVIVE_NO_ITEM";
		case 938:
			return "TF_MP_NATURALIST_NO_SMPL_FIRE";
		case 939:
			return "TF_MP_NATURALIST_NO_SKIN_SMPLD";
		case 940:
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_1";
		case 941:
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_2";
		case 942:
			return "TF_MP_FIRST_LEGENDARY_ANIMAL_PARTS";
		case 943:
			return "TF_MP_FIRST_ANIMAL_PARTS_TRADER";
		case 944:
			return "TF_MP_FIRST_SKIN_TRADER";
		case 945:
			return "TF_MP_LEGENDARY_ANIMAL_DAMAGED_UNCLEANLY";
		case 946:
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_FAILED";
		case 947:
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_UNCLEAR_RESPONSE";
		case 948:
			return "TF_MP_ADVANCED_CAMERA_USED";
		case 949:
			return "TF_MP_NATURALIST_SONY_EXCLUSIVE";
		case 950:
			return "TF_MP_MP007_SONY_EXCLUSIVE_LOGIN";
		case 951:
			return "TF_MP_CUTSCENE_CANCELED_FROM_MISSION";
		case 952:
			return "TF_MP_ITEM_FULL_SPECIFIC";
		case 953:
			return "TF_MP_ITEM_FULL_GENERIC";
		case 954:
			return "TF_MP_ANIMAL_CONTROL_CANCEL_FOR_MISSION";
		case 955:
			return "TF_MP_TRADER_RESUPPLY_INITIATED";
		case 956:
			return "TF_MP_TRADER_RESUPPLY_COMPLETED";
		case 957:
			return "TF_MP_HARDCORE_SERIES_INFO_0";
		case 958:
			return "TF_MP_HARDCORE_SERIES_INFO_1";
		case 959:
			return "TF_MP_NATURALIST_HARRIET_KILL_ANIMALS";
		case 960:
			return "TF_MP_CHALLENGES_ROLE_DAILY_LIMIT";
		case 961:
			return "TF_MP_UPGRADE_BOUNTY_LICENSE";
		case 962:
			return "TF_MP_UPGRADE_BOUNTY_LICENSE_PRE_CUTSCENE";
		case 963:
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD";
		case 964:
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD_2";
		case 965:
			return "TF_MP_SKILL_DYNAMIC_MISSIONS";
		case 966:
			return "TF_MP_INTRO_HORSE_VOUCHER";
		case 967:
			return "TF_MP_INTRO_HORSE_VOUCHER_REMINDER";
		case 968:
			return "TF_MP_CHALLENGES_STREAK_ONE_TIME_RESET";
		case 969:
			return "TF_MP_CHALLENGES_STREAK_COMPLETE_RESET";
		case 970:
			return "TF_MP_CHALLENGES_ROLE_BOUNTY_HUNTER_011";
		case 971:
			return "TF_MP_CLOUD_LETTER_TELEGRAM_COLLECTED";
		case 972:
			return "NUM_CURRENT_TUTORIALS";
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

bool func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_38.f_3538)
	{
		if (Global_38.f_3538[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_38.f_3538[iVar0 /*3*/]);
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_222(iParam0, 0), " Seconds ", iVar2);
			DEBUG::_0x1B08D1EB9D8C4931(136, 105, " iTimesRun ", Global_38.f_3538[iVar0 /*3*/].f_1, " iMaxRun ", iVar3);
			if (Global_38.f_3538[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904703.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_224(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_225(bool bParam0)
{
	return bParam0;
}

int func_226(bool bParam0, bool bParam1)
{
	if (!func_238(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_227(bParam1, 0), " for bundle ", func_239(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_227(bool bParam0, int iParam1)
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

int func_228(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_229(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_215(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_158())
	{
		return func_215(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_215(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

bool func_230(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_231(char* sParam0)
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
		func_240(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_241(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

void func_232(int* iParam0, struct<8> Param1)
{
	iParam0->f_1 = { Param1 };
}

void func_233(var uParam0, int iParam1, bool bParam2)
{
	struct<20> Var0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 63, "BROADCAST_CAMP_DOG_EVENT_UNLOCK_LOCKED");
	Var0.f_4 = 6;
	Var0.f_7 = uParam0;
	Var0.f_6 = iParam1;
	Var0.f_19 = bParam2;
	func_102(Var0, func_101(0, 8));
}

float func_234(float fParam0, float fParam1, float fParam2, int iParam3)
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

int func_235(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_242();
	if (func_243(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887351[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_244(vParam0, iParam3);
}

int func_236(vector3 vParam0)
{
	return func_245(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_237()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_238(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

var func_239(bool bParam0, int iParam1)
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

void func_240(char* sParam0)
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
	func_241(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_241(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_242()
{
	return Global_1893599.f_2;
}

bool func_243(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_244(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_246(vParam0);
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

int func_245(int iParam0)
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

int func_246(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_247(vParam0, 0f, 0f, 0, 2);
	return func_247(vParam0, Global_1892752[iVar0 /*3*/].f_1, Global_1892752[iVar0 /*3*/].f_2, Global_1892752[iVar0 /*3*/], 4);
}

int func_247(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

