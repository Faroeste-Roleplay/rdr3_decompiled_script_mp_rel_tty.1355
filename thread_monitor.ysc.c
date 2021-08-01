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
#endregion

void __EntryFunction__()
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	DEBUG::_0xF0783374333FD8CE(8, 34, "Starting Thread Monitor");
	func_1();
	sVar0 = func_3(func_2());
	func_4();
	func_5();
	func_6(0);
	Global_1051590.f_44 = 0;
	bVar1 = false;
	iLocal_13 = 0;
	while ((((func_7() && !func_8(1, 1)) && !func_9(4)) && !func_9(2048)) && func_11(func_10()))
	{
		if (func_12())
		{
			func_13();
			func_14();
			switch (func_15())
			{
				case 0:
					if (((func_16() && func_17(PLAYER::PLAYER_ID()) > 2) || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051590.f_16[0], false)) || !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, -1, true, 0))
					{
						if (func_18(0) == 0)
						{
							if (!func_19())
							{
								DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_RUNNING - bSessionKill = TRUE - no threads active");
							}
							if (func_18(0) == 0)
							{
								DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_RUNNING - bSessionKill = TRUE - bSessionMergeStart = TRUE");
							}
							func_20();
							func_21();
						}
						else if (Global_1051590.f_7 > 0)
						{
							DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_RUNNING - popping an E message.  Probably because we got past the failsafe THEN get an end message.");
							func_22();
						}
					}
					if (Global_1051590.f_11)
					{
						DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_RUNNING - bForceReboot = TRUE.  Hold on to your butts...");
					}
					if (func_23())
					{
						func_22();
						func_24();
						func_25();
						func_26();
						func_6(1);
					}
					break;
				case 1:
					if (!func_19())
					{
						func_27();
						bVar1 = false;
						func_6(2);
						SCRIPTS::REQUEST_SCRIPT(sVar0);
					}
					else
					{
						func_28();
						DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_SHUTDOWN - waiting on thread shut down");
					}
					break;
				case 2:
					if (func_29())
					{
						if ((func_30() % 1000) == 0)
						{
							DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_DEAD - fake stall - time since session collapse: ", func_30());
						}
					}
					else
					{
						if (!bVar1)
						{
							if (func_30() > Global_1901988.f_591)
							{
								DEBUG::_0xD9911C7B5F8CD69C(8, 34, "MPTM_DEAD - We've been waiting for a long time.  Sending data to telemetry because this shouldn't happen.");
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on a session end for longer than 2 minutes now.  This is bad.");
								bVar1 = true;
								func_31(30, -1);
							}
						}
						DEBUG::_0xF0783374333FD8CE(34952, 34, "MPTM_DEAD - time since session collapse: ", func_30(), ", collapse at time ", Global_1051590.f_40, ", current time is ", MISC::_GET_SYSTEM_TIME(), ", reboot after ", Global_1901988.f_591);
						if (func_18(0) == 1)
						{
							func_22();
							if (Global_1051590.f_7 <= 0)
							{
								if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_6(3);
								}
								else
								{
									func_6(4);
								}
							}
							else
							{
								if (func_18(0) != 0)
								{
								}
								else
								{
									DEBUG::_0x9A6C65DDDBEC9C52(8, 34, "MPTM_DEAD - We should have moved on at this point, but it appears got several messages in queue during shutdown, so we're just gonna stay dead until we get an exit and the queue is empty.");
								}
								func_22();
							}
						}
						else if (Global_1051590.f_11)
						{
							func_6(3);
							DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_DEAD - bForceReboot = TRUE.  Hold on to your butts...");
						}
					}
					break;
				case 3:
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!bVar1)
						{
							if (func_30() > Global_1901988.f_591)
							{
								DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_WAIT_TO_REBOOT - GET_SYSTEM_TIME()                  = ", MISC::_GET_SYSTEM_TIME());
								DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_WAIT_TO_REBOOT - g_mpThreadMonitor.iTimeOfCollapse = ", Global_1051590.f_40);
								DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_WAIT_TO_REBOOT - GET_TIME_SINCE_SESSION_COLLAPSE() = ", func_30());
								DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_WAIT_TO_REBOOT - g_mpTunables.sThreadMonitorTunables.k_MPSessionTimeToWaitToReboot = ", Global_1901988.f_591);
								DEBUG::_0xD9911C7B5F8CD69C(8, 34, "MPTM_WAIT_TO_REBOOT - We've been waiting for a long time.  Sending data to telemetry because this shouldn't happen.");
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on NETWORK_IS_GAME_IN_PROGRESS for longer than 2 minutes now.  This is bad.");
								bVar1 = true;
								func_31(30, -1);
							}
						}
					}
					else
					{
						func_6(4);
					}
					break;
				case 4:
					if (SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
					{
						SCRIPTS::REQUEST_SCRIPT(sVar0);
						if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6000) > 0)
						{
							if (Global_1051590.f_44)
							{
								func_32(1);
								func_33(1, 1);
								Global_1051590.f_44 = 0;
							}
							func_34();
							DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_REBOOT - thread_monitor - set g_mpThreadMonitor.tiThreads[MPT_ID_MP_MAIN]. Was ", Global_1051590.f_16[0]);
							Global_1051590.f_16[0] = SCRIPTS::START_NEW_SCRIPT(sVar0, 6000);
							DEBUG::_0xF0783374333FD8CE(2216, 34, "MPTM_REBOOT - thread_monitor - SCRIPT: ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[0]), "(", Global_1051590.f_16[0], ") started");
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
							func_35();
							func_6(0);
							func_27();
							if (Global_1051590.f_11)
							{
								DEBUG::_0xF0783374333FD8CE(8, 34, "MPTM_REBOOT - bForceReboot = FALSE");
								Global_1051590.f_11 = 0;
							}
							func_36();
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(168, 34, func_37(), "MPTM_REBOOT - Loading script: ", sVar0);
						}
					}
					else
					{
						DEBUG::_0xD9911C7B5F8CD69C(168, 34, "MPTM_REBOOT - Script ", sVar0, " doesn't exist.  This is really, REALLY bad!");
					}
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
	if (func_9(2048))
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "Thread Monitor collapsing.  RESET_THREAD_MONITOR set.");
	}
	else if (func_9(4))
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "Thread Monitor collapsing.  RESET_PENDING_RESET set.");
	}
	else if (!func_11(func_10()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "Thread Monitor collapsing.  Not in a multiplayer context.");
	}
	else if (!func_11(func_38()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "Thread Monitor collapsing.  Next context is not a multiplayer context.");
	}
	else
	{
		func_6(5);
		CAM::DO_SCREEN_FADE_OUT(0);
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "Thread Monitor collapsing.  Likely something like a disconnect or timeout happened.  Heading back to the front end now.");
		bVar3 = false;
		while (!bVar3)
		{
			switch (func_15())
			{
				case 5:
					iVar2 = MISC::_GET_SYSTEM_TIME();
					NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					func_6(6);
					break;
				case 6:
					if ((MISC::_GET_SYSTEM_TIME() - iVar2) > 1000)
					{
						func_6(7);
						if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(0);
						}
					}
					break;
				case 7:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_31(iLocal_13, -1);
						bVar3 = true;
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "thread_monitor - waiting for collapse of child scripts.");
		BUILTIN::WAIT(0);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_NETWORK_SESSION_LEAVE();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		PLAYER::FORCE_CLEANUP(2);
	}
	func_39(2048);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	func_40(&Global_1051590);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	return Global_1572887.f_14;
}

