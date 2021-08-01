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
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	struct<98> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(ScriptParam_0);
	while (!func_2(0, 0) && !func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	DEBUG::_0xF0783374333FD8CE(8, 225, "net_moonshine_entrance.sc is terminating now");
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_19.f_1 = vParam0.z;
	func_6(64);
	DEBUG::_0xF0783374333FD8CE(40, 225, "MOON_INSTANCE_INIT - eLocation: ", func_7(Local_19.f_1, 0));
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_8(Global_1572887, 0), ", so skipping");
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

bool func_3()
{
	int iVar0;

	if (Local_19 == 34)
	{
		DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_SHOULD_END - Terminate state reached, should end now");
		return true;
	}
	if (!MISC::IS_BIT_SET(Global_1277387.f_201, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_SHOULD_END - Entrance script no longer requested, shut down");
		return true;
	}
	iVar0 = func_9(Global_1277387.f_200, 1);
	if (((Local_19.f_1 != iVar0 && iVar0 != -1) && Local_19 < 25) && !func_10())
	{
		DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_SHOULD_END - Target shack changed during update (while not inside), end thread");
		return true;
	}
	if (((!func_11(Local_19.f_13[3 /*3*/]) && Local_19 == 25) && BUILTIN::VDIST(Local_19.f_13[3 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)) > Global_1901988.f_800.f_10) && !func_12(6, 255))
	{
		DEBUG::_0xF0783374333FD8CE(24, 225, "MOON_INSTANCE_SHOULD_END - Too far from interior; dist: ", BUILTIN::VDIST(Local_19.f_13[3 /*3*/], Global_34));
		return true;
	}
	return false;
}

void func_4()
{
	func_13();
	func_14();
	func_15(joaat("GHOSTING_VOLUME"));
	if (func_16(64))
	{
		if (Local_19 < 33)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_UPDATE - Entrance thread requested to move to reset, do it now");
			func_17(33);
		}
	}
	else if (func_16(128))
	{
		if (Local_19 > 3)
		{
			if (Global_1277387.f_1 == 4)
			{
				if (Local_19 < 21)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_UPDATE - Entrance thread requested to prime interior (content put us straight into shack)");
					func_17(21);
				}
				else if (func_18(Local_19.f_1) < 80f)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_UPDATE - Coop - Player close enough to clear override");
					func_6(128);
				}
			}
			else if (Local_19 < 25)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_UPDATE - Entrance thread requested to move to exit (content put us straight into shack)");
				func_17(25);
			}
			else if (func_18(Local_19.f_1) < 80f)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_UPDATE - Freeroam - Player close enough to clear override");
				func_6(128);
			}
		}
	}
	func_19(&(Local_19.f_87));
	switch (Local_19)
	{
		case 0:
			func_20();
			func_17(1);
			break;
		case 1:
			if (func_21())
			{
				func_17(2);
			}
			break;
		case 2:
			if (func_22())
			{
				func_17(3);
			}
			break;
		case 3:
			DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_STATE_PROCESS_JOIN_FLOW - entrance flow: ", func_23(Global_1277387.f_1, 0));
			if (func_16(128))
			{
				if (Global_1277387.f_1 == 4)
				{
					DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_STATE_PROCESS_JOIN_FLOW - Entrance thread requested to prime interior (content put us straight into shack)");
					func_17(21);
				}
				else
				{
					DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_STATE_PROCESS_JOIN_FLOW - Entrance thread requested to move to exit (content put us straight into shack)");
					func_17(25);
				}
				return;
			}
			if (Global_1277387.f_1 == 4)
			{
				func_17(21);
				return;
			}
			if (!func_24(PLAYER::PLAYER_ID(), 16) && (Global_1277387.f_1 == 3 || Global_1277387.f_1 == 2))
			{
				if (func_25())
				{
					if (func_26(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_27(8192, 0);
					}
					DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_STATE_PROCESS_JOIN_FLOW - Active on content when receiving posse join command, bailing");
					return;
				}
				func_17(10);
			}
			else
			{
				func_17(8);
			}
			break;
		case 8:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_85) || !GANG::_0x81FB74C83C2ED69F(Local_19.f_85))
			{
				func_17(33);
			}
			func_28(0);
			if (Global_1277387.f_1 == 2 && !func_25())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_STATE_ENTER_WAIT_FOR_BUTTON_PRESS - Moving to posse enter flow since leader entered");
				func_17(10);
				return;
			}
			if (func_29(0))
			{
				if (func_26(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_27(8192, 0);
				}
				func_30(0);
				return;
			}
			else
			{
				func_30(1);
			}
			func_31();
			func_32();
			if (func_33())
			{
				func_34();
				func_30(0);
				func_35(Local_19.f_1);
				func_36(16384);
				func_17(5);
			}
			break;
		case 5:
			func_34();
			if (!func_24(PLAYER::PLAYER_ID(), 128))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_STATE_STREAM_ENTRANCE - Waiting for interior to load");
			}
			else
			{
				if (func_37())
				{
					func_17(4);
				}
				Jump @2370; //curOff = 894
				func_34();
				if (func_38())
				{
					func_39();
					NETWORK::_0x4B05B97BA46F419D(0);
					func_40(1, 1);
					func_17(6);
				}
				Jump @2370; //curOff = 929
				func_34();
				if (func_41())
				{
					func_17(7);
				}
				Jump @2370; //curOff = 948
				func_34();
				if (func_42())
				{
					func_43();
					func_44();
					func_17(9);
				}
				Jump @2370; //curOff = 976
				func_34();
				func_45();
				if (func_46())
				{
					func_47();
					func_17(30);
					return;
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_19.f_6, false)) && Local_19.f_4 == 5)
				{
					func_48(0);
					func_47();
					func_30(1);
					func_49();
					NETWORK::_0x4B05B97BA46F419D(1);
					func_40(1, 0);
					func_50();
					func_17(25);
				}
				Jump @2370; //curOff = 1083
				if (func_51())
				{
					func_30(0);
					func_36(16384);
					if (Global_1277387.f_1 == 2)
					{
						func_17(11);
					}
					else
					{
						func_17(12);
					}
				}
				Jump @2370; //curOff = 1130
				if (!func_52())
				{
					DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_STATE_FOLLOW_DISPLAY_POSSE_WARP_WARNING - Can't continue follow transition, bailing");
					func_53(1);
					func_17(33);
					return;
				}
				if (func_54())
				{
					func_55();
					func_17(13);
				}
				Jump @2370; //curOff = 1183
				if (!func_52())
				{
					DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_STATE_FOLLOW_INIT_INVITE_PLAYER_ENTRANCE - Can't continue follow transition, bailing");
					func_53(1);
					func_17(33);
					return;
				}
				func_56();
				func_17(13);
				Jump @2370; //curOff = 1229
				func_34();
				if (!func_52())
				{
					DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_STATE_FOLLOW_CHECK_SHOULD_RESPAWN_OR_ANIM - Abort entrance flow, player in content/shop");
					func_17(33);
					func_53(1);
					return;
				}
				if (func_42())
				{
					if (func_57())
					{
						func_39();
						func_35(Local_19.f_1);
						func_17(15);
					}
					else
					{
						func_35(Local_19.f_1);
						func_17(19);
					}
				}
				Jump @2370; //curOff = 1318
				func_34();
				if (!func_24(PLAYER::PLAYER_ID(), 128) && !func_58())
				{
					DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_STATE_FOLLOW_STREAM_ENTRANCE - Waiting for interior to load");
				}
				else
				{
					if (func_37())
					{
						func_17(14);
					}
					Jump @2370; //curOff = 1376
					func_34();
					if (func_38())
					{
						NETWORK::_0x4B05B97BA46F419D(0);
						func_40(1, 1);
						func_17(16);
					}
					Jump @2370; //curOff = 1408
					func_34();
					if (func_41())
					{
						func_17(17);
					}
					Jump @2370; //curOff = 1428
					func_34();
					func_43();
					func_44();
					func_17(18);
					Jump @2370; //curOff = 1449
					func_34();
					func_45();
					if (func_46())
					{
						func_47();
						func_17(30);
						return;
					}
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_19.f_6, false)) && Local_19.f_4 == 5)
					{
						func_48(0);
						func_47();
						func_30(1);
						func_49();
						NETWORK::_0x4B05B97BA46F419D(1);
						func_40(1, 0);
						func_50();
						func_59();
						func_17(25);
					}
					Jump @2370; //curOff = 1560
					if (!func_52())
					{
						DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_STATE_FOLLOW_RESPAWN - Abort entrance flow, player can't continue transition");
						func_17(33);
						func_53(1);
						func_48(0);
						return;
					}
					if (func_60(0))
					{
						func_30(1);
						func_61(0);
						func_50();
						func_17(20);
					}
					Jump @2370; //curOff = 1629
					if (func_62())
					{
						func_40(1, 0);
						func_48(0);
						func_59();
						func_17(25);
					}
					Jump @2370; //curOff = 1661
					if (func_51())
					{
						func_36(16384);
						Local_19.f_2 = 2;
						func_17(23);
					}
					Jump @2370; //curOff = 1689
					if (func_60(1))
					{
						func_40(1, 0);
						func_35(Local_19.f_1);
						func_50();
						func_17(22);
					}
					Jump @2370; //curOff = 1725
					if (func_63())
					{
						func_17(24);
					}
					Jump @2370; //curOff = 1741
					if (func_24(PLAYER::PLAYER_ID(), 64) && func_64())
					{
						func_65(32768);
						func_17(25);
					}
					Jump @2370; //curOff = 1780
					func_28(0);
					if (func_46())
					{
						func_17(30);
						return;
					}
					if (func_29(1))
					{
						func_30(0);
						return;
					}
					else
					{
						func_30(1);
					}
					if (func_33())
					{
						func_66(2048);
						func_30(0);
						func_17(26);
					}
					Jump @2370; //curOff = 1853
					if (func_37())
					{
						func_17(27);
					}
					Jump @2370; //curOff = 1869
					if (func_38())
					{
						func_17(28);
					}
					Jump @2370; //curOff = 1885
					func_43();
					func_67(2);
					NETWORK::_0x4B05B97BA46F419D(0);
					func_40(1, 1);
					func_17(29);
					Jump @2370; //curOff = 1915
					func_68();
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_19.f_6, false))
					{
						func_47();
						func_49();
						func_69();
						NETWORK::_0x442B4347B6EC36E8(PLAYER::PLAYER_PED_ID(), 1000, true);
						func_36(32768);
						func_17(32);
					}
					Jump @2370; //curOff = 1985
					if (func_70())
					{
						func_36(32768);
						func_61(1);
						func_71(1);
						func_69();
						func_17(31);
					}
					Jump @2370; //curOff = 2023
					if (func_72())
					{
						func_17(32);
					}
					Jump @2370; //curOff = 2039
					NETWORK::_0x4B05B97BA46F419D(1);
					func_40(0, 0);
					func_73(0);
					func_48(0);
					if (Global_1277387.f_1 == 4)
					{
						func_53(1);
						func_74(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						func_67(32);
						func_67(64);
					}
					else if (Global_1277387.f_1 == 2)
					{
						func_53(1);
					}
					else if (Global_1277387.f_1 == 3)
					{
						func_53(1);
						func_74(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						func_65(128);
					}
					func_17(33);
					Jump @2370; //curOff = 2171
					func_75();
					func_76();
					if (func_16(64))
					{
						if (Global_1277387.f_1 == 4)
						{
							DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_STATE_RESET_DATA - Thread reset in coop flow, resetting it now");
							func_53(1);
							func_74(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						}
						func_6(64);
					}
					func_67(2048);
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_85) || !GANG::_0x81FB74C83C2ED69F(Local_19.f_85))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_STATE_RESET_DATA - Target player no longer active, kill this script");
						func_17(34);
					}
					else if (func_77(128))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_STATE_RESET_DATA - Triggering terminate, leaving shack after invite");
						func_17(34);
					}
					else if (Local_19.f_3 != 0)
					{
						DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_STATE_RESET_DATA - Terminate, forced respawn reason: ", func_78(Local_19.f_3, 0));
						func_17(34);
					}
					else
					{
						func_17(0);
					}
				}
			}
			default:
				break;
	}
}

void func_5()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_CLEANUP - Full thread cleanup start");
	func_75();
	func_28(1);
	func_61(1);
	func_71(1);
	if (Global_1277387.f_1 == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_CLEANUP - In outro flow...");
		if (func_77(32768))
		{
			DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_CLEANUP - Exiting script in coop flow, resetting it now");
			func_53(1);
			func_74(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		}
	}
	else if (Global_1277387.f_1 == 3)
	{
		if (!func_16(8))
		{
			DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_CLEANUP - In invite flow...");
			func_53(1);
			func_74(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_CLEANUP - In invite flow, clearing invite accepted while in shack");
			func_6(8);
		}
	}
	func_73(0);
	func_67(2);
	func_67(32);
	func_67(8);
	func_67(64);
	func_67(2048);
	func_36(32768);
	func_48(0);
	if (func_16(128))
	{
		func_6(128);
	}
	if (func_77(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		func_79(1024);
	}
	if ((Local_19.f_4 == 1 || Local_19.f_4 == 2) || Local_19.f_4 == 4)
	{
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_CLEANUP - Camera state and enter flow state mean we likely are terminating with a busted camera, forcing on");
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	func_80(&(Local_19.f_87));
	HUD::_TEXT_DATABASE_DELETE("MSMP");
	func_40(0, 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_19.f_94[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_19.f_94[iVar0]);
			DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_CLEANUP - deleting ghosting volume# ", iVar0);
		}
		iVar0++;
	}
	if (func_81(2, 8))
	{
		func_82(2, 8, 0);
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_CLEANUP - unghosting local player");
	}
	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_CLEANUP - end cleanup");
}

void func_6(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER__OFFLINE__CLEAR_BIT - Clear bit: ", func_83(iParam0, 0));
	func_84(&(Global_1277599.f_157), iParam0);
}

char* func_7(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NMOON_PROPERTY_INVALID";
		case 0:
			return "NMOON_PROPERTY_BAYOU";
		case 1:
			return "NMOON_PROPERTY_GRIZZLIES";
		case 2:
			return "NMOON_PROPERTY_HENNIGANS";
		case 3:
			return "NMOON_PROPERTY_HEARTLANDS";
		case 4:
			return "NMOON_PROPERTY_TALL_TREES";
		case 5:
			return "NUM_MOONSHINE_PROPERTIES";
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

char* func_8(int iParam0, int iParam1)
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

int func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1277758[iParam0 /*87*/].f_5.f_12;
}

bool func_10()
{
	if ((Local_19 == 9 || Local_19 == 18) || Local_19 == 20)
	{
		return true;
	}
	return false;
}

bool func_11(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_12(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_85(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_86())
	{
		return func_85(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_85(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

void func_13()
{
	if (func_87(888))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_UPDATE_APPROACH_TUTORIAL: tutorial has run already.");
		return;
	}
	if (func_24(PLAYER::PLAYER_ID(), 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_UPDATE_APPROACH_TUTORIAL: player marked as in shack.");
		return;
	}
	if (Local_19 != 8)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_UPDATE_APPROACH_TUTORIAL: entrance has progressed too much to display a tutorial.");
		return;
	}
	if ((Local_19.f_85 != PLAYER::PLAYER_ID() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_UPDATE_APPROACH_TUTORIAL: screen faded.");
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1277599.f_128))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_UPDATE_APPROACH_TUTORIAL: blip doesn't exist - cheap way of knowing something bad has happened or we aren't in a supported state for this msg.");
		return;
	}
	if (func_18(Local_19.f_1) < (80f * 0.5f))
	{
		func_88(888, 0);
	}
}

void func_14()
{
	switch (Local_19.f_97)
	{
		case 0:
			if (func_81(2, 8))
			{
				DEBUG::_0x4423BBAB7EB2B96B(8, 225, "MOON_INSTANCE_UPDATE_GHOSTING - local player is registered as ghosted");
				func_89(1);
			}
			else if (func_90())
			{
			}
			else if (Global_1048584)
			{
			}
			else if (func_92(func_91()))
			{
			}
			else if (!func_93(joaat("GHOSTING_VOLUME")))
			{
			}
			else
			{
				func_94(2, 8);
				func_89(1);
				Jump @292; //curOff = 124
				if (!func_81(2, 8))
				{
					DEBUG::_0x4423BBAB7EB2B96B(8, 225, "MOON_INSTANCE_UPDATE_GHOSTING - local player is not registered as ghosted");
					func_89(0);
				}
				else if (!func_93(joaat("UNGHOSTING_VOLUME")))
				{
					func_82(2, 8, 0);
					func_89(0);
				}
				else if (func_92(func_91()))
				{
					func_82(2, 8, 0);
					func_89(0);
				}
				else if (Global_1048584)
				{
					func_82(2, 8, 0);
					func_89(0);
				}
				else if (func_90())
				{
					func_82(2, 8, 0);
					func_89(0);
				}
				else
				{
					Jump @292; //curOff = 259
					Jump @292; //curOff = 262
					DEBUG::_0x4423BBAB7EB2B96B(168, 225, "MOON_INSTANCE_UPDATE_GHOSTING - ", func_95(Local_19.f_97, 0), " undefined");
				}
			}
			default:
				break;
	}
}

void func_15(int iParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	vector3 vVar10;

	iVar0 = Local_19.f_94[func_96(iParam0)];
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return;
	}
	if (func_97(&(Local_19.f_91)))
	{
		if (!func_98(&(Local_19.f_91), 2f))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_EXTINGUISH_FIRE_OR_EXPLOSION_IN_VOLUME: waiting for cooldown timer.");
			return;
		}
	}
	vVar2 = { VOLUME::_GET_VOLUME_COORDS(iVar0) };
	vVar5 = { VOLUME::_GET_VOLUME_SCALE(iVar0) };
	fVar1 = func_99(vVar5.x, vVar5.y);
	fVar1 = func_99(fVar1, vVar5.z);
	bVar8 = false;
	if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iVar0))
	{
		bVar8 = true;
	}
	if (!bVar8)
	{
		iVar9 = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar2, fVar1);
		if (iVar9 > 0)
		{
			if (FIRE::GET_CLOSEST_FIRE_POS(&vVar10, vVar2))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar0, vVar10))
				{
					bVar8 = true;
				}
			}
		}
	}
	if (bVar8)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_EXTINGUISH_FIRE_OR_EXPLOSION_IN_VOLUME: broadcasting clear.");
		MISC::_0x2FCD528A397E5C88(iVar0, 589824);
		func_100(&(Local_19.f_91));
	}
}

bool func_16(int iParam0)
{
	return func_101(Global_1277599.f_157, iParam0);
}

void func_17(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(680, 225, "MOON_INSTANCE_SET_STATE - new state: ", func_102(iParam0, 0), " old state: ", func_102(Local_19, 0));
	Local_19 = iParam0;
}

float func_18(int iParam0)
{
	return Global_1277599.f_6.f_17[iParam0];
}

void func_19(int* iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (Local_19 <= 9)
			{
				if (func_104(func_103(), 1))
				{
					if (func_105())
					{
						DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_DOOR_PROP_STATE_WAIT - target player has a wreath on their door...");
						iParam0->f_2 = joaat("MP006_P_WREATH01X");
					}
				}
				if (iParam0->f_2 != 0)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 225, "MOON_DOOR_PROP_STATE_WAIT - requesting model... ", func_106(iParam0->f_2, 0));
					STREAMING::REQUEST_MODEL(iParam0->f_2, false);
					iParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
				{
					*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_2, ENTITY::GET_ENTITY_COORDS(iParam0->f_1, true, false) + Vector(10f, 0f, 0f), false, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
						ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*iParam0, iParam0->f_1, 0, 0.55f, 0f, 2f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
						DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_DOOR_PROP_STATE_WAIT - created prop and attached it to the door...");
						iParam0->f_3 = 2;
					}
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_DOOR_PROP_STATE_WAIT - waiting for front door...");
					if (func_107(Local_19.f_1))
					{
						iParam0->f_1 = func_109(func_108(Local_19.f_1, 0, 1), 0, 0);
					}
					else
					{
						DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_DOOR_PROP_STATE_WAIT - invalid location in instance...");
					}
				}
			}
			break;
		case 2:
			if ((Local_19 > 9 || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1)) || !ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				func_80(iParam0);
				DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_DOOR_PROP_STATE_WAIT - cleaned up...");
				iParam0->f_3 = 0;
			}
			break;
	}
}

void func_20()
{
	func_110();
	Local_19.f_85 = func_103();
	Local_19.f_86 = GANG::_0x901E0DC25080C8B9(Local_19.f_85);
	if (GANG::_0x4BE6C13A45CCA8EC(Local_19.f_86) == PLAYER::PLAYER_ID())
	{
		func_65(131072);
	}
	else if (Local_19.f_86 != Global_1275959.f_15)
	{
		func_65(262144);
	}
	func_111();
	func_67(2048);
	DEBUG::_0xA308F935BDECCEC0(168, 225, "MOON_INSTANCE_INIT_DATA - data initialization complete. Cached target: ", PLAYER::GET_PLAYER_NAME(Local_19.f_85), " gang: ", Local_19.f_86);
}

