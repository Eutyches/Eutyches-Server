// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class eutyches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class TShirt_ColorBase;
	class tshirt_atc: TShirt_ColorBase
	{
		displayName="Alive Through Christ Gaming T-Shirt";
		descriptionShort="ATC T-Shirt by Eutyches";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"eutyches_clothing\tshirt_atc_co.paa",
			"eutyches_clothing\tshirt_atc_co.paa",
			"eutyches_clothing\tshirt_atc_co.paa"
		};
	};
	class tshirt_fssp: TShirt_ColorBase
	{
		displayName="Priestly Fraternity of St. Peter T-Shirt";
		descriptionShort="FSSP T-Shirt by Eutyches";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"eutyches_clothing\tshirt_fssp_co.paa",
			"eutyches_clothing\tshirt_fssp_co.paa",
			"eutyches_clothing\tshirt_fssp_co.paa"
		};
	};
		class tshirt_hobbit: TShirt_ColorBase
	{
		displayName="Mr. Baggins T-Shirt by Eutyches";
		descriptionShort="Baggins T-Shirt by Eutyches";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"eutyches_clothing\tshirt_hobbit_co.paa",
			"eutyches_clothing\tshirt_hobbit_co.paa",
			"eutyches_clothing\tshirt_hobbit_co.paa"
		};
	};
		class tshirt_caf: TShirt_ColorBase
	{
		displayName="Christian Armed Forces T-Shirt by Eutyches";
		descriptionShort="CAF T-Shirt by Eutyches";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"eutyches_clothing\tshirt_caf_co.paa",
			"eutyches_clothing\tshirt_caf_co.paa",
			"eutyches_clothing\tshirt_caf_co.paa"
		};
	};
		class tshirt_rush: TShirt_ColorBase
	{
		displayName="Rush Medical College T-Shirt by Eutyches";
		descriptionShort="Rush T-Shirt by Eutyches";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"eutyches_clothing\tshirt_rush_co.paa",
			"eutyches_clothing\tshirt_rush_co.paa",
			"eutyches_clothing\tshirt_rush_co.paa"
		};
	};
		class tshirt_ust: TShirt_ColorBase
	{
		displayName="University of St. Thomas T-Shirt by Eutyches";
		descriptionShort="UST T-Shirt by Eutyches";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"eutyches_clothing\tshirt_ust_co.paa",
			"eutyches_clothing\tshirt_ust_co.paa",
			"eutyches_clothing\tshirt_ust_co.paa"
		};
	};
/*	class Hoodie_ColorBase;
	class hoodie_hobbit: Hoodie_ColorBase
	{
		displayName="Mr. Baggins Hoodie by Eutyches";
		descriptionShort="Baggins Hoodie by Eutyches";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
            "",
            "",
            "",
			"eutyches_clothing\hoodie_baggins_co.paa",
			"eutyches_clothing\hoodie_baggins_co.paa",
			"eutyches_clothing\hoodie_baggins_co.paa"
		};
	}; */
};		