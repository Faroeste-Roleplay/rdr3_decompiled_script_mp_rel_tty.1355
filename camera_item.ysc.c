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
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	char cLocal_31[32] = "";
	char cLocal_35[32] = "";
	char* sLocal_39 = NULL;
	char* sLocal_40 = NULL;
	char* sLocal_41 = NULL;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	struct<97> Local_51 = { 1, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_148 = 0f;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	vector3 vLocal_153 = { 0f, 0f, 0f };
	vector3 vLocal_156 = { 0f, 0f, 0f };
	vector3 vLocal_159 = { 0f, 0f, 0f };
	bool bLocal_162 = false;
	bool bLocal_163 = false;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	vector3 vLocal_166 = { 0f, 0f, 0f };
	bool bLocal_169 = false;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = false;
	char* sLocal_179[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	bool bLocal_202 = false;
	float fLocal_203 = 0f;
	float fLocal_204 = 0f;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_15 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_16 = "facials@gen_male@portrait";
	StringCopy(&cLocal_31, "", 32);
	StringCopy(&cLocal_35, "", 32);
	sLocal_39 = "CameraViewfinder";
	sLocal_40 = "CameraTakePicture";
	sLocal_41 = "CameraTransitionBlink";
	bLocal_50 = true;
	fLocal_165 = 0f;
	fLocal_204 = 0.5f;
	iLocal_206 = 4;
	iLocal_207 = -1534086282;
	iLocal_209 = -193491261;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA ITEM: HAS_FORCE_CLEANUP_OCCURRED!");
		func_1(&Local_51, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bLocal_50)
	{
		if (iLocal_21 == 1)
		{
			func_3();
		}
		if (func_4(Local_51.f_1[2], 1))
		{
			if (MISC::IS_BIT_SET(Global_1959061, 5))
			{
				func_5(Local_51.f_1[2], 0, 1, 1);
			}
			else
			{
				func_5(Local_51.f_1[2], 1, 1, 1);
			}
		}
		if (func_4(Local_51.f_1[8], 1))
		{
			if (bLocal_202)
			{
				func_5(Local_51.f_1[8], 0, 1, 1);
			}
			else
			{
				func_5(Local_51.f_1[8], 1, 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(1048576);
		func_6(32768);
		func_6(65536);
		func_6(128);
		func_6(256);
		func_6(512);
		func_6(1024);
		func_6(2048);
		func_6(4096);
		func_6(16384);
		func_6(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_50)
		{
			if (func_7(&Local_51))
			{
				bLocal_50 = true;
			}
			else
			{
				bLocal_50 = false;
			}
		}
		func_8(Local_51);
		func_9(&Local_51);
		func_10(&(Local_51.f_73), &(Local_51.f_74), &(Local_51.f_77), &(Local_51.f_78), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (func_11(Local_51.f_1[2], 1) || func_11(Local_51.f_1[7], 1))
		{
			iLocal_42 = 1;
			if (func_12(&Local_51) == 3)
			{
				func_13(&Local_51, 12);
			}
			else if (func_12(&Local_51) != 6)
			{
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "Stopping any zoom sfx on exit from viewfinder.");
				func_14();
				if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
					DEBUG::_0xF0783374333FD8CE(8, 190, "Playing Collapse_Camera sound effect.");
				}
				DEBUG::_0xF0783374333FD8CE(8, 190, "Exit from forward viewfinder NEW_VIEWFINDER called.");
				iLocal_177 = MISC::GET_GAME_TIMER();
				bLocal_178 = true;
				func_15();
				Global_1959058 = 0;
				func_13(&Local_51, 4);
			}
		}
		func_16(&Local_51);
		iVar0 = func_12(&Local_51);
		if (func_17())
		{
		}
		func_18(&(Local_51.f_51));
		func_19(&(Local_51.f_51));
		switch (iVar0)
		{
			case 0:
				if (func_20())
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_PRE_INIT : CAMERA_ITEM_IS_PICTURE_SAVING_DISABLED not performing sorted List operation. b_SortedListOperationInProgress = FALSE");
					iLocal_21 = 0;
					uLocal_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_29, "cameraRollCapacityLabel", "Disabled");
					func_21();
					func_13(&Local_51, 1);
				}
				else
				{
					if (func_22(&Local_51))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						DEBUG::_0x4DC69742196F818A(8, 190, "CI_STATE_PRE_INIT : Starting sorted list operation, setting critical bool: b_SortedListOperationInProgress TRUE");
						iLocal_21 = 1;
						func_23(&Local_51);
					}
					func_13(&Local_51, 1);
				}
				break;
			case 1:
				if (func_22(&Local_51))
				{
					func_24();
					func_23(&Local_51);
				}
				func_25();
				iLocal_17 = MISC::GET_GAME_TIMER();
				func_13(&Local_51, 2);
				break;
			case 2:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				if (func_26(iLocal_17) && func_27(Global_33, 1, 0, 0) == joaat("WEAPON_KIT_CAMERA"))
				{
					func_13(&Local_51, 3);
				}
				break;
			case 4:
				func_9(&Local_51);
				func_28();
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				if (bLocal_178)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_177) > 500)
					{
						HUD::_DISPLAY_HUD_COMPONENT(959420967);
						CAM::SET_CAM_ACTIVE(Local_51.f_14, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_51.f_14);
						DEBUG::_0xF0783374333FD8CE(8, 190, "bProcessDisableHudContextPause : Completed. May 18 - Destroying forward viewfinder cam.");
						CAM::DESTROY_CAM(Local_51.f_14, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_13(&Local_51, 3);
						func_29();
						bLocal_178 = false;
						func_30();
					}
				}
				break;
			case 3:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_170) > 100)
				{
					func_31();
					iLocal_170 = MISC::GET_GAME_TIMER();
				}
				if (func_22(&Local_51))
				{
					func_32(&Local_51);
					func_33(3);
					func_34(1);
					func_23(&Local_51);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
				if (iLocal_42 == 1 && Global_1959059 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						DEBUG::_0xF0783374333FD8CE(8, 190, "Hold Limiter no longer in operation, unblocking use and setting to false.");
						iLocal_42 = 0;
					}
					else
					{
						DEBUG::_0xF0783374333FD8CE(8, 190, "Hold Limiter not released, still set to true.");
						iLocal_42 = 1;
					}
				}
				if (Global_1959059 == 1)
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "Hold Limiter disregarded, g_bForceHandheldView is true.");
					iLocal_42 = 0;
				}
				if (bLocal_169 && iLocal_42 == 0)
				{
					func_5(Local_51.f_1[0], 1, 1, 1);
					if (func_35(Local_51.f_1[0], 1) || Global_1959059 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						if (Global_1959059 != 1)
						{
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_READY: g_bForceHandheldView was true, resetting, requesting ui flow and moving to new viewfinder init mode...");
							Global_1959059 = 0;
						}
						Global_1959058 = 1;
						func_15();
						HUD::_HIDE_HUD_COMPONENT(959420967);
						func_36();
						DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_READY: CI_CONTEXT_HANDHELD_USE pressed, requesting ui flow and moving to new viewfinder init mode...");
						iLocal_149 = MISC::GET_GAME_TIMER();
						func_13(&Local_51, 5);
					}
				}
				else
				{
					func_5(Local_51.f_1[0], 0, 1, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_152) > 600)
				{
					func_37();
					iLocal_152 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_151)
				{
					func_5(Local_51.f_1[1], 1, 1, 1);
					if (func_35(Local_51.f_1[1], 1))
					{
						if (func_38(Global_33, 0))
						{
							DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER:  b_CanPlayerPlaceTripod was true, self portrait context pressed but player is wanted or in combat.");
						}
						else
						{
							iLocal_174 = 0;
							iLocal_176 = 0;
							func_15();
							DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER: moving to reverse angle init mode!");
							func_13(&Local_51, 8);
							if (!func_39(&uLocal_171))
							{
								DEBUG::_0x1B08D1EB9D8C4931(8, 190, "Starting reverse angle setup timer.");
								func_40(&uLocal_171, 1);
							}
							if (!Local_51.f_95)
							{
								Local_51.f_95 = 1;
								PED::_0xC6136B40FFFB778B(Local_51.f_95);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_33, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_PLAY_SOUND_FROM_ENTITY("Place_Tripod", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					func_5(Local_51.f_1[1], 0, 1, 1);
				}
				break;
			case 5:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_28();
				if (func_41() && (MISC::GET_GAME_TIMER() - iLocal_149) > 500)
				{
					func_42();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
					DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER_INIT: Getting game timer for tripod placement throttle.");
					Local_51.f_52 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
					Local_51.f_55 = { ENTITY::GET_ENTITY_ROTATION(Global_33, 2) };
					Local_51.f_67 = { Local_51.f_55, Local_51.f_55.f_1, Local_51.f_55.f_2 };
					Local_51.f_61 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_51.f_52, Local_51.f_55.f_2, 0f, 0.3f, 0.5f) };
					Local_51.f_93 = 0;
					Local_51.f_67 = { 0f, 0f, 0f };
					Local_51.f_66 = 0f;
					Local_51.f_65 = 0f;
					Local_51.f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_51.f_61, Local_51.f_67, 65f, false, 2);
					fLocal_148 = Local_51.f_55.f_2;
					if (func_43() != 0)
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_51.f_14, Global_33, 21030, 0f, 0.2f, 0f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_51.f_14, Global_33, 21030, 0f, 0.6f, 0f, true);
					}
					CAM::SET_CAM_NEAR_CLIP(Local_51.f_14, 0.25f);
					Local_51.f_15 = 5f;
					Local_51.f_15.f_1 = 2f;
					Local_51.f_15.f_2 = 128f;
					Local_51.f_15.f_3 = 25f;
					Local_51.f_15.f_4 = 25f;
					Local_51.f_15.f_5 = 60f;
					Local_51.f_15.f_6 = 1;
					Local_51.f_15.f_7 = 0;
					Local_51.f_15.f_8 = 1;
					Local_51.f_15.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_51.f_14, &(Local_51.f_15));
					CAM::_0x9F97E85EC142255E(Local_51.f_14, Local_51.f_93);
					CAM::_0x42ED56B02E05D109(Local_51.f_14, false);
					CAM::SET_CAM_ACTIVE(Local_51.f_14, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_33, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
						DEBUG::_0xF0783374333FD8CE(8, 190, "Playing Expand_Camera sound effect.");
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_37();
					DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER_INIT: Getting game timer for tripod placement throttle.");
					iLocal_152 = MISC::GET_GAME_TIMER();
					func_30();
					GRAPHICS::_0x9F6D859C80708B26(1, 0);
					func_13(&Local_51, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				if (iLocal_43 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_HANDHELD_MODE: Setting g_bForceCameraAway to true, player ragdolling or not on ground in handheld mode.");
					Global_1959060 = 1;
					iLocal_43 = 1;
				}
				if (MISC::IS_BIT_SET(Global_1959061, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_22(&Local_51))
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER: Reset prompts called on this state.");
					func_33(6);
					func_23(&Local_51);
				}
				func_44(&Local_51);
				if (iLocal_46 == 0)
				{
					if (func_45(Local_51.f_1[6]) && !func_46(&Local_51, 32))
					{
						func_32(&Local_51);
						DEBUG::_0xF0783374333FD8CE(8, 190, "___________________________________________________________________________________________________________________________");
						DEBUG::_0xF0783374333FD8CE(8, 190, "");
						DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER: Taking a pic from the viewfinder mode with new sound!");
						DEBUG::_0xF0783374333FD8CE(8, 190, "___________________________________________________________________________________________________________________________");
						if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_33, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
						}
						func_47(1);
						func_48(&Local_51, 32);
					}
					if (!func_46(&Local_51, 32))
					{
						if (func_45(Local_51.f_1[5]))
						{
							DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER: View Photos context selected from CI_STATE_NEW_VIEWFINDER- launching to photos within Social Club feed.");
							func_49();
						}
					}
				}
				else
				{
					DEBUG::_0x4DC69742196F818A(8, 190, "CI_STATE_NEW_VIEWFINDER: Cannot take pic. Currently in depth of field transition.");
				}
				break;
			case 11:
				if (func_22(&Local_51))
				{
					Local_51.f_1[6] = func_50("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_33, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_34(1);
					func_51("CAM_SNAP", 0, 0, 1);
					func_23(&Local_51);
				}
				if (func_52())
				{
					if (!func_46(&Local_51, 16))
					{
						DEBUG::_0xF0783374333FD8CE(8, 190, "CST- Was in CI_STATE_USING_LEGACY_AIM, CAMERA_ITEM_STOP returned true, UNEQUIP flag not set.");
						func_13(&Local_51, 3);
					}
					else
					{
						DEBUG::_0xF0783374333FD8CE(8, 190, "CST- Was in CI_STATE_USING_LEGACY_AIM, CAMERA_ITEM_STOP returned true, UNEQUIP flag set.");
						func_13(&Local_51, 13);
					}
				}
				else
				{
					func_53(&Local_51);
				}
				break;
			case 10:
				func_54(&Local_51);
				func_28();
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				iLocal_42 = 1;
				if (iLocal_175 == 0)
				{
					if (func_55(&uLocal_171) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_51.f_14))
						{
							DEBUG::_0xF0783374333FD8CE(8, 190, "Destroying Cam - Reverse Angle");
							CAM::SET_CAM_ACTIVE(Local_51.f_14, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_51.f_14, false);
						}
						if (func_56())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
							ENTITY::SET_ENTITY_HEADING(Global_33, fLocal_203);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_29();
						iLocal_175 = 1;
					}
				}
				if (func_55(&uLocal_171) > 1000)
				{
					HUD::_DISPLAY_HUD_COMPONENT(959420967);
					func_30();
					func_57(&uLocal_171);
					DEBUG::_0x1B08D1EB9D8C4931(8, 190, "CI_STATE_REMOVING_TRIPOD - Reverse angle removal timer elapsed. Going to ready state ");
					DEBUG::_0xF0783374333FD8CE(8, 190, "Stopping any zoom sfx on exit from reverse angle..");
					func_14();
					func_13(&Local_51, 3);
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 190, "CI_STATE_REMOVING_TRIPOD - waiting on reverse angle removal timer to elapse");
				}
				break;
			case 8:
				func_54(&Local_51);
				func_28();
				if (iLocal_174 != 0)
				{
				}
				else if (func_55(&uLocal_171) > 500)
				{
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, false, false, true, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_33, vLocal_153, fLocal_164, true, false, true);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
					func_42();
					bLocal_202 = false;
					iLocal_174 = 1;
				}
				if (iLocal_174 != 1)
				{
				}
				else if (iLocal_176 == 0)
				{
					if (func_55(&uLocal_171) > 300)
					{
						iLocal_176 = 1;
						DEBUG::_0x1B08D1EB9D8C4931(8, 190, "CI_STATE_REVANG_INIT - Reverse angle player setup timer elapsed. Triggering REVERSE_ANGLE_INITIALISATION. ");
						func_58(&Local_51);
					}
					else
					{
						DEBUG::_0x1B08D1EB9D8C4931(8, 190, "CI_STATE_REVANG_INIT - waiting on reverse angle player setup timer to elapse before next phase.");
					}
				}
				else if (func_55(&uLocal_171) > 1000)
				{
					func_57(&uLocal_171);
					DEBUG::_0x1B08D1EB9D8C4931(8, 190, "CI_STATE_REVANG_INIT - Reverse angle camera setup timer elapsed. Fading in to CI_STATE_REVANG");
					func_59(&Local_51);
					func_30();
					GRAPHICS::_0x9F6D859C80708B26(1, 0);
					func_13(&Local_51, 9);
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 190, "CI_STATE_REVANG_INIT - waiting on reverse angle camera setup timer to elapse before fade in.");
				}
				break;
			case 9:
				func_54(&Local_51);
				CAM::_0x3C8F74E8FE751614();
				if (Local_51.f_95)
				{
					Local_51.f_95 = 0;
					PED::_0xC6136B40FFFB778B(Local_51.f_95);
				}
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_59(&Local_51);
				if (func_35(Local_51.f_1[6], 1) && !func_46(&Local_51, 32))
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_REVANG: taking a picture from tripod's reverse angle!");
					func_32(&Local_51);
					if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_33, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
					}
					func_47(1);
					func_48(&Local_51, 32);
				}
				else if (func_35(Local_51.f_1[1], 1))
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_REVANG: moving to selfie!");
					if (!Local_51.f_95)
					{
						Local_51.f_95 = 1;
						PED::_0xC6136B40FFFB778B(Local_51.f_95);
					}
					func_13(&Local_51, 8);
				}
				if (!func_46(&Local_51, 32))
				{
					if (func_45(Local_51.f_1[5]))
					{
						DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_NEW_VIEWFINDER: View Photos context selected from CI_STATE_REVANG - launching to photos within Social Club feed.");
						func_49();
					}
				}
				break;
			case 7:
				break;
			case 12:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_32(&Local_51);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_33, 1, 0, 0, 0);
				func_13(&Local_51, 13);
				break;
			case 13:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_2();
				func_1(&Local_51, 1);
				DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM - Terminating thread from CI_STATE_CLEANUP state switch check and clearing ped tasks if not crouching...");
				if (PED::_GET_PED_CROUCH_MOVEMENT(Global_33))
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM - Player crouching on exit from camera, not clearing tasks. Shouldn't have been allowed to launch camera in this state.");
				}
				else if (func_56())
				{
					DEBUG::_0xA308F935BDECCEC0(8, 190, "CI_STATE_CLEANUP - Safe to clear pose task, player was posing and not grappled.");
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_60())
		{
			if (func_61(&uLocal_188) > 1f)
			{
				func_62();
			}
		}
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM - Player crouching on exterior exit from camera, not clearing tasks. Shouldn't have been allowed to launch camera in this state.");
	}
	else if (func_56())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "EXTERIOR_EXIT: Safe to clear pose task immediately, player was posing and not grappled.");
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
	func_2();
	func_1(&Local_51, 1);
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM - Terminating thread from exterior of WHILE clause.");
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_CLEANUP begins...");
	func_63();
	func_64(&(uParam0->f_51));
	GRAPHICS::_0x9F6D859C80708B26(0, 0);
	if (uParam0->f_95)
	{
		uParam0->f_95 = 0;
		PED::_0xC6136B40FFFB778B(uParam0->f_95);
	}
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_CLEANUP - Setting forced aim to FALSE in MP. See bug 5492880");
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "Destroying all script Cameras on cleanup - Viewfinder and Reverse Angle");
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_DISPLAY_HUD_COMPONENT(959420967);
	Global_1959058 = 0;
	Global_1959059 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	STREAMING::REMOVE_CLIP_SET(sLocal_16);
	STREAMING::REMOVE_ANIM_DICT(sLocal_15);
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_32(uParam0);
	func_34(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_TEXT_DATABASE_DELETE("CAMERA");
}

