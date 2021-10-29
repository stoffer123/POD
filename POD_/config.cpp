////////////////////////////////////////////////////////////////////
//DeRap: signs_f\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Nov 17 13:57:18 2019 : 'file' last modified on Tue Nov 13 11:14:41 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_
#include "Macros.hpp"

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class POD_
	{
		author = "Platoon of Danes - Mikkelsen";
		name = "Platoon of Danes ";
		url = "https://www.platoonofdanes.com";
		requiredAddons[] = {"A3_Data_F",
		"A3_Structures_F",
		"ace_medical_treatment",
		"A3_Supplies_F_Heli_CargoNets",
		"A3_Characters_F",
		"A3_Weapons_F",
		"uk3cb_baf_vehicles_merlin",
		"rhsusf_main",
		"rhsusf_c_weapons",
		"rhsusf_weapons",
		"rhsusf_weapons2",
		"rhsusf_weapons3",
		"L119A2",
		"UK3CB_baf_vehicles_MAN"
		};
		requiredVersion = 0.1;
		units[] = {
		"POD_Boxes_Medic",
		"POD_Boxes_Banana",
		"POD_Boxes_STD",
		"POD_Boxes_STD_Minus",
		"POD_Boxes_HGR",
		"POD_Boxes_DYKN",
		"POD_Boxes_SKB",
		"POD_Boxes_Logistik",
		"POD_Soldat",
		"POD_LMG",
		"POD_DF",
		"POD_GF",
		"POD_GV1",
		"POD_GV2",
		"POD_GV3",
		"POD_KO",
		"POD_NK",
		"POD_Oscar",
		"POD_SANMD",
		"POD_VK",
		"POD_Heli_Pilot",
		"POD_Merlin",
		"POD_Skilt_POD",
		"POD_Skilt_1Grp",
		"POD_Skilt_2Grp",
		"POD_Skilt_3Grp",
		"POD_Skilt_Deltrop",
		"POD_Skilt_Zeus",
		"POD_Skilt_Reklame_Topgun",
		"POD_Boxes_Grpkasser_POD",
		"POD_Boxes_Grpkasser_1Grp",
		"POD_Boxes_Grpkasser_2Grp",
		"POD_Boxes_Grpkasser_3Grp",
		"POD_Boxes_Grpkasser_Deltrop",
		"POD_Containers_Super"
		
		};
		weapons[] = {"POD_M10_Elcan_LYLA",
		"POD_LMG_Elcan_LYLA",
		"POD_Dysekanon",
		"POD_Handgrenade_Muzzle"
		};
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



class CfgEditorCategories
{
	class POD_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "Platoon of Danes Objects"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class POD_EdSubcat_Skilte // Category class, you point to it in editorSubcategory property
	{
		displayName = "POD Skilte"; // Name visible in the list
	};
	
	class POD_EdSubcat_Boxes // Category class, you point to it in editorSubcategory property
	{
		displayName = "POD Ammo kasser"; // Name visible in the list
	};
	
	class POD_EdSubcat_Grpkasser // Category class, you point to it in editorSubcategory property
	{
		displayName = "POD Gruppe kasser"; // Name visible in the list
	};
	
	class POD_EdSubcat_Soldiers // Category class, you point to it in editorSubcategory property
	{
		displayName = "Soldater";
	};
	
	class POD_EdSubcat_Helicopters // Category class, you point to it in editorSubcategory property
	{
		displayName = "Helikopter";
	};

	class POD_EdSubCat_Containers
	{
		displayName = "Containere";
	};
};

class cfgWeapons
{
	#include "POD_Weapons\POD_Weapons.hpp"
};

class cfgMagazines
{
	#include "POD_Weapons\cfgMagazines.hpp"
};

class cfgAmmo
{
	#include "POD_Weapons\cfgAmmo.hpp"
	
	
};


class cfgVehicles
{  
	//POD Ammo kasser.
	#include "POD_Boxes\POD_Boxes_Banana.hpp" //indeholder baseclass class B_CargoNet_01_ammo_F; 
	#include "POD_Boxes\POD_Boxes_Medic.hpp"  //Indeholder baseclass class ACE_medicalSupplyCrate;
	#include "POD_Boxes\POD_Boxes_DYKN.hpp"
	#include "POD_Boxes\POD_Boxes_HGR.hpp"
	#include "POD_Boxes\POD_Boxes_SKB.hpp"
	#include "POD_Boxes\POD_Boxes_Logistik.hpp"
	#include "POD_Boxes\POD_Boxes_STD.hpp"
	#include "POD_Boxes\POD_Boxes_STD_Minus.hpp"
	#include "POD_Boxes\Grpkasser\POD_Boxes_Grpkasser.hpp"

	//POD Vehicles
	#include "POD_Vehicles\POD_Helicopters.hpp"
	#include "POD_Vehicles\POD_Containers.hpp"

	//POD Skilte
	#include "POD_Skilt\POD_Skilt.hpp"
	
	//POD Soldater
	#include "POD_soldater\POD_Backpacks.hpp"
	#include "POD_soldater\POD_Soldat.hpp"
	#include "POD_soldater\POD_DF.hpp"
	#include "POD_soldater\POD_NK.hpp"
	#include "POD_soldater\POD_SANMD.hpp"
	#include "POD_soldater\POD_Oscar.hpp"
	#include "POD_soldater\POD_GF.hpp"
	#include "POD_soldater\POD_GV1.hpp"
	#include "POD_soldater\POD_GV2.hpp"
	#include "POD_Soldater\POD_GV3.hpp"
	#include "POD_soldater\POD_LMG.hpp"
	#include "POD_soldater\POD_VK.hpp"
	#include "POD_soldater\POD_KO.hpp"
	#include "POD_Soldater\POD_Heli_Pilot.hpp"
	
};

class cfgFactionClasses
{
	class POD_MG
	{
		displayname = "Platoon of Danes Faction";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		priority = 1;
		side = 1;
	};
};

class cfgGroups{

		#include "POD_groups\POD_groups.hpp"
};

#include "ACEX_Fortify_Presets.hpp"