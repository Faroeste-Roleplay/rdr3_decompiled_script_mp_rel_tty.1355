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
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<36> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<12> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	DEBUG::_0xA308F935BDECCEC0(8, 40, "net_stable_mount.sc - Script is starting up....");
	Local_19.f_3 = BRAIN::_0x6818D1A194E29983();
	if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_3))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "c.sc - Script entity is not valid. Terminating....");
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "net_stable_mount.sc - Thread starting with instance ID: ", ScriptParam_0.f_11);
	DEBUG::_0xA308F935BDECCEC0(40, 40, "net_stable_mount.sc - tlDebugName = ", &(Local_19.f_35));
	func_1();
	while (!func_2(1, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_19.f_3) && BRAIN::_0x6818D1A194E29983() == Local_19.f_3))
	{
		if (!func_3(&Local_19, &ScriptParam_0))
		{
			func_4(&Local_19, &ScriptParam_0);
			if (func_3(&Local_19, &ScriptParam_0))
			{
			}
			else
			{
				Jump @163; //curOff = 157
				Jump @171; //curOff = 160
				BUILTIN::WAIT(0);
			}
			func_5(&Local_19, &ScriptParam_0);
			DEBUG::_0xA308F935BDECCEC0(8, 40, "net_stable_mount.sc - Script is terminating....");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "net_stable_mount.sc - tlDebugName = ", &(Local_19.f_35));
		}
	}
}

void func_1()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT__PROCESS_PRE_GAME");
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	BRAIN::_0xA6AC35DB4A7957A8(250);
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_6(Global_1572887, 0), ", so skipping");
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

bool func_3(var uParam0, bool bParam1)
{
	if (func_2(1, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - Ending thread due to kill event caught.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - tlDebugName = ", &(uParam0->f_35));
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - Ending thread due to mount no longer being around.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - tlDebugName = ", &(uParam0->f_35));
		return true;
	}
	if (func_7(uParam0, 12))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - Ending thread due to mount having died.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - tlDebugName = ", &(uParam0->f_35));
		return true;
	}
	if (func_7(uParam0, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - Ending thread due to force kill thread flag!");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - tlDebugName = ", &(uParam0->f_35));
		return true;
	}
	if (!func_7(uParam0, 2))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam1) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam1))
		{
			func_8(uParam0, 11);
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_SCRIPT_END - Ending thread due to gamer no longer being in our session.");
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_3 = BRAIN::_0x6818D1A194E29983();
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	uParam0->f_20 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_20))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_20);
		if (uParam0->f_19 != iVar0)
		{
			uParam0->f_19 = iVar0;
			func_8(uParam0, 29);
		}
	}
	switch (*uParam0)
	{
		case 0:
			func_9(uParam0, bParam1);
			break;
		case 1:
			func_10(uParam0, bParam1);
			break;
		case 2:
			func_11(uParam0, bParam1);
			break;
		case 3:
			func_12(uParam0, bParam1);
			break;
		case 4:
			func_13(uParam0, bParam1);
			break;
	}
	func_14(uParam0, bParam1);
	uParam0->f_2++;
	if (uParam0->f_2 > 5)
	{
		uParam0->f_2 = 0;
	}
}

void func_5(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	DEBUG::_0xA308F935BDECCEC0(8, 40, "                          NET_STABLE_MOUNT__CLEANUP");
	DEBUG::_0xA308F935BDECCEC0(8, 40, "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Removing blip blipMount.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		MAP::REMOVE_BLIP(&(uParam0->f_16));
	}
	if (HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_5))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Removing MP Gamer Tag giMountGamertag.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		HUD::REMOVE_MP_GAMER_TAG(&(uParam0->f_5));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT__CLEANUP - Entity does not exist.");
		DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__CLEANUP - ", &(uParam0->f_35));
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		bVar2 = PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true);
		bVar3 = TASK::IS_PED_IN_WRITHE(uParam0->f_18);
	}
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_MOUNT__CLEANUP - bDeadOrDying = ", MISC::_0xF216F74101968DB0(bVar2), " bWrithing = ", MISC::_0xF216F74101968DB0(bVar3));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
	bVar4 = true;
	if ((!Global_1048579 || !Global_397327.f_3) || Global_397327.f_18.f_1)
	{
		bVar4 = false;
	}
	bVar5 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP - bNetworkControl = ", MISC::_0xF216F74101968DB0(bVar5));
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "HorseCamp"))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Removing decorator 'HorseCamp'.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		DECORATOR::DECOR_REMOVE(uParam0->f_3, "HorseCamp");
	}
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "bHorseHasBeenStolen"))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Removing decorator 'bHorseHasBeenStolen'.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		DECORATOR::DECOR_REMOVE(uParam0->f_3, "bHorseHasBeenStolen");
	}
	if (func_7(uParam0, 5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (TASK::_0xEFC4303DDC6E60D3(iVar1) && TASK::_0xED1F514AF4732258(iVar1) == uParam0->f_18)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT__CLEANUP - TASK_STOP_LEADING_HORSE");
				TASK::_0xED27560703F37258(iVar1);
			}
		}
		if (PED::_0x5102307CE88798EB(uParam0->f_18))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT__CLEANUP - Calling RELEASE_PED_VISIBILITY_TRACKING");
			PED::_0x3088634CF8C819CF(uParam0->f_18);
		}
		if (bVar5)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Removing ped config flags.");
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 297, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 400, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_15(iVar1, uParam0->f_18, 0) || (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::GET_MOUNT(iVar1) == uParam0->f_18))
			{
				bVar6 = false;
				if (!PLAYER::IS_PLAYER_DEAD(iVar0))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING(iVar0) || PED::GET_PED_RESET_FLAG(iVar1, 311))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Mounted player is free aiming.");
						bVar6 = true;
					}
				}
				if ((bVar6 || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_18)) || PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Forcibly removing this ped from the mount.");
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
					PED::_REMOVE_PED_FROM_MOUNT(iVar1, true, false);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Tasking ourselves off the mount nicely.");
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
					TASK::TASK_DISMOUNT_ANIMAL(iVar1, 1, 0, 0, 0, 0);
				}
			}
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			iVar7 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar7))
			{
				iVar7 = uParam0->f_20;
			}
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar7) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar7))
			{
				iVar8 = iVar0;
				iVar9 = iVar7;
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar8 /*19*/].f_13), iVar9))
				{
					DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP - clearing release bit for player who no longer needs it - ", PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar9)));
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1270185[iVar8 /*19*/].f_13), iVar9);
				}
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar8 /*19*/].f_14), iVar9))
				{
					DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP - clearing interaction bit for player who no longer needs it - ", PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar9)));
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1270185[iVar8 /*19*/].f_14), iVar9);
				}
			}
		}
		if (!bVar5)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - queue ped for deletion.");
			if (!func_16(uParam0->f_3, uParam0->f_4, !func_7(uParam0, 11)))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Queueing mount entity for removal failed!");
			}
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - we have net control, cleanup should work nicely.");
			DECORATOR::DECOR_SET_BOOL(uParam0->f_3, "bHorseCleanedUp", true);
		}
	}
	else if (func_7(uParam0, 6))
	{
		bVar10 = ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3);
		if (bVar10)
		{
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
			{
				iVar11 = PLAYER::_0x7C803BDC8343228D(uParam0->f_21);
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar11))
				{
					iVar11 = uParam0->f_20;
				}
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar11) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar11))
				{
					iVar12 = iVar0;
					iVar13 = iVar11;
					if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar12 /*19*/].f_13), iVar13))
					{
						DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP - clearing release bit for player who no longer needs it - ", PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar13)));
						SCRIPTS::_0xD426E2E3288469D6(&(Global_1270185[iVar12 /*19*/].f_13), iVar13);
					}
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - invalid owner - register for removal.");
					if (!func_16(uParam0->f_3, uParam0->f_4, 0))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - f***!");
					}
				}
			}
		}
	}
	if (func_7(uParam0, 7))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT__CLEANUP - Active Mount flag is set.");
		if (PLAYER::_GET_MOUNT_OF_PLAYER(iVar0) == uParam0->f_18)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Unreferencing the player's active horse.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
			func_17();
			func_18(uParam0->f_18, &(uParam1->f_7));
			func_19();
			if (!func_7(uParam0, 11))
			{
				if (!func_7(uParam0, 17))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
					{
						func_20(uParam0->f_18);
					}
				}
			}
			func_21(1);
			func_21(65536);
			func_21(32768);
			func_21(131072);
			func_22(0, 1);
			func_23(0, 1);
		}
		if (uParam1->f_11 == Global_1270813.f_581.f_46)
		{
			if (PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar0) == uParam0->f_21)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Unreferencing the player's active vehicle.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
				if (!func_24(94))
				{
					PLAYER::_SET_PLAYER_OWNS_VEHICLE(iVar0, 0);
				}
				func_25(1);
			}
		}
	}
	if (func_24(94) && PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar0) == uParam0->f_21)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Active vehicle has been suspended, exiting cleanup early!");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		if (bVar5)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Terminating the thread. (A)");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (func_7(uParam0, 6))
	{
		iVar14 = 0;
		while (iVar14 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22[iVar14]))
			{
				DEBUG::_0xA308F935BDECCEC0(136, 40, "NET_STABLE_MOUNT__CLEANUP - Draft animal at index ", iVar14, " does not exist!");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
			}
			else
			{
				ENTITY::IS_ENTITY_DEAD(uParam0->f_22[iVar14]);
				DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__CLEANUP - Draft animal debug name: ", UNK_0xE02C950E4C991632(uParam0->f_22[iVar14]), " - at index ", iVar14);
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22[iVar14]))
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
				}
				else
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_22[iVar14]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_22[iVar14], true, true);
					}
					if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_22[iVar14]))
					{
						DEBUG::_0x9A6C65DDDBEC9C52(136, 40, "NET_STABLE_MOUNT__CLEANUP - Draft animal at index ", iVar14, " is not owned by this script!");
					}
					else if (func_7(uParam0, 11))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Deleting draft animal at index ", iVar14);
						PED::DELETE_PED(&(uParam0->f_22[iVar14]));
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Releasing draft animal at index ", iVar14);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_22[iVar14]));
					}
				}
			}
			iVar14++;
		}
	}
	if (!bVar5)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - We do not have control of entity, exiting cleanup!");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		func_26(uParam0, func_7(uParam0, 11));
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Setting entity as mission entity.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
	}
	if (!bVar5)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT__CLEANUP - This thread does not own this entity. Something may have gone wrong here...");
		DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Terminating the thread. (B)");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Local player is responsible for cleaning up mount.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
	if (func_7(uParam0, 5))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - NSMF__IS_HORSE is set.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
		if (func_7(uParam0, 2))
		{
			Global_1904139.f_111 = 0;
			Global_1904139.f_112 = 0;
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		}
		func_26(uParam0, func_7(uParam0, 11));
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, true);
		if (func_7(uParam0, 11) || func_7(uParam0, 17))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - HAS_BEEN_DELETED or ACTIVE_HORSE_SET_DELETE_ON_CLEANUP");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
			iVar15 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, 0);
			iVar16 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar15))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Passenger exists, destroy horse.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
				if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar16))
			{
				if (iVar16 == PLAYER::GET_PLAYER_PED(iVar0))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - We are the rider, fade and destroy horse.");
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
					PED::_REMOVE_PED_FROM_MOUNT(iVar16, true, false);
					if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - FADE_AND_DESTROY_PED. (A)");
						if (bVar4)
						{
							PED::DELETE_PED(&(uParam0->f_18));
						}
						else
						{
							PED::_0x7043D0681285BA2D(&(uParam0->f_18));
						}
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - FADE_AND_DESTROY_PED. (A) - Ped is already queued for deletion...");
					}
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - We are not the rider, destroy horse.");
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
					if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - DELETE_PED.");
						PED::DELETE_PED(&(uParam0->f_18));
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - DELETE_PED. - Ped is already queued for deletion...");
					}
				}
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - There is no rider, fade and destory the horse");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
				if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - FADE_AND_DESTROY_PED. (B)");
					if (bVar4)
					{
						PED::DELETE_PED(&(uParam0->f_18));
					}
					else
					{
						PED::_0x7043D0681285BA2D(&(uParam0->f_18));
					}
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - FADE_AND_DESTROY_PED. (B) - Ped is already queued for deletion...");
				}
			}
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Releasing horse.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
			PED::SET_PED_RESET_FLAG(uParam0->f_18, 105, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
			if (!bVar2 && !bVar3)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Tasking horse to flee.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
				iVar17 = PLAYER::GET_PLAYER_PED(PLAYER::_0xAD03B03737CE6810(uParam0->f_18));
				if ((!ENTITY::DOES_ENTITY_EXIST(iVar17) || ENTITY::IS_ENTITY_DEAD(iVar17)) || func_27(ENTITY::GET_ENTITY_COORDS(iVar17, true, false)))
				{
					iVar17 = uParam0->f_18;
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(iVar17, true, false), 4, 5767424, -1082130432 /* Float: -1f */, -1, 0);
				AITRANSPORT::_0xDD0660C997DE94FD(uParam0->f_3, 0);
			}
			if (bVar3)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Killing the writhing horse.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_18, 0, 0);
			}
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Setting ped as longer needed.");
			PED::_0x39A2FC5AF55A52B1(uParam0->f_18, -1);
			PED::_0x36E4B61DC56DE77C(uParam0->f_18, 20f, 150f, 30000, 5000);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
		}
	}
	else
	{
		VEHICLE::_0xC399CC89FBA05DA0(uParam0->f_21, 1);
		if (func_7(uParam0, 11))
		{
			DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_MOUNT__CLEANUP - ", &(uParam0->f_35), ", Deleting vehicle due to FLAG ", func_28(11, 0));
			VEHICLE::_0x35DC1877312FBA0F(&(uParam0->f_21));
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Releasing vehicle.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_21));
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP - Terminating the thread. (C)");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP - tlDebugName = ", &(uParam0->f_35));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_6(int iParam0, int iParam1)
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

bool func_7(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_1, iParam1);
}

void func_8(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_MOUNT_SET_FLAG - eFlag = ", func_28(iParam1, 0));
	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_MOUNT_SET_FLAG - tlDebugName = ", &(uParam0->f_35), ", setting flag ", func_28(iParam1, 0));
	MISC::SET_BIT(&(uParam0->f_1), iParam1);
}

void func_9(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (!STREAMING::IS_MODEL_VALID(bVar0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - ", &(uParam0->f_35), ", model is invalid, can't determine mount type, killing thread...");
		func_8(uParam0, 0);
		return;
	}
	if (func_29(&(uParam0->f_29)))
	{
		func_30(&(uParam0->f_29));
	}
	iVar1 = func_31(bVar0);
	if (iVar1 == -1)
	{
		DEBUG::_0x83407B92D46F25C3(168, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - ", &(uParam0->f_35), ", Mount type is invalid! Bad! Trying to compensate...");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - eMountModel = ", func_32(bVar0, 0));
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
		if (STREAMING::IS_MODEL_A_PED(bVar0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Mount type is a horse, we think.");
			iVar1 = 0;
		}
		else if (STREAMING::IS_MODEL_A_VEHICLE(bVar0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Mount type is a vehicle, we think.");
			iVar1 = 2;
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(168, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - No monitor function defined for mount of type ", func_33(uParam0->f_4, 0), " killing thread...");
			func_8(uParam0, 0);
		}
	}
	iVar2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_4 = iVar1;
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Owner Handle = ", UNK_0x339652ED1C0D6727(bParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
	iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	uParam0->f_20 = iVar3;
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - sItemGUID = ", UNK_0xD2E4270E5D98EEE4(&(bParam1->f_7)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(bParam1->f_7)))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Setting up mount as temporary.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 1);
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	if ((!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar3)) || iVar3 != PLAYER::PLAYER_ID())
	{
		switch (uParam0->f_4)
		{
			case 0:
			case 1:
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Horse found.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
				func_8(uParam0, 5);
				if (MISC::COMPARE_STRINGS(&(bParam1->f_12), func_34(), false, -1) == 0)
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_36(func_35(bVar0))));
				}
				else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(bParam1->f_12)) > 0 && NETWORK::_0xF23A6D6C11D8EC15(bParam1))
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(bParam1->f_12));
				}
				else if (bVar0 == func_37())
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_36(func_38())));
				}
				func_8(uParam0, 21);
				break;
			case 2:
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Draft Vehicle found.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
				func_8(uParam0, 6);
				func_39(uParam0, iVar2, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1));
				break;
			case 3:
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Boat found.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
				func_8(uParam0, 6);
				func_8(uParam0, 21);
				break;
			default:
				func_8(uParam0, 21);
				DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Mount is of unknown type! This is probably bad!");
				DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
				break;
		}
		func_40(uParam0, 4);
		DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Mount of type ", func_33(uParam0->f_4, 0), " does not belong to local player.  Moving to external monitor state.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	if (func_7(uParam0, 1))
	{
		if (iVar1 == 0 || iVar1 == 1)
		{
			iVar4 = func_35(bVar0);
			StringCopy(&(Global_1270813.f_11.f_515), MISC::_CREATE_VAR_STRING(2, func_36(iVar4)), 64);
		}
	}
	else
	{
		if (!func_41(&(bParam1->f_7), &uVar5))
		{
			if (func_42(&(bParam1->f_7)))
			{
				func_43(0, 1);
			}
			else
			{
				DEBUG::_0x83407B92D46F25C3(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Attempting to repair invalid horse guid failed.");
			}
		}
		if (iVar1 == 0 || iVar1 == 1)
		{
			if (!func_44(&(bParam1->f_7), uParam0->f_4, 1))
			{
				DEBUG::_0xD9911C7B5F8CD69C(680, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - ", &(uParam0->f_35), ", net stable mount thread started on invalid item!  GUID: ", UNK_0xD2E4270E5D98EEE4(&(bParam1->f_7)));
				func_8(uParam0, 0);
				return;
			}
		}
		bParam1->f_7 = { Global_1904139 };
		uParam0->f_4 = Global_1904139.f_10;
		Global_1270813.f_11.f_515 = { func_45(&Global_1904139, 1) };
	}
	if (uParam0->f_4 == -1)
	{
		DEBUG::_0x83407B92D46F25C3(168, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - ", &(uParam0->f_35), ", net stable mount thread started on undefined mount type!");
		func_8(uParam0, 0);
		return;
	}
	func_8(uParam0, 2);
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__UPDATE__ABILITIES - disabling horse gather ability.");
		ENTITY::IS_ENTITY_DEAD(iVar2);
		PED::SET_PED_CONFIG_FLAG(iVar2, 561, false);
		func_46(uParam0, 23);
	}
	uParam0->f_17 = func_47(uParam0->f_4);
	if (func_7(uParam0, 1))
	{
		uParam0->f_17 = -1230993421;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Mount monitor thread starting. eInstanceID = ", bParam1->f_11);
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - GUID = ", UNK_0xD2E4270E5D98EEE4(&(bParam1->f_7)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Horse found.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 21);
			if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 1661175588) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, 1661175588))
			{
				if (func_7(uParam0, 1))
				{
					iVar7 = 1;
				}
				else
				{
					func_48(uParam0->f_18, Global_1904139.f_23);
					iVar7 = func_49(uParam0->f_18);
				}
				PED::_0xA69899995997A63B(uParam0->f_18, iVar7);
				DEBUG::_0xA308F935BDECCEC0(136, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - iBondingLevel = ", iVar7, ", iBondingXP = ", Global_1904139.f_23);
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
			}
			uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			iVar6 = NETWORK::PED_TO_NET(uParam0->f_18);
			func_50(uParam0->f_3, 0);
			func_8(uParam0, 5);
			func_40(uParam0, 1);
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1270813.f_11.f_515)) > 0)
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, &(Global_1270813.f_11.f_515), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1270813.f_11.f_515));
			}
			else if (bVar0 == func_37())
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_36(func_38())), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_36(func_38())));
			}
			else
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, "HORSE", true, false, "", 0);
			}
			if (func_7(uParam0, 1))
			{
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_5, -847116890);
			}
			else
			{
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_5, joaat("PLAYER_HORSE"));
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Setting override title for ILO prompt to: ", &(Global_1270813.f_11.f_515));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
			}
			HUD::_SET_MP_GAMER_TAG_COLOUR(uParam0->f_5, joaat("COLOR_FRIENDLY"));
			HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_5, uParam0->f_6);
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Displaying current access permissions.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
			if (func_44(&(bParam1->f_7), uParam0->f_4, 0))
			{
				if (!func_51(&Global_1904139, &(uParam0->f_34)))
				{
					DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - PLAYER_STABLE_GET_MOUNT_PHYSIQUE_FROM_SLOT_DATA failed...");
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - mount weight = ", func_52(uParam0->f_34, 0));
				}
			}
			else
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL failed...");
			}
			func_53();
			break;
		case 2:
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Vehicle found.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
			func_39(uParam0, iVar2, PLAYER::PLAYER_ID());
			func_8(uParam0, 6);
			func_40(uParam0, 2);
			iVar6 = NETWORK::_0xF260AF6F43953316(uParam0->f_3);
			break;
		case 3:
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Canoe found.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 21);
			func_8(uParam0, 6);
			func_40(uParam0, 3);
			iVar6 = NETWORK::_0xF260AF6F43953316(uParam0->f_3);
			break;
		default:
			DEBUG::_0x83407B92D46F25C3(2728, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - ", &(uParam0->f_35), ", no monitor function defined for mount of type ", func_33(uParam0->f_4, 0), " killing thread...");
			func_8(uParam0, 0);
			break;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar6))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Invalid network ID for the mount.");
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Network is not in control of this entity.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__INIT - Setting mount to always exist for us.");
	NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iVar6, PLAYER::PLAYER_ID(), true);
}

void func_10(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	char* sVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - The local playerIndex is invalid.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - tlDebugName = ", &(uParam0->f_35));
		func_54(uParam0);
		return;
	}
	func_55(uParam0);
	if (!PLAYER::IS_PLAYER_DEAD(iVar0) && func_56(PLAYER::GET_PLAYER_PED(iVar0), uParam0->f_18, 5f, 1, 1))
	{
		func_57();
		if (!func_58(966, 1073741824 /* Float: 2f */) && !func_59(966))
		{
			func_60(966, 0);
			func_61(966, 1073741824 /* Float: 2f */);
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - triggering TF_MP_INTRO_HORSE_VOUCHER.");
		}
	}
	if (PLAYER::_GET_MOUNT_OF_PLAYER(iVar0) == uParam0->f_18)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - This is the active horse.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 7);
		if (!func_7(uParam0, 22))
		{
			func_62();
			if (!func_63())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NSMMS__HORSE__SETUP_MOUNT__APPLY_MOUNT_EQUIPMENT - models aren't loaded yet...");
			}
			else
			{
				func_64(&(Global_1904139.f_113));
				Global_1904139.f_111 = 1;
				Global_1904139.f_112 = 0;
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - Calling TELEMETRY_PERSONAL_VEHICLE_MOUNT - Calling horse.");
				Var2 = { func_65(0, 1, 0, -1) };
				TELEMETRY::_0xFF9052BC7A3B7D33(uParam0->f_18, joaat("CALL"), &Var2, 0);
				func_8(uParam0, 22);
			}
		}
		if (func_24(44))
		{
			func_46(uParam0, 4);
		}
		else
		{
			func_8(uParam0, 4);
		}
		if (func_66(2, 255))
		{
			func_8(uParam0, 8);
		}
		else
		{
			func_46(uParam0, 8);
		}
		Global_1270185[iVar1 /*19*/].f_1 |= 1;
		if (func_7(uParam0, 20))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - Name Change requested.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - tlDebugName = ", &(uParam0->f_35));
			func_44(&(bParam1->f_7), 0, 0);
			sVar6 = func_67(func_45(&Global_1904139, 1));
			if (MISC::COMPARE_STRINGS(sVar6, &(Global_1270813.f_11.f_515), true, -1) > 0)
			{
				HUD::SET_MP_GAMER_TAG_NAME(uParam0->f_5, &(Global_1904139.f_12));
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - Setting MP Game Tag Name to: ", &(Global_1904139.f_12));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - tlDebugName = ", &(uParam0->f_35));
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1904139.f_12));
				Global_1270813.f_11.f_515 = { Global_1904139.f_12 };
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - Setting override title for ILO prompt to: ", &(Global_1904139.f_12));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - tlDebugName = ", &(uParam0->f_35));
				func_46(uParam0, 20);
			}
		}
		if (func_66(4096, 255))
		{
			func_21(4096);
			func_8(uParam0, 20);
		}
		func_68(uParam0);
		func_69(uParam0);
		func_70(uParam0, bParam1);
		func_71(uParam0, uParam0->f_18, 8192, 16384, func_24(91));
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - This is not the active horse.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_HORSE - tlDebugName = ", &(uParam0->f_35));
		func_46(uParam0, 7);
		func_46(uParam0, 8);
		if (func_7(uParam0, 3))
		{
			func_8(uParam0, 4);
		}
		else
		{
			func_46(uParam0, 4);
		}
	}
	func_72(uParam0, bParam1);
	func_73(uParam0, bParam1);
	func_74(uParam0);
	func_75(uParam0);
	func_76(uParam0);
	func_77(uParam0);
	func_78(uParam0, iVar1);
	func_79(uParam0, iVar1);
	func_80(uParam0, iVar1);
	func_81(uParam0, bParam1, iVar1);
	func_82(uParam0, bParam1, iVar1);
	func_83(uParam0);
	func_84(uParam0);
}

void func_11(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam1->f_11 == Global_1270813.f_581.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_21);
		if (func_24(94))
		{
			BRAIN::_0xA6AC35DB4A7957A8(9999);
		}
		else
		{
			BRAIN::_0xA6AC35DB4A7957A8(250);
		}
		func_8(uParam0, 7);
		if (func_24(90))
		{
			func_46(uParam0, 4);
		}
		else
		{
			func_8(uParam0, 4);
		}
		if (func_85(8, 255))
		{
			func_8(uParam0, 8);
		}
		else
		{
			func_46(uParam0, 8);
		}
		Global_1270185[iVar1 /*19*/].f_2 |= 1;
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_21))
		{
			VEHICLE::_0x226C6A4E3346D288(uParam0->f_21, func_24(96));
			VEHICLE::_0x6090A031C69F384E(uParam0->f_21, func_24(96));
		}
		func_71(uParam0, uParam0->f_21, 32768, 65536, func_24(91));
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - Monitoring vehicle as the active vehicle.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - tlDebugName = ", &(uParam0->f_35));
	}
	else
	{
		func_46(uParam0, 7);
		func_46(uParam0, 8);
		if (func_7(uParam0, 3))
		{
			func_8(uParam0, 4);
		}
		else
		{
			func_46(uParam0, 4);
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - Monitoring vehicle as an inactive vehicle.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - tlDebugName = ", &(uParam0->f_35));
	}
	func_86(uParam0);
	func_39(uParam0, iVar0, PLAYER::PLAYER_ID());
	func_77(uParam0);
	func_81(uParam0, bParam1, iVar1);
	func_82(uParam0, bParam1, iVar1);
	func_87(uParam0);
}

