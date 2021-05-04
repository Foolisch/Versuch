class CfgPatches
{
	class MainMenuMusicMod
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};

class CfgMods
{
	class MainMenuMusicMod
	{
		dir="MainMenuMusicMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MainMenuMusicMod";
		credits="Matthew Longime";
		author="Matthew Longime";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Mission"
		};
		class defs
		{
			class missionScriptModule
			{
				value = "";
				files[] = 
				{
					"MainMenuMusicMod\scripts\5_Mission"
				};
			};
		};
	};	
};
class CfgSoundSets
{
	class Main_Music_Menu_SoundSet
	{
		soundShaders[] = {"Main_Music_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};	
class CfgSoundShaders
{
	class Main_Music_Menu_SoundShader
	{
		samples[] = {{"MainMenuMusicMod\data\MainMenu.ogg",1}};
		volume = 0.70794576;
	};
};