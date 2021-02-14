class ACE_medicalSupplyCrate;
	class POD_Boxes_Medic: ACE_medicalSupplyCrate
	{
		scope = 2;		//
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
	
class B_CargoNet_01_ammo_F; 
	class POD_Boxes_Banana: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD BANANA BOX";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		transportMaxItems = 5000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{
			MACRO_ADDITEM(ACE_Banana,4000)
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	
	class POD_Boxes_STD: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD Standard kasse";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		transportMaxItems = 5000;
		
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
	class POD_Boxes_STD_Minus: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD Standard kasse Minus";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		transportMaxItems = 5000;
		
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
			
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	
	class POD_Boxes_HGR: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD HGR Kasse";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		transportMaxItems = 5000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(HandGrenade,50)
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
	
