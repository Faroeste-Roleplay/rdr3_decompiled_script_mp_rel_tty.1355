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
	struct<12> Local_13 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 39;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 39;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = -1;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = -1082130432;
	var uLocal_118 = -1082130432;
	var uLocal_119 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	func_1(&Local_13, vScriptParam_0);
	if (func_2() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) == 7)
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "No Jewelry Chests.  Deleting Jewelry Chest blip.");
			func_5(&Local_13);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_13);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_13.f_11))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GATOR_EGGS SCRIPT was launched with no scenario point");
		func_5(&Local_13);
	}
	while (func_6(&Local_13))
	{
		if (func_7())
		{
			DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_JEWELRY_CHEST_SCRIPT_RUN: Start cleanup!");
			func_5(&Local_13);
		}
		if (func_8(&Local_13))
		{
			func_5(&Local_13);
		}
		BUILTIN::WAIT(0);
	}
	DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_JEWELRY_CHEST_SCRIPT_RUN = FALSE: Start cleanup!");
	func_5(&Local_13);
}

void func_1(var uParam0, vector3 vParam1)
{
	*uParam0 = func_9(vParam1);
	uParam0->f_1 = func_10(vParam1);
	uParam0->f_2 = func_11(vParam1);
	uParam0->f_3 = 0;
	uParam0->f_12 = vParam1.x;
	uParam0->f_11 = vParam1.y;
	uParam0->f_5 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_11, true) };
	uParam0->f_55[0] = joaat("MP005_S_RNG_MNSTN");
	uParam0->f_55[1] = joaat("MP005_S_RNG_PTRN_DMD");
	uParam0->f_55[2] = joaat("MP005_S_RNG_GLD_DMD");
	uParam0->f_55[3] = joaat("MP005_S_RNG_FRN_DMD");
	uParam0->f_55[4] = joaat("MP005_S_RNG_TRQ_MOT");
	uParam0->f_55[5] = joaat("MP005_S_RNG_TOP_WED");
	uParam0->f_55[6] = joaat("MP005_S_RNG_GLD_PRL");
	uParam0->f_55[7] = joaat("MP005_S_RNG_DMND_ONYX");
	uParam0->f_55[8] = joaat("MP005_S_RNG_EMR_GLD");
	uParam0->f_55[9] = joaat("MP005_S_RNG_TRQ_GLD");
	uParam0->f_55[10] = joaat("MP005_S_RNG_CORAL");
	uParam0->f_55[11] = joaat("MP005_S_ERRNG_EMR");
	uParam0->f_55[12] = joaat("MP005_S_ERRNG_QNS_DMD");
	uParam0->f_55[13] = joaat("MP005_S_ERRNG_FLRL_DMD");
	uParam0->f_55[14] = joaat("MP005_S_ERRNG_GLD_RDY_DNGL");
	uParam0->f_55[15] = joaat("MP005_S_ERRNG_CIT_DROP");
	uParam0->f_55[16] = joaat("MP005_S_ERRNG_CRL_DNGL");
	uParam0->f_55[17] = joaat("MP005_S_ERRNG_TRQ_STUD");
	uParam0->f_55[18] = joaat("MP005_S_ERRNG_ELK_THT");
	uParam0->f_55[19] = joaat("MP005_S_ERRNG_GRN_SLV");
	uParam0->f_55[20] = joaat("MP005_S_ERRNG_OLD_MINE");
	uParam0->f_55[21] = joaat("MP005_S_ERRNG_GLD_PRL");
	uParam0->f_55[22] = joaat("MP005_S_BRCLT_GLD");
	uParam0->f_55[23] = joaat("MP005_S_BRCLT_GLD_BNGL");
	uParam0->f_55[24] = joaat("MP005_S_BRCLT_EDW_PRL");
	uParam0->f_55[25] = joaat("MP005_S_BRCLT_SLV_BNGL");
	uParam0->f_55[26] = joaat("MP005_S_BRCLT_SLV");
	uParam0->f_55[27] = joaat("MP005_S_BRCLT_SAP_BNGL");
	uParam0->f_55[28] = joaat("MP005_S_BRCLT_SAP");
	uParam0->f_55[29] = joaat("MP005_S_BRCLT_DMD_GLD");
	uParam0->f_55[30] = joaat("MP005_S_NKLC_BLK_PRL");
	uParam0->f_55[31] = joaat("MP005_S_NKLC_PLT_TPZ");
	uParam0->f_55[32] = joaat("MP005_S_NKLC_MTHR_PRL");
	uParam0->f_55[33] = joaat("MP005_S_NKLC_GLD_LAV");
	uParam0->f_55[34] = joaat("MP005_S_NKLC_GLD_AME");
	uParam0->f_55[35] = joaat("MP005_S_NKLC_PNT_POR");
	uParam0->f_55[36] = joaat("MP005_S_NKLC_SLV_PRL");
	uParam0->f_55[37] = joaat("MP005_S_NKLC_GLD_CROSS");
	uParam0->f_55[38] = joaat("MP005_S_NKLC_ORI_PRL");
	uParam0->f_13 = func_12(uParam0);
}

