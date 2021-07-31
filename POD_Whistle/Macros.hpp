
//Cargo
	//MACRO_ADDWEAPON(WEAPON,COUNT)
	//MACRO_ADDMAG(MAGAZINE,COUNT)
	//MACRO_ADDITEM(ITEM,COUNT)
	//MACRO_ADDBACKPACK(BACKPACK,COUNT)
		#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM {name = ITEM; count = COUNT;}
		#define MACRO_ADDMAG(MAGAZINE,COUNT) class _xx_##MAGAZINE {magazine = MAGAZINE; count = COUNT;}
		#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON {weapon = WEAPON; count = COUNT;}
		#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK {backpack = BACKPACK; count = COUNT; \}

//Character loadout
	//Magasiner
		#define mag_2(a) a, a
		#define mag_3(a) a, a, a
		#define mag_4(a) a, a, a, a
		#define mag_5(a) a, a, a, a, a
		#define mag_6(a) a, a, a, a, a, a
		#define mag_7(a) a, a, a, a, a, a, a
		#define mag_8(a) a, a, a, a, a, a, a, a
		#define mag_9(a) a, a, a, a, a, a, a, a, a
		#define mag_10(a) a, a, a, a, a, a, a, a, a, a
		#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
		#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	