char* func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "net_main_tlg_online";
		default:
			break;
	}
	return "net_main_online";
	return "net_main_online";
}

void func_4()
{
	if (!Global_1051590.f_9)
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "ENABLE_THREAD_MONITOR");
	}
	Global_1051590.f_9 = 1;
}

void func_5()
{
	Global_1051590.f_40 = MISC::_GET_SYSTEM_TIME();
}

void func_6(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(680, 34, "GO_TO_THREAD_MONITOR_STATE - previous state = ", func_41(Global_1051590.f_12), ", next state = ", func_41(iParam0));
	Global_1051590.f_12 = iParam0;
	func_42(func_41(Global_1051590.f_12));
}

bool func_7()
{
	iLocal_13 = 0;
	if (func_43(1976253964))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "TRC - Received event = EVENT_NETWORK_NETWORK_BAIL");
	}
	else if (func_43(1355399116))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "TRC - Received event = EVENT_NETWORK_PLAYER_SIGNED_OFFLINE");
	}
	else if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "TRC - Player is not signed into network");
	}
	else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "TRC - Player does not have online privlidges");
	}
	else if (Global_1572887.f_11)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 34, "TRC - Network game is no longer going even though net main offline is now running.");
			if ((func_9(4) || func_9(2048)) || !func_11(func_10()))
			{
				iLocal_13 = 0;
				DEBUG::_0xD9911C7B5F8CD69C(8, 34, "TRC - This was expected.  We're resetting.");
			}
			else
			{
				iLocal_13 = 24;
				DEBUG::_0xD9911C7B5F8CD69C(8, 34, "TRC - This was unexpected.  Adding alert screen.");
			}
		}
	}
	return true;
}

bool func_8(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_44(Global_1572887, 0), ", so skipping");
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

bool func_9(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_10()
{
	return Global_1572864;
}

bool func_11(int iParam0)
{
	if (iParam0 == 3)
	{
		return true;
	}
	if (iParam0 == 4)
	{
		return true;
	}
	return false;
}

bool func_12()
{
	return Global_1051590.f_9;
}

void func_13()
{
	char cVar0[64];
	int iVar8;
	int iVar9;

	func_45();
	if (Global_1051590.f_7 > 0)
	{
		StringCopy(&cVar0, "", 64);
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= (Global_1051590.f_7 - 1))
		{
			iVar8 = func_18(iVar9);
			if (iVar8 == 0)
			{
				StringConCat(&cVar0, "S", 64);
			}
			else if (iVar8 == 1)
			{
				StringConCat(&cVar0, "E", 64);
			}
			else if (iVar8 == -1)
			{
				StringConCat(&cVar0, "N", 64);
			}
			iVar9++;
		}
		DEBUG::_0xF0783374333FD8CE(40, 34, "MONITOR_SESSION_MESSAGES - queue = ", &cVar0);
	}
}

void func_14()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 2:
				DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_THREAD_EXIT_MESSAGES - THREAD_EXIT_REASON_SESSION_MERGE");
				func_20();
				break;
			case 0:
				DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_THREAD_EXIT_MESSAGES - THREAD_EXIT_REASON_NONE");
				break;
			case 1:
				DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_THREAD_EXIT_MESSAGES - THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
				break;
			case 4:
				DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_THREAD_EXIT_MESSAGES - THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
				break;
			case 3:
				DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_THREAD_EXIT_MESSAGES - THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
				break;
		}
	}
}

int func_15()
{
	return Global_1051590.f_12;
}

bool func_16()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_4;
}

int func_17(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1056487[iParam0 /*471*/];
	}
	return -1;
}

int func_18(int iParam0)
{
	var uVar0;

	uVar0 = func_46(iParam0);
	return uVar0;
}

bool func_19()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1051590.f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[iVar0]))
			{
				DEBUG::_0xF0783374333FD8CE(2216, 34, "Thread monitor ARE_ANY_MP_THREADS_ACTIVE - Thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ") is still active.");
				iVar1 = 1;
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2216, 34, "tiThreads Thread monitor ARE_ANY_MP_THREADS_ACTIVE - Thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ") no longer exists, clearing.");
				Global_1051590.f_16[iVar0] = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_20()
{
	DEBUG::_0xF0783374333FD8CE(8, 34, "ENABLE_THREAD_MONITOR_KILL_TRIGGER");
	Global_1051590.f_10 = 1;
}

void func_21()
{
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_37))
	{
		SCRIPTS::TERMINATE_THREAD(Global_1051590.f_37);
	}
}

int func_22()
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (Global_1051590.f_7 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "POP_SESSION_MESSAGE_FROM_QUEUE - Nothing in queue.");
		uVar0 = -1;
		return uVar0;
	}
	iVar1 = func_46(0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		Global_1051590[iVar2] = Global_1051590[iVar2 + 1];
		iVar2++;
	}
	func_47();
	DEBUG::_0xF0783374333FD8CE(40, 34, "POP_SESSION_MESSAGE_DATA_FROM_QUEUE - popping ", func_48(iVar1));
	return iVar1;
}

bool func_23()
{
	return (Global_1051590.f_10 || Global_1051590.f_11);
}

void func_24()
{
	DEBUG::_0xF0783374333FD8CE(8, 34, "BEGIN_PROCESSING_THREAD_MONITOR_SESSION_REQUEST");
	Global_1051590.f_8 = 1;
}

void func_25()
{
}

