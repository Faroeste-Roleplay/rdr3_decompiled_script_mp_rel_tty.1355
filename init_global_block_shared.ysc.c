void __EntryFunction__()
{
	Global_1903122 = -1;
	Global_1904700 = -1;
	Global_1904701 = -1;
	Global_1957182 = -1;
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(7))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(7);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(7);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

