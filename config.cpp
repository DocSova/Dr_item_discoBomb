class CfgPatches
{
	class Dr_item_discoBomb
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_characters_F","A3_Data_F"};
	};
};

class CfgSounds {
	class Dr_disco_SmokeMashine {
		name = "Dr_disco_SmokeMashine";
		sound[] = {"Dr_item_discoBomb\sounds\smoke_mashine.ogg", db+4, 1, 50};
		titles[] = {};
	};
	class Dr_disco_initDisco {
		name = "Dr_disco_SmokeMashine";
		sound[] = {"Dr_item_discoBomb\sounds\initDisco.ogg", db+6, 1, 30};
		titles[] = {};
	};
	class Dr_disco_songHalogen : Dr_disco_SmokeMashine {
		name = "Dr_disco_Song";
		sound[] = {"Dr_item_discoBomb\sounds\ugothat.ogg", db+40, 1, 300};
	};
	class Dr_disco_songFlawa : Dr_disco_songHalogen {
		sound[] = {"Dr_item_discoBomb\sounds\freeflowflava.ogg", db+40, 1, 300};
	};
	class Dr_disco_songspoiler : Dr_disco_songHalogen {
		sound[] = {"Dr_item_discoBomb\sounds\spoiler.ogg", db+40, 1, 300};
	};
	class Dr_disco_songborat : Dr_disco_songHalogen {
		sound[] = {"Dr_item_discoBomb\sounds\borat.ogg", db+40, 1, 300};
	};
};
class CfgMovesBasic ;
class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class CutSceneAnimationBase ;
		class Dr_disco_dance_base : CutSceneAnimationBase {
			affectedByFatigue = 0;
			variantsPlayer[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			disableWeapons = 1;
			enableOptics = 0;
			head = "headNo";
			enableBinocular = 0;
			headBobMode = 5;
			headBobStrength = -1;
			forceAim = 1;
			soundEnabled = 1;
			blockMobileSwitching = 1;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			weaponIK = 0;
			interpolationRestart = 1;
			interpolationSpeed = 4;
			useIdles = 0;
			soundEdge[] = {0.01};
			ConnectTo[] = {};
			ConnectFrom[] = {};
			InterpolateTo[] = {};
			InterpolateFrom[] = {};
			minPlayTime = 1;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			looped = 1;
			canBlendStep = 0;
		};
		class Dr_disco_sillyDance : Dr_disco_dance_base {
			file = "Dr_item_discoBomb\anim\sillyDance.rtm";
			speed = 0.2608695652173913;
		};
		class Dr_disco_hiphopDance : Dr_disco_dance_base {
			file = "Dr_item_discoBomb\anim\hiphopDance.rtm";
			speed = 0.297029702970297;
		};
	};
};

class cfgAmmo {
	class GrenadeHand ;
	class Dr_discoBombAmmo : GrenadeHand {
		hit = 0;
		explosionTime = 30;
		timeToLive = 31;
		indirectHit = 0;
		indirectHitRange = 0;
		dangerRadiusHit = 0;
		explosionEffectsRadius = 0;
		explosive=0;
		whistleDist=0;
		model = "Dr_item_discoBomb\discoBomb_throw.p3d";
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "EmptyEffect";
		CraterWaterEffects = "EmptyEffect";
		effectsMissile = "EmptyEffect";
		explosionType = "EmptyEffect";
		effectsFire = "EmptyEffect";
		effectsSmoke = "EmptyEffect";
		explosionEffects = "EmptyEffect";
		SoundSetExplosion[] = {"soundHit1"};
		soundHit[] = {"a3\ui_f\data\sound\empty.wss", 1, 1};
		multiSoundHit[] = {"soundHit", 1};
		class CamShakeExplode
	    {
		    power =0;
		    duration = 0;
		    frequency = 0;
		    distance = 0;
	    };
		class HitEffects {
			hitWater = "EmptyEffect";
		};
	};
};

class cfgMagazines {
	class HandGrenade ;
	class Dr_discoBomb: HandGrenade
	{
		scope=2;
		displayName="Disco Bomb";
		model="Dr_item_discoBomb\discoBomb.p3d";
		picture="\Dr_item_discoBomb\data\icon_ca.paa";
		displayNameShort = "Disco Bomb";
		ammo = "Dr_discoBombAmmo";
		mass = 5;
		initSpeed = 15;
		nameSound = "";
		maxLeadSpeed = 20;
	};
};

class CfgVehicles {
	class Ruins_F;
	class House;
	class House_F ;
	class Dr_discoBall: House_F
	{
		displayName = "Disco Ball";
		textSingular = "Disco Ball";
		model = "Dr_item_discoBomb\discoBall.p3d";
		placement = "vertical";
		scope = 2;
		mapSize = 1;
		animated = "false";
		armor = 1000000000;
		hiddenSelections[] = {"light1","light2","light3","light4","light5","light6","light7"};
		hiddenSelectionsTextures[] = {};
		rtxLights[] = {"Dr_item_discoBomb\data\lights\lightvolumeside_blue_ca.paa","Dr_item_discoBomb\data\lights\lightvolumeside_green_ca.paa","Dr_item_discoBomb\data\lights\lightvolumeside_green1_ca.paa","Dr_item_discoBomb\data\lights\lightvolumeside_pink_ca.paa","Dr_item_discoBomb\data\lights\lightvolumeside_white_ca.paa","Dr_item_discoBomb\data\lights\lightvolumeside_yellow_ca.paa"};
	};
};

class CfgWeapons  {
	class Default;
	class GrenadeLauncher: Default {};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"Dr_DB_Muzzle"};
		class ThrowMuzzle;
		class Dr_DB_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Dr_discoBomb"};
		};
	};
};

class CfgFunctions {
	class Dr
	{
		class discoBomb {
			class init {
				file = "Dr_item_discoBomb\sqf\fn_init.sqf";
				postInit = 1;
			};
			class throwDiscoBomb {
				file = "Dr_item_discoBomb\sqf\fn_throwDiscoBomb.sqf";
			};
		};
	};
};