void func_26()
{
	Global_1051590.f_40 = MISC::_GET_SYSTEM_TIME();
	DEBUG::_0xF0783374333FD8CE(8, 34, "MARK_SESSION_COLLAPSE - at ", Global_1051590.f_40);
}

void func_27()
{
	DEBUG::_0xF0783374333FD8CE(8, 34, "DISABLE_THREAD_MONITOR_KILL_TRIGGER");
	Global_1051590.f_10 = 0;
}

void func_28()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1051590.f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[iVar0]))
			{
				SCRIPTS::_0xD92FA81B64920E85(Global_1051590.f_16[iVar0], &bVar1, &bVar2);
				if (bVar1)
				{
					if (!SCRIPTS::_0x30BED53646C86D11(Global_1051590.f_16[iVar0]))
					{
						DEBUG::_0xF0783374333FD8CE(2216, 34, "Thread monitor FORCE_KILL_ACTIVE_THREADS - Force killing thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ").");
						SCRIPTS::_0x7DE4643157AD646C(Global_1051590.f_16[iVar0]);
					}
					else
					{
						DEBUG::_0xF0783374333FD8CE(2216, 34, "Thread monitor FORCE_KILL_ACTIVE_THREADS - still waiting for thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ").");
					}
				}
				else if (bVar2)
				{
					DEBUG::_0xF0783374333FD8CE(136, 34, "Thread monitor FORCE_KILL_ACTIVE_THREADS - thread with ID ", Global_1051590.f_16[iVar0], " no longer exists. Just waiting for its script handler to end.");
				}
				else
				{
					DEBUG::_0x83407B92D46F25C3(136, 34, "Thread monitor FORCE_KILL_ACTIVE_THREADS - Unexpected behavior for thread with ID ", Global_1051590.f_16[iVar0], ". DOES_THREAD_EXIST returned TRUE but GET_THREAD_EXISTENCE_DETAILS says that there's no thread or script handler.");
				}
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2216, 34, "tiThreads Thread monitor FORCE_KILL_ACTIVE_THREADS - Thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ") no longer exists. Clearing.");
				Global_1051590.f_16[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

bool func_29()
{
	return false;
}

int func_30()
{
	return (MISC::_GET_SYSTEM_TIME() - Global_1051590.f_40);
}

void func_31(int iParam0, char* sParam1)
{
	if (iParam0 != 0)
	{
		func_49(iParam0, sParam1);
	}
	func_50(4);
	func_51();
	func_52(1);
	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(8, 21, "GO_TO_MODE__INTERFACE");
}

void func_32(bool bParam0)
{
	if (!bParam0)
	{
		func_53(2);
	}
	else
	{
		func_54(2);
		PLAYER::_0x2C2D287748E8E9B7(false);
	}
}

void func_33(bool bParam0, bool bParam1)
{
	if (func_55(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_56(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (!bParam0)
	{
		func_53(0);
	}
	else
	{
		if (bParam1)
		{
			func_57(0, 0, 0, 1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Not clearing the spectator lock!");
			UNK_0x355E72323AEE83CC(36, 6);
		}
		func_54(0);
		func_58(&(Global_1102630.f_3849));
		Global_1102630.f_3849 = 0f;
		Global_1102630.f_3849.f_5 = 1;
		Global_1102630.f_3849.f_16 = 0;
		Global_1102630.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_17 = { Global_1901988.f_50.f_1, Global_1901988.f_50.f_1, Global_1901988.f_50.f_1 };
		Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_59(&(Global_1102630.f_3888));
		Global_1102630.f_3888.f_6 = { Global_1102630.f_3849.f_17.f_6 };
		Global_1102630.f_3888 = Global_1102630.f_3849;
		Global_1102630.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102630.f_26.f_3341 = 0;
			Global_1102630.f_26.f_3342 = 0;
		}
	}
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN called.  Output starting...");
	func_60(Global_1102630.f_3849, 36);
	func_61(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_34()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 34, "CLEAR_ACTIVE_THREADS");
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1051590.f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[iVar0]))
			{
				DEBUG::_0xF0783374333FD8CE(2216, 34, "tiThreads Thread monitor CLEAR_ACTIVE_THREADS - Thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ") has a valid ID but we are clearing it! THIS IS DANGEROUS!!");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2216, 34, "tiThreads Thread monitor CLEAR_ACTIVE_THREADS - Thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ") has a valid ID but is not found. Clearing");
			}
			Global_1051590.f_16[iVar0] = 0;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(2216, 34, "Thread monitor CLEAR_ACTIVE_THREADS - Thread ", UNK_0xD2ADB90D13FA15A8(Global_1051590.f_16[iVar0]), "(", Global_1051590.f_16[iVar0], ") is already cleared");
		}
		iVar0++;
	}
}

void func_35()
{
	Global_1572887.f_8 = 0;
	func_62();
	DEBUG::_0xF0783374333FD8CE(8, 188, "NET_TUNABLES_FORCE_REFRESH - Attempting to perform a force refresh");
}

void func_36()
{
	DEBUG::_0xF0783374333FD8CE(8, 34, "END_PROCESSING_THREAD_MONITOR_SESSION_REQUEST");
	Global_1051590.f_8 = 0;
}

char* func_37()
{
	char cVar0[32];

	StringCopy(&cVar0, " 00:00:00 ", 32);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

int func_38()
{
	return Global_1572864.f_1;
}

void func_39(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 21, "CLEAR_GAME_RESET_FLAG - Called.  Set DEBUG_ROUTER to debug 1 for more info.");
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
	DEBUG::_0xA308F935BDECCEC0(8, 21, "CLEAR_GAME_RESET_FLAG - Done.");
}

void func_40(var uParam0)
{
	struct<184> Var0;

	Var0 = 6;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_9 = 1;
	Var0.f_16 = 20;
	Var0.f_45.f_2 = 32;
	Var0.f_80 = 10;
	*uParam0 = { Var0 };
}

char* func_41(int iParam0)
{
	char* sVar0;

	sVar0 = "invalid";
	switch (iParam0)
	{
		case 0:
			sVar0 = "MPTM_RUNNING";
			break;
		case 1:
			sVar0 = "MPTM_SHUTDOWN";
			break;
		case 2:
			sVar0 = "MPTM_DEAD";
			break;
		case 3:
			sVar0 = "MPTM_WAIT_TO_REBOOT";
			break;
		case 4:
			sVar0 = "MPTM_REBOOT";
			break;
		case 5:
			sVar0 = "MPTM_MP_BAIL";
			break;
		case 6:
			sVar0 = "MPTM_FADE_OUT";
			break;
		case 7:
			sVar0 = "MPTM_EXIT";
			break;
	}
	return sVar0;
}

