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
	var uVar0;
	int iVar3;
	var uVar4;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
	}
	iVar3 = 0;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (func_1(&iVar3, &uVar4, 1, &uVar0))
		{
		}
		else
		{
			BUILTIN::WAIT(0);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	DEBUG::_0x1B08D1EB9D8C4931(152, 191, "HERB_HANDLE_VOMIT_ANIM - time ", func_2(uParam3), " can start ", bParam2);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	switch (*iParam0)
	{
		case 0:
			if (bParam2)
			{
				func_3(uParam3, 0);
				bParam2 = false;
			}
			if (func_4(uParam3) && func_2(uParam3) > 2f)
			{
				func_5(iParam0, 1);
				func_6(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@MPSTORY@MP_PoisonHerb@IG@IG1_CommonBullrush@IG1_CommonBullrush", 0, "Herb_PL", true, false);
			DEBUG::_0x1B08D1EB9D8C4931(8, 191, "HERB_VOMIT_ANIM_STATE - Anim scene ID =  ", *uParam1);
			func_5(iParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_5(iParam0, 3);
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 191, "HERB_VOMIT_ANIM_STATE - scene does not exist!");
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(*uParam1, false))
			{
				if (PED::IS_PED_MALE(Global_33))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_33, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_33, 0);
				}
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_5(iParam0, 5);
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 191, "HERB_VOMIT_ANIM_STATE - scene not yet loaded or barber not found!");
			}
			break;
		case 5:
			if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false) || PED::IS_PED_FALLING(Global_33)) || ENTITY::IS_ENTITY_IN_WATER(Global_33))
			{
				if (PED::IS_PED_MALE(Global_33))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_33);
				}
				else
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_33);
				}
				func_5(iParam0, 0);
				return true;
			}
			break;
	}
	return false;
}

float func_2(var uParam0)
{
	if (!func_4(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_7(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_8() - uParam0->f_1);
}

void func_3(var uParam0, bool bParam1)
{
	if (bParam1 || !func_4(uParam0))
	{
		func_9(uParam0);
	}
}

bool func_4(var uParam0)
{
	return func_10(*uParam0, 1);
}

void func_5(int iParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(680, 191, "HERB_SET_VOMIT_ANIM_SCENE: moving from ", func_11(*iParam0, 0), " to ", func_11(iParam1, 0));
	*iParam0 = iParam1;
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_7(var uParam0)
{
	return func_10(*uParam0, 2);
}

float func_8()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_9(var uParam0)
{
	func_12(uParam0, 0f);
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "HVAS_WAIT_TO_BE_EATEN";
		case 1:
			return "HVAS_CREATE";
		case 2:
			return "HVAS_LOAD";
		case 3:
			return "HVAS_START";
		case 4:
			return "HVAS_EXIT";
		case 5:
			return "HVAS_CLEANUP";
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

void func_12(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8() - fParam1);
	func_13(uParam0, 1);
	func_14(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

