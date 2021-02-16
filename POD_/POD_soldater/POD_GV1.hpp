	//BASE SOLDAT				
	class POD_GV1: B_Soldier_F	
	{
		author = "[POD] Nebel";		
		scope = 2;						
		scopeCurator = 2;				
		scopeArsenal = 2;				
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};	
		weapons[] = {POD_M10_Elcan_LYLA, ACE_vector, Throw, Put};			
		respawnWeapons[] = {POD_M10_Elcan_LYLA, ACE_vector, Throw, Put};		
		displayName = "Gevær 1 (Bravo)";
		icon = "iconManLeader";
		editorPreview = "POD\POD_\POD_soldater\data\POD_Soldat.jpg";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Soldiers";
		backpack = "B_Carryall_mcamo";
		uniformClass = "rhs_uniform_g3_mc";
		Items[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACRE_PRC343,
			ACRE_PRC152,
			ItemAndroid
		};			

		RespawnItems[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACRE_PRC343,
			ACRE_PRC152,
			ItemAndroid
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
