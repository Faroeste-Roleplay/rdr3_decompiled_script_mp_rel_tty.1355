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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 4;
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
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	bool bScriptParam_0 = false;
#endregion

void __EntryFunction__()
{
	iLocal_37 = joaat("W_BINOCULAR_INNER01");
	fLocal_52 = 1f;
	fLocal_53 = 1f;
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "########## net_ugc_end_flow_transition_handler Started ##########");
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "########## 1.5.0 ##########");
	if (bScriptParam_0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "########## Was Matchmade ##########");
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "########## Was NOT Matchmade ##########");
	}
	func_1();
	while (!func_2(1, 1))
	{
		func_3(1);
		NETWORK::_0x236905C700FDB54D();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
		func_4();
		func_5();
		switch (iLocal_54)
		{
			case 0:
				if (Global_1051138)
				{
					if (((!func_6() || Global_1572887.f_366.f_26 != 0) || !bScriptParam_0) || Global_1572887.f_108.f_13 == 1)
					{
						if (!func_7())
						{
							GRAPHICS::ANIMPOSTFX_STOP_ALL();
						}
						HUD::_HIDE_HUD_COMPONENT(690901814);
						func_8(0);
						func_9(1);
					}
					else
					{
						if (func_6())
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] NETWORK_IS_ONLINE_AND_IN_GAMEPLAY_UPDATE_LOOP = TRUE");
						}
						if (bScriptParam_0)
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] launchParams.bWasMatchmade  = TRUE");
						}
						if (Global_1572887.f_108.f_13 == 1)
						{
						}
						else
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] g_mpTransition.matchmakingData.eMatchMode != NMM_SEAMLESS_INSTANCE");
						}
						if (Global_1572887.f_366.f_26 != 0)
						{
						}
						else
						{
							DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] g_mpTransition.sessionRequestData.eRequestResult = NSRR_INVALID");
						}
						func_8(1);
					}
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] not triggered");
				}
				break;
			case 1:
				if (func_6())
				{
					func_9(2);
				}
				break;
			case 2:
				if (func_10() && !func_11())
				{
					if (func_12(Global_3407872.f_2498, 4))
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] Respawn handled by transition online");
						func_9(3);
					}
				}
				else
				{
					func_13(1, 1);
					if (func_12(Global_1051135, 64))
					{
						func_14(0);
					}
					else if (func_15(255) == 4)
					{
					}
					else
					{
						func_16(1, 1);
					}
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] Respawn handled by transition offline");
					func_9(3);
				}
				break;
			case 3:
				if (func_15(255) != 1)
				{
				}
				else
				{
					func_9(4);
				}
				break;
			case 4:
				if (!func_7())
				{
					func_17(&(Global_3407872.f_2498), 1);
					func_9(5);
				}
				break;
			case 5:
				if (func_11() || func_12(Global_3407872.f_2498, 2))
				{
					GRAPHICS::RESET_PAUSED_RENDERPHASES();
					func_18();
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					AUDIO::_0x2E399EAFBEEA74D5();
					func_19(&uLocal_55, 1, 0);
					func_9(6);
				}
				break;
			case 6:
				if (func_20(&uLocal_55, 1, 0) > 1500)
				{
					func_9(7);
					GRAPHICS::_0xC5CB91D65852ED7E("RespawnMissionCheckpoint");
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "ANIMPOSTFX_IS_STOPPING");
				}
				break;
			case 7:
				AUDIO::_0x2E399EAFBEEA74D5();
				if (!func_21())
				{
					func_22();
					func_23();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_22();
	func_23();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_24(Global_1572887, 0), ", so skipping");
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

void func_3(bool bParam0)
{
	if (!bParam0)
	{
		func_25(21);
	}
	else
	{
		func_14(21);
	}
}

void func_4()
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC] CLOSE_ALL_GAME_UI_MENUS - Called from:");
	UNK_0x355E72323AEE83CC(227, 6);
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("PAUSE_MENU"));
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("ABILITIES")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("ABILITIES")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("ABILITIES"));
	}
	if (func_26())
	{
		func_27();
	}
	if (func_28())
	{
		func_29();
	}
}

