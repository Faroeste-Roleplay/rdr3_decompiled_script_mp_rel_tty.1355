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
	struct<360> Local_13 = { 0, 0, 0, 32, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { NaNf, 0f, 0f };
#endregion

void __EntryFunction__()
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO] **********  Starting Persona Photo Thread  **********");
	func_1(vScriptParam_0);
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = !func_2(&Local_13);
		if (func_3(&Local_13))
		{
			bVar0 = false;
			DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO] SCRIPT - PERSONA_PHOTO_UPDATE returned TRUE, exiting thread.");
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_13);
	DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO] **********  Exiting Persona Photo thread  **********");
	func_5();
}

void func_1(vector3 vParam0)
{
	int iVar0;

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_13.f_2 = vParam0.x;
	Local_13.f_359 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(vParam0.f_2), iVar0))
		{
		}
		else
		{
			Local_13.f_3[iVar0 /*11*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		}
		iVar0++;
	}
}

bool func_2(var uParam0)
{
	int iVar0;

	if (func_6(0, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO] PERSONA_PHOTO_SHOULD_EXIT - KILL_EVENT_CAUGHT = TRUE");
		return true;
	}
	iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_359));
	if (iVar0 > 120)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO] PERSONA_PHOTO_SHOULD_EXIT - Thread uptime exceeded limit: ", iVar0);
		return true;
	}
	return false;
}

bool func_3(var uParam0)
{
	bool bVar0;
	int iVar1;

	switch (func_7(uParam0))
	{
		case 0:
			if (GRAPHICS::_0xAF6E67D073D2DCE2())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO_UPDATE] STATE_INIT - Waiting for PEDSHOT_IS_AVAILABLE() to return FALSE.");
				return false;
			}
			uParam0->f_356 = 0;
			uParam0->f_357 = 0;
			uParam0->f_358 = 0;
			switch (uParam0->f_2)
			{
				case 0:
					bVar0 = true;
					break;
				case 1:
				case 2:
					iVar1 = 0;
					while (iVar1 < 32)
					{
						if (uParam0->f_3[iVar1 /*11*/].f_1 == 255 || uParam0->f_3[iVar1 /*11*/].f_1 < 0)
						{
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_3[iVar1 /*11*/].f_1))
						{
						}
						else if (!bVar0)
						{
							uParam0->f_356 = iVar1;
							bVar0 = true;
						}
						else
						{
							iVar1++;
						}
						DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_UPDATE] PERPHO_STATE_INIT - Generating pedshots for total players: ", uParam0->f_358, ". Initial index: ", uParam0->f_356);
						func_8(uParam0, 1);
						Jump @371; //curOff = 246
						if (func_9(uParam0))
						{
							func_8(uParam0, 2);
						}
						Jump @371; //curOff = 265
						if (func_10(uParam0))
						{
							DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_UPDATE] STATE_CAPTURE_PHOTO - Finished player: ", uParam0->f_356, ", moving to next.");
							func_11(uParam0, uParam0->f_356);
							func_12(uParam0, 0);
							if (uParam0->f_357 >= uParam0->f_358)
							{
								DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_UPDATE] STATE_CAPTURE_PHOTO - Reached end of total players (", uParam0->f_358, ").");
								func_8(uParam0, 4);
							}
							else
							{
								func_13(uParam0);
							}
						}
						Jump @371; //curOff = 364
						return true;
						return false;
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_4(var uParam0)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_CLEAN_ALL_TARGETS] Cleaning up photo data for ", uParam0->f_358, " players.");
	UNK_0x355E72323AEE83CC(84, 6);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*11*/]))
		{
			PED::DELETE_PED(&(uParam0->f_3[iVar0 /*11*/]));
		}
		iVar0++;
	}
	if (func_14(256))
	{
		GRAPHICS::_0x55285F885F662169();
		GRAPHICS::_0xC2B8164C3BE871A4();
	}
	func_15(16);
}

void func_5()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_16(Global_1572887, 0), ", so skipping");
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

int func_7(var uParam0)
{
	return *uParam0;
}