void func_12(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam1->f_11 == Global_1270813.f_581.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_21);
		func_8(uParam0, 7);
		if (func_24(90))
		{
			func_46(uParam0, 4);
		}
		else
		{
			func_8(uParam0, 4);
		}
		if (func_85(8, 255))
		{
			func_8(uParam0, 8);
		}
		else
		{
			func_46(uParam0, 8);
		}
		Global_1270185[iVar0 /*19*/].f_2 |= 1;
		func_71(uParam0, uParam0->f_21, 32768, 65536, func_24(91));
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - Monitoring vehicle as the active vehicle.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - tlDebugName = ", &(uParam0->f_35));
	}
	else
	{
		func_46(uParam0, 7);
		func_46(uParam0, 8);
		if (func_7(uParam0, 3))
		{
			func_8(uParam0, 4);
		}
		else
		{
			func_46(uParam0, 4);
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - Monitoring vehicle as an inactive vehicle.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_DRAFT_VEHICLE - tlDebugName = ", &(uParam0->f_35));
	}
	func_77(uParam0);
	func_81(uParam0, bParam1, iVar0);
	func_82(uParam0, bParam1, iVar0);
	func_88(uParam0);
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
	if (func_7(uParam0, 11))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Deleting horse due to a requested deletion.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 0);
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	iVar1 = iVar0;
	if (iVar0 != uParam0->f_20)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL: detected change in owner's player index");
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Owning player is no longer in the session.  Releasing.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 10);
		func_8(uParam0, 0);
		return;
	}
	switch (func_89(uParam0, 1))
	{
		case 1:
			return;
		case 2:
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Releasing horse due to a requested release.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 0);
			return;
		default:
			break;
	}
	if (!Global_1072032.f_5)
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Waiting for gameplay update loop to become active.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Owning player's PLAYER_INDEX is invalid! Releasing.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 10);
		func_8(uParam0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Owning player is not connected!  Releasing.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 10);
		func_8(uParam0, 0);
		return;
	}
	if (uParam0->f_4 == 2)
	{
		func_39(uParam0, PLAYER::PLAYER_PED_ID(), iVar0);
	}
	func_78(uParam0, iVar1);
	if (uParam0->f_2 != 0)
	{
		return;
	}
	func_79(uParam0, iVar1);
	func_81(uParam0, bParam1, iVar1);
	func_82(uParam0, bParam1, iVar1);
	func_83(uParam0);
	if (!func_7(uParam0, 18))
	{
		if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(iVar0))
		{
			if (!func_29(&(uParam0->f_10)))
			{
				func_90(&(uParam0->f_10));
			}
			fVar2 = func_91(&(uParam0->f_10));
			if (fVar2 > 5f)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Instance ID initialization timed out, this is not great.");
				DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
				func_8(uParam0, 18);
			}
		}
		else if (func_29(&(uParam0->f_10)))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Owner's horse is back! tlDebugName = ", &(uParam0->f_35));
			func_30(&(uParam0->f_10));
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Monitoring mount externally. Instance: ", bParam1->f_11, ", Owner: ", func_92(iVar1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
			{
				uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (uParam0->f_18 == PLAYER::_GET_MOUNT_OF_PLAYER(iVar0))
			{
				func_75(uParam0);
				func_72(uParam0, bParam1);
				func_74(uParam0);
			}
			else if (func_7(uParam0, 18))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Force killing the thread as the owning player has released their horse.");
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - iOwnerIndex = ", iVar1);
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
				func_8(uParam0, 0);
				func_8(uParam0, 10);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
			{
				uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (func_85(1, iVar1) && Global_1270185[iVar1 /*19*/].f_6 == bParam1->f_11)
			{
			}
			else if (func_7(uParam0, 18))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Force killing the thread as the owning player has released their vehicle.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
				func_8(uParam0, 0);
				func_8(uParam0, 10);
			}
			func_86(uParam0);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
			{
				uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (func_85(1, iVar1) && Global_1270185[iVar1 /*19*/].f_6 == bParam1->f_11)
			{
			}
			else if (func_7(uParam0, 18))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - Force killing the thread as the owning player has released their vehicle.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - tlDebugName = ", &(uParam0->f_35));
				func_8(uParam0, 0);
				func_8(uParam0, 10);
			}
			break;
		default:
			DEBUG::_0x83407B92D46F25C3(680, 40, "NET_STABLE_MOUNT_UPDATE_STATE__MONITOR_EXTERNAL - ", &(uParam0->f_35), ", no monitor function defined for mount type ", func_33(uParam0->f_4, 0));
			func_8(uParam0, 0);
			break;
	}
}

void func_14(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -507840394:
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_EVENTS - Script Event caught.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_EVENTS - tlDebugName = ", &(uParam0->f_35));
				func_93(uParam0, bParam1, iVar0);
				break;
		}
		iVar0++;
	}
}

bool func_15(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_16(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_QUEUE_MOUNT_ENTITY_FOR_REMOVAL");
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_QUEUE_MOUNT_ENTITY_FOR_REMOVAL - entReference doesn't exist.");
		return false;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 40, "NET_STABLE_QUEUE_MOUNT_ENTITY_FOR_REMOVAL: found an entity for mount type ", func_33(iParam1, 0), " but the network index is invalid.");
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_1270813.f_11.f_320, iVar1))
		{
			DEBUG::_0x4DC69742196F818A(648, 40, "NET_STABLE_QUEUE_MOUNT_ENTITY_FOR_REMOVAL: found release slot - ", iVar1, " for mount type ", func_33(iParam1, 0));
			Global_1270813.f_11.f_322[iVar1 /*6*/].f_1 = iParam0;
			Global_1270813.f_11.f_322[iVar1 /*6*/].f_2 = iParam1;
			Global_1270813.f_11.f_322[iVar1 /*6*/] = bParam2;
			func_90(&(Global_1270813.f_11.f_322[iVar1 /*6*/].f_3));
			MISC::SET_BIT(&(Global_1270813.f_11.f_320), iVar1);
			return true;
		}
		iVar1++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_QUEUE_MOUNT_ENTITY_FOR_REMOVAL: failed to find valid release slot.");
	return false;
}

void func_17()
{
	if (Global_1270813.f_1403.f_5 == 1)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 26, "NET_STABLE_RPG__SET_FORCE_PUSH_QUEUE - Force flush set!");
	Global_1270813.f_1403.f_5 = 1;
}

void func_18(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD");
	if (func_95(func_94(), 0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Not in freemode? Doesn't matter then! Exiting...");
		return;
	}
	if (!func_96(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Not a horse!");
		return;
	}
	bVar0 = TASK::IS_PED_IN_WRITHE(iParam0);
	DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - bWrithing = ", MISC::_0xF216F74101968DB0(bVar0));
	bVar1 = PED::_0xB655DB7582AEC805(iParam0);
	DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - bIncapacitated = ", MISC::_0xF216F74101968DB0(bVar1));
	if (!bVar0 && !bVar1)
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Horse isn't writhing AND isn't incapacitated!");
		return;
	}
	iVar2 = PLAYER::_0xAD03B03737CE6810(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Horse is not a player owned mount, exiting!");
		return;
	}
	if (iVar2 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_24(8))
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Ignoring kill event because mount permadeath is disabled");
		return;
	}
	func_97(iParam0, 0, 0);
	if (!func_44(iParam1, 0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Could not load slot data for this horse!");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Setting mount dead!");
	func_98(&Global_1904139, 0, 1);
	func_99();
	iVar3 = func_100(iParam1, joaat("SLOTID_HORSE_INSURANCE"), 0);
	bVar4 = iVar3 > 0;
	if (bVar4)
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Insured! Setting mount recovering!");
		func_101(18, 0);
		func_102(*iParam1, 0, 0);
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__MARK_ABANDONED_WRITHING_HORSE_DEAD - Not Insured! Setting mount dead!");
		func_101(17, 0);
	}
}

void func_19()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_CLEAR_ACTIVE_HORSE");
	iVar0 = PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iVar0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_CLEAR_ACTIVE_HORSE - No mount owned by the player found.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_CLEAR_ACTIVE_HORSE - Setting the active horse to NULL.");
	PLAYER::_0xE6D4E435B56D5BD0(iVar0, 0);
}

void func_20(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_SET_UP_EMERGENCY_BACKUP_REMOVAL");
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_SET_UP_EMERGENCY_BACKUP_REMOVAL - Tried to set backup on an invalid ped. Exiting!");
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1270813.f_11.f_157))
	{
		Global_1270813.f_11.f_158 = Global_1270813.f_11.f_157;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_SET_UP_EMERGENCY_BACKUP_REMOVAL - Setting up emergency backup removal for ped ", UNK_0xE02C950E4C991632(iParam0));
	Global_1270813.f_11.f_157 = iParam0;
	Global_1270813.f_11.f_159 = Global_1275959.f_21 + 35;
}

void func_21(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1270185[iVar0 /*19*/].f_1 = (Global_1270185[iVar0 /*19*/].f_1 - (Global_1270185[iVar0 /*19*/].f_1 && iParam0));
}

void func_22(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (func_103(Global_1270185[iVar1 /*19*/].f_4, 1) != bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "[NET_STABLE_SET_MOUNT_RESERVATION] Setting reserve request to ", MISC::_0xF216F74101968DB0(bParam0));
		if (bParam0)
		{
			func_104(&(Global_1270185[iVar1 /*19*/].f_4), 1);
		}
		else
		{
			func_105(&(Global_1270185[iVar1 /*19*/].f_4), 1);
		}
		func_105(&(Global_1270185[iVar1 /*19*/].f_4), 2);
		if (bParam0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "[NET_STABLE_SET_MOUNT_RESERVATION] Restarting timer");
			func_90(&(Global_1270813.f_11.f_556));
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "[NET_STABLE_SET_MOUNT_RESERVATION] Cancelling timer");
			func_30(&(Global_1270813.f_11.f_556));
		}
	}
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (!func_103(Global_1270185[iVar1 /*19*/].f_4, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "[NET_STABLE_SET_MOUNT_RESERVATION_CLAIMED] owner is not reserving the horse...");
		return;
	}
	if (func_103(Global_1270185[iVar1 /*19*/].f_4, 2) != bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "[NET_STABLE_SET_MOUNT_RESERVATION_CLAIMED] Setting reserve claimed to ", MISC::_0xF216F74101968DB0(bParam0));
		if (bParam0)
		{
			func_104(&(Global_1270185[iVar1 /*19*/].f_4), 2);
		}
		else
		{
			func_105(&(Global_1270185[iVar1 /*19*/].f_4), 2);
		}
	}
}

bool func_24(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1904139.f_496[iVar0], iVar1);
}

void func_25(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1270185[iVar0 /*19*/].f_2 = (Global_1270185[iVar0 /*19*/].f_2 - (Global_1270185[iVar0 /*19*/].f_2 && iParam0));
}

void func_26(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12;

	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: ", &(uParam0->f_35));
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar3 = func_106(iVar2);
		if (PED::_0x608BC6A6AACD5036(&Var4, uParam0->f_18, iVar3, 0))
		{
			if (func_7(uParam0, 2))
			{
				if (func_107(Var4.f_3, iVar3))
				{
					DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: detected interactions for entity in slot ", func_108(iVar2, 0));
					func_109(iVar2);
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: setting slot as processed ", func_108(iVar2, 0));
					MISC::SET_BIT(&iVar1, iVar2);
				}
			}
			func_110(Var4.f_3, iVar2, bParam1);
		}
		else if (func_7(uParam0, 2))
		{
			if (func_111(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1270813.f_938.f_245[iVar2 /*4*/].f_3))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: failsafe deleting entity");
					func_110(Global_1270813.f_938.f_245[iVar2 /*4*/].f_3, iVar2, bParam1);
				}
				func_109(iVar2);
			}
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: setting slot as processed ", func_108(iVar2, 0));
			MISC::SET_BIT(&iVar1, iVar2);
		}
		iVar2++;
	}
	if (func_7(uParam0, 2))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
			{
			}
			else
			{
				iVar9 = PLAYER::GET_PLAYER_PED(iVar8);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
				{
				}
				else
				{
					iVar11 = PED::_0x4642182A298187D0(iVar9, 7, &Var12, 4, 1);
					if (iVar11 != 0)
					{
						if (!ENTITY::IS_ENTITY_A_PED(Var12.f_1))
						{
						}
						else if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var12.f_1) != uParam0->f_18)
						{
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: detected player (", PLAYER::GET_PLAYER_NAME(iVar8), ") placing something onto our horse...");
							if (!PED::_0xB36B0C7152B15278(iVar9, &iVar10))
							{
								DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: ignoring interaction for player (", PLAYER::GET_PLAYER_NAME(iVar8), ") because GET_ATTACH_SLOT_FOR_INTERACTION failed...");
							}
							else
							{
								iVar2 = func_112(iVar10);
								if (MISC::IS_BIT_SET(iVar1, iVar2))
								{
									DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: detected player interacting in a slot that has already been processed (", PLAYER::GET_PLAYER_NAME(iVar8), ") - ", func_108(iVar2, 0));
								}
								else
								{
									DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: detected player interacting in a slot that has not been processed (", PLAYER::GET_PLAYER_NAME(iVar8), ") - ", func_108(iVar2, 0));
									func_109(iVar2);
									DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__CLEANUP_CARRIABLES: setting slot as processed ", func_108(iVar2, 0));
									MISC::SET_BIT(&iVar1, iVar2);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_27(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

char* func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSMF__INVALID";
		case 0:
			return "NSMF__FORCE_KILL_THREAD";
		case 1:
			return "NSMF__MOUNT_IS_TEMPORARY";
		case 2:
			return "NSMF__LOCAL_PLAYER_IS_OWNER";
		case 3:
			return "NSMF__ALWAYS_BLIPPED";
		case 4:
			return "NSMF__BLIP_ENABLED";
		case 5:
			return "NSMF__IS_HORSE";
		case 6:
			return "NSMF__IS_VEHICLE";
		case 7:
			return "NSMF__IS_ACTIVE_MOUNT";
		case 8:
			return "NSMF__IS_MISSION_CRITICAL";
		case 9:
			return "NSMF__HAS_RELEASE_TASKED";
		case 10:
			return "NSMF__HAS_BEEN_RELEASED";
		case 11:
			return "NSMF__HAS_BEEN_DELETED";
		case 12:
			return "NSMF__MOUNT_HAS_DIED";
		case 13:
			return "NSMF__DEATH_EVENT_CAUGHT";
		case 14:
			return "NSMF__EQUIPMENT_APPLICATION_NEEDED";
		case 15:
			return "NSMF__ACTIVE_HORSE_SET_INVULNERABLE";
		case 16:
			return "NSMF__ACTIVE_HORSE_KEEP_IN_FAST_INSTANCE";
		case 17:
			return "NSMF__ACTIVE_HORSE_SET_DELETE_ON_CLEANUP";
		case 18:
			return "NSMF__MOUNT_INSTANCE_ID_INITIALIZED";
		case 19:
			return "NSMF__SUMMON_IN_PROGRESS";
		case 20:
			return "NSMF__NAME_CHANGE_REQUESTED";
		case 21:
			return "NSMF__DRAFT_HORSES_SETUP_COMPLETE";
		case 22:
			return "NSMF__INVENTORY_SETUP";
		case 23:
			return "NSMF__ENABLE_UNLOCK_ABILITY_GATHERING";
		case 24:
			return "NSMF__OWNER_DELETE_REQUEST";
		case 25:
			return "NSMF__OWNER_RELEASE_REQUEST";
		case 26:
			return "NSMF__FORCE_EXISTENCE_CHECKED";
		case 27:
			return "NSMF__FORCE_EXISTENCE_APPLIED_TO_ALL_PLAYERS";
		case 28:
			return "NSMF__SATCHEL_TOGGLE";
		case 29:
			return "NSMF__OWNER_PED_UPDATED";
		case 30:
			return "NSMF__RESERVATION_ATTEMPT";
		case 31:
			return "NSMF__AMBIENT_AVOIDANCE_TOGGLE";
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

bool func_29(var uParam0)
{
	return func_113(*uParam0, 1);
}

void func_30(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_31(bool bParam0)
{
	int iVar0;
	int iVar1;

	func_114();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		Global_1904139.f_106.f_1 = 0;
		Global_1904139.f_106.f_2 = -571823039;
		Global_1904139.f_106.f_3 = func_115(iVar1);
		Global_1904139.f_106.f_4 = bParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Global_1904139.f_106.f_1), &(Global_1904139.f_106)))
		{
			DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_MOUNT_DEFS__MOUNT_TYPE_FROM_MODEL - returning mount type ", func_33(iVar1, 0), " for model ", func_32(bParam0, 0));
			return iVar1;
		}
		DEBUG::_0x1B08D1EB9D8C4931(168, 40, "NET_STABLE_MOUNT_DEFS__MOUNT_TYPE_FROM_MODEL - didn't find matching model for type ", func_33(iVar1, 0), " trying again...");
		iVar0++;
	}
	UNK_0x355E72323AEE83CC(40, 6);
	DEBUG::_0x83407B92D46F25C3(40, 40, "NET_STABLE_MOUNT_DEFS__MOUNT_TYPE_FROM_MODEL - undefined model type passed in: ", func_32(bParam0, 0));
	return -1;
}

var func_32(bool bParam0, int iParam1)
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

char* func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSMT_INVALID";
		case 0:
			return "NSMT_HORSE";
		case 1:
			return "NSMT_DONKEY";
		case 2:
			return "NSMT_VEHICLE";
		case 3:
			return "NSMT_CANOE";
		case 4:
			return "NSMT_TRAIN";
		case 5:
			return "NSMT_CANNON";
		case 6:
			return "NSMT_NUM_MOUNT_TYPES";
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

char* func_34()
{
	return "UNNAMED_HORSE";
}

int func_35(bool bParam0)
{
	if (bParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (bParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return joaat("BREED_BRETON_REDROAN");
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return joaat("BREED_BRETON_SORREL");
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return joaat("BREED_BRETON_GRULLODUN");
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return joaat("BREED_BRETON_SEALBROWN");
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return joaat("BREED_BRETON_MEALYDAPPLEBAY");
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return joaat("BREED_BRETON_STEELGREY");
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return joaat("BREED_CRIOLLO_BLUEROANOVERO");
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return joaat("BREED_CRIOLLO_DUN");
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return joaat("BREED_CRIOLLO_SORRELOVERO");
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("BREED_CRIOLLO_BAYFRAMEOVERO");
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return joaat("BREED_CRIOLLO_MARBLESABINO");
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return joaat("BREED_KLADRUBER_BLACK");
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return joaat("BREED_KLADRUBER_WHITE");
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return joaat("BREED_KLADRUBER_CREMELLO");
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return joaat("BREED_KLADRUBER_GREY");
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("BREED_KLADRUBER_DAPPLEROSEGREY");
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return joaat("BREED_KLADRUBER_SILVER");
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("BREED_NORFOLKROADSTER_BLACK");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("BREED_NORFOLKROADSTER_PIEBALDROAN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("BREED_NORFOLKROADSTER_ROSEGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case 1387035765:
			return 1323533737;
		case 506531963:
			return -1159865523;
		case 2038357529:
			return 1854655826;
		case 1599848740:
			return 1416158449;
		case 1887211198:
			return 577120648;
		case 1645353708:
			return 1147338535;
		case 1154747978:
			return -1712303883;
		case 74569170:
			return 406093506;
		case -2004712574:
			return 956799610;
		case 699227695:
			return 139264677;
		case 1514230770:
			return -11223392;
		case 704938950:
			return 1133580901;
		case joaat("A_C_DONKEY_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_BREED_FROM_MODEL - Horse model missing from list! - ", func_32(bParam0, 0));
	return 0;
}

char* func_36(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN";
		case joaat("BREED_APPALOOSA_BLANKET"):
		case joaat("BREED_APPALOOSA_LEOPARD"):
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA";
		case joaat("BREED_ARABIAN_BLACK"):
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
		case joaat("BREED_ARABIAN_GREY"):
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case -1159865523:
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case 1323533737:
		case 1416158449:
		case 1854655826:
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_MORGAN_PALOMINO"):
		case joaat("BREED_MORGAN_BAYROAN"):
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN";
		case -1712303883:
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case 406093506:
		case 577120648:
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case 1147338535:
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
		case joaat("BREED_NOKOTA_WHITEROAN"):
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA";
		case joaat("BREED_SHIRE_LIGHTGREY"):
		case joaat("BREED_SHIRE_RAVENBLACK"):
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
		case -11223392:
		case 139264677:
		case 956799610:
		case 1133580901:
			return "BREED_TURKOMAN";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "BREED_GYPSYCOB";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE_PAINTED"):
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_NOKOTA";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_APPALOOSA";
		case joaat("BREED_WINTER02_01"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_BILL"):
			return "BREED_ARDENNES";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_ARABIAN";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_GENERIC_BREED_LABEL - Breed label missing for breed = ", func_116(iParam0, 0));
			break;
	}
	return "BREED_INVALID";
}

int func_37()
{
	return joaat("A_C_HORSE_MP_MANGY_BACKUP");
}

int func_38()
{
	return joaat("BREED_MANGY_BACKUP");
}

void func_39(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < uParam0->f_27)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22[iVar0]))
		{
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_22[iVar0], PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		iVar0++;
	}
	if (func_7(uParam0, 21))
	{
		return;
	}
	uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	if (!VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_21))
	{
		uParam0->f_32++;
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - IS_DRAFT_VEHICLE return FALSE, something is wrong.");
		DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	VEHICLE::_0xA19447D83294E29F(uParam0->f_21, &iVar4, &iVar3);
	DEBUG::_0xA308F935BDECCEC0(136, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - Num Animals Expected = ", iVar4, " Num Animals Found = ", iVar3);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
	if (iVar4 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35), ", Num Animals Expected = 0, THIS IS very bad.");
		if (iVar3 == 0)
		{
			uParam0->f_32++;
			if (uParam0->f_32 > 90)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(136, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - No horses expected and no draft horses found on vehicle after ", 90, " attempts.  Killing thread. SEND THIS TO CODE, very bad!");
				DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
				func_8(uParam0, 0);
			}
			return;
		}
	}
	if (iVar3 >= iVar4)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - Draft horse numbers are alright.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_21, iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
			}
			else
			{
				if (iVar2 >= 4)
				{
					DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - Cannot store any more draft peds!  Increase k_NET_STABLE_MAX_NUM_DRAFT_HORSES to accomodate vehicles of model ", func_32(ENTITY::GET_ENTITY_MODEL(uParam0->f_3), 0));
					DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
				}
				else
				{
					uParam0->f_22[iVar2] = iVar5;
					DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - Setting horse ", UNK_0xE02C950E4C991632(uParam0->f_22[iVar2]), " as draft ped at index ", iVar2);
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_22[iVar2]) || !ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_22[iVar2]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_22[iVar2], true, true);
					}
					PED::_0x931B241409216C1F(PLAYER::GET_PLAYER_PED(iParam2), uParam0->f_22[iVar2], 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 208, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 209, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 277, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 467, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_22[iVar2], PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
					iVar2++;
					iVar1++;
				}
				Jump @702; //curOff = 612
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - Found fewer draft animals than expected, relooping...");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
				uParam0->f_32++;
				if (uParam0->f_32 > 90)
				{
					DEBUG::_0x9A6C65DDDBEC9C52(136, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - No draft horses found on vehicle after ", 90, " attempts.  Killing thread.");
					DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
					func_8(uParam0, 0);
				}
				return;
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - iNumDraftHorses = ", iVar2);
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SET_UP_DRAFT_HORSES - ", &(uParam0->f_35));
				uParam0->f_27 = iVar2;
				func_8(uParam0, 21);
			}
		}
	}
}

void func_40(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(10920, 40, "NET_STABLE_MOUNT_SET_MOUNT_STATE - ", &(uParam0->f_35), ", previous: ", func_117(*uParam0, 0), " next: ", func_117(iParam1, 0));
	*uParam0 = iParam1;
}

bool func_41(int iParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 26, "__NET_STABLE_RPG__GET_VALID_RPG_SAVEDDATA_INDEX - Invalid GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17414.f_55.f_61.f_41[*uParam1 /*56*/]), iParam0))
		{
		}
		else
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

bool func_42(int iParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA");
	UNK_0x355E72323AEE83CC(26, 6);
	Var0 = { func_118() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(iParam0, &Var0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Invalid input GUID!");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Adding entry for horse.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID at index ", iVar19, " is ", UNK_0xD2E4270E5D98EEE4(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/])));
		if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]), iParam0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Horse bonding info is already in savedata at index ", iVar19);
			DEBUG::_0x1B08D1EB9D8C4931(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
			bVar18 = true;
		}
		else if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]), &Var0))
		{
			func_119(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]));
			DEBUG::_0x1B08D1EB9D8C4931(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Horse found an empty slot at index ", iVar19);
			DEBUG::_0x1B08D1EB9D8C4931(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
			Global_17414.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_120(Global_17414.f_55.f_61.f_41[iVar19 /*56*/], &Var4, 1, 1, -1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - The data held in the bonding data slot at index ", iVar19, " belongs to a horse which the player still owns. Relooping!");
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Found an old slot to replace.");
				DEBUG::_0xA308F935BDECCEC0(40, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - old GUID = ", UNK_0xD2E4270E5D98EEE4(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/])));
				func_119(&(Global_17414.f_55.f_61.f_41[iVar19 /*56*/]));
				Global_17414.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "NET_STABLE_RPG__SET_NEW_BONDING_DATA - Couldn't find a valid spot for the new GUID.");
		return false;
	}
	return true;
}

void func_43(bool bParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_SAVE_METAPED_REQUEST] Pushing a save request for the player metaped!");
	if (bParam1)
	{
		func_121();
	}
	if (bParam0)
	{
		func_122(8);
		func_122(512);
	}
	else
	{
		func_122(8);
		func_122(16);
	}
}

bool func_44(int iParam0, int iParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - eMountType = ", func_33(iParam1, 0), ", bPlayerOnly = ", MISC::_0xF216F74101968DB0(bParam2));
	if (iParam1 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Mount type is invalid.  Exiting...");
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Given GUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Loaded GUID = ", UNK_0xD2E4270E5D98EEE4(&Global_1904139));
	func_123(&Global_1904139);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_124(iParam0, &Global_1904139, &(Global_1904139.f_53), bParam2))
			{
				DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY - Failed. eMountType = ", func_33(iParam1, 0));
				return false;
			}
			break;
		case 2:
			if (!func_125(iParam0, &Global_1904139, &(Global_1904139.f_82), bParam2))
			{
				DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY - Failed. eMountType = ", func_33(iParam1, 0));
				return false;
			}
			break;
	}
	return true;
}

struct<8> func_45(int iParam0, bool bParam1)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	char* sVar17;

	Var0 = { iParam0->f_12 };
	if (bParam1)
	{
		if (func_126(iParam0, &Var8))
		{
			Var0 = { Var8 };
		}
	}
	if (MISC::COMPARE_STRINGS(&Var0, func_34(), false, -1) == 0)
	{
		StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_36(iParam0->f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0) == 0)
	{
		if (iParam0->f_22 != 0)
		{
			StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_127(iParam0->f_22)), 64);
		}
		else
		{
			StringCopy(&Var0, "", 64);
		}
	}
	if (func_128(iParam0->f_4, 0))
	{
		iVar16 = func_129(iParam0->f_4);
		if (STREAMING::IS_MODEL_VALID(iVar16) && STREAMING::IS_MODEL_A_VEHICLE(iVar16))
		{
			sVar17 = MISC::_CREATE_VAR_STRING(0, func_130(iParam0->f_4, 0));
			Var0 = { func_131(sVar17) };
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "PLAYER_STABLE_GET_MOUNT_UI_DISPLAY_NAME_FROM_SLOT_DATA - tlRetVal = ", &Var0);
	return Var0;
}

void func_46(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_MOUNT_CLEAR_FLAG - eFlag = ", func_28(iParam1, 0));
	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_MOUNT_CLEAR_FLAG - tlDebugName = ", &(uParam0->f_35), ", setting flag ", func_28(iParam1, 0));
	MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
}

bool func_47(int iParam0)
{
	var uVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_DEFS__BLIP_STYLE - mount type is invalid!");
		return false;
	}
	func_114();
	Global_1904139.f_106.f_2 = 116835447;
	Global_1904139.f_106.f_3 = func_115(iParam0);
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &(Global_1904139.f_106)))
	{
		DEBUG::_0x83407B92D46F25C3(40, 40, "NET_STABLE_MOUNT_DEFS__BLIP_STYLE - Failed to fillout BLIP STYLE for ", func_33(iParam0, 0));
		return joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	bVar1 = uVar0;
	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_MOUNT_DEFS__BLIP_STYLE - Mount Type: ", func_33(iParam0, 0), " - blip style ", func_132(bVar1, 0));
	return bVar1;
}

