	//LMG
	class POD_LMG_Soldat: POD_Soldat	
	{
		author = "[POD] Nebel";					
		weapons[] = {POD_LMG_Elcan_LYLA, Throw, Put};			
		respawnWeapons[] = {POD_LMG_Elcan_LYLA, Throw, Put};		
		displayName = "Letmaskinegevær";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Soldiers";
		Items[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACE_SpareBarrel,
			ACRE_PRC343
		};			

		RespawnItems[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_CableTie),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ACE_SpareBarrel,
			ACRE_PRC343
		};					

		magazines[] = {
			mag_8(100Rnd_762x51_Mag), 
			SmokeShell, SmokeShellGreen, 
			mag_2(Chemlight_green),
			mag_2(HandGrenade)
			};

		respawnMagazines[] = {
			mag_8(100Rnd_762x51_Mag),
			SmokeShell, SmokeShellGreen,
			mag_2(Chemlight_green),
			mag_2(HandGrenade)
			};
	};