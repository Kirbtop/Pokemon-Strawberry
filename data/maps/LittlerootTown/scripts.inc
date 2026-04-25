# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 5 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 6 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 9 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 10 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 11 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 12 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 22 "data/maps/LittlerootTown/scripts.pory"

# 23 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 24 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 30 "data/maps/LittlerootTown/scripts.pory"

# 31 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 39 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 40 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 41 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 42 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 43 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 44 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 45 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 0, LittlerootTown_EventScript_NovoJogo_PararMusica
# 51 "data/maps/LittlerootTown/scripts.pory"
	end
# 52 "data/maps/LittlerootTown/scripts.pory"

# 53 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 54 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 55 "data/maps/LittlerootTown/scripts.pory"
	return
# 56 "data/maps/LittlerootTown/scripts.pory"

# 57 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 58 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 59 "data/maps/LittlerootTown/scripts.pory"
	return
# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 63 "data/maps/LittlerootTown/scripts.pory"
	return
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 66 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 67 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 68 "data/maps/LittlerootTown/scripts.pory"
	return
# 69 "data/maps/LittlerootTown/scripts.pory"

# 70 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 71 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 72 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 80 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 81 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 82 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 83 "data/maps/LittlerootTown/scripts.pory"
	return
# 84 "data/maps/LittlerootTown/scripts.pory"

# 85 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 88 "data/maps/LittlerootTown/scripts.pory"
	return
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 91 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 93 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 94 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 95 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 96 "data/maps/LittlerootTown/scripts.pory"
	return
# 97 "data/maps/LittlerootTown/scripts.pory"

# 98 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 99 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 100 "data/maps/LittlerootTown/scripts.pory"
	return
# 101 "data/maps/LittlerootTown/scripts.pory"

# 102 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 104 "data/maps/LittlerootTown/scripts.pory"
	return
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 107 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 108 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 0, LittlerootTown_EventScript_NovoJogo
# 109 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 112 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 113 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 114 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 115 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 116 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 117 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 118 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 119 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 120 "data/maps/LittlerootTown/scripts.pory"
	end
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 123 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 125 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 126 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 127 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 128 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 129 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 130 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 131 "data/maps/LittlerootTown/scripts.pory"
	end
# 132 "data/maps/LittlerootTown/scripts.pory"

# 133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 134 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 135 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 136 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 137 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 139 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 140 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 141 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 142 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 144 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 145 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 146 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 147 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 149 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 150 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 154 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 159 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 160 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 161 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 163 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 164 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 165 "data/maps/LittlerootTown/scripts.pory"
	return
# 166 "data/maps/LittlerootTown/scripts.pory"

# 167 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 168 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 169 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 170 "data/maps/LittlerootTown/scripts.pory"

# 171 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 172 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 173 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 174 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 175 "data/maps/LittlerootTown/scripts.pory"

# 176 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 177 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 178 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 179 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 180 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 183 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 185 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 188 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 189 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 193 "data/maps/LittlerootTown/scripts.pory"

# 194 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 197 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 198 "data/maps/LittlerootTown/scripts.pory"

# 199 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 200 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 201 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 202 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown/scripts.pory"

# 206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 207 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 208 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 209 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 210 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 212 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 213 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 214 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 215 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 216 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 217 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 218 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 219 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 220 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 221 "data/maps/LittlerootTown/scripts.pory"
	end
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 224 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 225 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 228 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 229 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 230 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 231 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 232 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 233 "data/maps/LittlerootTown/scripts.pory"
	end
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 236 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 237 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 238 "data/maps/LittlerootTown/scripts.pory"
	end
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 241 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 242 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 243 "data/maps/LittlerootTown/scripts.pory"
	end
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 246 "data/maps/LittlerootTown/scripts.pory"
    playbgm MUS_LITTLEROOT_TEST, TRUE
# 247 "data/maps/LittlerootTown/scripts.pory"
	delay 200
# 248 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 1
# 249 "data/maps/LittlerootTown/scripts.pory"
    callnative DrawMugshot
# 250 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 251 "data/maps/LittlerootTown/scripts.pory"
	delay 230
# 252 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 253 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 254 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 255 "data/maps/LittlerootTown/scripts.pory"
	delay 120
# 256 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 2
# 257 "data/maps/LittlerootTown/scripts.pory"
    callnative DrawMugshot
# 258 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 259 "data/maps/LittlerootTown/scripts.pory"
	delay 230
# 260 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 261 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 262 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 263 "data/maps/LittlerootTown/scripts.pory"
	delay 120
