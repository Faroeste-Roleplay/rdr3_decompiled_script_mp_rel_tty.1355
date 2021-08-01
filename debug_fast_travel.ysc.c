#region Local Var
	bool bLocal_0 = false;
#endregion

void __EntryFunction__()
{
	DEBUG::_0xF0783374333FD8CE(8, 142, "DEBUG_FAST_TRAVEL - Script launched");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	func_2();
	while (!bLocal_0)
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	DEBUG::_0xF0783374333FD8CE(8, 142, "DEBUG_FAST_TRAVEL - SCRIPT_CLEANUP - Script cleaning up - Now terminating");
	bLocal_0 = false;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
}

void func_3()
{
}

