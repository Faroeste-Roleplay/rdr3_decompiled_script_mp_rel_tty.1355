void __EntryFunction__()
{
	DEBUG::_0xF0783374333FD8CE(8, 0, "init_global_block_ugc_transition - GLOBALS_BLOCK_UGC_TRANSITION allocated.");
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(13))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(13);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(13);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}
