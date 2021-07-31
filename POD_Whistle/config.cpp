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
	class POD_Whistle
	{
		author = "Platoon of Danes - Mikkelsen";
		name = "Platoon of Danes Whistle ";
		url = "https://www.platoonofdanes.com";
		requiredAddons[] = {"A3_Data_F","A3_Structures_F","A3_Data_F_AoW_Loadorder","A3_Data_F_Mod_Loadorder","ace_interact_menu"};
		requiredVersion = 0.1;
		units[] = {
		
		};
		weapons[] = {"POD_Whistle"};
	};
};  




class CfgSounds 
{
    sounds[] = {};
    class WhistleShort 
	{
        name = "";
        sound[] = {"POD\POD_Whistle\sounds\POD_Whistle_short.ogg", 7, 1, 300};
        titles[] = {};
    };
    class WhistleLong 
	{
        name = "";
        sound[] = {"POD\POD_Whistle\sounds\POD_Whistle_long.ogg", 7, 1, 300};
        titles[] = {};
    };

    class WhistleBaby {
        name = "";
        sound[] = {"POD\POD_Whistle\sounds\POD_Whistle_WhistleBaby.ogg", 7, 1, 300};
        titles[] = {};
    };
};




 

class CfgVehicles 
{
	class Item_Base_F;
    class POD_Whistle_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "POD Whistle Item";
        author = "[POD] Mikkelsen";
        vehicleClass = "Items";
        class TransportItems 
		{
            MACRO_ADDITEM(POD_Whistle,1);
        };
    };
	
	
	class Man;
	class CAManBase: Man
	{
	 class ACE_SelfActions 
	 {
            class ACE_Equipment 
			{
                class Whistle 
				{
                    displayName = "Whistle";
					//condtion = "'POD_Whistle' in items _player";
					condition = ("POD_Whistle" in Items _player)
                    icon = "POD\POD_Whistle\images\icon.paa";
                    class Short 
					{
                        displayName = "Short";
                        statement = "terminate whistle_script; whistle_script = ['WhistleShort'] execVM 'POD\POD_Whistle\scripts\POD_whistle.sqf'";
                    };
                    class Long 
					{
                        displayName = "Long";
                        statement = "terminate whistle_script; whistle_script = ['WhistleLong'] execVM 'POD\POD_Whistle\scripts\POD_whistle.sqf'";
                    };
                    class WhistleBaby
					{
                        displayName = "WhistleBaby";
                        statement = "terminate whistle_script; whistle_script = ['WhistleBaby'] execVM 'POD\POD_Whistle\scripts\POD_whistle.sqf'";
                    };
                };
            };
        };
	};
};


class CfgWeapons 
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore: CBA_MiscItem {};

    class POD_Whistle: ACE_ItemCore 
	{
        author = "POD - Mikkelsen";
        scope = 2;
        displayName = "POD Whistle";
        descriptionShort = "POD Whistle";
        model = "POD\POD_Whistle\POD_Whistle.p3d";
        picture = "\POD\POD_Whistle\images\POD_Whistle_Picture";
        icon = "iconObject_circle";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo 
		{
            mass = 1;
        };
		
    };
};