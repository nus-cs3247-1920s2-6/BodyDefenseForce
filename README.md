# BodyDefenseForce

Developed with Unreal Engine 4

2020.2.22
The pull only support 3000 files, so if anything missing, download it in my fork.

The main changes are:
Change the main player character to DemoThirdPersonCharacter, together with the project setting things
Implemented a damage system, and a projectile system, no animations now
A simple Zombie AI pawn, which implemented self-duplication, search the player, and go to attack the player.

Core Blueprints are in /ThirdPersonCPP:
DemoThirdPersonCharacter 
MoveToMeAI 
4 kinds of ammo projectiles with different firework effect, supported by /TS_Fireworks

 /Spawn System is a free EPIC Store system I downloaded, not used yet.

and important things like the UserInterface, minimap, are in /BodyDefenseForce folder
