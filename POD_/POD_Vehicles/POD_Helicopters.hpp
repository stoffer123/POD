	//POD Merlin
	class UK3CB_BAF_Merlin_HC3_18_GPMG;
	class POD_Merlin: UK3CB_BAF_Merlin_HC3_18_GPMG	
	{
		displayName = "POD Merlin";
		faction = "POD_MG";
		editorSubcategory = "POD_EdSubcat_Helicopters";
		crew = "POD_Heli_Pilot";
		typicalCargo[]=
			{
			"POD_GF"
			};
		class EventHandlers
		{
			class POD_Heliscript
			{
				init = "_this execVM 'POD\POD_\sqf\heliscript.sqf'";
			};
			
		};
		
		
		class TransportWeapons
		//MACRO_ADDWEAPON(WEAPON,COUNT)
		{};
		
		class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(UK3CB_BAF_762_200Rnd_T,15)
		};
		
		class TransportItems
		//MACRO_ADDITEM(ITEM,COUNT)
		{};
		

		class TransportBackpacks
		//MACRO_ADDBACKPACK(BACKPACK,COUNT)
			{
				class POD_BP_Pilot
				{
					backpack = POD_BP_Pilot;
					count = 2;
				
				};
			};
		
		
	};
	