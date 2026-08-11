# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0

lucasSeguir::
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox lucasSeguir_Text_0
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_WALLY, FNPC_ALL, lucasDialogo
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SANTANA_TOWN_STATE, 3
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	return


lucasDialogo::
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	face_player
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox lucasSeguir_Text_0
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	return


lucasSeguir_Text_0:
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Vou te seguir$"