void func_42(char* sParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::_GET_SYSTEM_TIME();
	iVar1 = MISC::GET_FRAME_COUNT();
	DEBUG::_0xF0783374333FD8CE(174216, 21, "MARK_MP_DELTA - fD/tD(", (iVar1 - Global_1572887.f_2), "/", (iVar0 - Global_1572887.f_3), ") | ", UNK_0x8F77B33B6A34D8BA(), " - ", sParam0);
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::_GET_SYSTEM_TIME();
}

bool func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return SCRIPTS::GET_EVENT_EXISTS(1, iParam0);
}

char* func_44(int iParam0, int iParam1)
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

void func_45()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -857756425:
				DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - SESSION_MERGE_START_CAUGHT");
				func_63();
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 1))
				{
					switch (iVar1)
					{
						case 0:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_START - MR_Unknown");
							break;
						case 1:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_START - MR_Proximity");
							break;
						case 2:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_START - MR_Region");
							break;
						case 3:
							Global_1051590.f_44 = 1;
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_START - MR_Warp");
							break;
						case 4:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_START - MR_Invite");
							break;
						case 5:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_START - MR_EnterSession");
							break;
						case 7:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_START - MR_Count");
							break;
					}
				}
				break;
			case -2119801478:
				DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - SESSION_MERGE_END_CAUGHT");
				func_64();
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 1))
				{
					switch (iVar1)
					{
						case 0:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_END - MR_Unknown");
							break;
						case 1:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_END - MR_Proximity");
							break;
						case 2:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_END - MR_Region");
							break;
						case 3:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_END - MR_Warp");
							break;
						case 4:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_END - MR_Invite");
							break;
						case 5:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_END - MR_EnterSession");
							break;
						case 7:
							DEBUG::_0xF0783374333FD8CE(8, 34, "MONITOR_SESSION_MESSAGES - EVENT_NETWORK_SESSION_MERGE_END - MR_Count");
							break;
					}
				}
				break;
		}
		iVar0++;
	}
}

var func_46(int iParam0)
{
	var uVar0;

	if (Global_1051590.f_7 <= 0)
	{
		uVar0 = -1;
		return uVar0;
	}
	return Global_1051590[iParam0];
}

void func_47()
{
	Global_1051590.f_7 = (Global_1051590.f_7 - 1);
	if (Global_1051590.f_7 < 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "DECREMENT_SESSION_MESSAGE_QUEUE_SIZE - Decrementing past 0.  Bad idea.");
		Global_1051590.f_7 = 0;
	}
}

char* func_48(int iParam0)
{
	char* sVar0;

	sVar0 = "invalid";
	switch (iParam0)
	{
		case -1:
			sVar0 = "MPSM_NULL";
			break;
		case 0:
			sVar0 = "MPSM_SESSION_MERGE_START";
			break;
		case 1:
			sVar0 = "MPSM_SESSION_MERGE_END";
			break;
	}
	return sVar0;
}

void func_49(int iParam0, char* sParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 0, "SET_ALERT_MESSAGE_ON_INTERFACE_SCREEN - ignoring subsequent interface alert ", func_65(iParam0, 0));
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = sParam1;
	DEBUG::_0xD9911C7B5F8CD69C(35496, 0, "SET_ALERT_MESSAGE_ON_INTERFACE_SCREEN - Failed transition due to - ", func_66(iParam0), " - ", HUD::_GET_LABEL_TEXT_2(func_66(iParam0)), ", ", iParam0, ", ", sParam1);
}

void func_50(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 21, "SET_GAME_RESET_FLAG - Called.  Set DEBUG_ROUTER to debug 1 for more info.");
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
	DEBUG::_0xA308F935BDECCEC0(8, 21, "SET_GAME_RESET_FLAG - Done.");
}

void func_51()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 21, "CLEAR_ALL_LAUNCH_PARAM_ARGS");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_415.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_52(int iParam0)
{
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 21, "SET_NEXT_ROUTER_CONTEXT - eNextRouterContext = ROUTER_CONTEXT_NONE.  That's BAD.  Defaulting to interface.  You should stop doing things and make an A/PT now.");
		iParam0 = 1;
	}
	DEBUG::_0xF0783374333FD8CE(680, 21, "SET_NEXT_ROUTER_CONTEXT - current next router context = ", func_67(Global_1572864.f_1, 0), ", next next router context = ", func_67(iParam0, 0));
	Global_1572864.f_1 = iParam0;
}

int func_53(int iParam0)
{
	if (func_68(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_69(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (func_70(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_69(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
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

bool func_56(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_57(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_71(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_72(iParam0, 0));
	if (!func_73(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_74(128) && !func_75(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_76() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_53(18);
	}
	func_77(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

void func_58(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_59(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_60(struct<30> Param0, int iParam30)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam30, "        Respawn Params Desired Start         ");
	switch (Param0.f_5)
	{
		case 1:
			DEBUG::_0xF0783374333FD8CE(40, iParam30, "             fHeading                        - ", MISC::_0x2B6846401D68E563(Param0, 4));
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(40, iParam30, "             vTargetForHeading               - ", MISC::_0x6C4DBF553885F9EB(Param0.f_1));
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
				DEBUG::_0xF0783374333FD8CE(40, iParam30, "             eiTargetForHeading              - ", UNK_0xE02C950E4C991632(Param0.f_4));
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(40, iParam30, "             eiTargetForHeading              - ", "ENTITY DOESN'T EXIST!  WHAT ARE YOU DOING?!");
			}
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17.f_6));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17.f_3));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_78(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_78(Param0.f_6.f_9, 0));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vPosition                - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_COORDS(Param0.f_27)));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vOrientation             - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_ROTATION(Param0.f_27)));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vScale                   - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_SCALE(Param0.f_27)));
	}
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             bUseVolumeLockSafety            - ", MISC::_0xF216F74101968DB0(Param0.f_29));
	DEBUG::_0xF0783374333FD8CE(8, iParam30, "        Respawn Params Desired End         ");
}

void func_61(struct<7> Param0, var uParam7, var uParam8, int iParam9)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Fallback Start         ");
	DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vPosition                       - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
	switch (Param0.f_5)
	{
		case 1:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             fHeading                        - ", MISC::_0x2B6846401D68E563(Param0, 4));
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vTargetForHeading               - ", MISC::_0x6C4DBF553885F9EB(Param0.f_1));
			break;
		case 3:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             eiTargetForHeading              - ", UNK_0xE02C950E4C991632(Param0.f_4));
			break;
	}
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Fallback End         ");
}

