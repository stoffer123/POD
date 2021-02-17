
	class POD_Boxes_DYKN: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD DYKN + AT4";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		maximumLoad = 50000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{
			MACRO_ADDWEAPON(POD_Dysekanon,10)
			MACRO_ADDWEAPON(tf47_at4_heat,100)
		};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(tf47_m3maaws_HEAT,100)
			MACRO_ADDMAG(tf47_m3maaws_HE,100)
			
		};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{
			MACRO_ADDITEM(ACE_Vector,10)
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	