
	class POD_Boxes_SKB: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		displayName = "POD Skydebane Kasse";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		maximumLoad = 50000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{
			MACRO_ADDWEAPON(POD_LMG_Elcan_LYLA,10)
			MACRO_ADDWEAPON(POD_M10_Elcan_LYLA,10)
			MACRO_ADDWEAPON(rhs_weap_M320,10)
		};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(100Rnd_762x51_Mag,100)
			MACRO_ADDMAG(ACE_SpareBarrel,10)
			MACRO_ADDMAG(POD_30Rnd_556,50)
			MACRO_ADDMAG(rhs_mag_M441_HE,50)
			MACRO_ADDMAG(1Rnd_SmokeRed_Grenade_shell,50)
		};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{
		
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	