void func_5()
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (iLocal_57 != 0)
	{
		return;
	}
	if (!func_10())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_LAUNCH_UGC_END_FLOW_TRANSITION_ONLINE - online not needed");
		iLocal_57 = 2;
		return;
	}
	if (func_21())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_LAUNCH_UGC_END_FLOW_TRANSITION_ONLINE - online already running");
		iLocal_57 = 1;
		return;
	}
	func_30();
	if (iLocal_54 <= 1)
	{
		return;
	}
	iVar0 = func_31();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_LAUNCH_UGC_END_FLOW_TRANSITION_ONLINE - Attempting to launch EndFlowTransitionOnline");
		uVar1 = -1;
		func_32(&Global_3407872, &uVar1);
		iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("NET_UGC_END_FLOW_TRANSITION_ONLINE"), &uVar1, 1, 14335);
		if (SCRIPTS::_DOES_THREAD_EXIST(iVar2))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_LAUNCH_UGC_END_FLOW_TRANSITION_ONLINE - Launched EndFlowTransitionOnline script");
			iLocal_57 = 1;
			if (func_33())
			{
				func_17(&(Global_3407872.f_2498), 8);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_LAUNCH_UGC_END_FLOW_TRANSITION_ONLINE - Timer expired, Setting UGC_END_FLOW_TRANSITION_FLAGS_TimeOutCompleted");
			}
			else
			{
				func_34(&(Global_3407872.f_2498), 8);
			}
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[UGC][END_FLOW][TRANSITION] PROCESS_LAUNCH_UGC_END_FLOW_TRANSITION_ONLINE - FAILED to launch EndFlowTransitionOnline script!");
			iLocal_57 = 2;
		}
	}
}

bool func_6()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_5;
}

bool func_7()
{
	return Global_1072032.f_28725.f_22.f_3 != 0;
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		func_35(16384);
	}
	else
	{
		func_36(16384);
	}
}

void func_9(int iParam0)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "GO_TO_UGC_END_FLOW_TRANSITION_STATE - previous state - ", func_37(iLocal_54, 0), ", next state = ", func_37(iParam0, 0));
	iLocal_54 = iParam0;
}

bool func_10()
{
	return Global_3407872.f_225 != 0;
}

bool func_11()
{
	if (iLocal_57 == 0)
	{
		return false;
	}
	return !func_21();
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_13(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 != -1)
		{
			Global_1102630.f_3809 = 0;
			DEBUG::_0xF0783374333FD8CE(40, 36, "NET_PLAYER_STATUS_USE_WITH_BLACKBOARD_ANIMATION_ONCE - Setting spawn anim to ", func_38(iParam1));
		}
		else
		{
			Global_1102630.f_3809 = 1;
			DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_USE_WITH_BLACKBOARD_ANIMATION_ONCE - Setting spawn anim to random.");
		}
		func_14(62);
		Global_1102630.f_3808 = iParam1;
	}
	else
	{
		func_25(62);
	}
}

int func_14(int iParam0)
{
	if (func_39(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_40(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
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

void func_16(bool bParam0, bool bParam1)
{
	if (func_15(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_41(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (!bParam0)
	{
		func_25(0);
	}
	else
	{
		if (bParam1)
		{
			func_42(0, 0, 0, 1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Not clearing the spectator lock!");
			UNK_0x355E72323AEE83CC(36, 6);
		}
		func_14(0);
		func_43(&(Global_1102630.f_3849));
		Global_1102630.f_3849 = 0f;
		Global_1102630.f_3849.f_5 = 1;
		Global_1102630.f_3849.f_16 = 0;
		Global_1102630.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_17 = { Global_1901988.f_50.f_1, Global_1901988.f_50.f_1, Global_1901988.f_50.f_1 };
		Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_44(&(Global_1102630.f_3888));
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
	func_45(Global_1102630.f_3849, 36);
	func_46(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_18()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_HIDE_BUSYSPINNER - hiding busy spinner");
	Global_1940296.f_105 = -1;
	Global_1940296.f_105.f_1 = 0;
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

bool func_21()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_UGC_END_FLOW_TRANSITION_ONLINE")) > 0;
}

void func_22()
{
	func_47();
	Global_1051139 = 0;
	func_3(0);
	func_48(0);
	func_49(0);
	AUDIO::_0x2E399EAFBEEA74D5();
	func_50();
}

void func_23()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
{
	if (func_51(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_40(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

bool func_26()
{
	return Global_1896750.f_398;
}

void func_27()
{
	func_52(0);
	DEBUG::_0xF0783374333FD8CE(8, 162, "[PLAYER_MENU_FORCE_SHUTDOWN] A script has force shutdown the player menu | Printing a Callstack");
	UNK_0x355E72323AEE83CC(162, 6);
}

bool func_28()
{
	return Global_1940463.f_2;
}

void func_29()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SATCHEL")) > 0)
	{
		Global_1940463.f_13 = 1;
		DEBUG::_0xA308F935BDECCEC0(40, 158, "SATCHEL_FORCE_SHUTDOWN - shutdown requested by ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(168, 158, "SATCHEL_FORCE_SHUTDOWN - shutdown requested by ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()), ", but the satchel script is not running! Ignoring this request.");
	}
	UNK_0x355E72323AEE83CC(158, 6);
}

void func_30()
{
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("NET_UGC_END_FLOW_TRANSITION_ONLINE"));
}

int func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("NET_UGC_END_FLOW_TRANSITION_ONLINE")))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar2 /*7*/])))
		{
		}
		else
		{
			iVar1++;
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar2 /*7*/])))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar2 /*7*/]));
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
				}
				else
				{
					iVar0++;
				}
			}
		}
		iVar2++;
	}
	if (iVar0 >= iVar1)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_IS_READY_TO_LAUNCH - TRUE - iConnected: ", iVar0, " >= iExpected: ", iVar1);
		return 1;
	}
	if (!func_53(&uLocal_58))
	{
		func_19(&uLocal_58, 1, 0);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_IS_READY_TO_LAUNCH - FAIL SAFE - timer started");
	}
	if (!func_33())
	{
		return 0;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_IS_READY_TO_LAUNCH - TRUE - FAIL SAFE - timer expired");
	return 1;
}

