	class gtr_weap_L119A2_CBN_Tan;
	class POD_M10_Elcan_LYLA: gtr_weap_L119A2_CBN_Tan
	{
		author = "[POD Nebel]";
		displayName="POD M10";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		_generalMacro = "POD_M10_Elcan_LYLA";
		magazines[] = {"30Rnd_556x45_Stanag"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ElcanC79";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15";
			};
		};
	};
	class LMG_M60E6_F;
	class POD_LMG_Elcan_LYLA: LMG_M60E6_F
	{
		author = "[POD Nebel]";
		displayName="POD M60";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		_generalMacro = "POD_LMG_Elcan_LYLA";
		magazines[] = {"100Rnd_762x51_Mag"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ElcanC79";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15";
			};
		};
	};