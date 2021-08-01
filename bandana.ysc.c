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
	struct<7> Local_13 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "BANDANA__SCRIPT: Bandanna script launched!");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "BANDANA__SCRIPT: HAS_FORCE_CLEANUP_OCCURRED!");
		func_1(&Local_13, 10);
	}
	else
	{
		func_1(&Local_13, 0);
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "BANDANA__SCRIPT: Item: ", func_2(ScriptParam_0.f_2, 0));
	DEBUG::_0xF0783374333FD8CE(8, 208, "BANDANA__SCRIPT: Its Us: ", Global_33 == ScriptParam_0);
	DEBUG::_0xF0783374333FD8CE(8, 208, "BANDANA__SCRIPT: Fallback: ", ScriptParam_0.f_3);
	DEBUG::_0xF0783374333FD8CE(40, 208, "BANDANA__SCRIPT: Flags: ", func_3(ScriptParam_0.f_4));
	Local_13.f_1 = ScriptParam_0.f_2;
	Local_13.f_6 = ScriptParam_0.f_4;
	Local_13.f_3 = ScriptParam_0;
	Local_13.f_4 = ScriptParam_0.f_3;
	while (func_4(&Local_13))
	{
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xF0783374333FD8CE(8, 208, "BANDANA__SCRIPT: Done, terminate");
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 208, "__BANDANA__SUPPORT__SET_BANDANA_STATE: moving from ", func_6(func_5(uParam0), 0), " to ", func_6(iParam1, 0));
	*uParam0 = iParam1;
	DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__SET_BANDANA_STATE: Time stamp at: ", MISC::GET_GAME_TIMER());
	uParam0->f_5 = MISC::GET_GAME_TIMER();
}

var func_2(bool bParam0, int iParam1)
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

var func_3(int iParam0)
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

bool func_4(var uParam0)
{
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: State: ", func_6(*uParam0, 0));
	func_7(uParam0);
	switch (*uParam0)
	{
		case 0:
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Init");
			func_8(uParam0);
			break;
		case 1:
			if (func_9(uParam0->f_5, 4000))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Placement: Done waiting");
				func_1(uParam0, 9);
			}
			else
			{
				func_10(uParam0);
				Jump @1232; //curOff = 167
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
				if (func_9(uParam0->f_5, 4000))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Face To Neck: Done waiting");
					func_1(uParam0, 9);
				}
				else
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
					{
						DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Face To Neck: Face mask swap fired");
						func_11(uParam0->f_3);
						func_1(uParam0, 9);
					}
					Jump @1232; //curOff = 270
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
					if (func_9(uParam0->f_5, 4000))
					{
						DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Neck To Face: Done waiting");
						func_1(uParam0, 9);
					}
					else
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
						{
							DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Neck To Face: Face mask swap fired");
							func_12(uParam0->f_3);
							func_1(uParam0, 9);
						}
						Jump @1232; //curOff = 373
						PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
						if (func_9(uParam0->f_5, 4000))
						{
							DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Face To Satchel: Done waiting");
							func_1(uParam0, 9);
						}
						else
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
							{
								DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Face To Satchel: Face mask swap fired");
								func_13(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
								func_1(uParam0, 9);
							}
							Jump @1232; //curOff = 485
							if (func_9(uParam0->f_5, 4000))
							{
								DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Neck: Done waiting");
								func_1(uParam0, 9);
							}
							else
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
								{
									DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Neck: Face mask swap fired");
									if ((func_14(uParam0->f_1) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ || func_15(uParam0->f_1, 160827531)) && !func_15(uParam0->f_1, -1303648999))
									{
										DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Neck: Bandana");
										func_16(uParam0->f_3, uParam0->f_1);
									}
									else
									{
										DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Neck: Mask");
										func_17(uParam0->f_3, uParam0->f_1);
									}
									func_1(uParam0, 9);
								}
								Jump @1232; //curOff = 673
								if (func_9(uParam0->f_5, 4000))
								{
									DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Face: Done waiting");
									func_1(uParam0, 9);
								}
								else
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
									{
										DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Face: Face mask swap fired");
										if (func_14(uParam0->f_1) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ || func_15(uParam0->f_1, 160827531))
										{
											DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Face: Bandana");
											func_18(uParam0->f_3, uParam0->f_1);
										}
										else
										{
											DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Satchel To Face: Mask");
											func_17(uParam0->f_3, uParam0->f_1);
										}
										func_1(uParam0, 9);
									}
									Jump @1232; //curOff = 842
									if (func_9(uParam0->f_5, 4000))
									{
										DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Remove Previous: Done waiting");
										func_1(uParam0, 9);
									}
									else
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
										{
											DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Remove Previous: Face mask swap fired");
											func_13(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
											uParam0->f_5 = func_19();
											func_1(uParam0, 8);
										}
										Jump @1232; //curOff = 951
										if (func_9(uParam0->f_5, 4000))
										{
											DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Apply new Bandana: Done waiting");
											func_1(uParam0, 9);
										}
										else if (TASK::_0xEC7E480FF8BD0BED(uParam0->f_3) && !uParam0->f_4)
										{
											if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 108107462))
											{
												DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Apply new Bandana: not now");
											}
											else
											{
												DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Apply new Bandana: Running interaction");
												Jump @1232; //curOff = 1053
												if (func_20())
												{
													DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Apply new Bandana: Metaped clothing still pending");
												}
												else
												{
													DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Apply new Bandana: Go!");
													if (func_21())
													{
														DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Apply new Bandana: player is wearing face cover.. STILL?!?");
														func_22();
													}
													else
													{
														if (Global_33 == uParam0->f_3)
														{
															DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Apply new Bandana: Clear our tracking");
															Global_1953612.f_3562 = 0;
														}
														func_23(uParam0->f_1, 0);
														func_1(uParam0, 9);
														Jump @1232; //curOff = 1160
														DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Clean up");
														if (Global_33 == uParam0->f_3)
														{
															DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Clean up: Clear our tracking");
															Global_1953612.f_3562 = 0;
														}
														func_1(uParam0, 10);
														Jump @1232; //curOff = 1211
														DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__RUN_STATE_MACHINE: Lets shutdown");
														return false;
													}
												}
											}
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

int func_5(var uParam0)
{
	return *uParam0;
}

char* func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "BANDANA_STATE_INVALID";
		case 0:
			return "BANDANA_STATE_INIT";
		case 1:
			return "BANDANA_STATE_PLACEMENT_START";
		case 2:
			return "BANDANA_STATE_SATCHEL_TO_NECK";
		case 3:
			return "BANDANA_STATE_SATCHEL_TO_FACE";
		case 4:
			return "BANDANA_STATE_FACE_TO_NECK";
		case 5:
			return "BANDANA_STATE_NECK_TO_FACE";
		case 6:
			return "BANDANA_STATE_FACE_TO_SATCHEL";
		case 7:
			return "BANDANA_STATE_REMOVE_PREVIOUS_BANDANA";
		case 8:
			return "BANDANA_STATE_WAIT_TO_APPLY_NEW_BANDANA";
		case 9:
			return "BANDANA_STATE_CLEANUP";
		case 10:
			return "BANDANA_STATE_SHUTDOWN";
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

void func_7(var uParam0)
{
	if (func_5(uParam0) == 10)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__PROCESS_EARLY_OUTS: Already going to shutdown, no need to early out process");
		return;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (Global_33 == uParam0->f_3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__PROCESS_EARLY_OUTS: Us: thread exit requested: rush a fallback");
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__PROCESS_EARLY_OUTS: Not us: thread exit requested: rush a fallback");
			uParam0->f_4 = 1;
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__PROCESS_EARLY_OUTS: Ped doesn't exist");
		func_1(uParam0, 10);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_33 == uParam0->f_3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__PROCESS_EARLY_OUTS: Us: dead");
			func_1(uParam0, 9);
			return;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__CORE__PROCESS_EARLY_OUTS: Not us: dead");
			func_1(uParam0, 10);
			return;
		}
	}
}

void func_8(var uParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT__INIT: Init: Player: ", PED::IS_PED_A_PLAYER(uParam0->f_3));
	DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT__INIT: Init: Is Player The User: ", Global_33 == uParam0->f_3);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT__INIT: Init: Currently In Use: ", Global_1953612.f_3562);
	DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT__INIT: Init: Face cover: ", func_2(uParam0->f_1, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT__INIT: Init: Flags: ", func_3(uParam0->f_6));
	DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT__INIT: Init: Fallback: ", uParam0->f_4);
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_33 == uParam0->f_3)
		{
			if (Global_1953612.f_3562)
			{
				DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__INIT: In use");
				func_1(uParam0, 10);
			}
			else
			{
				Global_1953612.f_3562 = 1;
				DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__INIT: Set in use");
				func_1(uParam0, 1);
			}
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__INIT: Not us");
			func_1(uParam0, 1);
		}
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__INIT: Ped not a player close it");
		func_1(uParam0, 10);
	}
}

