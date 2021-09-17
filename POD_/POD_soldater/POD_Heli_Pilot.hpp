	//Heli pilot			
	class POD_Heli_Pilot: B_Soldier_F	
	{
		author = "[POD] Mikkelsen";		
		scope = 2;						
		scopeCurator = 2;				
		scopeArsenal = 2;				
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};	
		weapons[] = {rhsusf_weap_glock17g4, Throw, Put};			
		respawnWeapons[] = {rhsusf_weap_glock17g4, Throw, Put};		
		displayName = "Helikopter Pilot";
		icon = "iconMan";
		attendant = 1;
		editorPreview = "POD\POD_\POD_soldater\data\POD_Heli_Pilot.jpg";
		faction = "POD_MG"; // Class from CfgFactionClasses. Usually used for characters and vehicles.
		editorSubcategory = "POD_EdSubcat_Soldiers";
		uniformClass = "U_DDAM_pilot";
		Items[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ItemcTab,
			ACE_microDAGR,
			ACE_Flashlight_MX991,
			ACE_EarPlugs,
		};			

		RespawnItems[] = {
			mag_2(ACE_elasticBandage),
			mag_2(ACE_morphine),
			mag_2(ACE_tourniquet),
			ItemcTab,
			ACE_microDAGR,
			ACE_Flashlight_MX991,
			ACE_EarPlugs,
		};					

		magazines[] = {
			mag_4(rhsusf_mag_17Rnd_9x19_FMJ), 
			mag_2(SmokeShellGreen), 
			mag_2(Chemlight_green),
			};

		respawnMagazines[] = {
			mag_4(rhsusf_mag_17Rnd_9x19_FMJ),
			mag_2(SmokeShellGreen),
			mag_2(Chemlight_green),
			};

		linkedItems[] = {
			V_PlateCarrier2_blk,
			H_CrewHelmetHeli_B,
			ItemMap,
			ItemCompass,
			ItemWatch,
			NVGoggles_OPFOR
			};

		respawnLinkedItems[] = {
			V_PlateCarrier2_blk,
			H_CrewHelmetHeli_B,
			ItemMap,
			ItemCompass,
			ItemWatch,
			NVGoggles_OPFOR
			};
	};
