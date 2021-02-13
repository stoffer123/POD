////////////////////////////////////////////////////////////////////
//DeRap: signs_f\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Nov 17 13:57:18 2019 : 'file' last modified on Tue Nov 13 11:14:41 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_
#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM {name = ITEM; count = COUNT;}
#define MACRO_ADDMAG(MAGAZINE,COUNT) class _xx_##MAGAZINE {magazine = MAGAZINE; count = COUNT;}
#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON {weapon = WEAPON; count = COUNT;}
#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK {backpack = BACKPACK; count = COUNT; \}
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
		units[] = {"POD_Boxes_Medic","POD_Boxes_Banana","POD_S_Medic"};
		weapons[] = {};
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
		displayName = "Soldat Medic";
	};
};

class cfgWeapons{
	#include "POD_M10_ELCAN.hpp"
};


class cfgVehicles
{  
	#include "POD_Boxes.hpp"
	#include "POD_Skilt.hpp"
	#include "POD_S_Medic.hpp"
};