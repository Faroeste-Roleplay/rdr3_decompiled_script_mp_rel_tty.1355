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
	struct<2> Local_13 = { 0, 0 } ;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	Local_13.f_1 = { ScriptParam_0 };
	func_1();
	while (!func_2(0, 0) && Local_13 != 5)
	{
		func_3(&Local_13);
		BUILTIN::WAIT(0);
	}
	func_4();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

bool func_2(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_5(Global_1572887, 0), ", so skipping");
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

void func_3(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(iParam0->f_1.f_1), iVar0))
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				SCRIPTS::_0xD426E2E3288469D6(&(iParam0->f_1.f_1), iVar0);
			}
		}
		iVar0++;
	}
	if (*iParam0 > 0)
	{
		if ((MISC::GET_GAME_TIMER() - iParam0->f_6) > 15000)
		{
			DEBUG::_0x83407B92D46F25C3(8, 45, "PROCESS_UPDATE - It's taken us longer than 15 seconds to split.  Forcing an exit now, you are not sessioned. Bug this issue for Default Code (Network).");
			DEBUG::_0xD9911C7B5F8CD69C(8, 45, "PROCESS_UPDATE - It's taken us longer than 15 seconds to split.  Forcing an exit now, you are not sessioned. Bug this issue for Default Code (Network).");
			func_6(5, iParam0);
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (NETWORK::_0xE404BFF0ABA23CDC(&(iParam0->f_1.f_1)))
			{
				func_6(1, iParam0);
				iParam0->f_6 = MISC::GET_GAME_TIMER();
				DEBUG::_0xF0783374333FD8CE(648, 45, "NAL_STATE_INIT - Starting session split at ", iParam0->f_6, ", bDisableLeaveRemotePed = ", MISC::_0xF216F74101968DB0(iParam0->f_1.f_3));
				NETWORK::_0xC505036A35AFD01B(iParam0->f_1.f_3);
			}
			else
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 45, "NAL_STATE_INIT - NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION Broke.  Don't know why.  Check logs.");
			}
			break;
		case 1:
			if (NETWORK::_0xC223D299C670413D(1, iParam0->f_1.f_4, 0, -1))
			{
				func_6(2, iParam0);
			}
			else
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 45, "NAL_STATE_START_SESSION_SPLIT - NETWORK_AUTO_SESSION_SPLIT_SESSION Broke.  Don't know why.  Check logs.");
			}
			break;
		case 2:
			if (NETWORK::_0xA021095C983F20D8())
			{
				DEBUG::_0xF0783374333FD8CE(8, 45, "NAL_STATE_VERIFY_SESSION_SPLIT_COMPLETION - Still splitting.");
			}
			else
			{
				func_6(3, iParam0);
			}
			break;
		case 3:
			if (NETWORK::_0x6D87BA8EF15226CD())
			{
				func_6(4, iParam0);
			}
			else
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 45, "NAL_STATE_PROCESS_SESSION_SPLIT_RESULT - Split failed.  Gonna try again.  You should check the logs.");
				func_6(1, iParam0);
			}
			break;
		case 4:
			if (NETWORK::_0x277865A734918AE6())
			{
				if (!NETWORK::_0x0B6B4507AC5EA8B8())
				{
					if (!NETWORK::_0x1BB50CD340A996E6())
					{
						NETWORK::_0x101F538C25ABB39A(0, 0);
					}
				}
				DEBUG::_0xF0783374333FD8CE(8, 45, "NAL_STATE_CHECK_SESSION_SPLIT_INSTANCE - Session split took ", (MISC::GET_GAME_TIMER() - iParam0->f_6));
				func_6(5, iParam0);
			}
			else
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 45, "NAL_STATE_CHECK_SESSION_SPLIT_INSTANCE - Split failed.  Gonna try again.  You should check the logs.");
				func_6(1, iParam0);
			}
			break;
		case 5:
			break;
	}
}

void func_4()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_5(int iParam0, int iParam1)
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

void func_6(int iParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 45, "GO_TO_STATE - Previous State = ", func_7(*iParam1, 0), " Next State = ", func_7(iParam0, 0));
	*iParam1 = iParam0;
}

char* func_7(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NAL_STATE_INIT";
		case 1:
			return "NAL_STATE_START_SESSION_SPLIT";
		case 2:
			return "NAL_STATE_VERIFY_SESSION_SPLIT_COMPLETION";
		case 3:
			return "NAL_STATE_PROCESS_SESSION_SPLIT_RESULT";
		case 4:
			return "NAL_STATE_CHECK_SESSION_SPLIT_INSTANCE";
		case 5:
			return "NAL_STATE_EXIT";
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