bool func_9(int iParam0, int iParam1)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT__TIME_TOO_MUCH_HAS_PASSED: Cur Wait: ", MISC::ABSI((MISC::GET_GAME_TIMER() - iParam0)));
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - iParam0)) >= iParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "__BANDANA__SUPPORT__TIME_TOO_MUCH_HAS_PASSED: Done waiting");
		return true;
	}
	return false;
}

void func_10(var uParam0)
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Start: Main Item: ", func_2(uParam0->f_1, 0));
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Start: Secondary Item: ", func_2(uParam0->f_2, 0));
	if (!func_24(uParam0->f_1))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Item not valid: ", func_2(uParam0->f_1, 0));
		func_1(uParam0, 10);
		return;
	}
	bVar2 = false;
	bVar3 = true;
	if (func_25(&bVar0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Cover Found: ", func_2(bVar0, 0));
		if (uParam0->f_1 == bVar0)
		{
			DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Same cover");
			bVar2 = true;
			bVar3 = true;
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Different cover: ", func_2(bVar0, 0));
			uParam0->f_2 = bVar0;
			bVar3 = false;
		}
	}
	bVar4 = func_14(uParam0->f_1);
	bVar5 = func_26(&uVar1);
	if (bVar3)
	{
		iVar6 = func_27(uParam0->f_1);
		if (iVar6 != -358215195 && func_28(uParam0->f_6, 1))
		{
			DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Remove Flag: Face to satchel!");
			func_1(uParam0, 6);
		}
		else if (bVar2)
		{
			if (bVar5)
			{
				if ((bVar4 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ || func_15(uParam0->f_1, 160827531)) && !func_15(uParam0->f_1, -1303648999))
				{
					DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Face to neck!");
					func_1(uParam0, 4);
				}
				else
				{
					DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Face to satchel!");
					func_1(uParam0, 6);
				}
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Neck to face!");
				func_1(uParam0, 5);
			}
		}
		else if (((bVar4 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ || func_15(uParam0->f_1, 160827531)) && func_28(uParam0->f_6, 2)) && !func_15(uParam0->f_1, -1303648999))
		{
			DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Satchel to neck!");
			func_1(uParam0, 2);
			func_29(&(uParam0->f_6), 2);
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Satchel to face!");
			func_1(uParam0, 3);
		}
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__CHANGE_STATE_DEPENDING_ON_BANDANA_PLACEMENT: Remove the current item!");
		func_1(uParam0, 7);
	}
}