void func_48(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_SET_BONDING_XP - Entity doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_SET_BONDING_XP - Ped is dead or injured.");
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

int func_49(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_BONDING_LEVEL - Entity doesn't exist.");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 26, "HORSE_GET_BONDING_LEVEL - Ped is dead or injured.");
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_50(int iParam0, bool bParam1)
{
	func_133(iParam0, bParam1);
}

bool func_51(var uParam0, var uParam1)
{
	if (func_134(uParam0, -2147483648))
	{
		*uParam1 = 4;
	}
	else if (func_134(uParam0, 1073741824 /* Float: 2f */))
	{
		*uParam1 = 3;
	}
	else if (func_134(uParam0, 536870912))
	{
		*uParam1 = 2;
	}
	else if (func_134(uParam0, 268435456))
	{
		*uParam1 = 1;
	}
	else if (func_134(uParam0, 134217728))
	{
		*uParam1 = 0;
	}
	else
	{
		return false;
	}
	return true;
}

char* func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_PHYSIQUE_MALNOURISHED";
		case 1:
			return "HORSE_PHYSIQUE_THIN";
		case 2:
			return "HORSE_PHYSIQUE_FIT";
		case 3:
			return "HORSE_PHYSIQUE_OVERWEIGHT";
		case 4:
			return "HORSE_PHYSIQUE_OBESE";
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

int func_53()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_GET_MOUNT_ACCESS_PERMISSION_FROM_FLAGS");
	iVar0 = 0;
	if (Global_17414.f_55.f_61.f_602 & 2 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17414.f_55.f_61.f_602 & 4 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17414.f_55.f_61.f_602 & 8 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17414.f_55.f_61.f_602 & 16 != 0)
	{
		iVar0 = 1;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_GET_MOUNT_ACCESS_PERMISSION_FROM_FLAG - Access type = ", func_135(iVar0, 0));
	return iVar0;
}

void func_54(var uParam0)
{
	if (!func_7(uParam0, 24) && !func_7(uParam0, 25))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_REQUEST_OWNER_DELETE - owner requesting delete.");
		func_8(uParam0, 0);
		func_8(uParam0, 24);
		func_136();
	}
}

void func_55(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, false);
		}
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (iVar0 == iVar1 && func_7(uParam0, 2))
	{
		if (!func_7(uParam0, 23))
		{
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__UPDATE__ABILITIES - enabling horse gather ability.");
				ENTITY::IS_ENTITY_DEAD(iVar1);
				PED::SET_PED_CONFIG_FLAG(iVar1, 561, true);
				func_8(uParam0, 23);
			}
		}
	}
	else if (func_7(uParam0, 23))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__UPDATE__ABILITIES - disabling horse gather ability.");
		ENTITY::IS_ENTITY_DEAD(iVar1);
		PED::SET_PED_CONFIG_FLAG(iVar1, 561, false);
		func_46(uParam0, 23);
	}
}

bool func_56(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "IS_ENTITY_IN_RANGE_OF_ENTITY: entity 1 does not exist, returning FALSE");
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "IS_ENTITY_IN_RANGE_OF_ENTITY: entity 2 does not exist, returning FALSE");
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_137(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_57()
{
	if (!func_138(3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 32, "[HANDLE_HORSE_VOUCHER_TOAST_CHECKS] Checking if the player has access to HORSE VOUCHER...");
		DEBUG::_0xA308F935BDECCEC0(8, 32, "[HANDLE_HORSE_VOUCHER_TOAST_CHECKS] - Player has access to HORSE VOUCHER.");
		func_139();
		func_140(3);
	}
}

bool func_58(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17414.f_2585[iVar1], iVar2);
}

void func_60(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_141(iParam0, &iVar0, &iVar1);
	if (!func_142(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_143(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_144(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

void func_61(int iParam0, int iParam1)
{
	Global_1904703.f_33[iParam0 /*9*/].f_2 = (Global_1904703.f_33[iParam0 /*9*/].f_2 || iParam1);
}

void func_62()
{
	bool bVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 29, "NET_PLAYER_HORSE_SPAWN_REQUEST_CARRIED_MODELS");
	iVar1 = 0;
	while (iVar1 < 3)
	{
		bVar0 = Global_1904139.f_113[iVar1 /*96*/];
		if (!STREAMING::IS_MODEL_VALID(bVar0))
		{
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(40, 29, "NET_PLAYER_HORSE_SPAWN_REQUEST_CARRIED_MODELS - Requesting model for carried carcass - ", func_32(bVar0, 0));
			STREAMING::REQUEST_MODEL(bVar0, false);
		}
		iVar1++;
	}
}

bool func_63()
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		bVar0 = Global_1904139.f_113[iVar1 /*96*/];
		if (!STREAMING::IS_MODEL_VALID(bVar0))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(bVar0))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 29, "NET_PLAYER_HORSE_SPAWN_HAVE_CARRIED_MODELS_LOADED - Waiting for carried carcass model to load - ", func_32(bVar0, 0));
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_64(var uParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASSES");
	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASSES - mount doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASSES - mount is dead or injured.");
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_145(iVar0, uParam0[iVar1 /*96*/], iVar1);
		iVar1++;
	}
}

struct<4> func_65(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	bool bVar34;
	int iVar35;
	struct<4> Var36;

	Var0.f_9 = -1591664384;
	if (!func_146(&Var0, bParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Unable to find an active horse");
	}
	if (!bParam2)
	{
		Var29 = { func_147() };
		if (func_148() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Using dummy!");
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Dummy does not match equipped active slot after dummy buffer time! Bad!");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Dummy GUID = ", UNK_0xD2E4270E5D98EEE4(&Var29));
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Active GUID = ", UNK_0xD2E4270E5D98EEE4(&Var0));
			func_149(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_150(PLAYER::PLAYER_ID());
	}
	bVar33 = func_151();
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - bInstancedContentActive = ", MISC::_0xF216F74101968DB0(bVar33));
	bVar34 = false;
	if (bVar33)
	{
		bVar34 = func_152(75);
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - bInstancedContentSwitchingEnabled = ", MISC::_0xF216F74101968DB0(bVar34));
	if (bVar34)
	{
		iParam3 = 3;
	}
	iVar35 = func_153(iParam3, 0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Loadout slot = ", func_154(iVar35, 0));
	if (iVar35 != 3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Not freeroam!");
		if (INVENTORY::_0xB881CA836CC4B6D4(&(Global_17414.f_55.f_61[iVar35 /*4*/])))
		{
			Var0 = { Global_17414.f_55.f_61[iVar35 /*4*/] };
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(168, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Loadout ", func_154(iVar35, 0), " entry contains an invalid GUID, ignoring");
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_118();
		}
		if (!func_155(&Var0, 0))
		{
			Var36 = { func_156(bParam0) };
		}
		else
		{
			Var36 = { Var0 };
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Using fallback horse.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - GUID = ", UNK_0xD2E4270E5D98EEE4(&Var36));
		return Var36;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - Returning equipped horse.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_EQUIPPED_HORSE_GUID - GUID = ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

bool func_66(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE__IS_GLOBAL_HORSE_PLAYER_FLAG_SET - invalid player index passed in: ", iParam1);
		return false;
	}
	return (Global_1270185[iParam1 /*19*/].f_1 && iParam0) != 0;
}

char* func_67(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__PED_OWNER");
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__PED_OWNER - pedHorse doesn't exist.");
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__PED_OWNER - network doesn't have control of the entity.");
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__PED_OWNER - piOwner isn't a valid player index.");
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__PED_OWNER - piOwner isn't an active player.");
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__PED_OWNER - pedPlayerOwner doesn't exist.");
		return;
	}
	iVar2 = PED::_0xF103823FFE72BB49(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__PED_OWNER - ped owner is already correct.");
		return;
	}
	PED::_0x931B241409216C1F(iVar1, uParam0->f_18, 0);
}

void func_69(var uParam0)
{
	if (!func_7(uParam0, 5) || !func_7(uParam0, 7))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!func_7(uParam0, 28))
	{
		if (func_157(0))
		{
			if (BUILTIN::VDIST(func_158(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) > 2.7f)
			{
				func_159(512);
				func_8(uParam0, 28);
			}
		}
	}
	else if (!func_157(0))
	{
		if (BUILTIN::VDIST(func_158(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) <= 2.7f)
		{
			func_46(uParam0, 28);
		}
	}
}

void func_70(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
			{
				iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(uParam0->f_18, 13);
				if (iVar0 < 10)
				{
					iVar1 = 0;
				}
				else if (iVar0 < 30)
				{
					iVar1 = 1;
				}
				else if (iVar0 < 70)
				{
					iVar1 = 2;
				}
				else if (iVar0 < 90)
				{
					iVar1 = 3;
				}
				else
				{
					iVar1 = 4;
				}
				if (iVar1 != uParam0->f_34)
				{
					if (func_160(&(uParam1->f_7), uParam0->f_4, iVar1, 0))
					{
						DEBUG::_0x4DC69742196F818A(680, 40, "NET_STABLE_MOUNT__UPDATE_WEIGHT: detected change in weight - old = ", func_52(uParam0->f_34, 0), " new = ", func_52(iVar1, 0));
						uParam0->f_34 = iVar1;
					}
					else
					{
						DEBUG::_0x9A6C65DDDBEC9C52(680, 40, "NET_STABLE_MOUNT__UPDATE_WEIGHT: failed to update change in weight - old = ", func_52(uParam0->f_34, 0), " new = ", func_52(iVar1, 0));
					}
				}
			}
			break;
	}
}

void func_71(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_5))
	{
		return;
	}
	iVar0 = func_161(&(uParam0->f_5), iParam1);
	iVar0 = iVar0;
	bVar1 = func_162(iParam2);
	bVar2 = func_162(iParam3);
	iVar3 = 0;
	if (bParam4)
	{
		iVar3 = 0;
	}
	else if (AITRANSPORT::_0x159EF5B6EDCE00E8(PLAYER::PLAYER_PED_ID(), iParam1))
	{
		iVar3 = 0;
	}
	else if (bVar1 || bVar2)
	{
		bVar4 = func_163(uParam0);
		if (bVar4)
		{
			iVar3 = func_164(iParam1, 0, &(uParam0->f_14), -1, -1, 1277358601, 1, 1);
		}
		else
		{
			iVar3 = uParam0->f_33;
		}
	}
	uParam0->f_33 = iVar3;
	if (uParam0->f_6 != iVar3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_MOUNT_UPDATE__NAMEPLATE_VISIBILITY - previous: ", func_165(uParam0->f_6, 0), " next: ", func_165(iVar3, 0));
		HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_5, iVar3);
		uParam0->f_6 = iVar3;
	}
}

void func_72(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (((PLAYER::IS_PLAYER_DEAD(uParam0->f_20) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_19)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_19)) || func_7(uParam0, 29));
	bVar1 = func_166(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1), 1, 0);
	if (bVar1 || bVar0)
	{
		if (bVar0)
		{
			if (func_7(uParam0, 29))
			{
				func_46(uParam0, 29);
			}
			if (func_7(uParam0, 2))
			{
				if (func_167(uParam0->f_20, 1, 0))
				{
					func_23(0, 1);
				}
				if (func_29(&(Global_1270813.f_11.f_556)))
				{
					func_30(&(Global_1270813.f_11.f_556));
				}
			}
		}
		else
		{
			if (func_7(uParam0, 2))
			{
				if (!func_29(&(Global_1270813.f_11.f_556)))
				{
					DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: timer wasn't started for some reason...");
					func_90(&(Global_1270813.f_11.f_556));
				}
			}
			if (!func_167(uParam0->f_20, 1, 0))
			{
				if (func_168(uParam0))
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: we made it, claiming reservation...");
					if (func_7(uParam0, 2))
					{
						func_23(1, 1);
					}
				}
			}
			else
			{
				func_168(uParam0);
			}
		}
	}
	else
	{
		if (func_7(uParam0, 2))
		{
			if (func_29(&(Global_1270813.f_11.f_556)))
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: timer was started already...");
				func_30(&(Global_1270813.f_11.f_556));
			}
			if (!func_166(PLAYER::PLAYER_ID(), 1, 0))
			{
				func_23(0, 1);
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
		{
			if (ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: clearing carriable flag to disable on the horse...");
				ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, false);
			}
		}
		if (func_7(uParam0, 30))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: cearing reservations on the horse...");
			func_169(uParam0);
			func_46(uParam0, 30);
		}
	}
}

void func_73(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE__AMBIENT_VOLUME_AVOIDANCE: horse doesn't exist...");
		return;
	}
	iVar0 = uParam0->f_20;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE__AMBIENT_VOLUME_AVOIDANCE: invalid owner index...");
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	if (func_103(Global_1270185[iVar0 /*19*/].f_4, 4))
	{
		if (!func_7(uParam0, 31))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__AMBIENT_VOLUME_AVOIDANCE: we are enabling avoidance!");
			POPULATION::_0xF74E134F40192884(uParam0->f_18, 1);
			func_8(uParam0, 31);
		}
	}
	else if (func_7(uParam0, 31))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__AMBIENT_VOLUME_AVOIDANCE: we are disabling avoidance!");
		POPULATION::_0xF74E134F40192884(uParam0->f_18, 0);
		func_46(uParam0, 31);
	}
}

void func_74(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	iVar4 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: using cached player owner index.");
		iVar4 = uParam0->f_20;
	}
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar6 = iVar4;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: invalid owner index.");
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar5 /*19*/].f_14), iVar6))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(168, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: ", PLAYER::GET_PLAYER_NAME(iVar4), "'s horse is dead, clear the interact bit...");
			SCRIPTS::_0xD426E2E3288469D6(&(Global_1270185[iVar5 /*19*/].f_14), iVar6);
		}
	}
	else
	{
		iVar7 = PED::_0x4642182A298187D0(PLAYER::PLAYER_PED_ID(), 5, &uVar0, 4, 2);
		if (iVar7 == 0)
		{
			DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: no actions with picking up carcasses, are we placing anything?");
			iVar7 = PED::_0x4642182A298187D0(PLAYER::PLAYER_PED_ID(), 7, &uVar0, 4, 2);
		}
		if (iVar7 != 0)
		{
			if (func_170(uParam0, &uVar0))
			{
				if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar5 /*19*/].f_14), iVar6))
				{
					DEBUG::_0x4DC69742196F818A(168, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: we are interacting with ", PLAYER::GET_PLAYER_NAME(iVar4), "'s horse.");
					SCRIPTS::_0x31010318BA9897AC(&(Global_1270185[iVar5 /*19*/].f_14), iVar6);
				}
			}
			else
			{
				DEBUG::_0x9A6C65DDDBEC9C52(168, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: we've detected interaction with horse: ", func_171(iVar7, 0), " but we failed to validaate...");
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar5 /*19*/].f_14), iVar6))
				{
					DEBUG::_0x9A6C65DDDBEC9C52(168, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: we are interacting with ", PLAYER::GET_PLAYER_NAME(iVar4), "'s horse but validation has failed...");
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1270185[iVar5 /*19*/].f_14), iVar6);
				}
			}
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar5 /*19*/].f_14), iVar6))
		{
			DEBUG::_0x4DC69742196F818A(168, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: we are no longer interacting with ", PLAYER::GET_PLAYER_NAME(iVar4), "'s horse.");
			SCRIPTS::_0xD426E2E3288469D6(&(Global_1270185[iVar5 /*19*/].f_14), iVar6);
		}
	}
	if (func_7(uParam0, 2))
	{
		bVar9 = false;
		iVar8 = 0;
		while (iVar8 < 32)
		{
			if (!bVar9)
			{
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar8 /*19*/].f_14), iVar5))
				{
					DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: being interacted with by player: ", PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar8)));
					bVar9 = true;
				}
			}
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1270185[iVar5 /*19*/].f_14), iVar8))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(PLAYER::INT_TO_PLAYERINDEX(iVar8)))
				{
					DEBUG::_0x4DC69742196F818A(136, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: we are no longer interacting with horse for invalid player at slot ", iVar8, ".");
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1270185[iVar5 /*19*/].f_14), iVar6);
				}
			}
			iVar8++;
		}
		if (bVar9)
		{
			if (!func_103(Global_1270185[iVar5 /*19*/].f_1, 65536))
			{
				DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: setting our horse as being interacted with.");
				func_104(&(Global_1270185[iVar5 /*19*/].f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 1);
		}
		else
		{
			if (func_103(Global_1270185[iVar5 /*19*/].f_1, 65536))
			{
				DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_MOUNT__UPDATE__INTERACTIONS: our horse is no longer being interacted with.");
				func_105(&(Global_1270185[iVar5 /*19*/].f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 0);
		}
	}
}

void func_75(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (func_172(uParam0))
	{
		if (!uParam0->f_43)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__OUT_OF_RANGE: owner is out of range of mount... enable security!");
			uParam0->f_43 = 1;
		}
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
		{
			return;
		}
		PED::_0x11E6B9629C46D6EC(uParam0->f_18, true);
	}
	else
	{
		if (uParam0->f_43)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__OUT_OF_RANGE: owner is in range of mount... disable security!");
			uParam0->f_43 = 0;
		}
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
		{
			return;
		}
		PED::_0x11E6B9629C46D6EC(uParam0->f_18, false);
	}
}

void func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 40, "NET_STABLE_MOUNT_UPDATE__RELATIONSHIP_GROUP - Setting horse relationship group to ENUM = ", func_173(iVar1, 0), " - INT = ", iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_18, iVar1);
}

void func_77(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_3) || !func_7(uParam0, 4))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_16));
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Removing blip due to blip being disabled.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_16));
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Removing blip due to mount being dead.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_16));
			}
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Removing blip due to player being mounted.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_WHISTLE")))
		{
			uParam0->f_13 = Global_1275959.f_21 + 15;
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, -272772079);
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, -272772079);
		}
		if (Global_1275959.f_21 > uParam0->f_13)
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, -272772079);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, -272772079);
		}
		bVar1 = TASK::IS_PED_IN_WRITHE(uParam0->f_18);
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - bWrithing = ", MISC::_0xF216F74101968DB0(bVar1));
		bVar2 = PED::_0xB655DB7582AEC805(uParam0->f_18);
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - bIncapacitated = ", MISC::_0xF216F74101968DB0(bVar2));
		if (bVar1 || bVar2)
		{
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, 430539302);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 430539302);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Removing ally owned modifier from player horse blip, no rider.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Removing ally owned modifier from player horse blip, ped rider is not a player.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
			return;
		}
		iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Removing ally owned modifier from player horse blip, player is invalid.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
			return;
		}
		if (func_174(iVar3, 0))
		{
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, 453356795);
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Adding ally owned modifier from player horse blip.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Removing ally owned modifier from player horse blip, player not ally.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
		}
		return;
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_3))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Entity is being blipped by another system, or something has gone wrong.");
		DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	uParam0->f_16 = MAP::_BLIP_ADD_FOR_ENTITY(uParam0->f_17, uParam0->f_3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1270813.f_11.f_515)))
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(uParam0->f_16, &(Global_1270813.f_11.f_515));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_16, func_175(uParam0->f_4));
	}
	MAP::_BLIP_SET_MODIFIER(uParam0->f_16, 580546400);
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - Blip created.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_BLIP - tlDebugName = ", &(uParam0->f_35));
}

void func_78(var uParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	bVar0 = !func_66(8192, iParam1);
	if (bVar0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 197, bVar0);
	}
	if (func_66(2048, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 306, true);
	}
	if (func_66(512, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 360, true);
	}
}

void func_79(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		func_46(uParam0, 26);
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	if (func_176(255) == 1)
	{
		bVar0 = ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18);
		bVar1 = func_7(uParam0, 15);
		if (func_66(8, iParam1))
		{
			if (!bVar1 || bVar0)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting local player mount invincible.");
				DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - bInvulnerableFlagSet = ", MISC::_0xF216F74101968DB0(bVar1), " bCanBeDamaged = ", MISC::_0xF216F74101968DB0(bVar0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_18, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18, false);
				func_8(uParam0, 15);
			}
		}
		else if (bVar1 || !bVar0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Clearing local player mount invincible.");
			DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - bInvulnerableFlagSet = ", MISC::_0xF216F74101968DB0(bVar1), " bCanBeDamaged = ", MISC::_0xF216F74101968DB0(bVar0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_18, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18, true);
			func_46(uParam0, 15);
		}
	}
	else
	{
		func_46(uParam0, 15);
	}
	if (func_176(255) == 1)
	{
		if (func_66(16384, iParam1))
		{
			if (!func_7(uParam0, 16))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting local player mount prevent migration.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
				NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 1, 256);
				func_8(uParam0, 16);
			}
			NETWORK::_0x7182EDDA1EE7DB5A(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (func_7(uParam0, 16))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Clearing local player mount prevent migration.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
			NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 0, 256);
			func_46(uParam0, 16);
		}
	}
	else
	{
		func_46(uParam0, 16);
	}
	if (func_66(16, iParam1))
	{
		if (!func_7(uParam0, 17))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting local player mount delete on cleanup.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 17);
		}
	}
	else if (func_7(uParam0, 17))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Clearing local player mount delete on cleanup.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		func_46(uParam0, 17);
	}
	bVar2 = func_66(262144, iParam1);
	if (!func_7(uParam0, 26) || func_7(uParam0, 27) != bVar2)
	{
		iVar3 = NETWORK::PED_TO_NET(uParam0->f_18);
		iVar4 = 0;
		while (iVar4 <= 31)
		{
			iVar5 = iVar4;
			if (iVar5 == uParam0->f_20)
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
			{
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(136, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Set horse with force existence ", bVar2, " for player ", iVar4);
				NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iVar3, iVar5, bVar2);
			}
			iVar4++;
		}
		func_8(uParam0, 26);
		if (bVar2)
		{
			func_8(uParam0, 27);
		}
		else
		{
			func_46(uParam0, 27);
		}
	}
	bVar6 = func_66(64, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 388, true) != bVar6)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting PedConfigFlag PCF_DisableFatallyWoundedBehaviour to ", MISC::_0xF216F74101968DB0(bVar6));
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 388, bVar6);
	}
	bVar7 = !func_66(32, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 319, true) != bVar7)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting PedConfigFlag PCF_EnableAsVehicleTransitionDestination to ", MISC::_0xF216F74101968DB0(bVar7));
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 319, bVar7);
	}
	bVar8 = func_66(256, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 312, true) != bVar8)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting PedConfigFlag PCF_DisableHorseGunshotFleeResponse to ", MISC::_0xF216F74101968DB0(bVar8));
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 312, bVar8);
	}
	bVar9 = !func_66(128, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 211, true) != bVar9)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting PedConfigFlag PCF_GiveAmbientDefaultTaskIfMissionPed to ", MISC::_0xF216F74101968DB0(bVar9));
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, bVar9);
	}
	bVar10 = func_66(1024, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 412, true) != bVar10)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - Setting PedConfigFlag PCF_BlockHorsePromptsForTargetPed to ", MISC::_0xF216F74101968DB0(bVar10));
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 412, bVar10);
	}
}

void func_80(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (func_24(65))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 33, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - Setting local player mount ILO flag for PP_HORSE_FLEE.");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 33, 1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 26, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 33, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - Clearing local player mount ILO flag for PP_HORSE_FLEE.");
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 33, 1, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 26, false);
	}
	if (func_24(62))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 45, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - Setting local player mount ILO flag for PP_HORSE_WEAPONS_HOLD.");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 45, 1, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 45, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - Clearing local player mount ILO flag for PP_HORSE_WEAPONS_HOLD.");
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 45, 1, false);
	}
	if (func_24(63))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 46, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - Setting local player mount ILO flag for PP_HORSE_WEAPONS.");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 46, 1, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 46, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - ", &(uParam0->f_35), ", Clearing local player mount ILO flag for PP_HORSE_WEAPONS.");
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 46, 1, false);
	}
	if (func_24(64))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 28, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - Setting local player mount ILO flag for PP_HORSE_ITEMS.");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 28, 1, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 28, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - Clearing local player mount ILO flag for PP_HORSE_ITEMS.");
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__ILO_PROMPT_FLAGS - tlDebugName = ", &(uParam0->f_35));
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 28, 1, false);
	}
}

void func_81(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(uParam0->f_3);
	if (bVar0)
	{
		if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, false, false))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	iVar2 = 0;
	if (func_177(iVar1))
	{
		iVar2 = 1;
	}
	AITRANSPORT::_0xBA8818212633500A(uParam0->f_3, 0, iVar2);
	iVar4 = 0;
	AITRANSPORT::_0xE195C5A82156321D(uParam0->f_3, &uVar3);
	if (Global_1270185[iParam2 /*19*/] & 1 != 0)
	{
		if (!func_178(uVar3, 1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(1, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
			iVar4 = 1;
		}
		if (Global_1270185[iParam2 /*19*/] & 32 != 0)
		{
			if (!func_178(uVar3, 32))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(32, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 32;
			}
		}
	}
	else
	{
		if (Global_1270185[iParam2 /*19*/] & 2 != 0)
		{
			if (!func_178(uVar3, 2))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(2, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 2;
			}
		}
		if (Global_1270185[iParam2 /*19*/] & 4 != 0)
		{
			if (!func_178(uVar3, 4))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(4, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 4;
			}
		}
		if (Global_1270185[iParam2 /*19*/] & 8 != 0)
		{
			if (!func_178(uVar3, 8))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(8, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 8;
			}
		}
		if (Global_1270185[iParam2 /*19*/] & 64 != 0)
		{
			if (!func_178(uVar3, 64))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(64, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 64;
			}
		}
		if (Global_1270185[iParam2 /*19*/] & 128 != 0)
		{
			if (!func_178(uVar3, 128))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(128, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 128;
			}
		}
		if (Global_1270185[iParam2 /*19*/] & 256 != 0)
		{
			if (!func_178(uVar3, 256))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(256, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 256;
			}
		}
		if (Global_1270185[iParam2 /*19*/] & 16 != 0)
		{
			if (!func_178(uVar3, 16))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(16, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 = 16;
			}
		}
		if (Global_1270185[iParam2 /*19*/] & 512 != 0)
		{
			if (!func_178(uVar3, 512))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(512, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 512;
			}
		}
		if (func_178(uVar3, 1024))
		{
			if (!func_178(uVar3, 1024))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - Setting Flag: ", func_179(1024, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_SETTINGS - tlDebugName = ", &(uParam0->f_35));
				iVar4 |= 1024;
			}
		}
	}
	if (iVar4 != 0)
	{
		AITRANSPORT::_0xE2487779957FE897(uParam0->f_3, iVar4);
	}
}

void func_82(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_180(uParam0, bParam1, iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3))
	{
		if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -1) == PLAYER::PLAYER_PED_ID())
		{
			func_181(uParam0->f_18);
		}
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		if (uParam0->f_15 >= Global_1275959.f_21)
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Horse doesn't exist!");
			return;
		}
		iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Rider not valid!");
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING -  A non player ped is on the mount.");
			return;
		}
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Rider is not us!!!");
			return;
		}
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Showing help!!!");
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
		if (func_177(iVar2))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Owner of mount is parleyed with.");
			func_101(15, 1);
		}
		else if (Global_1270185[iParam2 /*19*/] & 16 != 0 || Global_1270184 & 32 != 0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Permissions set to anyone - player was kicked.");
			func_101(16, 1);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Permissions changed - player no longer allowed on horse.");
			func_101(14, 1);
		}
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PERMISSION_HANDLING - Kick happening.");
		TASK::TASK_HORSE_ACTION(uParam0->f_18, 10, 0, 0);
		uParam0->f_15 = Global_1275959.f_21 + 3;
	}
}

