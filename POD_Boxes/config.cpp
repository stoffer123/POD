class CfgPatches
{
	class POD_Boxes_Testbox
	{
		units[] = { "POD_Boxes_Testbox" };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class ReammoBox_F;
	class POD_Boxes_Testbox : ReammoBox_F
	{
		scope = 2;
		model = "POD\POD_Boxes\POD_Boxes_Testbox.p3d";
		displayName = "PODTestBox";
		vehicleClass = "small_items";
		mapSize = 0.69999999;
		accuracy = 0.2;
		slingLoadCargoMemoryPoints[] = { "SlingLoadCargo1","SlingLoadCargo2" };
		transportMaxMagazines = 10;
		ace_cargo_space = 10;  // Cargo space your vehicle has
		ace_cargo_hasCargo = 3;

	};
};
