class ACE_medicalSupplyCrate;
	class POD_Boxes_Medic: ACE_medicalSupplyCrate
	{
		scope = 2;		//
		displayName = "POD Medic box";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";

		class TransportItems
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		//MACRO_ADDMAG(MAGAZINE,COUNT)
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
	};
	
class B_CargoNet_01_ammo_F; 
	class POD_Boxes_Banana: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD BANANA BOX";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		transportMaxItems = 5000;
		
		class TransportItems
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		//MACRO_ADDITEM(ITEM,COUNT)
		{
			MACRO_ADDITEM(ACE_banana,4000)


		};
		
		class TransportMagazines
		{};
		
		class TransportWeapons
		{};
	};