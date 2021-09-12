class POD_Boxes_HGR: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		displayName = "POD HGR Kasse";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		maximumLoad = 50000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(POD_HandGrenade,50)
			MACRO_ADDMAG(SmokeShell,50)
			MACRO_ADDMAG(ACE_M84,50)
			MACRO_ADDMAG(rhs_mag_m69,50)
			
		};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	