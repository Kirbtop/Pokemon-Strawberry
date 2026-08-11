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
	end
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0

moisesaEntrandoEmCena::
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playBGM MUS_MOISESA_THEME, TRUE
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_DOOR
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, moisesaEntrandoEmCena_Movement_0
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, MoisesaAndando
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setspeaker moisesaEntrandoEmCena_Text_0
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_1
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_2
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_3
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, moisesaEntrandoEmCena_Movement_1
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_LEDGE
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, moisesaEntrandoEmCena_Movement_1
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_LEDGE
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 60
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_4
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesaEntrandoEmCena_Text_5
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, MoisesaIndoPraMesa
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_SANTANA_TOWN_STATE, 2
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_SANTANA_TOWN_NPC
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_SANTANA_MOISESA
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playBGM MUS_SANTANA, TRUE
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MoisesaAndando:
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MoisesaIndoPraMesa:
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_left
	step_end

moisesFala::
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_SANTANA_TOWN_STATE, 2
	goto_if_eq moisesFala_2
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_SANTANA_TOWN_STATE, 3
	goto_if_eq moisesFala_3
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesFala_Text_2
moisesFala_1:
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_left
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

moisesFala_2:
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesFala_Text_0
	goto moisesFala_1

moisesFala_3:
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox moisesFala_Text_1
	goto moisesFala_1


# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
moisesaEntrandoEmCena_Movement_0:
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
moisesaEntrandoEmCena_Movement_1:
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	jump_in_place_up
	step_end

moisesaEntrandoEmCena_Text_0:
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOISESA$"

moisesaEntrandoEmCena_Text_1:
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Bom dia, {PLAYER}!\n"
	.string "Voce dormiu bem?\l"
	.string "Voce esta se sentindo bem?$"

moisesaEntrandoEmCena_Text_2:
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Voce recebeu as noticias? \n"
	.string "Voce passou no pokémon!\p"
	.string "Voce vai receber seu \n"
	.string "primeiro POKÉMON hoje!$"

moisesaEntrandoEmCena_Text_3:
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "uhuul!$"

moisesaEntrandoEmCena_Text_4:
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "O senhor que ira te entregar \n"
	.string "seu POKÉMON esta no \l"
	.string "laboratiorio novo ao lado$"

moisesaEntrandoEmCena_Text_5:
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Veja se um dos seus amigos também\n"
	.string "passaram novestibular para buscar\l"
	.string "o POKÉMON de vocês juntos!$"

moisesFala_Text_0:
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Teste1$"

moisesFala_Text_1:
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Teste2$"

moisesFala_Text_2:
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Teste3$"