int func_2()
{
	return Global_1572887.f_13;
}

struct<2> func_3(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT CLEANUP_JEWELRY_CHEST: CLEANUP_JEWELRY_CHEST!");
	func_13(&(uParam0->f_95));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_54))
		{
			func_14(uParam0->f_54, uParam0->f_54, 0);
		}
	}
	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SHOULD_JEWELRY_CHEST_SCRIPT_RUN: iScenarioScriptID = ", uParam0->f_12);
		func_5(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	bool bVar0;

	bVar0 = func_15(uParam0) < 4;
	if (func_15(uParam0) > 2 && func_15(uParam0) < 4)
	{
		func_16(&(uParam0->f_95), uParam0->f_5, bVar0, bVar0, 1, 0);
	}
	if (func_17(Global_1275959.f_8, uParam0->f_5, 1) < 2f)
	{
		func_18(&(uParam0->f_95.f_5));
	}
	switch (func_15(uParam0))
	{
		case 0:
			func_19(uParam0, 1);
			break;
		case 1:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				if (!STREAMING::_IS_IMAP_ACTIVE_2(uParam0->f_1))
				{
					STREAMING::_REQUEST_IMAP_2(uParam0->f_1);
				}
				func_19(uParam0, 2);
			}
			break;
		case 2:
			if (func_20(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_54, true, false) };
					MAP::_0x7563CBCA99253D1A(uParam0->f_54, joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					MAP::_0x1726963E6049DB53(uParam0->f_54);
					func_22(uParam0->f_54, uParam0->f_54, 0);
					MISC::_0x553D67295DDD2309(uParam0->f_54);
					func_19(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
			{
				DEBUG::_0xF0783374333FD8CE(8, 139, "[UPDATE_JEWELRY_CHEST][JEWELRY_CHEST_PLAYER_GRABBING_ITEM] Lost contact with chest entity! Attempting to find again.");
				if (func_20(uParam0) && ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					DEBUG::_0xF0783374333FD8CE(8, 139, "[UPDATE_JEWELRY_CHEST][JEWELRY_CHEST_PLAYER_GRABBING_ITEM] Found chest entity.");
					MISC::_0x553D67295DDD2309(uParam0->f_54);
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 139, "[UPDATE_JEWELRY_CHEST][JEWELRY_CHEST_PLAYER_GRABBING_ITEM] Could not find chest entity.");
					return false;
				}
			}
			if (PERSISTENCE::_0x188313616D184213(uParam0->f_8, ENTITY::GET_ENTITY_MODEL(uParam0->f_54)))
			{
				DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT JEWELRY_CHEST_PLAYER_GRABBING_ITEM: Item Looted.");
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
				{
					if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_54))
					{
						DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT JEWELRY_CHEST_PLAYER_GRABBING_ITEM: Unregister eagle eye on object.");
						func_14(uParam0->f_54, uParam0->f_54, 0);
					}
					DEBUG::_0x4DC69742196F818A(8, 215, "SCRIPT JEWELRY_CHEST_PLAYER_GRABBING_ITEM: clean up audio/vibration clues.");
					func_13(&(uParam0->f_95));
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		DEBUG::_0x4DC69742196F818A(8, 215, "GET_JEWELRY_CHEST: iRadius = ", iVar0);
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
	}
	return 1;
}