# 264 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 0
# 265 "data/maps/LittlerootTown/scripts.pory"
    callnative DrawMugshot
# 266 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 267 "data/maps/LittlerootTown/scripts.pory"
	delay 530
# 268 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 269 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 270 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 271 "data/maps/LittlerootTown/scripts.pory"
	end
# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 274 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 275 "data/maps/LittlerootTown/scripts.pory"
	end
# 276 "data/maps/LittlerootTown/scripts.pory"

# 277 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 278 "data/maps/LittlerootTown/scripts.pory"
	lock
# 279 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 280 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 281 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 282 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown/scripts.pory"
	release
# 285 "data/maps/LittlerootTown/scripts.pory"
	end
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 288 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 289 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 290 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 291 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 292 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 294 "data/maps/LittlerootTown/scripts.pory"
	release
# 295 "data/maps/LittlerootTown/scripts.pory"
	end
# 296 "data/maps/LittlerootTown/scripts.pory"

# 297 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 298 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 299 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 300 "data/maps/LittlerootTown/scripts.pory"
	release
# 301 "data/maps/LittlerootTown/scripts.pory"
	end
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 304 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 305 "data/maps/LittlerootTown/scripts.pory"
	release
# 306 "data/maps/LittlerootTown/scripts.pory"
	end
# 307 "data/maps/LittlerootTown/scripts.pory"

# 308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 309 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 310 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 311 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 313 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 314 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 315 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 316 "data/maps/LittlerootTown/scripts.pory"
	end
# 317 "data/maps/LittlerootTown/scripts.pory"

# 318 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 319 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 320 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 321 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 322 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 323 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 325 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 326 "data/maps/LittlerootTown/scripts.pory"
	return
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 329 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 330 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 331 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 332 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 333 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 341 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 342 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 343 "data/maps/LittlerootTown/scripts.pory"

# 344 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 346 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 347 "data/maps/LittlerootTown/scripts.pory"

# 348 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 354 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 357 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 358 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 361 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 363 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 364 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 365 "data/maps/LittlerootTown/scripts.pory"

# 366 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 367 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 368 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 369 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 370 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 371 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 372 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 373 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 374 "data/maps/LittlerootTown/scripts.pory"
	end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 377 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 378 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 379 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 380 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 381 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 383 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 387 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 388 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 389 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 390 "data/maps/LittlerootTown/scripts.pory"

# 391 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 392 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 393 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 394 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 395 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 397 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 398 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 401 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 402 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 403 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 404 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 405 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 406 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 407 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 408 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 409 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 410 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 411 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 412 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 413 "data/maps/LittlerootTown/scripts.pory"
	end
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 416 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 417 "data/maps/LittlerootTown/scripts.pory"
	end
# 418 "data/maps/LittlerootTown/scripts.pory"

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 420 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 421 "data/maps/LittlerootTown/scripts.pory"
	end
# 422 "data/maps/LittlerootTown/scripts.pory"

# 423 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 424 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 425 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 426 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 427 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 428 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 429 "data/maps/LittlerootTown/scripts.pory"
	end
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 432 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 433 "data/maps/LittlerootTown/scripts.pory"
	return
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 436 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 437 "data/maps/LittlerootTown/scripts.pory"
	return
# 438 "data/maps/LittlerootTown/scripts.pory"

# 439 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 440 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 441 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 442 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 443 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 444 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 445 "data/maps/LittlerootTown/scripts.pory"
	end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 448 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 449 "data/maps/LittlerootTown/scripts.pory"
	return
# 450 "data/maps/LittlerootTown/scripts.pory"

# 451 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 452 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 453 "data/maps/LittlerootTown/scripts.pory"
	return
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 456 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 457 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 458 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 459 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 460 "data/maps/LittlerootTown/scripts.pory"
	end
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 463 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 464 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 465 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 466 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 467 "data/maps/LittlerootTown/scripts.pory"
	end
# 468 "data/maps/LittlerootTown/scripts.pory"

# 469 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 470 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 471 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 472 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 473 "data/maps/LittlerootTown/scripts.pory"
	end
# 474 "data/maps/LittlerootTown/scripts.pory"

# 475 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 476 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 477 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 478 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 479 "data/maps/LittlerootTown/scripts.pory"
	end
# 480 "data/maps/LittlerootTown/scripts.pory"

# 481 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 482 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 483 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 484 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 485 "data/maps/LittlerootTown/scripts.pory"
	end
# 486 "data/maps/LittlerootTown/scripts.pory"

