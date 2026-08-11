# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0

Desenho_Togepi::
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Desenho_Togepi_Text_0, MSGBOX_YESNO
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Desenho_Togepi_2
Desenho_Togepi_1:
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

Desenho_Togepi_2:
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8000, 5
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	callnative DrawMugshot
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 100
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	callnative ClearMugshot
	goto Desenho_Togepi_1


Laboratorio_togepi::
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Laboratorio_togepi_Text_0
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Laboratorio_togepi_Text_1
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_TOGEPI, Laboratorio_togepi_Movement_0
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Laboratorio_togepi_Movement_0:
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
	step_end

Desenho_Togepi_Text_0:
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Um lindo desenho feito pelo professor!\n"
	.string "Você quer dar uma olhada de perto?$"

Laboratorio_togepi_Text_0:
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOGEPI$"

Laboratorio_togepi_Text_1:
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pipi pi!$"