void func_83(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - eiMount doesn't exist.");
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - pedHorse is dead or dying.");
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_20))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - owner isn't active.");
		return;
	}
	iVar0 = uParam0->f_20;
	bVar1 = func_7(uParam0, 2);
	if (bVar1)
	{
		if (!Global_1904139.f_111)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - bHorseCargoInit = FALSE.");
			return;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			bVar3 = PED::_0x0CEEB6F4780B1F2F(uParam0->f_18, iVar2);
			if (bVar3 != Global_1270185[iVar0 /*19*/].f_15[iVar2])
			{
				DEBUG::_0x1B08D1EB9D8C4931(10888, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - LOCAL - Updating pelt data at index ", iVar2, " - was ", func_182(Global_1270185[iVar0 /*19*/].f_15[iVar2], 0), ", now ", func_182(bVar3, 0));
				Global_1270185[iVar0 /*19*/].f_15[iVar2] = bVar3;
			}
			iVar2++;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - We don't have network control of this horse.");
		return;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		bVar4 = PED::_0x0CEEB6F4780B1F2F(uParam0->f_18, iVar2);
		if (bVar4 == Global_1270185[iVar0 /*19*/].f_15[iVar2])
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - Pelt is correct.");
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(648, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - Native tracked pelt at index ", iVar2, " = ", func_182(bVar4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(136, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS -   Script saved pelt at index ", iVar2, " = ", Global_1270185[iVar0 /*19*/].f_15[iVar2]);
			if (Global_1270185[iVar0 /*19*/].f_15[iVar2] == 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - Removing pelt for horse ", &(uParam0->f_35));
				PED::_0x627F7F3A0C4C51FF(uParam0->f_18, bVar4);
			}
			else if (bVar4 == 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - Adding pelt for horse ", &(uParam0->f_35));
				PED::_0xA73F50E8796150D5(uParam0->f_18, Global_1270185[iVar0 /*19*/].f_15[iVar2]);
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__MOUNT_PELTS - Updating pelts for horse ", &(uParam0->f_35));
				PED::_0xA73F50E8796150D5(uParam0->f_18, Global_1270185[iVar0 /*19*/].f_15[iVar2]);
			}
		}
		iVar2++;
	}
}

void func_84(var uParam0)
{
	float fVar0;
	int iVar1;

	if (func_7(uParam0, 11))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - Deleting horse due to a requested deletion.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
		Global_1904139.f_111 = 0;
		Global_1904139.f_112 = 0;
		func_8(uParam0, 0);
		return;
	}
	if (func_7(uParam0, 0))
	{
		return;
	}
	switch (func_89(uParam0, 0))
	{
		case 1:
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
			return;
		case 2:
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - Releasing horse due to a requested release.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
			func_54(uParam0);
			return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (!func_29(&(uParam0->f_7)))
		{
			func_90(&(uParam0->f_7));
		}
		fVar0 = func_91(&(uParam0->f_7));
		if (fVar0 > 4f)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - Horse has been dead long enough. Setting Mount has died flag.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
			func_30(&(uParam0->f_7));
			func_8(uParam0, 12);
		}
		return;
	}
	if (func_7(uParam0, 8))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - Horse is mission critical. tlDebugName = ", &(uParam0->f_35));
		return;
	}
	else if (func_7(uParam0, 7))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
			if (iVar1 > -1 && iVar1 < 32)
			{
				if (func_66(4, iVar1))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - We must have missed the critical event, marking horse as mission critical.");
					func_8(uParam0, 8);
					return;
				}
			}
		}
	}
	if (func_7(uParam0, 7))
	{
		if (func_183())
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN: we are the owner and we are an animal, request a release.");
		}
		else
		{
			if (func_24(46))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - Automatic respawn is disabled.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
				return;
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) < 250f)
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
				return;
			}
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - Releasing horse naturally.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
	func_184(uParam0);
}

bool func_85(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE__IS_GLOBAL_VEHICLE_PLAYER_FLAG_SET - invalid player index passed in: ", iParam1);
		return false;
	}
	return (Global_1270185[iParam1 /*19*/].f_2 && iParam0) != 0;
}

void func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	bool bVar6;
	bool bVar7;

	if (!func_7(uParam0, 19))
	{
		return;
	}
	iVar0 = PLAYER::_0x7C803BDC8343228D(uParam0->f_21);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_46(uParam0, 19);
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_ON_VEHICLE(iVar1, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar1, true) == uParam0->f_21)
		{
			func_46(uParam0, 19);
			return;
		}
	}
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(func_158(iVar0), &vVar2, &uVar5, 1, 3f, 0);
	bVar6 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
	bVar7 = ENTITY::IS_ENTITY_DEAD(uParam0->f_21);
	if (func_185(iVar1, uParam0->f_21, 1, 1) < 12f)
	{
		func_46(uParam0, 19);
	}
	if (!bVar6)
	{
		return;
	}
	if (bVar7)
	{
		return;
	}
	if (TASK::_0x583AE9AF9CEE0958(uParam0->f_21, vVar2))
	{
		return;
	}
	if (!func_7(uParam0, 19))
	{
		TASK::_0x141BC64C8D7C5529(uParam0->f_21);
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 39, "NET_STABLE_MOUNT__HANDLE_SUMMON_TASKING - Vector Target = ", MISC::_0x6C4DBF553885F9EB(vVar2));
	DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_MOUNT__HANDLE_SUMMON_TASKING - Tasking!!");
	TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_21, vVar2, 6f, 1078722947, 2, 8f, 3f);
}

void func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_7(uParam0, 10))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Releasing vehicle due to a requested release.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 39, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 0);
		return;
	}
	if (func_7(uParam0, 11))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Deleting vehicle due to a requested deletion.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 39, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 0);
		return;
	}
	if (func_24(94))
	{
		return;
	}
	if (func_7(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_21))
	{
		return;
	}
	if (func_7(uParam0, 7))
	{
		if (func_24(92))
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_21, true, false) };
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Num gang members ", GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		DEBUG::_0x1B08D1EB9D8C4931(40, 39, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - tlDebugName = ", &(uParam0->f_35));
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Local player is still close to the mount, exiting");
			return;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_186(iVar0);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 40, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Gang member at index ", iVar0, " is invalid.  Exiting...");
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 40, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Gang member at index ", iVar0, " is inactive.  Exiting...");
			}
			else if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 250f)
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 40, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Player ", func_92(iVar1), " is still close to the mount, exiting");
				return;
			}
			iVar0++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__VEHICLE_DESPAWN - Releasing vehicle naturally.");
	func_8(uParam0, 0);
}

void func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_7(uParam0, 10))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Releasing vehicle due to a requested release.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 0);
		return;
	}
	if (func_7(uParam0, 11))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Deleting vehicle due to a requested deletion.");
		DEBUG::_0x1B08D1EB9D8C4931(40, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - tlDebugName = ", &(uParam0->f_35));
		func_8(uParam0, 0);
		return;
	}
	if (func_7(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_21))
	{
		return;
	}
	if (func_7(uParam0, 7))
	{
		if (func_24(92))
		{
			return;
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Num gang members ", GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		DEBUG::_0x1B08D1EB9D8C4931(40, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - tlDebugName = ", &(uParam0->f_35));
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_21, true, false) };
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Local player is still close to the mount.");
			return;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_186(iVar0);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Gang member at index ", iVar0, " is invalid.");
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Gang member at index ", iVar0, " is inactive.");
			}
			else if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 250f)
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Player ", func_92(iVar1), " is still close to the mount.");
				return;
			}
			iVar0++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - Releasing vehicle naturally.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 39, "NET_STABLE_MOUNT_UPDATE__BOAT_DESPAWN - tlDebugName = ", &(uParam0->f_35));
	func_8(uParam0, 0);
}

int func_89(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_7(uParam0, 10))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_RELEASE: complete - invalid ped handle.");
		return 2;
	}
	iVar0 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_RELEASE: complete - invalid owner.");
		return 2;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_20);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar1 = PLAYER::PLAYER_PED_ID();
	}
	func_187(uParam0->f_18);
	func_188(uParam0, iVar1);
	return 2;
}

void func_90(var uParam0)
{
	func_189(uParam0, 0f);
}

float func_91(var uParam0)
{
	if (!func_29(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_190(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_191() - uParam0->f_1);
}

char* func_92(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_192(40, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1102630.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102630.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(136, 36, "NET_PLAYER_STATUS_GET_PLAYER_NAME - ", iParam0, " is out of range.");
		return "";
	}
	sVar0 = "";
	if (!Global_1275959.f_22[iParam0])
	{
		return sVar0;
	}
	if (func_192(40, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1100880[iParam0 /*53*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1100880[iParam0 /*53*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1275959.f_154[iParam0]);
}

void func_93(var uParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam2, &Var0, 6))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Failed to get common event data at index: ", iParam2);
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	if (Var0 != 47)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - This is not a Net Stable Mount event. eEventType = ", func_193(Var0, 0));
		DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Mount Event has been tracked. eMountEventType = ", func_194(Var0.f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
	if (!func_195(uParam0, bParam1, Var0.f_4, Var0.f_5))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 3:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			if (func_7(uParam0, 11))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Mount has already been deleted.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
				return;
			}
			if (func_7(uParam0, 5))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Ignoring release request as the event broadcaster doesn't own the horse.");
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
					return;
				}
			}
			else if (func_7(uParam0, 6))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Ignoring release request as the event broadcaster doesn't own the vehicle.");
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
					return;
				}
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - ", &(uParam0->f_35), ", Ignoring delete request as this is not a mount or a vehicle!");
				return;
			}
			if (func_7(uParam0, 2))
			{
				func_196(131072);
			}
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Release local mount caught.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 10);
			break;
		case 0:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			if (func_7(uParam0, 11))
			{
				DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - ", &(uParam0->f_35), ", has already been deleted, exiting...");
				return;
			}
			if (func_7(uParam0, 8))
			{
				DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - ", &(uParam0->f_35), ", Ignoring release request because this mount is mission critical");
				return;
			}
			if (func_7(uParam0, 2))
			{
				func_196(131072);
			}
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Release mount caught.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 10);
			break;
		case 2:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			if (func_7(uParam0, 5))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					DEBUG::_0xA308F935BDECCEC0(10920, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - ", &(uParam0->f_35), ", Ignoring delete request as this is not the correct horse! owner = ", PLAYER::GET_PLAYER_NAME(uParam0->f_20), " broadcaster = ", PLAYER::GET_PLAYER_NAME(Var0.f_1));
					return;
				}
			}
			else if (func_7(uParam0, 6))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - ", &(uParam0->f_35), ", Ignoring delete request as this is not the correct vehicle!");
					return;
				}
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - ", &(uParam0->f_35), ", Ignoring delete request as this is not a mount or a vehicle!");
				return;
			}
			if (func_7(uParam0, 2))
			{
				func_196(131072);
			}
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Delete local mount caught.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_46(uParam0, 10);
			func_8(uParam0, 11);
			break;
		case 1:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			if (func_7(uParam0, 8))
			{
				DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - ", &(uParam0->f_35), ", Ignoring delete request because this mount is mission critical");
				return;
			}
			if (func_7(uParam0, 2))
			{
				func_196(131072);
			}
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Delete mount caught.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_46(uParam0, 10);
			func_8(uParam0, 11);
			break;
		case 4:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Setting mount mission critical.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 8);
			break;
		case 5:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Clearing mount mission critical.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_46(uParam0, 8);
			break;
		case 6:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - Setting summon vehicle flag.");
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_8(uParam0, 19);
			break;
		case 9:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_197(uParam0, &Var0, 0);
			break;
		case 10:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_197(uParam0, &Var0, 1);
			break;
		case 11:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_198(uParam0, &Var0);
			break;
		case 7:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_199(uParam0, &Var0);
			break;
		case 8:
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - eMountEventType = ", func_194(Var0.f_4, 0));
			DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
			func_200(uParam0, &Var0);
			break;
	}
}

struct<2> func_94()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_95(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265378.f_131719.f_135 & 8 != 0)
	{
		Global_1072032.f_28392 = 1;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eLoaderFlags != UGC_GLOBAL_LOADER_FLAG_NONE");
		return true;
	}
	if (func_201(Global_1051214) && !func_202(Global_1051214, Param0))
	{
		Global_1072032.f_28392 = 2;
		return true;
	}
	if (iParam2 != 0 && func_203(iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_ANYONE");
		return true;
	}
	if (iParam3 != 0 && func_204(iParam3, 255))
	{
		Global_1072032.f_28392 = 4;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NET_CONTENT_LOCK__IS_LOCKED_FOR_PLAYER");
		return true;
	}
	if (Global_263042[Global_1275959 /*70*/] > 2)
	{
		Global_1072032.f_28392 = 5;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState > UGC_GLOBAL_LOADER_STATE_IDLE, ", func_205(Global_263042[Global_1275959 /*70*/], 0));
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1072032.f_28392 = 6;
		DEBUG::_0x1B08D1EB9D8C4931(40, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, eState >= UGC_GLOBAL_LOADER_HS_MISSION_UPDATE, ", func_206(Global_262155, 0));
		return true;
	}
	if (func_207())
	{
		Global_1072032.f_28392 = 7;
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "NETWORK_SHOULD_FREEMODE_CONTENT_END returning TRUE, NETWORK_IS_GLOBAL_UGC_MISSION_ACTIVE");
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_201(Global_1051214))
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

bool func_96(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

void func_97(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_33 == iParam0)
		{
			UNK_0x355E72323AEE83CC(-1, 6);
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_98(int iParam0, int iParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_SET_MOUNT_IS_DEAD_BY_SLOT - eMountType = ", func_33(iParam1, 0), " bIsDead = ", MISC::_0xF216F74101968DB0(bParam2));
	func_208(iParam0, 2, bParam2);
	if (!func_209(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_SET_MOUNT_IS_DEAD_BY_SLOT - Failed to update mount save data");
		return 0;
	}
	func_210(iParam0, iParam1, bParam2);
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_SET_MOUNT_IS_DEAD_BY_SLOT - GUID: ", UNK_0xD2E4270E5D98EEE4(iParam0), " Is Dead: ", MISC::_0xF216F74101968DB0(bParam2));
	return 1;
}

void func_99()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1270813.f_11.f_162[iVar0 /*7*/].f_6 == 2)
		{
			Global_1270813.f_11.f_162[iVar0 /*7*/] = { func_118() };
			Global_1270813.f_11.f_162[iVar0 /*7*/].f_5 = 0;
			Global_1270813.f_11.f_162[iVar0 /*7*/].f_6 = -1;
		}
		iVar0++;
	}
}

int func_100(int iParam0, bool bParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_211(bParam2), iParam0, bParam1);
}

void func_101(int iParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_SHOW_HELP_MESSAGE - Attempting to show help message: ", func_212(iParam0, 0));
	func_213(iParam0, bParam1);
}

int func_102(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_START_HORSE_RESPAWN_TIMER_NOW - eMountType = ", func_33(iParam4, 0), " eTimerType = ", func_214(iParam5, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_START_HORSE_RESPAWN_TIMER_NOW - HorseGUID = ", UNK_0xD2E4270E5D98EEE4(&Param0));
	if (func_215(&Param0, 0, 1) && iParam5 == 2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_START_HORSE_RESPAWN_TIMER_NOW - Cannot set a hotswap timer on a dead horse!");
		return 0;
	}
	Var0 = { func_118() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_11.f_162[iVar4 /*7*/]), &Param0) && !INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_11.f_162[iVar4 /*7*/]), &Var0))
		{
			DEBUG::_0xA308F935BDECCEC0(648, 40, "NET_STABLE_START_HORSE_RESPAWN_TIMER_NOW - index ", iVar4, " taken by GUID ", UNK_0xD2E4270E5D98EEE4(&(Global_1270813.f_11.f_162[iVar4 /*7*/])));
		}
		else
		{
			Global_1270813.f_11.f_162[iVar4 /*7*/].f_5 = Global_1275959.f_21 + 120;
			Global_1270813.f_11.f_162[iVar4 /*7*/] = { Param0 };
			Global_1270813.f_11.f_162[iVar4 /*7*/].f_6 = iParam5;
			Global_1270813.f_11.f_162[iVar4 /*7*/].f_4 = iParam4;
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_START_HORSE_RESPAWN_TIMER_NOW - Respawn timer set to: ", Global_1270813.f_11.f_162[iVar4 /*7*/].f_5);
			return 1;
		}
		iVar4++;
	}
	DEBUG::_0x83407B92D46F25C3(8, 40, "NET_STABLE_START_HORSE_RESPAWN_TIMER_NOW - Unable to find invalid timer slot.");
	return 0;
}

bool func_103(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_104(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 29, "HORSE_GET_CARRIED_ATTACH_SLOT_FROM_HORSE_CARRIED_SLOT - no attach slot was found!");
	return 0;
}

bool func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::_0x61914209C36EFDDB(iParam0) != 7)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CHECK__ENTITY_FAILSAFE_INTERACTIONS: this entity is not settled.");
			return true;
		}
		iVar0 = ENTITY::_0x9A87FF82FD35822F(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::_0x37056BA2A3FEFB31(iVar0, iParam0))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__CHECK__ENTITY_FAILSAFE_INTERACTIONS: player is taking this entity.");
				return true;
			}
			if (PED::_0xB36B0C7152B15278(iVar0, &iVar1))
			{
				if (iParam1 == iVar1)
				{
					DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CHECK__ENTITY_FAILSAFE_INTERACTIONS: player is dumping an entity in slot ", func_216(iParam1, 0));
					return true;
				}
			}
		}
	}
	return false;
}

char* func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "HCS_INVALID";
		case 0:
			return "HCS_REAR";
		case 1:
			return "HCS_LEFT";
		case 2:
			return "HCS_RIGHT";
		case 3:
			return "NUM_HORSE_CARRIED_SLOTS";
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

void func_109(int iParam0)
{
	struct<11> Var0;
	var uVar96;

	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CACHED_CARGO_SLOTS: ", func_108(iParam0, 0));
	Var0.f_10 = 10;
	MISC::_COPY_MEMORY(&(Global_1904139.f_113[iParam0 /*96*/]), &Var0, 96);
	MISC::_COPY_MEMORY(&(Global_1270813.f_938.f_245[iParam0 /*4*/]), &uVar96, 4);
}

void func_110(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::_0x8D9BFCE3352DE47F(iVar1))
			{
				return;
			}
			if (PED::IS_PED_A_PLAYER(iVar1) || PED::IS_PED_HUMAN(iVar1))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: detected ped or player entity in slot ", func_108(iParam1, 0));
				bVar0 = true;
			}
		}
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: detected mission entity in slot ", func_108(iParam1, 0));
		bVar0 = true;
	}
	if (!bVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: clearing CARRYING_FLAG_CAN_BE_CARRIED_ON_FOOT on entity in slot ", func_108(iParam1, 0));
		ENTITY::_0x18FF3110CF47115D(iParam0, 2, false);
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: setting CARRYING_FLAG_CLEAN_UP_WHEN_NOT_CARRIED on entity in slot ", func_108(iParam1, 0));
		ENTITY::_0x18FF3110CF47115D(iParam0, 27, true);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: we have no control of entity in slot ", func_108(iParam1, 0));
	}
	else if (bVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: we are chucking entity in slot ", func_108(iParam1, 0));
		PED::_0xED00D72F81CF7278(iParam0, 0, 0);
	}
	else if (bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: we are deleting entity in slot ", func_108(iParam1, 0));
		ENTITY::_DELETE_CARRIABLE(&iParam0);
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_MOUNT__CLEANUP__CARRIABLE: we are not instrucrted to delete the entity in slot ", func_108(iParam1, 0));
	}
}

bool func_111(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1270813.f_938.f_245[iParam0 /*4*/].f_3))
	{
		return true;
	}
	if (func_128(Global_1904139.f_113[iParam0 /*96*/].f_1, 0))
	{
		return true;
	}
	return false;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_114()
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_DEFS__INIT_QUERY");
	Global_1904139.f_106 = Global_1072032.f_28503[49 /*4*/].f_3;
	Global_1904139.f_106.f_1 = 0;
	Global_1904139.f_106.f_2 = 0;
	Global_1904139.f_106.f_3 = 0;
	Global_1904139.f_106.f_4 = 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return joaat("NSMT_HORSE");
		case 1:
			return joaat("NSMT_DONKEY");
		case 2:
			return joaat("NSMT_VEHICLE");
		case 3:
			return joaat("NSMT_CANOE");
		case 4:
			return joaat("NSMT_TRAIN");
		case 5:
			return joaat("NSMT_CANNON");
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(40, 40, "NET_STABLE_GET_MOUNT_TYPE_HASH - no hash defined for mount type ", func_33(iParam0, 0));
	return 0;
}

char* func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -1712303883:
			return "BREED_MUSTANG_CHESTNUTTOVERO";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case -1159865523:
			return "BREED_MISSOURIFOXTROTTER_BLUEROAN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case -11223392:
			return "BREED_TURKOMAN_GREY";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case 0:
			return "BREED_INVALID";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case 139264677:
			return "BREED_TURKOMAN_CHESTNUT";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case 406093506:
			return "BREED_MUSTANG_REDDUNOVERO";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 577120648:
			return "BREED_MUSTANG_BLACKOVERO";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case 956799610:
			return "BREED_TURKOMAN_BLACK";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case 1133580901:
			return "BREED_TURKOMAN_PERLINO";
		case 1147338535:
			return "BREED_MUSTANG_BUCKSKIN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 1323533737:
			return "BREED_MISSOURIFOXTROTTER_BLACKTOVERO";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case 1416158449:
			return "BREED_MISSOURIFOXTROTTER_DAPPLEGREY";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case 1854655826:
			return "BREED_MISSOURIFOXTROTTER_BUCKSKINBRINDLE";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
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

char* func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_STABLE_MOUNT_STATE__INVALID";
		case 0:
			return "NET_STABLE_MOUNT_STATE__INIT";
		case 1:
			return "NET_STABLE_MOUNT_STATE__MONITOR_HORSE";
		case 2:
			return "NET_STABLE_MOUNT_STATE__MONITOR_DRAFT_VEHICLE";
		case 3:
			return "NET_STABLE_MOUNT_STATE__MONITOR_BOAT";
		case 4:
			return "NET_STABLE_MOUNT_STATE__MONITOR_EXTERNAL";
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

struct<4> func_118()
{
	struct<4> Var0;

	return Var0;
}

void func_119(var uParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 25, "NET_STABLE_RPG__SAVED_DATA_INIT");
	*uParam0 = { func_118() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0 /*5*/] = 100;
		uParam0->f_29[iVar0 /*5*/].f_1 = 0f;
		uParam0->f_29[iVar0 /*5*/].f_2 = 0f;
		uParam0->f_29[iVar0 /*5*/].f_3 = 0;
		uParam0->f_29[iVar0 /*5*/].f_4 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_40[iVar0 /*4*/] = 100;
				break;
			case 1:
				uParam0->f_40[iVar0 /*4*/] = 0;
				break;
			case 2:
				uParam0->f_40[iVar0 /*4*/] = 50;
				break;
		}
		uParam0->f_40[iVar0 /*4*/].f_1 = 0f;
		uParam0->f_40[iVar0 /*4*/].f_2 = 0f;
		uParam0->f_40[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	uParam0->f_53 = { 0f, 0f, 0f };
}

int func_120(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_217(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_121()
{
	UNK_0x355E72323AEE83CC(208, 6);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_SYSTEM_SET_ITEMS_BEING_PREVIEWED] Clearing preview type");
	Global_1953612.f_1060 = 0;
}

void func_122(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_SET_FLAG] Setting: ", func_218(iParam0, 0));
	Global_1953612 = (Global_1953612 || iParam0);
}