# 487 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 488 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 489 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 490 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 491 "data/maps/LittlerootTown/scripts.pory"
	end
# 492 "data/maps/LittlerootTown/scripts.pory"

# 493 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 494 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 495 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 496 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 497 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 498 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 499 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 500 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 501 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 502 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 503 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 504 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 505 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 506 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 507 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 508 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 509 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 510 "data/maps/LittlerootTown/scripts.pory"
	end
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 513 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 514 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 515 "data/maps/LittlerootTown/scripts.pory"
	return
# 516 "data/maps/LittlerootTown/scripts.pory"

# 517 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 518 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 519 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 520 "data/maps/LittlerootTown/scripts.pory"
	return
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 523 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 524 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/LittlerootTown/scripts.pory"
	return
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 528 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 529 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 530 "data/maps/LittlerootTown/scripts.pory"
	return
# 531 "data/maps/LittlerootTown/scripts.pory"

# 532 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 534 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 535 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 538 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 542 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 543 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 544 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 545 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 546 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 547 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 548 "data/maps/LittlerootTown/scripts.pory"
	return
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	return
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 561 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	return
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	return
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	return
# 584 "data/maps/LittlerootTown/scripts.pory"

# 585 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	return
# 591 "data/maps/LittlerootTown/scripts.pory"

# 592 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	return
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	return
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 607 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 608 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 609 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 610 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 611 "data/maps/LittlerootTown/scripts.pory"
	return
# 612 "data/maps/LittlerootTown/scripts.pory"

# 613 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 614 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 615 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 616 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 617 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 623 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 624 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 625 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 626 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 627 "data/maps/LittlerootTown/scripts.pory"
	return
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 630 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 631 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 632 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 633 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 634 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 635 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 636 "data/maps/LittlerootTown/scripts.pory"
	return
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	return
# 642 "data/maps/LittlerootTown/scripts.pory"

# 643 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	return
# 647 "data/maps/LittlerootTown/scripts.pory"

# 648 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 653 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 656 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 658 "data/maps/LittlerootTown/scripts.pory"
	return
# 659 "data/maps/LittlerootTown/scripts.pory"

# 660 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 661 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 663 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 665 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 667 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 668 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 670 "data/maps/LittlerootTown/scripts.pory"
	return
# 671 "data/maps/LittlerootTown/scripts.pory"

# 672 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 673 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 675 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 677 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 680 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 682 "data/maps/LittlerootTown/scripts.pory"
	return
# 683 "data/maps/LittlerootTown/scripts.pory"

# 684 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 685 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 687 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 688 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 689 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 691 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 692 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 694 "data/maps/LittlerootTown/scripts.pory"
	return
# 695 "data/maps/LittlerootTown/scripts.pory"

# 696 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 697 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 699 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 700 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 701 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 703 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 704 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 706 "data/maps/LittlerootTown/scripts.pory"
	return
# 707 "data/maps/LittlerootTown/scripts.pory"

# 708 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 709 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 711 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 712 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 713 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 716 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 718 "data/maps/LittlerootTown/scripts.pory"
	return
# 719 "data/maps/LittlerootTown/scripts.pory"

# 720 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 721 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 723 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 725 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 726 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 727 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 728 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 729 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 730 "data/maps/LittlerootTown/scripts.pory"
	return
# 731 "data/maps/LittlerootTown/scripts.pory"

# 732 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 733 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 734 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 735 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 736 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 737 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 738 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 739 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 740 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 741 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 742 "data/maps/LittlerootTown/scripts.pory"
	return
# 743 "data/maps/LittlerootTown/scripts.pory"

# 744 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 751 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 760 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 767 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 768 "data/maps/LittlerootTown/scripts.pory"

# 769 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 775 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 776 "data/maps/LittlerootTown/scripts.pory"

# 777 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 780 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 781 "data/maps/LittlerootTown/scripts.pory"

# 782 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 786 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 787 "data/maps/LittlerootTown/scripts.pory"

# 788 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 792 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 793 "data/maps/LittlerootTown/scripts.pory"

# 794 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 797 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 798 "data/maps/LittlerootTown/scripts.pory"

# 799 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 805 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 812 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 813 "data/maps/LittlerootTown/scripts.pory"

# 814 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 820 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 821 "data/maps/LittlerootTown/scripts.pory"

# 822 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 828 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 829 "data/maps/LittlerootTown/scripts.pory"

# 830 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 836 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 845 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 851 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 852 "data/maps/LittlerootTown/scripts.pory"