bool func_21()
{
	int iVar0;
	char* sVar1;

	iVar0 = 1;
	sVar1 = "MSMP";
	HUD::_TEXT_DATABASE_REQUEST(sVar1);
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_STREAM_COMMON_DATA - Loading text block: ", sVar1);
		iVar0 = 0;
	}
	return iVar0;
}

bool func_22()
{
	vector3 vVar0[4];
	vector3 vVar13[4];
	bool bVar26;
	int iVar27;

	if (!func_112(Local_19.f_1, &vVar0, &vVar13))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_REGISTER_DOOR_CONTEXTS - Can't register doors");
		return false;
	}
	bVar26 = (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && GANG::_0x149A2751AB66AC02(Global_1275959.f_15) > 1);
	iVar27 = 0;
	while (iVar27 < 4)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_19.f_35[iVar27 /*4*/].f_2))
		{
			DEBUG::_0xA308F935BDECCEC0(936, 225, "MOON_INSTANCE_REGISTER_DOOR_CONTEXTS - created posse door prompt volume: ", func_113(iVar27, 0), " for vector: ", &(vVar0[iVar27 /*3*/]));
			Local_19.f_35[iVar27 /*4*/].f_2 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0[iVar27 /*3*/], 0f, 0f, 0f, vVar13[iVar27 /*3*/]);
		}
		if (!func_114(Local_19.f_35[iVar27 /*4*/]))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_REGISTER_DOOR_CONTEXTS - creating solo door prompt: ", func_113(iVar27, 0));
			Local_19.f_35[iVar27 /*4*/] = func_116(func_115(iVar27, 0), joaat("INPUT_CONTEXT_Y"), Local_19.f_35[iVar27 /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((iVar27 == 0 || iVar27 == 1) && !func_114(Local_19.f_35[iVar27 /*4*/].f_1))
		{
			DEBUG::_0xA308F935BDECCEC0(680, 225, "MOON_INSTANCE_REGISTER_DOOR_CONTEXTS - creating posse door prompt: ", func_113(iVar27, 0), " bLeader: ", MISC::_0xF216F74101968DB0(bVar26));
			Local_19.f_35[iVar27 /*4*/].f_1 = func_116(func_115(iVar27, 1), joaat("INPUT_CONTEXT_B"), Local_19.f_35[iVar27 /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			if (!bVar26)
			{
				func_117(Local_19.f_35[iVar27 /*4*/].f_1, 0, 0);
				func_118(Local_19.f_35[iVar27 /*4*/].f_1, 0, 0, 1);
			}
		}
		if (iVar27 == 0)
		{
			Local_19.f_35[iVar27 /*4*/].f_3 = -2097019783;
		}
		else if (iVar27 == 1)
		{
			Local_19.f_35[iVar27 /*4*/].f_3 = 302114997;
		}
		iVar27++;
	}
	func_65(256);
	return true;
}

char* func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NMOON_ENTRANCE_FLOW_NONE";
		case 1:
			return "NMOON_ENTRANCE_FLOW_APPROACH";
		case 2:
			return "NMOON_ENTRANCE_FLOW_AS_POSSE_MEMBER";
		case 3:
			return "NMOON_ENTRANCE_FLOW_BY_INVITE";
		case 4:
			return "NMOON_ENTRANCE_FLOW_COOP_OUTRO";
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

bool func_24(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_101(Global_1277758[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_25()
{
	int iVar0;

	if (Global_1277599.f_156 == 0)
	{
		Global_1277599.f_156 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1277599.f_156) > 1000)
	{
		Global_1277599.f_156 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return func_101(Global_1277599.f_157, 256);
	}
	if (func_119())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player in jail");
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	if (func_26(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player wanted");
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	if (!Global_1277220.f_44)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player not eligible for freeroam");
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	if (func_92(func_121(0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player in content: ", func_123(func_122(func_121(0))));
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	if (func_124(0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player is using shop");
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player in fast instance");
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	iVar0 = func_125(joaat("BOUNTY_PLAYER"), PLAYER::PLAYER_ID(), 0, 1);
	if (func_126(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player in fetch bounty content");
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	if (func_127())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT - player in animal control");
		func_120(&(Global_1277599.f_157), 256);
		return true;
	}
	func_84(&(Global_1277599.f_157), 256);
	return false;
}

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	DEBUG::_0x1B08D1EB9D8C4931(559240, 111, "IS_PLAYER_WANTED(", iParam0, ", ", bParam1, ", ", bParam2, ", ", bParam3, ")");
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_128(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1275959.f_10)
		{
			if (!Global_1275959.f_11)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - Player ", iParam0, " does not exist");
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - Player ", iParam0, " does not exist");
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - Player ", iParam0, " does not exist");
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : TRUE - IS_LAW_INCIDENT_ACTIVE(", iParam0, ")");
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : FALSE - bRequireActiveIncident AND NOT IS_LAW_INCIDENT_ACTIVE(", iParam0, ")");
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : TRUE - GET_PLAYER_REGISTERED_CRIME(", iParam0, ") AND thisCrime.m_WasReported");
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_PLAYER_WANTED : TRUE - bConsiderActiveWitnesses AND ARE_WITNESSES_ACTIVE(", iParam0, ")");
				return 1;
			}
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 111, "IS_PLAYER_WANTED : FALSE - Default case");
	return 0;
}

void func_27(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return;
	}
	if (func_77(iParam0))
	{
		return;
	}
	if (func_129() || func_130())
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(Local_19.f_35[iVar0 /*4*/].f_2))
				{
				}
				else if (!func_114(Local_19.f_35[iVar0 /*4*/]))
				{
				}
				else if (!func_131(Global_33, Local_19.f_35[iVar0 /*4*/].f_2, 0, 1, 0))
				{
				}
				else if (func_132(MISC::_CREATE_VAR_STRING(2, "MS_WARN_WANTED_NO_ENTRY"), 10000, 0, 0, 0, 1) != 0)
				{
					func_65(iParam0);
				}
				iVar0++;
			}
			break;
	}
}

void func_28(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0)
	{
		if (func_77(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_79(64);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_114(Local_19.f_35[iVar1 /*4*/]) && func_133(Local_19.f_35[iVar1 /*4*/], 1))
			{
				DEBUG::_0x4DC69742196F818A(40, 225, "MOON_INSTANCE_TOGGLE_DYNAMIC_REST - door prompt showing: ", func_113(iVar1, 0));
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar0)
		{
			if (!func_77(64))
			{
				SCRIPTS::_0x76CBCD9EADC00955();
				func_65(64);
			}
		}
		else if (func_77(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_79(64);
		}
	}
}

bool func_29(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - bOnlyCheckExit: ", MISC::_0xF216F74101968DB0(bParam0));
		if (Global_1277220.f_42)
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - GFH anim scene playing");
			return true;
		}
		return false;
	}
	if (Global_1277599.f_131.f_4)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - BLOCKED");
		return true;
	}
	if (func_134(512))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Content lock");
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player doesn't exist/is dead");
		return true;
	}
	if (PED::_0xB655DB7582AEC805(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player incapaciated");
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player on mount");
		return true;
	}
	if (PED::IS_PED_ON_VEHICLE(Global_33, false) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player on/in vehicle");
		return true;
	}
	if (PED::IS_PED_RAGDOLL(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player in ragdoll");
		return true;
	}
	if (PED::_IS_PED_LASSOED(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player lassoed");
		return true;
	}
	if (PED::_IS_PED_HOGTIED(Global_33) || PED::_IS_PED_BEING_HOGTIED(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player hogtied");
		return true;
	}
	if (PED::_IS_PED_HOGTYING(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player hogtying something");
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player carrying something");
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player on fire");
		return true;
	}
	if (PED::IS_PED_CLIMBING(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player climbing");
		return true;
	}
	if (TASK::_0x038B1F1674F0E242(Global_33))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player leading horse");
		return true;
	}
	if (func_135())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player is using the camera");
		return true;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player aiming");
		return true;
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_33);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - Player leading horse");
		return true;
	}
	if (func_25())
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_SHOULD_PROMPTS_BE_DISABLED - NET_MOONSHINE_MANAGER__PLAYER_SHOULD_ENTRANCE_BE_DISABLED_DUE_TO_CONTENT");
		return true;
	}
	return false;
}

void func_30(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (func_77(256))
		{
			return;
		}
	}
	else if (!func_77(256))
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_TOGGLE_PROMPTS - Prompts set to visbile: ", MISC::_0xF216F74101968DB0(bParam0));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_114(Local_19.f_35[iVar0 /*4*/]))
		{
			func_117(Local_19.f_35[iVar0 /*4*/], bParam0, 0);
			func_118(Local_19.f_35[iVar0 /*4*/], bParam0, 0, 1);
		}
		if (func_114(Local_19.f_35[iVar0 /*4*/].f_1))
		{
			func_117(Local_19.f_35[iVar0 /*4*/].f_1, bParam0, 0);
			func_118(Local_19.f_35[iVar0 /*4*/].f_1, bParam0, 0, 1);
		}
		iVar0++;
	}
	if (bParam0)
	{
		func_65(256);
	}
	else
	{
		func_79(256);
	}
}

void func_31()
{
	bool bVar0;
	int iVar1;
	struct<7> Var2[7];
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;

	if (!func_77(256))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		iVar1 = GANG::_0xD1BF325C8252A982(Global_1275959.f_15, &Var2);
		if (iVar1 > 1)
		{
			iVar53 = iVar1;
			iVar52 = 0;
			while (iVar52 <= (iVar1 - 1))
			{
				if (func_136(Var2[iVar52 /*7*/]))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var2[iVar52 /*7*/]));
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
						if (func_24(iVar54, 1))
						{
							iVar53 = (iVar53 - 1);
						}
						else if (func_137(1048576, iVar54))
						{
							iVar53 = (iVar53 - 1);
						}
						else
						{
							iVar52++;
						}
						if (iVar53 > 1)
						{
							bVar0 = true;
						}
						iVar55 = 0;
						while (iVar55 <= 1)
						{
							if (func_114(Local_19.f_35[iVar55 /*4*/].f_1))
							{
								if (bVar0)
								{
									if (!func_138(Local_19.f_35[iVar55 /*4*/].f_1, 0))
									{
										func_118(Local_19.f_35[iVar55 /*4*/].f_1, 1, 0, 1);
										func_117(Local_19.f_35[iVar55 /*4*/].f_1, 1, 1);
									}
								}
								else if (func_138(Local_19.f_35[iVar55 /*4*/].f_1, 0))
								{
									func_118(Local_19.f_35[iVar55 /*4*/].f_1, 0, 0, 1);
									func_117(Local_19.f_35[iVar55 /*4*/].f_1, 0, 1);
								}
							}
							iVar55++;
						}
					}
				}
			}
		}
	}
}

void func_32()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == 0 || iVar0 == 1)
		{
			if (func_138(Local_19.f_35[iVar0 /*4*/], 0))
			{
				iVar1 = func_103();
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
				{
					HUD::_0x8B55B324A9123F6B(Local_19.f_35[iVar0 /*4*/].f_3, Local_19.f_35[iVar0 /*4*/].f_2, MISC::_CREATE_VAR_STRING(10, "MS_ENTER_PROMPT_GROUP", func_140(PLAYER::GET_PLAYER_NAME(iVar1), func_139(iVar1, 1, -1, 0))), 3, 1, 0);
					HUD::_UIPROMPT_SET_GROUP(func_141(Local_19.f_35[iVar0 /*4*/]), Local_19.f_35[iVar0 /*4*/].f_3, 0);
					if (func_138(Local_19.f_35[iVar0 /*4*/].f_1, 0))
					{
						HUD::_UIPROMPT_SET_GROUP(func_141(Local_19.f_35[iVar0 /*4*/].f_1), Local_19.f_35[iVar0 /*4*/].f_3, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_33()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_114(Local_19.f_35[iVar0 /*4*/]) && func_142(Local_19.f_35[iVar0 /*4*/], 1))
		{
			Local_19.f_2 = func_143(iVar0);
			func_144(Local_19.f_2);
			DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_IS_DOOR_BUTTON_PRESSED - Door button (Solo) pressed, entrance: ", func_145(Local_19.f_2, 0));
			if (iVar0 == 0 || iVar0 == 1)
			{
				func_65(8);
			}
			else
			{
				func_65(32);
			}
			return true;
		}
		if (func_114(Local_19.f_35[iVar0 /*4*/].f_1) && func_142(Local_19.f_35[iVar0 /*4*/].f_1, 1))
		{
			Local_19.f_2 = func_143(iVar0);
			func_144(Local_19.f_2);
			DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_IS_DOOR_BUTTON_PRESSED - Door button (Posse) pressed, entrance: ", func_145(Local_19.f_2, 0));
			func_65(16);
			func_66(2);
			func_146();
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_34()
{
	func_147();
	func_148(0);
	if (func_149())
	{
		func_150();
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PED::SET_PED_RESET_FLAG(Global_33, 168, true);
	PED::SET_PED_RESET_FLAG(Global_33, 108, true);
	func_48(1);
}

void func_35(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER_SET_PLAYER_AS_ENTERED_SHACK - Player entered: ", func_7(iParam0, 0));
	Global_1277599.f_131 = iParam0;
	func_36(16);
	func_66(1);
}

void func_36(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER__OFFLINE__SET_BIT - Set bit: ", func_83(iParam0, 0));
	func_120(&(Global_1277599.f_157), iParam0);
}

bool func_37()
{
	float fVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;

	if ((!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33)) || func_151(255))
	{
		return false;
	}
	if (!func_77(1024) && STREAMING::_0xCF45DF50C7775F2A())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Existing load scene, stopping it now");
		STREAMING::_0x5A8B01199C3E79C3();
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Invalid warp entrance!");
		return true;
	}
	if (Local_19.f_2 == 2 || Local_19.f_2 == 3)
	{
		fVar0 = 40f;
	}
	else
	{
		fVar0 = 200f;
	}
	vVar1 = { func_152(Local_19.f_29[Local_19.f_2]) };
	if (!func_77(1024))
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			DEBUG::_0xF0783374333FD8CE(7096, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Load scene now, pos: ", &(Local_19.f_13[Local_19.f_2 /*3*/]), " direction: ", &vVar1, " stream dist: ", fVar0);
			Local_19.f_11 = MISC::_GET_SYSTEM_TIME();
			STREAMING::_0x387AD749E3B69B70(Local_19.f_13[Local_19.f_2 /*3*/], vVar1, fVar0, 0);
			func_65(1024);
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Existing load scene, stopping it now; but not caught?");
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	else if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Load scene no longer active, but not loaded, moving on");
		bVar4 = true;
	}
	else if (STREAMING::_0x0909F71B5C070797())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Scene loaded");
		bVar4 = true;
	}
	else
	{
		iVar5 = Global_1901988.f_800.f_11;
		if (Local_19.f_11 == 0)
		{
			Local_19.f_11 = MISC::_GET_SYSTEM_TIME();
		}
		else if ((MISC::_GET_SYSTEM_TIME() - Local_19.f_11) > iVar5)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Waited for load scene, can't wait anymore; time elapsed: ", iVar5);
			bVar4 = true;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(168, 225, "MOON_INSTANCE_STREAM_WARP_POSITION - Stream complete: ", MISC::_0xF216F74101968DB0(bVar4), " timer: ", (MISC::_GET_SYSTEM_TIME() - Local_19.f_11));
	return bVar4;
}

bool func_38()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;

	sVar0 = func_153();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_LOAD_ANIM_SCENE - Anim scene is empty! Complete failure");
		return true;
	}
	sVar1 = func_155(func_154());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_LOAD_ANIM_SCENE - Anim playlist is empty! Complete failure");
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOAD_ANIM_SCENE - Creating anim scene");
		Local_19.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
	}
	bVar2 = true;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_19.f_6, true, false))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 225, "MOON_INSTANCE_LOAD_ANIM_SCENE - Loading Anim Scene: ", sVar0, " playlist: ", sVar1);
		bVar2 = false;
	}
	if (!bVar2 && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_19.f_6, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_6);
		DEBUG::_0xA308F935BDECCEC0(680, 225, "MOON_INSTANCE_LOAD_ANIM_SCENE - Loading Anim Scene: ", sVar0, " playlist: ", sVar1);
		return false;
	}
	if (bVar2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOAD_ANIM_SCENE - Anim scene loaded");
		return true;
	}
	return false;
}

void func_39()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;

	if (Local_19.f_9 <= 0)
	{
		if (func_77(16) || Global_1277387.f_1 == 2)
		{
			Local_19.f_9 = GANG::_0x149A2751AB66AC02(Global_1275959.f_15);
			DEBUG::_0xA308F935BDECCEC0(8, 225, "NET_MOON_INSTANCE_CREATE_PLAYER_LIST_FOR_SCENE - Num clones to spawn: ", Local_19.f_9);
			GANG::_0xD1BF325C8252A982(Global_1275959.f_15, &Var0);
			iVar53 = -1;
			iVar52 = 0;
			while (iVar52 <= (Local_19.f_9 - 1))
			{
				iVar50 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar52 /*7*/]));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar50))
				{
					bVar54 = GANG::_0x424B17A7DC5C90BC(iVar50);
					if (bVar54 || func_24(iVar50, 1) == 0)
					{
						if (func_24(iVar50, 512))
						{
							Local_19.f_52[iVar52 /*4*/] = iVar50;
							DEBUG::_0xA308F935BDECCEC0(648, 225, "NET_MOON_INSTANCE_CREATE_PLAYER_LIST_FOR_SCENE - YES - index: ", iVar52, " player: ", PLAYER::GET_PLAYER_NAME(Local_19.f_52[iVar52 /*4*/]));
							if (bVar54)
							{
								iVar53 = iVar52;
								iVar51 = iVar50;
							}
							Local_19.f_52[iVar52 /*4*/].f_3 = 1;
						}
						else
						{
							DEBUG::_0xA308F935BDECCEC0(2696, 225, "NET_MOON_INSTANCE_CREATE_PLAYER_LIST_FOR_SCENE - index: ", iVar52, " player: ", PLAYER::GET_PLAYER_NAME(Local_19.f_52[iVar52 /*4*/]), " can't receive invites");
							Local_19.f_52[iVar52 /*4*/].f_3 = 0;
						}
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(2696, 225, "NET_MOON_INSTANCE_CREATE_PLAYER_LIST_FOR_SCENE - index: ", iVar52, " player: ", PLAYER::GET_PLAYER_NAME(Local_19.f_52[iVar52 /*4*/]), " !leader and in shack");
						Local_19.f_52[iVar52 /*4*/].f_3 = 0;
					}
				}
				iVar52++;
			}
			if (iVar53 != -1)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 225, "NET_MOON_INSTANCE_CREATE_PLAYER_LIST_FOR_SCENE - Swapping index: ", iVar53);
				Local_19.f_52[iVar53 /*4*/] = Local_19.f_52[0 /*4*/];
				Local_19.f_52[iVar53 /*4*/].f_3 = Local_19.f_52[0 /*4*/].f_3;
				Local_19.f_52[0 /*4*/] = iVar51;
				Local_19.f_52[0 /*4*/].f_3 = 1;
			}
		}
		else if (func_77(8))
		{
			Local_19.f_9 = 1;
			Local_19.f_52[0 /*4*/] = PLAYER::PLAYER_ID();
		}
	}
}

int func_40(bool bParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	if (bParam0 || bParam1)
	{
		if (bParam1)
		{
			if (func_16(2))
			{
				func_6(2);
			}
			if (!func_24(PLAYER::PLAYER_ID(), 256))
			{
				func_66(256);
			}
			if (!func_16(4))
			{
				iVar0 = func_156(Global_1277387.f_200, 1);
				if (iVar0 == -1)
				{
					DEBUG::_0x83407B92D46F25C3(8, 225, "NET_MOONSHINE_PLAYER__TRIGGER_INSTANCE_BEHAVIOR - Invalid shop instance, exiting");
					return 0;
				}
				func_36(4);
				UNK_0x355E72323AEE83CC(225, 6);
				DEBUG::_0xF0783374333FD8CE(10888, 225, "NET_MOONSHINE_PLAYER__TRIGGER_INSTANCE_BEHAVIOR - START - SHOP instanceID: ", sVar1, " bActivateInstance: ", MISC::_0xF216F74101968DB0(bParam0), " bRunShopInstance: ", MISC::_0xF216F74101968DB0(bParam1));
			}
		}
		else
		{
			if (func_16(4))
			{
				func_6(4);
			}
			if (func_24(PLAYER::PLAYER_ID(), 256))
			{
				func_67(256);
			}
			if (!func_16(2))
			{
				iVar0 = func_156(Global_1277387.f_200, 1);
				if (iVar0 == -1)
				{
					DEBUG::_0x83407B92D46F25C3(8, 225, "NET_MOONSHINE_PLAYER__TRIGGER_INSTANCE_BEHAVIOR - Invalid instance, exiting");
					return 0;
				}
				func_36(2);
				UNK_0x355E72323AEE83CC(225, 6);
				DEBUG::_0xF0783374333FD8CE(10888, 225, "NET_MOONSHINE_PLAYER__TRIGGER_INSTANCE_BEHAVIOR - START - instanceID: ", sVar1, " bActivateInstance: ", MISC::_0xF216F74101968DB0(bParam0), " bRunShopInstance: ", MISC::_0xF216F74101968DB0(bParam1));
			}
		}
		sVar1 = iVar0;
		Global_1277758[Global_1275959 /*87*/].f_3 = iVar0;
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, true, sVar1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false, sVar1, false);
	}
	else if (func_16(2) || func_16(4))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		Global_1277758[Global_1275959 /*87*/].f_3 = -1;
		UNK_0x355E72323AEE83CC(225, 6);
		DEBUG::_0xF0783374333FD8CE(680, 225, "NET_MOONSHINE_PLAYER__TRIGGER_INSTANCE_BEHAVIOR - END - bActivateInstance: ", MISC::_0xF216F74101968DB0(bParam0), " bRunShopInstance: ", MISC::_0xF216F74101968DB0(bParam1));
		func_6(2);
		func_6(4);
		if (func_24(PLAYER::PLAYER_ID(), 256))
		{
			func_67(256);
		}
	}
	return 1;
}

