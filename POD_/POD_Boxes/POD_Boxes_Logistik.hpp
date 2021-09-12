class POD_Boxes_Logistik: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
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
			MACRO_ADDWEAPON(rhs_weap_M320,10)
		};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(POD_30Rnd_556,1000)
			MACRO_ADDMAG(100Rnd_762x51_Mag,1000)
			MACRO_ADDMAG(tf47_m3maaws_HEAT,100)
			MACRO_ADDMAG(tf47_m3maaws_HE,100)
			MACRO_ADDMAG(POD_HandGrenade,200)
			MACRO_ADDMAG(SmokeShell,200)
			MACRO_ADDMAG(ACE_M84,200)
			MACRO_ADDMAG(DemoCharge_Remote_Mag,100)
			MACRO_ADDMAG(SatchelCharge_Remote_Mag,50)
			MACRO_ADDMAG(ACE_SpareBarrel,10)
			MACRO_ADDMAG(rhs_mag_M441_HE,100)
			MACRO_ADDMAG(1Rnd_SmokeRed_Grenade_shell,100)
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