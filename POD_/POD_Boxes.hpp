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
	
	class POD_Boxes_DYKN: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD DYKN + AT4";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		transportMaxItems = 5000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{
			MACRO_ADDWEAPON(tf47_m3maaws,10)
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
			MACRO_ADDITEM(tf47_optic_m3maaws,10)
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
	};
	
	class POD_Boxes_LMG: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD LMG Kasse";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		transportMaxItems = 5000;
		
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
	
	class POD_Boxes_Logistik: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		displayName = "POD Logistik kasse";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		maximumLoad = 200000;
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{
			MACRO_ADDWEAPON(gtr_weap_L119A2_CBN_Tan,5)
			MACRO_ADDWEAPON(LMG_M60E6_F,5)
			MACRO_ADDWEAPON(tf47_m3maaws,5)
			MACRO_ADDWEAPON(tf47_at4_heat,100)
			MACRO_ADDWEAPON(ACE_VMH3,100)
		};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(30Rnd_556x45_Stanag,1000)
			MACRO_ADDMAG(100Rnd_762x51_Mag,1000)
			MACRO_ADDMAG(tf47_m3maaws_HEAT,100)
			MACRO_ADDMAG(tf47_m3maaws_HE,100)
			MACRO_ADDMAG(HandGrenade,200)
			MACRO_ADDMAG(SmokeShell,200)
			MACRO_ADDMAG(ACE_M84,200)
			MACRO_ADDMAG(DemoCharge_Remote_Mag,100)
			MACRO_ADDMAG(SatchelCharge_Remote_Mag,50)	
		};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{
			MACRO_ADDITEM(ACE_elasticBandage,1000)
			MACRO_ADDITEM(ACE_tourniquet,100)
			MACRO_ADDITEM(ACE_morphine,100)
			MACRO_ADDITEM(ACE_adenosine,100)
			MACRO_ADDITEM(ACE_epinephrine,100)
			MACRO_ADDITEM(ACE_salineIV,100)
			MACRO_ADDITEM(ACE_salineIV_500,100)
			MACRO_ADDITEM(ACE_salineIV_250,100)
			MACRO_ADDITEM(ACE_surgicalKit,10)
			MACRO_ADDITEM(ACE_bodyBag,100)
			MACRO_ADDITEM(ACE_splint,100)
			MACRO_ADDITEM(ACE_CableTie,100)
			MACRO_ADDITEM(ACE_Clacker,100)
			MACRO_ADDITEM(ACE_SpareBarrel,100)
			MACRO_ADDITEM(ACE_wirecutter,20)
			MACRO_ADDITEM(ACE_EntrenchingTool,20)
			MACRO_ADDITEM(ACE_SpraypaintBlack,20)
			MACRO_ADDITEM(ACE_SpraypaintBlue,20)
			MACRO_ADDITEM(ACE_SpraypaintRed,20)
			MACRO_ADDITEM(ACE_SpraypaintGreen,20)
			MACRO_ADDITEM(ToolKit,10)
			MACRO_ADDITEM(ACE_Banana,100)
			MACRO_ADDITEM(Binocular,100)
			MACRO_ADDITEM(ACE_Vector,100)
			MACRO_ADDITEM(DDAM_PVS14,100)
			MACRO_ADDITEM(optic_ElcanC79,10)
			MACRO_ADDITEM(rhsusf_acc_anpeq15,10)
			MACRO_ADDITEM(tf47_optic_m3maaws,10)
			MACRO_ADDITEM(Acre_PRC117F,50)
			MACRO_ADDITEM(Acre_PRC152,50)
			MACRO_ADDITEM(Acre_PRC343,50)
			MACRO_ADDITEM(rhs_uniform_g3_mc,20)
			MACRO_ADDITEM(V_DDAM_Vest_MTS_TYR,20)
			MACRO_ADDITEM(H_DDAM_Helmet_M11,20)
			MACRO_ADDITEM(H_DDAM_Helmet_M11_camo,20)
			MACRO_ADDITEM(H_HelmetCrew_I,20)
		};
		
		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{
			class B_Carryall_mcamo
			{
				backpack = B_Carryall_mcamo;
				count = 20;
				
			};
			
			class B_AssaultPack_mcamo
			{
				backpack = B_AssaultPack_mcamo;
				count = 20;
				
			};
		};
	};