bool func_41()
{
	int iVar0;

	if (Local_19.f_8 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[Local_19.f_8 /*4*/].f_1))
		{
			DEBUG::_0xA308F935BDECCEC0(136, 225, "MOON_INSTANCE_CREATE_PLAYER_PEDS_FOR_SCENE - index: ", Local_19.f_8, " clone already exists or is local player");
			Local_19.f_8++;
		}
		else if (Local_19.f_52[Local_19.f_8 /*4*/].f_3 == 0)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 225, "MOON_INSTANCE_CREATE_PLAYER_PEDS_FOR_SCENE - index: ", Local_19.f_8, " won't be created, already inside shack");
			Local_19.f_8++;
		}
		else if (PLAYER::PLAYER_ID() == Local_19.f_52[Local_19.f_8 /*4*/])
		{
			Local_19.f_52[Local_19.f_8 /*4*/].f_1 = Global_33;
			Local_19.f_52[Local_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(Global_33);
			DEBUG::_0xF0783374333FD8CE(40, 225, "MOON_INSTANCE_CREATE_PLAYER_PEDS_FOR_SCENE - Got local player ped to be used in anim scene. Male: ", MISC::_0xF216F74101968DB0(Local_19.f_52[Local_19.f_8 /*4*/].f_2));
			Local_19.f_8++;
			return false;
		}
		else
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_19.f_52[Local_19.f_8 /*4*/]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				DEBUG::_0xD9911C7B5F8CD69C(136, 225, "MOON_INSTANCE_CREATE_PLAYER_PEDS_FOR_SCENE - ped for player index: ", Local_19.f_8, " doesn't exist! Skipping");
				Local_19.f_8++;
				return false;
			}
			Local_19.f_52[Local_19.f_8 /*4*/].f_1 = PED::CLONE_PED(iVar0, 0f, true, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[Local_19.f_8 /*4*/].f_1))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_19.f_52[Local_19.f_8 /*4*/].f_1, false);
				ENTITY::SET_ENTITY_COLLISION(Local_19.f_52[Local_19.f_8 /*4*/].f_1, false, false);
				Local_19.f_52[Local_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(iVar0);
				DEBUG::_0xF0783374333FD8CE(680, 225, "MOON_INSTANCE_CREATE_PLAYER_PEDS_FOR_SCENE - Created player clone: ", PLAYER::GET_PLAYER_NAME(Local_19.f_52[Local_19.f_8 /*4*/]), " male: ", MISC::_0xF216F74101968DB0(Local_19.f_52[Local_19.f_8 /*4*/].f_2));
				Local_19.f_8++;
				return false;
			}
		}
	}
	return Local_19.f_8 >= Local_19.f_9;
}

bool func_42()
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (!func_157(Global_33))
		{
			if (func_158(iVar0))
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
			else
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_33, iVar0, 0f, 0f, 0f, 2f, 9);
			}
		}
		return false;
	}
	return true;
}

void func_43()
{
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_DOORS_GET_DOOR_ENTITIES - Getting warp out doors now");
			Local_19.f_83 = func_109(func_108(Local_19.f_1, 2, 0), 0, 0);
			Local_19.f_84 = func_109(func_108(Local_19.f_1, 3, 0), 0, 0);
			break;
		default:
			DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_DOORS_GET_DOOR_ENTITIES - Getting warp in doors now");
			Local_19.f_83 = func_109(func_108(Local_19.f_1, 0, 1), 0, 0);
			Local_19.f_84 = func_109(func_108(Local_19.f_1, 1, 1), 0, 0);
			break;
	}
}

void func_44()
{
	int iVar0;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_PREPARE_PLAYER_FOR_ANIM - Clearing player fire");
		FIRE::STOP_ENTITY_FIRE(Global_33, 0);
	}
	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_PREPARE_PLAYER_FOR_ANIM - Caching Players mount Exists");
		func_65(65536);
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_33);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_PREPARE_PLAYER_FOR_ANIM - Canceling player tasks immediately");
		func_65(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_PREPARE_PLAYER_FOR_ANIM - Pop player of horse");
		func_65(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, true, true);
	}
	if (PED::_IS_PED_HOGTIED(Global_33) || PED::_IS_PED_BEING_HOGTIED(Global_33))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_PREPARE_PLAYER_FOR_ANIM - Clear ped tasks on hogtied player");
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
}

void func_45()
{
	int iVar0;
	float fVar1;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Anim scene does not exist! Bail");
		func_17(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || func_151(255))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Delaying anim scene since player is dead");
		return;
	}
	if (!func_42())
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Delaying anim scene due to carrying.");
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - We are in a vehicle, warping out of it.");
		PED::_0xE0B61ED8BB37712F(Global_33);
		return;
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - We are on a mount, warping off of it.");
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_19.f_6, false) && !func_77(1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Anim scene is not yet running, start it");
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_6, func_159(), func_160(), 2);
		ANIMSCENE::SET_ANIM_SCENE_INT(Local_19.f_6, "CameraIndex", func_161(), false);
		if (func_77(8) && ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			if (PED::IS_PED_MALE(Global_33))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_MALE_01", Global_33, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_FEMALE_01", Global_33, 0);
			}
		}
		if (Local_19.f_2 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Anim front door registered");
			}
		}
		else if (Local_19.f_2 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_84))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Anim side door registered");
			}
		}
		if (!func_77(8))
		{
			iVar0 = 0;
			while (iVar0 <= (Local_19.f_9 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[iVar0 /*4*/].f_1))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Setting anim scene entity (and visible) for player clone: ", iVar0);
					ENTITY::SET_ENTITY_VISIBLE(Local_19.f_52[iVar0 /*4*/].f_1, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, func_162(iVar0, Local_19.f_52[iVar0 /*4*/].f_2), Local_19.f_52[iVar0 /*4*/].f_1, 0);
				}
				iVar0++;
			}
		}
		ANIMSCENE::START_ANIM_SCENE(Local_19.f_6);
		func_65(1);
		func_79(16);
		func_79(8);
		func_163(1);
		return;
	}
	fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_19.f_6);
	DEBUG::_0x4DC69742196F818A(24, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - fPhase: ", fVar1);
	if (fVar1 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			func_164(1);
		}
	}
	else if (fVar1 > 0.85f)
	{
		if (!func_77(4096))
		{
			func_65(4096);
			func_61(0);
		}
	}
	switch (Local_19.f_4)
	{
		case 1:
			if (CAM::IS_SCREEN_FADING_OUT())
			{
				DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Screen fading out unexpectedly, this will look weird");
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_163(2);
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_19.f_6, false))
			{
				DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Delaying fade in until the anim scene is properly running");
			}
			else
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_INSTANCE_RUN_ENTER_SCENE_UPDATE - Fading camera in from not-faded-out, this will look weird");
				}
				if (!func_16(33554432))
				{
					DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_ENTER_CAMERA_FADE_IN: skipping fade in due to NMOON_OFFLINE_BIT_MOONSHINE_PROPERTY_INTERIOR_UPDATE");
					CAM::DO_SCREEN_FADE_IN(250);
				}
				func_163(3);
				Jump @905; //curOff = 801
				if (CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					Local_19.f_11 = MISC::_GET_SYSTEM_TIME();
					func_163(4);
				}
				Jump @905; //curOff = 829
				if (STREAMING::_0x0909F71B5C070797() || (MISC::_GET_SYSTEM_TIME() - Local_19.f_11) > Global_1901988.f_800.f_11)
				{
					if (!func_16(33554432))
					{
						DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_ENTER_CAMERA_FADE_FOR_LOADSCENE: skipping fade in due to NMOON_OFFLINE_BIT_MOONSHINE_PROPERTY_INTERIOR_UPDATE");
						CAM::DO_SCREEN_FADE_IN(250);
					}
					func_163(5);
				}
			}
			default:
				break;
	}
}

bool func_46()
{
	int iVar0;
	int iVar1;

	if (Global_1277599.f_131.f_3)
	{
		return true;
	}
	if (func_134(512))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - content lock active");
		Local_19.f_3 = 1;
		return true;
	}
	iVar0 = Local_19.f_85;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - target player not active");
		Local_19.f_3 = 1;
		return true;
	}
	if (Global_1275959.f_15 != Local_19.f_86 && !func_77(262144))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - Gang ID: ", Global_1275959.f_15, " - Cached ID: ", Local_19.f_86);
		if (func_77(131072) && GANG::_0x4BE6C13A45CCA8EC(Global_1275959.f_15) == PLAYER::PLAYER_ID())
		{
			func_165();
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - playerTarget has joined a different posse.");
			return true;
		}
	}
	if (GANG::_0x901E0DC25080C8B9(iVar0) != Global_1275959.f_15)
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - playerTarget has changed posse...");
		if (func_9(iVar0, 1) != Local_19.f_1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - playerTarget has joined a posse and target PROPERTY not this one");
			return true;
		}
		if (func_156(iVar0, 1) != Global_1277758[Global_1275959 /*87*/].f_3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - playerTarget has joined a posse and target INSTANCE not this one");
			return true;
		}
	}
	if ((iVar0 != PLAYER::PLAYER_ID() && GANG::_0x901E0DC25080C8B9(iVar0) != Global_1275959.f_15) && (Global_1277387.f_1 == 2 || Global_1277387.f_1 == 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - playerTarget's posse has been disbanded.");
		Local_19.f_3 = 3;
		return true;
	}
	iVar1 = func_9(Global_1277387.f_200, 1);
	if (Local_19.f_1 != iVar1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - target shack changed location, force out now");
		Local_19.f_3 = 2;
		return true;
	}
	if (func_166())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_LOCAL_PLAYER_FORCED_OUT - A Posse Versus mode is running");
		Local_19.f_3 = 4;
		return true;
	}
	return false;
}

void func_47()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_CLEANUP_ANIM_SCENE - Deleting anim scene peds");
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[iVar0 /*4*/].f_1) && Local_19.f_52[iVar0 /*4*/].f_1 != Global_33)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_19.f_6, func_162(iVar0, 1), Local_19.f_52[iVar0 /*4*/].f_1);
			PED::DELETE_PED(&(Local_19.f_52[iVar0 /*4*/].f_1));
		}
		iVar0++;
	}
	Local_19.f_83 = 0;
	Local_19.f_84 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_CLEANUP_ANIM_SCENE - Deleting anim scene");
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_19.f_6);
	}
	if (func_77(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_CLEANUP_ANIM_SCENE - Stopping load scene");
			STREAMING::_0x5A8B01199C3E79C3();
		}
		func_79(1024);
	}
	Local_19.f_11 = 0;
	func_79(1);
	Local_19.f_6 = 0;
}

void func_48(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77(16384))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			func_65(16384);
			UNK_0x355E72323AEE83CC(225, 7);
		}
	}
	else if (func_77(16384))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		func_79(16384);
		UNK_0x355E72323AEE83CC(225, 7);
	}
}

void func_49()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 225, "MOON_INSTANCE_DOORS_LOCK_SHUT - Door: ", func_113(iVar0, 0), " locked and shut");
		func_167(func_108(Local_19.f_1, iVar0, 0), 0f, 1);
		iVar0++;
	}
}

void func_50()
{
	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_CLEANUP_PLAYER_MOUNT");
	func_168();
	func_169();
}

bool func_51()
{
	if (Global_1277599.f_29.f_2 != Local_19.f_1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 225, "MOON_INSTANCE_IS_INTERIOR_LOADED - IPL property not our closest follow location; location: ", func_7(Global_1277599.f_29.f_2, 0));
		return false;
	}
	if (Global_1277599.f_29.f_3 != 2)
	{
		DEBUG::_0x4DC69742196F818A(40, 225, "MOON_INSTANCE_IS_INTERIOR_LOADED - Interior not loaded; state: ", func_170(Global_1277599.f_29.f_3, 0));
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_IS_INTERIOR_LOADED - Interior fully loaded");
	return true;
}

bool func_52()
{
	return (Global_1277387.f_1 != 1 && !func_25());
}

void func_53(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_ENTRANCE__ONLINE__SET_FLOW_TYPE - New flow type: ", func_23(iParam0, 0));
	Global_1277387.f_1 = iParam0;
}

bool func_54()
{
	int iVar0;
	var uVar1;
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (Local_19.f_81 == 0)
	{
		if (func_171())
		{
			DEBUG::_0xF0783374333FD8CE(8, 225, "MOON_INSTANCE_HAS_DISPLAYED_WARNING - Clearing help channel now for join warning!");
			func_172(1);
			return false;
		}
		else
		{
			iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (GANG::_0xD6F6ACF4392187FB(iVar0))
			{
				if (GANG::_0xCE88A261DCBBA0D9(iVar0, &uVar1))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_HAS_DISPLAYED_WARNING - Displaying join warning now");
					iVar8 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar1);
					if (PED::_IS_PED_CARRYING(Global_33))
					{
						Local_19.f_81 = func_132(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN_CARRY", func_140(PLAYER::GET_PLAYER_NAME(iVar8), func_139(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
					else
					{
						Local_19.f_81 = func_132(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN", func_140(PLAYER::GET_PLAYER_NAME(iVar8), func_139(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
				}
			}
		}
	}
	if (Local_19.f_10 == 0)
	{
		Local_19.f_10 = MISC::GET_GAME_TIMER();
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_HAS_DISPLAYED_WARNING - Getting display timer now: ", Local_19.f_10);
	}
	else if ((MISC::GET_GAME_TIMER() - Local_19.f_10) >= 11000)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_HAS_DISPLAYED_WARNING - Help timer complete");
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 225, "MOON_INSTANCE_HAS_DISPLAYED_WARNING - waiting on help timer to expire...");
	return false;
}

void func_55()
{
	int iVar0;

	iVar0 = Global_1277387.f_200;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_MATCH_LEADER_ENTRANCE_POINT - Invalid target, defaulting to warp interior ground front");
		Local_19.f_2 = 2;
		return;
	}
	Local_19.f_2 = Global_1277758[iVar0 /*87*/].f_5.f_13;
	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_MATCH_LEADER_ENTRANCE_POINT - Matched leader's entrance point: ", func_145(Local_19.f_2, 0));
}

void func_56()
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
	{
		Local_19.f_2 = 2;
	}
	else
	{
		Local_19.f_2 = 3;
	}
	func_65(8);
	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_INIT_INVITE_PLAYER_ENTRANCE - Invite entrance: ", func_145(Local_19.f_2, 0));
}

bool func_57()
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		fVar0 = BUILTIN::VDIST(Global_34, func_173(Local_19.f_1));
		if (fVar0 < 200f)
		{
			DEBUG::_0xA308F935BDECCEC0(24, 225, "MOON_INSTANCE_IS_PLAYER_CLOSE_ENOUGH_FOR_ANIM - Close enough for anim: ", fVar0);
			return true;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_IS_PLAYER_CLOSE_ENOUGH_FOR_ANIM - Not close enough or not valid");
	return false;
}

bool func_58()
{
	if (Local_19.f_12 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_IS_INTERIOR_LOAD_TIMER_COMPLETE - Starting streaming timer now");
		Local_19.f_12 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Local_19.f_12) > 10000)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_IS_INTERIOR_LOAD_TIMER_COMPLETE - Streaming surpassed duration: ", 10000);
		return true;
	}
	return false;
}

void func_59()
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (func_158(iVar0))
		{
			ENTITY::_DELETE_CARRIABLE(&iVar0);
		}
	}
}

bool func_60(bool bParam0)
{
	if ((func_151(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RESPAWN_PLAYER_INSIDE_SHACK - Waiting for player to exit respawn sequence");
		return false;
	}
	if (!func_42())
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RESPAWN_PLAYER_INSIDE_SHACK - Waiting for player to put down carriables");
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RESPAWN_PLAYER_INSIDE_SHACK - We are in a vehicle, warping out of it.");
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::_0xE0B61ED8BB37712F(PLAYER::PLAYER_PED_ID());
		}
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RESPAWN_PLAYER_INSIDE_SHACK - We are on a mount, warping off of it.");
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_RESPAWN_PLAYER_INSIDE_SHACK - Invalid entrance point, setting front enter as default");
		func_174(Local_19.f_13[2 /*3*/], Local_19.f_29[2]);
	}
	else
	{
		func_174(Local_19.f_13[Local_19.f_2 /*3*/], Local_19.f_29[Local_19.f_2]);
	}
	if (bParam0)
	{
		func_175(1);
		func_176(1);
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RESPAWN_PLAYER_INSIDE_SHACK - Disabling fades in respawn.");
	}
	func_177(1);
	func_178(145);
	func_179(1, 1);
	return true;
}

void func_61(bool bParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_PLAYER__SET_LONGARM_VISIBILITY - Setting longarm weapons visible: ", MISC::_0xF216F74101968DB0(bParam0));
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (bParam0)
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 1, bParam0);
		}
		else
		{
			WEAPON::_0x94A3C1B804D291EC(Global_33, 0, 0, 0, 1);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 1, bParam0);
		}
	}
}

bool func_62()
{
	if ((func_151(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_HAS_RESPAWNED - Waiting for player to exit respawn sequence");
		return false;
	}
	return true;
}

bool func_63()
{
	if (func_151(255))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_COOP_SET_CUTSCENE_INSTANCE_BEHAVIOR - Waiting on respawn sequence to end");
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_COOP_SET_CUTSCENE_INSTANCE_BEHAVIOR - Waiting on player to exist");
		return false;
	}
	if (!func_77(512))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_COOP_SET_CUTSCENE_INSTANCE_BEHAVIOR - Setting player ped and longarms invisible");
		if (ENTITY::IS_ENTITY_VISIBLE(Global_33))
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_33, false);
		}
		func_71(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		func_40(1, 1);
		func_65(512);
		return true;
	}
	return false;
}

bool func_64()
{
	if (func_151(255))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_COOP_IS_CUTSCENE_RELEASED - Waiting on respawn sequence to end");
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_COOP_IS_CUTSCENE_RELEASED - Waiting on player to exist");
		return false;
	}
	if (func_77(512))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_COOP_IS_CUTSCENE_RELEASED - Resetting cutscene data");
		func_61(0);
		func_71(1);
		func_180(1, 2);
		func_40(1, 0);
		func_79(512);
	}
	return true;
}

void func_65(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_SET_BIT - setting: ", func_181(iParam0, 0));
	func_120(&(Local_19.f_5), iParam0);
}

void func_66(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER__SET_CLIENT_BIT - Set bit: ", func_182(iParam0, 0));
	func_120(&(Global_1277758[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

void func_67(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER__CLEAR_CLIENT_BIT - Clear bit: ", func_182(iParam0, 0));
	func_84(&(Global_1277758[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

void func_68()
{
	float fVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "MOON_INSTANCE_RUN_EXIT_SCENE_UPDATE - Anim scene does not exist! Bail");
		func_17(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || func_151(255))
	{
		DEBUG::_0x4DC69742196F818A(8, 225, "MOON_INSTANCE_RUN_EXIT_SCENE_UPDATE - Delaying anim scene since player is dead");
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_19.f_6, false) && !func_77(1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_EXIT_SCENE_UPDATE - Anim scene is not yet running, start it");
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_6, func_159(), func_160(), 2);
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			if (PED::IS_PED_MALE(Global_33))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_MALE_01", Global_33, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_FEMALE_01", Global_33, 0);
			}
		}
		if (Local_19.f_2 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_EXIT_SCENE_UPDATE - Anim front door registered");
			}
		}
		else if (Local_19.f_2 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_84))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
				DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RUN_EXIT_SCENE_UPDATE - Anim side door registered");
			}
		}
		if (TASK::_0xEC7E480FF8BD0BED(Global_33))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Global_33);
		}
		TASK::_0xFDECCA06E8B81346(Global_33);
		ANIMSCENE::START_ANIM_SCENE(Local_19.f_6);
		func_65(1);
		func_79(32);
		return;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_19.f_6);
	DEBUG::_0x4DC69742196F818A(24, 225, "MOON_INSTANCE_RUN_EXIT_SCENE_UPDATE - fPhase: ", fVar0);
	if (fVar0 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			func_164(0);
		}
	}
	else if (fVar0 > 0.85f)
	{
		if (!func_77(2048))
		{
			func_61(1);
			func_71(1);
			func_65(2048);
		}
	}
}

void func_69()
{
	if (func_77(65536))
	{
		func_183(0, 1);
		func_79(65536);
	}
}

