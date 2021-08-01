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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39[4] = { 0, 0, 0, 0 };
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	bool bLocal_54 = false;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	struct<394> Local_61 = { 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, 4, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, 0 } ;
	struct<5> Local_455[32];
	struct<12> Local_616[32];
	struct<38> Local_1001[32];
	struct<1485> Local_2218 = { 0, 4, 0, 0, 0, 0, -1, 0, 255, 0, 0, 0, 0, 0, 4, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 24, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1 } ;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 14;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 1097859072;
	var uLocal_3889 = 1101004800;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 4;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 1000;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 15;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 30;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 60;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 2;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 75;
	var uLocal_4186 = 2;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 2;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 2;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 2;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 2;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 2;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 2;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 2;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 2;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 2;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 2;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 2;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 2;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 2;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 2;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 2;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 2;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 2;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 2;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 2;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 2;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 2;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 2;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 2;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 2;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 2;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 2;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 2;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 2;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 2;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 2;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 2;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 2;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 2;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 2;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 2;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 2;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 2;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 2;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 2;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 2;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 2;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 2;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 2;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 2;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 2;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 2;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 2;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 2;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 2;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 2;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 2;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 2;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 2;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 2;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 2;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 2;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 2;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 2;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 2;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 2;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 2;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 2;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 2;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 2;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 2;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 2;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 2;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 2;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 2;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 2;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 2;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 2;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 2;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 2;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 32;
	var uLocal_4412 = 2;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 2;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 2;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 2;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 2;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 2;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 2;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 2;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 2;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 2;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 2;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 2;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 2;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 2;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 2;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 2;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 2;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 2;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 2;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 2;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 2;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 2;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 2;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 2;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 2;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 2;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 2;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 2;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 2;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 2;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 2;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 2;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 4;
	var uLocal_4509 = 2;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 2;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 2;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 2;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 24;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 24;
	var uLocal_4649 = 3;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 3;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 3;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 3;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 3;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 3;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 3;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 3;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 3;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 3;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 3;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 3;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 3;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 3;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 3;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 3;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 3;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 3;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 3;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 3;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 3;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 3;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 3;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 3;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 3;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 3;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 2;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 2;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 4;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 4;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 2;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 2;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 75;
	var uLocal_5020 = -1;
	var uLocal_5021 = -1;
	var uLocal_5022 = -1;
	var uLocal_5023 = -1;
	var uLocal_5024 = -1;
	var uLocal_5025 = -1;
	var uLocal_5026 = -1;
	var uLocal_5027 = -1;
	var uLocal_5028 = -1;
	var uLocal_5029 = -1;
	var uLocal_5030 = -1;
	var uLocal_5031 = -1;
	var uLocal_5032 = -1;
	var uLocal_5033 = -1;
	var uLocal_5034 = -1;
	var uLocal_5035 = -1;
	var uLocal_5036 = -1;
	var uLocal_5037 = -1;
	var uLocal_5038 = -1;
	var uLocal_5039 = -1;
	var uLocal_5040 = -1;
	var uLocal_5041 = -1;
	var uLocal_5042 = -1;
	var uLocal_5043 = -1;
	var uLocal_5044 = -1;
	var uLocal_5045 = -1;
	var uLocal_5046 = -1;
	var uLocal_5047 = -1;
	var uLocal_5048 = -1;
	var uLocal_5049 = -1;
	var uLocal_5050 = -1;
	var uLocal_5051 = -1;
	var uLocal_5052 = -1;
	var uLocal_5053 = -1;
	var uLocal_5054 = -1;
	var uLocal_5055 = -1;
	var uLocal_5056 = -1;
	var uLocal_5057 = -1;
	var uLocal_5058 = -1;
	var uLocal_5059 = -1;
	var uLocal_5060 = -1;
	var uLocal_5061 = -1;
	var uLocal_5062 = -1;
	var uLocal_5063 = -1;
	var uLocal_5064 = -1;
	var uLocal_5065 = -1;
	var uLocal_5066 = -1;
	var uLocal_5067 = -1;
	var uLocal_5068 = -1;
	var uLocal_5069 = -1;
	var uLocal_5070 = -1;
	var uLocal_5071 = -1;
	var uLocal_5072 = -1;
	var uLocal_5073 = -1;
	var uLocal_5074 = -1;
	var uLocal_5075 = -1;
	var uLocal_5076 = -1;
	var uLocal_5077 = -1;
	var uLocal_5078 = -1;
	var uLocal_5079 = -1;
	var uLocal_5080 = -1;
	var uLocal_5081 = -1;
	var uLocal_5082 = -1;
	var uLocal_5083 = -1;
	var uLocal_5084 = -1;
	var uLocal_5085 = -1;
	var uLocal_5086 = -1;
	var uLocal_5087 = -1;
	var uLocal_5088 = -1;
	var uLocal_5089 = -1;
	var uLocal_5090 = -1;
	var uLocal_5091 = -1;
	var uLocal_5092 = -1;
	var uLocal_5093 = -1;
	var uLocal_5094 = -1;
	var uLocal_5095 = -1;
	var uLocal_5096 = -1;
	var uLocal_5097 = -1;
	var uLocal_5098 = -1;
	var uLocal_5099 = -1;
	var uLocal_5100 = -1;
	var uLocal_5101 = -1;
	var uLocal_5102 = -1;
	var uLocal_5103 = -1;
	var uLocal_5104 = -1;
	var uLocal_5105 = -1;
	var uLocal_5106 = -1;
	var uLocal_5107 = -1;
	var uLocal_5108 = -1;
	var uLocal_5109 = -1;
	var uLocal_5110 = -1;
	var uLocal_5111 = -1;
	var uLocal_5112 = -1;
	var uLocal_5113 = -1;
	var uLocal_5114 = -1;
	var uLocal_5115 = -1;
	var uLocal_5116 = -1;
	var uLocal_5117 = -1;
	var uLocal_5118 = -1;
	var uLocal_5119 = -1;
	var uLocal_5120 = -1;
	var uLocal_5121 = -1;
	var uLocal_5122 = -1;
	var uLocal_5123 = -1;
	var uLocal_5124 = -1;
	var uLocal_5125 = -1;
	var uLocal_5126 = -1;
	var uLocal_5127 = -1;
	var uLocal_5128 = -1;
	var uLocal_5129 = -1;
	var uLocal_5130 = -1;
	var uLocal_5131 = -1;
	var uLocal_5132 = -1;
	var uLocal_5133 = -1;
	var uLocal_5134 = -1;
	var uLocal_5135 = -1;
	var uLocal_5136 = -1;
	var uLocal_5137 = -1;
	var uLocal_5138 = -1;
	var uLocal_5139 = -1;
	var uLocal_5140 = -1;
	var uLocal_5141 = -1;
	var uLocal_5142 = -1;
	var uLocal_5143 = -1;
	var uLocal_5144 = -1;
	var uLocal_5145 = -1;
	var uLocal_5146 = -1;
	var uLocal_5147 = -1;
	var uLocal_5148 = -1;
	var uLocal_5149 = -1;
	var uLocal_5150 = -1;
	var uLocal_5151 = -1;
	var uLocal_5152 = -1;
	var uLocal_5153 = -1;
	var uLocal_5154 = -1;
	var uLocal_5155 = -1;
	var uLocal_5156 = -1;
	var uLocal_5157 = -1;
	var uLocal_5158 = -1;
	var uLocal_5159 = -1;
	var uLocal_5160 = -1;
	var uLocal_5161 = -1;
	var uLocal_5162 = -1;
	var uLocal_5163 = -1;
	var uLocal_5164 = -1;
	var uLocal_5165 = -1;
	var uLocal_5166 = -1;
	var uLocal_5167 = -1;
	var uLocal_5168 = -1;
	var uLocal_5169 = -1;
	var uLocal_5170 = 20;
	var uLocal_5171 = -1;
	var uLocal_5172 = -1;
	var uLocal_5173 = -1;
	var uLocal_5174 = -1;
	var uLocal_5175 = -1;
	var uLocal_5176 = -1;
	var uLocal_5177 = -1;
	var uLocal_5178 = -1;
	var uLocal_5179 = -1;
	var uLocal_5180 = -1;
	var uLocal_5181 = -1;
	var uLocal_5182 = -1;
	var uLocal_5183 = -1;
	var uLocal_5184 = -1;
	var uLocal_5185 = -1;
	var uLocal_5186 = -1;
	var uLocal_5187 = -1;
	var uLocal_5188 = -1;
	var uLocal_5189 = -1;
	var uLocal_5190 = -1;
	var uLocal_5191 = -1;
	var uLocal_5192 = -1;
	var uLocal_5193 = -1;
	var uLocal_5194 = -1;
	var uLocal_5195 = -1;
	var uLocal_5196 = -1;
	var uLocal_5197 = -1;
	var uLocal_5198 = -1;
	var uLocal_5199 = -1;
	var uLocal_5200 = -1;
	var uLocal_5201 = -1;
	var uLocal_5202 = -1;
	var uLocal_5203 = -1;
	var uLocal_5204 = -1;
	var uLocal_5205 = -1;
	var uLocal_5206 = -1;
	var uLocal_5207 = -1;
	var uLocal_5208 = -1;
	var uLocal_5209 = -1;
	var uLocal_5210 = -1;
	var uLocal_5211 = 75;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 32;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 75;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 32;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 10;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 75;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 75;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 32;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 623901053;
	var uLocal_5865 = 6;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 1048576000;
	var uLocal_5880 = 1092616192;
	var uLocal_5881 = -1082130432;
	var uLocal_5882 = -1082130432;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 4;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = -1;
	var uLocal_5897 = -1;
	var uLocal_5898 = 0;
	var uLocal_5899 = -1;
	var uLocal_5900 = -1;
	var uLocal_5901 = -1;
	var uLocal_5902 = -1;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = -1;
	var uLocal_5908 = 255;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = -1;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = -1;
	var uLocal_5928 = -1;
	var uLocal_5929 = 0;
	var uLocal_5930 = -1;
	var uLocal_5931 = -1;
	var uLocal_5932 = -1;
	var uLocal_5933 = -1;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = -1;
	var uLocal_5939 = 255;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = -1;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = -1;
	var uLocal_5959 = -1;
	var uLocal_5960 = 0;
	var uLocal_5961 = -1;
	var uLocal_5962 = -1;
	var uLocal_5963 = -1;
	var uLocal_5964 = -1;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = -1;
	var uLocal_5970 = 255;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = -1;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = -1;
	var uLocal_5990 = -1;
	var uLocal_5991 = 0;
	var uLocal_5992 = -1;
	var uLocal_5993 = -1;
	var uLocal_5994 = -1;
	var uLocal_5995 = -1;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = -1;
	var uLocal_6001 = 255;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = -1;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 20;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = -1;
	var uLocal_6022 = -1;
	var uLocal_6023 = 0;
	var uLocal_6024 = -1;
	var uLocal_6025 = -1;
	var uLocal_6026 = -1;
	var uLocal_6027 = -1;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = -1;
	var uLocal_6033 = 255;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = -1;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = -1;
	var uLocal_6053 = -1;
	var uLocal_6054 = 0;
	var uLocal_6055 = -1;
	var uLocal_6056 = -1;
	var uLocal_6057 = -1;
	var uLocal_6058 = -1;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = -1;
	var uLocal_6064 = 255;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = -1;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = -1;
	var uLocal_6084 = -1;
	var uLocal_6085 = 0;
	var uLocal_6086 = -1;
	var uLocal_6087 = -1;
	var uLocal_6088 = -1;
	var uLocal_6089 = -1;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = -1;
	var uLocal_6095 = 255;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = -1;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = -1;
	var uLocal_6115 = -1;
	var uLocal_6116 = 0;
	var uLocal_6117 = -1;
	var uLocal_6118 = -1;
	var uLocal_6119 = -1;
	var uLocal_6120 = -1;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = -1;
	var uLocal_6126 = 255;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = -1;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = -1;
	var uLocal_6146 = -1;
	var uLocal_6147 = 0;
	var uLocal_6148 = -1;
	var uLocal_6149 = -1;
	var uLocal_6150 = -1;
	var uLocal_6151 = -1;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = -1;
	var uLocal_6157 = 255;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = -1;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = -1;
	var uLocal_6177 = -1;
	var uLocal_6178 = 0;
	var uLocal_6179 = -1;
	var uLocal_6180 = -1;
	var uLocal_6181 = -1;
	var uLocal_6182 = -1;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = -1;
	var uLocal_6188 = 255;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = -1;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = -1;
	var uLocal_6208 = -1;
	var uLocal_6209 = 0;
	var uLocal_6210 = -1;
	var uLocal_6211 = -1;
	var uLocal_6212 = -1;
	var uLocal_6213 = -1;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = -1;
	var uLocal_6219 = 255;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = -1;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = -1;
	var uLocal_6239 = -1;
	var uLocal_6240 = 0;
	var uLocal_6241 = -1;
	var uLocal_6242 = -1;
	var uLocal_6243 = -1;
	var uLocal_6244 = -1;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = -1;
	var uLocal_6250 = 255;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = -1;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = -1;
	var uLocal_6270 = -1;
	var uLocal_6271 = 0;
	var uLocal_6272 = -1;
	var uLocal_6273 = -1;
	var uLocal_6274 = -1;
	var uLocal_6275 = -1;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = -1;
	var uLocal_6281 = 255;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = -1;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = -1;
	var uLocal_6301 = -1;
	var uLocal_6302 = 0;
	var uLocal_6303 = -1;
	var uLocal_6304 = -1;
	var uLocal_6305 = -1;
	var uLocal_6306 = -1;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = -1;
	var uLocal_6312 = 255;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = -1;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = -1;
	var uLocal_6332 = -1;
	var uLocal_6333 = 0;
	var uLocal_6334 = -1;
	var uLocal_6335 = -1;
	var uLocal_6336 = -1;
	var uLocal_6337 = -1;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = -1;
	var uLocal_6343 = 255;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = -1;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = -1;
	var uLocal_6363 = -1;
	var uLocal_6364 = 0;
	var uLocal_6365 = -1;
	var uLocal_6366 = -1;
	var uLocal_6367 = -1;
	var uLocal_6368 = -1;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = -1;
	var uLocal_6374 = 255;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = -1;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = -1;
	var uLocal_6394 = -1;
	var uLocal_6395 = 0;
	var uLocal_6396 = -1;
	var uLocal_6397 = -1;
	var uLocal_6398 = -1;
	var uLocal_6399 = -1;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = -1;
	var uLocal_6405 = 255;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = -1;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = -1;
	var uLocal_6425 = -1;
	var uLocal_6426 = 0;
	var uLocal_6427 = -1;
	var uLocal_6428 = -1;
	var uLocal_6429 = -1;
	var uLocal_6430 = -1;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = -1;
	var uLocal_6436 = 255;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = -1;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = -1;
	var uLocal_6456 = -1;
	var uLocal_6457 = 0;
	var uLocal_6458 = -1;
	var uLocal_6459 = -1;
	var uLocal_6460 = -1;
	var uLocal_6461 = -1;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = -1;
	var uLocal_6467 = 255;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = -1;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = -1;
	var uLocal_6487 = -1;
	var uLocal_6488 = 0;
	var uLocal_6489 = -1;
	var uLocal_6490 = -1;
	var uLocal_6491 = -1;
	var uLocal_6492 = -1;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = -1;
	var uLocal_6498 = 255;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = -1;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = -1;
	var uLocal_6518 = -1;
	var uLocal_6519 = 0;
	var uLocal_6520 = -1;
	var uLocal_6521 = -1;
	var uLocal_6522 = -1;
	var uLocal_6523 = -1;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = -1;
	var uLocal_6529 = 255;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = -1;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = -1;
	var uLocal_6549 = -1;
	var uLocal_6550 = 0;
	var uLocal_6551 = -1;
	var uLocal_6552 = -1;
	var uLocal_6553 = -1;
	var uLocal_6554 = -1;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = -1;
	var uLocal_6560 = 255;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = -1;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = -1;
	var uLocal_6580 = -1;
	var uLocal_6581 = 0;
	var uLocal_6582 = -1;
	var uLocal_6583 = -1;
	var uLocal_6584 = -1;
	var uLocal_6585 = -1;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = -1;
	var uLocal_6591 = 255;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = -1;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = -1;
	var uLocal_6611 = -1;
	var uLocal_6612 = 0;
	var uLocal_6613 = -1;
	var uLocal_6614 = -1;
	var uLocal_6615 = -1;
	var uLocal_6616 = -1;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = -1;
	var uLocal_6622 = 255;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = -1;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	char* sScriptParam_0 = NULL;
#endregion

void __EntryFunction__()
{
	int iVar0;

	iLocal_37 = joaat("W_BINOCULAR_INNER01");
	fLocal_52 = 1f;
	fLocal_53 = 1f;
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] ########## net_ugc_end_flow_transition_online.sc STARTED ##########");
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] instanceId: ", sScriptParam_0);
	func_1(&sScriptParam_0);
	while (!func_2())
	{
		func_3();
		if (iLocal_55 >= 0 && iLocal_55 < 32)
		{
			iLocal_60 = MISC::GET_GAME_TIMER();
			func_4();
			func_5();
			func_6();
		}
		else
		{
			iVar0 = MISC::GET_GAME_TIMER();
			if (iLocal_60 == 0)
			{
				iLocal_60 = iVar0;
			}
			else if ((iVar0 - iLocal_60) > 30000)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] fail safe expired, bail");
				CAM::DO_SCREEN_FADE_IN(0);
				func_7();
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] something bad is happening, waiting for recovery");
			}
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] time set at ", iLocal_60, " - game timer is ", iVar0);
		}
		BUILTIN::WAIT(0);
	}
	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(char* sParam0)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "UGC_END_FLOW_TRANSITION_ONLINE_PREGAME - iInstanceId: ", *sParam0);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_8(32, *sParam0);
	func_9();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_10();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_61, 394, 48);
	func_11(NETWORK::_0xBA24095EA96DFE17(&Local_61), 394, "sServerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_455, 161, 49);
	func_12(NETWORK::_0x690806BC83BC8CA2(&(Local_455[0 /*5*/])), 161, "sClientBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_616, 385, 50);
	func_12(NETWORK::_0x690806BC83BC8CA2(&(Local_616[0 /*12*/])), 385, "sCutscenePlayerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1001, 1217, 51);
	func_12(NETWORK::_0x690806BC83BC8CA2(&(Local_1001[0 /*38*/])), 1217, "sVotingPlayerBD");
	while (!NETWORK::_0x5D10B3795F3FC886() && !func_2())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_13() && !func_2())
	{
		if (!func_14(&uLocal_58))
		{
			func_15(&uLocal_58, 1, 0);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PREGAME - Failsafe timer started");
		}
		BUILTIN::WAIT(0);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PREGAME - UGC_END_FLOW_TRANSITION_ONLINE_HAS_EVERYONE_JOINED return TRUE");
}

bool func_2()
{
	if (func_16(Global_397327.f_6, Global_397327.f_7))
	{
		return true;
	}
	if (Local_61 == 5)
	{
		return true;
	}
	return false;
}

void func_3()
{
	bLocal_54 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	iLocal_55 = NETWORK::PARTICIPANT_ID_TO_INT();
}

void func_4()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_EVENT_QUEUE - Processing event: ", iVar1);
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar1);
		switch (iVar0)
		{
			case -507840394:
				func_17(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;

	if (!bLocal_54)
	{
		return;
	}
	while (iVar0 < 6)
	{
		iVar1 = Local_61;
		switch (Local_61)
		{
			case 0:
				if (func_18(1))
				{
					func_19();
					iVar1 = 1;
				}
				break;
			case 1:
				if (func_18(3))
				{
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_20())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (func_18(5))
				{
					iVar1 = 4;
				}
				break;
			case 4:
				iVar1 = 5;
				break;
		}
		if (iVar1 != Local_61)
		{
			DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER - sClientBD.eState: ", func_21(Local_61, 0), " -> ", func_21(iVar1, 0));
			Local_61 = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	while (iVar0 < 6)
	{
		iVar1 = Local_455[iLocal_55 /*5*/];
		switch (Local_455[iLocal_55 /*5*/])
		{
			case 0:
				if (func_22())
				{
					iVar1 = 1;
				}
				break;
			case 1:
				if (Local_61 >= 1)
				{
					func_23();
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_24())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (Local_61 >= 2)
				{
					iVar1 = 4;
				}
				break;
			case 4:
				if (func_25())
				{
					iVar1 = 5;
				}
				break;
		}
		if (iVar1 != Local_455[iLocal_55 /*5*/])
		{
			DEBUG::_0xEF256AE8A5A27966(43552, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_CLIENT - sClientBD[", iLocal_55, "].eState: ", func_26(Local_455[iLocal_55 /*5*/], 0), " -> ", func_26(iVar1, 0));
			Local_455[iLocal_55 /*5*/] = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_7()
{
	if (func_27())
	{
		func_28(&Local_2218, 12);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CLEANUP - Moonshine is active, disabling fast instance");
	}
	func_29(&Local_2218, &(Local_616[iLocal_55 /*12*/]));
	func_30();
}

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(168, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
		func_31();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	DEBUG::_0xF0783374333FD8CE(2216, 8, "SETUP_THREAD_FOR_NETWORK(): [", UNK_0x8F77B33B6A34D8BA(), ".sc] Setting net script, iMaxNumMissionParticipants - ", iParam0, ", iInstanceId - ", iParam1);
}

int func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	char cVar7[64];

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	StringCopy(&cVar3, "tID: ", 32);
	StringIntConCat(&cVar3, SCRIPTS::GET_ID_OF_THIS_THREAD(), 32);
	StringCopy(&cVar7, "sID: ", 64);
	StringConCat(&cVar7, UNK_0x8F77B33B6A34D8BA(), 64);
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
			DEBUG::_0xF0783374333FD8CE(10660520, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " taking ", (MISC::GET_GAME_TIMER() - iVar1), " seconds to start.  Status = ", func_32(iVar0));
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			DEBUG::_0xD9911C7B5F8CD69C(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " Took too long to start.  Something really bad happened and you should fix it...");
			func_31();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
					break;
				case 1:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
					func_31();
					break;
				case 2:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
					func_31();
					break;
				case 4:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
					func_31();
					break;
				case 3:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
					func_31();
					break;
				default:
					DEBUG::_0xF0783374333FD8CE(8, 8, "HANDLE_NET_SCRIPT_INITIALISATION - THREAD_EXIT_REQUESTED = UNKNOWN");
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - ", iVar0);
			func_31();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE");
			func_31();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_SIGNED_ONLINE = FALSE");
			func_31();
		}
		if (func_33() == 0)
		{
			if (func_34())
			{
				DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - We're sessioning, g_mpGlobals.eSessionState != MPSS_RUNNING");
				func_31();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script to terminate - NETWORK_IS_GAME_IN_PROGRESS = FALSE 2");
		func_31();
	}
	DEBUG::_0xF0783374333FD8CE(174760, 8, "HANDLE_NET_SCRIPT_INITIALISATION: [", UNK_0x8F77B33B6A34D8BA(), ".sc]", &cVar3, ", ", &cVar7, " - ", " script now running.");
	return 1;
}

void func_10()
{
	int iVar0;

	Local_61.f_393 = 255;
	func_35(&(Local_61.f_2[0 /*33*/]));
	iVar0 = 0;
	while (iVar0 < Local_616)
	{
		func_36(&(Local_616[iVar0 /*12*/]));
		iVar0++;
	}
	func_37(&Local_2218);
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_38(Global_3407872.f_2498, 8))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_HAS_EVERYONE_JOINED - Timer already expired.");
		return true;
	}
	if (func_14(&uLocal_58) && func_39(&uLocal_58, 1, 0) > 20000)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_HAS_EVERYONE_JOINED - Failsafe expired: ", func_39(&uLocal_58, 1, 0));
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar0 /*7*/])))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar0 /*7*/])))
			{
				return false;
			}
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar0 /*7*/]));
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_HAS_EVERYONE_JOINED - iPlayer: ", iVar0, " Player is invalid");
				return false;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_HAS_EVERYONE_JOINED - Player: ", PLAYER::GET_PLAYER_NAME(iVar1), " Waiting to be Participant");
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_HAS_EVERYONE_JOINED - Player: ", PLAYER::GET_PLAYER_NAME(iVar1), " Participant waiting to be active");
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

void func_15(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

bool func_16(bool bParam0, bool bParam1)
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
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_40(Global_1572887, 0), ", so skipping");
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

void func_17(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_NETWORK_SCRIPT_EVENT - Processing event: ", iParam0, " eEventType: ", func_41(iVar0, 0));
}

bool func_18(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (Local_455[iVar0 /*5*/] != iParam0)
		{
			DEBUG::_0xEF256AE8A5A27966(43552, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_ARE_CLIENT_STATES_SYNCED - sClientBD[", iVar0, "].eState: ", func_26(Local_455[iVar0 /*5*/], 0), " != eState: ", func_26(iParam0, 0));
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_27())
	{
		return;
	}
	Local_61.f_393 = 255;
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			if (Local_455[iVar1 /*5*/].f_3 == 0)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION][MOON] no valid variation");
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				if (iVar3 != GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar3)))
				{
					if (iVar0 == 255)
					{
						iVar0 = iVar2;
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][END_FLOW][TRANSITION][MOON] PROCESS_MOONSHINE_SERVER_POSSE_LEADER Choose backup part ", PLAYER::GET_PLAYER_NAME(iVar3));
					}
				}
				else
				{
					Local_61.f_393 = iVar2;
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][END_FLOW][TRANSITION][MOON] PROCESS_MOONSHINE_SERVER_POSSE_LEADER Choose valid part ", PLAYER::GET_PLAYER_NAME(iVar3));
				}
			}
		}
		iVar1++;
	}
	if (Local_61.f_393 == 255)
	{
		if (iVar0 != 255)
		{
			Local_61.f_393 = iVar0;
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION][MOON] PROCESS_MOONSHINE_SERVER_POSSE_LEADER Chosose the backup");
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION][MOON] PROCESS_MOONSHINE_SERVER_POSSE_LEADER uh oh");
		}
	}
	if (Local_61.f_393 != 255)
	{
		Local_61.f_391 = Local_455[Local_61.f_393 /*5*/].f_3;
		Local_61.f_392 = Local_455[Local_61.f_393 /*5*/].f_4;
		DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[UGC][END_FLOW][TRANSITION][MOON] PROCESS_MOONSHINE_SERVER_POSSE_LEADER Hub Int value: ", Local_61.f_392, " Variation to use: ", func_42(Local_61.f_391));
	}
	if (Local_61.f_392 == -1)
	{
		Local_61.f_391 = 0;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION][MOON] PROCESS_MOONSHINE_SERVER_POSSE_LEADER There is no valid hut location we need to bail.");
	}
}

bool func_20()
{
	switch (Global_3407872.f_225)
	{
		case 1:
			return func_43();
		default:
			break;
	}
	return true;
	return false;
}

char* func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_STATE_PREGAME";
		case 1:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_STATE_INITIALIZING";
		case 2:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_STATE_RUNNING";
		case 3:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_STATE_COMPLETE";
		case 4:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_STATE_CLEANUP";
		case 5:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_STATE_TERMINATE";
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

bool func_22()
{
	int iVar0;

	if (!func_27())
	{
		return true;
	}
	if (!func_44())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] INIT_UGC_END_FLOW_MOONSHINE_TRANSITION - Waiting for NET_MOONSHINE_MANAGER__IS_IN_MAIN_UPDATE to finish.");
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-2111141782))
	{
		MISC::SET_BIT(&(Local_455[iLocal_55 /*5*/].f_3), 0);
		MISC::SET_BIT(&(Local_455[iLocal_55 /*5*/].f_3), 1);
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] INIT_UGC_END_FLOW_MOONSHINE_TRANSITION - UNLOCK_ROLE_MOONSHINER_PROGRESSION_GATING_ITEM locked");
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1384963671))
	{
		MISC::SET_BIT(&(Local_455[iLocal_55 /*5*/].f_3), 3);
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] INIT_UGC_END_FLOW_MOONSHINE_TRANSITION - UNLOCK_ROLE_MOONSHINER_PROGRESSION_EXPANSION_BAND locked");
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-567253426))
	{
		MISC::SET_BIT(&(Local_455[iLocal_55 /*5*/].f_3), 2);
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] INIT_UGC_END_FLOW_MOONSHINE_TRANSITION - UNLOCK_ROLE_MOONSHINER_PROGRESSION_EXPANSION_BAR locked");
	}
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][END_FLOW][TRANSITION] INIT_UGC_END_FLOW_MOONSHINE_TRANSITION Valid Variation: ", func_42(Local_455[iLocal_55 /*5*/].f_3));
	iVar0 = func_46(func_45(), 1);
	if (iVar0 == -1)
	{
		Local_455[iLocal_55 /*5*/].f_3 = 0;
	}
	Local_455[iLocal_55 /*5*/].f_4 = iVar0;
	DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[UGC][END_FLOW][TRANSITION] INIT_UGC_END_FLOW_MOONSHINE_TRANSITION Valid Hub Location: ", func_47(iVar0, 0), " Int Value: ", Local_455[iLocal_55 /*5*/].f_4);
	return true;
}

void func_23()
{
	var uVar0;
	int iVar5;

	if (!func_27())
	{
		return;
	}
	if (!func_48())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_UGC_END_FLOW_MOONSHINE_TRANSITION Cannot intialize anything because there is no valid hut.");
		return;
	}
	if (Local_61.f_393 == NETWORK::PARTICIPANT_ID())
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_UGC_END_FLOW_MOONSHINE_TRANSITION - Local Player is Posse Leader: ", PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(Local_61.f_393)));
		uVar0 = 4;
		func_49(&uVar0);
		func_50(&uVar0);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] PROCESS_UGC_END_FLOW_MOONSHINE_TRANSITION - Local Player will use Posse Leader location: int ", Local_61.f_392);
	if (Global_3407872.f_226 == 2)
	{
		func_51(-1, &(Global_3407872.f_227[0 /*2269*/].f_2057[0 /*26*/].f_17), &(Global_3407872.f_227[0 /*2269*/].f_1622[0 /*3*/]), &(Global_3407872.f_227[0 /*2269*/].f_2057[0 /*26*/].f_16), &(Local_61.f_392));
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			func_51(iVar5, &(Global_3407872.f_227[0 /*2269*/].f_2057[iVar5 /*26*/].f_17), &(Global_3407872.f_227[0 /*2269*/].f_1622[iVar5 /*3*/]), &(Global_3407872.f_227[0 /*2269*/].f_2057[iVar5 /*26*/].f_16), &(Local_61.f_392));
			iVar5++;
		}
	}
}

bool func_24()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_27())
	{
		return true;
	}
	if (!func_48())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] IS_UGC_END_FLOW_MOONSHINE_TRANSITION_LOADED No valid active location.");
		return true;
	}
	bVar0 = func_52(255);
	bVar1 = ENTITY::IS_ENTITY_DEAD(Global_33);
	bVar2 = Global_1277599.f_29.f_3 == 2;
	if ((!bVar0 && !bVar1) && bVar2)
	{
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(43680, 227, 7, "[UGC][END_FLOW][TRANSITION] IS_UGC_END_FLOW_MOONSHINE_TRANSITION_LOADED - Waiting for respawn to finish Respawn ", MISC::_0xF216F74101968DB0(bVar0), " Dead ", MISC::_0xF216F74101968DB0(bVar1), " Moonshine ", MISC::_0xF216F74101968DB0(bVar2));
	return false;
}

bool func_25()
{
	func_53();
	switch (Global_3407872.f_225)
	{
		case 1:
			return func_54();
		default:
			break;
	}
	return true;
	return false;
}

char* func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_STATE_VALIDATION";
		case 1:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_STATE_PRERUN";
		case 2:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_STATE_INITIALIZING";
		case 3:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_STATE_INITIALIZED";
		case 4:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_STATE_RUNNING";
		case 5:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_STATE_COMPLETE";
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

bool func_27()
{
	return (Global_3407872.f_226 == 3 || Global_3407872.f_226 == 2);
}

void func_28(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_29(int* iParam0, var uParam1)
{
	MISC::CLEAR_BIT(&(Global_1959011.f_1), 5);
	Global_1048584 = 0;
	STREAMING::CLEAR_FOCUS();
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] Cutscene cleaned up fully.");
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_55(iParam0))
		{
			NETWORK::_0x007FF852DCF49DA4(256);
			NETWORK::_0x4B05B97BA46F419D(1);
			NETWORK::_0x6C7E04E9DE451789();
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
	{
		CAM::DESTROY_CAM(iParam0->f_1478, false);
	}
	if (func_56(&(iParam0->f_1484)))
	{
		func_57(&(iParam0->f_1484));
	}
	func_58(&(iParam0->f_1484));
	func_59(iParam0, uParam1);
}

void func_30()
{
	struct<228> Var0;

	DEBUG::_0xEF256AE8A5A27966(32, 59, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CLEAR - Clearing globals");
	Var0 = 32;
	Var0.f_227 = 1;
	Var0.f_227.f_1.f_25 = 4;
	Var0.f_227.f_1.f_25.f_1.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_346 = 20;
	Var0.f_227.f_1.f_346.f_1 = -1;
	Var0.f_227.f_1.f_346.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_927 = 20;
	Var0.f_227.f_1.f_927.f_1 = -1;
	Var0.f_227.f_1.f_927.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228 = 10;
	Var0.f_227.f_1.f_1228.f_1 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379 = 10;
	Var0.f_227.f_1.f_1379.f_1 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1530 = 1;
	Var0.f_227.f_1.f_1530.f_1 = -1;
	Var0.f_227.f_1.f_1530.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1530.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546 = 5;
	Var0.f_227.f_1.f_1546.f_1 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1622 = 8;
	Var0.f_227.f_1.f_1648 = 2;
	Var0.f_227.f_1.f_1652 = 4;
	Var0.f_227.f_1.f_1669 = 20;
	Var0.f_227.f_1.f_1830 = 20;
	Var0.f_227.f_1.f_1911 = 10;
	Var0.f_227.f_1.f_1952 = 1;
	Var0.f_227.f_1.f_1957 = 10;
	Var0.f_227.f_1.f_1998 = 5;
	Var0.f_227.f_1.f_2019 = 3;
	Var0.f_227.f_1.f_2044 = 3;
	Var0.f_227.f_1.f_2057 = 8;
	Var0.f_227.f_1.f_2057.f_1.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	MISC::_COPY_MEMORY(&Global_3407872, &Var0, 2499);
}

void func_31()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NETSCRIPT_NOT_ACTIVE";
		case 1:
			return "NETSCRIPT_JOINING";
		case 2:
			return "NETSCRIPT_PLAYING";
		case 3:
			return "NETSCRIPT_TERMINATED";
		case 4:
			return "NETSCRIPT_FAILED_SESSION_FULL";
		case 5:
			return "NETSCRIPT_FAILED_NO_JOIN_IN_PROGRESS";
		case 6:
			return "NETSCRIPT_FAILED_NO_JOIN_IN_PROGRESS";
		default:
			break;
	}
	return "";
}

int func_33()
{
	return Global_1572887.f_13;
}

bool func_34()
{
	return Global_1051590.f_8;
}

void func_35(var uParam0)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] RESET_MC_CUTSCENE_SERVER_DATA called!");
	UNK_0x355E72323AEE83CC(227, 6);
	func_60(uParam0);
}

void func_36(var uParam0)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] RESET_MC_CUTSCENE_PLAYER_DATA called");
	UNK_0x355E72323AEE83CC(227, 6);
	func_61(uParam0);
}

void func_37(int iParam0)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] RESET_MC_CUTSCENE_LOCAL_DATA called");
	UNK_0x355E72323AEE83CC(227, 6);
	func_62(iParam0);
	func_63(&(iParam0->f_1777));
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_39(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

char* func_40(int iParam0, int iParam1)
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

char* func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_EVENT_TICKER_MESSAGE";
		case 1:
			return "SCRIPT_EVENT_INVITE_TO_JOIN";
		case 2:
			return "SCRIPT_EVENT_INVITE_TO_JOIN_MP_MISSION";
		case 3:
			return "SCRIPT_EVENT_PLAYER_STATUS";
		case 4:
			return "SCRIPT_EVENT_AMBIENT_CONTENT_EVALUATOR";
		case 5:
			return "SCRIPT_EVENT_ACE_LAUNCHER";
		case 6:
			return "SCRIPT_EVENT_IMPROMPTU_RACE_MANAGER";
		case 7:
			return "SCRIPT_EVENT_TRAIN_ROBBERY_MANAGER";
		case 8:
			return "SCRIPT_EVENT_ANIMAL_ATTACK_MANAGER";
		case 9:
			return "SCRIPT_EVENT_GUN_FOR_HIRE_MANAGER";
		case 10:
			return "SCRIPT_EVENT_CAMP";
		case 11:
			return "SCRIPT_EVENT_CAMP_DOG";
		case 12:
			return "SCRIPT_EVENT_CAMP_DEFENSE";
		case 13:
			return "SCRIPT_EVENT_MOONSHINE";
		case 14:
			return "SCRIPT_EVENT_MOONSHINE_BAND";
		case 15:
			return "SCRIPT_EVENT_MOONSHINE_BAR";
		case 16:
			return "SCRIPT_EVENT_MOONSHINE_SCENARIO_TAKEN";
		case 17:
			return "SCRIPT_EVENT_MOONSHINE_SCENARIO_FREED";
		case 18:
			return "SCRIPT_EVENT_NET_ENTITY_BRAIN";
		case 19:
			return "SCRIPT_EVENT_GLOBAL_TRAIN";
		case 20:
			return "SCRIPT_EVENT_TRAIN_MANAGER";
		case 21:
			return "SCRIPT_EVENT_TEAM_ASSIGNMENT";
		case 22:
			return "SCRIPT_EVENT_NET_GANG";
		case 23:
			return "SCRIPT_EVENT_PERSISTENT_POSSE";
		case 24:
			return "SCRIPT_EVENT_FM_ACTIVITY_MANAGER";
		case 25:
			return "SCRIPT_EVENT_FM_ACTIVITY";
		case 26:
			return "SCRIPT_EVENT_FME_MANAGER";
		case 27:
			return "SCRIPT_EVENT_TRAIN_JOB";
		case 28:
			return "SCRIPT_EVENT_PARLEY";
		case 29:
			return "SCRIPT_EVENT_POSSE_VERSUS";
		case 30:
			return "SCRIPT_EVENT_NET_GANGFEUDS";
		case 31:
			return "SCRIPT_EVENT_NET_SHOW_MANAGEMENT";
		case 32:
			return "SCRIPT_EVENT_NET_SHOW_BITS";
		case 33:
			return "SCRIPT_EVENT_ABANDONED_LOOT_MANAGER";
		case 34:
			return "SCRIPT_EVENT_NET_PLAYER_BOUNTY";
		case 35:
			return "SCRIPT_EVENT_NOTORIETY_PRESS_CHARGES";
		case 36:
			return "SCRIPT_EVENT_NOTORIETY_FORCE_PASSIVE";
		case 37:
			return "SCRIPT_EVENT_NOTORIETY_FORCE_NOT_PASSIVE_HORSE";
		case 38:
			return "SCRIPT_EVENT_NOTORIETY_PASSIVE_REQUEST";
		case 39:
			return "SCRIPT_EVENT_COLLECTIBLE_DIG_START";
		case 40:
			return "SCRIPT_EVENT_COLLECTIBLE_DIG_COMPLETE";
		case 41:
			return "SCRIPT_EVENT_COLLECTIBLE_GIVE_ITEM_TO_POSSE_MEMBERS";
		case 42:
			return "SCRIPT_EVENT_COLLECTIBLE_BIRD_NEST_SHOT";
		case 43:
			return "SCRIPT_EVENT_COLLECTIBLE_BIRD_NEST_DESTROYED";
		case 44:
			return "SCRIPT_EVENT_NET_MINIGAME_MANAGER";
		case 45:
			return "SCRIPT_EVENT_NET_EMOTE";
		case 46:
			return "SCRIPT_EVENT_NET_STABLE";
		case 47:
			return "SCRIPT_EVENT_NET_STABLE_MOUNT";
		case 48:
			return "SCRIPT_EVENT_NET_ROLLING_PLAYLIST";
		case 49:
			return "SCRIPT_EVENT_NET_VS_MISSION_INTRO";
		case 50:
			return "SCRIPT_EVENT_NET_SHOPS";
		case 51:
			return "SCRIPT_EVENT_NET_SESSION_REQUEST";
		case 52:
			return "SCRIPT_EVENT_FM_COACH_HOLDUP";
		case 53:
			return "SCRIPT_EVENT_NET_ASSASSINATION";
		case 54:
			return "SCRIPT_EVENT_FME_ROYAL_RUMBLE";
		case 55:
			return "SCRIPT_EVENT_FME_WRECKAGE";
		case 56:
			return "SCRIPT_EVENT_FME_ANIMAL_TAGGING";
		case 57:
			return "SCRIPT_EVENT_FME_WILDLIFE_PHOTOGRAPHER";
		case 58:
			return "SCRIPT_EVENT_FME_PROTECT_LEGENDARY_ANIMAL";
		case 59:
			return "SCRIPT_EVENT_FME_BASE";
		case 60:
			return "SCRIPT_EVENT_FME_CHALLENGES";
		case 61:
			return "SCRIPT_EVENT_FM_DEAD_DROP";
		case 62:
			return "SCRIPT_EVENT_OHD_IN_MP_CUTSCENE";
		case 63:
			return "SCRIPT_EVENT_OHD_IS_WANTED";
		case 64:
			return "SCRIPT_EVENT_OHD_IS_CUFFED";
		case 65:
			return "SCRIPT_EVENT_OHD_IS_BEING_PROCESSED";
		case 66:
			return "SCRIPT_EVENT_OHD_IN_CUSTODY";
		case 67:
			return "SCRIPT_EVENT_OHD_IS_BEING_CUFFED";
		case 68:
			return "SCRIPT_EVENT_OHD_IS_BEING_UNCUFFED";
		case 69:
			return "SCRIPT_EVENT_OHD_TALKING";
		case 70:
			return "SCRIPT_EVENT_OHD_INVISIBLE";
		case 71:
			return "SCRIPT_EVENT_OHD_TELEPORT";
		case 72:
			return "SCRIPT_EVENT_OHD_PARTNER";
		case 73:
			return "SCRIPT_EVENT_OHD_IS_VOTING";
		case 74:
			return "SCRIPT_EVENT_OHD_IS_PLAYER_SPECTATING";
		case 75:
			return "SCRIPT_EVENT_OHD_IN_MP_CUTSCENE_RESET";
		case 76:
			return "SCRIPT_EVENT_OHD_IS_WANTED_RESET";
		case 77:
			return "SCRIPT_EVENT_OHD_IS_CUFFED_RESET";
		case 78:
			return "SCRIPT_EVENT_OHD_IS_BEING_PROCESSED_RESET";
		case 79:
			return "SCRIPT_EVENT_OHD_IN_CUSTODY_RESET";
		case 80:
			return "SCRIPT_EVENT_OHD_IS_BEING_CUFFED_RESET";
		case 81:
			return "SCRIPT_EVENT_OHD_IS_BEING_UNCUFFED_RESET";
		case 82:
			return "SCRIPT_EVENT_OHD_TALKING_RESET";
		case 83:
			return "SCRIPT_EVENT_OHD_INVISIBLE_RESET";
		case 84:
			return "SCRIPT_EVENT_OHD_TELEPORT_RESET";
		case 85:
			return "SCRIPT_EVENT_OHD_PARTNER_RESET";
		case 86:
			return "SCRIPT_EVENT_OHD_IS_VOTING_RESET";
		case 87:
			return "SCRIPT_EVENT_OHD_IS_PLAYER_SPECTATING_RESET";
		case 88:
			return "SCRIPT_EVENT_MGLIB_NET_REGISTRATION";
		case 89:
			return "SCRIPT_EVENT_MGLIB_NET_REPLY";
		case 90:
			return "SCRIPT_EVENT_MGLIB_PED_UPDATE";
		case 91:
			return "SCRIPT_EVENT_MGLIB_OBJECT_UPDATE";
		case 92:
			return "SCRIPT_EVENT_MGLIB_FULL_UPDATE";
		case 93:
			return "SCRIPT_EVENT_MC_OBJECTIVE_MID_POINT";
		case 94:
			return "SCRIPT_EVENT_MC_PED_GIVEN_GUNONRULE";
		case 95:
			return "SCRIPT_EVENT_MC_TRAIN_PLAYER_CONTROL_SPEED_CHANGE";
		case 96:
			return "SCRIPT_EVENT_MC_CREATE_TRAIN_DESTROYED_EXPLOSIONS";
		case 97:
			return "SCRIPT_EVENT_MC_TRAIN_PLAYER_CONTROL_BLOW_WHISTLE";
		case 98:
			return "SCRIPT_EVENT_MC_TRAIN_DAMAGE_EVENT";
		case 99:
			return "SCRIPT_EVENT_MC_OBJECTIVE_COMPLETE";
		case 100:
			return "SCRIPT_EVENT_MC_OBJECTIVE_COMPLETE_HOST";
		case 101:
			return "SCRIPT_EVENT_MC_PLAYER_SCORE";
		case 102:
			return "SCRIPT_EVENT_MC_DIALOGUE_LOOK";
		case 103:
			return "SCRIPT_EVENT_MC_DEBUG_OBJECTIVE_SKIP_FOR_TEAM";
		case 104:
			return "SCRIPT_EVENT_MC_DEBUG_SET_PED_INVINCIBILITY";
		case 105:
			return "SCRIPT_EVENT_MC_DEBUG_UPDATE_TO_ALERT_RECORD";
		case 106:
			return "SCRIPT_EVENT_MC_TEAM_CHANGE_REQUEST";
		case 107:
			return "SCRIPT_EVENT_MC_UPDATE_CUTSCENE_WIDGETS";
		case 108:
			return "SCRIPT_EVENT_MC_MISSION_RESTART";
		case 109:
			return "SCRIPT_EVENT_MC_ACTOR_ALERTED";
		case 110:
			return "SCRIPT_EVENT_MC_TEAM_DEBUG_SKIP_CUTSCENE";
		case 111:
			return "SCRIPT_EVENT_MC_OVERRIDE_LIVES_FAIL";
		case 112:
			return "SCRIPT_EVENT_MC_REMOVE_ACTOR_FROM_GROUP";
		case 113:
			return "SCRIPT_EVENT_MC_VEHICLE_DRAFT_ANIMALS_SET_UP";
		case 114:
			return "SCRIPT_EVENT_MC_TASK_OWNER_PROCESSED";
		case 115:
			return "SCRIPT_EVENT_MC_PED_CHANGED_REL_GROUP";
		case 116:
			return "SCRIPT_EVENT_MC_ANIMAL_CHANGED_REL_GROUP";
		case 117:
			return "SCRIPT_EVENT_MC_PED_SET_INTO_INVESTIGATION";
		case 118:
			return "SCRIPT_EVENT_MC_START_STREAMING_END_MOCAP";
		case 119:
			return "SCRIPT_EVENT_MC_SWAP_DOOR_FOR_DAMAGED_VERSION";
		case 120:
			return "SCRIPT_EVENT_MC_TEAM_HAS_FINISHED_CUSTOM_RULE";
		case 121:
			return "SCRIPT_EVENT_MC_ANIMAL_CANCEL_TASKS";
		case 122:
			return "SCRIPT_EVENT_MC_TNT_REQUEST_MINIGAME_LOCK";
		case 123:
			return "SCRIPT_EVENT_MC_MINIGAME_ROPE_BROKEN";
		case 124:
			return "SCRIPT_EVENT_MC_PLANT_DYNAMITE_REQUEST_MINIGAME_LOCK";
		case 125:
			return "SCRIPT_EVENT_MC_PLANT_DYNAMITE_REQUEST_MINIGAME_UNLOCK";
		case 126:
			return "SCRIPT_EVENT_MC_INTERACT_WITH_REQUEST_MINIGAME_LOCK";
		case 127:
			return "SCRIPT_EVENT_MC_SAFE_CRACK_REQUEST_MINIGAME_LOCK";
		case 128:
			return "SCRIPT_EVENT_MC_SAFE_CRACK_REMOVE_MINIGAME_LOCK";
		case 129:
			return "SCRIPT_EVENT_MC_DECISION_MINIGAME_OPTION_SELECTED";
		case 130:
			return "SCRIPT_EVENT_MC_DEBUG_KILL_ENTITY";
		case 131:
			return "SCRIPT_EVENT_MC_TRAIN_UNDRIVABLE";
		case 132:
			return "SCRIPT_EVENT_MC_TRAIN_CRUISE_SPEED_SET";
		case 133:
			return "SCRIPT_EVENT_MC_TRAIN_WHISTLE_START";
		case 134:
			return "SCRIPT_EVENT_MC_TRAIN_WHISTLE_DONE";
		case 135:
			return "SCRIPT_EVENT_MC_DAMAGE_MOONSHINE";
		case 136:
			return "SCRIPT_EVENT_MC_NEW_FOCUS_TEAM";
		case 137:
			return "SCRIPT_EVENT_MC_PLAYER_FAIL";
		case 138:
			return "SCRIPT_EVENT_MC_KILL_FOCUS_TEAM";
		case 139:
			return "SCRIPT_EVENT_MC_INCREMENT_CONTROL_KILLS";
		case 140:
			return "SCRIPT_EVENT_MC_PLAYER_BRANCH_REQUEST";
		case 141:
			return "SCRIPT_EVENT_MC_GET_AND_DELIVER_ENTITY_HELD";
		case 142:
			return "SCRIPT_EVENT_MC_GET_AND_DELIVER_ENTITY_DROPPED";
		case 143:
			return "SCRIPT_EVENT_MC_VEHICLE_DISABLE_DRIVING";
		case 144:
			return "SCRIPT_EVENT_MC_TEAM_EARLY_END_BAIL";
		case 145:
			return "SCRIPT_EVENT_MC_START_LOOP_PTFX";
		case 146:
			return "SCRIPT_EVENT_MC_STOP_LOOP_PTFX";
		case 147:
			return "SCRIPT_EVENT_MC_DELETE_NET_ID";
		case 148:
			return "SCRIPT_EVENT_MC_CLEANUP_NET_ID";
		case 149:
			return "SCRIPT_EVENT_MC_POSSE_LEADER_TIEBREAK";
		case 150:
			return "SCRIPT_EVENT_MC_OBJECT_FORCE_WARPED_TO_SPAWN";
		case 151:
			return "SCRIPT_EVENT_MC_OBJECT_NEEDS_WARPING_TO_SPAWN";
		case 152:
			return "SCRIPT_EVENT_MC_OBJECT_MINIGAME_PASSED";
		case 153:
			return "SCRIPT_EVENT_MC_HOST_DELETE_FMMC_PED";
		case 154:
			return "SCRIPT_EVENT_MC_PED_DROWNED";
		case 155:
			return "SCRIPT_EVENT_DEATHMATCH_MARKED_MAN_UPDATE";
		case 156:
			return "SCRIPT_EVENT_DEATHMATCH_PITP_KILL";
		case 157:
			return "SCRIPT_EVENT_DEATHMATCH_JIP_EVENT";
		case 158:
			return "SCRIPT_EVENT_DEATHMATCH_FIRST_KILL";
		case 159:
			return "SCRIPT_EVENT_DEATHMATCH_LAST_KILL";
		case 160:
			return "SCRIPT_EVENT_DEATHMATCH_OBJECT_MINIGAME_PASSED";
		case 161:
			return "SCRIPT_EVENT_RC_CHECKPOINT_HIT";
		case 162:
			return "SCRIPT_EVENT_UGC_GAMEPLAY_CHANGE";
		case 163:
			return "SCRIPT_EVENT_UGC_UPDATE_PLAYER_LOCAL_HUD_SETTINGS";
		case 164:
			return "SCRIPT_EVENT_UGC_TRIGGER_FIRED";
		case 165:
			return "SCRIPT_EVENT_UGC_TRIGGER_FRIENDLY_FIRED";
		case 166:
			return "SCRIPT_EVENT_UGC_TRIGGER_COMPLETE";
		case 167:
			return "SCRIPT_EVENT_UGC_JIP_PLAYER_JOIN";
		case 168:
			return "SCRIPT_EVENT_UGC_JIP_SPECTATOR_JOIN";
		case 169:
			return "SCRIPT_EVENT_UGC_CONSTRIG_BINDING_RESET";
		case 170:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_HOST";
		case 171:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_SESSION_HOST";
		case 172:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_PROCESSED_SESSION_HOST";
		case 173:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_REDIRECT_OWNER";
		case 174:
			return "SCRIPT_EVENT_UGC_CONSTRIG_CONSEQUENCE_PROCESSED_OWNER";
		case 175:
			return "SCRIPT_EVENT_UGC_CONSTRIG_BINDING_TRIGGERED";
		case 176:
			return "SCRIPT_EVENT_FETCH_MANAGER";
		case 177:
			return "SCRIPT_EVENT_FETCH";
		case 178:
			return "SCRIPT_EVENT_FETCH_CUTSCENE";
		case 179:
			return "SCRIPT_EVENT_FETCH_DIALOGUE";
		case 180:
			return "SCRIPT_EVENT_FETCH_VOLUME";
		case 181:
			return "SCRIPT_EVENT_BEAT_MANAGER";
		case 182:
			return "SCRIPT_EVENT_SCAN_MANAGER";
		case 183:
			return "SCRIPT_EVENT_NET_BEAT";
		case 184:
			return "SCRIPT_EVENT_NET_HUD";
		case 185:
			return "SCRIPT_EVENT_AMBIENT_DM_MANAGER";
		case 186:
			return "SCRIPT_EVENT_PERSONA_HONOR";
		case 187:
			return "SCRIPT_EVENT_PERSONA_PEDSHOTS";
		case 188:
			return "SCRIPT_EVENT_STORY_MISSION_INTRO_CORE_DIALOGUE";
		case 189:
			return "SCRIPT_EVENT_STORY_MISSION_INTRO_WARP_TO_MISSION";
		case 190:
			return "SCRIPT_EVENT_LOBBY_TOGGLE_MATCHMAKING";
		case 191:
			return "SCRIPT_EVENT_LOBBY_REQUESTED_PLAYERS_HORSE_DATA";
		case 192:
			return "SCRIPT_EVENT_LOBBY_RECEIVED_PLAYERS_HORSE_DATA";
		case 193:
			return "SCRIPT_EVENT_BOUNTY_TARGET";
		case 194:
			return "SCRIPT_EVENT_UGC_MISSION_REQUEST";
		case 195:
			return "SCRIPT_EVENT_LA_PHEROMONE_VIAL";
		case 196:
			return "SCRIPT_EVENT_TURN_IN";
		case 197:
			return "SCRIPT_EVENT_FREE_FROM_HOGTIE";
		case 198:
			return "SCRIPT_EVENT_PLAYER_CAMP";
		case 199:
			return "SCRIPT_EVENT_BG_SCRIPT";
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

char* func_42(int iParam0)
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

int func_43()
{
	var uVar0;
	bool bVar33;
	bool bVar34;
	int iVar35;
	int iVar36;

	uVar0 = 32;
	bVar33 = func_66(&(Local_61.f_2[0 /*33*/]), 0, &Local_616, &uVar0, &(Global_3407872.f_227[0 /*2269*/]), &(Local_61.f_61), &Local_1001, 14493, 14520);
	while (iVar35 < 6)
	{
		iVar36 = Local_61.f_1;
		switch (Local_61.f_1)
		{
			case 0:
				Local_61.f_388 = { func_67() };
				Local_61.f_388 = 1;
				Local_61.f_388.f_1 = 0;
				iVar36 = 1;
				break;
			case 1:
				if (!func_68(&(Local_61.f_388.f_2), &bVar34))
				{
					return 0;
				}
				if (bVar34)
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 5, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE - bSelectVariationFailed! There is no safe location for the outro!");
					iVar36 = 5;
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE - iVariation: ", Local_61.f_388.f_2);
					iVar36 = 2;
				}
				break;
			case 2:
				if (func_69(&(Local_61.f_2[0 /*33*/]), 0, Local_61.f_388, 2, 0))
				{
					iVar36 = 3;
				}
				break;
			case 3:
				if (func_70(1))
				{
					if (func_69(&(Local_61.f_2[0 /*33*/]), 0, Local_61.f_388, 3, 0))
					{
						iVar36 = 4;
					}
				}
				break;
			case 4:
				if (bVar33)
				{
					iVar36 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar36 != Local_61.f_1)
		{
			DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_CUTSCENE - eCutsceneSubstate: ", func_71(Local_61.f_1, 0), " -> ", func_71(iVar36, 0));
			Local_61.f_1 = iVar36;
			iVar35++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_44()
{
	return (func_72() && Global_1277387 == 1);
}

int func_45()
{
	return Global_1277387.f_200;
}

int func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1277758[iParam0 /*87*/].f_5.f_12;
}

char* func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NMOON_PROPERTY_INVALID";
		case 0:
			return "NMOON_PROPERTY_BAYOU";
		case 1:
			return "NMOON_PROPERTY_GRIZZLIES";
		case 2:
			return "NMOON_PROPERTY_HENNIGANS";
		case 3:
			return "NMOON_PROPERTY_HEARTLANDS";
		case 4:
			return "NMOON_PROPERTY_TALL_TREES";
		case 5:
			return "NUM_MOONSHINE_PROPERTIES";
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

bool func_48()
{
	return Local_61.f_392 != -1;
}

void func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 <= iVar1)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] GET_PLAYER_INDEX_ACTIVE_IN_ARRAY - Max array of players completed.");
		}
		else
		{
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar2 /*7*/])))
			{
			}
			else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar2 /*7*/])))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar2 /*7*/]));
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][END_FLOW][TRANSITION] GET_PLAYER_INDEX_ACTIVE_IN_ARRAY - Player: ", PLAYER::GET_PLAYER_NAME(iVar3));
					(*uParam0)[iVar1] = iVar3;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
}

void func_50(var uParam0)
{
	int iVar0;
	struct<20> Var1;
	var uVar27;
	int iVar28;

	if (Global_1277387.f_1 == 4)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 225, "NET_MOONSHINE_COOP__START_OUTRO_ENTRANCE_TO_SHACK - Coop outro already requested...");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 225, "NET_MOONSHINE_COOP__START_OUTRO_ENTRANCE_TO_SHACK - Starting outro entrance now");
	func_73(4);
	iVar0 = *uParam0;
	if (iVar0 > 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 225, "NET_MOONSHINE_COOP__START_OUTRO_ENTRANCE_TO_SHACK - More members than expected, count: ", iVar0);
		return;
	}
	func_74(2, 0, 1);
	Var1.f_5 = 255;
	Var1.f_7 = -1;
	Var1.f_9 = 7;
	Var1.f_19 = -1;
	Var1.f_19.f_1 = -1;
	Var1.f_5 = Global_1275959.f_154[Global_1275959];
	Var1.f_4 = 2;
	iVar28 = 0;
	while (iVar28 <= (iVar0 - 1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((*uParam0)[iVar28]) && (*uParam0)[iVar28] != Global_1275959.f_154[Global_1275959])
		{
			DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_COOP__START_OUTRO_ENTRANCE_TO_SHACK - Priming coop invite to player: ", PLAYER::GET_PLAYER_NAME((*uParam0)[iVar28]));
			SCRIPTS::_0x31010318BA9897AC(&uVar27, (*uParam0)[iVar28]);
		}
		iVar28++;
	}
	func_75(&Var1, uVar27);
	func_76(0);
}

void func_51(int iParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 3:
			StringCopy(sParam1, "pl_Band", 32);
			break;
		case 2:
			StringCopy(sParam1, "pl_Bar", 32);
			break;
		case 1:
			StringCopy(sParam1, "pl_Cook", 32);
			break;
		case 0:
			StringCopy(sParam1, "pl_Maggie", 32);
			break;
	}
	switch (*uParam4)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
				case 3:
					*sParam2 = { 1779.365f, -802.881f, 187.965f };
					*uParam3 = -136.6f;
					break;
				case 1:
					*sParam2 = { 1789.989f, -818.1904f, 188.401f };
					*uParam3 = 28.4f;
					break;
				case 0:
					*sParam2 = { 1789.589f, -812.6585f, 191.5976f };
					*uParam3 = -176.6f;
					break;
				case -1:
					*sParam2 = { 1787.426f, -809.093f, 190.695f };
					*uParam3 = -108.9f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
				case 3:
					*sParam2 = { -1086.47f, 694.842f, 79.6002f };
					*uParam3 = 23.5f;
					break;
				case 1:
					*sParam2 = { -1091.248f, 712.8531f, 80.0358f };
					*uParam3 = -171.5f;
					break;
				case 0:
					*sParam2 = { -1092.755f, 707.5154f, 83.2324f };
					*uParam3 = -16.5f;
					break;
				case -1:
					*sParam2 = { -1091.934f, 703.427f, 82.33f };
					*uParam3 = 51.2f;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
				case 3:
					*sParam2 = { -2785.119f, -3060.223f, -13.3343f };
					*uParam3 = -27.7f;
					break;
				case 1:
					*sParam2 = { -2774.076f, -3045.214f, -12.8987f };
					*uParam3 = 137.3f;
					break;
				case 0:
					*sParam2 = { -2779.18f, -3047.384f, -9.7021f };
					*uParam3 = -67.7f;
					break;
				case -1:
					*sParam2 = { -2781.852f, -3050.585f, -10.605f };
					*uParam3 = 0f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
				case 3:
					*sParam2 = { 1615.008f, 837.4983f, 120.3081f };
					*uParam3 = -113.2f;
					break;
				case 1:
					*sParam2 = { 1630.838f, 827.6671f, 120.7437f };
					*uParam3 = 51.8f;
					break;
				case 0:
					*sParam2 = { 1628.273f, 832.5851f, 123.9403f };
					*uParam3 = -153.2f;
					break;
				case -1:
					*sParam2 = { 1624.872f, 834.998f, 123.038f };
					*uParam3 = -85.5f;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
				case 3:
					*sParam2 = { -1851.025f, -1738.521f, 84.6213f };
					*uParam3 = 60f;
					break;
				case 1:
					*sParam2 = { -1865.579f, -1726.884f, 85.0569f };
					*uParam3 = -135f;
					break;
				case 0:
					*sParam2 = { -1863.615f, -1732.071f, 88.2535f };
					*uParam3 = 20f;
					break;
				case -1:
					*sParam2 = { -1860.524f, -1734.87f, 87.351f };
					*uParam3 = 87.7f;
					break;
			}
			break;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "MOON END SHACK DATA DUMP");
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "playList = ", sParam1);
	DEBUG::_0xEF256AE8A5A27966(224, 227, 7, "vCoord = ", sParam2);
	DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "fHeading = ", *uParam3);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "iHutVar = ", *uParam4);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "eRoom = ", func_77(iParam0, 0));
}

bool func_52(int iParam0)
{
	return func_78(1, iParam0);
}

void func_53()
{
	char* sVar0;

	if (iLocal_57 == 4)
	{
		return;
	}
	sVar0 = func_79();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_80(4);
		return;
	}
	switch (iLocal_57)
	{
		case 0:
			func_80(1);
			break;
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT(sVar0);
			func_80(2);
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_80(3);
			}
			break;
		case 3:
			AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
			func_80(4);
			break;
	}
}

int func_54()
{
	bool bVar0;
	var uVar1;
	int iVar34;
	int iVar35;

	func_81(&(Local_2218.f_1484), 524288, 1);
	uVar1 = 32;
	if (Local_455[iLocal_55 /*5*/].f_2 >= 1)
	{
		bVar0 = func_83(&(Local_61.f_2), 1, &Local_2218, &Local_616, iLocal_55, iLocal_55, &uVar1, &(Local_61.f_61), &Local_1001, &(Global_3407872.f_227), 16459, 14520, 0);
	}
	while (iVar34 < 6)
	{
		iVar35 = Local_455[iLocal_55 /*5*/].f_2;
		switch (Local_455[iLocal_55 /*5*/].f_2)
		{
			case 0:
				if (Local_61.f_1 > 4)
				{
					DEBUG::_0x9A6C65DDDBEC9C52(40, 59, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_CLIENT_RUNNING_CUTSCENE - server moved on eCutsceneSubstate: ", func_71(Local_61.f_1, 0));
					iVar35 = 5;
				}
				else if (Local_61.f_388.f_2 >= 0 && Local_61.f_388.f_2 < 8)
				{
					if (func_84())
					{
						func_85(1);
						func_86(1);
						func_87(1);
						func_88(1);
						func_89(Global_3407872.f_227[0 /*2269*/].f_1622[Local_61.f_388.f_2 /*3*/], Global_3407872.f_227[0 /*2269*/].f_2057[Local_61.f_388.f_2 /*26*/].f_16, 1);
						DEBUG::_0xEF256AE8A5A27966(28192, 59, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_CLIENT_RUNNING_CUTSCENE - Forcing Respawn Variation ", Local_61.f_388.f_2, " Coord: ", &(Global_3407872.f_227[0 /*2269*/].f_1622[Local_61.f_388.f_2 /*3*/]), " Heading: ", Global_3407872.f_227[0 /*2269*/].f_2057[Local_61.f_388.f_2 /*26*/].f_16);
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(160, 59, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_CLIENT_RUNNING_CUTSCENE - No need to force respawn, Current Respawn State ", func_91(func_90(255), 0));
					}
					func_15(&uLocal_58, 1, 0);
					iVar35 = 3;
				}
				break;
			case 3:
				if (func_90(255) != 1 || (func_39(&uLocal_58, 1, 0) > 100 && func_90(255) == 1))
				{
					func_92(&(Global_3407872.f_2498), 4);
					iVar35 = 4;
				}
				break;
			case 4:
				if (func_90(255) == 1)
				{
					iVar35 = 1;
				}
				break;
			case 1:
				if ((func_38(Global_3407872.f_2498, 1) && func_93(&(Local_616[iLocal_55 /*12*/]))) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_2218.f_1484.f_208))
				{
					func_92(&(Local_455[iLocal_55 /*5*/].f_1), 1);
					iVar35 = 2;
				}
				break;
			case 2:
				if (func_94(&(Local_616[iLocal_55 /*12*/])))
				{
					if (!func_38(uLocal_56, 1))
					{
						func_95(0, 0);
						func_92(&uLocal_56, 1);
						DEBUG::_0xEF256AE8A5A27966(32, 59, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_CLIENT_RUNNING_CUTSCENE - Players horse spawned nearby");
					}
				}
				if (bVar0)
				{
					iVar35 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar35 != Local_455[iLocal_55 /*5*/].f_2)
		{
			DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_CLIENT_RUNNING_CUTSCENE - sClientBD.eCutsceneSubstate: ", func_96(Local_455[iLocal_55 /*5*/].f_2, 0), " -> ", func_96(iVar35, 0));
			Local_455[iLocal_55 /*5*/].f_2 = iVar35;
			iVar34++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_55(int* iParam0)
{
	return !func_97(*iParam0, 12);
}

bool func_56(var uParam0)
{
	return ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208);
}

void func_57(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
}

void func_58(bool bParam0)
{
	struct<293> Var0;

	Var0 = 1;
	Var0.f_17 = 14;
	Var0.f_186 = 1097859072;
	Var0.f_187 = 1101004800;
	Var0.f_225 = 4;
	Var0.f_292 = 1000;
	MISC::_COPY_MEMORY(bParam0, &Var0, 293);
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_RESET_DATA");
}

void func_59(int* iParam0, var uParam1)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] RESET_MC_CUTSCENE_CLIENT_DATA called");
	UNK_0x355E72323AEE83CC(227, 6);
	func_37(iParam0);
	func_36(uParam1);
}

void func_60(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_98(&(uParam0->f_4));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_99(&(uParam0->f_7[iVar0 /*5*/]));
		iVar0++;
	}
	uParam0->f_28 = 255;
	func_100(&(uParam0->f_29));
	func_100(&(uParam0->f_31));
}

void func_61(var uParam0)
{
	*uParam0 = -1;
	func_98(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	func_98(&(uParam0->f_9));
}

void func_62(int iParam0)
{
	func_101(iParam0);
	func_102(0);
	Global_1048584 = 0;
}

void func_63(var uParam0)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] RESET_MC_CUTSCENE_LOCAL_AI_DATA called");
	UNK_0x355E72323AEE83CC(227, 6);
	func_103(uParam0);
}

void func_64(var uParam0, var uParam1, int iParam2)
{
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] STUB_MC_CUTSCENE_SERVER_EVENT_HANDLER - Blank! - eEvent: ", func_104(iParam2, 0));
}

int func_65(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 2;
}

int func_66(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	while (iVar1 < 8)
	{
		switch (*uParam0)
		{
			case 0:
				if (func_105(uParam0))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_106(uParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_107(uParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_108(uParam0, uParam4, iParam8))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_109(uParam0, iParam1, uParam4, uParam5, iParam8))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_110(uParam0, iParam1, iParam2, uParam4))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_111(uParam0, iParam1, iParam2, uParam5, uParam6, iParam7))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				if (func_112(uParam0, iParam1, iParam2))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != *uParam0)
		{
			DEBUG::_0xEF256AE8A5A27966(10912, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER - Processing state change: ", func_113(*uParam0, 0), " -> ", func_113(iVar0, 0), " - iStateChanges: ", iVar1 + 1);
			*uParam0 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

Vector3 func_67()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	return vVar0;
}

bool func_68(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION");
	iVar11 = 0;
	if (func_27())
	{
		if (Local_61.f_391 != 0)
		{
			if (Global_3407872.f_226 == 2)
			{
				iVar2[0] = 0;
				iVar1 = 1;
			}
			else
			{
				iVar11 = 0;
				while (iVar11 <= 7)
				{
					if (MISC::IS_BIT_SET(Local_61.f_391, iVar11))
					{
						iVar2[iVar1] = iVar11;
						iVar1++;
					}
					iVar11++;
				}
			}
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION][ UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - Successful iVariation: ", iVar2[iVar1]);
		}
		else
		{
			iVar1 = 0;
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - No valid iVariation");
		}
		iVar0 = 8;
	}
	else
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (func_114(iVar11, &(Global_3407872.f_227[0 /*2269*/]), Global_3407872.f_2497, &(Local_61.f_36[iVar11 /*3*/])))
			{
				iVar0++;
				if (!Local_61.f_36[iVar11 /*3*/].f_2)
				{
					iVar2[iVar1] = iVar11;
					iVar1++;
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - Successful iVariation: ", iVar11);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - iVariationsSucceeded: ", iVar11);
				}
			}
			iVar11++;
		}
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - iVariationsChecked: ", iVar0);
	if (iVar0 < 8)
	{
		return false;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - iVariationsSucceeded: ", iVar1);
	if (iVar1 == 0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - Done! No possible variations found");
		*uParam1 = 1;
		return true;
	}
	*uParam0 = -1;
	if (*uParam0 == -1)
	{
		*uParam0 = iVar2[MISC::GET_RANDOM_INT_IN_RANGE(0, func_115(iVar1, 0, 7))];
	}
	iVar11 = 0;
	while (iVar11 <= 7)
	{
		if (iVar11 != *uParam0 && VOLUME::_0xF6A8A652A6B186CD(Local_61.f_36[iVar11 /*3*/]))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - Clearing unused vol lock: ", iVar11);
			VOLUME::_0xFDFECC6EE4491E11(Local_61.f_36[iVar11 /*3*/]);
		}
		iVar11++;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_PROCESS_SERVER_RUNNING_CUTSCENE_SELECT_VARIATION - Done! iSelectedVariation: ", *uParam0);
	return true;
}

bool func_69(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] SERVER_INIT_MC_CUTSCENE - iTeam: ", iParam1, " is out of range");
		return false;
	}
	if (!func_116(vParam2, 1))
	{
		DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] SERVER_INIT_MC_CUTSCENE - Target: ", func_117(vParam2), " is INVALID");
		return false;
	}
	if (func_118(uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] SERVER_INIT_MC_CUTSCENE - Cannot init/reinit, cutscene already running - sServerData.eState: ", func_113(*uParam0, 0));
		return false;
	}
	if (func_119(uParam0->f_4, vParam2) && iParam5 == uParam0->f_2)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] SERVER_INIT_MC_CUTSCENE - Target and init type already match");
		return true;
	}
	uParam0->f_4 = { vParam2 };
	uParam0->f_2 = iParam5;
	uParam0->f_3 = iParam6;
	return true;
}

bool func_70(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (!func_38(Local_455[iVar0 /*5*/].f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

char* func_71(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_SUBSTATE_CUTSCENE_INIT";
		case 1:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_SUBSTATE_CUTSCENE_SELECTVARIATION";
		case 2:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_SUBSTATE_CUTSCENE_STREAM";
		case 3:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_SUBSTATE_CUTSCENE_WAITFORPLAY";
		case 4:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_SUBSTATE_CUTSCENE_PLAY";
		case 5:
			return "UGC_END_FLOW_TRANSITION_ONLINE_SERVER_SUBSTATE_CUTSCENE_COMPLETE";
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

bool func_72()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1072032.f_3;
}

void func_73(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_ENTRANCE__ONLINE__SET_FLOW_TYPE - New flow type: ", func_120(iParam0, 0));
	Global_1277387.f_1 = iParam0;
}

int func_74(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 225, "NET_MOONSHINE_PLAYER__SET__PROPERTY_UPGRADE_STAGE: invalid player.");
			return 0;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(168, 225, "NET_MOONSHINE_PLAYER__SET__PROPERTY_UPGRADE_STAGE: setting upgrade ", func_121(iParam0, 0), " to stage ", sParam1);
	Global_1277758[PLAYER::PLAYER_ID() /*87*/].f_5[iParam0] = sParam1;
	return 1;
}

void func_75(var uParam0, var uParam1)
{
	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uParam1);
	DEBUG::_0xF0783374333FD8CE(680, 32, "BROADCAST_MOONSHINE_EVENT_TO_SPECIFIC_PLAYERS - event ", func_122(uParam0->f_4, 0), " sent to ", func_42(SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&uParam1, 0)));
}

void func_76(bool bParam0)
{
	UNK_0x355E72323AEE83CC(225, 6);
	DEBUG::_0xA308F935BDECCEC0(8, 225, "NET_MOONSHINE_MANAGER_PUT_PLAYER_IN_SHACK_FROM_CONTENT - Player entering shack");
	func_123(128);
	func_124(1);
	if (bParam0)
	{
		func_123(1024);
	}
}

char* func_77(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "MC_CUTSCENE_MOONSHINE_PLAYLIST_INVALID";
		case 0:
			return "MC_CUTSCENE_MOONSHINE_PLAYLIST_MAGGIE";
		case 1:
			return "MC_CUTSCENE_MOONSHINE_PLAYLIST_COOK";
		case 2:
			return "MC_CUTSCENE_MOONSHINE_PLAYLIST_BAR";
		case 3:
			return "MC_CUTSCENE_MOONSHINE_PLAYLIST_BAND";
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

bool func_78(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_125(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 == func_126())
	{
		return func_125(&(Global_1102630.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "IS_NET_PLAYER_STATUS_FLAG_SET invalid playerID, iPlayerID=", iParam1);
		return false;
	}
	if (Global_1275959.f_22[iParam1])
	{
		return func_125(&(Global_1100880[iParam1 /*53*/].f_4), iVar0, 5);
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "IS_NET_PLAYER_STATUS_FLAG_SET - Player ", iParam1, " is not active!");
	return false;
}

char* func_79()
{
	if (Global_3407872.f_226 == 1)
	{
		return "MP_BH_MISSION_COMPLETE_MUSIC";
	}
	return "";
}

void func_80(int iParam0)
{
	iLocal_57 = iParam0;
	DEBUG::_0xF0783374333FD8CE(40, 59, "UGC_END_FLOW_TRANSITION_ONLINE_SET_AUDIO_STATE eEndFlowAudioState is now: ", func_127(iLocal_57, 0));
}

void func_81(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_208);
		DEBUG::_0xF0783374333FD8CE(168, 109, "CUTSCENE_CLEAR_FLAG: clearing - ", func_128(iParam1, 0), " so also clearing WAS_ANIM_SCENE_SKIPPED");
	}
}

void func_82(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_92(&(Global_3407872.f_2498), 2);
			break;
		case 7:
			func_129();
			break;
		case 2:
			func_130();
			break;
	}
}

int func_83(var uParam0, int iParam1, int* iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_8.f_25 = 4;
	Var0.f_1.f_8.f_25.f_1.f_11 = 2;
	Var0.f_1.f_8.f_25.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_11 = 2;
	Var0.f_1.f_8.f_25.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_346 = 20;
	Var0.f_1.f_8.f_346.f_1 = -1;
	Var0.f_1.f_8.f_346.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_927 = 20;
	Var0.f_1.f_8.f_927.f_1 = -1;
	Var0.f_1.f_8.f_927.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228 = 10;
	Var0.f_1.f_8.f_1228.f_1 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379 = 10;
	Var0.f_1.f_8.f_1379.f_1 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1530 = 1;
	Var0.f_1.f_8.f_1530.f_1 = -1;
	Var0.f_1.f_8.f_1530.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1530.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546 = 5;
	Var0.f_1.f_8.f_1546.f_1 = -1;
	Var0.f_1.f_8.f_1546.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1546.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1622 = 8;
	Var0.f_1.f_8.f_1648 = 2;
	Var0.f_1.f_1660 = 20;
	Var0.f_1.f_2382 = 4;
	Var0.f_1.f_2382.f_1 = 2;
	Var0.f_1.f_2382.f_1.f_3 = 2;
	Var0.f_1.f_2382.f_1.f_3.f_3 = 2;
	Var0.f_1.f_2382.f_1.f_3.f_3.f_3 = 2;
	Var0.f_1.f_2395 = 20;
	func_131(uParam0, iParam1, iParam3[iParam4 /*12*/], (*uParam6)[iParam5], &Var0, uParam9);
	func_132(iParam2);
	if (func_116((iParam3[iParam4 /*12*/])->f_1, 1) && (iParam3[iParam4 /*12*/])->f_1 == 1)
	{
		func_133(uParam0, iParam2, iParam3[iParam4 /*12*/], uParam9);
		return func_134(uParam0, iParam2, iParam3, iParam4, iParam5, uParam7, uParam8, uParam9, iParam10, iParam11, bParam12);
	}
	return 0;
}

bool func_84()
{
	if (func_27())
	{
		return false;
	}
	return true;
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		func_135(19);
	}
	else
	{
		func_136(19);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_86(bool bParam0)
{
	if (!bParam0)
	{
		func_135(18);
	}
	else
	{
		func_136(18);
	}
	UNK_0x355E72323AEE83CC(36, 6);
}

void func_87(bool bParam0)
{
	if (!bParam0)
	{
		func_135(25);
	}
	else
	{
		func_136(25);
	}
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		func_136(133);
	}
	else
	{
		func_135(133);
	}
}

void func_89(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_137(vParam0, uParam3))
	{
		func_138(1, bParam4);
	}
}

int func_90(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102630.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_GET_PARENT_STATE invalid playerID, iPlayerID=", iParam0);
		return 26;
	}
	if (Global_1275959.f_22[iParam0])
	{
		return Global_1100880[iParam0 /*53*/].f_1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(136, 36, "NET_PLAYER_STATUS_GET_STATE - Player ", iParam0, " is not active!");
	return 26;
}

char* func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PLAYSTAT_INITIALIZATION";
		case 1:
			return "PLAYSTAT_PLAYING";
		case 2:
			return "PLAYSTAT_JUST_DIED";
		case 3:
			return "PLAYSTAT_DEAD";
		case 4:
			return "PLAYSTAT_RESPAWN";
		case 5:
			return "PLAYER_STATUS_PARENT_STATE_END";
		case 6:
			return "PLAYER_STATUS_SUB_STATE_RESPAWN_START";
		case 7:
			return "PLAYSTAT_RESPAWN_INVENTORY_OVERRIDE_WAIT";
		case 8:
			return "PLAYSTAT_RESPAWN_FADE_WAIT";
		case 9:
			return "PLAYSTAT_RESPAWN_FIND_DESIRED_SPAWN";
		case 10:
			return "PLAYSTAT_RESPAWN_RESURRECT";
		case 11:
			return "PLAYSTAT_RESPAWN_UPDATE_TELEPORT";
		case 12:
			return "PLAYSTAT_RESPAWN_STREAM_LOCATION";
		case 13:
			return "PLAYSTAT_RESPAWN_REGION_RESET";
		case 14:
			return "PLAYSTAT_RESPAWN_REGION_WAIT_FOR_RESET";
		case 15:
			return "PLAYSTAT_RESPAWN_CREATE_PERSONAL_TRANSPORT";
		case 16:
			return "PLAYSTAT_RESPAWN_INITIALIZE_PLAYER";
		case 17:
			return "PLAYSTAT_RESPAWN_STREAM_WEAPONS";
		case 18:
			return "PLAYSTAT_RESPAWN_ALLOW_WEAPONS_TO_EQUIP";
		case 19:
			return "PLAYSTAT_RESPAWN_ON_SOMETHING";
		case 20:
			return "PLAYSTAT_RESPAWN_VALIDATE_SCENARIO";
		case 21:
			return "PLAYSTAT_RESPAWN_ARBITRARY_STREAM_WAIT";
		case 22:
			return "PLAYSTAT_RESPAWN_EXIT";
		case 23:
			return "PLAYER_STATUS_SUB_STATE_DEAD_START";
		case 24:
			return "PLAYSTAT_DEAD_SHOW_DEATH";
		case 25:
			return "PLAYSTAT_DEAD_EXIT";
		case 26:
			return "PLAYSTAT_INVALID";
		case 27:
			return "PLAYSTAT_CLEANUP";
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

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_93(var uParam0)
{
	if (!func_139(uParam0))
	{
		return false;
	}
	if (uParam0->f_8 != 3)
	{
		return false;
	}
	return true;
}

bool func_94(var uParam0)
{
	if (!func_139(uParam0))
	{
		return false;
	}
	return uParam0->f_4 == 10;
}

void func_95(bool bParam0, bool bParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 40, "NET_STABLE_SPAWN_HORSE_NEAR_PLAYER - bDisableResponse = ", MISC::_0xF216F74101968DB0(bParam0), " bIgnoreDeath = ", MISC::_0xF216F74101968DB0(bParam1));
	UNK_0x355E72323AEE83CC(40, 6);
	if (bParam0)
	{
		func_140(49);
	}
	if (bParam1)
	{
		func_140(51);
	}
	func_141(48);
	func_140(52);
	func_140(3);
}

char* func_96(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_SUBSTATE_CUTSCENE_WAITINGFORVARIATION";
		case 1:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_SUBSTATE_CUTSCENE_STREAM";
		case 2:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_SUBSTATE_CUTSCENE_RUN";
		case 3:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_SUBSTATE_CUTSCENE_RESPAWNINGSTARTWAIT";
		case 4:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_SUBSTATE_CUTSCENE_RESPAWNINGENDWAIT";
		case 5:
			return "UGC_END_FLOW_TRANSITION_ONLINE_CLIENT_SUBSTATE_CUTSCENE_COMPLETE";
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

bool func_97(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_98(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_99(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
}

void func_100(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_101(int iParam0)
{
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_1[iVar0] = -1;
		iVar0++;
	}
	iParam0->f_6 = -1;
	iParam0->f_7 = 0;
	iParam0->f_8 = 255;
	iParam0->f_9 = { 0f, 0f, 0f };
	func_100(&(iParam0->f_12));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_142(&(iParam0->f_14[iVar0 /*21*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_143(&(iParam0->f_99[iVar0 /*20*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_144(&(iParam0->f_500[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_144(&(iParam0->f_761[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_144(&(iParam0->f_892[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_144(&(iParam0->f_1023[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_145(&(iParam0->f_1089[iVar0 /*14*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_146(&(iParam0->f_1104[iVar0 /*15*/]));
		iVar0++;
	}
	iParam0->f_1465 = 0;
	iParam0->f_1466 = 0;
	func_100(&(iParam0->f_1467));
	func_100(&(iParam0->f_1469));
	func_100(&(iParam0->f_1471));
	func_100(&(iParam0->f_1473));
	func_147(&(iParam0->f_1475));
	iParam0->f_1478 = 0;
	iParam0->f_1479 = 0;
	iParam0->f_1480 = 0;
	iParam0->f_1481 = -1;
	func_100(&(iParam0->f_1482));
	func_148(&(iParam0->f_1484));
}

void func_102(bool bParam0)
{
	Global_1048585 = bParam0;
	DEBUG::_0xF0783374333FD8CE(40, 109, "g_bUGCCutsceneActive set to ", MISC::_0xF216F74101968DB0(bParam0));
}

void func_103(var uParam0)
{
	int iVar0;

	func_149(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_150(&(uParam0->f_1898[iVar0 /*31*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_150(&(uParam0->f_2023[iVar0 /*31*/]));
		iVar0++;
	}
}

char* func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CUTSCENE_SERVER_EVENTS_SAFEPOINT";
		case 1:
			return "MC_CUTSCENE_SERVER_EVENTS_COMPLETIONPOINTALLSTARTED";
		case 2:
			return "MC_CUTSCENE_SERVER_EVENTS_COMPLETIONPOINTALLFINISHED";
		case 3:
			return "MC_CUTSCENE_SERVER_EVENTS_COMPLETIONPOINTANYFINISHED";
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

bool func_105(var uParam0)
{
	if (!func_116(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 != 3)
	{
		return false;
	}
	func_151(&(uParam0->f_29), 0, 1);
	return true;
}

bool func_106(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = true;
	bVar1 = NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @62; //curOff = 50
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_152((*uParam3)[iVar2], iParam1, uParam4))
					{
					}
					else if (func_153(uParam0, iParam1, iParam2[iVar2 /*12*/]) && (iParam2[iVar2 /*12*/])->f_4 > 1)
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_WAIT_FOR_PLAYERS_SKIP_CHECKS - Part ready: ", iVar2);
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_WAIT_FOR_PLAYERS_SKIP_CHECKS - Waiting on part: ", iVar2, " - eState: ", func_154((iParam2[iVar2 /*12*/])->f_4, 0));
						bVar0 = false;
					}
					else
					{
						iVar2++;
					}
				}
				if (!bVar0)
				{
					DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_WAIT_FOR_PLAYERS_SKIP_CHECKS - Waiting for all players to be ready - bIsNetworked: ", MISC::_0xF216F74101968DB0(bVar1));
					return false;
				}
				return true;
			}
		}
	}
}

bool func_107(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam2 != *uParam3)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYERS - sPlayerData & iPlayerTeams arrays differ in size");
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_155(&(uParam0->f_7[iVar0 /*5*/]));
		iVar0++;
	}
	if (!NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		uParam0->f_7[0 /*5*/] = PLAYER::PLAYER_ID();
		uParam0->f_7[0 /*5*/].f_2 = (*uParam3)[0];
		if (func_156(uParam0->f_7[0 /*5*/], iParam2[0 /*12*/], uParam4))
		{
			func_92(&(uParam0->f_7[0 /*5*/].f_1), 1);
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYERS - Non-networked script, return only the local player index");
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar1 >= 4)
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYERS - Player: ", iVar0, " non-active participant, skip");
			}
			else if (!func_152((*uParam3)[iVar0], iParam1, uParam4))
			{
				DEBUG::_0xEF256AE8A5A27966(139808, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYERS - Player: ", iVar0, " not eligible for cutscene, PlayerTeam: ", (*uParam3)[iVar0], " CutsceneTeam: ", iParam1, ", skip");
			}
			else if ((iParam2[iVar0 /*12*/])->f_4 <= 1 || (iParam2[iVar0 /*12*/])->f_4 > 2)
			{
				DEBUG::_0xEF256AE8A5A27966(10784, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYERS - Player: ", iVar0, " invalid state: ", func_154((iParam2[iVar0 /*12*/])->f_4, 0), ", skip");
			}
			else
			{
				uParam0->f_7[iVar1 /*5*/] = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_156(uParam0->f_7[iVar1 /*5*/], iParam2[iVar0 /*12*/], uParam4))
				{
					func_92(&(uParam0->f_7[iVar1 /*5*/].f_1), 1);
				}
				DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYERS - Player: ", iVar0, " Valid player found, populating slot: ", iVar1, " with player index: ", uParam0->f_7[iVar1 /*5*/]);
				iVar1++;
			}
			iVar0++;
		}
	}
	iVar2 = func_157(uParam0->f_4.f_2);
	if (iVar1 > 1)
	{
		func_158(&(uParam0->f_7), uParam4->f_1622[iVar2 /*3*/]);
	}
	return true;
}

bool func_108(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_7[iVar0 /*5*/] == 255)
		{
		}
		else
		{
			uParam0->f_7[iVar0 /*5*/].f_3 = func_159(PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar0 /*5*/]), uParam1, &iParam2);
		}
		iVar0++;
	}
	return true;
}

bool func_109(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	var uVar1[4];
	int iVar6;

	if (!func_38(uParam2->f_19, 256))
	{
		func_160(uParam0, uParam2, iParam4, &uVar1);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar6 = uVar1[iVar0];
			if (iVar6 < 0 || iVar6 >= 4)
			{
				DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYER_SLOTS - iSlot: ", iVar0, " - Lookup invalid/not set - iPlayerLookup[", iVar0, "]: ", iVar6);
			}
			else
			{
				uParam0->f_7[iVar6 /*5*/].f_4 = iVar0;
				DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYER_SLOTS - iSlot: ", iVar0, " - Assigned - iPlayerLookup[", iVar0, "]: ", iVar6);
			}
			iVar0++;
		}
	}
	if (func_161(uParam2))
	{
		if (!func_163(uParam3, func_162(iParam1)))
		{
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SELECTING_PLAYER_SLOTS - Cutscene vote has been initialised - ", func_164(func_162(iParam1), 0));
			func_165(uParam3, func_162(iParam1), 1, 0, 0);
		}
	}
	return true;
}

bool func_110(var uParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_38(uParam3->f_19, 1024);
	iVar1 = 0;
	while (iVar1 < *iParam2)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (!func_153(uParam0, iParam1, iParam2[iVar1 /*12*/]))
		{
		}
		else if (!bVar0)
		{
			if (func_38((iParam2[iVar1 /*12*/])->f_5, 2))
			{
			}
			else if ((iParam2[iVar1 /*12*/])->f_4 < 8)
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 8, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START - Waiting on participant: ", iVar1, " to be ready to play");
				return false;
			}
			iVar1++;
			iVar3 = func_39(&(uParam0->f_29), 0, 1);
			iVar4 = func_166((uParam3->f_21 - iVar3), 350);
			func_15(&(uParam0->f_31), 0, 1);
			func_167(&(uParam0->f_31), iVar4);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START	bForceWait: ", MISC::_0xF216F74101968DB0(bVar0));
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START	Trigger Time: ", func_168(&(uParam0->f_29)));
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START	Current Time: ", UNK_0x9E23B1777A927DAD(NETWORK::GET_NETWORK_TIME_ACCURATE()));
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START	Time Diff: ", iVar3);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START	Start Delay: ", uParam3->f_21);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START	Delay: ", iVar4);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_SYNC_START	Playback Time: ", func_168(&(uParam0->f_31)));
			return true;
		}
	}
}

bool func_111(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	func_169(uParam0, uParam3, iParam1, iParam2, uParam4, &iVar0, &iVar1, &iVar3, &iVar2, &iVar5, &iVar4, &iVar6, &iVar7);
	iVar8 = ((iVar7 + iVar6) + iVar4);
	if (func_163(uParam3, func_162(iParam1)))
	{
		if (!func_97(uParam0->f_1, 1))
		{
			if (iVar3 == (iVar0 - iVar8))
			{
				if (iVar3 > 0)
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - Setting vote active");
					func_170(uParam3, func_162(iParam1));
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - Vote not needed, no one is playing");
				}
				func_28(&(uParam0->f_1), 1);
			}
		}
		else if (!func_97(uParam0->f_1, 2))
		{
			if (iVar1 == 0)
			{
				iVar9 = func_162(iParam1);
				if (func_163(uParam3, iVar9))
				{
					iVar10 = func_171(uParam3, iVar9);
					if (!func_172(uParam3[iVar10 /*36*/]))
					{
						func_173(uParam3, iVar9, -1);
					}
				}
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - Set Vote End");
				func_28(&(uParam0->f_1), 2);
			}
		}
	}
	if (!func_97(uParam0->f_1, 4) && func_97(uParam0->f_1, 0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - MC_CUTSCENE_SERVER_BITS_CompletionPointAllStarted");
		func_28(&(uParam0->f_1), 4);
		func_174(iParam5, uParam0, iParam1, 1);
	}
	if (!func_97(uParam0->f_1, 5) && (iVar8 + iVar5) >= iVar0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - MC_CUTSCENE_SERVER_BITS_CompletionPointAllFinished");
		func_28(&(uParam0->f_1), 5);
		func_174(iParam5, uParam0, iParam1, 2);
	}
	if (!func_97(uParam0->f_1, 6) && (iVar8 > 0 || iVar5 >= iVar0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - MC_CUTSCENE_SERVER_BITS_CompletionPointAnyFinished");
		func_28(&(uParam0->f_1), 6);
		func_174(iParam5, uParam0, iParam1, 3);
	}
	if (!func_97(uParam0->f_1, 0))
	{
		if (((iVar2 == iVar0 || func_97(uParam0->f_1, 6)) || iVar8 > 0) || iVar5 >= iVar0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - Safe to manipulate set");
			func_28(&(uParam0->f_1), 0);
			func_174(iParam5, uParam0, iParam1, 0);
		}
	}
	if (iVar0 <= 0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - No Valid Participants");
		return true;
	}
	else if (iVar7 == iVar0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_SERVER_STATE_RUNNING - All have finished");
		return true;
	}
	return false;
}

bool func_112(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (func_153(uParam0, iParam1, iParam2[iVar0 /*12*/]))
		{
			return false;
		}
		iVar0++;
	}
	func_35(uParam0);
	return true;
}

char* func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CSSERVER_IDLE";
		case 1:
			return "MC_CSSERVER_WAIT_FOR_PLAYERS_SKIP_CHECK";
		case 2:
			return "MC_CSSERVER_SELECTING_PLAYERS";
		case 3:
			return "MC_CSSERVER_SELECTING_PLAYER_VARIATIONS";
		case 4:
			return "MC_CSSERVER_SELECTING_PLAYER_SLOTS";
		case 5:
			return "MC_CSSERVER_SYNC_START";
		case 6:
			return "MC_CSSERVER_RUNNING";
		case 7:
			return "MC_CSSERVER_FINISHED";
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

bool func_114(int iParam0, var uParam1, int iParam2, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0);
	if (uParam3->f_2)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 9, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " Already bFailed");
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam2, iParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " is not marked as valid for use");
		uParam3->f_2 = 1;
		return true;
	}
	vVar0 = { uParam1->f_1622[iParam0 /*3*/] };
	if (func_175(vVar0))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " vector zero");
		uParam3->f_2 = 1;
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(3616, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " vCoord: ", &vVar0);
	fVar3 = 25f;
	if (!VOLUME::_0xA4A4359320345B34(uParam3->f_1))
	{
		if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 0, 0, 0))
		{
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " vol lock collision!");
			uParam3->f_2 = 1;
			return true;
		}
		uVar4 = func_176(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, joaat("VOLSPHERE"), 0, 8);
		iVar5 = SCRIPTS::COUNT_PLAYER_BITS(&uVar4);
		if (iVar5 > 0)
		{
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 <= 31)
			{
				if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar4, iVar7))
				{
					iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar7);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6) && iVar6 != PLAYER::PLAYER_ID()) && !GANG::_0x81FB74C83C2ED69F(iVar6))
					{
						DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " player too close: ", PLAYER::GET_PLAYER_NAME(iVar6));
						uParam3->f_2 = 1;
						return true;
					}
				}
				iVar7++;
			}
		}
		Var8 = { vVar0 };
		Var8.f_4 = fVar3;
		Var8.f_6 = MISC::GET_HASH_KEY("net_ugc_end_flow_transition_online");
		Var8.f_7 = iParam0;
		Var8.f_5 = 0;
		uParam3->f_1 = VOLUME::_0x183C0B6CFEFFCAE4(&Var8);
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " requested vol lock");
	}
	switch (VOLUME::_0xB33A604345F58202(uParam3->f_1))
	{
		case 3:
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " success!");
			*uParam3 = VOLUME::_0x351D71B8B72B858B(uParam3->f_1);
			return true;
		case 4:
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " VOLUME_LOCK_REQUEST_STATUS_FAILED");
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		case 0:
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " VOLUME_LOCK_REQUEST_STATUS_INVALID");
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		default:
			break;
	}
	DEBUG::_0xEF256AE8A5A27966(544, 227, 9, "[UGC][END_FLOW][TRANSITION] UGC_END_FLOW_TRANSITION_ONLINE_CHECK_MOCAP_VARIATION - iVariation: ", iParam0, " waiting for vol lock");
	return false;
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_116(vector3 vParam0, bool bParam3)
{
	if (vParam0.x == -1)
	{
		return false;
	}
	if (vParam0.y < 0 || vParam0.y >= 8)
	{
		return false;
	}
	if (!bParam3)
	{
		if (vParam0.z < 0 || vParam0.z >= 8)
		{
			return false;
		}
	}
	return true;
}

char* func_117(vector3 vParam0)
{
	char cVar0[32];

	if (func_116(vParam0, 1))
	{
		if (vParam0.x == 1)
		{
			StringConCat(&cVar0, "Mocap", 32);
		}
		else if (vParam0.x == 0)
		{
			StringConCat(&cVar0, "Scripted", 32);
		}
		StringConCat(&cVar0, ":", 32);
		StringIntConCat(&cVar0, vParam0.y, 32);
		StringConCat(&cVar0, ":", 32);
		StringIntConCat(&cVar0, vParam0.z, 32);
	}
	else
	{
		StringCopy(&cVar0, "INVALID", 32);
	}
	return func_177(cVar0);
}

bool func_118(var uParam0)
{
	if (!func_116(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 == 3)
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		return true;
	}
	return false;
}

bool func_119(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	if (vParam0.y != vParam3.y)
	{
		return false;
	}
	if (vParam0.z != vParam3.z)
	{
		return false;
	}
	return true;
}

char* func_120(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NMOON_ENTRANCE_FLOW_NONE";
		case 1:
			return "NMOON_ENTRANCE_FLOW_APPROACH";
		case 2:
			return "NMOON_ENTRANCE_FLOW_AS_POSSE_MEMBER";
		case 3:
			return "NMOON_ENTRANCE_FLOW_BY_INVITE";
		case 4:
			return "NMOON_ENTRANCE_FLOW_COOP_OUTRO";
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

char* func_121(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NMOON_PROPERTY_UPGRADE_INVALID";
		case 0:
			return "NMOON_PROPERTY_UPGRADE_FIRST";
		case 1:
			return "NMOON_PROPERTY_UPGRADE_BAND";
		case 2:
			return "NMOON_PROPERTY_UPGRADE_CENTER_TABLE";
		case 3:
			return "NMOON_PROPERTY_UPGRADE_BAR";
		case 4:
			return "NMOON_PROPERTY_UPGRADE_BAND_WALL";
		case 5:
			return "NMOON_PROPERTY_UPGRADE_HIDDEN_DOOR";
		case 6:
			return "NMOON_PROPERTY_UPGRADE_EXTRA_00";
		case 7:
			return "NMOON_PROPERTY_UPGRADE_ROOM_EXPANSION_00";
		case 8:
			return "NMOON_PROPERTY_UPGRADE_ROOM_EXPANSION_01";
		case 9:
			return "NMOON_PROPERTY_UPGRADE_LAST";
		case 10:
			return "NUM_MOONSHINE_PROPERTY_UPGRADES";
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

char* func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "NET_MOONSHINE_EVENT_UNDEFINED";
		case 1:
			return "NET_MOONSHINE_EVENT_INVITE_PLAYER";
		case 2:
			return "NET_MOONSHINE_EVENT_COOP_INVITE";
		case 3:
			return "NET_MOONSHINE_EVENT_PLAYER_DANCING";
		case 4:
			return "NET_MOONSHINE_EVENT_ANIM_SCENE_START";
		case 5:
			return "NET_MOONSHINE_EVENT_POSSE_ENTER_REQUEST";
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

void func_123(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER__OFFLINE__SET_BIT - Set bit: ", func_178(iParam0, 0));
	func_179(&(Global_1277599.f_157), iParam0);
}

void func_124(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_MANAGER__SET_CLIENT_BIT - Set bit: ", func_180(iParam0, 0));
	func_179(&(Global_1277758[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

bool func_125(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_126()
{
	return Global_1102630.f_3672;
}

char* func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_END_FLOW_AUDIO_STATE_INVALID";
		case 1:
			return "UGC_END_FLOW_AUDIO_STATE_PREPARING";
		case 2:
			return "UGC_END_FLOW_AUDIO_STATE_WAIT_FOR_FADE_IN";
		case 3:
			return "UGC_END_FLOW_AUDIO_STATE_TRIGGERING";
		case 4:
			return "UGC_END_FLOW_AUDIO_STATE_DONE";
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

char* func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147483648:
			return "CUTSCENE_FLAG_FORCE_TELEPORT_RIDE";
		case 0:
			return "CUTSCENE_FLAG_INVALID";
		case 1:
			return "CUTSCENE_FLAG_DISABLE_LETTER_BOX";
		case 2:
			return "CUTSCENE_FLAG_DISABLE_SKIP";
		case 4:
			return "CUTSCENE_FLAG_RAN_CUTSCENE_ENTER";
		case 8:
			return "CUTSCENE_FLAG_CREATED_VOLUME";
		case 16:
			return "CUTSCENE_FLAG_SETUP_RESTRICTIONS";
		case 32:
			return "CUTSCENE_FLAG_LEADIN_WAS_COMPLETED";
		case 64:
			return "CUTSCENE_FLAG_ORIGIN_VALID";
		case 128:
			return "CUTSCENE_FLAG_REQUESTED";
		case 256:
			return "CUTSCENE_FLAG_STREAMED";
		case 512:
			return "CUTSCENE_FLAG_WAS_SKIPPED";
		case 1024:
			return "CUTSCENE_FLAG_DO_NOT_RESET_GAMEPLAY_CAM";
		case 2048:
			return "CUTSCENE_FLAG_TELEPORT_RIDE";
		case 4096:
			return "CUTSCENE_FLAG_CUTFILE_PARSED";
		case 8192:
			return "CUTSCENE_FLAG_FIXED_UP_LABEL";
		case 16384:
			return "CUTSCENE_FLAG_DISABLE_FORCE_FADE_IN";
		case 32768:
			return "CUTSCENE_FLAG_PRE_REGISTERED_ENTITIES";
		case 65536:
			return "CUTSCENE_FLAG_DISABLE_PLAYER_FORCE_HOLSTER";
		case 131072:
			return "CUTSCENE_FLAG_HIDE_PLAYERS_HOLSTERED_LONGARM";
		case 262144:
			return "CUTSCENE_FLAG_TRIGGERED_CAMERA_EXIT_STATE";
		case 524288:
			return "CUTSCENE_FLAG_END_IN_FADE";
		case 1048576:
			return "CUTSCENE_FLAG_END_WHEN_SCENE_IS_EXITING_THIS_FRAME";
		case 2097152:
			return "CUTSCENE_FLAG_USING_LEADIN_PLAYLIST";
		case 4194304:
			return "CUTSCENE_FLAG_NEW_PLAYLIST_REQUESTED";
		case 8388608:
			return "CUTSCENE_FLAG_DO_NOT_AUTOLOAD_MULTISTART";
		case 16777216:
			return "CUTSCENE_FLAG_REQUESTED_MULTISTART";
		case 33554432:
			return "CUTSCENE_FLAG_DO_NOT_USE_LEADIN_PLAYLISTS";
		case 67108864:
			return "CUTSCENE_FLAG_FORCE_SKIP";
		case 134217728:
			return "CUTSCENE_FLAG_DO_NOT_USE_DEFAULT_MULTISTART_PLAYLIST";
		case 268435456:
			return "CUTSCENE_FLAG_FORCED_MULTISTART";
		case 536870912:
			return "CUTSCENE_FLAG_RAN_CUTSCENE_EXIT";
		case 1073741824:
			return "CUTSCENE_FLAG_FADED_OUT_AFTER_PAUSE";
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

void func_129()
{
	if (Global_3407872.f_226 != 2)
	{
		return;
	}
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][END_FLOW][TRANSITION] END_UGC_END_FLOW_PREPARE_MOONSHINE_TRANSITION Called, Cutscene: ", &(Global_3407872.f_227[0 /*2269*/].f_2057[0 /*26*/]));
	func_181(Global_3407872.f_227[0 /*2269*/].f_2057[0 /*26*/]);
	func_124(1024);
}

void func_130()
{
	if (!func_27())
	{
		return;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGC][END_FLOW][TRANSITION] END_UGC_END_FLOW_MOONSHINE_TRANSITION");
	func_124(64);
}

void func_131(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	char* sVar6;

	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= iParam1)
	{
		return;
	}
	if (func_182(uParam2))
	{
		return;
	}
	if (!func_183(uParam0, uParam2, iParam3, uParam4, uParam5))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		vVar3 = { (uParam0[iVar1 /*33*/])->f_4 };
		if (!func_116(vVar3, 1))
		{
		}
		else if ((*uParam0)[iVar1 /*33*/] > 4)
		{
		}
		else
		{
			switch (vVar3.x)
			{
				case 0:
					if (!func_152(iParam3, iVar1, &((uParam4[vVar3.y /*2419*/])->f_8)))
					{
					}
					else
					{
						sVar6 = func_184(*(uParam4[vVar3.y /*2419*/]));
						Jump @254; //curOff = 200
						if (!func_152(iParam3, iVar1, uParam5[vVar3.y /*2269*/]))
						{
						}
						else
						{
							sVar6 = func_185((uParam5[vVar3.y /*2269*/])->f_2057[0 /*26*/]);
							if (iVar0 == -1)
							{
								iVar0 = iVar1;
								sVar2 = sVar6;
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] CLIENT_UPDATE_MC_CUTSCENE_TARGET iNewTarget = iServer = ", iVar0);
							}
							else if (iVar1 == iParam3 && iVar0 != iParam3)
							{
								iVar0 = iVar1;
								sVar2 = sVar6;
								DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] CLIENT_UPDATE_MC_CUTSCENE_TARGET (iServer = iMyTeam AND iNewTarget != iMyTeam) iNewTarget = iServer = ", iVar0);
							}
						}
					}
					iVar1++;
					if (iVar0 == -1)
					{
					}
					else if (iVar0 >= 0 && iVar0 < *uParam0)
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] CLIENT_UPDATE_MC_CUTSCENE_TARGET -  Updating active target");
						if (!func_119(uParam2->f_1, (uParam0[iVar0 /*33*/])->f_4))
						{
							DEBUG::_0xEF256AE8A5A27966(43680, 227, 7, "[MC][CUTSCENE] CLIENT_UPDATE_MC_CUTSCENE_TARGET - TargetKey: ", func_117(uParam2->f_1), " -> ", func_117((uParam0[iVar0 /*33*/])->f_4), ": ", sVar2);
							uParam2->f_1 = { (uParam0[iVar0 /*33*/])->f_4 };
						}
						if (*uParam2 != iVar0)
						{
							DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[MC][CUTSCENE] CLIENT_UPDATE_MC_CUTSCENE_TARGET - TargetTeam: ", *uParam2, " -> ", iVar0, ": ", sVar2);
							*uParam2 = iVar0;
						}
					}
					default:
						break;
			}
		}
	}
}

void func_132(int* iParam0)
{
	int iVar0;

	iVar0 = func_186();
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		iParam0->f_8 = iVar0;
	}
}

void func_133(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = uParam2->f_8;
	vVar2 = { uParam2->f_1 };
	while (iVar5 < 5)
	{
		switch (uParam2->f_8)
		{
			case 0:
				if (func_187(iParam1, uParam2, uParam3))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				iVar1 = func_188(uParam0[*uParam2 /*33*/], uParam2, uParam3[vVar2.y /*2269*/]);
				if (iVar1 == 1)
				{
					iVar0 = 2;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 0;
				}
				break;
			case 2:
				iVar1 = func_189(uParam0[*uParam2 /*33*/], iParam1, uParam2, uParam3[vVar2.y /*2269*/]);
				if (iVar1 == 1)
				{
					iVar0 = 3;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 4;
				}
				break;
			case 3:
				if (!func_190(uParam0[*uParam2 /*33*/], iParam1, uParam2, uParam3[vVar2.y /*2269*/]))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				func_191(iParam1, uParam2);
				iVar0 = 0;
				break;
		}
		if (iVar0 != uParam2->f_8)
		{
			DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_CLIENT_MOCAP - State changing: ", func_192(uParam2->f_8, 0), " -> ", func_192(iVar0, 0));
			uParam2->f_8 = iVar0;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
}

int func_134(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	if (iParam3 < 0 || iParam3 >= *iParam2)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 1, "[MC][Cutscene][MOCAP] CLIENT_PROCESS_MC_CUTSCENE_FSM_MOCAP - iLocalPart: ", iParam3, " is out of range - min: 0 - max: ", *iParam2);
		return 0;
	}
	if (iParam4 < 0 || iParam4 >= *iParam2)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 1, "[MC][Cutscene][MOCAP] CLIENT_PROCESS_MC_CUTSCENE_FSM_MOCAP - iPartViewed: ", iParam4, " is out of range - min: 0 - max: ", *iParam2);
		return 0;
	}
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE][MOCAP] CLIENT_PROCESS_MC_CUTSCENE_FSM_MOCAP Cutscene state: ", func_154((iParam2[iParam3 /*12*/])->f_4, 0));
	iVar0 = (iParam2[iParam3 /*12*/])->f_4;
	while (iVar1 < 17)
	{
		vVar2 = { (iParam2[iParam3 /*12*/])->f_1 };
		iVar5 = (*iParam2)[iParam3 /*12*/];
		if (func_116(vVar2, 1))
		{
			func_193(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/], iParam9);
		}
		switch ((iParam2[iParam3 /*12*/])->f_4)
		{
			case 0:
				if (func_194(uParam0, iParam2[iParam3 /*12*/], iParam1))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_195(iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/], iParam8))
				{
					iVar0 = 16;
				}
				else
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_196(uParam0[iVar5 /*33*/], iParam1, uParam7[vVar2.y /*2269*/], iParam8, iParam9))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_197())
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_198(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_199(iParam1, iParam2[iParam3 /*12*/]))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_200(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				iVar6 = func_201(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]);
				if (iVar6 == 1)
				{
					iVar0 = 8;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 11;
				}
				break;
			case 8:
				if (func_202(uParam0[iVar5 /*33*/]))
				{
					iVar0 = 9;
				}
				break;
			case 9:
				if (func_203(uParam0[iVar5 /*33*/], iParam1, iParam2, iParam3, uParam7[vVar2.y /*2269*/], iParam8, iParam9))
				{
					iVar0 = 10;
				}
				break;
			case 10:
				if (func_204(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam5, uParam6, uParam7[vVar2.y /*2269*/], iParam8))
				{
					iVar0 = 11;
				}
				break;
			case 11:
				iVar6 = func_205(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/]);
				if (iVar6 == 1)
				{
					iVar0 = 13;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 12;
				}
				break;
			case 12:
				if (func_206(uParam0[iVar5 /*33*/], uParam7[vVar2.y /*2269*/]))
				{
					iVar0 = 13;
				}
				break;
			case 13:
				if (func_207(iParam1))
				{
					iVar0 = 14;
				}
				break;
			case 14:
				func_208(uParam0[iVar5 /*33*/], iParam1, uParam7[vVar2.y /*2269*/], iParam8, iParam9);
				iVar0 = 15;
				break;
			case 15:
				if (func_209(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/], 0, bParam10))
				{
					iVar0 = 16;
				}
				break;
			case 16:
				if (func_210(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != (iParam2[iParam3 /*12*/])->f_4)
		{
			DEBUG::_0xEF256AE8A5A27966(10912, 227, 7, "[MC][CUTSCENE][MOCAP] CLIENT_PROCESS_MC_CUTSCENE_FSM_MOCAP Cutscene state change: ", func_154((iParam2[iParam3 /*12*/])->f_4, 0), " -> ", func_154(iVar0, 0), " - RELOOPING FSM");
			(iParam2[iParam3 /*12*/])->f_4 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	if (func_211(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "CLEAR_NET_PLAYER_STATUS_FLAG - ", func_212(iParam0), " cleared by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (func_213(&(Global_1102630.f_4), iParam0, 5))
	{
		DEBUG::_0xF0783374333FD8CE(680, 36, "SET_NET_PLAYER_STATUS_FLAG - ", func_212(iParam0), " set by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		return 1;
	}
	return 0;
}

bool func_137(vector3 vParam0, var uParam3)
{
	if (func_175(vParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return false;
	}
	if (func_90(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return false;
	}
	if (func_78(4, 255))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE - An override had already been primed.  This will wipe out the previous setting.");
	}
	func_136(4);
	func_214(&(Global_1102630.f_3879));
	Global_1102630.f_3879.f_6 = { vParam0 };
	Global_1102630.f_3879 = uParam3;
	Global_1102630.f_3879.f_5 = 1;
	Global_1102630.f_26.f_3341 = 0;
	Global_1102630.f_26.f_3342 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE called.  Output starting...");
	func_215(Global_1102630.f_3879, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_USE_ABSOLUTE_OVERRIDE_ONCE ...Output Complete.");
	return true;
}

void func_138(bool bParam0, bool bParam1)
{
	if (func_90(255) == 4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - You are currently in the respawn state.  You're past the point of no return at this point and you can't call this.  Bailing.");
		UNK_0x355E72323AEE83CC(36, 6);
		return;
	}
	if (func_175(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		DEBUG::_0x83407B92D46F25C3(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Got a zero vector as targetted position.  Exiting early.");
		UNK_0x355E72323AEE83CC(-1, 6);
		return;
	}
	if (!bParam0)
	{
		func_135(0);
	}
	else
	{
		if (bParam1)
		{
			func_216(0, 0, 0, 1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN - Not clearing the spectator lock!");
			UNK_0x355E72323AEE83CC(36, 6);
		}
		func_136(0);
		func_217(&(Global_1102630.f_3849));
		Global_1102630.f_3849 = 0f;
		Global_1102630.f_3849.f_5 = 1;
		Global_1102630.f_3849.f_16 = 0;
		Global_1102630.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102630.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102630.f_3849.f_17 = { Global_1901988.f_50.f_1, Global_1901988.f_50.f_1, Global_1901988.f_50.f_1 };
		Global_1102630.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_218(&(Global_1102630.f_3888));
		Global_1102630.f_3888.f_6 = { Global_1102630.f_3849.f_17.f_6 };
		Global_1102630.f_3888 = Global_1102630.f_3849;
		Global_1102630.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102630.f_26.f_3341 = 0;
			Global_1102630.f_26.f_3342 = 0;
		}
	}
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN called.  Output starting...");
	func_219(Global_1102630.f_3849, 36);
	func_220(Global_1102630.f_3888, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN ...Output Complete.");
	UNK_0x355E72323AEE83CC(-1, 6);
}

bool func_139(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_116(uParam0->f_1, 1))
	{
		return false;
	}
	return true;
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_SET_SYSTEM_FLAG: ", func_221(iParam0, 0));
	if (!func_222(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_SET_SYSTEM_FLAG - Invalid flag passed in.");
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1904139.f_496[iVar0]), iVar1);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0x1B08D1EB9D8C4931(40, 40, "NET_STABLE_CLEAR_SYSTEM_FLAG: ", func_221(iParam0, 0));
	if (!func_222(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 40, "NET_STABLE_SET_SYSTEM_FLAG - Invalid flag passed in.");
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1904139.f_496[iVar0]), iVar1);
}

void func_142(var uParam0)
{
	*uParam0 = -1;
	func_143(&(uParam0->f_1));
}

void func_143(var uParam0)
{
	func_144(uParam0);
	func_223(&(uParam0->f_13));
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_144(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	func_224(&(uParam0->f_5));
	uParam0->f_10 = 0;
	func_100(&(uParam0->f_11));
}

void func_145(var uParam0)
{
	func_144(uParam0);
	uParam0->f_13 = 0;
}

void func_146(var uParam0)
{
	func_144(uParam0);
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
}

void func_147(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
}

void func_148(var uParam0)
{
	int iVar0;

	*uParam0 = 1;
	func_147(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_225(&(uParam0->f_17[iVar0 /*12*/]));
		iVar0++;
	}
	uParam0->f_186 = 15f;
	uParam0->f_187 = 20f;
	uParam0->f_191 = 0;
	StringCopy(&(uParam0->f_192), "", 128);
	uParam0->f_208 = 0;
	StringCopy(&(uParam0->f_209), "", 64);
	StringCopy(&(uParam0->f_217), "", 64);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_226(&(uParam0->f_225[iVar0 /*9*/]));
		iVar0++;
	}
	uParam0->f_262 = 0;
	uParam0->f_263 = 0;
	uParam0->f_264 = 0;
	uParam0->f_265 = { 0f, 0f, 0f };
	uParam0->f_268 = { 0f, 0f, 0f };
	uParam0->f_271 = 0f;
	uParam0->f_272 = 0;
	uParam0->f_273 = 0f;
	uParam0->f_274 = 0;
	uParam0->f_275 = 0;
	func_227(&(uParam0->f_276));
	uParam0->f_292 = 1000;
}

void func_149(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_228(&(uParam0->f_2));
	func_229(&(uParam0->f_526));
	func_230(&(uParam0->f_554));
	uParam0->f_1891 = 0;
	uParam0->f_1892 = 0;
	uParam0->f_1893 = 0;
	uParam0->f_1894 = 0;
	uParam0->f_1895 = 0;
	uParam0->f_1896 = 0;
	uParam0->f_1897 = 0;
}

void func_150(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = -1;
	uParam0->f_14 = 255;
	func_100(&(uParam0->f_15));
	func_100(&(uParam0->f_17));
	func_100(&(uParam0->f_19));
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = -1;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_231(&(uParam0->f_29));
}

void func_151(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_152(int iParam0, int iParam1, var uParam2)
{
	UNK_0x355E72323AEE83CC(-1, 6);
	if (iParam0 < 0 || iParam0 >= 8)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] IS_MC_CUTSCENE_TEAM_ELIGIBLE_FOR_TEAMS_CUTSCENE - For Team: ", iParam0, " Index Out of Range - return FALSE");
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][CUTSCENE] IS_MC_CUTSCENE_TEAM_ELIGIBLE_FOR_TEAMS_CUTSCENE - For Team: ", iParam0, " iCutsceneTeam: ", iParam1, " - Index Out of Range - return FALSE");
		return false;
	}
	if (iParam1 == iParam0)
	{
		DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][CUTSCENE] IS_MC_CUTSCENE_TEAM_ELIGIBLE_FOR_TEAMS_CUTSCENE - For Team: ", iParam0, " - = iCutsceneTeam: ", iParam1, " - return TRUE");
		return true;
	}
	if (MISC::IS_BIT_SET(uParam2->f_20, iParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] IS_MC_CUTSCENE_TEAM_ELIGIBLE_FOR_TEAMS_CUTSCENE - For Team: ", iParam0, " - Pulled In - return TRUE");
		return true;
	}
	return false;
}

bool func_153(var uParam0, int iParam1, var uParam2)
{
	if (!func_232(uParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] ARE_MC_CUTSCENE_SERVER_AND_CLIENT_INIT_AND_EQUAL - Server not init");
		return false;
	}
	if (!func_139(uParam2))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] ARE_MC_CUTSCENE_SERVER_AND_CLIENT_INIT_AND_EQUAL - Client not init");
		return false;
	}
	if (*uParam2 != iParam1)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] ARE_MC_CUTSCENE_SERVER_AND_CLIENT_INIT_AND_EQUAL - Server & Client team missmatch - iServerTeam: ", iParam1, " ClientTeam: ", *uParam2);
		return false;
	}
	if (!func_119(uParam0->f_4, uParam2->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[MC][CUTSCENE] ARE_MC_CUTSCENE_SERVER_AND_CLIENT_INIT_AND_EQUAL - Server & Client target missmatch - ServerTarget: ", func_117(uParam0->f_4), " ClientTarget: ", func_117(uParam2->f_1));
		return false;
	}
	return true;
}

char* func_154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CSS_IDLE";
		case 1:
			return "MC_CSS_CHECK_SKIP";
		case 2:
			return "MC_CSS_SYNC_WAIT_FOR_PLAYER_SLOTS";
		case 3:
			return "MC_CSS_INIT";
		case 4:
			return "MC_CSS_SPECTATOR_START";
		case 5:
			return "MC_CSS_FOCUS_CHANGE_START";
		case 6:
			return "MC_CSS_PLAYER_STATUS";
		case 7:
			return "MC_CSS_WAIT_READY_TO_START";
		case 8:
			return "MC_CSS_SYNC_START";
		case 9:
			return "MC_CSS_BEGIN";
		case 10:
			return "MC_CSS_RUN";
		case 11:
			return "MC_CSS_FOCUS_CHANGE_END";
		case 12:
			return "MC_CSS_SKIP_HOLD";
		case 13:
			return "MC_CSS_SPECTATOR_END";
		case 14:
			return "MC_CSS_END";
		case 15:
			return "MC_CSS_POST";
		case 16:
			return "MC_CSS_CLEANUP";
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

void func_155(var uParam0)
{
	func_99(uParam0);
}

bool func_156(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_157(uParam1->f_1.f_2);
	if (!func_233(PLAYER::GET_PLAYER_PED(iParam0), uParam2->f_1622[iVar0 /*3*/], BUILTIN::TO_FLOAT(uParam2->f_1)))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] IS_MC_CUTSCENE_PLAYER_ELIGIBLE_FOR_OPTIONAL_USE - playerID: ", iParam0, " is out of range");
		return false;
	}
	return true;
}

int func_157(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		iParam0 = 0;
	}
	return iParam0;
}

void func_158(var uParam0, vector3 vParam1)
{
	struct<6> Var0;
	int iVar25;
	vector3 vVar26;

	Var0 = 4;
	Var0.f_1.f_1 = 255;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_4 = -1;
	Var0.f_1.f_6.f_1 = 255;
	Var0.f_1.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_4 = -1;
	DEBUG::_0xEF256AE8A5A27966(224, 227, 7, "SORT_PLAYERS_BY_DISTANCE - Called for coord: ", &vParam1);
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		Var0[iVar25 /*6*/].f_1 = { *(uParam0[iVar25 /*5*/]) };
		Var0[iVar25 /*6*/] = 99999.9f;
		if ((*uParam0)[iVar25 /*5*/] == 255)
		{
		}
		else
		{
			vVar26 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED((*uParam0)[iVar25 /*5*/]), false, false) };
			Var0[iVar25 /*6*/] = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar26, vParam1, true);
			DEBUG::_0xEF256AE8A5A27966(1568, 227, 7, "SORT_PLAYERS_BY_DISTANCE - SortInfo - i: ", iVar25, " Dist: ", Var0[iVar25 /*6*/]);
		}
		iVar25++;
	}
	NETWORK::_0x7E300B5B86AB1D1A(&Var0, Var0, 6, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		MISC::_COPY_MEMORY(uParam0[iVar25 /*5*/], &(Var0[iVar25 /*6*/].f_1), 5);
		iVar25++;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "SORT_PLAYERS_BY_DISTANCE - Sort complete!");
}

int func_159(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	fVar1 = -1f;
	iVar4 = 0;
	switch (uParam1->f_1647)
	{
		case 1:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				fVar6 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), uParam1->f_25[0 /*80*/].f_11[iVar5 /*34*/]);
				if (fVar6 < fVar1 || fVar1 == -1f)
				{
					fVar6 = fVar1;
					iVar0 = iVar5;
				}
				iVar5++;
			}
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] GET_MC_CUTSCENE_PLAYER_VARIATION - Player is closest to variation: ", iVar5, " starts coord");
			return iVar0;
		case 2:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				if (func_234(*iParam2, uParam1->f_1648[iVar5], -1566524474, &iVar2, &uVar3, &iVar4) != 1)
				{
				}
				else
				{
					iVar7 = MISC::_0xF18AF483DF70BBDE(iVar2);
					if (!VOLUME::_DOES_VOLUME_EXIST(iVar7))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iVar7, false, 0))
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] GET_MC_CUTSCENE_PLAYER_VARIATION - Player in volume for variation: ", iVar5);
						func_235(iVar7);
						return iVar5;
					}
					else
					{
						func_235(iVar7);
					}
				}
				iVar5++;
			}
			break;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] GET_MC_CUTSCENE_PLAYER_VARIATION - Player variation not found, using 0");
	return 0;
}

void func_160(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		(*uParam3)[iVar1] = -1;
		if (uParam0->f_7[iVar1 /*5*/] != 255)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (uParam1->f_17 > iVar0)
	{
		DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - iPlayerNumMin: ", uParam1->f_17, " > iValidCount: ", iVar0, " - not enough valid players");
	}
	iVar2 = uParam1->f_18;
	if (iVar2 <= 0)
	{
		iVar2 = 3;
	}
	iVar2 = func_115(iVar2, 0, iVar0);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - Selecting Players for cutscene");
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - 		Valid Players: ", iVar0);
	DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - 		Req Players Min/Max: ", uParam1->f_17, "/", uParam1->f_18);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - 		Slots to fill: ", iVar2);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - Processing iPlayerSlot: ", iVar4, " - Selection Type: ", func_236(uParam1->f_25[iVar4 /*80*/], 0));
		bVar6 = iVar4 >= uParam1->f_17;
		iVar7 = uParam1->f_25[iVar4 /*80*/];
		iVar8 = -1;
		while (iVar8 == -1)
		{
			switch (iVar7)
			{
				case 0:
					iVar8 = func_237(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 1:
					iVar8 = func_238(&(uParam0->f_7), iVar3, bVar6, uParam0->f_28);
					break;
				case 3:
					iVar8 = func_239(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 2:
					iVar8 = func_240(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_25[iVar4 /*80*/]));
					break;
				case 4:
					iVar8 = func_241(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_25[iVar4 /*80*/]), iParam2);
					break;
				case 5:
					iVar8 = func_242(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 6:
					iVar8 = func_243(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_25[iVar4 /*80*/]));
					break;
			}
			if (iVar8 != -1 && uParam0->f_7[iVar8 /*5*/] != 255)
			{
				(*uParam3)[iVar4] = iVar8;
				iVar5++;
				MISC::SET_BIT(&iVar3, iVar8);
				DEBUG::_0xEF256AE8A5A27966(139808, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - Assigned iPlayerSlotsOut[", iVar8, "]: ", iVar4, "(Player: ", uParam0->f_7[iVar8 /*5*/], ")");
				Jump @597; //curOff = 535
			}
			else if (iVar7 != 0)
			{
				DEBUG::_0xEF256AE8A5A27966(43552, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - Slot: ", iVar4, " player not found using ", func_236(iVar7, 0), " - retrying with ", func_236(0, 0));
				iVar7 = 0;
			}
		else
		{
			}
		else
		{
			}
		}
		iVar4++;
	}
	if (iVar5 < uParam1->f_17)
	{
		DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - Did not find enough valid player's (", iVar5, "/", uParam1->f_17, ")");
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_PLAYER_SELECTION - Completed player selection");
	}
}

bool func_161(var uParam0)
{
	if (func_38(uParam0->f_19, 65536))
	{
		return true;
	}
	return false;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		case 4:
			return 7;
		case 5:
			return 8;
		case 6:
			return 9;
		case 7:
			return 10;
		default:
			break;
	}
	return 0;
}

bool func_163(var uParam0, int iParam1)
{
	return func_171(uParam0, iParam1) > -1;
}

char* func_164(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UGC_VOTE_TYPE_NONE";
		case 1:
			return "UGC_VOTE_TYPE_MISSION_RESTART";
		case 2:
			return "UGC_VOTE_TYPE_TRIP_SKIP";
		case 3:
			return "UGC_VOTE_TYPE_CUTSCENE1";
		case 4:
			return "UGC_VOTE_TYPE_CUTSCENE2";
		case 5:
			return "UGC_VOTE_TYPE_CUTSCENE3";
		case 6:
			return "UGC_VOTE_TYPE_CUTSCENE4";
		case 7:
			return "UGC_VOTE_TYPE_CUTSCENE5";
		case 8:
			return "UGC_VOTE_TYPE_CUTSCENE6";
		case 9:
			return "UGC_VOTE_TYPE_CUTSCENE7";
		case 10:
			return "UGC_VOTE_TYPE_CUTSCENE8";
		case 11:
			return "UGC_VOTE_TYPE_DYNAMIC";
		case 12:
			return "UGC_VOTE_TYPE_LAST_ELEMENT";
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

void func_165(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_244(uParam0, iParam1);
	if (iVar0 == -1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[UGCVote][MMacK] No vote slots could be found! This is bad.");
		return;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] INITIALISE_VOTE for vote slot ", iVar0);
	UNK_0x355E72323AEE83CC(227, 6);
	(*uParam0)[iVar0 /*36*/] = iParam1;
	if (bParam2)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[UGCVote][MMacK] INITIALISE_VOTE Setting vote ", iVar0, " to use voting numbers.");
		MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 6);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 7);
	}
	if (bParam4)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 8);
	}
}

int func_166(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, iParam1);
}

var func_168(var uParam0)
{
	return UNK_0x9E23B1777A927DAD(*uParam0);
}

void func_169(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_163(uParam1, func_162(iParam2));
	bVar1 = NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @73; //curOff = 61
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_153(uParam0, iParam2, iParam3[iVar2 /*12*/]))
					{
					}
					else
					{
						*iParam5++;
						bVar3 = false;
						if (func_38((iParam3[iVar2 /*12*/])->f_5, 2))
						{
							bVar3 = true;
						}
						if (func_94(iParam3[iVar2 /*12*/]))
						{
							*iParam6++;
							bVar3 = true;
							if (bVar0 && func_245(uParam4[iVar2 /*38*/], func_162(iParam2)))
							{
								*iParam7++;
							}
							if (func_38((iParam3[iVar2 /*12*/])->f_5, 1))
							{
								*iParam10++;
							}
						}
						else if ((iParam3[iVar2 /*12*/])->f_4 == 12)
						{
							*iParam9++;
							bVar3 = true;
						}
						else if (func_246(iParam3[iVar2 /*12*/]))
						{
							*iParam12++;
							bVar3 = true;
						}
						else if (func_247(iParam3[iVar2 /*12*/]))
						{
							*iParam11++;
							bVar3 = true;
						}
						if (bVar3)
						{
							*iParam8++;
						}
					}
					iVar2++;
				}
			}
		}
	}
}

void func_170(var uParam0, int iParam1)
{
	int iVar0;

	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGCVote][MMacK] SET_A_VOTE_ACTIVE with vote ", func_164(iParam1, 0));
	iVar0 = func_171(uParam0, iParam1);
	if (iVar0 == -1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[UGCVote][MMacK] SET_VOTING_TIMER No vote slots could be found! This is bad.");
		return;
	}
	MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 0);
}

int func_171(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if ((*uParam0)[iVar0 /*36*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_172(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_1, 1);
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	DEBUG::_0xEF256AE8A5A27966(10784, 227, 7, "[UGCVote][MMacK] SET_VOTE_VOID - called with iVoteIndex ", iParam2, ", eType ", func_164(iParam1, 0), "/", iParam1);
	if (iParam2 == -1)
	{
		iParam2 = func_171(uParam0, iParam1);
	}
	if (iParam2 == -1)
	{
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 1, "[UGCVote][MMacK] SET_VOTE_VOID - Unable to find any vote with eType ", func_164(iParam1, 0), "/", iParam1, "!");
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[UGCVote][MMacK] SET_VOTE_VOID - Unable to find any vote with eType ", func_164(iParam1, 0), "/", iParam1, "!");
		return;
	}
	MISC::SET_BIT(&((uParam0[iParam2 /*36*/])->f_1), 4);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] SET_VOTE_VOID on vote ", iParam2);
}

void func_174(int iParam0, var uParam1, char* sParam2, int iParam3)
{
	DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] Invoking fp INVOKE_MC_CUTSCENE_SERVER_EVENT - event: ", func_104(iParam3, 0), " iTeam: ", sParam2);
	Stack.Push(uParam1);
	Stack.Push(sParam2);
	Stack.Push(iParam3);
	Call_Loc(iParam0);
}

bool func_175(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_176(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - Not online.  This will return nothing now.");
		return uVar0;
	}
	if (func_248() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return just you at bit index ", iVar1);
		}
		else
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - We're in the middle of a seamless session transition.  We're going to return nothing.");
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275959.f_10;
	iVar6 = Global_1275959.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_249());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_249());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_249());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_250(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
			DEBUG::_0x9A6C65DDDBEC9C52(8, 8, "NETWORK_FIND_ACTIVE_PLAYERS_IN_AREA - k_iNET_PQFLAG_PARTICIPANT but this thread is not a networked script.  Clearing k_iNET_PQFLAG_PARTICIPANT and setting NET_PQFLAG_ACTIVE_PLAYERS.");
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275959.f_154[iVar2]))
		{
			iVar10 = Global_1275959.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_251(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1275959.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_90(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_252(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

char* func_177(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NMOON_OFFLINE_BIT_REGISTERED_EXTERIOR_DOORS";
		case 2:
			return "NMOON_OFFLINE_BIT_IS_SHACK_INSTANCE_ACTIVATED";
		case 4:
			return "NMOON_OFFLINE_BIT_IS_SHACK_SHOP_INSTANCE_ACTIVATED";
		case 8:
			return "NMOON_OFFLINE_BIT_IS_INVITE_ACCEPTED_WHILE_IN_SHACK";
		case 16:
			return "NMOON_OFFLINE_BIT_IS_LOCAL_PLAYER_INSIDE_SHACK";
		case 32:
			return "NMOON_OFFLINE_BIT_ENABLE_PROPERTY_BLIP_PULSE";
		case 64:
			return "NMOON_OFFLINE_BIT_SHOULD_ENTRANCE_THREAD_RESET";
		case 128:
			return "NMOON_OFFLINE_BIT_DID_CONTENT_PUT_PLAYER_INSIDE_SHACK";
		case 256:
			return "NMOON_OFFLINE_BIT_SHOULD_ENTRANCE_BE_DISABLED";
		case 512:
			return "NMOON_OFFLINE_BIT_SHOP_ANIM_RUNNING";
		case 1024:
			return "NMOON_OFFLINE_BIT_FORCE_UPDATE_ON_ENTRANCE";
		case 2048:
			return "NMOON_OFFLINE_BIT_CREATED_PED_THIS_FRAME";
		case 4096:
			return "NMOON_OFFLINE_BIT_SETUP_COMPLETE_TRIGGER";
		case 8192:
			return "NMOON_OFFLINE_BIT_THREAD_EXIT_REQUESTED";
		case 16384:
			return "NMOON_OFFLINE_BIT_NAVMESH_SWAP_IN_SHACK_REQUESTED";
		case 32768:
			return "NMOON_OFFLINE_BIT_NAVMESH_SWAP_ON_MAP_REQUESTED";
		case 65536:
			return "NMOON_OFFLINE_BIT_IS_FIRST_TIME_IN_STILL_SHOP";
		case 131072:
			return "NMOON_OFFLINE_BIT_COOP_CUTSCENE_PLAYING";
		case 262144:
			return "NMOON_OFFLINE_BIT_REFRESH_OWNERSHIP";
		case 524288:
			return "NMOON_OFFLINE_BIT_MAGGIE_OFFERED_STORY_MISSION";
		case 1048576:
			return "NMOON_OFFLINE_BIT_MAGGIE_SETUP_COMPLETE_DIALOGUE";
		case 2097152:
			return "NMOON_OFFLINE_BIT_MOONSHINE_RAID_PASS";
		case 4194304:
			return "NMOON_OFFLINE_BIT_MOONSHINE_RAID_FAIL";
		case 8388608:
			return "NMOON_OFFLINE_BIT_MOONSHINE_MAGGIE_MISSION_COOLDOWN_LINE";
		case 16777216:
			return "NMOON_OFFLINE_BIT_MOONSHINE_MARCEL_MISSION_COOLDOWN_LINE";
		case 33554432:
			return "NMOON_OFFLINE_BIT_MOONSHINE_PROPERTY_INTERIOR_UPDATE";
		case 67108864:
			return "NMOON_OFFLINE_BIT_PINNED_FLAVOR_UPDATE_REQUIRED";
		case 134217728:
			return "NMOON_OFFLINE_BIT_BUSINESS_UNLOCKED";
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

void func_179(var uParam0, int iParam1)
{
	func_253(uParam0, iParam1);
}

char* func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "NMOON_CLIENT_BIT_IS_PLAYER_IN_SHACK";
		case 2:
			return "NMOON_CLIENT_BIT_LEADER_REQUESTS_POSSE_ENTER";
		case 4:
			return "NMOON_CLIENT_BIT_MEMBER_FOLLOWING_LEADER_POSSE_ENTER";
		case 8:
			return "NMOON_CLIENT_BIT_MEMBER_FOLLOWED_POSSE_ENTER";
		case 16:
			return "NMOON_CLIENT_BIT_MEMBER_EXITED_AFTER_FOLLOW_ENTER";
		case 32:
			return "NMOON_CLIENT_BIT_PLAYER_RUNNING_COOP_ENTRANCE";
		case 64:
			return "NMOON_CLIENT_BIT_COOP_OUTRO_COMPLETE";
		case 128:
			return "NMOON_CLIENT_BIT_INTERIOR_LOADED";
		case 256:
			return "NMOON_CLIENT_BIT_IN_SHOP_FAKE_INSTANCE";
		case 512:
			return "NMOON_CLIENT_BIT_CAN_PLAYER_RECEIVE_PROPERTY_INVITES";
		case 1024:
			return "NMOON_CLIENT_BIT_COOP_OUTRO_CUSTOM_POSITION_REQUIRED";
		case 2048:
			return "NMOON_CLIENT_BIT_PLAYER_EXITING_PROPERTY";
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

void func_181(struct<16> Param0)
{
	Global_1277599.f_140 = { Param0 };
	DEBUG::_0xA308F935BDECCEC0(40, 225, "NET_MOONSHINE_PROPERTY__SET__LAST_MOONSHINE_MISSION_EXIT_SCENE - Setting last completed mission scene to: ", &Param0);
}

bool func_182(var uParam0)
{
	if (!func_139(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 == 0)
	{
		return false;
	}
	return true;
}

bool func_183(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;

	if (!func_116(uParam1->f_1, 1))
	{
		return true;
	}
	else if (*uParam1 < 0 || *uParam1 >= *uParam0)
	{
		return true;
	}
	else if (((iParam2 >= 0 && iParam2 < *uParam0) && iParam2 != *uParam1) && func_116((uParam0[iParam2 /*33*/])->f_4, 1))
	{
		return true;
	}
	else if (!func_119(uParam1->f_1, (uParam0[*uParam1 /*33*/])->f_4))
	{
		return true;
	}
	else
	{
		vVar0 = { uParam1->f_1 };
		switch (vVar0.x)
		{
			case 0:
				if (vVar0.y >= *uParam3 || !func_152(iParam2, *uParam1, &((uParam3[vVar0.y /*2419*/])->f_8)))
				{
					return true;
				}
				break;
			case 1:
				if (vVar0.y >= *uParam4 || !func_152(iParam2, *uParam1, uParam4[vVar0.y /*2269*/]))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

char* func_184(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 255;
	iVar1 = func_254();
	if (func_255(iVar1))
	{
		return PLAYER::PLAYER_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	return iVar0;
}

bool func_187(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	char cVar7[32];
	int iVar11;
	char cVar12[32];

	if (!func_256(uParam1))
	{
		return false;
	}
	iVar0 = uParam1->f_1.f_1;
	iVar1 = func_157(uParam1->f_1.f_2);
	if (!func_257(uParam2[iVar0 /*2269*/], 0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE][STREAMING][Mocap] STATE_MC_CUTSCENE_STREAMING_IDLE_MOCAP - invalid cutscene data ", iVar0);
		return false;
	}
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[MC][CUTSCENE][STREAMING] STATE_MC_CUTSCENE_STREAMING_IDLE_MOCAP - Updating Mocap Streaming: ", &(iParam0->f_1484.f_192), " -> ", &((uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/]));
	iParam0->f_1484.f_192 = { (uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/] };
	func_258(&(iParam0->f_1484), 8192);
	func_259(&(iParam0->f_1484), 2);
	func_260(&(iParam0->f_1484.f_264), 1);
	func_258(&(iParam0->f_1484), 2);
	func_261(&(iParam0->f_1484.f_263), 4);
	func_261(&(iParam0->f_1484.f_263), 8388608);
	func_260(&(iParam0->f_1484.f_264), 2048);
	func_260(&(iParam0->f_1484.f_264), 1024);
	if (func_262(144))
	{
		func_261(&(iParam0->f_1484.f_263), 2097152);
	}
	if ((uParam2[iVar0 /*2269*/])->f_2268 > -1)
	{
		iParam0->f_1484.f_292 = (uParam2[iVar0 /*2269*/])->f_2268;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_IDLE_MOCAP - Overriding Fade In to ", iParam0->f_1484.f_292);
	}
	if (func_38((uParam2[iVar0 /*2269*/])->f_1651, 64))
	{
		func_28(iParam0, 12);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_IDLE_MOCAP - Disabling Fast Instance");
	}
	if (func_38((uParam2[iVar0 /*2269*/])->f_1651, 2))
	{
		vVar2 = { (uParam2[iVar0 /*2269*/])->f_1622[iVar1 /*3*/] };
		fVar5 = (uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/].f_16;
		func_263(&(iParam0->f_1484), vVar2, 0f, 0f, fVar5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/].f_17)))
	{
		func_264(&(iParam0->f_1484), &((uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/].f_17));
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_IDLE_MOCAP - Base playlist set: ", &((uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/].f_17));
	}
	else
	{
		func_259(&(iParam0->f_1484), 1);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_IDLE_MOCAP - Blank playlist");
	}
	if ((uParam2[iVar0 /*2269*/])->f_2266 >= 0 && (uParam2[iVar0 /*2269*/])->f_2266 < 8)
	{
		iVar6 = (uParam2[iVar0 /*2269*/])->f_2266;
		cVar7 = { (uParam2[iVar0 /*2269*/])->f_2057[iVar6 /*26*/].f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar7))
		{
			func_265(&(iParam0->f_1484), &cVar7, 1);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_IDLE_MOCAP - Requesting Male alt playlist: ", &cVar7);
		}
	}
	if ((uParam2[iVar0 /*2269*/])->f_2267 >= 0 && (uParam2[iVar0 /*2269*/])->f_2267 < 8)
	{
		iVar11 = (uParam2[iVar0 /*2269*/])->f_2267;
		cVar12 = { (uParam2[iVar0 /*2269*/])->f_2057[iVar11 /*26*/].f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar12))
		{
			func_265(&(iParam0->f_1484), &cVar12, 1);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_IDLE_MOCAP - Requesting Female alt playlist: ", &cVar12);
		}
	}
	return true;
}

int func_188(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_266(uParam1))
	{
		return 2;
	}
	if (func_267() != 0 && func_254() != func_268())
	{
		return 2;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return 1;
	}
	iVar0 = func_157(uParam1->f_9.f_2);
	if (func_269(PLAYER::PLAYER_PED_ID(), uParam2->f_1622[iVar0 /*3*/], 200f, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_189(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_270(uParam0, iParam1, uParam2, uParam3);
	if (iVar0 == 2)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_MOCAP - return FALSE");
		return 2;
	}
	iVar1 = func_157(uParam2->f_9.f_2);
	if (!func_271(&(iParam1->f_1484), &(uParam3->f_2057[iVar1 /*26*/]), 1, 1))
	{
		iVar0 = 0;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_MOCAP - Waiting on cutscene preload");
	}
	else if (func_38(uParam3->f_1651, 2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_1484.f_208, uParam3->f_1622[iVar1 /*3*/], 0f, 0f, uParam3->f_2057[iVar1 /*26*/].f_16, 2);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1484.f_208) || !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam1->f_1484.f_208, false))
	{
		iVar0 = 0;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_MOCAP - Waiting on anim scene meta data load");
	}
	else if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1484.f_208, "P_BINOCULARS01x"))
	{
		STREAMING::REQUEST_MODEL(iLocal_37, false);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_37))
		{
			iVar0 = 0;
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_MOCAP - Waiting on binocular model load");
		}
	}
	if (iVar0 == 1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_MOCAP - return TRUE");
	}
	return iVar0;
}

bool func_190(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_272(iParam1, uParam0, uParam2, uParam3))
	{
		return false;
	}
	iVar0 = func_157(uParam2->f_9.f_2);
	if (uParam2->f_4 < 10)
	{
		if (!func_271(&(iParam1->f_1484), &(uParam3->f_2057[iVar0 /*26*/]), 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_191(int* iParam0, var uParam1)
{
	func_273(iParam0, 13);
	func_274(iParam0, uParam1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_37);
	func_57(&(iParam0->f_1484));
	func_58(&(iParam0->f_1484));
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][STREAMING] PROCESS_MC_CUTSCENE_STREAMING_STATE_UNLOAD_MOCAP - Unloaded");
}

char* func_192(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CSSTREAMING_IDLE";
		case 1:
			return "MC_CSSTREAMING_CHECK_IN_RANGE";
		case 2:
			return "MC_CSSTREAMING_LOADING";
		case 3:
			return "MC_CSSTREAMING_LOADED";
		case 4:
			return "MC_CSSTREAMING_UNLOAD";
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

void func_193(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	func_275(iParam1, uParam2, uParam3);
	if (uParam2->f_4 >= 3 && uParam2->f_4 <= 11)
	{
		iParam1->f_1466 = func_276(uParam0, iParam1, uParam2, uParam3, iParam4);
	}
}

bool func_194(var uParam0, var uParam1, int* iParam2)
{
	if (!func_116(uParam1->f_1, 1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_IDLE_COMMON - Key invalid");
		return false;
	}
	if (*uParam1 == -1)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_IDLE_COMMON - Active target team -1");
		return false;
	}
	if (!func_119((uParam0[*uParam1 /*33*/])->f_4, uParam1->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_IDLE_COMMON - Keys inequal");
		return false;
	}
	if ((uParam0[*uParam1 /*33*/])->f_2 != 3)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_IDLE_COMMON - Awaiting server play sig");
		return false;
	}
	if (func_55(iParam2))
	{
		NETWORK::_0x007FF852DCF49DA4(7);
	}
	func_277();
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	DEBUG::_0xEF256AE8A5A27966(10784, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_IDLE_COMMON - iActiveTargetTeam: ", *uParam1, " sActiveKey: ", func_117(uParam1->f_1), " PLAY!");
	return true;
}

bool func_195(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_157(uParam0->f_1.f_2);
	if (!func_233(PLAYER::PLAYER_PED_ID(), uParam1->f_1622[iVar0 /*3*/], BUILTIN::TO_FLOAT(*uParam1)))
	{
		DEBUG::_0xEF256AE8A5A27966(1760, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_CHECK_SKIP_COMMON - SKIPPING - Out of range and skip too far set - Cutscene Coord: ", &(uParam1->f_1622[iVar0 /*3*/]), " Distance: ", func_278(PLAYER::PLAYER_PED_ID(), uParam1->f_1622[iVar0 /*3*/], 1));
		uParam0->f_6 = 1;
		func_279(iParam2, 4);
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_CHECK_SKIP_COMMON - NO SKIP");
	return false;
}

bool func_196(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (*uParam0 <= 4)
	{
		return false;
	}
	if (func_38(uParam2->f_19, 256))
	{
		func_160(uParam0, uParam2, iParam4, &(iParam1->f_1));
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = uParam0->f_7[iVar0 /*5*/].f_4;
			if (iVar1 < 0 || iVar1 >= 4)
			{
			}
			else
			{
				iParam1->f_1[iVar1] = iVar0;
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_WAIT_FOR_PLAYER_SLOTS_COMMON - Server assigned Player[", iVar1, "] iServerIdx: ", iVar0);
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = iParam1->f_1[iVar2];
		if (iVar3 < 0 || iVar3 >= 4)
		{
		}
		else if (uParam0->f_7[iVar3 /*5*/] == 255)
		{
		}
		else if (uParam0->f_7[iVar3 /*5*/] != PLAYER::PLAYER_ID())
		{
		}
		else
		{
			iParam1->f_6 = iVar2;
		}
		else
		{
			iVar2++;
		}
	}
	func_279(iParam3, 0);
	return true;
}

bool func_197()
{
	if (!func_280(255))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
		func_281(0);
	}
	MISC::SET_BIT(&(Global_1959011.f_1), 5);
	Global_1048584 = 1;
	return true;
}

bool func_198(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	if (func_282() == 0)
	{
		return true;
	}
	if (!func_97(*iParam0, 9))
	{
		bVar0 = true;
		if (func_280(255))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_SPECTATOR_START_COMMON - Player is a spectator");
			func_28(iParam0, 8);
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_SPECTATOR_START_COMMON - Player is not a spectator, just using the spec cam (probably the kill cam?)");
			if (!func_283())
			{
				bVar0 = false;
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_SPECTATOR_START_COMMON - Not safe to fade");
			}
		}
		if (bVar0)
		{
			if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_SPECTATOR_START_COMMON - Is spectating, begin fade out");
				func_284(uParam1, 250);
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_28(iParam0, 9);
				if (func_97(*iParam0, 8))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam2->f_1622[func_157(iParam0->f_7) /*3*/], false, false, true, true);
				}
				func_285(128);
				func_285(64);
				func_216(0, 0, 0, 1);
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_SPECTATOR_START_COMMON - Is spectating - target: ", iParam0->f_8, " - booting out of spec cam and caching spec state");
			}
		}
	}
	return false;
}

bool func_199(int* iParam0, var uParam1)
{
	if (func_97(*iParam0, 8))
	{
		return true;
	}
	if (func_286(255) && func_287())
	{
		return true;
	}
	if (func_78(11, 255))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Player is already doing an ASAP force respawn");
		return false;
	}
	if (func_287())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Player is safe for cutscene, but not in playing state - wait for them to reach playing state");
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || (func_14(&(iParam0->f_1473)) && func_39(&(iParam0->f_1473), 1, 0) > 5000))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Player is not safe for cutscene, screen now faded out");
		if (func_288())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Force respawning behind fade");
			func_289();
			func_85(1);
			func_86(1);
			func_87(1);
			func_88(1);
			func_92(&(uParam1->f_5), 16);
		}
		if (func_290(0))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Force terminating shop");
			func_291();
		}
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Player is not safe for cutscene, start screen fading out");
		if (!func_14(&(iParam0->f_1473)))
		{
			func_15(&(iParam0->f_1473), 1, 0);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Time out timer started");
		}
		func_284(uParam1, 500);
		if (func_288())
		{
			func_85(1);
			func_86(1);
			func_87(1);
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_PLAYER_STATUS_COMMON - Screen is neither faded out or in");
	}
	return false;
}

bool func_200(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		return false;
	}
	if (!func_292(uParam1, uParam2))
	{
		return false;
	}
	iVar0 = func_157(uParam1->f_1.f_2);
	if (func_293(iParam0, uParam1, uParam2->f_1622[iVar0 /*3*/]))
	{
		func_273(iParam0, 7);
		return true;
	}
	return false;
}

int func_201(int* iParam0, var uParam1, var uParam2)
{
	if (func_38(uParam1->f_5, 4))
	{
		return 2;
	}
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE() || func_294())
	{
		return 0;
	}
	if (func_38(uParam2->f_19, 2) && !func_97(*iParam0, 6))
	{
		return 0;
	}
	if (!func_119(uParam1->f_9, uParam1->f_1))
	{
		return 0;
	}
	if (uParam1->f_8 != 3)
	{
		return 0;
	}
	if (!iParam0->f_1466)
	{
		return 0;
	}
	return 1;
}

bool func_202(var uParam0)
{
	int iVar0;

	if (*uParam0 < 6)
	{
		return false;
	}
	if (!func_14(&(uParam0->f_31)))
	{
		return false;
	}
	iVar0 = func_39(&(uParam0->f_31), 0, 1);
	if (iVar0 < 0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_SYNC_START_COMMON	- Waiting to hit playback time");
		DEBUG::_0xEF256AE8A5A27966(160, 227, 8, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_SYNC_START_COMMON	- Current Time: ", UNK_0x9E23B1777A927DAD(NETWORK::GET_NETWORK_TIME_ACCURATE()));
		DEBUG::_0xEF256AE8A5A27966(160, 227, 8, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_SYNC_START_COMMON	- Playback Time: ", func_168(&(uParam0->f_31)));
		DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_SYNC_START_COMMON	- Time Diff: ", iVar0);
		return false;
	}
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_SYNC_START_COMMON - Desired Playback @ ", func_168(&(uParam0->f_31)));
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_SYNC_START_COMMON - Triggered Playback @ ", UNK_0x9E23B1777A927DAD(NETWORK::GET_NETWORK_TIME_ACCURATE()));
	return true;
}

bool func_203(var uParam0, int* iParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	char cVar16[32];
	int iVar20;
	int iVar21;
	int iVar22;
	vector3 vVar23[24];
	int iVar26;

	if (!func_97(*iParam1, 2))
	{
		iParam1->f_7 = func_157((iParam2[iParam3 /*12*/])->f_1.f_2);
		iVar0 = 0;
		iVar1 = func_295(iParam1, 0);
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar1 /*5*/]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_MALE(iVar0))
			{
				if ((uParam4->f_2266 >= 0 && uParam4->f_2266 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2057[uParam4->f_2266 /*26*/].f_17)))
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Primary player is MALE - Setting playlists to male - iMaleVariation: ", uParam4->f_2266);
					iParam1->f_7 = uParam4->f_2266;
				}
			}
			else if ((uParam4->f_2267 >= 0 && uParam4->f_2267 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2057[uParam4->f_2267 /*26*/].f_17)))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Primary player is FEMALE - Setting playlists to female - iFemaleVariation: ", uParam4->f_2267);
				iParam1->f_7 = uParam4->f_2267;
			}
		}
		Var2 = { func_296(&(iParam1->f_1484)) };
		if (((iParam1->f_7 >= 0 && iParam1->f_7 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2057[iParam1->f_7 /*26*/].f_17))) && !MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam4->f_2057[iParam1->f_7 /*26*/].f_17)))
		{
			DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Playlist mismatch, switching playlist from: ", &Var2, " -> ", &(uParam4->f_2057[iParam1->f_7 /*26*/].f_17));
			func_297(&(iParam1->f_1484), &(uParam4->f_2057[iParam1->f_7 /*26*/].f_17));
		}
		func_298(&(iParam1->f_1484));
		iVar10 = 0;
		while (iVar10 < 4)
		{
			iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar10 /*21*/].f_1.f_2);
			Var12 = { func_299(&(uParam4->f_1652[iVar10 /*4*/]), iVar11, iVar10, 0) };
			if (func_300(iParam1, &Var12, iParam1->f_14[iVar10 /*21*/].f_1.f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene PLAYER: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene PLAYER: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_300(iParam1, &(uParam4->f_1669[iVar10 /*8*/]), iParam1->f_99[iVar10 /*20*/].f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene PED: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene PED: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_300(iParam1, &(uParam4->f_1830[iVar10 /*4*/]), iParam1->f_500[iVar10 /*13*/].f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene ANIMAL: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene ANIMAL: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_300(iParam1, &(uParam4->f_1911[iVar10 /*4*/]), iParam1->f_761[iVar10 /*13*/].f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene VEHICLE: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene VEHICLE: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 1)
		{
			if (func_300(iParam1, &(uParam4->f_1952[iVar10 /*4*/]), iParam1->f_1089[iVar10 /*14*/].f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene TRAIN: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene TRAIN: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_300(iParam1, &(uParam4->f_1957[iVar10 /*4*/]), iParam1->f_892[iVar10 /*13*/].f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene OBJECT: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene OBJECT: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (func_300(iParam1, &(uParam4->f_1998[iVar10 /*4*/]), iParam1->f_1023[iVar10 /*13*/].f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene PROP: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene PROP: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 24)
		{
			StringCopy(&cVar16, "", 32);
			if (!func_301(iParam1, uParam4, iVar10, 0, &cVar16, 0, 0))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene NON-REG: ", iVar10, " - Could not find handle from parent");
			}
			if (func_300(iParam1, &cVar16, iParam1->f_1104[iVar10 /*15*/].f_2))
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene NON-REG: ", iVar10, " - Clone added to mocap");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Cutscene NON-REG: ", iVar10, " - Clone failed/ignored");
			}
			iVar10++;
		}
		func_302(&(iParam1->f_1484));
		func_303(&(iParam1->f_1484), 1);
		if (func_38(uParam0->f_3, 2))
		{
			func_258(&(iParam1->f_1484), 524288);
			func_259(&(iParam1->f_1484), 4);
		}
		if (func_38(uParam4->f_1651, 8) && !func_97(*iParam1, 3))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(uParam4->f_2057[iParam1->f_7 /*26*/]), "cutscene@mpgvo1_int"))
			{
				func_28(iParam1, 3);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] PROCESS_MC_CUTSCENE_BEGIN_HACK - MC_CUTSCENE_LOCAL_ENTITY_BITS_MPGVO1_INT_HackReadAhead: ENABLED!");
			}
		}
		func_28(iParam1, 2);
		iVar20 = 0;
		while (iVar20 < 4)
		{
			iVar21 = func_295(iParam1, iVar20);
			if (iVar21 < 0 || iVar21 >= 4)
			{
				DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - No player selected for this slot: ", iVar20, " iPlayerServerIdx: ", iVar21, " out of range");
			}
			else if (uParam0->f_7[iVar21 /*5*/] == 255)
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - No player selected for this slot: ", iVar20);
			}
			else
			{
				iVar22 = uParam0->f_7[iVar21 /*5*/].f_3;
				if (uParam0->f_7[iVar21 /*5*/] == PLAYER::PLAYER_ID())
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1484.f_208, "local_player_variation"))
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1484.f_208, "local_player_variation", iVar22 + 1, false);
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Set local_player_variation to ", iVar22 + 1);
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - AnimScene local_player_variation handle does not exist");
					}
				}
				StringCopy(&cVar23, "mp_player_", 24);
				StringIntConCat(&cVar23, iVar20 + 1, 24);
				StringConCat(&cVar23, "_variation", 24);
				if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1484.f_208, &cVar23))
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1484.f_208, &cVar23, iVar22 + 1, false);
					DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - Set ", &cVar23, " to ", iVar22 + 1);
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE][MOCAP] MC_CUTSCENE_MOCAP_BEGIN - AnimScene variation handle: ", &cVar23, " does not exist");
				}
			}
			iVar20++;
		}
	}
	func_304(uParam4->f_2057[iParam1->f_7 /*26*/], &(iParam1->f_1484));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1484.f_208) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_1484.f_208, false))
	{
		func_305(iParam1, uParam0, iParam2[iParam3 /*12*/], uParam4, iParam5);
		if (func_38(uParam4->f_1651, 4))
		{
			func_306(0, iParam6);
			func_28(iParam1, 4);
		}
		iVar26 = 0;
		while (iVar26 < 3)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2044[iVar26 /*4*/].f_1)))
			{
			}
			else if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1484.f_208, &(uParam4->f_2044[iVar26 /*4*/].f_1)))
			{
			}
			else if (!MISC::IS_BIT_SET(uParam4->f_2057[iParam1->f_7 /*26*/].f_25, iVar26))
			{
			}
			else
			{
				func_307(iParam1, uParam4->f_2044[iVar26 /*4*/], uParam4->f_2044[iVar26 /*4*/].f_1, uParam4->f_2057[iParam1->f_7 /*26*/].f_21[iVar26]);
			}
			iVar26++;
		}
		return true;
	}
	return false;
}

bool func_204(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<7> Var6;
	int iVar18;

	func_308(uParam2, iParam1, uParam5);
	bVar0 = false;
	if (func_309(uParam0, iParam1, uParam2, uParam3, uParam4, uParam5, iParam6, &bVar0))
	{
		func_258(&(iParam1->f_1484), 524288);
		func_259(&(iParam1->f_1484), 4);
		if (!func_97(*iParam1, 1))
		{
			if (bVar0)
			{
				func_258(&(iParam1->f_1484), 67108864);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][MOCAP][CUTSCENE] MC_CUTSCENE_MOCAP_RUN - Set CUTSCENE_FLAG_FORCE_SKIP");
			}
			func_28(iParam1, 1);
		}
	}
	if (func_304(uParam5->f_2057[iParam1->f_7 /*26*/], &(iParam1->f_1484)))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][MOCAP][CUTSCENE] MC_CUTSCENE_MOCAP_RUN - The mocap has finished.");
		if (func_55(iParam1))
		{
			func_310(uParam0, 0);
		}
		return true;
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1484.f_208))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_1484.f_208, false))
		{
			iVar1 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam1->f_1484.f_208) * 1000f));
			iVar2 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam1->f_1484.f_208) * 1000f));
			bVar3 = !ENTITY::HAS_ANIM_EVENT_FIRED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[0 /*21*/].f_1.f_2), MISC::GET_HASH_KEY("NotFinalPlaylist"));
			if (!func_38(uParam2->f_5, 1))
			{
				if (bVar3 && func_311(uParam5, iVar1, iVar2))
				{
					DEBUG::_0xEF256AE8A5A27966(8736, 227, 7, "[MC][MOCAP][CUTSCENE] MC_CUTSCENE_MOCAP_RUN - Set MC_CUTSCENE_LOCAL_BITS_ABOUT_TO_END - ", iVar2, "/", iVar1, "(ms)");
					func_92(&(uParam2->f_5), 1);
				}
			}
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (MISC::IS_BIT_SET(uParam2->f_7, iVar4))
				{
				}
				else if (MISC::_IS_STRING_SPACE(&(uParam5->f_2019[iVar4 /*8*/].f_1)))
				{
				}
				else if (MISC::_IS_STRING_SPACE(&(uParam5->f_2019[iVar4 /*8*/].f_4)))
				{
				}
				else if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1484.f_208, &(uParam5->f_2019[iVar4 /*8*/].f_1)))
				{
				}
				else
				{
					iVar5 = func_312(iParam1->f_1484.f_208, &(uParam5->f_2019[iVar4 /*8*/].f_1), 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
					}
					else if (!ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, MISC::GET_HASH_KEY(&(uParam5->f_2019[iVar4 /*8*/].f_4))))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam2->f_7), iVar4);
						DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[MC][MOCAP][CUTSCENE] MC_CUTSCENE_MOCAP_RUN - Event: ", &(uParam5->f_2019[iVar4 /*8*/].f_4), " fired on entity: ", &(uParam5->f_2019[iVar4 /*8*/].f_1));
					}
				}
				iVar4++;
			}
			if (!func_38(uParam2->f_5, 8))
			{
				if (func_97(uParam0->f_1, 0))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1->f_1484.f_208, "ExportCamera", &Var6, false, 0, 2) && !func_175(Var6.f_6))
					{
						DEBUG::_0xEF256AE8A5A27966(3808, 227, 7, "[MC][MOCAP][CUTSCENE] MC_CUTSCENE_MOCAP_RUN - Moving focus point to cutscene end location - ", &(iParam1->f_9), " -> ", &(Var6.f_6));
						iParam1->f_9 = { Var6.f_6 };
						STREAMING::SET_FOCUS_POS_AND_VEL(iParam1->f_9, 0f, 0f, 0f);
					}
					func_92(&(uParam2->f_5), 8);
				}
			}
			if ((bVar3 && uParam5->f_4 > -2) && !func_97(*iParam1, 11))
			{
				iVar18 = 1000;
				if (uParam5->f_4 > -1)
				{
					iVar18 = uParam5->f_4;
				}
				if (func_313(uParam5, iVar1, iVar2, iVar18 + 100))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_OUT(iVar18);
					}
					func_258(&(iParam1->f_1484), 524288);
					func_259(&(iParam1->f_1484), 4);
					func_279(iParam6, 7);
					func_28(iParam1, 11);
					DEBUG::_0xEF256AE8A5A27966(139808, 227, 7, "[MC][MOCAP][CUTSCENE] MC_CUTSCENE_MOCAP_RUN - DO_SCREEN_FADE_OUT - Time: ", iVar18, " - ", iVar2, "/", iVar1, "(ms)");
				}
			}
		}
	}
	return false;
}

int func_205(var uParam0, int* iParam1, var uParam2)
{
	bool bVar0;

	bVar0 = true;
	if (!iParam1->f_1466)
	{
		if (!func_14(&(iParam1->f_1469)))
		{
			if (func_97(uParam0->f_1, 0))
			{
				func_15(&(iParam1->f_1469), 0, 0);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_FOCUS_CHANGE_END_COMMON - Starting the failsafe counter");
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_FOCUS_CHANGE_END_COMMON - Processing entities - screen faded in, don't hold up");
		}
		else if (func_14(&(iParam1->f_1469)) && func_314(&(iParam1->f_1469), 5000, 0))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_FOCUS_CHANGE_END_COMMON - Processing entities - Fail safe timer has expired! don't hold up");
		}
		else
		{
			bVar0 = false;
		}
	}
	if (!func_293(iParam1, uParam2, 0f, 0f, 0f))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_FOCUS_CHANGE_END_COMMON - bReady = TRUE, resetting failsafe timer");
		func_315(&(iParam1->f_1469));
		func_273(iParam1, 7);
		if (func_38(uParam2->f_5, 4))
		{
			return 2;
		}
		return 1;
	}
	return 0;
}

bool func_206(var uParam0, var uParam1)
{
	if (!func_97(uParam0->f_1, 0))
	{
		return false;
	}
	if (func_38(uParam1->f_19, 1) && !func_97(uParam0->f_1, 6))
	{
		return false;
	}
	return true;
}

bool func_207(int* iParam0)
{
	int iVar0;

	if (!func_97(*iParam0, 8))
	{
		return true;
	}
	func_285(64);
	func_285(128);
	if (func_280(255))
	{
		return true;
	}
	if (!func_97(*iParam0, 10))
	{
		if (iParam0->f_8 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_8))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0->f_8);
		}
		func_28(iParam0, 10);
		func_285(128);
		func_285(64);
		func_316(7, iVar0, 1, 0);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[Cutscene] PROCESS_MC_CUTSCENE_STATE_SPECTATOR_END_COMMON - Is Spectator - Restoring spectator, target: ", iParam0->f_8);
	}
	return false;
}

void func_208(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	func_317(uParam0, iParam1, uParam2, iParam3);
	if (func_38(uParam2->f_1651, 4) && func_97(*iParam1, 4))
	{
		func_306(1, iParam4);
		func_273(iParam1, 4);
	}
}

bool func_209(int* iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (func_38(uParam1->f_5, 16))
	{
		if ((bParam4 || !bParam3) || !CAM::_0x251241CAEC707106())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_POST_COMMON - Clearing MC_CUTSCENE_PLAYER_DATA_FLAGS_ControlOff");
			func_318(&(uParam1->f_5), 16);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_319(iParam0, uParam2))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_POST_COMMON - Restoring player control");
				func_320(1, 2);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!func_97(*iParam0, 8))
	{
		if (!func_38(uParam2->f_19, 512))
		{
			if (!bParam4 && func_39(&(iParam0->f_1471), 0, 0) <= 4000)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_210(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	if (*uParam0 < 7)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_319(iParam1, uParam3))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_CLEANUP_COMMON - Restoring player control");
		func_320(1, 2);
	}
	func_29(iParam1, uParam2);
	return true;
}

bool func_211(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

char* func_212(int iParam0)
{
	char* sVar0;

	sVar0 = "invalid net player status flag";
	switch (iParam0)
	{
		case 0:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN";
			break;
		case 3:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_DESIRED";
			break;
		case 4:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_ABSOLUTE";
			break;
		case 5:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_AT_CAMP";
			break;
		case 6:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_IN_MOONSHINE";
			break;
		case 7:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_JAIL";
			break;
		case 9:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_TRADE";
			break;
		case 8:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_FAST_TRAVEL_STATION";
			break;
		case 10:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_DEBUG";
			break;
		case 11:
			sVar0 = "PLAYSTAT_FLAG_FORCE_RESPAWN_ASAP";
			break;
		case 12:
			sVar0 = "PLAYSTAT_FLAG_SCRIPT_CONTROL_OVERRIDE";
			break;
		case 13:
			sVar0 = "PLAYSTAT_FLAG_MODE_OVERRIDE";
			break;
		case 14:
			sVar0 = "PLAYSTAT_FLAG_MISSION_OVERRIDE";
			break;
		case 15:
			sVar0 = "PLAYSTAT_FLAG_VERSUS_OVERRIDE";
			break;
		case 16:
			sVar0 = "PLAYSTAT_FLAG_GENERIC_SPAWN_FAR_ONCE";
			break;
		case 17:
			sVar0 = "PLAYSTAT_FLAG_PAUSE_RESPAWN_FADE_UP";
			break;
		case 18:
			sVar0 = "PLAYSTAT_FLAG_SKIP_RESPAWN_FADE_IN";
			break;
		case 19:
			sVar0 = "PLAYSTAT_FLAG_SKIP_RESPAWN_FADE_OUT";
			break;
		case 20:
			sVar0 = "PLAYSTAT_FLAG_SKIP_LOADING_SCREEN_SHUTDOWN";
			break;
		case 21:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_POST_FX";
			break;
		case 22:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_POST_FX_ONCE";
			break;
		case 23:
			sVar0 = "PLAYSTAT_FLAG_CLEANUP_MATCHMAKING_POST_FX";
			break;
		case 24:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_INVISIBLE_ONCE";
			break;
		case 25:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITHOUT_CONTROL_ONCE";
			break;
		case 26:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_SCRIPT_CONTROL_INFO";
			break;
		case 27:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_REGION_RESET";
			break;
		case 1:
			sVar0 = "PLAYSTAT_FLAG_IN_RESPAWN_SEQUENCE";
			break;
		case 28:
			sVar0 = "PLAYSTAT_FLAG_HIDE_SPECTATOR_UI";
			break;
		case 29:
			sVar0 = "PLAYSTAT_FLAG_SKIP_SPECTATOR_MODE_ON_DEATH";
			break;
		case 30:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_SPECTATOR_MODE_ON_DEATH";
			break;
		case 31:
			sVar0 = "PLAYSTAT_FLAG_INVISIBLE_TO_SPECTATOR_CAM";
			break;
		case 32:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_DEATH_CAM_HOLD_TIME";
			break;
		case 34:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_LOCKON";
			break;
		case 35:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_FIRING";
			break;
		case 36:
			sVar0 = "PLAYSTAT_FLAG_SECURITY_CLIENT";
			break;
		case 37:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_RESPAWN_INVINCIBILITY";
			break;
		case 38:
			sVar0 = "PLAYSTAT_FLAG_CAMP_RELOAD";
			break;
		case 39:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_GHOSTTOWN";
			break;
		case 41:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_INVENTORY_CONFIG";
			break;
		case 42:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_INVENTORY_CONFIG";
			break;
		case 43:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_AMMO_UI_CONFIG";
			break;
		case 44:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_AMMO_UI_CONFIG";
			break;
		case 47:
			sVar0 = "PLAYSTAT_FLAG_ACTIVATE_CUSTOM_CAM_ON_RESPAWN";
			break;
		case 48:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_CUSTOM_SPAWN_CONFIG";
			break;
		case 49:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_CUSTOM_SPAWN_CONFIG";
			break;
		case 50:
			sVar0 = "PLAYSTAT_FLAG_USE_CUSTOM_POSITION_WITH_MOUNT";
			break;
		case 53:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HUB";
			break;
		case 54:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HUB_ONCE";
			break;
		case 51:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_COUPON";
			break;
		case 52:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_COUPON_ONCE";
			break;
		case 59:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HANDHELD";
			break;
		case 60:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_HANDHELD_ONCE";
			break;
		case 61:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BLACKBOARD";
			break;
		case 62:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BLACKBOARD_ONCE";
			break;
		case 63:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_ANIMATION";
			break;
		case 64:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_ANIMATION_ONCE";
			break;
		case 65:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_MOUNT";
			break;
		case 66:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_MOUNT_ONCE";
			break;
		case 67:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RESPOT_DISABLED";
			break;
		case 68:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RESPOT_DISABLED_ONCE";
			break;
		case 70:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_MOUNT_ONCE";
			break;
		case 69:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_MOUNT";
			break;
		case 72:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_MOUNT_ONCE";
			break;
		case 71:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_MOUNT";
			break;
		case 73:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_MOUNT_ON_RESPAWN";
			break;
		case 75:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_ONCE";
			break;
		case 74:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE";
			break;
		case 78:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_VEHICLE_ONCE";
			break;
		case 77:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_VEHICLE";
			break;
		case 76:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_VEHICLE_ON_RESPAWN";
			break;
		case 82:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TRAIN_ONCE";
			break;
		case 81:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TRAIN";
			break;
		case 84:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_TRAIN_ONCE";
			break;
		case 83:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_TRAIN";
			break;
		case 79:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_NAVMESH";
			break;
		case 80:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_VEHICLE_NAVMESH_ONCE";
			break;
		case 86:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_VEHICLE_ONCE";
			break;
		case 85:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_ON_TARGET_VEHICLE";
			break;
		case 89:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_DISABLE_WATER_FAILSAFE";
			break;
		case 90:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_IN_WATER";
			break;
		case 91:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_IN_WATER_ONCE";
			break;
		case 92:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_RANDOM_SEED";
			break;
		case 93:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SPAWN_NEAR_LOCATION_ONCE";
			break;
		case 94:
			sVar0 = "PLAYSTAT_FLAG_DONT_RESPAWN_IN_VOLUME_LOCKS_ONCE";
			break;
		case 95:
			sVar0 = "PLAYSTAT_FLAG_REGENERATE_PEDSHOT_ONCE";
			break;
		case 40:
			sVar0 = "PLAYSTAT_FLAG_FAKE_GAMER_TAG";
			break;
		case 108:
			sVar0 = "PLAYSTAT_FLAG_PREVENT_MOUNT_RELEASE";
			break;
		case 96:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_DESIRED_WEAPON_IN_HAND";
			break;
		case 97:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_DESIRED_WEAPON_IN_HAND_ONCE";
			break;
		case 98:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BEST_WEAPON_IN_HAND";
			break;
		case 99:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_BEST_WEAPON_IN_HAND_ONCE";
			break;
		case 100:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_LAST_WEAPON_IN_HAND";
			break;
		case 101:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_LAST_WEAPON_IN_HAND_ONCE";
			break;
		case 102:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_IN_HAND";
			break;
		case 103:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_IN_HAND_ONCE";
			break;
		case 104:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_PROCESSING";
			break;
		case 105:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_WEAPON_PROCESSING_ONCE";
			break;
		case 106:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_ANIMAL_INVULNERABILITY";
			break;
		case 107:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_WITH_NO_ANIMAL_INVULNERABILITY_ONCE";
			break;
		case 87:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_ADJUSTED_OFFSET_FOR_TRANSPORT";
			break;
		case 88:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_USE_ADJUSTED_OFFSET_FOR_TRANSPORT_ONCE";
			break;
		case 45:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_DROP_WEAPONS_ON_DEATH";
			break;
		case 46:
			sVar0 = "PLAYSTAT_FLAG_DISABLE_LOOTING";
			break;
		case 109:
			sVar0 = "PLAYSTAT_FLAG_DONT_USE_ALPHA_FADE_ON_RESPAWN";
			break;
		case 110:
			sVar0 = "PLAYSTAT_FLAG_DONT_USE_ALPHA_FADE_ON_RESPAWN_ONCE";
			break;
		case 111:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_LEAVES_ALIVE_PED_ONCE";
			break;
		case 112:
			sVar0 = "PLAYSTAT_FLAG_FORCE_COLLISION_WHEN_RESPOT_TIMER_FINISHED";
			break;
		case 113:
			sVar0 = "PLAYSTAT_FLAG_ALLOW_INCAPACITATION";
			break;
		case 114:
			sVar0 = "PLAYSTAT_FLAG_STORE_DAMAGE_EVENT";
			break;
		case 118:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_SANS_WEAPONS";
			break;
		case 119:
			sVar0 = "PLAYSTAT_FLAG_REGISTER_LOADOUT_OVERRIDE_ON_RESPAWN";
			break;
		case 120:
			sVar0 = "PLAYSTAT_FLAG_REQUEST_LOADOUT_OVERRIDE_REGISTRATION";
			break;
		case 121:
			sVar0 = "PLAYSTAT_FLAG_CLEAR_LOADOUT_OVERRIDE_ON_RESPAWN";
			break;
		case 122:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_WEAPONS_IN_HAND";
			break;
		case 123:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_LOADOUT";
			break;
		case 124:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_INVENTORY_OVERRIDE";
			break;
		case 125:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_OUTFIT_OVERRIDE";
			break;
		case 126:
			sVar0 = "PLAYSTAT_FLAG_REFRESH_AMMO_TYPE_UNLOCKS";
			break;
		case 127:
			sVar0 = "PLAYSTAT_FLAG_SPECIAL_ABILITY_OVERRIDE_DEACTIVATION";
			break;
		case 128:
			sVar0 = "PLAYSTAT_FLAG_SPECIAL_ABILITY_DEACTIVATE_ON_CANCEL";
			break;
		case 129:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_NO_COMPONENT_LOAD";
			break;
		case 130:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_NO_EXPRESSION_LOAD";
			break;
		case 131:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_BLOCK_TEAM_RESET";
			break;
		case 132:
			sVar0 = "PLAYSTAT_FLAG_PAUSE_RELATIONSHIP_UPDATE";
			break;
		case 133:
			sVar0 = "PLAYSTAT_FLAG_DONT_PROCESS_FAST_INSTANCING";
			break;
		case 134:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_INTO_FAST_INSTANCE";
			break;
		case 2:
			sVar0 = "PLAYSTAT_FLAG_BYPASS_RESSURRECT_AND_TELEPORT";
			break;
		case 136:
			sVar0 = "PLAYSTAT_FLAG_OVERRIDE_PLAYER_ABILITIES";
			break;
		case 135:
			sVar0 = "PLAYSTAT_FLAG_GANG_FEUDS_ARE_UNLOCKED";
			break;
		case 115:
			sVar0 = "PLAYSTAT_FLAG_PAY_BOUNTY_ON_RESPAWN";
			break;
		case 117:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_PRESERVE_HEALTH";
			break;
		case 116:
			sVar0 = "PLAYSTAT_FLAG_RESPAWN_PRESERVE_DEADEYE";
			break;
		case 137:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_CORPSE_ON_RESPAWN_ONCE";
			break;
		case 138:
			sVar0 = "PLAYSTAT_FLAG_DESTROY_CORPSE_ON_RESPAWN";
			break;
		case 139:
			sVar0 = "PLAYSTAT_FLAG_KEEP_CORPSE_ON_RESPAWN_ONCE";
			break;
		case 140:
			sVar0 = "PLAYSTAT_FLAG_KEEP_CORPSE_ON_RESPAWN";
			break;
		case 141:
			sVar0 = "PLAYSTAT_FLAG_CANNOT_BE_CARRIED_WHEN_DEAD";
			break;
		case 142:
			sVar0 = "PLAYSTAT_FLAG_CLEANUP_TRANSITION_SETTINGS";
			break;
		case 33:
			sVar0 = "PLAYSTAT_FLAG_MAINTAIN_DEATH_CAM_ON_RESPAWN";
			break;
		case 144:
			sVar0 = "PLAYSTAT_FLAG_DONT_CLEAR_DRUNK_FOR_SPAWNING_OR_CUTSCENES";
			break;
		case 145:
			sVar0 = "PLAYSTAT_FLAG_DONT_SESSION_ON_RESPAWN_ONCE";
			break;
	}
	return sVar0;
}

bool func_213(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

void func_214(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_215(struct<7> Param0, var uParam7, var uParam8, int iParam9)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Absolute Start         ");
	DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vPosition                       - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
	switch (Param0.f_5)
	{
		case 1:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             fHeading                        - ", MISC::_0x2B6846401D68E563(Param0, 4));
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vTargetForHeading               - ", MISC::_0x6C4DBF553885F9EB(Param0.f_1));
			break;
		case 3:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             eiTargetForHeading              - ", UNK_0xE02C950E4C991632(Param0.f_4));
			break;
	}
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Absolute End         ");
}

void func_216(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_321(iParam0);
	DEBUG::_0xF0783374333FD8CE(40, 37, "NET_SPECIAL_CAM__KILL - Setting new display to ", func_322(iParam0, 0));
	if (!func_323(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Spectator cam wasn't already active.");
		return;
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Force fade set.  Fading.");
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_324(128) && !func_262(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_325() == 4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - We're going to clear the skip fade in flag just in case we're in the respawn sequence.");
		func_135(18);
	}
	func_285(1024);
	DEBUG::_0xF0783374333FD8CE(8, 37, "NET_SPECIAL_CAM__KILL - Killing spectator cam.");
	UNK_0x355E72323AEE83CC(37, 6);
}

void func_217(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_218(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_219(struct<30> Param0, int iParam30)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam30, "        Respawn Params Desired Start         ");
	switch (Param0.f_5)
	{
		case 1:
			DEBUG::_0xF0783374333FD8CE(40, iParam30, "             fHeading                        - ", MISC::_0x2B6846401D68E563(Param0, 4));
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(40, iParam30, "             vTargetForHeading               - ", MISC::_0x6C4DBF553885F9EB(Param0.f_1));
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
				DEBUG::_0xF0783374333FD8CE(40, iParam30, "             eiTargetForHeading              - ", UNK_0xE02C950E4C991632(Param0.f_4));
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(40, iParam30, "             eiTargetForHeading              - ", "ENTITY DOESN'T EXIST!  WHAT ARE YOU DOING?!");
			}
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17.f_6));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17.f_3));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_17));
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             outer.eType                     - ", func_326(Param0.f_17.f_9, 0));
	if (Param0.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vPosition                 - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vOrientation              - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6.f_3));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.vScale                    - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             inner.eType                     - ", func_326(Param0.f_6.f_9, 0));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vPosition                - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_COORDS(Param0.f_27)));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vOrientation             - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_ROTATION(Param0.f_27)));
		DEBUG::_0xF0783374333FD8CE(40, iParam30, "             target.vScale                   - ", MISC::_0x6C4DBF553885F9EB(VOLUME::_GET_VOLUME_SCALE(Param0.f_27)));
	}
	DEBUG::_0xF0783374333FD8CE(40, iParam30, "             bUseVolumeLockSafety            - ", MISC::_0xF216F74101968DB0(Param0.f_29));
	DEBUG::_0xF0783374333FD8CE(8, iParam30, "        Respawn Params Desired End         ");
}

void func_220(struct<7> Param0, var uParam7, var uParam8, int iParam9)
{
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Fallback Start         ");
	DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vPosition                       - ", MISC::_0x6C4DBF553885F9EB(Param0.f_6));
	switch (Param0.f_5)
	{
		case 1:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             fHeading                        - ", MISC::_0x2B6846401D68E563(Param0, 4));
			break;
		case 2:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             vTargetForHeading               - ", MISC::_0x6C4DBF553885F9EB(Param0.f_1));
			break;
		case 3:
			DEBUG::_0xF0783374333FD8CE(40, iParam9, "             eiTargetForHeading              - ", UNK_0xE02C950E4C991632(Param0.f_4));
			break;
	}
	DEBUG::_0xF0783374333FD8CE(8, iParam9, "        Respawn Params Fallback End         ");
}

char* func_221(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NSSF_INVALID";
		case 0:
			return "NSSF__MP__WHISTLE_DISABLED_THIS_FRAME";
		case 1:
			return "NSSF__MP__WHISTLE_DISABLED_THIS_FRAME_NO_HELP_TEXT";
		case 2:
			return "NSSF__MP__WHISTLE_DISABLED_THIS_FRAME_NO_HELP_TEXT_AND_NO_AUDIO";
		case 3:
			return "NSSF__MP__WHISTLE_SIMMED";
		case 4:
			return "NSSF__MP__WHISTLE_BUTTON_PRESSED";
		case 5:
			return "NSSF__MP__BONDING_DISABLED";
		case 6:
			return "NSSF__MP__INVENTORY_CACHE_IN_PROGRESS";
		case 7:
			return "NSSF__MP__INVENTORY_CACHE_NEEDS_RESTART";
		case 8:
			return "NSSF__MP__DISABLE_MOUNT_PERMADEATH";
		case 9:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_ME";
		case 10:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_GANG";
		case 11:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_CREW";
		case 12:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_FRIENDS";
		case 13:
			return "NSSF__MP__DRIVER_PERMISSION_OVERRIDE_ANYONE";
		case 14:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_ME";
		case 15:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_GANG";
		case 16:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_CREW";
		case 17:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_FRIENDS";
		case 18:
			return "NSSF__MP__PASSENGER_PERMISSION_OVERRIDE_ANYONE";
		case 19:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_ME";
		case 20:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_GANG";
		case 21:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_CREW";
		case 22:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_FRIENDS";
		case 23:
			return "NSSF__MP__CARGO_PERMISSION_OVERRIDE_ANYONE";
		case 24:
			return "NSSF__MP__STABLING_FEES_DISABLED";
		case 25:
			return "NSSF__MP__STABLING_FEES_DISABLED_THIS_RUN";
		case 26:
			return "NSSF__MP__STABLING_FEES_CALCULATED";
		case 27:
			return "NSSF__MP__STABLING_FEES_SUSPEND_CALCULATION";
		case 28:
			return "NSSF__MP__STABLING_FEES_SUSPEND_CALCULATION_THIS_RUN";
		case 29:
			return "NSSF__MP__STABLING_FEES_FORGIVE_IMMEDIATELY";
		case 30:
			return "NSSF__MP__STABLING_FEES_PAYMENT_SENT";
		case 31:
			return "NSSF__MP__MENU__MOUNT_LIST_INITIALIZED";
		case 32:
			return "NSSF__MP__MENU__INSPECTION_PANEL_INITIALIZED";
		case 33:
			return "NSSF__MP__MENU__SHOW_MOUNT_FILTER_OPTIONS";
		case 34:
			return "NSSF__MP__MENU__MOUNT_RENAME_REQUESTED";
		case 35:
			return "NSSF__MP__HORSE__DISMISS_ACTIVE_MOUNT";
		case 36:
			return "NSSF__MP__HORSE__TEMP_HORSE_ADDED";
		case 37:
			return "NSSF__MP__HORSE__SCANNER_SEARCH_STARTED";
		case 38:
			return "NSSF__MP__HORSE__SCANNER_SEARCH_DONE";
		case 39:
			return "NSSF__MP__HORSE__DESIRED_HORSE_SEARCH_IN_PROGRESS";
		case 40:
			return "NSSF__MP__HORSE__SEARCH_COLLECTION_CREATED";
		case 41:
			return "NSSF__MP__HORSE__WAIT_FOR_ACTIVE_HORSE_TO_BE_DELETED";
		case 42:
			return "NSSF__MP__HORSE__DISABLE_RESPAWN_DELAY";
		case 43:
			return "NSSF__MP__HORSE__USE_MISSION_OVERRIDE_SLOT";
		case 44:
			return "NSSF__MP__HORSE__SUPPRESS_BLIP";
		case 45:
			return "NSSF__MP__HORSE__SUPPRESS_NAMEPLATE";
		case 46:
			return "NSSF__MP__HORSE__DISABLE_AUTOMATIC_DESPAWN";
		case 47:
			return "NSSF__MP__HORSE__INSPECTION_MENU_DISABLED";
		case 48:
			return "NSSF__MP__HORSE__DISMISSED_HORSE_RECENTLY";
		case 49:
			return "NSSF__MP__HORSE__DISABLE_WHISTLE_RESPONSE";
		case 50:
			return "NSSF__MP__HORSE__IGNORE_DEATH_CALLABLE_CHECK";
		case 51:
			return "NSSF__MP__HORSE__IGNORE_DEATH_CALLABLE_CHECK_ONCE";
		case 52:
			return "NSSF__MP__HORSE__SUPPRESS_FAILED_SPAWN_HELP_TEXT";
		case 53:
			return "NSSF__MP__HORSE__MISSION_PED_RESERVED";
		case 54:
			return "NSSF__MP__HORSE__FORCE_EXISTENCE_FOR_ALL_PLAYERS";
		case 55:
			return "NSSF__MP__HORSE__DISABLE_GUNSHOT_REACTION";
		case 56:
			return "NSSF__MP__HORSE__SUPPRESS_HORSE_FLEE";
		case 57:
			return "NSSF__MP__HORSE__DISABLE_FATALLY_WOUNDED_BEHAVIOR";
		case 58:
			return "NSSF__MP__HORSE__DISABLE_JUMP_TO_HORSE";
		case 59:
			return "NSSF__MP__HORSE__DISABLE_DEFAULT_AMBIENT_TASK";
		case 60:
			return "NSSF__MP__HORSE__DISABLE_WEAPONS_PROMPT";
		case 61:
			return "NSSF__MP__HORSE__DISABLE_WEAPONS_EXCHANGE";
		case 62:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_WEAPONS_HOLD";
		case 63:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_WEAPONS";
		case 64:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_ITEMS";
		case 65:
			return "NSSF__MP__HORSE__DISABLE__HIDE_ILO_PROMPT__HORSE_FLEE";
		case 66:
			return "NSSF__MP__HORSE__OVERRIDE_HORSE_WHISTLE";
		case 67:
			return "NSSF__MP__HORSE__ACTIVE_HORSE_IS_INVULNERABLE";
		case 68:
			return "NSSF__MP__HORSE__ACTIVE_HORSE_KEEP_IN_FAST_INSTANCE";
		case 69:
			return "NSSF__MP__HORSE__ACTIVE_HORSE_NOT_READY_TO_RENDER";
		case 70:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_REQUEST_STARTED";
		case 71:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_REQUEST_COMPLETE";
		case 72:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_REQUEST_CANCELLED";
		case 73:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_DELETE_ACTIVE_MOUNT";
		case 74:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_MASTER_SET";
		case 75:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_USING_MISSION_OVERRIDE";
		case 76:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_GROUND_SNAP";
		case 77:
			return "NSSF__MP__HORSE__EXTERNAL_SPAWN_FORCE_SPAWN_CLOSE";
		case 78:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_REQUEST_STARTED";
		case 79:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_REQUEST_COMPLETE";
		case 80:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_DELETE_ACTIVE_MOUNT";
		case 81:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_REQUEST_IS_PERMANENT";
		case 82:
			return "NSSF__MP__HORSE__EXTERNAL_ADD_TRANSACTION_SENT";
		case 83:
			return "NSSF__MP__VEHICLE__DISMISS_ACTIVE_MOUNT";
		case 84:
			return "NSSF__MP__VEHICLE__TEMP_VEHICLE_ADDED";
		case 85:
			return "NSSF__MP__VEHICLE__DESIRED_VEHICLE_SEARCH_IN_PROGRESS";
		case 86:
			return "NSSF__MP__VEHICLE__SEARCH_COLLECTION_CREATED";
		case 87:
			return "NSSF__MP__VEHICLE__USE_MISSION_OVERRIDE_SLOT";
		case 88:
			return "NSSF__MP__VEHICLE__SCANNER_CREATED";
		case 89:
			return "NSSF__MP__VEHICLE__SCANNER_SEARCH_DONE";
		case 90:
			return "NSSF__MP__VEHICLE__SUPPRESS_BLIP";
		case 91:
			return "NSSF__MP__VEHICLE__SUPPRESS_NAMEPLATE";
		case 92:
			return "NSSF__MP__VEHICLE__DISABLE_AUTOMATIC_DESPAWN";
		case 93:
			return "NSSF__MP__VEHICLE__MISSION_VEHICLE_RESERVED";
		case 94:
			return "NSSF__MP__VEHICLE__ACTIVE_VEHICLE_SUSPENDED_BY_MISSION";
		case 95:
			return "NSSF__MP__VEHICLE__ACTIVE_VEHICLE_DISMISSED_RECENTLY";
		case 96:
			return "NSSF__MP__VEHICLE__ACTIVE_VEHICLE_DRAFT_HORSES_DETACHABLE";
		case 97:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_REQUESTED";
		case 98:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_TRANSITION";
		case 99:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_STARTED";
		case 100:
			return "NSSF__MP__VEHICLE__CALL_VEHICLE_SUMMONING";
		case 101:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_REQUEST_STARTED";
		case 102:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_REQUEST_CANCELLED";
		case 103:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_REQUEST_COMPLETE";
		case 104:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_DELETE_ACTIVE_MOUNT";
		case 105:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_FORCE_DESIRED_MODEL";
		case 106:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_FORCE_TEMPORARY";
		case 107:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_MASTER_SET";
		case 108:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_USING_MISSION_OVERRIDE";
		case 109:
			return "NSSF__MP__VEHICLE__EXTERNAL_SPAWN_GROUND_SNAP";
		case 110:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_REQUEST_STARTED";
		case 111:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_REQUEST_COMPLETE";
		case 112:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_DELETE_ACTIVE_MOUNT";
		case 113:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_REQUEST_IS_PERMANENT";
		case 114:
			return "NSSF__MP__VEHICLE__EXTERNAL_ADD_TRANSACTION_SENT";
		case 115:
			return "NSSF__MP__STABLE_MISSION__LAUNCHER_DISABLED";
		case 116:
			return "NSSF__MP__STABLE_MISSION__LAUNCH_REQUEST_PROCESSING";
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

bool func_222(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_223(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -2;
}

void func_224(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -1f;
}

void func_225(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
}

void func_226(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	sParam0->f_8 = 0;
}

void func_227(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	StringCopy(&(sParam0->f_8), "", 64);
}

void func_228(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_327(uParam0[iVar0 /*6*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		uParam0->f_92[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_123 = 0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		uParam0->f_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_185[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_188[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_414[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_511[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

void func_229(var uParam0)
{
}

void func_230(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	func_328(&(uParam0->f_1));
	func_329(&(uParam0->f_99));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_436[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_440[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&(uParam0->f_444[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_451[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_454[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_459[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_464[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_467[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_330(&(uParam0->f_470[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_330(&(uParam0->f_621[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_662[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_738[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_771[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_847[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_331(&(uParam0->f_880[iVar0 /*5*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_100(&(uParam0->f_931[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_100(&(uParam0->f_1082[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_100(&(uParam0->f_1233[iVar0 /*2*/]));
		iVar0++;
	}
	func_332(&(uParam0->f_1298));
}

void func_231(var uParam0)
{
	*uParam0 = 0f;
	uParam0->f_1 = 0;
}

bool func_232(var uParam0)
{
	if (!func_116(uParam0->f_4, 1))
	{
		return false;
	}
	return true;
}

bool func_233(int iParam0, vector3 vParam1, float fParam4)
{
	float fVar0;

	if (fParam4 == -1f)
	{
		return true;
	}
	if (fParam4 == 0f)
	{
		fVar0 = 100f;
	}
	else
	{
		fVar0 = fParam4;
	}
	return func_269(iParam0, vParam1, fVar0, 1, 1);
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Stack.Push(iParam4);
	Stack.Push(iParam5);
	Call_Loc(iParam0);
	return StackVal;
}

void func_235(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
		DEBUG::_0x4DC69742196F818A(8, 87, "Deleting volume ");
	}
}

char* func_236(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CUTSCENE_PLAYER_SELECTION_TYPE_ANY";
		case 1:
			return "MC_CUTSCENE_PLAYER_SELECTION_TYPE_OBJECTIVE";
		case 2:
			return "MC_CUTSCENE_PLAYER_SELECTION_TYPE_TEAM";
		case 3:
			return "MC_CUTSCENE_PLAYER_SELECTION_TYPE_LEADER";
		case 4:
			return "MC_CUTSCENE_PLAYER_SELECTION_TYPE_TRANSPORT";
		case 5:
			return "MC_CUTSCENE_PLAYER_SELECTION_TYPE_LOCAL";
		case 6:
			return "MC_CUTSCENE_PLAYER_SELECTION_TYPE_VARIATION";
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

int func_237(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_333(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_238(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_333(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((*uParam0)[iVar0 /*5*/] != iParam3)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_239(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_333(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = (*uParam0)[iVar0 /*5*/];
			iVar2 = GANG::_0x901E0DC25080C8B9(iVar1);
			if (!GANG::_0xD6F6ACF4392187FB(iVar2))
			{
			}
			else if (!GANG::_0x0F99F6436528A089(iVar2))
			{
			}
			else if (!GANG::_0x424B17A7DC5C90BC(iVar1))
			{
			}
			else
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_240(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	if (uParam3->f_1 < 0 || uParam3->f_1 >= 8)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 1, "iSelectionData: ", uParam3->f_1, " out of range, aborting GET_MC_CUTSCENE_SELECTION_PLAYER_OF_TEAM");
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_333(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_2 < 0 || (uParam0[iVar0 /*5*/])->f_2 >= 8)
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_2 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_241(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_333(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			Stack.Push(uParam3->f_1);
			Stack.Push(1135537454);
			Stack.Push(&iVar1);
			Stack.Push(&iVar2);
			Stack.Push(&iVar3);
			Call_Loc(iParam4);
			if (StackVal != 1)
			{
			}
			else
			{
				iVar4 = (*uParam0)[iVar0 /*5*/];
				iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
				iVar6 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar1));
				if (PED::IS_PED_IN_VEHICLE(iVar5, iVar6, true) && func_334(iVar5, iVar6) == uParam3->f_2)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_242(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_333(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if (*uParam0)[iVar0 /*5*/] != PLAYER::PLAYER_ID()
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_243(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_333(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_3 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_244(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if ((*uParam0)[iVar0 /*36*/] == iParam1)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[UGCVote][MMacK] You've tried to start two votes with the same type! This is bad.");
		}
		if ((*uParam0)[iVar0 /*36*/] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_245(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(*uParam0, 0);
}

bool func_246(var uParam0)
{
	if (!func_139(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 < 15)
	{
		return false;
	}
	else if (uParam0->f_4 == 15)
	{
		return !func_38(uParam0->f_5, 16);
	}
	return true;
}

bool func_247(var uParam0)
{
	if (!func_139(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 14)
	{
		return false;
	}
	return true;
}

int func_248()
{
	return Global_1051590.f_12;
}

char* func_249()
{
	return "unnamed";
}

int func_250(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_251(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_78(36, iParam0);
}

bool func_252(char* sParam0)
{
	if (func_335(sParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) != 1)
		{
			func_336(sParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275959.f_10, sParam0) == 1;
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_254()
{
	return Global_1102630.f_26.f_3341;
}

bool func_255(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (iVar0 == Global_1102630.f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_256(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_116(uParam0->f_1, 1))
	{
		return false;
	}
	uParam0->f_9 = { uParam0->f_1 };
	return true;
}

bool func_257(var uParam0, int iParam1)
{
	if (func_337(uParam0))
	{
		return true;
	}
	if (!func_338(uParam0, iParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2057[iParam1 /*26*/])))
	{
		return false;
	}
	return true;
}

void func_258(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_259(var uParam0, int iParam1)
{
	uParam0->f_12 = (uParam0->f_12 || iParam1);
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_SET_FLAG_TWO: setting flag - ", func_339(iParam1, 0));
}

void func_260(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_SET_EXIT_FLAG: setting exit flag - ", func_340(iParam1, 0));
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_SET_ENTER_FLAG: setting enter flag - ", func_341(iParam1, 0));
}

bool func_262(int iParam0)
{
	return (Global_1102630.f_4[Global_1106721[iParam0 /*2*/]] && Global_1106721[iParam0 /*2*/].f_1) == Global_1106721[iParam0 /*2*/].f_1;
}

void func_263(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_175(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
	uParam0->f_8 = { vParam4 };
	func_261(&(uParam0->f_263), 4194304);
	DEBUG::_0xF0783374333FD8CE(952, 109, "CUTSCENE_SET_ORIGIN: Pos: ", &vParam1, " Rot: ", &vParam4);
}

void func_264(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_SET_PLAYLIST: invalid sPlaylist, exiting");
		return;
	}
	StringCopy(&(uParam0->f_209), sParam1, 64);
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_SET_PLAYLIST_LABEL: setting playlist to: ", sParam1);
}

void func_265(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_REQUEST_ALT_PLAYLIST: invalid sPlaylist");
		return;
	}
	if (func_342(uParam0, sParam1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REQUEST_ALT_PLAYLIST: playlist already requested - ", sParam1);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])))
		{
			if (!func_343(uParam0, sParam1) || func_344(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_225[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, sParam1);
							DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REQUEST_ALT_PLAYLIST: requesting playlist: ", &(uParam0->f_225[iVar0 /*9*/]));
						}
					}
					else
					{
						func_258(uParam0, 4194304);
						DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REQUEST_ALT_PLAYLIST: could NOT request playlist yet as anim scene isn't created or loaded, will delay it but make sure CUTSCENE_PRELOAD is being called: ", &(uParam0->f_225[iVar0 /*9*/]));
					}
				}
				else
				{
					func_258(uParam0, 4194304);
					DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REQUEST_ALT_PLAYLIST: new playlist requested with delay so make sure CUTSCENE_PRELOAD is being called: ", &(uParam0->f_225[iVar0 /*9*/]));
				}
				return;
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_REQUEST_ALT_PLAYLIST: not requesting multistart as an alt playlist, as we normally load it anyways");
				return;
			}
		}
		iVar0++;
	}
	DEBUG::_0x83407B92D46F25C3(168, 109, "CUTSCENE_REQUEST_ALT_PLAYLIST: couldn't find any empty playlist index for ", sParam1, ", max is ", 4);
}

bool func_266(var uParam0)
{
	if (!func_182(uParam0))
	{
		return false;
	}
	return !func_119(uParam0->f_1, uParam0->f_9);
}

int func_267()
{
	return func_282();
}

int func_268()
{
	return Global_1102630.f_26.f_3342;
}

bool func_269(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "IS_ENTITY_IN_RANGE_OF_COORD: entity does not exist, returning FALSE");
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_345(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_270(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_COMMON");
	if (func_346(iParam1, uParam0, uParam2, uParam3))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_COMMON - Should unload");
		return 2;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!func_347(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar1 /*21*/].f_1.f_1), &(uParam3->f_25[iVar1 /*80*/].f_11[iVar2 /*34*/]), &(iParam1->f_14[iVar1 /*21*/].f_1.f_18), 1))
			{
				iVar0 = 0;
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_COMMON - Player ", iVar2, " start not loading ");
			}
			if (!func_347(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar1 /*21*/].f_1.f_1), &(uParam3->f_25[iVar1 /*80*/].f_11[iVar2 /*34*/].f_13), &(iParam1->f_14[iVar1 /*21*/].f_1.f_19), 0))
			{
				iVar0 = 0;
				DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_COMMON - Player ", iVar2, " end not loading ");
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!func_347(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_99[iVar1 /*20*/].f_1), &(uParam3->f_346[iVar1 /*29*/].f_3), &(iParam1->f_99[iVar1 /*20*/].f_18), 0))
		{
			iVar0 = 0;
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_COMMON - Ped ", iVar1, " start not loading ");
		}
		bVar3 = (iVar0 == 1 && func_348(uParam3->f_346[iVar1 /*29*/].f_3, uParam3->f_346[iVar1 /*29*/].f_16, 0.5f, 1));
		if (!func_347(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_99[iVar1 /*20*/].f_1), &(uParam3->f_346[iVar1 /*29*/].f_16), &(iParam1->f_99[iVar1 /*20*/].f_19), bVar3))
		{
			iVar0 = 0;
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STREAMING_STATE_LOADING_COMMON - Ped ", iVar1, " end not loading ");
		}
		iVar1++;
	}
	return iVar0;
}

bool func_271(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	char* sVar6;
	float fVar7;
	struct<8> Var8;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<8> Var19;

	if (bParam3)
	{
		uParam0->f_274++;
		if (uParam0->f_274 < 10)
		{
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: < DEFAULT_CUTSCENE_FRAME_UPDATE");
			return (func_344(uParam0, 256) && !func_344(uParam0, 4194304));
		}
		uParam0->f_274 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: invalid cutscene name");
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(40, 109, "trying to preload: ", &(uParam0->f_192));
	func_349(uParam0, sParam1);
	if (!func_344(uParam0, 64))
	{
		if (!func_175(func_350(uParam0)))
		{
			func_258(uParam0, 64);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: vCutPos is valid");
		}
		else if (func_351(uParam0, &vVar0, &vVar3))
		{
			uParam0->f_5 = { vVar0 };
			uParam0->f_8 = { vVar3 };
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: found cutscene \from cut file!");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: haven't found the origin yet");
		}
		return false;
	}
	sVar6 = UNK_0x8F77B33B6A34D8BA();
	fVar7 = func_278(Global_33, func_350(uParam0), 1);
	if (func_344(uParam0, 128) || func_344(uParam0, 256))
	{
		if ((fVar7 >= func_352(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
		{
			func_353(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
			}
			func_354(uParam0);
			func_81(uParam0, 128, 1);
			func_81(uParam0, 256, 1);
			func_81(uParam0, 4096, 1);
			func_81(uParam0, 32768, 1);
			func_81(uParam0, 16777216, 1);
		}
	}
	else if (fVar7 <= func_355(uParam0) || bParam2)
	{
		if (!func_344(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
			{
				if (func_355(uParam0) >= func_352(uParam0))
				{
					DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_PRELOAD: preload distance is >= than evict distance...evict should be smaller, otherwise will keep cycling between preload and evict until player is within evict range");
				}
				Var8 = { func_296(uParam0) };
				if (!func_356(uParam0, 1) && MISC::IS_STRING_NULL_OR_EMPTY(&Var8))
				{
					func_357(uParam0);
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: playlist wasn't set so defaulting to NormalStart playlist");
					Var8 = { func_296(uParam0) };
				}
				DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_PRELOAD: setting cutscene playlist to: ", &Var8);
				iVar16 = 256;
				if (!func_344(uParam0, 1))
				{
					iVar16 |= 2048;
				}
				if (func_356(uParam0, 2))
				{
					iVar16 |= 16384;
				}
				uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar16, &Var8, false, true);
				func_358(uParam0, 0, 0, 0, 0);
				func_258(uParam0, 128);
			}
		}
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(105128, 109, "CUTSCENE_PRELOAD: not in range to load: ", sParam1, " in script ", sVar6, "...player is ", fVar7, " meters away when preload range is ", func_355(uParam0));
	}
	if (func_344(uParam0, 128))
	{
		if (func_344(uParam0, 256) && !func_344(uParam0, 4194304))
		{
			DEBUG::_0xF0783374333FD8CE(680, 109, "Cutscene is streamed ", sParam1, " for ", sVar6);
			return true;
		}
		func_359(uParam0);
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
		{
			bVar17 = true;
			Var19 = { func_360(uParam0) };
			iVar18 = 0;
			while (iVar18 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar18 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_225[iVar18 /*9*/]), &Var19))
					{
						if (!uParam0->f_225[iVar18 /*9*/].f_8)
						{
							uParam0->f_225[iVar18 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, &(uParam0->f_225[iVar18 /*9*/]));
							DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_PRELOAD: requesting alt playlist: ", &(uParam0->f_225[iVar18 /*9*/]));
							bVar17 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &(uParam0->f_225[iVar18 /*9*/])))
						{
							DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_PRELOAD: waiting for alt playlist to load: ", &(uParam0->f_225[iVar18 /*9*/]));
							bVar17 = false;
						}
					}
					else
					{
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: ignoring MultiStart alt playlist as we now always load it");
					}
				}
				iVar18++;
			}
			if (!func_344(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, &Var19))
				{
					if (!func_344(uParam0, 16777216))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, &Var19);
						func_258(uParam0, 16777216);
						DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_PRELOAD: requesting MultiStart playlist - ", &Var19);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &Var19))
					{
						DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_PRELOAD: waiting for MultiStart to load - ", &Var19);
						bVar17 = false;
					}
				}
			}
			if (!bVar17)
			{
				DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: waiting for playlists");
				return false;
			}
			func_258(uParam0, 256);
			func_81(uParam0, 4194304, 1);
			DEBUG::_0xF0783374333FD8CE(680, 109, "Cutscene is streamed ", sParam1, " for ", sVar6);
			return true;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(680, 109, "CUTSCENE_PRELOAD: waiting for the following cutscene to load: ", sParam1, " in script ", sVar6);
		}
	}
	return false;
}

bool func_272(int* iParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_346(iParam0, uParam1, uParam2, uParam3))
	{
		return false;
	}
	return true;
}

void func_273(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_274(int* iParam0, var uParam1)
{
	int iVar0;

	TASK::_0x4F57397388E1DFF8();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_361(iVar0, 966820754, &(iParam0->f_14[iVar0 /*21*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_361(iVar0, 1627542854, &(iParam0->f_99[iVar0 /*20*/]));
		iVar0++;
	}
	uParam1->f_9 = { func_67() };
}

void func_275(int* iParam0, var uParam1, var uParam2)
{
	func_362(iParam0, uParam1, uParam2);
	func_363(iParam0, uParam1, uParam2);
	POPULATION::_0xF45E46DEECF7DF6E(4224, 0, 0, -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_364(0);
	}
	if (func_365(uParam1) || func_94(uParam1))
	{
		if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PLAYER_MENU")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("PLAYER_MENU"));
		}
		if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("PAUSE_MENU"));
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP_POI"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	}
	if (uParam1->f_4 != 0)
	{
		VOICE::_0xB3E8841F6BDAF83E();
	}
}

bool func_276(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = func_295(iParam1, iVar3);
		if (iVar4 < 0 || iVar4 >= 4)
		{
		}
		else
		{
			if (!func_366(uParam0, &(uParam0->f_7[iVar4 /*5*/]), iParam1, uParam2, iVar3, iVar3, 966820754, &(iParam1->f_14[iVar3 /*21*/]), uParam3, &(uParam3->f_25[iVar3 /*80*/]), iParam4))
			{
				if (bVar0)
				{
					DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on PLAYER ", iVar3, " eState: ", func_367(iParam1->f_14[iVar3 /*21*/].f_1.f_10, 0));
					bVar0 = false;
				}
			}
			func_368(&(iParam1->f_14[iVar3 /*21*/].f_1), &iVar1, &iVar2);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (!func_369(uParam0, iParam1, uParam2, iVar3, uParam3->f_346[iVar3 /*29*/], 1627542854, &(iParam1->f_99[iVar3 /*20*/]), uParam3, &(uParam3->f_346[iVar3 /*29*/]), &(uParam3->f_1669[iVar3 /*8*/]), iParam4))
		{
			if (bVar0)
			{
				DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on PED iCSIdx: ", iVar3, " iEntityIndex: ", uParam3->f_346[iVar3 /*29*/], " eState: ", func_367(iParam1->f_99[iVar3 /*20*/].f_10, 0));
				bVar0 = false;
			}
		}
		func_368(&(iParam1->f_99[iVar3 /*20*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		iVar5 = 0;
		if (!func_370(iParam1, uParam0, uParam2, iVar3, uParam3->f_927[iVar3 /*15*/], -1821507459, &(iParam1->f_500[iVar3 /*13*/]), &iVar5, uParam3, &(uParam3->f_927[iVar3 /*15*/]), &(uParam3->f_927[iVar3 /*15*/].f_3), &(uParam3->f_927[iVar3 /*15*/].f_9), &(uParam3->f_1830[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on ANIMAL iCSIdx: ", iVar3, " iEntityIndex: ", uParam3->f_927[iVar3 /*15*/], " eState: ", func_367(iParam1->f_500[iVar3 /*13*/].f_10, 0));
				bVar0 = false;
			}
		}
		func_368(&(iParam1->f_500[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar6 = 0;
		if (!func_370(iParam1, uParam0, uParam2, iVar3, uParam3->f_1228[iVar3 /*15*/], 1135537454, &(iParam1->f_761[iVar3 /*13*/]), &iVar6, uParam3, &(uParam3->f_1228[iVar3 /*15*/]), &(uParam3->f_1228[iVar3 /*15*/].f_3), &(uParam3->f_1228[iVar3 /*15*/].f_9), &(uParam3->f_1911[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on VEHICLEiCSIdx: ", iVar3, " iEntityIndex:  ", uParam3->f_1228[iVar3 /*15*/], " eState: ", func_367(iParam1->f_761[iVar3 /*13*/].f_10, 0));
				bVar0 = false;
			}
		}
		func_371(uParam0, &(iParam1->f_761[iVar3 /*13*/]), uParam3->f_1228[iVar3 /*15*/]);
		func_368(&(iParam1->f_761[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (!func_370(iParam1, uParam0, uParam2, iVar3, uParam3->f_1530[iVar3 /*15*/], 465509728, &(iParam1->f_1089[iVar3 /*14*/]), &(iParam1->f_1089[iVar3 /*14*/].f_13), uParam3, &(uParam3->f_1530[iVar3 /*15*/]), &(uParam3->f_1530[iVar3 /*15*/].f_3), &(uParam3->f_1530[iVar3 /*15*/].f_9), &(uParam3->f_1952[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on TRAIN iCSIdx: ", iVar3, " iEntityIndex: ", uParam3->f_1530[iVar3 /*15*/], " eState: ", func_367(iParam1->f_1089[iVar3 /*14*/].f_10, 0));
				bVar0 = false;
			}
		}
		func_368(&(iParam1->f_1089[iVar3 /*14*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar7 = 0;
		if (!func_370(iParam1, uParam0, uParam2, iVar3, uParam3->f_1379[iVar3 /*15*/], 422112462, &(iParam1->f_892[iVar3 /*13*/]), &iVar7, uParam3, &(uParam3->f_1379[iVar3 /*15*/]), &(uParam3->f_1379[iVar3 /*15*/].f_3), &(uParam3->f_1379[iVar3 /*15*/].f_9), &(uParam3->f_1957[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on OBJECT iCSIdx: ", iVar3, " iEntityIndex: ", uParam3->f_1379[iVar3 /*15*/], " eState: ", func_367(iParam1->f_892[iVar3 /*13*/].f_10, 0));
				bVar0 = false;
			}
		}
		func_368(&(iParam1->f_892[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar8 = 0;
		if (!func_370(iParam1, uParam0, uParam2, iVar3, uParam3->f_1546[iVar3 /*15*/], -230450704, &(iParam1->f_1023[iVar3 /*13*/]), &iVar8, uParam3, &(uParam3->f_1546[iVar3 /*15*/]), &(uParam3->f_1546[iVar3 /*15*/].f_3), &(uParam3->f_1546[iVar3 /*15*/].f_9), &(uParam3->f_1998[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				DEBUG::_0xEF256AE8A5A27966(41504, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on PROP iCSIdx: ", iVar3, " iEntityIndex: ", uParam3->f_1546[iVar3 /*15*/], " eState: ", func_367(iParam1->f_1023[iVar3 /*13*/].f_10, 0));
				bVar0 = false;
			}
		}
		func_368(&(iParam1->f_892[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 24)
	{
		if (!func_372(iParam1, uParam0, uParam2, iVar3, 0, &(iParam1->f_1104[iVar3 /*15*/]), uParam3, iVar1, iVar2, iParam4))
		{
			if (bVar0)
			{
				DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITIES_MOCAP - NOT READY! Waiting on NON-REG iCSIdx: ", iVar3, " eState: ", func_367(iParam1->f_1104[iVar3 /*15*/].f_10, 0));
				bVar0 = false;
			}
		}
		iVar3++;
	}
	return bVar0;
}

void func_277()
{
	if (!Global_1102630.f_16)
	{
		DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REQUEST_CLEAN_EVERYTHING_ASAP - Bailing early.  Player has not completed the first respawn.");
		return;
	}
	Global_1072032.f_28725.f_5 = 1;
	DEBUG::_0xF0783374333FD8CE(8, 45, "NET_TRANSITION_POLISH__REQUEST_CLEAN_EVERYTHING_ASAP");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
	UNK_0x355E72323AEE83CC(-1, 6);
}

float func_278(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_279(int iParam0, int iParam1)
{
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] Invoking fp MC_CUTSCENE_CLIENT_EVENT_HANDLER - event: ", func_373(iParam1, 0));
	Stack.Push(iParam1);
	Call_Loc(iParam0);
}

bool func_280(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102630.f_3 & 128 != 0;
	}
	return func_374(128, iParam0);
}

void func_281(bool bParam0)
{
	if (func_290(bParam0))
	{
		func_376(func_375(), 0);
	}
}

int func_282()
{
	return Global_1102630.f_26.f_3337;
}

bool func_283()
{
	DEBUG::_0xA308F935BDECCEC0(8, 38, "KILLCAM__IS_SAFE_TO_FADE - __KILLCAM__SAFE_TO_FADE_TIMER_IS_STARTED ", func_377());
	DEBUG::_0xA308F935BDECCEC0(8, 38, "KILLCAM__IS_SAFE_TO_FADE - __KILLCAM__TIMER__IS_COMPLETED(g_mpPlayerStatusLocalData.sKSKillcamData.iKillcamFadeTimerStart,__KILLCAM__SAFE_TO_FADE_TIME) ", func_378(Global_1102630.f_3520.f_17, 1500));
	DEBUG::_0xA308F935BDECCEC0(8, 38, "KILLCAM__IS_SAFE_TO_FADE - RETURN ", (func_377() && func_378(Global_1102630.f_3520.f_17, 1500)));
	return (func_377() && func_378(Global_1102630.f_3520.f_17, 1500));
}

void func_284(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	if (func_365(uParam0))
	{
		func_92(&(uParam0->f_5), 2);
	}
}

void func_285(int iParam0)
{
	if (func_379(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 || iParam0);
}

bool func_286(int iParam0)
{
	return !func_52(iParam0);
}

bool func_287()
{
	if (func_288() || func_290(0))
	{
		return false;
	}
	return true;
}

bool func_288()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PED::_0xB655DB7582AEC805(iVar0) || PED::IS_PED_INJURED(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_IS_PED_HOGTIED(iVar0)) || PED::IS_PED_FALLING(iVar0)) || PED::_IS_PED_LASSOED(iVar0))
	{
		return true;
	}
	return false;
}

void func_289()
{
	func_136(11);
	func_138(1, 1);
	func_214(&(Global_1102630.f_3879));
	Global_1102630.f_3879.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	Global_1102630.f_3879 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
	Global_1102630.f_3879.f_5 = 1;
	Global_1102630.f_26.f_3341 = 0;
	Global_1102630.f_26.f_3342 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_ASAP called.  Output starting...");
	func_215(Global_1102630.f_3879, 36);
	DEBUG::_0xF0783374333FD8CE(8, 36, "NET_PLAYER_STATUS_FORCE_RESPAWN_ASAP ...Output Complete.");
}

bool func_290(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915867.f_20638;
	}
	return (Global_1915867.f_20638 || Global_1915867.f_22504.f_1);
}

void func_291()
{
	if (func_290(0))
	{
		Global_1051777.f_43 = 1;
		DEBUG::_0xA308F935BDECCEC0(8, 139, "[NET_SHOP_FORCE_TERMINATE] Terminating shop.");
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 139, "[NET_SHOP_FORCE_TERMINATE] Unable to terminate shop as shop is inactive.");
	}
}

bool func_292(var uParam0, var uParam1)
{
	if (uParam1->f_2 != -1)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] PROCESS_MC_CUTSCENE_STATE_FOCUS_CHANGE_START_COMMON - Fading out ", uParam1->f_2);
			func_284(uParam0, uParam1->f_2);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] PROCESS_MC_CUTSCENE_STATE_FOCUS_CHANGE_START_COMMON - Screen not faded out, waiting");
			return false;
		}
	}
	return true;
}

bool func_293(int* iParam0, var uParam1, vector3 vParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;

	bVar0 = !func_175(vParam2);
	bVar1 = ((bVar0 && !func_175(iParam0->f_9)) || (!bVar0 && func_175(iParam0->f_9)));
	bVar2 = false;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1072032.f_28725.f_8.f_3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1072032.f_28725.f_8.f_3, false))
	{
		bVar2 = true;
	}
	if (!func_97(*iParam0, 7))
	{
		if (!bVar1)
		{
			func_315(&(iParam0->f_12));
			if (bVar0)
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), vParam2, true) < 100f)
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - IN RANGE - no load scene required");
						bVar3 = true;
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - OUT RANGE - Fade screen out");
						func_284(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (STREAMING::_0xCF45DF50C7775F2A())
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - OUT RANGE - Kill existing load scene");
						STREAMING::_0x5A8B01199C3E79C3();
					}
					if (STREAMING::_0x513F8AA5BF2F17CF(vParam2, 100f, 5))
					{
						DEBUG::_0xEF256AE8A5A27966(3744, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE  bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - OUT RANGE - start load scene @ ", &vParam2);
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(vParam2, 0f, 0f, 0f);
					iParam0->f_9 = { vParam2 };
					DEBUG::_0xEF256AE8A5A27966(3744, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - Shifting focus to: ", &(iParam0->f_9));
					bVar1 = true;
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam0->f_9, true) < 100f)
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - IN RANGE - no load scene required");
						bVar4 = true;
					}
					else
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - OUT RANGE - Fade screen out");
						func_284(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - Kill rendering script cams");
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
					if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - Kill destroy cutscene cam");
						CAM::DESTROY_CAM(iParam0->f_1478, false);
					}
					if (STREAMING::_0xCF45DF50C7775F2A())
					{
						DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - OUT RANGE - Kill existing load scene");
						STREAMING::_0x5A8B01199C3E79C3();
					}
					vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
					if (STREAMING::_0x513F8AA5BF2F17CF(vVar5, 100f, 5))
					{
						DEBUG::_0xEF256AE8A5A27966(3744, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " OUT RANGE - start load scene @ ", &vVar5);
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					STREAMING::CLEAR_FOCUS();
					iParam0->f_9 = { 0f, 0f, 0f };
					DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " - Clearing focus");
					bVar1 = true;
				}
			}
		}
		if (bVar1)
		{
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				if (!func_14(&(iParam0->f_12)))
				{
					func_151(&(iParam0->f_12), 0, 0);
				}
				if (STREAMING::_0x0909F71B5C070797() || func_314(&(iParam0->f_12), 5000, 0))
				{
					STREAMING::_0x5A8B01199C3E79C3();
					DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " Load scene complete after ", func_39(&(iParam0->f_12), 0, 0), " ms");
					func_28(iParam0, 7);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						return false;
					}
				}
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_FOCUS_CHANGE - bShiftFocus: ", MISC::_0xF216F74101968DB0(bVar0), " No area to load, finished");
				func_28(iParam0, 7);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					return false;
				}
			}
		}
	}
	return func_97(*iParam0, 7);
}

bool func_294()
{
	return Global_1072032.f_28725.f_8.f_13 != 0;
}

int func_295(int* iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return -1;
	}
	return iParam0->f_1[iParam1];
}

struct<8> func_296(var uParam0)
{
	return uParam0->f_209;
}

void func_297(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_SWITCH_PLAYLIST: invalid sPlaylist");
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_SWITCH_PLAYLIST: anim scene doesn't exist, can't switch yet!");
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_SWITCH_PLAYLIST: anim scene isn't loaded, can't switch yet!");
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, sParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_SWITCH_PLAYLIST: anim scene playlist isn't loaded, can't switch yet!");
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_225[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_209 };
			uParam0->f_225[iVar0 /*9*/] = { Var1 };
			DEBUG::_0xF0783374333FD8CE(168, 109, "CUTSCENE_SWITCH_PLAYLIST: switching to an alt playlist, shuffling current playlist ", &(uParam0->f_209), " to alt array");
		}
		iVar0++;
	}
	func_264(uParam0, sParam1);
	func_81(uParam0, 2097152, 1);
	func_258(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_208, sParam1, true);
}

void func_298(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		uParam0->f_17[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

struct<4> func_299(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return *sParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	StringCopy(&Var0, "mp_player_", 32);
	if (!bParam3)
	{
		if (PED::IS_PED_MALE(iParam1))
		{
			StringConCat(&Var0, "m_", 32);
		}
		else
		{
			StringConCat(&Var0, "f_", 32);
		}
	}
	if (iParam2 >= 0 && iParam2 < 4)
	{
		StringIntConCat(&Var0, iParam2 + 1, 32);
	}
	return Var0;
}

bool func_300(int* iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] SET_MC_CUTSCENE_ENTITY_MOCAP - null handle");
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam0->f_1484.f_208, sParam1))
	{
		DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE][MOCAP] SET_MC_CUTSCENE_ENTITY_MOCAP - handle: ", sParam1, " does not exist in the cutscene");
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (func_380(&(iParam0->f_1484), iParam2, sParam1, 0, ENTITY::GET_ENTITY_MODEL(iParam2), 1))
		{
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE][MOCAP] SET_MC_CUTSCENE_ENTITY_MOCAP - ", sParam1, " added to cutscene ");
			return true;
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE][MOCAP] SET_MC_CUTSCENE_ENTITY_MOCAP - ", sParam1, " failed to register");
			return false;
		}
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE][MOCAP] SET_MC_CUTSCENE_ENTITY_MOCAP - ", sParam1, " entity not registered for cutscene");
		return false;
	}
	return false;
}

bool func_301(int* iParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (iParam2 < 0)
	{
		return false;
	}
	switch (iParam3)
	{
		case 966820754:
			if (!bParam5)
			{
				*sParam4 = { func_299(&(uParam1->f_1652[iParam2 /*4*/]), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0->f_14[iParam2 /*21*/].f_1.f_1), iParam2, bParam6) };
				return true;
			}
			break;
		case 1627542854:
			if (bParam5)
			{
				*sParam4 = { uParam1->f_1669[iParam2 /*8*/].f_4 };
				return true;
			}
			else
			{
				*sParam4 = { uParam1->f_1669[iParam2 /*8*/] };
				return true;
			}
			break;
		case 1135537454:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1911[iParam2 /*4*/] };
				return true;
			}
			break;
		case 465509728:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1952[iParam2 /*4*/] };
				return true;
			}
			break;
		case 422112462:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1957[iParam2 /*4*/] };
				return true;
			}
			break;
		case 0:
			if (bParam5)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2 /*15*/].f_13 == -1)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2 /*15*/].f_14 == 0)
			{
				return false;
			}
			if (func_301(iParam0, uParam1, iParam0->f_1104[iParam2 /*15*/].f_13, iParam0->f_1104[iParam2 /*15*/].f_14, sParam4, 1, 1))
			{
				return true;
			}
			else if (func_301(iParam0, uParam1, iParam0->f_1104[iParam2 /*15*/].f_13, iParam0->f_1104[iParam2 /*15*/].f_14, sParam4, 0, 1))
			{
				iVar0 = iParam0->f_1104[iParam2 /*15*/].f_1;
				if (func_381(iVar0))
				{
					StringConCat(sParam4, "_horse", 32);
					return true;
				}
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] GET_MC_CUTSCENE_ENTITY_MOCAP_HANDLES - Found handle, but not a horse.");
			}
			DEBUG::_0xEF256AE8A5A27966(10784, 227, 7, "[MC][CUTSCENE][MOCAP] GET_MC_CUTSCENE_ENTITY_MOCAP_HANDLES - Couldn't find handle for non-reg entity ", iParam2, ", parent is ", func_382(iParam0->f_1104[iParam2 /*15*/].f_14, 0), " ", iParam0->f_1104[iParam2 /*15*/].f_13);
			break;
	}
	return false;
}

void func_302(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CHECK_ENTITIES_IN_SCENE: scene doesn't exist");
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CHECK_ENTITIES_IN_SCENE: scene not loaded");
		return;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) || func_383(&(uParam0->f_17[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
			{
				func_384(&(uParam0->f_17[iVar0 /*12*/]), 1);
				DEBUG::_0xF0783374333FD8CE(2216, 109, "CUTSCENE_CHECK_ENTITIES_IN_SCENE: entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " at index: ", iVar0, " IS in the scene");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2216, 109, "CUTSCENE_CHECK_ENTITIES_IN_SCENE: entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " at index: ", iVar0, " isn't in the scene");
			}
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(2216, 109, "CUTSCENE_CHECK_ENTITIES_IN_SCENE: entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " at index: ", iVar0, " is dead");
		}
		iVar0++;
	}
}

void func_303(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) || func_383(&(uParam0->f_17[iVar0 /*12*/]), 2))
		{
			if (func_383(&(uParam0->f_17[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
			{
				DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REGISTER_CUT_ENTITIES: registering entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1));
				func_385(uParam0, &(uParam0->f_17[iVar0 /*12*/].f_1), uParam0->f_17[iVar0 /*12*/], uParam0->f_17[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_17[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]);
					if (iVar1 != Global_33 && !func_383(&(uParam0->f_17[iVar0 /*12*/]), 16))
					{
						func_386(iVar1);
						DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REGISTER_CUT_ENTITIES: clearing ped damage for entity with handle - ", &(uParam0->f_17[iVar0 /*12*/].f_1));
					}
				}
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2216, 109, "CUTSCENE_REGISTER_CUT_ENTITIES: entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " at index: ", iVar0, " isn't in the scene");
			}
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(2216, 109, "CUTSCENE_REGISTER_CUT_ENTITIES: entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " at index: ", iVar0, " is dead");
		}
		iVar0++;
	}
}

bool func_304(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	int iVar0;

	func_349(uParam16, &uParam0);
	if (func_387(uParam16) != 1)
	{
		func_388(uParam16);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_33, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_387(uParam16))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam16->f_208, false))
				{
					func_389(uParam16, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
				{
					func_390(uParam16, 4);
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: Cutscene was playing but skipped!?");
					return false;
				}
				else
				{
					if (func_391(uParam16, 2))
					{
						Stack.Push(uParam16);
						Call_Loc(uParam16->f_189);
						DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_PLAY: calling leadout function");
					}
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: Cutscene is already playing!?");
				}
				func_390(uParam16, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: Cutscene anim scene doesn't exist....");
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam16->f_209)) && func_344(uParam16, 134217728))
				{
					DEBUG::_0xF0783374333FD8CE(8, 109, "...but a playlist is set and we're overriding multistart playlist so we'll just go with that.");
				}
				else
				{
					func_392(uParam16);
				}
				func_393(&(uParam16->f_1));
				func_390(uParam16, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_359(uParam16);
				if (!func_394(&(uParam16->f_1)))
				{
					func_395(&(uParam16->f_1), 0);
				}
				else if (func_396(&(uParam16->f_1)) >= 60f)
				{
					DEBUG::_0x83407B92D46F25C3(8, 109, "GLOBAL_PLAY_CUTSCENE: Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_390(uParam16, 4);
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(40, 109, "GLOBAL_PLAY_CUTSCENE: Waiting for previously requested cutscene to load: ", &uParam0);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
			{
				if (func_271(uParam16, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
					{
						DEBUG::_0xD9911C7B5F8CD69C(8, 109, "Cutscene was missing assets (check TTY)! Skipping...");
						func_390(uParam16, 4);
					}
					else if (!func_175(func_350(uParam16)) && !func_269(Global_33, func_350(uParam16), 100f, 1, 1))
					{
						if (!func_397(uParam16->f_263, 8388608))
						{
							func_398(1);
						}
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_350(uParam16), 0f, true, true, true, false);
						DEBUG::_0xF0783374333FD8CE(8, 109, "GLOBAL_PLAY_CUTSCENE: teleporting player to cutscene origin and loading cutscene");
					}
				}
				else if (func_396(&(uParam16->f_1)) >= 60f)
				{
					DEBUG::_0x83407B92D46F25C3(8, 109, "GLOBAL_PLAY_CUTSCENE: Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_390(uParam16, 4);
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(40, 109, "GLOBAL_PLAY_CUTSCENE: waiting on cutscene to load - ", &uParam0);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				func_399(1, 0);
				func_389(uParam16, &uParam0);
				func_390(uParam16, 3);
			}
			else if (func_396(&(uParam16->f_1)) >= 60f)
			{
				DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_PLAY: Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
				}
				func_390(uParam16, 4);
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: waiting for player teleport to finish");
			}
			break;
		case 3:
			func_400(uParam16);
			if (func_391(uParam16, 2))
			{
				Stack.Push(uParam16);
				Call_Loc(uParam16->f_189);
				DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_PLAY: calling leadout function");
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam16->f_208, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208) || func_344(uParam16, 512)))
			{
				if (!func_344(uParam16, 1024) && func_401(uParam16, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: resetting gameplay cam on CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA and a skip");
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_PLAY: skipped, waiting on CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA");
				}
				if (!func_344(uParam16, 512))
				{
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: was skipped");
					func_393(&(uParam16->f_1));
					func_258(uParam16, 512);
					func_390(uParam16, 4);
				}
				else if (func_344(uParam16, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: cutscene was skipped, something trying to fade in!");
						CAM::DO_SCREEN_FADE_OUT(0);
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: cutscene was skipped, force fading out until it ends");
					}
				}
			}
			else
			{
				func_388(uParam16);
			}
			if (func_344(uParam16, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_402(uParam16) - func_403(uParam16)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: BLOCK_ANIM_SCENE_FADING_NEXT_FRAME for <= 2.0");
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: BLOCK_ANIM_SCENE_FADING_NEXT_FRAME for WAS_ANIMSCENE_SKIPPED");
					}
				}
				if (func_404(uParam16, Global_33, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: BLOCK_ANIM_SCENE_FADING_NEXT_FRAME for CUTSCENE_ENTITY_FLAG_SET_EXIT_STATE");
				}
				if (!func_356(uParam16, 4))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_403(uParam16) > 5000)
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: BLOCK_ANIM_SCENE_FADING_NEXT_FRAME for IS_SCREEN_FADED_OUT OR IS_SCREEN_FADING_OUT");
					}
				}
			}
			if (func_405(uParam16))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					DEBUG::_0x9A6C65DDDBEC9C52(8, 109, "CUTSCENE_PLAY: somehow the cutscene's anim scene went invalid before IS_ANIM_SCENE_FINISHED hit");
				}
				DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: HAS_CUTSCENE_FINISHED");
				func_406(uParam16);
				func_407(uParam16);
				return true;
			}
			else
			{
				if (func_344(uParam16, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam16->f_208);
							DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: calling TRIGGER_ANIM_SCENE_SKIP");
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: not calling TRIGGER_ANIM_SCENE_SKIP, as we were already paused/skipped");
						}
						func_393(&(uParam16->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_258(uParam16, 512);
						func_81(uParam16, 67108864, 1);
						func_390(uParam16, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_344(uParam16, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208)) && CAM::IS_SCREEN_FADED_OUT()) && func_403(uParam16) <= 5000) && func_403(uParam16) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(uParam16->f_292);
					DEBUG::_0xF0783374333FD8CE(8, 0, "CUTSCENE_PLAY: fading in because CUTSCENE_GET_TIME(cutData) - ", func_403(uParam16));
				}
				if (!func_344(uParam16, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1495039362))
				{
					func_408(&(uParam16->f_264), 0);
					func_258(uParam16, 536870912);
					DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: EnablePlayerControl anim event hit, calling CUTSCENE_EXIT early");
				}
				if (func_403(uParam16) >= 5000 && func_403(uParam16) <= (func_402(uParam16) - 5000))
				{
					func_409();
				}
			}
			break;
		case 6:
			if (func_405(uParam16))
			{
				func_406(uParam16);
				func_407(uParam16);
				return true;
			}
			break;
		case 4:
			if (func_344(uParam16, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
					{
						func_258(uParam16, 1073741824 /* Float: 2f */);
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: CUTSCENE_FLAG_FADED_OUT_AFTER_PAUSE");
					}
				}
				DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: waiting for screen to fade out");
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, true);
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: pausing anim scene");
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
							DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: UI_FEED_CLEAR_CHANNEL(kFeedChannel_Location)");
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam16->f_208))
					{
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: anim scene is paused but we're still skipping");
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_391(uParam16, 4));
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_190);
					if (StackVal || StackVal)
					{
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: #IF NOT DEFINED(MISSION_DATA) & DEFINED(RCM_COMMON_DATA)");
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, false);
							DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: unpausing anim scene");
						}
						func_390(uParam16, 3);
					}
					else if (func_396(&(uParam16->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, false);
							DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: unpausing anim scene");
						}
						DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_PLAY: timed out after DEFAULT_CUTSCENE_SKIP_TIME_OUT");
						func_390(uParam16, 3);
					}
					else
					{
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: waiting for cutData.fpCutSkip");
					}
				}
				if (func_387(uParam16) == 3)
				{
					if (func_344(uParam16, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: CUTSCENE_FLAG_END_IN_FADE was set, fading out in cutscene skip");
					}
				}
			}
			break;
		case 5:
			func_390(uParam16, 4);
			break;
	}
	return false;
}

void func_305(int* iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_97(*iParam0, 8))
	{
		iVar0 = 8;
		if (func_410(57))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_BEGIN_COMMON - MC_OPTION_DISABLE_CUTSCENE_PED_BACKOFF is set, turning off player control with NPCF_DISABLE_PED_BACKOFF.");
			iVar0 |= 128;
		}
		if (!func_55(iParam0))
		{
			iVar0 |= 4;
			iVar0 |= 16;
		}
		func_320(0, iVar0);
		func_92(&(uParam2->f_5), 16);
		func_411(0, 0);
		func_412();
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 10f, 1);
	}
	func_277();
	if (func_55(iParam0))
	{
		func_310(uParam1, 1);
	}
	func_102(1);
	func_413(0);
	if (!func_38(uParam3->f_19, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", true);
	}
	iVar1 = func_157(uParam2->f_1.f_2);
	func_414(uParam3->f_1622[iVar1 /*3*/], 20f, 1);
	func_415(0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_279(iParam4, 1);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_BEGIN_COMMON - Desired Playback @ ", func_168(&(uParam1->f_31)));
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_BEGIN_COMMON - Triggered Playback @ ", UNK_0x9E23B1777A927DAD(NETWORK::GET_NETWORK_TIME_ACCURATE()));
}

void func_306(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][Cutscene] TOGGLE_MC_CUTSCENE_LOCAL_ENTITIES_VISIBILITY - setting props visibility to ", MISC::_0xF216F74101968DB0(bParam0));
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		func_234(iParam1, iVar0, -230450704, &iVar1, &iVar2, &iVar3);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
		{
		}
		else
		{
			iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar4, bParam0);
				DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[MC][Cutscene] TOGGLE_MC_CUTSCENE_LOCAL_ENTITIES_VISIBILITY - Prop: ", iVar0, " setting visibility to ", MISC::_0xF216F74101968DB0(bParam0));
			}
		}
		iVar0++;
	}
}

void func_307(int* iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	bool bVar0;
	int iVar1;

	switch (iParam1)
	{
		case 0:
			if (fParam5 != 0f)
			{
				bVar0 = true;
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_1484.f_208, &uParam2, bVar0, false);
			DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[MC][CUTSCENE] SET_MC_CUTSCENE_VARIABLE_VALUE - tlVarName: ", &uParam2, " BOOL set: ", MISC::_0xF216F74101968DB0(bVar0));
			break;
		case 1:
			iVar1 = BUILTIN::ROUND(fParam5);
			ANIMSCENE::SET_ANIM_SCENE_INT(iParam0->f_1484.f_208, &uParam2, iVar1, false);
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] SET_MC_CUTSCENE_VARIABLE_VALUE - tlVarName: ", &uParam2, " INT set: ", iVar1);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_FLOAT(iParam0->f_1484.f_208, &uParam2, fParam5, false, false);
			DEBUG::_0xEF256AE8A5A27966(1696, 227, 7, "[MC][CUTSCENE] SET_MC_CUTSCENE_VARIABLE_VALUE - tlVarName: ", &uParam2, " FLOAT set: ", fParam5);
			break;
	}
}

void func_308(var uParam0, int* iParam1, var uParam2)
{
	int iVar0;

	if ((func_97(*iParam1, 3) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1484.f_208)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_1484.f_208, false))
	{
		STREAMING::_0xD346248C1DCE0D76(6, 6, 10, 10);
		if (!func_97(*iParam1, 4))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MISC::IS_BIT_SET(uParam0->f_7, iVar0))
				{
				}
				else if (!MISC::ARE_STRINGS_EQUAL(&(uParam2->f_2019[iVar0 /*8*/].f_4), "TriggerMusic"))
				{
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] PROCESS_MC_CUTSCENE_BEGIN_HACK - MC_CUTSCENE_LOCAL_ENTITY_BITS_MPGVO1_INT_HackHDTex: ENABLED!");
					func_28(iParam1, 4);
				}
				iVar0++;
			}
		}
		else
		{
			GRAPHICS::_0x98A7CD5EA379A854();
		}
	}
}

bool func_309(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;

	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_416();
	NETWORK::_0x236905C700FDB54D();
	func_417(0, 0, 1);
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	if (func_161(uParam5))
	{
		iVar0 = func_162(*uParam2);
		if (func_163(uParam3, iVar0))
		{
			iVar1 = 0;
			if (NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD()))
			{
				iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			iVar2 = func_171(uParam3, iVar0);
			func_418(uParam4, uParam3[iVar2 /*36*/], 0, &iVar3, &uVar4);
			if (iVar3 < 1)
			{
				if (!MISC::IS_BIT_SET((*uParam4)[iVar1 /*38*/], 6))
				{
					MISC::SET_BIT(uParam4[iVar1 /*38*/], 6);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_RUN_COMMON - Set ciCLIENT_BS_VOTE_SHOW_ON_HELD for local part ", iVar1);
				}
			}
			else if (MISC::IS_BIT_SET((*uParam4)[iVar1 /*38*/], 6))
			{
				MISC::CLEAR_BIT(uParam4[iVar1 /*38*/], 6);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_RUN_COMMON - Clear ciCLIENT_BS_VOTE_SHOW_ON_HELD for local part ", iVar1);
			}
			if (!func_245(uParam4[iVar1 /*38*/], iVar0))
			{
				func_420(uParam4[iVar1 /*38*/], func_419("VOTE_SKIP_CONTEXT"), 0, joaat("INPUT_SKIP_CUTSCENE"), 6);
				func_421(uParam4[iVar1 /*38*/], iVar0, !func_97(*iParam1, 8));
				MISC::SET_BIT(uParam4[iVar1 /*38*/], 7);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_RUN_COMMON - Setting vote eligible");
			}
			if (func_38(uParam2->f_5, 1) || func_97(*iParam1, 0))
			{
				if (!func_422(uParam4[iVar1 /*38*/]))
				{
					func_423(uParam4[iVar1 /*38*/]);
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_RUN_COMMON - Setting vote invalidated as we are about to end the cutscene");
				}
				func_424(uParam4[iVar1 /*38*/]);
			}
			else if (func_425(uParam4[iVar1 /*38*/]) && func_97(uParam0->f_1, 0))
			{
				if (func_172(uParam3[iVar2 /*36*/]) && func_426(uParam4, uParam3[iVar2 /*36*/]) == 0)
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_RUN_COMMON - Vote has come through to skip the cutscene, flagging MC_CUTSCENE_LOCAL_BITS_SKIP");
					func_28(iParam1, 0);
					func_424(uParam4[iVar1 /*38*/]);
				}
			}
		}
	}
	if (func_97(*iParam1, 0))
	{
		bVar5 = true;
		*bParam7 = 1;
	}
	else if (func_38(uParam2->f_5, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam1->f_9, true) >= 100f)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][MOCAP][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_RUN_COMMON - Fading out");
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (func_97(*iParam1, 0))
			{
				uParam2->f_6 = 2;
				func_279(iParam6, 5);
			}
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][MOCAP][CUTSCENE] PROCESS_MC_CUTSCENE_STATE_RUN_COMMON - Faded out");
			return true;
		}
	}
	return false;
}

void func_310(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] SET_MC_CUTSCENE_FAST_INSTANCE - bOn: ", MISC::_0xF216F74101968DB0(bParam1));
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] SET_MC_CUTSCENE_FAST_INSTANCE - Already in a fast instance! - ", NETWORK::_0xD9267375834C5EAB(PLAYER::GET_PLAYER_INDEX()));
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		}
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::_0x89D803CD48622150(1);
		NETWORK::_0x34BC1E79546BA543(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 7, false);
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(0, false, 7);
		NETWORK::_0xDC6AD5C046F33AB4(1, 1);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] SET_MC_CUTSCENE_FAST_INSTANCE - ENABLED");
	}
	else if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_7[iVar0 /*5*/]))
			{
			}
			else
			{
				iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar0 /*5*/]);
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, true, 256);
			}
			iVar0++;
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		NETWORK::_0x89D803CD48622150(0);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] SET_MC_CUTSCENE_FAST_INSTANCE - DISABLED");
		UNK_0x355E72323AEE83CC(227, 6);
	}
}

bool func_311(var uParam0, int iParam1, int iParam2)
{
	return func_313(uParam0, iParam1, iParam2, 600);
}

int func_312(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return func_427();
}

bool func_313(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_166(uParam0->f_23, iParam3);
	if ((iParam1 - iParam2) <= iVar0)
	{
		return true;
	}
	return false;
}

bool func_314(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_151(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_315(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_316(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	int iVar0;
	bool bVar1;

	DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "LAUNCH_NET_SPECIAL_CAM_FOR_UGC - Calling NET_SPECIAL_CAM__LAUNCH w ", func_322(iParam0, 0), ", bDoFadeOut ", bParam2, ", iFadeOutTime ", sParam3);
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iVar0 == iParam1)
	{
		bVar1 = true;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "LAUNCH_NET_SPECIAL_CAM_FOR_UGC bIsMe = TRUE");
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "LAUNCH_NET_SPECIAL_CAM_FOR_UGC bIsMe = FALSE");
	}
	func_428(1);
	func_429(iParam0, iParam1, bParam2, sParam3, bVar1, 0);
}

void func_317(var uParam0, int* iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_279(iParam3, 2);
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(iVar0) && !func_97(*iParam1, 8))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		if (func_430(iVar0, -1959848946))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_STATE_END_COMMON - Clearing ped tasks");
		}
		iVar1 = iParam1->f_6;
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar2 = func_295(iParam1, iVar1);
			if (iVar2 >= 0 && iVar2 < 4)
			{
				iVar3 = uParam0->f_7[iVar2 /*5*/].f_3;
				if (iVar3 < 0 || iVar3 > 2)
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_STATE_END_COMMON - iVariation out of range, setting to 0");
					iVar3 = 0;
				}
				if (func_97(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 3))
				{
					func_431(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_16);
				}
				else
				{
					if (!func_97(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 1))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_14, 1f);
					}
					if (!func_97(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 2))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_15, 1f);
					}
				}
				if (func_97(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 0))
				{
					DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_STATE_END_COMMON - Rolling start");
					func_432(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_19, uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_20, 1, 1);
				}
			}
		}
	}
	func_433(iParam1);
	func_15(&(iParam1->f_1471), 0, 0);
	func_434(0, 0);
	func_415(1);
	if (!func_38(uParam2->f_19, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	STREAMING::CLEAR_FOCUS();
	iParam1->f_9 = { 0f, 0f, 0f };
	Global_1048584 = 0;
	func_102(0);
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (func_38(uParam0->f_3, 2))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_STATE_END_COMMON - Cutscene is set by server to stay faded out");
			if (func_97(*iParam1, 8))
			{
				func_435(64);
				func_435(128);
			}
		}
		else if (func_38(uParam2->f_19, 2048))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_STATE_END_COMMON - Cutscene is set by globals to stay faded out");
			func_279(iParam3, 6);
			if (func_97(*iParam1, 8))
			{
				func_435(64);
				func_435(128);
			}
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_STATE_END_COMMON - Cutscene fading back in");
			CAM::DO_SCREEN_FADE_IN(500);
			if (func_97(*iParam1, 8))
			{
				func_435(64);
				func_435(128);
			}
		}
	}
	func_436();
}

void func_318(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_319(int* iParam0, var uParam1)
{
	if (func_97(*iParam0, 8))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] SHOULD_MC_CUTSCENE_CLEANUP_RESTORE_CONTROL - Returning FALSE, player is a spectator");
		return false;
	}
	if (func_38(uParam1->f_19, 2048))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] SHOULD_MC_CUTSCENE_CLEANUP_RESTORE_CONTROL - Returning FALSE, cutscene is set to remain faded and is faded out");
			return false;
		}
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] SHOULD_MC_CUTSCENE_CLEANUP_RESTORE_CONTROL - Returning TRUE");
	return true;
}

void func_320(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_437(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_438(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_321(int iParam0)
{
	Global_1102630.f_26.f_12 = iParam0;
}

char* func_322(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_FREE_MODE_OPTIONS";
		case 1:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_NET_STORY_MISSION_OPTIONS";
		case 2:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_MISSION_OPTIONS";
		case 3:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_MISSION_OPTIONS_WITH_NO_BUTTONS";
		case 4:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS";
		case 5:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS_PLUS_EXIT";
		case 6:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATE_FROM_DEATH_OPTIONS_PLUS_EXIT_KILL_CAM";
		case 7:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY";
		case 8:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_CANCEL";
		case 9:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_NO_BUTTONS";
		case 10:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_WITH_NO_BUTTONS_NO_FADE";
		case 11:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_PLUS_EXIT";
		case 12:
			return "SPEC_CAM_DISPLAY_TYPE__GO_TO_SPECTATOR_DIRECTLY_PLUS_EXIT_KILL_CAM";
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

bool func_323(int iParam0)
{
	return (Global_1102630.f_26.f_7 && iParam0) != 0;
}

bool func_324(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

int func_325()
{
	if (Global_1102630 <= 5)
	{
		return Global_1102630;
	}
	if (Global_1102630 <= 22)
	{
		return 4;
	}
	if (Global_1102630 <= 25)
	{
		return 3;
	}
	return 26;
}

char* func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("VOLBOX"):
			return "VOLBOX";
		case joaat("VOLSPHERE"):
			return "VOLSPHERE";
		case joaat("VOLCYLINDER"):
			return "VOLCYLINDER";
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

void func_327(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_100(&(uParam0->f_2));
	func_100(&(uParam0->f_4));
}

void func_328(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_439(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
	uParam0->f_97 = 0;
}

void func_329(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_440(uParam0[iVar0 /*14*/]);
		iVar0++;
	}
}

void func_330(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_331(var uParam0)
{
	*uParam0 = "";
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_100(&(uParam0->f_3));
}

void func_332(var uParam0)
{
	int iVar0;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	uParam0->f_17 = joaat("REL_NO_RELATIONSHIP");
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_441(&(uParam0->f_18[iVar0 /*2*/]));
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = 0.25f;
	uParam0->f_33 = 10f;
	uParam0->f_34 = -1f;
	uParam0->f_35 = -1f;
	uParam0->f_36 = 0f;
	uParam0->f_37 = 0f;
	uParam0->f_38 = 0;
}

bool func_333(char* sParam0, var uParam1, int iParam2, bool bParam3)
{
	if (*uParam1 == 255)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CAN_USE_PLAYER_FOR_SELECTION - iIdx: ", sParam0, " Player index is invalid, return false");
		return false;
	}
	if (func_442(*uParam1))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CAN_USE_PLAYER_FOR_SELECTION - iIdx: ", sParam0, " Player spectacting, return false");
		return false;
	}
	if (MISC::IS_BIT_SET(iParam2, sParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CAN_USE_PLAYER_FOR_SELECTION - iIdx: ", sParam0, " Player in use, return false");
		return false;
	}
	if (bParam3)
	{
		if (!func_38(uParam1->f_1, 1))
		{
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CAN_USE_PLAYER_FOR_SELECTION - iIdx: ", sParam0, " Player not optional, skipping");
			return false;
		}
	}
	return true;
}

int func_334(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_335(char* sParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1072032.f_28387), sParam0))
	{
		return true;
	}
	return false;
}

void func_336(char* sParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1275959.f_22[iVar0])
	{
		func_443(sParam0);
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_444(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_ALLY: Setting ally for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 1);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 1;
}

bool func_337(var uParam0)
{
	if (func_38(uParam0->f_1651, 32))
	{
		return true;
	}
	return false;
}

bool func_338(var uParam0, int iParam1)
{
	if (func_175(uParam0->f_1622[iParam1 /*3*/]))
	{
		return false;
	}
	return true;
}

char* func_339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CUTSCENE_FLAGS_TWO_DEFAULT";
		case 1:
			return "CUTSCENE_FLAGS_TWO_ALLOWBLANKPLAYLIST";
		case 2:
			return "CUTSCENE_FLAGS_TWO_SCREENEVENTSWITHNOPLAYER";
		case 4:
			return "CUTSCENE_FLAGS_TWO_ALLOWMIDCUTSCENEFADES";
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

char* func_340(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CUTSCENE_EXIT_FLAG_DEFAULT";
		case 1:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_RESTORE_PLAYER_CONTROL";
		case 2:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_RESTORE_HUD";
		case 4:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_RESTORE_RADAR";
		case 8:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_RESTORE_PLAYER_VULNERABILITY";
		case 16:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_RESTORE_USE_CONTEXTS";
		case 32:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_RESTORE_DISGUISE";
		case 64:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_RESTORE_GAMEPLAY_CAM_FROM_STUB";
		case 128:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_CLEANUP_SKIP_PROMPT";
		case 256:
			return "CUTSCENE_EXIT_FLAG_RESTORED_HOLSTER";
		case 512:
			return "CUTSCENE_EXIT_FLAG_ALLOW_SKIP_PROMPT_WHILE_LOADING";
		case 1024:
			return "CUTSCENE_EXIT_FLAG_EXIT_ON_CAMERA_EXITING";
		case 2048:
			return "CUTSCENE_EXIT_FLAG_DO_NOT_CLEAR_FAST_INSTANCE";
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

char* func_341(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CUTSCENE_ENTER_FLAG_DEFAULT";
		case 1:
			return "CUTSCENE_ENTER_FLAG_ALLOW_PAD_SHAKE_DURING_CUTSCENE";
		case 2:
			return "CUTSCENE_ENTER_FLAG_DISPLAY_RADAR";
		case 4:
			return "CUTSCENE_ENTER_FLAG_DISPLAY_HUD";
		case 8:
			return "CUTSCENE_ENTER_FLAG_CLEAR_PLAYER_TASKS_IMMEDIATELY";
		case 16:
			return "CUTSCENE_ENTER_FLAG_ALLOW_CARRYING";
		case 32:
			return "CUTSCENE_ENTER_FLAG_ALLOW_EXPLOSIONS";
		case 64:
			return "CUTSCENE_ENTER_FLAG_ALLOW_FIRES";
		case 128:
			return "CUTSCENE_ENTER_FLAG_ALLOW_PROJECTILES";
		case 256:
			return "CUTSCENE_ENTER_FLAG_FORCE_HOLSTER_WEAPONS";
		case 512:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_STOP_HINT_CAM";
		case 1024:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_STOP_CIMEMATIC_CAM";
		case 2048:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_RELOAD_PLAYER_WEAPONS";
		case 4096:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_CLEAR_PLAYER_DAMAGE";
		case 8192:
			return "CUTSCENE_ENTER_FLAG_GIVE_PLAYER_BEST_LONGARM";
		case 16384:
			return "CUTSCENE_ENTER_FLAG_TRIGGERED_IN_FIRST_PERSON";
		case 32768:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_REMOVE_CONTROL";
		case 65536:
			return "CUTSCENE_ENTER_FLAG_PEDS_DO_NOT_IGNORE_PLAYER";
		case 131072:
			return "CUTSCENE_ENTER_FLAG_PREVENT_EVERYONE_BACK_OFF";
		case 262144:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_DROP_PROPS";
		case 524288:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_REMOVE_DISGUISE";
		case 1048576:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_CLEAR_TRANSACTION_FEED_QUEUE";
		case 2097152:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_CLEAR_DRUNK";
		case 4194304:
			return "CUTSCENE_ENTER_FLAG_ORIGIN_OVERRIDDEN";
		case 8388608:
			return "CUTSCENE_ENTER_FLAG_DO_NOT_FAST_INSTANCE";
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

bool func_342(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_225[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_343(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_IS_PLAYLIST_MULTI: invalid sPlaylist");
		return false;
	}
	Var0 = { func_360(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_344(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

float func_345(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_346(int* iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (func_266(uParam2))
	{
		return true;
	}
	if (uParam1->f_2 == 3 || uParam1->f_2 == 2)
	{
		return false;
	}
	if (uParam2->f_4 > 10)
	{
		return true;
	}
	if (func_97(*iParam0, 13))
	{
		return true;
	}
	iVar0 = func_157(uParam2->f_9.f_2);
	if (!func_269(PLAYER::PLAYER_PED_ID(), uParam3->f_1622[iVar0 /*3*/], 300f, 1, 1))
	{
		return true;
	}
	if (func_267() != 0 && func_254() != func_268())
	{
		return true;
	}
	return false;
}

bool func_347(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	char cVar7[64];

	if (uParam3->f_7 != 3)
	{
		return true;
	}
	iVar0 = 1;
	if (!bParam5 && !VOLUME::_DOES_VOLUME_EXIST(*uParam4))
	{
		vVar1 = { 2f, 2f, 2f };
		vVar4 = { *uParam3 };
		StringCopy(&cVar7, "[MC][CS] CoverLoadArea - ", 64);
		StringConCat(&cVar7, " iCSIdx: ", 64);
		StringIntConCat(&cVar7, iParam0, 64);
		*uParam4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, uParam3->f_3, vVar1, &cVar7);
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam4))
		{
			TASK::_0x2A10538D0A005E81(*uParam4, 1);
			DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][Cutscene] CREATE_MC_CUTSCENE_PED_COVER_LOADING_AREA - ", func_382(iParam1, 0), " : ", iParam0, " Cover Volume creation SUCCESSFUL");
		}
		else
		{
			iVar0 = 0;
			DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][Cutscene] CREATE_MC_CUTSCENE_PED_COVER_LOADING_AREA -", func_382(iParam1, 0), " : ", iParam0, " Cover Volume creation FAILED");
		}
	}
	return iVar0;
}

bool func_348(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_349(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_344(uParam0, 8192))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_FIXUP_CUTSCENE_LABEL: already fixed it up");
		return;
	}
	DEBUG::_0x1B08D1EB9D8C4931(680, 109, "CUTSCENE_FIXUP_CUTSCENE_LABEL: sCutName is: ", sParam1, " while cutData.tlCut is ", &(uParam0->f_192));
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_192), {func_445("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 16);
			DEBUG::_0x1B08D1EB9D8C4931(40, 109, "CUTSCENE_FIXUP_CUTSCENE_LABEL: We have more than one @ symbol, setting tlCut to ", &(uParam0->f_192));
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_192), {func_445("cutscene@", sParam1, 1, 63)}, 16);
		DEBUG::_0x1B08D1EB9D8C4931(680, 109, "CUTSCENE_FIXUP_CUTSCENE_LABEL: We don't have any @ symbols sCutName: \"", sParam1, "\" so adding \"cutscene@\" which sets cutData.tlCut to ", &(uParam0->f_192));
	}
	func_258(uParam0, 8192);
}

Vector3 func_350(var uParam0)
{
	return uParam0->f_5;
}

bool func_351(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	var uVar0;
	int iVar8;
	struct<4> Var9;

	*vParam1 = { 0f, 0f, 0f };
	*vParam2 = { 0f, 0f, 0f };
	MemCopy(&uVar0, {func_446(uParam0)}, 8);
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_FIND_ORIGIN: finding origin for the scene: ", &uVar0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		iVar8 = 0;
		if (func_344(uParam0, 2) && !func_344(uParam0, 67108864))
		{
			iVar8 |= 256;
		}
		uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar8, &(uParam0->f_209), false, true);
		DEBUG::_0xF0783374333FD8CE(680, 109, "CUTSCENE_FIND_ORIGIN: LOAD_ANIM_SCENE for the scene: ", &uVar0, ", playlist: ", &(uParam0->f_209));
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_208, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_208, func_447(Global_33), &Var9, false, 0, 2))
		{
			*vParam1 = { Var9 };
			*vParam2 = { Var9.f_3 };
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_FIND_ORIGIN: using player's start position");
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_208, vParam1, vParam2, 2);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_FIND_ORIGIN: using anim scene's origin");
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
		DEBUG::_0xF0783374333FD8CE(15272, 109, "CUTSCENE_FIND_ORIGIN: GET_ANIM_SCENE_ORIGIN for the scene: ", &uVar0, " gives Pos: ", vParam1, " Rot: ", vParam2);
		return true;
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_FIND_ORIGIN: waiting on IS_ANIM_SCENE_METADATA_LOADED");
	}
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_FIND_ORIGIN: returning <<0,0,0>>");
	return false;
}

float func_352(var uParam0)
{
	return uParam0->f_187;
}

void func_353(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_RELEASE_ALL_ALT_PLAYLISTS: anim scene doesn't exist");
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_RELEASE_ALL_ALT_PLAYLISTS: anim scene isn't loaded");
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/]));
			DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_RELEASE_ALL_ALT_PLAYLISTS: releasing alt anim scene playlist: ", &(uParam0->f_225[iVar0 /*9*/]));
		}
		uParam0->f_225[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_354(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEANUP_SCENE_RESTRICTIONS");
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_344(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_448(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEANUP_SCENE_RESTRICTIONS: RESET_ROADS_IN_VOLUME");
		}
	}
	if (func_344(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_81(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_81(uParam0, 16, 1);
}

float func_355(var uParam0)
{
	return uParam0->f_186;
}

bool func_356(var uParam0, int iParam1)
{
	return (uParam0->f_12 && iParam1) != 0;
}

void func_357(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_449() };
	func_264(uParam0, &Var0);
}

void func_358(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_344(uParam0, 16))
	{
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_SETUP_SCENE_RESTRICTIONS");
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4) && !func_450(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_249());
		func_258(uParam0, 8);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, false, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, false, -1, -1, 0);
		func_451(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_SETUP_SCENE_RESTRICTIONS: SET_ROADS_IN_VOLUME");
		func_258(uParam0, 16);
	}
}

void func_359(var uParam0)
{
	if ((!func_344(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_208, false))
	{
		func_302(uParam0);
		func_303(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_208, true))
		{
			if (func_397(uParam0->f_263, 4194304))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
				DEBUG::_0xF0783374333FD8CE(952, 109, "CUTSCENE_PRELOAD: overriding origin - pos: ", &(uParam0->f_5), " rot: ", &(uParam0->f_8));
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_208);
		}
		func_258(uParam0, 32768);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PRELOAD: anim scene meta data is loaded so registering entities and then calling LOAD_ANIM_SCENE for scene");
	}
}

struct<8> func_360(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_452(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_453() };
	}
	return Var0;
}

void func_361(char* sParam0, int iParam1, var uParam2)
{
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_PED_START_END_COVER_UNLOAD");
	if (VOLUME::_DOES_VOLUME_EXIST(uParam2->f_18))
	{
		VOLUME::_DELETE_VOLUME(uParam2->f_18);
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_PED_START_END_COVER_UNLOAD - ", func_382(iParam1, 0), " : ", sParam0, " Removed Cover Volume START");
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_2))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_2));
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_PED_START_END_COVER_UNLOAD - ", func_382(iParam1, 0), " : ", sParam0, " Released Cover Anims START(clone)");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam2->f_19))
	{
		VOLUME::_DELETE_VOLUME(uParam2->f_19);
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_PED_START_END_COVER_UNLOAD - ", func_382(iParam1, 0), " : ", sParam0, " Removed Cover Volume END");
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1));
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_PED_START_END_COVER_UNLOAD - ", func_382(iParam1, 0), " : ", sParam0, " Released Cover Anims END(original)");
	}
}

void func_362(int* iParam0, var uParam1, var uParam2)
{
	if (func_38(uParam1->f_5, 4))
	{
		return;
	}
	if (!func_38(uParam1->f_5, 2))
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (!func_365(uParam1))
	{
		return;
	}
	if (uParam2->f_3 < 0)
	{
		return;
	}
	if (!func_14(&(iParam0->f_1467)))
	{
		func_151(&(iParam0->f_1467), 1, 0);
	}
	if (uParam2->f_3 == 0 || func_39(&(iParam0->f_1467), 1, 0) >= uParam2->f_3)
	{
		func_92(&(uParam1->f_5), 4);
	}
}

void func_363(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;

	if (!func_365(uParam1))
	{
		return;
	}
	if (!func_38(uParam2->f_19, 2))
	{
		return;
	}
	bVar0 = true;
	iVar1 = PLAYER::PLAYER_PED_ID();
	bVar2 = !func_38(uParam2->f_19, 64);
	iVar3 = func_157(uParam1->f_1.f_2);
	if (!func_38(uParam2->f_19, 4))
	{
		func_454(iVar1, uParam2->f_1622[iVar3 /*3*/], 0, uParam2->f_5, uParam2->f_6, uParam2->f_7, uParam2->f_8, 1, 0, bVar2, 0);
	}
	if (!func_38(uParam2->f_19, 16))
	{
		fVar4 = (BUILTIN::TO_FLOAT(uParam2->f_9) / 1000f);
		if (func_455(iVar1, uParam2->f_1622[iVar3 /*3*/], &(iParam0->f_1475), uParam2->f_8, fVar4, 0, 0, 0, bVar2))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_LEADIN - Dismounted");
		}
	}
	if (!func_38(uParam2->f_19, 32))
	{
		if (!func_97(*iParam0, 5))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_LEADIN - Holstered");
			WEAPON::_HIDE_PED_WEAPONS(iVar1, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar1, 1, 1, 0, 0);
			func_28(iParam0, 5);
		}
	}
	if (!func_38(uParam2->f_19, 8))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (CAM::_0xA2B1C7EF759A63CE() < 1f)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && !func_97(*iParam0, 6))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_LEADIN - Ready!");
		func_28(iParam0, 6);
	}
}

void func_364(int iParam0)
{
	if (Global_1940296.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940296.f_105.f_2 = iParam0;
	DEBUG::_0x1B08D1EB9D8C4931(680, 162, "HUD_SHOW_BUSYSPINNER_THIS_FRAME - busy spinner being activated by thread ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()), " with message ", func_456(Global_1940296.f_105, 0));
	UNK_0x355E72323AEE83CC(162, 9);
}

bool func_365(var uParam0)
{
	if (!func_139(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 1 || uParam0->f_4 >= 10)
	{
		return false;
	}
	return true;
}

bool func_366(var uParam0, var uParam1, int* iParam2, var uParam3, char[4] cParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	char[] cVar0[8];
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	int iVar10;

	uParam7->f_1.f_3 = func_457(uParam0, uParam7->f_1.f_1, iParam6, sParam5, cParam4);
	func_458(uParam0, &(uParam7->f_1), uParam9);
	uVar5 = -1;
	while (iVar8 < 15)
	{
		iVar9 = uParam7->f_1.f_10;
		switch (uParam7->f_1.f_10)
		{
			case 0:
				iVar10 = func_459(uParam0, iParam2, cParam4, sParam5, iParam6, &(uParam7->f_1), &uVar4, iParam10);
				if (iVar10 == 1)
				{
					iVar9 = 1;
				}
				else if (iVar10 == 2)
				{
					iVar9 = 14;
				}
				break;
			case 1:
				iVar10 = func_460(iParam2, uParam7, &(uParam8->f_1652[cParam4 /*4*/]));
				if (iVar10 != 0)
				{
					if (iVar10 == 1)
					{
						func_28(&(uParam7->f_1.f_4), 0);
					}
					iVar9 = 2;
				}
				break;
			case 2:
				func_301(iParam2, uParam8, cParam4, iParam6, &cVar0, 0, 0);
				if (func_461(*uParam1))
				{
					if (func_462(uParam3, iParam2, &(uParam7->f_1), cParam4, iParam6, uParam8, &(uParam9->f_11[uParam1->f_3 /*34*/]), &cVar0, 1) != 0)
					{
						iVar9 = 4;
					}
				}
				else
				{
					DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][Cutscene] PROCESS_MC_CUTSCENE_PLAYER_MOCAP - Waiting on player index ", *uParam1, " to respawn");
				}
				break;
			case 4:
				if (uParam3->f_4 >= 7)
				{
					if (!func_463(&(uParam7->f_1)) || func_464(&(uParam7->f_1)))
					{
						iVar9 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_465(&(uParam7->f_1), cParam4, iParam6, 1, &uVar5))
				{
					iVar9 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_466(iParam2, cParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/]), 1))
				{
					iVar9 = 7;
				}
				break;
			case 7:
				if (uParam3->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2))
					{
						func_467(uParam7->f_1.f_2, 0);
					}
					iVar9 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_97(uParam0->f_1, 0) || func_38(uParam3->f_5, 1)) && func_465(&(uParam7->f_1), cParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 9;
				}
				break;
			case 9:
				if (func_466(iParam2, cParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/]), 0))
				{
					func_224(&(uParam7->f_1.f_5));
					func_223(&(uParam7->f_1.f_13));
					iVar9 = 10;
				}
				break;
			case 10:
				func_301(iParam2, uParam8, cParam4, iParam6, &cVar0, 0, 0);
				if (func_462(uParam3, iParam2, &(uParam7->f_1), cParam4, iParam6, uParam8, &(uParam9->f_11[uParam1->f_3 /*34*/].f_13), &cVar0, 0) != 0)
				{
					iVar9 = 12;
				}
				break;
			case 12:
				if (func_465(&(uParam7->f_1), cParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 13;
				}
				break;
			case 13:
				if (func_466(iParam2, cParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/].f_13), 0))
				{
					iVar9 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar9 != uParam7->f_1.f_10)
		{
			DEBUG::_0xEF256AE8A5A27966(11182624, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PLAYER_MOCAP - iCSIdx: ", cParam4, " iEntityIndex: ", sParam5, " eEntityType: ", func_382(iParam6, 0), " eState: ", func_367(uParam7->f_1.f_10, 0), " -> ", func_367(iVar9, 0));
			uParam7->f_1.f_10 = iVar9;
			iVar8++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

char* func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_CACHEID";
		case 1:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_VALIDATE";
		case 2:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_STARTCACHEINFO";
		case 3:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_STARTCACHEOVERRIDE";
		case 4:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_CLONE";
		case 5:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_STARTWARPCLONE";
		case 6:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_STARTAPPLYSTATECLONE";
		case 7:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_STARTCUTSCENE";
		case 8:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_STARTWARPORIGINAL";
		case 9:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_STARTAPPLYSTATEORIGINAL";
		case 10:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_ENDCACHEINFO";
		case 11:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_ENDCACHEOVERRIDE";
		case 12:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_ENDWARP";
		case 13:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_ENDAPPLYSTATE";
		case 14:
			return "MC_CUTSCENE_LOCAL_ENTITY_STATES_COMPLETE";
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

void func_368(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_10 > 0 && uParam0->f_10 <= 2)
	{
		*iParam1++;
		*iParam2++;
	}
	else if (uParam0->f_10 > 2 && uParam0->f_10 <= 10)
	{
		*iParam2++;
	}
}

bool func_369(var uParam0, int* iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10)
{
	int iVar0;
	char[] cVar1[8];
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	uParam6->f_3 = func_457(uParam0, uParam6->f_1, iParam5, sParam4, sParam3);
	while (iVar5 < 15)
	{
		iVar6 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar7 = func_459(uParam0, iParam1, sParam3, sParam4, iParam5, uParam6, &iVar0, iParam10);
				if (iVar7 == 1)
				{
					iVar6 = 1;
				}
				else if (iVar7 == 2)
				{
					iVar6 = 14;
				}
				break;
			case 1:
				iVar7 = func_468(iParam1, uParam6, uParam8, sParam9);
				if (iVar7 != 0)
				{
					if (iVar7 == 1)
					{
						func_28(&(uParam6->f_4), 0);
					}
					iVar6 = 2;
				}
				break;
			case 2:
				func_301(iParam1, uParam7, sParam3, iParam5, &cVar1, 0, 0);
				if (func_462(uParam2, iParam1, uParam6, sParam3, iParam5, uParam7, &(uParam8->f_3), &cVar1, 1) != 0)
				{
					iVar6 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_463(uParam6) || func_464(uParam6))
					{
						iVar6 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_465(uParam6, sParam3, iParam5, 1, uParam8))
				{
					iVar6 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_466(iParam1, sParam3, iParam5, uParam6, &(uParam8->f_3), 1))
				{
					iVar6 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_467(uParam6->f_2, 0);
					}
					else if (func_97(uParam6->f_4, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, true, true, 7);
					}
					iVar6 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_97(uParam0->f_1, 0) || func_38(uParam2->f_5, 1)) && func_465(uParam6, sParam3, iParam5, 0, uParam8))
				{
					iVar6 = 9;
				}
				break;
			case 9:
				if (func_466(iParam1, sParam3, iParam5, uParam6, &(uParam8->f_3), 0))
				{
					func_224(&(uParam6->f_5));
					func_223(&(uParam6->f_13));
					iVar6 = 10;
				}
				break;
			case 10:
				func_301(iParam1, uParam7, sParam3, iParam5, &cVar1, 0, 0);
				if (func_462(uParam2, iParam1, uParam6, sParam3, iParam5, uParam7, &(uParam8->f_16), &cVar1, 0) != 0)
				{
					iVar6 = 12;
				}
				break;
			case 12:
				if (func_465(uParam6, sParam3, iParam5, 0, uParam8))
				{
					iVar6 = 13;
				}
				break;
			case 13:
				if (func_466(iParam1, sParam3, iParam5, uParam6, &(uParam8->f_16), 0))
				{
					iVar6 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar6 != uParam6->f_10)
		{
			DEBUG::_0xEF256AE8A5A27966(11182624, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PED_MOCAP - iCSIdx: ", sParam3, " iEntityIndex: ", sParam4, " eEntityType: ", func_382(iParam5, 0), " eState: ", func_367(uParam6->f_10, 0), " -> ", func_367(iVar6, 0));
			uParam6->f_10 = iVar6;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_370(int* iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, char* sParam12, int iParam13)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;

	func_469(uParam6);
	uParam6->f_3 = func_457(uParam1, uParam6->f_1, iParam5, sParam4, sParam3);
	while (iVar4 < 15)
	{
		iVar5 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar6 = func_459(uParam1, iParam0, sParam3, sParam4, iParam5, uParam6, iParam7, iParam13);
				if (iVar6 == 1)
				{
					iVar5 = 1;
				}
				else if (iVar6 == 2)
				{
					iVar5 = 14;
				}
				break;
			case 1:
				iVar6 = func_468(iParam0, uParam6, uParam9, sParam12);
				if (iVar6 != 0)
				{
					if (iVar6 == 1)
					{
						func_28(&(uParam6->f_4), 0);
					}
					iVar5 = 2;
				}
				break;
			case 2:
				func_301(iParam0, uParam8, sParam3, iParam5, &uVar0, 0, 0);
				func_470(uParam2, iParam0, uParam6, sParam3, iParam5, uParam8, uParam10, &uVar0, 1, 0, 1);
				iVar5 = 4;
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_463(uParam6) || func_471(uParam6, *iParam7, iParam13))
					{
						iVar5 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_472(uParam6, sParam3, iParam5, 1, uParam9))
				{
					iVar5 = 6;
				}
				break;
			case 6:
				if (func_473(uParam10, uParam6, sParam3, iParam5, 1))
				{
					iVar5 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_467(uParam6->f_2, 0);
					}
					else if (func_97(uParam9->f_1, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, true, true, 7);
					}
					iVar5 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_97(uParam1->f_1, 0) || func_38(uParam2->f_5, 1)) && func_472(uParam6, sParam3, iParam5, 0, uParam9))
				{
					func_224(&(uParam6->f_5));
					iVar5 = 10;
				}
				break;
			case 10:
				func_301(iParam0, uParam8, sParam3, iParam5, &uVar0, 0, 0);
				func_470(uParam2, iParam0, uParam6, sParam3, iParam5, uParam8, uParam11, &uVar0, 0, 0, 1);
				iVar5 = 12;
				break;
			case 12:
				if (func_472(uParam6, sParam3, iParam5, 0, uParam9))
				{
					iVar5 = 13;
				}
				break;
			case 13:
				if (func_473(uParam11, uParam6, sParam3, iParam5, 0))
				{
					iVar5 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar5 != uParam6->f_10)
		{
			DEBUG::_0xEF256AE8A5A27966(11182624, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITY - iCSIdx: ", sParam3, " iEntityIndex: ", sParam4, " eEntityType: ", func_382(iParam5, 0), " eState: ", func_367(uParam6->f_10, 0), " -> ", func_367(iVar5, 0));
			uParam6->f_10 = iVar5;
			iVar4++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_371(var uParam0, var uParam1, struct<2> Param2, var uParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		return;
	}
	func_474(uParam0, uParam1, 6, 10, MISC::GET_HASH_KEY("Breaking_Front_Left_Wheel"), 0);
	func_474(uParam0, uParam1, 7, 11, MISC::GET_HASH_KEY("Breaking_Front_Right_Wheel"), 1);
	func_474(uParam0, uParam1, 8, 12, MISC::GET_HASH_KEY("Breaking_Rear_Left_Wheel"), 2);
	func_474(uParam0, uParam1, 9, 13, MISC::GET_HASH_KEY("Breaking_Rear_Right_Wheel"), 3);
	if (func_97(Param2.f_1, 3))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 9, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_VEHICLE_MOCAP - Hiding Reins for duration of cutscene");
		VEHICLE::_0x201B8ED4FF7FE9F5(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
	}
	else if (func_97(Param2.f_1, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, -913345033))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 9, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_VEHICLE_MOCAP - Hiding Reins based on event");
			VEHICLE::_0x201B8ED4FF7FE9F5(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 9, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_VEHICLE_MOCAP - Showing Reins as there is no hide event");
			VEHICLE::_0x41CDA90EE3450921(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
	}
}

bool func_372(int* iParam0, var uParam1, var uParam2, char* sParam3, int iParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9)
{
	char[] cVar0[8];
	struct<6> Var4;
	bool bVar10;
	var uVar11;
	int iVar14;
	int iVar15;
	int iVar16;

	Var4.f_5 = -1082130432;
	uVar11 = -1;
	uParam5->f_3 = func_457(uParam1, uParam5->f_1, iParam4, -1, sParam3);
	while (iVar14 < 15)
	{
		iVar15 = uParam5->f_10;
		switch (uParam5->f_10)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
				{
					iVar15 = 1;
				}
				else
				{
					return true;
				}
				break;
			case 1:
				iVar16 = func_475(iParam0, uParam5, sParam3, uParam6);
				if (iVar16 != 0)
				{
					if (iVar16 == 1)
					{
						func_28(&(uParam5->f_4), 0);
					}
					iVar15 = 2;
				}
				break;
			case 2:
				func_301(iParam0, uParam6, sParam3, 0, &cVar0, 0, 0);
				if (func_470(uParam2, iParam0, uParam5, sParam3, iParam4, uParam6, &Var4, &cVar0, 1, 1, 1))
				{
					iVar15 = 3;
				}
				break;
			case 3:
				if (iParam7 == 0 || func_97(uParam5->f_5, 0))
				{
					iVar15 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_463(uParam5) || func_471(uParam5, bVar10, iParam9))
					{
						iVar15 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_2) || func_472(uParam5, sParam3, iParam4, 1, &uVar11))
				{
					iVar15 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_2))
					{
						func_467(uParam5->f_2, 0);
					}
					iVar15 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || ((func_97(uParam1->f_1, 0) || func_38(uParam2->f_5, 1)) && func_472(uParam5, sParam3, iParam4, 0, &uVar11)))
				{
					func_224(&(uParam5->f_5));
					iVar15 = 10;
				}
				break;
			case 10:
				func_301(iParam0, uParam6, sParam3, 0, &cVar0, 0, 0);
				if (func_470(uParam2, iParam0, uParam5, sParam3, 0, uParam6, &Var4, &cVar0, 0, 1, 1))
				{
					iVar15 = 11;
				}
				break;
			case 11:
				if (iParam8 == 0 || func_97(uParam5->f_5, 0))
				{
					iVar15 = 12;
				}
				break;
			case 12:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || func_472(uParam5, sParam3, iParam4, 0, &uVar11))
				{
					iVar15 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar15 != uParam5->f_10)
		{
			DEBUG::_0xEF256AE8A5A27966(698912, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_NON_REG_ENTITY_MOCAP - iCSIdx: ", sParam3, " eEntityType: ", func_382(iParam4, 0), " eState: ", func_367(uParam5->f_10, 0), " -> ", func_367(iVar15, 0));
			uParam5->f_10 = iVar15;
			iVar14++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

char* func_373(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CUTSCENE_CLIENT_EVENTS_PLAYERSLOTSELECTED";
		case 1:
			return "MC_CUTSCENE_CLIENT_EVENTS_BEGIN";
		case 2:
			return "MC_CUTSCENE_CLIENT_EVENTS_END";
		case 3:
			return "MC_CUTSCENE_CLIENT_EVENTS_NEWSHOT";
		case 4:
			return "MC_CUTSCENE_CLIENT_EVENTS_SKIPPEDBEFOREPLAYBACK";
		case 5:
			return "MC_CUTSCENE_CLIENT_EVENTS_SKIPPEDDURINGPLAYBACK";
		case 6:
			return "MC_CUTSCENE_CLIENT_EVENTS_REMAINFADEDATEND";
		case 7:
			return "MC_CUTSCENE_CLIENT_EVENTS_STARTEDFADEOUTBYOPTION";
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

bool func_374(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102630.f_3 && iParam0) != 0;
	}
	return (Global_1100880[iParam1 /*53*/].f_3 && iParam0) != 0;
}

int func_375()
{
	return Global_1915867.f_20241;
}

void func_376(int iParam0, bool bParam1)
{
	if (!func_476(iParam0))
	{
		return;
	}
	if ((bParam1 && func_477(iParam0, 512)) || (!bParam1 && !func_477(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_478(iParam0, 512);
	}
	else
	{
		func_479(iParam0, 512);
	}
	if (func_480(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	DEBUG::_0xF0783374333FD8CE(168, 139, "[SET_SHOP_TYPE_ACTIVE] - Setting shop type: ", func_481(iParam0), " active state: ", bParam1);
}

bool func_377()
{
	DEBUG::_0xA308F935BDECCEC0(8, 38, "__KILLCAM__FAIL_SAFE_TIMER_IS_STARTED - __KILLCAM__IS_OPTION_BIT_SET(__KILLCAM__OPTION__FAIL_SAFE_TIMER_STARTED) ", func_482(4096));
	return func_482(4096);
}

bool func_378(int iParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(8, 38, "KILLCAM__IS_TIMER_FINISHED - ABSI(GET_SYSTEM_TIME() - iTimer) >= iKillcamTimer ", MISC::ABSI((MISC::_GET_SYSTEM_TIME() - iParam0)) >= iParam1);
	DEBUG::_0xA308F935BDECCEC0(559240, 38, "KILLCAM__IS_TIMER_FINISHED - ABSI(", MISC::_GET_SYSTEM_TIME(), " - ", iParam0, ")(", (MISC::_GET_SYSTEM_TIME() - iParam0), ") >= ", iParam1, " ", MISC::ABSI((MISC::_GET_SYSTEM_TIME() - iParam0)) >= iParam1);
	return MISC::ABSI((MISC::_GET_SYSTEM_TIME() - iParam0)) >= iParam1;
}

bool func_379(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) == iParam0;
}

bool func_380(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ADD_ENTITY: entity does not exist");
		return false;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ADD_ENTITY: entity is dead: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ADD_ENTITY: entity is dead.");
		}
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_483(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			DEBUG::_0x83407B92D46F25C3(40, 109, "CUTSCENE_ADD_ENTITY: couldn't find a handle for the following model: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)));
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(8, 109, "CUTSCENE_ADD_ENTITY: couldn't find a handle for the model.");
		}
		return false;
	}
	iVar0 = func_484(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam2))
		{
			DEBUG::_0x83407B92D46F25C3(10920, 109, "CUTSCENE_ADD_ENTITY: script is re-registering the entity ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)), " with different handle...old: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " and new: ", sParam2);
		}
		else if (uParam0->f_17[iVar0 /*12*/].f_9 != iParam3)
		{
			DEBUG::_0xF0783374333FD8CE(168, 109, "CUTSCENE_ADD_ENTITY: script is re-registering the entity ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)), "  with different anim scene usage...necessary? See Silas.");
		}
		else if (uParam0->f_17[iVar0 /*12*/].f_10 != iParam4)
		{
			DEBUG::_0x83407B92D46F25C3(168, 109, "CUTSCENE_ADD_ENTITY: script is re-registering the entity  ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)), " with different model");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ADD_ENTITY: entity already added: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)));
			return true;
		}
	}
	else
	{
		iVar1 = func_485(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(10920, 109, "CUTSCENE_ADD_ENTITY: script is registering a new entity with the same handle (", sParam2, ") as as previous entity...removing old entity with model ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iVar1)), " and replacing with entity with model ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)));
			func_486(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_487(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_17[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_17[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_17[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_384(&(uParam0->f_17[iVar0 /*12*/]), 2);
			DEBUG::_0xF0783374333FD8CE(2216, 109, "CUTSCENE_ADD_ENTITY: registering: ", sParam2, " at index: ", iVar0, " and will ignore dead check...entity index - ", iParam1);
		}
		else
		{
			func_488(&(uParam0->f_17[iVar0 /*12*/]), 2);
			DEBUG::_0xF0783374333FD8CE(2216, 109, "CUTSCENE_ADD_ENTITY: registering: ", sParam2, " at index: ", iVar0, " and will NOT ignore dead check...entity index - ", iParam1);
		}
		return true;
	}
	DEBUG::_0x83407B92D46F25C3(648, 109, "CUTSCENE_ADD_ENTITY: no room for more entites (Max: ", 14, "), not registering: ", sParam2);
	return false;
}

bool func_381(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

char* func_382(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2124094697:
			return "UGC_REFERENCE_TYPE_ENTITY_SPAWN_CONFIG_POINT";
		case -1888631719:
			return "UGC_REFERENCE_TYPE_ENVIROMENT_STATE";
		case -1868409957:
			return "UGC_REFERENCE_TYPE_GET_AND_DELIVER_DATA";
		case -1821507459:
			return "UGC_REFERENCE_TYPE_ANIMAL";
		case -1746761837:
			return "UGC_REFERENCE_TYPE_CUSTOM_RULE";
		case -1665652163:
			return "UGC_REFERENCE_TYPE_PROPSET";
		case -1566524474:
			return "UGC_REFERENCE_TYPE_VOLUME";
		case -1556534347:
			return "UGC_REFERENCE_TYPE_LEADERBOARDS_PERSONAL";
		case -1450090848:
			return "UGC_REFERENCE_TYPE_DVAR_VARIABLES";
		case -1336379675:
			return "UGC_REFERENCE_TYPE_CONSEQUENCE";
		case -1274228391:
			return "UGC_REFERENCE_TYPE_CUSTOM_FAIL_REASON";
		case -1243461905:
			return "UGC_REFERENCE_TYPE_TASK_GROUP";
		case -1174487184:
			return "UGC_REFERENCE_TYPE_BOUNDS";
		case -1170753432:
			return "UGC_REFERENCE_TYPE_DIALOGUE";
		case -1162173692:
			return "UGC_REFERENCE_TYPE_TASK_ACTIVATION";
		case -1065615290:
			return "UGC_REFERENCE_TYPE_EMITTER";
		case -910787612:
			return "UGC_REFERENCE_TYPE_DYNAMIC_VOTE";
		case -904133082:
			return "UGC_REFERENCE_TYPE_DUMMY_BLIP";
		case -860572730:
			return "UGC_REFERENCE_TYPE_AMBIENT_SCENERIO";
		case -659107958:
			return "UGC_REFERENCE_TYPE_RANDOMISER";
		case -615016457:
			return "UGC_REFERENCE_TYPE_DEADEYE_CONFIG";
		case -562122053:
			return "UGC_REFERENCE_TYPE_ALERT_STYLE";
		case -545680264:
			return "UGC_REFERENCE_TYPE_AUDIO_SCENESET";
		case -532393368:
			return "UGC_REFERENCE_TYPE_GOTO";
		case -481241946:
			return "UGC_REFERENCE_TYPE_ILO_OPTION";
		case -433274336:
			return "UGC_REFERENCE_TYPE_ENTITY_SPAWN_CONFIG_RULE";
		case -319762904:
			return "UGC_REFERENCE_TYPE_ENTITY_NAME";
		case -301442890:
			return "UGC_REFERENCE_TYPE_SPEAKER";
		case -276177738:
			return "UGC_REFERENCE_TYPE_BINDING";
		case -237280644:
			return "UGC_REFERENCE_TYPE_LEADERBOARDS";
		case -230450704:
			return "UGC_REFERENCE_TYPE_PROP";
		case -211591883:
			return "UGC_REFERENCE_TYPE_RESPAWN_AREA";
		case -205071367:
			return "UGC_REFERENCE_TYPE_SPAWN_POINT";
		case -179902644:
			return "UGC_REFERENCE_TYPE_PREREQUISITES";
		case 0:
			return "UGC_REFERENCE_TYPE_INVALID";
		case 12263294:
			return "UGC_REFERENCE_TYPE_LEADERBOARDS_MINI";
		case 23817609:
			return "UGC_REFERENCE_TYPE_MATH_EQUATION";
		case 185960795:
			return "UGC_REFERENCE_TYPE_TICKER";
		case 253458439:
			return "UGC_REFERENCE_TYPE_GANG_CHASE";
		case 264933854:
			return "UGC_REFERENCE_TYPE_SPAWN_EXCLUSION_VOLUME";
		case 291889844:
			return "UGC_REFERENCE_TYPE_WEAPON";
		case 422112462:
			return "UGC_REFERENCE_TYPE_OBJECT";
		case 465509728:
			return "UGC_REFERENCE_TYPE_TRAIN";
		case 533214090:
			return "UGC_REFERENCE_TYPE_SATCHEL";
		case 533349882:
			return "UGC_REFERENCE_TYPE_TICKER_MISSION";
		case 622228654:
			return "UGC_REFERENCE_TYPE_AGGREGATE_VOLUME";
		case 632330978:
			return "UGC_REFERENCE_TYPE_DIALOGUE_CONTEXT";
		case 684220882:
			return "UGC_REFERENCE_TYPE_PERSONAL_MOUNT";
		case 712731522:
			return "UGC_REFERENCE_TYPE_HERB";
		case 737010854:
			return "UGC_REFERENCE_TYPE_ENTITY_FLAGS";
		case 829636032:
			return "UGC_REFERENCE_TYPE_INVENTORY";
		case 832751831:
			return "UGC_REFERENCE_TYPE_HIDDEN_PROP";
		case 936495135:
			return "UGC_REFERENCE_TYPE_TASK_CUSTOM_PROGRESSION";
		case 966820754:
			return "UGC_REFERENCE_TYPE_PLAYER";
		case 1060144704:
			return "UGC_REFERENCE_TYPE_ROLE";
		case 1104284832:
			return "UGC_REFERENCE_TYPE_LOOT";
		case 1135537454:
			return "UGC_REFERENCE_TYPE_VEHICLE";
		case 1147180327:
			return "UGC_REFERENCE_TYPE_PED_GROUP_CONFIG";
		case 1188193161:
			return "UGC_REFERENCE_TYPE_PERSONAL_WAGON";
		case 1195646343:
			return "UGC_REFERENCE_TYPE_PTFX";
		case 1203929816:
			return "UGC_REFERENCE_TYPE_TEAM_INTRO_SHOOT";
		case 1237495127:
			return "UGC_REFERENCE_TYPE_RULE";
		case 1254872555:
			return "UGC_REFERENCE_TYPE_DROPOFF";
		case 1257291016:
			return "UGC_REFERENCE_TYPE_DOOR";
		case 1336552469:
			return "UGC_REFERENCE_TYPE_ALLOWED_WORLD_SCENARIO";
		case 1395916503:
			return "UGC_REFERENCE_TYPE_MATH_VARIABLE";
		case 1440261619:
			return "UGC_REFERENCE_TYPE_PATH";
		case 1447340706:
			return "UGC_REFERENCE_TYPE_ANIMATION";
		case 1458021928:
			return "UGC_REFERENCE_TYPE_HUD_LAYOUT";
		case 1490753596:
			return "UGC_REFERENCE_TYPE_PED_CHECKPOINT_OUTFIT";
		case 1526218408:
			return "UGC_REFERENCE_TYPE_DVAR_GROUPS";
		case 1527058157:
			return "UGC_REFERENCE_TYPE_BLIP_OVERRIDE";
		case 1627542854:
			return "UGC_REFERENCE_TYPE_PED";
		case 1731357468:
			return "UGC_REFERENCE_TYPE_ANIM_SCENE";
		case 1766152831:
			return "UGC_REFERENCE_TYPE_RELATIONSHIP_GROUP";
		case 1955834908:
			return "UGC_REFERENCE_TYPE_CHECKPOINT";
		case 1979510665:
			return "UGC_REFERENCE_TYPE_CONDITION";
		case 2041446474:
			return "UGC_REFERENCE_TYPE_ZONE";
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

bool func_383(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_384(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_385(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		DEBUG::_0x83407B92D46F25C3(40, 109, "CUTSCENE_SET_ANIM_SCENE_ENTITY: entity does not exist - ", sParam1);
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_208, sParam1))
		{
			iParam3 = 0;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_SET_ANIM_SCENE_ENTITY: giving ownership of entity to anim scene - ", sParam1);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_208, sParam1, iParam2, iParam3);
}

void func_386(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "CLEAR_ALL_PED_BLOOD: pedDamaged doesn't exist");
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

int func_387(var uParam0)
{
	return *uParam0;
}

void func_388(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_MANAGE_SKIP: CUTSCENE_MANAGE_SKIP");
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_208, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208)) || func_344(uParam0, 512))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_MANAGE_SKIP: cutscene was already skipped");
		if (!func_489(uParam0->f_264, 128))
		{
			func_490();
		}
		return;
	}
	if ((func_404(uParam0, Global_33, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, func_447(Global_33)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, func_447(Global_33)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_208))
	{
		if (!func_489(uParam0->f_264, 128))
		{
			func_490();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_491(iVar1))
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_MANAGE_SKIP: kFeedChannel_MissionName is rendering");
			if (func_492(Global_26567, 0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_MANAGE_SKIP: disabling g_useCurrentPlayingCutsceneSkip");
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_489(uParam0->f_264, 512))
	{
		bVar2 = true;
	}
	if (!func_344(uParam0, 2) && func_493(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_208);
		func_490();
	}
}

void func_389(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[128];

	if (func_387(uParam0) == 2 && (func_397(uParam0->f_263, 16384) || func_344(uParam0, 268435456)))
	{
		Var0 = { func_360(uParam0) };
		func_297(uParam0, &Var0);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: cutscene wasn't loaded in time after a multistart, switching to multistart");
	}
	func_494(uParam0, sParam1);
	if (func_344(uParam0, 131072))
	{
		func_495(uParam0, 0);
	}
	if (func_496())
	{
		func_497(1);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: killing camera script");
	}
	func_358(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 128);
	func_498(uParam0, cVar8);
	func_399(1, 0);
	func_353(uParam0);
	if (func_391(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_188);
		DEBUG::_0x1B08D1EB9D8C4931(8, 109, "CUTSCENE_PLAY: calling setup function");
	}
	func_499(uParam0);
	func_303(uParam0, 1);
	if (func_397(uParam0->f_263, 4194304))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
		DEBUG::_0xF0783374333FD8CE(15272, 109, "CUTSCENE_START: overriding origin - ", sParam1, " pos: ", &(uParam0->f_5), " rot: ", &(uParam0->f_8));
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_208);
	Global_26566 = uParam0->f_208;
	StringCopy(&Global_26568, sParam1, 128);
}

void func_390(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(680, 109, "CUTSCENE_SET_STATE: moving from ", func_500(func_387(uParam0)), " to ", func_500(iParam1));
	*uParam0 = iParam1;
	func_393(&(uParam0->f_1));
}

bool func_391(var uParam0, int iParam1)
{
	return (uParam0->f_191 && iParam1) != 0;
}

void func_392(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_360(uParam0) };
	func_264(uParam0, &Var0);
}

void func_393(float fParam0)
{
	func_501(fParam0, 0f);
}

bool func_394(float fParam0)
{
	return func_502(*fParam0, 1);
}

void func_395(float fParam0, bool bParam1)
{
	if (bParam1 || !func_394(fParam0))
	{
		func_393(fParam0);
	}
}

float func_396(float fParam0)
{
	if (!func_394(fParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return fParam0->f_1;
	}
	if (func_503(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_504() - fParam0->f_1);
}

bool func_397(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_398(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_399(bool bParam0, bool bParam1)
{
	if (func_505())
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_506())
		{
			func_507(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, bParam1, 0);
}

void func_400(var uParam0)
{
	vector3 vVar0;

	if (!func_344(uParam0, 4))
	{
		if (func_397(uParam0->f_263, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_MANAGE_ENTER: cutscene was triggered in first person, triggering blink postfx");
		}
		vVar0 = { func_508(uParam0) };
		if (!func_397(uParam0->f_263, 524288))
		{
			func_509(&(uParam0->f_275));
		}
		func_510(&(uParam0->f_263), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_511(uParam0, 0f, 0f, 0f);
		func_512(uParam0);
		func_513(uParam0);
		func_514(uParam0, 0f, 0f, 0f, 0, 0);
		func_515(uParam0);
		func_258(uParam0, 4);
		func_516(uParam0, 0);
		func_517(Global_33, 65601, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_276)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_276));
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_MANAGE_ENTER: destroying leadin camera");
		}
	}
}

bool func_401(var uParam0, bool bParam1)
{
	if (func_344(uParam0, 262144))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA: already triggered exit state");
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA: iScene doesn't exist");
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA: the ExportCamera entity doesn't exist, is it exported with a non-default name?");
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_208, "ExportCamera") && bParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_208))
	{
		func_258(uParam0, 262144);
		func_516(uParam0, 1);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA: doing 1-time camera state leadout");
		return true;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 109, "CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA: waiting for ExportCamera and HAS_ENTITY_EXITED_ANIM_SCENE or IS_ANIM_SCENE_EXITING_THIS_FRAME");
	return false;
}

int func_402(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_208, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_208) * 1000f));
}

int func_403(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_208, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_208) * 1000f));
}

bool func_404(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1) && func_383(&(uParam0->f_17[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_405(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_HAS_FINISHED: NOT DOES_ANIM_SCENE_EXIST(cutData.iScene)");
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_208, 0))
	{
		if (func_344(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_HAS_FINISHED: BLOCK_ANIM_SCENE_FADING_NEXT_FRAME due to CUTSCENE_FLAG_END_IN_FADE");
		}
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_HAS_FINISHED: HAS_ANIM_SCENE_EXITED(cutData.iScene)");
		return true;
	}
	if (func_344(uParam0, 1048576) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_208))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_HAS_FINISHED: CUTSCENE_FLAG_END_WHEN_SCENE_IS_EXITING_THIS_FRAME");
		return true;
	}
	if ((func_489(uParam0->f_264, 1024) && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera")) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_HAS_FINISHED: CUTSCENE_EXIT_FLAG_EXIT_ON_CAMERA_EXITING and ExportCamera has exited");
		return true;
	}
	return false;
}

void func_406(var uParam0)
{
	if (((func_344(uParam0, 1073741824 /* Float: 2f */) && !func_344(uParam0, 524288)) && func_344(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(uParam0->f_292);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: fading screen in for non-mission cutscene");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_PLAY: not fading screen in for non-mission cutscene");
	}
}

void func_407(var uParam0)
{
	if (!func_344(uParam0, 536870912))
	{
		func_516(uParam0, 1);
		func_408(&(uParam0->f_264), uParam0->f_275);
		func_258(uParam0, 536870912);
	}
	if (func_344(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_COMPLETE: CUTSCENE_FLAG_END_IN_FADE was set, fading out and clearing flag");
	}
	func_518(uParam0);
	func_390(uParam0, 1);
	func_354(uParam0);
	func_298(uParam0);
	func_519(uParam0);
	func_520(uParam0, 4);
	func_357(uParam0);
	func_495(uParam0, 1);
	func_353(uParam0);
	func_521(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
	func_522(!func_489(uParam0->f_264, 128));
	if (!func_489(uParam0->f_264, 128))
	{
		func_490();
	}
}

void func_408(var uParam0, bool bParam1)
{
	if (Global_1940410.f_6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_EXIT: g_pedPlayer is dead, exiting");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_EXIT");
	func_523(2000);
	Global_13 = 0;
	if (!func_489(*uParam0, 2048))
	{
		func_524();
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_33, func_489(*uParam0, 8));
	if (!func_489(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_489(*uParam0, 2) || func_489(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_489(*uParam0, 16))
	{
		func_525(1);
	}
	if ((bParam1 != 0 && func_526(bParam1) != joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */) && !func_489(*uParam0, 32))
	{
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_EXIT: trying to put disguise back on - ", func_527(bParam1, 0));
		func_528(Global_33, -1144282354, 0, 0, 0);
	}
	else if (func_529(joaat("MPC_HIDE_ACTION_HAT")) != -1)
	{
		func_528(Global_33, joaat("MPC_HIDE_ACTION_HAT"), 0, 0, 0);
	}
	func_530(Global_33, 98369, 1, 1, 0);
	*uParam0 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_EXIT: Reset exit flags back to CUTSCENE_EXIT_FLAG_INVALID");
}

void func_409()
{
	Global_1940410.f_46 = 1;
}

bool func_410(int iParam0)
{
	return func_531(&(Global_524288.f_6), iParam0);
}

void func_411(bool bParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(136, 157, "FORCE_SATCHEL_ACTIVE_STATE(", bParam0, ")");
	if (bParam0)
	{
		Global_1940463 = 1;
		g_satchelData.iForcedUIActivity = iParam1;
	}
	else
	{
		Global_1940463 = 2;
	}
}

void func_412()
{
	Global_1913652 = 1;
}

void func_413(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_38, iParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] SET_HUD_CONTEXT_FLAG - already on for Context ID ", func_533(func_532(iParam0), 0));
	}
	else
	{
		MISC::SET_BIT(&iLocal_38, iParam0);
		HUD::_HIDE_HUD_COMPONENT(func_532(iParam0));
		UNK_0x355E72323AEE83CC(227, 6);
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] SET_HUD_CONTEXT_FLAG ON : ", func_533(func_532(iParam0), 0));
	}
}

void func_414(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_415(bool bParam0)
{
	func_534(46, !bParam0);
}

void func_416()
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "RPG_GLOBAL_ATTRIBUTES_SET_DISABLED - RPG Global Attributes system is being disabled this frame... ");
	func_535(0);
}

void func_417(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1072032.f_7 = 1;
	if ((Global_1275959.f_21 - Global_1072032.f_9) > 2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_COMMON_MP_FEATURES: Perform One Time only actions for Cutscenes... ");
		if (bParam2)
		{
			func_536(20f);
		}
	}
	Global_1072032.f_9 = Global_1275959.f_21;
	if (bParam0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_537())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_538(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

void func_418(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam3 = 0;
	*uParam4 = 0;
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (MISC::IS_BIT_SET((*uParam0)[iVar2 /*38*/], 0) && !MISC::IS_BIT_SET((*uParam0)[iVar2 /*38*/], 8))
		{
			*uParam4++;
			if (SCRIPTS::_0x0A79C81C418F5D38(&(uParam1->f_29[iParam2]), iVar2))
			{
				if (iVar0 == NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1))
				{
					uParam1->f_6 = iParam2;
				}
				*iParam3++;
			}
		}
		iVar2++;
	}
	if (uParam1->f_14[iParam2] > 0)
	{
		*uParam4 = uParam1->f_14[iParam2];
	}
}

Vector3 func_419(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_420(int* iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	iParam0->f_9[iParam4 /*3*/] = { vParam1 };
	iParam0->f_27[iParam4] = iParam5;
	iParam0->f_32[iParam4] = iParam6;
	MISC::SET_BIT(iParam0, 5);
	DEBUG::_0xEF256AE8A5A27966(43552, 227, 7, "[UGCVote][MMacK] Setting option ", iParam4, " on with string ", &vParam1, " to be linked to button ", func_539(iParam5, 0));
}

void func_421(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 0);
	}
	iParam0->f_2 = iParam1;
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[UGCVote][MMacK] SET_PLAYER_VOTE_ELIGIBLE ", MISC::_0xF216F74101968DB0(bParam2), " sParticipantVotes.eVoteType = ", func_164(iParam1, 0));
}

bool func_422(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 8);
}

void func_423(int* iParam0)
{
	MISC::SET_BIT(iParam0, 8);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] SET_PARTICIPANT_VOTE_INVALIDATED");
}

void func_424(int* iParam0)
{
	int iVar0;

	if (MISC::IS_BIT_SET(*iParam0, 3) && !MISC::IS_BIT_SET(*iParam0, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (func_540(uLocal_39[iVar0]))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] Cleaning vote UI context ", iVar0);
				func_541(uLocal_39[iVar0], 0, 1, 1);
				func_542(uLocal_39[iVar0], 0, 1);
				func_543(&(uLocal_39[iVar0]), 1, 1);
			}
			iVar0++;
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] Cleaned up voting ui!");
		MISC::SET_BIT(iParam0, 4);
	}
}

bool func_425(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_426(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (MISC::IS_BIT_SET(uParam1->f_1, 8))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] GET_VOTE_RESULT Vote results are local, checking what we voted for... ");
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (SCRIPTS::_0x0A79C81C418F5D38(&(uParam1->f_29[iVar1]), iVar0))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] GET_VOTE_RESULT We voted for option ", iVar1);
				return iVar1;
			}
			iVar1++;
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] We didn't vote for anything :( ");
		return uParam1->f_5;
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] GET_VOTE_RESULT ", uParam1->f_4);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] My Vote Was ", (uParam0[iVar0 /*38*/])->f_1);
	if ((uParam0[iVar0 /*38*/])->f_1 != -1)
	{
		if (uParam1->f_19[(uParam0[iVar0 /*38*/])->f_1])
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[UGCVote][MMacK] GET_VOTE_RESULT ABSTAIN RESULT");
			return (uParam0[iVar0 /*38*/])->f_1;
		}
	}
	return uParam1->f_4;
}

int func_427()
{
	return -1;
}

void func_428(bool bParam0)
{
	if (bParam0)
	{
		func_285(32);
	}
	else
	{
		func_435(32);
	}
}

void func_429(int iParam0, int iParam1, bool bParam2, char* sParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0x83407B92D46F25C3(8, 37, "NET_SPECIAL_CAM__LAUNCH - ePedTarget doesn't exist.  Setting bSpectateNextTargetASAP to TRUE.");
		UNK_0x355E72323AEE83CC(37, 6);
		bParam4 = true;
	}
	func_321(iParam0);
	func_435(1024);
	if (bParam5)
	{
		func_285(16);
	}
	func_544(iParam1);
	func_545(bParam4);
	if (bParam2)
	{
		Global_1102630.f_26.f_4 = 1;
		Global_1102630.f_26.f_5 = sParam3;
	}
	DEBUG::_0xF0783374333FD8CE(2665128, 37, "NET_SPECIAL_CAM__LAUNCH - Forcing in spectator mode. eDesiredDisplayType = ", func_322(iParam0, 0), ", ePedTarget = ", UNK_0xE02C950E4C991632(iParam1), ", bDoFadeOut = ", MISC::_0xF216F74101968DB0(bParam2), ", iFadeOutTime = ", sParam3, "bSpectateNextTargetASAP =", MISC::_0xF216F74101968DB0(bParam4));
	UNK_0x355E72323AEE83CC(37, 6);
}

bool func_430(int iParam0, int iParam1)
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

void func_431(vector3 vParam0)
{
	if (!Global_1940410.f_6)
	{
		func_546(vParam0);
		func_547(vParam0);
	}
}

void func_432(float fParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		iVar3 = PED::GET_MOUNT(iVar2);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			DEBUG::_0xEF256AE8A5A27966(608, 227, 7, "[MC] DO_ROLLING_START on a mount, fRollingStartSpeed = ", fParam0, ", iDuration =", sParam1);
			iVar0 = iVar3;
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(608, 227, 7, "[MC] DO_ROLLING_START mount is injured, fRollingStartSpeed = ", fParam0, ", iDuration =", sParam1);
			iVar0 = iVar2;
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
		if (ENTITY::_IS_ENTITY_FROZEN(iVar4))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC] DO_ROLLING_START FREEZE_ENTITY_POSITION(vehicle, FALSE)");
			ENTITY::FREEZE_ENTITY_POSITION(iVar4, false);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar4, (fParam0 * 3f));
		DEBUG::_0xEF256AE8A5A27966(608, 227, 7, "[MC] DO_ROLLING_START player in vehicle, fRollingStartSpeed = ", fParam0, ", iDuration =", sParam1);
		return;
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(608, 227, 7, "[MC] DO_ROLLING_START player on foot, fRollingStartSpeed = ", fParam0, ", iDuration =", sParam1);
		iVar0 = iVar2;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC] DO_ROLLING_START FREEZE_ENTITY_POSITION(piPedToMove, FALSE)");
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	PED::FORCE_PED_MOTION_STATE(iVar0, func_548(fParam0), false, iParam2, bParam3);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(iVar1, fParam0, sParam1, ENTITY::GET_ENTITY_HEADING(iVar0), false, false);
}

void func_433(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_14[iVar0 /*21*/].f_1.f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_14[iVar0 /*21*/].f_1.f_2));
		}
		iParam0->f_14[iVar0 /*21*/].f_1.f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_99[iVar0 /*20*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_99[iVar0 /*20*/].f_2));
		}
		iParam0->f_99[iVar0 /*20*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_500[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_500[iVar0 /*13*/].f_2));
		}
		iParam0->f_500[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_761[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_761[iVar0 /*13*/].f_2));
		}
		iParam0->f_761[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_892[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_892[iVar0 /*13*/].f_2));
		}
		iParam0->f_892[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1023[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_1023[iVar0 /*13*/].f_2));
		}
		iParam0->f_1023[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089[iVar0 /*14*/].f_2))
		{
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0->f_1089[iVar0 /*14*/].f_2);
			VEHICLE::DELETE_MISSION_TRAIN(&iVar1);
		}
		iParam0->f_1089[iVar0 /*14*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1104[iVar0 /*15*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_1104[iVar0 /*15*/].f_2));
		}
		iParam0->f_1104[iVar0 /*15*/].f_2 = 0;
		iVar0++;
	}
}

void func_434(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iLocal_38, iParam0) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_38, iParam0);
		HUD::_DISPLAY_HUD_COMPONENT(func_532(iParam0));
		UNK_0x355E72323AEE83CC(227, 6);
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] CLEAR_HUD_CONTEXT_FLAG OFF : ", func_533(func_532(iParam0), 0));
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[UGC][HUDContext][MMacK] CLEAR_HUD_CONTEXT_FLAG - already off for Context ID ", func_533(func_532(iParam0), 0));
	}
}

void func_435(int iParam0)
{
	if (!func_549(iParam0))
	{
		return;
	}
	Global_1102630.f_26.f_9 = (Global_1102630.f_26.f_9 - (Global_1102630.f_26.f_9 && iParam0));
}

void func_436()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(136, 208, "[RELEASE_PLAYER_CLONE_SHOP_ITEM_PRELOADS] Releasing ", Global_1953612.f_3054, " preloaded assets");
	iVar0 = 0;
	while (iVar0 < Global_1953612.f_3054)
	{
		if (!Global_1953612.f_3054.f_1[iVar0 /*2*/])
		{
		}
		else if (PED::_0x93FFD92F05EC32FD(Global_1953612.f_3054.f_1[iVar0 /*2*/].f_1))
		{
			PED::_0x13E7320C762F0477(Global_1953612.f_3054.f_1[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
}

void func_437(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	UNK_0x355E72323AEE83CC(36, 7);
	DEBUG::_0xF0783374333FD8CE(168, 36, "__NET_SET_PLAYER_CONTROL_ON - Called from ", UNK_0x8F77B33B6A34D8BA(), " - Don't call this every frame!");
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_ON - NPCF_RETAIN_TRANSITION_POLISH_EFFECTS is set.  Hope you meant that.");
	}
	else
	{
		func_277();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_438(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	UNK_0x355E72323AEE83CC(36, 7);
	DEBUG::_0xF0783374333FD8CE(168, 36, "__NET_SET_PLAYER_CONTROL_OFF - Called from ", UNK_0x8F77B33B6A34D8BA(), " - Don't call this every frame!");
	if (!bParam0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Invisible");
	}
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Invincible");
	}
	if (bParam2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Freeze Position");
	}
	if (bParam3)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Clear Tasks");
	}
	if (bParam6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Clear Tasks but allow crouching");
	}
	if (bParam4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Leave Camera On");
	}
	if (bParam5)
	{
		DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Disable Ped Backoff On");
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
			DEBUG::_0xF0783374333FD8CE(8, 36, "__NET_SET_PLAYER_CONTROL_OFF - Collision disabled");
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

void func_439(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
}

void func_440(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_550(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
	uParam0->f_13 = 0;
}

void func_441(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

bool func_442(int iParam0)
{
	return func_374(128, iParam0);
}

void func_443(char* sParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = sParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1072032.f_21420.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_444(iVar0);
	DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_SET_PLAYER_NEUTRAL: Setting neutral for player ", iVar0);
	UNK_0x355E72323AEE83CC(162, 7);
	NETWORK::_0x51951DE06C0D1C40(sParam0, 0);
	Global_1072032.f_21420.f_1[iVar0 /*8*/] = 0;
}

void func_444(int iParam0)
{
	if (Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 162, "HUD_CLEAR_PLAYER_ENEMY_EVENT_TYPE: Clearing enemy event for player ", iParam0);
		UNK_0x355E72323AEE83CC(162, 7);
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072032.f_21420.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

struct<8> func_445(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<16> func_446(var uParam0)
{
	return uParam0->f_192;
}

char* func_447(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_GET_PED_CUTSCENE_HANDLE: entity does not exist");
		return "";
	}
	if (iParam0 == Global_33)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_33) == joaat("PLAYER_THREE"))
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_551(iVar0);
}

void func_448(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
	}
}

struct<8> func_449()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_450(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_451(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ADD_SCENARIO_BLOCKING_AREA_VOLUME: old scenario blocking volume is valid, removing");
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_13 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

struct<8> func_452(var uParam0)
{
	return uParam0->f_217;
}

struct<8> func_453()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_454(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	if (bParam4)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "HANDLE_PED_APPROACH_SPEED: bForceDismount will soon be removed. Please use HANDLE_PED_APPROACH_SPEED_WITH_TIMED_DISMOUNT() instead.");
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "HANDLE_PED_APPROACH_SPEED: ped doesn't exist or is dead");
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "HANDLE_PED_APPROACH_SPEED: pedToSlow must be a human ped!");
		return;
	}
	if (func_450(vParam1, 0f, 0f, 0f))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "HANDLE_PED_APPROACH_SPEED: Zero vector passed in as vCoord");
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "HANDLE_PED_APPROACH_SPEED: None of the distances can be less than 0");
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "HANDLE_PED_APPROACH_SPEED: Make sure that fCanterDistance > fTrotDistance > fWalkDistance > fDismountDistance");
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_278(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_33)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_552(iParam0, 501393341))
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "HANDLE_PED_APPROACH_SPEED: Tasking ped to dismount");
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_552(iParam0, -828834893))
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "HANDLE_PED_APPROACH_SPEED: Tasking ped to leave vehicle");
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_455(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = func_278(iParam0, vParam1, 1);
	if (!func_394(fParam4))
	{
		if (fVar4 <= fParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_395(fParam4, 0);
			}
		}
	}
	else if (bParam7 && fVar4 > fParam5)
	{
		func_521(fParam4);
		DEBUG::_0xF0783374333FD8CE(8, 0, "HANDLE_PED_APPROACH_SPEED_WITH_TIMED_DISMOUNT: Ped is out of the dismount distance, cancelling the timer");
	}
	if (func_394(fParam4))
	{
		if (bParam10)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_396(fParam4) >= fParam6)
		{
			if (iParam0 == Global_33)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_552(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					DEBUG::_0xF0783374333FD8CE(8, 0, "HANDLE_PED_APPROACH_SPEED_WITH_TIMED_DISMOUNT: Tasking ped to dismount");
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_552(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					DEBUG::_0xF0783374333FD8CE(8, 0, "HANDLE_PED_APPROACH_SPEED_WITH_TIMED_DISMOUNT: Tasking ped to leave vehicle");
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_33 && bParam8 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "HANDLE_PED_APPROACH_SPEED_WITH_TIMED_DISMOUNT: Clearing player ped tasks when leading horse into dismount area.");
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

char* func_456(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "HUD_BUSYSPINNER_MESSAGE__INVALID";
		case 0:
			return "HUD_BUSYSPINNER_MESSAGE__DEFAULT";
		case 1:
			return "HUD_BUSYSPINNER_MESSAGE__SHOP_TRANSACTION";
		case 2:
			return "HUD_BUSYSPINNER_MESSAGE__FOLLOW_INVITE";
		case 3:
			return "HUD_BUSYSPINNER_MESSAGE__FOLLOW_JOIN";
		case 4:
			return "HUD_BUSYSPINNER_MESSAGE__TAKING_MUGSHOT";
		case 5:
			return "HUD_BUSYSPINNER_MESSAGE__LOADING_LOBBY";
		case 6:
			return "HUD_BUSYSPINNER_MESSAGE__FINDING_PLAYERS";
		case 7:
			return "HUD_BUSYSPINNER_MESSAGE__CREATING_POSSE";
		case 8:
			return "HUD_BUSYSPINNER_MESSAGE__REJOINING_POSSE";
		case 9:
			return "HUD_BUSYSPINNER_MESSAGE__REFORMING_POSSE";
		case 10:
			return "HUD_BUSYSPINNER_MESSAGE__MATCHMAKING";
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

int func_457(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
		return 2;
	}
	iVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 1;
	}
	iVar1 = NETWORK::_0xA6C0787443C9583E(iVar0);
	if (iVar1 == 255)
	{
		return 0;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		NETWORK::_0x7182EDDA1EE7DB5A(iVar0);
		return 1;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (uParam0->f_7[iVar2 /*5*/] == 255)
		{
		}
		else if (uParam0->f_7[iVar2 /*5*/] == iVar1)
		{
			return 2;
		}
		iVar2++;
	}
	if (uParam0->f_7[0 /*5*/] != 255 && uParam0->f_7[0 /*5*/] == PLAYER::PLAYER_ID())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iVar0);
		DEBUG::_0xEF256AE8A5A27966(139936, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_ENTITY_NETWORK_OWNERSHIP - Requesting network control of entity ", func_382(iParam2, 0), ": ", sParam3, " (iCSIdx: ", sParam4, ")");
	}
	return 0;
}

void func_458(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_3)))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
	bVar2 = func_553(uParam1->f_1) == PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PED::IS_PED_MALE(iVar1))
	{
		bVar3 = MISC::GET_HASH_KEY(&(uParam2->f_3));
	}
	else
	{
		bVar3 = MISC::GET_HASH_KEY(&(uParam2->f_7));
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		if (!func_97(uParam1->f_4, 14) && func_97(uParam1->f_4, 15))
		{
			func_554(iVar1, bVar3);
			func_28(&(uParam1->f_4), 14);
		}
		if (!func_97(uParam1->f_4, 15))
		{
			PED::_0x59BD177A1A48600A(iVar1, 1);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PED_MOCAP - CHECK_PLAYER_OUTFIT_CHANGES - Refresh Shop Items On: ", func_555(PED::_GET_METAPED_TYPE(iVar1), 0));
			func_28(&(uParam1->f_4), 15);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, MISC::GET_HASH_KEY("ChangeOutfit")))
	{
		if (!func_97(uParam1->f_4, 17) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			func_556(iVar1, bVar3);
			func_28(&(uParam1->f_4), 17);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PED_MOCAP - CHECK_PLAYER_OUTFIT_CHANGES - Outfit changed clone");
		}
		if (!func_97(uParam1->f_4, 16))
		{
			if (!bVar2)
			{
				func_28(&(uParam1->f_4), 16);
			}
			else if (PED::_0xA0BC8FAED8CFEB3C(iVar0) && func_557())
			{
				func_556(iVar0, bVar3);
				bVar4 = bVar3;
				func_558(&bVar4);
				func_28(&(uParam1->f_4), 16);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_PED_MOCAP - CHECK_PLAYER_OUTFIT_CHANGES - Outfit changed");
			}
		}
	}
}

int func_459(var uParam0, int* iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (iParam3 <= -1)
	{
		return 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Already cached, skipping & return true");
		return 1;
	}
	else if (iParam4 == 966820754)
	{
		if (iParam3 >= 4)
		{
			DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Invalid index, failing");
			return 2;
		}
		iVar0 = func_295(iParam1, iParam3);
		if (iVar0 < 0 || iVar0 >= 4)
		{
			DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Unable to find valid iServerIdx");
			return 2;
		}
		iVar1 = uParam0->f_7[iVar0 /*5*/];
		if (iVar1 == 255)
		{
			DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Invalid player id, skipping & return true");
			return 2;
		}
		uParam5->f_1 = PLAYER::GET_PLAYER_PED(iVar1);
		*uParam5 = iParam3;
		*iParam6 = 0;
		DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Player ped id cached successfully, returning true");
		return 1;
	}
	else
	{
		iVar4 = func_234(iParam7, iParam3, iParam4, &iVar2, iParam6, &uVar3);
		uParam5->f_1 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (iVar4 == 0)
		{
			if (!func_14(&(uParam5->f_11)))
			{
				DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Waiting for entity to spawn, starting timer, returning pending");
				func_15(&(uParam5->f_11), 0, 0);
			}
			if (func_39(&(uParam5->f_11), 0, 0) >= 15000)
			{
				DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Waited too long for entity to spawn, failing");
				func_315(&(uParam5->f_11));
				return 2;
			}
			DEBUG::_0xEF256AE8A5A27966(172576, 227, 9, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Waiting for entity to spawn, pending");
			return 0;
		}
		else if (iVar4 == 2 || !ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
		{
			func_315(&(uParam5->f_11));
			UNK_0x355E72323AEE83CC(-1, 6);
			DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - No entity grabbed, failing");
			return 2;
		}
		else if (iVar4 == 1)
		{
			func_315(&(uParam5->f_11));
			*uParam5 = iParam3;
			DEBUG::_0xEF256AE8A5A27966(172576, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_ID - iCSIdx: ", sParam2, " iEntityIndex: ", iParam3, " eEntityType: ", func_382(iParam4, 0), " - Entity id cached successfully, returning true");
			return 1;
		}
	}
	return 0;
}

int func_460(int* iParam0, var uParam1, char* sParam2)
{
	struct<4> Var0;

	Var0 = { func_299(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1.f_1), uParam1->f_1, 0) };
	return func_559(iParam0, &Var0);
}

bool func_461(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		if (!func_286(iVar0))
		{
			return false;
		}
		iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_462(var uParam0, int* iParam1, var uParam2, char* sParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1);
	uParam2->f_13 = uParam6->f_7;
	switch (uParam6->f_7)
	{
		case 0:
			func_28(&(uParam2->f_5), 1);
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::IS_PED_A_PLAYER(iVar0))
			{
				uParam2->f_13 = 5;
			}
			else if (AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
				{
					uParam2->f_13 = 1;
				}
				else
				{
					iVar1 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar0);
					uParam2->f_13.f_4 = PED::_GET_SEAT_PED_IS_USING(iVar0);
					uParam2->f_13 = 6;
				}
			}
			else if (PED::_IS_PED_HOGTIED(iVar0))
			{
				iVar2 = ENTITY::_0x61914209C36EFDDB(iVar0);
				if (iVar2 == 7 || iVar2 == 5)
				{
					iVar1 = PED::_GET_CARRIER_AS_PED(iVar0);
				}
				uParam2->f_13 = 4;
			}
			else if (PED::IS_PED_IN_COVER(iVar0, false, false))
			{
				uParam2->f_13 = 3;
			}
			else if (PED::_GET_PED_CROUCH_MOVEMENT(iVar0))
			{
				uParam2->f_13 = 2;
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
		case 4:
			break;
		case 6:
			iVar1 = PED::_GET_LAST_MOUNT(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				uParam2->f_13 = 1;
			}
			else
			{
				uParam2->f_13.f_4 = uParam6->f_10;
			}
			break;
		case 7:
			uParam2->f_13.f_2 = uParam6->f_8;
			uParam2->f_13.f_1 = uParam6->f_9;
			uParam2->f_13.f_4 = uParam6->f_10;
			break;
		case 8:
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar3);
				iVar5 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iVar1 = iVar4;
					DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " Personal Mount found");
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					iVar1 = iVar5;
					DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " Personal Vehicle found");
				}
				else
				{
					uParam2->f_13 = 1;
					DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " No personal transport found.");
				}
			}
			else
			{
				uParam2->f_13 = 1;
				DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " Ped is not a player, cannot use personal transport");
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar6 = -1;
		if (func_560(iParam1, iVar1, 0, &iVar6, &uVar7))
		{
			uParam2->f_13.f_2 = iVar6;
			uParam2->f_13.f_1 = uVar7;
		}
		else if (!func_97(uParam2->f_13.f_3, 0))
		{
			func_28(&(uParam2->f_13.f_3), 0);
			return 0;
		}
		else
		{
			iVar8 = func_561(iVar1, iParam1, sParam3, iParam4);
			if (iVar8 != -1)
			{
				uParam2->f_13.f_2 = iVar8;
				uParam2->f_13.f_1 = 0;
			}
		}
	}
	if (func_97(uParam6->f_6, 0) && AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
	{
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " SKIP - Reason: Ped using transport and MC_CS_BITPEDSTARTEND_SKIP_WARP_IF_USING_TRANSPORT set");
		bVar9 = true;
	}
	if (func_470(uParam0, iParam1, uParam2, sParam3, iParam4, uParam5, uParam6, sParam7, bParam8, bVar9, func_97(uParam2->f_5, 1)))
	{
		bVar9 = true;
	}
	if (uParam2->f_13.f_2 != -1 && uParam2->f_13.f_1 == 0)
	{
		iVar10 = uParam2->f_13.f_2;
		if (uParam2->f_10 == 2)
		{
			iVar11 = 3;
		}
		else
		{
			iVar11 = 11;
		}
		if (iParam1->f_1104[iVar10 /*15*/].f_10 < iVar11)
		{
			DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " Waiting on non-reg entity to hit right state: ", iVar10);
			return 0;
		}
		else if (!func_97(iParam1->f_1104[iVar10 /*15*/].f_5, 0))
		{
			if (uParam2->f_13 != 6 || uParam2->f_13.f_4 == -1)
			{
				iParam1->f_1104[iVar10 /*15*/].f_5.f_1 = { uParam2->f_5.f_1 };
				iParam1->f_1104[iVar10 /*15*/].f_5.f_4 = uParam2->f_5.f_4;
				DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " Assigning non-reg target entity's target coords and heading iCSIdx: ", iVar10);
				func_28(&(iParam1->f_1104[iVar10 /*15*/].f_5), 0);
			}
		}
	}
	DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - RESULTS for ", func_382(iParam4, 0), " iCSIdx: ", sParam3);
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - 		Original ID: ", *uParam2);
	DEBUG::_0xEF256AE8A5A27966(224, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - 		vCoord: ", &(uParam2->f_5.f_1));
	DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - 		fHeading: ", uParam2->f_5.f_4);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - 		eState: ", func_562(uParam2->f_13, 0));
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - 		iEntityTargetIdx: ", uParam2->f_13.f_2);
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - 		eTargetEntityType: ", func_382(uParam2->f_13.f_1, 0));
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_PED_START_END_INFO - 		eTransportSeat: ", func_563(uParam2->f_13.f_4, 0));
	if (bVar9)
	{
		return 1;
	}
	return 2;
}

bool func_463(var uParam0)
{
	if (!func_97(uParam0->f_4, 0))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_IS_CLONE_REQUIRED - : ", *uParam0, "  Entity is not valid.");
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[LV][MC][CUTSCENE] MC_CUTSCENE_IS_CLONE_REQUIRED - : ", *uParam0, " Original Entity Doesn't exist.");
		return false;
	}
	return true;
}

bool func_464(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_PED - OriginalIdx: ", *uParam0, " entityOriginal = NULL, entity passed doesnt exist");
		return true;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 8, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_PED - OriginalIdx: ", *uParam0, " entityOriginal NOT READY TO RENDER");
		return false;
	}
	vVar1 = { func_564(iVar0) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		iVar5 = PED::CLONE_PED(iVar0, 0f, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - OriginalIdx: ", *uParam0, " Failed to create clone ped");
			return true;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
		func_565(iVar0, iVar5);
		ENTITY::SET_ENTITY_COORDS(iVar5, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar5, fVar4);
		func_467(iVar5, 1);
		uParam0->f_2 = iVar5;
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - OriginalIdx: ", *uParam0, " Successfully Cloned PED");
	}
	if (!func_566(iVar0, iVar5, &(uParam0->f_4)))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 8, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - OriginalIdx: ", *uParam0, "NMOT OUTFIT READY");
		return false;
	}
	return true;
}

bool func_465(var uParam0, char* sParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	if (uParam0->f_13.f_2 == -1)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (func_567(iVar1))
		{
			AITRANSPORT::_0x8886D83A430537FD(iVar1, 4194336);
		}
		return func_472(uParam0, sParam1, iParam2, bParam3, uParam4);
	}
	DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] WARP_MC_CUTSCENE_PED - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bMoveClone:", MISC::_0xF216F74101968DB0(bParam3), " target entity present, don't warp");
	return true;
}

bool func_466(int* iParam0, char* sParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar14;
	bool bVar15;
	int iVar16;
	struct<4> Var17;
	bool bVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;

	if (bParam5)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_2);
	}
	else
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_1);
		if (uParam3->f_3 != 1)
		{
			return uParam3->f_3 != 0;
		}
	}
	Var1 = -1;
	Var1.f_5.f_4 = -1082130432;
	if (func_568(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, &Var1))
	{
		if (Var1.f_10 <= 1)
		{
			return false;
		}
		else if (func_97(Var1.f_4, 0))
		{
			if (func_569(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, bParam5, &iVar14))
			{
				DEBUG::_0xEF256AE8A5A27966(36348576, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Target ", func_382(uParam3->f_13.f_1, 0), " iCSIdx: ", uParam3->f_13.f_2, " found!");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(2794144, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Registered entity not found yet ", func_382(uParam3->f_13.f_1, 0), " iCSIdx: ", uParam3->f_13.f_2);
				return false;
			}
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - Target entity ", func_382(uParam3->f_13.f_1, 0), " ", uParam3->f_13.f_2, " not valid");
		}
	}
	bVar15 = false;
	iVar16 = func_570(iVar0, 1, 0, 0);
	Var17 = { func_571() };
	bVar21 = false;
	bVar22 = func_97(uParam4->f_6, 6);
	switch (uParam4->f_11)
	{
		case 0:
			break;
		case 1:
			WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, true);
			break;
		case 2:
			bVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, true);
			break;
		case 4:
			bVar15 = WEAPON::_0xDA37A053C1522F5D(iVar0, bVar22, 0, 0);
			break;
		case 5:
			bVar15 = uParam4->f_12;
			break;
		case 3:
			bVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, false);
			break;
		case 6:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_BOW"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_BOW"), bVar22, 0);
			}
			break;
		case 7:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_FISHINGROD"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_FISHINGROD"), bVar22, 0);
			}
			break;
		case 8:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_HEAVY"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_HEAVY"), bVar22, 0);
			}
			break;
		case 9:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -954861255)
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -954861255, bVar22, 0);
			}
			break;
		case 10:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_LASSO"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_LASSO"), bVar22, 0);
			}
			break;
		case 11:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_MELEE"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_MELEE"), bVar22, 0);
			}
			break;
		case 12:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_PETROLCAN"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_PETROLCAN"), bVar22, 0);
			}
			break;
		case 13:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_PISTOL"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_PISTOL"), bVar22, 0);
			}
			break;
		case 14:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_REPEATER"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_REPEATER"), bVar22, 0);
			}
			break;
		case 15:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_REVOLVER"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_REVOLVER"), bVar22, 0);
			}
			break;
		case 16:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_RIFLE"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_RIFLE"), bVar22, 0);
			}
			break;
		case 17:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_SHOTGUN"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_SHOTGUN"), bVar22, 0);
			}
			break;
		case 18:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_SNIPER"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_SNIPER"), bVar22, 0);
			}
			break;
		case 19:
			if (func_97(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_THROWN"))
			{
				bVar15 = iVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_THROWN"), bVar22, 0);
			}
			break;
		case 20:
			if (func_97(uParam4->f_6, 5) && WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
			{
				bVar15 = iVar16;
			}
			else
			{
				WEAPON::_0xF52BD94B47CCF736(iVar0, &Var17, bVar22, 0);
				bVar21 = true;
			}
			break;
		case 21:
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			break;
	}
	DEBUG::_0xEF256AE8A5A27966(2720, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - Weapon State:", func_572(uParam4->f_11, 0), " Weapon type to use: ", func_527(bVar15, 0));
	if (bVar21)
	{
		WEAPON::_0x12FB95FE3D579238(iVar0, &Var17, 1, 0, 0, 0);
		DEBUG::_0xEF256AE8A5A27966(139808, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - SET_CURRENT_PED_WEAPON_BY_GUID: ", Var17, ",", Var17.f_1, ",", Var17.f_2, ",", Var17.f_3);
	}
	else
	{
		iVar23 = uParam4->f_11;
		if ((iVar23 >= 6 && iVar23 <= 19) && bVar15 == 0)
		{
			WEAPON::_0xF52BD94B47CCF736(iVar0, &Var17, bVar22, 0);
			WEAPON::_0x12FB95FE3D579238(iVar0, &Var17, 1, 0, 0, 0);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - Invalid so setting to GET_BEST_PED_SHORTARM_GUID");
		}
		if (bVar15 != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, bVar15, 0, false))
			{
				DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - GIVE_WEAPON_TO_PED: ", func_527(bVar15, 0));
				WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, bVar15, 0, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				WEAPON::_ADD_AMMO_TO_PED(iVar0, bVar15, 10, 752097756);
				WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, bVar15);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, bVar15, true, 0, false, false);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - SET_CURRENT_PED_WEAPON: ", func_527(bVar15, 0));
		}
	}
	if (!func_573(iVar0, uParam4))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - Ped dead or dying so doing nothing");
		return true;
	}
	DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - Ped State:", func_562(uParam3->f_13, 0));
	switch (uParam3->f_13)
	{
		case 0:
			DEBUG::_0xEF256AE8A5A27966(172704, 227, 1, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " CURRENT is not a valid state to apply, this is only used as caching time!");
			break;
		case 1:
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				if (PED::_GET_PED_CROUCH_MOVEMENT(iVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iVar0, false, 0, true);
					DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Set Crouched -> Standing");
				}
			}
			else if (AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
			{
				AITRANSPORT::_0x8886D83A430537FD(iVar0, 4194336);
				DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Set Transport -> Standing");
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Already Standing");
			}
			break;
		case 2:
			if (!PED::_GET_PED_CROUCH_MOVEMENT(iVar0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iVar0, true, 0, true);
				DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Set Crouched");
			}
			break;
		case 3:
			if (!func_430(iVar0, -1959848946))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					bVar24 = true;
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar0, uParam3->f_5.f_1, -1, 1, 0, 1, func_97(uParam4->f_6, 1), 0, false, 1, 0);
				PED::_0x2208438012482A1A(iVar0, false, false);
				if (bVar24)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
				DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone: ", MISC::_0xF216F74101968DB0(bParam5), " Set in Cover");
			}
			break;
		case 4:
			if (!func_430(iVar0, joaat("SCRIPT_TASK_CARRIABLE")))
			{
				TASK::TASK_CARRIABLE(iVar0, joaat("HOGTIED_PED"), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar14), 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
				{
					ENTITY::_0x9587913B9E772D29(iVar0, 0);
				}
				PED::_0x2208438012482A1A(iVar0, false, false);
				DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Set HOGTIED");
			}
			if (!PED::_IS_PED_HOGTIED(iVar0))
			{
				return false;
			}
			break;
		case 6:
		case 7:
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " target entity not found");
				return true;
			}
			if (!AITRANSPORT::_0x159EF5B6EDCE00E8(iVar0, iVar14) || (uParam3->f_13.f_4 != -2 && PED::_GET_SEAT_PED_IS_USING(iVar0) != uParam3->f_13.f_4))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				}
				AITRANSPORT::_0xE588B5A8A005CB5E(iVar0, iVar14, uParam3->f_13.f_4, 4194336);
				DEBUG::_0xEF256AE8A5A27966(696992, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " put into Seat: ", func_563(uParam3->f_13.f_4, 0));
				if (!AITRANSPORT::_0x159EF5B6EDCE00E8(iVar0, iVar14))
				{
					DEBUG::_0xEF256AE8A5A27966(696992, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " not placed on target entity: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iVar14)));
					return false;
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				func_574(iVar0, 0);
				DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " Set DEAD");
			}
			break;
	}
	DEBUG::_0xEF256AE8A5A27966(172704, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_PED_START_END_STATE - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bApplyToClone:", MISC::_0xF216F74101968DB0(bParam5), " COMPLETE!");
	return true;
}

void func_467(char* sParam0, bool bParam1)
{
	DEBUG::_0xEF256AE8A5A27966(2592, 227, 7, "[MC][CUTSCENE] SET_MC_CUTSCENE_ENTITY_HIDDEN - clone: ", sParam0, " bHidden: ", MISC::_0xF216F74101968DB0(bParam1));
	ENTITY::FREEZE_ENTITY_POSITION(sParam0, bParam1);
	ENTITY::SET_ENTITY_COLLISION(sParam0, !bParam1, false);
	ENTITY::SET_ENTITY_VISIBLE(sParam0, !bParam1);
}

int func_468(int* iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (!func_97(uParam2->f_1, 0) && ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] IS_MC_CUTSCENE_ENTITY_VALID_MOCAP - Invalid - entity dead and not allowed");
		return 2;
	}
	return func_559(iParam0, sParam3);
}

void func_469(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_2, 6, 1);
	}
}

bool func_470(var uParam0, int* iParam1, var uParam2, char* sParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	struct<10> Var14;

	iVar0 = uParam2->f_1;
	if (ENTITY::GET_ENTITY_TYPE(iVar0) == 1 && !bParam10)
	{
		vVar1 = { func_564(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = func_157(uParam0->f_1.f_2);
	uParam2->f_5.f_1 = { vVar1 };
	uParam2->f_5.f_4 = fVar4;
	if (bParam9)
	{
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " SKIP - Reason: bRetriveBaseOnly = TRUE");
		bVar6 = true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, uParam5->f_1622[iVar5 /*3*/], true) < 100f && func_97(uParam6->f_4, 0))
	{
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " SKIP - Reason: Entity in range and MC_CUTSCENE_ENTITY_START_END_BITS_SkipWarpIfInRange set");
		bVar6 = true;
	}
	if (func_97(uParam6->f_4, 1))
	{
		DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " Use heading only");
		bVar7 = true;
	}
	if (!bVar6)
	{
		if (func_97(uParam6->f_4, 2))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1->f_1484.f_208, sParam7, &Var14, false, 0, 2))
			{
				if (bParam8)
				{
					vVar8 = { Var14 };
					vVar11 = { Var14.f_3 };
				}
				else
				{
					vVar8 = { Var14.f_6 };
					vVar11 = { Var14.f_9 };
				}
				if (!bVar7)
				{
					uParam2->f_5.f_1 = { vVar8 };
				}
				uParam2->f_5.f_4 = vVar11.z;
				bVar6 = true;
			}
		}
	}
	if (!bVar6)
	{
		if (!func_175(*uParam6))
		{
			if (!bVar7)
			{
				uParam2->f_5.f_1 = { *uParam6 };
			}
			uParam2->f_5.f_4 = uParam6->f_3;
			bVar6 = true;
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(8864, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_START_END_INFO - ", func_382(iParam4, 0), " iCSIdx: ", sParam3, " Specific coord invalid");
		}
	}
	DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_START_END_INFO - RESULTS for ", func_382(iParam4, 0), " iCSIdx: ", sParam3);
	DEBUG::_0xEF256AE8A5A27966(224, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_START_END_INFO - 		vCoord: ", &(uParam2->f_5.f_1));
	DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "[MC][CUTSCENE] CACHE_MC_CUTSCENE_ENTITY_START_END_INFO - 		fHeading: ", uParam2->f_5.f_4);
	return bVar6;
}

int func_471(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - does not exist");
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - does not exist");
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_TYPE(uParam0->f_1);
	switch (iVar0)
	{
		case 1:
			return func_464(uParam0);
		case 2:
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0->f_1)))
			{
				return func_575(uParam0, bParam1);
			}
			else
			{
				return func_576(uParam0, iParam2);
			}
			break;
		case 3:
			return func_577(uParam0);
	}
	return 1;
}

bool func_472(var uParam0, char* sParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] WARP_MC_CUTSCENE_ENTITY ownership is ", func_578(uParam0->f_3, 0), ", returning ", uParam0->f_3 != 0);
			return uParam0->f_3 != 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] WARP_MC_CUTSCENE_ENTITY did not find a valid entity");
		return false;
	}
	bVar1 = ENTITY::_IS_ENTITY_FROZEN(iVar0);
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (func_97(uParam0->f_5, 1))
	{
		func_579(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 1, 1073741824 /* Float: 2f */);
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] WARP_MC_CUTSCENE_ENTITY - MC_CUTSCENE_PED_START_END_BITS_PlaceNoOffset");
	}
	else
	{
		func_579(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 2, 1073741824 /* Float: 2f */);
	}
	if (!func_97(uParam4->f_1, 2))
	{
		ENTITY::_0x9587913B9E772D29(iVar0, 1);
	}
	else
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] WARP_MC_CUTSCENE_ENTITY - MC_CUTSCENE_ENTITY_BITS_DontPlaceOnGroundProperly");
	}
	if (bParam3 && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] WARP_MC_CUTSCENE_ENTITY - Calling FORCE_PED_AI_AND_ANIMATION_UPDATE for clone entity");
		PED::_0x2208438012482A1A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), false, false);
	}
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	}
	ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar5 = ENTITY::GET_ENTITY_HEADING(iVar0);
	DEBUG::_0xEF256AE8A5A27966(1852744352, 227, 7, "[MC][CUTSCENE] WARP_MC_CUTSCENE_ENTITY - ", func_382(iParam2, 0), " iCSIdx: ", sParam1, " bMoveClone:", MISC::_0xF216F74101968DB0(bParam3), " COMPLETE! pos: ", &(uParam0->f_5.f_1), " heading: ", uParam0->f_5.f_4, " actual coord: ", &vVar2, " actual heading: ", fVar5);
	return true;
}

bool func_473(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam4)
	{
		iVar0 = uParam1->f_2;
	}
	else
	{
		iVar0 = uParam1->f_1;
		if (uParam1->f_3 != 1)
		{
			return uParam1->f_3 != 0;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_4, 3) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
		iVar2 = 9;
		if (VEHICLE::_0xFF5791B7639C2A46(iVar1, &iVar2))
		{
			WEAPON::_0x194D877FC5597B7D(iVar1, iVar2, uParam0->f_5, 1);
			DEBUG::_0xEF256AE8A5A27966(96, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_ENTITY_START_END_STATE - SET_VEHICLE_WEAPON_HEADING ", uParam0->f_5);
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] APPLY_MC_CUTSCENE_ENTITY_START_END_STATE - SET_VEHICLE_WEAPON_HEADING - Failed to get turret seat!");
		}
	}
	return true;
}

void func_474(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, iParam4))
	{
		if (!func_97(uParam1->f_4, iParam2) && func_97(uParam0->f_1, 0))
		{
			func_28(&(uParam1->f_4), iParam2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_1))
			{
				iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
				VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar0, iParam5);
			}
			DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_VEHICLE_MOCAP - ", func_580(iParam2, 0), " has control: ", NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_1));
		}
		if (!func_97(uParam1->f_4, iParam3))
		{
			func_28(&(uParam1->f_4), iParam3);
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
			VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar1, iParam5);
			DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] PROCESS_MC_CUTSCENE_VEHICLE_MOCAP - ", func_580(iParam3, 0));
		}
	}
}

int func_475(int* iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;

	if (!func_301(iParam0, uParam3, iParam2, 0, &uVar0, 0, 0))
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE][MOCAP] IS_MC_CUTSCENE_NON_REG_ENTITY_MOCAP - iIdx: ", iParam2, " - Invalid - Could not find handle from parent");
		return 2;
	}
	return func_559(iParam0, &uVar0);
}

bool func_476(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_477(int iParam0, int iParam1)
{
	if (!func_476(iParam0))
	{
		return false;
	}
	if (func_33() == -1)
	{
		return (Global_1915867.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051777.f_80[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_478(int iParam0, int iParam1)
{
	if (!func_476(iParam0))
	{
		return;
	}
	if (func_33() == -1)
	{
		Global_1915867.f_3[iParam0 /*447*/].f_6 = (Global_1915867.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051777.f_80[iParam0 /*75*/].f_1 = (Global_1051777.f_80[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_479(int iParam0, int iParam1)
{
	if (!func_476(iParam0))
	{
		return;
	}
	if (func_33() == -1)
	{
		Global_1915867.f_3[iParam0 /*447*/].f_6 = (Global_1915867.f_3[iParam0 /*447*/].f_6 - (Global_1915867.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051777.f_80[iParam0 /*75*/].f_1 = (Global_1051777.f_80[iParam0 /*75*/].f_1 - (Global_1051777.f_80[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_480(int iParam0)
{
	if (func_581())
	{
		if (Global_1915867.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

char* func_481(int iParam0)
{
	return func_582(iParam0, 0);
}

bool func_482(int iParam0)
{
	return (Global_1102630.f_3520 && iParam0) != 0;
}

char* func_483(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_GET_ENTITY_CUTSCENE_HANDLE: entity does not exist");
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_447(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_583(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_584(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_484(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_GET_ENTITY_INDEX: entity does not exist");
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_485(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_17[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_486(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_REMOVE_ENTITY: entCut doesn't exist");
		return;
	}
	iVar12 = 0;
	while (iVar12 < 14)
	{
		if (uParam0->f_17[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_17[iVar12 /*12*/] = { Var0 };
			DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REMOVE_ENTITY: entCut removed: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)));
			return;
		}
		iVar12++;
	}
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REMOVE_ENTITY: entCut wasn't registered - ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam1)));
}

int func_487(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 109, "CUTSCENE_GET_EMPTY_ENTITY_INDEX: Found index: ", iVar0);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_488(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_489(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_490()
{
	if (func_540(Global_26567))
	{
		func_543(&Global_26567, 0, 0);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEANUP_SKIP_PROMPT: cleaning up g_useCurrentPlayingCutsceneSkip");
	}
}

bool func_491(int iParam0)
{
	int iVar0;

	if (func_585(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_492(int iParam0, bool bParam1)
{
	if (bParam1 && !func_540(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 145, "IS_USE_CONTEXT_ENABLED - Invalid context! Returning false.");
		return false;
	}
	return !func_586(iParam0, 4);
}

bool func_493(bool bParam0, bool bParam1)
{
	if (!func_540(Global_26567))
	{
		Global_26567 = func_587("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1952230[Global_26567 /*23*/].f_16 = Global_20[3];
		func_542(Global_26567, 0, 1);
		func_588(Global_26567, 6, 1);
		if (bParam1)
		{
			func_588(Global_26567, 14, 1);
		}
		DEBUG::_0xF0783374333FD8CE(8, 109, "USE_CONTEXT_SHOULD_CUTSCENE_SKIP: created cutscene skip with progress");
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 109, "USE_CONTEXT_SHOULD_CUTSCENE_SKIP: context is valid");
		if (!func_492(Global_26567, 0))
		{
			func_541(Global_26567, 1, 1, 1);
			DEBUG::_0xF0783374333FD8CE(8, 109, "USE_CONTEXT_SHOULD_CUTSCENE_SKIP: re-enabling context");
		}
		if (func_589(Global_26567, 1) != 0f && bParam0)
		{
			func_542(Global_26567, 1, 1);
			DEBUG::_0x1B08D1EB9D8C4931(8, 109, "USE_CONTEXT_SHOULD_CUTSCENE_SKIP: SET_USE_CONTEXT_DRAWING_ENABLED - TRUE");
		}
		else
		{
			func_542(Global_26567, 0, 1);
			DEBUG::_0x1B08D1EB9D8C4931(8, 109, "USE_CONTEXT_SHOULD_CUTSCENE_SKIP: SET_USE_CONTEXT_DRAWING_ENABLED - FALSE");
		}
		return func_590(Global_26567, 1);
	}
	return false;
}

void func_494(var uParam0, char* sParam1)
{
	if (((!func_344(uParam0, 32) || func_591(uParam0)) || func_344(uParam0, 268435456)) && !func_344(uParam0, 65536))
	{
		func_261(&(uParam0->f_263), 256);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_HOLSTER_PLAYER_WEAPONS: force holstering players weapons due to multistart or no leadin existing");
	}
}

void func_495(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 9, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 7, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 8, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 10, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam1);
	}
}

bool func_496()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(872480335) > 0)
	{
		return true;
	}
	return false;
}

void func_497(bool bParam0)
{
	if (func_496())
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "CAMERA_ITEM - FORCE_CAMERA_ITEM_AWAY() has been called by ", UNK_0x8F77B33B6A34D8BA());
		Global_1959060 = 1;
	}
	if (func_592(joaat("CAMERA_ITEM")))
	{
		DEBUG::_0xF0783374333FD8CE(40, 190, "CAMERA_ITEM - REMOVE_SCRIPT_HASH_FROM_QUEUE in script ", UNK_0x8F77B33B6A34D8BA());
	}
	if (bParam0 && (Global_1940410.f_38 == joaat("WEAPON_KIT_CAMERA") || Global_1940410.f_38 == 332793555))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940410.f_38 = joaat("WEAPON_UNARMED");
	}
}

void func_498(var uParam0, char[64] cParam1)
{
	uParam0->f_192 = { cParam1 };
}

void func_499(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])))
		{
			func_593(uParam0, &(uParam0->f_225[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { func_449() };
	func_593(uParam0, &Var1);
	Var1 = { func_360(uParam0) };
	func_593(uParam0, &Var1);
}

char* func_500(int iParam0)
{
	return "CUTSCENE_STATE_INVALID";
}

void func_501(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_504() - fParam1);
	func_594(fParam0, 1);
	func_595(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_502(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_503(float fParam0)
{
	return func_502(*fParam0, 2);
}

float func_504()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_505()
{
	return func_585(UIFEED::_0xC17F69E1418CD11F(3));
}

bool func_506()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_507(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_508(var uParam0)
{
	return uParam0->f_265;
}

void func_509(var uParam0)
{
	bool bVar0;

	if (func_596(&bVar0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_REMOVE_PLAYERS_DISGUISE: player is wearing a disguise, removing - ", func_527(bVar0, 0));
		if (func_597(bVar0, 0))
		{
			if (func_526(bVar0) == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */)
			{
				func_598(joaat("MPC_HIDE_ACTION_HAT"), Global_33, 0, 0);
			}
			else
			{
				func_598(-1144282354, Global_33, 0, 0);
			}
		}
		if (*uParam0 == 0)
		{
			*uParam0 = bVar0;
		}
	}
}

void func_510(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1940410.f_6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: g_pedPlayer is dead, exiting");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER");
	Global_13 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_599(-1);
		func_600(-1);
	}
	if (!func_397(*uParam0, 8388608))
	{
		func_398(1);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_33, true);
	if (!func_397(*uParam0, 32))
	{
		iParam1 |= 16;
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: setting SPC_REMOVE_EXPLOSIONS to remove explosions");
	}
	if (!func_397(*uParam0, 64))
	{
		iParam1 |= 8;
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: setting SPC_REMOVE_FIRES to remove fires");
	}
	if (!func_397(*uParam0, 128))
	{
		iParam1 |= 32;
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: setting SPC_REMOVE_PROJECTILES to remove projectiles");
	}
	if (func_397(*uParam0, 131072))
	{
		iParam1 |= 2048;
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: setting SPC_PREVENT_EVERYBODY_BACKOFF to prevent everyone from backing off");
	}
	if (!func_397(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_397(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_397(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_397(*uParam0, 4) && !func_397(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_397(*uParam0, 2048))
	{
		func_601(0);
	}
	if (func_397(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
	if (func_397(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, true);
	}
	if (func_397(*uParam0, 8192))
	{
		func_602();
	}
	if (!func_397(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_33, 264, true);
	}
	if (!func_397(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: disabling hint camera");
		}
	}
	if (!func_397(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: disabling cinematic camera");
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_33, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_33))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_33, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_33, ENTITY::GET_ENTITY_HEADING(Global_33));
			ENTITY::SET_ENTITY_VELOCITY(Global_33, 0f, 0f, 0f);
		}
		if (!func_397(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_33, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_603() == iVar7)
						{
							DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: carriable is the player's saddle");
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_175(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_33, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_604(&vVar3, 50, 10, 0, 0);
					}
					vVar3.f_2 = (vVar3.z + 10f);
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar3.f_2), true))
					{
						DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: Could not find ground Z for carriable");
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_605(2);
						func_606(-1);
						func_607(vVar3);
						func_609(func_608());
					}
					bVar1 = true;
					DEBUG::_0xF0783374333FD8CE(936, 109, "CUTSCENE_ENTER: removed carriable with model - ", func_610(ENTITY::GET_ENTITY_MODEL(iVar7), 0), " at coords - ", &vVar3);
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_33, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
					PED::_0x2208438012482A1A(Global_33, false, false);
				}
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: didn't remove any carriables");
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_33))
	{
		iVar9 = PED::GET_MOUNT(Global_33);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_397(*uParam0, 4096))
	{
		func_386(Global_33);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: CLEAR_ALL_PED_BLOOD ");
	}
	if (!func_397(*uParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_397(*uParam0, 2097152) && !func_262(144))
	{
		if (func_611() || PED::_0x50F124E6EF188B22(Global_33))
		{
			func_612(1);
		}
	}
	*uParam0 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER: Reset enter flags back to CUTSCENE_ENTER_FLAG_INVALID");
}

void func_511(var uParam0, vector3 vParam1)
{
	uParam0->f_265 = { vParam1 };
	DEBUG::_0xF0783374333FD8CE(56, 109, "CUTSCENE_SET_CARRIABLE_DROP_POS; setting drop position - ", &vParam1);
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_512(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (func_344(uParam0, 2048) && !func_175(func_613(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_33);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_344(uParam0, -2147483648))) && PED::GET_MOUNT(Global_33) != iVar1)
		{
			func_579(iVar1, func_613(uParam0), func_614(uParam0), 2, 1073741824 /* Float: 2f */);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_MANAGE_RIDE_EMERGENCY_TELEPORT: teleported last mount");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_MANAGE_RIDE_EMERGENCY_TELEPORT: failed to teleport last mount");
		}
		iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, uParam0->f_4, true, 0)) || func_344(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_33, iVar2, true))
		{
			func_579(iVar2, func_613(uParam0), func_614(uParam0), 2, 1073741824 /* Float: 2f */);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_MANAGE_RIDE_EMERGENCY_TELEPORT: teleported last vehicle");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_MANAGE_RIDE_EMERGENCY_TELEPORT: failed to teleport last vehicle");
		}
	}
}

void func_513(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((func_344(uParam0, 268435456) && !func_175(func_613(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_613(uParam0) };
			func_579(iVar0, vVar1, func_615(vVar1, Global_34, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_514(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_268 = { vParam1 };
	uParam0->f_271 = iParam4;
	if (func_175(vParam1))
	{
		func_81(uParam0, 2048, 1);
	}
	else
	{
		func_258(uParam0, 2048);
		if (bParam5)
		{
			func_258(uParam0, -2147483648);
		}
	}
}

void func_515(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_17[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]) != Global_33)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
				{
					if (!func_383(&(uParam0->f_17[iVar0 /*12*/]), 8))
					{
						if (func_617(func_616(iVar1, 0, 1, 0)))
						{
							if (!func_618(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
								DEBUG::_0xF0783374333FD8CE(680, 109, "CUTSCENE_FORCE_HOLSTER_PED_HELD_WEAPONS: holstering primary weapon: ", func_619(func_616(iVar1, 0, 1, 0)), " for the entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1));
							}
							else
							{
								DEBUG::_0xF0783374333FD8CE(2728, 109, "CUTSCENE_FORCE_HOLSTER_PED_HELD_WEAPONS: NOT holstering primary weapon: ", func_619(func_616(iVar1, 0, 1, 0)), " for the entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " because it was added as a cutscene weapon");
							}
						}
						if (func_617(func_616(iVar1, 1, 1, 0)))
						{
							if (!func_618(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 1, false, false);
								DEBUG::_0xF0783374333FD8CE(680, 109, "CUTSCENE_FORCE_HOLSTER_PED_HELD_WEAPONS: holstering secondary weapon: ", func_619(func_616(iVar1, 1, 1, 0)), " for the entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1));
							}
							else
							{
								DEBUG::_0xF0783374333FD8CE(2728, 109, "CUTSCENE_FORCE_HOLSTER_PED_HELD_WEAPONS: NOT holstering secondary weapon: ", func_619(func_616(iVar1, 1, 1, 0)), " for the entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1), " because it was added as a cutscene weapon");
							}
						}
					}
					else
					{
						DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_FORCE_HOLSTER_PED_HELD_WEAPONS: NOT holstering weapons for the entity with handle: ", &(uParam0->f_17[iVar0 /*12*/].f_1));
					}
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_FORCE_HOLSTER_PED_HELD_WEAPONS: NOT holstering weapons for the entity with handle because it's not in the scene: ", &(uParam0->f_17[iVar0 /*12*/].f_1));
				}
			}
		}
		iVar0++;
	}
}

void func_516(var uParam0, bool bParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_14)
		{
			PED::_SET_PED_COMPONENT_DISABLED(Global_33, joaat("HOLSTERS_LEFT"), 1);
		}
	}
	else if (!func_489(uParam0->f_264, 256))
	{
		func_620(Global_33, Global_1953612.f_1694.f_1[28 /*3*/], 0, joaat("MP_COMPONENT_TYPE_LOADOUT_4"), 1, 1, 0, 1, 0, 0, 1);
		func_260(&(uParam0->f_264), 256);
	}
	Global_14 = !bParam1;
}

int func_517(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__METAPED_PLAYER_COMPONENTS__APPLY_HIDE_ACTIONS] Null passed in for eMetaFlags, we're going to set it to update all meta components!");
		bParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_621(14, bParam1, 0, 0, 0);
		}
		else
		{
			func_621(14, bParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_622(0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__METAPED_PLAYER_COMPONENTS__APPLY_HIDE_ACTIONS] We failed to hide things? | RETURN FALSE");
	}
	func_623(&(Global_1953612.f_1694), iParam0, 1, bParam1, 1, bParam3, 1, 1);
	return 1;
}

void func_518(var uParam0)
{
	StringCopy(&(uParam0->f_192), "", 128);
	func_624(uParam0);
	func_625(uParam0);
	func_626(uParam0);
}

void func_519(var uParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEAR_ALL_FLAGS: clearing cutscene flags");
	uParam0->f_11 = 0;
	UNK_0x355E72323AEE83CC(-1, 6);
}

void func_520(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_488(&(uParam0->f_17[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_521(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

void func_522(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEANUP_GLOBALS");
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26566))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_26566))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_26566);
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEANUP_GLOBALS: cleaning up g_iCurrentPlayingCutscene");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEANUP_GLOBALS: g_iCurrentPlayingCutscene owned by another script");
		}
	}
	Global_26566 = -1;
	StringCopy(&Global_26568, "", 128);
	Global_13 = 0;
	if (bParam0)
	{
		func_490();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_523(int iParam0)
{
	func_627();
	Global_1913655.f_1 = MISC::GET_GAME_TIMER();
	Global_1913655.f_2 = iParam0;
}

void func_524()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_525(bool bParam0)
{
	if (bParam0)
	{
		Global_1952230.f_1381 = (Global_1952230.f_1381 - Global_1952230.f_1381 & 2);
	}
	else
	{
		Global_1952230.f_1381 |= 2;
	}
	func_628(bParam0);
}

bool func_526(bool bParam0)
{
	struct<2> Var0;

	if (!func_597(bParam0, 0))
	{
		return false;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return false;
	}
	return Var0.f_1;
}

var func_527(bool bParam0, int iParam1)
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

int func_528(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	UNK_0x355E72323AEE83CC(208, 6);
	if (!func_629(bParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	bVar0 = func_630(bParam1);
	return func_530(iParam0, bVar0, bParam2, bParam2, bParam4);
}

int func_529(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953612.f_2862.f_1)
	{
		if (Global_1953612.f_2862.f_43[iVar0 /*2*/] == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_530(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam1 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__METAPED_PLAYER_COMPONENTS__CLEAR_HIDE_ACTIONS] Null passed in for eMetaFlags, we're going to set it to update all meta components!");
		bParam1 = -1;
	}
	if (!func_631(&bParam1, bParam4))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__METAPED_PLAYER_COMPONENTS__CLEAR_HIDE_ACTIONS] Player had nothing hidden? | RETURN FALSE");
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_621(2, bParam1, 0, 0, 0);
		}
		else
		{
			func_621(2, bParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_623(&(Global_1953612.f_1694), iParam0, 1, bParam1, 1, bParam3, 1, 1);
	return 1;
}

bool func_531(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		case 1:
			return 690901814;
		case 3:
			return 2083323686;
		case 2:
			return 474191950;
		case 4:
			return 128623374;
		case 6:
			return -993263478;
		case 7:
			return 1344742130;
		case 8:
			return 537169871;
		case 9:
			return -1763610107;
		case 10:
			return 68203906;
		case 11:
			return 253418738;
		case 12:
			return 433996714;
		case 13:
			return 999578278;
	}
	return 0;
}

char* func_533(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2124237476:
			return "HUD_CTX_MP_OUT_OF_AREA_BOUNDS";
		case -2106452847:
			return "HUD_CTX_PLAYER_WITHOUT_SATCHEL";
		case -2074936164:
			return "HUD_CTX_ITEM_CONSUMPTION_STAMINA";
		case -2050003024:
			return "HUD_CTX_IN_MINIGAME_POKER_OUTRO";
		case -1921158550:
			return "HUD_CTX_MONEY_ANIMATION_PLAYING";
		case -1851042378:
			return "HUD_CTX_MP_PLAYSTYLE_ICON_TRANSITION";
		case -1847602092:
			return "HUD_CTX_INSPECT_ITEM";
		case -1763610107:
			return "HUD_CTX_MP_INSTANCED_TOP_RIGHT_HUD";
		case -1744263063:
			return "HUD_CTX_PROMPT_MONEY";
		case -1711480773:
			return "HUD_CTX_SCRIPT_CME_CUTSCENE";
		case -1679307491:
			return "HUD_CTX_IN_MISSION_CUTSCENE";
		case -1618603322:
			return "HUD_CTX_IN_CAMP";
		case -1450522739:
			return "HUD_CTX_MP_RACES";
		case -1404924319:
			return "HUD_CTX_IN_PHOTO_MODE";
		case -1347445791:
			return "HUD_CTX_IN_SHOP";
		case -1319249689:
			return "HUD_CTX_MP_IN_ROLE_CUTSCENE";
		case -1318884352:
			return "HUD_CTX_ROBBERY_ACTION";
		case -1288854888:
			return "HUD_CTX_MINIGAME_SHOOTING";
		case -1274560729:
			return "HUD_CTX_POSSE_CREATE";
		case -1249243147:
			return "HUD_CTX_NON_COMBAT_MISSION";
		case -1152968308:
			return "HUD_CTX_IN_FAST_TRAVEL_MENU";
		case -1135800718:
			return "HUD_CTX_ITEM_CONSUMPTION_HEALTH";
		case -998890882:
			return "HUD_CTX_RESTING_BY_FIRE";
		case -993263478:
			return "HUD_CTX_MISSION_CONTROLLER_INTRO";
		case -972988753:
			return "HUD_CTX_INFO_CARD";
		case -950624750:
			return "HUD_CTX_IN_CAMP_WITH_SUPPLIES";
		case -859384195:
			return "HUD_CTX_FISHING";
		case -782493871:
			return "HUD_CTX_MP_TRADER";
		case -523411361:
			return "HUD_CTX_PLAYER_MENU_CAMP_MAINTENANCE";
		case -492723688:
			return "HUD_CTX_IN_PHOTO_STUDIO";
		case -469828803:
			return "HUD_CTX_CRAFTING_SEQUENCE";
		case -451238553:
			return "HUD_CTX_NO_ALIVE_PLAYER_HORSE";
		case -424376908:
			return "HUD_CTX_IN_QUICK_TIME_EVENT";
		case -421111283:
			return "HUD_CTX_MP_SPECTATING";
		case -402975377:
			return "HUD_CTX_ITEM_CONSUMPTION_DEADEYE";
		case -365265320:
			return "HUD_CTX_IN_MP_TUTORIAL_CUTSCENE";
		case -364582530:
			return "HUD_CTX_MP_STEW_POT_PROXIMITY";
		case -346707618:
			return "HUD_CTX_SHOW_MP_DEATH_SCREEN";
		case -333726060:
			return "HUD_CTX_IN_MINIGAME_WITH_MP_GAME_UPDATES";
		case -252438768:
			return "HUD_CTX_IN_CAMP_WARDROBE";
		case -74777547:
			return "HUD_CTX_MP_UGC_PLAYER_OUTRO";
		case -69004225:
			return "HUD_CTX_INPUT_REVEAL_HUD";
		case -66088566:
			return "HUD_CTX_SHARP_SHOOTER_EVENT";
		case -58462683:
			return "HUD_CTX_IN_RESPAWN";
		case -48209965:
			return "HUD_CTX_MP_BOUNTY_JAILTIME";
		case 0:
			return "HUD_CTX_INVALID";
		case 36547242:
			return "HUD_CTX_MP_LEADERBOARD_MINI";
		case 68203906:
			return "HUD_CTX_MISSION_CONTROLLER_OUTRO";
		case 100665617:
			return "HUD_CTX_IN_FISHING_MODE";
		case 121713391:
			return "HUD_CTX_HONOR_SHOW";
		case 128623374:
			return "HUD_CTX_MP_MATCHMAKING_TRANSITION";
		case 253418738:
			return "HUD_CTX_MP_COOP_MISSION_POST_COMPLETION_PRE_AWARD_FLOW";
		case 308865989:
			return "HUD_CTX_ITEM_CONSUMPTION_STAMINA_CORE";
		case 367098993:
			return "HUD_CTX_CODE_TOOLS";
		case 372886907:
			return "HUD_CTX_IN_MINIGAME";
		case 382897689:
			return "HUD_CTX_TRANSLATE_OVERLAY";
		case 398076311:
			return "HUD_CTX_SP_INTRO_HORSE_ITEMS_RESTRICTED";
		case 421084969:
			return "HUD_CTX_TITHING_NOGANG_CASH";
		case 433996714:
			return "HUD_CTX_MP_COOP_MISSION_POST_COMPLETION_AWARD_FLOW";
		case 439038017:
			return "HUD_CTX_IN_STABLES";
		case 439300812:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_HEALTH_CORE";
		case 474191950:
			return "HUD_CTX_HACK_RADAR_FORCE_HIDE";
		case 481761311:
			return "HUD_CTX_IN_LOBBY";
		case 537169871:
			return "HUD_CTX_MP_INSTANCED_HUD";
		case 557238883:
			return "HUD_CTX_MP_MOONSHINE_BUSINESS";
		case 559258637:
			return "HUD_CTX_SHOP_OBJECTIVE";
		case 598430796:
			return "HUD_CTX_MISSION_CONTROLLER_CUTSCENE";
		case 690901814:
			return "HUD_CTX_MISSION_CONTROLLER";
		case 700961590:
			return "HUD_CTX_SLEEPING";
		case 724769646:
			return "HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED";
		case 853763926:
			return "HUD_CTX_MAYOR2_CUTSCENE_OBJECTIVES";
		case 946989305:
			return "HUD_CTX_MP_NATURALIST_ANIMAL_MODE";
		case 956976696:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_STAMINA_CORE";
		case 959420967:
			return "HUD_CTX_PLAYER_CAMERA_MODE";
		case 999578278:
			return "HUD_CTX_SHOWDOWN_OUTRO";
		case 1003289417:
			return "HUD_CTX_IN_VERSUS_CUTSCENE";
		case 1023137905:
			return "HUD_CTX_IN_GUARMA_AND_BROKE";
		case 1058184710:
			return "HUD_CTX_INFINITE_AMMO";
		case 1163138879:
			return "HUD_CTX_MP_COLLECTOR_SALESWOMAN";
		case 1281091544:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_HEALTH";
		case 1331687942:
			return "HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE";
		case 1344742130:
			return "HUD_CTX_IN_MP_GAME_MODE";
		case 1381790879:
			return "HUD_CTX_PLAYER_CAMERA_REQUIRES_HUD";
		case 1404048992:
			return "HUD_CTX_ITEM_CONSUMPTION_HORSE_STAMINA";
		case 1422092402:
			return "HUD_CTX_OUTDOOR_SHOP";
		case 1422201455:
			return "HUD_CTX_FEUD1_FISHING";
		case 1506296948:
			return "HUD_CTX_ITEM_CONSUMPTION_DEADEYE_CORE";
		case 1533515944:
			return "HUD_CTX_MP_SHOW_HUD_ABILITY_CARD_INDICATOR";
		case 1622267885:
			return "HUD_CTX_LOBBY_TEAM_SELECT";
		case 1664736751:
			return "HUD_CTX_WATCHING_A_SHOW";
		case 1670279562:
			return "HUD_CTX_TITHING";
		case 1733954764:
			return "HUD_CTX_FIREFIGHT_CUTSCENE";
		case 1759705598:
			return "HUD_CTX_MISSION_CUTSCENE_WITH_RADAR";
		case 1779876696:
			return "HUD_CTX_CHARACTER_CREATOR";
		case 1791176674:
			return "HUD_CTX_IN_COMBAT_RESTRICTED_SHOP";
		case 1815407589:
			return "HUD_CTX_IN_CATALOGUE_SHOP_MENU";
		case 1826124692:
			return "HUD_CTX_FADED_GAMEPLAY";
		case 1833957607:
			return "HUD_CTX_IN_TOWN";
		case 1898574875:
			return "HUD_CTX_ITEM_CONSUMPTION_HEALTH_CORE";
		case 1920936087:
			return "HUD_CTX_IN_MINIGAME_POKER_INTRO";
		case 1923543915:
			return "HUD_CTX_MISSION_CREATOR";
		case 2003196676:
			return "HUD_CTX_MP_MINIGAME_SHOW_PLAYER_CASH";
		case 2011163970:
			return "HUD_CTX_IN_PLAYER_CAMP";
		case 2064968046:
			return "HUD_CTX_SKINNING_PROCESS";
		case 2077578434:
			return "HUD_CTX_GOLD_CURRENCY_CHANGE";
		case 2083323686:
			return "HUD_CTX_AMBIENT_SPECTATOR_VIEW";
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

void func_534(int iParam0, bool bParam1)
{
	DEBUG::_0x1B08D1EB9D8C4931(680, 40, "NET_STABLE_SET_SYSTEM_FLAG_TO: ", func_221(iParam0, 0), " value = ", MISC::_0xF216F74101968DB0(bParam1));
	if (bParam1)
	{
		func_140(iParam0);
	}
	else
	{
		func_141(iParam0);
	}
}

void func_535(int iParam0)
{
	Global_1957252.f_1431.f_2 = 0f;
	Global_1957252.f_1431.f_1 = iParam0;
}

void func_536(char* sParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	DEBUG::_0xF0783374333FD8CE(664, 0, "CLEAR_AREA_AROUND_PLAYER_OF_ALL_EXPLOSIONS_AND_FIRES: Now clearing area of Fires and Explosions within ", sParam0, " Meters of: ", MISC::_0x6C4DBF553885F9EB(vVar1));
	MISC::CLEAR_AREA(vVar1, sParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, sParam0);
}

bool func_537()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_538(int iParam0)
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

char* func_539(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("INPUT_PLAYER_MENU"):
			return "INPUT_PLAYER_MENU";
		case joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"):
			return "INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY";
		case joaat("INPUT_HORSE_LOOK_BEHIND"):
			return "INPUT_HORSE_LOOK_BEHIND";
		case joaat("INPUT_MP_TEXT_CHAT_CREW"):
			return "INPUT_MP_TEXT_CHAT_CREW";
		case joaat("INPUT_GAME_MENU_SCROLL_FORWARD"):
			return "INPUT_GAME_MENU_SCROLL_FORWARD";
		case -2124178450:
			return "INPUT_ANIMAL_PLAY_DEAD";
		case joaat("INPUT_INTERROGATE_KILL"):
			return "INPUT_INTERROGATE_KILL";
		case joaat("INPUT_CREATOR_MOVE_UD"):
			return "INPUT_CREATOR_MOVE_UD";
		case joaat("INPUT_SWITCH_SHOULDER"):
			return "INPUT_SWITCH_SHOULDER";
		case joaat("INPUT_SCRIPT_PAD_RIGHT"):
			return "INPUT_SCRIPT_PAD_RIGHT";
		case joaat("INPUT_MINIGAME_HELP_NEXT"):
			return "INPUT_MINIGAME_HELP_NEXT";
		case joaat("INPUT_IRON_SIGHT"):
			return "INPUT_IRON_SIGHT";
		case joaat("INPUT_INTERACT_OPTION2"):
			return "INPUT_INTERACT_OPTION2";
		case joaat("INPUT_CINEMATIC_CAM_UD"):
			return "INPUT_CINEMATIC_CAM_UD";
		case joaat("INPUT_CREATOR_MENU_TOGGLE"):
			return "INPUT_CREATOR_MENU_TOGGLE";
		case joaat("INPUT_HORSE_MOVE_LEFT_ONLY"):
			return "INPUT_HORSE_MOVE_LEFT_ONLY";
		case joaat("INPUT_VEH_BOAT_ATTACK2"):
			return "INPUT_VEH_BOAT_ATTACK2";
		case joaat("INPUT_VEH_FLY_ROLL_RIGHT_ONLY"):
			return "INPUT_VEH_FLY_ROLL_RIGHT_ONLY";
		case joaat("INPUT_FRONTEND_NAV_LEFT"):
			return "INPUT_FRONTEND_NAV_LEFT";
		case joaat("INPUT_PHOTO_MODE_DOF_UP_ONLY"):
			return "INPUT_PHOTO_MODE_DOF_UP_ONLY";
		case joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH"):
			return "INPUT_PHOTO_MODE_FOCAL_LENGTH";
		case joaat("INPUT_VEH_DRAFT_ATTACK2"):
			return "INPUT_VEH_DRAFT_ATTACK2";
		case joaat("INPUT_VEH_SELECT_NEXT_WEAPON"):
			return "INPUT_VEH_SELECT_NEXT_WEAPON";
		case joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"):
			return "INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES";
		case joaat("INPUT_GAME_MENU_RS"):
			return "INPUT_GAME_MENU_RS";
		case joaat("INPUT_INTERACT_WILD_ANIMAL"):
			return "INPUT_INTERACT_WILD_ANIMAL";
		case joaat("INPUT_SNIPER_ZOOM_OUT_SECONDARY"):
			return "INPUT_SNIPER_ZOOM_OUT_SECONDARY";
		case joaat("INPUT_VEH_MOVE_UD"):
			return "INPUT_VEH_MOVE_UD";
		case joaat("INPUT_PC_FREE_LOOK"):
			return "INPUT_PC_FREE_LOOK";
		case joaat("INPUT_OPEN_EMOTE_WHEEL_HORSE"):
			return "INPUT_OPEN_EMOTE_WHEEL_HORSE";
		case joaat("INPUT_CURSOR_SCROLL_DOWN"):
			return "INPUT_CURSOR_SCROLL_DOWN";
		case joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"):
			return "INPUT_GAME_MENU_TAB_RIGHT_SECONDARY";
		case joaat("INPUT_PROMPT_PAGE_NEXT"):
			return "INPUT_PROMPT_PAGE_NEXT";
		case joaat("INPUT_FRONTEND_NAV_UP"):
			return "INPUT_FRONTEND_NAV_UP";
		case joaat("INPUT_CAMERA_POSE_PREV"):
			return "INPUT_CAMERA_POSE_PREV";
		case joaat("INPUT_QUIT"):
			return "INPUT_QUIT";
		case joaat("INPUT_LOOK_DOWN_ONLY"):
			return "INPUT_LOOK_DOWN_ONLY";
		case joaat("INPUT_PHOTO_MODE_SWITCH_MODE"):
			return "INPUT_PHOTO_MODE_SWITCH_MODE";
		case joaat("INPUT_MOVE_UP_ONLY"):
			return "INPUT_MOVE_UP_ONLY";
		case joaat("INPUT_SPRINT"):
			return "INPUT_SPRINT";
		case joaat("INPUT_MP_TEXT_CHAT_TEAM"):
			return "INPUT_MP_TEXT_CHAT_TEAM";
		case joaat("INPUT_SHOP_CHANGE_CURRENCY"):
			return "INPUT_SHOP_CHANGE_CURRENCY";
		case joaat("INPUT_GAME_MENU_UP"):
			return "INPUT_GAME_MENU_UP";
		case joaat("INPUT_MELEE_GRAPPLE_REVERSAL"):
			return "INPUT_MELEE_GRAPPLE_REVERSAL";
		case joaat("INPUT_SCRIPT_RB"):
			return "INPUT_SCRIPT_RB";
		case joaat("INPUT_VEH_BOAT_AIM"):
			return "INPUT_VEH_BOAT_AIM";
		case joaat("INPUT_MINIGAME_HELP"):
			return "INPUT_MINIGAME_HELP";
		case joaat("INPUT_TWIRL_PISTOL"):
			return "INPUT_TWIRL_PISTOL";
		case joaat("INPUT_RADIAL_MENU_SLOT_NAV_PREV"):
			return "INPUT_RADIAL_MENU_SLOT_NAV_PREV";
		case joaat("INPUT_MERCY_KILL"):
			return "INPUT_MERCY_KILL";
		case joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"):
			return "INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y";
		case joaat("INPUT_MINIGAME_DOMINOES_PLAY_TILE"):
			return "INPUT_MINIGAME_DOMINOES_PLAY_TILE";
		case joaat("INPUT_SELECT_WEAPON_SNIPER"):
			return "INPUT_SELECT_WEAPON_SNIPER";
		case joaat("INPUT_PHOTO_MODE_ROTATE_RIGHT"):
			return "INPUT_PHOTO_MODE_ROTATE_RIGHT";
		case joaat("INPUT_FRONTEND_TOUCH_DOUBLE_TAP_Y"):
			return "INPUT_FRONTEND_TOUCH_DOUBLE_TAP_Y";
		case joaat("INPUT_MP_TEXT_CHAT_ALL"):
			return "INPUT_MP_TEXT_CHAT_ALL";
		case joaat("INPUT_CHARACTER_WHEEL"):
			return "INPUT_CHARACTER_WHEEL";
		case joaat("INPUT_CREATOR_MENU_DOWN"):
			return "INPUT_CREATOR_MENU_DOWN";
		case joaat("INPUT_VEH_PREV_RADIO"):
			return "INPUT_VEH_PREV_RADIO";
		case joaat("INPUT_VEH_MOVE_RIGHT_ONLY"):
			return "INPUT_VEH_MOVE_RIGHT_ONLY";
		case joaat("INPUT_BREAK_VEHICLE_LOCK"):
			return "INPUT_BREAK_VEHICLE_LOCK";
		case joaat("INPUT_CURSOR_FORWARD_DOUBLE_CLICK"):
			return "INPUT_CURSOR_FORWARD_DOUBLE_CLICK";
		case joaat("INPUT_MINIGAME_REPLAY"):
			return "INPUT_MINIGAME_REPLAY";
		case joaat("INPUT_LOOK_BEHIND"):
			return "INPUT_LOOK_BEHIND";
		case joaat("INPUT_VEH_LOOK_RIGHT"):
			return "INPUT_VEH_LOOK_RIGHT";
		case joaat("INPUT_FRONTEND_TOUCH_DRAG_Y"):
			return "INPUT_FRONTEND_TOUCH_DRAG_Y";
		case joaat("INPUT_CURSOR_BACKWARD_CLICK"):
			return "INPUT_CURSOR_BACKWARD_CLICK";
		case joaat("INPUT_INSPECT_OPEN_SATCHEL"):
			return "INPUT_INSPECT_OPEN_SATCHEL";
		case joaat("INPUT_MAP_POI"):
			return "INPUT_MAP_POI";
		case joaat("INPUT_SCRIPTED_FLY_ZDOWN"):
			return "INPUT_SCRIPTED_FLY_ZDOWN";
		case joaat("INPUT_MULTIPLAYER_INFO_PLAYERS"):
			return "INPUT_MULTIPLAYER_INFO_PLAYERS";
		case joaat("INPUT_GAME_MENU_STICK_UP"):
			return "INPUT_GAME_MENU_STICK_UP";
		case joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"):
			return "INPUT_QUICK_SHORTCUT_ABILITIES_MENU";
		case joaat("INPUT_CURSOR_ACCEPT"):
			return "INPUT_CURSOR_ACCEPT";
		case joaat("INPUT_CREATOR_ROTATE_RIGHT"):
			return "INPUT_CREATOR_ROTATE_RIGHT";
		case joaat("INPUT_GAME_MENU_SCROLL_BACKWARD"):
			return "INPUT_GAME_MENU_SCROLL_BACKWARD";
		case joaat("INPUT_PHOTO_MODE_EXPOSURE_LOCK"):
			return "INPUT_PHOTO_MODE_EXPOSURE_LOCK";
		case joaat("INPUT_VEH_MOVE_LEFT_ONLY"):
			return "INPUT_VEH_MOVE_LEFT_ONLY";
		case joaat("INPUT_FRONTEND_LEADERBOARD"):
			return "INPUT_FRONTEND_LEADERBOARD";
		case joaat("INPUT_PHOTO_MODE_CHANGE_CAMERA"):
			return "INPUT_PHOTO_MODE_CHANGE_CAMERA";
		case joaat("INPUT_INTERACT_LOCKON_ROB"):
			return "INPUT_INTERACT_LOCKON_ROB";
		case joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"):
			return "INPUT_PICKUP_CARRIABLE_FROM_PARENT";
		case joaat("INPUT_MINIGAME_BARTENDER_RAISE_GLASS"):
			return "INPUT_MINIGAME_BARTENDER_RAISE_GLASS";
		case joaat("INPUT_CURSOR_BACKWARD_DOUBLE_CLICK"):
			return "INPUT_CURSOR_BACKWARD_DOUBLE_CLICK";
		case joaat("INPUT_PHOTO_MODE_TAKE_PHOTO"):
			return "INPUT_PHOTO_MODE_TAKE_PHOTO";
		case joaat("INPUT_INTERROGATE_QUESTION"):
			return "INPUT_INTERROGATE_QUESTION";
		case joaat("INPUT_INTERACT_ANIMAL"):
			return "INPUT_INTERACT_ANIMAL";
		case joaat("INPUT_MINIGAME_FISHING_HOOK"):
			return "INPUT_MINIGAME_FISHING_HOOK";
		case joaat("INPUT_LOOK_RIGHT_ONLY"):
			return "INPUT_LOOK_RIGHT_ONLY";
		case joaat("INPUT_PHOTO_MODE_RESET"):
			return "INPUT_PHOTO_MODE_RESET";
		case joaat("INPUT_VEH_DRIVE_LOOK"):
			return "INPUT_VEH_DRIVE_LOOK";
		case joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_IN"):
			return "INPUT_MINIGAME_FISHING_MANUAL_REEL_IN";
		case joaat("INPUT_VEH_SUB_TURN_HARD_RIGHT"):
			return "INPUT_VEH_SUB_TURN_HARD_RIGHT";
		case joaat("INPUT_CAMERA_BACK"):
			return "INPUT_CAMERA_BACK";
		case joaat("INPUT_SCRIPT_RLEFT"):
			return "INPUT_SCRIPT_RLEFT";
		case joaat("INPUT_ARREST"):
			return "INPUT_ARREST";
		case joaat("INPUT_SNIPER_ZOOM_IN_ONLY"):
			return "INPUT_SNIPER_ZOOM_IN_ONLY";
		case joaat("INPUT_INSPECT"):
			return "INPUT_INSPECT";
		case joaat("INPUT_FRONTEND_LEFT"):
			return "INPUT_FRONTEND_LEFT";
		case joaat("INPUT_SCRIPT_RIGHT_AXIS_X"):
			return "INPUT_SCRIPT_RIGHT_AXIS_X";
		case joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT"):
			return "INPUT_CINEMATIC_CAM_CHANGE_SHOT";
		case joaat("INPUT_VEH_DRAFT_TURN_LR"):
			return "INPUT_VEH_DRAFT_TURN_LR";
		case joaat("INPUT_MINIGAME_BLACKJACK_HIT"):
			return "INPUT_MINIGAME_BLACKJACK_HIT";
		case joaat("INPUT_EMOTES_FAVORITE"):
			return "INPUT_EMOTES_FAVORITE";
		case joaat("INPUT_FEED_INTERACT"):
			return "INPUT_FEED_INTERACT";
		case joaat("INPUT_GAME_MENU_LS"):
			return "INPUT_GAME_MENU_LS";
		case joaat("INPUT_MULTIPLAYER_LEADERBOARD_SCROLL_UD"):
			return "INPUT_MULTIPLAYER_LEADERBOARD_SCROLL_UD";
		case joaat("INPUT_HITCH_ANIMAL"):
			return "INPUT_HITCH_ANIMAL";
		case joaat("INPUT_LOOK_LR"):
			return "INPUT_LOOK_LR";
		case joaat("INPUT_MINIGAME_POKER_BET"):
			return "INPUT_MINIGAME_POKER_BET";
		case joaat("INPUT_VEH_JUMP"):
			return "INPUT_VEH_JUMP";
		case joaat("INPUT_SCRIPT_LS"):
			return "INPUT_SCRIPT_LS";
		case joaat("INPUT_OPEN_WHEEL_MENU"):
			return "INPUT_OPEN_WHEEL_MENU";
		case joaat("INPUT_CAMERA_SELFIE"):
			return "INPUT_CAMERA_SELFIE";
		case joaat("INPUT_DOCUMENT_SCROLL"):
			return "INPUT_DOCUMENT_SCROLL";
		case joaat("INPUT_PHOTO_MODE_EXPOSURE_DOWN"):
			return "INPUT_PHOTO_MODE_EXPOSURE_DOWN";
		case joaat("INPUT_GAME_MENU_LEFT"):
			return "INPUT_GAME_MENU_LEFT";
		case joaat("INPUT_GAME_MENU_RIGHT_STICK_DOWN"):
			return "INPUT_GAME_MENU_RIGHT_STICK_DOWN";
		case joaat("INPUT_MINIGAME_BLACKJACK_TABLE_VIEW"):
			return "INPUT_MINIGAME_BLACKJACK_TABLE_VIEW";
		case joaat("INPUT_MELEE_GRAPPLE_ATTACK"):
			return "INPUT_MELEE_GRAPPLE_ATTACK";
		case joaat("INPUT_HORSE_COMMAND_STAY"):
			return "INPUT_HORSE_COMMAND_STAY";
		case joaat("INPUT_CREATOR_LOOK_LR"):
			return "INPUT_CREATOR_LOOK_LR";
		case joaat("INPUT_SCRIPTED_FLY_UD"):
			return "INPUT_SCRIPTED_FLY_UD";
		case joaat("INPUT_CREATOR_FUNCTION"):
			return "INPUT_CREATOR_FUNCTION";
		case joaat("INPUT_PHOTO_MODE_LENSE_NEXT"):
			return "INPUT_PHOTO_MODE_LENSE_NEXT";
		case joaat("INPUT_SCRIPT_PAD_DOWN"):
			return "INPUT_SCRIPT_PAD_DOWN";
		case joaat("INPUT_TOGGLE_HOLSTER"):
			return "INPUT_TOGGLE_HOLSTER";
		case joaat("INPUT_CONTEXT_ACTION"):
			return "INPUT_CONTEXT_ACTION";
		case joaat("INPUT_MELEE_ATTACK"):
			return "INPUT_MELEE_ATTACK";
		case joaat("INPUT_VEH_BOAT_ACCELERATE"):
			return "INPUT_VEH_BOAT_ACCELERATE";
		case joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_DOWN"):
			return "INPUT_PHOTO_MODE_FILTER_INTENSITY_DOWN";
		case joaat("INPUT_INTERACT_LOCKON_STUDY_BINOCULARS"):
			return "INPUT_INTERACT_LOCKON_STUDY_BINOCULARS";
		case joaat("INPUT_MINIGAME_FISHING_RESET_CAST"):
			return "INPUT_MINIGAME_FISHING_RESET_CAST";
		case joaat("INPUT_MULTIPLAYER_DEAD_FEUD"):
			return "INPUT_MULTIPLAYER_DEAD_FEUD";
		case joaat("INPUT_MOVE_RIGHT_ONLY"):
			return "INPUT_MOVE_RIGHT_ONLY";
		case joaat("INPUT_MULTIPLAYER_DEAD_SWITCH_RESPAWN"):
			return "INPUT_MULTIPLAYER_DEAD_SWITCH_RESPAWN";
		case joaat("INPUT_MINIGAME_POKER_SKIP_TUTORIAL"):
			return "INPUT_MINIGAME_POKER_SKIP_TUTORIAL";
		case joaat("INPUT_MELEE_BLOCK"):
			return "INPUT_MELEE_BLOCK";
		case joaat("INPUT_VEH_GUN_LR"):
			return "INPUT_VEH_GUN_LR";
		case joaat("INPUT_CONTEXT"):
			return "INPUT_CONTEXT";
		case -1201017346:
			return "INPUT_CAMERA_ADVANCED_TAKE_PHOTO";
		case joaat("INPUT_INTERACT_LOCKON_HORSE_ITEMS"):
			return "INPUT_INTERACT_LOCKON_HORSE_ITEMS";
		case joaat("INPUT_VEH_GRAPPLING_HOOK"):
			return "INPUT_VEH_GRAPPLING_HOOK";
		case joaat("INPUT_CRAFTING_EAT"):
			return "INPUT_CRAFTING_EAT";
		case joaat("INPUT_VEH_CAR_ACCELERATE"):
			return "INPUT_VEH_CAR_ACCELERATE";
		case joaat("INPUT_MULTIPLAYER_SPECTATE_PLAYER_NEXT"):
			return "INPUT_MULTIPLAYER_SPECTATE_PLAYER_NEXT";
		case joaat("INPUT_VEH_SUB_PITCH_DOWN_ONLY"):
			return "INPUT_VEH_SUB_PITCH_DOWN_ONLY";
		case joaat("INPUT_RADIAL_MENU_NAV_UD"):
			return "INPUT_RADIAL_MENU_NAV_UD";
		case joaat("INPUT_CREATOR_MENU_CANCEL"):
			return "INPUT_CREATOR_MENU_CANCEL";
		case joaat("INPUT_SNIPER_ZOOM_OUT_ALTERNATE"):
			return "INPUT_SNIPER_ZOOM_OUT_ALTERNATE";
		case joaat("INPUT_CREATOR_MENU_UP"):
			return "INPUT_CREATOR_MENU_UP";
		case joaat("INPUT_VEH_FLY_YAW_RIGHT"):
			return "INPUT_VEH_FLY_YAW_RIGHT";
		case joaat("INPUT_STICKY_FEED_X"):
			return "INPUT_STICKY_FEED_X";
		case joaat("INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY"):
			return "INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY";
		case joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"):
			return "INPUT_MINIGAME_CHANGE_BET_AXIS_Y";
		case joaat("INPUT_VEH_DRAFT_AIM"):
			return "INPUT_VEH_DRAFT_AIM";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_DOWN_Y"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_DOWN_Y";
		case joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"):
			return "INPUT_MELEE_GRAPPLE_STAND_SWITCH";
		case joaat("INPUT_MINIGAME_RIGHT_TRIGGER"):
			return "INPUT_MINIGAME_RIGHT_TRIGGER";
		case joaat("INPUT_PICKUP_CARRIABLE2"):
			return "INPUT_PICKUP_CARRIABLE2";
		case -1089155097:
			return "INPUT_CAMERA_ADVANCED_ZOOM_IN";
		case joaat("INPUT_HORSE_GUN_UD"):
			return "INPUT_HORSE_GUN_UD";
		case joaat("INPUT_LOOK_UP_ONLY"):
			return "INPUT_LOOK_UP_ONLY";
		case joaat("INPUT_VEH_FLY_SELECT_PREV_WEAPON"):
			return "INPUT_VEH_FLY_SELECT_PREV_WEAPON";
		case joaat("INPUT_FRONTEND_TOUCH_TAP_X"):
			return "INPUT_FRONTEND_TOUCH_TAP_X";
		case joaat("INPUT_CONTEXT_LT"):
			return "INPUT_CONTEXT_LT";
		case joaat("INPUT_QUICK_USE_ITEM"):
			return "INPUT_QUICK_USE_ITEM";
		case joaat("INPUT_MINIGAME_POKER_HOLE_CARDS"):
			return "INPUT_MINIGAME_POKER_HOLE_CARDS";
		case joaat("INPUT_SELECT_WEAPON_SPECIAL"):
			return "INPUT_SELECT_WEAPON_SPECIAL";
		case joaat("INPUT_WEAPON_INSPECT_ZOOM"):
			return "INPUT_WEAPON_INSPECT_ZOOM";
		case joaat("INPUT_MULTIPLAYER_PREDATOR_ABILITY"):
			return "INPUT_MULTIPLAYER_PREDATOR_ABILITY";
		case joaat("INPUT_MINIGAME_DOMINOES_SKIP_DEAL"):
			return "INPUT_MINIGAME_DOMINOES_SKIP_DEAL";
		case joaat("INPUT_MINIGAME_HELP_PREV"):
			return "INPUT_MINIGAME_HELP_PREV";
		case joaat("INPUT_VEH_DROP_PROJECTILE"):
			return "INPUT_VEH_DROP_PROJECTILE";
		case joaat("INPUT_PHOTO_MODE_EXPOSURE_UP"):
			return "INPUT_PHOTO_MODE_EXPOSURE_UP";
		case joaat("INPUT_CAMP_BED_INSPECT"):
			return "INPUT_CAMP_BED_INSPECT";
		case joaat("INPUT_MINIGAME_DOMINOES_MOVE_UP_ONLY"):
			return "INPUT_MINIGAME_DOMINOES_MOVE_UP_ONLY";
		case joaat("INPUT_VEH_SHUFFLE"):
			return "INPUT_VEH_SHUFFLE";
		case joaat("INPUT_IGNITE"):
			return "INPUT_IGNITE";
		case joaat("INPUT_FRONTEND_ENDSCREEN_EXPAND"):
			return "INPUT_FRONTEND_ENDSCREEN_EXPAND";
		case joaat("INPUT_FRONTEND_ACCEPT"):
			return "INPUT_FRONTEND_ACCEPT";
		case joaat("INPUT_MINIGAME_INCREASE_BET"):
			return "INPUT_MINIGAME_INCREASE_BET";
		case joaat("INPUT_STICKY_FEED_Y"):
			return "INPUT_STICKY_FEED_Y";
		case joaat("INPUT_SCRIPT_SELECT"):
			return "INPUT_SCRIPT_SELECT";
		case joaat("INPUT_HORSE_ATTACK2"):
			return "INPUT_HORSE_ATTACK2";
		case joaat("INPUT_DOCUMENT_PAGE_NEXT"):
			return "INPUT_DOCUMENT_PAGE_NEXT";
		case joaat("INPUT_MINIGAME_FFF_PRACTICE"):
			return "INPUT_MINIGAME_FFF_PRACTICE";
		case joaat("INPUT_MINIGAME_BARTENDER_POUR"):
			return "INPUT_MINIGAME_BARTENDER_POUR";
		case joaat("INPUT_VEH_LOOK_BEHIND"):
			return "INPUT_VEH_LOOK_BEHIND";
		case joaat("INPUT_EMOTES_SLOT_NAV_NEXT"):
			return "INPUT_EMOTES_SLOT_NAV_NEXT";
		case joaat("INPUT_GAME_MENU_TAB_LEFT"):
			return "INPUT_GAME_MENU_TAB_LEFT";
		case joaat("INPUT_HORSE_EXIT"):
			return "INPUT_HORSE_EXIT";
		case joaat("INPUT_PREV_WEAPON"):
			return "INPUT_PREV_WEAPON";
		case joaat("INPUT_MULTIPLAYER_DEAD_LEADER_FEUD"):
			return "INPUT_MULTIPLAYER_DEAD_LEADER_FEUD";
		case joaat("INPUT_INTERACTION_MENU"):
			return "INPUT_INTERACTION_MENU";
		case joaat("INPUT_MINIGAME_BLACKJACK_DECLINE"):
			return "INPUT_MINIGAME_BLACKJACK_DECLINE";
		case joaat("INPUT_SKIP_CUTSCENE"):
			return "INPUT_SKIP_CUTSCENE";
		case joaat("INPUT_SPECIAL_ABILITY"):
			return "INPUT_SPECIAL_ABILITY";
		case joaat("INPUT_SELECT_WEAPON_SMG"):
			return "INPUT_SELECT_WEAPON_SMG";
		case joaat("INPUT_ENTER"):
			return "INPUT_ENTER";
		case joaat("INPUT_TITHING_DECREASE_AMOUNT"):
			return "INPUT_TITHING_DECREASE_AMOUNT";
		case joaat("INPUT_FRONTEND_TOUCH_TAP_Y"):
			return "INPUT_FRONTEND_TOUCH_TAP_Y";
		case joaat("INPUT_REVEAL_HUD"):
			return "INPUT_REVEAL_HUD";
		case joaat("INPUT_CAMERA_EXPRESSION_NEXT"):
			return "INPUT_CAMERA_EXPRESSION_NEXT";
		case joaat("INPUT_SCRIPT_RS"):
			return "INPUT_SCRIPT_RS";
		case joaat("INPUT_SELECT_NEXT_WEAPON"):
			return "INPUT_SELECT_NEXT_WEAPON";
		case joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"):
			return "INPUT_MELEE_GRAPPLE_BREAKOUT";
		case joaat("INPUT_INTERACT_LOCKON_A"):
			return "INPUT_INTERACT_LOCKON_A";
		case joaat("INPUT_VEH_CAR_BRAKE"):
			return "INPUT_VEH_CAR_BRAKE";
		case joaat("INPUT_LOOK_UD"):
			return "INPUT_LOOK_UD";
		case joaat("INPUT_MOVE_DOWN_ONLY"):
			return "INPUT_MOVE_DOWN_ONLY";
		case joaat("INPUT_VEH_SUB_THROTTLE_UP"):
			return "INPUT_VEH_SUB_THROTTLE_UP";
		case joaat("INPUT_DROP"):
			return "INPUT_DROP";
		case joaat("INPUT_CUT_FREE"):
			return "INPUT_CUT_FREE";
		case joaat("INPUT_MINIGAME_DECREASE_BET"):
			return "INPUT_MINIGAME_DECREASE_BET";
		case joaat("INPUT_SHOP_BOUNTY"):
			return "INPUT_SHOP_BOUNTY";
		case joaat("INPUT_CREATOR_ROTATE_LEFT"):
			return "INPUT_CREATOR_ROTATE_LEFT";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_LEFT_Y"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_LEFT_Y";
		case joaat("INPUT_CONTEXT_Y"):
			return "INPUT_CONTEXT_Y";
		case -711736799:
			return "INPUT_CAMERA_ADVANCED_SWITCH_CONTROLS";
		case joaat("INPUT_GAME_MENU_EXTRA_OPTION"):
			return "INPUT_GAME_MENU_EXTRA_OPTION";
		case joaat("INPUT_VEH_DRAFT_BRAKE"):
			return "INPUT_VEH_DRAFT_BRAKE";
		case joaat("INPUT_CURSOR_X"):
			return "INPUT_CURSOR_X";
		case joaat("INPUT_DOCUMENT_SCROLL_DOWN_ONLY"):
			return "INPUT_DOCUMENT_SCROLL_DOWN_ONLY";
		case joaat("INPUT_CREATOR_PLACE"):
			return "INPUT_CREATOR_PLACE";
		case joaat("INPUT_VEH_SUB_ASCEND"):
			return "INPUT_VEH_SUB_ASCEND";
		case joaat("INPUT_MINIGAME_FISHING_REEL_SPEED_DOWN"):
			return "INPUT_MINIGAME_FISHING_REEL_SPEED_DOWN";
		case joaat("INPUT_VEH_AIM"):
			return "INPUT_VEH_AIM";
		case joaat("INPUT_FRONTEND_RUP"):
			return "INPUT_FRONTEND_RUP";
		case joaat("INPUT_CINEMATIC_CAM_HOLD"):
			return "INPUT_CINEMATIC_CAM_HOLD";
		case joaat("INPUT_FRONTEND_PAUSE"):
			return "INPUT_FRONTEND_PAUSE";
		case joaat("INPUT_CREATOR_RS"):
			return "INPUT_CREATOR_RS";
		case joaat("INPUT_VEH_BOAT_TURN_LR"):
			return "INPUT_VEH_BOAT_TURN_LR";
		case joaat("INPUT_AIM_IN_AIR"):
			return "INPUT_AIM_IN_AIR";
		case joaat("INPUT_HOGTIE"):
			return "INPUT_HOGTIE";
		case joaat("INPUT_JUMP"):
			return "INPUT_JUMP";
		case joaat("INPUT_QUICK_SELECT_SECONDARY_NAV_PREV"):
			return "INPUT_QUICK_SELECT_SECONDARY_NAV_PREV";
		case joaat("INPUT_MINIGAME_POKER_CALL"):
			return "INPUT_MINIGAME_POKER_CALL";
		case joaat("INPUT_DUCK"):
			return "INPUT_DUCK";
		case joaat("INPUT_SURRENDER"):
			return "INPUT_SURRENDER";
		case joaat("INPUT_MINIGAME_BARTENDER_SERVE"):
			return "INPUT_MINIGAME_BARTENDER_SERVE";
		case joaat("INPUT_PHOTO_MODE_VIEW_PHOTOS"):
			return "INPUT_PHOTO_MODE_VIEW_PHOTOS";
		case joaat("INPUT_COVER"):
			return "INPUT_COVER";
		case joaat("INPUT_FRONTEND_RIGHT"):
			return "INPUT_FRONTEND_RIGHT";
		case joaat("INPUT_VEH_MOVE_UP_ONLY"):
			return "INPUT_VEH_MOVE_UP_ONLY";
		case joaat("INPUT_SHOP_BUY"):
			return "INPUT_SHOP_BUY";
		case joaat("INPUT_FRONTEND_MAP_NAV_LEFT"):
			return "INPUT_FRONTEND_MAP_NAV_LEFT";
		case joaat("INPUT_HORSE_STOP"):
			return "INPUT_HORSE_STOP";
		case joaat("INPUT_CURSOR_SCROLL_DOUBLE_CLICK"):
			return "INPUT_CURSOR_SCROLL_DOUBLE_CLICK";
		case joaat("INPUT_GAME_MENU_RIGHT_STICK_RIGHT"):
			return "INPUT_GAME_MENU_RIGHT_STICK_RIGHT";
		case joaat("INPUT_INTERACT_LOCKON_TRACK_ANIMAL"):
			return "INPUT_INTERACT_LOCKON_TRACK_ANIMAL";
		case joaat("INPUT_OPEN_EMOTE_WHEEL"):
			return "INPUT_OPEN_EMOTE_WHEEL";
		case joaat("INPUT_RELOAD"):
			return "INPUT_RELOAD";
		case joaat("INPUT_MAP"):
			return "INPUT_MAP";
		case joaat("INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE"):
			return "INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_DOWN_X"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_DOWN_X";
		case joaat("INPUT_CONTEXT_X"):
			return "INPUT_CONTEXT_X";
		case joaat("INPUT_MINIGAME_POKER_COMMUNITY_CARDS"):
			return "INPUT_MINIGAME_POKER_COMMUNITY_CARDS";
		case joaat("INPUT_SNIPER_ZOOM_OUT"):
			return "INPUT_SNIPER_ZOOM_OUT";
		case joaat("INPUT_CURSOR_Y"):
			return "INPUT_CURSOR_Y";
		case joaat("INPUT_SNIPER_ZOOM_IN"):
			return "INPUT_SNIPER_ZOOM_IN";
		case joaat("INPUT_CURSOR_ACCEPT_HOLD"):
			return "INPUT_CURSOR_ACCEPT_HOLD";
		case joaat("INPUT_HORSE_JUMP"):
			return "INPUT_HORSE_JUMP";
		case joaat("INPUT_MULTIPLAYER_DEAD_PRESS_CHARGES"):
			return "INPUT_MULTIPLAYER_DEAD_PRESS_CHARGES";
		case joaat("INPUT_SCRIPT_LB"):
			return "INPUT_SCRIPT_LB";
		case joaat("INPUT_PICKUP"):
			return "INPUT_PICKUP";
		case joaat("INPUT_VEH_FLY_PITCH_UD"):
			return "INPUT_VEH_FLY_PITCH_UD";
		case joaat("INPUT_CREATOR_MENU_EXTRA_FUNCTION"):
			return "INPUT_CREATOR_MENU_EXTRA_FUNCTION";
		case joaat("INPUT_RADIAL_MENU_SLOT_NAV_NEXT"):
			return "INPUT_RADIAL_MENU_SLOT_NAV_NEXT";
		case joaat("INPUT_FOCUS_CAM"):
			return "INPUT_FOCUS_CAM";
		case joaat("INPUT_VEH_SUB_TURN_RIGHT_ONLY"):
			return "INPUT_VEH_SUB_TURN_RIGHT_ONLY";
		case joaat("INPUT_WHISTLE_HORSEBACK"):
			return "INPUT_WHISTLE_HORSEBACK";
		case joaat("INPUT_FRONTEND_TOUCH_ZOOM_FACTOR"):
			return "INPUT_FRONTEND_TOUCH_ZOOM_FACTOR";
		case joaat("INPUT_CAMERA_CONTEXT_GALLERY"):
			return "INPUT_CAMERA_CONTEXT_GALLERY";
		case joaat("INPUT_MULTIPLAYER_INFO"):
			return "INPUT_MULTIPLAYER_INFO";
		case joaat("INPUT_FRONTEND_LB"):
			return "INPUT_FRONTEND_LB";
		case joaat("INPUT_MINIGAME_DANCE_PREV"):
			return "INPUT_MINIGAME_DANCE_PREV";
		case joaat("INPUT_MINIGAME_QUIT"):
			return "INPUT_MINIGAME_QUIT";
		case joaat("INPUT_VEH_DRAFT_ACCELERATE"):
			return "INPUT_VEH_DRAFT_ACCELERATE";
		case joaat("INPUT_SHOP_SPECIAL"):
			return "INPUT_SHOP_SPECIAL";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_X"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_X";
		case joaat("INPUT_PICKUP_CARRIABLE"):
			return "INPUT_PICKUP_CARRIABLE";
		case joaat("INPUT_FRONTEND_RIGHT_AXIS_Y"):
			return "INPUT_FRONTEND_RIGHT_AXIS_Y";
		case joaat("INPUT_PHOTO_MODE_MOVE_UD"):
			return "INPUT_PHOTO_MODE_MOVE_UD";
		case joaat("INPUT_CREATOR_MENU_LEFT"):
			return "INPUT_CREATOR_MENU_LEFT";
		case joaat("INPUT_FRONTEND_TOUCH_DRAG_X"):
			return "INPUT_FRONTEND_TOUCH_DRAG_X";
		case -310714049:
			return "INPUT_CAMERA_ADVANCED_ZOOM_OUT";
		case joaat("INPUT_VEH_PASSENGER_AIM"):
			return "INPUT_VEH_PASSENGER_AIM";
		case joaat("INPUT_SWITCH_FIRING_MODE"):
			return "INPUT_SWITCH_FIRING_MODE";
		case joaat("INPUT_CINEMATIC_CAM_UP_ONLY"):
			return "INPUT_CINEMATIC_CAM_UP_ONLY";
		case joaat("INPUT_GAME_MENU_RIGHT_STICK_UP"):
			return "INPUT_GAME_MENU_RIGHT_STICK_UP";
		case joaat("INPUT_VEH_PUSHBIKE_SPRINT"):
			return "INPUT_VEH_PUSHBIKE_SPRINT";
		case joaat("INPUT_QUICK_SELECT_INSPECT"):
			return "INPUT_QUICK_SELECT_INSPECT";
		case joaat("INPUT_MINIGAME_BARTENDER_RAISE_BOTTLE"):
			return "INPUT_MINIGAME_BARTENDER_RAISE_BOTTLE";
		case joaat("INPUT_SCRIPTED_FLY_LR"):
			return "INPUT_SCRIPTED_FLY_LR";
		case joaat("INPUT_VEH_HEADLIGHT"):
			return "INPUT_VEH_HEADLIGHT";
		case joaat("INPUT_QUICK_SELECT_SECONDARY_NAV_NEXT"):
			return "INPUT_QUICK_SELECT_SECONDARY_NAV_NEXT";
		case joaat("INPUT_MINIGAME_FISHING_RELEASE_FISH"):
			return "INPUT_MINIGAME_FISHING_RELEASE_FISH";
		case joaat("INPUT_CONTEXT_SECONDARY"):
			return "INPUT_CONTEXT_SECONDARY";
		case joaat("INPUT_VEH_ATTACK2"):
			return "INPUT_VEH_ATTACK2";
		case joaat("INPUT_VEH_MOVE_LR"):
			return "INPUT_VEH_MOVE_LR";
		case joaat("INPUT_VEH_SLOWMO_UD"):
			return "INPUT_VEH_SLOWMO_UD";
		case joaat("INPUT_EMOTE_DANCE"):
			return "INPUT_EMOTE_DANCE";
		case joaat("INPUT_OPEN_JOURNAL"):
			return "INPUT_OPEN_JOURNAL";
		case joaat("INPUT_VEH_DRAFT_ATTACK"):
			return "INPUT_VEH_DRAFT_ATTACK";
		case joaat("INPUT_GAME_MENU_LEFT_AXIS_X"):
			return "INPUT_GAME_MENU_LEFT_AXIS_X";
		case joaat("INPUT_VEH_ATTACK"):
			return "INPUT_VEH_ATTACK";
		case joaat("INPUT_STICKY_FEED_ACCEPT"):
			return "INPUT_STICKY_FEED_ACCEPT";
		case joaat("INPUT_CREATOR_SEARCH"):
			return "INPUT_CREATOR_SEARCH";
		case joaat("INPUT_MINIGAME_ACTION_UP"):
			return "INPUT_MINIGAME_ACTION_UP";
		case joaat("INPUT_VEH_SUB_THROTTLE_DOWN"):
			return "INPUT_VEH_SUB_THROTTLE_DOWN";
		case joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE"):
			return "INPUT_INTERACT_LOCKON_DETACH_HORSE";
		case joaat("INPUT_MINIGAME_ACTION_DOWN"):
			return "INPUT_MINIGAME_ACTION_DOWN";
		case joaat("INPUT_INTERACT_LOCKON_POS"):
			return "INPUT_INTERACT_LOCKON_POS";
		case joaat("INPUT_INTERACT_POS"):
			return "INPUT_INTERACT_POS";
		case joaat("INPUT_MINIGAME_FFF_FLOURISH_END"):
			return "INPUT_MINIGAME_FFF_FLOURISH_END";
		case joaat("INPUT_SELECT_PREV_WEAPON"):
			return "INPUT_SELECT_PREV_WEAPON";
		case joaat("INPUT_VEH_NEXT_RADIO_TRACK"):
			return "INPUT_VEH_NEXT_RADIO_TRACK";
		case joaat("INPUT_CAMERA_POSE_NEXT"):
			return "INPUT_CAMERA_POSE_NEXT";
		case joaat("INPUT_FRONTEND_MAP_NAV_DOWN"):
			return "INPUT_FRONTEND_MAP_NAV_DOWN";
		case joaat("INPUT_AIM"):
			return "INPUT_AIM";
		case joaat("INPUT_MULTIPLAYER_DEAD_DUEL"):
			return "INPUT_MULTIPLAYER_DEAD_DUEL";
		case joaat("INPUT_INTERACT_LOCKON"):
			return "INPUT_INTERACT_LOCKON";
		case joaat("INPUT_VEH_PUSHBIKE_REAR_BRAKE"):
			return "INPUT_VEH_PUSHBIKE_REAR_BRAKE";
		case joaat("INPUT_MINIGAME_POKER_YOUR_CARDS"):
			return "INPUT_MINIGAME_POKER_YOUR_CARDS";
		case joaat("INPUT_VEH_BOAT_TURN_RIGHT_ONLY"):
			return "INPUT_VEH_BOAT_TURN_RIGHT_ONLY";
		case joaat("INPUT_INSPECT_UD"):
			return "INPUT_INSPECT_UD";
		case joaat("INPUT_VEH_SUB_PITCH_UP_ONLY"):
			return "INPUT_VEH_SUB_PITCH_UP_ONLY";
		case joaat("INPUT_RADIO_WHEEL_LR"):
			return "INPUT_RADIO_WHEEL_LR";
		case joaat("INPUT_MINIGAME_BUILDING_HAMMER"):
			return "INPUT_MINIGAME_BUILDING_HAMMER";
		case joaat("INPUT_FRONTEND_AXIS_X"):
			return "INPUT_FRONTEND_AXIS_X";
		case joaat("INPUT_CREATOR_MENU_ACCEPT"):
			return "INPUT_CREATOR_MENU_ACCEPT";
		case joaat("INPUT_GAME_MENU_OPTION"):
			return "INPUT_GAME_MENU_OPTION";
		case joaat("INPUT_NEXT_WEAPON"):
			return "INPUT_NEXT_WEAPON";
		case joaat("INPUT_VEH_PUSHBIKE_PEDAL"):
			return "INPUT_VEH_PUSHBIKE_PEDAL";
		case joaat("INPUT_MINIGAME_DOMINOES_MOVE_DOWN_ONLY"):
			return "INPUT_MINIGAME_DOMINOES_MOVE_DOWN_ONLY";
		case joaat("INPUT_MOVE_UD"):
			return "INPUT_MOVE_UD";
		case joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY"):
			return "INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY";
		case joaat("INPUT_VEH_FLY_UNDERCARRIAGE"):
			return "INPUT_VEH_FLY_UNDERCARRIAGE";
		case joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY"):
			return "INPUT_PHOTO_MODE_FILTER_INTENSITY";
		case joaat("INPUT_VEH_EXIT"):
			return "INPUT_VEH_EXIT";
		case joaat("INPUT_VEH_HANDCART_ACCELERATE"):
			return "INPUT_VEH_HANDCART_ACCELERATE";
		case joaat("INPUT_MINIGAME_MILKING_LEFT_ACTION"):
			return "INPUT_MINIGAME_MILKING_LEFT_ACTION";
		case joaat("INPUT_LOOT_ALIVE_COMPONENT"):
			return "INPUT_LOOT_ALIVE_COMPONENT";
		case 0:
			return "UNDEFINED_INPUT";
		case joaat("INPUT_MULTIPLAYER_RACE_RESPAWN"):
			return "INPUT_MULTIPLAYER_RACE_RESPAWN";
		case joaat("INPUT_MELEE_GRAPPLE_CHOKE"):
			return "INPUT_MELEE_GRAPPLE_CHOKE";
		case joaat("INPUT_CURSOR_BACKWARD_HOLD"):
			return "INPUT_CURSOR_BACKWARD_HOLD";
		case joaat("INPUT_ATTACK2"):
			return "INPUT_ATTACK2";
		case joaat("INPUT_MINIGAME_POKER_BOARD_CARDS"):
			return "INPUT_MINIGAME_POKER_BOARD_CARDS";
		case joaat("INPUT_MINIGAME_BLACKJACK_HAND_VIEW"):
			return "INPUT_MINIGAME_BLACKJACK_HAND_VIEW";
		case joaat("INPUT_PHOTO_MODE_DOF_DOWN_ONLY"):
			return "INPUT_PHOTO_MODE_DOF_DOWN_ONLY";
		case joaat("INPUT_MINIGAME_FISHING_LEAN_RIGHT"):
			return "INPUT_MINIGAME_FISHING_LEAN_RIGHT";
		case joaat("INPUT_INTERACT_HIT_CARRIABLE"):
			return "INPUT_INTERACT_HIT_CARRIABLE";
		case joaat("INPUT_FRONTEND_DOWN"):
			return "INPUT_FRONTEND_DOWN";
		case joaat("INPUT_SELECT_WEAPON_AUTO_RIFLE"):
			return "INPUT_SELECT_WEAPON_AUTO_RIFLE";
		case joaat("INPUT_DIVE"):
			return "INPUT_DIVE";
		case joaat("INPUT_FRONTEND_SOCIAL_CLUB"):
			return "INPUT_FRONTEND_SOCIAL_CLUB";
		case joaat("INPUT_PHOTO_MODE_LENSE_PREV"):
			return "INPUT_PHOTO_MODE_LENSE_PREV";
		case joaat("INPUT_GAME_MENU_STICK_LEFT"):
			return "INPUT_GAME_MENU_STICK_LEFT";
		case joaat("INPUT_CAMERA_EXPRESSION_PREV"):
			return "INPUT_CAMERA_EXPRESSION_PREV";
		case joaat("INPUT_CONTEXT_RT"):
			return "INPUT_CONTEXT_RT";
		case joaat("INPUT_ATTACK"):
			return "INPUT_ATTACK";
		case joaat("INPUT_VEH_CAR_TURN_LEFT_ONLY"):
			return "INPUT_VEH_CAR_TURN_LEFT_ONLY";
		case joaat("INPUT_VEH_FLY_THROTTLE_DOWN"):
			return "INPUT_VEH_FLY_THROTTLE_DOWN";
		case joaat("INPUT_FRONTEND_NAV_RIGHT"):
			return "INPUT_FRONTEND_NAV_RIGHT";
		case joaat("INPUT_LOOK_LEFT_ONLY"):
			return "INPUT_LOOK_LEFT_ONLY";
		case joaat("INPUT_FRONTEND_AXIS_Y"):
			return "INPUT_FRONTEND_AXIS_Y";
		case joaat("INPUT_CREATOR_MENU_SELECT"):
			return "INPUT_CREATOR_MENU_SELECT";
		case joaat("INPUT_INTERACT_LOCKON_Y"):
			return "INPUT_INTERACT_LOCKON_Y";
		case joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_Y"):
			return "INPUT_MINIGAME_FISHING_LEFT_AXIS_Y";
		case joaat("INPUT_MINIGAME_ACTION_LEFT"):
			return "INPUT_MINIGAME_ACTION_LEFT";
		case joaat("INPUT_VEH_PREV_RADIO_TRACK"):
			return "INPUT_VEH_PREV_RADIO_TRACK";
		case joaat("INPUT_THROW_GRENADE"):
			return "INPUT_THROW_GRENADE";
		case joaat("INPUT_CAMP_SETUP_TENT"):
			return "INPUT_CAMP_SETUP_TENT";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_UP_X"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_UP_X";
		case joaat("INPUT_VEH_SELECT_PREV_WEAPON"):
			return "INPUT_VEH_SELECT_PREV_WEAPON";
		case joaat("INPUT_STICKY_FEED_CANCEL"):
			return "INPUT_STICKY_FEED_CANCEL";
		case joaat("INPUT_CREATOR_RAISE"):
			return "INPUT_CREATOR_RAISE";
		case joaat("INPUT_MINIGAME_FISHING_LEAN_LEFT"):
			return "INPUT_MINIGAME_FISHING_LEAN_LEFT";
		case joaat("INPUT_SCRIPT_PAD_UP"):
			return "INPUT_SCRIPT_PAD_UP";
		case joaat("INPUT_MINIGAME_FFF_A"):
			return "INPUT_MINIGAME_FFF_A";
		case joaat("INPUT_SELECT_RADAR_MODE"):
			return "INPUT_SELECT_RADAR_MODE";
		case joaat("INPUT_VEH_FLY_PITCH_DOWN_ONLY"):
			return "INPUT_VEH_FLY_PITCH_DOWN_ONLY";
		case joaat("INPUT_FRONTEND_TOUCH_HOLD_X"):
			return "INPUT_FRONTEND_TOUCH_HOLD_X";
		case joaat("INPUT_SELECT_WEAPON_MELEE"):
			return "INPUT_SELECT_WEAPON_MELEE";
		case joaat("INPUT_GAME_MENU_TAB_RIGHT"):
			return "INPUT_GAME_MENU_TAB_RIGHT";
		case joaat("INPUT_CURSOR_FORWARD_CLICK"):
			return "INPUT_CURSOR_FORWARD_CLICK";
		case joaat("INPUT_FRONTEND_MAP_NAV_UP"):
			return "INPUT_FRONTEND_MAP_NAV_UP";
		case joaat("INPUT_HORSE_MOVE_LR"):
			return "INPUT_HORSE_MOVE_LR";
		case joaat("INPUT_EMOTE_ACTION"):
			return "INPUT_EMOTE_ACTION";
		case joaat("INPUT_RADIO_WHEEL_UD"):
			return "INPUT_RADIO_WHEEL_UD";
		case joaat("INPUT_LOOT_VEHICLE"):
			return "INPUT_LOOT_VEHICLE";
		case joaat("INPUT_FRONTEND_CANCEL"):
			return "INPUT_FRONTEND_CANCEL";
		case joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"):
			return "INPUT_MELEE_HORSE_ATTACK_SECONDARY";
		case joaat("INPUT_FRONTEND_TOUCH_DOUBLE_TAP_X"):
			return "INPUT_FRONTEND_TOUCH_DOUBLE_TAP_X";
		case joaat("INPUT_FRONTEND_TOUCH_ZOOM_X"):
			return "INPUT_FRONTEND_TOUCH_ZOOM_X";
		case joaat("INPUT_MINIGAME_BUILDING_CAMERA_NEXT"):
			return "INPUT_MINIGAME_BUILDING_CAMERA_NEXT";
		case joaat("INPUT_CREATOR_SWITCH_CAM"):
			return "INPUT_CREATOR_SWITCH_CAM";
		case joaat("INPUT_MINIGAME_ACTION_RIGHT"):
			return "INPUT_MINIGAME_ACTION_RIGHT";
		case joaat("INPUT_VEH_MOVE_DOWN_ONLY"):
			return "INPUT_VEH_MOVE_DOWN_ONLY";
		case joaat("INPUT_FRONTEND_SELECT"):
			return "INPUT_FRONTEND_SELECT";
		case joaat("INPUT_INSPECT_LR"):
			return "INPUT_INSPECT_LR";
		case joaat("INPUT_FRONTEND_RB"):
			return "INPUT_FRONTEND_RB";
		case joaat("INPUT_INTERACT_LEAD_ANIMAL"):
			return "INPUT_INTERACT_LEAD_ANIMAL";
		case joaat("INPUT_SELECT_WEAPON_HANDGUN"):
			return "INPUT_SELECT_WEAPON_HANDGUN";
		case joaat("INPUT_MULTIPLAYER_DEAD_RESPAWN"):
			return "INPUT_MULTIPLAYER_DEAD_RESPAWN";
		case joaat("INPUT_VEH_DRAFT_TURN_LEFT_ONLY"):
			return "INPUT_VEH_DRAFT_TURN_LEFT_ONLY";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_UP_Y"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_UP_Y";
		case joaat("INPUT_CREATOR_MENU_RIGHT"):
			return "INPUT_CREATOR_MENU_RIGHT";
		case joaat("INPUT_HORSE_MELEE"):
			return "INPUT_HORSE_MELEE";
		case joaat("INPUT_SCRIPT_PAD_LEFT"):
			return "INPUT_SCRIPT_PAD_LEFT";
		case joaat("INPUT_MINIGAME_FFF_B"):
			return "INPUT_MINIGAME_FFF_B";
		case joaat("INPUT_CREATOR_LOWER"):
			return "INPUT_CREATOR_LOWER";
		case joaat("INPUT_CURSOR_ACCEPT_DOUBLE_CLICK"):
			return "INPUT_CURSOR_ACCEPT_DOUBLE_CLICK";
		case joaat("INPUT_EMOTE_GROUP_LINK"):
			return "INPUT_EMOTE_GROUP_LINK";
		case joaat("INPUT_VEH_FLY_ATTACK"):
			return "INPUT_VEH_FLY_ATTACK";
		case joaat("INPUT_MINIGAME_ACTION_X"):
			return "INPUT_MINIGAME_ACTION_X";
		case joaat("INPUT_SPECIAL_ABILITY_ACTION"):
			return "INPUT_SPECIAL_ABILITY_ACTION";
		case joaat("INPUT_SELECT_ITEM_WHEEL"):
			return "INPUT_SELECT_ITEM_WHEEL";
		case joaat("INPUT_SELECT_WEAPON_UNARMED"):
			return "INPUT_SELECT_WEAPON_UNARMED";
		case joaat("INPUT_SCRIPT_LEFT_AXIS_X"):
			return "INPUT_SCRIPT_LEFT_AXIS_X";
		case joaat("INPUT_DOCUMENT_PAGE_PREV"):
			return "INPUT_DOCUMENT_PAGE_PREV";
		case joaat("INPUT_MINIGAME_POKER_CHECK"):
			return "INPUT_MINIGAME_POKER_CHECK";
		case joaat("INPUT_FRONTEND_SCROLL_AXIS_Y"):
			return "INPUT_FRONTEND_SCROLL_AXIS_Y";
		case joaat("INPUT_GAME_MENU_LEFT_AXIS_Y"):
			return "INPUT_GAME_MENU_LEFT_AXIS_Y";
		case joaat("INPUT_MELEE_GRAPPLE"):
			return "INPUT_MELEE_GRAPPLE";
		case joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_UP"):
			return "INPUT_PHOTO_MODE_FILTER_INTENSITY_UP";
		case joaat("INPUT_SCRIPT_RRIGHT"):
			return "INPUT_SCRIPT_RRIGHT";
		case joaat("INPUT_VEH_NEXT_RADIO"):
			return "INPUT_VEH_NEXT_RADIO";
		case joaat("INPUT_PHOTO_MODE_ZOOM_OUT"):
			return "INPUT_PHOTO_MODE_ZOOM_OUT";
		case joaat("INPUT_VEH_DRAFT_MOVE_UD"):
			return "INPUT_VEH_DRAFT_MOVE_UD";
		case joaat("INPUT_CINEMATIC_CAM_DOWN_ONLY"):
			return "INPUT_CINEMATIC_CAM_DOWN_ONLY";
		case joaat("INPUT_WHISTLE"):
			return "INPUT_WHISTLE";
		case joaat("INPUT_CREATOR_ZOOM_OUT"):
			return "INPUT_CREATOR_ZOOM_OUT";
		case joaat("INPUT_VEH_FLY_SELECT_NEXT_WEAPON"):
			return "INPUT_VEH_FLY_SELECT_NEXT_WEAPON";
		case joaat("INPUT_TITHING_INCREASE_AMOUNT"):
			return "INPUT_TITHING_INCREASE_AMOUNT";
		case joaat("INPUT_FRONTEND_TOUCH_ZOOM_Y"):
			return "INPUT_FRONTEND_TOUCH_ZOOM_Y";
		case joaat("INPUT_QUICK_SELECT_PUT_AWAY_ROD"):
			return "INPUT_QUICK_SELECT_PUT_AWAY_ROD";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_LEFT_X"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_LEFT_X";
		case joaat("INPUT_MINIGAME_FISHING_QUICK_EQUIP"):
			return "INPUT_MINIGAME_FISHING_QUICK_EQUIP";
		case joaat("INPUT_INTERACT_LOCKON_NEG"):
			return "INPUT_INTERACT_LOCKON_NEG";
		case joaat("INPUT_PHOTO_MODE_DOF"):
			return "INPUT_PHOTO_MODE_DOF";
		case joaat("INPUT_SCRIPT_RT"):
			return "INPUT_SCRIPT_RT";
		case joaat("INPUT_GAME_MENU_TAB_LEFT_SECONDARY"):
			return "INPUT_GAME_MENU_TAB_LEFT_SECONDARY";
		case joaat("INPUT_CURSOR_CANCEL"):
			return "INPUT_CURSOR_CANCEL";
		case joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"):
			return "INPUT_SCRIPT_RIGHT_AXIS_Y";
		case joaat("INPUT_VEH_PASSENGER_ATTACK"):
			return "INPUT_VEH_PASSENGER_ATTACK";
		case joaat("INPUT_LOOT3"):
			return "INPUT_LOOT3";
		case joaat("INPUT_FRONTEND_MAP_NAV_RIGHT"):
			return "INPUT_FRONTEND_MAP_NAV_RIGHT";
		case joaat("INPUT_CARRIABLE_BREAK_FREE"):
			return "INPUT_CARRIABLE_BREAK_FREE";
		case joaat("INPUT_HORSE_COVER_TRANSITION"):
			return "INPUT_HORSE_COVER_TRANSITION";
		case joaat("INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_LEFT"):
			return "INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_LEFT";
		case joaat("INPUT_SCRIPT_LT"):
			return "INPUT_SCRIPT_LT";
		case joaat("INPUT_VEH_SLOWMO_UP_ONLY"):
			return "INPUT_VEH_SLOWMO_UP_ONLY";
		case joaat("INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE"):
			return "INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE";
		case joaat("INPUT_CREATOR_ACCEPT"):
			return "INPUT_CREATOR_ACCEPT";
		case joaat("INPUT_VEH_HANDCART_BRAKE"):
			return "INPUT_VEH_HANDCART_BRAKE";
		case joaat("INPUT_DYNAMIC_SCENARIO"):
			return "INPUT_DYNAMIC_SCENARIO";
		case joaat("INPUT_PHOTO_MODE_ROTATE_LEFT"):
			return "INPUT_PHOTO_MODE_ROTATE_LEFT";
		case joaat("INPUT_PHOTO_MODE_BACK"):
			return "INPUT_PHOTO_MODE_BACK";
		case joaat("INPUT_MINIGAME_FISHING_REEL_SPEED_UP"):
			return "INPUT_MINIGAME_FISHING_REEL_SPEED_UP";
		case joaat("INPUT_VEH_FLY_ATTACK_CAMERA"):
			return "INPUT_VEH_FLY_ATTACK_CAMERA";
		case joaat("INPUT_CAMERA_DOF"):
			return "INPUT_CAMERA_DOF";
		case joaat("INPUT_MINIGAME_FFF_SKIP_TURN"):
			return "INPUT_MINIGAME_FFF_SKIP_TURN";
		case joaat("INPUT_TOGGLE_WEAPON_SCOPE"):
			return "INPUT_TOGGLE_WEAPON_SCOPE";
		case joaat("INPUT_VEH_FLY_SELECT_TARGET_LEFT"):
			return "INPUT_VEH_FLY_SELECT_TARGET_LEFT";
		case joaat("INPUT_PHOTO_MODE_CONTRAST_DOWN_ONLY"):
			return "INPUT_PHOTO_MODE_CONTRAST_DOWN_ONLY";
		case joaat("INPUT_GAME_MENU_CANCEL"):
			return "INPUT_GAME_MENU_CANCEL";
		case joaat("INPUT_MINIGAME_MILKING_RIGHT_ACTION"):
			return "INPUT_MINIGAME_MILKING_RIGHT_ACTION";
		case joaat("INPUT_INTERACT_LOCKON_TARGET_INFO"):
			return "INPUT_INTERACT_LOCKON_TARGET_INFO";
		case joaat("INPUT_MINIGAME_BLACKJACK_STAND"):
			return "INPUT_MINIGAME_BLACKJACK_STAND";
		case joaat("INPUT_VEH_FLY_YAW_LEFT"):
			return "INPUT_VEH_FLY_YAW_LEFT";
		case joaat("INPUT_FRONTEND_SCROLL_AXIS_X"):
			return "INPUT_FRONTEND_SCROLL_AXIS_X";
		case joaat("INPUT_CREATOR_ZOOM_IN"):
			return "INPUT_CREATOR_ZOOM_IN";
		case joaat("INPUT_CREATOR_GRAB"):
			return "INPUT_CREATOR_GRAB";
		case joaat("INPUT_CREATOR_LS"):
			return "INPUT_CREATOR_LS";
		case joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_OUT_MODIFER"):
			return "INPUT_MINIGAME_FISHING_MANUAL_REEL_OUT_MODIFER";
		case joaat("INPUT_PHOTO_MODE_PC"):
			return "INPUT_PHOTO_MODE_PC";
		case joaat("INPUT_VEH_FLY_DUCK"):
			return "INPUT_VEH_FLY_DUCK";
		case joaat("INPUT_SCRIPT_RDOWN"):
			return "INPUT_SCRIPT_RDOWN";
		case joaat("INPUT_RADIAL_MENU_NAV_LR"):
			return "INPUT_RADIAL_MENU_NAV_LR";
		case joaat("INPUT_FRONTEND_RLEFT"):
			return "INPUT_FRONTEND_RLEFT";
		case joaat("INPUT_FRONTEND_TOUCH_HOLD_Y"):
			return "INPUT_FRONTEND_TOUCH_HOLD_Y";
		case joaat("INPUT_LOOT2"):
			return "INPUT_LOOT2";
		case joaat("INPUT_VEH_MOUSE_CONTROL_OVERRIDE"):
			return "INPUT_VEH_MOUSE_CONTROL_OVERRIDE";
		case joaat("INPUT_SNIPER_ZOOM_IN_ALTERNATE"):
			return "INPUT_SNIPER_ZOOM_IN_ALTERNATE";
		case joaat("INPUT_CONTEXT_B"):
			return "INPUT_CONTEXT_B";
		case joaat("INPUT_HORSE_MOVE_UD"):
			return "INPUT_HORSE_MOVE_UD";
		case joaat("INPUT_VEH_CAR_TURN_LR"):
			return "INPUT_VEH_CAR_TURN_LR";
		case joaat("INPUT_PHOTO_MODE"):
			return "INPUT_PHOTO_MODE";
		case joaat("INPUT_INTERROGATE_RELEASE"):
			return "INPUT_INTERROGATE_RELEASE";
		case joaat("INPUT_CREATOR_RT"):
			return "INPUT_CREATOR_RT";
		case joaat("INPUT_VEH_FLY_ROLL_LR"):
			return "INPUT_VEH_FLY_ROLL_LR";
		case joaat("INPUT_DOCUMENT_SCROLL_UP_ONLY"):
			return "INPUT_DOCUMENT_SCROLL_UP_ONLY";
		case joaat("INPUT_SELECT_WEAPON_HEAVY"):
			return "INPUT_SELECT_WEAPON_HEAVY";
		case joaat("INPUT_FRONTEND_RIGHT_AXIS_X"):
			return "INPUT_FRONTEND_RIGHT_AXIS_X";
		case joaat("INPUT_MINIGAME_BLACKJACK_BET_AXIS_Y"):
			return "INPUT_MINIGAME_BLACKJACK_BET_AXIS_Y";
		case joaat("INPUT_HORSE_GUN_LR"):
			return "INPUT_HORSE_GUN_LR";
		case joaat("INPUT_FRONTEND_ENDSCREEN_ACCEPT"):
			return "INPUT_FRONTEND_ENDSCREEN_ACCEPT";
		case joaat("INPUT_VEH_ROOF"):
			return "INPUT_VEH_ROOF";
		case joaat("INPUT_FRONTEND_KEYMAPPING_CANCEL"):
			return "INPUT_FRONTEND_KEYMAPPING_CANCEL";
		case joaat("INPUT_CREATOR_DELETE"):
			return "INPUT_CREATOR_DELETE";
		case joaat("INPUT_MINIGAME_DANCE_NEXT"):
			return "INPUT_MINIGAME_DANCE_NEXT";
		case joaat("INPUT_ACCURATE_AIM"):
			return "INPUT_ACCURATE_AIM";
		case joaat("INPUT_MINIGAME_PLACE_BET"):
			return "INPUT_MINIGAME_PLACE_BET";
		case joaat("INPUT_CREATOR_DROP"):
			return "INPUT_CREATOR_DROP";
		case joaat("INPUT_LOOT"):
			return "INPUT_LOOT";
		case joaat("INPUT_HORSE_COMMAND_FLEE"):
			return "INPUT_HORSE_COMMAND_FLEE";
		case joaat("INPUT_INTERACT_NEG"):
			return "INPUT_INTERACT_NEG";
		case joaat("INPUT_VEH_BOAT_BRAKE"):
			return "INPUT_VEH_BOAT_BRAKE";
		case joaat("INPUT_SNIPER_ZOOM_OUT_ONLY"):
			return "INPUT_SNIPER_ZOOM_OUT_ONLY";
		case joaat("INPUT_MINIGAME_BLACKJACK_SPLIT"):
			return "INPUT_MINIGAME_BLACKJACK_SPLIT";
		case joaat("INPUT_FRONTEND_LS"):
			return "INPUT_FRONTEND_LS";
		case joaat("INPUT_GAME_MENU_ACCEPT"):
			return "INPUT_GAME_MENU_ACCEPT";
		case joaat("INPUT_GAME_MENU_DOWN"):
			return "INPUT_GAME_MENU_DOWN";
		case joaat("INPUT_CREATOR_LT"):
			return "INPUT_CREATOR_LT";
		case joaat("INPUT_VEH_SUB_TURN_LEFT_ONLY"):
			return "INPUT_VEH_SUB_TURN_LEFT_ONLY";
		case joaat("INPUT_CAMERA_TAKE_PHOTO"):
			return "INPUT_CAMERA_TAKE_PHOTO";
		case joaat("INPUT_GAME_MENU_RIGHT_AXIS_X"):
			return "INPUT_GAME_MENU_RIGHT_AXIS_X";
		case joaat("INPUT_VEH_SUB_PITCH_UD"):
			return "INPUT_VEH_SUB_PITCH_UD";
		case joaat("INPUT_EMOTE_TAUNT"):
			return "INPUT_EMOTE_TAUNT";
		case joaat("INPUT_CAMERA_ZOOM"):
			return "INPUT_CAMERA_ZOOM";
		case joaat("INPUT_VEH_GUN_UD"):
			return "INPUT_VEH_GUN_UD";
		case joaat("INPUT_PHOTO_MODE_CONTRAST"):
			return "INPUT_PHOTO_MODE_CONTRAST";
		case joaat("INPUT_VEH_RADIO_WHEEL"):
			return "INPUT_VEH_RADIO_WHEEL";
		case joaat("INPUT_VEH_SPECIAL"):
			return "INPUT_VEH_SPECIAL";
		case joaat("INPUT_MINIGAME_POKER_FOLD"):
			return "INPUT_MINIGAME_POKER_FOLD";
		case joaat("INPUT_MINIGAME_FISHING_REEL_SPEED_AXIS"):
			return "INPUT_MINIGAME_FISHING_REEL_SPEED_AXIS";
		case joaat("INPUT_MINIGAME_CLEAR_BET"):
			return "INPUT_MINIGAME_CLEAR_BET";
		case joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"):
			return "INPUT_FRONTEND_PAUSE_ALTERNATE";
		case joaat("INPUT_VEH_STUNT_UD"):
			return "INPUT_VEH_STUNT_UD";
		case joaat("INPUT_FRONTEND_DELETE"):
			return "INPUT_FRONTEND_DELETE";
		case joaat("INPUT_PUSH_TO_TALK"):
			return "INPUT_PUSH_TO_TALK";
		case joaat("INPUT_OPEN_SATCHEL_MENU"):
			return "INPUT_OPEN_SATCHEL_MENU";
		case joaat("INPUT_PHONE"):
			return "INPUT_PHONE";
		case joaat("INPUT_MULTIPLAYER_DEAD_PARLEY"):
			return "INPUT_MULTIPLAYER_DEAD_PARLEY";
		case joaat("INPUT_VEH_FLY_ATTACK2"):
			return "INPUT_VEH_FLY_ATTACK2";
		case joaat("INPUT_MOVE_LR"):
			return "INPUT_MOVE_LR";
		case joaat("INPUT_MULTIPLAYER_SPECTATE_PLAYER_OPTIONS"):
			return "INPUT_MULTIPLAYER_SPECTATE_PLAYER_OPTIONS";
		case joaat("INPUT_DROP_AMMO"):
			return "INPUT_DROP_AMMO";
		case joaat("INPUT_PHOTO_MODE_MOVE_LR"):
			return "INPUT_PHOTO_MODE_MOVE_LR";
		case joaat("INPUT_PHOTO_MODE_FILTER_PREV"):
			return "INPUT_PHOTO_MODE_FILTER_PREV";
		case joaat("INPUT_EMOTE_GROUP_LINK_HORSE"):
			return "INPUT_EMOTE_GROUP_LINK_HORSE";
		case joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"):
			return "INPUT_MINIGAME_FISHING_RIGHT_AXIS_X";
		case joaat("INPUT_MULTIPLAYER_SPECTATE_PLAYER_PREV"):
			return "INPUT_MULTIPLAYER_SPECTATE_PLAYER_PREV";
		case joaat("INPUT_WEAPON_SPECIAL_TWO"):
			return "INPUT_WEAPON_SPECIAL_TWO";
		case joaat("INPUT_FRONTEND_LT"):
			return "INPUT_FRONTEND_LT";
		case joaat("INPUT_CONTEXT_A"):
			return "INPUT_CONTEXT_A";
		case joaat("INPUT_MINIGAME_CRACKPOT_BOAT_SHOW_CONTROLS"):
			return "INPUT_MINIGAME_CRACKPOT_BOAT_SHOW_CONTROLS";
		case joaat("INPUT_MINIGAME_FISHING_KEEP_FISH"):
			return "INPUT_MINIGAME_FISHING_KEEP_FISH";
		case joaat("INPUT_SPECIAL_ABILITY_PC"):
			return "INPUT_SPECIAL_ABILITY_PC";
		case joaat("INPUT_VEH_FLY_SELECT_TARGET_RIGHT"):
			return "INPUT_VEH_FLY_SELECT_TARGET_RIGHT";
		case joaat("INPUT_INSPECT_ZOOM"):
			return "INPUT_INSPECT_ZOOM";
		case joaat("INPUT_INTERACT_LOCKON_ANIMAL"):
			return "INPUT_INTERACT_LOCKON_ANIMAL";
		case joaat("INPUT_SCRIPT_LEFT_AXIS_Y"):
			return "INPUT_SCRIPT_LEFT_AXIS_Y";
		case joaat("INPUT_CURSOR_SCROLL_HOLD"):
			return "INPUT_CURSOR_SCROLL_HOLD";
		case joaat("INPUT_VEH_CAR_ATTACK"):
			return "INPUT_VEH_CAR_ATTACK";
		case joaat("INPUT_VEH_DRIVE_LOOK2"):
			return "INPUT_VEH_DRIVE_LOOK2";
		case joaat("INPUT_CREATOR_LOOK_UD"):
			return "INPUT_CREATOR_LOOK_UD";
		case joaat("INPUT_HORSE_MOVE_DOWN_ONLY"):
			return "INPUT_HORSE_MOVE_DOWN_ONLY";
		case joaat("INPUT_VEH_FLY_ROLL_LEFT_ONLY"):
			return "INPUT_VEH_FLY_ROLL_LEFT_ONLY";
		case joaat("INPUT_FRONTEND_RDOWN"):
			return "INPUT_FRONTEND_RDOWN";
		case joaat("INPUT_HUD_SPECIAL"):
			return "INPUT_HUD_SPECIAL";
		case joaat("INPUT_VEH_PUSHBIKE_FRONT_BRAKE"):
			return "INPUT_VEH_PUSHBIKE_FRONT_BRAKE";
		case joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"):
			return "INPUT_OPEN_SATCHEL_HORSE_MENU";
		case joaat("INPUT_CREATOR_MOVE_LR"):
			return "INPUT_CREATOR_MOVE_LR";
		case joaat("INPUT_CREATOR_MENU_FUNCTION"):
			return "INPUT_CREATOR_MENU_FUNCTION";
		case joaat("INPUT_HORSE_SPRINT"):
			return "INPUT_HORSE_SPRINT";
		case joaat("INPUT_VEH_DUCK"):
			return "INPUT_VEH_DUCK";
		case joaat("INPUT_FRONTEND_RRIGHT"):
			return "INPUT_FRONTEND_RRIGHT";
		case joaat("INPUT_VEH_CAR_ATTACK2"):
			return "INPUT_VEH_CAR_ATTACK2";
		case joaat("INPUT_PHOTO_MODE_ZOOM_IN"):
			return "INPUT_PHOTO_MODE_ZOOM_IN";
		case joaat("INPUT_VEH_ACCELERATE"):
			return "INPUT_VEH_ACCELERATE";
		case joaat("INPUT_GAME_MENU_STICK_RIGHT"):
			return "INPUT_GAME_MENU_STICK_RIGHT";
		case joaat("INPUT_VEH_BOAT_TURN_LEFT_ONLY"):
			return "INPUT_VEH_BOAT_TURN_LEFT_ONLY";
		case joaat("INPUT_MINIGAME_NEW_GAME"):
			return "INPUT_MINIGAME_NEW_GAME";
		case joaat("INPUT_PHOTO_MODE_CONTRAST_UP_ONLY"):
			return "INPUT_PHOTO_MODE_CONTRAST_UP_ONLY";
		case joaat("INPUT_VEH_DRAFT_TURN_RIGHT_ONLY"):
			return "INPUT_VEH_DRAFT_TURN_RIGHT_ONLY";
		case joaat("INPUT_SHOP_INSPECT"):
			return "INPUT_SHOP_INSPECT";
		case joaat("INPUT_VEH_SPECIAL_ABILITY_FRANKLIN"):
			return "INPUT_VEH_SPECIAL_ABILITY_FRANKLIN";
		case joaat("INPUT_MINIGAME_BUILDING_CAMERA_PREV"):
			return "INPUT_MINIGAME_BUILDING_CAMERA_PREV";
		case joaat("INPUT_CAMERA_PUT_AWAY"):
			return "INPUT_CAMERA_PUT_AWAY";
		case joaat("INPUT_QUICK_EQUIP_ITEM"):
			return "INPUT_QUICK_EQUIP_ITEM";
		case joaat("INPUT_GAME_MENU_RIGHT_AXIS_Y"):
			return "INPUT_GAME_MENU_RIGHT_AXIS_Y";
		case joaat("INPUT_HORSE_ATTACK"):
			return "INPUT_HORSE_ATTACK";
		case joaat("INPUT_HORSE_AIM"):
			return "INPUT_HORSE_AIM";
		case joaat("INPUT_MINIGAME_FFF_ZOOM"):
			return "INPUT_MINIGAME_FFF_ZOOM";
		case joaat("INPUT_CINEMATIC_CAM"):
			return "INPUT_CINEMATIC_CAM";
		case joaat("INPUT_VEH_SUB_TURN_LR"):
			return "INPUT_VEH_SUB_TURN_LR";
		case joaat("INPUT_CURSOR_SCROLL_UP"):
			return "INPUT_CURSOR_SCROLL_UP";
		case joaat("INPUT_VEH_FLY_PITCH_UP_ONLY"):
			return "INPUT_VEH_FLY_PITCH_UP_ONLY";
		case joaat("INPUT_FRONTEND_UP"):
			return "INPUT_FRONTEND_UP";
		case joaat("INPUT_SPECIAL_ABILITY_SECONDARY"):
			return "INPUT_SPECIAL_ABILITY_SECONDARY";
		case joaat("INPUT_GAME_MENU_STICK_DOWN"):
			return "INPUT_GAME_MENU_STICK_DOWN";
		case joaat("INPUT_SCRIPTED_FLY_ZUP"):
			return "INPUT_SCRIPTED_FLY_ZUP";
		case joaat("INPUT_VEH_HORN"):
			return "INPUT_VEH_HORN";
		case joaat("INPUT_VEH_SUB_TURN_HARD_LEFT"):
			return "INPUT_VEH_SUB_TURN_HARD_LEFT";
		case joaat("INPUT_VEH_SLOWMO_DOWN_ONLY"):
			return "INPUT_VEH_SLOWMO_DOWN_ONLY";
		case joaat("INPUT_MINIGAME_POKER_SKIP"):
			return "INPUT_MINIGAME_POKER_SKIP";
		case joaat("INPUT_VEH_HANDBRAKE"):
			return "INPUT_VEH_HANDBRAKE";
		case joaat("INPUT_MINIGAME_FFF_X"):
			return "INPUT_MINIGAME_FFF_X";
		case joaat("INPUT_GAME_MENU_RIGHT"):
			return "INPUT_GAME_MENU_RIGHT";
		case joaat("INPUT_EMOTE_COMM"):
			return "INPUT_EMOTE_COMM";
		case joaat("INPUT_MINIGAME_BLACKJACK_BET"):
			return "INPUT_MINIGAME_BLACKJACK_BET";
		case joaat("INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_Y"):
			return "INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_Y";
		case joaat("INPUT_VEH_CAR_AIM"):
			return "INPUT_VEH_CAR_AIM";
		case joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"):
			return "INPUT_MELEE_GRAPPLE_MOUNT_SWITCH";
		case joaat("INPUT_MULTIPLAYER_DEAD_INFORM_LAW"):
			return "INPUT_MULTIPLAYER_DEAD_INFORM_LAW";
		case joaat("INPUT_VEH_BOAT_ATTACK"):
			return "INPUT_VEH_BOAT_ATTACK";
		case joaat("INPUT_HORSE_MOVE_UP_ONLY"):
			return "INPUT_HORSE_MOVE_UP_ONLY";
		case joaat("INPUT_PHOTO_MODE_FILTER_NEXT"):
			return "INPUT_PHOTO_MODE_FILTER_NEXT";
		case joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_X"):
			return "INPUT_MINIGAME_FISHING_LEFT_AXIS_X";
		case joaat("INPUT_CURSOR_SCROLL_CLICK"):
			return "INPUT_CURSOR_SCROLL_CLICK";
		case joaat("INPUT_FRONTEND_MAP_ZOOM"):
			return "INPUT_FRONTEND_MAP_ZOOM";
		case joaat("INPUT_CINEMATIC_CAM_LR"):
			return "INPUT_CINEMATIC_CAM_LR";
		case joaat("INPUT_SNIPER_ZOOM_IN_SECONDARY"):
			return "INPUT_SNIPER_ZOOM_IN_SECONDARY";
		case joaat("INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE"):
			return "INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE";
		case joaat("INPUT_SHOP_SELL"):
			return "INPUT_SHOP_SELL";
		case joaat("INPUT_FRONTEND_X"):
			return "INPUT_FRONTEND_X";
		case joaat("INPUT_INTERROGATE_BEAT"):
			return "INPUT_INTERROGATE_BEAT";
		case joaat("INPUT_VEH_BRAKE"):
			return "INPUT_VEH_BRAKE";
		case joaat("INPUT_VEH_CAR_TURN_RIGHT_ONLY"):
			return "INPUT_VEH_CAR_TURN_RIGHT_ONLY";
		case joaat("INPUT_CARRIABLE_SUICIDE"):
			return "INPUT_CARRIABLE_SUICIDE";
		case joaat("INPUT_MINIGAME_FFF_FLOURISH_CONTINUE"):
			return "INPUT_MINIGAME_FFF_FLOURISH_CONTINUE";
		case joaat("INPUT_FRONTEND_RT"):
			return "INPUT_FRONTEND_RT";
		case joaat("INPUT_HORSE_SPECIAL"):
			return "INPUT_HORSE_SPECIAL";
		case joaat("INPUT_MOVE_LEFT_ONLY"):
			return "INPUT_MOVE_LEFT_ONLY";
		case joaat("INPUT_MP_TEXT_CHAT_FRIENDS"):
			return "INPUT_MP_TEXT_CHAT_FRIENDS";
		case joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"):
			return "INPUT_VEH_DRAFT_SWITCH_DRIVERS";
		case joaat("INPUT_GAME_MENU_RIGHT_STICK_LEFT"):
			return "INPUT_GAME_MENU_RIGHT_STICK_LEFT";
		case joaat("INPUT_INTERACT_LOCKON_CALL_ANIMAL"):
			return "INPUT_INTERACT_LOCKON_CALL_ANIMAL";
		case joaat("INPUT_VEH_FLY_THROTTLE_UP"):
			return "INPUT_VEH_FLY_THROTTLE_UP";
		case joaat("INPUT_MINIGAME_POKER_CHECK_FOLD"):
			return "INPUT_MINIGAME_POKER_CHECK_FOLD";
		case joaat("INPUT_EMOTE_GREET"):
			return "INPUT_EMOTE_GREET";
		case joaat("INPUT_WEAPON_SPECIAL"):
			return "INPUT_WEAPON_SPECIAL";
		case joaat("INPUT_OPEN_CRAFTING_MENU"):
			return "INPUT_OPEN_CRAFTING_MENU";
		case joaat("INPUT_DETONATE"):
			return "INPUT_DETONATE";
		case joaat("INPUT_VEH_TRAVERSAL"):
			return "INPUT_VEH_TRAVERSAL";
		case joaat("INPUT_SADDLE_TRANSFER"):
			return "INPUT_SADDLE_TRANSFER";
		case joaat("INPUT_MINIGAME_FFF_Y"):
			return "INPUT_MINIGAME_FFF_Y";
		case joaat("INPUT_MINIGAME_BLACKJACK_DOUBLE"):
			return "INPUT_MINIGAME_BLACKJACK_DOUBLE";
		case joaat("INPUT_COVER_TRANSITION"):
			return "INPUT_COVER_TRANSITION";
		case joaat("INPUT_INTERACT_OPTION1"):
			return "INPUT_INTERACT_OPTION1";
		case joaat("INPUT_CURSOR_FORWARD_HOLD"):
			return "INPUT_CURSOR_FORWARD_HOLD";
		case joaat("INPUT_HORSE_COMMAND_FOLLOW"):
			return "INPUT_HORSE_COMMAND_FOLLOW";
		case joaat("INPUT_SELECT_WEAPON_SHOTGUN"):
			return "INPUT_SELECT_WEAPON_SHOTGUN";
		case joaat("INPUT_BREAK_DOOR_LOCK"):
			return "INPUT_BREAK_DOOR_LOCK";
		case joaat("INPUT_SCRIPT_RUP"):
			return "INPUT_SCRIPT_RUP";
		case joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"):
			return "INPUT_MINIGAME_DOMINOES_VIEW_MOVES";
		case joaat("INPUT_MINIGAME_POKER_SHOW_POSSIBLE_HANDS"):
			return "INPUT_MINIGAME_POKER_SHOW_POSSIBLE_HANDS";
		case joaat("INPUT_CAMERA_HANDHELD_USE"):
			return "INPUT_CAMERA_HANDHELD_USE";
		case joaat("INPUT_SELECT_NEXT_WHEEL"):
			return "INPUT_SELECT_NEXT_WHEEL";
		case joaat("INPUT_FRONTEND_NAV_DOWN"):
			return "INPUT_FRONTEND_NAV_DOWN";
		case joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"):
			return "INPUT_MELEE_HORSE_ATTACK_PRIMARY";
		case joaat("INPUT_STOP_LEADING_ANIMAL"):
			return "INPUT_STOP_LEADING_ANIMAL";
		case joaat("INPUT_CINEMATIC_SLOWMO"):
			return "INPUT_CINEMATIC_SLOWMO";
		case joaat("INPUT_SNIPER_ZOOM"):
			return "INPUT_SNIPER_ZOOM";
		case joaat("INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_RIGHT"):
			return "INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_RIGHT";
		case joaat("INPUT_ENTER_CHEAT_CODE"):
			return "INPUT_ENTER_CHEAT_CODE";
		case joaat("INPUT_FRONTEND_Y"):
			return "INPUT_FRONTEND_Y";
		case joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"):
			return "INPUT_PLACE_CARRIABLE_ONTO_PARENT";
		case joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY"):
			return "INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY";
		case joaat("INPUT_VEH_SUB_DESCEND"):
			return "INPUT_VEH_SUB_DESCEND";
		case joaat("INPUT_HORSE_COLLECT"):
			return "INPUT_HORSE_COLLECT";
		case joaat("INPUT_FRONTEND_RS"):
			return "INPUT_FRONTEND_RS";
		case joaat("INPUT_MULTIPLAYER_SPECTATE_HIDE_HUD"):
			return "INPUT_MULTIPLAYER_SPECTATE_HIDE_HUD";
		case joaat("INPUT_DROP_WEAPON"):
			return "INPUT_DROP_WEAPON";
		case joaat("INPUT_TALK"):
			return "INPUT_TALK";
		case joaat("INPUT_HORSE_MOVE_RIGHT_ONLY"):
			return "INPUT_HORSE_MOVE_RIGHT_ONLY";
		case joaat("INPUT_EMOTES_MANAGE"):
			return "INPUT_EMOTES_MANAGE";
		case joaat("INPUT_MINIGAME_LEFT_TRIGGER"):
			return "INPUT_MINIGAME_LEFT_TRIGGER";
		case joaat("INPUT_NEXT_CAMERA"):
			return "INPUT_NEXT_CAMERA";
		case joaat("INPUT_PHOTO_MODE_TOGGLE_HUD"):
			return "INPUT_PHOTO_MODE_TOGGLE_HUD";
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

bool func_540(int iParam0)
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

void func_541(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (bParam2 && !func_540(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ENABLED - Invalid context!");
		return;
	}
	sVar0 = func_632(iParam0);
	if (bParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Enable use context, ", sVar0);
		func_633(iParam0, 4);
		if (bParam3)
		{
			func_634(sVar0, 1);
		}
		func_635(sVar0, 1);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Disable use context, ", sVar0);
		func_636(iParam0, 4);
		func_635(sVar0, 0);
	}
}

void func_542(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_540(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_DRAWING_ENABLED - Invalid context!");
		return;
	}
	iVar0 = func_632(iParam0);
	func_634(iVar0, bParam1);
}

void func_543(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_540(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_632(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_637(iVar0);
	*uParam0 = 0;
}

void func_544(int iParam0)
{
	if (Global_1102630.f_26.f_3342 == iParam0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Global_1102630.f_26.f_3342 = 0;
		DEBUG::_0xF0783374333FD8CE(8, 37, "__NSC__SET_DESIRED_TARGET = eiSpecCamDesiredTarget doesn't exist.  Clearing desired target to NULL.");
		return;
	}
	if (iParam0 == func_638(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 37, "__NSC__SET_DESIRED_TARGET - Desired target = local player but we can't set it to the player corpse b/c it doesn't exist.  Going to try the ambient cam.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_1102630.f_26.f_3344))
		{
			iParam0 = Global_1102630.f_26.f_3344;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 37, "__NSC__SET_CURRENT_TARGET - Desired target = ambient cam didn't exist.  Who knows what happens now...");
		}
	}
	DEBUG::_0xF0783374333FD8CE(648, 37, "__NSC__SET_DESIRED_TARGET = ", iParam0, ", ", UNK_0xE02C950E4C991632(iParam0));
	UNK_0x355E72323AEE83CC(-1, 6);
	Global_1102630.f_26.f_3342 = iParam0;
}

void func_545(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 37, "__NSC__TOGGLE_SPECTATE_NEXT_AVAILABLE_TARGET_ASAP = Setting to ", bParam0);
	Global_1102630.f_26.f_3 = bParam0;
}

void func_546(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;

	if (!Global_1940410.f_6)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_33, vParam0) };
		DEBUG::_0xF0783374333FD8CE(56, 0, "SET_GAMEPLAY_CAM_HEADING_TOWARDS_COORDS: GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS: vProbe : ", &vVar1);
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1f);
		CAM::_0x05BD5E4088B30A66(-180f, 180f);
		DEBUG::_0xF0783374333FD8CE(24, 0, "SET_GAMEPLAY_CAM_HEADING_TOWARDS_COORDS: fHeading : ", fVar0);
	}
}

void func_547(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!Global_1940410.f_6)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_33, vParam0) };
		DEBUG::_0xF0783374333FD8CE(56, 0, "SET_GAMEPLAY_CAM_PITCH_TOWARDS_COORDS: GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS: vProbe : ", &vVar0);
		fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
		DEBUG::_0xF0783374333FD8CE(24, 0, "SET_GAMEPLAY_CAM_PITCH_TOWARDS_COORDS: fPitch : ", fVar3);
	}
}

int func_548(float fParam0)
{
	if (fParam0 == 0f)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC] GET_MOTION_STATE_FROM_FLOAT : MS_ON_FOOT_IDLE");
		return joaat("MOTIONSTATE_IDLE");
	}
	if (fParam0 >= 1f && fParam0 < 2f)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC] GET_MOTION_STATE_FROM_FLOAT : MS_ON_FOOT_WALK");
		return joaat("MOTIONSTATE_WALK");
	}
	if (fParam0 >= 2f && fParam0 < 3f)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC] GET_MOTION_STATE_FROM_FLOAT : MS_ON_FOOT_RUN");
		return joaat("MOTIONSTATE_RUN");
	}
	if (fParam0 == 3f)
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC] GET_MOTION_STATE_FROM_FLOAT : MS_ON_FOOT_SPRINT");
		return joaat("MOTIONSTATE_SPRINT");
	}
	DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC] GET_MOTION_STATE_FROM_FLOAT invalid move speed - returning idle");
	return joaat("MOTIONSTATE_IDLE");
}

bool func_549(int iParam0)
{
	return (Global_1102630.f_26.f_9 && iParam0) != 0;
}

void func_550(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
}

char* func_551(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return "Arthur";
		case joaat("CS_ABE"):
			return "Abe";
		case joaat("CS_ABERDEENPIGFARMER"):
			return "ABERDEENPIGFARMER";
		case joaat("CS_ABERDEENSISTER"):
			return "ABERDEENSISTER";
		case joaat("CS_ABIGAILROBERTS"):
			return "AbigailRoberts";
		case joaat("CS_ALBERTMASON"):
			return "AlbertMason";
		case joaat("CS_ARCHIEDOWN"):
			return "ArchieDown";
		case joaat("CS_BAPTISTE"):
			return "Baptiste";
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
			return "BartholomewBraithwaite";
		case joaat("CS_BEATENUPCAPTAIN"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("CS_BEAUGRAY"):
			return "BeauGray";
		case joaat("CS_PENELOPEBRAITHWAITE"):
			return "PenelopeBraithwaite";
		case joaat("CS_BILLWILLIAMSON"):
			return "BillWilliamson";
		case joaat("CS_BRAITHWAITESERVANT"):
			return "BraithwaiteServant";
		case joaat("CS_CATHERINEBRAITHWAITE"):
			return "CatherineBraithwaite";
		case joaat("CS_CHARLESSMITH"):
			return "CharlesSmith";
		case joaat("CS_CIGCARDGUY"):
			return "CS_CIGCARDGUY";
		case joaat("CS_DINOBONESLADY"):
			return "CS_DINOBONESLADY";
		case joaat("CS_CLEET"):
			return "Cleet";
		case joaat("CS_COLMODRISCOLL"):
			return "ColmODriscoll";
		case joaat("CS_CREOLEGUY"):
			return "CreoleGuy";
		case joaat("CS_SDDOCTOR_01"):
			return "SDDoctor_01";
		case joaat("CS_DALEMARONEY"):
			return "DaleMaroney";
		case joaat("CS_DUTCH"):
			return "Dutch";
		case joaat("CS_EDITHDOWN"):
			return "EdithDown";
		case joaat("CS_FUSSAR"):
			return "Fussar";
		case joaat("CS_FISHCOLLECTOR"):
			return "cs_fishcollector";
		case joaat("CS_BRONTE"):
			return "Bronte";
		case joaat("CS_GUIDOMARTELLI"):
			return "GuidoMartelli";
		case joaat("U_M_M_NBXBRONTEGOON_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("CS_GARETHBRAITHWAITE"):
			return "GarethBraithwaite";
		case joaat("CS_GENSTORYFEMALE"):
			return "GenStoryFemale";
		case joaat("CS_GENSTORYMALE"):
			return "GenStoryMale";
		case joaat("CS_LEON"):
			return "Leon";
		case joaat("CS_GERALDBRAITHWAITE"):
			return "GeraldBraithwaite";
		case joaat("CS_HOSEAMATTHEWS"):
			return "HoseaMatthews";
		case joaat("CS_JACKMARSTON"):
			return "JackMarston";
		case joaat("CS_JACKMARSTON_TEEN"):
			return "JackMarston_Teen";
		case joaat("CS_JAMIE"):
			return "Jamie";
		case joaat("CS_JAVIERESCUELLA"):
			return "JavierEscuella";
		case joaat("CS_JIMCALLOWAY"):
			return "JimCalloway";
		case joaat("CS_JOE"):
			return "Joe";
		case joaat("CS_JOHNMARSTON"):
			return "JohnMarston";
		case joaat("CS_JOHNWEATHERS"):
			return "CS_JOHNWEATHERS";
		case joaat("CS_JOSIAHTRELAWNY"):
			return "JosiahTrelawny";
		case joaat("CS_KAREN"):
			return "Karen";
		case joaat("CS_MRSADLER"):
			return "MrsAdler";
		case joaat("CS_KIERAN"):
			return "Kieran";
		case joaat("CS_LEOSTRAUSS"):
			return "LeoStrauss";
		case joaat("CS_LONDONDERRYSON"):
			return "LondonderrySon";
		case joaat("CS_MARYBETH"):
			return "MaryBeth";
		case joaat("CS_MARYLINTON"):
			return "MaryLinton";
		case joaat("CS_MICAHBELL"):
			return "MicahBell";
		case joaat("CS_MOLLYOSHEA"):
			return "MollyOshea";
		case joaat("CS_MRLINTON"):
			return "CS_MrLinton";
		case joaat("CS_MRPEARSON"):
			return "MrPearson";
		case joaat("CS_MRSLONDONDERRY"):
			return "MrsLondonderry";
		case joaat("CS_MUD2BIGGUY"):
			return "Mud2BigGuy";
		case joaat("CS_PROFESSORBELL"):
			return "ProfessorBell";
		case joaat("CS_REVSWANSON"):
			return "RevSwanson";
		case joaat("CS_SAMARITAN"):
			return "CS_Samaritan";
		case joaat("CS_STRDEPUTY_01"):
			return "StrDeputy_01";
		case joaat("CS_STRDEPUTY_02"):
			return "StrDeputy_02";
		case joaat("CS_STRSHERIFF_01"):
		case joaat("U_M_M_STRSHERRIFF_01"):
			return "StrSheriff_01";
		case joaat("CS_SUSANGRIMSHAW"):
			return "SusanGrimshaw";
		case joaat("CS_TAVISHGRAY"):
			return "TavishGray";
		case joaat("CS_THEODORELEVIN"):
			return "TheodoreLevin";
		case joaat("CS_THOMASDOWN"):
			return "ThomasDown";
		case joaat("CS_TILLY"):
			return "Tilly";
		case joaat("CS_UNCLE"):
			return "Uncle";
		case joaat("G_M_M_UNICRIMINALS_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("G_M_M_UNIDUSTER_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("CS_VALSHERIFF"):
			return "CS_VALSHERIFF";
		case joaat("S_M_M_MARSHALLSRURAL_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("U_M_O_VHTEXOTICSHOPKEEPER_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("CS_SEAN"):
			return "Sean";
		case joaat("CS_LENNY"):
			return "Lenny";
		case joaat("CS_HERCULE"):
			return "Hercule";
		case joaat("CS_CREOLECAPTAIN"):
			return "CreoleCaptain";
		case joaat("U_M_M_CREOLECAPTAIN_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("CS_RINGMASTER"):
			return "RingMaster";
		case joaat("U_M_M_VALBARTENDER_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("A_M_M_EMRFARMHAND_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("A_M_M_GRISURVIVALIST_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("CS_LILLYMILLET"):
			return "LillyMillet";
		case joaat("A_F_M_STRTOWNFOLK_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("A_M_M_STRTOWNFOLK_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("S_M_M_STRLUMBERJACK_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("G_M_M_UNICRIMINALS_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("G_M_M_UNICORNWALLGOONS_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("A_M_M_NBXUPPERCLASS_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("A_F_M_NBXUPPERCLASS_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("A_M_M_VALFARMER_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("A_M_M_VALTOWNFOLK_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("A_M_M_VALTOWNFOLK_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("A_F_M_VALTOWNFOLK_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("U_M_M_NBXBARTENDER_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("CS_NBXEXECUTED"):
			return "NBXExecuted";
		case joaat("CS_RHODEPUTY_01"):
			return "RHODEPUTY_01";
		case joaat("U_M_M_RHDSHERIFF_01"):
			return "RHDSHERIFF_01";
		case joaat("CS_LEIGHGRAY"):
			return "LeighGray";
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return "Horse_01";
		case joaat("U_M_M_STRGENSTOREOWNER_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("CS_TOMDICKENS"):
			return "TomDickens";
		case joaat("CS_DAVIDGEDDES"):
			return "DavidGeddes";
		case joaat("CS_ANSEL_ATHERTON"):
			return "ANSEL_ATHERTON";
		case joaat("CS_WROBEL"):
			return "CS_Wrobel";
		case joaat("A_C_COW"):
			return "COW";
		case joaat("A_C_BULL_01"):
			return "BULL";
		case joaat("CS_ALBERTCAKEESQUIRE"):
			return "ALBERTCAKEESQUIRE";
		case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("A_C_DOGCATAHOULACUR_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("A_C_DOGRUFUS_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("A_C_DOGLION_01"):
			return "A_C_DOGLION_01";
		case joaat("CS_TIGERHANDLER"):
			return "Handler";
		case joaat("CS_VALAUCTIONBOSS_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("CS_NBXRECEPTIONIST_01"):
			return "NbxReceptionist_01";
		case joaat("U_M_M_BIVFOREMAN_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("U_M_M_RACFOREMAN_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("CS_CHAINPRISONER_01"):
			return "CHAINPRISONER_01";
		case joaat("CS_CHAINPRISONER_02"):
			return "CHAINPRISONER_02";
		case joaat("U_M_M_VALPOKERPLAYER_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("U_M_M_VALPOKERPLAYER_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("CS_DUNCANGEDDES"):
			return "DUNCANGEDDES";
		case joaat("CS_ANGUSGEDDES"):
			return "ANGUSGEDDES";
		case joaat("CS_EVELYNMILLER"):
			return "EvelynMiller";
		case joaat("CS_SISTERCALDERON"):
			return "SISTERCALDERON";
		case joaat("CS_EDGARROSS"):
			return "EDGARROSS";
		case joaat("CS_WINTONHOLMES"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("U_F_M_RKSHOMESTEADTENANT_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("CS_ROCKYSEVEN_WIDOW"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("U_M_M_BHT_STRAWBERRYDUEL"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("U_M_M_RHDTRAINSTATIONWORKER_01"):
			return "StationWorker";
		case joaat("CS_LEVISIMON"):
			return "LEVISIMON";
		case joaat("S_M_M_FUSSARHENCHMAN_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("A_C_DONKEY_01"):
			return "A_C_DONKEY_01";
		case joaat("A_M_M_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("A_M_O_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("U_M_O_VALBARTENDER_01"):
			return "U_M_O_ValBartender_01";
		case joaat("U_M_M_NBXBARTENDER_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("CS_UNIDUSTERJAIL_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("A_M_M_RHDTOWNFOLK_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("CS_BROTHERDORKINS"):
			return "BrotherDorkins";
		case joaat("G_M_M_UNIBRAITHWAITES_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("A_M_M_GAMHIGHSOCIETY_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("U_M_M_STRFREIGHTSTATIONOWNER_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("CS_EAGLEFLIES"):
			return "EagleFlies";
		case joaat("CS_RAINSFALL"):
			return "CS_RAINSFALL";
		case joaat("A_M_M_WAPWARRIORS_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("A_M_Y_NBXSTREETKIDS_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("U_M_M_BHT_SHACKESCAPE"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("A_M_M_HTLROUGHTRAVELLERS_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("CS_LEMIUXASSISTANT"):
			return "LemiuxAssistant";
		case joaat("P_KEYS01X"):
			return "p_keys01x";
		case joaat("CS_BALLOONOPERATOR"):
			return "CS_BALLOONOPERATOR";
		case joaat("A_M_M_BIVWORKER_01"):
			return "Worker1";
		case joaat("U_M_M_BHT_MINEFOREMAN"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("A_M_M_NBXSLUMS_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("CS_SDPRIEST"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("A_C_BEAR_01"):
			return "A_C_BEAR_01";
		case joaat("CS_MARSHALL_THURWELL"):
			return "MARSHALL_THURWELL";
		case joaat("CS_FAMOUSGUNSLINGER_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("CS_SD_STREETKID_01"):
			return "cs_sd_streetkid_01";
		case joaat("CS_SD_STREETKID_02"):
			return "cs_sd_streetkid_02";
		case joaat("CS_OBEDIAHHINTON"):
			return "ObediahHinton";
		case joaat("CS_POISONWELLSHAMAN"):
			return "PoisonWellShaman";
		case joaat("CS_COOPER"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("U_M_M_BHT_BENEDICTALLBRIGHT"):
			return "u_m_m_bht_benedictallbright";
		case joaat("CS_JULES"):
			return "Jules";
		case joaat("CS_MRDEVON"):
			return "MRDEVON";
		case joaat("CS_MRWAYNE"):
			return "MRWAYNE";
		case joaat("CS_PAYTAH"):
			return "PAYTAH";
		case joaat("CS_VALDEPUTY_01"):
			return "CS_VALDEPUTY_01";
		case joaat("MES_SADIE5_MALES_01"):
			return "MES_SADIE5_MALES_01^1";
		case joaat("A_M_M_NBXDOCKWORKERS_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("U_M_M_VALSHERIFF_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("P_C_HORSE_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_552(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_553(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(8, 51, " The entity is not a player. ");
		}
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 51, " The entity is not a ped. ");
	}
	DEBUG::_0x1B08D1EB9D8C4931(8, 51, " Returning INVALID_PLAYER_ID");
	return 255;
}

void func_554(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	DEBUG::_0xF0783374333FD8CE(8, 208, "[PRELOAD_PLAYER_CLONE_SHOP_ITEM_OUTFIT] Starting preload");
	iVar5 = PED::_GET_METAPED_TYPE(iParam0);
	iVar6 = joaat("MPC_PLAYER_TYPE_MP_MALE");
	if (iVar5 == 1)
	{
		iVar6 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953612.f_1813.f_1[iVar0 /*3*/] = { vVar2 };
		iVar0++;
	}
	if (!func_639(&(Global_1953612.f_1813), &uVar1, bParam1, -1, 0, 0, iVar6, 0, 8))
	{
		DEBUG::_0xF0783374333FD8CE(43176, 208, "[PRELOAD_PLAYER_CLONE_SHOP_ITEM_OUTFIT] Failed to find: ", UNK_0x4379B6FA65D55295(bParam1), " hash; ", bParam1, " for clone player type: ", func_640(iVar6, 0), " | RETURN FALSE");
		return;
	}
	func_641(iParam0, &(Global_1953612.f_1813));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953612.f_1813.f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/] || Global_1953612.f_1813.f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			func_642(Global_1953612.f_1813.f_1[iVar0 /*3*/], iVar5);
		}
		iVar0++;
	}
}

char* func_555(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPT_MALE";
		case 1:
			return "MPT_FEMALE";
		case 2:
			return "MPT_TEEN";
		case 3:
			return "MPT_ANIMAL";
		case 4:
			return "MPT_NONE";
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

int func_556(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS_APPLY_OUTFIT_HASH_TO_CLONE] Applying: ", UNK_0x4379B6FA65D55295(bParam1));
	iVar1 = PED::_GET_METAPED_TYPE(iParam0);
	iVar2 = joaat("MPC_PLAYER_TYPE_MP_MALE");
	if (iVar1 == 1)
	{
		iVar2 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
	}
	iVar3 = 0;
	while (iVar3 < 39)
	{
		Global_1953612.f_2051.f_1[iVar3 /*3*/] = { vVar4 };
		iVar3++;
	}
	if (!func_639(&(Global_1953612.f_2051), &uVar0, bParam1, -1, 0, 0, iVar2, 0, 8))
	{
		DEBUG::_0xF0783374333FD8CE(43176, 208, "[METAPED_PLAYER_COMPONENTS_APPLY_OUTFIT_HASH_TO_CLONE] Failed to find: ", UNK_0x4379B6FA65D55295(bParam1), " hash; ", bParam1, " for clone player type: ", func_640(iVar2, 0), " | RETURN FALSE");
		return 0;
	}
	func_641(iParam0, &(Global_1953612.f_2051));
	iVar3 = 0;
	while (iVar3 < 39)
	{
		if (!func_643(iVar3, 8))
		{
		}
		else
		{
			func_644(iParam0, iVar3, 1);
		}
		iVar3++;
	}
	func_623(&(Global_1953612.f_2051), iParam0, 1, 8, 1, 0, 1, 0);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS_APPLY_OUTFIT_HASH_TO_CLONE] Ending");
	return 1;
}

bool func_557()
{
	int iVar0;

	if (Global_1953612.f_3054 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1953612.f_3054)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(Global_1953612.f_3054.f_1[iVar0 /*2*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_558(bool bParam0)
{
	var uVar0;

	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_OVERRIDE_PLAYER_COMPONENTS_SETUP_OUTFIT] Starting for outfit: ", UNK_0x4379B6FA65D55295(*bParam0), " model: ", func_610(bParam0->f_1, 0));
	UNK_0x355E72323AEE83CC(208, 6);
	if (!func_645(32))
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_OVERRIDE_PLAYER_COMPONENTS_SETUP_OUTFIT] Override data not present, caching off player's outfit!");
		func_646(&(Global_1953612.f_2384));
		func_647(32);
	}
	if (bParam0->f_1 == 0)
	{
		if (!func_648(*bParam0))
		{
			DEBUG::_0x83407B92D46F25C3(2216, 185, "[METAPED_PLAYER_COMPONENTS_SETUP_MISSION_OUTFIT] Failed to find outfit data for: ", UNK_0x4379B6FA65D55295(*bParam0), " hash: ", *bParam0, " | RETURN FALSE");
			if (func_645(32))
			{
				func_649(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_650(&(Global_1953612.f_2384));
		if (!func_651(&(Global_1953612.f_1575), *bParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			DEBUG::_0x83407B92D46F25C3(168, 185, "[METAPED_PLAYER_COMPONENTS_SETUP_MISSION_OUTFIT] Failed to get outfit data for: ", UNK_0x4379B6FA65D55295(*bParam0), " hash: ", *bParam0);
			if (func_645(32))
			{
				func_649(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_652(&(Global_1953612.f_1575));
	}
	func_621(33, Global_1139844.f_4787.f_4, 0, 0, 0);
	Global_1139844.f_4787.f_4 = *bParam0;
	Global_1139844.f_4787 = bParam0->f_1;
	func_621(30, 0, 0, 0, 0);
	func_621(27, 0, 0, 0, 0);
	func_621(32, Global_1139844.f_4787.f_4, 0, 0, 0);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS_SETUP_MISSION_OUTFIT] ...Ending");
	return 1;
}

int func_559(int* iParam0, char* sParam1)
{
	if (MISC::_IS_STRING_SPACE(sParam1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE][MOCAP] IS_MC_CUTSCENE_ENTITY_MOCAP_HANDLE_VALID - Handle is empty. ");
		return 2;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_1484.f_208))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[MC][CUTSCENE][MOCAP] IS_MC_CUTSCENE_ENTITY_MOCAP_HANDLE_VALID - Anim scene doesn't exist. ");
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_1484.f_208, false))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 8, "[MC][CUTSCENE][MOCAP] IS_MC_CUTSCENE_ENTITY_MOCAP_HANDLE_VALID - Meta data is not loaded. ");
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam0->f_1484.f_208, sParam1))
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE][MOCAP] IS_MC_CUTSCENE_ENTITY_MOCAP_HANDLE_VALID - Entity ID doesn't exist in the anim scene:", sParam1);
		return 2;
	}
	return 1;
}

bool func_560(int* iParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = ENTITY::GET_ENTITY_TYPE(iParam1);
	switch (iVar0)
	{
		case 1:
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (bParam2)
					{
						iVar3 = iParam0->f_14[iVar1 /*21*/].f_1.f_2;
					}
					else
					{
						iVar3 = iParam0->f_14[iVar1 /*21*/].f_1.f_1;
					}
					if (iParam1 != iVar3)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 966820754;
						return true;
					}
					iVar1++;
				}
			}
			else if (ENTITY::_0x9A100F1CF4546629(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar4 = iParam0->f_500[iVar1 /*13*/].f_2;
					}
					else
					{
						iVar4 = iParam0->f_500[iVar1 /*13*/].f_1;
					}
					if (iParam1 != iVar4)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = -1821507459;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar5 = iParam0->f_99[iVar1 /*20*/].f_2;
					}
					else
					{
						iVar5 = iParam0->f_99[iVar1 /*20*/].f_1;
					}
					if (iParam1 != iVar5)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1627542854;
						return true;
					}
					iVar1++;
				}
			}
			break;
		case 2:
			iVar6 = ENTITY::GET_ENTITY_MODEL(iParam1);
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar6))
			{
				iVar1 = 0;
				while (iVar1 < 1)
				{
					if (bParam2)
					{
						iVar7 = iParam0->f_1089[iVar1 /*14*/].f_2;
					}
					else
					{
						iVar7 = iParam0->f_1089[iVar1 /*14*/].f_1;
					}
					if (iParam1 != iVar7)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 465509728;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 10)
				{
					if (bParam2)
					{
						iVar8 = iParam0->f_761[iVar1 /*13*/].f_2;
					}
					else
					{
						iVar8 = iParam0->f_761[iVar1 /*13*/].f_1;
					}
					if (iParam1 != iVar8)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1135537454;
						return true;
					}
					iVar1++;
				}
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (bParam2)
		{
			iVar9 = iParam0->f_1104[iVar1 /*15*/].f_2;
		}
		else
		{
			iVar9 = iParam0->f_1104[iVar1 /*15*/].f_1;
		}
		if (iParam1 != iVar9)
		{
		}
		else
		{
			*iParam3 = iVar1;
			*uParam4 = 0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_561(int iParam0, int* iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1->f_1465 == -1)
	{
		return -1;
	}
	if (iParam1->f_1465 >= 24)
	{
		iParam1->f_1465 = -1;
	}
	iVar0 = iParam1->f_1465;
	iParam1->f_1465++;
	iVar1 = ENTITY::GET_ENTITY_TYPE(iParam0);
	iParam1->f_1104[iVar0 /*15*/].f_1 = iParam0;
	iParam1->f_1104[iVar0 /*15*/].f_13 = sParam2;
	iParam1->f_1104[iVar0 /*15*/].f_14 = iParam3;
	DEBUG::_0xEF256AE8A5A27966(664224, 227, 7, "[MC][CUTSCENE] ADD_MC_CUTSCENE_NON_REG_ENTITY - ", func_653(iVar1, 0), " iCSIdx: ", iVar0, " Added new NON-REG entity - iParentIdx: ", sParam2, " eParentType: ", func_382(iParam3, 0));
	return iVar0;
}

char* func_562(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CS_PEDSTARTEND_STATE_CURRENT";
		case 1:
			return "MC_CS_PEDSTARTEND_STATE_STANDING";
		case 2:
			return "MC_CS_PEDSTARTEND_STATE_CROUCHED";
		case 3:
			return "MC_CS_PEDSTARTEND_STATE_COVER";
		case 4:
			return "MC_CS_PEDSTARTEND_STATE_HOGTIED";
		case 5:
			return "MC_CS_PEDSTARTEND_STATE_DEAD";
		case 6:
			return "MC_CS_PEDSTARTEND_STATE_LAST_TRANSPORT";
		case 7:
			return "MC_CS_PEDSTARTEND_STATE_SPECIFIC_TRANSPORT";
		case 8:
			return "MC_CS_PEDSTARTEND_STATE_TRANSPORT_PERSONAL";
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

char* func_563(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2:
			return "VS_ANY_PASSENGER";
		case -1:
			return "VS_DRIVER";
		case 0:
			return "VS_FRONT_RIGHT";
		case 1:
			return "VS_BACK_LEFT";
		case 2:
			return "VS_BACK_RIGHT";
		case 3:
			return "VS_EXTRA_LEFT_1";
		case 4:
			return "VS_EXTRA_RIGHT_1";
		case 5:
			return "VS_EXTRA_LEFT_2";
		case 6:
			return "VS_EXTRA_RIGHT_2";
		case 7:
			return "VS_EXTRA_LEFT_3";
		case 8:
			return "VS_EXTRA_RIGHT_3";
		case 9:
			return "VS_NUM_SEATS";
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

Vector3 func_564(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar6);
	fVar9 = MISC::ABSF(((vVar6.z - vVar3.z) * 0.5f));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

void func_565(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_654(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, false, iVar2, false))
		{
			if (bVar0 != joaat("WEAPON_UNARMED"))
			{
				if (iVar2 == 1)
				{
					DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_PED_INVENTORY - Equiping the secondary weapon inventory ", func_527(bVar0, 0), " and enabled CA_PREFER_DUAL_WIELD");
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 116, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, bVar0, true, iVar2, false, false);
				DEBUG::_0xEF256AE8A5A27966(10912, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_PED_INVENTORY - SET_CURRENT_PED_WEAPON(pedClone, ", func_527(bVar0, 0), ", TRUE, ", func_655(iVar2, 0), ")");
			}
		}
		iVar1++;
	}
}

bool func_566(int iParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iParam1))
	{
		if (!func_97(*iParam2, 5))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_PED_OUTFIT - Removing Holster!");
			PED::_SET_PED_COMPONENT_DISABLED(iParam1, joaat("HOLSTERS_LEFT"), 1);
			bVar0 = true;
			func_28(iParam2, 5);
		}
		if (bVar0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_PED_OUTFIT - Updating Meta Ped");
			PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
			return false;
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_PED_OUTFIT - Outfit cloning complete");
		return true;
	}
	return false;
}

bool func_567(int iParam0)
{
	return ((PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || PED::IS_PED_ON_MOUNT(iParam0)) || (!PED::IS_PED_RAGDOLL(iParam0) && PED::IS_PED_ON_VEHICLE(iParam0, false)));
}

bool func_568(int* iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			*uParam3 = { iParam0->f_14[iParam1 /*21*/].f_1 };
			return true;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { iParam0->f_99[iParam1 /*20*/] };
			return true;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { iParam0->f_500[iParam1 /*13*/] };
			return true;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1089[iParam1 /*14*/] };
			return true;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { iParam0->f_761[iParam1 /*13*/] };
			return true;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { iParam0->f_892[iParam1 /*13*/] };
			return true;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1023[iParam1 /*13*/] };
			return true;
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1104[iParam1 /*15*/] };
			return true;
		default:
			break;
	}
	return false;
}

bool func_569(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1104[iParam1 /*15*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1104[iParam1 /*15*/].f_1;
			}
			break;
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_14[iParam1 /*21*/].f_1.f_2;
			}
			else
			{
				*iParam4 = iParam0->f_14[iParam1 /*21*/].f_1.f_1;
			}
			break;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_99[iParam1 /*20*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_99[iParam1 /*20*/].f_1;
			}
			break;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_500[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_500[iParam1 /*13*/].f_1;
			}
			break;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_761[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_761[iParam1 /*13*/].f_1;
			}
			break;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_892[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_892[iParam1 /*13*/].f_1;
			}
			break;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1023[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1023[iParam1 /*13*/].f_1;
			}
			break;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1089[iParam1 /*14*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1089[iParam1 /*14*/].f_1;
			}
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam4);
}

int func_570(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

struct<4> func_571()
{
	struct<4> Var0;

	return Var0;
}

char* func_572(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CS_PEDSTARTEND_WEAP_CURRENT";
		case 1:
			return "MC_CS_PEDSTARTEND_WEAP_HOLSTER";
		case 2:
			return "MC_CS_PEDSTARTEND_WEAP_UNHOLSTER";
		case 3:
			return "MC_CS_PEDSTARTEND_WEAP_BEST";
		case 4:
			return "MC_CS_PEDSTARTEND_WEAP_WORST";
		case 5:
			return "MC_CS_PEDSTARTEND_WEAP_SPECIFIC";
		case 6:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_BOW";
		case 7:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_FISHINGROD";
		case 8:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_HEAVY";
		case 9:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_HELD";
		case 10:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_LASSO";
		case 11:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_MELEE";
		case 12:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_PETROLCAN";
		case 13:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_PISTOL";
		case 14:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_REPEATER";
		case 15:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_REVOLVER";
		case 16:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_RIFLE";
		case 17:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_SHOTGUN";
		case 18:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_SNIPER";
		case 19:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_THROWN";
		case 20:
			return "MC_CS_PEDSTARTEND_WEAP_BEST_ONEHANDED";
		case 21:
			return "MC_CS_PEDSTARTEND_WEAP_REMOVE_WEAPONS";
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

bool func_573(int iParam0, var uParam1)
{
	bool bVar0;

	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - Waiting for ped to be ready to render");
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1903910230, 0);
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("WRIST_BINDINGS")))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - Removing WRIST_BINDINGS");
			PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("WRIST_BINDINGS"), 1);
			bVar0 = true;
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - No WRIST_BINDINGS to remove");
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("ANKLE_BINDINGS")))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - Removing ANKLE_BINDINGS");
			PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("ANKLE_BINDINGS"), 1);
			bVar0 = true;
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - No ANKLE_BINDINGS to remove");
		}
		if (func_97(uParam1->f_6, 2))
		{
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("MASKS")))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - Removing mask from ped");
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("MASKS"), 1);
				bVar0 = true;
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - No mask to remove");
			}
		}
		if (func_97(uParam1->f_6, 3))
		{
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("HATS")))
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - Removing hat from ped");
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
				bVar0 = true;
			}
			else
			{
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - No hat to remove");
			}
		}
		if (bVar0)
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - Updating Meta Ped");
			PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			return false;
		}
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_MODIFY_PED_OUTFIT - Outfit modification complete");
		return true;
	}
	return false;
}

void func_574(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

int func_575(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - train does not exist");
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
	if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - train entity is not a train");
		return 1;
	}
	if (bParam1 == 0)
	{
		DEBUG::_0xEF256AE8A5A27966(160, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - Invalid eTrain: ", func_656(bParam1, 0));
		return 1;
	}
	iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		bVar5 = VEHICLE::_0x3C9628A811CBD724(iVar1);
		iVar6 = VEHICLE::_CREATE_MISSION_TRAIN(bParam1, vVar2, bVar5, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - Failed to create train");
			return 1;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_467(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar7 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		iVar8 = VEHICLE::_0x635423D55CA84FC8(bParam1);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			iVar10 = VEHICLE::GET_TRAIN_CARRIAGE(iVar7, iVar9);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iVar10))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iVar10, true);
				func_467(iVar10, 1);
				DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - Hiding carriage: ", iVar9);
			}
			iVar9++;
		}
		if (VEHICLE::_0xBD3C4A2ED509205E(iVar7))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_ENTITY - COMPLETE!");
			return 1;
		}
	}
	return 0;
}

int func_576(var uParam0, int iParam1)
{
	struct<6> Var0;
	int iVar13;
	vector3 vVar14;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;

	Var0.f_5 = -1082130432;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - does not exist");
		return 1;
	}
	iVar13 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar14 = { ENTITY::GET_ENTITY_COORDS(iVar13, true, false) };
	vVar14.f_1 = (vVar14.y + 100f);
	fVar17 = ENTITY::GET_ENTITY_HEADING(iVar13);
	if (VEHICLE::_IS_DRAFT_VEHICLE(iVar13) && !VEHICLE::_0xA19447D83294E29F(iVar13, &iVar18, &iVar19))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Original Draft Vehicle Horses not spawned yet, waiting");
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar20 = ENTITY::GET_ENTITY_MODEL(iVar13);
		iVar21 = VEHICLE::CREATE_VEHICLE(iVar20, vVar14, fVar17, false, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Failed to create vehicle clone");
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar21, vVar14, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar21, fVar17);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar21, true);
		VEHICLE::_SET_VEHICLE_TINT(iVar21, VEHICLE::_GET_VEHICLE_TINT(iVar13));
		VEHICLE::COPY_VEHICLE_DAMAGES(iVar13, iVar21);
		func_234(iParam1, *uParam0, 1135537454, &uVar22, &uVar23, &iVar24);
		if (iVar24 != 0)
		{
			PROPSET::_0xD80FAF919A2E56EA(iVar21, iVar24);
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Add prop set 1: ", iVar24);
		}
		func_467(iVar21, 1);
		uParam0->f_2 = iVar21;
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Cloned Main vehicle (drafts may be yet to spawn)");
	}
	if (!VEHICLE::_IS_DRAFT_VEHICLE(iVar13))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Successfully Cloned VEHICLE(not a draft)");
		return 1;
	}
	else if (!func_97(uParam0->f_4, 2))
	{
		iVar25 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		bVar26 = true;
		if (!VEHICLE::_0xA19447D83294E29F(iVar25, &iVar18, &iVar19))
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Waiting for clone draft peds to spawn, GET_DRAFT_ANIMAL_COUNT is returning FALSE");
			bVar26 = false;
		}
		else if (iVar19 < iVar18)
		{
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Waiting for clone draft peds to spawn, iActual ", iVar19, " < iExpected ", iVar18);
			bVar26 = false;
		}
		else
		{
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Clone draft peds all spawned, iActual ", iVar19);
		}
		iVar27 = 0;
		while (iVar27 < 6)
		{
			iVar28 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar25, iVar27);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar28))
			{
				DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Clone draft ped in harness ", func_657(iVar27, 0), " does not exist");
			}
			else
			{
				if (ENTITY::IS_ENTITY_VISIBLE(iVar28))
				{
					func_467(iVar28, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar28, true);
				}
				iVar29 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar13, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar29) || PED::IS_PED_INJURED(iVar29))
				{
					DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Original draft ped in harness ", func_657(iVar27, 0), " does not exist / is injured, move on");
				}
				else if (!PED::_0xA0BC8FAED8CFEB3C(iVar29))
				{
					DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Waiting for original draft ped in harness ", func_657(iVar27, 0), " to be ready to render");
					bVar26 = false;
				}
				else if (!PED::_0xA0BC8FAED8CFEB3C(iVar28))
				{
					DEBUG::_0xEF256AE8A5A27966(672, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Waiting for clone draft ped in harness ", func_657(iVar27, 0), " to be ready to render");
					bVar26 = false;
				}
				else
				{
					iVar30 = (18 + iVar27);
					if (!MISC::IS_BIT_SET(uParam0->f_4, iVar30))
					{
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Cloning original draft ped to clone draft ped in harness ", func_657(iVar27, 0));
						PED::CLONE_PED_TO_TARGET(iVar29, iVar28);
						MISC::SET_BIT(&(uParam0->f_4), iVar30);
					}
					if (!func_573(iVar28, &Var0))
					{
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Waiting to modify outfit on clone draft ped in harness ", func_657(iVar27, 0));
						bVar26 = false;
					}
				}
			}
			iVar27++;
		}
		if (bVar26)
		{
			iVar27 = 0;
			while (iVar27 < 6)
			{
				iVar31 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar25, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar31))
				{
				}
				else
				{
					iVar32 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar13, iVar27);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar32) || PED::IS_PED_INJURED(iVar32))
					{
						DEBUG::_0xEF256AE8A5A27966(160, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Deleting extraneous DRAFT VEHICLE HORSE - iHarnessIdx: ", func_657(iVar27, 0));
						func_658(&iVar31);
					}
				}
				iVar27++;
			}
			DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_VEHICLE - Successfully Cloned VEHICLE (drafts all spawned!)");
			func_28(&(uParam0->f_4), 2);
			return 1;
		}
	}
	return 0;
}

int func_577(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 1, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_OBJECT - does not exist");
		return 1;
	}
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
		iVar6 = OBJECT::CREATE_OBJECT(iVar5, vVar1, false, false, true, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_OBJECT - OriginalIdx: ", *uParam0, " Failed to create clone object");
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, fVar4);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_467(iVar6, 1);
		uParam0->f_2 = iVar6;
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "[MC][CUTSCENE] MC_CUTSCENE_CLONE_OBJECT - OriginalIdx: ", *uParam0, " Successfully Cloned OBJECT");
	}
	return 1;
}

char* func_578(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TRI_PENDING";
		case 1:
			return "TRI_TRUE";
		case 2:
			return "TRI_FALSE";
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

void func_579(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_638(Global_33) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "TELEPORT_ENTITY: tryin to move player but he's in middle of teleport");
	}
	if (func_381(iParam0))
	{
		if (func_659(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
			DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "TELEPORT_ENTITY: trying to teleport a hitched horse...unhitching this but you shouldn't be doing this");
		}
	}
	if (func_660(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_579(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_579(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_660(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
			DEBUG::_0xF0783374333FD8CE(40, 0, "TELEPORT_ENTITY: trying to teleport a ped with attachments, clearing peds tasks immediately...may conflict with TELEPORT_KEEP_TASK...ped name: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam0)));
		}
	}
	if (func_660(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_660(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_660(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_660(iParam5, 129))
	{
		if (func_660(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &sVar5))
			{
				vParam1.f_2 = sVar5;
				DEBUG::_0xF0783374333FD8CE(24, 0, "TELEPORT_ENTITY: water height is: ", sVar5);
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "TELEPORT_ENTITY: couldn't find water height");
			}
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iParam0, vParam1, fParam4, func_660(iParam5, 32), true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_660(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_660(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_381(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_660(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_33 && !func_660(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				DEBUG::_0xF0783374333FD8CE(8, 0, "TELEPORT_ENTITY: moving the player and reseting gameplay cam while screen isn't faded out");
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

char* func_580(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_ENTITYVALID";
		case 1:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_NOTPRESENTONSTART";
		case 2:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_VEHICLEDRAFTSCLONED";
		case 3:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_MPGVO1_INT_HACKENABLED";
		case 4:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_MPGVO1_INT_HACKHDTEX";
		case 5:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_REMOVEDCONFLICTINGTAGS";
		case 6:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEFRONTLEFTWHEEL";
		case 7:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEFRONTRIGHTWHEEL";
		case 8:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEBACKLEFTWHEEL";
		case 9:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEBACKRIGHTWHEEL";
		case 10:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEFRONTLEFTWHEELCLONE";
		case 11:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEFRONTRIGHTWHEELCLONE";
		case 12:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEBACKLEFTWHEELCLONE";
		case 13:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_BROKEBACKRIGHTWHEELCLONE";
		case 14:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_OUTFITPRELOADING";
		case 15:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_OUTFITREFRESHCLONESHOPITEMS";
		case 16:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_OUTFITCHANGED";
		case 17:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_OUTFITCHANGEDCLONE";
		case 18:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_DRAFTHARNESSCHECKED0";
		case 19:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_DRAFTHARNESSCHECKED1";
		case 20:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_DRAFTHARNESSCHECKED2";
		case 21:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_DRAFTHARNESSCHECKED3";
		case 22:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_DRAFTHARNESSCHECKED4";
		case 23:
			return "MC_CUTSCENE_LOCAL_ENTITY_BITS_DRAFTHARNESSCHECKED5";
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

bool func_581()
{
	return (Global_1915867.f_20637 || Global_1915867.f_22504.f_1);
}

char* func_582(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "ST_INVALID";
		case 0:
			return "ST_FIRST";
		case 1:
			return "ST_INCREMENT";
		case 2:
			return "ST_POST_OFFICE";
		case 3:
			return "ST_GENERAL";
		case 4:
			return "ST_FENCE";
		case 5:
			return "ST_HORSE_FENCE";
		case 6:
			return "ST_GUNSMITH";
		case 7:
			return "ST_TAILOR";
		case 8:
			return "ST_BARBER";
		case 9:
			return "ST_HORSE_SHOP";
		case 10:
			return "ST_BUTCHER";
		case 11:
			return "ST_DYNAMIC";
		case 12:
			return "ST_BANK";
		case 13:
			return "ST_DONATE";
		case 14:
			return "ST_BAIT";
		case 15:
			return "ST_TRAPPER";
		case 16:
			return "ST_PEARSON";
		case 17:
			return "ST_HOTEL";
		case 18:
			return "ST_PHOTO_STUDIO";
		case 19:
			return "ST_WEAPON_MOD_STORE";
		case 20:
			return "ST_CLOTHING";
		case 21:
			return "SHOP_LAST_SP_SHOP_TYPE";
		case 22:
			return "ST_QUARTERMASTER";
		case 23:
			return "ST_HORSE_TRAINER";
		case 24:
			return "ST_BLACKSMITH";
		case 25:
			return "ST_BOUNTYHUNTING_MP_RETURN";
		case 26:
			return "ST_COACH";
		case 27:
			return "ST_WILDERNESS_SUPPLIES";
		case 28:
			return "ST_CAMP_LOCKBOX";
		case 29:
			return "ST_CAMP_BUTCHERTABLE";
		case 30:
			return "ST_BARTENDER";
		case 31:
			return "ST_PIANIST";
		case 32:
			return "ST_MUSICIAN";
		case 33:
			return "ST_MOONSHINE_STILL";
		case 34:
			return "ST_HANDHELD";
		case 35:
			return "ST_HONOR_MP";
		case 36:
			return "ST_THEATER_MP";
		case 37:
			return "ST_MOONSHINE_PROPERTY";
		case 38:
			return "ST_TRAVELLING_SALESMAN";
		case 39:
			return "ST_HARRIET";
		case 40:
			return "NUM_SHOP_TYPES";
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

char* func_583(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_GET_OBJECT_CUTSCENE_HANDLE: object does not exist");
		return "";
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_661(bVar0);
}

char* func_584(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_GET_VEHICLE_CUTSCENE_HANDLE: vehicle does not exist");
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("CANOE"):
			return "CANOE";
		case joaat("WAGON02X"):
			return "WAGON02X";
		case joaat("WAGON04X"):
			return "WAGON04X";
		case joaat("WAGON05X"):
			return "WAGON05X";
		case joaat("CHUCKWAGON000X"):
			return "CHUCKWAGON000X";
		case joaat("WAGONCIRCUS02X"):
			return "WAGONCIRCUS02X";
		case joaat("COACH2"):
			return "COACH2";
		case joaat("PRIVATECOALCAR01X"):
			return "PRIVATECOALCAR01X";
		case joaat("NORTHPASSENGER01X"):
			return "NORTHPASSENGER01X";
		case joaat("PRIVATESTEAMER01X"):
			return "PRIVATESTEAMER01X";
		case joaat("PRIVATEDINING01X"):
			return "PRIVATEDINING01X";
		case joaat("UTILLIWAG"):
			return "UTILLIWAG";
		case joaat("SKIFF"):
			return "SKIFF";
		case joaat("HANDCART"):
			return "HANDCART";
		case joaat("ROWBOATSWAMP"):
			return "ROWBOATSWAMP";
		case joaat("ROWBOATSWAMP02"):
			return "ROWBOATSWAMP02";
	}
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_GET_VEHICLE_CUTSCENE_HANDLE: entity does not have a linked label, need to update this function for model: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam0)));
	return "";
}

bool func_585(int iParam0)
{
	return iParam0 != 0;
}

bool func_586(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_587(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(168, 145, "REGISTER_USE_CONTEXT_FRONTEND - (", sParam0, ")");
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Cannot register a context with an invalid control!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_586(iVar0, 2))
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
		func_662(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, bParam4, iParam5, bParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_FRONTEND - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_588(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_540(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_PROMPT_TYPE - Cannot set an entity for an invalid context!");
		return;
	}
	iVar0 = func_632(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1952230[iVar0 /*23*/].f_3, iParam1);
}

float func_589(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_540(iParam0))
	{
		return 0f;
	}
	iVar0 = func_632(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1952230[iVar0 /*23*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1952230[iVar0 /*23*/].f_3);
}

bool func_590(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_540(iParam0))
	{
		return false;
	}
	iVar0 = func_632(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		if (Global_1952230[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1952230[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1952230[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1952230[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1952230[iVar0 /*23*/].f_18) * (1f - Global_1952230[iVar0 /*23*/].f_22)));
			DEBUG::_0x1B08D1EB9D8C4931(559272, 162, "USE_CONTEXT_HAS_METERED_CONTEXT_FILLED - fProgress = ", MISC::_0x2B6846401D68E563(Global_1952230[iVar0 /*23*/].f_22, 4), ", iAutoFillTime = ", Global_1952230[iVar0 /*23*/].f_18, ", iTimeRemaining = ", iVar4, ", iTimeElapsed = ", iVar3, ", iCurrentTime = ", iVar1);
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1952230[iVar0 /*23*/].f_21 = iVar1;
			Global_1952230[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1952230[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1952230[iVar0 /*23*/].f_3);
}

bool func_591(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_296(uParam0) };
	Var8 = { func_360(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

bool func_592(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939645.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939645[iVar0 /*16*/].f_10)))
		{
			func_663(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_593(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_296(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_208, sParam1);
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_RELEASE_PLAYLISTS: releasing unused playlist - ", sParam1);
	}
}

void func_594(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_595(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_596(bool bParam0)
{
	DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Func Start");
	if (-1829635046 == func_664(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: WARDROBE_MASK Hash Up");
		if (func_665(bParam0))
		{
			DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found Item: ", func_527(*bParam0, 0));
			return true;
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found no item even though the wearable state was found");
	}
	else if (func_666(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, bParam0) || func_668(func_667(1742327865), -1303648999))
	{
		DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: WARDROBE_BIG_MASK Hash Up");
		if (func_665(bParam0))
		{
			DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found Big mask item: ", func_527(*bParam0, 0));
			return true;
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: Found no big mask item even though the wearable state was found");
	}
	DEBUG::_0x4DC69742196F818A(8, 208, "BANDANA__SUPPORT_EXTERNAL__IS_PLAYER_FACE_HIDDEN: No item found");
	return false;
}

bool func_597(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_598(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_669(bParam0, iParam1, bParam2, bParam3);
}

void func_599(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Received ", iParam0, " Health tanks.");
	if (iParam0 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Why are you trying to fill 0 Health Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_670(2);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - BEFORE FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Refilling ", iParam0, " Health Tanks ");
	func_671(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - Total Health Reserves # ", PED::_0x16F2C8C084AB2092(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY CUR HP: ", ENTITY::GET_ENTITY_HEALTH(iVar0));
	DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_REFILL_PLAYER_HEALTH_TANKS - AFTER FILL - ENTITY MAX HP: ", ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, true));
}

void func_600(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	DEBUG::_0xF0783374333FD8CE(136, 84, "RPG_GLOBAL_REFILL_PLAYER_STAMINA_TANKS - Received ", iParam0, " Health tanks.");
	if (iParam0 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_REFILL_PLAYER_STAMINA_TANKS - Why are you trying to fill 0 Stamina Tanks? That doesn't seem right..");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_672(2);
	func_673(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_601(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	DEBUG::_0xF0783374333FD8CE(8, 0, "RELOAD_PLAYERS_GUNS");
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar3, false, iVar4, true))
		{
			if (func_617(bVar3) && WEAPON::_0x705BE297EEBDB95D(bVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bVar3) < WEAPON::_GET_WEAPON_CLIP_SIZE(bVar3) * 4)
					{
						DEBUG::_0xF0783374333FD8CE(2216, 0, "RELOAD_PLAYERS_GUNS - [AMMO Recieved],[", UNK_0x4379B6FA65D55295(bVar3), "],", (WEAPON::_GET_WEAPON_CLIP_SIZE(bVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_33, bVar3))), "[RELOAD_PLAYERS_GUNS]");
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bVar3), (WEAPON::_GET_WEAPON_CLIP_SIZE(bVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_33, bVar3))), 752097756);
					}
				}
				DEBUG::_0xF0783374333FD8CE(680, 0, "RELOAD_PLAYERS_GUNS: reloading weapon: ", func_674(bVar3), " with a clip size of ", " using GET_WEAPON_CLIP_SIZE(eWeapon): ", WEAPON::_GET_WEAPON_CLIP_SIZE(bVar3));
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bVar3);
				if (iVar0 > WEAPON::_GET_WEAPON_CLIP_SIZE(bVar3))
				{
					iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					DEBUG::_0xF0783374333FD8CE(136, 0, "RELOAD_PLAYERS_GUNS: setting ammo in clip to ", iVar1, " current ammo is ", iVar0);
					WEAPON::SET_AMMO_IN_CLIP(Global_33, bVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
}

void func_602()
{
	bool bVar0;

	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM");
	bVar0 = func_616(Global_33, 9, 1, 0);
	if (func_617(bVar0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM: player already has rifle in rifle slot - ", func_527(bVar0, 0));
		return;
	}
	bVar0 = func_616(Global_33, 7, 1, 0);
	if (func_617(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bVar0, true, 8, false, false);
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM: sending bow to horse");
	}
	bVar0 = func_616(Global_33, 0, 1, 0);
	if (func_617(bVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bVar0, true, 9, false, false);
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM: putting primary weapon in rifle slot - ", func_527(bVar0, 0));
		return;
	}
	bVar0 = func_616(Global_33, 1, 1, 0);
	if (func_617(bVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bVar0, true, 9, false, false);
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM: putting secondary weapon in rifle slot - ", func_527(bVar0, 0));
		return;
	}
	bVar0 = func_616(Global_33, 18, 1, 0);
	if (func_617(bVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bVar0, true, 9, false, false);
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM: putting shoulder slinger weapon in rifle slot - ", func_527(bVar0, 0));
		return;
	}
	bVar0 = func_675();
	if (func_617(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, true))
		{
			func_676(Global_33, bVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bVar0, true, 9, false, false);
		}
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM: putting last longarm, excluding sniper and shotguns, in rifle slot - ", func_527(bVar0, 0));
		return;
	}
	bVar0 = func_677(3072, 0);
	if (func_617(bVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, true))
		{
			func_676(Global_33, bVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bVar0, true, 9, false, false);
		}
		DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_ENTER_EQUIP_PLAYER_LONGARM: putting best longarm, excluding sniper and shotguns, in rifle slot - ", func_527(bVar0, 0));
	}
}

int func_603()
{
	return Global_1903188.f_379;
}

int func_604(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_450(*uParam0, 0f, 0f, 0f))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "FIND_GROUND_INTERSECTION_FROM_WORLD_COORDS: vProbe is <<0,0,0>>, returning vProbe");
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing higher coords - ", &vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &sVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing higher coords - ", &vVar4);
		}
		else
		{
			bVar2 = true;
			DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: couldn't find probe while going up");
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: probing lower coords - ", &vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &sVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
				DEBUG::_0x1B08D1EB9D8C4931(56, 0, "FIND_GROUND_INTERSECTION: lower coords down - ", &vVar4);
			}
			else
			{
				bVar3 = true;
				DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: couldn't find probe while going down");
			}
		}
	}
	else
	{
		uParam0->f_2 = sVar0;
		DEBUG::_0x1B08D1EB9D8C4931(24, 0, "FIND_GROUND_INTERSECTION: fGroundZ - ", sVar0);
		return 1;
	}
	if (bVar2 && bVar3)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 0, "FIND_GROUND_INTERSECTION: ran out of iters, returning vProbe");
		return 0;
	}
	uParam0->f_2 = sVar0;
	DEBUG::_0x1B08D1EB9D8C4931(24, 0, "FIND_GROUND_INTERSECTION: fGroundZ - ", sVar0);
	return 1;
}

void func_605(int iParam0)
{
	DEBUG::_0x1B08D1EB9D8C4931(680, 30, "PLAYER_SADDLE_SET_STATE - Setting saddle state from ", func_678(Global_38.f_285.f_3222.f_1, 0), " to ", func_678(iParam0, 0));
	Global_38.f_285.f_3222.f_1 = iParam0;
}

void func_606(int iParam0)
{
	DEBUG::_0x1B08D1EB9D8C4931(680, 30, "PLAYER_SADDLE_SET_HORSE_SLOT - Setting saddle slot from ", func_679(Global_38.f_285.f_3222, 0), " to ", func_679(iParam0, 0));
	Global_38.f_285.f_3222 = iParam0;
}

void func_607(vector3 vParam0)
{
	Global_38.f_285.f_3222.f_19 = { vParam0 };
}

var func_608()
{
	return Global_1902870;
}

void func_609(var uParam0)
{
	Global_38.f_285.f_3222.f_2 = uParam0;
}

var func_610(bool bParam0, int iParam1)
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

bool func_611()
{
	return (func_680() || func_681());
}

void func_612(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "DRUNK_CLEANUP()");
	if (bParam0)
	{
		Global_1940237.f_9 = 0f;
	}
	Global_1940237.f_8 = 0f;
	Global_1940237.f_15.f_1 = 0f;
	Global_1940237.f_15 = 0f;
	Global_1940237.f_15.f_9 = 0f;
	Global_1940237.f_15.f_8 = 0f;
	Global_1940237.f_15.f_10 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		PED::_0x06D26A96CA1BCA75(Global_33, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_33, false);
		PED::_0x406CCF555B04FAD3(Global_33, 0, 0f);
	}
	func_682(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, 26, false);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "ANIMPOSTFX:  STOP!");
		func_683();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

Vector3 func_613(var uParam0)
{
	return uParam0->f_268;
}

float func_614(var uParam0)
{
	return uParam0->f_271;
}

float func_615(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_616(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_617(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

bool func_618(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_IS_ENTITY_ADDED: entity does not exist");
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_619(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "WT_INVALID";
		case joaat("WEAPON_UNARMED"):
			return "WT_UNARMED";
		case joaat("GROUP_PISTOL"):
			return "WT_PISTOL";
		case joaat("GROUP_REVOLVER"):
			return "WT_REVOLVER";
		case joaat("GROUP_RIFLE"):
			return "WT_RIFLE";
		case joaat("GROUP_REPEATER"):
			return "WT_ASSAULTRIFLE";
		case joaat("GROUP_SHOTGUN"):
			return "WT_SHOTGUN";
		case joaat("GROUP_SNIPER"):
			return "WT_SNIPERRIFLE";
		default:
			return WEAPON::_GET_WEAPON_NAME(bParam0);
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get name of an unknown weapon ", bParam0);
	return "WT_INVALID";
}

int func_620(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -358215195)
	{
		Var0 = { func_684(bParam1, 1, 0) };
		bParam3 = func_685(Var0.f_4);
		if (bParam3 == -358215195)
		{
			DEBUG::_0x83407B92D46F25C3(40, 208, "[METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT] Failed to find meta type for slot: ", func_686(Var0.f_4, 0));
			return 0;
		}
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT] Inventory Item: ", UNK_0x4379B6FA65D55295(bParam1), " meta component: ", func_687(bParam3, 0));
	if (!func_689(bParam1, bParam2, func_688(bParam3, 1), bParam4, 1, 0, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT] Failed to equip component: ", UNK_0x4379B6FA65D55295(bParam1), " | RETURN FALSE");
		return 0;
	}
	func_690(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_691(bParam1, 0))
		{
			func_692(Global_1953612.f_1694.f_1[func_688(bParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_692(bParam1, 1, 0);
		}
	}
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != Global_1953612.f_83[func_688(bParam3, 1) /*12*/])
			{
				func_621(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_645(32768))
			{
				func_693();
				func_621(21, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_694(bParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_695(&iVar5, 4);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "METAPED_PLAYER_COMPONENTS_EQUIP_AND_SAVE_COMPONENT - ped update suppressed");
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_621(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_621(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_621(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_647(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_696(Var0);
}

bool func_622(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1953612.f_2862.f_1 <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_TRIGGERED_ACTIONS] Function was called when we don't have any hide actions | EXIT");
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar2 = func_697(iVar0, 1);
		if (func_698(bVar2, 2))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_TRIGGERED_ACTIONS] ", func_687(bVar2, 0), " is already hidden | RELOOP");
		}
		else
		{
			if (Global_1953612.f_2862.f_3[iVar0] == 0)
			{
				if (!func_698(bVar2, 256))
				{
					DEBUG::_0x1B08D1EB9D8C4931(168, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_TRIGGERED_ACTIONS] ", func_687(bVar2, 0), " should be visible | RELOOP");
				}
				else
				{
					Jump @183; //curOff = 147
					DEBUG::_0x1B08D1EB9D8C4931(40, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_TRIGGERED_ACTIONS] Hiding: ", func_687(bVar2, 0));
					func_699(bVar2, 2, 6);
					iVar1++;
					if (bParam0 && func_700(iVar0) == -1)
					{
						func_701(iVar0, 0);
						func_702(&(Global_1953612.f_2956.f_2[(Global_1953612.f_2956 - 1) /*2*/]), 2, 6);
					}
				}
				iVar0++;
				if (iVar1 > 0)
				{
					DEBUG::_0xA308F935BDECCEC0(136, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_TRIGGERED_ACTIONS] ", iVar1, " components were hidden!");
					return true;
				}
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_TRIGGERED_ACTIONS] No more components were hidden!");
				return false;
			}
		}
	}
}

void func_623(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] Starting...");
	Global_1953612.f_925 = 0;
	if (bParam3 == -1 && bParam6)
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] We're applying all assets, going to reset the ped!");
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (bParam7)
		{
			func_703(iParam1, &(Global_1953612.f_4), Global_1953612.f_3558, Global_1957252.f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_645(32768) && func_698(1108822547, 8)) && func_643(10, bParam3))
	{
		func_704(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1953612.f_592)
	{
		bVar2 = Global_1953612.f_552[iVar1];
		iVar0 = func_688(bVar2, 1);
		if (func_698(bVar2, 8))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] Bypassing: ", func_687(bVar2, 0), " as it has been marked to be bypassed | RELOOP");
		}
		else if (Global_1953612.f_83[iVar0 /*12*/].f_1 <= 0 || Global_1953612.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING"))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] Bypassing: ", func_687(bVar2, 0), " as it does not have a component tag setup for it | RELOOP");
		}
		else if (uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!func_643(iVar0, bParam3))
		{
			DEBUG::_0xA308F935BDECCEC0(168, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] Bypassing: ", func_687(bVar2, 0), " as it is not flagged to be applied | RELOOP");
		}
		else if ((func_698(bVar2, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/]) || uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
		{
			if (!func_698(bVar2, 1) || bParam2)
			{
				Global_1953612.f_925++;
				if (!bParam6)
				{
					DEBUG::_0xA308F935BDECCEC0(168, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED][", func_687(bVar2, 0), "] Removing | RELOOP");
					func_644(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
				{
					Global_1953612.f_2783[iVar0 /*2*/].f_1 = 289238755;
				}
				func_699(bVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_2783[iVar0 /*2*/]) && uParam0->f_1[iVar0 /*3*/].f_1 == Global_1953612.f_2783[iVar0 /*2*/].f_1)
				{
					DEBUG::_0x1B08D1EB9D8C4931(43688, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] Bypassing: ", func_687(bVar2, 0), " as it is the same as our previous data which is: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]), " with state: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/].f_1), " | RELOOP");
				}
				else
				{
					func_644(iParam1, iVar0, 1);
					Global_1953612.f_2783[iVar0 /*2*/] = uParam0->f_1[iVar0 /*3*/];
					Global_1953612.f_2783[iVar0 /*2*/].f_1 = uParam0->f_1[iVar0 /*3*/].f_1;
					if (func_698(bVar2, 1))
					{
						func_705(bVar2, 1, 6);
					}
					Global_1953612.f_925++;
					func_706(&(uParam0->f_1[iVar0 /*3*/]), iParam1, Global_1953612.f_2862.f_54[iVar0], bVar2);
				}
				iVar1++;
				if (Global_1953612.f_925 <= 0)
				{
					DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] Nothing has changed here | why are we calling this | EXIT");
					return;
				}
				if (bParam4)
				{
					PED::_0xAAB86462966168CE(iParam1, true);
					PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
				}
				DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_COMPONENTS_TO_PED] ...Ending");
			}
		}
	}
}

void func_624(var uParam0)
{
	struct<8> Var0;

	uParam0->f_217 = { Var0 };
}

void func_625(var uParam0)
{
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	func_707(&(uParam0->f_263), 4194304);
	DEBUG::_0xF0783374333FD8CE(8, 109, "CUTSCENE_CLEAR_ORIGIN");
}

void func_626(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_225[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

void func_627()
{
	Global_1913655 = 1;
}

void func_628(bool bParam0)
{
	Global_1940296.f_19 = !bParam0;
}

bool func_629(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_COMPONENTS_CLEAR_HIDE_ACTION] Attempting to clear hide action: ", UNK_0x4379B6FA65D55295(bParam0));
	if (Global_1953612.f_2862.f_1 <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__METAPED_PLAYER_COMPONENTS_CLEAR_HIDE_ACTION] Player doesn't have any hide actions active on them | RETURN FALSE");
		return false;
	}
	if (bParam0 == 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[__METAPED_PLAYER_COMPONENTS_CLEAR_HIDE_ACTION] Clearing all hide actions!");
		Global_1953612.f_2862.f_2 = 0;
		Global_1953612.f_2862.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1953612.f_2862.f_43[iVar0 /*2*/] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1953612.f_2862.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_529(bParam0);
	if (iVar0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[__METAPED_PLAYER_COMPONENTS_CLEAR_HIDE_ACTION] Failed to find hide action: ", UNK_0x4379B6FA65D55295(bParam0));
		return false;
	}
	Global_1953612.f_2862.f_2 = (Global_1953612.f_2862.f_2 - (Global_1953612.f_2862.f_2 && Global_1953612.f_2862.f_43[iVar0 /*2*/].f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_708(iVar1, Global_1953612.f_2862.f_43[iVar0 /*2*/].f_1))
		{
			func_709(iVar1, Global_1953612.f_2862.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1953612.f_2862.f_1 = (Global_1953612.f_2862.f_1 - 1);
	DEBUG::_0xA308F935BDECCEC0(35464, 208, "[__METAPED_PLAYER_COMPONENTS_CLEAR_HIDE_ACTION] Moving[", Global_1953612.f_2862.f_1, "] - ", UNK_0x4379B6FA65D55295(Global_1953612.f_2862.f_43[Global_1953612.f_2862.f_1 /*2*/]), " to [", iVar0, "] ");
	Global_1953612.f_2862.f_43[iVar0 /*2*/] = { Global_1953612.f_2862.f_43[Global_1953612.f_2862.f_1 /*2*/] };
	Global_1953612.f_2862.f_43[Global_1953612.f_2862.f_1 /*2*/].f_1 = 0;
	Global_1953612.f_2862.f_43[Global_1953612.f_2862.f_1 /*2*/] = 0;
	return true;
}

int func_630(bool bParam0)
{
	bool bVar0;
	struct<4> Var1;

	Var1 = -961687407;
	if (func_33() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = bParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_SYSTEM_TAG_INFO_FROM_HIDE_ACTION] Failed to find Hide Action: ", UNK_0x4379B6FA65D55295(bParam0), " | RETURN FALSE");
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var1, -624749060))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_SYSTEM_TAG_INFO_FROM_HIDE_ACTION] Failed to get meta_tag | RETURN FALSE");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(168, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_SYSTEM_TAG_INFO_FROM_HIDE_ACTION] Found meta_tag entry: ", UNK_0x4379B6FA65D55295(bVar0), " hash: ", bVar0);
	return func_710(bVar0);
}

bool func_631(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar2 = func_697(iVar0, 1);
		if (!func_698(bVar2, 258))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_CLEARED_ACTIONS] ", func_687(bVar2, 0), " is not hidden | RELOOP");
		}
		else if (Global_1953612.f_2862.f_3[iVar0] != 0)
		{
			DEBUG::_0x1B08D1EB9D8C4931(2728, 208, "[METAPED_PLAYER_COMPONENTS_HIDE_ACTION_HANDLE_CLEARED_ACTIONS] ", func_687(bVar2, 0), " still has something hiding it | set flags: ", func_42(Global_1953612.f_2862.f_3[iVar0]), " | RELOOP");
		}
		else
		{
			if (bParam1)
			{
				func_701(iVar0, 0);
				func_702(&(Global_1953612.f_2956.f_2[(Global_1953612.f_2956 - 1) /*2*/]), 1, 6);
			}
			if (Global_1953612.f_2862.f_54[iVar0] != 0)
			{
				if (bVar2 == -1197751823)
				{
					*bParam0 |= 262144;
				}
			}
			func_705(bVar2, 259, 6);
			Global_1953612.f_2862.f_54[iVar0] = 0;
			Global_1953612.f_2783[iVar0 /*2*/] = 0;
			Global_1953612.f_2783[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_632(int iParam0)
{
	return iParam0;
}

void func_633(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 - (Global_1952230[iParam0 /*23*/].f_1 && iParam1));
}

void func_634(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_586(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_635(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_636(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

void func_637(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_711(iParam0))
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

int func_638(int iParam0)
{
	return iParam0;
}

bool func_639(var uParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	int iVar0;

	if (bParam2 == 1378879298)
	{
		if (!func_712(uParam0, bParam2))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_PLAYER_COMPONENTS_FILLOUT_OUTFIT_DATA] Something failed about dynamic outfit setup!");
			return false;
		}
	}
	else if (!func_713(uParam0, iParam3, bParam2) && !func_651(uParam0, bParam2, uParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_PLAYER_COMPONENTS_FILLOUT_OUTFIT_DATA] Something failed about filling out the outfit!");
		return false;
	}
	iVar0 = 10;
	if (func_645(32768) && iParam6 == 0)
	{
		if (!*uParam1 || (*uParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/]))
		{
			func_714(1108822547);
		}
		else
		{
			func_715(1108822547);
		}
	}
	if (bParam5)
	{
		func_716(2);
	}
	return true;
}

char* func_640(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2125499975:
			return "MPC_PLAYER_TYPE_SP_ARTHUR";
		case -449205311:
			return "MPC_PLAYER_TYPE_SP_ARTHUR_SICK";
		case 0:
			return "MPC_PLAYER_TYPE_INVALID";
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return "MPC_PLAYER_TYPE_MP_FEMALE";
		case 1160113249:
			return "MPC_PLAYER_TYPE_SP_MARSTON";
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return "MPC_PLAYER_TYPE_MP_MALE";
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

void func_641(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	iVar4 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENT_SETUP_PLAYER_CLONE_PERSISTENT_DATA] Shop item count: ", iVar4);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		bVar1 = PED::_GET_PED_COMPONENT_AT_INDEX(iParam0, iVar0, true, &uVar3, &uVar2);
		switch (func_526(bVar1))
		{
			case -1961188419:
				uParam1->f_1[0 /*3*/] = bVar1;
				break;
			case 1033860813:
				uParam1->f_1[26 /*3*/] = bVar1;
				break;
			case 1589583617:
				uParam1->f_1[27 /*3*/] = bVar1;
				break;
			case 153430294:
				uParam1->f_1[28 /*3*/] = bVar1;
				break;
			case -130218241:
			case 629735563:
				uParam1->f_1[8 /*3*/] = bVar1;
				break;
			case -709696437:
			case -702721097:
				uParam1->f_1[9 /*3*/] = bVar1;
				break;
			case -1839668642:
			case -1415811768:
				uParam1->f_1[1 /*3*/] = bVar1;
				break;
			case -986397773:
				uParam1->f_1[2 /*3*/] = bVar1;
				break;
			case -1674363638:
				uParam1->f_1[3 /*3*/] = bVar1;
				break;
			case 231148558:
				uParam1->f_1[4 /*3*/] = bVar1;
				break;
			default:
				Jump @291; //curOff = 267
				DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENT_SETUP_PLAYER_CLONE_PERSISTENT_DATA] Found Item: ", UNK_0x4379B6FA65D55295(bVar1));
				iVar0++;
			}
		}

void func_642(bool bParam0, int iParam1)
{
	if (Global_1953612.f_3054 >= 156)
	{
		DEBUG::_0x83407B92D46F25C3(8, 208, "[__PRELOAD_PLAYER_CLONE_SHOP_ITEM] Exceeded the preload shop item limit of: ", 156);
		return;
	}
	Global_1953612.f_3054.f_1[Global_1953612.f_3054 /*2*/].f_1 = PED::_0xF6D9E1F3560CBF8E(iParam1, bParam0, 0, 1, 0);
	Global_1953612.f_3054.f_1[Global_1953612.f_3054 /*2*/] = 1;
	Global_1953612.f_3054++;
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__PRELOAD_PLAYER_CLONE_SHOP_ITEM] Preloading: ", UNK_0x4379B6FA65D55295(bParam0));
}

bool func_643(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953612.f_83[iParam0 /*12*/].f_10 && bParam1) != 0;
}

void func_644(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0x1B08D1EB9D8C4931(168, 208, "[__METAPED_PLAYER_COMPONENTS__REMOVE_COMPONENT] Removing Component: ", func_687(func_697(iParam1, 1), 0), " index: ", iParam1);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1953612.f_83[iParam1 /*12*/].f_1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 208, "[__METAPED_PLAYER_COMPONENTS__REMOVE_COMPONENT] REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY: ", UNK_0x4379B6FA65D55295(Global_1953612.f_83[iParam1 /*12*/].f_3[iVar0]));
			PED::_0xDF631E4BCE1B1FC4(iParam0, Global_1953612.f_83[iParam1 /*12*/].f_3[iVar0], 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1953612.f_83[iParam1 /*12*/].f_1)
		{
			DEBUG::_0x1B08D1EB9D8C4931(40, 208, "[__METAPED_PLAYER_COMPONENTS__REMOVE_COMPONENT] REMOVE_TAG_FROM_META_PED: ", UNK_0x4379B6FA65D55295(Global_1953612.f_83[iParam1 /*12*/].f_3[iVar0]));
			PED::_SET_PED_COMPONENT_DISABLED(iParam0, Global_1953612.f_83[iParam1 /*12*/].f_3[iVar0], 0);
			iVar0++;
		}
	}
}

bool func_645(int iParam0)
{
	return (Global_1953612 && iParam0) != 0;
}

void func_646(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1953612.f_1694;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1953612.f_1694.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_647(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_SET_FLAG] Setting: ", func_717(iParam0, 0));
	Global_1953612 = (Global_1953612 || iParam0);
}

bool func_648(var uParam0)
{
	struct<4> Var0;

	Var0 = func_718(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	return DATAFILE::_0xED4413CEE1BF142C(&Var0);
}

void func_649(int iParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_OVERRIDE_PLAYER_COMPONENTS_RESET_PLAYER] Resetting Outfit...");
	UNK_0x355E72323AEE83CC(208, 6);
	if (!func_645(32))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_OVERRIDE_PLAYER_COMPONENTS_RESET_PLAYER] No override outfit is present | EXIT");
		return;
	}
	func_621(33, Global_1139844.f_4787.f_4, 0, 0, 0);
	func_719(32);
	func_693();
	Global_1139844.f_4787.f_4 = 0;
	Global_1139844.f_4787 = 0;
	func_652(&(Global_1953612.f_2384));
	func_650(&(Global_1953612.f_2384));
	func_720(4);
	if (bParam1)
	{
		func_721(iParam0, 1, 1, 0);
	}
	func_621(27, 0, 131074, 0, 0);
	func_621(34, 0, 131072, 0, 0);
}

void func_650(var uParam0)
{
	int iVar0;

	Global_1953612.f_1575 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953612.f_1575.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_651(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<4> Var5;
	int iVar12;

	iVar12 = 0;
	Var5 = func_718(iParam6);
	Var5.f_1 = bParam1;
	Var5.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var5);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2216, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to get first row of the outfit: ", UNK_0x4379B6FA65D55295(bParam1), " hash: ", bParam1, " | RETURN FALSE");
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var5, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_722(uParam0, func_710(bVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_723(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, -1212855483))
		{
			iVar12 = func_710(bVar0);
		}
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		iVar4++;
		if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 1409451727))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(136, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to find component_type for clothing item entry[", iVar4, "] | RELOOP");
		}
		else
		{
			bVar3 = bVar0;
			iVar1 = func_688(bVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] eMetaType is invalid: ", func_687(func_697(iVar1, 1), 0), " | Index: ", iVar1, " | RELOOP");
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, joaat("COMPONENT")))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(136, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to find component for clothing item entry[", iVar4, "] | RELOOP");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(2728, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Assigning: ", UNK_0x4379B6FA65D55295(bVar0), " to [", func_687(func_697(iVar1, 1), 0), "]");
				uParam0->f_1[iVar1 /*3*/] = bVar0;
				if (bVar2)
				{
					func_699(bVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @579; //curOff = 453
						if (!DATAFILE::_0x44B3A36933AC009C(&bVar0, &Var5, 1194786549))
						{
							DEBUG::_0x1B08D1EB9D8C4931(168, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Failed to find wearable state for: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1 /*3*/]), " | RELOOP");
							if (func_724(bVar3) && func_725(uParam0->f_1[iVar1 /*3*/], bVar3, &bVar0))
							{
								DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Meta Type: ", func_687(bVar3, 0), " has default wearable state: ", UNK_0x4379B6FA65D55295(bVar0));
								uParam0->f_1[iVar1 /*3*/].f_1 = bVar0;
							}
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] with wearable state: ", UNK_0x4379B6FA65D55295(bVar0));
							uParam0->f_1[iVar1 /*3*/].f_1 = bVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_727(uParam0, iVar12, func_726(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1953612.f_83[iVar1 /*12*/]) && func_726(uParam0->f_1[34 /*3*/]) == 0) && !func_645(32)) && !func_645(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_729(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_OUTFIT_DATA] Dynamically selected a shirt: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1 /*3*/]), " for outfit: ", UNK_0x4379B6FA65D55295(bParam1));
						func_730(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_652(var uParam0)
{
	int iVar0;

	Global_1953612.f_1694 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953612.f_1694.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

char* func_653(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ET_NONE";
		case 1:
			return "ET_PED";
		case 2:
			return "ET_VEHICLE";
		case 3:
			return "ET_OBJECT";
		case 4:
			return "ET_DUMMY_OBJECT";
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

void func_654(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	iVar1 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam1);
	if (iVar0 == 0 || iVar1 == 0)
	{
		DEBUG::_0xEF256AE8A5A27966(544, 227, 7, "COPY_INVENTORY_WEAPONS_TO_PED - Invalid inventory id! - iInventory: ", iVar0, " - iInventoryClone: ", iVar1);
		return;
	}
	if (!INVENTORY::_0x886DFD3E185C8A89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
		DEBUG::_0xEF256AE8A5A27966(32, 227, 7, "COPY_INVENTORY_WEAPONS_TO_PED - INVENTORY_GET_GUID_FROM_ITEMID failed!");
	}
	INVENTORY::_0xC04F47D488EF9EBA(iVar0, iVar1, &uVar2, 0);
}

char* func_655(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WEAPON_ATTACH_POINT_HAND_PRIMARY";
		case 1:
			return "WEAPON_ATTACH_POINT_HAND_SECONDARY";
		case 2:
			return "WEAPON_ATTACH_POINT_PISTOL_R";
		case 3:
			return "WEAPON_ATTACH_POINT_PISTOL_L";
		case 4:
			return "WEAPON_ATTACH_POINT_KNIFE";
		case 5:
			return "WEAPON_ATTACH_POINT_LASSO";
		case 6:
			return "WEAPON_ATTACH_POINT_THROWER";
		case 7:
			return "WEAPON_ATTACH_POINT_BOW";
		case 8:
			return "WEAPON_ATTACH_POINT_BOW_ALTERNATE";
		case 9:
			return "WEAPON_ATTACH_POINT_RIFLE";
		case 10:
			return "WEAPON_ATTACH_POINT_RIFLE_ALTERNATE";
		case 11:
			return "WEAPON_ATTACH_POINT_LANTERN";
		case 12:
			return "WEAPON_ATTACH_POINT_TEMP_LANTERN";
		case 13:
			return "WEAPON_ATTACH_POINT_MELEE";
		case 14:
			return "WEAPON_ATTACH_POINT_HIP";
		case 15:
			return "WEAPON_ATTACH_POINT_BOOT";
		case 16:
			return "WEAPON_ATTACH_POINT_BACK";
		case 17:
			return "WEAPON_ATTACH_POINT_FRONT";
		case 18:
			return "WEAPON_ATTACH_POINT_SHOULDERSLING";
		case 19:
			return "WEAPON_ATTACH_POINT_LEFTBREAST";
		case 20:
			return "WEAPON_ATTACH_POINT_RIGHTBREAST";
		case 21:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT";
		case 22:
			return "WEAPON_ATTACH_POINT_RIGHTARMPIT";
		case 23:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_RIFLE";
		case 24:
			return "WEAPON_ATTACH_POINT_SATCHEL";
		case 25:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_BOW";
		case 26:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_EXTRA";
		case 27:
			return "WEAPON_ATTACH_POINT_LEFT_HAND_EXTRA";
		case 28:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_AUX";
		case 29:
			return "MAX_WEAPON_ATTACH_POINTS";
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

var func_656(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1599294664);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_657(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "DRAFT_HARNESS_LR";
		case 1:
			return "DRAFT_HARNESS_RR";
		case 2:
			return "DRAFT_HARNESS_LM";
		case 3:
			return "DRAFT_HARNESS_RM";
		case 4:
			return "DRAFT_HARNESS_LF";
		case 5:
			return "DRAFT_HARNESS_RF";
		case 6:
			return "DRAFT_HARNESS_COUNT";
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

void func_658(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "DELETE_PED_SAFE() : unable to delete ped because the ped is owned by the persistence system");
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 0, "DELETE_PED_SAFE() : unable to delete ped because the script : ", UNK_0x8F77B33B6A34D8BA(), " doesn't have ownership of it");
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

bool func_659(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "IS_HORSE_USING_HITCHING_POST_SCENARIO - Horse doesn't exist");
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "IS_HORSE_USING_HITCHING_POST_SCENARIO - Horse is dead or injured");
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_660(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_661(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case joaat("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case joaat("P_DOOR01X"):
			return "P_DOOR01X";
		case joaat("P_DOOR03X"):
			return "P_DOOR03X";
		case joaat("P_DOOR12X"):
			return "p_door12x";
		case joaat("P_DOOR13X"):
			return "P_DOOR13X";
		case joaat("P_DOOR45X"):
			return "p_door45x";
		case joaat("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case joaat("P_CRATE03X"):
			return "p_crate03x";
		case joaat("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case joaat("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case joaat("P_DOOR37X"):
			return "P_DOOR37X";
		case joaat("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case joaat("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case joaat("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case joaat("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case joaat("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case joaat("P_DOORNBD39X"):
			return "p_doornbd39x";
		case joaat("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case joaat("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case joaat("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case joaat("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case joaat("P_PEBBLE01X"):
			return "p_pebble01x";
		case joaat("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case joaat("P_CARDS01X"):
			return "P_CARDS01X";
		case joaat("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case joaat("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case joaat("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case joaat("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case joaat("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case joaat("P_RAG02X"):
			return "p_rag02x";
		case joaat("P_MAGNETO02X"):
			return "p_magneto02x";
		case joaat("P_MAGNETO01X"):
			return "p_magneto01x";
		case joaat("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case joaat("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("P_PEN01X"):
			return "p_pen01x";
		case joaat("P_CS_LETTER01A_X"):
			return "p_cs_letter01a_x";
		case joaat("P_CS_ELECTRICCHAIR01X"):
			return "p_cs_electricchair01x";
		case joaat("P_CS_GENERATOR01X"):
			return "p_cs_generator01x";
		case joaat("P_CS_ELECTRICHELMET01X"):
			return "p_cs_electricHelmet01x";
		case joaat("P_CS_GAG01X"):
			return "p_cs_gag01x";
		case joaat("P_DOOR_SHA_MAN01X"):
			return "p_door_sha_man01x";
		case joaat("P_STOOL01X"):
			return "p_stool01x";
		case joaat("P_STOOL02X"):
			return "p_stool02x";
		case joaat("P_JUGGLINGBALL01X"):
			return "p_jugglingball01x";
		case joaat("P_CHAIR02X"):
			return "p_chair02x";
		case joaat("P_CHAIR04X"):
			return "p_chair04x";
		case joaat("P_CRATE15X"):
			return "p_crate15x";
		case joaat("P_CLEAVER01X"):
			return "p_cleaver01x";
		case joaat("P_BOTTLE003X"):
			return "p_bottle003x";
		case joaat("P_CS_BOOK02X"):
			return "p_cs_book02x";
		case joaat("P_STICKYDYMT_SINGLE"):
			return "p_stickydymt_single";
		case joaat("P_CS_FUSEDYNAMITE01X"):
			return "p_cs_fusedynamite01x";
		case joaat("P_DYNAMITE01X"):
			return "p_dynamite01x";
		case joaat("P_CS_FUSESPOOL01X"):
			return "p_cs_fusespool01x";
		case joaat("P_CS_DETONATOR01X"):
			return "p_cs_detonator01x";
		case joaat("P_CS_BEDROLLCLSD01X"):
			return "p_cs_bedrollclsd01x";
		case joaat("P_CIGARETTE_CS01X"):
			return "P_CIGARETTE_CS01X";
		case joaat("P_MATCHES01X"):
			return "P_MATCHES01X";
		case joaat("P_MATCHSTICK01X"):
			return "P_MATCHSTICK01X";
		case joaat("P_WOODENCHAIR01X"):
			return "P_WOODENCHAIR01X";
		case joaat("P_CHAIR_CRATE02X"):
			return "P_CHAIR_CRATE02X";
		case joaat("P_KNITTINGNEEDLE01X"):
			return "p_knittingneedle01x";
		case joaat("P_KNITTINGSQUARE01X"):
			return "p_knittingsquare01x";
		case joaat("P_CS_RABBITMEAT01X"):
			return "p_cs_rabbitMeat01x";
		case joaat("P_CS_RABBITMEAT02X"):
			return "p_cs_rabbitMeat02x";
		case joaat("P_BOTTLE03X"):
			return "p_bottle03x";
		case joaat("P_CS_BILLSTACK01X"):
			return "p_cs_billstack01x";
		case joaat("P_CS_BILLSINGLE01X"):
			return "p_cs_billSingle01x";
		case joaat("P_BINOCULARS01X"):
			return "p_binoculars01x";
		case joaat("P_DOORRHOSHERIFF02X"):
			return "p_doorrhosheriff02x";
		case joaat("P_BARSTOOL01X"):
			return "P_BARSTOOL01X";
		case joaat("P_CS_SHOTGLASS01X"):
			return "p_cs_shotglass01x";
		case joaat("P_LAMP18X"):
			return "p_lamp18x";
		case joaat("P_CLOCK06X"):
			return "p_clock06x";
		case joaat("P_BOTTLE02X"):
			return "p_bottle02x";
		case joaat("P_CS_LOOTSACK01X"):
			return "p_cs_lootSack01x";
		case joaat("P_WINEBOX01X"):
			return "p_wineBox01x";
		case joaat("P_STRONGBOX01X"):
			return "p_strongBox01x";
		case joaat("P_CLOCKTABLE02X"):
			return "P_CLOCKTABLE02X";
		case joaat("P_GEN_STATUE03B"):
			return "p_gen_statue03b";
		case joaat("P_STOOLWINTER01X"):
			return "P_STOOLWINTER01X";
		case joaat("P_CS_BARRAG01X"):
			return "P_CS_BARRAG01X";
		case joaat("P_PLATE01X"):
			return "P_PLATE01X";
		case joaat("P_KNIFE01X"):
			return "P_KNIFE01X";
		case joaat("P_KNIFE02X"):
			return "P_KNIFE02X";
		case joaat("P_CS_CATFISH_WHOLE01X"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("P_CS_CATFISH_WHOLE01BX"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("P_WOODWHITTLE01X"):
			return "P_WOODWHITTLE01X";
		case joaat("P_STICKFIREPOKER01X"):
			return "P_STICKFIREPOKER01X";
		case joaat("P_CS_WOODPILE01X"):
			return "P_CS_WOODPILE01X";
		case joaat("P_FORK01X"):
			return "P_FORK01X";
		case joaat("P_KNIFE04X"):
			return "P_KNIFE04X";
		case joaat("P_KNIFE03X"):
			return "p_knife03x";
		case joaat("P_CS_BOTTLESLIM01X"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("P_CS_BLANKET01X"):
			return "P_CS_BLANKET01X";
		case joaat("P_BEDROLLCLOSED01X"):
			return "P_BEDROLLCLOSED01X";
		case joaat("P_CS_KINDLING01X"):
			return "P_CS_KINDLING01X";
		case joaat("P_CIGARTHIN01X"):
			return "P_CIGARTHIN01X";
		case joaat("P_DOOR_WGLASS01X"):
			return "p_door_wglass01x";
		case joaat("P_BROOM02X"):
			return "p_broom02x";
		case joaat("P_AMB_CLIPBOARD_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("P_CHAIR07X"):
			return "P_CHAIR07X";
		case joaat("P_CS_CRATETNT01X"):
			return "p_cs_cratetnt01x";
		case joaat("P_CS_FLOURBAG01X"):
			return "p_cs_flourbag01x";
		case joaat("P_CS_SUPPLIES01X"):
			return "p_cs_supplies01x";
		case joaat("P_CS_SUPPLIES02X"):
			return "p_cs_supplies02x";
		case joaat("P_CS_SUPPLIES03X"):
			return "p_cs_supplies03x";
		case joaat("P_DOOR04X"):
			return "p_door04x";
		case joaat("P_DOOR11X"):
			return "p_door11x";
		case joaat("P_DOORRHOSALOON01_L"):
			return "p_doorrhosaloon01_l";
		case joaat("P_DOORRHOSALOON01_R"):
			return "p_doorrhosaloon01_r";
		case joaat("P_VAL_GATE2M02X"):
			return "P_VAL_GATE2M02X";
		case joaat("P_CS_STMDNKY01X"):
			return "P_CS_STMDNKY01X";
		case joaat("P_CS_HOOKPULLEY01X"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("P_CHAIR_CS05X"):
			return "P_CHAIR_CS05X";
		case joaat("P_CHAIR18X"):
			return "P_CHAIR_18X";
		case joaat("P_CHAIR19X"):
			return "P_CHAIR19X";
		case joaat("P_CHAIR20X"):
			return "P_CHAIR20X";
		case joaat("P_CHAIR05X"):
			return "P_CHAIR05X";
		case joaat("P_CHAIR22X"):
			return "p_chair22x";
		case joaat("P_GLASS01X"):
			return "p_glass01x";
		case joaat("P_DININGCHAIRS01X"):
			return "P_DININGCHAIRS01X";
		case joaat("P_WINDSORCHAIR03X"):
			return "P_WINDSORCHAIR03X";
		case joaat("P_WINDSORCHAIR02X"):
			return "P_WINDSORCHAIR02X";
		case joaat("P_DOOR_VAL_JAIL02X"):
			return "p_door_val_jail02x";
		case joaat("P_CRATETNT01X"):
			return "P_CRATETNT01X";
		case joaat("P_CRATETNT02X"):
			return "P_CRATETNT02X";
		case joaat("P_MONEYSTACK01X"):
			return "P_MONEYSTACK01X";
		case joaat("P_AXE01X"):
			return "P_AXE01X";
		case joaat("P_HOE01X"):
			return "P_HOE01X";
		case joaat("P_SHOVEL01X"):
			return "P_SHOVEL01X";
		case joaat("P_SHOVEL04X"):
			return "P_SHOVEL04X";
		case joaat("P_BROOM01X"):
			return "P_BROOM01X";
		case joaat("P_PITCHFORK01X"):
			return "P_PITCHFORK01X";
		case joaat("P_SCYTHE01X"):
			return "P_SCYTHE01X";
		case joaat("P_SKIFF02X"):
			return "P_SKIFF02x";
		case joaat("P_DOOR_NBX_DOC01X_L"):
			return "p_door_nbx_doc01x_l";
		case joaat("P_DOOR_NBX_DOC01X_R"):
			return "p_door_nbx_doc01x_r";
		case joaat("P_CS_CAMERA"):
			return "p_cs_camera";
		case joaat("P_CS_CAMERATRIPOD"):
			return "p_cs_cameratripod";
		case joaat("P_CS_CAMERABAG01X"):
			return "p_cs_camerabag01x";
		case joaat("P_CAMERAFLASH01X"):
			return "p_cameraflash01x";
		case joaat("P_CS_SHUTTERRELEASE"):
			return "p_cs_shutterrelease";
		case joaat("ROWBOATSWAMP"):
			return "rowboatswamp";
		case joaat("P_CHAIR25X"):
			return "P_CHAIR25X";
		case joaat("P_DOORBRAIT01BX"):
			return "P_DOORBRAIT01BX";
		case joaat("P_CS_MAP01X"):
			return "P_CS_MAP01X";
		case joaat("P_HAMMER03X"):
			return "p_hammer03x";
		case joaat("P_CS_NAILBARREL01X"):
			return "p_cs_nailbarrel01x";
		case joaat("P_CS_BOOK04X"):
			return "p_cs_book04x";
		case joaat("P_CS_FAN01X"):
			return "p_cs_Fan01x";
		case joaat("P_CS_LEDGERSMALL01X"):
			return "p_cs_ledgerSmall01x";
		case joaat("P_CS_ENVELOPE01X"):
			return "p_cs_envelope01x";
		case joaat("P_WRAPPEDMEAT01X"):
			return "p_wrappedmeat01x";
		case joaat("P_CS_LETTER02X"):
			return "P_CS_LETTER02X";
		case joaat("P_CS_BOOK03X"):
			return "p_cs_book03x";
		case joaat("P_CS_GIFTBOX01X"):
			return "p_cs_giftBox01x";
		case joaat("P_BOILER01X"):
			return "p_boiler01x";
		case joaat("P_BOILER02X"):
			return "p_boiler02x";
		case joaat("P_MUGCOFFEE01X"):
			return "p_mugCoffee01x";
		case joaat("P_GLASSTALLBEER01X"):
			return "p_glasstallbeer01x";
		case joaat("P_PITCHER02X"):
			return "p_pitcher02x";
		case joaat("P_TRAY03X"):
			return "p_tray03x";
		case joaat("P_SIT_CHAIRWICKER01B"):
			return "p_sit_chairwicker01b";
		case joaat("S_INV_ORLEANDER01CX"):
			return "S_INV_ORLEANDER01CX";
		case joaat("S_INV_ORLEANDER01DX"):
			return "S_INV_ORLEANDER01DX";
		case joaat("P_LADLE02X"):
			return "P_LADLE02X";
		case joaat("P_CS_POT01X"):
			return "P_CS_POT01X";
		case joaat("P_CHAIRDINING03X"):
			return "P_CHAIRDINING03X";
		case joaat("P_SPOON01X"):
			return "P_SPOON01X";
		case joaat("P_BOWL03X"):
			return "P_BOWL03X";
		case joaat("P_CS_BRIDECATALOGUE01X"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("P_JEWELRYBOX02BX"):
			return "P_JEWELRYBOX02BX";
		case joaat("P_CS_LETTERFOLDED01X"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("P_CS_ARTHURHAT01X"):
			return "P_CS_ARTHURHAT01X";
		case joaat("P_OAR03X"):
			return "P_OAR03X";
		case joaat("P_DOOR_VAL_BANKVAULT"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("P_DOOR_COMBANK01X"):
			return "P_DOOR_COMBANK01X";
		case joaat("P_CS_DONATION01X"):
			return "P_CS_DONATION01X";
		case joaat("P_DOOR_NBX_BANK03X_R"):
			return "p_door_nbx_bank03x_R";
		case joaat("P_DOOR_NBX_BANK03X_L"):
			return "p_door_nbx_bank03x_L";
		case joaat("P_CAMP_PLATE_02X"):
			return "p_camp_plate_02x";
		case joaat("P_STEWPLATE02X"):
			return "p_stewplate02x";
		case joaat("P_CS_LOG01X"):
			return "p_cs_log01x";
		case joaat("P_NDB_HOTELPLANK01X"):
			return "p_ndb_hotelplank01x";
		case joaat("P_GLASS06X"):
			return "p_glass06x";
		case joaat("P_CS_RAG01X"):
			return "p_cs_rag01x";
		case joaat("P_INKWELL01X"):
			return "p_inkwell01x";
		case joaat("P_CIGAR02X"):
			return "p_cigar02x";
		case joaat("P_BOTTLEBEER01X"):
			return "p_bottleBeer01x";
		case joaat("P_BEERMUGGLASS01X"):
			return "p_beermugglass01x";
		case joaat("P_NUTBOWL01X"):
			return "p_nutBowl01x";
		case joaat("P_CS_SACKLARGE01X"):
			return "p_cs_sacklarge01x";
		case joaat("P_CS_DRESSBOX01X"):
			return "p_cs_dressbox01x";
		case joaat("P_BELL05X"):
			return "p_bell05x";
		case joaat("P_WOODENDESKCHAIR01X"):
			return "p_woodendeskchair01x";
		case joaat("P_CHAIR06X"):
			return "p_chair06x";
		case joaat("P_JUG01X"):
			return "p_jug01x";
		case joaat("S_INV_MEDICINE01X"):
			return "S_INV_MEDICINE01X";
		case joaat("S_INV_MEDICINE_FTY"):
			return "S_INV_MEDICINE_FTY";
		case joaat("S_INV_MILKWEED01BX"):
			return "S_INV_Milkweed01bx";
		case joaat("P_BOTTLESLIM01X"):
			return "p_bottleslim01x";
		case joaat("P_CS_JOURNAL01X"):
			return "p_cs_journal01x";
		case joaat("P_MORTARPESTLE02X"):
			return "p_mortarpestle02x";
		case joaat("S_INV_BURDOCK01DX"):
			return "s_inv_burdock01dx";
		case joaat("P_CS_ROPELEGSPLIT"):
			return "p_cs_ropeLegSplit";
		case joaat("P_CS_ROPEHANDSSPLIT"):
			return "p_cs_ropeHandsSplit";
		case joaat("P_FISHINGPOLE01X"):
			return "p_fishingpole01x";
		case joaat("P_FISHINGPOLE02X"):
			return "P_FISHINGPOLE02X";
		case joaat("P_CS_FLOWERNECKLACE"):
			return "p_cs_flowernecklace";
		case joaat("P_CS_FLOWERS01X"):
			return "P_CS_FLOWERS01X";
		case joaat("S_INV_YARROW01CX"):
			return "s_inv_yarrow01cx";
		case joaat("P_CS_FISHINGPOLEBAG01X"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("P_STICK02X"):
			return "P_STICK02X";
		case joaat("P_CS_SOCK01X"):
			return "P_CS_SOCK01X";
		case joaat("P_DOOR_VAL_BANK00_RX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_DOOR_VAL_BANK00_LX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_CAN10X"):
			return "p_can10x";
		case joaat("P_CS_RABBITGUT"):
			return "p_cs_rabbitgut";
		case joaat("P_CS_RABBITHEADLESS"):
			return "p_cs_rabbitheadless";
		case joaat("P_CS_RABBITFEETLESS"):
			return "p_cs_rabbitfeetless";
		case joaat("P_KETTLE03X"):
			return "p_kettle03x";
		case joaat("S_CHE_WOODBIN01X"):
			return "s_che_woodbin01x";
		case joaat("S_LOOTABLEPOORCASE"):
			return "s_lootablepoorcase";
		case joaat("P_CS_BOOKHARDCV01X"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("P_LETTERBUNDLE_01X"):
			return "P_LETTERBUNDLE_01X";
		case joaat("P_LETTERENVELOPE_CS01X"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("P_PACKAGE08X"):
			return "P_PACKAGE08X";
		case joaat("P_CIGARBOX02X"):
			return "P_CIGARBOX02X";
		case joaat("P_CRUCIFIX02X"):
			return "p_crucifix02x";
		case joaat("P_BOTTLECRATE01X"):
			return "p_bottleCrate01x";
		case joaat("P_CAN05X"):
			return "p_can05x";
		case joaat("P_CS_SUITCASE04X"):
			return "p_cs_suitcase04x";
		case joaat("P_CS_BAGSTRAUSS01X"):
			return "p_cs_bagstrauss01x";
		case joaat("P_BOTTLE008X"):
			return "P_BOTTLE008X";
		case joaat("P_BOTTLE009X"):
			return "P_BOTTLE009X";
		case joaat("P_BOTTLE010X"):
			return "P_BOTTLE010X";
		case joaat("P_POCKETMIRROR01X"):
			return "p_pocketMirror01x";
		case joaat("P_CIGARETTE01X"):
			return "P_CIGARETTE01X";
		case joaat("P_TRAVELTRUNK02X"):
			return "P_TRAVELTRUNK02X";
		case joaat("P_CHAIRWHITE01X"):
			return "P_CHAIRWHITE01X";
		case joaat("P_JOURNAL_OPEN01X"):
			return "P_JOURNAL_OPEN01X";
		case joaat("P_TABLE42_CS"):
			return "p_table42_cs";
		case joaat("P_CS_NEWSPAPER_02X"):
			return "p_cs_newspaper_02x";
		case joaat("P_CS_POTATOSLICE01X"):
			return "P_CS_POTATOSLICE01X";
		case joaat("S_APLSD_LOG"):
			return "S_APLSD_LOG";
		case joaat("S_APLSD_HRSATT"):
			return "S_APLSD_HRSATT";
		case joaat("P_SPITTOON01X"):
			return "p_spittoon01x";
		case joaat("P_WOODBOWL01X"):
			return "p_woodbowl01x";
		case joaat("P_PENCIL01X"):
			return "p_pencil01x";
		case joaat("P_SPOONMID01X"):
			return "P_SPOONMID01X";
		case joaat("P_PAN01X"):
			return "P_PAN01X";
		case joaat("P_PIPE01X"):
			return "P_Pipe01x";
		case joaat("P_CS_RAILROADBOND01X"):
			return "p_cs_railroadbond01x";
		case joaat("P_SHARPENINGSTONE01X"):
			return "p_sharpeningstone01x";
		case joaat("P_TREESTUMP02X"):
			return "p_treestump02x";
		case joaat("P_PLATE17X"):
			return "p_plate17x";
		case joaat("P_CS_NEWSPAPER_01X"):
			return "p_cs_newspaper_01x";
		case joaat("P_SADIEHAT01X"):
			return "p_sadiehat01x";
		case joaat("P_DOOR_BLA_JAIL_L_01X"):
			return "p_door_bla_jail_l_01x";
		case joaat("P_DOOR_BLA_JAIL_R_01X"):
			return "p_door_bla_jail_r_01x";
		case joaat("P_MASHEDPOTATO02X"):
			return "p_mashedPotato02x";
	}
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_GET_OBJECT_MODEL_HANDLE: couldn't find handle data for the model: ", UNK_0x1B7C373FB4E76B85(bParam0));
	return "";
}

void func_662(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	Global_1952230[iParam0 /*23*/].f_18 = bParam16;
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1952230[iParam0 /*23*/].f_3 = iVar0;
	func_634(iParam0, 1);
	func_635(iParam0, 1);
	func_636(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_731(iParam14, 0));
}

void func_663(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 106, "REMOVE_SCRIPT_AT_QUEUE_IDX: Attempting to remove a script launcher object using an invalid queue index!");
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939645[iParam0 /*16*/].f_10)))
	{
		DEBUG::_0xF0783374333FD8CE(136, 106, "REMOVE_SCRIPT_AT_QUEUE_IDX: No valid script to remove at queue index ", iParam0, "!");
		return;
	}
	Global_1939645[iParam0 /*16*/] = { Var0 };
	Global_1939645.f_161 = (Global_1939645.f_161 - 1);
	if (Global_1939645.f_161 < 0)
	{
		Global_1939645.f_161 = 0;
	}
}

int func_664(bool bParam0)
{
	int iVar0;

	iVar0 = func_688(func_732(bParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953612.f_1694.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_665(bool bParam0)
{
	if (func_666(joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */, bParam0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_CURRENT_FACE_COVER: Found Mask item: ", func_527(*bParam0, 0));
		return true;
	}
	if (func_666(joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */, bParam0))
	{
		DEBUG::_0x4DC69742196F818A(40, 208, "BANDANA__SUPPORT_EXTERNAL__GET_CURRENT_FACE_COVER: Found Big Mask item: ", func_527(*bParam0, 0));
		return true;
	}
	return false;
}

bool func_666(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_688(func_732(bParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953612.f_1694.f_1[iVar1 /*3*/] != 0 && Global_1953612.f_1694.f_1[iVar1 /*3*/] != Global_1953612.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953612.f_1694.f_1[iVar1 /*3*/];
		if (func_526(bVar0) == bParam0 || (bParam0 == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && func_668(bVar0, 160827531)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

bool func_667(bool bParam0)
{
	return Global_1953612.f_1694.f_1[func_688(bParam0, 1) /*3*/];
}

bool func_668(bool bParam0, bool bParam1)
{
	if (!func_597(bParam0, 0))
	{
		return func_734(func_733(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_735(bParam1, 0), " for item ", func_527(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

int func_669(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 208, "[__METAPED_PLAYER_COMPONENTS_HIDE_CLOTHING_WITH_ACTION] Attempting Hide Action: ", func_736(bParam0, 0));
	UNK_0x355E72323AEE83CC(208, 6);
	if (Global_1953612.f_2862.f_1 >= 5)
	{
		DEBUG::_0x83407B92D46F25C3(136, 208, "[__METAPED_PLAYER_COMPONENTS_HIDE_CLOTHING_WITH_ACTION] Reached the max number of hide actions: ", 5, " | Bailing Out!");
		return 0;
	}
	if (!func_737(bParam0, &bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[__METAPED_PLAYER_COMPONENTS_HIDE_CLOTHING_WITH_ACTION] Something failed about the hide action: ", func_736(bParam0, 0));
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	return func_517(iParam1, bVar0, bParam2, 1);
}

int func_670(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_738(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1957252.f_1546;
		case 1:
			return Global_1957252.f_1565.f_136;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(8, 84, "RPG_GLOBAL_GET_DEFAULT_TANK_SIZE_HEALTH - Invalid Pool type was passed in... returning -1. This is really bad... ");
	return -1;
}

void func_671(bool bParam0, int iParam1)
{
	if (bParam0 == 0f)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - You shouldn't be trying to change a PED's Health value by 0...");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275959.f_8;
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - No PED provided, defaulting to local player... ");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - FAILED - Can't change the Health of an Entity that does not exist... ");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_HEALTH_AMOUNT - FAILED - Can't change the Health of a dead Entity... ");
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, bParam0, 0, 0);
}

int func_672(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_738(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1957252.f_1546.f_2;
		case 1:
			return Global_1957252.f_1565.f_136.f_2;
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(8, 84, "RPG_GLOBAL_GET_DEFAULT_TANK_SIZE_STAMINA - Invalid Pool type was passed in... returning -1. This is really bad... ");
	return -1;
}

void func_673(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - You shouldn't be trying to change a PED's Stamina value by 0...");
		UNK_0x355E72323AEE83CC(84, 6);
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275959.f_8;
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - No PED provided, defaulting to local player... ");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - FAILED - Can't change the Stamina of an Entity that does not exist... ");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 84, "RPG_GLOBAL_ALTER_PED_STAMINA_AMOUNT - FAILED - Can't change the Stamina of a dead Entity... ");
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

char* func_674(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "Invalid Weapon";
		case joaat("WEAPON_UNARMED"):
			return "Unarmed";
		default:
			return HUD::_GET_LABEL_TEXT_2(func_619(bParam0));
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get display name of an unknown weapon ", bParam0);
	return "Unknown Weapon";
}

int func_675()
{
	if (!func_617(Global_1940410.f_39))
	{
		return joaat("WEAPON_UNARMED");
	}
	return Global_1940410.f_39;
}

bool func_676(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "GIVE_WEAPON_TO_PED_SAFE: ped is dead, use bIgnoreDead if you want to avoid this");
		return false;
	}
	switch (bParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			DEBUG::_0xA308F935BDECCEC0(40, 150, "GIVE_WEAPON_TO_PED_SAFE: Weapon group specified. Ped equipped with ", func_674(bVar0));
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(8, 150, "GIVE_WEAPON_TO_PED_SAFE: eWeapon is invalid, couldn't find an unlock in that group");
				bVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(bParam1))
			{
				DEBUG::_0x83407B92D46F25C3(168, 150, "GIVE_WEAPON_TO_PED_SAFE: weaponToEquip is invalid (", func_527(bParam1, 0), ")");
				return bParam1;
			}
			bVar0 = bParam1;
			DEBUG::_0xA308F935BDECCEC0(40, 150, "GIVE_WEAPON_TO_PED_SAFE: Hardcoding specific weapon. Ped equipped with ", func_674(bVar0));
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_IS_WEAPON_MELEE(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 150, "GIVE_WEAPON_TO_PED_SAFE: is a dutch gang member - ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam0)));
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26681 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					DEBUG::_0xF0783374333FD8CE(40, 150, "GIVE_WEAPON_TO_PED_SAFE: checking a _DUALWIELD variant - ", func_527(bVar0, 0));
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					DEBUG::_0xF0783374333FD8CE(40, 150, "GIVE_WEAPON_TO_PED_SAFE: checking string token  - ", &cVar5);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					DEBUG::_0xF0783374333FD8CE(40, 150, "GIVE_WEAPON_TO_PED_SAFE: checking base weapon cast  - ", func_527(bVar3, 0));
					if (func_617(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
						DEBUG::_0xF0783374333FD8CE(8, 150, "GIVE_WEAPON_TO_PED_SAFE: found existing base weapon, moving on");
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26681)
						{
							if (func_617(bVar4) && bVar4 != bVar0)
							{
								DEBUG::_0x83407B92D46F25C3(2728, 150, "GIVE_WEAPON_TO_PED_SAFE: attempting to give ", func_527(bVar0, 0), " to a companion that should be using the bespoke weapon ", func_527(bVar4, 0), " so giving that instead");
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
							DEBUG::_0x83407B92D46F25C3(168, 150, "GIVE_WEAPON_TO_PED_SAFE: attempting to give ", func_527(bVar0, 0), " to a companion while on guarma...shouldn't be using bespoke weapons here, they left them behind");
						}
					}
				}
			}
			break;
	}
	if (func_33() == -1 && !func_739(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, false) && iParam0 != Global_33)
		{
			bVar22 = true;
			DEBUG::_0xF0783374333FD8CE(40, 150, "GIVE_WEAPON_TO_PED_SAFE: weapon is locked but NPC already has it - ", func_527(bVar0, 0));
		}
		else if (((bVar4 == bVar0 && !Global_26681) && iParam0 != Global_33) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
			DEBUG::_0xF0783374333FD8CE(40, 150, "GIVE_WEAPON_TO_PED_SAFE: weapon is locked but it is one of the companion's bespoke weapons - ", func_527(bVar0, 0));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 150, "GIVE_WEAPON_TO_PED_SAFE: weapon is locked, finding another");
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			DEBUG::_0xF0783374333FD8CE(168, 150, "GIVE_WEAPON_TO_PED_SAFE: giving weapon type ", func_527(bVar0, 0), " instead.");
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(8, 150, "GIVE_WEAPON_TO_PED_SAFE: eWeapon is invalid, couldn't find an unlock in that group");
				bVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (bVar0 == joaat("WEAPON_UNARMED") && bParam1 == joaat("WEAPON_UNARMED"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 150, "GIVE_WEAPON_TO_PED_SAFE: ignoring WEAPON_UNARMED");
		return bVar0;
	}
	else if (bVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (bParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				DEBUG::_0xF0783374333FD8CE(8, 150, "GIVE_WEAPON_TO_PED_SAFE: Could not retrieve unlocked weapon from short arm weapon group. Giving cattleman");
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_739(joaat("WEAPON_REPEATER_CARBINE")))
				{
					DEBUG::_0xF0783374333FD8CE(8, 150, "GIVE_WEAPON_TO_PED_SAFE: Could not retrieve unlocked weapon from long arm weapon group. Giving carbine");
					bVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 150, "GIVE_WEAPON_TO_PED_SAFE: Could not retrieve unlocked weapon from long arm weapon group and carbine not unlocked. Giving cattleman");
					bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				DEBUG::_0x83407B92D46F25C3(8, 150, "GIVE_WEAPON_TO_PED_SAFE: Weapon type is not valid or locked. Are you trying to give a misc weapon like melee/thrown?  Giving cattleman just in case.");
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (bVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_33)
	{
		bVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
		DEBUG::_0x9A6C65DDDBEC9C52(8, 150, "GIVE_WEAPON_TO_PED_SAFE: trying to give the player WEAPON_MELEE_LANTERN so switching it to WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_33 && func_617(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(bVar0) && bVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_33)
	{
		func_740(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_741(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	DEBUG::_0x4DC69742196F818A(680, 150, "GIVE_WEAPON_TO_PED_SAFE: giving weapon: ", func_742(bVar0), " to ped: ", UNK_0x1B7C373FB4E76B85(ENTITY::GET_ENTITY_MODEL(iParam0)));
	if (iParam0 != Global_33)
	{
		if (func_743(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

bool func_677(int iParam0, int iParam1)
{
	var uVar0;

	return func_744(&uVar0, iParam0, iParam1);
}

char* func_678(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PSS_EQUIPPED";
		case 1:
			return "PSS_CARRIED";
		case 2:
			return "PSS_DROPPED";
		case 3:
			return "PSS_IN_SHOP";
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

char* func_679(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PH_SLOT_INVALID";
		case 0:
			return "PH_SLOT_PRIMARY";
		case 1:
			return "PH_SLOT_TEMPORARY";
		case 2:
			return "PH_SLOT_STABLE_1";
		case 3:
			return "PH_SLOT_STABLE_2";
		case 4:
			return "PH_SLOT_STABLE_3";
		case 5:
			return "PH_SLOT_LOST";
		case 6:
			return "PH_SLOT_PRE_TEMP";
		case 7:
			return "PH_SLOT_CURRENT";
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

bool func_680()
{
	return Global_1940237 == 1;
}

bool func_681()
{
	return Global_1940237 == 2;
}

void func_682(float fParam0)
{
}

void func_683()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1940237.f_15 = 0f;
}

struct<5> func_684(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_745(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_746(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_527(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_747(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_748(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_749(bParam1) };
			if (bParam2 && func_750(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_751(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_751(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_752(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_753(bParam1) };
			switch (func_526(bParam0))
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
			if (func_754(bParam0, -1823706425))
			{
				Var0 = { func_748(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_754(bParam0, -1483207246))
			{
				Var0 = { func_748(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_748(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_754(bParam0, -1653629781))
			{
				Var0 = { func_748(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_755(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_754(bParam0, -1653629781))
			{
				Var0 = { func_748(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_527(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_527(bParam0, 0), ": ", func_686(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

bool func_685(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953612.f_83[iVar0 /*12*/].f_9 == bParam0)
		{
			return func_697(iVar0, 1);
		}
		iVar0++;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_INVENTORY_SLOTID] Failed to find: ", func_686(bParam0, 0));
	return -358215195;
}

var func_686(bool bParam0, int iParam1)
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

char* func_687(bool bParam0, int iParam1)
{
	switch (bParam0)
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
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", bParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", bParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_688(bool bParam0, int iParam1)
{
	switch (bParam0)
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
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", bParam0, ", returning '-1'");
	}
	return -1;
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR HASH_ENUM_TO_INT_INDEX - Unknown Enum Value ", bParam0, ", returning '-1'");
	}
	return -1;
}

bool func_689(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] Setting: ", UNK_0x4379B6FA65D55295(bParam0));
	func_756();
	if (iParam2 == 39)
	{
		Var0 = { func_684(bParam0, 1, 0) };
		iParam2 = func_688(func_685(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2184, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] iMetaIndex is out of bounds: ", iParam2, " Max: ", 39, " | RETURN FALSE");
		return false;
	}
	if (func_645(32768) && iParam2 == 10)
	{
		func_714(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_691(bParam0, 1))
	{
		func_757(&(Global_1953612.f_1575), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_723(iParam2);
	}
	func_701(iParam2, iVar5);
	func_758(&(Global_1953612.f_1575.f_1[iParam2 /*3*/]), 4, 6);
	func_758(&(Global_1953612.f_1694.f_1[iParam2 /*3*/]), 4, 6);
	func_730(&(Global_1953612.f_1575), bParam0, iParam2, 1, iVar5);
	if (bParam1 == 0)
	{
		bParam1 = Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953612.f_1575.f_1[iParam2 /*3*/] = bParam0;
	Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1 = func_759(bParam0, iParam2, bParam1);
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] Component Hash: ", UNK_0x4379B6FA65D55295(bParam0));
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] Wearable State: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1575.f_1[iParam2 /*3*/].f_1));
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1953612.f_2956)
		{
			if (Global_1953612.f_2956.f_2[iVar6 /*2*/] >= 0 && Global_1953612.f_2956.f_2[iVar6 /*2*/] < 39)
			{
				Global_1953612.f_2783[Global_1953612.f_2956.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1953612.f_2783[Global_1953612.f_2956.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_705(func_697(Global_1953612.f_2956.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_COMPONENT_ITEM] ...Ending");
	return true;
}

void func_690(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	DEBUG::_0xF0783374333FD8CE(174760, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_CACHE_DATA] Transfer to Current: ", MISC::_0xF216F74101968DB0(bParam0), " Transfer to Save: ", MISC::_0xF216F74101968DB0(bParam1), " Request Save: ", MISC::_0xF216F74101968DB0(bParam2), " handle outfit switch: ", MISC::_0xF216F74101968DB0(bParam3));
	func_760(&(Global_1953612.f_2956), bParam0, bParam1, bParam2, bParam3);
}

bool func_691(bool bParam0, bool bParam1)
{
	if (!func_597(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_NONE_ITEM: attempting to process an invalid item!");
	}
	if (!bParam1 && (bParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || bParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_668(bParam0, 265372629))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_NONE_ITEM");
		return true;
	}
	return false;
}

bool func_692(bool bParam0, bool bParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	bool bVar9;

	Var4 = { func_684(bParam0, bParam2, 0) };
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS_MARK_COMPONENT_AS_EQUIPPED] Equipping Clothing Item: ", func_527(bParam0, 0), " Equipped: ", MISC::_0xF216F74101968DB0(bParam1));
	if (func_691(bParam0, 0))
	{
		bVar9 = func_761(Var4, Var4.f_4, bParam2, -1);
		if (bVar9 != 0)
		{
			Var4 = { func_684(bVar9, bParam2, 0) };
			Var0 = { func_748(bVar9, Var4, Var4.f_4, bParam2) };
			return func_762(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_748(bParam0, Var4, Var4.f_4, bParam2) };
	return func_762(Var0, bParam1, bParam2);
}

void func_693()
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__CLEAR_TEMP_HAT] Clearing temp hat");
	UNK_0x355E72323AEE83CC(208, 6);
	Global_1953612.f_3544 = 0;
	Global_1953612.f_3544.f_1 = 0;
	Global_1953612.f_3544.f_8 = 0;
	Global_1953612.f_3544.f_2 = 0;
	Global_1953612.f_3544.f_3[0] = 0;
	Global_1953612.f_3544.f_3[1] = 0;
	Global_1953612.f_3544.f_3[2] = 0;
	Global_1953612.f_3544.f_3[3] = 0;
	Global_1953612.f_3544.f_9 = 0;
	Global_1953612.f_3544.f_10 = 0;
	Global_1953612.f_3544.f_11 = 0;
	if (Global_1953612.f_3544.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1953612.f_3544.f_13);
	}
	Global_1953612.f_3544.f_12 = 0;
	func_719(32768);
	func_705(1108822547, 8, 6);
}

int func_694(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_688(bParam0, 1);
	switch (bParam0)
	{
		case 1108822547:
			if (Global_1953612.f_1694.f_1[iVar1 /*3*/] == Global_1953612.f_83[iVar1 /*12*/] || Global_1953612.f_1575.f_1[iVar1 /*3*/] == Global_1953612.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_695(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_696(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(40, 208, "PUSH_METAPED_CLOTHING_SYSTEM_REQUEST: Request Type: ", func_763(Param0, 0));
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
			if (func_764(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_918)
				{
					iVar1 = ((Global_1953612.f_923 + iVar0) % 25);
					if ((Global_1953612.f_736[iVar1 /*4*/] == Param0 && Global_1953612.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_763(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
						return;
					}
					iVar0++;
				}
			}
			func_765(Param0);
			Global_1953612.f_736[Global_1953612.f_924 /*4*/] = { Param0 };
			Global_1953612.f_918++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] No Restriction Request Type: ", func_763(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_924);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_918);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_42(Param0.f_2));
			Global_1953612.f_924 = (Global_1953612.f_924 + 1 % 25);
			func_647(8);
			break;
		case 24:
		case 25:
			if (Global_1953612.f_919 >= 25)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] sUpdateRestrictionsRequestData Size Exceeded | Attempting to Insert more than ", 25);
				return;
			}
			if (func_764(Param0))
			{
				DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_763(Param0, 0), " has already been created | BYPASSING ADD!");
				return;
			}
			func_765(Param0);
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Restriction Request Type: ", func_763(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]   Adding Request to slot: ", Global_1953612.f_919);
			Global_1953612.f_635[Global_1953612.f_919 /*4*/] = { Param0 };
			Global_1953612.f_919++;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]           New Queue Size: ", Global_1953612.f_919);
			func_647(8);
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
			if (func_764(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953612.f_920)
				{
					iVar1 = ((Global_1953612.f_921 + iVar0) % 20);
					if ((Global_1953612.f_837[iVar1 /*4*/] == Param0 && Global_1953612.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953612.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST] Request ", func_763(Param0, 0), " has already been created at index [", iVar1, "] | BYPASSING ADD!");
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
			func_765(Param0);
			Global_1953612.f_837[Global_1953612.f_922 /*4*/] = { Param0 };
			Global_1953612.f_920++;
			DEBUG::_0xF0783374333FD8CE(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]         System Request Type: ", func_763(Param0, 0));
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]      Adding Request to slot: ", Global_1953612.f_922);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]              New Queue Size: ", Global_1953612.f_920);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                Request Hash: ", Param0.f_1);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_REQUEST]                       Flags: ", func_42(Param0.f_2));
			Global_1953612.f_922 = (Global_1953612.f_922 + 1 % 20);
			func_647(8);
			break;
			break;
	}
}

bool func_697(int iParam0, int iParam1)
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

bool func_698(bool bParam0, int iParam1)
{
	return (Global_1953612.f_83[func_688(bParam0, 1) /*12*/].f_11 && iParam1) != 0;
}

void func_699(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_UNSAVED_META_FLAG] Setting[", func_687(bParam0, 0), "]: ", func_42(iParam1));
	Global_1953612.f_83[func_688(bParam0, 1) /*12*/].f_11 = (Global_1953612.f_83[func_688(bParam0, 1) /*12*/].f_11 || iParam1);
}

int func_700(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953612.f_2956)
	{
		if (Global_1953612.f_2956.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_701(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_766(&(Global_1953612.f_2956), iParam0, iParam1);
}

void func_702(var uParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENTS_CACHE_SET_FLAG] Setting ", func_687(func_697(*uParam0, 1), 0), " Flags:  ", func_42(iParam1));
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_703(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, Global_1953612.f_4[iVar0 /*2*/], (uParam1[iVar0 /*2*/])->f_1);
		iVar0++;
	}
	if (bParam2 != 0)
	{
		PED::_SET_PED_BODY_COMPONENT(iParam0, bParam2);
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_EXPRESSIONS] Applying Body Type: ", func_767(bParam2, 0));
	}
	if (bParam3 != 0)
	{
		PED::_SET_PED_BODY_COMPONENT(iParam0, bParam3);
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__APPLY_EXPRESSIONS] Applying Body Weight: ", func_767(bParam3, 0));
	}
}

void func_704(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 10;
	if (func_698(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS__HANDLE_TEMP_HAT] MP_COMPONENT_TYPE_HEADWEAR has been marked to be hidden but has yet to be hidden | Removing Component | RELOOP");
			DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_COMPONENTS__HANDLE_TEMP_HAT] Hide Action: ", MISC::_0xF216F74101968DB0(func_698(1108822547, 2)), " Peristent Hide: ", MISC::_0xF216F74101968DB0(func_698(1108822547, 4)));
			func_644(iParam0, iVar0, 0);
			func_699(1108822547, 1, 6);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS__HANDLE_TEMP_HAT] Bypassing: MP_COMPONENT_TYPE_HEADWEAR as we have marked it to be hidden | EXIT");
			return;
		}
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 208, "[METAPED_PLAYER_COMPONENTS__HANDLE_TEMP_HAT] Applying: ", UNK_0x4379B6FA65D55295(Global_1953612.f_3544.f_1));
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1953612.f_3544.f_1, Global_1953612.f_3544.f_3[0], Global_1953612.f_3544.f_3[1], Global_1953612.f_3544.f_3[2], Global_1953612.f_3544.f_8, Global_1953612.f_3544.f_9, Global_1953612.f_3544.f_10, Global_1953612.f_3544.f_11);
		func_705(1108822547, 1, 6);
	}
	Global_1953612.f_925++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

void func_705(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG] Clearing[", func_687(bParam0, 0), "]: ", func_42(iParam1));
	Global_1953612.f_83[func_688(bParam0, 1) /*12*/].f_11 = (Global_1953612.f_83[func_688(bParam0, 1) /*12*/].f_11 - (Global_1953612.f_83[func_688(bParam0, 1) /*12*/].f_11 && iParam1));
}

void func_706(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	PED::_SET_PED_COMPONENT_ENABLED(iParam1, *uParam0, false, true, false);
	if (bParam2 == 0)
	{
		bParam2 = uParam0->f_1;
	}
	if (bParam2 != 0)
	{
		PED::_0x66B957AAC2EAAEAB(iParam1, *uParam0, bParam2, 0, true, 1);
		DEBUG::_0x1B08D1EB9D8C4931(10920, 208, "[METAPED_PLAYER_COMPONENT__APPLY_COMPONENT_TO_PED][", func_687(bParam3, 0), "] Applying: ", UNK_0x4379B6FA65D55295(*uParam0), " with wearable state: ", UNK_0x4379B6FA65D55295(bParam2));
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[METAPED_PLAYER_COMPONENT__APPLY_COMPONENT_TO_PED][", func_687(bParam3, 0), "] Applying: ", UNK_0x4379B6FA65D55295(*uParam0));
	}
}

void func_707(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	DEBUG::_0xF0783374333FD8CE(40, 109, "CUTSCENE_CLEAR_ENTER_FLAG: clearing enter flag - ", func_341(iParam1, 0));
}

bool func_708(int iParam0, var uParam1)
{
	return (Global_1953612.f_2862.f_3[iParam0] && uParam1) != 0;
}

void func_709(int iParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_COMPONENTS_CLEAR_COMPONENT_HIDE_FLAG] Clearing flag: ", func_42(iParam1), " for: ", func_687(func_697(iParam0, 1), 0));
	Global_1953612.f_2862.f_3[iParam0] = (Global_1953612.f_2862.f_3[iParam0] - (Global_1953612.f_2862.f_3[iParam0] && iParam1));
}

int func_710(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case 2050534155:
			return 48;
		case -366477279:
			return 0;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_GET_TAG_INFO_FLAG_FROM_HASH] Failed to find flag for hash: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

bool func_711(int iParam0)
{
	return func_586(iParam0, 2);
}

bool func_712(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__DYNAMIC__FILLOUT_OUTFIT_DATA] fillout out dynamic outfit for: ", UNK_0x4379B6FA65D55295(bParam1));
	func_722(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	bVar2 = func_729(Global_1953612.f_83[iVar1 /*12*/].f_9, 0);
	bVar3 = func_729(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
	if (bVar2 == 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__DYNAMIC__FILLOUT_OUTFIT_DATA] Lower layer is invalid | RETURN FALSE");
		return false;
	}
	else
	{
		uParam0->f_1[iVar1 /*3*/] = bVar2;
	}
	if (bVar3 == 0)
	{
		if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__DYNAMIC__FILLOUT_OUTFIT_DATA] Upper layer is invalid and we're female | RETURN FALSE");
			return false;
		}
	}
	else
	{
		uParam0->f_1[iVar0 /*3*/] = bVar3;
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__DYNAMIC__FILLOUT_OUTFIT_DATA] Found valid outfit with lower layer: ", func_527(bVar2, 0), " and upper layer: ", func_527(bVar3, 0));
	*uParam0 = bParam1;
	return true;
}

bool func_713(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (bParam2 != 0 && func_768(iParam1) != bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(2728, 208, "[__METAPED_PLAYER_COMPONENTS_FILLOUT_CUSTOMIZED_OUTFIT] Saved outfit: ", UNK_0x4379B6FA65D55295(func_768(iParam1)), " does not match the outfit we're attempting to fillout: ", UNK_0x4379B6FA65D55295(bParam2), " | RETURN FALSE");
		return false;
	}
	if (func_769(2, iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(136, 208, "[__METAPED_PLAYER_COMPONENTS_FILLOUT_CUSTOMIZED_OUTFIT] Outfit [", iParam1, "] was customized and we're going to apply the customizations!");
		func_770(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_714(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS_SET_META_TYPE_TO_BE_BYPASSED] Marking: ", func_687(bParam0, 0), " to be bypassed!");
	UNK_0x355E72323AEE83CC(208, 6);
	func_705(bParam0, 8, 6);
}

void func_715(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS_SET_META_TYPE_TO_BE_BYPASSED] Marking: ", func_687(bParam0, 0), " to be bypassed!");
	UNK_0x355E72323AEE83CC(208, 6);
	func_699(bParam0, 8, 6);
}

void func_716(int iParam0)
{
	UNK_0x355E72323AEE83CC(208, 6);
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_SET_ITEMS_BEING_PREVIEWED] Setting preview type: ", func_771(iParam0, 0));
	Global_1953612.f_1060 = iParam0;
}

char* func_717(int iParam0, int iParam1)
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

int func_718(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_728();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

void func_719(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_CLEAR_FLAG] Clearing: ", func_717(iParam0, 0));
	Global_1953612 = (Global_1953612 - (Global_1953612 && iParam0));
}

void func_720(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_772(iVar0, iParam0))
		{
			DEBUG::_0x4DC69742196F818A(2728, 208, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG_FOR_ALL_COMPONENTS] Clearing ", func_773(iParam0, 0), " for [", func_687(func_697(iVar0, 1), 0), "]");
			func_774(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_721(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;

	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_APPLY_CURRENT_CLOTHING] Starting...");
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1953612.f_2862 != 0)
	{
		func_629(Global_1953612.f_2862);
		func_631(&uVar1, 0);
		Global_1953612.f_2862 = 0;
	}
	else if (bParam3 != 0 && func_775(bParam3))
	{
		func_622(0);
	}
	if (func_645(32768))
	{
		func_715(1108822547);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[METAPED_CLOTHING_APPLY_CURRENT_CLOTHING] Updating Player");
		func_776(Global_1953612.f_1694.f_1[1 /*3*/], -1811760631, &(Global_1953612.f_1062), &(Global_1953612.f_1062.f_9), 1);
		func_621(2, 0, iVar0, 0, 0);
		func_621(4, 0, 0, 0, 0);
		func_621(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		DEBUG::_0x1B08D1EB9D8C4931(8, 208, "[METAPED_CLOTHING_APPLY_CURRENT_CLOTHING] Updating Clone of Player");
		func_621(2, 0, iVar0, iParam0, 0);
	}
	func_777();
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_APPLY_CURRENT_CLOTHING] ...Ending");
}

void func_722(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Setting none with persistent tags of: ", func_42(bParam1));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_778(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_643(iVar0, bParam1))
			{
				vVar4 = { func_779(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953612.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					DEBUG::_0xF0783374333FD8CE(2728, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Persistent item: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]), " is not the same as our saved item: ", UNK_0x4379B6FA65D55295(func_780(iVar0, -1)), " | Transferring saved item!");
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_772(iVar0, 4))
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Clearing persistent hide flag for [", func_687(func_697(iVar0, 1), 0), "]");
					func_774(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Setting persistent hide flag for [", func_687(func_697(iVar0, 1), 0), "]");
					func_781(iVar0, 4, 6);
				}
				Jump @357; //curOff = 294
				if (bParam2)
				{
					DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENTS__SET_NONE_ON_ALL_COMPONENTS] Clearing out [", func_687(func_697(iVar0, 1), 0), "]");
					vVar1.x = Global_1953612.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_723(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Cleaning Cache");
	func_782(&(Global_1953612.f_2956), iParam0);
}

bool func_724(bool bParam0)
{
	int iVar0;
	var uVar1;

	Global_1953612.f_1046.f_2 = 0;
	iVar0 = 1226838104;
	func_783(&(Global_1953612.f_1046), iVar0, -367421157, 1409451727, 1, bParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1953612.f_1046));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1953612.f_1046), 1409451727))
	{
		DEBUG::_0xA308F935BDECCEC0(168, 185, "[METAPED_PLAYER_COMPONENTS_DOES_META_COMPONENT_SUPPORT_WEARBLE_STATES] Meta Type: ", func_687(bParam0, 0), " does not support wearable states | RELOOP");
		return false;
	}
	return true;
}

bool func_725(bool bParam0, bool bParam1, bool bParam2)
{
	*bParam2 = joaat("BASE");
	return true;
}

int func_726(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_597(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_727(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_668(uParam0->f_1[34 /*3*/], -166674229))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_HANDLE_PARTIAL_OUTFIT_POST_FILLOUT] Player is wearing an unalterable outfit | EXIT");
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_772(iVar0, 16);
		if (bVar1)
		{
			func_774(iVar0, 16, 9);
		}
		if (Global_1953612.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(168, 208, "[__METAPED_PLAYER_COMPONENTS_HANDLE_PARTIAL_OUTFIT_POST_FILLOUT] Bypassing: ", func_687(func_697(iVar0, 1), 0), " as it does not have a component tag setup for it | RELOOP");
		}
		else
		{
			if (bVar1)
			{
				func_701(iVar0, iParam3);
			}
			if (!bParam2 && func_726(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(168, 208, "[METAPED_PLAYER_COMPONENTS_REMOVE_COMPONENTS_WITH_SYSTEM_TAG] Bypassing: ", func_687(func_697(iVar0, 1), 0), " as it is tagged as a role item | RELOOP");
			}
			else if (func_643(iVar0, bParam1) && !bVar1)
			{
				DEBUG::_0x4DC69742196F818A(40, 208, "[METAPED_PLAYER_COMPONENTS_REMOVE_COMPONENTS_WITH_SYSTEM_TAG] Removing: ", func_687(func_697(iVar0, 1), 0));
				uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_730(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_701(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_730(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_728()
{
	return Global_1953612.f_1;
}

int func_729(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_784(0, -1591664384, bParam0, -1591664384, 0, 0, 0) };
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__FIND_VALID_CLOTHING_ITEM_IN_SLOT] Let's see if the player owns something in: ", func_686(bParam0, 0));
	if (func_785(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_786(iVar0, iVar1, iParam1);
		}
		func_787(iVar0);
	}
	return iVar2;
}

void func_730(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_691(bVar0, 1);
	if (bParam3 && func_668(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_788(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_697(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_789(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_790(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_791(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_792(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_793(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_794(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_795(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_796(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_797(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_798(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_799(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_800(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_801(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_802(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_803(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_804(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

char* func_731(int iParam0, int iParam1)
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

bool func_732(bool bParam0)
{
	bool bVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bParam0, 0, &bVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_PLAYER_COMPONENTS_GET_META_TYPE_FROM_CASH_INVENTORY_CATEGORY] Category does not have a fitslot? ", func_805(bParam0, 0));
		return -358215195;
	}
	return func_685(bVar0);
}

bool func_733(bool bParam0)
{
	return bParam0;
}

int func_734(bool bParam0, bool bParam1)
{
	if (!func_806(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_735(bParam1, 0), " for bundle ", func_807(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_735(bool bParam0, int iParam1)
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

char* func_736(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -2102478220:
			return "MPC_HIDE_ACTION_SHIRT_PREVIEW";
		case -1991991829:
			return "MPC_HIDE_ACTION_SATCHEL_AND_SECONDARY_HOLSTER";
		case -1788514625:
			return "MPC_HIDE_ACTION_BANDOLIER_PREVIEW";
		case -1696372134:
			return "MPC_HIDE_ACTION_PANTS_PREVIEW";
		case joaat("MPC_HIDE_ACTION_GUARMA2"):
			return "MPC_HIDE_ACTION_GUARMA2";
		case -1432398346:
			return "MPC_HIDE_ACTION_SHIRT_NONE_PREVIEW";
		case joaat("MPC_HIDE_ACTION_HAT"):
			return "MPC_HIDE_ACTION_HAT";
		case -1144282354:
			return "MPC_HIDE_ACTION_BANDANA";
		case joaat("MPC_HIDE_ACTION_GLOVES"):
			return "MPC_HIDE_ACTION_GLOVES";
		case -791774036:
			return "MPC_HIDE_ACTION_PONCHO";
		case -755366847:
			return "MPC_HIDE_ACTION_END";
		case -164864667:
			return "MPC_HIDE_ACTION_CHARACTER_CREATOR_MUGSHOT";
		case -95699201:
			return "MPC_HIDE_ACTION_MAKEUP_PREVIEW";
		case -38530791:
			return "MPC_HIDE_ACTION_BARBER_SHOP_MASK";
		case 0:
			return "MPC_HIDE_ACTION_INVALID";
		case 79540045:
			return "MPC_HIDE_ACTION_TEETH_PREVIEW";
		case 119281186:
			return "MPC_HIDE_ACTION_GAUNTLET_PREVIEW";
		case 225031420:
			return "MPC_HIDE_ACTION_VEST_PREVIEW";
		case 405946364:
			return "MPC_HIDE_ACTION_NIGHTGOWN_PREVIEW";
		case joaat("MPC_HIDE_ACTION_SATCHEL"):
			return "MPC_HIDE_ACTION_SATCHEL";
		case 527198966:
			return "MPC_HIDE_ACTION_CHARACTER_CREATOR_REROLL";
		case joaat("MPC_HIDE_ACTION_BOOTS"):
			return "MPC_HIDE_ACTION_BOOTS";
		case joaat("MPC_HIDE_ACTION_EQUIPMENT"):
			return "MPC_HIDE_ACTION_EQUIPMENT";
		case 1371427595:
			return "MPC_HIDE_ACTION_DRESS_PREVIEW";
		case 1568311761:
			return "MPC_HIDE_ACTION_JAIL";
		case 1900014401:
			return "MPC_HIDE_ACTION_SECONDARY_HOLSTER";
		case 1905845894:
			return "MPC_HIDE_ACTION_BARBER_SHOP_HAT";
		case joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"):
			return "MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", bParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", bParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_737(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	*iParam1 = func_630(bParam0);
	Var2 = -961687407;
	if (func_33() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = bParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		DEBUG::_0x83407B92D46F25C3(168, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_HIDE_DATA_WITH_HIDE_ACTION] Failed to find Hide Action: ", UNK_0x4379B6FA65D55295(bParam0), " | RETURN FALSE");
		return false;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -2008906477))
	{
		DEBUG::_0x83407B92D46F25C3(8, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_HIDE_DATA_WITH_HIDE_ACTION] Failed to get meta_type | RETURN FALSE");
		return false;
	}
	iVar1 = func_808(bParam0);
	func_809(iVar0, iVar1, iParam1);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -2008906477))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__FILLOUT_HIDE_DATA_WITH_HIDE_ACTION] Failed to get meta_type | RETURN FALSE");
		}
		else
		{
			func_809(iVar0, iVar1, iParam1);
		}
	}
	return true;
}

int func_738(int iParam0)
{
	return func_811(func_810(iParam0));
}

bool func_739(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 150, "IS_WEAPON_UNLOCKED_FOR_USE: No unlock assigned for weapon ", func_527(bParam0, 0), ".");
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_USE: Weapon is unlocked: ", func_527(bParam0, 0));
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_USE: Weapon is locked: ", func_527(bParam0, 0));
	return false;
}

int func_740(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - Tried to add an invalid weapon: ", func_527(bParam0, 0));
		return 0;
	}
	DEBUG::_0xF0783374333FD8CE(34984, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - ", func_527(bParam0, 0), ", iAmmoAmount = ", iParam1, ", bForceInHand = ", bParam2, ", bForceInHolster = ", bParam3);
	DEBUG::_0xF0783374333FD8CE(43176, 157, "  attachPoint = ", func_655(iParam4, 0), ", bAllowMultipleCopies = ", bParam5, ", eAddReason = ", func_812(iParam6, 0), ", bIgnoreUnlocks = ", bParam7);
	if (WEAPON::_IS_WEAPON_MELEE(bParam0) && iParam1 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "[ADD_WEAPON_AMMO_TO_PLAYER_INVENTORY] - Tried to add ammo to a melee weapon: ", func_527(bParam0, 0));
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_684(bParam0, 0, 1) };
		if (func_751(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_752(bParam0, &Var5, Var0.f_4))
			{
				DEBUG::_0xF0783374333FD8CE(680, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] We have removed 'worn' ", func_527(bParam0, 0), " from ", func_686(Var0.f_4, 0));
				Var27 = { func_748(bParam0, Var0, Var0.f_4, 0) };
				func_813(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_814(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			DEBUG::_0xD9911C7B5F8CD69C(42, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Failed to add ", func_527(bParam0, 0), "!");
			return 0;
		}
		func_815(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_816(bParam0, iParam1);
		DEBUG::_0xF0783374333FD8CE(168, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - GIVE_WEAPON_TO_PED for ", UNK_0x4379B6FA65D55295(bParam0), " succeeded");
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Player does not already have weapon ", func_527(bParam0, 0), " to equip, cannot directly add items in MP!");
		return 0;
	}
	if (iParam1 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Cannot directly add ammo in MP, ", iParam1, "x ammo parameter will be ignored!");
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	DEBUG::_0xF0783374333FD8CE(40, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - GIVE_WEAPON_TO_PED used on existing ", func_527(bParam0, 0));
	return 1;
}

void func_741(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
		DEBUG::_0x4DC69742196F818A(24, 150, "HANDLE_WEAPON_MODIFICATION_CHANGES_PER_MODEL: Ignored ped weapon degradation for damage, setting degradation value to ", *fParam2);
	}
}

var func_742(bool bParam0)
{
	return WEAPON::_0x6D3AC61694A791C5(bParam0);
}

bool func_743(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

bool func_744(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<5> Var4;
	bool bVar18;

	bVar0 = false;
	Var4.f_9 = -1591664384;
	bVar18 = func_817(iParam1, 128);
	DEBUG::_0xF0783374333FD8CE(40, 150, "GET_PLAYERS_BEST_LONGARM_GUID: bMustBeEquipped - ", MISC::_0xF216F74101968DB0(bVar18));
	if (func_818("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 150, "GET_PLAYERS_BEST_LONGARM_GUID: icollectsize ", iVar2);
		bVar3 = false;
		while (bVar3 < iVar2)
		{
			if (!func_819(&Var4, bVar3, iVar1, iVar2))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 150, "GET_PLAYERS_BEST_SIDEARM: failed to get item data at index ", bVar3);
			}
			else if (!func_617(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_33, Var4.f_4))
			{
				DEBUG::_0xA308F935BDECCEC0(40, 150, "GET_PLAYERS_BEST_LONGARM_GUID: checking weapon ", func_527(Var4.f_4, 0));
				if (((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || func_817(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_817(iParam1, 4))) && (!func_820(Var4.f_4) || func_817(iParam1, 8)))
				{
					if (bVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_33, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_33, uParam0))
					{
						DEBUG::_0xA308F935BDECCEC0(680, 150, "GET_PLAYERS_BEST_LONGARM_GUID:  swapping ", func_527(Var4.f_4, 0), " for ", func_527(bVar0, 0));
						bVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
					else
					{
						DEBUG::_0xA308F935BDECCEC0(680, 150, "GET_PLAYERS_BEST_LONGARM_GUID:  NOT swapping ", func_527(Var4.f_4, 0), " for ", func_527(bVar0, 0));
					}
				}
			}
			bVar3++;
		}
		func_787(iVar1);
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 150, "GET_PLAYERS_BEST_LONGARM_GUID: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 150, "GET_PLAYERS_BEST_LONGARM_GUID: best longarm score: ", func_527(bVar0, 0));
	}
	else
	{
		DEBUG::_0xA308F935BDECCEC0(8, 150, "GET_PLAYERS_BEST_LONGARM_GUID: couldn't find best longarm");
	}
	return bVar0;
}

struct<4> func_745(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_821(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_748(joaat("CHARACTER"), func_571(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_748(joaat("CHARACTER"), func_571(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_748(joaat("CHARACTER"), func_571(), -1591664384, bParam0);
}

int func_746(bool bParam0)
{
	vector3 vVar0;

	if (!func_597(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

char* func_747(int iParam0, int iParam1)
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

struct<4> func_748(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_597(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_527(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_821(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_749(bool bParam0)
{
	int iVar0;

	iVar0 = func_821(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_748(923904168, func_745(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_748(923904168, func_745(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_748(923904168, func_745(bParam0), -740156546, 0);
}

bool func_750(bool bParam0, bool bParam1)
{
	if (func_526(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_822();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_751(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	return func_823(bParam0, *uParam1, iParam2, iParam3, 1, bParam4) > 0;
}

bool func_752(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (func_824(bParam0, &uVar0, iParam1, bParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_753(bool bParam0)
{
	int iVar0;

	iVar0 = func_821(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_748(271701509, func_745(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_748(271701509, func_745(bParam0), 12999093, 0);
}

bool func_754(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || bParam1 == 0)
	{
		return false;
	}
	bVar1 = func_526(bParam0);
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
			if (func_825(bParam0, bParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_755(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_826(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_756()
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_PLAYER_COMPONENTS__TRANSFER_CURRENT_DATA_TO_TEMP_DATA] Transfering Current Data to Temp Data");
	Global_1953612.f_1575 = Global_1953612.f_1694;
	Global_1953612.f_1571 = Global_1953612.f_1573;
	Global_1953612.f_1571.f_1 = Global_1953612.f_1573.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[METAPED_PLAYER_COMPONENTS__TRANSFER_CURRENT_DATA_TO_TEMP_DATA] TransferingMeta Type: ", func_687(func_697(iVar0, 1), 0), " Component: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1694.f_1[iVar0 /*3*/]));
		Global_1953612.f_1575.f_1[iVar0 /*3*/] = { Global_1953612.f_1694.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_757(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*bParam1 == 832230214 || *bParam1 == 30652334) || *bParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_526(uParam0->f_1[iVar0 /*3*/]) != 1882579758)
			{
				return;
			}
			iVar1 = func_827(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1953612.f_83[iParam2 /*12*/])
			{
				*bParam1 = iVar1;
				DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] None item mapped to: ", UNK_0x4379B6FA65D55295(*bParam1));
				return;
			}
		}
		if (!func_828(*bParam1, iParam2))
		{
			*bParam1 = Global_1953612.f_1694.f_1[iParam2 /*3*/];
			DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] Changing item to the current item: ", UNK_0x4379B6FA65D55295(*bParam1));
			return;
		}
	}
	*bParam1 = Global_1953612.f_83[iParam2 /*12*/];
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_HANDLE_COMPONENT_NONE_MAPPING] Using default none item: ", UNK_0x4379B6FA65D55295(*bParam1));
}

void func_758(var uParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(160, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_META_FLAG] Setting: ", func_42(iParam1));
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_759(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (bParam2 == 289238755)
	{
		DEBUG::_0xF0783374333FD8CE(168, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] Item: ", UNK_0x4379B6FA65D55295(bParam0), " has a wearable removal action | Bypass Wearable State Check");
		return 289238755;
	}
	if (bParam2 != 0 && func_829(bParam0, iVar0, bParam2) != -1)
	{
		DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] ", UNK_0x4379B6FA65D55295(bParam0), " contains the wearable state passed in | RETURNING ", UNK_0x4379B6FA65D55295(bParam2));
		return bParam2;
	}
	if (func_725(bParam0, func_697(iParam1, 1), &bParam2))
	{
		return bParam2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 208, "[METAPED_PLAYER_COMPONENTS__FILLOUT_WEARABLE_STATE] Failed to find a working wearable state for: ", UNK_0x4379B6FA65D55295(bParam0), " type: ", func_687(func_697(iParam1, 1), 0));
	return false;
}

void func_760(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (*uParam0 <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__SAVE_CACHE_DATA] Cache is empty, was something lost here? | EXIT");
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_645(4718592) && !func_830(func_526(Global_1953612.f_1575.f_1[uParam0->f_2[iVar0 /*2*/] /*3*/])))
		{
			DEBUG::_0xF0783374333FD8CE(40, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__SAVE_CACHE_DATA] Player has override data present, bypassing save for: ", func_687(func_697(uParam0->f_2[iVar0 /*2*/], 1), 0));
		}
		else
		{
			func_831(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__SAVE_CACHE_DATA] nothing was transferred | EXIT");
		return;
	}
	if (bParam4)
	{
		bVar2 = false;
		if (Global_1953612.f_1694 != 491602716 || !func_769(2, -1))
		{
			bVar2 = true;
		}
		else if (!func_668(Global_1953612.f_1694, -166674229) && (Global_1953612.f_1694 != 491602716 || !func_769(2, -1)))
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			Global_1953612.f_1694 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1953612.f_1575 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_832(-1, 0, 6);
			func_621(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_833(0, 1);
	}
}

bool func_761(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_834(&uParam0, bParam4, bParam5, iParam6);
}

bool func_762(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_814(0))
	{
		return func_835(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(&Param0));
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_755(Param0, &Var0, bParam5, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - Failed to get item data");
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - Equipped value of ", bParam4, " is already set for item, ignoring");
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_821(bParam5), &Param0, bParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - failed to equip item with GUID ", UNK_0xD2E4270E5D98EEE4(&Param0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 157, "PLAYER_INVENTORY_EQUIP_ITEM_IN_SLOT - item with GUID ", UNK_0xD2E4270E5D98EEE4(&Param0), " equipped successfully!");
	return true;
}

char* func_763(int iParam0, int iParam1)
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

bool func_764(int iParam0)
{
	return Global_1953612.f_595[iParam0] > 0;
}

void func_765(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_SYSTEM_REQUEST_INCREMENT_TYPE] Incrementing: ", func_763(iParam0, 0));
	Global_1953612.f_595[iParam0]++;
}

void func_766(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		DEBUG::_0x83407B92D46F25C3(8, 208, "[__INTERNAL_CACHE_METAPED_PLAYER_COMPONENTS__ADD_COMPONENT_REFERENCE_TO_CACHE] Cache size will be exceeded with this add: ", *uParam0);
		return;
	}
	if (!func_836(uParam0, 1))
	{
		func_837(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1953612.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1953612.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

var func_767(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(759749399);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_768(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_838();
	}
	return Global_17414.f_55.f_664.f_33[iParam0 /*120*/].f_1;
}

bool func_769(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17414.f_55.f_664.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

void func_770(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	*uParam0 = Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1;
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_SAVE__SET_SAVED_COMPONENT_OUTFIT_ARRAY] copying outfit hash: ", UNK_0x4379B6FA65D55295(Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
	if (119907797 == func_526(uParam0->f_1[10 /*3*/]) && func_668(uParam0->f_1[1 /*3*/], 458991572))
	{
		uParam0->f_1[10 /*3*/] = Global_1953612.f_83[10 /*12*/];
	}
}

char* func_771(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPC_PREVIEWED_ITEM_TYPE__INVALID";
		case 1:
			return "MPC_PREVIEWED_ITEM_TYPE__COMPONENT";
		case 2:
			return "MPC_PREVIEWED_ITEM_TYPE__OUTFIT";
		case 3:
			return "MPC_PREVIEWED_ITEM_TYPE__WEARABLE_STATE";
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

bool func_772(int iParam0, int iParam1)
{
	return (Global_1953612.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

char* func_773(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_COMPONENT_UNSAVED_FLAG_CLEAR";
		case 1:
			return "MP_COMPONENT_UNSAVED_FLAG_SYSTEM_HIDE";
		case 2:
			return "MP_COMPONENT_UNSAVED_FLAG_HIDE_FOR_HIDE_ACTION";
		case 4:
			return "MP_COMPONENT_UNSAVED_FLAG_HIDE_PERSISTENT";
		case 8:
			return "MP_COMPONENT_UNSAVED_FLAG_BYPASS_COMPONENT";
		case 16:
			return "MP_COMPONENT_UNSAVED_FLAG_COMPONENT_IN_OUTFIT";
		case 32:
			return "MP_COMPONENT_UNSAVED_FLAG_COMPONENT_SUPPORTS_WEARABLE_STATES";
		case 256:
			return "MP_COMPONENT_UNSAVED_FLAG_COMPONENT_HIDE_ACTION_WEARABLE_STATE";
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

void func_774(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_CLEAR_UNSAVED_META_FLAG_BY_INDEX] Clearing[", func_687(bParam0, 0), "]: ", func_42(iParam1));
	Global_1953612.f_83[bParam0 /*12*/].f_11 = (Global_1953612.f_83[bParam0 /*12*/].f_11 - (Global_1953612.f_83[bParam0 /*12*/].f_11 && iParam1));
}

bool func_775(bool bParam0)
{
	bool bVar0;
	var uVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = Global_1953612.f_1694.f_1[34 /*3*/];
	if ((((func_726(bVar0) != 0 && bParam0 != joaat("MPC_HIDE_ACTION_GLOVES")) && bParam0 != joaat("MPC_HIDE_ACTION_HAT")) && bParam0 != -38530791) && bParam0 != 1905845894)
	{
		return false;
	}
	if (func_668(bVar0, -166674229))
	{
		return false;
	}
	return func_737(bParam0, &uVar1);
}

int func_776(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_839(&(Global_1953612.f_1062), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Overlay is finalized, we can't do anything here | RETURN FALSE");
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		bVar0 = bParam0;
	}
	else if (iParam1 == -1811760631)
	{
		bVar0 = func_840(bParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_841(uParam3, iParam1);
	bVar2 = func_842(bVar0) != false;
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Testing Hair: ", UNK_0x4379B6FA65D55295(bParam0));
	if (iVar1 == -1 && bVar2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] We don't have any hair and we don't have any hair bedding | RETURN FALSE");
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_843(uParam2, uParam3, iParam1);
		}
		else
		{
			func_844(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_845(&Var3, bVar0, 0, 1, 6))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Failed to fillout layer: ", UNK_0x4379B6FA65D55295(bVar0));
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (uParam3[iVar1 /*18*/])->f_3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Layers are the same | RETURN FALSE");
			return 0;
		}
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Setting up new hair bedding!");
		func_846(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_847(uParam2, uParam3, bVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_845(&Var21, bVar0, 0, 1, 6))
		{
			DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_HAIR_BEDDING] Failed to fillout layer: ", UNK_0x4379B6FA65D55295(bVar0));
			return 0;
		}
		*(uParam3[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_777()
{
	UNK_0x355E72323AEE83CC(208, 6);
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_SYSTEM_SET_ITEMS_BEING_PREVIEWED] Clearing preview type");
	Global_1953612.f_1060 = 0;
}

bool func_778(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_779(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	return Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

var func_780(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_779(iParam0, iParam1) };
	return vVar0.x;
}

void func_781(bool bParam0, int iParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(2720, 208, sParam2, "[METAPED_PLAYER_COMPONENT_SET_UNSAVED_META_FLAG] Setting[", func_687(bParam0, 0), "]: ", func_42(iParam1));
	Global_1953612.f_83[bParam0 /*12*/].f_11 = (Global_1953612.f_83[bParam0 /*12*/].f_11 || iParam1);
}

void func_782(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1953612.f_2956.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_848(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Clearing: ", func_687(func_697(uParam0->f_2[iVar0 /*2*/], 1), 0));
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_848(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_702(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
					DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] marking as OLD: ", func_687(func_697(uParam0->f_2[iVar0 /*2*/], 1), 0));
				}
				DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS__CLEAN_CACHE] Keeping cached meta type: ", func_687(func_697(uParam0->f_2[iVar0 /*2*/], 1), 0));
				Global_1953612.f_2956.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1953612.f_2956.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_783(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

struct<14> func_784(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_527(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_686(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_686(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_686(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_805(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_747(iParam6, 0));
	}
	return Var0;
}

bool func_785(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_821(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *bParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

int func_786(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<10> Var1;
	bool bVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	bVar0 = false;
	while (bVar0 < iParam1)
	{
		if (!func_819(&Var1, bVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_726(Var1.f_4) != 0)
			{
			}
			else if (func_668(Var1.f_4, -166674229))
			{
			}
			else if (func_668(Var1.f_4, 525391395))
			{
			}
			else
			{
				bVar15 = func_526(Var1.f_4);
				if (func_850(iParam2, func_849(bVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			bVar0++;
			return 0;
		}
	}
}

int func_787(int iParam0)
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

void func_788(var uParam0, bool bParam1)
{
	struct<4> Var0;
	bool bVar7;
	int iVar8;

	Var0 = func_718(0);
	Var0.f_1 = bParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	DEBUG::_0xF0783374333FD8CE(40, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Starting for: ", func_527(bParam1, 0));
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 185, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Failed to find first row for: ", func_527(bParam1, 0));
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&bVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_688(bVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
				DEBUG::_0x9A6C65DDDBEC9C52(2216, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] eMetaType is invalid: ", func_687(func_697(iVar8, 1), 0), " | Index: ", iVar8, " | RELOOP");
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&bVar7, &Var0, joaat("COMPONENT")))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != bVar7)
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 208, "[__METAPED_PLAYER_COMPONENTS__PARDATA__ADD_MULTI_ITEM_REMOVAL_TO_CACHE] Bypassing removal for: ", UNK_0x4379B6FA65D55295(bVar7), " as we are wearing ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar8 /*3*/]));
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1953612.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_701(iVar8, 0);
			}
		}
	}
}

void func_789(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1 == -230310728 || bParam1 == 1326838792)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] Buzzed hair marking hair for removal");
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] Regular hair, marking to be base!");
	}
	iVar0 = 10;
	bVar1 = func_526(uParam0->f_1[iVar0 /*3*/]);
	if (bVar1 == 119907797)
	{
		if (func_668(bParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support hair accessories, time to unequip the hair accessory!");
		}
	}
	else if (bVar1 == 2086043523)
	{
		if (func_668(bParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support headbands, time to unequip the headband!");
		}
	}
	else if (bVar1 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */)
	{
		if (func_668(bParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support headbands, time to unequip the face mask!");
		}
	}
	iVar0 = 11;
	if (func_668(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_668(bParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support this eyewear, time to unequip the eyewear!");
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam1, -93469181)) && func_668(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HAIR_LOGIC] We're equipping a hair item that does not support this neckwear, time to unequip the neckwear!");
	}
}

void func_790(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BEARD_LOGIC] Stubble Beard marking Beard for removal");
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BEARD_LOGIC] Regular Beard, marking to be base!");
	}
}

void func_791(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_701(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_691(bVar1, 0) && func_668(bVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping eyewear that restricts neckwear, remove the neckwear!");
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953612.f_83[iVar0 /*12*/] && func_526(bVar1) == 2086043523) && func_668(bParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping eyewear that restricts headbands, remove the headband!");
	}
}

void func_792(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_526(bParam2))
	{
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */:
			func_851(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_852(uParam0, bParam1, iParam3);
			break;
	}
}

void func_793(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_526(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_701(iVar0, iParam3);
	}
	func_701(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_853(bParam2))
	{
		func_854(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_668(bParam2, -180472385) && !func_691(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_EYEWEAR_LOGIC] We're equipping neckwear that restricts eyewear, remove the eyewear!");
	}
	if (func_668(bParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Closing shirt collar to base state");
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Changing shirt wearable state, we need to re-apply our coat!");
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Closing shirt collar to Closed_Collar_Rolled_Sleeve state");
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NECKWEAR_LOGIC] Changing shirt wearable state, we need to re-apply our coat!");
		}
	}
}

void func_794(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_668(bParam2, 1872585553)) || func_526(bParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] None Shirt is getting equipped, remove the necktie!");
		}
	}
	iVar0 = 17;
	if (!func_691(uParam0->f_1[iVar0 /*3*/], 0) && func_668(bParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Shirt does not support suspenders | Removing Suspenders");
	}
	iVar0 = 29;
	if (!func_691(uParam0->f_1[iVar0 /*3*/], 0) && func_668(bParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Shirt does not support belts | Removing belt");
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_526(bVar2) == 1759215194 && func_526(bParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_827(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(40, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Unionsuit is equipped with not pants | updating the unionsuit lower: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]));
	}
	else if (func_855(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_526(bVar2) == 912453393 && func_856(32))
		{
			iVar3 |= 1;
		}
		if (func_668(bParam2, 525391395))
		{
			iVar3 |= 2;
		}
		bVar2 = func_729(Global_1953612.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			func_802(uParam0, 0, bVar2, iParam3);
			DEBUG::_0xA308F935BDECCEC0(40, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SHIRT_LOGIC] Full item is equipped | updating to ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]));
		}
	}
	iVar0 = 21;
	iVar4 = 23;
	if (!func_691(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953612.f_83[iVar4 /*12*/] && func_668(uParam0->f_1[iVar4 /*3*/], -1655064541)))
	{
		func_857(uParam0, iParam3);
	}
}

void func_795(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
	}
}

void func_796(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_526(bParam2))
	{
		case 698653232:
			func_858(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_859(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_797(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_526(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_860(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_861(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_798(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_526(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_701(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GAUNTLET_LOGIC] Gauntlets are getting applied, but they have the no gloves tag and we're wearing gloves | Removing Gloves!");
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_857(uParam0, iParam3);
	}
}

void func_799(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			if (func_668(uParam0->f_1[iVar0 /*3*/], 1537768121))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] We are equipping gloves but our gauntlets have a no gloves tag | Removing the gauntlets!");
			}
			func_701(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_668(bParam2, -1655064541))
		{
			func_857(uParam0, iParam3);
		}
		else
		{
			func_701(iVar0, iParam3 | 16);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] pushing update for shirt!");
		}
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/].f_1 != -529972961)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] Current coat does not have the Bounty_Hunter_L30 State | EXIT");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(2216, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GLOVES_LOGIC] Our coat has a unique unsupported wearable state: ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/].f_1), " hash: ", uParam0->f_1[iVar0 /*3*/].f_1, " | Resetting to base!");
	uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
	func_701(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_701(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_701(iVar0, iParam3);
	}
}

void func_800(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_862(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_668(bParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GUNBELT_LOGIC] We're equipping a gunbelt that restricts buckles, remove the buckle!");
	}
	iVar0 = 32;
	if (!func_691(uParam0->f_1[iVar0 /*3*/], 0) && func_668(bParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_GUNBELT_LOGIC] We're equipping a gunbelt that restricts gunbelt trinkets, remove the trinket!");
	}
}

void func_801(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
	}
}

void func_802(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_526(bParam2))
	{
		case 1759215194:
			func_863(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_864(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_865(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_866(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_867(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_868(uParam0, bParam1, iParam3);
			break;
	}
}

void func_803(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_526(bParam2))
	{
		case 1769055947:
			func_869(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_870(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_804(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_871(uParam0, iParam3, 0, 1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Equipping none boot!");
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_668(bParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/]) && func_526(bVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support spats");
	}
	if ((func_668(bParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/]) && func_526(bVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support chaps");
	}
	iVar0 = 37;
	if (func_668(bParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BOOTS_LOGIC] Previewing boots and these boots don't support spurs");
	}
}

var func_805(bool bParam0, int iParam1)
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

bool func_806(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

var func_807(bool bParam0, int iParam1)
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

int func_808(bool bParam0)
{
	int iVar0;

	Global_1953612.f_2862.f_43[Global_1953612.f_2862.f_1 /*2*/] = bParam0;
	iVar0 = Global_1953612.f_2862.f_2 ^ -1;
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS_ADD_HIDE_ACTION] AllHideFlags - ", func_42(Global_1953612.f_2862.f_2));
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS_ADD_HIDE_ACTION] AllHideFlags XOR ALLBITS - ", func_42(iVar0));
	iVar0 = (iVar0 && -iVar0);
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS_ADD_HIDE_ACTION] FlippedFlags & -FlippedFlags - ", func_42(iVar0));
	Global_1953612.f_2862.f_2 = (Global_1953612.f_2862.f_2 || iVar0);
	Global_1953612.f_2862.f_43[Global_1953612.f_2862.f_1 /*2*/].f_1 = iVar0;
	DEBUG::_0xF0783374333FD8CE(10888, 208, "[METAPED_PLAYER_COMPONENTS_ADD_HIDE_ACTION] Adding Hide Action to [", Global_1953612.f_2862.f_1, "] Hide Action: ", UNK_0x4379B6FA65D55295(bParam0), " flag: ", func_42(iVar0));
	Global_1953612.f_2862.f_1++;
	return iVar0;
}

void func_809(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_872(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20)
	{
		if (func_668(Global_1953612.f_1694.f_1[iVar0 /*3*/], 343781202))
		{
			bVar2 = func_873(Global_1953612.f_1694.f_1[iVar0 /*3*/], 1108822547);
			if (1388798186 == func_526(bVar2))
			{
				func_874(10, iParam1);
			}
		}
	}
	else if (iVar0 == 23)
	{
		bVar1 = 20;
		if (Global_1953612.f_1694.f_1[bVar1 /*3*/].f_1 == -529972961)
		{
			Global_1953612.f_2862.f_54[bVar1] = joaat("BASE");
			func_781(bVar1, 256, 6);
			*iParam2 |= 262144;
		}
	}
	func_874(iVar0, iParam1);
}

bool func_810(int iParam0)
{
	return func_125(&(Global_1957252.f_1565), iParam0, 1);
}

int func_811(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

char* func_812(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1965281643:
			return "ADD_REASON_INCENTIVE";
		case -1924444172:
			return "ADD_REASON_SYNCING";
		case -1216041698:
			return "ADD_REASON_AWARDS";
		case -983395630:
			return "ADD_REASON_NOTIFICATION";
		case -902540058:
			return "ADD_REASON_LOADOUT";
		case -897553835:
			return "ADD_REASON_LOOTED";
		case -746211728:
			return "ADD_REASON_USE_FAILED";
		case -669481339:
			return "ADD_REASON_GET_INVENTORY";
		case -490406031:
			return "ADD_REASON_CREATE_CHARACTER";
		case -334626412:
			return "ADD_REASON_MP_MISSION";
		case 444010018:
			return "ADD_REASON_PICKUP";
		case 752097756:
			return "ADD_REASON_DEFAULT";
		case 1157919518:
			return "ADD_REASON_SET_AMOUNT";
		case 1248274121:
			return "ADD_REASON_PURCHASED";
		case 1445013766:
			return "ADD_REASON_LOAD_SAVEGAME";
		case 1543882317:
			return "ADD_REASON_DEBUG";
		case 2073812199:
			return "ADD_REASON_MELEE";
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

bool func_813(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam1));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (func_875(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", func_527(bParam0, 0), " is an intrinsic item, aborting!");
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_755(*iParam1, &Var0, bParam6, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to get item data");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2184, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", iParam3, " is greater than current quantity of ", Var0.f_11, ", capping quantity");
		iParam3 = Var0.f_11;
	}
	if (!func_814(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item is already expired and does not need to be removed, ignoring");
		}
		else if (func_33() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			DEBUG::_0xF0783374333FD8CE(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Sending a Use transaction for ", iParam3, "x item ", func_527(bParam0, 0), " in ", func_686(uParam2->f_4, 0));
			iVar14 = func_876(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -142743235;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_877(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Removing ", iParam3, "x item ", func_527(bParam0, 0), " in ", func_686(uParam2->f_4, 0), " with reason ", func_878(iParam4, 0));
	if (!INVENTORY::_0x3E4E811480B3AE79(func_821(bParam6), iParam1, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to remove inventory item!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool func_814(bool bParam0)
{
	if (func_33() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_821(bParam0));
}

int func_815(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_879(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Tried to add invalid ammo: ", func_527(bParam0, 0));
		return 0;
	}
	if (!func_814(0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Cannot add ammo directly in MP. Use awards instead!");
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	DEBUG::_0xF0783374333FD8CE(648, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Ammo add for ", iParam1, "x ", func_527(bParam0, 0));
	return 1;
}

void func_816(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_880(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
		DEBUG::_0xF0783374333FD8CE(168, 157, "[REFILL_CLIP_FOR_WEAPON] - refilled clip for ", UNK_0x4379B6FA65D55295(bParam0), " with this many bullets - ", iVar2);
	}
}

bool func_817(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_818(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_821(bParam4), sParam0, bParam3, bParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *bParam2, " from predicate '", sParam0, "' with ", func_686(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_819(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (bParam1 < 0 || bParam1 >= bParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", bParam1, " Size: ", bParam3);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, bParam1, iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", bParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool func_820(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_821(bool bParam0)
{
	if (func_33() == -1)
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

bool func_822()
{
	return (func_881(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_761(func_748(joaat("WARDROBE"), func_745(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_823(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_597(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_882(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_527(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_527(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_686(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_748(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_527(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_821(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_527(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_821(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_527(bParam0, 0));
	}
	return iVar0;
}

bool func_824(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_821(0);
	*iParam1 = { func_748(bParam0, func_749(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_527(bParam0, 0), " eSlot: ", func_686(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_527(bParam0, 0));
		return false;
	}
	return true;
}

bool func_825(bool bParam0, bool bParam1, bool bParam2)
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

bool func_826(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_821(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_527(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_686(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_827(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_783(&uVar1, 9044914, bParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&uVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&uVar1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &uVar1, -1168434056))
		{
			DEBUG::_0xF0783374333FD8CE(8, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_ITEM_MAPPING] Failed to get component_item | RETURN HASH_METAPED_CLOTHING_INVALID");
			return 0;
		}
		return uVar0;
	}
	DEBUG::_0xF0783374333FD8CE(168, 185, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_ITEM_MAPPING] Failed to find item mapping for: ", UNK_0x4379B6FA65D55295(bParam0), " | RETURN HASH_METAPED_CLOTHING_INVALID");
	return 0;
}

bool func_828(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_526(Global_1953612.f_1694.f_1[iParam1 /*3*/]);
	if (func_526(bParam0) == bVar0)
	{
		return true;
	}
	else if (bParam0 == -992705550)
	{
		return func_668(Global_1953612.f_1694.f_1[iParam1 /*3*/], 160827531);
	}
	else if (bParam0 == 491480257)
	{
		return (bVar0 == -2061583405 || bVar0 == 2086043523);
	}
	else if (bParam0 == -1789518572)
	{
		return bVar0 == -923693316;
	}
	else if (bParam0 == -275040139)
	{
		return bVar0 == 1882579758;
	}
	return false;
}

int func_829(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 == 0)
	{
		return -1;
	}
	DEBUG::_0x4DC69742196F818A(680, 208, "[METAPED_PLAYER_COMPONENT__FIND_WEARABLE_STATE_ON_CLOTHING_ITEM] Searching for: ", UNK_0x4379B6FA65D55295(bParam2), " in item: ", UNK_0x4379B6FA65D55295(bParam0));
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, iParam1, 1) == bParam2)
		{
			DEBUG::_0x4DC69742196F818A(168, 208, "[METAPED_PLAYER_COMPONENT__FIND_WEARABLE_STATE_ON_CLOTHING_ITEM] Found: ", UNK_0x4379B6FA65D55295(bParam2), " at index: ", iVar0);
			return iVar0;
		}
		iVar0++;
	}
	DEBUG::_0x4DC69742196F818A(40, 208, "[METAPED_PLAYER_COMPONENT__FIND_WEARABLE_STATE_ON_CLOTHING_ITEM] Failed to find: ", UNK_0x4379B6FA65D55295(bParam2));
	return -1;
}

bool func_830(bool bParam0)
{
	return (((((((((bParam0 == -1839668642 || bParam0 == -1415811768) || bParam0 == 231148558) || bParam0 == -1674363638) || bParam0 == 252325943) || bParam0 == 1216664798) || bParam0 == 1341188928) || bParam0 == 829857647) || bParam0 == -636562458) || bParam0 == 1115104855);
}

void func_831(int iParam0, bool bParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(40, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Starting for: ", func_687(func_697(iParam0, 1), 0));
	if (bParam1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Transfering Temp Data to Current Data");
		DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Component: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1575.f_1[iParam0 /*3*/]), " Wearable: ", UNK_0x4379B6FA65D55295(Global_1953612.f_1575.f_1[iParam0 /*3*/].f_1));
		Global_1953612.f_1694.f_1[iParam0 /*3*/] = { Global_1953612.f_1575.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] ...Ending");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] Transfering Current Data to Save Data");
	func_883(&(Global_1953612.f_1694.f_1[iParam0 /*3*/]), iParam0, Global_17414.f_55.f_664.f_1777);
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_COMPONENTS_SAVE_COMPONENT_DATA] ...Ending");
}

void func_832(int iParam0, bool bParam1, char* sParam2)
{
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_PLAYER_COMPONENTS__TRANSFER_TEMP_DATA_TO_SAVE_DATA] Starting...");
	func_884(&(Global_1953612.f_1575), iParam0);
	func_885(2, iParam0, 6);
	if (bParam1)
	{
		func_833(0, 1);
	}
	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam2, "[METAPED_PLAYER_COMPONENTS__TRANSFER_TEMP_DATA_TO_SAVE_DATA] ...Ending");
}

void func_833(bool bParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 208, "[PUSH_METAPED_CLOTHING_SYSTEM_SAVE_METAPED_REQUEST] Pushing a save request for the player metaped!");
	if (bParam1)
	{
		func_777();
	}
	if (bParam0)
	{
		func_647(8);
		func_647(512);
	}
	else
	{
		func_647(8);
		func_647(16);
	}
}

int func_834(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_886(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_527(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

int func_835(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<29> Var16;
	struct<26> Var45;
	struct<18> Var71;
	struct<17> Var89;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_755(*iParam0, &Var1, 1, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Failed to get item data");
		return iVar0;
	}
	if (Var1.f_10 == bParam1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equipped value of ", bParam1, " is already set for item, ignoring");
		return iVar0;
	}
	if (Var1.f_13)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Item is expired, cannot update so ignoring");
		return iVar0;
	}
	iVar15 = func_746(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_887(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_888(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var45 = { func_889(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_890(joaat("UPDATE"), &Var45, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var71 = { func_891(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_892(joaat("UPDATE"), &Var71, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_893(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_876(joaat("UPDATE"), &Var89, bParam2);
		if (iVar0 == -1)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Equip transaction failed, aborting!");
			return iVar0;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(168, 157, "PLAYER_INVENTORY_REQUEST_EQUIP_ITEM - Successfully sent CI_ACTION_UPDATE transaction for ", func_527(Var1.f_4, 0), " as bEquipped = ", bParam1);
	return iVar0;
}

bool func_836(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_837(var uParam0, int iParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_PLAYER_COMPONENTS_SET_CACHE_FLAG] Setting: ", func_894(iParam1, 0));
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_838()
{
	return Global_17414.f_55.f_664.f_1777;
}

bool func_839(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_840(bool bParam0)
{
	if (bParam0 == joaat("CLOTHING_ITEM_HAIR_NONE"))
	{
		return 1687431937;
	}
	else if (func_668(bParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_668(bParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_668(bParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_841(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*18*/])->f_1 == -1 || (uParam0[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_895(iParam1, 0));
	return -1;
}

int func_842(bool bParam0)
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

int func_843(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_841(uParam1, iParam2);
	if (iVar0 == -1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_EXISTING_TEXTURE_BLEND] Something failed with the layer search!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(2696, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_EXISTING_TEXTURE_BLEND] Removing Layer[", iVar0, "] - ", func_895((uParam1[iVar0 /*18*/])->f_17, 0), " blend index: ", (uParam1[iVar0 /*18*/])->f_2);
	PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[iVar0 /*18*/])->f_2);
	func_844(uParam0, uParam1, iVar0);
	return 1;
}

void func_844(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(166536, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_LAYER_DATA] Setting: Layer[", iVar0, "] - ", func_895((uParam1[iVar0 /*18*/])->f_17, 0), " to Layer[", iVar0 + 1, "] - ", func_895((uParam1[iVar0 + 1 /*18*/])->f_17, 0));
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[iVar0 + 1 /*18*/]) };
			(uParam1[iVar0 /*18*/])->f_2 = ((uParam1[iVar0 /*18*/])->f_2 - 1);
			DEBUG::_0x1B08D1EB9D8C4931(136, 208, "[METAPED_CLOTHING_OVERLAY_REMOVE_LAYER_FROM_LAYER_DATA] Setting: Layer[", iVar0, "] Texture blend index to: ", (uParam1[iVar0 /*18*/])->f_2);
			iVar0++;
		}
	}
}

bool func_845(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	struct<5> Var0;

	DEBUG::_0xEF256AE8A5A27966(32, 208, sParam4, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Starting...");
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = joaat("ID");
	Var0.f_3 = 1;
	Var0.f_4 = bParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_896(&Var0, uParam0, 0, sParam4))
	{
		DEBUG::_0x83407B92D46F25C3(168, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Failed to fillout: ", UNK_0x4379B6FA65D55295(bParam1), " Hash: ", bParam1);
		return false;
	}
	*uParam0 = bParam1;
	if (bParam2)
	{
		func_897(uParam0, bParam3);
	}
	return true;
}

void func_846(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_839(uParam0, 1) || func_839(uParam0, 2)) || uParam0->f_6 < 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(35496, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] overlay is NOT created: ", MISC::_0xF216F74101968DB0(!func_839(uParam0, 1)), " is finalized: ", MISC::_0xF216F74101968DB0(func_839(uParam0, 2)), " layer count is: ", uParam0->f_6, " | EXIT");
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Updating base layer");
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_898(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_841(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Adding new layer: ", func_895(uParam2->f_17, 0));
			if (uParam0->f_6 >= 22)
			{
				DEBUG::_0x83407B92D46F25C3(8, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Failed to add layer | Too many entries | EXIT");
				return;
			}
			*(uParam1[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_899(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(648, 208, "[METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_SETUP_DATA] Updating Layer[", iVar0, "] Type: ", func_895(uParam2->f_17, 0));
			uParam2->f_2 = (uParam1[iVar0 /*18*/])->f_2;
			*(uParam1[iVar0 /*18*/]) = { *uParam2 };
			func_900(uParam0, uParam1[iVar0 /*18*/], 1);
		}
	}
}

int func_847(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Attempting to add: ", UNK_0x4379B6FA65D55295(bParam2));
	if (!func_845(&Var0, bParam2, bParam3, bParam4, 6))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Failed to fillout layer | RETURN FALSE");
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		DEBUG::_0x83407B92D46F25C3(8, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY_DATA] Too many layer entries | RETURN FALSE");
		return 0;
	}
	*(uParam1[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Comparing[", iVar18, "] - ", (uParam1[iVar18 /*18*/])->f_1, " to [", (iVar18 - 1), "] - ", (uParam1[(iVar18 - 1) /*18*/])->f_1);
		if ((uParam1[iVar18 /*18*/])->f_1 < (uParam1[(iVar18 - 1) /*18*/])->f_1)
		{
			DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] Swapping: [", iVar18, "] P=", (uParam1[iVar18 /*18*/])->f_1, " with: [", (iVar18 - 1), "] P=", (uParam1[(iVar18 - 1) /*18*/])->f_1);
			Var19 = { *(uParam1[iVar18 /*18*/]) };
			*(uParam1[iVar18 /*18*/]) = { *(uParam1[(iVar18 - 1) /*18*/]) };
			*(uParam1[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	DEBUG::_0xF0783374333FD8CE(8, 208, "[METAPED_CLOTHING_OVERLAY_PARDATA_HANDLE_LAYER_ADD_TO_OVERLAY] ...Ending");
	return 1;
}

bool func_848(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_849(bool bParam0)
{
	switch (bParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_850(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_851(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_668(bVar1, 160827531) || func_526(bVar1) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FACE_MASK_LOGIC] We're equipping a big mask, time to unequip the small mask!");
	}
}

void func_852(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_HEADBAND_LOGIC] We're equipping eyewear that restricts headbands, removing the headband!");
	}
}

bool func_853(bool bParam0)
{
	if (!func_597(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_BANDANA: attempting to process an invalid item!");
		return false;
	}
	if (func_668(bParam0, 160827531) || func_526(bParam0) == joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */)
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "ITEM_PROPERTY_BANDANA");
		return true;
	}
	return false;
}

void func_854(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */ == func_526(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BANDANA_LOGIC] We're equipping a small mask, time to unequip the big mask!");
	}
}

bool func_855(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_526(bParam0);
	if (iParam2 == 0)
	{
		return (bVar0 == 1759215194 || bVar0 == 344283346);
	}
	return (!bParam1 && (bVar0 == -1740828670 || bVar0 == 344283346));
}

bool func_856(int iParam0)
{
	return (Global_17414.f_55.f_664.f_1734 && iParam0) != 0;
}

void func_857(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 16;
	iVar1 = 0;
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	func_701(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */ || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_829(uParam0->f_1[iVar0 /*3*/], iVar1, -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_ROLLING_UP_SLEEVES] Setting shirt to Closed_Collar_Rolled_Sleeve wearable state!");
			return;
		}
	}
	if (func_829(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_ROLLING_UP_SLEEVES] Setting shirt to open_collar_rolled_sleeve wearable state!");
	}
}

void func_858(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, -1527414429)) && !func_668(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_VEST_LOGIC] Vest is being applied that removes neckwear, we need to remove neckwear!");
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_668(bParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_701(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			func_701(iVar0, iParam3);
		}
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_VEST_LOGIC] We're wearing a vest that restricts shirt collars | closing shirt collar");
	}
}

void func_859(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Corset is being applied, we need to remove suspenders!");
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_668(bVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_701(iParam2, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Equipping corset but we're wearing pants that force the corset wearable state | force corset under pants!");
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && 1769055947 == func_526(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_701(iParam2, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_BODICE_LOGIC] Chaps are equipped so we need to force our corset to be under pants!");
			}
		}
	}
}

void func_860(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_701(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_701(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
		{
			func_701(iVar0, iParam3);
			func_798(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being unequipped, we need to re-apply the gauntlets");
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being unequipped, we need to re-apply our suspenders!");
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being applied that remove belts, we need to remove belts!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat that closes the collar is being equipped | setting wearable state to Base");
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -153958942 /* joaat("Closed_Collar_Rolled_Sleeve") */;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat that closes the collar is being equipped | setting wearable state to Closed_Collar_Rolled_Sleeve");
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, -1527414429)) && !func_668(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_COAT_LOGIC] Coat is being applied that remove neckwear, we need to remove neckwear!");
	}
}

void func_861(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_701(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && !func_668(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied, we need to remove neckwear 1!");
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied, we need to remove neckwear 2!");
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PONCHO_LOGIC] Poncho is being applied that doesn't support a bandolier, removing bandolier!");
	}
}

bool func_862(bool bParam0)
{
	return Global_1953612.f_1694.f_1[func_688(bParam0, 1) /*3*/] != Global_1953612.f_83[func_688(bParam0, 1) /*12*/];
}

void func_863(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lowers are being applied, we need to remove suspenders!");
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_701(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lower is getting applied, we need to re-apply the player's coat if they have one!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_668(uParam0->f_1[iVar0 /*3*/], -928740153))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lower is getting applied and we're wearing footwear that doesn't support them | Time to remove them!");
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_UNIONSUIT_LOWER_LOGIC] unionsuit lower is getting applied, we need to force boots to be in the base wearable state!");
		}
		func_701(iVar0, iParam1);
	}
}

void func_864(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/] && func_526(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_729(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Pants are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 36;
	func_701(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, -1473580422))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_668(bVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			DEBUG::_0xA308F935BDECCEC0(168, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that are forcing the boot wearable state to under_pants | ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar0 /*3*/]), " doesn't support this | removing the boot!");
		}
		else if (func_829(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that are forcing the boot wearable state to under_pants");
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Pants are forcing boots to be under but these boots don't have that state forcing to base and hope it works?");
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_526(bVar1) == 912453393)
		{
			bVar2 = true;
			if (func_668(bParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_701(iVar0, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that force the corset under pants | forcing corset wearable state!");
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_526(bVar1) == 1868067663 && func_668(bParam2, -1016441646))
		{
			func_901(uParam0, iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] pants are being applied that restricts coats, we need to remove coats!");
		}
		else if (bVar2)
		{
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] We need to push an update for the coat!");
		}
	}
	iVar0 = 34;
	if (1759215194 == func_526(uParam0->f_1[iVar0 /*3*/]))
	{
		func_701(16, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] The previous item we were wearing was unionsuit lower | updating upper layer 2!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, -1650340550))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_526(bVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_PANTS_LOGIC] Equipping pants that don't support chaps | removing chaps!");
		}
	}
}

void func_865(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/] && func_526(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_729(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirts are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_668(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_871(uParam0, iParam3, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] skirt is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else if (func_668(bParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt is getting applied, Item is forcing boots to be in the base wearable state!");
		}
	}
	func_701(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt is getting applied, going to remove the chaps!");
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_668(bVar1, 1090938458) && func_668(bParam2, 475297062))
		{
			func_901(uParam0, iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] Skirt that doesn't support long coats is getting applied, going to remove the long coat!");
		}
	}
}

void func_866(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_701(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove vests!");
	}
	if (func_728() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953612.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_729(Global_1953612.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam2);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are getting equipped and we're not wearing a shirt, we need to equip a shirt!");
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953612.f_83[iVar0 /*12*/] && func_668(bVar1, 353024991))
	{
		func_901(uParam0, iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove short coats!");
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove suspenders!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && 1769055947 == func_526(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove chaps!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_OVERALLS_LOGIC] Overalls are being applied, we need to remove belts!");
	}
}

void func_867(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_526(bVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove vests!");
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_526(bVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_701(iVar0, iParam3);
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, force the corset wearable state!");
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove vests!");
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove suspenders!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove shirts!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove belts!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_FULL_DRESS_LOGIC] Dress is being applied, we need to remove chaps!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_668(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_871(uParam0, iParam3, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] dress is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else if (func_668(bParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] dress is getting applied, Item is forcing boots to be in the base wearable state!");
		}
	}
}

void func_868(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		func_901(uParam0, iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove coats!");
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove gauntlets!");
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove upper layer 4!");
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove suspenders!");
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove shirts!");
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove belts!");
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to remove chaps!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		if (func_668(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_871(uParam0, iParam2, 1, 0);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SKIRT_LOGIC] nightgown is getting applied, boot doesn't support skirts | remove the boot!");
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_701(iVar0, iParam2);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_NIGHTGOWN_LOGIC] Nightgown is being applied, we need to force the boots to base!");
		}
	}
}

void func_869(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set pants to base wearable state!");
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set boots to be under pants!");
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && func_668(bParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied and they don't support spurs, removing the spurs!");
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_526(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_701(iVar0, iParam3);
			DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_CHAPS_LOGIC] Chaps are getting applied, going to set the corset to be under pants!");
		}
	}
}

void func_870(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_668(bParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam3);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_UNIQUE_SPATS_LOGIC] Previewing spats that do not support spurs | Removing spurs");
	}
}

void func_871(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_BOOT_REMOVAL] Removing spurs as we're removing boots!");
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_526(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953612.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam1);
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_HANDLE_BOOT_REMOVAL] Removing spats as we're removing boots!");
	}
}

bool func_872(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	switch (iParam0)
	{
		case -1912930450:
			bVar0 = 1742327865;
			if (func_526(func_667(bVar0)) != joaat("CI_CATEGORY_WARDROBE_MASK") /* 81053684 */ && !func_668(func_667(bVar0), 160827531))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_GET_HIDE_ACTION_META_TYPE_INDEX][MASK_SPECIAL_CASE] Bypassing add as the neckwear is not a mask!");
				return false;
			}
			break;
		case -1745589872:
			bVar0 = 1742327865;
			if (!func_668(func_667(bVar0), -1303648999))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_GET_HIDE_ACTION_META_TYPE_INDEX][NECKWEAR_MASK_SPECIAL_CASE] Bypassing add as the neckwear is not a face mask!");
				return false;
			}
			break;
		case -1549909015:
			bVar0 = 1108822547;
			bVar1 = func_526(func_667(bVar0));
			if (bVar1 != joaat("CI_CATEGORY_WARDROBE_BIG_MASK") /* -525676072 */ && bVar1 != -2061583405)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_GET_HIDE_ACTION_META_TYPE_INDEX][HAT_OR_FACE_MASK_SPECIAL_CASE] Bypassing add as the headwear is not a hat or face mask!");
				return false;
			}
			break;
		case 357406204:
			bVar0 = -1197751823;
			bVar1 = func_526(func_667(bVar0));
			if (bVar1 != 294388917)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_GET_HIDE_ACTION_META_TYPE_INDEX][PONCHO_SPECIAL_CASE] Bypassing add as upper layer 6 is not a poncho!");
				return false;
			}
			break;
		case -464635753:
			bVar0 = -450913544;
			bVar1 = func_526(func_667(bVar0));
			if (bVar1 != 698653232)
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_GET_HIDE_ACTION_META_TYPE_INDEX][VEST_SPECIAL_CASE] Bypassing add as upper layer 6 is not a poncho!");
				return false;
			}
			break;
		case 1742327865:
			bVar0 = 1742327865;
			if (func_668(func_667(bVar0), -1303648999))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_PLAYER_COMPONENTS_GET_HIDE_ACTION_META_TYPE_INDEX][NECKWEAR_MASK_SPECIAL_CASE] Bypassing add as the neckwear is tagged as a mask!");
				return false;
			}
			break;
		default:
			bVar0 = iParam0;
			break;
	}
	*iParam1 = func_688(bVar0, 1);
	return true;
}

int func_873(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_COMPONENT_FROM_META_TYPE_FOR_OUTFIT] Checking if outfit: ", UNK_0x4379B6FA65D55295(bParam0), " has meta component: ", func_687(bParam1, 0));
	iVar0 = func_718(0);
	func_783(&(Global_1953612.f_1046), iVar0, bParam0, 1409451727, 1, bParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1953612.f_1046));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1953612.f_1046)))
	{
		DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_COMPONENT_FROM_META_TYPE_FOR_OUTFIT] Failed to find: ", func_687(bParam1, 0), " in outfit: ", UNK_0x4379B6FA65D55295(bParam0));
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1953612.f_1046), joaat("COMPONENT")))
	{
		DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_COMPONENTS__PARDATA__GET_COMPONENT_FROM_META_TYPE_FOR_OUTFIT] Failed to get component for: ", func_687(bParam1, 0), " in outfit: ", UNK_0x4379B6FA65D55295(bParam0));
		return 0;
	}
	return uVar1;
}

void func_874(int iParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(680, 208, "[METAPED_PLAYER_COMPONENTS_SET_COMPONENT_HIDE_FLAG] Setting flag: ", func_42(iParam1), " for: ", func_687(func_697(iParam0, 1), 0));
	Global_1953612.f_2862.f_3[iParam0] = (Global_1953612.f_2862.f_3[iParam0] || iParam1);
}

bool func_875(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_876(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - ", func_902(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_903(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_905(func_904(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_906(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

void func_877(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_20)
	{
		if (Global_1272425.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
				DEBUG::_0xA308F935BDECCEC0(8, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Updated transaction data for transaction: ", iParam0);
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   eStatus:                        ", func_907(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
				DEBUG::_0x4DC69742196F818A(8, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   sHandlerData.bSuppressFeedback: ", Param1);
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   sHandlerData.tlFeedbackMessage: ", &(Param1.f_12));
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(136, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Transaction ", iParam0, " was not pending, ignoring handler data update!");
			}
			return;
		}
		iVar0++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
}

char* func_878(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1672595415:
			return "REMOVE_REASON_GIFTED_INCORRECTLY";
		case -1603050778:
			return "REMOVE_REASON_DEBUG";
		case -1387038764:
			return "REMOVE_REASON_GIVEN";
		case -355084151:
			return "REMOVE_REASON_ITEM_DOES_NOT_EXIST";
		case -327174699:
			return "REMOVE_REASON_DROPPED";
		case -142743235:
			return "REMOVE_REASON_DEFAULT";
		case 419721522:
			return "REMOVE_REASON_DUPLICATE";
		case 433442725:
			return "REMOVE_REASON_SET_AMOUNT";
		case 462742458:
			return "REMOVE_REASON_LOADOUT";
		case 548388329:
			return "REMOVE_REASON_DELETE_CHARACTER";
		case 562618531:
			return "REMOVE_REASON_USED";
		case 717109566:
			return "REMOVE_REASON_COALESCE";
		case 1246663900:
			return "REMOVE_REASON_CLIENT_PURGED";
		case 1368201902:
			return "REMOVE_REASON_INSUFFICIENT_INVENTORY";
		case 1730125485:
			return "REMOVE_REASON_USE_FAILED";
		case 1992602754:
			return "REMOVE_REASON_SOLD";
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

bool func_879(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_880(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_881(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_879(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_821(bParam1), bParam0, bParam3);
}

int func_882(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_806(func_733(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

void func_883(var uParam0, int iParam1, int iParam2)
{
	DEBUG::_0x1B08D1EB9D8C4931(2796168, 208, "[METAPED_SAVE_MP__SET_SAVED_COMPONENT] Outfit: ", iParam2, " Setting: ", func_687(func_697(iParam1, 1), 0), " to component: ", UNK_0x4379B6FA65D55295(*uParam0), " Wearable: ", UNK_0x4379B6FA65D55295(uParam0->f_1), " flags: ", func_42(uParam0->f_2));
	Global_17414.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_884(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	Global_17414.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_SAVE__SET_SAVED_COMPONENT_OUTFIT_ARRAY] saving outfit hash: ", UNK_0x4379B6FA65D55295(*uParam0));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_883(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_885(int iParam0, int iParam1, char* sParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17414.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17414.f_55.f_664.f_33[iParam1 /*120*/] = (Global_17414.f_55.f_664.f_33[iParam1 /*120*/] || iParam0);
		DEBUG::_0xEF256AE8A5A27966(672, 208, sParam2, "[METAPED_PLAYER_COMPONENT_OUTFIT__SET_FLAG][MP] Setting: ", func_908(iParam0, 0), " for outfit: ", iParam1);
	}
}

bool func_886(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_821(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_686(bParam1, 0));
		return false;
	}
	if (!func_826(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_686(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_527(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_686(bParam1, 0));
	return true;
}

struct<29> func_887(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "FILLOUT_CASHINVENTORY_HORSE_ITEM - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&uParam0));
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var29.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_821(bParam4), &uParam0, &Var29, 29, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "FILLOUT_CASHINVENTORY_HORSE_ITEM - failed to read data!");
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var0 = { func_893(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_888(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_HORSE_TRANSACTION - ", func_902(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_903(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_905(func_909(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_906(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_HORSE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

struct<26> func_889(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<26> Var0;
	struct<24> Var26;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "FILLOUT_CASHINVENTORY_VEHICLE_ITEM - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&uParam0));
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var26.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_821(bParam4), &uParam0, &Var26, 24, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "FILLOUT_CASHINVENTORY_VEHICLE_ITEM - failed to read data!");
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var0 = { func_893(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_890(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_VEHICLE_TRANSACTION - ", func_902(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_905(func_910(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_906(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_VEHICLE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

struct<18> func_891(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "FILLOUT_CASHINVENTORY_WEARABLE_ITEM - Item GUID is invalid: ", UNK_0xD2E4270E5D98EEE4(&uParam0));
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var18.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_821(bParam4), &uParam0, &Var18, 15, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "FILLOUT_CASHINVENTORY_WEARABLE_ITEM - failed to read data!");
		UNK_0x355E72323AEE83CC(157, 4);
		return Var0;
	}
	Var0 = { func_893(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_892(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - ", func_902(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_903(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_905(func_911(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_906(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_WEARABLE_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

struct<17> func_893(var uParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_882(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_571() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

char* func_894(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_COMPONENT_CACHE_FLAG_CLEAR";
		case 1:
			return "MP_COMPONENT_CACHE_FLAG_CACHE_EXISTS";
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

char* func_895(int iParam0, int iParam1)
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

bool func_896(var uParam0, var uParam1, bool bParam2, char* sParam3)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	char* sVar3;
	char* sVar4;

	if (DATAFILE::_0x44B3A36933AC009C(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA]     Layer Type: ", func_895(uParam1->f_17, 0));
	}
	else if (!bParam2)
	{
		return false;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, joaat("ALBEDO")))
	{
		uParam1->f_3 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Albedo: ", UNK_0x4379B6FA65D55295(bVar0));
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, joaat("NORMAL")))
	{
		uParam1->f_4 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Normal: ", UNK_0x4379B6FA65D55295(bVar0));
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, joaat("MATERIAL")))
	{
		uParam1->f_5 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Material: ", UNK_0x4379B6FA65D55295(bVar0));
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&sVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = sVar4;
		DEBUG::_0xEF256AE8A5A27966(96, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Texture Alpha: ", sVar4);
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_912(bVar0);
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Blend Type: ", func_913(uParam1->f_16, 0));
	}
	if (DATAFILE::_0xB2B42607F7867576(&sVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = sVar4;
		DEBUG::_0xEF256AE8A5A27966(96, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Roughness: ", sVar4);
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 939944711))
	{
		uParam1->f_6 = sVar3;
		DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Sheet Grid Index: ", sVar3);
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, 917806888))
	{
		uParam1->f_7 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Mod Texture: ", UNK_0x4379B6FA65D55295(bVar0));
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Mod Channel: ", uParam1->f_8);
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (DATAFILE::_0xB2B42607F7867576(&sVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = sVar4;
			DEBUG::_0xEF256AE8A5A27966(96, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Mod Alpha: ", sVar4);
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&bVar0, uParam0, 333547134))
	{
		uParam1->f_9 = bVar0;
		DEBUG::_0xEF256AE8A5A27966(160, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Palette: ", UNK_0x4379B6FA65D55295(bVar0));
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Tint0: ", sVar3);
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, 915180227))
		{
			uParam1->f_11 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Tint1: ", sVar3);
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&sVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = sVar3;
			DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Tint2: ", sVar3);
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = joaat("ID");
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
		DEBUG::_0xEF256AE8A5A27966(32, 208, sParam3, "[METAPED_CLOTHING_OVERLAY_PARDATA_FILLOUT_LAYER_DATA] Layer Priority: ", uParam1->f_1);
	}
	return true;
}

void func_897(var uParam0, bool bParam1)
{
	bool bVar0;
	struct<18> Var1;
	bool bVar19;
	struct<4> Var20;

	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	bVar0 = func_914(uParam0->f_17);
	if (bVar0 == 0)
	{
		return;
	}
	bVar19 = *uParam0;
	Var20 = { func_748(joaat("WARDROBE"), func_745(1), 1034665895, 1) };
	if (bParam1 && bVar19 != func_761(Var20, bVar0, 1, -1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_OVERLAY_UPDATE_LAYER_DATA_WITH_SERVER_DATA] Server item is different from layer item | EXIT");
		return;
	}
	Var1 = { func_891(func_748(bVar19, Var20, bVar0, 1), 1, 0) };
	if (Var1.f_17 <= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 208, "[METAPED_PLAYER_OVERLAY_UPDATE_LAYER_DATA_WITH_SERVER_DATA] Server item value is <= 0 | EXIT");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(680, 208, "[METAPED_PLAYER_OVERLAY_UPDATE_LAYER_DATA_WITH_SERVER_DATA] Updating alpha to: ", MISC::_0x2B6846401D68E563(func_915(Var1.f_17), 3), " from: ", MISC::_0x2B6846401D68E563(uParam0->f_13, 3));
	uParam0->f_13 = func_915(Var1.f_17);
}

void func_898(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	uParam0->f_2 = bParam1;
	uParam0->f_3 = bParam2;
	uParam0->f_4 = bParam3;
	DEBUG::_0xF0783374333FD8CE(10920, 208, "[METAPED_CLOTHING_OVERLAY_SET_BASE_LAYER_TEXTURE_DATA] Albedo: ", UNK_0x4379B6FA65D55295(bParam1), " Normal: ", UNK_0x4379B6FA65D55295(bParam2), " Material: ", UNK_0x4379B6FA65D55295(bParam3));
	PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_899(var uParam0, var uParam1, int iParam2)
{
	DEBUG::_0xA308F935BDECCEC0(8, 208, "[__METAPED_CLOTHING_OVERLAY_HANDLE_LAYER_ADD_TO_EXISTING_TEXTURE_BLEND] Adding texture to blend: ", iParam2);
	if (iParam2 > 0 && (uParam1[(iParam2 - 1) /*18*/])->f_1 > (uParam1[iParam2 /*18*/])->f_1)
	{
		func_916(uParam0, uParam1);
	}
	else
	{
		func_917(uParam0, uParam1[iParam2 /*18*/]);
	}
}

void func_900(var uParam0, var uParam1, bool bParam2)
{
	DEBUG::_0xA308F935BDECCEC0(648, 208, "[METAPED_CLOTHING_OVERLAY_UPDATE_LAYER_DATA][", uParam1->f_2, "] for Type: ", func_895(uParam1->f_17, 0));
	if (bParam2)
	{
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_2, uParam1->f_13);
}

void func_901(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_668(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_788(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953612.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_701(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953612.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_701(iVar0, iParam2);
	}
}

char* func_902(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1939575505:
			return "CI_ACTION_CLAIM_LOOT";
		case joaat("BATCH"):
			return "CI_ACTION_BATCH";
		case joaat("SPEND"):
			return "CI_ACTION_SPEND";
		case joaat("SELL"):
			return "CI_ACTION_SELL";
		case joaat("UPDATE"):
			return "CI_ACTION_UPDATE";
		case -659726804:
			return "CI_ACTION_CLAIM_SPLIT_AWARD";
		case -460111564:
			return "CI_ACTION_UPDATE_CHARACTER";
		case 0:
			return "CI_ACTION_INVALID";
		case 541670136:
			return "CI_ACTION_BUY_AWARD";
		case 644809794:
			return "CI_ACTION_CLAIM_AWARD";
		case 1168099063:
			return "CI_ACTION_MOVEITEMS";
		case joaat("USE"):
			return "CI_ACTION_USE";
		case 2113164098:
			return "CI_ACTION_BUY_BUNDLE";
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

bool func_903(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_902(iParam0, 0), " -> ", func_527(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_918(iParam1->f_8, iParam0, sVar0, 2048) || func_918(iParam1->f_8, iParam0, sVar0, 32768)) || func_918(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_918(iParam1->f_8, iParam0, sVar0, 4) || func_918(iParam1->f_8, iParam0, sVar0, 256)) || func_918(iParam1->f_8, iParam0, sVar0, 65536)) || func_918(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_918(iParam1->f_8, iParam0, sVar0, 1) || func_918(iParam1->f_8, iParam0, sVar0, 8)) || func_918(iParam1->f_8, iParam0, sVar0, 65536)) || func_918(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_918(iParam1->f_8, iParam0, sVar0, 1) || func_918(iParam1->f_8, iParam0, sVar0, 16)) || func_918(iParam1->f_8, iParam0, sVar0, 2)) || func_918(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_918(iParam1->f_8, iParam0, sVar0, 8) || func_918(iParam1->f_8, iParam0, sVar0, 4096)) || func_918(iParam1->f_8, iParam0, sVar0, 256)) || func_918(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_904(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_905(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_527(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_919(iParam1, 1, 0, 0);
			return iParam1;
		}
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to check out basket!");
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to add item to basket!");
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
		{
			NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
		}
	}
	func_919(iParam1, 2, 0, 0);
	return -1;
}

int func_906(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_527(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_919(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

char* func_907(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSACTION_STATUS_NONE";
		case 1:
			return "TRANSACTION_STATUS_PENDING";
		case 2:
			return "TRANSACTION_STATUS_FAILED";
		case 3:
			return "TRANSACTION_STATUS_SUCCESSFULL";
		case 4:
			return "TRANSACTION_STATUS_CANCELED";
		case 5:
			return "TRANSACTION_STATUS_QUEUED";
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

char* func_908(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MPCO_FLAG_CLEAR";
		case 1:
			return "MPCO_FLAG_OUTFIT_CUSTOMIZED";
		case 2:
			return "MPCO_FLAG_OUTFIT_CUSTOMIZATION_SAVED";
		case 4:
			return "MPCO_FLAG_OUTFIT_HAS_CUSTOM_NAME";
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

bool func_909(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_910(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_911(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

int func_912(bool bParam0)
{
	switch (bParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[GET_BLEND_TYPE_FROM_HASH] Failed to find TEX_BLEND_TYPE for: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

char* func_913(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TEX_BLEND_ALPHA";
		case 1:
			return "TEX_BLEND_OVERLAY";
		case 2:
			return "TEX_BLEND_MULTIPLY";
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

int func_914(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_SLOTID_FROM_LAYER_TYPE] Failed to find a slot id mapping for: ", func_895(iParam0, 0));
	return 0;
}

float func_915(int iParam0)
{
	return func_920((BUILTIN::TO_FLOAT(iParam0) / 10000f), 0.001f, 100f);
}

void func_916(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_SORT_LAYER_BY_PRIORITY] Comparing[", iVar0, "] - ", (uParam1[iVar0 /*18*/])->f_1, " to [", (iVar0 - 1), "] - ", (uParam1[(iVar0 - 1) /*18*/])->f_1);
		if ((uParam1[iVar0 /*18*/])->f_1 < (uParam1[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[(iVar0 - 1) /*18*/])->f_2);
			DEBUG::_0xA308F935BDECCEC0(34952, 208, "[METAPED_CLOTHING_OVERLAY_SORT_LAYER_BY_PRIORITY] Swapping: [", iVar0, "] P=", (uParam1[iVar0 /*18*/])->f_1, " with: [", (iVar0 - 1), "] P=", (uParam1[(iVar0 - 1) /*18*/])->f_1);
			Var2 = { *(uParam1[iVar0 /*18*/]) };
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[(iVar0 - 1) /*18*/]) };
			*(uParam1[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_917(uParam0, uParam1[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_917(var uParam0, var uParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_ADD_LAYER_TO_TEXTURE_BLEND] Adding Layer: ", func_895(uParam1->f_17, 0));
	uParam1->f_2 = PED::_ADD_TEXTURE_LAYER(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_900(uParam0, uParam1, 0);
}

int func_918(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_660(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_919(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_20)
	{
		if (Global_1272425.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_907(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_907(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_907(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_902(iParam2, 0), " and action B to ", func_902(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_921(iParam0, iParam1, iParam2, iParam3);
}

float func_920(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_921(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_20 < 20)
	{
		Global_1272425.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_20.f_1[iVar0 /*21*/] = { Global_1272425.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_922(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_902(iParam2, 0), " and action B ", func_902(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_907(iParam1, 0));
}

void func_922(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_923(&(uParam0->f_4));
}

void func_923(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