void func_11(int iParam0)
{
	bool bVar0;

	if (!func_26(&bVar0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__PULL_DOWN_BANDANA: Player face not hidden: ", func_2(bVar0, 0));
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__PULL_DOWN_BANDANA: Player is wearing: ", func_2(bVar0, 0));
	func_30(bVar0, 2);
	func_31(23, 0, 0, 0, 0);
}

void func_12(int iParam0)
{
	bool bVar0;
	var uVar1;

	if (!func_25(&bVar0))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__PULL_UP_BANDANA: No face cover");
		return;
	}
	if (func_26(&uVar1))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__PULL_UP_BANDANA: No face cover already up");
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__PULL_UP_BANDANA: Player pull up: ", func_2(bVar0, 0));
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__PULL_UP_BANDANA: Player put on bandanna, and a shocking event was sent!");
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__PULL_UP_BANDANA: Player put on bandanna, but the shocking event send failed!");
	}
	func_30(bVar0, 1);
	func_31(23, 0, 0, 0, 0);
}

int func_13(int iParam0, bool bParam1, var uParam2)
{
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__REMOVE_FACE_COVER_FROM_PLAYER: Remove: ", func_2(bParam1, 0));
	if (!func_24(bParam1))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__REMOVE_FACE_COVER_FROM_PLAYER: Not a face cover");
		return 0;
	}
	if (!func_32(bParam1))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__REMOVE_FACE_COVER_FROM_PLAYER: Player is not wearing this");
		return 0;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__REMOVE_FACE_COVER_FROM_PLAYER: Player was wearing it");
	func_29(uParam2, 1);
	func_30(bParam1, 8);
	func_31(23, 0, 0, 0, 0);
	return 1;
}

bool func_14(bool bParam0)
{
	struct<2> Var0;

	if (!func_33(bParam0, 0))
	{
		return false;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return false;
	}
	return Var0.f_1;
}