bool func_70()
{
	vector3 vVar0;
	float fVar3;
	char* sVar4;
	char* sVar5;

	if ((func_151(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	vVar0 = { func_184(Local_19.f_1, 0) };
	fVar3 = func_185(Local_19.f_1, 0);
	sVar4 = Global_1901988.f_800.f_8;
	sVar5 = Global_1901988.f_800.f_9;
	DEBUG::_0xA308F935BDECCEC0(104888, 225, "MOON_INSTANCE_RESPAWN_OUTSIDE_SHACK - Respawning now, pos: ", &vVar0, " heading: ", fVar3, " outer radius: ", sVar4, " inner scale: ", sVar5);
	func_177(1);
	func_178(145);
	func_186(vVar0, fVar3, sVar5, sVar4, 1, 1, 1);
	return true;
}

void func_71(bool bParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_PLAYER__HIDE_SIDEARM_VISIBILITY_COOP - Setting sidearms visible: ", MISC::_0xF216F74101968DB0(bParam0));
	if (!bParam0)
	{
		WEAPON::_0x94A3C1B804D291EC(Global_33, 0, 0, 0, 1);
	}
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 2, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 3, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 4, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 5, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 6, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 11, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 12, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 13, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 24, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 14, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 15, bParam0);
}

bool func_72()
{
	char* sVar0;

	if ((func_151(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	switch (Local_19.f_3)
	{
		case 1:
			sVar0 = "MS_WARN_FORCE_OUT_INVALID";
			break;
		case 2:
			sVar0 = "MS_WARN_FORCE_OUT_MOVED";
			break;
		case 3:
			sVar0 = "MS_WARN_FORCE_OUT_DISBANDED";
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_HAS_FORCED_OUT_MESSAGE_BEEN_TRIGGERED - Displaying message now: ", sVar0);
	Local_19.f_82 = func_132(sVar0, 10000, 0, 0, 0, 1);
	return true;
}

void func_73(bool bParam0)
{
	UNK_0x355E72323AEE83CC(225, 6);
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER_SET_PLAYER_LEFT_SHACK - Player left: ", func_7(Global_1277599.f_131, 0));
	func_6(16);
	func_67(1);
	if (Global_1277599.f_158 > -1)
	{
		func_187(Global_1277599.f_158);
		Global_1277599.f_158 = -1;
	}
	if (bParam0)
	{
		func_36(64);
	}
}

void func_74(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "[MOON] NET_MOONSHINE_MANAGER__SET__TARGET_PLAYER: ", PLAYER::GET_PLAYER_NAME(iParam0));
	Global_1277387.f_200 = iParam0;
}

void func_75()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_CLEAR_DOOR_PROMPTS - Cleaning up doors");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_19.f_35[iVar0 /*4*/].f_2))
		{
			VOLUME::_DELETE_VOLUME(Local_19.f_35[iVar0 /*4*/].f_2);
		}
		if (func_114(Local_19.f_35[iVar0 /*4*/]))
		{
			func_188(&(Local_19.f_35[iVar0 /*4*/]), 1, 1);
		}
		if (func_114(Local_19.f_35[iVar0 /*4*/].f_1))
		{
			func_188(&(Local_19.f_35[iVar0 /*4*/].f_1), 1, 1);
		}
		iVar0++;
	}
}

void func_76()
{
	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_RESET_DATA - Resetting all key data now");
	Local_19.f_2 = -1;
	Local_19.f_5 = 0;
	Local_19.f_11 = 0;
	Local_19.f_12 = 0;
	Local_19.f_6 = 0;
	Local_19.f_8 = 0;
	Local_19.f_9 = 0;
	Local_19.f_10 = 0;
	Local_19.f_81 = 0;
	Local_19.f_4 = 0;
}

bool func_77(int iParam0)
{
	return func_101(Local_19.f_5, iParam0);
}

char* func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MOON_EXIT_RESPAWN_REASON_NONE";
		case 1:
			return "MOON_EXIT_RESPAWN_REASON_NOT_ACTIVE";
		case 2:
			return "MOON_EXIT_RESPAWN_REASON_MOVED_LOCATION";
		case 3:
			return "MOON_EXIT_RESPAWN_REASON_POSSE_DISBANDED";
		case 4:
			return "MOON_EXIT_RESPAWN_REASON_POSSE_VERSUS_RUNNING";
		case 5:
			return "MOON_EXIT_RESPAWN_REASON_MOONSHINE_RAID_RUNNING";
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

void func_79(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INSTANCE_CLEAR_BIT - clearing: ", func_181(iParam0, 0));
	func_84(&(Local_19.f_5), iParam0);
}

void func_80(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (iParam0->f_2 != 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_2);
		}
	}
	iParam0->f_1 = 0;
	iParam0->f_3 = 0;
}

bool func_81(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072032.f_22542.f_417[iParam0 /*12*/], iParam1);
}

void func_82(int iParam0, int iParam1, bool bParam2)
{
	if (func_81(iParam0, iParam1) && (!bParam2 || Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 162, "NET_HUD__CLEAR_LOCAL_PLAYER_GHOSTED: Clearing ghost type ", func_189(iParam0, 0), " from source ", func_190(iParam1, 0), " for local player.");
		UNK_0x355E72323AEE83CC(162, 7);
		MISC::CLEAR_BIT(&(Global_1072032.f_22542.f_417[iParam0 /*12*/]), iParam1);
		Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_191();
	}
}

char* func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NMOON_OFFLINE_BIT_REGISTERED_EXTERIOR_DOORS";
		case 2:
			return "NMOON_OFFLINE_BIT_IS_SHACK_INSTANCE_ACTIVATED";
		case 4:
			return "NMOON_OFFLINE_BIT_IS_SHACK_SHOP_INSTANCE_ACTIVATED";
		case 8:
			return "NMOON_OFFLINE_BIT_IS_INVITE_ACCEPTED_WHILE_IN_SHACK";
		case 16:
			return "NMOON_OFFLINE_BIT_IS_LOCAL_PLAYER_INSIDE_SHACK";
		case 32:
			return "NMOON_OFFLINE_BIT_ENABLE_PROPERTY_BLIP_PULSE";
		case 64:
			return "NMOON_OFFLINE_BIT_SHOULD_ENTRANCE_THREAD_RESET";
		case 128:
			return "NMOON_OFFLINE_BIT_DID_CONTENT_PUT_PLAYER_INSIDE_SHACK";
		case 256:
			return "NMOON_OFFLINE_BIT_SHOULD_ENTRANCE_BE_DISABLED";
		case 512:
			return "NMOON_OFFLINE_BIT_SHOP_ANIM_RUNNING";
		case 1024:
			return "NMOON_OFFLINE_BIT_FORCE_UPDATE_ON_ENTRANCE";
		case 2048:
			return "NMOON_OFFLINE_BIT_CREATED_PED_THIS_FRAME";
		case 4096:
			return "NMOON_OFFLINE_BIT_SETUP_COMPLETE_TRIGGER";
		case 8192:
			return "NMOON_OFFLINE_BIT_THREAD_EXIT_REQUESTED";
		case 16384:
			return "NMOON_OFFLINE_BIT_NAVMESH_SWAP_IN_SHACK_REQUESTED";
		case 32768:
			return "NMOON_OFFLINE_BIT_NAVMESH_SWAP_ON_MAP_REQUESTED";
		case 65536:
			return "NMOON_OFFLINE_BIT_IS_FIRST_TIME_IN_STILL_SHOP";
		case 131072:
			return "NMOON_OFFLINE_BIT_COOP_CUTSCENE_PLAYING";
		case 262144:
			return "NMOON_OFFLINE_BIT_REFRESH_OWNERSHIP";
		case 524288:
			return "NMOON_OFFLINE_BIT_MAGGIE_OFFERED_STORY_MISSION";
		case 1048576:
			return "NMOON_OFFLINE_BIT_MAGGIE_SETUP_COMPLETE_DIALOGUE";
		case 2097152:
			return "NMOON_OFFLINE_BIT_MOONSHINE_RAID_PASS";
		case 4194304:
			return "NMOON_OFFLINE_BIT_MOONSHINE_RAID_FAIL";
		case 8388608:
			return "NMOON_OFFLINE_BIT_MOONSHINE_MAGGIE_MISSION_COOLDOWN_LINE";
		case 16777216:
			return "NMOON_OFFLINE_BIT_MOONSHINE_MARCEL_MISSION_COOLDOWN_LINE";
		case 33554432:
			return "NMOON_OFFLINE_BIT_MOONSHINE_PROPERTY_INTERIOR_UPDATE";
		case 67108864:
			return "NMOON_OFFLINE_BIT_PINNED_FLAVOR_UPDATE_REQUIRED";
		case 134217728:
			return "NMOON_OFFLINE_BIT_BUSINESS_UNLOCKED";
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

void func_84(var uParam0, int iParam1)
{
	func_192(uParam0, iParam1);
}

bool func_85(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_86()
{
	return Global_1102630.f_3672;
}

bool func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17414.f_2585[iVar1], iVar2);
}

void func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_193(iParam0, &iVar0, &iVar1);
	if (!func_194(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_195(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_196(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

void func_89(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(680, 225, "MOON_INSTANCE_SET_GHOSTING_STATE - changing from ", func_95(Local_19.f_97, 0), " to ", func_95(iParam0, 0));
	Local_19.f_97 = iParam0;
}

bool func_90()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar2 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	return PED::IS_PED_A_PLAYER(iVar1);
}

struct<2> func_91()
{
	if (Global_1196676.f_129 <= 0)
	{
		return func_121(0);
	}
	if (Global_1196676.f_130 < 0 || Global_1196676.f_131 == 0)
	{
		return func_121(0);
	}
	return Global_1196676[Global_1196676.f_130 /*4*/].f_1;
}

bool func_92(struct<2> Param0)
{
	if (!func_197(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_198(Param0))
	{
		return false;
	}
	return true;
}

bool func_93(int iParam0)
{
	return func_131(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_19.f_94[func_96(iParam0)], 0, 1, 0);
}

void func_94(int iParam0, int iParam1)
{
	if (!func_81(iParam0, iParam1))
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 162, "NET_HUD__SET_LOCAL_PLAYER_GHOSTED: Setting ghost type ", func_189(iParam0, 0), " from source ", func_190(iParam1, 0), " for local player.");
		UNK_0x355E72323AEE83CC(162, 7);
		MISC::SET_BIT(&(Global_1072032.f_22542.f_417[iParam0 /*12*/]), iParam1);
		Global_1072032.f_22542.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_191();
	}
}

char* func_95(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MOON_GHOST_STATE__UNGHOSTED";
		case 1:
			return "MOON_GHOST_STATE__GHOSTED";
		case 2:
			return "MOON_GHOST_STATE__SUPPRESS_ALL_GHOSTING";
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

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GHOSTING_VOLUME"):
			return 0;
		case joaat("UNGHOSTING_VOLUME"):
			return 1;
		default:
			break;
	}
	DEBUG::_0x4423BBAB7EB2B96B(40, 225, "MOON_INSTANCE_GET_VOLUME_TYPE_FOR_INDEX - failed to find ", func_199(iParam0, 0));
	return -1;
}

bool func_97(var uParam0)
{
	return func_200(*uParam0, 1);
}

bool func_98(var uParam0, float fParam1)
{
	if (func_201(uParam0, fParam1))
	{
		func_202(uParam0);
		return true;
	}
	return false;
}

float func_99(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_100(var uParam0)
{
	func_203(uParam0, 0f);
}

bool func_101(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MOON_STATE_INIT";
		case 1:
			return "MOON_STATE_STREAMING";
		case 2:
			return "MOON_STATE_CREATE_EXTERIOR_DOOR_PROMPTS";
		case 3:
			return "MOON_STATE_PROCESS_JOIN_FLOW";
		case 4:
			return "MOON_STATE_LOAD_ENTER_ANIM_SCENE";
		case 5:
			return "MOON_STATE_STREAM_ENTRANCE";
		case 6:
			return "MOON_STATE_CREATE_PLAYERS";
		case 7:
			return "MOON_STATE_FIND_ENTER_DOORS";
		case 8:
			return "MOON_STATE_ENTER_WAIT_FOR_BUTTON_PRESS";
		case 9:
			return "MOON_STATE_RUN_ENTER_SCENE";
		case 10:
			return "MOON_STATE_FOLLOW_LOAD_INTERIOR";
		case 11:
			return "MOON_STATE_FOLLOW_DISPLAY_POSSE_WARP_WARNING";
		case 12:
			return "MOON_STATE_FOLLOW_INIT_INVITE_PLAYER_ENTRANCE";
		case 13:
			return "MOON_STATE_FOLLOW_CHECK_SHOULD_RESPAWN_OR_ANIM";
		case 14:
			return "MOON_STATE_FOLLOW_LOAD_ENTER_ANIM_SCENE";
		case 15:
			return "MOON_STATE_FOLLOW_STREAM_ENTRANCE";
		case 16:
			return "MOON_STATE_FOLLOW_CREATE_PLAYERS";
		case 17:
			return "MOON_STATE_FOLLOW_FIND_ENTER_DOORS";
		case 18:
			return "MOON_STATE_FOLLOW_RUN_ANIM_SCENE";
		case 19:
			return "MOON_STATE_FOLLOW_RESPAWN";
		case 20:
			return "MOON_STATE_FOLLOW_WAIT_FOR_RESPAWN_COMPLETE";
		case 21:
			return "MOON_STATE_COOP_LOAD_INTERIOR";
		case 22:
			return "MOON_STATE_COOP_START_CUTSCENE_INSTANCE";
		case 23:
			return "MOON_STATE_COOP_RESPAWN";
		case 24:
			return "MOON_STATE_COOP_RELEASE_TO_SHARED_INSTANCE";
		case 25:
			return "MOON_STATE_EXIT_WAIT_FOR_BUTTON_PRESS";
		case 26:
			return "MOON_STATE_STREAM_EXIT";
		case 27:
			return "MOON_STATE_LOAD_EXIT_ANIM_SCENE";
		case 28:
			return "MOON_STATE_FIND_EXIT_DOORS";
		case 29:
			return "MOON_STATE_RUN_EXIT_SCENE";
		case 30:
			return "MOON_STATE_RUN_EXIT_RESPAWN";
		case 31:
			return "MOON_STATE_RUN_EXIT_RESPAWN_MESSAGE";
		case 32:
			return "MOON_STATE_STOP_FULL_INSTANCE";
		case 33:
			return "MOON_STATE_RESET_DATA";
		case 34:
			return "MOON_STATE_TERMINATE";
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

int func_103()
{
	return Global_1277387.f_200;
}

bool func_104(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (!func_204(Global_1277758[iVar0 /*87*/]))
	{
		return false;
	}
	if (Global_1277758[iVar0 /*87*/].f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

bool func_105()
{
	if (!func_205())
	{
		return false;
	}
	return func_101(Global_1901988.f_44.f_5, 8);
}

var func_106(bool bParam0, int iParam1)
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

bool func_107(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 5);
}

bool func_108(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (!bParam2)
	{
		bVar0 = Global_1277599.f_78[iParam0 /*6*/][iParam1];
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						bVar0 = -873861472;
						break;
					case 1:
						bVar0 = 559525171;
						break;
					case 2:
						bVar0 = -86501425;
						break;
					case 3:
						bVar0 = 359873526;
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						bVar0 = -1636862794;
						break;
					case 1:
						bVar0 = -368946392;
						break;
					case 2:
						bVar0 = -86501425;
						break;
					case 3:
						bVar0 = 359873526;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						bVar0 = 1954418654;
						break;
					case 1:
						bVar0 = -1030789470;
						break;
					case 2:
						bVar0 = -86501425;
						break;
					case 3:
						bVar0 = 359873526;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						bVar0 = 423023646;
						break;
					case 1:
						bVar0 = 155563751;
						break;
					case 2:
						bVar0 = -86501425;
						break;
					case 3:
						bVar0 = 359873526;
						break;
				}
				break;
			case 4:
				switch (iParam1)
				{
					case 0:
						bVar0 = -561680145;
						break;
					case 1:
						bVar0 = -7860519;
						break;
					case 2:
						bVar0 = -86501425;
						break;
					case 3:
						bVar0 = 359873526;
						break;
				}
				break;
		}
	}
	DEBUG::_0x4DC69742196F818A(174728, 225, "NET_MOONSHINE_PROPERTY__GET_DOOR_ID_FOR_DOOR - Door hash: ", bVar0, " id: ", func_206(bVar0, 0), " for location: ", func_7(iParam0, 0), " eDoor: ", func_113(iParam1, 0));
	return bVar0;
}

int func_109(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_207(bParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 87, "GET_DOOR_ENTITY_FROM_ID_SAFE - Door entity ", bParam0, " does not exist");
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 87, "GET_DOOR_ENTITY_FROM_ID_SAFE - Door entity ", bParam0, " is a dummy object");
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 87, "GET_DOOR_ENTITY_FROM_ID_SAFE - Door entity ", bParam0, " is dead");
		return 0;
	}
	return iVar0;
}

void func_110()
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_INIT_CACHE_VECTORS - Vectors cached for location: ", func_7(Local_19.f_1, 0));
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_19.f_13[iVar0 /*3*/] = { func_184(Local_19.f_1, iVar0) };
		Local_19.f_29[iVar0] = func_185(Local_19.f_1, iVar0);
		DEBUG::_0x4DC69742196F818A(440, 225, "MOON_INIT_CACHE_VECTORS - Pos: ", &(Local_19.f_13[iVar0 /*3*/]), " Heading: ", Local_19.f_29[iVar0]);
		iVar0++;
	}
}

void func_111()
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	char cVar22[64];

	if (Global_1277220.f_166)
	{
		func_89(2);
	}
	Var0 = Global_1072032.f_28503[50 /*4*/].f_3;
	Var0.f_2 = -2002424295;
	Var0.f_3 = func_208(Local_19.f_1);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - failed to move to <volumes> for ", func_7(Local_19.f_1, 0));
		DEBUG::_0x4423BBAB7EB2B96B(8, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - volume query failure");
		return;
	}
	uVar6 = Var0.f_1;
	iVar8 = 0;
	while (iVar8 <= 1)
	{
		Var0.f_1 = uVar6;
		iVar5 = func_209(iVar8);
		StringCopy(&cVar22, "volume#", 64);
		StringIntConCat(&cVar22, iVar8, 64);
		Var0.f_2 = -1627797674;
		Var0.f_3 = iVar5;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			DEBUG::_0xD9911C7B5F8CD69C(680, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - failed to move to <volume> for ", func_7(Local_19.f_1, 0), " volume ", func_199(iVar5, 0));
			DEBUG::_0x4423BBAB7EB2B96B(8, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - volume query failure");
			return;
		}
		uVar7 = Var0.f_1;
		Var0.f_2 = -85904298;
		iVar10 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
		DEBUG::_0xA308F935BDECCEC0(648, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - ", iVar10, " volume components found for ", func_199(iVar5, 0));
		Local_19.f_94[iVar8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar22);
		DEBUG::_0xA308F935BDECCEC0(43688, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - volume ", func_199(iVar5, 0), " created for ", func_7(Local_19.f_1, 0), " named \"", &cVar22, "\"");
		iVar9 = 0;
		while (iVar9 <= (iVar10 - 1))
		{
			Var0.f_1 = uVar7;
			Var0.f_2 = -204010186;
			Var0.f_3 = iVar9;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				DEBUG::_0xD9911C7B5F8CD69C(680, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - failed to move to <component> for ", func_7(Local_19.f_1, 0), " volume ", func_199(iVar5, 0));
				DEBUG::_0x4423BBAB7EB2B96B(8, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - volume query failure");
			}
			else
			{
				Var0.f_2 = 701345319;
				DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var0);
				iVar21 = uVar11;
				Var0.f_2 = -1084365561;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar12, &Var0);
				Var0.f_2 = 2021743591;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar15, &Var0);
				Var0.f_2 = -600021699;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar18, &Var0);
				DEBUG::_0xA308F935BDECCEC0(2866088, 225, "MOON_INSTANCE_CREATE_GHOSTING_VOUMES - adding ", func_210(iVar21, 0), " p: ", &vVar12, " o: ", &vVar15, " s: ", &vVar18, " to ", func_199(iVar5, 0));
				VOLUME::_0x12FCAA23F2320422(Local_19.f_94[iVar8], iVar21, vVar12, vVar15, vVar18);
			}
			iVar9++;
		}
		iVar8++;
	}
}

bool func_112(int iParam0, var uParam1, var uParam2)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;

	Var0 = Global_1277599.f_1;
	Var0.f_2 = -709674112;
	Var0.f_3 = func_208(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 225, "NET_MOONSHINE_XML__POPULATE_DOOR_VECTORS - Failure to populate door query!");
		return false;
	}
	iVar15 = 0;
	while (iVar15 < 4)
	{
		Var5 = { Var0 };
		Var5.f_2 = -1480766764;
		Var5.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam1[Var5.f_3 /*3*/], &Var5))
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 225, "NET_MOONSHINE_XML__POPULATE_DOOR_VECTORS - POS - Can't retrieve door index: ", Var5.f_3);
			return false;
		}
		Var10 = { Var0 };
		Var10.f_2 = 983475634;
		Var10.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam2[Var10.f_3 /*3*/], &Var10))
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 225, "NET_MOONSHINE_XML__POPULATE_DOOR_VECTORS - SCALE - Can't retrieve door index: ", Var10.f_3);
			return false;
		}
		DEBUG::_0xA308F935BDECCEC0(15240, 225, "NET_MOONSHINE_XML__POPULATE_DOOR_VECTORS - Door index: ", Var5.f_3, " vector: ", uParam1[Var5.f_3 /*3*/], " scale: ", uParam2[Var10.f_3 /*3*/]);
		iVar15++;
	}
	return true;
}

