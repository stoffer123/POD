////////////////////////////////////////////////////////////////////
//DeRap: signs_f\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Nov 17 13:57:18 2019 : 'file' last modified on Tue Nov 13 11:14:41 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

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
	class POD_Whistle
	{
		author = "Platoon of Danes - Mikkelsen";
		name = "Platoon of Danes Whistle ";
		url = "https://www.platoonofdanes.com";
		requiredAddons[] = {"A3_Data_F","A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {
		
		};
		weapons[] = {"POD_Whistle"};
	};
};   



class CfgWeapons
{
    class ItemCore;
    class InventoryItem_Base_F;
    
    class POD_Whistle: ItemCore
    {
        author = "[POD] Mikkelsen";
        displayName = "POD Whistle";
        model = "POD\POD_Whistle\POD_Whistle.p3d";
        scope = 2;      
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "Fløjte!";
        class ItemInfo: InventoryItem_Base_F
        {
            mass=1;
        };
    };
};