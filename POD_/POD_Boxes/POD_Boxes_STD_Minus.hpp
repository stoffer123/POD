	class POD_Boxes_STD_Minus: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;
		displayName = "POD Standard kasse Minus";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		maximumLoad = 50000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{
			MACRO_ADDWEAPON(tf47_at4_heat,2)
			MACRO_ADDWEAPON(ACE_VMH3,2)
			
		};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(DemoCharge_Remote_Mag,5)
			MACRO_ADDMAG(SatchelCharge_Remote_Mag,2)
		};		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{
			MACRO_ADDITEM(ACE_Clacker,1)
			MACRO_ADDITEM(ACE_wirecutter,1)
			MACRO_ADDITEM(ACE_EntrenchingTool,2)
			MACRO_ADDITEM(ACE_SpraypaintBlue,2)
			MACRO_ADDITEM(ACE_SpraypaintRed,2)
			MACRO_ADDITEM(ACE_SpraypaintGreen,2)
			MACRO_ADDITEM(ACE_microDAGR,2)
			
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	