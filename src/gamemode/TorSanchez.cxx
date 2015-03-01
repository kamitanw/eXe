/*
	Copyright (c) 2014 - 2015 Rafa� "Gamer_Z" Grasman
		* See LICENSE.md in root directory for license
		* Written by Rafa� Grasman <grasmanek94@gmail.com>
		* Development Start Month-Year: October-2014

	________________________________________________________________
	Purpose of this file

	________________________________________________________________	
	Notes

	________________________________________________________________
	Dependencies

	________________________________________________________________
	Project Contributors
		Tom 'IceCube' Hewlett
		Mariusz 'C2A1' K.
		Mateusz 'eider' Cicho�
*/
#include "GameMode.hxx"

//trzebabedzie to na zabawe przerobic z naliczaniem czasu itp
class CSanchez : public Extension::Base
{
public:
	std::vector<Zabawy::SObject> Objects;
	std::vector<VehicleSpawnInfo> Vehicles;
	CSanchez() :
	Objects({
		//sanchez
		{ 4694, 2382.22143600, 3211.72705100, 5.49200200, 0.00000000, 0.00000000, -89.99998128 }, //object(3)
		{ 3268, 2382.58325200, 3203.20825200, 6.43793100, 0.00000000, 0.00000000, -179.99996255 }, //object(4)
		{ 4146, 2412.00708000, 3205.87133800, 5.99052900, 0.00000000, 0.00000000, 0.00000000 }, //object(6)
		{ 3627, 2481.13208000, 3194.79101600, 2.38752300, 0.00000000, 0.00000000, 89.99998128 }, //object(8)
		{ 1683, 2522.01611300, 3191.35864300, 0.74447400, 0.00000000, 0.00000000, 0.00000000 }, //object(8)
		{ 14596, 2547.55835000, 3190.95385700, 10.55320100, 0.00000000, 0.00000000, 89.99998128 }, //object(13)
		{ 3502, 2543.80566400, 3181.19970700, 18.46778900, 0.00000000, 0.00000000, 0.00000000 }, //object(15)
		{ 3502, 2543.96069300, 3171.62402300, 18.47046700, 0.00000000, 0.00000000, -180.00001985 }, //object(16)
		{ 3187, 2544.40136700, 3163.81201200, 17.83817700, 0.00000000, 0.00000000, -89.99998128 }, //object(19)
		{ 3187, 2542.43408200, 3153.75903300, 17.86487400, 0.00000000, 0.00000000, -270.00000112 }, //object(20)
		{ 3187, 2542.34057600, 3144.97631800, 17.99324400, 0.00000000, 0.00000000, -270.00000112 }, //object(21)
		{ 1425, 2543.84545900, 3185.07104500, 11.91194800, 0.00000000, 0.00000000, 179.99990526 }, //object(22)
		{ 3458, 2545.01074200, 3128.67797900, 15.37512000, 0.00000000, 0.00000000, -89.99998128 }, //object(23)
		{ 1632, 2545.08178700, 3108.77026400, 18.20370100, 0.00000000, 0.00000000, -180.00001985 }, //object(24)
		{ 1309, 2541.58203100, 3068.47558600, 12.97593400, 0.00000000, 0.00000000, -180.00001985 }, //object(25)
		{ 16481, 2567.19238300, 3060.48999000, 21.81344000, 0.00000000, 0.00000000, 0.00000000 }, //object(17)
		{ 3249, 2594.65405300, 3063.75610400, 22.01106500, 0.00000000, 0.00000000, 0.00000000 }, //object(18)
		{ 3249, 2604.65698200, 3062.87573200, 22.36882600, 0.00000000, 0.00000000, 0.00000000 }, //object(21)
		{ 970, 2611.32739300, 3062.82251000, 27.36209300, 91.10023213, 0.00000000, 179.99996255 }, //object(23)
		{ 970, 2614.50195300, 3062.71875000, 27.37267300, 91.10023213, 0.00000000, 179.99996255 }, //object(24)
		{ 970, 2618.55590800, 3062.74194300, 27.38124500, 91.10023213, 0.00000000, 179.99996255 }, //object(26)
		{ 5774, 2639.10107400, 3065.67334000, 24.35273000, 0.00000000, 0.00000000, -180.00001985 }, //object(28)
		{ 1322, 2655.06689500, 3067.59082000, 28.80111100, 0.00000000, 0.00000000, -180.00001985 }, //object(29)
		{ 8841, 2668.42480500, 3063.45434600, 24.00398300, 0.00000000, 0.00000000, -89.99998128 }, //object(30)
		{ 3399, 2665.68725600, 3089.47827100, 27.92660100, 0.00000000, 0.00000000, 101.25000758 }, //object(27)
		{ 16640, 2658.45092800, 3101.70043900, 33.55991400, 0.00000000, 0.00000000, 101.25000758 }, //object(28)
		{ 1212, 2655.82006800, 3095.29785200, 34.18277000, 0.00000000, 0.00000000, 0.00000000 }, //object(29)
		{ 1212, 2655.80273400, 3096.80786100, 34.18944500, 0.00000000, 0.00000000, 0.00000000 }, //object(30)
		{ 1212, 2655.55224600, 3096.68676800, 34.19026900, 0.00000000, 0.00000000, 0.00000000 }, //object(31)
		{ 1212, 2655.22924800, 3095.21582000, 34.17816200, 0.00000000, 0.00000000, 0.00000000 }, //object(32)
		{ 1212, 2656.15063500, 3095.67236300, 34.14271200, 0.00000000, 0.00000000, 0.00000000 }, //object(33)
		{ 1212, 2655.55395500, 3095.95752000, 34.09032800, 0.00000000, 0.00000000, 0.00000000 }, //object(34)
		{ 1253, 2653.39355500, 3096.04101600, 34.29747000, 0.00000000, 0.00000000, -33.75002163 }, //object(35)
		{ 1274, 2651.73193400, 3094.62719700, 35.21911600, 0.00000000, 0.00000000, -78.75001226 }, //object(36)
		{ 1276, 2652.88842800, 3094.95263700, 34.67976000, 0.00000000, 0.00000000, -78.75001226 }, //object(37)
		{ 1318, 2653.95385700, 3095.31909200, 35.10339000, 0.00000000, 0.00000000, -78.74995497 }, //object(38)
		{ 1550, 2657.52294900, 3094.63281300, 34.63312500, 0.00000000, 0.00000000, 0.00000000 }, //object(39)
		{ 1318, 2392.45703100, 3212.47753900, 6.83131800, 0.00000000, 0.00000000, -89.99998128 }, //object(40)
		{ 1318, 2392.48095700, 3194.30297900, 6.95529200, 0.00000000, 0.00000000, -89.99998128 }, //object(41)
		{ 974, 2654.70776400, 3093.44140600, 35.81177100, 0.00000000, 0.00000000, 11.25002631 }, //object(42)
		{ 974, 2372.42285200, 3191.51245100, 9.06519100, 0.00000000, 0.00000000, -89.99998128 }, //object(43)
		{ 974, 2372.51147500, 3217.31445300, 9.35000600, 0.00000000, 0.00000000, -89.99998128 }, //object(44)
		{ 974, 2389.15625000, 3218.23828100, 8.90345000, 0.00000000, 0.00000000, -180.00001985 }, //object(45)
		{ 1452, 2391.57885700, 3189.40771500, 7.49139600, 0.00000000, 0.00000000, -180.00001985 }, //object(46)
		{ 14467, 2395.53198200, 3213.62622100, 9.24267000, 0.00000000, 0.00000000, -11.25002631 }, //object(48)
		{ 11435, 2397.17382800, 3198.04248000, 10.74553000, 0.00000000, 0.00000000, 0.00000000 }, //object(49)
		{ 7415, 2500.36767600, 3198.23584000, 15.92422100, 0.00000000, 0.00000000, 33.74996433 }, //object(50)
		{ 3264, 2543.90698200, 3184.97876000, 5.33540300, 0.00000000, 0.00000000, -180.00001985 }, //object(51)
		{ 1437, 2651.70483400, 3055.02050800, 27.92050400, -85.94361197, 0.00000000, -89.99998128 } //object(58)
	}),
	Vehicles({
		{ 468, 2387.4270, 3192.1868, 7.0002, 348.6998, 99, 84, 0, 0 },
		{ 468, 2384.4580, 3192.8660, 7.0002, 357.8773, 3, 3, 0, 0 },
		{ 468, 2381.2188, 3194.0205, 7.0002, 358.7710, 6, 6, 0, 0 },
		{ 468, 2390.7051, 3192.9900, 7.0002, 357.1570, 7, 7, 0, 0 }
	})
	{}
	bool OnGameModeInit()
	{
		Zabawy::MakeAllDynamicObjects(Objects, 0);
		MakeAllSpawnInfoVehicles(Vehicles);
		return true;
	}
} _Sanchez;

ZERO_COMMAND3(sanchez, PERMISSION_NONE, RESTRICTION_NOT_IN_A_GAME | RESTRICTION_NOT_AFTER_FIGHT)
{
	TeleportPlayer(playerid, 2382.2214, 3211.7271, 6.4920, 0.0, true, 0, 0, "", 0, 0, 2.0, 2.0, false, true);
	return true;
}