void func_62()
{
	if (Global_1901988 == 0)
	{
		return;
	}
	Global_1901988 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 188, "NET_TUNABLES_REFRESH_DATA_STRUCT - Starting Cloud Refresh");
	UNK_0x355E72323AEE83CC(188, 7);
}

void func_63()
{
	if (Global_1051590.f_7 >= 6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "PUSH_SESSION_START_MESSAGE - Caught session start but can't add because queue is full.");
		return;
	}
	if (Global_1051590.f_7 > 0)
	{
		if (Global_1051590[(Global_1051590.f_7 - 1)] == 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 34, "PUSH_SESSION_START_MESSAGE - Trying to push a start message but there's already a start message?!  BAD BAD BAD!!!!");
			return;
		}
	}
	Global_1051590[Global_1051590.f_7] = 0;
	func_79();
	DEBUG::_0xF0783374333FD8CE(8, 34, "PUSH_SESSION_START_MESSAGE");
}

void func_64()
{
	if (Global_1051590.f_7 >= 6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 34, "PUSH_SESSION_END_MESSAGE - Caught session end but can't add because queue is full.");
		return;
	}
	if (Global_1051590.f_7 > 0)
	{
		if (Global_1051590[(Global_1051590.f_7 - 1)] == 1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 34, "PUSH_SESSION_END_MESSAGE - Trying to push an end message but there's already an end message?!  BAD BAD BAD!!!!");
			return;
		}
	}
	Global_1051590[Global_1051590.f_7] = 1;
	func_79();
	DEBUG::_0xF0783374333FD8CE(8, 34, "PUSH_SESSION_END_MESSAGE");
}