void func_123(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_SLOT_DATA__INIT");
	func_219(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_118() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_124(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY");
	if (!func_220(iParam0, iParam2, bParam3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY - NET_STABLE_GET_HORSE_DATA - Failed.");
		return false;
	}
	if (!func_221(uParam1, iParam2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__LOAD_HORSE_DATA_FROM_INVENTORY - NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA - Failed.");
		return false;
	}
	return true;
}

bool func_125(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY");
	if (!func_222(iParam0, iParam2, bParam3))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY - NET_STABLE_GET_VEHICLE_DATA - Failed.");
		return false;
	}
	if (!func_223(uParam1, iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__LOAD_VEHICLE_DATA_FROM_INVENTORY - NET_STABLE__COPY_VEHICLE_DATA_TO_SLOT_DATA - Failed.");
		return false;
	}
	return true;
}

bool func_126(int iParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Invalid GUID for local dummy, cannot get!");
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_938[iVar0 /*24*/]), iParam0))
		{
		}
		else
		{
			if (Global_1270813.f_938[iVar0 /*24*/].f_23 < Global_1275959.f_21)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Dummy time = : ", Global_1270813.f_938[iVar0 /*24*/].f_23);
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Posix time = : ", Global_1275959.f_21);
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Found an entry, but time is up, don't use dummy!");
				*uParam1 = { Global_1270813.f_938[iVar0 /*24*/].f_7 };
				return true;
			}
			*uParam1 = { Global_1270813.f_938[iVar0 /*24*/].f_15 };
			return true;
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "PLAYER_STABLE_GET_MOUNT_NAME_LOCAL_DUMMY - Did not find, returning false! sItemGUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return false;
}

var func_127(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_224(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_225(&cVar0);
}

bool func_128(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_129(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_130(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_128(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_226(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

struct<8> func_131(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

var func_132(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1804508781);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_133(int iParam0, bool bParam1)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 147, "SET_ENTITY_CAN_BE_QUICK_AND_LONG_LOOTED - bLootable = ", MISC::_0xF216F74101968DB0(bParam1));
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 147, "SET_ENTITY_CAN_BE_QUICK_AND_LONG_LOOTED - Entity does not exist.");
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 147, "SET_ENTITY_CAN_BE_QUICK_AND_LONG_LOOTED - Entity is not a ped.");
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, bParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, bParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return func_227(&(iParam0->f_20), iParam1);
}

char* func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DRIVER_ALLOWED_ME";
		case 1:
			return "DRIVER_ALLOWED_ANYONE";
		case 2:
			return "DRIVER_ALLOWED_POSSE";
		case 3:
			return "DRIVER_ALLOWED_CREW";
		case 4:
			return "DRIVER_ALLOWED_FRIENDS";
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

void func_136()
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_FORCE_DELETE_LOCAL_ACTIVE_HORSE");
	if (func_66(2, 255))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_ATTEMPT_DELETE_LOCAL_ACTIVE_HORSE - active horse is mission critical, ignoring delete request");
		return;
	}
	func_228(2);
}

float func_137(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_138(int iParam0)
{
	int iVar0;
	int iVar1;

	func_229(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_17414.f_3113[iVar0], iVar1);
}

void func_139()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	int iVar7;

	DEBUG::_0xA308F935BDECCEC0(8, 32, "[PROCESS_HORSE_VOUCHER_TOAST]");
	sVar0 = "WEB_INBOX_OFFER";
	sVar1 = "WEB_INBOX_OFFER_DESC";
	iVar2 = MISC::GET_HASH_KEY("toasts_mp_generic");
	iVar3 = MISC::GET_HASH_KEY("TOAST_MP_BENEFITS");
	iVar4 = joaat("HUB");
	sVar5 = "HB_TOAST_BENEFITS_HOLD";
	iVar6 = MISC::GET_HASH_KEY("default");
	iVar7 = func_230(sVar0, sVar1, iVar2, iVar3, iVar4, sVar5, iVar6, 8000, 0, 0, 0, 0, 1, 1);
	if (iVar7 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 32, "[PROCESS_HORSE_VOUCHER_TOAST] - ERROR! Failed to post a toast notification for HORSE VOUCHER.");
	}
	DEBUG::_0xA308F935BDECCEC0(8, 32, "[PROCESS_HORSE_VOUCHER_TOAST] - HORSE VOUCHER Toast sent.");
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	func_229(iParam0, &iVar0, &iVar1);
	uVar2 = Global_17414.f_3113[iVar0];
	MISC::SET_BIT(&uVar2, iVar1);
	Global_17414.f_3113[iVar0] = uVar2;
	DEBUG::_0xF0783374333FD8CE(40, 105, "SET_SIMPLE_TUTORIAL_HAS_RUN - marking tutorial as previously ran - ", func_231(iParam0, 0));
}

void func_141(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_142(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_232(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_144(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_233(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_234(iParam0, 0));
		return false;
	}
	if (func_235(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_234(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_58(iParam0, 1)) || func_236(32768))
	{
		if (!func_58(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_237())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_143(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_144(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

void func_145(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;

	DEBUG::_0xA308F935BDECCEC0(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS");
	Global_1270813.f_938.f_241[iParam2] = 0;
	if (!STREAMING::IS_MODEL_VALID(*uParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - No model found in eCarriedSlot = ", func_108(iParam2, 0));
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar0 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar0 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar0 = { 1f, 0f, 0f };
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - eModel = ", func_32(*uParam1, 0), " found in eCarriedSlot = ", func_108(iParam2, 0));
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar0) };
	if (STREAMING::_0x274EE1B90CFA669E(*uParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Creating an object with model ", func_32(*uParam1, 0), " for eCarriedSlot = ", func_108(iParam2, 0));
		iVar6 = OBJECT::CREATE_OBJECT(*uParam1, vVar3, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Entity was not created!!!");
			return;
		}
		iVar7 = func_238(iParam2);
		TASK::TASK_CARRIABLE(iVar6, uParam1->f_3, iParam0, iVar7, 256);
		ENTITY::_0x399657ED871B3A6C(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		bVar8 = func_239(iParam0, iVar6);
		DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - HORSE_ADD_CARRIABLE_ENTITY_TO_HORSE_INVENTORY - bSuccess = ", MISC::_0xF216F74101968DB0(bVar8));
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Creating a ped with model ", func_32(*uParam1, 0), " for eCarriedSlot = ", func_108(iParam2, 0));
		iVar9 = func_240(*uParam1, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Ped was not created!!!");
			return;
		}
		DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - eOutfit = ", func_241(uParam1->f_8, 0));
		if (uParam1->f_8 != 0)
		{
			PED::_SET_PED_BODY_COMPONENT(iVar9, uParam1->f_8);
			if (uParam1->f_92)
			{
				bVar10 = joaat("META_OUTFIT_FIELD_DRESSING_001");
				if (PED::_0x4FF3C2B4E6A196C1(uParam1->f_8, bVar10, *uParam1))
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 29, "PLAYER_HORSE_SETUP_CARRIED_CARCASSES - Applying a suboutfit. eSubOutfitName = ", func_241(bVar10, 0));
					PED::_0x66FF395445A88A6E(iVar9, bVar10, 0);
				}
			}
		}
		DEBUG::_0x1B08D1EB9D8C4931(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iNumMetaAssets = ", uParam1->f_9);
		iVar19 = 0;
		while (iVar19 < uParam1->f_9)
		{
			bVar11 = uParam1->f_10[iVar19 /*8*/];
			bVar12 = uParam1->f_10[iVar19 /*8*/].f_1;
			bVar13 = uParam1->f_10[iVar19 /*8*/].f_2;
			bVar14 = uParam1->f_10[iVar19 /*8*/].f_3;
			bVar15 = uParam1->f_10[iVar19 /*8*/].f_4;
			bVar16 = uParam1->f_10[iVar19 /*8*/].f_5;
			bVar17 = uParam1->f_10[iVar19 /*8*/].f_6;
			bVar18 = uParam1->f_10[iVar19 /*8*/].f_7;
			PED::_0xBC6DF00D7A4A6819(iVar9, bVar11, bVar12, bVar13, bVar14, bVar15, bVar16, bVar17, bVar18);
			DEBUG::_0x1B08D1EB9D8C4931(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - j = ", iVar19);
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iDrawable = ", UNK_0x4379B6FA65D55295(bVar11));
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iAlbedo   = ", UNK_0x4379B6FA65D55295(bVar12));
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iNormal   = ", UNK_0x4379B6FA65D55295(bVar13));
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iMaterial = ", UNK_0x4379B6FA65D55295(bVar14));
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iPalette  = ", UNK_0x4379B6FA65D55295(bVar15));
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iTint0    = ", UNK_0x4379B6FA65D55295(bVar16));
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iTint1    = ", UNK_0x4379B6FA65D55295(bVar17));
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - iTint2    = ", UNK_0x4379B6FA65D55295(bVar18));
			iVar19++;
		}
		PED::_UPDATE_PED_VARIATION(iVar9, false, true, true, true, false);
		if (uParam1->f_2 == 2)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - eCarriableType = CARRIABLE_TYPE_DEAD");
			ENTITY::_SET_ENTITY_HEALTH(iVar9, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar9, 517, true);
			PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar9, uParam1->f_91);
		}
		if (ENTITY::_0x9A100F1CF4546629(iVar9))
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Quality = ", func_242(uParam1->f_4, 0));
			PED::_SET_PED_QUALITY(iVar9, uParam1->f_4);
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Rarity = ", func_243(uParam1->f_5, 0));
			FLOCK::_0x8B6F0F59B1B99801(iVar9, uParam1->f_5);
			DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Damage Cleanliness = ", func_244(uParam1->f_6, 0));
			PED::_SET_PED_DAMAGE(iVar9, uParam1->f_6);
			DEBUG::_0x1B08D1EB9D8C4931(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Damage Cleanliness Hits = ", uParam1->f_7);
			PED::_SET_PED_DAMAGED(iVar9, uParam1->f_7);
		}
		if (uParam1->f_92 || uParam1->f_95)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - sCarriedData.bSkinned or sCarriedData.bSampled is TRUE");
			PED::_0x6569F31A01B4C097(iVar9, 0, false);
			ENTITY::_0x6BCF5F3D8FFE988D(iVar9, 1);
		}
		iVar20 = func_238(iParam2);
		TASK::TASK_CARRIABLE(iVar9, uParam1->f_3, iParam0, iVar20, 256);
		ENTITY::_0x399657ED871B3A6C(iVar9, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar9, uParam1->f_93);
		if (uParam1->f_94)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - sCarriedData.bIsBurned is TRUE");
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar9, true);
			FIRE::START_ENTITY_FIRE(iVar9, 0f, -1, 8);
		}
		iVar21 = func_245(iVar9);
		bVar22 = func_246(iVar21);
		DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - eItem = ", func_182(bVar22, 0));
		if (func_128(bVar22, 0))
		{
			if (bVar22 != uParam1->f_1)
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Calculating the item detected a mismatch. Setting item to the calculated item.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - Old Item = ", func_182(uParam1->f_1, 0));
				DEBUG::_0x1B08D1EB9D8C4931(40, 29, "NET_PLAYER_HORSE_SETUP_CARRIED_CARCASS - New Item = ", func_182(bVar22, 0));
				uParam1->f_1 = bVar22;
			}
		}
		bVar23 = func_239(iParam0, iVar9);
		DEBUG::_0x1B08D1EB9D8C4931(40, 29, "PLAYER_HORSE_SETUP_CARRIED_CARCASSES - HORSE_ADD_CARRIABLE_ENTITY_TO_HORSE_INVENTORY - bSuccess = ", MISC::_0xF216F74101968DB0(bVar23));
	}
}

bool func_146(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	bool bVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_247(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_248(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		bVar59 = false;
		while (bVar59 < iVar44)
		{
			if (func_249(&Var45, bVar59, iVar43, iVar44))
			{
				if (func_220(&Var45, &Var0, 0))
				{
					if (func_227(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_250(iVar43);
						DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_ACTIVE_HORSE_DATA - Found the active horse.");
						return true;
					}
				}
			}
			bVar59++;
		}
		func_250(iVar43);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_ACTIVE_HORSE_DATA - We have no active horse.");
	return false;
}

struct<4> func_147()
{
	return Global_1270813.f_11.f_310;
}

bool func_148()
{
	return Global_1270813.f_11.f_318 > Global_1275959.f_21;
}

void func_149(var uParam0, bool bParam1)
{
	Global_1270813.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1270813.f_11.f_318 = Global_1275959.f_21 + 10;
	}
}

int func_150(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_251(iParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_GAME_MODE - eGameMode = ", func_252(iVar0, 0));
	bVar1 = func_95(func_94(), 0, 0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_GAME_MODE - bShouldFreemodeConentEnd = ", MISC::_0xF216F74101968DB0(bVar1));
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

int func_151()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_253(iVar0) };
		if (func_254(Var1) == 7)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_152(int iParam0)
{
	return func_255(&(Global_3145858.f_6), iParam0);
}

int func_153(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

char* func_154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSMLS_INVALID";
		case 0:
			return "NSMLS_RACE_HORSE";
		case 1:
			return "NSMLS_COOP_HORSE";
		case 2:
			return "NSMLS_COMPETITIVE_HORSE";
		case 3:
			return "NSMLS_FREEROAM_HORSE";
		case 4:
			return "NSMLS_RACE_VEHICLE";
		case 5:
			return "NSMLS_COOP_VEHICLE";
		case 6:
			return "NSMLS_COMPETITIVE_VEHICLE";
		case 7:
			return "NSMLS_FREEROAM_VEHICLE";
		case 8:
			return "NSMLS_NUM_SLOTS";
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

bool func_155(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	bool bVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_247(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_248(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		bVar59 = false;
		while (bVar59 < iVar44)
		{
			if (func_249(&Var45, bVar59, iVar43, iVar44))
			{
				if (func_220(&Var45, &Var0, 0))
				{
					if (func_227(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_250(iVar43);
						DEBUG::_0x1B08D1EB9D8C4931(8, 40, "[NET_STABLE_GET_PREVIOUS_ACTIVE_HORSE_DATA] Found the last active horse: ");
						return true;
					}
				}
			}
			bVar59++;
		}
		func_250(iVar43);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "[NET_STABLE_GET_PREVIOUS_ACTIVE_HORSE_DATA] We have no last active horse!");
	return false;
}

struct<4> func_156(bool bParam0)
{
	char* sVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar16;

	Var2.f_9 = -1591664384;
	if (!func_256("ALL HORSES", &sVar0, &iVar1, -1591664384, bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 39, "NET_STABLE_GET_FIRST_HORSE_GUID - PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER failed!");
		return Var2;
	}
	DEBUG::_0x4DC69742196F818A(136, 139, "NET_STABLE_GET_FIRST_HORSE_GUID - Number of items in inventory ", sVar0, ": ", iVar1);
	bVar16 = false;
	while (bVar16 < iVar1)
	{
		if (!func_249(&Var2, bVar16, sVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			bVar16++;
		}
	}
	func_250(sVar0);
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_GET_FIRST_HORSE_GUID - Returning first horse found.");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_FIRST_HORSE_GUID - GUID = ", UNK_0xD2E4270E5D98EEE4(&Var2));
	return Var2;
}

bool func_157(bool bParam0)
{
	if (func_257() && (bParam0 || !func_258(0)))
	{
		if (func_259(-283002878))
		{
			if (func_260(-283002878))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_158(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_159(int iParam0)
{
	Global_1940463.f_11674 = (Global_1940463.f_11674 || iParam0);
}

bool func_160(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_44(iParam0, iParam1, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "PLAYER_STABLE_SET_MOUNT_PHYSIQUE - NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL failed. exiting...");
		return false;
	}
	if (!func_261(&Global_1904139))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "PLAYER_STABLE_SET_MOUNT_PHYSIQUE - Slot Data is invalid. exiting...");
		return false;
	}
	func_262(&Global_1904139, 536870912);
	func_262(&Global_1904139, 268435456);
	func_262(&Global_1904139, -2147483648);
	func_262(&Global_1904139, 1073741824 /* Float: 2f */);
	func_262(&Global_1904139, 134217728);
	switch (iParam2)
	{
		case 0:
			func_263(&Global_1904139, 134217728);
			break;
		case 1:
			func_263(&Global_1904139, 268435456);
			break;
		case 2:
			func_263(&Global_1904139, 536870912);
			break;
		case 3:
			func_263(&Global_1904139, 1073741824 /* Float: 2f */);
			break;
		case 4:
			func_263(&Global_1904139, -2147483648);
			break;
	}
	if (!func_209(&Global_1904139))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "PLAYER_STABLE_SET_MOUNT_PHYSIQUE - Failed to update mount save data");
		return false;
	}
	if (bParam3)
	{
		func_264();
	}
	DEBUG::_0xA308F935BDECCEC0(40, 40, "PLAYER_STABLE_SET_MOUNT_PHYSIQUE - Mount weight changed to ", func_52(iParam2, 0));
	return true;
}

int func_161(var uParam0, int iParam1)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
	{
		return 0;
	}
	if (HUD::_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(*uParam0, iParam1))
	{
		return 0;
	}
	*uParam0 = uVar0;
	DEBUG::_0xF0783374333FD8CE(2696, 186, "NET_HUD__UPDATE_GAMERTAG_IS_INVALID: Gamertag ", *uParam0, " is no longer attached to entity ", UNK_0xE02C950E4C991632(iParam1), ", cleaning up our reference to this tag!");
	UNK_0x355E72323AEE83CC(186, 6);
	return 1;
}

bool func_162(int iParam0)
{
	return (Global_17414.f_55.f_61.f_602 && iParam0) != 0;
}

int func_163(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_20;
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (!Global_1270813.f_1429.f_1)
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	bVar0 = iParam4 != -1;
	if (HUD::_0x7EC0D68233E391AC(21) == 2)
	{
		func_265(uParam2);
		return 0;
	}
	if (func_266(Global_1275959, 32768))
	{
		return 0;
	}
	fVar6 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	if (!PLAYER::IS_PLAYER_DEAD(Global_1275959.f_10) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (Global_1072032.f_21956.f_580 <= 0f || fVar6 <= Global_1072032.f_21956.f_580)
		{
			PLAYER::GET_PLAYER_TARGET_ENTITY(Global_1275959.f_10, &iVar8);
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (((iVar8 == iParam0 || PED::_0x0C31C51168E80365(Global_1275959.f_8) == iVar9) || PED::GET_MELEE_TARGET_FOR_PED(Global_1275959.f_8) == iVar9) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(Global_1275959.f_10, iVar9))
			{
				bVar3 = true;
			}
		}
	}
	if (bVar0)
	{
		iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar10, false) || PED::IS_PED_ON_MOUNT(iVar10))
		{
			bVar1 = true;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_21420.f_258), iParam4) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_21420.f_259), iParam4))
		{
			bVar2 = true;
		}
		if (HUD::_0x7EC0D68233E391AC(54) == 2)
		{
			func_265(uParam2);
			return 0;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(Global_1275959.f_154[Global_1275959], Global_1275959.f_154[iParam4]))
		{
			return 0;
		}
		if (func_267(iParam4))
		{
			return 0;
		}
		if (func_267(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1959016.f_2), iParam4))
			{
				return 3;
			}
		}
		if (Global_1072032.f_21956[iParam4 /*18*/].f_3 != 0)
		{
			func_265(uParam2);
			return Global_1072032.f_21956[iParam4 /*18*/].f_3;
		}
		if (func_268(iParam4))
		{
			func_265(uParam2);
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_21956.f_583), iParam4) && !bVar2)
		{
			if (!bVar3 || !func_266(Global_1275959, 131072))
			{
				return 0;
			}
		}
		if (func_269(iParam4))
		{
			return 0;
		}
		if (iParam3 != 255 && iParam3 == iParam4)
		{
			return 3;
		}
		if (func_266(iParam4, 16384))
		{
			return 0;
		}
	}
	else if (bParam7)
	{
		if (HUD::_0x7EC0D68233E391AC(55) == 2)
		{
			func_265(uParam2);
			return 0;
		}
	}
	if (bParam6 || (Global_263042[Global_1275959 /*70*/].f_1.f_21.f_2 == -504335712 && func_270(Global_524288.f_40400)))
	{
		bVar7 = true;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		fVar5 = Global_1901988.f_99.f_11;
	}
	else if (bVar7)
	{
		if (bVar1)
		{
			fVar5 = Global_1901988.f_99.f_10;
		}
		else
		{
			fVar5 = Global_1901988.f_99.f_9;
		}
	}
	else
	{
		if (Global_1072032.f_21956.f_578 > 0f)
		{
			fVar4 = Global_1072032.f_21956.f_578;
		}
		else
		{
			fVar4 = func_271(bParam1, Global_1901988.f_99.f_7, Global_1901988.f_99.f_6);
		}
		if (Global_1072032.f_21956.f_579 > 0f)
		{
			fVar5 = Global_1072032.f_21956.f_579;
		}
		else
		{
			fVar5 = func_271(bParam1, Global_1901988.f_99.f_8, Global_1901988.f_99.f_5);
		}
	}
	if (!func_272(iParam4, iParam0, fVar6, fVar5, bVar0))
	{
		func_265(uParam2);
		return 0;
	}
	bVar11 = HUD::_0x7EC0D68233E391AC(21) == true;
	if (bVar7)
	{
		if (bVar3)
		{
			if (bVar0)
			{
				return 3;
			}
			else
			{
				return 2;
			}
		}
		else if (fVar6 <= fVar5)
		{
			if (bVar11)
			{
				if (bVar0)
				{
					return 3;
				}
				else
				{
					return 2;
				}
			}
			else if (func_266(Global_1275959, 65536))
			{
				if (bVar0 && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))
				{
					return 2;
				}
			}
			else if (((func_273(uParam2) || func_274(iParam5)) || (bVar0 && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))) || bVar2)
			{
				return 2;
			}
		}
		else
		{
			func_265(uParam2);
			return 0;
		}
	}
	else if (bVar3)
	{
		if (bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar4)
	{
		if (bVar11 && bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

char* func_165(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UIGAMERTAGVISIBILITY_NONE";
		case 1:
			return "UIGAMERTAGVISIBILITY_ICON";
		case 2:
			return "UIGAMERTAGVISIBILITY_SIMPLE";
		case 3:
			return "UIGAMERTAGVISIBILITY_COMPLEX";
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

bool func_166(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_103(Global_1270185[iParam0 /*19*/].f_4, 1);
}

bool func_167(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_103(Global_1270185[iParam0 /*19*/].f_4, 2);
}

bool func_168(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;
	bool bVar7;
	int iVar8;

	bVar6 = false;
	bVar7 = true;
	if (func_7(uParam0, 2))
	{
		bVar6 = true;
	}
	iVar8 = uParam0->f_19;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_MOUNT_UPDATE__HORSE_RESERVATIONS: invalid owner ped...");
		return false;
	}
	func_8(uParam0, 30);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		if (!ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: setting carriable flag to disable on the horse...");
			ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, true);
		}
	}
	else if (bVar6)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_18);
	}
	if (!ENTITY::_0x188736456D1DEDE6(uParam0->f_18, iVar8))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: failed to reserve the horse...");
		bVar7 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_106(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var2.f_3))
			{
				if (bVar6)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: no ownership of cargo in slot ", func_216(iVar1, 0));
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Var2.f_3);
				}
			}
			if (!ENTITY::_0x188736456D1DEDE6(Var2.f_3, iVar8))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: failed to reserve cargo in slot ", func_216(iVar1, 0));
				bVar7 = false;
			}
		}
		iVar0++;
	}
	if (func_275())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: interactions are present with the player's horse...");
		bVar7 = false;
	}
	if (!bVar7)
	{
		if (func_276(&(Global_1270813.f_11.f_556), 5f))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_UPDATE__OWNER_RESERVATIONS: we failed to reserve our mount in time - triggering fialsafe!");
			return true;
		}
	}
	return bVar7;
}

void func_169(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;

	iVar6 = uParam0->f_19;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_MOUNT_CLEAR__HORSE_RESERVATIONS: invalid owner ped...");
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		if (ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_CLEAR__HORSE_RESERVATIONS: setting carriable flag to disable on the horse...");
			ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, false);
		}
	}
	ENTITY::_0xC6A1A3D63F122DE7(uParam0->f_18, iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_106(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			ENTITY::_0xC6A1A3D63F122DE7(Var2.f_3, iVar6);
		}
		iVar0++;
	}
}

bool func_170(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && ENTITY::IS_ENTITY_A_PED(uParam1->f_1))
	{
		if (uParam0->f_18 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1))
		{
			return true;
		}
	}
	return false;
}

char* func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAP_NONE";
		case 1:
			return "CAP_CHOOSING_ACTION";
		case 2:
			return "CAP_NAVIGATING";
		case 3:
			return "CAP_PERFORMING";
		case 4:
			return "CAP_EXITING";
		case 5:
			return "CAP_RESUMING";
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

bool func_172(var uParam0)
{
	float fVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_20))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_20)))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0->f_20), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false));
	if (fVar0 < 248f)
	{
		return false;
	}
	return true;
}

char* func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("REL_GT_FFA"):
			return "REL_GT_FFA";
		case joaat("REL_GANG_ODRISCOLL"):
			return "REL_GANG_ODRISCOLL";
		case joaat("REL_CIVMALE"):
			return "REL_CIVMALE";
		case joaat("REL_GT_TEAM_7"):
			return "REL_GT_TEAM_7";
		case joaat("REL_GANG_DUTCHS_HORSES"):
			return "REL_GANG_DUTCHS_HORSES";
		case joaat("REL_BRAITHWAITES"):
			return "REL_BRAITHWAITES";
		case joaat("REL_DOMESTICATED_ANIMAL"):
			return "REL_DOMESTICATED_ANIMAL";
		case joaat("REL_PLAYER_19"):
			return "REL_PLAYER_19";
		case joaat("REL_GANG_SMUGGLERS"):
			return "REL_GANG_SMUGGLERS";
		case joaat("REL_PLAYER_5"):
			return "REL_PLAYER_5";
		case joaat("REL_PLAYER_ALLY"):
			return "REL_PLAYER_ALLY";
		case joaat("REL_GANG_LARAMIE_GANG"):
			return "REL_GANG_LARAMIE_GANG";
		case joaat("REL_RE_VICTIM"):
			return "REL_RE_VICTIM";
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return "REL_GANG_SKINNER_BROTHERS";
		case joaat("REL_GT_TEAM_2"):
			return "REL_GT_TEAM_2";
		case joaat("REL_HEN_ANIMAL"):
			return "REL_HEN_ANIMAL";
		case joaat("REL_PLAYER_18"):
			return "REL_PLAYER_18";
		case joaat("REL_PLAYER_11"):
			return "REL_PLAYER_11";
		case joaat("REL_COMPANION_GROUP"):
			return "REL_COMPANION_GROUP";
		case joaat("REL_PLAYER_21"):
			return "REL_PLAYER_21";
		case joaat("REL_GT_TEAM_1"):
			return "REL_GT_TEAM_1";
		case joaat("REL_PLAYER_0"):
			return "REL_PLAYER_0";
		case joaat("REL_PLAYER_9"):
			return "REL_PLAYER_9";
		case joaat("REL_WILD_ANIMAL_PREDATOR"):
			return "REL_WILD_ANIMAL_PREDATOR";
		case joaat("REL_BOUNTY_HUNTER"):
			return "REL_BOUNTY_HUNTER";
		case joaat("REL_WILD_ANIMAL"):
			return "REL_WILD_ANIMAL";
		case joaat("REL_PLAYER_12"):
			return "REL_PLAYER_12";
		case joaat("REL_NETWORK_SAFE"):
			return "REL_NETWORK_SAFE";
		case joaat("REL_PLAYER_20"):
			return "REL_PLAYER_20";
		case joaat("REL_PLAYER_DISLIKE"):
			return "REL_PLAYER_DISLIKE";
		case joaat("REL_CIVNATIVE"):
			return "REL_CIVNATIVE";
		case joaat("REL_GUNSLINGERS"):
			return "REL_GUNSLINGERS";
		case joaat("REL_BOAR"):
			return "REL_BOAR";
		case joaat("REL_PLAYER_13"):
			return "REL_PLAYER_13";
		case joaat("REL_MINIGAME_PLAYER"):
			return "REL_MINIGAME_PLAYER";
		case joaat("REL_PINKERTONS"):
			return "REL_PINKERTONS";
		case joaat("REL_FETCH_ENEMY_2"):
			return "REL_FETCH_ENEMY_2";
		case joaat("REL_PLAYER_26"):
			return "REL_PLAYER_26";
		case joaat("REL_PLAYER_24"):
			return "REL_PLAYER_24";
		case joaat("REL_PLAYER_2"):
			return "REL_PLAYER_2";
		case joaat("REL_GUAMA_LAW"):
			return "REL_GUAMA_LAW";
		case joaat("REL_GANG_CREOLE"):
			return "REL_GANG_CREOLE";
		case joaat("REL_PLAYER_27"):
			return "REL_PLAYER_27";
		case joaat("REL_PLAYER_1"):
			return "REL_PLAYER_1";
		case joaat("REL_PLAYER_22"):
			return "REL_PLAYER_22";
		case joaat("REL_PLAYER_4"):
			return "REL_PLAYER_4";
		case joaat("REL_DOMESTICATED_PET_ANIMAL"):
			return "REL_DOMESTICATED_PET_ANIMAL";
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return "REL_GANG_LEMOYNE_RAIDERS";
		case joaat("REL_GT_TEAM_4"):
			return "REL_GT_TEAM_4";
		case joaat("REL_NO_RELATIONSHIP"):
			return "REL_NO_RELATIONSHIP";
		case joaat("REL_PLAYER_10"):
			return "REL_PLAYER_10";
		case joaat("REL_COP"):
			return "REL_COP";
		case joaat("REL_PLAYER_23"):
			return "REL_PLAYER_23";
		case joaat("REL_FETCH_ENEMY_1"):
			return "REL_FETCH_ENEMY_1";
		case joaat("REL_PLAYER_25"):
			return "REL_PLAYER_25";
		case joaat("REL_PLAYER_3"):
			return "REL_PLAYER_3";
		case joaat("REL_CIVFEMALE"):
			return "REL_CIVFEMALE";
		case joaat("REL_PLAYER_31"):
			return "REL_PLAYER_31";
		case joaat("REL_MP_WANTED_CRIMINAL"):
			return "REL_MP_WANTED_CRIMINAL";
		case joaat("REL_ALLIGATOR"):
			return "REL_ALLIGATOR";
		case joaat("REL_GT_TEAM_3"):
			return "REL_GT_TEAM_3";
		case joaat("REL_PLAYER_17"):
			return "REL_PLAYER_17";
		case joaat("REL_GANG_DUTCHS"):
			return "REL_GANG_DUTCHS";
		case joaat("REL_GANG_MURFREE_BROOD"):
			return "REL_GANG_MURFREE_BROOD";
		case joaat("REL_PLAYER_30"):
			return "REL_PLAYER_30";
		case joaat("REL_GT_TEAM_6"):
			return "REL_GT_TEAM_6";
		case joaat("REL_PLAYER_16"):
			return "REL_PLAYER_16";
		case joaat("REL_CRIMINALS"):
			return "REL_CRIMINALS";
		case joaat("REL_PLAYER_ENEMY"):
			return "REL_PLAYER_ENEMY";
		case joaat("REL_PLAYER_6"):
			return "REL_PLAYER_6";
		case joaat("REL_PLAYER_LIKE"):
			return "REL_PLAYER_LIKE";
		case joaat("REL_PLAYER_15"):
			return "REL_PLAYER_15";
		case joaat("REL_MP_LIKE_ALL_PLAYERS"):
			return "REL_MP_LIKE_ALL_PLAYERS";
		case joaat("REL_PLAYER_28"):
			return "REL_PLAYER_28";
		case joaat("REL_TOWN_MOB"):
			return "REL_TOWN_MOB";
		case joaat("REL_PLAYER_29"):
			return "REL_PLAYER_29";
		case joaat("REL_NETWORK_FREE_AGENT"):
			return "REL_NETWORK_FREE_AGENT";
		case joaat("REL_PLAYER_8"):
			return "REL_PLAYER_8";
		case joaat("REL_GT_TEAM_5"):
			return "REL_GT_TEAM_5";
		case joaat("REL_RE_ENEMY"):
			return "REL_RE_ENEMY";
		case joaat("PLAYER"):
			return "RELGROUPHASH_PLAYER";
		case joaat("REL_GREYS"):
			return "REL_GREYS";
		case joaat("REL_GT_TEAM_0"):
			return "REL_GT_TEAM_0";
		case joaat("REL_WILD_ANIMAL_BIRD"):
			return "REL_WILD_ANIMAL_BIRD";
		case joaat("REL_PLAYER_7"):
			return "REL_PLAYER_7";
		case joaat("REL_PLAYER_COP"):
			return "REL_PLAYER_COP";
		case joaat("REL_PLAYER_14"):
			return "REL_PLAYER_14";
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

bool func_174(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "IS_PLAYER_ALLY - NOT NETWORK_IS_GAME_IN_PROGRESS");
		return false;
	}
	if (iParam0 == Global_1275959.f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1275959.f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28391), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28389), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28390), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28386), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28388), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275959.f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return true;
	}
	return false;
}