void func_2()
{
	if (iLocal_19 == 1)
	{
		_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_45);
	}
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_UI_FLOW_CLEANUP - releasing UI elements and datastores.");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_29);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_UI_FLOW_CLEANUP - releasing UI flow if loaded.");
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_208))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_208);
	}
	iLocal_208 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_UI_FLOW_CLEANUP - clearing viewfinder overlay");
	func_29();
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_UI_FLOW_CLEANUP - clearing any postfx transitions");
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_UI_FLOW_CLEANUP - CameraTransitionBlink was running. Stopping on cleanup.");
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_41);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_UI_FLOW_CLEANUP - stopping any sounds");
	func_14();
	if (TASK::GET_IS_TASK_ACTIVE(Global_33, 3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
		DEBUG::_0x4DC69742196F818A(8, 190, "CAMERA_ITEM_UI_FLOW_CLEANUP - CODE_TASK_SCRIPTED_ANIMATION was still true on process. Abort tasks immediately.");
	}
}

void func_3()
{
	Local_51.f_89 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_51.f_89 == 1)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "GET_SORTED_LIST_STATUS() : Getting status of sorted list operation...");
	}
	if (Local_51.f_89 == 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "GET_SORTED_LIST_STATUS() : Sorted List Photo Operation succeeded!");
		bLocal_20 = false;
		iLocal_22 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		iLocal_23 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		uLocal_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_29, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_65();
		DEBUG::_0xF0783374333FD8CE(8, 190, "GET_SORTED_LIST_STATUS() : i_CurrentNumberOfLocalPhotos is ", iLocal_22);
		DEBUG::_0xF0783374333FD8CE(8, 190, "GET_SORTED_LIST_STATUS() : i_MaximumNumberOfLocalPhotos is ", iLocal_23);
		iLocal_21 = 0;
		bLocal_25 = true;
		iLocal_26 = MISC::GET_GAME_TIMER();
	}
	else if (Local_51.f_89 == 2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "GET_SORTED_LIST_STATUS() : Sorted List Photo Operation failed. Setting internal save bypass.");
		bLocal_20 = true;
		uLocal_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_29, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_21 = 0;
		bLocal_25 = false;
	}
}

bool func_4(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3);
}

