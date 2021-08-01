void __EntryFunction__()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	DEBUG::_0x83407B92D46F25C3(8, 0, "You're trying to go to SP but you have script_mp.rpf loaded.  We're bailing back to the landing page now.");
	SCRIPTS::_0xBC2C927F5C264243(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