char* func_175(int iParam0)
{
	struct<8> Var0;

	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_MOUNT_DEFS__BLIP_NAME - mount type is invalid!");
		return "";
	}
	func_114();
	Global_1904139.f_106.f_2 = 1292413058;
	Global_1904139.f_106.f_3 = func_115(iParam0);
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, &(Global_1904139.f_106)))
	{
		DEBUG::_0x83407B92D46F25C3(40, 40, "NET_STABLE_MOUNT_DEFS__BLIP_NAME - Failed to fillout BLIP NAME for ", func_33(iParam0, 0));
		return "";
	}
	return func_277(Var0);
}

int func_176(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102630;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_GET_STATE invalid playerID, iPlayerID=", iParam0);
		return 26;
	}
	if (Global_1275959.f_22[iParam0])
	{
		return Global_1100880[iParam0 /*53*/];
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_GET_STATE - Player ", iParam0, " is not active!");
	return 26;
}

bool func_177(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return Global_1108789.f_34[iVar0 /*11*/].f_6;
}

bool func_178(char* sParam0, int iParam1)
{
	return (sParam0 && iParam1) != 0;
}

char* func_179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TUF_INVALID";
		case 1:
			return "TUF_ALLOW_DRIVER_ME";
		case 2:
			return "TUF_ALLOW_DRIVER_GANG";
		case 4:
			return "TUF_ALLOW_DRIVER_CREW";
		case 8:
			return "TUF_ALLOW_DRIVER_FRIENDS";
		case 16:
			return "TUF_ALLOW_DRIVER_ANYONE";
		case 32:
			return "TUF_ALLOW_PASSENGER_ME";
		case 64:
			return "TUF_ALLOW_PASSENGER_GANG";
		case 128:
			return "TUF_ALLOW_PASSENGER_CREW";
		case 256:
			return "TUF_ALLOW_PASSENGER_FRIENDS";
		case 512:
			return "TUF_ALLOW_PASSENGER_ANYONE";
		case 1024:
			return "TUF_ALLOW_ACCESS_AI";
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

bool func_180(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_18))
	{
		iVar1 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, false);
	}
	else
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_21, -1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return true;
	}
	if (iVar2 == iVar0)
	{
		return false;
	}
	if (func_177(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_UPDATE__SHOULD_REMOVE_DRIVER - Owner of mount is parleyed with.");
		return true;
	}
	iVar3 = func_278(iParam2);
	if (func_279(iParam2))
	{
		iVar4 = func_280(iVar3);
		if (iVar4 == 15 || iVar4 == 10)
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 39, "NET_STABLE_MOUNT_UPDATE__SHOULD_REMOVE_DRIVER - ePlayerShopType = ", func_281(iVar4, 0), ", iPlayerID = ", iParam2);
			if (func_282(iVar3, uParam0->f_18))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE_MOUNT_UPDATE__SHOULD_REMOVE_DRIVER - vehicle is in range of shop.");
				return true;
			}
		}
	}
	if (Global_1270185[iParam2 /*19*/] & 16 != 0 || Global_1270184 & 32 != 0)
	{
		return false;
	}
	if (Global_1270185[iParam2 /*19*/] & 2 != 0 || Global_1270184 & 4 != 0)
	{
		if (GANG::_0x901E0DC25080C8B9(iVar2) == GANG::_0x901E0DC25080C8B9(iVar0))
		{
			return false;
		}
	}
	Var5 = { func_283(iVar2) };
	if (Global_1270185[iParam2 /*19*/] & 4 != 0 || Global_1270184 & 8 != 0)
	{
		if (func_284(Var5, *bParam1))
		{
			return false;
		}
	}
	if (Global_1270185[iParam2 /*19*/] & 8 != 0 || Global_1270184 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(bParam1))
		{
			return false;
		}
	}
	return true;
}

void func_181(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_REMOVE_LOCAL_PLAYER_FROM_MOUNT");
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar0)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false, false))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iVar1))
	{
		return;
	}
	if (bVar0)
	{
		if (PED::GET_MOUNT(iVar1) != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))
		{
			return;
		}
	}
	else if (AITRANSPORT::_0xFFEC4B0A1A3ED515(iParam0, -1) == iVar1)
	{
		return;
	}
	if (AITRANSPORT::_0x660639BC60157048(iVar1, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar1;
	Var2.f_4 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_REMOVE_LOCAL_PLAYER_FROM_MOUNT - Tasking off!");
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

var func_182(bool bParam0, int iParam1)
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

bool func_183()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_184(var uParam0)
{
	if (!func_7(uParam0, 25) && !func_7(uParam0, 24))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_REQUEST_OWNER_RELEASE - owner requesting delete.");
		func_8(uParam0, 0);
		func_8(uParam0, 25);
		func_285();
	}
}

float func_185(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_186(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		DEBUG::_0x83407B92D46F25C3(136, 36, "NET_PLAYER_STATUS_GET_GANG_MEMBER - iMemberIndex ", iParam0, " is out of range.");
		return 255;
	}
	return Global_1102630.f_3675[iParam0];
}

void func_187(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_SET__HORSE_RELEASED_BEHAVIOR");
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_SET__HORSE_RELEASED_BEHAVIOR - Entity doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_SET__HORSE_RELEASED_BEHAVIOR - Entity is dead.");
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	ENTITY::_0x18FF3110CF47115D(iParam0, 34, true);
	PED::_0x6569F31A01B4C097(iParam0, 4, false);
	PED::_0x6569F31A01B4C097(iParam0, 0, false);
	PED::_0x6569F31A01B4C097(iParam0, 1, false);
}

void func_188(var uParam0, int iParam1)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_TASK__HORSE_RELEASED_BEHAVIOR");
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT_TASK__HORSE_RELEASED_BEHAVIOR - tlDebugName = ", &(uParam0->f_35));
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_286(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_TASK__HORSE_RELEASED_BEHAVIOR - Tasking horse to remove cargo ped.");
		TASK::TASK_HORSE_ACTION(0, 2, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_SMART_FLEE_PED(0, iParam1, 1000f, -1, 540928, 3f, 0);
	}
	else
	{
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false), 1000f, -1, 540928, 3f);
	}
	TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	func_287(uParam0->f_18, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uParam0->f_18, true);
}

void func_189(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_191() - fParam1);
	func_288(uParam0, 1);
	func_289(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_190(var uParam0)
{
	return func_113(*uParam0, 2);
}

float func_191()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_192(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_290(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_291())
	{
		return func_290(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_290(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

char* func_193(int iParam0, int iParam1)
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

char* func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__INVALID";
		case 0:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__RELEASE_MOUNT";
		case 1:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__DELETE_MOUNT";
		case 2:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__DELETE_LOCAL_MOUNT";
		case 3:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__RELEASE_LOCAL_MOUNT";
		case 4:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__SET_MISSION_CRITICAL";
		case 5:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__CLEAR_MISSION_CRITICAL";
		case 6:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__SUMMON_VEHICLE";
		case 7:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__HORSE_COMMAND_BACKOFF";
		case 8:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__HORSE_COMMAND_STAY_WAIT";
		case 9:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__HORSE_BUCK_RIDER";
		case 10:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__HORSE_BUCK_ANY_RIDER";
		case 11:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__HORSE_DISMOUNT_PASSENGER";
		case 12:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__VEHICLE_BUCK_RIDER";
		case 13:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__VEHICLE_BUCK_ANY_RIDER";
		case 14:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__VEHICLE_DISMOUNT_PASSENGER";
		case 15:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__VEHICLE_CLEAR_TASK";
		case 16:
			return "NET_STABLE_MOUNT_SCRIPT_EVENT_TYPE__VEHICLE_DISMISS";
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

bool func_195(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - Target Instance = ", func_292(iParam3, 0), ", Event Type = ", func_194(iParam2, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
	switch (iParam3)
	{
		case 0:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - Delete or release event! Doing for all inactive horses not just MY active horse.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
				return func_7(uParam0, 5);
			}
			return (func_7(uParam0, 5) && !func_7(uParam0, 7));
		case 1:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - Delete or release event! Doing for all active vehicles not just MY active vehicle.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
				return func_7(uParam0, 6);
			}
			return (func_7(uParam0, 6) && !func_7(uParam0, 7));
		case 2:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - Delete or release event! Doing for all active horses not just MY active horse.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
				return func_7(uParam0, 5);
			}
			return (func_7(uParam0, 5) && func_7(uParam0, 7));
		case 3:
			if (((iParam2 == 1 || iParam2 == 2) || iParam2 == 3) || iParam2 == 6)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - Delete or release event! Doing for all active vehicles not just MY active vehicle.");
				DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_MOUNT__SHOULD_PROCESS_MOUNT_EVENT - tlDebugName = ", &(uParam0->f_35));
				return func_7(uParam0, 6);
			}
			return (func_7(uParam0, 6) && func_7(uParam0, 7));
		case 4:
			return func_7(uParam0, 5);
		case 5:
			return func_7(uParam0, 6);
		case 6:
			return true;
		default:
			break;
	}
	return bParam1->f_11 == iParam3;
}

void func_196(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1270185[iVar0 /*19*/].f_1 = (Global_1270185[iVar0 /*19*/].f_1 || iParam0);
}

void func_197(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__HORSE_BUCK_RIDER - !");
	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - Not the correct horse!");
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - Player has no active horse, can't kick!");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - Player horse is dead.");
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, true);
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::GET_PLAYER_PED(uParam1->f_1);
	if (PED::GET_MOUNT(iVar2) == uParam0->f_18)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - This horse's owner is on the mount. No bucking!");
		if (iVar1 != iVar2 && PED::GET_MOUNT(iVar1) == uParam0->f_18)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - We are not the owner. Tasking to dismount...");
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
			func_101(16, 1);
		}
		if (bParam2 && iVar1 == iVar2)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - We are allowed to remove the owner, which is us! Tasking dismount...");
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - No rider, bailing out...");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_BUCK_RIDER - There is a rider and the owner is not on the horse, time to buck!");
	TASK::TASK_HORSE_ACTION(uParam0->f_18, 10, 0, 0);
	if (iVar0 == iVar1)
	{
		func_101(16, 1);
	}
}

void func_198(var uParam0, var uParam1)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_PROCESS_EVENT__HORSE_DISMOUNT_PASSENGER");
	if (PLAYER::GET_PLAYER_PED(uParam1->f_1) == PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -2) == func_293())
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__HORSE_DISMOUNT_PASSENGER - Checking to remove player from this mount.");
	func_181(uParam0->f_18);
}

void func_199(var uParam0, var uParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__HORSE_COMMAND_BACKOFF - Checking can perform horse action...");
	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!func_294(uParam1, uParam0->f_18))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_18, true, false);
	FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
	TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam1->f_1), true, false), 6, 4718592, -1082130432 /* Float: -1f */, -1, 0);
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__HORSE_COMMAND_BACKOFF - Tasked!");
}

void func_200(var uParam0, var uParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__HORSE_COMMAND_STAY_WAIT - Checking can perform horse action...");
	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!func_294(uParam1, uParam0->f_18))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_18, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(uParam0->f_18)))
		{
			FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
		}
		TASK::TASK_STAND_STILL(uParam0->f_18, -1);
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__HORSE_COMMAND_STAY_WAIT - Tasked!");
	}
}

