# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 5 "data/maps/LittlerootTown/scripts.pory"
	@ map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 6 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 9 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 10 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 0, LittlerootTown_EventScript_NovoJogo_PararMusica
# 11 "data/maps/LittlerootTown/scripts.pory"
	end
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 14 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 0, LittlerootTown_EventScript_NovoJogo
# 15 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0

LittlerootTown_EventScript_NovoJogo::
# 19 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/LittlerootTown/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ComoAssim
# 23 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 24 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 25 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 26 "data/maps/LittlerootTown/scripts.pory"
	playbgm MUS_SANTANA_INTRO, TRUE
# 27 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ComoAssim3
# 28 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 29 "data/maps/LittlerootTown/scripts.pory"
	opendoor 31, 31
# 30 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 31 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 1, 31, 31
# 32 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 33 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, MoisesaSaindo
# 34 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 36 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 2, 31, 31
# 37 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 38 "data/maps/LittlerootTown/scripts.pory"
	applymovement 2, MatiasSaindo
# 39 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/LittlerootTown/scripts.pory"
	closedoor 31, 31
# 41 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 42 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 1
# 43 "data/maps/LittlerootTown/scripts.pory"
	callnative DrawMugshot
# 44 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 45 "data/maps/LittlerootTown/scripts.pory"
	delay 230
# 46 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 47 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 48 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 49 "data/maps/LittlerootTown/scripts.pory"
	delay 40
# 50 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, MoisesaPulando
# 51 "data/maps/LittlerootTown/scripts.pory"
	delay 70
# 52 "data/maps/LittlerootTown/scripts.pory"
	applymovement 2, MatiasSaindo2
# 53 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ComoAssim2
# 54 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 2
# 55 "data/maps/LittlerootTown/scripts.pory"
	callnative DrawMugshot
# 56 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 57 "data/maps/LittlerootTown/scripts.pory"
	delay 230
# 58 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 59 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 60 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 61 "data/maps/LittlerootTown/scripts.pory"
	delay 120
# 62 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8000, 0
# 63 "data/maps/LittlerootTown/scripts.pory"
	callnative DrawMugshot
# 64 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshotEntrace
# 65 "data/maps/LittlerootTown/scripts.pory"
	delay 400
# 66 "data/maps/LittlerootTown/scripts.pory"
	callnative FadeMugshot
# 67 "data/maps/LittlerootTown/scripts.pory"
	delay 100
# 68 "data/maps/LittlerootTown/scripts.pory"
	callnative ClearMugshot
# 69 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 3, 7, 41
# 70 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 71 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, MoisesaEntrando
# 72 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 74 "data/maps/LittlerootTown/scripts.pory"
	opendoor 7, 31
# 75 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, MoisesaEntrarPorta
# 76 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 77 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 78 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 3, 31, 31
# 79 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 80 "data/maps/LittlerootTown/scripts.pory"
	closedoor 7, 31
# 81 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 82 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/LittlerootTown/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 85 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 86 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 4, 5
# 87 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 88 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 89 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NovoJogo_PararMusica::
# 94 "data/maps/LittlerootTown/scripts.pory"
	playbgm MUS_RG_TITLE, TRUE
	end


# 98 "data/maps/LittlerootTown/scripts.pory"
ComoAssim:
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_down
	step_end

# 103 "data/maps/LittlerootTown/scripts.pory"
ComoAssim2:
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 104 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
	step_end

# 107 "data/maps/LittlerootTown/scripts.pory"
ComoAssim3:
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_slow_left
	step_end

# 111 "data/maps/LittlerootTown/scripts.pory"
MoisesaSaindo:
# 112 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 113 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 114 "data/maps/LittlerootTown/scripts.pory"
	face_right
	step_end

# 117 "data/maps/LittlerootTown/scripts.pory"
MatiasSaindo:
# 118 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 119 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 122 "data/maps/LittlerootTown/scripts.pory"
MoisesaPulando:
# 123 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 124 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 126 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 126 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 126 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/LittlerootTown/scripts.pory"
MatiasSaindo2:
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_right
	step_end

# 133 "data/maps/LittlerootTown/scripts.pory"
MoisesaEntrando:
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/LittlerootTown/scripts.pory"
MoisesaEntrarPorta:
# 138 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end
