
	class POD_Boxes_LMG: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD LMG Kasse";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		maximumLoad = 50000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{
			MACRO_ADDWEAPON(LMG_M60E6_F,10)
			MACRO_ADDWEAPON(POD_LMG_Elcan_LYLA,10)
		};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(100Rnd_762x51_Mag,100)			
		};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{
			MACRO_ADDITEM(ACE_SpareBarrel,10)
			MACRO_ADDITEM(optic_ElcanC79,10)
			MACRO_ADDITEM(rhsusf_acc_anpeq15,10)
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	