class ACE_medicalSupplyCrate;
	class POD_Boxes_Medic: ACE_medicalSupplyCrate
	{
		scope = 2;		//
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		displayName = "POD Medic box";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";

		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{
			MACRO_ADDITEM(ACE_elasticBandage,60)
			MACRO_ADDITEM(ACE_morphine,20)
			MACRO_ADDITEM(ACE_adenosine,20)
			MACRO_ADDITEM(ACE_epinephrine,20)
			MACRO_ADDITEM(ACE_salineIV,10)
			MACRO_ADDITEM(ACE_tourniquet,10)
			MACRO_ADDITEM(ACE_salineIV_500,10)
			MACRO_ADDITEM(ACE_salineIV_250,10)
			MACRO_ADDITEM(ACE_surgicalKit,2)
			MACRO_ADDITEM(ACE_bodyBag,4)
			MACRO_ADDITEM(ACE_splint,20)

		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};