void func_8(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 84, "[PERSONA_PHOTO_SET_STATE] New State: ", func_17(iParam1, 0), " Old State: ", func_17(*uParam0, 0));
	*uParam0 = iParam1;
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		switch (uParam0->f_2)
		{
			case 0:
			default:
				DEBUG::_0x83407B92D46F25C3(648, 84, "[PERSONA_PHOTO_LOAD_REQUIREMENTS][", iVar1, "] Requested photo type is unsupported: ", func_18(uParam0->f_2, 0));
				return false;
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*11*/]))
				{
					return true;
				}
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					DEBUG::_0x1B08D1EB9D8C4931(136, 84, "[PERSONA_PHOTO_LOAD_REQUIREMENTS][", iVar1, "] Player ped is dead, waiting...");
					return false;
				}
				if (!PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
				{
					DEBUG::_0x1B08D1EB9D8C4931(136, 84, "[PERSONA_PHOTO_LOAD_REQUIREMENTS][", iVar1, "] Player ped is not ready to render, waiting...");
					return false;
				}
				iVar0 = PLAYER::PLAYER_PED_ID();
			case 1:
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*11*/]))
				{
				}
				else if (uParam0->f_3[iVar1 /*11*/].f_1 == 255 || uParam0->f_3[iVar1 /*11*/].f_1 < 0)
				{
					DEBUG::_0x1B08D1EB9D8C4931(136, 84, "[PERSONA_PHOTO_LOAD_REQUIREMENTS][", iVar1, "] Passed player index is invalid, skipping.");
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_3[iVar1 /*11*/].f_1))
				{
					DEBUG::_0x1B08D1EB9D8C4931(136, 84, "[PERSONA_PHOTO_LOAD_REQUIREMENTS][", iVar1, "] Passed player index not active, skipping.");
				}
				else
				{
					iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_3[iVar1 /*11*/].f_1);
					if (ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						DEBUG::_0x1B08D1EB9D8C4931(136, 84, "[PERSONA_PHOTO_LOAD_REQUIREMENTS][", iVar1, "] Target ped is dead, waiting...");
						return false;
					}
					if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
					{
						DEBUG::_0x1B08D1EB9D8C4931(136, 84, "[PERSONA_PHOTO_LOAD_REQUIREMENTS][", iVar1, "] Target ped is not ready to render, waiting...");
						return false;
					}
					uParam0->f_3[iVar1 /*11*/].f_2 = PED::IS_PED_MALE(iVar0);
					uParam0->f_3[iVar1 /*11*/].f_3 = { func_19(uParam0->f_2, uParam0->f_3[iVar1 /*11*/].f_2) };
					uParam0->f_3[iVar1 /*11*/] = func_20(iVar0);
					uParam0->f_358++;
					if (uParam0->f_2 == 0)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar1++;
				return true;
		}
	}
}

bool func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = uParam0->f_356;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*11*/]))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] Clone Ped ", iVar0, " does not exist, bypassing.");
		return true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(uParam0->f_3[iVar0 /*11*/]))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] Ped ", iVar0, " is not ready to render this frame.");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*11*/]))
	{
		PED::RESURRECT_PED(uParam0->f_3[iVar0 /*11*/]);
		DEBUG::_0x9A6C65DDDBEC9C52(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] Clone Ped ", iVar0, " needed to be revived/resurrected.");
	}
	iVar1 = -1;
	switch (uParam0->f_1)
	{
		case 0:
			if (NETWORK::_0xA21E3BAD0A42D199())
			{
				DEBUG::_0x1B08D1EB9D8C4931(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] - ", iVar0, " - Previous upload is pending?");
				return false;
			}
			iVar1 = uParam0->f_3[iVar0 /*11*/].f_1;
			if (func_21(iVar1, uParam0->f_2) != 0)
			{
				func_22(iVar1, uParam0->f_2);
			}
			func_23(iVar1, uParam0->f_2, 1);
			func_15(256);
			GRAPHICS::_0x3E2FDDBE435A8787();
			GRAPHICS::_0x196D3ACBEBA4A44B(1);
			GRAPHICS::_0xD9C24F53631F2372(&(uParam0->f_3[iVar0 /*11*/].f_3), uParam0->f_3[iVar0 /*11*/], 0);
			DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] - ", iVar0, " - Setting ped to slot 0");
			PED::FORCE_PED_MOTION_STATE(uParam0->f_3[iVar0 /*11*/], 247561816, false, 0, false);
			func_12(uParam0, 1);
			break;
		case 1:
			PED::FORCE_PED_MOTION_STATE(uParam0->f_3[iVar0 /*11*/], 247561816, false, 0, false);
			switch (uParam0->f_2)
			{
				case 0:
					DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] - ", iVar0, " - Writing pedshot tex to slot: ", uParam0->f_2);
					bVar2 = NETWORK::_0xB72999D3120599DF(&(uParam0->f_3[iVar0 /*11*/].f_3), uParam0->f_2, 1);
					break;
				case 1:
				case 2:
					iVar1 = uParam0->f_3[iVar0 /*11*/].f_1;
					DEBUG::_0xA308F935BDECCEC0(10376, 84, "[PERSONA_PHOTO_PUSH_PHOTO] - ", iVar0, " - Caching pedshot tex locally: ", iVar1, " of type: ", func_18(uParam0->f_2, 0));
					bVar2 = NETWORK::_0x2A48D9567940598F(&(uParam0->f_3[iVar0 /*11*/].f_3), iVar1, 1, func_24(uParam0->f_2));
					break;
			}
			if (!bVar2)
			{
				DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] - ", iVar0, " - Pedshot push FAILED.");
				return false;
			}
			func_12(uParam0, 2);
			break;
		case 2:
			PED::FORCE_PED_MOTION_STATE(uParam0->f_3[iVar0 /*11*/], 247561816, false, 0, false);
			if (NETWORK::_0xA21E3BAD0A42D199())
			{
				DEBUG::_0xA308F935BDECCEC0(136, 84, "[PERSONA_PHOTO_PUSH_PHOTO] - ", iVar0, " - Waiting for upload to finish...");
				return false;
			}
			uParam0->f_357++;
			if (uParam0->f_2 == 1 || uParam0->f_2 == 2)
			{
				func_23(uParam0->f_3[iVar0 /*11*/].f_1, uParam0->f_2, 2);
			}
			func_12(uParam0, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO_CLEAN_SINGLE_TARGET] Cleaning up target: ", iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iParam1 /*11*/]))
	{
		PED::DELETE_PED(&(uParam0->f_3[iParam1 /*11*/]));
	}
	if (func_14(256))
	{
		GRAPHICS::_0x55285F885F662169();
		GRAPHICS::_0xC2B8164C3BE871A4();
		func_25(256);
	}
}

