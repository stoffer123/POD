	class POD_Boxes_Grpkasser_POD: B_CargoNet_01_ammo_F
	{
		scope = 2;		//
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		displayName = "Gruppe kasse POD";
		editorCategory = "POD_EdCat";
		editorSubcategory = "POD_EdSubcat_Grpkasser";
		model = "POD\POD_\POD_Boxes\Grpkasser\POD_Boxes_Grpkasse_POD.p3d";
		maximumLoad = 50000;
		editorPreview = "POD\POD_\POD_Boxes\Grpkasser\data\PODEditor.jpg";
		//Dragging
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
		
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
	
	class POD_Boxes_Grpkasser_1Grp: POD_Boxes_Grpkasser_POD
	{
		model = "POD\POD_\POD_Boxes\Grpkasser\POD_Boxes_Grpkasse_1Grp.p3d";
		displayName = "Gruppe kasse 1. Gruppe";
		editorPreview = "POD\POD_\POD_Boxes\Grpkasser\data\1GrpEditor.jpg";
		
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

	class POD_Boxes_Grpkasser_2Grp: POD_Boxes_Grpkasser_POD
	{
		model = "POD\POD_\POD_Boxes\Grpkasser\POD_Boxes_Grpkasse_2Grp.p3d";
		displayName = "Gruppe kasse 2. Gruppe";
		editorPreview = "POD\POD_\POD_Boxes\Grpkasser\data\2GrpEditor.jpg";
		
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

	class POD_Boxes_Grpkasser_3Grp: POD_Boxes_Grpkasser_POD
	{
		model = "POD\POD_\POD_Boxes\Grpkasser\POD_Boxes_Grpkasse_3Grp.p3d";
		displayName = "Gruppe kasse 3. Gruppe";
		editorPreview = "POD\POD_\POD_Boxes\Grpkasser\data\3GrpEditor.jpg";
		
		
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

	class POD_Boxes_Grpkasser_Deltrop: POD_Boxes_Grpkasser_POD
	{
		model = "POD\POD_\POD_Boxes\Grpkasser\POD_Boxes_Grpkasse_Deltrop.p3d";
		displayName = "Gruppe kasse Deltrop";
		editorPreview = "POD\POD_\POD_Boxes\Grpkasser\data\DeltropEditor.jpg";
		
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