void func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (bParam2 && !func_66(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ENABLED - Invalid context!");
		return;
	}
	sVar0 = func_67(iParam0);
	if (bParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Enable use context, ", sVar0);
		func_68(iParam0, 4);
		if (bParam3)
		{
			func_69(sVar0, 1);
		}
		func_70(sVar0, 1);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Disable use context, ", sVar0);
		func_71(iParam0, 4);
		func_70(sVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1940296.f_39 = (Global_1940296.f_39 || iParam0);
}

bool func_7(var uParam0)
{
	if (Global_1959060 == 1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: g_bForceCameraAway = TRUE, quitting and resetting flag.");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1959060 = 0;
		return false;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33) > 0.33f)
		{
			DEBUG::_0xF0783374333FD8CE(24, 190, "SHOULD_CAMERA_UPDATE: Player submerged level greater than 0.33 quitting. Submerged level is ", ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33));
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
		if (PED::_0x7FC84E85D98F063D(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player is running an animal interaction. Quitting!");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
		if (PED::_IS_PED_LASSOED(Global_33))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player is lassoed. Quitting!");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	if (func_72())
	{
		if ((func_73(16) || func_73(37)) || func_74(Global_1915867.f_20241.f_1))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player in shop, but is Pearson, Moonshine Property or outdoors.");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player in shop, quitting...");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player on fire, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player being grappled, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_75(Global_33, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player not active, quitting...");
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player not playing, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_33) || PED::IS_PED_INJURED(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player doesn't exist or is dead/injured, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_76(joaat("WEAPON_KIT_CAMERA"), 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player doesn't have the camera satchel item, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (func_12(uParam0) == 8)
	{
	}
	if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
	{
		if (func_27(Global_33, 1, 0, 1) != joaat("WEAPON_KIT_CAMERA"))
		{
			if (func_77(uParam0) == 0)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player doesn't have the camera equipped, not in pic taking process, quitting...");
				return false;
			}
		}
	}
	if (func_78())
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Can't use camera with satchel open, quitting...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_33, true)))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Can't use camera in vehicle, quitting...");
		func_79("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (Global_1940410.f_52)
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "SHOULD_CAMERA_UPDATE: Player was just hit by a poison bottle...");
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	return true;
}

void func_8(struct<91> Param0, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_33, 129, true);
	PED::SET_PED_RESET_FLAG(Global_33, 173, true);
	if (Param0.f_90 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	if (!Param0.f_90 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	if (func_80(Global_33))
	{
		iVar0 = PED::GET_MOUNT(Global_33);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

void func_9(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_FRONTEND_LT"));
	if ((((func_12(uParam0) == 8 || func_12(uParam0) == 9) || func_12(uParam0) == 10) || func_12(uParam0) == 5) || func_12(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (!uParam0->f_90 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_81(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_13) && CAM::IS_CAM_ACTIVE(uParam0->f_13))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
}

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

bool func_11(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1952230[iVar0 /*23*/].f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_90;
}

void func_13(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(680, 190, "SET_CAM_ITEM_STATE: moving from ", func_82(func_12(uParam0)), " to ", func_82(iParam1));
	uParam0->f_90 = iParam1;
	func_83(uParam0);
}

void func_14()
{
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "APFX_CAMERA_ITEM_GO_TO_BLACK_SCREEN() has been called.");
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_41);
	}
}

void func_16(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (func_4(uParam0->f_1[6], 1))
	{
		if (uParam0->f_91 == 0 && iLocal_21 == 0)
		{
			func_5(uParam0->f_1[6], 1, 1, 1);
			if (bLocal_25)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_26) > 2500)
				{
					iLocal_22 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
					func_65();
					iLocal_26 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			func_5(uParam0->f_1[6], 0, 1, 1);
		}
	}
	switch (uParam0->f_91)
	{
		case 1:
			DEBUG::_0x4DC69742196F818A(8, 190, "CI_PIC_STATE_ON_ALERT_SCREEN -  BWaiting for input...");
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_45);
				bLocal_20 = true;
				func_84(uParam0, 2);
				iLocal_19 = 0;
				DEBUG::_0x4DC69742196F818A(8, 190, "CI_PIC_STATE_ON_ALERT_SCREEN -  Backed out of alert screen, going to remove decor.");
			}
			break;
		case 0:
			if (func_46(uParam0, 32))
			{
				func_32(uParam0);
				DEBUG::_0x4DC69742196F818A(8, 190, "CI_FLAG_TAKING_PICTURE -  Flag just Set! Number of local photos prior to processing this click was ", iLocal_22);
				DEBUG::_0x4DC69742196F818A(8, 190, "CI_FLAG_TAKING_PICTURE -  Maximum number of photos is  ", iLocal_23);
				if (func_20() || bLocal_20)
				{
					DEBUG::_0xF0783374333FD8CE(2728, 190, "CAMERA_ITEM_USE: Picture taken, but Saving disabled: ", MISC::_0xF216F74101968DB0(func_20()), " OR b_SortedListOperationFailed ", MISC::_0xF216F74101968DB0(bLocal_20), ". Bypassing save pipeline...");
					func_85(uParam0);
					func_84(uParam0, 2);
				}
				else if (iLocal_22 == iLocal_23)
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_USE: Took picture with save pipeline enabled but current number of local photos = maximum.");
					func_85(uParam0);
					if (iLocal_45 == 0)
					{
						DEBUG::_0xA308F935BDECCEC0(8, 190, "CAMERA_ITEM_USE: Took picture with save pipeline enabled but current number of local photos.  Going to alert screen...");
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_45 = func_86(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_84(uParam0, 1);
						iLocal_19 = 1;
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(8, 190, "CAMERA_ITEM_USE: ufmGalleryFullID was already valid.");
						bLocal_20 = true;
						func_84(uParam0, 2);
					}
				}
				else
				{
					func_84(uParam0, 2);
				}
			}
			if (func_46(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_84(uParam0, 7);
			}
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_USE: bHasTakenPic decor is now false!");
			Local_51.f_96 = 0;
			func_47(0);
			func_84(uParam0, 3);
			iLocal_49 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_49) > 0)
			{
				iLocal_49 = MISC::GET_GAME_TIMER();
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: Shutter Pause begins...");
				func_29();
				func_87();
				if (func_20() || bLocal_20)
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_USE: Decor removed, but saving disabled. Bypassed save pipeline");
					func_84(uParam0, 4);
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 190, "CI_FLAG_TAKING_PICTURE: BEGIN_TAKE_HIGH_QUALITY_PHOTO() native cued. Incrementing current number of local photos...");
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_22++;
					func_65();
					DEBUG::_0x4DC69742196F818A(8, 190, "CI_FLAG_TAKING_PICTURE - Number of local photos after process will be ", iLocal_22);
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_84(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_89 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_89 == 1)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: TAKE_HIGH_QUALITY_PHOTO operation in progress...");
			}
			if (uParam0->f_89 == 0)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: TAKE_HIGH_QUALITY_PHOTO operation succeeded!");
				StringCopy(&cVar19, "", 32);
				iVar23 = func_88();
				if (func_89(iVar23))
				{
					MemCopy(&cVar19, {func_90(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_91();
					StringCopy(&cVar19, func_92(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_93();
				if (func_94(iVar29))
				{
					StringCopy(&cVar25, func_95(iVar29), 16);
					StringCopy(&cVar27, func_96(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				func_85(uParam0);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_24 = 0;
				func_84(uParam0, 6);
			}
			else if (uParam0->f_89 == 2)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: TAKE_HIGH_QUALITY_PHOTO operation failed!");
				func_84(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_24 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: Saving shutter pause concluded!");
				func_42();
				func_33(func_12(uParam0));
				func_5(uParam0->f_1[6], 0, 1, 1);
				func_97(691, 0);
				iLocal_24 = 1;
			}
			uParam0->f_89 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: Saving photo...");
			if (uParam0->f_89 == 0)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: new picture successfully taken and saved!");
				Local_51.f_96 = 1;
				func_98(uParam0, 32);
				func_84(uParam0, 0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (uParam0->f_89 == 2)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: new UPDATE_PIC_STATE: SAVE_HIGH_QUALITY_PHOTO operation failed!");
				Local_51.f_96 = 1;
				func_98(uParam0, 32);
				func_84(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_49) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: Bypass shutter Pause concluded!");
				func_98(uParam0, 32);
				func_84(uParam0, 0);
				func_42();
				func_33(func_12(uParam0));
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_97(691, 0);
			}
			break;
		case 7:
			uParam0->f_89 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_89 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_48(uParam0, 256);
				func_98(uParam0, 128);
				func_84(uParam0, 0);
			}
			else if (uParam0->f_89 == 2)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_PIC_STATE: DRAW_LOW_QUALITY_PHOTO operation failed!");
				func_98(uParam0, 128);
				func_84(uParam0, 0);
			}
			break;
	}
}

bool func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return false;
}

void func_18(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || func_99(Global_1280543, 16))
	{
		func_100(uParam0);
	}
}

void func_19(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || func_99(Global_1280543, 16))
	{
		func_101();
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam0) || ITEMSET::GET_ITEMSET_SIZE(*uParam0) <= 0)
		{
			return;
		}
		func_102(uParam0);
	}
	if (func_99(Global_1280543, 16))
	{
		func_103(&Global_1280543, 16);
	}
}

bool func_20()
{
	return Global_1959057;
}

void func_21()
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "CI_STATE_PRE_INIT : WRITE_CAMERA_ROLL_CAPACITY_DISABLED_BINDING cued.");
	StringCopy(&cLocal_31, "-", 32);
	StringConCat(&cLocal_31, " / ", 32);
	StringCopy(&cLocal_35, "-", 32);
	StringConCat(&cLocal_31, &cLocal_35, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_30, &cLocal_31);
}

bool func_22(var uParam0)
{
	return *uParam0;
}

void func_23(var uParam0)
{
	*uParam0 = 0;
}

void func_24()
{
	func_63();
	Global_1280543.f_1 = ITEMSET::CREATE_ITEMSET(true);
}

void func_25()
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "REQUEST_CAMERA_ITEM_ASSETS...");
	HUD::_TEXT_DATABASE_REQUEST("CAMERA");
	STREAMING::REQUEST_ANIM_DICT(sLocal_15);
	STREAMING::REQUEST_CLIP_SET(sLocal_16);
	GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
}

bool func_26(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraViewfinder"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "HAVE_CAMERA_ITEM_ASSETS_LOADED: waiting on camera viewfinder postfx overlay to load.");
		iVar0 = 0;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionBlink"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "HAVE_CAMERA_ITEM_ASSETS_LOADED: waiting on TransitionBlink postfx overlay to load.");
		iVar0 = 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("CAMERA"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "HAVE_CAMERA_ITEM_ASSETS_LOADED: waiting on camera item text to load.");
		iVar0 = 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_16))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "HAVE_CAMERA_ITEM_ASSETS_LOADED: waiting on portrait anim clip to load.");
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_15))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "HAVE_CAMERA_ITEM_ASSETS_LOADED: waiting on portrait anim dictionary to load.");
		iVar0 = 0;
	}
	if (!AUDIO::_0xD9130842D7226045("CAMERA_SOUNDSET", 0))
	{
		if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "HAVE_CAMERA_ITEM_ASSETS_LOADED: WARNING. Was waiting on CAMERA_SOUNDSET preparation but timeout has elapsed. Bypassing asset load.");
			iVar0 = 1;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "HAVE_CAMERA_ITEM_ASSETS_LOADED: waiting on CAMERA_SOUNDSET preparation...");
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_27(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_28()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_1275959.f_8, 129, true);
	PED::SET_PED_RESET_FLAG(Global_1275959.f_8, 103, true);
}

void func_29()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_39))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_39);
	}
}

void func_30()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "APFX_CAMERA_ITEM_GO_BACK_TO_GAMEPLAY() has been called.");
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_41);
	}
}

void func_31()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	vLocal_156 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, 0f, 2f, -0.2f) };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, -0.75f, 0f, 0f) };
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, 0.75f, 0f, 0f) };
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAN_PLAYER_USE_HANDHELD_AT_THIS_POSITION()- cannot use. Player is crouching");
		bLocal_169 = false;
		return;
	}
	if ((ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, vVar1.x, vVar1.y, vVar1.z, 3167) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, vVar4.x, vVar4.y, vVar4.z, 3167)) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, vVar7.x, vVar7.y, vVar7.z, 3167))
	{
		bLocal_169 = true;
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_USE_HANDHELD_AT_THIS_POSITION() - cannot place. No clear LOS to potential placement position from player.");
		bLocal_169 = false;
	}
}