bool func_201(struct<2> Param0)
{
	if (!func_295(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_296(Param0))
	{
		return false;
	}
	return true;
}

bool func_202(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_203(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1198211.f_1 && iParam0) != 0;
}

bool func_204(int iParam0, int iParam1)
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

char* func_205(int iParam0, int iParam1)
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

char* func_206(int iParam0, int iParam1)
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

bool func_207()
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
	if (!func_201(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_208(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_263(uParam0, iParam1);
	}
	else
	{
		func_262(uParam0, iParam1);
	}
}

bool func_209(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_UPDATE_MOUNT_SAVE_DATA");
	if (!func_261(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NET_STABLE_UPDATE_MOUNT_SAVE_DATA - Slot data is not valid.");
		return false;
	}
	switch (iParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_297(iParam0))
			{
				DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_UPDATE_MOUNT_SAVE_DATA - NET_STABLE__WRITE_SLOT_DATA_TO_HORSE_DATA - Failed. eMountType = ", func_33(iParam0->f_10, 0));
				return false;
			}
			break;
		case 2:
			if (!func_298(iParam0))
			{
				DEBUG::_0x4DC69742196F818A(40, 40, "NET_STABLE_UPDATE_MOUNT_SAVE_DATA - NET_STABLE__WRITE_SLOT_DATA_TO_VEHICLE_DATA - Failed. eMountType = ", func_33(iParam0->f_10, 0));
				return false;
			}
			break;
	}
	return true;
}

void func_210(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_SET_MOUNT_IS_DEAD_LOCAL_DUMMY - eMountType = ", func_33(iParam1, 0), " bIsDead = ", MISC::_0xF216F74101968DB0(bParam2));
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_SET_MOUNT_IS_DEAD_LOCAL_DUMMY - Invalid GUID for local dummy, cannot set!");
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_938[iVar0 /*24*/]), iParam0))
			{
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_SET_MOUNT_IS_DEAD_LOCAL_DUMMY - Setting horse death dummy!!");
				Global_1270813.f_938[iVar0 /*24*/].f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_938.f_271[iVar0 /*24*/]), iParam0))
			{
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_SET_MOUNT_IS_DEAD_LOCAL_DUMMY - Setting vehicle death dummy!!");
				Global_1270813.f_938.f_271[iVar0 /*24*/].f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

int func_211(bool bParam0)
{
	if (func_299() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

char* func_212(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSHM_INVALID";
		case 0:
			return "NSHM__WHISTLE_FAILED__CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM__WHISTLE_FAILED__MOUNT_RESPAWN_DELAY";
		case 2:
			return "NSHM__WHISTLE_FAILED__MOUNT_SUMMON_DELAY";
		case 3:
			return "NSHM__WHISTLE_FAILED__MOUNT_SWAP_DELAY";
		case 4:
			return "NSHM__WHISTLE_FAILED__NO_CALLABLE_HORSES";
		case 5:
			return "NSHM__WHISTLE_FAILED__SPAWN_POSITION_HORSE";
		case 6:
			return "NSHM__WHISTLE_FAILED__CALL_HORSE_DISABLED";
		case 7:
			return "NSHM__WHISTLE_FAILED__ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM__WHISTLE_FAILED__ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM__WHISTLE_FAILED__ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM__WHISTLE_FAILED__PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM__WHISTLE_FAILED__ACTIVE_OWNED_VEHICLE";
		case 12:
			return "NSHM__WHISTLE_FAILED__WHISTLE_ON_VEHICLE";
		case 13:
			return "NSHM__VEHICLE_CALL_FAILED__CANNOT_CONTACT_STABLE";
		case 14:
			return "NSHM__MOUNT_HORSE__YOU_DO_NOT_OWN_HORSE";
		case 15:
			return "NSHM__MOUNT_HORSE__PARLEYED_WITH_OWNER";
		case 16:
			return "NSHM__MOUNT_HORSE__OWNER_KICKED_YOU";
		case 17:
			return "NSHM__MOUNT_HORSE__HORSE_DIED";
		case 18:
			return "NSHM__MOUNT_HORSE__HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM__MOUNT_HORSE__HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM__MOUNT_HORSE__HORSE_DIED_BY_HOSTILE_ACTION";
		case 21:
			return "NSHM__MOUNT_HORSE__REVIVE_COOLDOWN_COMPLETE";
		case 22:
			return "NSHM__MOUNT_HORSE__PENALTY_COOLDOWN";
		case 23:
			return "NSHM__MOUNT_HORSE__PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM__MOUNT_HORSE__PENALTY_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM__MOUNT_HORSE__INSURANCE_EXPIRED";
		case 26:
			return "NSHM__MOUNT_HORSE__CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM__MOUNT_HORSE__GOT_ON_POSSE_MEMBER_HORSE";
		case 28:
			return "NSHM__MOUNT_HORSE__CANT_MOUNT_PLAYER_HORSE";
		case 29:
			return "NSHM__MOUNT_HORSE__BAD_SPORT_KILLED_ENEMY_HORSE";
		case 30:
			return "NSHM__MOUNT_VEHICLE__GOT_ON_POSSE_MEMBER_VEHICLE";
		case 31:
			return "NSHM__MOUNT_VEHICLE__BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 32:
			return "NUM_NET_STABLE_HELP_MESSAGES";
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

void func_213(int iParam0, bool bParam1)
{
	if (func_300(iParam0) && !bParam1)
	{
		DEBUG::_0x4DC69742196F818A(8, 40, "NSIUIF__SHOW_HELP_MESSAGE - requested help message is already being displayed.  Exiting");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NSIUIF__SHOW_HELP_MESSAGE - Showing help message: ", func_212(iParam0, 0));
	Global_1270813.f_11.f_523[iParam0] = func_302(func_301(iParam0), 10000, 0, 0, 0, 1);
}

char* func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSTT_INVALID";
		case 0:
			return "NSTT_DEAD";
		case 1:
			return "NSTT_PENALTY";
		case 2:
			return "NSTT_HOTSWAP";
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

bool func_215(int iParam0, int iParam1, bool bParam2)
{
	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "PLAYER_STABLE_IS_MOUNT_LOCAL_DUMMY_DEAD - eMountType = ", func_33(iParam1, 0), " bUseDummy = ", MISC::_0xF216F74101968DB0(bParam2));
	if (bParam2)
	{
		if (func_303(iParam0, iParam1))
		{
			return true;
		}
		return false;
	}
	func_44(iParam0, iParam1, 0);
	if (func_134(&Global_1904139, 2))
	{
		return true;
	}
	return false;
}

char* func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CARRIED_ATTACH_SLOT_HUMAN_LEFT";
		case 1:
			return "CARRIED_ATTACH_SLOT_HUMAN_RIGHT";
		case 2:
			return "CARRIED_ATTACH_SLOT_HUMAN_LEFT_BOTTOM_LAYER";
		case 3:
			return "CARRIED_ATTACH_SLOT_HUMAN_RIGHT_BOTTOM_LAYER";
		case 4:
			return "CARRIED_ATTACH_SLOT_HORSE_REAR";
		case 5:
			return "CARRIED_ATTACH_SLOT_HORSE_LEFT";
		case 6:
			return "CARRIED_ATTACH_SLOT_HORSE_RIGHT";
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

int func_217(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_211(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_182(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_304(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return 1;
}

char* func_218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPC_SYSTEM_FLAG_CLEAR";
		case 1:
			return "MPC_SYSTEM_FLAG_ANIM_LOADED";
		case 2:
			return "MPC_SYSTEM_FLAG_START_LOADING_ANIM";
		case 4:
			return "MPC_SYSTEM_FLAG_PROCESS_LOAD_BALANACE_LIST";
		case 8:
			return "MPC_SYSTEM_FLAG_UPDATE_REQUESTS_PRESENT";
		case 16:
			return "MPC_SYSTEM_FLAG_SAVE_PLAYER_METAPED";
		case 32:
			return "MPC_SYSTEM_FLAG_OVERRIDE_OUTFIT_DATA_PRESENT";
		case 64:
			return "MPC_SYSTEM_FLAG_GANG_OUTFIT_THEME_PRESENT";
		case 128:
			return "MPC_SYSTEM_FLAG_SUPPRESS_HAT_KNOCK_OFF_EVENT";
		case 256:
			return "MPC_SYSTEM_FLAG_PLAYER_INITIALIZED";
		case 512:
			return "MPC_SYSTEM_FLAG_NEW_PLAYER_CHARACTER_SAVE";
		case 1024:
			return "MPC_SYSTEM_FLAG_OUTFIT_PRELOAD_IS_REQUESTED";
		case 2048:
			return "MPC_SYSTEM_FLAG_OUTFIT_PRELOAD_IS_COMPLETE";
		case 4096:
			return "MPC_SYSTEM_FLAG_OUTFIT_PRELOAD_IN_PROGRESS";
		case 8192:
			return "MPC_SYSTEM_FLAG_OUTFIT_APPLIED_IN_RESPAWN";
		case 16384:
			return "MPC_SYSTEM_FLAG_FORCE_RESTRICTION_REQUESTS";
		case 32768:
			return "MPC_SYSTEM_FLAG_TEMP_HAT_IS_EQUIPPED";
		case 65536:
			return "MPC_SYSTEM_FLAG_DISABLE_PORTABLE_WARDROBE";
		case 131072:
			return "MPC_SYSTEM_FLAG_CACHED_OUTFIT_IS_PRELOADING";
		case 262144:
			return "MPC_SYSTEM_FLAG_FORCE_HAT_ON_RESPAWN";
		case 524288:
			return "MPC_SYSTEM_FLAG_PLAYER_EQUIPPED_UNALTERABLE_OUTFIT";
		case 1048576:
			return "MPC_SYSTEM_FLAG_METAPED_SAVE_CHANGED";
		case 2097152:
			return "MPC_SYSTEM_FLAG_ARMOR_OUTFIT_EQUIPPPED";
		case 4194304:
			return "MPC_SYSTEM_FLAG_PLAYER_EQUIPPED_LOCKED_OUTFIT";
		case 8388608:
			return "MPC_SYSTEM_FLAG_PLAYER_RESPAWNED_AS_ANIMAL";
		case 16777216:
			return "MPC_SYSTEM_FLAG_DISABLE_RESPAWN_CLOTHING_VALIDATION_ONCE";
		case 33554432:
			return "MPC_SYSTEM_FLAG_PLAYER_ANIMAL_TRANSFORMATION_RESET_TIMER_STARTED";
		case 67108864:
			return "MPC_SYSTEM_FLAG_REQUEST_PEDSHOT_AFTER_ALL_METAPED_REQUESTS_ARE_PROCESSED";
		case 134217728:
			return "MPC_SYSTEM_FLAG_PAUSE_REQUEST_QUEUES";
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

void func_219(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_220(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_HORSE_DATA - bPlayerOnly = ", MISC::_0xF216F74101968DB0(bParam2));
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_GET_HORSE_DATA - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	iVar0 = func_211(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam0, iParam1, 29, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_GET_HORSE_DATA - failed to read data!");
		return false;
	}
	return true;
}

bool func_221(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA");
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		DEBUG::_0x83407B92D46F25C3(40, 40, "NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA - Invalid model pulled from cashinventory data: ", func_32(uParam0->f_11, 0));
		return false;
	}
	uParam0->f_22 = func_35(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(40, 40, "NET_STABLE__COPY_HORSE_DATA_TO_SLOT_DATA - Invalid breed pulled from model: ", func_32(uParam0->f_11, 0));
		return false;
	}
	uParam0->f_12 = { iParam1->f_16 };
	uParam0->f_23 = iParam1->f_25;
	uParam0->f_20 = iParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_222(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_VEHICLE_DATA - bPlayerOnly = ", MISC::_0xF216F74101968DB0(bParam2));
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 39, "NET_STABLE_GET_VEHICLE_DATA - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	iVar0 = func_211(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam0, iParam1, 24, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 39, "NET_STABLE_GET_VEHICLE_DATA - Failed to read data for item ", UNK_0xD2E4270E5D98EEE4(iParam0), "!");
		return false;
	}
	return true;
}

bool func_223(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE__COPY_VEHICLE_DATA_TO_SLOT_DATA");
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		DEBUG::_0x83407B92D46F25C3(40, 39, "NET_STABLE__COPY_VEHICLE_DATA_TO_SLOT_DATA - Invalid model pulled from cashinventory data: ", func_32(uParam0->f_11, 0));
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { iParam1->f_15 };
	uParam0->f_20 = iParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

char* func_224(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case 1323533737:
			return "BREED_MISSOURIFOXTROTTER_BLACKTOVERO";
		case -1159865523:
			return "BREED_MISSOURIFOXTROTTER_BLUEROAN";
		case 1854655826:
			return "BREED_MISSOURIFOXTROTTER_BUCKSKINBRINDLE";
		case 1416158449:
			return "BREED_MISSOURIFOXTROTTER_DAPPLEGREY";
		case 577120648:
			return "BREED_MUSTANG_BLACKOVERO";
		case 1147338535:
			return "BREED_MUSTANG_BUCKSKIN";
		case -1712303883:
			return "BREED_MUSTANG_CHESTNUTTOVERO";
		case 406093506:
			return "BREED_MUSTANG_REDDUNOVERO";
		case 956799610:
			return "BREED_TURKOMAN_BLACK";
		case 139264677:
			return "BREED_TURKOMAN_CHESTNUT";
		case -11223392:
			return "BREED_TURKOMAN_GREY";
		case 1133580901:
			return "BREED_TURKOMAN_PERLINO";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 25, "HORSE_GET_BREED_NAME - HORSE_BREED name missing for breed = ", func_116(iParam0, 0));
	return "";
}

char[] func_225(char[4] cParam0)
{
	return cParam0;
}

int func_226(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
		case 239629152:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			}
			break;
	}
	return 0;
}

bool func_227(var uParam0, int iParam1)
{
	return func_178(*uParam0, iParam1);
}

void func_228(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_DELETE_LOCAL_MOUNT");
	func_305(2, iParam0);
}

void func_229(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

var func_230(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TSF_STANDALONE_SP_PURCHASED";
		case 1:
			return "TSF_QUICK_START_GUIDE_TOAST_SEEN";
		case 2:
			return "TSF_ABILITY_VOUCHER_TOAST_SEEN";
		case 3:
			return "TSF_HORSE_VOUCHER_TOAST_SEEN";
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

bool func_232(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_233(int iParam0)
{
	if (func_58(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_234(int iParam0, int iParam1)
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

bool func_235(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_234(iParam0, 0), " Seconds ", iVar2);
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

bool func_236(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_237()
{
	if (!func_306())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 29, "HORSE_GET_CARRIED_ATTACH_SLOT_REQUEST_FROM_HORSE_CARRIED_SLOT - no attach slot was found!");
	return 0;
}

bool func_239(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	DEBUG::_0xA308F935BDECCEC0(8, 157, "HORSE_ADD_CARRIABLE_ENTITY_TO_HORSE_INVENTORY");
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "HORSE_ADD_CARRIABLE_ENTITY_TO_HORSE_INVENTORY - pedParent doesn't exist.");
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "HORSE_ADD_CARRIABLE_ENTITY_TO_HORSE_INVENTORY - entCarriable doesn't exist.");
		return false;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	bVar1 = func_246(iParam1);
	DEBUG::_0xF0783374333FD8CE(40, 157, "HORSE_ADD_CARRIABLE_ENTITY_TO_HORSE_INVENTORY - ADD_INVENTORY_ITEM_TO_HORSE_INVENTORY - Item To Add = ", func_182(bVar1, 0));
	bVar2 = func_307(iVar0, bVar1, 1);
	DEBUG::_0xF0783374333FD8CE(40, 157, "HORSE_ADD_CARRIABLE_ENTITY_TO_HORSE_INVENTORY - ADD_INVENTORY_ITEM_TO_HORSE_INVENTORY - bSuccess = ", MISC::_0xF216F74101968DB0(bVar2));
	return bVar2;
}

int func_240(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_308(iVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

var func_241(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(759749399);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_242(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PQ_INVALID";
		case 0:
			return "PQ_LOW";
		case 1:
			return "PQ_MEDIUM";
		case 2:
			return "PQ_HIGH";
		case 3:
			return "PQ_MAX";
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

char* func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ARL_COMMON";
		case 1:
			return "ARL_RARE";
		case 2:
			return "ARL_LEGENDARY";
		case 3:
			return "ARL_NUMRARITYLEVELS";
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

char* func_244(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PED_DAMAGE_CLEANLINESS_POOR";
		case 1:
			return "PED_DAMAGE_CLEANLINESS_GOOD";
		case 2:
			return "PED_DAMAGE_CLEANLINESS_PERFECT";
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

int func_245(int iParam0)
{
	return iParam0;
}

bool func_246(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "HORSE_GET_CARRIABLE_ENTITY_ITEM - entCarriable doesn't exist.");
		return false;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		bVar0 = func_309(&iParam0);
		DEBUG::_0xF0783374333FD8CE(40, 157, "HORSE_GET_CARRIABLE_ENTITY_ITEM - eItemToAdd = ", func_182(bVar0, 0));
		if (!func_128(bVar0, 0))
		{
			bVar0 = func_310(iParam0);
			DEBUG::_0xF0783374333FD8CE(40, 157, "HORSE_GET_CARRIABLE_ENTITY_ITEM - eItemToAdd = ", func_182(bVar0, 0));
		}
	}
	else
	{
		bVar0 = func_310(iParam0);
		DEBUG::_0xF0783374333FD8CE(40, 157, "HORSE_GET_CARRIABLE_ENTITY_ITEM - eItemToAdd = ", func_182(bVar0, 0));
	}
	return bVar0;
}

struct<14> func_247(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_182(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_304(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_304(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_304(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_311(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_312(iParam6, 0));
	}
	return Var0;
}

bool func_248(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_211(bParam3), uParam0, bParam2);
	if (*uParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *uParam1, "' with size ", *bParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_249(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (bParam1 < 0 || bParam1 >= iParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", bParam1, " Size: ", iParam3);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, bParam1, iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", bParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

int func_250(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_RELEASE_ITEM_COLLECTION - Failed to release collection!");
		return 0;
	}
	return 1;
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*70*/].f_1.f_21.f_2;
	iVar1 = func_313(iVar0);
	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_GET_GAME_MODE_FROM_UGC - eContentType = ", func_314(iVar0, 0), " eSubType = ", func_315(iVar1, 0));
	iVar2 = func_316(iVar0, iVar1);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_GET_GAME_MODE_FROM_UGC - eGameMode = ", func_252(iVar2, 0));
	return iVar2;
}

char* func_252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSMGM_INVALID";
		case 0:
			return "NSMGM_RACE";
		case 1:
			return "NSMGM_COOP";
		case 2:
			return "NSMGM_COMPETITIVE";
		case 3:
			return "NSMGM_FREEMODE";
		case 4:
			return "NSMGM_NUM_MODES";
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

struct<2> func_253(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_254(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_255(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_256(char* sParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_211(bParam4), sParam0, bParam3, bParam2);
	if (*uParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *uParam1, "' with size ", *bParam2, " from predicate '", sParam0, "' with ", func_304(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_257()
{
	return (Global_1940463.f_2 || Global_1940463 == 1);
}

bool func_258(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

bool func_259(int iParam0)
{
	if (iParam0 == Global_1940463.f_40)
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1940463.f_11677[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_261(int iParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_IS_SLOT_DATA_VALID - slot data is invalid because the item guid is invalid");
		return false;
	}
	if (iParam0->f_10 == -1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_IS_SLOT_DATA_VALID - slot data is invalid because the mount type is invalid");
		return false;
	}
	return true;
}

void func_262(var uParam0, int iParam1)
{
	func_317(&(uParam0->f_20), iParam1);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_CLEAR_SLOT_DATA_FLAG - clearing flag: ", func_318(iParam1, 0));
}

void func_263(var uParam0, int iParam1)
{
	func_319(&(uParam0->f_20), iParam1);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_SET_SLOT_DATA_FLAG - setting flag: ", func_318(iParam1, 0));
}

void func_264()
{
	func_320(&(Global_1270813.f_938));
	func_321(0);
	func_321(2);
}

void func_265(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

bool func_266(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(136, 162, "NET_HUD__IS_MOD_FLAG_SET - iPlayerID ", iParam0, " is out of range.  Bailing.");
		UNK_0x355E72323AEE83CC(162, 6);
		return false;
	}
	return func_178(Global_1072032.f_21420.f_1[iParam0 /*8*/].f_7, iParam1);
}

bool func_267(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_192(36, iParam0);
}

bool func_268(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102630.f_3 & 32 != 0;
	}
	return func_322(32, iParam0);
}

bool func_269(int iParam0)
{
	return func_192(1, iParam0);
}

bool func_270(int iParam0)
{
	return (((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414) || iParam0 == 31269700);
}

float func_271(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

bool func_272(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (fParam2 > fParam3)
	{
		return false;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return false;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam1);
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	}
	if (bParam4)
	{
		if (Global_1072032.f_21956[iParam0 /*18*/].f_9 == 0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 1f);
			}
			if (PED::_0xB655DB7582AEC805(iVar1) && TASK::_0x6C50B9DCCCA70023(iVar1))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
			}
			else if (PED::IS_PED_IN_COVER(iVar1, true, false))
			{
				fVar2 = Global_1901988.f_99.f_13;
			}
			else
			{
				fVar2 = Global_1901988.f_99.f_12;
			}
			return ((func_323(Global_1275959, iParam0) && PED::_0x5102307CE88798EB(iVar1)) && PED::_0x164CECC59E70DF86(iVar1, fVar2));
		}
		else if (!PED::_0x5102307CE88798EB(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else if (bVar0)
	{
		if (!PED::_0x5102307CE88798EB(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else
	{
		return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
	}
	return false;
}

int func_273(var uParam0)
{
	if (*uParam0 == 0)
	{
		*uParam0 = Global_1275959.f_21;
	}
	else if ((Global_1275959.f_21 - *uParam0) < 5)
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 1277358601:
		case joaat("POSSE_LEADER"):
			return 0;
		default:
			break;
	}
	return 1;
}

bool func_275()
{
	int iVar0;

	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_66(65536, 255))
		{
			func_21(65536);
		}
		return false;
	}
	if (func_66(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_276(var uParam0, float fParam1)
{
	if (!func_29(uParam0))
	{
		return false;
	}
	if (func_91(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

char* func_277(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

var func_278(int iParam0)
{
	return Global_1264272[iParam0 /*2*/];
}

bool func_279(int iParam0)
{
	return Global_1264272[iParam0 /*2*/].f_1;
}

int func_280(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 139, "GET_SHOP_TYPE_FROM_SHOP - ", func_324(iParam0, 0), " undefined");
	return -1;
}

char* func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "ST_INVALID";
		case 0:
			return "ST_FIRST";
		case 1:
			return "ST_INCREMENT";
		case 2:
			return "ST_POST_OFFICE";
		case 3:
			return "ST_GENERAL";
		case 4:
			return "ST_FENCE";
		case 5:
			return "ST_HORSE_FENCE";
		case 6:
			return "ST_GUNSMITH";
		case 7:
			return "ST_TAILOR";
		case 8:
			return "ST_BARBER";
		case 9:
			return "ST_HORSE_SHOP";
		case 10:
			return "ST_BUTCHER";
		case 11:
			return "ST_DYNAMIC";
		case 12:
			return "ST_BANK";
		case 13:
			return "ST_DONATE";
		case 14:
			return "ST_BAIT";
		case 15:
			return "ST_TRAPPER";
		case 16:
			return "ST_PEARSON";
		case 17:
			return "ST_HOTEL";
		case 18:
			return "ST_PHOTO_STUDIO";
		case 19:
			return "ST_WEAPON_MOD_STORE";
		case 20:
			return "ST_CLOTHING";
		case 21:
			return "SHOP_LAST_SP_SHOP_TYPE";
		case 22:
			return "ST_QUARTERMASTER";
		case 23:
			return "ST_HORSE_TRAINER";
		case 24:
			return "ST_BLACKSMITH";
		case 25:
			return "ST_BOUNTYHUNTING_MP_RETURN";
		case 26:
			return "ST_COACH";
		case 27:
			return "ST_WILDERNESS_SUPPLIES";
		case 28:
			return "ST_CAMP_LOCKBOX";
		case 29:
			return "ST_CAMP_BUTCHERTABLE";
		case 30:
			return "ST_BARTENDER";
		case 31:
			return "ST_PIANIST";
		case 32:
			return "ST_MUSICIAN";
		case 33:
			return "ST_MOONSHINE_STILL";
		case 34:
			return "ST_HANDHELD";
		case 35:
			return "ST_HONOR_MP";
		case 36:
			return "ST_THEATER_MP";
		case 37:
			return "ST_MOONSHINE_PROPERTY";
		case 38:
			return "ST_TRAVELLING_SALESMAN";
		case 39:
			return "ST_HARRIET";
		case 40:
			return "NUM_SHOP_TYPES";
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

bool func_282(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_280(iParam0);
	if (!func_325(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "SATCHEL_IS_HORSE_IN_SHOP_RANGE - Shop type is not valid.");
		return false;
	}
	vVar1 = { Global_1051777.f_80[iVar0 /*75*/].f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_158(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_27(vVar1))
	{
		return false;
	}
	fVar4 = func_326(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_327(iParam1, vVar1, 0);
		DEBUG::_0xF0783374333FD8CE(408, 139, "[EntityDist: ", fVar5, " Distance: ", fVar4);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_327(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

struct<7> func_283(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_284(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar22;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 22, &uParam0);
	}
	else
	{
		return false;
	}
	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam7))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar22, 22, &uParam7);
	}
	else
	{
		return false;
	}
	if (iVar0 != iVar22)
	{
		return false;
	}
	return true;
}

void func_285()
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_FORCE_RELEASE_LOCAL_ACTIVE_HORSE");
	if (func_66(2, 255))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_FORCE_RELEASE_LOCAL_ACTIVE_HORSE - active horse is mission critical, ignoring delete request");
		return;
	}
	func_328(2);
}

bool func_286(var uParam0)
{
	struct<4> Var0;

	if ((!PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -1) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, 0)) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_TASK__SHOULD_HORSE_BUCK_CARGO_OR_RIDERS: Peds on the horse.");
		return true;
	}
	if (!PED::_0x608BC6A6AACD5036(&Var0, uParam0->f_18, 4, 2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3)))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_MOUNT_TASK__SHOULD_HORSE_BUCK_CARGO_OR_RIDERS - Ped stowed on back of horse.");
	return true;
}

void func_287(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_289(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_290(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_291()
{
	return Global_1102630.f_3672;
}

char* func_292(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_STABLE_MOUNT_INSTANCE_ID__INVALID";
		case 0:
			return "NET_STABLE_MOUNT_INSTANCE_ID__INACTIVE_HORSES";
		case 1:
			return "NET_STABLE_MOUNT_INSTANCE_ID__INACTIVE_VEHICLES";
		case 2:
			return "NET_STABLE_MOUNT_INSTANCE_ID__ACTIVE_HORSE";
		case 3:
			return "NET_STABLE_MOUNT_INSTANCE_ID__ACTIVE_VEHICLE";
		case 4:
			return "NET_STABLE_MOUNT_INSTANCE_ID__ALL_HORSES";
		case 5:
			return "NET_STABLE_MOUNT_INSTANCE_ID__ALL_VEHICLES";
		case 6:
			return "NET_STABLE_MOUNT_INSTANCE_ID__ALL_MOUNTS";
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

int func_293()
{
	return -1;
}

bool func_294(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__CHECK_HORSE_COMMAND_CAN_BE_PERFORMED - Owning player does not exist. Exiting...");
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__CHECK_HORSE_COMMAND_CAN_BE_PERFORMED - Owning player is dead. Exiting...");
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__CHECK_HORSE_COMMAND_CAN_BE_PERFORMED - Player horse does not exist. Exiting...");
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__CHECK_HORSE_COMMAND_CAN_BE_PERFORMED - Player horse is dead. Exiting...");
		return false;
	}
	if (PED::IS_PED_INJURED(iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__CHECK_HORSE_COMMAND_CAN_BE_PERFORMED - Player horse is injured. Exiting...");
		return false;
	}
	if (func_185(iVar0, iParam1, 1, 1) > 40f)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__CHECK_HORSE_COMMAND_CAN_BE_PERFORMED - Horse is too far from player to receive commands. Exiting...");
		return false;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iParam1, true);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_PROCESS_EVENT__CHECK_HORSE_COMMAND_CAN_BE_PERFORMED - Rider exists! Don't task!");
		return false;
	}
	return true;
}

bool func_295(int iParam0)
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

int func_296(int iParam0)
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

bool func_297(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__WRITE_SLOT_DATA_TO_HORSE_DATA");
	func_329(&(Global_1904139.f_24));
	if (!func_120(*iParam0, &(Global_1904139.f_24), 1, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 40, "NET_STABLE__WRITE_SLOT_DATA_TO_HORSE_DATA - failed to read inventory data for horse with guid ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	Global_1904139.f_24.f_14 = iParam0->f_11;
	Global_1904139.f_24.f_15 = iParam0->f_22;
	Global_1904139.f_24.f_16 = { iParam0->f_12 };
	Global_1904139.f_24.f_25 = iParam0->f_23;
	Global_1904139.f_24.f_24 = iParam0->f_20;
	func_330(iParam0, &(Global_1904139.f_24.f_24));
	if (!func_331(&(Global_1904139.f_24), 0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__WRITE_SLOT_DATA_TO_HORSE_DATA - NET_STABLE_UPDATE_HORSE_INVENTORY - Failed.");
		return false;
	}
	return true;
}

bool func_298(int iParam0)
{
	struct<24> Var0;

	DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_STABLE__WRITE_SLOT_DATA_TO_VEHICLE_DATA");
	Var0.f_9 = -1591664384;
	if (!func_120(*iParam0, &Var0, 0, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 39, "NET_STABLE__WRITE_SLOT_DATA_TO_VEHICLE_DATA - Failed to read inventory data for vehicle with guid ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	Var0.f_14 = iParam0->f_11;
	Var0.f_15 = { iParam0->f_12 };
	func_330(iParam0, &(Var0.f_23));
	return func_332(&Var0, 0, 0);
}

int func_299()
{
	return Global_1572887.f_13;
}

bool func_300(int iParam0)
{
	return func_333(Global_1270813.f_11.f_523[iParam0]);
}

char* func_301(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
		case 17:
			return "NSHM_HORSE_DIED";
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 25, "NET_STABLE_GET_HELP_MESSAGE_LABEL - no label defined for help message ", func_212(iParam0, 0));
	return "";
}

int func_302(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return iVar15;
}

bool func_303(int iParam0, int iParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "PLAYER_STABLE_IS_MOUNT_LOCAL_DUMMY_DEAD - Invalid GUID for local dummy, cannot get!");
		return false;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_938[iVar0 /*24*/]), iParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_IS_MOUNT_LOCAL_DUMMY_DEAD - GUIDs don't match.");
			}
			else
			{
				return Global_1270813.f_938[iVar0 /*24*/].f_6;
			}
			iVar0++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1270813.f_938.f_271[iVar0 /*24*/]), iParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 40, "PLAYER_STABLE_IS_MOUNT_LOCAL_DUMMY_DEAD - GUIDs don't match.");
			}
			else
			{
				return Global_1270813.f_938.f_271[iVar0 /*24*/].f_6;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "PLAYER_STABLE_IS_MOUNT_LOCAL_DUMMY_DEAD - Did not find, returning false! sItemGUID = ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return false;
}

var func_304(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1767793931);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_305(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NSIMEF__SEND_MOUNT_EVENT: invalid player broadcaster.");
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
	DEBUG::_0xA308F935BDECCEC0(8, 40, "************************** NSIMEF__SEND_MOUNT_EVENT **************************");
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***     Event Type: ", func_194(Var0.f_4, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "*** Mount Instance: ", func_334(Var0.f_5));
}

bool func_306()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_307(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_128(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_335(iParam0) };
	Var5 = { func_336(iParam0, bParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, bParam1, Var0.f_4, bParam2, 752097756))
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_INVENTORY_ITEM_TO_HORSE_INVENTORY - Successfully placed a carriable = ", HUD::_GET_LABEL_TEXT_BY_HASH(bParam1));
		return 1;
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "ADD_INVENTORY_ITEM_TO_HORSE_INVENTORY - FAILURE");
	}
	return 0;
}

void func_308(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			DEBUG::_0xA308F935BDECCEC0(40, 0, "CREATE_PED_WITH_DEFAULTS: applying random outfit to ped - ", UNK_0xE02C950E4C991632(iParam0));
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_337(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_338(iParam0, 0);
			bVar0 = true;
		}
		func_339(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_309(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "GET_SATCHEL_ITEM_OF_CARRIED_CARCASS - entCarriable does not exist.");
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_340(iVar0);
}

bool func_310(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (bVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			bVar0 = func_340(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return bVar0;
}

var func_311(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1982857120);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UPGRADE"):
			return "CI_ITEMGROUP_UPGRADE";
		case joaat("COACH"):
			return "CI_ITEMGROUP_COACH";
		case joaat("HORSE_EQUIPMENT"):
			return "CI_ITEMGROUP_HORSE_EQUIPMENT";
		case joaat("DOG"):
			return "CI_ITEMGROUP_DOG";
		case joaat("COUPON"):
			return "CI_ITEMGROUP_COUPON";
		case joaat("HORSE"):
			return "CI_ITEMGROUP_HORSE";
		case joaat("EMOTE"):
			return "CI_ITEMGROUP_EMOTE";
		case joaat("MONEY"):
			return "CI_ITEMGROUP_MONEY";
		case joaat("PROPERTY"):
			return "CI_ITEMGROUP_PROPERTY";
		case joaat("CURRENCY"):
			return "CI_ITEMGROUP_CURRENCY";
		case joaat("CLOTHING"):
			return "CI_ITEMGROUP_CLOTHING";
		case joaat("WEAPON_MOD"):
			return "CI_ITEMGROUP_WEAPON_MOD";
		case joaat("VEHICLE"):
			return "CI_ITEMGROUP_VEHICLE";
		case joaat("PROVISION"):
			return "CI_ITEMGROUP_PROVISION";
		case joaat("WEAPON"):
			return "CI_ITEMGROUP_WEAPON";
		case joaat("PRECIOUS_METAL"):
			return "CI_ITEMGROUP_PRECIOUS_METAL";
		case 0:
			return "CI_ITEMGROUP_INVALID";
		case joaat("FEE"):
			return "CI_ITEMGROUP_FEE";
		case joaat("ACTIVE_CARD"):
			return "CI_ITEMGROUP_ACTIVE_CARD";
		case joaat("AMMO"):
			return "CI_ITEMGROUP_AMMO";
		case 311306500:
			return "CI_ITEMGROUP_PURCHASABLE_AWARD";
		case joaat("WEAPON_DECORATION"):
			return "CI_ITEMGROUP_WEAPON_DECORATION";
		case joaat("KIT"):
			return "CI_ITEMGROUP_KIT";
		case joaat("ABILITY_CARD"):
			return "CI_ITEMGROUP_ABILITY_CARD";
		case 1194991665:
			return "CI_ITEMGROUP_COACHMOD";
		case joaat("GOLD"):
			return "CI_ITEMGROUP_GOLD";
		case joaat("COMPONENT"):
			return "CI_ITEMGROUP_COMPONENT";
		case 1417470098:
			return "CI_ITEMGROUP_VOUCHER";
		case joaat("MINIGAME"):
			return "CI_ITEMGROUP_MINIGAME";
		case joaat("ADVERT"):
			return "CI_ITEMGROUP_ADVERT";
		case joaat("DOCUMENT"):
			return "CI_ITEMGROUP_DOCUMENT";
		case joaat("CORE_ITEM"):
			return "CI_ITEMGROUP_CORE_ITEM";
		case joaat("CONSUMABLE"):
			return "CI_ITEMGROUP_CONSUMABLE";
		case joaat("PASSIVE_CARD"):
			return "CI_ITEMGROUP_PASSIVE_CARD";
		case joaat("CAMP"):
			return "CI_ITEMGROUP_CAMP";
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

int func_313(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288.f_40400;
}

char* func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -933924539:
			return "UGC_TYPE_RACE";
		case -504335712:
			return "UGC_TYPE_MISSION";
		case 371211549:
			return "UGC_TYPE_UNDEFINED";
		case 395262693:
			return "UGC_TYPE_DEATHMATCH";
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

char* func_315(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_SUBTYPE_MISSION_STORY";
		case -1649482077:
			return "UGC_SUBTYPE_MISSION_UP_IN_SMOKE";
		case -915869673:
			return "UGC_SUBTYPE_MISSION_TERRITORY_GAIN";
		case -777132493:
			return "UGC_SUBTYPE_MISSION_PLUNDER_SUPPLY";
		case -698288936:
			return "UGC_SUBTYPE_MISSION_PROTECT";
		case -360644098:
			return "UGC_SUBTYPE_MISSION_TERRITORY_TAKEOVER";
		case -318976023:
			return "UGC_SUBTYPE_MISSION_BOUNTY";
		case -163684180:
			return "UGC_SUBTYPE_MISSION_SPOILS_OF_WAR";
		case 31269700:
			return "UGC_SUBTYPE_MISSION_LETTER";
		case 482206342:
			return "UGC_SUBTYPE_MISSION_LEGACY";
		case 534981680:
			return "UGC_SUBTYPE_MISSION_ESCAPE_FROM";
		case 603385332:
			return "UGC_SUBTYPE_MISSION_DELIVERY";
		case 604251967:
			return "UGC_SUBTYPE_MISSION_FEAR_OF_US";
		case 772881414:
			return "UGC_SUBTYPE_MISSION_MOONSHINE";
		case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
			return "UGC_SUBTYPE_MISSION_PREDATOR_HUNT";
		case 1078150940:
			return "UGC_SUBTYPE_MISSION_ADVERSARY_WIP";
		case 1520184724:
			return "UGC_SUBTYPE_MISSION_AFGHAN_POLO_OBJECT";
		case 1781111147:
			return "UGC_SUBTYPE_MISSION_FETCH";
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

int func_316(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_270(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_317(var uParam0, int iParam1)
{
	if (!func_227(uParam0, iParam1))
	{
		return;
	}
	func_341(uParam0, iParam1);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_CLEAR_MOUNT_FLAG - clearing flag: ", func_318(iParam1, 0));
}

char* func_318(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147483648:
			return "NSMDF_MOUNT_WEIGHT_OBESE";
		case 0:
			return "NSMDF_INVALID";
		case 1:
			return "NSMDF_MOUNT_IS_FAVORITE";
		case 2:
			return "NSMDF_MOUNT_IS_DEAD";
		case 4:
			return "NSMDF_MOUNT_IS_INSURED";
		case 8:
			return "NSMDF_BONDING_DATA_LOADED";
		case 16:
			return "NSMDF_MOUNT_IS_ACTIVE";
		case 32:
			return "NSMDF_MOUNT_WAS_LAST_ACTIVE";
		case 64:
			return "NSMDF_MOUNT_APPLY_CARE_PACKAGE";
		case 134217728:
			return "NSMDF_MOUNT_WEIGHT_MALNOURISHED";
		case 268435456:
			return "NSMDF_MOUNT_WEIGHT_THIN";
		case 536870912:
			return "NSMDF_MOUNT_WEIGHT_FIT";
		case 1073741824:
			return "NSMDF_MOUNT_WEIGHT_OVERWEIGHT";
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

void func_319(var uParam0, int iParam1)
{
	if (func_227(uParam0, iParam1))
	{
		return;
	}
	func_342(uParam0, iParam1);
	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_SET_MOUNT_FLAG - setting flag: ", func_318(iParam1, 0));
}

void func_320(var uParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 25, "NET_STABLE_OWNED_MOUNT_CACHE_DATA__INIT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_343(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_343(&(uParam0->f_271[iVar0 /*24*/]));
		iVar0++;
	}
}

void func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<17> Var16;
	struct<16> Var45;
	struct<4> Var69;
	struct<24> Var83;
	bool bVar107;
	int iVar108;

	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - eType = ", func_33(iParam0, 0));
	if (iParam0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - eType = ", func_33(iParam0, 0));
		if (!func_256("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - Failed to create item collection for eType = ", func_33(iParam0, 0));
			return;
		}
	}
	else if (iParam0 == 2)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - eType = ", func_33(iParam0, 0));
		Var2 = { func_247(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("COACH")) };
		if (!func_248(&Var2, &iVar0, &iVar1, 0))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - Failed to create item collection for eType = ", func_33(iParam0, 0));
			return;
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - Collection created. iCollectionSize = ", iVar1);
	if (iVar1 > 10)
	{
		DEBUG::_0x83407B92D46F25C3(8, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - We own more horses than we are allowed to, something is wrong!");
		iVar1 = 10;
	}
	Var16.f_9 = -1591664384;
	Var45.f_9 = -1591664384;
	Var69.f_9 = -1591664384;
	bVar107 = false;
	while (bVar107 < iVar1)
	{
		if (!INVENTORY::_0x82FA24C3D3FCD9B7(iVar0, bVar107, &Var69))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_INVENTORY__MAINTAIN_CACHE - Couldn't find item at collection index ", bVar107);
		}
		else if (!func_44(&Var69, iParam0, 0))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - NET_STABLE_LOAD_SLOT_DATA_TO_GLOBAL - Failed.");
		}
		else
		{
			iVar108 = Global_1904139.f_10;
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - eMountType = ", func_33(iVar108, 0));
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - sItem.guid = ", UNK_0xD2E4270E5D98EEE4(&Var69));
			switch (iVar108)
			{
				case 0:
				case 1:
					if (MISC::_IS_STRING_SPACE(&(Global_1904139.f_12)))
					{
						if (func_220(&Var69, &Var16, 1))
						{
							if (func_331(&Var16, 0, 1))
							{
								DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - giving horse with GUID ", UNK_0xD2E4270E5D98EEE4(&Var69), " a default name.");
								Global_1904139.f_12 = { Var16.f_16 };
							}
							else
							{
								DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - failed to give horse with GUID ", UNK_0xD2E4270E5D98EEE4(&Var69), " a default name.");
							}
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - failed to get horse data for mount with invalid name: ", UNK_0xD2E4270E5D98EEE4(&Var69));
						}
					}
					break;
				case 2:
					if (MISC::_IS_STRING_SPACE(&(Global_1904139.f_12)))
					{
						if (func_222(&Var69, &Var45, 1))
						{
							if (func_332(&Var45, 0, 1))
							{
								DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - giving vehicle with GUID ", UNK_0xD2E4270E5D98EEE4(&Var69), " a default name.");
								Global_1904139.f_12 = { Var45.f_15 };
							}
							else
							{
								DEBUG::_0xA308F935BDECCEC0(168, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - failed to give vehicle with GUID ", UNK_0xD2E4270E5D98EEE4(&Var69), " a default name.");
							}
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - failed to get vehicle data for mount with invalid name: ", UNK_0xD2E4270E5D98EEE4(&Var69));
						}
					}
					break;
			}
			Var83 = { Var69 };
			Var83.f_4 = Global_1904139.f_11;
			Var83.f_6 = func_134(&Global_1904139, 2);
			Var83.f_7 = { Global_1904139.f_12 };
			if (iVar108 == 0 || iVar108 == 1)
			{
				Var83.f_15 = { Global_1270813.f_938[bVar107 /*24*/].f_15 };
				Var83.f_23 = Global_1270813.f_938[bVar107 /*24*/].f_23;
				Global_1270813.f_938[bVar107 /*24*/] = { Var83 };
			}
			else if (iVar108 == 2)
			{
				Var83.f_15 = { Global_1270813.f_938.f_271[bVar107 /*24*/].f_15 };
				Var83.f_23 = Global_1270813.f_938.f_271[bVar107 /*24*/].f_23;
				Global_1270813.f_938.f_271[bVar107 /*24*/] = { Var83 };
			}
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - New entry!");
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - GUID = ", UNK_0xD2E4270E5D98EEE4(&Var69));
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - Model name = ", func_32(Global_1904139.f_11, 0));
			DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - bDead = ", MISC::_0xF216F74101968DB0(Var83.f_6));
			DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_INVENTORY__CACHE_DATA_FROM_COLLECTION - Cached at index: ", bVar107);
		}
		bVar107++;
	}
	func_250(iVar0);
}

bool func_322(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

int func_323(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_DOES_PLAYER_HAVE_LOS_TO_PLAYER - Invalid iTargetID = ", iParam1);
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_DOES_PLAYER_HAVE_LOS_TO_PLAYER - Invalid iTargetID = ", iParam1);
		return 0;
	}
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!Global_1275959.f_22[iParam0])
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_DOES_PLAYER_HAVE_LOS_TO_PLAYER - iPlayerID ", iParam0, " is not active.");
		return 0;
	}
	if (!Global_1275959.f_22[iParam1])
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_DOES_PLAYER_HAVE_LOS_TO_PLAYER - iTargetID ", iParam1, " is not active.");
		return 0;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1275959.f_154[iParam0]))
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_DOES_PLAYER_HAVE_LOS_TO_PLAYER - iPlayerID ", iParam0, " is invalid.");
		return 0;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1275959.f_154[iParam1]))
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_DOES_PLAYER_HAVE_LOS_TO_PLAYER - iTargetID ", iParam1, " is invalid.");
		return 0;
	}
	return func_344(Global_1275959.f_154[iParam0], Global_1275959.f_154[iParam1]);
}

char* func_324(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "SHOP_INVALID";
		case 0:
			return "SHOP_FIRST_NORMAL_SHOP";
		case 1:
			return "SHOP_ASB_POST_OFFICE";
		case 2:
			return "SHOP_ASB_LAST";
		case 3:
			return "SHOP_BGV_FIRST";
		case 4:
			return "SHOP_BGV_TRAPPER_2";
		case 5:
			return "SHOP_BLK_FIRST";
		case 6:
			return "SHOP_BLK_GENERAL_STORE";
		case 7:
			return "SHOP_BLK_GUNSMITH";
		case 8:
			return "SHOP_BLK_BARBER";
		case 9:
			return "SHOP_BLK_BUTCHER";
		case 10:
			return "SHOP_BLK_BARTENDER";
		case 11:
			return "SHOP_BLK_PIANIST";
		case 12:
			return "SHOP_BLK_PHOTO_STUDIO";
		case 13:
			return "SHOP_BLK_HORSE_SHOP";
		case 14:
			return "SHOP_BLK_POST_OFFICE";
		case 15:
			return "SHOP_BLK_TRAIN_STATION";
		case 16:
			return "SHOP_BLK_MUSICIAN_GUITARIST_FIRST";
		case 17:
			return "SHOP_BLK_MUSICIAN_GUITARIST_SECOND";
		case 18:
			return "SHOP_BLK_MUSICIAN_GUITARIST_THIRD";
		case 19:
			return "SHOP_BLK_LAST";
		case 20:
			return "SHOP_MOONSHINE_STILL";
		case 21:
			return "SHOP_EMR_STILL";
		case 22:
			return "SHOP_EMR_FIRST";
		case 23:
			return "SHOP_EMR_GENERAL_STORE";
		case 24:
			return "SHOP_EMR_POST_OFFICE";
		case 25:
			return "SHOP_EMR_TRAIN_STATION";
		case 26:
			return "SHOP_LAG_FIRST";
		case 27:
			return "SHOP_RGG_POST_OFFICE";
		case 28:
			return "SHOP_RGG_TRAIN_STATION";
		case 29:
			return "SHOP_RHO_BANK";
		case 30:
			return "SHOP_RHO_BUTCHER";
		case 31:
			return "SHOP_RHO_FENCE";
		case 32:
			return "SHOP_RHO_STILL";
		case 33:
			return "SHOP_RHO_GENERAL_STORE";
		case 34:
			return "SHOP_RHO_GUNSMITH";
		case 35:
			return "SHOP_RHO_POST_OFFICE";
		case 36:
			return "SHOP_RHO_BARTENDER";
		case 37:
			return "SHOP_RHO_PIANIST";
		case 38:
			return "SHOP_RHO_MUSICIAN_BANJO";
		case 39:
			return "SHOP_RHO_LAST";
		case 40:
			return "SHOP_ROA_FIRST";
		case 41:
			return "SHOP_SCM_FIRST";
		case 42:
			return "SHOP_SDN_BANK";
		case 43:
			return "SHOP_SDN_BARBER";
		case 44:
			return "SHOP_SDN_BUTCHER";
		case 45:
			return "SHOP_SDN_DOCTOR";
		case 46:
			return "SHOP_SDN_FENCE";
		case 47:
			return "SHOP_SDN_STILL";
		case 48:
			return "SHOP_SDN_GENERAL_STORE";
		case 49:
			return "SHOP_SDN_GUNSMITH";
		case 50:
			return "SHOP_SDN_HORSE_SHOP";
		case 51:
			return "SHOP_SDN_POST_OFFICE";
		case 52:
			return "SHOP_SDN_TRAIN_STATION";
		case 53:
			return "SHOP_SDN_TAILOR";
		case 54:
			return "SHOP_SDN_BARTENDER";
		case 55:
			return "SHOP_SDN_PIANIST";
		case 56:
			return "SHOP_SDN_BARTENDER_SLUM";
		case 57:
			return "SHOP_SDN_PIANIST_SLUM";
		case 58:
			return "SHOP_SDN_MUSICIAN_GUITARIST";
		case 59:
			return "SHOP_SDN_MUSICIAN_BANJO";
		case 60:
			return "SHOP_SDN_PHOTO_STUDIO";
		case 61:
			return "SHOP_SDN_THEATER_MP";
		case 62:
			return "SHOP_SDN_THEATER_MAGIC_MP";
		case 63:
			return "SHOP_SDN_LAST";
		case 64:
			return "SHOP_HSO_LAST";
		case 65:
			return "SHOP_CLM_LAST";
		case 66:
			return "SHOP_SHB_PEARSON";
		case 67:
			return "SHOP_BVH_FIRST";
		case 68:
			return "SHOP_STR_FIRST";
		case 69:
			return "SHOP_STR_GENERAL_STORE";
		case 70:
			return "SHOP_STR_WELCOME_CENTER";
		case 71:
			return "SHOP_STR_HORSE_SHOP";
		case 72:
			return "SHOP_STR_MUSICIAN_BANJO";
		case 73:
			return "SHOP_STR_MUSICIAN_GUITARIST";
		case 74:
			return "SHOP_STR_LAST";
		case 75:
			return "SHOP_STR_BARTENDER";
		case 76:
			return "SHOP_TAL_LAST";
		case 77:
			return "SHOP_VAL_FIRST";
		case 78:
			return "SHOP_VAL_BARBER";
		case 79:
			return "SHOP_VAL_BARTENDER";
		case 80:
			return "SHOP_VAL_PIANIST";
		case 81:
			return "SHOP_VAL_BARTENDER_KEANE";
		case 82:
			return "SHOP_VAL_BUTCHER";
		case 83:
			return "SHOP_VAL_DOCTOR";
		case 84:
			return "SHOP_VAL_GENERAL_STORE";
		case 85:
			return "SHOP_VAL_GUNSMITH";
		case 86:
			return "SHOP_VAL_HORSE_SHOP";
		case 87:
			return "SHOP_VAL_POST_OFFICE";
		case 88:
			return "SHOP_VAL_TRAIN_STATION";
		case 89:
			return "SHOP_VAL_THEATER_MAGIC_MP";
		case 90:
			return "SHOP_VAL_HOTEL";
		case 91:
			return "SHOP_VAL_BARTENDER_SLUM";
		case 92:
			return "SHOP_VAN_STILL";
		case 93:
			return "SHOP_VAN_FIRST";
		case 94:
			return "SHOP_VAN_BARTENDER";
		case 95:
			return "SHOP_VAN_PIANIST";
		case 96:
			return "SHOP_VAN_HORSE_SHOP";
		case 97:
			return "SHOP_VAN_TRAIN_STATION";
		case 98:
			return "SHOP_VAN_POST_OFFICE";
		case 99:
			return "SHOP_WAL_GENERAL_STORE";
		case 100:
			return "SHOP_WAL_TRAIN_STATION";
		case 101:
			return "SHOP_WAL_LAST";
		case 102:
			return "SHOP_TBL_GENERAL_STORE";
		case 103:
			return "SHOP_TBL_GUNSMITH";
		case 104:
			return "SHOP_TBL_BUTCHER";
		case 105:
			return "SHOP_TBL_BARTENDER";
		case 106:
			return "SHOP_TBL_PIANIST";
		case 107:
			return "SHOP_TBL_HORSE_SHOP";
		case 108:
			return "SHOP_AMD_GENERAL_STORE";
		case 109:
			return "SHOP_AMD_HONOR_MP";
		case 110:
			return "SHOP_AMD_BARTENDER";
		case 111:
			return "SHOP_AMD_POST_OFFICE";
		case 112:
			return "SHOP_AMD_LAST";
		case 113:
			return "SHOP_ROJ_HONOR_MP";
		case 114:
			return "SHOP_BOJ_HONOR_MP";
		case 115:
			return "SHOP_RYC_STILL";
		case 116:
			return "SHOP_RYC_LAST";
		case 117:
			return "SHOP_BEN_FIRST";
		case 118:
			return "SHOP_LAST_NORMAL_SHOP";
		case 119:
			return "SHOP_DYNAMIC";
		case 120:
			return "SHOP_VAL_BOUNTYHUNTING_MP_RETURN";
		case 121:
			return "SHOP_VAL_COACH";
		case 122:
			return "SHOP_BLK_BOUNTYHUNTING_MP_RETURN";
		case 123:
			return "SHOP_BLK_COACH";
		case 124:
			return "SHOP_SDN_BOUNTYHUNTING_MP_RETURN";
		case 125:
			return "SHOP_SDN_COACH";
		case 126:
			return "SHOP_RHO_BOUNTYHUNTING_MP_RETURN";
		case 127:
			return "SHOP_STR_BOUNTYHUNTING_MP_RETURN";
		case 128:
			return "SHOP_VAN_COACH";
		case 129:
			return "SHOP_ASB_BOUNTYHUNTING_MP_RETURN";
		case 130:
			return "SHOP_THL_FENCE";
		case 131:
			return "SHOP_THL_STILL";
		case 132:
			return "SHOP_BUT_MUSICIAN_BANJO";
		case 133:
			return "SHOP_WILDERNESS_SUPPLIES";
		case 134:
			return "SHOP_MOONSHINE_PROPERTY";
		case 135:
			return "SHOP_RIO_TRAVELLING_SALESMAN";
		case 136:
			return "SHOP_CHO_TRAVELLING_SALESMAN";
		case 137:
			return "SHOP_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "SHOP_TAL_TRAVELLING_SALESMAN";
		case 139:
			return "SHOP_BGV_TRAVELLING_SALESMAN";
		case 140:
			return "SHOP_HRT_E_TRAVELLING_SALESMAN";
		case 141:
			return "SHOP_HRT_W_TRAVELLING_SALESMAN";
		case 142:
			return "SHOP_GRZ_TRAVELLING_SALESMAN";
		case 143:
			return "SHOP_SCM_TRAVELLING_SALESMAN";
		case 144:
			return "SHOP_BLU_TRAVELLING_SALESMAN";
		case 145:
			return "SHOP_DER_TRAVELLING_SALESMAN";
		case 146:
			return "SHOP_BBR_TRAVELLING_SALESMAN";
		case 147:
			return "SHOP_CAMP_TRAVELLING_SALESMAN";
		case 148:
			return "SHOP_CHO_TRAPPER";
		case 149:
			return "SHOP_HEN_HARRIET";
		case 150:
			return "SHOP_BGV_HARRIET";
		case 151:
			return "SHOP_LAST_MP_NON_CARAVAN_SHOP";
		case 152:
			return "SHOP_ANYWHERE_HANDHELD";
		case 153:
			return "SHOP_CAMP_LOCKBOX";
		case 154:
			return "SHOP_CAMP_BUTCHERTABLE";
		case 155:
			return "SHOP_FIRST_CARAVAN_SHOP";
		case 156:
			return "SHOP_BVH_GENERAL_STORE";
		case 157:
			return "SHOP_BVH_GUNSMITH";
		case 158:
			return "SHOP_BVH_HORSE_TRAINER";
		case 159:
			return "SHOP_CLM_DOCTOR";
		case 160:
			return "SHOP_CLM_GENERAL_STORE";
		case 161:
			return "SHOP_CLM_GUNSMITH";
		case 162:
			return "SHOP_CLM_HORSE_TRAINER";
		case 163:
			return "SHOP_CLM_HORSE_FENCE";
		case 164:
			return "SHOP_HSO_DOCTOR";
		case 165:
			return "SHOP_HSO_GENERAL_STORE";
		case 166:
			return "SHOP_HSO_GUNSMITH";
		case 167:
			return "SHOP_HSO_HORSE_TRAINER";
		case 168:
			return "SHOP_LAK_DOCTOR";
		case 169:
			return "SHOP_LAK_GENERAL_STORE";
		case 170:
			return "SHOP_LAK_GUNSMITH";
		case 171:
			return "SHOP_LAK_HORSE_TRAINER";
		case 172:
			return "SHOP_SHB_DOCTOR";
		case 173:
			return "SHOP_SHB_GENERAL_STORE";
		case 174:
			return "SHOP_SHB_GUNSMITH";
		case 175:
			return "SHOP_SHB_HORSE_TRAINER";
		case 176:
			return "SHOP_WEAPON_MOD_STORE";
		case 177:
			return "SHOP_CLOTHING";
		case 178:
			return "SHOP_CAMP_SHAVING";
		case 179:
			return "SHOP_WARDROBE";
		case 180:
			return "NUM_SHOPS";
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

bool func_325(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

float func_326(int iParam0)
{
	int iVar0;

	iVar0 = func_280(iParam0);
	switch (iVar0)
	{
		case 10:
			return 10f;
		case 29:
			return 70f;
		case 2:
			return 75f;
		case 15:
			if (iParam0 == 63)
			{
				return 40f;
			}
			else
			{
				return 25f;
			}
			break;
	}
	return 10f;
}

float func_327(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_328(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_RELEASE_LOCAL_MOUNT");
	func_305(3, iParam0);
}

void func_329(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_INVENTORY_HORSE_DATA__INIT");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

void func_330(int iParam0, var uParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE__COPY_SLOT_DATA_FLAGS_TO_SAVED_MOUNT_DATA");
	if (func_134(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "PLAYER_STABLE__COPY_SAVED_MOUNT_DATA_FLAGS_TO_SLOT_DATA - Mount is insured.");
		func_319(uParam1, 4);
	}
	if (func_134(iParam0, 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "PLAYER_STABLE__COPY_SAVED_MOUNT_DATA_FLAGS_TO_SLOT_DATA - Mount is dead.");
		func_319(uParam1, 2);
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 40, "NET_STABLE__COPY_SLOT_DATA_FLAGS_TO_SAVED_MOUNT_DATA - End");
}

bool func_331(int iParam0, bool bParam1, bool bParam2)
{
	struct<29> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - Horse GUID is invalid.  Exiting...");
		return false;
	}
	if (MISC::_IS_STRING_SPACE(&(iParam0->f_16)))
	{
		StringCopy(&(iParam0->f_16), func_34(), 64);
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - setting horse name to default");
	}
	if (func_345(bParam2))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - Attempting direct inventory manipulation for horse with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_211(bParam2), iParam0, iParam0, 29))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - Failed to update horse with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
			return false;
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - Attempting cashinventory transaction for horse with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
		DEBUG::_0xA308F935BDECCEC0(648, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - SLOTID = ", iParam0->f_9, ", parentGUID = ", UNK_0xD2E4270E5D98EEE4(&(iParam0->f_5)));
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_346(iParam0, 0) };
		Var0.f_17 = { iParam0->f_16 };
		Var0.f_26 = iParam0->f_27;
		Var0.f_27 = iParam0->f_28;
		Var0.f_25 = iParam0->f_25;
		Var0.f_28 = iParam0->f_24;
		if (func_347(joaat("UPDATE"), &Var0, bParam1) == -1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - Failed to update horse with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
			return false;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 40, "************************** NET_STABLE_UPDATE_HORSE_INVENTORY **************************");
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***     Inventory: ", func_348(func_211(0), 0));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***          GUID: ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***      Equipped: ", MISC::_0xF216F74101968DB0(iParam0->f_10));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***       Insured: ", MISC::_0xF216F74101968DB0(func_227(&(iParam0->f_24), 4)));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***          Slot: ", func_304(iParam0->f_9, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***         Model: ", UNK_0x1B7C373FB4E76B85(iParam0->f_14));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***         Breed: ", func_116(iParam0->f_15, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***          Name: ", &(iParam0->f_16));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***        Active: ", MISC::_0xF216F74101968DB0(func_227(&(iParam0->f_24), 16)));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***      Favorite: ", MISC::_0xF216F74101968DB0(func_227(&(iParam0->f_24), 1)));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***          Dead: ", MISC::_0xF216F74101968DB0(func_227(&(iParam0->f_24), 2)));
	DEBUG::_0xA308F935BDECCEC0(8, 40, "***    Bonding XP: ", iParam0->f_25);
	DEBUG::_0xA308F935BDECCEC0(8, 40, "***         Dirty: ", iParam0->f_27);
	DEBUG::_0xA308F935BDECCEC0(8, 40, "***        Hungry: ", iParam0->f_28);
	DEBUG::_0xA308F935BDECCEC0(40, 40, "NET_STABLE_UPDATE_HORSE_INVENTORY - Successfully updated horse with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return true;
}

bool func_332(int iParam0, bool bParam1, bool bParam2)
{
	struct<26> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 39, "NET_STABLE_UPDATE_VEHICLE - Failed to update vehicle with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (func_345(bParam2))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 39, "NET_STABLE_UPDATE_VEHICLE - Attempting direct inventory manipulation for vehicle with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_211(bParam2), iParam0, iParam0, 24))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 39, "NET_STABLE_UPDATE_VEHICLE - Failed to update vehicle with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
			return false;
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(40, 39, "NET_STABLE_UPDATE_VEHICLE - Attempting cashinventory transaction for vehicle with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_346(iParam0, 0) };
		Var0.f_17 = { iParam0->f_15 };
		Var0.f_25 = iParam0->f_23;
		if (func_349(joaat("UPDATE"), &Var0, bParam1) == -1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 39, "NET_STABLE_UPDATE_VEHICLE - Failed to update vehicle with GUID ", UNK_0xD2E4270E5D98EEE4(iParam0));
			return false;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 39, "************************** NET_STABLE_UPDATE_VEHICLE **************************");
	DEBUG::_0xA308F935BDECCEC0(40, 39, "***     Inventory: ", func_348(func_211(0), 0));
	DEBUG::_0xA308F935BDECCEC0(40, 39, "***          GUID: ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0xA308F935BDECCEC0(40, 39, "***         Model: ", func_32(iParam0->f_14, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 39, "***          Name: ", &(iParam0->f_15));
	DEBUG::_0xA308F935BDECCEC0(40, 39, "*** 	    Favorite: ", MISC::_0xF216F74101968DB0(func_227(&(iParam0->f_23), 1)));
	DEBUG::_0xA308F935BDECCEC0(40, 39, "*** 	  	    Dead: ", MISC::_0xF216F74101968DB0(func_227(&(iParam0->f_23), 2)));
	return true;
}

bool func_333(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_0x59FA676177DBE4C9(iParam0) == 4;
}

char* func_334(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "INVALID";
		case 0:
			return "Inactive Horses";
		case 1:
			return "Inactive Vehicles";
		case 2:
			return "Active Horse";
		case 3:
			return "Active Vehicle";
		case 4:
			return "All Horses";
		case 5:
			return "All Vehicles";
		case 6:
			return "All Mounts";
		default:
			break;
	}
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

struct<5> func_335(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_336(iParam0, joaat("CHARACTER"), func_118(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_336(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_128(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PED_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_182(bParam1, 0), " (", bParam1, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, bParam1, bParam6, &Var0);
	return Var0;
}

void func_337(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "SET_PED_HAT_VISIBLE: pedIndex is dead");
		return;
	}
	if (bParam1)
	{
		PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HATS"), 0, 1);
	}
	else
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_338(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 25, "HORSE_ADD_META_PED_OUTFIT_SADDLE - pedMount doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "HORSE_ADD_META_PED_OUTFIT_SADDLE - pedMount is dead or injured.");
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_339(char* sParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(648, 28, "HORSE_SET_GENDER - pedHorse: ", sParam0, " eGender = ", func_350(iParam1, 0));
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 1f);
	}
}

bool func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 181, "GET_SATCHEL_ITEM_FROM_PED_CARCASS - entCarriable does not exist.");
		return false;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE(iVar0);
	iVar2 = func_351(iVar0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 181, "GET_SATCHEL_ITEM_FROM_PED_CARCASS - ped damage cleanliness = ", func_244(iVar1, 0));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 181, "GET_SATCHEL_ITEM_FROM_PED_CARCASS - pedAttached does not exist.");
		return false;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
		DEBUG::_0x1B08D1EB9D8C4931(8, 181, "GET_SATCHEL_ITEM_FROM_PED_CARCASS - Setting ped damage cleanliness to ", iVar4);
	}
	if (!PED::_0x9E7738B291706746(&bVar5, iVar0, iVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "GET_SATCHEL_ITEM_FROM_PED_CARCASS - COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE failed.");
		return false;
	}
	if (bVar5 != 0)
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			bVar6 = func_352(bVar5);
			DEBUG::_0x1B08D1EB9D8C4931(40, 181, "GET_SATCHEL_ITEM_FROM_PED_CARCASS - Returning skinned item: ", func_182(bVar6, 0));
			return bVar6;
		}
		DEBUG::_0x1B08D1EB9D8C4931(40, 181, "GET_SATCHEL_ITEM_FROM_PED_CARCASS - Returning item: ", func_182(bVar5, 0));
		return bVar5;
	}
	switch (iVar1)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

void func_341(var uParam0, int iParam1)
{
	func_353(uParam0, iParam1);
}

void func_342(var uParam0, int iParam1)
{
	func_354(uParam0, iParam1);
}

void func_343(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 25, "NET_STABLE_MOUNT_INVENTORY_CACHE_DATA__INIT");
	*uParam0 = { func_118() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
}

int func_344(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return 0;
		}
		if (!PED::_0x5102307CE88798EB(iVar0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
			return 0;
		}
	}
	return NETWORK::_0xE525878A35B9EEBD(iParam0, iParam1);
}

bool func_345(bool bParam0)
{
	if (func_299() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_211(bParam0));
}

struct<17> func_346(int iParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *iParam0 };
	Var0.f_4 = { iParam0->f_5 };
	Var0.f_8 = iParam0->f_4;
	Var0.f_9 = iParam0->f_11;
	Var0.f_11 = iParam0->f_9;
	Var0.f_10 = iParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_355(iParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_118() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_347(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_HORSE_TRANSACTION - ", func_356(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_357(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_359(func_358(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_360(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_HORSE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

char* func_348(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "INVENTORY_INVALID";
		case 1:
			return "INVENTORY_SP_PLAYER";
		case 2:
			return "INVENTORY_MP_PLAYER";
		case 3:
			return "INVENTORY_MP_MISSION";
		case 4:
			return "INVENTORY_SECOND_SCREEN";
		case 5:
			return "INVENTORY_SP_BACKUP";
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

int func_349(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_VEHICLE_TRANSACTION - ", func_356(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_359(func_361(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_360(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_VEHICLE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

char* func_350(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PG_EITHER";
		case 1:
			return "PG_MALE";
		case 2:
			return "PG_FEMALE";
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

int func_351(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	DEBUG::_0xF0783374333FD8CE(680, 157, "GET_PED_SKINNING_QUALITY - Returning Skinning Quality: ", func_362(iVar0, 0), " from Ped Quality: ", func_242(iVar1, 0));
	return iVar0;
}

int func_352(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
		case -827518870:
			return -2115566177;
		case 1367447057:
			return -1886936864;
		case -2092697195:
			return 777641606;
		case -2043601589:
			return 1815502722;
		case 1758585485:
			return 1518910503;
		case 1527400190:
			return 1020297399;
		case 1493601140:
			return -438328437;
		case -885592109:
			return -132069363;
		case -1282621313:
			return 1718756614;
		case -70954328:
			return 616254818;
		case -1378208045:
			return 1586020612;
		case 1450608653:
			return 1892902297;
		case 1543592331:
			return 1920759986;
		case 1842740532:
			return 1683741809;
		case 2004357248:
			return 403588059;
		case -229670230:
			return -352805801;
		case 546758456:
			return 1491466288;
		case 1888419655:
			return -1066678466;
		case -2040849706:
			return -375348364;
		case 2014346813:
			return -101301217;
		case -1638839614:
			return 213936563;
		case 1705186999:
			return 897866285;
		case -1821314478:
			return 1135507073;
		case -1434083213:
			return -1671125008;
		default:
			break;
	}
	return 0;
}

void func_353(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_354(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_355(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_364(func_363(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

char* func_356(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1939575505:
			return "CI_ACTION_CLAIM_LOOT";
		case joaat("BATCH"):
			return "CI_ACTION_BATCH";
		case joaat("SPEND"):
			return "CI_ACTION_SPEND";
		case joaat("SELL"):
			return "CI_ACTION_SELL";
		case joaat("UPDATE"):
			return "CI_ACTION_UPDATE";
		case -659726804:
			return "CI_ACTION_CLAIM_SPLIT_AWARD";
		case -460111564:
			return "CI_ACTION_UPDATE_CHARACTER";
		case 0:
			return "CI_ACTION_INVALID";
		case 541670136:
			return "CI_ACTION_BUY_AWARD";
		case 644809794:
			return "CI_ACTION_CLAIM_AWARD";
		case 1168099063:
			return "CI_ACTION_MOVEITEMS";
		case joaat("USE"):
			return "CI_ACTION_USE";
		case 2113164098:
			return "CI_ACTION_BUY_BUNDLE";
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

bool func_357(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_356(iParam0, 0), " -> ", func_182(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_365(iParam1->f_8, iParam0, sVar0, 2048) || func_365(iParam1->f_8, iParam0, sVar0, 32768)) || func_365(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_365(iParam1->f_8, iParam0, sVar0, 4) || func_365(iParam1->f_8, iParam0, sVar0, 256)) || func_365(iParam1->f_8, iParam0, sVar0, 65536)) || func_365(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_365(iParam1->f_8, iParam0, sVar0, 1) || func_365(iParam1->f_8, iParam0, sVar0, 8)) || func_365(iParam1->f_8, iParam0, sVar0, 65536)) || func_365(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_365(iParam1->f_8, iParam0, sVar0, 1) || func_365(iParam1->f_8, iParam0, sVar0, 16)) || func_365(iParam1->f_8, iParam0, sVar0, 2)) || func_365(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_365(iParam1->f_8, iParam0, sVar0, 8) || func_365(iParam1->f_8, iParam0, sVar0, 4096)) || func_365(iParam1->f_8, iParam0, sVar0, 256)) || func_365(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_358(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

int func_359(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_182(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_366(iParam1, 1, 0, 0);
			return iParam1;
		}
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to check out basket!");
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to add item to basket!");
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
		{
			NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
		}
	}
	func_366(iParam1, 2, 0, 0);
	return -1;
}

int func_360(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_182(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_366(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

bool func_361(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

char* func_362(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SKINNING_QUALITY_POOR";
		case 1:
			return "SKINNING_QUALITY_GOOD";
		case 2:
			return "SKINNING_QUALITY_PERFECT";
		case 3:
			return "SKINNING_QUALITY_RARE";
		case 4:
			return "SKINNING_QUALITY_LEGENDARY";
		case 5:
			return "SKINNING_QUALITY_SAMPLE";
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

bool func_363(bool bParam0)
{
	return bParam0;
}

bool func_364(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

int func_365(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_178(sParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_20)
	{
		if (Global_1272425.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_367(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_367(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_367(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_356(iParam2, 0), " and action B to ", func_356(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_368(iParam0, iParam1, iParam2, iParam3);
}

char* func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSACTION_STATUS_NONE";
		case 1:
			return "TRANSACTION_STATUS_PENDING";
		case 2:
			return "TRANSACTION_STATUS_FAILED";
		case 3:
			return "TRANSACTION_STATUS_SUCCESSFULL";
		case 4:
			return "TRANSACTION_STATUS_CANCELED";
		case 5:
			return "TRANSACTION_STATUS_QUEUED";
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

void func_368(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_20 < 20)
	{
		Global_1272425.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_20.f_1[iVar0 /*21*/] = { Global_1272425.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_369(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_356(iParam2, 0), " and action B ", func_356(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_367(iParam1, 0));
}

void func_369(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_370(&(uParam0->f_4));
}

void func_370(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

