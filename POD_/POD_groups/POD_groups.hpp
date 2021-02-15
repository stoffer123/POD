class west
{
	class POD_MG
	{
		name = "Platoon of Danes";
		class infantry
		{
			name = "Infanteri";
			class POD_infantry{
				name = "POD Gruppe";
				side = 1;
				faction = "POD_faction"
				rarityGroup = 0.3;
				class unit0
				{
				side = 1;
                vehicle = "POD_GF";
                rank = "SERGENT";
                position[] = {0,0,0};
				};
				class unit1
				{
				side = 1;
                vehicle = "POD_GV1";
                rank = "Corporal";
                position[] = {+2,0,0};
				};
				class unit2
				{
				side = 1;
                vehicle = "POD_GV2";
                rank = "Private";
                position[] = {0,-2,0};
				};
				class unit3
				{
				side = 1;
                vehicle = "POD_GV3";
                rank = "Private";
                position[] = {+2,-2,0};
				};
				class unit4
				{
				side = 1;
                vehicle = "POD_LMG";
                rank = "Private";
                position[] = {0,+2,0};
				};
				class unit5
				{
				side = 1;
                vehicle = "POD_LMG";
                rank = "Private";
                position[] = {+2,+2,0};
				};
				class unit6
				{
				side = 1;
                vehicle = "POD_Soldat";
                rank = "Private";
                position[] = {0,-4,0};
				};
				class unit7
				{
				side = 1;
                vehicle = "POD_Soldat";
                rank = "Private";
                position[] = {+2,-4,0};
				};
			};
		};
	};
};