class CfgPatches
{
	class POD_Boxes_
	{
		units[] = { 
		"POD_Boxes_Grpkasse_POD",
		"POD_Boxes_Grpkasse_1Grp"
		
		
		
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"POD_","A3_Data_F","A3_Structures_F"};
	};
};


class CfgAddons 
{
	class PreloadAddons 
	{
		class POD_
		{
			list[] = 
			{
				"POD_"
			};
		};
	};
};


class CfgVehicles
{
	class ReammoBox_F;
	class POD_Boxes_Grpkasse_POD : ReammoBox_F
	{
		scope = 2;
		model = "POD\POD_Boxes\POD_Boxes_Grpkasse.p3d";
		displayName = "Gruppe kasse - POD";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Boxes";
		mapSize = 0.69999999;
		hiddenSelections[] = {"Kasse"};
		hiddenSelectionTextures[] = {"POD\POD_Boxes\data\Kasse_POD_Diff.paa"};
		accuracy = 0.2;
		slingLoadCargoMemoryPoints[] = { "SlingLoadCargo1","SlingLoadCargo2" };
		transportMaxMagazines = 10;
		ace_cargo_space = 10;  // Cargo space your vehicle has
		ace_cargo_hasCargo = 3;

	};
	
		class POD_Boxes_Grpkasse_1Grp : POD_Boxes_Grpkasse_POD
	{
		displayName = "Gruppe kasse - 1Grp";
		hiddenSelections[] = {"Kasse"};
		hiddenSelectionTextures[] = {"POD\POD_Boxes\data\Kasse_1Grp_Diff.paa"};

	};
};
