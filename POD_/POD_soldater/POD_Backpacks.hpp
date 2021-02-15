//DF backpack
class B_Carryall_mcamo;
class POD_BP_DF: B_Carryall_mcamo 
{
	
	scope = 2;
	author = "[POD] Nebel";
	displayName = "Delingsføre Taske";
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
	displayName = "SYHJ taske";
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
	};
};