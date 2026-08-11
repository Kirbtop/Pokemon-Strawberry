# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0

TrocarTVCor::
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 9, 1, METATILE_BrendansMaysHouse_Orange_TV1, 0
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 10, 1, METATILE_BrendansMaysHouse_Orange_TV2, 0
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 9, 2, METATILE_BrendansMaysHouse_Orange_TV3, 0
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 10, 2, METATILE_BrendansMaysHouse_Orange_TV4, 0
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 50
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox TrocarTVCor_Text_0
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 100
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 9, 1, METATILE_BrendansMaysHouse_Blue_TV1, 0
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 10, 1, METATILE_BrendansMaysHouse_Blue_TV2, 0
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 9, 2, METATILE_BrendansMaysHouse_Blue_TV3, 0
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 10, 2, METATILE_BrendansMaysHouse_Blue_TV4, 0
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


TrocarTVCor_Text_0:
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ei! Eu tava vendo azul!!$"