int func_10(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		DEBUG::_0x4DC69742196F818A(8, 215, "GET_JEWELRY_CHEST_IPL_GROUP: iRadius = ", iVar0);
	}
	switch (iVar0)
	{
		case 1:
			return joaat("MP005_A1_ARBRACELET02_IPL");
		case 2:
			return -863309194;
		case 3:
			return joaat("MP005_A1_BPRING02_IPL");
		case 4:
			return 188714829;
		case 5:
			return 1067836986;
		case 6:
			return -19043490;
		case 7:
			return joaat("MP005_A1_DPBBRACELET02_IPL");
		case 8:
			return 1498576406;
		case 9:
			return joaat("MP005_A1_FPNECKLACE02_IPL");
		case 10:
			return joaat("MP005_A1_GWGNECKLACE01_IPL");
		case 11:
			return -391528998;
		case 12:
			return joaat("MP005_A1_HGBBRACELET03_IPL");
		case 13:
			return -1445626658;
		case 14:
			return -1262762728;
		case 15:
			return -1374528601;
		case 16:
			return joaat("MP005_A1_HSBRACELET02_IPL");
		case 17:
			return joaat("MP005_A4_HSBRACELET03_IPL");
		case 18:
			return joaat("MP005_A4_ITBRACELET03_IPL");
		case 19:
			return joaat("MP005_A1_MTRING02_IPL");
		case 20:
			return joaat("MP005_A4_ORGBBRACELET03_IPL");
		case 21:
			return joaat("MP005_A3_ODEARRING1_IPL");
		case 22:
			return joaat("MP005_A3_RANECKLACE02_IPL");
		case 23:
			return joaat("MP005_A4_RANECKLACE03_IPL");
		case 24:
			return joaat("MP005_A1_SDRING01_IPL");
		case 25:
			return joaat("MP005_A1_WDRING1_IPL");
		case 26:
			return 630089379;
	}
	return joaat("MP005_A1_ARBRACELET02_IPL");
}

char* func_11(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		DEBUG::_0x4DC69742196F818A(8, 215, "GET_JEWELRY_CHEST_IPL_GROUP: iRadius = ", iVar0);
	}
	switch (iVar0)
	{
		case 1:
			return "MP005_A1_ARBracelet02_IPL";
		case 2:
			return "MP007_A2_BMecklace03_IPL";
		case 3:
			return "mp005_a1_BPRing02_IPL";
		case 4:
			return "MP007_a2_BANecklace01_IPL";
		case 5:
			return "MP007_a2_BANecklace02_IPL";
		case 6:
			return "MP007_A2_BANecklace03_IPL";
		case 7:
			return "MP005_A1_DPBBracelet02_IPL";
		case 8:
			return "MP007_A2_DPBracelet03_IPL";
		case 9:
			return "MP005_A1_FPNecklace02_IPL";
		case 10:
			return "MP005_a1_GWGNecklace01_IPL";
		case 11:
			return "MP007_A2_HGBracelet02_IPL";
		case 12:
			return "MP005_A1_HGBBracelet03_IPL";
		case 13:
			return "mp007_a2_HGEarring02_IPL";
		case 14:
			return "mp007_a2_HCRing02_IPL";
		case 15:
			return "MP007_A2_HSBRACELET01_IPL";
		case 16:
			return "MP005_A1_HSBracelet02_IPL";
		case 17:
			return "MP005_A4_HSBracelet03_IPL";
		case 18:
			return "MP005_A4_ITBracelet03_IPL";
		case 19:
			return "mp005_a1_MTRing02_IPL";
		case 20:
			return "MP005_A4_ORGBBracelet03_IPL";
		case 21:
			return "MP005_A3_ODEarring1_IPL";
		case 22:
			return "MP005_A3_RANecklace02_IPL";
		case 23:
			return "MP005_A4_RANecklace03_IPL";
		case 24:
			return "mp005_a1_SDRing01_IPL";
		case 25:
			return "mp005_a1_WDRing1_IPL";
		case 26:
			return "mp007_a2_DEEarring02_IPL";
	}
	return "mp005_a1_arbracelet02_ipl";
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (*uParam0)
	{
		case 1:
			iVar0 = 1776680074;
			break;
		case 2:
			iVar0 = 1776680074;
			break;
		case 3:
			iVar0 = 1776680074;
			break;
		case 4:
			iVar0 = 1776680074;
			break;
		case 5:
			iVar0 = 1776680074;
			break;
		case 6:
			iVar0 = 1776680074;
			break;
		case 7:
			iVar0 = 1776680074;
			break;
		case 8:
			iVar0 = 1776680074;
			break;
		case 9:
			iVar0 = 1776680074;
			break;
		case 10:
			iVar0 = 1776680074;
			break;
		case 11:
			iVar0 = 1776680074;
			break;
		case 12:
			iVar0 = 1776680074;
			break;
		case 13:
			iVar0 = 1776680074;
			break;
		case 14:
			iVar0 = 1776680074;
			break;
		case 15:
			iVar0 = 1776680074;
			break;
		case 16:
			iVar0 = 1776680074;
			break;
		case 17:
			iVar0 = 1776680074;
			break;
		case 18:
			iVar0 = 1776680074;
			break;
		case 19:
			iVar0 = 1776680074;
			break;
		case 20:
			iVar0 = 1776680074;
			break;
		case 21:
			iVar0 = 1776680074;
			break;
		case 22:
			iVar0 = 1776680074;
			break;
		case 23:
			iVar0 = 1776680074;
			break;
		case 24:
			iVar0 = 1776680074;
			break;
		case 25:
			iVar0 = 1776680074;
			break;
		case 26:
			iVar0 = 1776680074;
			break;
	}
	return iVar0;
}

