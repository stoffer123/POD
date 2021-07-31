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
				faction = "POD_MG";
				rarityGroup = 0.3;
				class unit0
				{
				side = 1;
                vehicle = "POD_GF";
                rank = "SERGEANT";
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
			
			
			
			
			class POD_Deltrop{
				name = "POD Deltrop";
				side = 1;
				faction = "POD_faction";
				rarityGroup = 0.3;
				class unit0
				{
				side = 1;
                vehicle = "POD_DF";
                rank = "LIEUTENANT";
                position[] = {0,0,0};
				};
				class unit1
				{
				side = 1;
                vehicle = "POD_NK";
                rank = "Sergeant";
                position[] = {+2,0,0};
				};
				class unit2
				{
				side = 1;
                vehicle = "POD_SANMD";
                rank = "Private";
                position[] = {0,-2,0};
				};
				class unit3
				{
				side = 1;
                vehicle = "POD_Oscar";
                rank = "Private";
                position[] = {+2,-2,0};
				};
			};		
			class POD_BZ{
				name = "POD Besætning";
				side = 1;
				faction = "POD_faction";
				rarityGroup = 0.3;
				class unit0
				{
				side = 1;
                vehicle = "POD_VK";
                rank = "Sergeant";
                position[] = {0,0,0};
				};
				class unit1
				{
				side = 1;
                vehicle = "POD_KO";
                rank = "Private";
                position[] = {+2,0,0};
				};
			};
		};
	};
};