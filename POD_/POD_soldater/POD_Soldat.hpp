	//BASE SOLDAT
	class B_Soldier_F;					
	class POD_Soldat: B_Soldier_F	
	{
		author = "[POD] Nebel";		
		scope = 2;						
		scopeCurator = 2;				
		scopeArsenal = 2;				
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};	
		weapons[] = {POD_M10_Elcan_LYLA, Throw, Put};			
		respawnWeapons[] = {POD_M10_Elcan_LYLA, Throw, Put};		
		displayName = "Soldat";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Soldiers";
		backpack = "B_Carryall_mcamo";
		Items[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACRE_PRC343
		};			

		RespawnItems[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACRE_PRC343
		};					

		magazines[] = {
			mag_8(30Rnd_556x45_Stanag), 
			SmokeShell, SmokeShellGreen, 
			mag_2(Chemlight_green),
			mag_2(HandGrenade)
			};

		respawnMagazines[] = {
			mag_8(30Rnd_556x45_Stanag),
			SmokeShell, SmokeShellGreen,
			mag_2(Chemlight_green),
			mag_2(HandGrenade)
			};

		linkedItems[] = {
			V_DDAM_Vest_MTS_TYR,
			H_DDAM_Helmet_M11_camo,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio,
			rhs_googles_clear,
			DDAM_PVS14
			};

		respawnLinkedItems[] = {
			V_DDAM_Vest_MTS_TYR,
			H_DDAM_Helmet_M11_camo,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio,
			rhs_googles_clear,
			DDAM_PVS14
			};
	};