void func_13(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLES_DO_COMMON_CLEANUP");
	func_23(uParam0);
	func_24(&(uParam0->f_6), 1);
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: invalid entity!");
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276832.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276832.f_32))
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: removing entity with model ", func_25(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " from tracking itemset");
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276832.f_32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: itemset was invalid or entity with model ", func_25(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " was not in tracking itemset");
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276832[iVar0 /*2*/]) && Global_1276832[iVar0 /*2*/] == iParam0)
		{
			DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: unregistering entity with model ", func_25(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " at index ", iVar0);
			MISC::_COPY_MEMORY(&(Global_1276832[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "NET_COLLECTIBLES_UNREGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: couldn't find entity in the manager");
	return 0;
}

int func_15(var uParam0)
{
	return uParam0->f_3;
}

void func_16(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_26(Global_1213361))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_10 == -1f)
		{
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1213361, vParam1, true);
		}
		if (uParam0->f_10 <= 5f)
		{
			bVar0 = true;
		}
	}
	bVar1 = func_27(uParam0, bParam4, bVar0);
	if (!bVar1)
	{
		if (uParam0->f_8)
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE: rumble disabled in state - ", func_28(uParam0->f_11, 0));
			uParam0->f_8 = 0;
		}
	}
	if (uParam0->f_11 < 8)
	{
		uParam0->f_11++;
	}
	else
	{
		uParam0->f_11 = 0;
	}
	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
		{
			uParam0->f_8 = 1;
			DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE: end of checks, re-enabling rumble for next cycle");
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_9 == -1f)
	{
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);
	}
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_29()));
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
						if (Global_1940410.f_38 != joaat("WEAPON_KIT_METAL_DETECTOR"))
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_30(uParam0, 1);
					}
				}
				else
				{
					func_30(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - uParam0->f_9) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - uParam0->f_9) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (uParam0->f_9 < 3f && bParam7)
			{
				DEBUG::_0xF0783374333FD8CE(8, 191, "COLLECTIBLE_RUMBLE_STATE_DIST_CHECK - disable respawn");
				func_31(250);
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_32(&(uParam0->f_1));
			func_30(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_23(uParam0);
				}
				func_30(uParam0, 0);
			}
			else if (func_33(&(uParam0->f_1)) >= 2f)
			{
				func_30(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				DEBUG::_0xF0783374333FD8CE(8, 191, "COLLECTIBLE_RUMBLE_STATE_WITHIN_RADIUS - disable respawn");
				func_31(250);
			}
			break;
	}
}