void func_32(var uParam0)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 190, "RELEASE_CAMERA_ITEM_CONTEXTS called.");
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_66(uParam0->f_1[iVar0]))
		{
			func_104(&(uParam0->f_1[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_105(6, 0);
			func_105(3, 0);
			func_105(8, 0);
			func_105(9, 0);
			func_105(7, 0);
			func_105(4, 0);
			func_105(5, 0);
			func_105(0, 1);
			func_105(1, 1);
			func_105(2, 1);
			break;
		case 6:
			func_105(0, 0);
			func_105(8, 0);
			func_105(9, 0);
			func_105(1, 0);
			func_105(2, 0);
			func_105(5, 1);
			func_105(3, 1);
			func_105(4, 1);
			func_105(6, 1);
			func_105(7, 1);
			break;
		case 8:
			func_105(0, 0);
			func_105(1, 0);
			func_105(2, 0);
			func_105(5, 1);
			func_105(8, 1);
			func_105(9, 1);
			func_105(3, 1);
			func_105(4, 1);
			func_105(6, 1);
			func_105(7, 1);
			break;
		case 9:
			func_105(0, 0);
			func_105(1, 0);
			func_105(2, 0);
			func_105(5, 1);
			func_105(8, 1);
			func_105(9, 1);
			func_105(3, 1);
			func_105(4, 1);
			func_105(6, 1);
			func_105(7, 1);
			break;
		case 10:
			func_105(2, 0);
			func_105(0, 0);
			func_105(3, 0);
			func_105(1, 0);
			func_105(5, 0);
			func_105(8, 0);
			func_105(9, 0);
			func_105(7, 0);
			func_105(6, 0);
			func_105(9, 0);
			func_105(4, 0);
			break;
		case 7:
			func_105(2, 0);
			func_105(0, 0);
			func_105(6, 0);
			func_105(4, 0);
			func_105(5, 0);
			func_105(1, 0);
			func_105(8, 0);
			func_105(9, 0);
			func_105(7, 0);
			break;
	}
}

void func_34(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1952230[iVar0 /*23*/].f_3);
}

void func_36()
{
	if (iLocal_206 == 0)
	{
		iLocal_206 = 1;
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(40, 124, "CAMERA_ITEM - WARNING! Ui Flow will NOT be requested or loaded. Flow State was not dormant on launch. State was ", func_106(iLocal_206, 0));
	}
}

void func_37()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	char* sVar5;
	float fVar6;

	vLocal_156 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, 0f, 4f, 0f) };
	if (func_107(PLAYER::PLAYER_ID(), 1))
	{
		vVar1.f_2 = (vVar1.z + 1f);
	}
	else
	{
		vVar1.f_2 = (vVar1.z + 50f);
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar4, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_156, &sVar5, false);
	if ((vLocal_156.z - fVar4) > 3f)
	{
		DEBUG::_0x4DC69742196F818A(408, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player significantly higher than potential placement position.", sVar5, " ", fVar4);
		bLocal_151 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player riding train.");
		bLocal_151 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player on horseback.");
		bLocal_151 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player is drunk.");
		bLocal_151 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_156, 2f) > 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Fire detected within 2 metres of the player's current position.");
		bLocal_151 = false;
		return;
	}
	if ((fVar4 - vLocal_156.z) > 1f)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player significantly lower than potential placement position.");
		bLocal_151 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_33))
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player in water.");
		bLocal_151 = false;
		return;
	}
	if (func_38(Global_33, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player is in combat.");
		bLocal_151 = false;
		return;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Player is crouching");
		bLocal_151 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Potential placement position in water.");
		bLocal_151 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. Potential placement position is on a road.");
		bLocal_151 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_151 = true;
	}
	else
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "CAN_PLAYER_PLACE_TRIPOD() - cannot place. No clear LOS to potential placement position from player.");
		bLocal_151 = false;
	}
	if (bLocal_151)
	{
		vLocal_153 = { vLocal_156.x, vLocal_156.y, (vLocal_156.z - 1f) };
		fLocal_164 = fVar0;
		vLocal_159 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_38(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_39(var uParam0)
{
	return func_108(*uParam0, 1);
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_39(uParam0))
	{
		func_109(uParam0);
	}
}

bool func_41()
{
	switch (iLocal_206)
	{
		case 0:
			if (iLocal_207 == iLocal_209)
			{
			}
			break;
		case 1:
			iLocal_208 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_207);
			DEBUG::_0xF0783374333FD8CE(8, 124, "HAS_CAMERA_ITEM_UI_LOADED - Requested UI Flow and set up bindings for this script.");
			iLocal_206 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_208))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_208, iLocal_209);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_208);
				iLocal_206 = 3;
				DEBUG::_0xF0783374333FD8CE(8, 124, "HAS_CAMERA_ITEM_UI_LOADED - UI Flow just loaded, creating UI state machine.");
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_42()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_39))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_39);
	}
}

int func_43()
{
	return Global_1572887.f_13;
}

void func_44(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;

	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), true, 0, -1, false);
	if (uParam0->f_73 > 0 && IntToFloat(uParam0->f_73) > 89f)
	{
		uParam0->f_73 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_73 < 0 && IntToFloat(uParam0->f_73) < -89f)
	{
		uParam0->f_73 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_74 > 0 && IntToFloat(uParam0->f_74) > 89f)
	{
		uParam0->f_74 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_74 < 0 && IntToFloat(uParam0->f_74) < -89f)
	{
		uParam0->f_74 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_73 != uParam0->f_75)
	{
		uParam0->f_75 = uParam0->f_73;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_73) - -89f) / (89f - -89f));
		uParam0->f_81 = fVar0;
	}
	else
	{
		uParam0->f_85 = 0f;
	}
	if (uParam0->f_74 != uParam0->f_76)
	{
		uParam0->f_76 = uParam0->f_74;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_74) - -89f) / (89f - -89f));
		uParam0->f_82 = fVar1;
	}
	else
	{
		uParam0->f_86 = 0f;
	}
	fVar4 = 50f;
	fVar5 = -25f;
	fVar2 = 68f;
	fVar3 = -85f;
	fVar9 = uParam0->f_65;
	fVar10 = uParam0->f_66;
	fVar8 = -1f;
	if (uParam0->f_77 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_77 = MISC::ABSI(uParam0->f_77);
	}
	fVar6 = ((BUILTIN::TO_FLOAT(uParam0->f_77) - 0f) / (89f - 0f));
	fVar9 = (fVar9 + (fVar6 * fVar8));
	if (fVar9 >= fVar2)
	{
		fVar9 = fVar2;
	}
	else if (fVar9 < fVar3)
	{
		fVar9 = fVar3;
	}
	uParam0->f_65 = fVar9;
	fVar8 = -1f;
	if (uParam0->f_78 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_78 = MISC::ABSI(uParam0->f_78);
	}
	fVar7 = ((BUILTIN::TO_FLOAT(uParam0->f_78) - 0f) / (89f - 0f));
	fVar10 = (fVar10 + (fVar7 * fVar8));
	if (fVar10 >= fVar4)
	{
		fVar10 = fVar4;
	}
	else if (fVar10 < fVar5)
	{
		fVar10 = fVar5;
	}
	uParam0->f_66 = fVar10;
	uParam0->f_67 = { Vector(fLocal_148, 0f, 0f) + Vector(uParam0->f_65, 0f, uParam0->f_66) };
	func_110(uParam0);
	func_111(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_61, uParam0->f_67, 50f, 0, 1, 1, 2, 0, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_170) > 100)
	{
		if (iLocal_44 == 0)
		{
			fVar11 = ENTITY::GET_ENTITY_HEADING(Global_33);
			vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar11, 0f, 0.25f, 0f) };
			func_31();
			if ((!ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, vVar12.x, vVar12.y, vVar12.z, 3167) || !ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, uParam0->f_61, 3167)) || bLocal_169 == 0)
			{
				if (func_43() == 0 && PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 190, "CAMERA_HANDHELD_MODE: HANDHELD_POSITION_CHECK_THROTTLE - new HAS_ENTITY_CLEAR_LOS_TO_COORD check failed during use but on train in MP.");
				}
				else if (PED::IS_PED_IN_ANY_BOAT(Global_33))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 190, "CAMERA_HANDHELD_MODE: HANDHELD_POSITION_CHECK_THROTTLE - new HAS_ENTITY_CLEAR_LOS_TO_COORD check failed during use but currently in boat.");
				}
				else
				{
					Global_1959060 = 1;
					iLocal_44 = 1;
					DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_HANDHELD_MODE: UHCM April 2019: Setting g_bForceCameraAway to true, new HAS_ENTITY_CLEAR_LOS_TO_COORD check failed during use.");
				}
			}
		}
		iLocal_170 = MISC::GET_GAME_TIMER();
	}
}

bool func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_67(iParam0);
	iVar1 = Global_1952230[iVar0 /*23*/].f_4;
	return (func_35(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0->f_92 && iParam1) != 0;
}

void func_47(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 || iParam1);
}

void func_49()
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_: LAUNCH_FRONTEND_GALLERY() calling Launch_UIApp_WithEntry");
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, char* sParam9, char* sParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(2216, 145, "REGISTER_USE_CONTEXT_ENTITY - (", sParam0, ") with iHoldTime = ", sParam9, " and iAutoFillTime = ", sParam10);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_ENTITY - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_ENTITY - Cannot register a context with an invalid control!");
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_ENTITY - Cannot register a context with a non-existent entity!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_112(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1952230[iVar0 /*23*/].f_11 && iParam1 == Global_1952230[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1952230[iVar0 /*23*/])
					{
						DEBUG::_0xA308F935BDECCEC0(8, 145, "REGISTER_USE_CONTEXT_ENTITY - Attempting to register a context on an entity that already exists with the given priority. Returning old context.");
						return iVar0;
					}
				}
				Jump @211; //curOff = 198
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_113(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, sParam9, sParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_ENTITY - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
				UNK_0x355E72323AEE83CC(145, 9);
				return iVar1;
			}
			DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_ENTITY - Couldn't find an empty slot for your use context! Get Evan Lawson!");
			return 0;
		}
	}
}

var func_51(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_79(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_52()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return false;
}

int func_53(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !func_46(uParam0, 32))
	{
		DEBUG::_0xF0783374333FD8CE(8, 190, "CAMERA_ITEM_USE: Taking a pic!");
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CLICK", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
		func_47(1);
		func_48(uParam0, 32);
	}
	return 1;
}

void func_54(var uParam0)
{
	vLocal_156 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	if (!PED::_IS_PED_LASSOED(Global_33))
	{
		if (func_43() == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_156, vLocal_153, true) > 20f)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "MP REVERSE_ANGLE_SAFETY_VALVE: Setting g_bForceCameraAway to true, player moved more than 20 metres from last good position.");
				Global_1959060 = 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_156, vLocal_153, true) > 3f)
			{
				DEBUG::_0xF0783374333FD8CE(8, 190, "MP REVERSE_ANGLE_SAFETY_VALVE: Setting g_bForceCameraAway to true, player moved more than 3 metres from last good position.");
				Global_1959060 = 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_156, vLocal_153, true) > 3f)
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "SP REVERSE_ANGLE_SAFETY_VALVE: Setting player health to zero. Likely hit by vehicle as current location is very different to last known good coords.");
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_33, vLocal_153, fLocal_164, true, false, true);
			ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "REVERSE_ANGLE_SAFETY_VALVE: Not running. Player ped is lassoed.");
	}
}

int func_55(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 0;
	}
	if (func_114(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_115() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_56()
{
	if (PED::_0x3BDFCF25B58B0415(Global_33) == 0 && PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		return true;
	}
	return false;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "REVERSE_ANGLE_INITIALISATION: Hiding ped weapon to obscure camera from hand.");
	if (func_22(uParam0))
	{
		func_33(8);
		func_23(uParam0);
	}
	func_116(uParam0);
	func_117();
	func_118();
	uParam0->f_72 = 0;
	iLocal_200 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 190, "REVERSE_ANGLE_INITIALISATION: Completed. Setting bPerformPostTripodPlacementCheckThisUse to TRUE");
	bLocal_162 = true;
	bLocal_163 = false;
	HUD::_HIDE_HUD_COMPONENT(959420967);
}

