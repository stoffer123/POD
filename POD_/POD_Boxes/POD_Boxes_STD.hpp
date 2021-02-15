
	class POD_Boxes_STD: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD Standard kasse";
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
			MACRO_ADDMAG(30Rnd_556x45_Stanag,32) 
			MACRO_ADDMAG(100Rnd_762x51_Mag,16)
			MACRO_ADDMAG(tf47_m3maaws_HEAT,2)
			MACRO_ADDMAG(tf47_m3maaws_HE,1)
			MACRO_ADDMAG(HandGrenade,12)
			MACRO_ADDMAG(SmokeShell,12)
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
			
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};