float func_17(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_18(var uParam0)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 215, "NET_COLLECTIBLE_HANDLE_USE_CONTEXT_SOUND: UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(INPUT_LOOT3) - ", MISC::_0xF216F74101968DB0(HUD::_UIPROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3"))));
		if (HUD::_UIPROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
				DEBUG::_0xF0783374333FD8CE(8, 215, "NET_COLLECTIBLE_HANDLE_USE_CONTEXT_SOUND: playing collectible_found sound");
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

void func_19(var uParam0, int iParam1)
{
	DEBUG::_0x4DC69742196F818A(680, 215, "SET_JEWELRY_CHEST_STATE : ", func_34(uParam0->f_3, 0), " -> ", func_34(iParam1, 0));
	uParam0->f_3 = iParam1;
}

bool func_20(var uParam0)
{
	if (func_35(&(uParam0->f_14), &(uParam0->f_55), 1, uParam0->f_5, 5f) > 0)
	{
		DEBUG::_0x4DC69742196F818A(8, 215, "SEARCH_JEWELRY_CHEST_OBJECT : -> T");
		return true;
	}
	return false;
}

var func_21(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14[iVar0]))
		{
			DEBUG::_0x4DC69742196F818A(648, 215, "GET_JEWELRY_CHEST_OBJECT: DOES_ENTITY_EXIST: index = ", iVar0, " model = ", func_25(ENTITY::GET_ENTITY_MODEL(uParam0->f_14[iVar0]), 0));
			uParam0->f_54 = uParam0->f_14[iVar0];
			return uParam0->f_14[iVar0];
		}
		iVar0++;
	}
	return uVar1;
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: invalid entity!");
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276832.f_32))
	{
		Global_1276832.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276832.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276832.f_32);
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: adding entity with model ", func_25(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " to tracking itemset");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: model ", func_25(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " was already a member of the itemset!?");
	}
	if (!func_36(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2, 0);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276832[iVar0 /*2*/]))
		{
			DEBUG::_0xF0783374333FD8CE(168, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: registering entity with model ", func_25(ENTITY::GET_ENTITY_MODEL(iParam0), 0), " at index ", iVar0);
			Global_1276832[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	DEBUG::_0x83407B92D46F25C3(8, 215, "NET_COLLECTIBLES_REGISTER_EAGLE_EYE_TRACKABLE_ITEM_ENTITY: no space in the array for the entity, won't be trackable in eagle eye!");
	return 0;
}

void func_23(var uParam0)
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_4 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_24(var uParam0, int iParam1)
{
	if (func_37(uParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "REMOVE_VEG_MODIFIER_SPHERE_SAFE: Removing veg modifier");
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

var func_25(bool bParam0, int iParam1)
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

bool func_26(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_27(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_38(joaat("KIT_COLLECTORS_BAG"), 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_39(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_40())
			{
				return 0;
			}
			break;
		case 3:
			if (Global_1048576)
			{
				return 0;
			}
			break;
		case 4:
			if (func_41())
			{
				return 0;
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::_0xEC7E480FF8BD0BED(Global_33))
			{
				return 0;
			}
			break;
		case 7:
			if (!bParam1 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		case 8:
			if (bParam2 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		default:
			uParam0->f_11 = 0;
			DEBUG::_0x9A6C65DDDBEC9C52(8, 215, "NET_COLLECTIBLE_HANDLE_RUMBLE_CHECKS: netCollectibleDivinationState couldn't be handled, moving to NET_COLLECTIBLE_RUMBLE_CHECK_FIRST_CHECK");
			break;
	}
	return 1;
}

char* func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_COLLECTORS_BAGS";
		case 1:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_SHOP";
		case 2:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_MINIGAME";
		case 3:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_MISSION";
		case 4:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_IS_ANIMAL";
		case 5:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_PLAYER_CONTROL";
		case 6:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_ITEM_INTERACTION";
		case 7:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_RUMBLE_DISTANCE";
		case 8:
			return "NET_COLLECTIBLE_RUMBLE_CHECK_DETECTING_DISTANCE";
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

float func_29()
{
	return Global_1146683.f_2169[89 /*205*/].f_201;
}

void func_30(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_31(int iParam0)
{
	UNK_0x355E72323AEE83CC(223, 6);
	DEBUG::_0xA308F935BDECCEC0(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] Request to delay respawn availability for _iMilliseconds: ", iParam0);
	if (iParam0 <= 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] ERROR! Disable duration can not be <= 0");
		return;
	}
	Global_1896750.f_3977 = MISC::GET_GAME_TIMER();
	Global_1896750.f_3977.f_1 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(8, 223, "[RESPAWN][DISABLE_FOR_DURATION] iRespawnDisabledTimeStamp: ", Global_1896750.f_3977);
}

void func_32(var uParam0)
{
	func_42(uParam0, 0f);
}

float func_33(var uParam0)
{
	if (!func_43(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_44(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_45() - uParam0->f_1);
}

char* func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "JEWELRY_CHEST_STATE_INVALID";
		case 0:
			return "JEWELRY_CHEST_INIT";
		case 1:
			return "JEWELRY_CHEST_IPL_REQUEST";
		case 2:
			return "JEWELRY_CHEST_SETUP_EAGLE_EYE";
		case 3:
			return "JEWELRY_CHEST_PLAYER_GRABBING_ITEM";
		case 4:
			return "JEWELRY_CHEST_DONE";
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

int func_35(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_46(uParam0, uParam1, iVar0, iParam2);
	func_47(iVar0);
	return iVar1;
}

bool func_36(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	bool bVar15;

	if (func_48() == 0)
	{
		DEBUG::_0x4423BBAB7EB2B96B(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: net_collectibles file does not exist");
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_48()))
	{
		DEBUG::_0x4423BBAB7EB2B96B(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: net_collectibles file not loaded");
		return false;
	}
	Var0 = func_48();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: found node at index - ", iVar14);
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(168, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: found model ", &uVar5, " at index - ", iVar14);
				bVar15 = MISC::GET_HASH_KEY(&uVar5);
				DEBUG::_0x4DC69742196F818A(168, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: checking model - ", func_25(bVar15, 0), " against model - ", iVar13);
				if (iVar13 == bVar15)
				{
					DEBUG::_0xF0783374333FD8CE(40, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: the models match - ", func_25(bVar15, 0));
					return true;
				}
			}
		}
		iVar14++;
	}
	DEBUG::_0xF0783374333FD8CE(136, 215, "NET_COLLECTIBLES_SHOULD_ENTITY_BE_MANAGED: entity with model ", iVar13, " is not set up as a dirt pile in net_collectibles.xml");
	return false;
}

bool func_37(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_38(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_49(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_50(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_51(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_52(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_53(bParam0, 0);
	}
	if (func_54(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_55(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_56(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_50(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_55(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_50(bParam0, 0));
	return iVar0;
}

bool func_39(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

bool func_40()
{
	return func_57() != -1;
}

bool func_41()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_42(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_45() - fParam1);
	func_58(uParam0, 1);
	func_59(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_43(var uParam0)
{
	return func_60(*uParam0, 1);
}

bool func_44(var uParam0)
{
	return func_60(*uParam0, 2);
}

float func_45()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_46(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	DEBUG::_0xA308F935BDECCEC0(8, 0, "FIND_OBJECTS_IN_VOLUME: Get entities in area returned a count of: ", iVar6);
	if (iVar6 >= iParam3)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 0, "FIND_OBJECTS_IN_VOLUME: We found more entities in area than our max count.. some entities might be left out");
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if ((*uParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*uParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_47(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
		DEBUG::_0x4DC69742196F818A(8, 87, "Deleting volume ");
	}
}

int func_48()
{
	return Global_1072032.f_28503[47 /*4*/].f_3;
}

bool func_49(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

var func_50(bool bParam0, int iParam1)
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

int func_51(bool bParam0)
{
	vector3 vVar0;

	if (!func_49(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_52(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_49(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_50(bParam0, 0));
		return false;
	}
	iVar0 = func_51(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_61(bParam0, 1399091007))
	{
		func_62(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_50(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

char* func_53(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char* sVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_63(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_65(&Var0, func_64(0));
	}
	if (!func_66(&Var0, &iVar14, &sVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_50(bParam0, 0));
		return 0;
	}
	func_67(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", sVar15, " of item ", func_50(bParam0, 0));
	return sVar15;
}

int func_54(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_69(func_68(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_55(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_56(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_70(bParam0, bParam1, 0) };
	return func_71(bParam0, Var0, Var0.f_4, bParam1);
}

int func_57()
{
	return Global_1139425.f_137;
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_60(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_61(bool bParam0, bool bParam1)
{
	if (!func_49(bParam0, 0))
	{
		return func_72(func_68(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_73(bParam1, 0), " for item ", func_50(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

void func_62(bool bParam0, var uParam1, var uParam2)
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

struct<14> func_63(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_50(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_74(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_74(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_74(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_75(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_76(iParam6, 0));
	}
	return Var0;
}

struct<4> func_64(bool bParam0)
{
	int iVar0;

	iVar0 = func_55(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_71(923904168, func_77(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_71(923904168, func_77(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_71(923904168, func_77(bParam0), -740156546, 0);
}

void func_65(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_66(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_55(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *bParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

int func_67(int iParam0)
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

bool func_68(bool bParam0)
{
	return bParam0;
}

bool func_69(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

struct<5> func_70(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_77(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_51(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_50(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_76(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_71(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_64(bParam1) };
			if (bParam2 && func_78(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_79(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_79(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_80(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_81(bParam1) };
			switch (func_82(bParam0))
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
			if (func_83(bParam0, -1823706425))
			{
				Var0 = { func_71(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_83(bParam0, -1483207246))
			{
				Var0 = { func_71(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_71(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_83(bParam0, -1653629781))
			{
				Var0 = { func_71(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_84(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_83(bParam0, -1653629781))
			{
				Var0 = { func_71(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_50(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_50(bParam0, 0), ": ", func_74(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_71(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_49(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_50(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_55(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_72(bool bParam0, bool bParam1)
{
	if (!func_69(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_73(bParam1, 0), " for bundle ", func_85(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_73(bool bParam0, int iParam1)
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

char* func_76(int iParam0, int iParam1)
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

struct<4> func_77(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_55(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_71(joaat("CHARACTER"), func_86(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_71(joaat("CHARACTER"), func_86(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_71(joaat("CHARACTER"), func_86(), -1591664384, bParam0);
}

bool func_78(bool bParam0, bool bParam1)
{
	if (func_82(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_87();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_79(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_88(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_80(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_89(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_81(bool bParam0)
{
	int iVar0;

	iVar0 = func_55(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_71(271701509, func_77(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_71(271701509, func_77(bParam0), 12999093, 0);
}

int func_82(bool bParam0)
{
	struct<2> Var0;

	if (!func_49(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_83(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_82(bParam0);
	if (bVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(bVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bVar1, iVar2, &bVar0))
		{
			if (func_90(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_84(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_91(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_85(bool bParam0, int iParam1)
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

struct<4> func_86()
{
	struct<4> Var0;

	return Var0;
}

bool func_87()
{
	return (func_92(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_93(func_71(joaat("WARDROBE"), func_77(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_88(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_49(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_54(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_50(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_50(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_74(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_71(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_50(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_55(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_50(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_55(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_50(bParam0, 0));
	}
	return iVar0;
}

bool func_89(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_55(0);
	*iParam1 = { func_71(bParam0, func_64(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_50(bParam0, 0), " eSlot: ", func_74(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_50(bParam0, 0));
		return false;
	}
	return true;
}

bool func_90(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(bParam1, joaat("DEFAULT")) == -1925887917)
		{
			DEBUG::_0x4DC69742196F818A(8, 158, "[ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_WITH_SCRIPT_VALIDATION] SLOTID_WEAPON_LONGARM_WRAP_TINT blocked on weapon item");
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, bParam1, bParam2);
}

bool func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_55(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_50(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_74(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_92(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_94(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_55(bParam1), bParam0, bParam3);
}

int func_93(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_95(&uParam0, bParam4, bParam5, iParam6);
}

bool func_94(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_95(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_96(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_50(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_96(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_55(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_74(bParam1, 0));
		return false;
	}
	if (!func_91(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_74(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_50(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_74(bParam1, 0));
	return true;
}

