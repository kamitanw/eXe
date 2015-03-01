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
#pragma once
#include "GameMode.hxx"

/* .::[ vehicles.ide ]::. */
enum
{
	VEH_TYPE_LANDSTAL = 400, /* Initalize 'enum' at 400, first vehicle ID */
	VEH_TYPE_BRAVURA,
	VEH_TYPE_BUFFALO,
	VEH_TYPE_LINERUN,
	VEH_TYPE_PEREN,
	VEH_TYPE_SENTINEL,
	VEH_TYPE_DUMPER,
	VEH_TYPE_FIRETRUK,
	VEH_TYPE_TRASH,
	VEH_TYPE_STRETCH,
	VEH_TYPE_MANANA,
	VEH_TYPE_INFERNUS,
	VEH_TYPE_VOODOO,
	VEH_TYPE_PONY,
	VEH_TYPE_MULE,
	VEH_TYPE_CHEETAH,
	VEH_TYPE_AMBULAN,
	VEH_TYPE_LEVIATHN,
	VEH_TYPE_MOONBEAM,
	VEH_TYPE_ESPERANT,
	VEH_TYPE_TAXI,
	VEH_TYPE_WASHING,
	VEH_TYPE_BOBCAT,
	VEH_TYPE_MRWHOOP,
	VEH_TYPE_BFINJECT,
	VEH_TYPE_HUNTER,
	VEH_TYPE_PREMIER,
	VEH_TYPE_ENFORCER,
	VEH_TYPE_SECURICA,
	VEH_TYPE_BANSHEE,
	VEH_TYPE_PREDATOR,
	VEH_TYPE_BUS,
	VEH_TYPE_RHINO,
	VEH_TYPE_BARRACKS,
	VEH_TYPE_HOTKNIFE,
	VEH_TYPE_ARTICT1,
	VEH_TYPE_PREVION,
	VEH_TYPE_COACH,
	VEH_TYPE_CABBIE,
	VEH_TYPE_STALLION,
	VEH_TYPE_RUMPO,
	VEH_TYPE_RCBANDIT,
	VEH_TYPE_ROMERO,
	VEH_TYPE_PACKER,
	VEH_TYPE_MONSTER,
	VEH_TYPE_ADMIRAL,
	VEH_TYPE_SQUALO,
	VEH_TYPE_SEASPAR,
	VEH_TYPE_PIZZABOY,
	VEH_TYPE_TRAM,
	VEH_TYPE_ARTICT2,
	VEH_TYPE_TURISMO,
	VEH_TYPE_SPEEDER,
	VEH_TYPE_REEFER,
	VEH_TYPE_TROPIC,
	VEH_TYPE_FLATBED,
	VEH_TYPE_YANKEE,
	VEH_TYPE_CADDY,
	VEH_TYPE_SOLAIR,
	VEH_TYPE_TOPFUN,
	VEH_TYPE_SKIMMER,
	VEH_TYPE_PCJ600,
	VEH_TYPE_FAGGIO,
	VEH_TYPE_FREEWAY,
	VEH_TYPE_RCBARON,
	VEH_TYPE_RCRAIDER,
	VEH_TYPE_GLENDALE,
	VEH_TYPE_OCEANIC,
	VEH_TYPE_SANCHEZ,
	VEH_TYPE_SPARROW,
	VEH_TYPE_PATRIOT,
	VEH_TYPE_QUAD,
	VEH_TYPE_COASTG,
	VEH_TYPE_DINGHY,
	VEH_TYPE_HERMES,
	VEH_TYPE_SABRE,
	VEH_TYPE_RUSTLER,
	VEH_TYPE_ZR350,
	VEH_TYPE_WALTON,
	VEH_TYPE_REGINA,
	VEH_TYPE_COMET,
	VEH_TYPE_BMX,
	VEH_TYPE_BURRITO,
	VEH_TYPE_CAMPER,
	VEH_TYPE_MARQUIS,
	VEH_TYPE_BAGGAGE,
	VEH_TYPE_DOZER,
	VEH_TYPE_MAVERICK,
	VEH_TYPE_VCNMAV,
	VEH_TYPE_RANCHER,
	VEH_TYPE_FBIRANCH,
	VEH_TYPE_VIRGO,
	VEH_TYPE_GREENWOO,
	VEH_TYPE_JETMAX,
	VEH_TYPE_HOTRING,
	VEH_TYPE_SANDKING,
	VEH_TYPE_BLISTAC,
	VEH_TYPE_POLMAV,
	VEH_TYPE_BOXVILLE,
	VEH_TYPE_BENSON,
	VEH_TYPE_MESA,
	VEH_TYPE_RCGOBLIN,
	VEH_TYPE_HOTRINA,
	VEH_TYPE_HOTRINB,
	VEH_TYPE_BLOODRA,
	VEH_TYPE_RNCHLURE,
	VEH_TYPE_SUPERGT,
	VEH_TYPE_ELEGANT,
	VEH_TYPE_JOURNEY,
	VEH_TYPE_BIKE,
	VEH_TYPE_MTBIKE,
	VEH_TYPE_BEAGLE,
	VEH_TYPE_CROPDUST,
	VEH_TYPE_STUNT,
	VEH_TYPE_PETRO,
	VEH_TYPE_RDTRAIN,
	VEH_TYPE_NEBULA,
	VEH_TYPE_MAJESTIC,
	VEH_TYPE_BUCCANEE,
	VEH_TYPE_SHAMAL,
	VEH_TYPE_HYDRA,
	VEH_TYPE_FCR900,
	VEH_TYPE_NRG500,
	VEH_TYPE_HPV1000,
	VEH_TYPE_CEMENT,
	VEH_TYPE_TOWTRUCK,
	VEH_TYPE_FORTUNE,
	VEH_TYPE_CADRONA,
	VEH_TYPE_FBITRUCK,
	VEH_TYPE_WILLARD,
	VEH_TYPE_FORKLIFT,
	VEH_TYPE_TRACTOR,
	VEH_TYPE_COMBINE,
	VEH_TYPE_FELTZER,
	VEH_TYPE_REMINGTN,
	VEH_TYPE_SLAMVAN,
	VEH_TYPE_BLADE,
	VEH_TYPE_FREIGHT,
	VEH_TYPE_STREAK,
	VEH_TYPE_VORTEX,
	VEH_TYPE_VINCENT,
	VEH_TYPE_BULLET,
	VEH_TYPE_CLOVER,
	VEH_TYPE_SADLER,
	VEH_TYPE_FIRELA,
	VEH_TYPE_HUSTLER,
	VEH_TYPE_INTRUDER,
	VEH_TYPE_PRIMO,
	VEH_TYPE_CARGOBOB,
	VEH_TYPE_TAMPA,
	VEH_TYPE_SUNRISE,
	VEH_TYPE_MERIT,
	VEH_TYPE_UTILITY,
	VEH_TYPE_NEVADA,
	VEH_TYPE_YOSEMITE,
	VEH_TYPE_WINDSOR,
	VEH_TYPE_MONSTERA,
	VEH_TYPE_MONSTERB,
	VEH_TYPE_URANUS,
	VEH_TYPE_JESTER,
	VEH_TYPE_SULTAN,
	VEH_TYPE_STRATUM,
	VEH_TYPE_ELEGY,
	VEH_TYPE_RAINDANC,
	VEH_TYPE_RCTIGER,
	VEH_TYPE_FLASH,
	VEH_TYPE_TAHOMA,
	VEH_TYPE_SAVANNA,
	VEH_TYPE_BANDITO,
	VEH_TYPE_FREIFLAT,
	VEH_TYPE_STREAKC,
	VEH_TYPE_KART,
	VEH_TYPE_MOWER,
	VEH_TYPE_DUNERIDE,
	VEH_TYPE_SWEEPER,
	VEH_TYPE_BROADWAY,
	VEH_TYPE_TORNADO,
	VEH_TYPE_AT400,
	VEH_TYPE_DFT30,
	VEH_TYPE_HUNTLEY,
	VEH_TYPE_STAFFORD,
	VEH_TYPE_BF400,
	VEH_TYPE_NEWSVAN,
	VEH_TYPE_TUG,
	VEH_TYPE_PETROTR,
	VEH_TYPE_EMPEROR,
	VEH_TYPE_WAYFARER,
	VEH_TYPE_EUROS,
	VEH_TYPE_HOTDOG,
	VEH_TYPE_CLUB,
	VEH_TYPE_FREIBOX,
	VEH_TYPE_ARTICT3,
	VEH_TYPE_ANDROM,
	VEH_TYPE_DODO,
	VEH_TYPE_RCCAM,
	VEH_TYPE_LAUNCH,
	VEH_TYPE_LSPD,
	VEH_TYPE_SFPD,
	VEH_TYPE_LVPD,
	VEH_TYPE_RANGERPD,
	VEH_TYPE_PICADOR,
	VEH_TYPE_SWATVAN,
	VEH_TYPE_ALPHA,
	VEH_TYPE_PHOENIX,
	VEH_TYPE_GLENSHIT,
	VEH_TYPE_SADLSHIT,
	VEH_TYPE_BAGBOXA,
	VEH_TYPE_BAGBOXB,
	VEH_TYPE_TUGSTAIR,
	VEH_TYPE_BOXBURG,
	VEH_TYPE_FARMTR1,
	VEH_TYPE_UTILTR1
};