char* func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NMOON_PROPERTY_DOOR_POS_ENTER_FRONT";
		case 1:
			return "NMOON_PROPERTY_DOOR_POS_ENTER_SIDE";
		case 2:
			return "NMOON_PROPERTY_DOOR_POS_EXIT_FRONT";
		case 3:
			return "NMOON_PROPERTY_DOOR_POS_EXIT_SIDE";
		case 4:
			return "NMOON_PROPERTY_NUM_DOORS";
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

bool func_114(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1952230[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3);
}

char* func_115(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "Null";
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 2:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
		case 3:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_INSTANCE_GET_BUTTON_TEXT - Button text for door: ", iParam0);
	return sVar0;
}

int func_116(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 145, "REGISTER_USE_CONTEXT_VOLUME");
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_VOLUME - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(136, 145, "REGISTER_USE_CONTEXT_VOLUME - Cannot register a context with an invalid control ", iParam1, "!");
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_VOLUME - Cannot register a context with a non-existent volume!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_211(iVar0, 2))
		{
			if (iParam2 == Global_1952230[iVar0 /*23*/].f_10 && iParam1 == Global_1952230[iVar0 /*23*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_212(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, bParam8, iParam9, bParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_VOLUME - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_VOLUME - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_117(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_114(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_PROMPT_VISIBILITY - Cannot set an entity for an invalid context!");
		return;
	}
	iVar0 = func_213(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iVar0 /*23*/].f_3, bParam1);
}

void func_118(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (bParam2 && !func_114(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ENABLED - Invalid context!");
		return;
	}
	sVar0 = func_213(iParam0);
	if (bParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Enable use context, ", sVar0);
		func_214(iParam0, 4);
		if (bParam3)
		{
			func_215(sVar0, 1);
		}
		func_216(sVar0, 1);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Disable use context, ", sVar0);
		func_217(iParam0, 4);
		func_216(sVar0, 0);
	}
}

bool func_119()
{
	return (Global_1275951.f_2.f_1 == 2 || Global_1275951.f_2.f_1 == 1);
}

void func_120(var uParam0, int iParam1)
{
	func_218(uParam0, iParam1);
}

struct<2> func_121(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_122(var uParam0, var uParam1)
{
	return uParam0;
}

char* func_123(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Story";
		case 3:
			return "Procedural";
		case 4:
			return "Fetch";
		case 5:
			return "Minigame";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "Free Mode Activity";
		default:
			break;
	}
	return "Unknown";
}

bool func_124(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

int func_125(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1226712[iVar0 /*699*/].f_565 != iParam0)
		{
		}
		else if (bParam2 && !func_219(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && Global_1216137[iVar0 /*27*/].f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_126(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_127()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940410.f_12)
	{
		if ((bParam2 || Global_1940410.f_13 > 0) || Global_1940410.f_11 > 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : TRUE - IS_LAW_INCIDENT_ACTIVE(", PLAYER::PLAYER_ID(), ")");
			return 1;
		}
	}
	else if (bParam1 && !Global_1940410.f_9 == 1370593166)
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : FALSE - bRequireActiveIncident AND NOT IS_LAW_INCIDENT_ACTIVE(", PLAYER::PLAYER_ID(), ")");
		return 0;
	}
	if (Global_1940410.f_14 > 0 || (bParam2 && Global_1940410.f_14 > -1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : TRUE - GET_PLAYER_REGISTERED_CRIME(", PLAYER::PLAYER_ID(), ") AND thisCrime.m_WasReported");
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940410.f_7)
		{
			if (bParam2 || Global_1940410.f_15 > 0)
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 111, "IS_LOCAL_PLAYER_WANTED : TRUE - bConsiderActiveWitnesses AND ARE_WITNESSES_ACTIVE(", PLAYER::PLAYER_ID(), ")");
				return 1;
			}
		}
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 111, "IS_LOCAL_PLAYER_WANTED : FALSE - Default case");
	return 0;
}

bool func_129()
{
	return func_12(1, 255);
}

bool func_130()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_131(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, iParam2, "IS_PED_IN_VOLUME: entity is dead");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, iParam2, "IS_PED_IN_VOLUME: Invalid volume passed into IS_PED_IN_VOLUME");
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam3, iParam4);
}

int func_132(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_133(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_114(iParam0))
	{
		return false;
	}
	iVar0 = func_213(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3);
}

bool func_134(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1198211.f_1 && iParam0) != 0;
}

bool func_135()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(872480335) > 0)
	{
		return true;
	}
	return false;
}

bool func_136(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

bool func_137(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_138(int iParam0, bool bParam1)
{
	if (bParam1 && !func_114(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 145, "IS_USE_CONTEXT_ENABLED - Invalid context! Returning false.");
		return false;
	}
	return !func_211(iParam0, 4);
}

int func_139(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return joaat("COLOR_POSSE_NEUTRAL");
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	iVar2 = iParam0;
	if (func_220(func_121(0)) && func_122(func_121(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1072032.f_21420.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1072032.f_21420.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1072032.f_21420.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1072032.f_21420.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_221(iParam0);
			if (iVar6 == joaat("COLOR_NET_PLAYER2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_222(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_101(Global_1072032.f_21420.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_223(iParam0, 1);
	if (!bVar0)
	{
		if (func_224(iParam0, bParam1))
		{
			return func_222(iParam0);
		}
		else if (func_225(iParam0, bParam1))
		{
			if (func_226(iParam0, bParam1))
			{
				return joaat("COLOR_POSSE_ENEMY");
			}
			else
			{
				if (iVar7 > 5)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 3)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 1)
				{
					return joaat("COLOR_NOTORIETY_MEDIUM");
				}
				return joaat("COLOR_NOTORIETY_LOW");
			}
		}
	}
	else if (bVar1)
	{
		return func_221(iParam0);
	}
	else if (func_224(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_228(func_227(func_121(0)), 1) == 395262693)
		{
			return func_222(iParam0);
		}
		else
		{
			return func_222(iParam0);
		}
	}
	else if (func_225(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

char* func_140(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_229(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_141(int iParam0)
{
	int iVar0;

	iVar0 = func_213(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return Global_1952230[iVar0 /*23*/].f_3;
}

bool func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_114(iParam0))
	{
		return false;
	}
	iVar0 = func_213(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		if (Global_1952230[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1952230[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1952230[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1952230[iVar0 /*23*/].f_18) * (1f - Global_1952230[iVar0 /*23*/].f_22)));
			DEBUG::_0x1B08D1EB9D8C4931(559272, 162, "USE_CONTEXT_HAS_METERED_CONTEXT_FILLED - fProgress = ", MISC::_0x2B6846401D68E563(Global_1952230[iVar0 /*23*/].f_22, 4), ", iAutoFillTime = ", Global_1952230[iVar0 /*23*/].f_18, ", iTimeRemaining = ", iVar4, ", iTimeElapsed = ", iVar3, ", iCurrentTime = ", iVar1);
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1952230[iVar0 /*23*/].f_21 = iVar1;
			Global_1952230[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return 4;
}

void func_144(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 225, "NET_MOONSHINE_ENTRANCE__ONLINE__SET_SYNCED_WARP - Warp point outside shack; skipping");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_ENTRANCE__ONLINE__SET_SYNCED_WARP - Warp point: ", func_145(iParam0, 0));
	Global_1277758[Global_1275959 /*87*/].f_5.f_13 = iParam0;
}

char* func_145(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NMOON_PROPERTY_WARP_INVALID";
		case 0:
			return "NMOON_PROPERTY_WARP_EXTERIOR_FRONT";
		case 1:
			return "NMOON_PROPERTY_WARP_EXTERIOR_SIDE";
		case 2:
			return "NMOON_PROPERTY_WARP_INTERIOR_GROUND_FRONT";
		case 3:
			return "NMOON_PROPERTY_WARP_INTERIOR_GROUND_SIDE";
		case 4:
			return "NMOON_PROPERTY_WARP_INTERIOR_BAR";
		case 5:
			return "NUM_MOONSHINE_PROPERTY_WARPS";
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

void func_146()
{
	struct<20> Var0;

	DEBUG::_0xF0783374333FD8CE(8, 225, "NET_MOONSHINE_LEADER__SEND_JOIN_EVENT_TO_MEMBERS - ");
	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 5;
	func_230(&Var0);
}

void func_147()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_231(0, 0);
	Global_1940463.f_6 = 1;
}

void func_148(bool bParam0)
{
	if (func_135())
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "CAMERA_ITEM - FORCE_CAMERA_ITEM_AWAY() has been called by ", UNK_0x8F77B33B6A34D8BA());
		Global_1959060 = 1;
	}
	if (func_232(joaat("CAMERA_ITEM")))
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "CAMERA_ITEM - REMOVE_SCRIPT_HASH_FROM_QUEUE in script ", UNK_0x8F77B33B6A34D8BA());
	}
	if (bParam0 && (Global_1940410.f_38 == joaat("WEAPON_KIT_CAMERA") || Global_1940410.f_38 == 332793555))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940410.f_38 = joaat("WEAPON_UNARMED");
	}
}

bool func_149()
{
	return Global_1896750.f_398;
}

void func_150()
{
	func_233(0);
	DEBUG::_0xF0783374333FD8CE(8, 162, "[PLAYER_MENU_FORCE_SHUTDOWN] A script has force shutdown the player menu | Printing a Callstack");
	UNK_0x355E72323AEE83CC(162, 6);
}

bool func_151(int iParam0)
{
	return func_12(1, iParam0);
}

Vector3 func_152(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

char* func_153()
{
	char* sVar0;

	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			sVar0 = "script@mp@Moonshiner@Moonshine_Property@exit";
			break;
		case 2:
		case 3:
			sVar0 = "script@mp@moonshiner@moonshine_property@enter";
			break;
		case 4:
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 225, "MOON_GET_ANIM_SCENE - returning: ", sVar0);
	return sVar0;
}

int func_154()
{
	int iVar0;

	switch (Local_19.f_2)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			break;
	}
	DEBUG::_0x4DC69742196F818A(40, 225, "MOON_GET_ANIM_SCENE_DOOR_FOR_TRANSITION - door: ", func_234(iVar0, 0));
	return iVar0;
}

char* func_155(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = "";
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			bVar1 = func_235();
			bVar2 = func_236();
			DEBUG::_0xA308F935BDECCEC0(10888, 225, "MOON_GET_ANIM_SCENE_PLAYLIST - door: ", Local_19.f_2, " bVeryDrunk: ", MISC::_0xF216F74101968DB0(bVar1), " bTipsy: ", MISC::_0xF216F74101968DB0(bVar2));
			switch (iParam0)
			{
				case 3:
					if (bVar1)
					{
						sVar0 = "s_FRONT_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_FRONT_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_FRONT";
					}
					break;
				case 4:
					if (bVar1)
					{
						sVar0 = "s_SIDE_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_SIDE_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_SIDE";
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 1:
					sVar0 = "s_FRONT";
					break;
				case 2:
					sVar0 = "s_SIDE";
					break;
			}
			break;
		case 4:
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 225, "MOON_GET_ANIM_SCENE_PLAYLIST - returning: ", sVar0);
	return sVar0;
}

int func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1277758[iParam0 /*87*/];
}

bool func_157(int iParam0)
{
	return func_237(iParam0, -1);
}

bool func_158(int iParam0)
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_159()
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;

	bVar3 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	bVar4 = Local_19.f_2 == 3;
	switch (Local_19.f_1)
	{
		case 0:
			if (bVar3)
			{
				vVar0 = { 1788.727f, -816.8044f, 45.1f };
			}
			else
			{
				vVar0 = { 1789.577f, -812.6493f, 191.5339f };
			}
			break;
		case 1:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1090.531f, 711.1215f, 106.522f };
				}
				else
				{
					vVar0 = { -1090.531f, 711.1215f, 106.722f };
				}
			}
			else
			{
				vVar0 = { -1092.746f, 707.5026f, 83.1687f };
			}
			break;
		case 2:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -2774.968f, -3046.855f, 13.6003f };
				}
				else
				{
					vVar0 = { -2774.968f, -3046.855f, 13.8003f };
				}
			}
			else
			{
				vVar0 = { -2779.185f, -3047.399f, -9.7658f };
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { 1629.138f, 828.3974f, 147.2225f };
				}
				else
				{
					vVar0 = { 1629.138f, 828.3974f, 147.4225f };
				}
			}
			else
			{
				vVar0 = { 1628.259f, 832.5888f, 123.8766f };
			}
			break;
		case 4:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1863.969f, -1727.859f, 111.5559f };
				}
				else
				{
					vVar0 = { -1863.969f, -1727.859f, 111.7559f };
				}
			}
			else
			{
				vVar0 = { -1863.601f, -1732.077f, 88.1898f };
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(56, 225, "MOON_GET_ANIM_SCENE_ORIGIN - vector: ", &vVar0);
	return vVar0;
}

Vector3 func_160()
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	switch (Local_19.f_1)
	{
		case 0:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -136.62f };
			}
			else
			{
				vVar1 = { 0f, 0f, -176.6f };
			}
			break;
		case 1:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 23.421f };
			}
			else
			{
				vVar1 = { 0f, 0f, -16.5f };
			}
			break;
		case 2:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -27.83f };
			}
			else
			{
				vVar1 = { 0f, 0f, -67.7f };
			}
			break;
		case 3:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -113.27f };
			}
			else
			{
				vVar1 = { 0f, 0f, -153.2f };
			}
			break;
		case 4:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 60.01f };
			}
			else
			{
				vVar1 = { 0f, 0f, 20f };
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(56, 225, "MOON_GET_ANIM_SCENE_ROTATION - vector: ", &vVar1);
	return vVar1;
}

int func_161()
{
	int iVar0;

	switch (Local_19.f_1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		default:
			DEBUG::_0x9A6C65DDDBEC9C52(8, 225, "MOON_GET_ANIM_SCENE_CAMERA_INT - No valid location found, defaulting to value 1");
			iVar0 = 1;
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 225, "MOON_GET_ANIM_SCENE_CAMERA_INT - Camera instance: ", iVar0);
	return iVar0;
}

char* func_162(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MP_Male_01";
			}
			else
			{
				sVar0 = "MP_Female_01";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MP_Male_02";
			}
			else
			{
				sVar0 = "MP_Female_02";
			}
			break;
		case 2:
			if (bParam1)
			{
				sVar0 = "MP_Male_03";
			}
			else
			{
				sVar0 = "MP_Female_03";
			}
			break;
		case 3:
			if (bParam1)
			{
				sVar0 = "MP_Male_04";
			}
			else
			{
				sVar0 = "MP_Female_04";
			}
			break;
		case 4:
			if (bParam1)
			{
				sVar0 = "MP_Male_05";
			}
			else
			{
				sVar0 = "MP_Female_05";
			}
			break;
		case 5:
			if (bParam1)
			{
				sVar0 = "MP_Male_06";
			}
			else
			{
				sVar0 = "MP_Female_06";
			}
			break;
		case 6:
			if (bParam1)
			{
				sVar0 = "MP_Male_07";
			}
			else
			{
				sVar0 = "MP_Female_07";
			}
			break;
	}
	DEBUG::_0x4DC69742196F818A(40, 225, "MOON_GET_ANIM_SCENE_ACTOR_NAME_FOR_CLONE - actor: ", sVar0);
	return sVar0;
}

void func_163(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(680, 225, "MOON_INSTANCE_CAMERA_SET_STATE - Setting state: ", func_238(iParam0, 0), " old state: ", func_238(Local_19.f_4, 0));
	Local_19.f_4 = iParam0;
}

void func_164(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77(2))
		{
			DEBUG::_0xA308F935BDECCEC0(56, 225, "MOON_INSTANCE_WARP_PLAYER_FROM_ANIM_SCENE_TO_TARGET_COORD - Warping to vector: ", &(Local_19.f_13[Local_19.f_2 /*3*/]));
			ENTITY::SET_ENTITY_COORDS(Global_33, Local_19.f_13[Local_19.f_2 /*3*/], true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Global_33, Local_19.f_29[Local_19.f_2]);
			func_239(0, 0);
			func_65(2);
		}
	}
	else if (!func_77(4))
	{
		DEBUG::_0xA308F935BDECCEC0(56, 225, "MOON_INSTANCE_WARP_PLAYER_FROM_ANIM_SCENE_TO_TARGET_COORD - Warping to vector: ", &(Local_19.f_13[Local_19.f_2 /*3*/]));
		ENTITY::SET_ENTITY_COORDS(Global_33, Local_19.f_13[Local_19.f_2 /*3*/], true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_33, Local_19.f_29[Local_19.f_2]);
		func_239(0, 0);
		func_65(4);
	}
}

void func_165()
{
	Local_19.f_85 = func_103();
	Local_19.f_86 = GANG::_0x901E0DC25080C8B9(Local_19.f_85);
	DEBUG::_0xA308F935BDECCEC0(168, 225, "MOON_INSTANCE_UPDATE_OWNER_DATA - player target: ", PLAYER::GET_PLAYER_NAME(Local_19.f_85), " gang: ", Local_19.f_86);
	if (GANG::_0x4BE6C13A45CCA8EC(Local_19.f_86) == PLAYER::PLAYER_ID())
	{
		func_65(131072);
	}
}

bool func_166()
{
	DEBUG::_0x4DC69742196F818A(40, 42, "NET_POSSE_VERSUS_IS_POSSE_VERSUS_RUNNING -- ", MISC::_0xF216F74101968DB0(Global_1108789.f_935.f_28 != -1));
	return Global_1108789.f_935.f_28 != -1;
}

void func_167(bool bParam0, float fParam1, bool bParam2)
{
	func_240(bParam0, 0, 0);
	if (func_241(bParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(bParam0, fParam1, bParam2);
		DEBUG::_0x1B08D1EB9D8C4931(2472, 183, "SET_OPEN_RATIO_OF_DOOR_ID - Setting Door ID ", func_206(bParam0, 0), " to fOpenRatio ", fParam1, ", bSnapToRatio ", bParam2);
		UNK_0x355E72323AEE83CC(183, 9);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "SET_OPEN_RATIO_OF_DOOR_ID - Invalid Door ID");
	}
}

void func_168()
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_FORCE_RELEASE_LOCAL_ACTIVE_HORSE");
	if (func_242(2, 255))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_FORCE_RELEASE_LOCAL_ACTIVE_HORSE - active horse is mission critical, ignoring delete request");
		return;
	}
	func_243(2);
}

void func_169()
{
	DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_FORCE_DELETE_LOCAL_ACTIVE_VEHICLE");
	if (func_244(8, 255))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 39, "NET_STABLE_FORCE_DELETE_LOCAL_ACTIVE_VEHICLE - active vehicle is mission critical, ignoring delete request");
		return;
	}
	func_245(3);
}

char* func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NMOON_PROPERTY_IPL_GROUP_STATE_WAIT";
		case 1:
			return "NMOON_PROPERTY_IPL_GROUP_STATE_STREAMING";
		case 2:
			return "NMOON_PROPERTY_IPL_GROUP_STATE_LOADED";
		case 3:
			return "NMOON_PROPERTY_IPL_GROUP_STATE_UNLOADING";
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