void func_12(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 84, "[PERSONA_PHOTO_SET_PUSH_STATE] Setting push state to: ", func_26(iParam1, 0), " was: ", func_26(uParam0->f_1, 0));
	uParam0->f_1 = iParam1;
}

void func_13(var uParam0)
{
	int iVar0;

	uParam0->f_356++;
	if (uParam0->f_356 >= 32)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_MOVE_TARGET_ITERATOR] Iterator exceeded maximum, capping.");
		uParam0->f_356 = 31;
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[uParam0->f_356 /*11*/]))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO_MOVE_TARGET_ITERATOR] Found valid target: ", uParam0->f_356);
		return;
	}
	iVar0 = uParam0->f_356 + 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*11*/]))
		{
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO_MOVE_TARGET_ITERATOR] Found next valid target: ", iVar0);
			uParam0->f_356 = iVar0;
			return;
		}
		iVar0++;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO_MOVE_TARGET_ITERATOR] Reached end of target list with none found.");
}

bool func_14(int iParam0)
{
	return (Global_1139844.f_5087.f_321 && iParam0) != 0;
}

void func_15(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 84, "[PERSONA_PHOTOS_SET_FLAG] Setting: ", func_27(iParam0, 0));
	Global_1139844.f_5087.f_321 = (Global_1139844.f_5087.f_321 || iParam0);
}

char* func_16(int iParam0, int iParam1)
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

char* func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PERPHO_STATE_INIT";
		case 1:
			return "PERPHO_STATE_LOAD_PHOTO_REQUIREMENTS";
		case 2:
			return "PERPHO_STATE_CAPTURE_PHOTO";
		case 3:
			return "PERPHO_STATE_DEBUG_WAIT";
		case 4:
			return "PERPHO_STATE_CLEANUP";
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

char* func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERPHO_TYPE_INVALID";
		case 0:
			return "PERPHO_TYPE_SC_PROFILE";
		case 1:
			return "PERPHO_TYPE_GENERAL";
		case 2:
			return "PERPHO_TYPE_MINIGAME";
		case 3:
			return "PERPHO_TYPE_END";
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

struct<8> func_19(int iParam0, bool bParam1)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MP_PROFILE_PHOTO", 64);
			break;
		case 1:
			StringConCat(&cVar0, "MP_MISSION_PHOTO", 64);
			break;
		case 2:
			StringConCat(&cVar0, "MINIGAME_PROFILE_PHOTO", 64);
			break;
	}
	if (!bParam1)
	{
		StringConCat(&cVar0, "_F", 64);
	}
	return cVar0;
}