void func_59(var uParam0)
{
	func_119(uParam0);
	if (uParam0->f_77 > 16)
	{
		if ((fLocal_165 - 0.07f) > -10f)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Right stick PAN value was ", uParam0->f_77);
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan right accepted, modifying rotation and setting new point at limiter to ", fLocal_165);
			if (uParam0->f_77 > 100)
			{
				vLocal_166.f_2 = (vLocal_166.z - 0.6f);
				fLocal_165 = (fLocal_165 - (0.07f * 3f));
			}
			else
			{
				vLocal_166.f_2 = (vLocal_166.z - 0.2f);
				fLocal_165 = (fLocal_165 - 0.07f);
			}
		}
	}
	if (uParam0->f_77 < -16)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Pan left check");
		if ((fLocal_165 + 0.07f) < 10f)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Right stick PAN value was ", uParam0->f_77);
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan left accepted, modifying rotation and setting new point at limiter to ", fLocal_165);
			if (uParam0->f_77 < -100)
			{
				vLocal_166.f_2 = (vLocal_166.z + 0.6f);
				fLocal_165 = (fLocal_165 + (0.07f * 3f));
			}
			else
			{
				vLocal_166.f_2 = (vLocal_166.z + 0.2f);
				fLocal_165 = (fLocal_165 + 0.07f);
			}
		}
	}
	if (uParam0->f_78 > 16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "URAM - INVERTED look down accepted.");
		}
		if ((fLocal_204 - 0.07f) > -10f)
		{
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan down accepted, new point at height offset is ", fLocal_204);
			if (uParam0->f_78 > 100)
			{
				vLocal_166.x = (vLocal_166.x - 0.6f);
				fLocal_204 = (fLocal_204 - (0.07f * 3f));
			}
			else
			{
				vLocal_166.x = (vLocal_166.x - 0.2f);
				fLocal_204 = (fLocal_204 - 0.07f);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "URAM - INVERTED look up accepted.");
		}
		if ((fLocal_204 + 0.07f) < 10f)
		{
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM - Pan up accepted, new point at height offset is ", fLocal_204);
			if (uParam0->f_78 < -100)
			{
				vLocal_166.x = (vLocal_166.x + 0.6f);
				fLocal_204 = (fLocal_204 + (0.07f * 3f));
			}
			else
			{
				vLocal_166.x = (vLocal_166.x + 0.2f);
				fLocal_204 = (fLocal_204 + 0.07f);
			}
		}
	}
	if (bLocal_162)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_33, vLocal_159, 3167))
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "bPerformPostTripodPlacementCheckThisUse - OKAY!");
			bLocal_163 = false;
		}
		else
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "bPerformPostTripodPlacementCheckThisUse - FAILED! Setting abort flag.");
			bLocal_163 = true;
		}
		bLocal_162 = false;
	}
	if ((func_35(uParam0->f_1[7], 1) || func_38(Global_33, 0)) || bLocal_163)
	{
		if (func_38(Global_33, 0))
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_REVERSE_ANGLE_MANIPULATION - received in combat safe signal to begin removing tripod.");
			if (func_120(Global_33, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_33, true, false);
				DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_REVERSE_ANGLE_MANIPULATION - player is performing SCRIPT_TASK_PERFORM_SEQUENCE, calling CLEAR_PED_TASKS");
			}
		}
		else if (func_121(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 190, "UPDATE_REVERSE_ANGLE_MANIPULATION - received context signal to begin removing tripod.");
		}
		GRAPHICS::_0x9F6D859C80708B26(0, 0);
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_33, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Remove_Tripod", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_175 = 0;
		func_32(uParam0);
		func_13(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, "portrait_normal", sLocal_15);
		if (!func_39(&uLocal_171))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 190, "Starting reverse angle removal setup timer.");
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_40(&uLocal_171, 1);
		}
	}
	if (func_122(uParam0->f_1[9], 0, 1))
	{
		if (iLocal_191 == 0)
		{
			uParam0->f_71++;
			if (uParam0->f_71 == 8)
			{
				uParam0->f_71 = 0;
			}
			DEBUG::_0xF0783374333FD8CE(168, 190, "Requesting Facial Mood:- ", sLocal_179[uParam0->f_71], " from array index ", uParam0->f_71);
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, sLocal_179[uParam0->f_71], sLocal_15);
		}
	}
	if (func_122(uParam0->f_1[9], 1, 1))
	{
		if (iLocal_191 == 0)
		{
			uParam0->f_71 = (uParam0->f_71 - 1);
			if (uParam0->f_71 < 0)
			{
				uParam0->f_71 = 7;
			}
			DEBUG::_0xF0783374333FD8CE(168, 190, "Requesting Facial Mood:- ", sLocal_179[uParam0->f_71], " from array index ", uParam0->f_71);
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, sLocal_179[uParam0->f_71], sLocal_15);
		}
	}
	uParam0->f_26 = { func_123(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_33) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_33, &(uParam0->f_26));
	if (bLocal_202 == 0)
	{
		if (func_122(uParam0->f_1[8], 1, 1))
		{
			bLocal_202 = true;
			uParam0->f_72++;
			if (uParam0->f_72 == 7)
			{
				uParam0->f_72 = 0;
			}
			DEBUG::_0xF0783374333FD8CE(168, 190, "Requesting Pose:- ", func_124(iLocal_192[uParam0->f_72], 0), " from array index ", uParam0->f_72);
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_125();
		}
	}
	if (bLocal_202 == 0)
	{
		if (func_122(uParam0->f_1[8], 0, 1))
		{
			bLocal_202 = true;
			uParam0->f_72 = (uParam0->f_72 - 1);
			if (uParam0->f_72 < 0)
			{
				uParam0->f_72 = 6;
			}
			DEBUG::_0xF0783374333FD8CE(168, 190, "Requesting Pose:- ", func_124(iLocal_192[uParam0->f_72], 0), " from array index ", uParam0->f_72);
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_125();
		}
	}
	if (bLocal_202)
	{
		switch (iLocal_200)
		{
			case 0:
				DEBUG::_0x4DC69742196F818A(8, 190, "Pose Idle - shouldn't see this for more than a few frames.");
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_201) > 200)
				{
					DEBUG::_0x4DC69742196F818A(8, 190, "Was in POSE_FADE_OUT, timer elapsed, going to POSE_SETUP.");
					iLocal_200 = 2;
				}
				break;
			case 2:
				func_126(uParam0);
				DEBUG::_0x4DC69742196F818A(8, 190, "Was in POSE_SET_UP, have now SELECTED POSE, going to POSE_PROCESS.");
				iLocal_200 = 3;
				iLocal_201 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_201) > 500)
				{
					DEBUG::_0x4DC69742196F818A(8, 190, "Was in POSE_PROCESS, timer elapsed, going to POSE_FADE_IN.");
					iLocal_200 = 4;
					iLocal_201 = MISC::GET_GAME_TIMER();
					func_30();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_201) > 700)
				{
					DEBUG::_0x4DC69742196F818A(8, 190, "Was in POSE_FADE_IN, timer elapsed, going to POSE_IDLE");
					iLocal_200 = 0;
					bLocal_202 = false;
				}
				break;
			default:
				DEBUG::_0x4DC69742196F818A(8, 190, "POSE STAGE - WARNING! Unsupported pose stage encountered!");
				break;
		}
	}
	func_111(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_61, vLocal_166, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_60()
{
	return iLocal_191;
}

float func_61(var uParam0)
{
	if (!func_39(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_114(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_127() - uParam0->f_1);
}

void func_62()
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "CLEAR_ACTION_TRIGGERED - Clearing!");
	func_57(&uLocal_188);
	iLocal_191 = 0;
}

void func_63()
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1280543.f_1))
	{
		ITEMSET::_CLEAR_ITEMSET(Global_1280543.f_1);
		ITEMSET::DESTROY_ITEMSET(Global_1280543.f_1);
	}
}

void func_64(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_65()
{
	StringCopy(&cLocal_31, "", 32);
	MISC::_INT_TO_STRING(iLocal_22, "%i", &cLocal_31);
	StringConCat(&cLocal_31, " / ", 32);
	StringCopy(&cLocal_35, "", 32);
	MISC::_INT_TO_STRING(iLocal_23, "%i", &cLocal_35);
	StringConCat(&cLocal_31, &cLocal_35, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_30, &cLocal_31);
}

bool func_66(int iParam0)
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

int func_67(int iParam0)
{
	return iParam0;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 - (Global_1952230[iParam0 /*23*/].f_1 && iParam1));
}

