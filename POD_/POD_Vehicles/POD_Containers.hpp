	//Super container
	class UK3CB_BAF_MAN_HX58_Container_Green;
	class POD_Containers_Super: UK3CB_BAF_MAN_HX58_Container_Green	
	{
		displayName = "POD Super container";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Containers";
		ace_refuel_flowRate = 15;
		ace_refuel_fuelCargo = 60000;
		ace_refuel_hooks[] = {{1.4,-3,-1},{1.4,-3,-1}}; // Nozzle hooks positions
		ace_rearm_defaultSupply = 120000;
		
		transportRepair = 0;
		transportFuel = 0;
		transportAmmo = 0;

		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{};
		

		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		{};
		
		
	};
	