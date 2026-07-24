# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_MATIAS_THEME, TRUE
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

moisesaEntrandoEmCena::
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playBGM MUS_MOISESA_THEME, TRUE
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_DOOR
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, moisesaEntrandoEmCena_Movement_0
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, MoisesaAndando
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setspeaker moisesaEntrandoEmCena_Text_0
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_1
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_2
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_3
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, moisesaEntrandoEmCena_Movement_1
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_LEDGE
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, moisesaEntrandoEmCena_Movement_1
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_LEDGE
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 60
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_4
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_5
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, MoisesaIndoPraMesa
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_SANTANA_TOWN_STATE, 2
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_SANTANA_TOWN_NPC
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_SANTANA_MOISESA
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playBGM MUS_SANTANA, TRUE
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MoisesaAndando:
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MoisesaIndoPraMesa:
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_left
	step_end

moisesFala::
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_SANTANA_TOWN_STATE, 2
	goto_if_eq moisesFala_2
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_SANTANA_TOWN_STATE, 3
	goto_if_eq moisesFala_3
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesFala_Text_2
moisesFala_1:
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_left
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

moisesFala_2:
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesFala_Text_0
	goto moisesFala_1

moisesFala_3:
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesFala_Text_1
	goto moisesFala_1


# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
moisesaEntrandoEmCena_Movement_0:
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
moisesaEntrandoEmCena_Movement_1:
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	jump_in_place_up
	step_end

moisesaEntrandoEmCena_Text_0:
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOISESA$"

moisesaEntrandoEmCena_Text_1:
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Bom dia, {PLAYER}!\n"
	.string "Voce dormiu bem?\l"
	.string "Voce esta se sentindo bem?$"

moisesaEntrandoEmCena_Text_2:
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Voce recebeu as noticias? \n"
	.string "Voce passou no pokémon!\p"
	.string "Voce vai receber seu \n"
	.string "primeiro POKÉMON hoje!$"

moisesaEntrandoEmCena_Text_3:
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "uhuul!$"

moisesaEntrandoEmCena_Text_4:
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "O senhor que ira te entregar \n"
	.string "seu POKÉMON esta no \l"
	.string "laboratiorio novo ao lado$"

moisesaEntrandoEmCena_Text_5:
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Veja se um dos seus amigos também\n"
	.string "passaram novestibular para buscar\l"
	.string "o POKÉMON de vocês juntos!$"

moisesFala_Text_0:
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Teste1$"

moisesFala_Text_1:
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Teste2$"

moisesFala_Text_2:
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Teste3$"