int func_20(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	vVar0 = { Global_1139844.f_5087.f_477, Global_1139844.f_5087.f_478, Global_1139844.f_5087.f_479 };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) + vVar0 };
	iVar6 = PED::CLONE_PED(iParam0, 0f, false, true);
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, false, true);
	DEBUG::_0xA308F935BDECCEC0(8, 84, "[PERSONA_PHOTO_CREATE_CLONE] Created clone of ped: ", iParam0);
	return iVar6;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_GET_TYPE_CACHE_STATE] Cannot get type 'INVALID'");
		return -1;
	}
	return Global_1139844.f_5087[iParam0 /*10*/].f_5[iParam1];
}

void func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT] - iPlayer is INVALID.");
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_21(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT] - Player is not active!");
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			DEBUG::_0x9A6C65DDDBEC9C52(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_18(iParam1, 0), ") - ", "Player has no pedshot to reset!");
			return;
			DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_18(iParam1, 0), ") - ", "Resetting cached pedshot data only.");
			func_28(iParam0, iParam1, 0);
			func_23(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_18(iParam1, 0), ") - ", "Resetting cached pedshot data and texture handle.");
			iVar2 = func_29(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
				DEBUG::_0xA308F935BDECCEC0(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_18(iParam1, 0), ") - ", "Released textue handle from code: ", iVar2);
			}
			func_23(iParam0, iParam1, 0);
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 84, "[PERSONA_PHOTO_RESET_SINGLE_PEDSHOT](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_18(iParam1, 0), ") - ", "Reset of pedshot data complete.");
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] Cannot set state 'INVALID'");
		return;
	}
	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] Cannot set type 'INVALID'");
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] iPlayer is invalid: ", iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE] - Player is not active!");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(699048, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_STATE](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_18(iParam1, 0), ") ", "New State: ", func_30(iParam2, 0), ", Old state: ", func_30(Global_1139844.f_5087[iParam0 /*10*/].f_5[iParam1], 0));
	Global_1139844.f_5087[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_25(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 84, "[PERSONA_PHOTO_CLEAR_FLAG] Clearing: ", func_27(iParam0, 0));
	Global_1139844.f_5087.f_321 = (Global_1139844.f_5087.f_321 - (Global_1139844.f_5087.f_321 && iParam0));
}

char* func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PERPHO_PUSH_STATE_CHECK_PENDING_UPLOAD";
		case 1:
			return "PERPHO_PUSH_STATE_PUSH_PRESET";
		case 2:
			return "PERPHO_PUSH_STATE_CHECK_STATUS";
		case 3:
			return "PERPHO_PUSH_STATE_PUSH_COMPLETE";
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

char* func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PERPHO_FLAG_CLEAR";
		case 1:
			return "PERPHO_FLAG_PHOTO_BEING_TAKEN";
		case 2:
			return "PERPHO_FLAG_FORCE_EXIT_SCRIPT";
		case 4:
			return "PERPHO_FLAG_PHOTO_IS_COMPLETE";
		case 8:
			return "PERPHO_FLAG_PHOTO_FAILED";
		case 16:
			return "PERPHO_FLAG_PHOTO_FINISHED";
		case 32:
			return "PERPHO_FLAG_READY_TO_LOAD_PHOTO_REQUIREMENTS";
		case 64:
			return "PERPHO_FLAG_STOP_ON_PHOTO";
		case 128:
			return "PERPHO_FLAG_PHOTO_IS_SET";
		case 256:
			return "PERPHO_FLAG_PEDSHOT_PUSHED";
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

void func_28(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE] Cannot set type 'INVALID'");
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE] iPlayer is invalid: ", iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE] - Player is not active!");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(141992, 84, "[PERSONA_PHOTO_SET_TYPE_CACHE_HANDLE](", PLAYER::GET_PLAYER_NAME(iVar0), " - ", func_18(iParam1, 0), ") ", "New handle: ", sParam2, ", Old handle: ", sParam2);
	Global_1139844.f_5087[iParam0 /*10*/][iParam1] = sParam2;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "[PERSONA_PHOTO_GET_TYPE_CACHE_HANDLE] Cannot get type 'INVALID'");
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1139844.f_5087[iParam0 /*10*/][iParam1];
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERPHO_CACHE_STATE_INVALID";
		case 0:
			return "PERPHO_CACHE_STATE_NONE";
		case 1:
			return "PERPHO_CACHE_STATE_GENERATING";
		case 2:
			return "PERPHO_CACHE_STATE_GENERATE_COMPLETE";
		case 3:
			return "PERPHO_CACHE_STATE_EXTRACTING";
		case 4:
			return "PERPHO_CACHE_STATE_VERIFY";
		case 5:
			return "PERPHO_CACHE_STATE_AVAILABLE";
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