void func_32(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(uParam0[iVar0 /*7*/]))
		{
		}
		else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam0[iVar0 /*7*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam0[iVar0 /*7*/]);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
			{
			}
			else
			{
				iVar3 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar2);
				if (iVar1 == -1 || iVar3 < iVar1)
				{
					DEBUG::_0xEF256AE8A5A27966(41504, 59, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_GET_INSTANCE_ID - Updated iLowestUniqueInt: ", iVar1, " -> ", iVar3, " from player: ", PLAYER::GET_PLAYER_NAME(iVar2));
					iVar1 = iVar3;
				}
			}
		}
		iVar0++;
	}
	*uParam1 = iVar1;
	DEBUG::_0xEF256AE8A5A27966(32, 59, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_GET_INSTANCE_ID - result: ", iVar1);
}

bool func_33()
{
	if (!func_53(&uLocal_58))
	{
		return false;
	}
	if (func_20(&uLocal_58, 1, 0) <= 20000)
	{
		return false;
	}
	return true;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_35(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 45, "SKYLAPSE SETTING BIT ", func_54(iParam0, 0));
	func_55(&(Global_1072032.f_28725.f_22.f_1), iParam0);
}

void func_36(int iParam0)
{
	if (func_56(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 45, "SKYLAPSE CLEARING BIT ", func_54(iParam0, 0));
		func_57(&(Global_1072032.f_28725.f_22.f_1), iParam0);
	}
}

char* func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_INIT";
		case 1:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_WAIT_FOR_SESSION_END";
		case 2:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_SPAWN_PLAYER";
		case 3:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_WAIT_FOR_PLAYER_SPAWN";
		case 4:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_WAIT_SKYLAPSE";
		case 5:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_FLASH_SCREEN";
		case 6:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_POSTFX_WAIT";
		case 7:
			return "UGC_END_FLOW_TRANSITION_OFFLINE_STATE_TERMINATE";
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

char* func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NPS_SPAWN_BB_ANIM__SPAWN_MISSION_INTRO";
		case 1:
			return "NPS_SPAWN_BB_ANIM__FREE_ROAM_SPAWN";
		default:
			break;
	}
	return "";
}

bool func_39(var uParam0, int iParam1, int iParam2)
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

char* func_40(int iParam0)
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

