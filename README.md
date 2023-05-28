<p align="center"><img src="https://i.imgur.com/pYW2qMn.png"></p>
<p align="left"><a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2151465371"><img src="https://i.imgur.com/k6IXClg.png" height=64 width=64></a> <a href="https://youtu.be/PTZGmFd9-b4"><img src="https://i.imgur.com/JeUMWNw.png" height=64 width=64></a></p>
<br />

This repository contains an addon **Disco Bomb** for **ArmA 3** game. You can feel free to use, modify and reupload this mod, it created just for fun.

Disco bomb, which explode your dance floor and distract enemies around.

# For developers:

Classname  - **"Dr_discoBomb"**
You can change the music by setting variable in **init.sqf**:

`Dr_disco_soundPack = ["Dr_disco_songHalogen","Dr_disco_songFlawa","Dr_disco_songspoiler","Dr_disco_songborat"]; //default
`

And change dancing anims:

`Dr_disco_animPack = ["Dr_disco_sillyDance","Dr_disco_hiphopDance","Acts_Dance_01","Acts_Dance_02"]; //default
`

If you using this mod in multiplayer and you have **cfgRemoteExec**, then you need to add the following commands to the white-list:
- setParticleParams
- setParticleRandom
- setParticleCircle
- setDropInterval
- say3D
- switchMove
- removeWeapon
- addWeapon
- addWeaponItem
- addMagazine
- setLightColor
- setLightAmbient
- setLightIntensity
- setLightUseFlare
- setLightAttenuation
- setLightDayLight