char* func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "INTERFACE_ALERT_MSG__NULL";
		case 0:
			return "INTERFACE_ALERT_MSG__NO_PROBLEMS";
		case 1:
			return "INTERFACE_ALERT_MSG__AFK";
		case 2:
			return "INTERFACE_ALERT_MSG__STANDBY";
		case 3:
			return "INTERFACE_ALERT_MSG__ONLINE_UGC_ACCESS_RESTRICTED";
		case 4:
			return "INTERFACE_ALERT_MSG__ONLINE_CREATOR_ACCESS_RESTRICTED";
		case 5:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__PRE_INTRO";
		case 6:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__FORCE_PROGRESSION";
		case 7:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__SHIFT_F_FLOW";
		case 8:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__SHIFT_F_CURRENCY";
		case 9:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__LAUNCH_FLOW_TO_MISSION";
		case 10:
			return "INTERFACE_ALERT_MSG__DEBUG__ONLINE_AWARD_FAILED__FORCE_RANK";
		case 11:
			return "INTERFACE_ALERT_MSG__DEBUG__FORCE_FAIL_ONLINE";
		case 12:
			return "INTERFACE_ALERT_MSG__ONLINE_CLOUD";
		case 13:
			return "INTERFACE_ALERT_MSG__ONLINE_SAVE_FAILED1";
		case 14:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__PLAYER_GENDER_FAILED";
		case 15:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__OUTFIT_CRITICAL_COMPONENT_FAILED";
		case 16:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__OUTFIT_COMPONENT_FAILED";
		case 17:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__TOOK_TOO_LONG";
		case 18:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__TOO_MANY_ATTEMPTS";
		case 19:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__CASHINVENTORY_IS_CONNECTION_FAULTED";
		case 20:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__INVENTORY_ROOT_GUID_FAILED";
		case 21:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__INVENTORY_WEAPON_WHEEL_GUID_FAILED";
		case 22:
			return "INTERFACE_ALERT_MSG__ONLINE_CI_FAILED__CRITICAL_AWARD_REQUEST_FAILED";
		case 23:
			return "INTERFACE_ALERT_MSG__ONLINE_MUGSHOT_FAILED__CREATOR_MUGSHOT";
		case 24:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL";
		case 25:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SP_THREADS";
		case 26:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__MAIN_THREAD_CRASHED";
		case 27:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SESSION_ACTIVE_FAIL";
		case 28:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SESSION_REQUEST_FAIL";
		case 29:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SESSION_REQUEST_FAIL_RESULT_FATAL";
		case 30:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__STATE_TIME_OUT";
		case 31:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__SEAMLESS_FAILURE";
		case 32:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__NOT_NETWORK_HAVE_ONLINE_PRIVILEGES";
		case 33:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__NOT_NETWORK_IS_SIGNED_ONLINE";
		case 34:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__EVENT_NETWORK_PLAYER_SIGNED_OFFLINE";
		case 35:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__EVENT_NETWORK_NETWORK_BAIL";
		case 36:
			return "INTERFACE_ALERT_MSG__SESSION_FAIL__FRAMEWORK_INIT_FAIL";
		case 37:
			return "INTERFACE_ALERT_MSG__NODE_FAIL";
		case 38:
			return "INTERFACE_ALERT_MSG__UGC_DOWNLOAD";
		case 39:
			return "INTERFACE_ALERT_MSG__UGC_PRE_DOWNLOAD";
		case 40:
			return "INTERFACE_ALERT_MSG__INTRO_CRITICAL_FAILURE";
		case 41:
			return "INTERFACE_ALERT_MSG__ONLINE_FLOW_MISMATCH_ON_LOAD";
		case 42:
			return "INTERFACE_ALERT_MSG__ONLINE_FLOW_MISMATCH_ON_WIPE";
		case 43:
			return "INTERFACE_ALERT_MSG__ONLINE_FLOW_VARIANT_AWARD_FAIL";
		case 44:
			return "INTERFACE_ALERT_MSG__ONLINE_ROUTER_CONTEXT_NONE";
		case 45:
			return "INTERFACE_ALERT_MSG__ONLINE_INVITE_FALLBACK";
		case 46:
			return "INTERFACE_ALERT_MSG__ONLINE_INVITE_STARTUP_FAILED";
		case 47:
			return "INTERFACE_ALERT_MSG__ONLINE_ASYNC_FILE_LOAD_FAIL";
		case 48:
			return "INTERFACE_ALERT_MSG__ONLINE_MATCHMAKING_STARTED_DURING_MATCH";
		case 49:
			return "INTERFACE_ALERT_MSG__LANDING_PAGE_NO_DATA";
		case 50:
			return "INTERFACE_ALERT_MSG__LOBBY_FAILED_TO_ENTER";
		case 51:
			return "INTERFACE_ALERT_MSG__STALL_DETECTED";
		case 52:
			return "INTERFACE_ALERT_MSG__PLAYER_MODEL_NOT_SUPPORTED";
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

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "FEED_ERROR_AFK";
		case 2:
			return "FEED_ERROR_STANDBY";
		case 3:
			return "FEED_ERROR_ONLINE_UGC_ACCESS_RESTRICTED";
		case 4:
			return "FEED_ERROR_ONLINE_CREATOR_ACCESS_RESTRICTED";
		case 5:
			return "";
		case 6:
			return "";
		case 7:
			return "";
		case 8:
			return "";
		case 9:
			return "";
		case 10:
			return "";
		case 11:
			return "";
		case 12:
			return "FEED_ERROR_ONLINE_CLOUD";
		case 13:
			return "FEED_ERROR_ONLINE_SAVE_FAILED1";
		case 14:
			return "FEED_ERROR_ONLINE_CI_FAILED__PLAYER_GENDER_FAILED";
		case 16:
			return "FEED_ERROR_ONLINE_CI_FAILED__OUTFIT_COMPONENT_FAILED";
		case 15:
			return "FEED_ERROR_ONLINE_CI_FAILED__OUTFIT_CRITICAL_COMPONENT_FAILED";
		case 17:
			return "FEED_ERROR_ONLINE_CI_FAILED__TOOK_TOO_LONG";
		case 18:
			return "FEED_ERROR_ONLINE_CI_FAILED__TOO_MANY_ATTEMPTS";
		case 19:
			return "FEED_ERROR_ONLINE_CI_FAILED__CASHINVENTORY_IS_CONNECTION_FAULTED";
		case 20:
			return "FEED_ERROR_ONLINE_CI_FAILED__INVENTORY_ROOT_GUID_FAILED";
		case 21:
			return "FEED_ERROR_ONLINE_CI_FAILED__INVENTORY_WEAPON_WHEEL_GUID_FAILED";
		case 22:
			return "FEED_ERROR_ONLINE_CI_FAILED__CRITICAL_AWARD_REQUEST_FAILED";
		case 23:
			return "FEED_ERROR_ONLINE_MUGSHOT_FAILED__CREATOR_MUGSHOT";
		case 24:
			return "FEED_ERROR_SESSION_FAIL";
		case 25:
			return "FEED_ERROR_SESSION_FAIL__SP_THREADS";
		case 26:
			return "FEED_ERROR_SESSION_FAIL__MAIN_THREAD_CRASHED";
		case 27:
			return "FEED_ERROR_SESSION_FAIL__SESSION_ACTIVE_FAIL";
		case 28:
			return "FEED_ERROR_SESSION_FAIL__SESSION_REQUEST_FAIL";
		case 29:
			return "FEED_ERROR_SESSION_FAIL__SESSION_REQUEST_FAIL_RESULT_FATAL";
		case 30:
			return "FEED_ERROR_SESSION_FAIL__STATE_TIME_OUT";
		case 31:
			return "FEED_ERROR_SESSION_FAIL__SEAMLESS_FAILURE";
		case 32:
			return "FEED_ERROR_SESSION_FAIL__NOT_NETWORK_HAVE_ONLINE_PRIVILEGES";
		case 33:
			return "FEED_ERROR_SESSION_FAIL__NOT_NETWORK_IS_SIGNED_ONLINE";
		case 34:
			return "FEED_ERROR_SESSION_FAIL__EVENT_NETWORK_PLAYER_SIGNED_OFFLINE";
		case 35:
			return "FEED_ERROR_SESSION_FAIL__EVENT_NETWORK_NETWORK_BAIL";
		case 36:
			return "FEED_ERROR_SESSION_FAIL__FRAMEWORK_INIT_FAIL";
		case 37:
			return "FEED_ERROR_NODE_FAIL";
		case 38:
			return "FEED_ERROR_UGC_DOWNLOAD";
		case 39:
			return "FEED_ERROR_UGC_PRE_DOWNLOAD";
		case 40:
			return "FEED_ERROR_INTRO_CRITICAL_FAILURE";
		case 41:
			return "FEED_ERROR_ONLINE_FLOW_MISMATCH_ON_LOAD";
		case 42:
			return "FEED_ERROR_ONLINE_FLOW_MISMATCH_ON_WIPE";
		case 43:
			return "FEED_ERROR_ONLINE_FLOW_VARIANT_AWARD_FAIL";
		case 44:
			return "FEED_ERROR_ONLINE_ROUTER_CONTEXT_NONE";
		case 45:
			return "FEED_ERROR_ONLINE_INVITE_FALLBACK";
		case 46:
			return "FEED_ERROR_ONLINE_INVITE_FALLBACK";
		case 47:
			return "FEED_ERROR_ONLINE_ASYNC_FILE_LOAD_FAIL";
		case 48:
			return "FEED_ERROR_ONLINE_MATCHMAKING_STARTED_DURING_MATCH";
		case 49:
			return "FEED_ERROR_LANDING_PAGE_NO_DATA";
		case 50:
			return "FEED_ERROR_LOBBY_FAILED_TO_ENTER";
		case 51:
			return "FEED_ERROR_STALL_DETECTED";
		case 52:
			return "FEED_ERROR_PLAYER_MODEL_NOT_SUPPORTED";
	}
	return "";
}