# 853 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 858 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 865 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 871 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 872 "data/maps/LittlerootTown/scripts.pory"

# 873 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 880 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 881 "data/maps/LittlerootTown/scripts.pory"

# 882 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 888 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 892 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 893 "data/maps/LittlerootTown/scripts.pory"

# 894 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 895 "data/maps/LittlerootTown/scripts.pory"
	lock
# 896 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 897 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 898 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 899 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 900 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 901 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 902 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 903 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 904 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 905 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 906 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 907 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 908 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 909 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 910 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 911 "data/maps/LittlerootTown/scripts.pory"
	end
# 912 "data/maps/LittlerootTown/scripts.pory"

# 913 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 914 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 915 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 916 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 917 "data/maps/LittlerootTown/scripts.pory"
	release
# 918 "data/maps/LittlerootTown/scripts.pory"
	end
# 919 "data/maps/LittlerootTown/scripts.pory"

# 920 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 921 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 922 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 923 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 924 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 925 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 926 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 927 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 928 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 929 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 930 "data/maps/LittlerootTown/scripts.pory"
	return
# 931 "data/maps/LittlerootTown/scripts.pory"

# 932 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 943 "data/maps/LittlerootTown/scripts.pory"

# 944 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 946 "data/maps/LittlerootTown/scripts.pory"

# 947 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 957 "data/maps/LittlerootTown/scripts.pory"

# 958 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 961 "data/maps/LittlerootTown/scripts.pory"

# 962 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 969 "data/maps/LittlerootTown/scripts.pory"

# 970 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 979 "data/maps/LittlerootTown/scripts.pory"

# 980 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 984 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 985 "data/maps/LittlerootTown/scripts.pory"

# 986 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 992 "data/maps/LittlerootTown/scripts.pory"

# 993 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 997 "data/maps/LittlerootTown/scripts.pory"

# 998 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1001 "data/maps/LittlerootTown/scripts.pory"

# 1002 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1004 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1008 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1009 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1010 "data/maps/LittlerootTown/scripts.pory"

# 1011 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1014 "data/maps/LittlerootTown/scripts.pory"

# 1015 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1018 "data/maps/LittlerootTown/scripts.pory"

# 1019 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1022 "data/maps/LittlerootTown/scripts.pory"

# 1023 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1025 "data/maps/LittlerootTown/scripts.pory"

# 1026 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1028 "data/maps/LittlerootTown/scripts.pory"

# 1029 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1031 "data/maps/LittlerootTown/scripts.pory"

# 1032 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1033 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1034 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1035 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1038 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_NovoJogo::
# 1045 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1046 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1047 "data/maps/LittlerootTown/scripts.pory"
	special SpawnCameraObject
# 1048 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ComoAssim
# 1049 "data/maps/LittlerootTown/scripts.pory"
	delay 150
# 1050 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1051 "data/maps/LittlerootTown/scripts.pory"
	playbgm MUS_LITTLEROOT_TEST, TRUE
# 1052 "data/maps/LittlerootTown/scripts.pory"
	delay 200
# 1053 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 1
# 1054 "data/maps/LittlerootTown/scripts.pory"
	callnative DrawMugshot
# 1055 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 1056 "data/maps/LittlerootTown/scripts.pory"
	delay 230
# 1057 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 1058 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 1059 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 1060 "data/maps/LittlerootTown/scripts.pory"
	delay 120
# 1061 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ComoAssim2
# 1062 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 2
# 1063 "data/maps/LittlerootTown/scripts.pory"
	callnative DrawMugshot
# 1064 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 1065 "data/maps/LittlerootTown/scripts.pory"
	delay 230
# 1066 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 1067 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 1068 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 1069 "data/maps/LittlerootTown/scripts.pory"
	delay 120
# 1070 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 0
# 1071 "data/maps/LittlerootTown/scripts.pory"
	callnative DrawMugshot
# 1072 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 1073 "data/maps/LittlerootTown/scripts.pory"
	delay 530
# 1074 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 1075 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 1076 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 1077 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 1078 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1079 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1080 "data/maps/LittlerootTown/scripts.pory"
	special RemoveCameraObject
# 1081 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 7, 32
# 1082 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1083 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NovoJogo_PararMusica::
# 1088 "data/maps/LittlerootTown/scripts.pory"
	playbgm MUS_RG_TITLE, TRUE
	end


# 1092 "data/maps/LittlerootTown/scripts.pory"
ComoAssim:
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
	step_end

# 1098 "data/maps/LittlerootTown/scripts.pory"
ComoAssim2:
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end
