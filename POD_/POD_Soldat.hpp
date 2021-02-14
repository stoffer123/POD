
	class B_Soldier_F;					// For inheritance to work, the base class has to be defined.
	class POD_Soldat: B_Soldier_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		author = "[POD] Nebel";			// The name of the author of the asset, which is displayed in the editor.
		scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
		weapons[] = {POD_M10_Elcan_LYLA, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {POD_M10_Elcan_LYLA, Throw, Put};		// Which weapons the character respawns with.
		displayName = "Soldat";										// The name of the soldier, which is displayed in the editor.
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Soldiers";
		backpack = "B_Carryall_mcamo";
		Items[] = {};				// Which items the character has.
		RespawnItems[] = {};			// Which items the character respawns with.

		magazines[] = {
			mag_8(30Rnd_556x45_Stanag), 
			SmokeShell, SmokeShellGreen, 
			Chemlight_green, 
			Chemlight_green, 
			mag_2(HandGrenade)
			};

		respawnMagazines[] = {
			mag_8(30Rnd_556x45_Stanag),
			SmokeShell, SmokeShellGreen,
			Chemlight_green, Chemlight_green,
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

		/*
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the model this character uses.
			// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"camo"};								// List of model selections which can be changed with hiddenSelectionTextures[]
																	// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
																								// If empty, no texture is used.
		canDeactivateMines = False;				// Can this character deactivate mines?
		engineer = False;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		icon = "iconManMedic";				// If a character has a special role, a special icon shall be used.
		picture = "PictureMedic";				// The same as above, but for the squad picture.
		backpack = "B_Kitbag_mcamo_Eng";		// Which backpack the character is wearing.
		weapons[] = {arifle_MX_ACO_pointer_F, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {arifle_MX_ACO_pointer_F, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(30Rnd_65x39_caseless_mag),mag_3(16Rnd_9x21_Mag), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, mag_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(30Rnd_65x39_caseless_mag),mag_3(16Rnd_9x21_Mag), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green ,mag_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};		// Which items the character respawns with.
		*/
	};