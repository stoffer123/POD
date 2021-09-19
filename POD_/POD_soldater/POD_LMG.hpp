	//LMG
	class POD_LMG: POD_Soldat	
	{
		author = "[POD] Nebel";					
		weapons[] = {POD_LMG_Elcan_LYLA, ACE_vector, Throw, Put};			
		respawnWeapons[] = {POD_LMG_Elcan_LYLA, ACE_vector, Throw, Put};		
		displayName = "Let maskingeværs skytte";
		icon = "iconManMG";
		editorPreview = "POD\POD_\POD_soldater\data\POD_LMG.jpg";
		faction = "POD_MG"; // Class from CfgFactionClasses. Usually used for characters and vehicles.
		editorSubcategory = "POD_EdSubcat_Soldiers";
		backpack = "POD_BP_LMG";
		uniformClass = "rhs_uniform_g3_mc";
		Items[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_4(ACE_tourniquet),
			ACE_Flashlight_MX991,
			ACE_EarPlugs,
			ACRE_PRC343
		};			

		RespawnItems[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_4(ACE_tourniquet),
			ACE_Flashlight_MX991,
			ACE_EarPlugs,
			ACRE_PRC343
		};					

		magazines[] = { 
			SmokeShell,
			SmokeShellGreen, 
			mag_2(Chemlight_green),
			mag_2(POD_HandGrenade)
			};

		respawnMagazines[] = {
			SmokeShell,
			SmokeShellGreen,
			mag_2(Chemlight_green),
			mag_2(POD_HandGrenade)
			};
	};