bool func_41(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_42(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_58(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_59(iParam0, 0));
	if (!func_60(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_61(128) && !func_62(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_63() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_25(18);
	}
	func_64(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

void func_43(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_44(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_45(struct<30> Param0, int iParam30)
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
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_65(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_65(Param0.f_6.f_9, 0));
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

void func_46(struct<7> Param0, var uParam7, var uParam8, int iParam9)
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

void func_47()
{
	Global_1051135 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 21, "INITIALIZE_UGC_END_FLOW_TRANSITION_OPTIONS");
}

void func_48(bool bParam0)
{
	if (!bParam0)
	{
		func_25(19);
	}
	else
	{
		func_14(19);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_49(bool bParam0)
{
	if (!bParam0)
	{
		func_25(18);
	}
	else
	{
		func_14(18);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_50()
{
	struct<228> Var0;

	DEBUG::_0xEF256AE8A5A27966(32, 59, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CLEAR - Clearing globals");
	Var0 = 32;
	Var0.f_227 = 1;
	Var0.f_227.f_1.f_25 = 4;
	Var0.f_227.f_1.f_25.f_1.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_346 = 20;
	Var0.f_227.f_1.f_346.f_1 = -1;
	Var0.f_227.f_1.f_346.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_927 = 20;
	Var0.f_227.f_1.f_927.f_1 = -1;
	Var0.f_227.f_1.f_927.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228 = 10;
	Var0.f_227.f_1.f_1228.f_1 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379 = 10;
	Var0.f_227.f_1.f_1379.f_1 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1530 = 1;
	Var0.f_227.f_1.f_1530.f_1 = -1;
	Var0.f_227.f_1.f_1530.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1530.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546 = 5;
	Var0.f_227.f_1.f_1546.f_1 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1622 = 8;
	Var0.f_227.f_1.f_1648 = 2;
	Var0.f_227.f_1.f_1652 = 4;
	Var0.f_227.f_1.f_1669 = 20;
	Var0.f_227.f_1.f_1830 = 20;
	Var0.f_227.f_1.f_1911 = 10;
	Var0.f_227.f_1.f_1952 = 1;
	Var0.f_227.f_1.f_1957 = 10;
	Var0.f_227.f_1.f_1998 = 5;
	Var0.f_227.f_1.f_2019 = 3;
	Var0.f_227.f_1.f_2044 = 3;
	Var0.f_227.f_1.f_2057 = 8;
	Var0.f_227.f_1.f_2057.f_1.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	MISC::_COPY_MEMORY(&Global_3407872, &Var0, 2499);
}

bool func_51(var uParam0, int iParam1, int iParam2)
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

void func_52(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896750.f_398)
		{
			DEBUG::_0xF0783374333FD8CE(680, 162, "[SET_PLAYER_MENU_VISIBLE] called from ", UNK_0x8F77B33B6A34D8BA(), " Setting to: ", MISC::_0xF216F74101968DB0(bParam0));
			UNK_0x355E72323AEE83CC(162, 6);
			Global_1896750.f_398 = bParam0;
		}
	}
	else if (Global_1896750.f_398)
	{
		DEBUG::_0xF0783374333FD8CE(680, 162, "[SET_PLAYER_MENU_VISIBLE] called from ", UNK_0x8F77B33B6A34D8BA(), " Setting to: ", MISC::_0xF216F74101968DB0(bParam0));
		UNK_0x355E72323AEE83CC(162, 6);
		Global_1896750.f_398 = bParam0;
	}
}

bool func_53(var uParam0)
{
	return uParam0->f_1;
}

char* func_54(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "__NTXP__SKYLAPSE_BIT_REQUEST_START";
		case 2:
			return "__NTXP__SKYLAPSE_BIT_REQUEST_END";
		case 4:
			return "__NTXP__SKYLAPSE_BIT_REQUEST_FADE_OUT";
		case 8:
			return "__NTXP__SKYLAPSE_BIT_IS_FAST_TRAVEL";
		case 16:
			return "__NTXP__SKYLAPSE_BIT_QUITTING";
		case 32:
			return "__NTXP__SKYLAPSE_BIT_SKYLAPSE_DONE";
		case 64:
			return "__NTXP__SKYLAPSE_BIT_SKYLAPSE_FADED_IN";
		case 128:
			return "__NTXP__SKYLAPSE_BIT_DONT_STOP_AUDIO_ONLINE_TRANSITION";
		case 256:
			return "__NTXP__SKYLAPSE_BIT_FOLLOWING_INVITE";
		case 512:
			return "__NTXP__SKYLAPSE_BIT_INVITE_TO_FREEROAM";
		case 1024:
			return "__NTXP__SKYLAPSE_BIT_ANIM_LOAD_FAILED";
		case 2048:
			return "__NTXP__SKYLAPSE_BIT_FME_QUIT";
		case 4096:
			return "__NTXP__SKYLAPSE_BIT_LEGENDARY_BOUNTY";
		case 8192:
			return "__NTXP__SKYLAPSE_BIT_DOING_END_FLOW";
		case 16384:
			return "__NTXP__SKYLAPSE_BIT_WAIT_FOR_ENDFLOW_INIT";
		case 32768:
			return "__NTXP__SKYLAPSE_BIT_INVITE_ERROR_DO_FADE_IN";
		case 65536:
			return "__NTXP__SKYLAPSE_BIT_SKIP_SKYLAPSE";
		case 131072:
			return "__NTXP__SKYLAPSE_BIT_MATCHMAKING_STILL_RUNNING";
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

void func_55(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

bool func_56(var uParam0)
{
	return func_67(Global_1072032.f_28725.f_22.f_1, uParam0);
}

void func_57(var uParam0, int iParam1)
{
	func_68(uParam0, iParam1);
}

void func_58(var uParam0)
{
	Global_1102630.f_26.f_12 = uParam0;
}

char* func_59(int iParam0, int iParam1)
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

bool func_60(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

bool func_61(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_62(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
}

int func_63()
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

void func_64(int iParam0)
{
	if (func_69(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

char* func_65(int iParam0, int iParam1)
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

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_67(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_69(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