bool func_15(bool bParam0, bool bParam1)
{
	if (!func_33(bParam0, 0))
	{
		return func_35(func_34(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_36(bParam1, 0), " for item ", func_2(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

void func_16(int iParam0, bool bParam1)
{
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER: Adding: ", func_2(bParam1, 0));
	if (func_14(bParam1) != joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && !func_15(bParam1, 160827531))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER: Item not mask");
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	func_30(bParam1, 2);
	DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER: For sure adding");
	func_31(23, 0, 0, 0, 0);
}

void func_17(int iParam0, bool bParam1)
{
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__ADD_MASK_ON_PLAYER: Adding: ", func_2(bParam1, 0));
	if (func_14(bParam1) != joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */ && !func_15(bParam1, -1303648999))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_MASK_ON_PLAYER: Item not mask");
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER_FACE: Player put on bandanna, and a shocking event was sent!");
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER_FACE: Player put on bandanna, but the shocking event send failed!");
	}
	func_30(bParam1, 1);
	DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_MASK_ON_PLAYER: For sure adding");
	func_31(23, 0, 0, 0, 0);
}

void func_18(int iParam0, bool bParam1)
{
	DEBUG::_0x4DC69742196F818A(40, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER_FACE: Adding: ", func_2(bParam1, 0));
	if (func_14(bParam1) != joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && !func_15(bParam1, 160827531))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER_FACE: Item not mask");
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER_FACE: Player put on bandanna, and a shocking event was sent!");
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT__ADD_BANDANA_ON_PLAYER_FACE: Player put on bandanna, but the shocking event send failed!");
	}
	func_30(bParam1, 1);
	func_31(23, 0, 0, 0, 0);
}

int func_19()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_20()
{
	int iVar0;

	iVar0 = Global_1953612.f_595[8];
	iVar0 = (iVar0 + Global_1953612.f_595[10]);
	iVar0 = (iVar0 + Global_1953612.f_595[1]);
	iVar0 = (iVar0 + Global_1953612.f_595[2]);
	iVar0 = (iVar0 + Global_1953612.f_595[5]);
	iVar0 = (iVar0 + Global_1953612.f_595[25]);
	iVar0 = (iVar0 + Global_1953612.f_595[23]);
	iVar0 = (iVar0 + Global_1953612.f_595[18]);
	iVar0 = (iVar0 + Global_1953612.f_595[19]);
	return iVar0 > 0;
}

bool func_21()
{
	bool bVar0;

	bVar0 = false;
	if (func_37(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */, &bVar0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_FACE_COVER: Found Mask item: ", func_2(bVar0, 0));
		return true;
	}
	if (func_37(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, &bVar0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_FACE_COVER: Found Big Mask item: ", func_2(bVar0, 0));
		return true;
	}
	return false;
}

void func_22()
{
	DEBUG::_0xA308F935BDECCEC0(8, 208, "BANDANA__SUPPORT_EXTERNAL__REMOVE_ALL_FACE_COVER: Func Start");
	if (!func_21())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "BANDANA__SUPPORT_EXTERNAL__REMOVE_ALL_FACE_COVER: No face cover being worn");
		return;
	}
	func_38();
	DEBUG::_0xA308F935BDECCEC0(8, 208, "BANDANA__SUPPORT_EXTERNAL__REMOVE_ALL_FACE_COVER: End");
}

int func_23(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Item: ", func_2(bParam0, 0));
	bVar3 = func_32(bParam0);
	if (func_14(bParam0) == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */ || func_15(bParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Item being worn");
		if (func_26(&bVar2))
		{
			if (bVar1)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull down mask");
				iVar0 = func_39();
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull down bandana");
				iVar0 = func_40();
			}
		}
		else if (bVar1)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull up mask");
			iVar0 = func_41();
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to pull up bandana");
			iVar0 = func_42();
		}
	}
	else if (func_25(&bVar2))
	{
		if (func_15(bVar2, -1303648999) || func_14(bVar2) == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */)
		{
			DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to remove prev mask: ", func_2(bVar2, 0));
			iVar0 = func_39();
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to remove prev bandana: ", func_2(bVar2, 0));
			iVar0 = func_40();
		}
	}
	else if (bVar1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to equip mask");
		iVar0 = func_41();
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Attempting to equip bandana");
		iVar0 = func_42();
	}
	if (iVar0 != 0)
	{
		Global_1953612.f_3560 = MISC::GET_GAME_TIMER();
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Buffer Time: ", Global_1953612.f_3560);
		DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Yay Interaction: Item: ", func_2(bParam0, 0));
		DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__LAUNCH_BANDANA_SCRIPT: Yay Interaction: Flags: ", func_3(iParam1));
		TASK::_TASK_ITEM_INTERACTION(Global_33, bParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_24(bool bParam0)
{
	return func_43(bParam0);
}

bool func_25(bool bParam0)
{
	if (func_37(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */, bParam0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_CURRENT_FACE_COVER: Found Mask item: ", func_2(*bParam0, 0));
		return true;
	}
	if (func_37(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, bParam0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_CURRENT_FACE_COVER: Found Big Mask item: ", func_2(*bParam0, 0));
		return true;
	}
	return false;
}

bool func_26(bool bParam0)
{
	DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Func Start");
	if (-1829635046 == func_44(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: WARDROBE_MASK Hash Up");
		if (func_25(bParam0))
		{
			DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found Item: ", func_2(*bParam0, 0));
			return true;
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found no item even though the wearable state was found");
	}
	else if (func_37(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, bParam0) || func_15(func_45(1742327865), -1303648999))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: WARDROBE_BIG_MASK Hash Up");
		if (func_25(bParam0))
		{
			DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found Big mask item: ", func_2(*bParam0, 0));
			return true;
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found no big mask item even though the wearable state was found");
	}
	DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: No item found");
	return false;
}

int func_27(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_46(bParam0, 1, 0) };
	return func_47(Var0.f_4);
}

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_29(var uParam0, int iParam1)
{
	func_48(uParam0, iParam1);
}

void func_30(bool bParam0, char* sParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	UNK_0x355E72323AEE83CC(-1, 6);
	DEBUG::_0xF0783374333FD8CE(168, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Add: ", func_2(bParam0, 0), " Flag: ", sParam1);
	iVar1 = func_27(bParam0);
	iVar2 = func_49(iVar1, 1);
	if (iVar2 == 39)
	{
		DEBUG::_0x83407B92D46F25C3(40, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Failed to add: ", func_2(bParam0, 0));
		return;
	}
	if (func_50(bParam0) && func_51(bParam0))
	{
		sParam1 |= 64;
	}
	if ((iVar1 == 1108822547 && func_52(32768)) || bParam0 != Global_1953612.f_1694.f_1[iVar2 /*3*/])
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Adding a true item, and its not the same one already on the player");
		if (func_50(Global_1953612.f_1694.f_1[iVar2 /*3*/]) && func_51(Global_1953612.f_1694.f_1[iVar2 /*3*/]))
		{
			sParam1 |= 32;
		}
		if (Global_1953612.f_83[iVar2 /*12*/].f_1 > 1)
		{
			sParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_14(bParam0))
		{
			case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
				if (func_37(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, &uVar0))
				{
					iVar3 = func_49(func_53(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */), 1);
					if (iVar3 == 39)
					{
						DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Remove big mask: bad meta index");
					}
					else
					{
						Global_1953612.f_2704[iVar3 /*2*/] = Global_1953612.f_83[iVar3 /*12*/];
						DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Mark remove big mask: ");
						if (func_15(bParam0, -180472385) && func_37(1024667707, &uVar0))
						{
							iVar3 = func_49(func_53(1024667707), 1);
							if (iVar3 == 39)
							{
								DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Remove eyewear: bad meta index");
							}
							else
							{
								Global_1953612.f_2704[iVar3 /*2*/] = Global_1953612.f_83[iVar3 /*12*/];
								DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Mark remove eyewear because this mask does not work with eyewear");
								Jump @660; //curOff = 445
								if (func_52(32768))
								{
									func_55(func_54(iVar2, 1));
								}
								if (func_37(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */, &uVar4))
								{
									iVar3 = func_49(func_53(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */), 1);
									if (iVar3 == 39)
									{
										DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Remove mask: bad meta index");
									}
									else
									{
										Global_1953612.f_2704[iVar3 /*2*/] = Global_1953612.f_83[iVar3 /*12*/];
										DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Mark remove mask");
										Jump @660; //curOff = 553
										if (!func_15(bParam0, 160827531))
										{
										}
										else
										{
											if (func_37(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, &uVar0))
											{
												iVar3 = func_49(func_53(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */), 1);
												if (iVar3 == 39)
												{
													DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Remove big mask: bad meta index");
												}
												else
												{
													Global_1953612.f_2704[iVar3 /*2*/] = Global_1953612.f_83[iVar3 /*12*/];
													DEBUG::_0xF0783374333FD8CE(8, 208, "METAPED_PLAYER_COMPONENT_WEARABLE_ADD_ITEM: Mark remove big mask: ");
												}
												Global_1953612.f_2704[iVar2 /*2*/] = bParam0;
												func_56(iVar1, sParam1, 6);
											}
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_57(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_58(Var0);
}

bool func_32(bool bParam0)
{
	bool bVar0;

	if (bParam0 == 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Invalid Compare Item");
		return false;
	}
	DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Ref Item: ", func_2(bParam0, 0));
	bVar0 = false;
	if (func_25(&bVar0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Found Item: ", func_2(bVar0, 0));
		if (bParam0 == bVar0)
		{
			DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_WEARING_THIS_FACE_COVER: Items match");
			return true;
		}
	}
	return false;
}

bool func_33(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_34(bool bParam0)
{
	return bParam0;
}

int func_35(bool bParam0, bool bParam1)
{
	if (!func_59(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_36(bParam1, 0), " for bundle ", func_60(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_36(bool bParam0, int iParam1)
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

bool func_37(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_49(func_53(bParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953612.f_1694.f_1[iVar1 /*3*/] != 0 && Global_1953612.f_1694.f_1[iVar1 /*3*/] != Global_1953612.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953612.f_1694.f_1[iVar1 /*3*/];
		if (func_14(bVar0) == bParam0 || (bParam0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && func_15(bVar0, 160827531)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

void func_38()
{
	bool bVar0;
	bool bVar1;

	DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__CLEAR_ALL_PLAYER_DISGUISES: Func Start");
	bVar0 = false;
	if (func_37(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */, &bVar1))
	{
		if (func_43(bVar1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__CLEAR_ALL_PLAYER_DISGUISES: Remove mask");
			func_61(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */);
			bVar0 = true;
		}
	}
	if (func_37(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, &bVar1))
	{
		if (func_43(bVar1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__CLEAR_ALL_PLAYER_DISGUISES: Remove big mask");
			func_61(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__CLEAR_ALL_PLAYER_DISGUISES: Tracked removed face cover");
		PED::_0xC494C76A34266E82(Global_33, 13);
	}
}

bool func_39()
{
	bool bVar0;

	bVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_62())
	{
		case 0:
			bVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_MASK_OFF_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_40()
{
	bool bVar0;

	bVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_62())
	{
		case 0:
			bVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_BANDANA_OFF_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_41()
{
	bool bVar0;

	bVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_62())
	{
		case 0:
			bVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_MASK_ON_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_42()
{
	bool bVar0;

	bVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_62())
	{
		case 0:
			bVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			bVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			bVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			bVar0 = false;
			break;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_BANDANA_ON_INTERACTION: Hash: ", UNK_0x4379B6FA65D55295(bVar0));
	return bVar0;
}

bool func_43(bool bParam0)
{
	int iVar0;

	iVar0 = func_14(bParam0);
	if (((iVar0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ || iVar0 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */) || func_15(bParam0, 160827531)) || func_15(bParam0, -1303648999))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_ITEM_A_FACE_COVER: It's a face cover");
		return true;
	}
	DEBUG::_0x4DC69742196F818A(8, 208, "__BANDANA__SUPPORT_EXTERNAL__IS_ITEM_A_FACE_COVER: It's a face cover");
	return false;
}

int func_44(bool bParam0)
{
	int iVar0;

	iVar0 = func_49(func_53(bParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953612.f_1694.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_45(int iParam0)
{
	return Global_1953612.f_1694.f_1[func_49(iParam0, 1) /*3*/];
}

struct<5> func_46(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_63(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_64(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_2(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_65(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_66(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_67(bParam1) };
			if (bParam2 && func_68(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_69(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_69(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_70(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_71(bParam1) };
			switch (func_14(bParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_72(bParam0, -1823706425))
			{
				Var0 = { func_66(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_72(bParam0, -1483207246))
			{
				Var0 = { func_66(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_66(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_72(bParam0, -1653629781))
			{
				Var0 = { func_66(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_73(Var0, &Var28, bParam1, 0, -1))
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to fetch CHARACTER item info for ", UNK_0xD2E4270E5D98EEE4(&Var0));
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_72(bParam0, -1653629781))
			{
				Var0 = { func_66(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_2(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_2(bParam0, 0), ": ", func_74(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

int func_47(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953612.f_83[iVar0 /*12*/].f_9 == bParam0)
		{
			return func_54(iVar0, 1);
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_INVENTORY_SLOTID] Failed to find: ", func_74(bParam0, 0));
	return -358215195;
}

void func_48(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

int func_50(bool bParam0)
{
	switch (func_14(bParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			return 1;
		case joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */:
			return 1;
		case 119907797:
			return 1;
		case 1388798186:
			return 1;
		default:
			break;
	}
	if (func_15(bParam0, 160827531))
	{
		return 1;
	}
	DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_PORTABLE_WARDROBE_IS_INVENTORY_ITEM_SUPPORTED] Portable wardrobe does not support category: ", func_75(func_14(bParam0), 0), " item: ", func_2(bParam0, 0));
	return 0;
}

int func_51(bool bParam0)
{
	var uVar0;

	return func_76(bParam0, &uVar0);
}

bool func_52(int iParam0)
{
	return (Global_1953612 && iParam0) != 0;
}

int func_53(bool bParam0)
{
	bool bVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bParam0, 0, &bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_CASH_INVENTORY_CATEGORY] Category does not have a fitslot? ", func_75(bParam0, 0));
		return -358215195;
	}
	return func_47(bVar0);
}

int func_54(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return 735520874;
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_55(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS_SET_META_TYPE_TO_BE_BYPASSED] Marking: ", func_77(iParam0, 0), " to be bypassed!");
	UNK_0x355E72323AEE83CC(208, 6);
	func_78(iParam0, 8, 6);
}

void func_56(int iParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(160, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_WEARABLE_FLAG] Setting: ", func_3(iParam1));
	Global_1953612.f_2704[func_49(iParam0, 1) /*2*/].f_1 = (Global_1953612.f_2704[func_49(iParam0, 1) /*2*/].f_1 || iParam1);
}

void func_57(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_SET_FLAG] Setting: ", func_79(iParam0, 0));
	Global_1953612 = (Global_1953612 || iParam0);
}

void func_58(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(40, 208, "PUSH_METAPED_CLOTHING_SYSTEM_REQUEST: Request Type: ", func_80(Param0, 0));
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1953612.f_918 >= 25)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sUpdateNoRestrictionsRequestData Size Exceeded | Attempting to Insert more than ", 25);
				return;
			}
			if (func_81(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_918)
				{
					iVar1 = ((Global_1953612.f_923 + iVar0) % 25);
					if ((Global_1953612.f_736[iVar1 /*4*/] == Param0 && Global_1953612.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_80(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
						return;
					}
					iVar0++;
				}
			}
			func_82(Param0);
			Global_1953612.f_736[Global_1953612.f_924 /*4*/] = { Param0 };
			Global_1953612.f_918++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] No Restriction Request Type: ", func_80(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_924);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_918);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_3(Param0.f_2));
			Global_1953612.f_924 = (Global_1953612.f_924 + 1 % 25);
			func_57(8);
			break;
		case 24:
		case 25:
			if (Global_1953612.f_919 >= 25)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sUpdateRestrictionsRequestData Size Exceeded | Attempting to Insert more than ", 25);
				return;
			}
			if (func_81(Param0))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_80(Param0, 0), " has already been created | BYPASSING ADD!");
				return;
			}
			func_82(Param0);
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Restriction Request Type: ", func_80(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]   Adding Request to slot: ", Global_1953612.f_919);
			Global_1953612.f_635[Global_1953612.f_919 /*4*/] = { Param0 };
			Global_1953612.f_919++;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]           New Queue Size: ", Global_1953612.f_919);
			func_57(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953612.f_920 >= 20)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sMetapedSystemRequestData Size Exceeded | Attempting to Insert more than ", 20);
				return;
			}
			if (func_81(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_920)
				{
					iVar1 = ((Global_1953612.f_921 + iVar0) % 20);
					if ((Global_1953612.f_837[iVar1 /*4*/] == Param0 && Global_1953612.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_80(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
						return;
					}
					iVar0++;
				}
			}
			if (Param0 == 34)
			{
				Global_1953612.f_930 = 1;
				Global_1953612.f_930.f_1 = Param0.f_2;
				Global_1953612.f_930.f_2 = Param0.f_3;
			}
			func_82(Param0);
			Global_1953612.f_837[Global_1953612.f_922 /*4*/] = { Param0 };
			Global_1953612.f_920++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]         System Request Type: ", func_80(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_922);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_920);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_3(Param0.f_2));
			Global_1953612.f_922 = (Global_1953612.f_922 + 1 % 20);
			func_57(8);
			break;
			break;
	}
}

bool func_59(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

var func_60(bool bParam0, int iParam1)
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

void func_61(bool bParam0)
{
	int iVar0;

	iVar0 = func_49(func_53(bParam0), 1);
	if (iVar0 == 39)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "__BANDANA__SUPPORT_EXTERNAL__CLEAR_PLAYER_DISGUIESE_CATEGORY: MetaIndex not valid");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__CLEAR_PLAYER_DISGUIESE_CATEGORY: Category: ", func_75(bParam0, 0));
	DEBUG::_0xA308F935BDECCEC0(40, 208, "__BANDANA__SUPPORT_EXTERNAL__CLEAR_PLAYER_DISGUIESE_CATEGORY: Item: ", func_2(Global_1953612.f_83[iVar0 /*12*/], 0));
	func_30(Global_1953612.f_83[iVar0 /*12*/], 8);
	func_31(23, 0, 0, 0, 0);
}

int func_62()
{
	bool bVar0;
	bool bVar1;

	if (PED::_IS_PED_CARRYING(Global_33))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "Player carrying something, falling back to RIGHT hand");
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar0, true, 0, false))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 157, "Player has weapon in RIGHT hand: ", func_2(bVar0, 0));
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar1, true, 1, false))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 157, "Player has weapon in LEFT hand: ", func_2(bVar1, 0));
	}
	if (bVar1 == joaat("WEAPON_UNARMED"))
	{
		if (bVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(bVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(bVar0)) && !func_83(bVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_33, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(bVar0) && func_83(bVar0)) || WEAPON::_IS_WEAPON_LASSO(bVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (bVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

struct<4> func_63(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_84(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_66(joaat("CHARACTER"), func_85(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_66(joaat("CHARACTER"), func_85(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_66(joaat("CHARACTER"), func_85(), -1591664384, bParam0);
}

int func_64(bool bParam0)
{
	vector3 vVar0;

	if (!func_33(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

char* func_65(int iParam0, int iParam1)
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

struct<4> func_66(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_33(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_2(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_84(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_67(bool bParam0)
{
	int iVar0;

	iVar0 = func_84(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_66(923904168, func_63(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_66(923904168, func_63(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_66(923904168, func_63(bParam0), -740156546, 0);
}

bool func_68(bool bParam0, bool bParam1)
{
	if (func_14(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_86();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_69(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_87(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_70(bool bParam0, var uParam1, bool bParam2)
{
	var uVar0;

	if (func_88(bParam0, &uVar0, uParam1, bParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_71(bool bParam0)
{
	int iVar0;

	iVar0 = func_84(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_66(271701509, func_63(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_66(271701509, func_63(bParam0), 12999093, 0);
}

bool func_72(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_14(bParam0);
	if (bVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(bVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bVar1, iVar2, &iVar0))
		{
			if (func_89(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_73(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_90(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_74(bool bParam0, int iParam1)
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

var func_75(bool bParam0, int iParam1)
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

int func_76(bool bParam0, var uParam1)
{
	*uParam1 = 0;
	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__FIND_ITEM_HASH] Portable Items: ", Global_1953612.f_3411.f_26);
	*uParam1 = 0;
	while (*uParam1 < Global_1953612.f_3411.f_26)
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[__METAPED_PLAYER_PORTABLE_WARDROBE__FIND_ITEM_HASH] Looking For: ", UNK_0x4379B6FA65D55295(bParam0), " comparing to: ", UNK_0x4379B6FA65D55295(Global_1953612.f_3411[*uParam1]));
		if (bParam0 == Global_1953612.f_3411[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

char* func_77(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return "MP_COMPONENT_TYPE_FOOTWEAR_1";
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return "MP_COMPONENT_TYPE_HEAD";
		case -1884748965:
			return "MP_COMPONENT_TYPE_LOADOUT_8";
		case -1586649372:
			return "MP_COMPONENT_TYPE_LOADOUT_9";
		case -1505978566:
			return "MP_COMPONENT_TYPE_WRIST_ATTIRE";
		case -1489346253:
			return "MP_COMPONENT_TYPE_FOOTWEAR_3";
		case -1364808185:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_5";
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return "MP_COMPONENT_TYPE_UPPER_BODY";
		case -1197751823:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_6";
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return "MP_COMPONENT_TYPE_SATCHEL";
		case -1130865351:
			return "MP_COMPONENT_TYPE_LOADOUT_7";
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return "MP_COMPONENT_TYPE_HAIR";
		case -893163968:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_3";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return "MP_COMPONENT_TYPE_LOADOUT_4";
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return "MP_COMPONENT_TYPE_BEARDS_CHOPS";
		case -450913544:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_4";
		case -426430150:
			return "MP_COMPONENT_TYPE_LOADOUT_5";
		case -358215195:
			return "MP_COMPONENT_TYPE_END";
		case -338487716:
			return "MP_COMPONENT_TYPE_EYEWEAR";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return "MP_COMPONENT_TYPE_LOADOUT_2";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return "MP_COMPONENT_TYPE_LOADOUT_3";
		case 304805134:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_7";
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return "MP_COMPONENT_TYPE_BEARDS_MUSTACHE";
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return "MP_COMPONENT_TYPE_EYES";
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return "MP_COMPONENT_TYPE_LOADOUT_1";
		case 735520874:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_8";
		case 788010710:
			return "MP_COMPONENT_TYPE_LOWER_LAYER_1";
		case 1108822547:
			return "MP_COMPONENT_TYPE_HEADWEAR";
		case 1145151482:
			return "MP_COMPONENT_TYPE_HAND_ATTIRE";
		case 1250092473:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_2";
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return "MP_COMPONENT_TYPE_BEARD";
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return "MP_COMPONENT_TYPE_LOWER_BODY";
		case 1600962399:
			return "MP_COMPONENT_TYPE_NECKWEAR_2";
		case 1672288269:
			return "MP_COMPONENT_TYPE_UPPER_LAYER_1";
		case 1742327865:
			return "MP_COMPONENT_TYPE_NECKWEAR_1";
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return "MP_COMPONENT_TYPE_TEETH";
		case 1788623170:
			return "MP_COMPONENT_TYPE_LOADOUT_6";
		case 1849504272:
			return "MP_COMPONENT_TYPE_FULL_BODY_ATTIRE";
		case 1900541263:
			return "MP_COMPONENT_TYPE_FOOTWEAR_2";
		case 1958421083:
			return "MP_COMPONENT_TYPE_LOWER_LAYER_2";
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

void func_78(int iParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG] Clearing[", func_77(iParam0, 0), "]: ", func_3(iParam1));
	Global_1953612.f_83[func_49(iParam0, 1) /*12*/].f_11 = (Global_1953612.f_83[func_49(iParam0, 1) /*12*/].f_11 - (Global_1953612.f_83[func_49(iParam0, 1) /*12*/].f_11 && iParam1));
}

char* func_79(int iParam0, int iParam1)
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

char* func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPC_REQUEST_TYPE_EMPTY";
		case 1:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_TEMP_METAPED_CLOTHING";
		case 2:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_CURRENT_METAPED_CLOTHING";
		case 3:
			return "MPC_REQUEST_TYPE_CREATE_HEAD_OVERLAY";
		case 4:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_HEAD_OVERLAY";
		case 5:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_VARIATION";
		case 6:
			return "MPC_REQUEST_TYPE_SWAP_HEAD";
		case 7:
			return "MPC_REQUEST_TYPE_APPLY_TINTS_TO_PLAYER";
		case 8:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_HEAD_HAIR";
		case 9:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_META_TEMP_HEAD_HAIR";
		case 10:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_FACIAL_HAIR";
		case 11:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_TEMP_FACIAL_HAIR";
		case 12:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_REMOVE_GORE";
		case 13:
			return "MPC_REQUEST_TYPE_FINALIZE_OVERLAY";
		case 14:
			return "MPC_REQUEST_TYPE_TRIGGER_HIDE_ACTIONS";
		case 15:
			return "MPC_REQUEST_TYPE_CLEAR_HIDE_ACTIONS";
		case 16:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_TEMP_COMPONENT";
		case 17:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_CURRENT_COMPONENT";
		case 18:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_TEMP_CACHE_COMPONENTS";
		case 19:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_CURRENT_CACHE_COMPONENTS";
		case 20:
			return "MPC_REQUEST_TYPE_UPDATE_OUTFIT_WITH_SWAP_ANIMATION";
		case 21:
			return "MPC_REQUEST_TYPE_UPDATE_REMOVE_OPPOSITE_ITEMS_FOR_META_TYPE";
		case 22:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_EXPRESSIONS";
		case 23:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_METAPED_WEARABLES";
		case 24:
			return "MPC_REQUEST_TYPE_UPDATE_SP_PLAYER_OUTFIT_REQUEST";
		case 25:
			return "MPC_REQUEST_TYPE_UPDATE_SP_PLAYER_OUTFIT_HASH";
		case 26:
			return "MPC_REQUEST_TYPE_GIVE_ITEMS_FROM_OUTFIT_TO_PLAYER";
		case 27:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_PORTABLE_WARDROBE";
		case 28:
			return "MPC_REQUEST_TYPE_ADD_ITEM_TO_PORTABLE_WARDROBE";
		case 29:
			return "MPC_REQUEST_TYPE_REMOVE_ITEM_FROM_PORTABLE_WARDROBE";
		case 30:
			return "MPC_REQUEST_TYPE_UPDATE_OVERRIDE_OUTFIT_RPG_SYSTEM_DATA";
		case 31:
			return "MPC_REQUEST_TYPE_UPDATE_OUTFIT_RPG_SYSTEM_DATA";
		case 32:
			return "MPC_REQUEST_TYPE_SET_OUTFIT_RPG_GLOBAL_STAT_DATA";
		case 33:
			return "MPC_REQUEST_TYPE_CLEAR_OUTFIT_RPG_GLOBAL_STAT_DATA";
		case 34:
			return "MPC_REQUEST_TYPE_MARK_ALL_CURRENT_ITEMS_AS_EQUIPPED";
		case 35:
			return "MPC_REQUEST_TYPE_UPDATE_OUTFIT_IN_PORTABLE_WARDROBE";
		case 36:
			return "MPC_REQUEST_TYPE_UPDATE_PLAYER_OVERLAY_INVENTORY";
		case 37:
			return "MPC_REQUEST_TYPE_ASSET_PRELOAD_PORTABLE_WARDROBE_ITEMS";
		case 38:
			return "MPC_REQUEST_TYPE_ASSET_RELEASE_PORTABLE_WARDROBE_ITEMS";
		case 39:
			return "MPC_REQUEST_TYPE_END";
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

bool func_81(int iParam0)
{
	return Global_1953612.f_595[iParam0] > 0;
}

void func_82(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_REQUEST_INCREMENT_TYPE] Incrementing: ", func_80(iParam0, 0));
	Global_1953612.f_595[iParam0]++;
}

bool func_83(bool bParam0)
{
	return WEAPON::_IS_WEAPON_BOW(bParam0);
}

int func_84(bool bParam0)
{
	if (func_91() == -1)
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

struct<4> func_85()
{
	struct<4> Var0;

	return Var0;
}

bool func_86()
{
	return (func_92(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_93(func_66(joaat("WARDROBE"), func_63(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_87(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_33(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_94(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_2(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_2(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_74(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_66(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_2(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_84(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_2(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_84(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_2(bParam0, 0));
	}
	return iVar0;
}

bool func_88(bool bParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_84(0);
	*iParam1 = { func_66(bParam0, func_67(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_2(bParam0, 0), " eSlot: ", func_74(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, uParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_2(bParam0, 0));
		return false;
	}
	return true;
}

bool func_89(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			DEBUG::_0x4DC69742196F818A(8, 158, "[ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_WITH_SCRIPT_VALIDATION] SLOTID_WEAPON_LONGARM_WRAP_TINT blocked on weapon item");
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

bool func_90(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_84(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_2(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_74(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_91()
{
	return Global_1572887.f_13;
}

int func_92(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_95(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_84(bParam1), bParam0, bParam3);
}

int func_93(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_96(&uParam0, bParam4, bParam5, iParam6);
}

int func_94(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_59(func_34(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

bool func_95(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_96(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_97(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_2(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_97(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_84(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_74(bParam1, 0));
		return false;
	}
	if (!func_90(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_74(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_2(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_74(bParam1, 0));
	return true;
}

