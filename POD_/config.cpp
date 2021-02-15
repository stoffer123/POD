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
		name = "Platoon of Danes Boxes";
		url = "https://www.platoonofdanes.com";
		requiredAddons[] = {"A3_Data_F","A3_Structures_F","ace_medical_treatment","A3_Supplies_F_Heli_CargoNets","A3_Characters_F","L119A2"};
		requiredVersion = 0.1;
		units[] = {"POD_Boxes_Medic","POD_Boxes_Banana","POD_Soldat","POD_Soldat_LMG","POD_Boxes_STD","POD_Boxes_STD_Minus","POD_Boxes_HGR","POD_Boxes_DYKN","POD_Boxes_LMG","POD_Boxes_Logistik"};
		weapons[] = {"POD_M10_Elcan_LYLA","POD_LMG_Elcan_LYLA"};
	};
};

class CfgEditorCategories
{
	class POD_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "Platoon of Danes"; // Name visible in the list
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
	class POD_EdSubcat_Soldiers // Category class, you point to it in editorSubcategory property
	{
		displayName = "Soldater";
	};
};

class cfgWeapons
{
	#include "POD_Weapons\POD_Weapons.hpp"
};


class cfgVehicles
{  
	//POD Ammo kasser.
	#include "POD_Boxes\POD_Boxes_Banana.hpp" //indeholder baseclass class B_CargoNet_01_ammo_F; 
	#include "POD_Boxes\POD_Boxes_Medic.hpp"  //Indeholder baseclass class ACE_medicalSupplyCrate;
	#include "POD_Boxes\POD_Boxes_DYKN.hpp"
	#include "POD_Boxes\POD_Boxes_HGR.hpp"
	#include "POD_Boxes\POD_Boxes_LMG.hpp"
	#include "POD_Boxes\POD_Boxes_Logistik.hpp"
	#include "POD_Boxes\POD_Boxes_STD.hpp"
	#include "POD_Boxes\POD_Boxes_STD_Minus.hpp"
	
	//POD Skilte
	#include "POD_Skilt\POD_Skilt.hpp"
	
	//POD Soldater
	#include "POD_soldater\POD_Backpacks.hpp"
	#include "POD_soldater\POD_Soldat.hpp"
	#include "POD_soldater\POD_DF.hpp"
	#include "POD_soldater\POD_LMG.hpp"
	
	
};