bool func_171()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_172(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_173(int iParam0)
{
	return Global_1277599.f_6.f_1[iParam0 /*3*/];
}

int func_174(vector3 vParam0, var uParam3)
{
	if (func_11(vParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return 0;
	}
	if (func_246(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return 0;
	}
	if (func_12(4, 255))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - An override had already been primed.  This will wipe out the previous setting.");
	}
	func_178(4);
	func_247(&(Global_1102630.f_3879));
	Global_1102630.f_3879.f_6 = { vParam0 };
	Global_1102630.f_3879 = uParam3;
	Global_1102630.f_3879.f_5 = 1;
	Global_1102630.f_26.f_3341 = 0;
	Global_1102630.f_26.f_3342 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE called.  Output starting...");
	func_248(Global_1102630.f_3879, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE ...Output Complete.");
	return 1;
}

void func_175(bool bParam0)
{
	if (!bParam0)
	{
		func_249(18);
	}
	else
	{
		func_178(18);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_176(bool bParam0)
{
	if (!bParam0)
	{
		func_249(19);
	}
	else
	{
		func_178(19);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_177(bool bParam0)
{
	if (bParam0)
	{
		func_178(133);
	}
	else
	{
		func_249(133);
	}
}

int func_178(int iParam0)
{
	if (func_250(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_251(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

void func_179(bool bParam0, bool bParam1)
{
	if (func_246(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_11(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (!bParam0)
	{
		func_249(0);
	}
	else
	{
		if (bParam1)
		{
			func_252(0, 0, 0, 1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Not clearing the spectator lock!");
			UNK_0x355E72323AEE83CC(36, 6);
		}
		func_178(0);
		func_253(&(Global_1102630.f_3849));
		Global_1102630.f_3849 = 0f;
		Global_1102630.f_3849.f_5 = 1;
		Global_1102630.f_3849.f_16 = 0;
		Global_1102630.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_17 = { Global_1901988.f_50.f_1, Global_1901988.f_50.f_1, Global_1901988.f_50.f_1 };
		Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_254(&(Global_1102630.f_3888));
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
	func_255(Global_1102630.f_3849, 36);
	func_256(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_180(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_257(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_258(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

char* func_181(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "MOON_BIT_ANIM_SET_UP";
		case 2:
			return "MOON_BIT_PLAYER_WARPED_TO_INTERIOR";
		case 4:
			return "MOON_BIT_PLAYER_WARPED_TO_EXTERIOR";
		case 8:
			return "MOON_BIT_PLAYER_ENTER_SOLO";
		case 16:
			return "MOON_BIT_PLAYER_ENTER_POSSE";
		case 32:
			return "MOON_BIT_PLAYER_EXIT_SOLO";
		case 64:
			return "MOON_BIT_DISABLED_DYNAMIC_SCENARIOS";
		case 128:
			return "MOON_BIT_PLAYER_EXITING_AFTER_INVITE";
		case 256:
			return "MOON_BIT_DOOR_PROMPTS_ENABLED";
		case 512:
			return "MOON_BIT_LOCAL_PLAYER_PED_HIDDEN";
		case 1024:
			return "MOON_BIT_IS_LOAD_SCENE_ACTIVE";
		case 2048:
			return "MOON_BIT_ARE_EXIT_LONGARMS_REATTACHED";
		case 4096:
			return "MOON_BIT_LONGARMS_HIDDEN";
		case 8192:
			return "MOON_BIT_WANTED_HELP_DISPLAYED";
		case 16384:
			return "MOON_BIT_IS_INVINCIBLE";
		case 32768:
			return "MOON_BIT_IS_COOP_FLOW_COMPLETE";
		case 65536:
			return "MOON_BIT_HORSE_STORED_ON_ENTRY";
		case 131072:
			return "MOON_BIT_FACILITY_INSTANCE_IS_LOCAL_PLAYERS";
		case 262144:
			return "MOON_BIT_FACILITY_INVITED_BY_NON_POSSE";
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

char* func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NMOON_CLIENT_BIT_IS_PLAYER_IN_SHACK";
		case 2:
			return "NMOON_CLIENT_BIT_LEADER_REQUESTS_POSSE_ENTER";
		case 4:
			return "NMOON_CLIENT_BIT_MEMBER_FOLLOWING_LEADER_POSSE_ENTER";
		case 8:
			return "NMOON_CLIENT_BIT_MEMBER_FOLLOWED_POSSE_ENTER";
		case 16:
			return "NMOON_CLIENT_BIT_MEMBER_EXITED_AFTER_FOLLOW_ENTER";
		case 32:
			return "NMOON_CLIENT_BIT_PLAYER_RUNNING_COOP_ENTRANCE";
		case 64:
			return "NMOON_CLIENT_BIT_COOP_OUTRO_COMPLETE";
		case 128:
			return "NMOON_CLIENT_BIT_INTERIOR_LOADED";
		case 256:
			return "NMOON_CLIENT_BIT_IN_SHOP_FAKE_INSTANCE";
		case 512:
			return "NMOON_CLIENT_BIT_CAN_PLAYER_RECEIVE_PROPERTY_INVITES";
		case 1024:
			return "NMOON_CLIENT_BIT_COOP_OUTRO_CUSTOM_POSITION_REQUIRED";
		case 2048:
			return "NMOON_CLIENT_BIT_PLAYER_EXITING_PROPERTY";
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

void func_183(bool bParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_SPAWN_HORSE_NEAR_PLAYER - bDisableResponse = ", MISC::_0xF216F74101968DB0(bParam0), " bIgnoreDeath = ", MISC::_0xF216F74101968DB0(bParam1));
	UNK_0x355E72323AEE83CC(40, 6);
	if (bParam0)
	{
		func_259(49);
	}
	if (bParam1)
	{
		func_259(51);
	}
	func_260(48);
	func_259(52);
	func_259(3);
}

Vector3 func_184(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_WARP_POSITION: invalid property ", func_7(iParam0, 0));
		return 0f, 0f, 0f;
	}
	if (iParam1 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_WARP_POSITION: invalid property warp ", func_7(iParam0, 0), " warp = ", func_145(iParam1, 0));
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	func_262(1268215321, func_208(iParam0), func_261(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &(Global_1277599.f_1)))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_WARP_POSITION: failed to retrieve name for property ", func_7(iParam0, 0));
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_185(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_WARP_HEADING: invalid property ", func_7(iParam0, 0));
		return 0f;
	}
	if (iParam1 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(680, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_WARP_HEADING: invalid property warp ", func_7(iParam0, 0), " warp = ", func_145(iParam1, 0));
		return 0f;
	}
	fVar0 = 0f;
	func_262(-226869021, func_208(iParam0), func_261(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&fVar0, &(Global_1277599.f_1)))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_WARP_HEADING: failed to retrieve name for property ", func_7(iParam0, 0));
		return 0f;
	}
	return fVar0;
}

void func_186(vector3 vParam0, float fParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_263(Global_1275959.f_17, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_264(vParam0, fParam3, vVar0, fVar3, sParam4, sParam5, iParam6, iParam7, fParam8, 1);
}

void func_187(int iParam0)
{
	if (iParam0 == 0)
	{
		MAP::_0xE057FEA9A22EB3EE(-347798845);
	}
	else if (iParam0 == 1)
	{
		MAP::_0xE057FEA9A22EB3EE(-1136456260);
	}
	else if (iParam0 == 2)
	{
		MAP::_0xE057FEA9A22EB3EE(518116088);
	}
	else if (iParam0 == 3)
	{
		MAP::_0xE057FEA9A22EB3EE(2142311577);
	}
	else if (iParam0 == 4)
	{
		MAP::_0xE057FEA9A22EB3EE(-1846003417);
	}
}

void func_188(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_114(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_213(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_265(iVar0);
	*uParam0 = 0;
}

char* func_189(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_GHOST_TYPE_ALL_PLAYERS";
		case 1:
			return "NET_GHOST_TYPE_ALL_PLAYERS_BUT_ALLIES";
		case 2:
			return "NET_GHOST_TYPE_ALL_PLAYERS_BUT_ALLIES_INCLUDE_HORSES";
		case 3:
			return "NUM_NET_GHOST_TYPES";
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

char* func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_GHOST_SOURCE_CUTSCENE";
		case 1:
			return "NET_GHOST_SOURCE_MISSION";
		case 2:
			return "NET_GHOST_SOURCE_SHOP";
		case 3:
			return "NET_GHOST_SOURCE_GFH_GIVER";
		case 4:
			return "NET_GHOST_SOURCE_FAST_TRAVEL_BARKER";
		case 5:
			return "NET_GHOST_SOURCE_TRANSITION";
		case 6:
			return "NET_GHOST_SOURCE_COLLECTABLES";
		case 7:
			return "NET_GHOST_SOURCE_STABLES";
		case 8:
			return "NET_GHOST_SOURCE_MOONSHINE_SHACK";
		case 9:
			return "NET_GHOST_SOURCE_CLOUD_DROP";
		case 10:
			return "NUM_NET_GHOST_SOURCES";
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

void func_191()
{
	DEBUG::_0xA308F935BDECCEC0(8, 162, "NET_HUD_SET_ALL_PLAYERS_NEED_UPDATED: Setting that all players need updated.");
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1072032.f_21420.f_260));
}

void func_192(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_194(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_266(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_196(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_267(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_268(iParam0, 0));
		return false;
	}
	if (func_269(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_268(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_270(iParam0, 1)) || func_271(32768))
	{
		if (!func_270(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_272())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_195(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_196(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

bool func_197(int iParam0)
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

int func_198(int iParam0)
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

char* func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UPSTAIRS"):
			return "MOONSHINE_VOLUME__UPSTAIRS";
		case joaat("GHOSTING_VOLUME"):
			return "MOONSHINE_VOLUME__GHOSTING_VOLUME";
		case joaat("STILL_ROOM"):
			return "MOONSHINE_VOLUME__STILL_ROOM";
		case joaat("UNGHOSTING_VOLUME"):
			return "MOONSHINE_VOLUME__UNGHOSTING_VOLUME";
		case joaat("MAGGIE_INTRO_TRIGGER_EXCLUSION"):
			return "MOONSHINE_VOLUME__MAGGIE_INTRO_TRIGGER_EXCLUSION";
		case joaat("MAGGIE_INTRO_TRIGGER"):
			return "MOONSHINE_VOLUME__MAGGIE_INTRO_TRIGGER";
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

bool func_200(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_201(var uParam0, float fParam1)
{
	if (!func_97(uParam0))
	{
		return false;
	}
	if (func_273(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_202(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_203(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_274() - fParam1);
	func_275(uParam0, 1);
	func_276(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_205()
{
	int iVar0;

	if (Global_1901988.f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1275959.f_21;
		if (iVar0 > Global_1901988.f_44.f_3 && iVar0 < Global_1901988.f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

var func_206(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-411541292);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

int func_207(bool bParam0, int iParam1)
{
	int iVar0;

	func_240(bParam0, 0, 0);
	if (func_241(bParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(bParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 183, "GET_DOOR_ENTITY_FROM_ID - Invalid Door ID");
	}
	return 0;
}

char* func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROPERTY_BAYOU");
		case 1:
			return joaat("PROPERTY_GRIZZLIES");
		case 2:
			return joaat("PROPERTY_HENNIGANS");
		case 3:
			return joaat("PROPERTY_HEARTLANDS");
		case 4:
			return joaat("PROPERTY_TALL_TREES");
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(40, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_HASH: invalid conversion ", func_7(iParam0, 0));
	return -1588462292;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GHOSTING_VOLUME");
		case 1:
			return joaat("UNGHOSTING_VOLUME");
		default:
			break;
	}
	DEBUG::_0x4423BBAB7EB2B96B(8, 225, "MOON_INSTANCE_GET_VOLUME_TYPE_FOR_INDEX - failed to find ", iParam0);
	return 0;
}

char* func_210(int iParam0, int iParam1)
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

bool func_211(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_212(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1952230[iParam0 /*23*/].f_4 = iParam1;
	Global_1952230[iParam0 /*23*/] = iParam4;
	Global_1952230[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1952230[iParam0 /*23*/].f_2 = iParam5;
	Global_1952230[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1952230[iParam0 /*23*/].f_9 = fParam9;
	Global_1952230[iParam0 /*23*/].f_10 = iParam10;
	Global_1952230[iParam0 /*23*/].f_11 = iParam11;
	Global_1952230[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_5 = iParam12;
	Global_1952230[iParam0 /*23*/].f_1 = 2;
	Global_1952230[iParam0 /*23*/].f_17 = -1;
	Global_1952230[iParam0 /*23*/].f_18 = bParam16;
	Global_1952230[iParam0 /*23*/].f_19 = iParam15;
	Global_1952230[iParam0 /*23*/].f_20 = bParam25;
	Global_1952230[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1952230[iParam0 /*23*/].f_3 = iVar0;
	func_215(iParam0, 1);
	func_216(iParam0, 1);
	func_217(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_277(iParam14, 0));
}

int func_213(int iParam0)
{
	return iParam0;
}

void func_214(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 - (Global_1952230[iParam0 /*23*/].f_1 && iParam1));
}

void func_215(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_211(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_216(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_217(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_219(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_278(iParam0) && func_279(Global_1216712[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_220(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_280(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_221(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return joaat("COLOR_NET_PLAYER3");
		case 1:
			return joaat("COLOR_NET_PLAYER4");
		case 2:
			return joaat("COLOR_NET_PLAYER5");
		case 3:
			return joaat("COLOR_NET_PLAYER6");
		case 4:
			return joaat("COLOR_NET_PLAYER7");
		case 5:
			return joaat("COLOR_NET_PLAYER8");
		case 6:
			return joaat("COLOR_NET_PLAYER9");
		case 7:
			return joaat("COLOR_NET_PLAYER10");
		case 8:
			return joaat("COLOR_NET_PLAYER11");
		default:
			break;
	}
	return joaat("COLOR_NET_PLAYER2");
}

int func_222(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1275959.f_15 && !func_281())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

int func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_282(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1100880[iVar3 /*53*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901988.f_725.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901988.f_725.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901988.f_725.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901988.f_725.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901988.f_725.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901988.f_725.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_224(int iParam0, bool bParam1)
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

bool func_225(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28390), sVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28391), sVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28389), sVar0))
		{
			return true;
		}
	}
	if (func_283(iParam0))
	{
		return true;
	}
	return !func_224(iParam0, 0);
}

bool func_226(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28390), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28391), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28389), iVar0))
		{
			return true;
		}
	}
	if (func_284(iParam0))
	{
		return false;
	}
	if (func_283(iParam0))
	{
		return false;
	}
	if (func_285(iParam0))
	{
		return true;
	}
	return func_286(iParam0);
}

int func_227(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_287(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR INT_INDEX_TO_HASH_ENUM - Unknown Enum Value ", iParam0, ", returning '0'");
	}
	return StackVal;
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR INT_INDEX_TO_HASH_ENUM - Unknown Enum Value ", iParam0, ", returning '0'");
	}
	return StackVal;
}

char* func_229(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_230(var uParam0)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = func_288(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uVar0);
	DEBUG::_0xF0783374333FD8CE(680, 32, "BROADCAST_MOONSHINE_EVENT - event ", func_289(uParam0->f_4, 0), " sent to ", func_290(SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&uVar0, 0)));
}

void func_231(bool bParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(136, 157, "FORCE_SATCHEL_ACTIVE_STATE(", bParam0, ")");
	if (bParam0)
	{
		Global_1940463 = 1;
		g_satchelData.iForcedUIActivity = iParam1;
	}
	else
	{
		Global_1940463 = 2;
	}
}

bool func_232(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939645.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939645[iVar0 /*16*/].f_10)))
		{
			func_291(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_233(bool bParam0)
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

char* func_234(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MOON_DOOR_NONE";
		case 1:
			return "MOON_DOOR_ENTER_FRONT";
		case 2:
			return "MOON_DOOR_ENTER_SIDE";
		case 3:
			return "MOON_DOOR_EXIT_FRONT";
		case 4:
			return "MOON_DOOR_EXIT_SIDE";
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

bool func_235()
{
	return Global_1940237 == 2;
}

bool func_236()
{
	return Global_1940237 == 1;
}

int func_237(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

char* func_238(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MOON_ENTER_CAMERA_INVALID";
		case 1:
			return "MOON_ENTER_CAMERA_HARD_CUT_TO_BLACK";
		case 2:
			return "MOON_ENTER_CAMERA_FADE_IN";
		case 3:
			return "MOON_ENTER_CAMERA_WAIT_FOR_ENTRANCE";
		case 4:
			return "MOON_ENTER_CAMERA_FADE_FOR_LOADSCENE";
		case 5:
			return "MOON_ENTER_CAMERA_DONE";
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

void func_239(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

bool func_240(bool bParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_206(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, false, false, 0, 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add Door ", func_206(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051590.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(bParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(bParam0, true, true, false, Global_1051590.f_16[0], 0, false);
			DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Add networked Door ", func_206(bParam0, 0), " to system");
			UNK_0x355E72323AEE83CC(183, 7);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(bParam0, 1);
		DEBUG::_0xA308F935BDECCEC0(168, 183, "REGISTER_DOOR_ID: Set door ", func_206(bParam0, 0), " able to change open ratio while locked");
		UNK_0x355E72323AEE83CC(183, 7);
	}
	return bParam0;
}

bool func_241(bool bParam0)
{
	if (func_292(bParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(bParam0);
	}
	return false;
}

bool func_242(int iParam0, int iParam1)
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

void func_243(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_RELEASE_LOCAL_MOUNT");
	func_293(3, iParam0);
}

bool func_244(int iParam0, int iParam1)
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

void func_245(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 40, "NET_STABLE_DELETE_LOCAL_MOUNT");
	func_293(2, iParam0);
}

int func_246(int iParam0)
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

void func_247(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_248(struct<7> Param0, var uParam7, var uParam8, int iParam9)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Absolute Start         ");
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
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Absolute End         ");
}

int func_249(int iParam0)
{
	if (func_294(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_251(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

bool func_250(var uParam0, int iParam1, int iParam2)
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

char* func_251(int iParam0)
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

void func_252(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_295(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_296(iParam0, 0));
	if (!func_297(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_298(128) && !func_299(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_300() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_249(18);
	}
	func_301(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

void func_253(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_254(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_255(struct<30> Param0, int iParam30)
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
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_210(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_210(Param0.f_6.f_9, 0));
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

void func_256(struct<7> Param0, var uParam7, var uParam8, int iParam9)
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

void func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	UNK_0x355E72323AEE83CC(36, 7);
	DEBUG::_0xF0783374333FD8CE(168, 36, "__NET_SET_PLAYER_CONTROL_ON - Called from ", UNK_0x8F77B33B6A34D8BA(), " - Don't call this every frame!");
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_ON - NPCF_RETAIN_TRANSITION_POLISH_EFFECTS is set.  Hope you meant that.");
	}
	else
	{
		func_302();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_258(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	UNK_0x355E72323AEE83CC(36, 7);
	DEBUG::_0xF0783374333FD8CE(168, 36, "__NET_SET_PLAYER_CONTROL_OFF - Called from ", UNK_0x8F77B33B6A34D8BA(), " - Don't call this every frame!");
	if (!bParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Invisible");
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Invincible");
	}
	if (bParam2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Freeze Position");
	}
	if (bParam3)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Clear Tasks");
	}
	if (bParam6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Clear Tasks but allow crouching");
	}
	if (bParam4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Leave Camera On");
	}
	if (bParam5)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Disable Ped Backoff On");
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
			DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Collision disabled");
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

void func_259(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_SET_SYSTEM_FLAG: ", func_303(iParam0, 0));
	if (!func_304(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_SET_SYSTEM_FLAG - Invalid flag passed in.");
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1904139.f_496[iVar0]), iVar1);
}

void func_260(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_CLEAR_SYSTEM_FLAG: ", func_303(iParam0, 0));
	if (!func_304(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_SET_SYSTEM_FLAG - Invalid flag passed in.");
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1904139.f_496[iVar0]), iVar1);
}

char* func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EXTERIOR_FRONT");
		case 1:
			return joaat("EXTERIOR_SIDE");
		case 2:
			return joaat("INTERIOR_GROUND_FRONT");
		case 3:
			return joaat("INTERIOR_GROUND_SIDE");
		case 4:
			return joaat("INTERIOR_BAR");
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(40, 225, "[MOON] NET_MOONSHINE_XML__GET__PROPERTY_WARP_HASH: invalid conversion ", func_145(iParam0, 0));
	return -1950033077;
}

void func_262(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	DEBUG::_0x1B08D1EB9D8C4931(2216, 225, "NET_MOONSHINE_XML__INIT__QUERY: RQID = ", func_305(iParam0, 0), " arg0 = ", sParam1, " arg1 = ", sParam2);
	func_306();
	Global_1277599.f_1.f_2 = iParam0;
	Global_1277599.f_1.f_3 = sParam1;
	Global_1277599.f_1.f_4 = sParam2;
	Global_1277599.f_1.f_1 = iParam3;
}

bool func_263(vector3 vParam0, char* sParam3, bool bParam4)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = Global_1072032.f_23926.f_366[func_307(vParam0) /*272*/];
	iVar1 = func_308(sVar0);
	if (iVar1 <= 0)
	{
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_NEAREST_RANDOM_FAST_TRAVEL_SPAWN_POINT - ", sVar0, " has no spawn points");
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_NEAREST_RANDOM_FAST_TRAVEL_SPAWN_POINT - Getting point for station ", sVar0, " point ", iVar2);
		if (func_309(sVar0, iVar2, sParam3, bParam4))
		{
			return true;
		}
		DEBUG::_0xF0783374333FD8CE(136, 36, "__NPS__GET_NEAREST_RANDOM_FAST_TRAVEL_SPAWN_POINT - Couldn't retrieve data for station ", sVar0, " point ", iVar2);
	}
	return false;
}

void func_264(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_246(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_11(vParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901988.f_50;
		fParam9 = Global_1901988.f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - vDesiredSpawnInnerScale AND vDesiredSpawnOuterScale set to 0.  You can't do that.");
		fParam8 = Global_1901988.f_50;
		fParam9 = Global_1901988.f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - vDesiredSpawnOuterScale < vDesiredSpawnInnerScale.  You can't do that.");
		fParam8 = Global_1901988.f_50;
		fParam9 = Global_1901988.f_50.f_1;
	}
	if (bParam10)
	{
		func_252(0, 0, 0, 1);
	}
	else
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK - Not clearing the spectator lock!");
		UNK_0x355E72323AEE83CC(36, 6);
	}
	func_178(0);
	func_178(3);
	Global_1102630.f_3919 = iParam11;
	Global_1102630.f_3920 = fParam12;
	Global_1102630.f_3921 = iParam13;
	func_253(&(Global_1102630.f_3849));
	Global_1102630.f_3849 = fParam3;
	Global_1102630.f_3849.f_5 = 1;
	Global_1102630.f_3849.f_17.f_6 = { vParam0 };
	Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102630.f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
	if (fParam8 > 1f)
	{
		Global_1102630.f_3849.f_16 = 1;
		Global_1102630.f_3849.f_6.f_6 = { Global_1102630.f_3849.f_17.f_6 };
		Global_1102630.f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102630.f_3849.f_6.f_9 = joaat("VOLSPHERE");
	}
	func_254(&(Global_1102630.f_3888));
	Global_1102630.f_3888.f_6 = { vParam4 };
	Global_1102630.f_3888 = fParam7;
	Global_1102630.f_3888.f_5 = 1;
	Global_1102630.f_26.f_3341 = 0;
	Global_1102630.f_26.f_3342 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK called.  Output starting...");
	func_255(Global_1102630.f_3849, 36);
	func_256(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_DESIRED_WITH_FALLBACK ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_265(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_310(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1952230[iParam0 /*23*/].f_3);
	}
	Global_1952230[iParam0 /*23*/].f_4 = 0;
	Global_1952230[iParam0 /*23*/] = 1;
	Global_1952230[iParam0 /*23*/].f_16 = 0;
	Global_1952230[iParam0 /*23*/].f_1 = 0;
	Global_1952230[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_9 = 0f;
	Global_1952230[iParam0 /*23*/].f_10 = 0;
	Global_1952230[iParam0 /*23*/].f_11 = 0;
	Global_1952230[iParam0 /*23*/].f_2 = 1;
	Global_1952230[iParam0 /*23*/].f_15 = -1f;
}

bool func_266(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_267(int iParam0)
{
	if (func_270(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_268(int iParam0, int iParam1)
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

bool func_269(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_268(iParam0, 0), " Seconds ", iVar2);
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

bool func_270(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_271(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_272()
{
	if (!func_311())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

float func_273(var uParam0)
{
	if (!func_97(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_312(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_274() - uParam0->f_1);
}

float func_274()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_276(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_277(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UCM_PRESS";
		case 1:
			return "UCM_TIMED_PRESS";
		case 2:
			return "UCM_RELEASE";
		case 3:
			return "UCM_HOLD";
		case 4:
			return "UCM_METERED";
		case 5:
			return "UCM_METER_STANDARD_TIME";
		case 6:
			return "UCM_AUTO_FILL";
		case 7:
			return "UCM_AUTO_FILL_WITH_DECAY";
		case 8:
			return "UCM_MASH";
		case 9:
			return "UCM_MASH_AUTO_FILL";
		case 10:
			return "UCM_MASH_RESISTANCE";
		case 11:
			return "UCM_MASH_RESISTANCE_CAN_FAIL";
		case 12:
			return "UCM_MASH_RESISTANCE_DYNAMIC";
		case 13:
			return "UCM_MASH_RESISTANCE_DYNAMIC_CAN_FAIL";
		case 14:
			return "UCM_MASH_INDEFINITELY";
		case 15:
			return "UCM_ROTATE";
		case 16:
			return "UCM_TARGET_METER";
		case 17:
			return "UCM_NONE";
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

bool func_278(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_279(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_280(struct<2> Param0)
{
	int iVar0;

	if (!func_92(Param0))
	{
		return -1;
	}
	iVar0 = func_313(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072032.f_19554.f_1[iVar0 /*3*/].f_2;
}

bool func_281()
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
	if (!func_92(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_282(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1139844.f_5568)
	{
		return 0f;
	}
	if (iParam0 == Global_1275959.f_154[Global_1275959])
	{
		return Global_17414.f_2641;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && Global_1100880[iVar0 /*53*/].f_18 >= Global_1100880[iVar0 /*53*/].f_45)
	{
		return Global_1100880[iVar0 /*53*/].f_18;
	}
	return Global_1100880[iVar0 /*53*/].f_45;
}

bool func_283(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28388), sParam0))
	{
		return true;
	}
	return false;
}

bool func_284(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

bool func_285(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28386), sParam0))
	{
		return true;
	}
	return false;
}

bool func_286(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_314(iParam0);
		return false;
	}
	if (func_285(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, iParam0) != 2)
		{
			func_315(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275959.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, iParam0) == 2);
}

bool func_287(struct<2> Param0, bool bParam2)
{
	if (!func_92(Param0))
	{
		return false;
	}
	func_316(bParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(bParam2, &(Global_1072032.f_640.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

var func_288(int iParam0, int iParam1)
{
	return func_317(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

char* func_289(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_MOONSHINE_EVENT_UNDEFINED";
		case 1:
			return "NET_MOONSHINE_EVENT_INVITE_PLAYER";
		case 2:
			return "NET_MOONSHINE_EVENT_COOP_INVITE";
		case 3:
			return "NET_MOONSHINE_EVENT_PLAYER_DANCING";
		case 4:
			return "NET_MOONSHINE_EVENT_ANIM_SCENE_START";
		case 5:
			return "NET_MOONSHINE_EVENT_POSSE_ENTER_REQUEST";
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

char* func_290(int iParam0)
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

void func_291(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 106, "REMOVE_SCRIPT_AT_QUEUE_IDX: Attempting to remove a script launcher object using an invalid queue index!");
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939645[iParam0 /*16*/].f_10)))
	{
		DEBUG::_0xF0783374333FD8CE(136, 106, "REMOVE_SCRIPT_AT_QUEUE_IDX: No valid script to remove at queue index ", iParam0, "!");
		return;
	}
	Global_1939645[iParam0 /*16*/] = { Var0 };
	Global_1939645.f_161 = (Global_1939645.f_161 - 1);
	if (Global_1939645.f_161 < 0)
	{
		Global_1939645.f_161 = 0;
	}
}

bool func_292(bool bParam0)
{
	return bParam0 != 0;
}

void func_293(int iParam0, int iParam1)
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
	DEBUG::_0xA308F935BDECCEC0(40, 40, "***     Event Type: ", func_318(Var0.f_4, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 40, "*** Mount Instance: ", func_319(Var0.f_5));
}

bool func_294(var uParam0, int iParam1, int iParam2)
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

void func_295(int iParam0)
{
	Global_1102630.f_26.f_12 = iParam0;
}

char* func_296(int iParam0, int iParam1)
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

bool func_297(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

bool func_298(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

bool func_299(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
}

int func_300()
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

void func_301(int iParam0)
{
	if (func_320(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

void func_302()
{
	if (!Global_1102630.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REQUEST_CLEAN_EVERYTHING_ASAP - Bailing early.  Player has not completed the first respawn.");
		return;
	}
	Global_1072032.f_28725.f_5 = 1;
	DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REQUEST_CLEAN_EVERYTHING_ASAP");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
	UNK_0x355E72323AEE83CC(-1, 6);
}

char* func_303(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSSF_INVALID";
		case 0:
			return "NSSF__MP__WHISTLE_DISABLED_THIS_FRAME";
		case 1:
			return "NSSF__MP__WHISTLE_DISABLED_THIS_FRAME_NO_HELP_TEXT";
		case 2:
			return "NSSF__MP__WHISTLE_DISABLED_THIS_FRAME_NO_HELP_TEXT_AND_NO_AUDIO";
		case 3:
			return "NSSF__MP__WHISTLE_SIMMED";
		case 4:
			return "NSSF__MP__WHISTLE_BUTTON_PRESSED";
		case 5:
			return "NSSF__MP__BONDING_DISABLED";
		case 6:
			return "NSSF__MP__INVENTORY_CACHE_IN_PROGRESS";
		case 7:
			return "NSSF__MP__INVENTORY_CACHE_NEEDS_RESTART";
		case 8:
			return "NSSF__MP__DISABLE_MOUNT_PERMADEATH";
		case 9:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_ME";
		case 10:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_GANG";
		case 11:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_CREW";
		case 12:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_FRIENDS";
		case 13:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_ANYONE";
		case 14:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_ME";
		case 15:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_GANG";
		case 16:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_CREW";
		case 17:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_FRIENDS";
		case 18:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_ANYONE";
		case 19:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_ME";
		case 20:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_GANG";
		case 21:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_CREW";
		case 22:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_FRIENDS";
		case 23:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_ANYONE";
		case 24:
			return "NSSF__MP__STABLING_FEES_DISABLED";
		case 25:
			return "NSSF__MP__STABLING_FEES_DISABLED_THIS_RUN";
		case 26:
			return "NSSF__MP__STABLING_FEES_CALCULATED";
		case 27:
			return "NSSF__MP__STABLING_FEES_SUSPEND_CALCULATION";
		case 28:
			return "NSSF__MP__STABLING_FEES_SUSPEND_CALCULATION_THIS_RUN";
		case 29:
			return "NSSF__MP__STABLING_FEES_FORGIVE_IMMEDIATELY";
		case 30:
			return "NSSF__MP__STABLING_FEES_PAYMENT_SENT";
		case 31:
			return "NSSF__MP__MENU__MOUNT_LIST_INITIALIZED";
		case 32:
			return "NSSF__MP__MENU__INSPECTION_PANEL_INITIALIZED";
		case 33:
			return "NSSF__MP__MENU__SHOW_MOUNT_FILTER_OPTIONS";
		case 34:
			return "NSSF__MP__MENU__MOUNT_RENAME_REQUESTED";
		case 35:
			return "NSSF__MP__HORSE__DISMISS_ACTIVE_MOUNT";
		case 36:
			return "NSSF__MP__HORSE__TEMP_HORSE_ADDED";
		case 37:
			return "NSSF__MP__HORSE__SCANNER_SEARCH_STARTED";
		case 38:
			return "NSSF__MP__HORSE__SCANNER_SEARCH_DONE";
		case 39:
			return "NSSF__MP__HORSE__DESIRED_HORSE_SEARCH_IN_PROGRESS";
		case 40:
			return "NSSF__MP__HORSE__SEARCH_COLLECTION_CREATED";
		case 41:
			return "NSSF__MP__HORSE__WAIT_FOR_ACTIVE_HORSE_TO_BE_DELETED";
		case 42:
			return "NSSF__MP__HORSE__DISABLE_RESPAWN_DELAY";
		case 43:
			return "NSSF__MP__HORSE__USE_MISSION_OVERRIDE_SLOT";
		case 44:
			return "NSSF__MP__HORSE__SUPPRESS_BLIP";
		case 45:
			return "NSSF__MP__HORSE__SUPPRESS_NAMEPLATE";
		case 46:
			return "NSSF__MP__HORSE__DISABLE_AUTOMATIC_DESPAWN";
		case 47:
			return "NSSF__MP__HORSE__INSPECTION_MENU_DISABLED";
		case 48:
			return "NSSF__MP__HORSE__DISMISSED_HORSE_RECENTLY";
		case 49:
			return "NSSF__MP__HORSE__DISABLE_WHISTLE_RESPONSE";
		case 50:
			return "NSSF__MP__HORSE__IGNORE_DEATH_CALLABLE_CHECK";
		case 51:
			return "NSSF__MP__HORSE__IGNORE_DEATH_CALLABLE_CHECK_ONCE";
		case 52:
			return "NSSF__MP__HORSE__SUPPRESS_FAILED_SPAWN_HELP_TEXT";
		case 53:
			return "NSSF__MP__HORSE__MISSION_PED_RESERVED";
		case 54:
			return "NSSF__MP__HORSE__FORCE_EXISTENCE_FOR_ALL_PLAYERS";
		case 55:
			return "NSSF__MP__HORSE__DISABLE_GUNSHOT_REACTION";
		case 56:
			return "NSSF__MP__HORSE__SUPPRESS_HORSE_FLEE";
		case 57:
			return "NSSF__MP__HORSE__DISABLE_FATALLY_WOUNDED_BEHAVIOR";
		case 58:
			return "NSSF__MP__HORSE__DISABLE_JUMP_TO_HORSE";
		case 59:
			return "NSSF__MP__HORSE__DISABLE_DEFAULT_AMBIENT_TASK";
		case 60:
			return "NSSF__MP__HORSE__DISABLE_WEAPONS_PROMPT";
		case 61:
			return "NSSF__MP__HORSE__DISABLE_WEAPONS_EXCHANGE";
		case 62:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_WEAPONS_HOLD";
		case 63:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_WEAPONS";
		case 64:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_ITEMS";
		case 65:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_FLEE";
		case 66:
			return "NSSF__MP__HORSE__OVERRIDE_HORSE_WHISTLE";
		case 67:
			return "NSSF__MP__HORSE__ACTIVE_HORSE_IS_INVULNERABLE";
		case 68:
			return "NSSF__MP__HORSE__ACTIVE_HORSE_KEEP_IN_FAST_INSTANCE";
		case 69:
			return "NSSF__MP__HORSE__ACTIVE_HORSE_NOT_READY_TO_RENDER";
		case 70:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_REQUEST_STARTED";
		case 71:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_REQUEST_COMPLETE";
		case 72:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_REQUEST_CANCELLED";
		case 73:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_DELETE_ACTIVE_MOUNT";
		case 74:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_MASTER_SET";
		case 75:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_USING_MISSION_OVERRIDE";
		case 76:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_GROUND_SNAP";
		case 77:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_FORCE_SPAWN_CLOSE";
		case 78:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_REQUEST_STARTED";
		case 79:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_REQUEST_COMPLETE";
		case 80:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_DELETE_ACTIVE_MOUNT";
		case 81:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_REQUEST_IS_PERMANENT";
		case 82:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_TRANSACTION_SENT";
		case 83:
			return "NSSF__MP__VEHICLE__DISMISS_ACTIVE_MOUNT";
		case 84:
			return "NSSF__MP__VEHICLE__TEMP_VEHICLE_ADDED";
		case 85:
			return "NSSF__MP__VEHICLE__DESIRED_VEHICLE_SEARCH_IN_PROGRESS";
		case 86:
			return "NSSF__MP__VEHICLE__SEARCH_COLLECTION_CREATED";
		case 87:
			return "NSSF__MP__VEHICLE__USE_MISSION_OVERRIDE_SLOT";
		case 88:
			return "NSSF__MP__VEHICLE__SCANNER_CREATED";
		case 89:
			return "NSSF__MP__VEHICLE__SCANNER_SEARCH_DONE";
		case 90:
			return "NSSF__MP__VEHICLE__SUPPRESS_BLIP";
		case 91:
			return "NSSF__MP__VEHICLE__SUPPRESS_NAMEPLATE";
		case 92:
			return "NSSF__MP__VEHICLE__DISABLE_AUTOMATIC_DESPAWN";
		case 93:
			return "NSSF__MP__VEHICLE__MISSION_VEHICLE_RESERVED";
		case 94:
			return "NSSF__MP__VEHICLE__ACTIVE_VEHICLE_SUSPENDED_BY_MISSION";
		case 95:
			return "NSSF__MP__VEHICLE__ACTIVE_VEHICLE_DISMISSED_RECENTLY";
		case 96:
			return "NSSF__MP__VEHICLE__ACTIVE_VEHICLE_DRAFT_HORSES_DETACHABLE";
		case 97:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_REQUESTED";
		case 98:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_TRANSITION";
		case 99:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_STARTED";
		case 100:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_SUMMONING";
		case 101:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_REQUEST_STARTED";
		case 102:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_REQUEST_CANCELLED";
		case 103:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_REQUEST_COMPLETE";
		case 104:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_DELETE_ACTIVE_MOUNT";
		case 105:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_FORCE_DESIRED_MODEL";
		case 106:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_FORCE_TEMPORARY";
		case 107:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_MASTER_SET";
		case 108:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_USING_MISSION_OVERRIDE";
		case 109:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_GROUND_SNAP";
		case 110:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_REQUEST_STARTED";
		case 111:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_REQUEST_COMPLETE";
		case 112:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_DELETE_ACTIVE_MOUNT";
		case 113:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_REQUEST_IS_PERMANENT";
		case 114:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_TRANSACTION_SENT";
		case 115:
			return "NSSF__MP__STABLE_MISSION__LAUNCHER_DISABLED";
		case 116:
			return "NSSF__MP__STABLE_MISSION__LAUNCH_REQUEST_PROCESSING";
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

bool func_304(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

char* func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142057862:
			return "NMOON_XML_RQID_CORE_PED_POSITION";
		case -2124312922:
			return "NMOON_XML_RQID_PROPERTY_SHOP_PROMPT_VOLUME_COUNT";
		case -2114138162:
			return "NMOON_XML_RQID_CORE_PED_MODEL";
		case -2098686824:
			return "NMOON_XML_RQID_ANIM_SCENE_COUNT_ENTITY";
		case -2091297948:
			return "NMOON_XML_RQID_PATRON_GET_PROP_NAME_HASH_AT_INDEX";
		case -2076458458:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_PLAYLIST_BY_HASH";
		case -2059428283:
			return "NMOON_XML_RQID_GET_SOUND_POSITION_AT_INDEX";
		case -2058370749:
			return "NMOON_XML_RQID_PROPERTY_NO_APPROACH_VOLUME_SELECT";
		case -2011971270:
			return "NMOON_XML_RQID_VOLUME_NAME";
		case -2003852470:
			return "NMOON_XML_RQID_GET_SOUND_POSITION_BY_TAG";
		case -2002424295:
			return "NMOON_XML_RQID_VOLUMES";
		case -1973132446:
			return "NMOON_XML_RQID_COUNT_SOUNDS";
		case -1966295520:
			return "NMOON_XML_RQID_PROPERTY_SHOP_VOLUME_ORIENT_AT_INDEX";
		case -1959657965:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_PLAYLISTS";
		case -1955083908:
			return "NMOON_XML_RQID_PATRON_SELECT_UPGRADE_POOL_AT_STAGE";
		case -1871428712:
			return "NMOON_XML_RQID_PATRON_SELECT_PROP_GROUPS";
		case -1854998694:
			return "NMOON_XML_RQID_UPGRADE_GET_UPGRADE_OVERRIDE_PLACEMENT_ROTATION";
		case -1760795904:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_FADEOUT";
		case -1744239591:
			return "NMOON_XML_RQID_PROPERTY_NO_APPROACH_VOLUME_ORIENT_AT_INDEX";
		case -1708292956:
			return "NMOON_XML_RQID_ANIM_SCENE_COUNT_HIDE";
		case -1670414447:
			return "NMOON_XML_RQID_PROPERTY_BAR_ROOM_VOLUME_ORIENT_AT_INDEX";
		case -1659727752:
			return "NMOON_XML_RQID_PROPERTY_SHOP_PROMPT_VOLUME_TYPE";
		case -1652392295:
			return "NMOON_XML_RQID_PROPERTY_NO_SPAWN_VOLUME_COORDS_AT_INDEX";
		case -1648516581:
			return "NMOON_XML_RQID_THEME_NAVMESH_SWAP_WITH_BANDSPACE";
		case -1627797674:
			return "NMOON_XML_RQID_VOLUME_BY_HASH";
		case -1618722936:
			return "NMOON_XML_RQID_THEME_INTERIOR";
		case -1599170465:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_POSITION";
		case -1586322073:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_DRESSING";
		case -1558670652:
			return "NMOON_XML_RQID_STILL_SHOP_POSSE_MEMBER_PROMPT_VOLUME_COUNT";
		case -1518164864:
			return "NMOON_XML_RQID_PROPERTY_SHOP_VOLUME_COUNT";
		case -1480766764:
			return "NMOON_XML_RQID_DOOR_POS_BY_INDEX";
		case -1471263662:
			return "NMOON_XML_RQID_PROPERTY_NO_APPROACH_VOLUME_COORDS_AT_INDEX";
		case -1467009352:
			return "NMOON_XML_RQID_VOLUME_COUNT";
		case -1407177680:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_SEARCH_BY_IDX";
		case -1398443291:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_HIDE_BY_IDX";
		case -1376279423:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_FOR_PROPERTY_HAS_DRESSING";
		case -1320599513:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_MODEL";
		case -1288148227:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_SEARCHES";
		case -1272267439:
			return "NMOON_XML_RQID_PROPERTY_STILL_SELECT";
		case -1265603269:
			return "NMOON_XML_RQID_UPGRADE_STAGE_REQUIRES_PROPERTY";
		case -1239119638:
			return "NMOON_XML_RQID_CORE_PED_IS_LOCAL";
		case -1188309159:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_SEARCH_BY_HASH";
		case -1170054259:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_VOLUME_COUNT";
		case -1136618954:
			return "NMOON_XML_RQID_GET_SOUND_SET_BY_TAG";
		case -1129282016:
			return "NMOON_XML_RQID_CORE_PED_HEADING";
		case -1084365561:
			return "NMOON_XML_RQID_VOLUME_POSITION";
		case -1048579552:
			return "NMOON_XML_RQID_CORE_PED_SCENARIO_POSITION";
		case -1044597192:
			return "NMOON_XML_RQID_CORE_PED_SCENARIO_TYPE";
		case -999926214:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_JOBBRIEFS";
		case -987167647:
			return "NMOON_XML_RQID_GUEST_LIST_POSITION_REFINED";
		case -962163907:
			return "NMOON_XML_RQID_PROPERTY_NO_APPROACH_VOLUME_SCALE_AT_INDEX";
		case -952199418:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_VOLUME_ORIENT_AT_INDEX";
		case -919610406:
			return "NMOON_XML_RQID_STILL_SHOP_POSSE_MEMBER_PROMPT_VOLUME_SCALE_AT_INDEX";
		case -917803715:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_ENDING_SECTION";
		case -904102397:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_LAYOUT_GROUP_SCENARIO_PROP_AT_INDEX";
		case -878740884:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_VOLUME_SCALE_AT_INDEX";
		case -867644014:
			return "NMOON_XML_RQID_STILL_SHOP_VOLUME_ORIENT_AT_INDEX";
		case -867045637:
			return "NMOON_XML_RQID_ANIM_SCENE_COUNT_FLAG";
		case -849080781:
			return "NMOON_XML_RQID_PATRON_COUNT_UPGRADE_POOL_GROUP_PATRON_GROUPS";
		case -848928450:
			return "NMOON_XML_RQID_PATRON_SELECT_PATRON_GROUP_AT_STAGE";
		case -828826821:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_ORIGINS";
		case -815157487:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_LAYOUT_GROUP_PED_MODEL_AT_INDEX";
		case -809283813:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_LAYOUT_GROUP_PED_POSITION_AT_INDEX";
		case -807402952:
			return "NMOON_XML_RQID_PROPERTY_SHOP_VOLUME_TYPE";
		case -789055036:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_JOBBRIEF_BY_HASH";
		case -761908433:
			return "NMOON_XML_RQID_PATRON_GET_PROP_PLACEMENT_POSITION_FOR_THEME";
		case -758300899:
			return "NMOON_XML_RQID_GET_SOUND_SET_AT_INDEX";
		case -721454775:
			return "NMOON_XML_RQID_PROPERTY_SHOP_VOLUME_COORDS_AT_INDEX";
		case -709674112:
			return "NMOON_XML_RQID_DOOR_ID";
		case -700888093:
			return "NMOON_XML_RQID_UPGRADE_SELECT_STAGE_AT_INDEX";
		case -661540078:
			return "NMOON_XML_RQID_ANIM_SCENE_PROP_POSITION";
		case -658248538:
			return "NMOON_XML_RQID_BUSINESS_RACK_ROTATION";
		case -654794272:
			return "NMOON_XML_RQID_UPGRADE_GET_UPGRADE_OVERRIDE_MODEL";
		case -649516596:
			return "NMOON_XML_RQID_PROPERTY_SHOP_PROMPT_VOLUME_SCALE_AT_INDEX";
		case -635633622:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_RADIUS";
		case -600021699:
			return "NMOON_XML_RQID_VOLUME_SCALE";
		case -594469496:
			return "NMOON_XML_RQID_GET_SOUND_NAME_BY_TAG";
		case -585691327:
			return "NMOON_XML_RQID_PATRON_COUNT_SCENARIO_PROPS";
		case -566845905:
			return "NMOON_XML_RQID_PROPERTY_BAR_ROOM_VOLUME_TYPE";
		case -563290338:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_DRESSING_THEME";
		case -516034592:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_ENTITY_BY_IDX";
		case -501498494:
			return "NMOON_XML_RQID_PROPERTY_NO_SPAWN_VOLUME_COUNT";
		case -485277669:
			return "NMOON_XML_RQID_CORE_PED_SCENARIO_RANGE";
		case -459963775:
			return "NMOON_XML_RQID_STILL_SHOP_VOLUME_SCALE_AT_INDEX";
		case -450267082:
			return "NMOON_XML_RQID_PROPERTY_NO_SPAWN_VOLUME_SCALE_AT_INDEX";
		case -402054209:
			return "NMOON_XML_RQID_PROPERTY_BAR_ROOM_VOLUME_SCALE_AT_INDEX";
		case -310041764:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_SET";
		case -309957436:
			return "NMOON_XML_RQID_GET_SOUND_ENABLED_BY_TAG";
		case -303134866:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR";
		case -298353396:
			return "NMOON_XML_RQID_NAME";
		case -246323496:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_FLAGS";
		case -226869021:
			return "NMOON_XML_RQID_WARP_HEADING";
		case -204010186:
			return "NMOON_XML_RQID_VOLUME_COMPONENT_BY_IDX";
		case -163017820:
			return "NMOON_XML_RQID_CORE_PED_OUTFIT";
		case -149503993:
			return "NMOON_XML_RQID_THEME_NAVMESH_SWAP_ON_MAP";
		case -141423389:
			return "NMOON_XML_RQID_DANCE_EMOTE_HASH_AT_INDEX";
		case -97479043:
			return "NMOON_XML_RQID_PATRON_SELECT_UPGRADE_LAYOUT_GROUP";
		case -85904298:
			return "NMOON_XML_RQID_COMPONENT_COUNT";
		case -68812221:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_HIDES";
		case -55793492:
			return "NMOON_XML_RQID_MAGGIE_ANIM_ROTATION";
		case -36750725:
			return "NMOON_XML_RQID_UPGRADE_SELECT_UPGRADE_OVERRIDE_BY_HASH";
		case -31533829:
			return "NMOON_XML_RQID_BUSINESS_RACK_MODEL_EMPTY";
		case -29381488:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_FOR_PROPERTY";
		case -27879544:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_NAME";
		case -6195722:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_ENTITIES_BY_HASH";
		case 50744365:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_DRESSING_THEME_FOR_PROPERTY";
		case 51288898:
			return "NMOON_XML_RQID_PROPERTY_BLIP_POSITION";
		case 69923985:
			return "NMOON_XML_RQID_ANIM_SCENE_PROP_ROTATION";
		case 117141762:
			return "NMOON_XML_RQID_DOOR_ID_BY_HASH";
		case 160235287:
			return "NMOON_XML_RQID_PROPERTY_BAR_ROOM_VOLUME_COORDS_AT_INDEX";
		case 187670217:
			return "NMOON_XML_RQID_PROPERTY_SHOP_SELECT";
		case 192356085:
			return "NMOON_XML_RQID_GET_SOUND_NAME_AT_INDEX";
		case 192855013:
			return "NMOON_XML_RQID_DOOR_POS_BY_HASH";
		case 240086818:
			return "NMOON_XML_RQID_PATRON_COUNT_UPGRADE_POOL_GROUPS";
		case 252470000:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_POOL_PATRON_GROUP_NAME_HASH_AT_INDEX";
		case 302120682:
			return "NMOON_XML_RQID_PATRON_GET_PATRON_SCENARIO_POSE_AT_INDEX";
		case 314336617:
			return "NMOON_XML_RQID_STILL_SHOP_PROMPT_VOLUME_COUNT";
		case 353463541:
			return "NMOON_XML_RQID_MAGGIE_ANIM_POSITION";
		case 393361288:
			return "NMOON_XML_RQID_PROPERTY_BAR_ROOM_VOLUME_COUNT";
		case 393880900:
			return "NMOON_XML_RQID_THEME_NAVMESH_SWAP";
		case 416407972:
			return "NMOON_XML_RQID_STILL_SHOP_POSSE_MEMBER_PROMPT_VOLUME_COORDS_AT_INDEX";
		case 432615923:
			return "NMOON_XML_RQID_STILL_SHOP_PROMPT_VOLUME_COORDS_AT_INDEX";
		case 436248169:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_LAYOUT_GROUP_DANCE_INTENSITY_AT_INDEX";
		case 440093147:
			return "NMOON_XML_RQID_GUEST_LIST_POSITION_GOTH";
		case 494810808:
			return "NMOON_XML_RQID_ANIM_SCENE_PROP_NAME";
		case 528171638:
			return "NMOON_XML_RQID_VOLUME_ID";
		case 531630705:
			return "NMOON_XML_RQID_GET_SOUND_TAG_BY_TAG";
		case 589313231:
			return "NMOON_XML_RQID_GUEST_LIST_HEADING";
		case 613568612:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_ID";
		case 630831286:
			return "NMOON_XML_RQID_PROPERTY_SHOP_PROMPT_VOLUME_ORIENT_AT_INDEX";
		case 677682370:
			return "NMOON_XML_RQID_ANIM_SCENE_COUNT_PLAYLIST";
		case 681301829:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_LAYOUT_GROUP_SCENARIO_TYPE_AT_INDEX";
		case 701345319:
			return "NMOON_XML_RQID_VOLUME_TYPE";
		case 701782291:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_ROTATION";
		case 714595051:
			return "NMOON_XML_RQID_GUEST_LIST_POSITION_DEFAULT";
		case 715992154:
			return "NMOON_XML_RQID_PATRON_GET_PATRON_LAYOUT_FOR_UPGRADE_STAGE_BY_NAME";
		case 755405972:
			return "NMOON_XML_RQID_ANIM_SCENE_COUNT_ENTITIES";
		case 764757300:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_ENTITIES_BY_IDX";
		case 799444573:
			return "NMOON_XML_RQID_PATRON_SELECT_ROOT";
		case 897451900:
			return "NMOON_XML_RQID_PROPERTY_BAR_ROOM_VOLUME_SELECT";
		case 903375114:
			return "NMOON_XML_RQID_PATRON_SELECT_UPGRADE_LAYOUT_AT_STAGE";
		case 934493702:
			return "NMOON_XML_RQID_STILL_SHOP_POSSE_MEMBER_PROMPT_VOLUME_ORIENT_AT_INDEX";
		case 982929361:
			return "NMOON_XML_RQID_THEME_IPL_COUNT";
		case 983475634:
			return "NMOON_XML_RQID_DOOR_SCALE_BY_INDEX";
		case 1022527201:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_LAYOUT_GROUP_SCENARIO_POSE_AT_INDEX";
		case 1027470681:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_SELECT_THEME_DISABLED";
		case 1028943712:
			return "NMOON_XML_RQID_CORE_PED_COUNT";
		case 1049434047:
			return "NMOON_XML_RQID_PROPERTY_NO_APPROACH_VOLUME_TYPE";
		case 1060517781:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_MALE";
		case 1079198206:
			return "NMOON_XML_RQID_CORE_PED_HAS_ILO";
		case 1083769795:
			return "NMOON_XML_RQID_VOLUME_BY_IDX";
		case 1128248853:
			return "NMOON_XML_RQID_PATRON_SELECT_PATRON_LAYOUT_FOR_PROPERTY_UPGRADE";
		case 1146927565:
			return "NMOON_XML_RQID_PROPERTY_NO_SPAWN_VOLUME_TYPE";
		case 1150045643:
			return "NMOON_XML_RQID_STILL_SHOP_VOLUME_TYPE";
		case 1158067669:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_FEMALE";
		case 1163221628:
			return "NMOON_XML_RQID_CORE_PED_SCENARIO_DIRECTION";
		case 1181526356:
			return "NMOON_XML_RQID_PROPERTY_SHOP_VOLUME_SCALE_AT_INDEX";
		case 1218425034:
			return "NMOON_XML_RQID_PROPERTY_SHOP_PROMPT_VOLUME_COORDS_AT_INDEX";
		case 1221402645:
			return "NMOON_XML_RQID_STILL_SHOP_PROMPT_VOLUME_ORIENT_AT_INDEX";
		case 1268215321:
			return "NMOON_XML_RQID_WARP_POSITION";
		case 1278501955:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_FLAG_BY_IDX";
		case 1336171756:
			return "NMOON_XML_RQID_STILL_SHOP_VOLUME_COORDS_AT_INDEX";
		case 1356327414:
			return "NMOON_XML_RQID_MARCEL_ANIM_ROTATION";
		case 1428526346:
			return "NMOON_XML_RQID_DANCE_COUNT";
		case 1434566313:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_VOLUME_COORDS_AT_INDEX";
		case 1469724124:
			return "NMOON_XML_RQID_PROPERTY_NO_APPROACH_VOLUME_COUNT";
		case 1471893936:
			return "NMOON_XML_RQID_MARCEL_ANIM_POSITION";
		case 1498957156:
			return "NMOON_XML_RQID_UPGRADE_GET_UPGRADE_OVERRIDE_TYPE";
		case 1503858582:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_DRESSING_FOR_PROPERTY";
		case 1536057012:
			return "NMOON_XML_RQID_THEME_IPL_SELECT";
		case 1546490567:
			return "NMOON_XML_RQID_PROPERTY_NO_SPAWN_VOLUME_SELECT";
		case 1561818473:
			return "NMOON_XML_RQID_ANIM_SCENE_PROP_MODEL";
		case 1587765719:
			return "NMOON_XML_RQID_THEME_IPL_AT_INDEX";
		case 1599320606:
			return "NMOON_XML_RQID_STILL_SHOP_VOLUME_COUNT";
		case 1631512419:
			return "NMOON_XML_RQID_UPGRADE_STAGE_INTERIOR_OVERRIDE";
		case 1639179708:
			return "NMOON_XML_RQID_PATRON_GET_UPGRADE_LAYOUT_GROUP_PED_HEADING_AT_INDEX";
		case 1680544093:
			return "NMOON_XML_RQID_STILL_SHOP_PROMPT_VOLUME_TYPE";
		case 1682364847:
			return "NMOON_XML_RQID_BUSINESS_RACK_POSITION";
		case 1749160852:
			return "NMOON_XML_RQID_PROPERTY_NO_SPAWN_VOLUME_ORIENT_AT_INDEX";
		case 1754025912:
			return "NMOON_XML_RQID_PROPERTY_INTERIOR_POSITION";
		case 1787076303:
			return "NMOON_XML_RQID_ANIM_SCENE_GET_PLAYLIST_BY_IDX";
		case 1816942468:
			return "NMOON_XML_RQID_PATRON_GET_PROP_PLACEMENT_MODEL_FOR_THEME";
		case 1869099762:
			return "NMOON_XML_RQID_GET_SOUND_ENABLED_AT_INDEX";
		case 1876425093:
			return "NMOON_XML_RQID_UPGRADE_GET_UPGRADE_OVERRIDE_PLACEMENT_POSITION";
		case 1919192021:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_VOLUME_TYPE";
		case 1997721625:
			return "NMOON_XML_RQID_GET_SOUND_TAG_AT_INDEX";
		case 2013824449:
			return "NMOON_XML_RQID_UPGRADE_MAX";
		case 2020052655:
			return "NMOON_XML_RQID_STILL_SHOP_PROMPT_VOLUME_SCALE_AT_INDEX";
		case 2021743591:
			return "NMOON_XML_RQID_VOLUME_ORIENTATION";
		case 2043577501:
			return "NMOON_XML_RQID_PATRON_COUNT_UPGRADE_LAYOUT_GROUP_PEDS";
		case 2056519365:
			return "NMOON_XML_RQID_BUSINESS_RACK_MODEL_FULL";
		case 2059110052:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_STAGE";
		case 2113428842:
			return "NMOON_XML_RQID_STILL_SHOP_POSSE_MEMBER_PROMPT_VOLUME_TYPE";
		case 2127670663:
			return "NMOON_XML_RQID_AUDIO_SCENE_UPGRADE_VOLUMES_SELECT";
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

void func_306()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_XML__INIT__QUERY");
	Global_1277599.f_1 = Global_1072032.f_28503[50 /*4*/].f_3;
	Global_1277599.f_1.f_1 = 0;
	Global_1277599.f_1.f_2 = 0;
	Global_1277599.f_1.f_3 = 0;
	Global_1277599.f_1.f_4 = 0;
}

int func_307(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = BUILTIN::VDIST(vParam0, Global_1072032.f_23926.f_366[iVar0 /*272*/].f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	DEBUG::_0xF0783374333FD8CE(392, 36, "__NPS__GET_NEAREST_FAST_TRAVEL_STATION_ID - bFindNearest = TRUE.  Station ", iVar1, " is the closest at ", fVar3);
	return iVar1;
}

int func_308(char* sParam0)
{
	struct<4> Var0;

	Var0 = Global_1072032.f_23926.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = sParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_309(char* sParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<5> Var0;

	Var0 = Global_1072032.f_23926.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = sParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(sParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(bParam3, &Var0);
		return true;
	}
	return false;
}

bool func_310(int iParam0)
{
	return func_211(iParam0, 2);
}

bool func_311()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_312(var uParam0)
{
	return func_200(*uParam0, 2);
}

int func_313(struct<2> Param0)
{
	char* sVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	sVar0 = func_321(Param0);
	if (Global_1072032.f_19554 <= 0)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - Trying to find ", sVar0, " but ths list is empty.");
		return -1;
	}
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	if (!func_287(Param0, &vVar1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 13, "__NDL__FIND_UID_IN_LIST - ", sVar0, " is invalid.");
		return -1;
	}
	iVar7 = 0;
	iVar8 = (Global_1072032.f_19554 - 1);
	iVar10 = 0;
	while (iVar7 <= iVar8)
	{
		iVar9 = (iVar7 + ((iVar8 - iVar7) / 2));
		func_287(Global_1072032.f_19554.f_1[iVar9 /*3*/], &vVar4);
		if (vVar4.x > vVar1.x)
		{
			iVar8 = (iVar9 - 1);
		}
		else if (vVar4.x < vVar1.x)
		{
			iVar7 = iVar9 + 1;
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(2696, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to find ", sVar0, " at index ", iVar9);
			return iVar9;
		}
		iVar10++;
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 13, "__NDL__FIND_UID_IN_LIST - It took ", iVar10, " steps to NOT find ", sVar0);
	return -1;
}

void func_314(char* sParam0)
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
	func_322(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_315(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_323(iVar0, iParam1, iParam5))
	{
		bVar1 = true;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1275959.f_22[iVar0])
		{
			func_314(sParam0);
			return;
		}
		DEBUG::_0xA308F935BDECCEC0(2796168, 162, "HUD_SET_PLAYER_TRUE_ENEMY: Setting hostile for player ", iVar0, " bSyncToPosse = ", MISC::_0xF216F74101968DB0(bParam2), ", bSendEventToLocalPosse = ", MISC::_0xF216F74101968DB0(bParam3), ", bSendEventToRemotePosse = ", MISC::_0xF216F74101968DB0(bParam4), ", eEnemyEventType = ", func_324(iParam1, 0));
		UNK_0x355E72323AEE83CC(162, 7);
		NETWORK::_0x51951DE06C0D1C40(sParam0, 2);
		Global_1072032.f_21420.f_1[iVar0 /*8*/] = 2;
		bVar1 = true;
	}
	if (bParam2 && bVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1275959 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::_0x3F59FE6F37869576(iVar3, sParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_315(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = sParam0;
			Var6.f_7 = iParam1;
			func_325(&Var6, uVar4);
		}
	}
}

void func_316(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_317(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_326() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_327());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_327());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_327());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_328(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_329(iVar2))
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
				if (iVar9 & 8192 != 0 && func_246(iVar2) != 1)
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
					if (!func_330(iVar10))
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

char* func_318(int iParam0, int iParam1)
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

char* func_319(int iParam0)
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

bool func_320(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

char* func_321(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_331(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_92(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_332(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_322(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_323(int iParam0, int iParam1, int iParam2)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "HUD_SET_PLAYER_ENEMY_EVENT_TYPE: Setting enemy event to ", func_324(iParam1, 0), " and starting timer for player ", iParam0);
		if (iParam2 != 0)
		{
			Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = Global_1275959.f_21;
		}
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 162, "HUD_SET_PLAYER_ENEMY_EVENT_TYPE: Received another enemy event of type ", func_324(iParam1, 0), ", restarting timer for player ", iParam0);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = Global_1275959.f_21;
		return true;
	}
	return false;
}

char* func_324(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_HUD_ENEMY_EVENT_TYPE_NONE";
		case 1:
			return "NET_HUD_ENEMY_EVENT_TYPE_WARNING_SHOT";
		case 2:
			return "NET_HUD_ENEMY_EVENT_TYPE_AIMING";
		case 3:
			return "NET_HUD_ENEMY_EVENT_TYPE_DAMAGE";
		case 4:
			return "NET_HUD_ENEMY_EVENT_TYPE_KILLED";
		case 5:
			return "NET_HUD_ENEMY_EVENT_TYPE_MISSION_SPECIFIC";
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

void func_325(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "BROADCAST_NET_HUD_EVENT - playerBits is 0");
		return;
	}
	*uParam0 = 184;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_333(*uParam0);
}

int func_326()
{
	return Global_1051590.f_12;
}

char* func_327()
{
	return "unnamed";
}

int func_328(int iParam0)
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

bool func_329(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_12(36, iParam0);
}

bool func_330(char* sParam0)
{
	if (func_284(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_334(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

int func_332(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_287(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_333(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "-----------------------------------------------");
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "PRINT_SCRIPT_EVENT_NET_HUD_EVENT");
	DEBUG::_0x1B08D1EB9D8C4931(40, 162, "playerBroadcaster		= ", PLAYER::GET_PLAYER_NAME(Param0.f_1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 162, "eType					= ", func_335(Param0.f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 162, "-----------------------------------------------");
}

void func_334(char* sParam0)
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
		func_314(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_322(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

char* func_335(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_HUD_EVENT_NULL";
		case 1:
			return "NET_HUD_EVENT_TYPE_MAKE_TRUE_ENEMY";
		case 2:
			return "NET_HUD_EVENT_TYPE_WARNING_SHOT_FIRED";
		case 3:
			return "NET_HUD_EVENT_TYPE_GANG_JOINED";
		case 4:
			return "NET_HUD_EVENT_TYPE_MAKE_TRUE_ENEMY_NOTORIETY";
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

