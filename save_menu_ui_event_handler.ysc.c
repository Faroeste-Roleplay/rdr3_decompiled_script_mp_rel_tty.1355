#region Local Var
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	DEBUG::_0xF0783374333FD8CE(8, 155, "save_menu_ui_event_handler START");
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		DEBUG::_0xF0783374333FD8CE(8, 155, "save_menu_ui_event_handler force cleanup");
		func_1();
	}
	while (true)
	{
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &vVar0))
			{
				switch (vVar0.x)
				{
					case -493190640:
						if (vVar0.z == 1535628899)
						{
							DEBUG::_0xF0783374333FD8CE(8, 155, "Received save success event");
							Global_17 = 1;
						}
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	DEBUG::_0xF0783374333FD8CE(8, 155, "save_menu_ui_event_handler END");
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