char* func_67(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ROUTER_CONTEXT_NONE";
		case 1:
			return "ROUTER_CONTEXT_INTERFACE";
		case 2:
			return "ROUTER_CONTEXT_SP";
		case 3:
			return "ROUTER_CONTEXT_MP";
		case 4:
			return "ROUTER_CONTEXT_TLG";
		case 5:
			return "ROUTER_CONTEXT_CLIP";
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

bool func_68(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

char* func_69(int iParam0)
{
	char* sVar0;

	sVar0 = "invalid net player status flag";
	switch (iParam0)
	{
		case 0:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN";
			break;
		case 3:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_DESIRED";
			break;
		case 4:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_ABSOLUTE";
			break;
		case 5:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_AT_CAMP";
			break;
		case 6:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_IN_MOONSHINE";
			break;
		case 7:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_JAIL";
			break;
		case 9:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_TRADE";
			break;
		case 8:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_FAST_TRAVEL_STATION";
			break;
		case 10:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_DEBUG";
			break;
		case 11:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_ASAP";
			break;
		case 12:
			sVar0 = "PLAYSTAT_FLAG_SCRIPT_CONTROL_OVERRIDE";
			break;
		case 13:
			sVar0 = "PLAYSTAT_FLAG_MODE_OVERRIDE";
			break;
		case 14:
			sVar0 = "PLAYSTAT_FLAG_MISSION_OVERRIDE";
			break;
		case 15:
			sVar0 = "PLAYSTAT_FLAG_VERSUS_OVERRIDE";
			break;
		case 16:
			sVar0 = "PLAYSTAT_FLAG_GENERIC_SPAWN_FAR_ONCE";
			break;
		case 17:
			sVar0 = "PLAYSTAT_FLAG_PAUSE_RESPAWN_FADE_UP";
			break;
		case 18:
			sVar0 = "PLAYSTAT_FLAG_SKIP_RESPAWN_FADE_IN";
			break;
		case 19:
			sVar0 = "PLAYSTAT_FLAG_SKIP_RESPAWN_FADE_OUT";
			break;
		case 20:
			sVar0 = "PLAYSTAT_FLAG_SKIP_LOADING_SCREEN_SHUTDOWN";
			break;
		case 21:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_POST_FX";
			break;
		case 22:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_POST_FX_ONCE";
			break;
		case 23:
			sVar0 = "PLAYSTAT_FLAG_CLEANUP_MATCHMAKING_POST_FX";
			break;
		case 24:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_INVISIBLE_ONCE";
			break;
		case 25:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITHOUT_CONTROL_ONCE";
			break;
		case 26:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_SCRIPT_CONTROL_INFO";
			break;
		case 27:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_REGION_RESET";
			break;
		case 1:
			sVar0 = "PLAYSTAT_FLAG_IN_RESPAWN_SEQUENCE";
			break;
		case 28:
			sVar0 = "PLAYSTAT_FLAG_HIDE_SPECTATOR_UI";
			break;
		case 29:
			sVar0 = "PLAYSTAT_FLAG_SKIP_SPECTATOR_MODE_ON_DEATH";
			break;
		case 30:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_SPECTATOR_MODE_ON_DEATH";
			break;
		case 31:
			sVar0 = "PLAYSTAT_FLAG_INVISIBLE_TO_SPECTATOR_CAM";
			break;
		case 32:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_DEATH_CAM_HOLD_TIME";
			break;
		case 34:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_LOCKON";
			break;
		case 35:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_FIRING";
			break;
		case 36:
			sVar0 = "PLAYSTAT_FLAG_SECURITY_CLIENT";
			break;
		case 37:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_RESPAWN_INVINCIBILITY";
			break;
		case 38:
			sVar0 = "PLAYSTAT_FLAG_CAMP_RELOAD";
			break;
		case 39:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_GHOSTTOWN";
			break;
		case 41:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_INVENTORY_CONFIG";
			break;
		case 42:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_INVENTORY_CONFIG";
			break;
		case 43:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_AMMO_UI_CONFIG";
			break;
		case 44:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_AMMO_UI_CONFIG";
			break;
		case 47:
			sVar0 = "PLAYSTAT_FLAG_ACTIVATE_CUSTOM_CAM_ON_RESPAWN";
			break;
		case 48:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_SPAWN_CONFIG";
			break;
		case 49:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_SPAWN_CONFIG";
			break;
		case 50:
			sVar0 = "PLAYSTAT_FLAG_USE_CUSTOM_POSITION_WITH_MOUNT";
			break;
		case 53:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HUB";
			break;
		case 54:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HUB_ONCE";
			break;
		case 51:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_COUPON";
			break;
		case 52:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_COUPON_ONCE";
			break;
		case 59:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HANDHELD";
			break;
		case 60:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HANDHELD_ONCE";
			break;
		case 61:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BLACKBOARD";
			break;
		case 62:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BLACKBOARD_ONCE";
			break;
		case 63:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_ANIMATION";
			break;
		case 64:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_ANIMATION_ONCE";
			break;
		case 65:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_MOUNT";
			break;
		case 66:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_MOUNT_ONCE";
			break;
		case 67:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RESPOT_DISABLED";
			break;
		case 68:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RESPOT_DISABLED_ONCE";
			break;
		case 70:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_MOUNT_ONCE";
			break;
		case 69:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_MOUNT";
			break;
		case 72:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_MOUNT_ONCE";
			break;
		case 71:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_MOUNT";
			break;
		case 73:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_MOUNT_ON_RESPAWN";
			break;
		case 75:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_ONCE";
			break;
		case 74:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE";
			break;
		case 78:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_VEHICLE_ONCE";
			break;
		case 77:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_VEHICLE";
			break;
		case 76:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_VEHICLE_ON_RESPAWN";
			break;
		case 82:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TRAIN_ONCE";
			break;
		case 81:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TRAIN";
			break;
		case 84:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_TRAIN_ONCE";
			break;
		case 83:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_TRAIN";
			break;
		case 79:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_NAVMESH";
			break;
		case 80:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_NAVMESH_ONCE";
			break;
		case 86:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_VEHICLE_ONCE";
			break;
		case 85:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_VEHICLE";
			break;
		case 89:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_DISABLE_WATER_FAILSAFE";
			break;
		case 90:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_IN_WATER";
			break;
		case 91:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_IN_WATER_ONCE";
			break;
		case 92:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RANDOM_SEED";
			break;
		case 93:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_NEAR_LOCATION_ONCE";
			break;
		case 94:
			sVar0 = "PLAYSTAT_FLAG_DONT_RESPAWN_IN_VOLUME_LOCKS_ONCE";
			break;
		case 95:
			sVar0 = "PLAYSTAT_FLAG_REGENERATE_PEDSHOT_ONCE";
			break;
		case 40:
			sVar0 = "PLAYSTAT_FLAG_FAKE_GAMER_TAG";
			break;
		case 108:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_MOUNT_RELEASE";
			break;
		case 96:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_DESIRED_WEAPON_IN_HAND";
			break;
		case 97:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_DESIRED_WEAPON_IN_HAND_ONCE";
			break;
		case 98:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BEST_WEAPON_IN_HAND";
			break;
		case 99:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BEST_WEAPON_IN_HAND_ONCE";
			break;
		case 100:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_LAST_WEAPON_IN_HAND";
			break;
		case 101:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_LAST_WEAPON_IN_HAND_ONCE";
			break;
		case 102:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_IN_HAND";
			break;
		case 103:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_IN_HAND_ONCE";
			break;
		case 104:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_PROCESSING";
			break;
		case 105:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_PROCESSING_ONCE";
			break;
		case 106:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_ANIMAL_INVULNERABILITY";
			break;
		case 107:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_ANIMAL_INVULNERABILITY_ONCE";
			break;
		case 87:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_ADJUSTED_OFFSET_FOR_TRANSPORT";
			break;
		case 88:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_ADJUSTED_OFFSET_FOR_TRANSPORT_ONCE";
			break;
		case 45:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_DROP_WEAPONS_ON_DEATH";
			break;
		case 46:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_LOOTING";
			break;
		case 109:
			sVar0 = "PLAYSTAT_FLAG_DONT_USE_ALPHA_FADE_ON_RESPAWN";
			break;
		case 110:
			sVar0 = "PLAYSTAT_FLAG_DONT_USE_ALPHA_FADE_ON_RESPAWN_ONCE";
			break;
		case 111:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_LEAVES_ALIVE_PED_ONCE";
			break;
		case 112:
			sVar0 = "PLAYSTAT_FLAG_FORCE_COLLISION_WHEN_RESPOT_TIMER_FINISHED";
			break;
		case 113:
			sVar0 = "PLAYSTAT_FLAG_ALLOW_INCAPACITATION";
			break;
		case 114:
			sVar0 = "PLAYSTAT_FLAG_STORE_DAMAGE_EVENT";
			break;
		case 118:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SANS_WEAPONS";
			break;
		case 119:
			sVar0 = "PLAYSTAT_FLAG_REGISTER_LOADOUT_OVERRIDE_ON_RESPAWN";
			break;
		case 120:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_LOADOUT_OVERRIDE_REGISTRATION";
			break;
		case 121:
			sVar0 = "PLAYSTAT_FLAG_CLEAR_LOADOUT_OVERRIDE_ON_RESPAWN";
			break;
		case 122:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_WEAPONS_IN_HAND";
			break;
		case 123:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_LOADOUT";
			break;
		case 124:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_INVENTORY_OVERRIDE";
			break;
		case 125:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_OUTFIT_OVERRIDE";
			break;
		case 126:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_AMMO_TYPE_UNLOCKS";
			break;
		case 127:
			sVar0 = "PLAYSTAT_FLAG_SPECIAL_ABILITY_OVERRIDE_DEACTIVATION";
			break;
		case 128:
			sVar0 = "PLAYSTAT_FLAG_SPECIAL_ABILITY_DEACTIVATE_ON_CANCEL";
			break;
		case 129:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_NO_COMPONENT_LOAD";
			break;
		case 130:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_NO_EXPRESSION_LOAD";
			break;
		case 131:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_BLOCK_TEAM_RESET";
			break;
		case 132:
			sVar0 = "PLAYSTAT_FLAG_PAUSE_RELATIONSHIP_UPDATE";
			break;
		case 133:
			sVar0 = "PLAYSTAT_FLAG_DONT_PROCESS_FAST_INSTANCING";
			break;
		case 134:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_INTO_FAST_INSTANCE";
			break;
		case 2:
			sVar0 = "PLAYSTAT_FLAG_BYPASS_RESSURRECT_AND_TELEPORT";
			break;
		case 136:
			sVar0 = "PLAYSTAT_FLAG_OVERRIDE_PLAYER_ABILITIES";
			break;
		case 135:
			sVar0 = "PLAYSTAT_FLAG_GANG_FEUDS_ARE_UNLOCKED";
			break;
		case 115:
			sVar0 = "PLAYSTAT_FLAG_PAY_BOUNTY_ON_RESPAWN";
			break;
		case 117:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_PRESERVE_HEALTH";
			break;
		case 116:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_PRESERVE_DEADEYE";
			break;
		case 137:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_CORPSE_ON_RESPAWN_ONCE";
			break;
		case 138:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_CORPSE_ON_RESPAWN";
			break;
		case 139:
			sVar0 = "PLAYSTAT_FLAG_KEEP_CORPSE_ON_RESPAWN_ONCE";
			break;
		case 140:
			sVar0 = "PLAYSTAT_FLAG_KEEP_CORPSE_ON_RESPAWN";
			break;
		case 141:
			sVar0 = "PLAYSTAT_FLAG_CANNOT_BE_CARRIED_WHEN_DEAD";
			break;
		case 142:
			sVar0 = "PLAYSTAT_FLAG_CLEANUP_TRANSITION_SETTINGS";
			break;
		case 33:
			sVar0 = "PLAYSTAT_FLAG_MAINTAIN_DEATH_CAM_ON_RESPAWN";
			break;
		case 144:
			sVar0 = "PLAYSTAT_FLAG_DONT_CLEAR_DRUNK_FOR_SPAWNING_OR_CUTSCENES";
			break;
		case 145:
			sVar0 = "PLAYSTAT_FLAG_DONT_SESSION_ON_RESPAWN_ONCE";
			break;
	}
	return sVar0;
}

bool func_70(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

void func_71(var uParam0)
{
	Global_1102630.f_26.f_12 = uParam0;
}

char* func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_FREE_MODE_OPTIONS";
		case 1:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_NET_STORY_MISSION_OPTIONS";
		case 2:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_MISSION_OPTIONS";
		case 3:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_MISSION_OPTIONS_WITH_NO_BUTTONS";
		case 4:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS";
		case 5:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS_PLUS_EXIT";
		case 6:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS_PLUS_EXIT_KILL_CAM";
		case 7:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY";
		case 8:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_CANCEL";
		case 9:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_NO_BUTTONS";
		case 10:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_NO_BUTTONS_NO_FADE";
		case 11:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_PLUS_EXIT";
		case 12:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_PLUS_EXIT_KILL_CAM";
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

bool func_73(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

bool func_74(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_75(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
}

int func_76()
{
	if (Global_1102630 <= 5)
	{
		return Global_1102630;
	}
	if (Global_1102630 <= 22)
	{
		return 4;
	}
	if (Global_1102630 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_77(int iParam0)
{
	if (func_80(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

char* func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("VOLBOX"):
			return "VOLBOX";
		case joaat("VOLSPHERE"):
			return "VOLSPHERE";
		case joaat("VOLCYLINDER"):
			return "VOLCYLINDER";
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

void func_79()
{
	Global_1051590.f_7++;
	if (Global_1051590.f_7 > 6)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 34, "INCREMENT_SESSION_MESSAGE_QUEUE_SIZE - Incrementing past max.  Bad idea.");
		Global_1051590.f_7 = 6;
	}
}

bool func_80(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

