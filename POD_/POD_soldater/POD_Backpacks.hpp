//DF backpack
class B_Carryall_mcamo;
class POD_BP_DF: B_Carryall_mcamo 
{
	
	scope = 2;
	author = "[POD] Nebel";
	displayName = "[POD] Delingsfører Taske";
	maximumLoad = 320;
	mass = 20;
	class TransportItems 
	{
		MACRO_ADDITEM(ACRE_PRC117F,1)
	};
};

//SANMD backpack
class POD_BP_SANMD: B_Carryall_mcamo 
{
	
	scope = 2;
	author = "[POD] Nebel";
	displayName = "[POD] SYHJ taske";
	maximumLoad = 320;
	mass = 20;
	class TransportItems 
	{
		MACRO_ADDITEM(ACE_epinephrine,10)
		MACRO_ADDITEM(ACE_morphine,10)
		MACRO_ADDITEM(ACE_tourniquet,5)
		MACRO_ADDITEM(ACE_salineIV_500, 5)
		MACRO_ADDITEM(ACE_elasticBandage, 30)
		MACRO_ADDITEM(ACE_adenosine, 10)
		MACRO_ADDITEM(ACE_salineIV, 5)
		MACRO_ADDITEM(ACE_salineIV_250, 5)
		MACRO_ADDITEM(ACE_splint, 10)
		MACRO_ADDITEM(ACE_surgicalKit, 1)
	};
};

class POD_BP_DYKN: B_Carryall_mcamo 
{
	
	scope = 2;
	author = "[POD] Nebel";
	displayName = "[POD] Dyse taske";
	maximumLoad = 320;
	mass = 20;
	class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(tf47_m3maaws_HEAT,2)
			MACRO_ADDMAG(tf47_m3maaws_HE,2)
			
		};

};


class POD_BP_LMG: B_Carryall_mcamo 
{
	
	scope = 2;
	author = "[POD] Nebel";
	displayName = "[POD] LMG Taske";
	maximumLoad = 320;
	mass = 20;
	class TransportMagazines
		//MACRO_ADDMAG(MAGAZINE,COUNT)
		{
			MACRO_ADDMAG(ACE_SpareBarrel,1)
			MACRO_ADDMAG(100Rnd_762x51_Mag,8)
			
		};

};