void func_69(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_112(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_71(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

bool func_72()
{
	return (Global_1915867.f_20637 || Global_1915867.f_22504.f_1);
}

int func_73(int iParam0)
{
	if (func_72())
	{
		if (Global_1915867.f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;

	if (!func_128(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_129(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_99(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_99(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_99(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_99(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_99(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_99(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_99(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_99(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_76(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_130(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_131(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Found weapon item in player's satchel.");
				return true;
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find weapon item in player's satchel.");
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_132(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_133(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_134(bParam0, 0, 0, 0) >= iParam1;
}

int func_77(var uParam0)
{
	return uParam0->f_91;
}

bool func_78()
{
	return Global_1940463.f_2;
}

var func_79(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_80(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "IS_PED_ON_MOUNT_SAFE: ped is dead");
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		func_135(4);
	}
	func_135(2);
	MISC::SET_BIT(&(Global_1959011.f_1), 0);
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CI_STATE_PRE_INIT";
		case 1:
			return "CI_STATE_INIT";
		case 2:
			return "CI_STATE_STREAMING";
		case 3:
			return "CI_STATE_READY";
		case 4:
			return "CI_STATE_PAUSE_BETWEEN_USES";
		case 5:
			return "CI_STATE_NEW_VIEWFINDER_INIT";
		case 6:
			return "CI_STATE_NEW_VIEWFINDER";
		case 7:
			return "CI_STATE_LEGACY_TPOD_FOR_RMVL";
		case 8:
			return "CI_STATE_REVANG_INIT";
		case 9:
			return "CI_STATE_REVANG";
		case 11:
			return "CI_STATE_USING_LEGACY_AIM";
		case 12:
			return "CI_STATE_PUT_AWAY";
		case 13:
			return "CI_STATE_CLEANUP";
		case 10:
			return "CI_STATE_REMOVING_TRIPOD";
	}
	return "CI_STATE_INVALID";
}

void func_83(var uParam0)
{
	*uParam0 = 1;
}

void func_84(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(680, 190, "@@@ SET_CAM_ITEM_PIC_STATE: moving from ", func_136(func_77(uParam0)), " to ", func_136(iParam1));
	uParam0->f_91 = iParam1;
}

void func_85(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	DEBUG::_0xA308F935BDECCEC0(8, 190, "[CAMERA__SET__PHOTO_TAKEN_STAT] photo stat was set.");
	bVar3 = false;
	if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
	{
		iVar2 = 1;
	}
	else
	{
		iVar2 = 0;
	}
	GRAPHICS::_0x2705D18C11B61046(iVar2);
	if (ITEMSET::IS_ITEMSET_VALID(Global_1280543.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) > 0)
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) - 1))
		{
			iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, Global_1280543.f_1));
			bVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (bVar1 != uParam0->f_25 || DECORATOR::DECOR_GET_BOOL(iVar0, func_137()))
			{
				bVar3 = true;
				uParam0->f_25 = bVar1;
			}
			iVar4++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(10408, 190, "[CAMERA__SET__PHOTO_TAKEN_STAT] model for stat is: ", func_138(bVar1, 0), " INT: ", bVar1, " bSendPhotoStat: ", MISC::_0xF216F74101968DB0(bVar3));
	if (bVar3)
	{
		STATS::STAT_PHOTOGRAPH_TAKEN(Global_1280543.f_1);
	}
	TELEMETRY::_TELEMETRY_PHOTO_CAM(-1124919603, 0, 0f, iVar2, uParam0->f_93, BUILTIN::FLOOR(uParam0->f_15.f_3), bVar1, func_140(func_139(0)), 0);
}

int func_86(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE77::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_87()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_40))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_40);
	}
}

int func_88()
{
	return Global_1893599.f_2;
}

bool func_89(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_90(int iParam0)
{
	char[] cVar0[8];

	if (!func_89(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 11, "Invalid region passed to GET_REGION_PROPER_NAME.");
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887351[iParam0 /*36*/].f_23;
}

int func_91()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_93()
{
	return Global_1896634.f_41;
}

bool func_94(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 87, "GET_DISTRICT_LABEL - Missing distract label: ", func_141(iParam0, 0));
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(40, 87, "GET_STATE_LABEL_FROM_DISTRICT - A state has not been specified for this district: ", func_141(iParam0, 0));
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_142(iParam0, &iVar0, &iVar1);
	if (!func_143(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_144(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_145(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 - (uParam0->f_92 && iParam1));
}

bool func_99(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	ENTITY::_0x59B57C4B06531E1E(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), func_146(), iVar0, 1);
	if (ITEMSET::GET_ITEMSET_SIZE(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			bVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_147(Global_33, iVar1, 1, 1) > (func_146() + 10f)) || func_148(iVar3, 1))
			{
				func_149(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1))
		{
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
			bVar4 = false;
			if (!func_150(iVar3, 0) && !func_148(iVar3, 1))
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
				bVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
				DEBUG::_0x4DC69742196F818A(40, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - eModel: ", func_138(bVar2, 0));
				DEBUG::_0x4DC69742196F818A(40, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - entity name: ", UNK_0xE02C950E4C991632(iVar1));
				if (PED::IS_PED_A_PLAYER(iVar3) && !PED::_0x0E2F43516F998269(iVar3))
				{
					bVar4 = true;
				}
				if (DECORATOR::DECOR_GET_BOOL(iVar3, func_137()))
				{
					DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - bounty target found");
					bVar4 = true;
				}
				if (func_151(iVar3))
				{
					if (func_152(iVar3))
					{
						bVar4 = true;
					}
					if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar3)
					{
						DEBUG::_0x4DC69742196F818A(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] - GET_MOUNT_OWNED_BY_PLAYER: TRUE");
						bVar4 = true;
					}
					if (bVar2 == joaat("A_C_BAT_01"))
					{
						bVar4 = true;
					}
					if (func_153(bVar2))
					{
						bVar4 = true;
					}
				}
				DEBUG::_0x4DC69742196F818A(648, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_IN_AREA] iPed: ", iVar5, " model: ", func_138(bVar2, 0));
			}
			if (bVar4)
			{
				func_154(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1280543.f_1) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_1280543.f_1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar3 = func_155(ENTITY::GET_ENTITY_MODEL(iVar1));
					if (PED::IS_PED_A_PLAYER(iVar2) || DECORATOR::DECOR_GET_BOOL(iVar2, func_137()))
					{
						if (func_156(iVar1))
						{
							if (func_157(iVar2))
							{
								if (func_99(Global_1280543, 256) && iVar2 == Global_33)
								{
									if (!func_99(Global_1280543, 64))
									{
										func_158(iVar2);
									}
								}
							}
							else
							{
								func_158(iVar2);
							}
						}
						else
						{
							func_158(iVar2);
						}
					}
					else if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar2)
					{
						if (!func_156(iVar1) || func_80(Global_33))
						{
							func_158(iVar2);
						}
					}
					else if (!func_159(iVar2, iVar3))
					{
						func_158(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_102(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
	{
		iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, *uParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iVar2 = func_155(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (PED::IS_PED_A_PLAYER(iVar1) || DECORATOR::DECOR_GET_BOOL(iVar1, func_137()))
				{
					if (func_156(iVar0))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_157(iVar1))
						{
							if (func_99(Global_1280543, 256) && iVar1 == Global_33)
							{
								if (func_99(Global_1280543, 64))
								{
									func_154(iVar0, Global_1280543.f_1);
									DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped to global list (c): ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_138(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
								}
							}
							else
							{
								func_154(iVar0, Global_1280543.f_1);
								DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped to global list (d): ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_138(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
							}
						}
					}
				}
				else if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar1)
				{
					if (func_156(iVar0) && !func_80(Global_33))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_157(iVar1))
						{
							func_154(iVar0, Global_1280543.f_1);
							DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped horse to global list (a): ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_138(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
						}
					}
				}
				else if (func_160(iVar1, iVar2))
				{
					func_154(iVar0, Global_1280543.f_1);
					DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__UPDATE__ANIMALS_ON_SCREEN] adding ped to global list: (aa)", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_138(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
				}
			}
		}
		iVar3++;
	}
}

void func_103(var uParam0, int iParam1)
{
	func_161(uParam0, iParam1);
}

void func_104(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_66(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_67(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_162(iVar0);
	*uParam0 = 0;
}

void func_105(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "ACTIVATING: ", func_163(iParam0, 0));
		if (!func_66(Local_51.f_1[iParam0]))
		{
			if (iParam0 == 9)
			{
				Local_51.f_1[iParam0] = func_165(func_164(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 8)
			{
				Local_51.f_1[iParam0] = func_165(func_164(iParam0), joaat("INPUT_CAMERA_POSE_PREV"), joaat("INPUT_CAMERA_POSE_NEXT"), 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_51.f_93 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_51.f_1[iParam0] = func_167(sVar0, func_166(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_51.f_1[iParam0] = func_167(func_164(iParam0), func_166(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				DEBUG::_0xF0783374333FD8CE(40, 190, "Suppressing restart flag added to: ", func_163(iParam0, 0));
				func_168(Local_51.f_1[iParam0], 11, 1, 1);
			}
			func_169(Local_51.f_1[iParam0], -857683846, 0, 1);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[Local_51.f_1[iParam0] /*23*/].f_3, true);
		}
	}
	else if (func_66(Local_51.f_1[iParam0]))
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "DEACTIVATING: ", func_163(iParam0, 0));
		func_104(&(Local_51.f_1[iParam0]), 1, 1);
	}
}

char* func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DORMANT";
		case 1:
			return "SHOULD_REQUEST";
		case 2:
			return "LOADING";
		case 3:
			return "LOADED";
		case 4:
			return "DISABLED_THIS_BUILD";
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

bool func_107(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_99(Global_1277758[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_108(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_109(var uParam0)
{
	func_170(uParam0, 0f);
}

void func_110(var uParam0)
{
	fLocal_150 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_150 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 60f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			DEBUG::_0x4DC69742196F818A(24, 190, "UHCM - Cam focal length on Zoom In is ", uParam0->f_15.f_3);
			if (!bLocal_27)
			{
				DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Starting Zoom in SFX");
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_27 = true;
			}
		}
		else if (bLocal_27)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Stopping Zoom in SFX - At limits.");
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_27 = false;
		}
	}
	else if (bLocal_27)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Stopping Zoom in SFX - no longer pressed.");
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_27 = false;
	}
	if (fLocal_150 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 25f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			DEBUG::_0x4DC69742196F818A(24, 190, "UHCM - Cam focal length on Zoom Out is ", uParam0->f_15.f_3);
			if (!bLocal_28)
			{
				DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Starting Zoom Out SFX");
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Stopping Zoom Out SFX - At limits.");
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Stopping Zoom Out SFX - no longer pressed.");
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
}

void func_111(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_46 == 0)
	{
		if (func_45(uParam0->f_1[3]))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_33, "CAMERA_SOUNDSET", -2))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 190, "Play_Sound_From_Entity. Triggering DOF sound.", uParam0->f_93);
				AUDIO::_PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_47 = MISC::GET_GAME_TIMER();
			iLocal_46 = 1;
			iLocal_48 = 0;
			DEBUG::_0x4DC69742196F818A(8, 190, "DOF just pressed. Triggering DOF fade routine ", uParam0->f_93);
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_47) > 300 && iLocal_48 == 0)
	{
		if (uParam0->f_93 == 0)
		{
			uParam0->f_93 = 1;
			iVar0 = func_67(Local_51.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1952230[iVar0 /*23*/].f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_93 = 0;
			iVar1 = func_67(Local_51.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1952230[iVar1 /*23*/].f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_93);
		iLocal_48 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_47) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_47) > 850)
		{
			iLocal_46 = 0;
			iLocal_48 = 0;
		}
	}
}

bool func_112(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_113(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	Global_1952230[iParam0 /*23*/].f_18 = iParam16;
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1952230[iParam0 /*23*/].f_3 = iVar0;
	func_69(iParam0, 1);
	func_70(iParam0, 1);
	func_71(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_171(iParam14, 0));
}

bool func_114(var uParam0)
{
	return func_108(*uParam0, 2);
}

int func_115()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_116(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_14, false);
		DEBUG::_0xF0783374333FD8CE(8, 190, "REVERSE_ANGLE_STATIC_CAM_CREATION - destroying any previous script cam.");
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	fLocal_203 = ENTITY::GET_ENTITY_HEADING(Global_33);
	uParam0->f_52 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	uParam0->f_55 = { ENTITY::GET_ENTITY_ROTATION(Global_33, 2) };
	uParam0->f_67 = { uParam0->f_55, uParam0->f_55.f_1, (uParam0->f_55.f_2 - 180f) };
	uParam0->f_61 = { vLocal_159 };
	uParam0->f_93 = 0;
	fLocal_165 = 0f;
	fLocal_204 = 0.5f;
	vLocal_166 = { uParam0->f_67 };
	vLocal_166.x = (vLocal_166.x + 1f);
	uParam0->f_26.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_26.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		fVar0 = 50f;
		DEBUG::_0x4DC69742196F818A(24, 190, "REVERSE_ANGLE_STATIC_CAM_CREATION - creating tripod cam with FOV ", fVar0);
		uParam0->f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_61, uParam0->f_67, fVar0, true, 2);
	}
	uParam0->f_15 = 25f;
	uParam0->f_15.f_1 = 2f;
	uParam0->f_15.f_2 = 128f;
	uParam0->f_15.f_3 = 30f;
	uParam0->f_15.f_4 = 30f;
	uParam0->f_15.f_5 = 90f;
	uParam0->f_15.f_6 = 1;
	uParam0->f_15.f_7 = 0;
	uParam0->f_15.f_8 = 1;
	uParam0->f_15.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
	CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_93);
	CAM::_0x42ED56B02E05D109(uParam0->f_14, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_14, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_117()
{
	sLocal_179[0] = "portrait_normal";
	sLocal_179[1] = "portrait_happy";
	sLocal_179[2] = "portrait_pensive";
	sLocal_179[3] = "portrait_pensive_2";
	sLocal_179[4] = "portrait_relaxed";
	sLocal_179[5] = "portrait_angry";
	sLocal_179[6] = "portrait_angry_2";
	sLocal_179[7] = "portrait_annoyed";
}

void func_118()
{
	iLocal_192[0] = 0;
	iLocal_192[1] = 1;
	iLocal_192[2] = 2;
	iLocal_192[3] = 3;
	iLocal_192[4] = 4;
	iLocal_192[5] = 5;
	iLocal_192[6] = 6;
}

void func_119(var uParam0)
{
	fLocal_150 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_150 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 90f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			DEBUG::_0x4DC69742196F818A(24, 190, "URAM- Cam focal length on Zoom In is ", uParam0->f_15.f_3);
			if (!bLocal_27)
			{
				DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Starting Zoom in SFX");
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_27 = true;
			}
		}
		else if (bLocal_27)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "URAM - Stopping Zoom in SFX - At limits.");
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_27 = false;
		}
	}
	else if (bLocal_27)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Stopping Zoom in SFX - no longer pressed.");
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_27 = false;
	}
	if (fLocal_150 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 30f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			DEBUG::_0x4DC69742196F818A(24, 190, "UHCM - Cam focal length on Zoom Out is ", uParam0->f_15.f_3);
			if (!bLocal_28)
			{
				DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Starting Zoom Out SFX");
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Stopping Zoom Out SFX - At limits.");
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		DEBUG::_0x4DC69742196F818A(8, 190, "UHCM - Stopping Zoom Out SFX - no longer pressed.");
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
}

bool func_120(int iParam0, int iParam1)
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

int func_121(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	DEBUG::_0x1B08D1EB9D8C4931(559240, 111, "IS_PLAYER_WANTED(", iParam0, ", ", bParam1, ", ", bParam2, ", ", bParam3, ")");
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_172(bParam1, bParam2, bParam3);
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

bool func_122(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3, iParam1);
}

Vector3 func_123(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

char* func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "POSETESTA";
		case 1:
			return "POSETESTB";
		case 2:
			return "POSETESTC";
		case 3:
			return "POSETESTD";
		case 4:
			return "POSETESTE";
		case 5:
			return "POSETESTF";
		case 6:
			return "POSETESTG";
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

void func_125()
{
	bLocal_202 = true;
	iLocal_201 = MISC::GET_GAME_TIMER();
	iLocal_200 = 1;
	func_15();
}

void func_126(var uParam0)
{
	func_173(uParam0);
	switch (iLocal_192[uParam0->f_72])
	{
		case 0:
			DEBUG::_0xA308F935BDECCEC0(8, 190, "CUE_THIS_SCENARIO_POSE: Ped not in scenario, but no longer setting ped still wrapper. See 5410027");
			break;
		case 1:
			func_174(joaat("WORLD_HUMAN_STARE_STOIC"), "WORLD_HUMAN_STARE_STOIC_MALE_A", joaat("WORLD_HUMAN_STARE_STOIC_MALE_A"));
			break;
		case 2:
			func_174(joaat("WORLD_HUMAN_STERNGUY_IDLES"), "WORLD_HUMAN_STERNGUY", joaat("WORLD_HUMAN_STERNGUY"));
			break;
		case 3:
			break;
		case 4:
			func_174(joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT"), "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"));
			break;
		case 5:
			break;
		case 6:
			func_174(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A", joaat("WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A"));
			break;
	}
}

float func_127()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_128(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_129(int iParam0)
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
	DEBUG::_0xD9911C7B5F8CD69C(168, 139, "GET_SHOP_TYPE_FROM_SHOP - ", func_175(iParam0, 0), " undefined");
	return -1;
}

bool func_130(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_131(bool bParam0)
{
	vector3 vVar0;

	if (!func_130(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_132(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_130(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_176(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_177("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_178(&Var4, iVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", iVar3);
			}
			else if (!func_179(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_180(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_180(Var4.f_4, 0), " that uses the ammo - ", func_180(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_181(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_180(Var4.f_4, 0), " that uses the ammo - ", func_180(bParam0, 0));
					return true;
				}
			}
			iVar3++;
		}
		func_181(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_180(bParam0, 0));
	return false;
}

bool func_133(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_130(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_182(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_183(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_184(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_180(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_185(bParam0);
	iVar2 = func_184(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_180(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_134(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_130(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_180(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_131(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_176(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_186(bParam0, 0);
	}
	if (func_187(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_188(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_189(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_180(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_188(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_180(bParam0, 0));
	return iVar0;
}

void func_135(int iParam0)
{
	Global_1903188.f_302 = (Global_1903188.f_302 || iParam0);
}

char* func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CI_PIC_STATE_WAIT";
		case 1:
			return "CI_PIC_STATE_ON_ALERT_SCREEN";
		case 5:
			return "CI_PIC_STATE_TAKING";
		case 6:
			return "CI_PIC_STATE_SAVING";
		case 7:
			return "CI_PIC_STATE_LOADING";
		case 8:
			return "CI_PIC_STATE_VIEWING";
		case 2:
			return "CI_PIC_STATE_REMOVE_DECOR";
		case 3:
			return "CI_PIC_STATE_BEGIN_SHUTTER_PAUSE";
		case 4:
			return "CI_PIC_STATE_END_SHUTTER_PAUSE";
	}
	return "CI_PIC_STATE_INVALID";
}

char* func_137()
{
	return "proc_bounty_target";
}

var func_138(bool bParam0, int iParam1)
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

struct<2> func_139(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_140(struct<2> Param0)
{
	return func_190(Param0);
}

char* func_141(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "DISTRICT_INVALID";
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		case 17:
			return "NUM_DISTRICTS";
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

void func_142(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_143(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_191(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_145(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_192(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_193(iParam0, 0));
		return false;
	}
	if (func_194(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_193(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_195(iParam0, 1)) || func_196(32768))
	{
		if (!func_195(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_197())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_144(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_145(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

float func_146()
{
	return 130f;
}

float func_147(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_148(int iParam0, bool bParam1)
{
	if (DECORATOR::DECOR_GET_BOOL(iParam0, func_137()))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] ped is a bounty target -- return false");
		return false;
	}
	if (bParam1 && PED::_0x0E2F43516F998269(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] ped is a player");
		return true;
	}
	if (PED::_0xB655DB7582AEC805(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] entity is incapacitated");
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] PCF_Knockedout");
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 580, true))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__ANIMALS_SEDATED_OR_PLAYER_CONTROLLED] PCF_IsTranquilized");
		return true;
	}
	return false;
}

void func_149(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "REMOVE_ENTITY_FROM_ITEMSET_SAFE: itemset is invalid, exiting");
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iParam0, iParam1);
		}
	}
}

bool func_150(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

bool func_151(int iParam0)
{
	int iVar0;

	iVar0 = func_198(iParam0);
	if (ENTITY::_0x9A100F1CF4546629(iVar0) && !PED::_0x0E2F43516F998269(iParam0))
	{
		return true;
	}
	return false;
}

bool func_152(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (((!PED::_0x118D476A6F1A13F1(iParam0) && !func_199(iParam0, 0)) && !func_200(iParam0)) && iVar0 != joaat("REL_DOMESTICATED_PET_ANIMAL"))
	{
		return true;
	}
	return false;
}

bool func_153(bool bParam0)
{
	if (func_99(Global_1280543, 4096))
	{
		switch (bParam0)
		{
			case joaat("A_C_CHICKEN_01"):
			case joaat("A_C_ELK_01"):
			case joaat("A_C_TURKEYWILD_01"):
			case joaat("A_C_BUCK_01"):
			case joaat("A_C_ALLIGATOR_01"):
			case joaat("A_C_ARMADILLO_01"):
			case joaat("A_C_BIGHORNRAM_01"):
			case joaat("A_C_POSSUM_01"):
			case joaat("A_C_SKUNK_01"):
			case joaat("A_C_BADGER_01"):
			case joaat("A_C_WOLF"):
			case joaat("A_C_BEAR_01"):
			case joaat("A_C_MOOSE_01"):
			case joaat("A_C_GOAT_01"):
			case joaat("A_C_TURTLESNAPPING_01"):
			case joaat("A_C_COW"):
			case joaat("A_C_SHEEP_01"):
			case joaat("A_C_COUGAR_01"):
			case joaat("A_C_FOX_01"):
			case joaat("A_C_GILAMONSTER_01"):
			case joaat("A_C_COYOTE_01"):
			case joaat("A_C_OX_01"):
			case joaat("A_C_BEARBLACK_01"):
			case joaat("A_C_BEAVER_01"):
			case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			case joaat("A_C_DOGAMERICANFOXHOUND_01"):
			case joaat("A_C_DEER_01"):
			case joaat("A_C_RACCOON_01"):
			case joaat("A_C_BUFFALO_01"):
			case joaat("A_C_PANTHER_01"):
			case joaat("A_C_PRONGHORN_01"):
			case joaat("A_C_BOAR_01"):
				return true;
		}
	}
	return false;
}

void func_154(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "ADD_TO_ITEMSET_SAFE: itemset is invalid, exiting");
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

int func_155(int iParam0)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		iVar0 = PED::_0xA65AA1ACE81E5A77(iParam0);
	}
	else
	{
		iVar0 = 1;
		DEBUG::_0xA308F935BDECCEC0(8, 190, "[NET_ADVANCED_CAMERA__GET__PED_SIZE_FROM_MODEL] model was not valid. Using PS_MEDIUM for pedSize");
	}
	return iVar0;
}

bool func_156(int iParam0)
{
	return (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0));
}

bool func_157(int iParam0)
{
	return (PED::_0x5102307CE88798EB(iParam0) && PED::IS_TRACKED_PED_VISIBLE(iParam0));
}

void func_158(int iParam0)
{
	int iVar0;

	iVar0 = func_198(iParam0);
	if (PED::_0x5102307CE88798EB(iParam0))
	{
		PED::_0x3088634CF8C819CF(iParam0);
	}
	func_149(iVar0, Global_1280543.f_1);
	DEBUG::_0xA308F935BDECCEC0(680, 190, "[NET_ADVANCED_CAMERA__REMOVE__PED_FROM_GLOBAL_ITEMSET] removing ped from global list: ", UNK_0xE02C950E4C991632(iVar0), " eModel: ", func_138(ENTITY::GET_ENTITY_MODEL(iVar0), 0));
}

bool func_159(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_198(iParam0);
	if (((((func_156(iVar0) && !func_148(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_205(iParam0, func_201(), func_202(), func_203(), func_204())) && func_157(iParam0)) && func_206(iParam0) >= func_207(iParam1))
	{
		return true;
	}
	return false;
}

bool func_160(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_198(iParam0);
	if (((func_156(iVar0) && !func_148(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_205(iParam0, func_201(), func_202(), func_203(), func_204()))
	{
		if (!PED::_0x5102307CE88798EB(iParam0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		}
		else if (func_157(iParam0) && func_206(iParam0) >= func_207(iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_162(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_208(iParam0))
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

char* func_163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "CI_CONTEXT_INVALID";
		case 0:
			return "CI_CONTEXT_HANDHELD_USE";
		case 1:
			return "CI_CONTEXT_REVANG_SELFP";
		case 2:
			return "CI_CONTEXT_PUT_AWAY";
		case 3:
			return "CI_CONTEXT_DOF";
		case 4:
			return "CI_CONTEXT_ZOOM";
		case 5:
			return "CI_CONTEXT_GALLERY";
		case 6:
			return "CI_CONTEXT_TAKE_PHOTO";
		case 7:
			return "CI_CONTEXT_BACK";
		case 8:
			return "CI_CONTEXT_POSES";
		case 9:
			return "CI_CONTEXT_EXPRESSIONS";
		case 10:
			return "CI_CONTEXT_VIEW";
		case 11:
			return "NUM_CAM_ITEM_CONTEXTS";
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

char* func_164(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 190, "CONTROL_ACTION CI_GET_USE_CONTEXT_INPUT STRING");
	switch (iParam0)
	{
		case 2:
			return "CAM_PUT_AWAY";
		case 0:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_FOCUS_LOCK";
		case 1:
			return "CAM_SELFIE";
		case 8:
			return "CAM_POSES";
		case 9:
			return "CAM_EXPRESSIONS";
		case 7:
			return "CAM_BACK";
		case 6:
			return "CAM_TAKE_PHOTO";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(8, 162, "CI_GET_USE_CONTEXT_STRING: invalid use context passed in!");
	return "INVALID_USE_CONTEXT";
}

int func_165(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(168, 145, "REGISTER_USE_CONTEXT_FRONTEND - (", sParam0, ")");
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Cannot register a context with an invalid control!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_112(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_113(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_MULTI_BUTTON - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_CAMERA_BACK");
		case 0:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_DOF");
		case 1:
			return joaat("INPUT_CAMERA_SELFIE");
		case 4:
			return joaat("INPUT_CAMERA_ZOOM");
		case 8:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 9:
			return joaat("INPUT_CAMERA_POSE_PREV");
		case 6:
			return joaat("INPUT_CAMERA_TAKE_PHOTO");
		case 5:
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(8, 162, "CONTROL_ACTION CI_GET_USE_CONTEXT_INPUT: undefined use context input!");
	return 0;
}

int func_167(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(2216, 145, "REGISTER_USE_CONTEXT_DYNAMIC - (", sParam0, ") with iHoldTime = ", sParam6, " and iAutoFillTime = ", sParam7);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Cannot register a context with an invalid control!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_112(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_113(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, sParam6, sParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_DYNAMIC - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_168(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_66(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_PROMPT_ATTRIBUTE - Cannot set a label for an invalid context!");
		return;
	}
	iVar0 = func_67(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1952230[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_169(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_66(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_GROUP - Cannot set a group for an invalid context!");
		return;
	}
	iVar0 = func_67(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1952230[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_170(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_127() - fParam1);
	func_209(uParam0, 1);
	func_210(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_171(int iParam0, int iParam1)
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

int func_172(bool bParam0, bool bParam1, bool bParam2)
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

void func_173(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
	if (func_56())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 190, "SETUP_COMMON_SCENARIO_POSE_BEHAVIOUR - Safe to clear pose task immediately.");
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
	}
	ENTITY::SET_ENTITY_HEADING(Global_33, fLocal_203);
}

void func_174(int iParam0, char* sParam1, int iParam2)
{
	if (func_43() == 0)
	{
		if (iParam0 == 0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 190, "CUE_THIS_SCENARIO_POSE MP: Exiting as passedScenarioType was 0");
			return;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 190, "CUE_THIS_SCENARIO_POSE MP: Exiting as passedConditionalAnim string was null.");
			return;
		}
		if (iParam2 == 0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 190, "CUE_THIS_SCENARIO_POSE MP: Exiting as passedConditionalAnimHash was ", iParam2);
			return;
		}
		if (!func_120(Global_33, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_18);
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, iParam0, 0, true, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_18);
			TASK::TASK_PERFORM_SEQUENCE(Global_33, iLocal_18);
			DEBUG::_0xA308F935BDECCEC0(40, 190, "CUE_THIS_SCENARIO_POSE MP: Creating this Sequenced Scenario via TASK_START_SCENARIO_IN_PLACE_HASH in MP - ", sParam1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_18);
		}
	}
	else
	{
		iLocal_205 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_153, fLocal_203, 0, 0, 1);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_205, 25, true);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_205, 23, true);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_18);
		TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_205, sParam1, -1, false, true, 0, false, 0f, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_18);
		TASK::TASK_PERFORM_SEQUENCE(Global_33, iLocal_18);
		DEBUG::_0xA308F935BDECCEC0(40, 190, "CUE_THIS_SCENARIO_POSE: Creating Sequenced Scenario Pose Anim in SP ", sParam1);
	}
}

char* func_175(int iParam0, int iParam1)
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

bool func_176(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_130(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_180(bParam0, 0));
		return false;
	}
	iVar0 = func_131(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_211(bParam0, 1399091007))
	{
		func_212(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_180(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

bool func_177(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_188(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_213(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_178(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", iParam1, " Size: ", iParam3);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", iParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool func_179(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

var func_180(bool bParam0, int iParam1)
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

int func_181(int iParam0)
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

int func_182(bool bParam0)
{
	struct<2> Var0;

	if (!func_130(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_183(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case -28107610:
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_LAYER_TYPE_FROM_NONE_LAYER] Failed none layer for hash: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

int func_184(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_214(iParam1, 0));
	return -1;
}

int func_185(bool bParam0)
{
	int iVar0;

	iVar0 = func_182(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		case 1115104855:
			return -2118203104;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_180(bParam0, 0));
	return 0;
}

char[] func_186(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char[] cVar15[8];

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_215(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_217(&Var0, func_216(0));
	}
	if (!func_218(&Var0, &iVar14, &cVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_180(bParam0, 0));
		return 0;
	}
	func_181(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", cVar15, " of item ", func_180(bParam0, 0));
	return cVar15;
}

int func_187(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_220(func_219(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_188(bool bParam0)
{
	if (func_43() == -1)
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

struct<4> func_189(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_221(bParam0, bParam1, 0) };
	return func_222(bParam0, Var0, Var0.f_4, bParam1);
}

int func_190(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_223(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_192(int iParam0)
{
	if (func_195(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_193(int iParam0, int iParam1)
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

bool func_194(int iParam0)
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
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_193(iParam0, 0), " Seconds ", iVar2);
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

bool func_195(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_196(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_197()
{
	if (!func_224())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

int func_198(int iParam0)
{
	return iParam0;
}

bool func_199(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 58))
	{
		if (bParam1)
		{
			return ENTITY::IS_ENTITY_IN_AIR(iParam0, 1);
		}
		return true;
	}
	return false;
}

bool func_200(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

float func_201()
{
	return 0.3f;
}

float func_202()
{
	return 0.7f;
}

float func_203()
{
	return 0.2f;
}

float func_204()
{
	return 0.7f;
}

bool func_205(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_225(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_206(int iParam0)
{
	return (func_226(iParam0) * 100f);
}

float func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.01f;
		case 1:
			return 0.02f;
		case 2:
			return 0.02f;
		case 3:
			return 0.03f;
		case 4:
			return 0.03f;
	}
	return 0.03f;
}

bool func_208(int iParam0)
{
	return func_112(iParam0, 2);
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_211(bool bParam0, bool bParam1)
{
	if (!func_130(bParam0, 0))
	{
		return func_227(func_219(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_228(bParam1, 0), " for item ", func_180(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

void func_212(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

var func_213(bool bParam0, int iParam1)
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

char* func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137717153:
			return "MPC_OVERLAY_LAYER_END";
		case -2118203104:
			return "MPC_OVERLAY_LAYER_FACIAL_HAIR";
		case -2056583192:
			return "MPC_OVERLAY_LAYER_FOUNDATION";
		case -1811760631:
			return "MPC_OVERLAY_LAYER_HEAD_HAIR";
		case -1180698265:
			return "MPC_OVERLAY_LAYER_COMPLEXION";
		case -1177453988:
			return "MPC_OVERLAY_LAYER_ROOT";
		case -875805376:
			return "MPC_OVERLAY_LAYER_EYESHADOW";
		case -768760704:
			return "MPC_OVERLAY_LAYER_LIPSTICK";
		case -559080197:
			return "MPC_OVERLAY_LAYER_FACE_PAINT";
		case -487028314:
			return "MPC_OVERLAY_LAYER_COMPLEXION_2";
		case -340627321:
			return "MPC_OVERLAY_LAYER_EYELINER";
		case 0:
			return "MPC_OVERLAY_LAYER_INVALID";
		case 12857284:
			return "MPC_OVERLAY_LAYER_SKIN_MOTTLING";
		case 241235545:
			return "MPC_OVERLAY_LAYER_FRECKLES";
		case 299749022:
			return "MPC_OVERLAY_LAYER_AGEING";
		case 1015239729:
			return "MPC_OVERLAY_LAYER_BLUSHER";
		case 1089431066:
			return "MPC_OVERLAY_LAYER_EYEBROWS";
		case 1285634184:
			return "MPC_OVERLAY_LAYER_GRIME";
		case 1301555144:
			return "MPC_OVERLAY_LAYER_SPOTS";
		case 1827902148:
			return "MPC_OVERLAY_LAYER_MOLES";
		case 1858448324:
			return "MPC_OVERLAY_LAYER_SCAR";
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

struct<14> func_215(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_180(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_213(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_213(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_213(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_229(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_230(iParam6, 0));
	}
	return Var0;
}

struct<4> func_216(bool bParam0)
{
	int iVar0;

	iVar0 = func_188(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_222(923904168, func_231(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_222(923904168, func_231(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_222(923904168, func_231(bParam0), -740156546, 0);
}

void func_217(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_218(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_188(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_219(bool bParam0)
{
	return bParam0;
}

bool func_220(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

struct<5> func_221(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_231(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_131(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_180(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_230(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_222(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_216(bParam1) };
			if (bParam2 && func_232(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_233(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_233(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_234(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_235(bParam1) };
			switch (func_182(bParam0))
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
			if (func_236(bParam0, -1823706425))
			{
				Var0 = { func_222(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_236(bParam0, -1483207246))
			{
				Var0 = { func_222(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_222(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_236(bParam0, -1653629781))
			{
				Var0 = { func_222(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_237(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_236(bParam0, -1653629781))
			{
				Var0 = { func_222(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_180(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_180(bParam0, 0), ": ", func_213(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_222(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_130(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_180(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_188(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

bool func_223(struct<2> Param0, var uParam2)
{
	if (!func_238(Param0))
	{
		return false;
	}
	func_239(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1072032.f_640.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_224()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_225(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			DEBUG::_0xA308F935BDECCEC0(408, 0, "IS_COORD_NEAR_CENTER_OF_SCREEN: fScreenX = ", fVar0, " and fScreenY = ", fVar1);
			return true;
		}
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "IS_COORD_NEAR_CENTER_OF_SCREEN: coord is off screen");
	}
	return false;
}

float func_226(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<2> Var7;
	struct<2> Var10;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar0 = func_198(iParam0);
	ENTITY::_0xF3FDA9A617A15145(iVar0, &vVar1, &vVar4);
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar1, &Var7, &(Var7.f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar4, &Var10, &(Var10.f_1)))
	{
		return 0f;
	}
	fVar13 = MISC::ABSF((Var10 - Var7));
	fVar14 = MISC::ABSF((Var10.f_1 - Var7.f_1));
	fVar15 = (fVar13 * fVar14);
	return fVar15;
}

int func_227(bool bParam0, bool bParam1)
{
	if (!func_220(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_228(bParam1, 0), " for bundle ", func_240(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_228(bool bParam0, int iParam1)
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

var func_229(bool bParam0, int iParam1)
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

char* func_230(int iParam0, int iParam1)
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

struct<4> func_231(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_188(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_222(joaat("CHARACTER"), func_241(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_222(joaat("CHARACTER"), func_241(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_222(joaat("CHARACTER"), func_241(), -1591664384, bParam0);
}

bool func_232(bool bParam0, bool bParam1)
{
	if (func_182(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_242();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_233(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_243(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_234(bool bParam0, var uParam1, bool bParam2)
{
	var uVar0;

	if (func_244(bParam0, &uVar0, uParam1, bParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_235(bool bParam0)
{
	int iVar0;

	iVar0 = func_188(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_222(271701509, func_231(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_222(271701509, func_231(bParam0), 12999093, 0);
}

bool func_236(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_182(bParam0);
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
			if (func_245(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_237(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_246(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_238(struct<2> Param0)
{
	if (!func_247(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_248(Param0))
	{
		return false;
	}
	return true;
}

void func_239(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_240(bool bParam0, int iParam1)
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

struct<4> func_241()
{
	struct<4> Var0;

	return Var0;
}

bool func_242()
{
	return (func_249(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_250(func_222(joaat("WARDROBE"), func_231(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_243(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_130(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_187(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_180(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_180(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_213(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_222(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_180(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_188(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_180(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_188(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_180(bParam0, 0));
	}
	return iVar0;
}

bool func_244(bool bParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_188(0);
	*iParam1 = { func_222(bParam0, func_216(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_180(bParam0, 0), " eSlot: ", func_213(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, uParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_180(bParam0, 0));
		return false;
	}
	return true;
}

bool func_245(bool bParam0, int iParam1, int iParam2)
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

bool func_246(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_188(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_180(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_213(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

bool func_247(int iParam0)
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

int func_248(int iParam0)
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

int func_249(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_251(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_188(bParam1), bParam0, bParam3);
}

int func_250(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_252(&uParam0, bParam4, bParam5, iParam6);
}

bool func_251(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_252(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_253(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_180(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_253(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_188(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_213(bParam1, 0));
		return false;
	}
	if (!func_246(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_213(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_180(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_213(bParam1, 0));
	return true;
}

