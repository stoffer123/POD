	//BASE SOLDAT				
	class POD_GV3: B_Soldier_F	
	{
		author = "[POD] Nebel";		
		scope = 2;						
		scopeCurator = 2;				
		scopeArsenal = 2;				
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};	
		weapons[] = {POD_M10_Elcan_LYLA, ACE_Vector, Throw, Put};			
		respawnWeapons[] = {POD_M10_Elcan_LYLA, ACE_Vector, Throw, Put};		
		displayName = "GV3 (Sygehjælper)";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Soldiers";
		backpack = "POD_BP_SANMD";
		uniformClass = "rhs_uniform_g3_mc";
		Items[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACRE_PRC343,
			ACRE_PRC152
		};			

		RespawnItems[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACRE_PRC343,
			ACRE_PRC152
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
			rhs_googles_clear,
			DDAM_PVS14
			};

		respawnLinkedItems[] = {
			V_DDAM_Vest_MTS_TYR,
			H_DDAM_Helmet_M11_camo,
			ItemMap,
			ItemCompass,
			ItemWatch,
			rhs_googles_clear,
			DDAM_PVS14
			};
	};