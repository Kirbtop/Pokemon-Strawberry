# 1 "data/scripts/pkmn_center_nurse.pory"

# 2 "data/scripts/pkmn_center_nurse.pory"
Common_EventScript_PkmnCenterNurse2::
# 3 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 4 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 5 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, CountPlayerTrainerStars
# 6 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
# 7 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 8 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
# 9 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
# 10 "data/scripts/pkmn_center_nurse.pory"
	end
# 11 "data/scripts/pkmn_center_nurse.pory"

# 12 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_Goodbye::
# 13 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 14 "data/scripts/pkmn_center_nurse.pory"
	return
# 15 "data/scripts/pkmn_center_nurse.pory"

# 16 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
# 17 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 18 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
# 20 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
# 21 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 22 "data/scripts/pkmn_center_nurse.pory"
    closemessage
# 23 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 24 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
# 25 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 26 "data/scripts/pkmn_center_nurse.pory"
	end
# 27 "data/scripts/pkmn_center_nurse.pory"

# 28 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn::
# 29 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn
# 30 "data/scripts/pkmn_center_nurse.pory"
	return
# 31 "data/scripts/pkmn_center_nurse.pory"

# 32 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
# 33 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn2
# 34 "data/scripts/pkmn_center_nurse.pory"
	return
# 35 "data/scripts/pkmn_center_nurse.pory"

# 36 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 37 "data/scripts/pkmn_center_nurse.pory"
    hidefollower 0
# 38 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_up
# 39 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 40 "data/scripts/pkmn_center_nurse.pory"
    special SpawnCameraObject
# 41 "data/scripts/pkmn_center_nurse.pory"
    applymovement OBJ_EVENT_ID_CAMERA, Camera1
# 42 "data/scripts/pkmn_center_nurse.pory"
    waitmovement 0
# 43 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 44 "data/scripts/pkmn_center_nurse.pory"
.if OW_UNION_DISABLE_CHECK == FALSE && OW_FLAG_MOVE_UNION_ROOM_CHECK != 0
# 45 "data/scripts/pkmn_center_nurse.pory"
	setflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 46 "data/scripts/pkmn_center_nurse.pory"
	call CableClub_OnResume
# 47 "data/scripts/pkmn_center_nurse.pory"
	clearflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 48 "data/scripts/pkmn_center_nurse.pory"
.endif
# 49 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 50 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_down
# 51 "data/scripts/pkmn_center_nurse.pory"
    waitmovement 0
# 52 "data/scripts/pkmn_center_nurse.pory"
    applymovement OBJ_EVENT_ID_CAMERA, Camera2
# 53 "data/scripts/pkmn_center_nurse.pory"
    waitmovement 0
# 54 "data/scripts/pkmn_center_nurse.pory"
    special RemoveCameraObject
# 55 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
# 56 "data/scripts/pkmn_center_nurse.pory"
	callnative UpdateFollowingPokemon
# 57 "data/scripts/pkmn_center_nurse.pory"
    setflag FLAG_POKECENTER
# 58 "data/scripts/pkmn_center_nurse.pory"
	return
# 59 "data/scripts/pkmn_center_nurse.pory"

# 60 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
# 61 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
# 62 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 63 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 64 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 65 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 66 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
# 67 "data/scripts/pkmn_center_nurse.pory"
	end
# 68 "data/scripts/pkmn_center_nurse.pory"

# 69 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card
# 70 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn::
# 71 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
# 72 "data/scripts/pkmn_center_nurse.pory"
	message gText_RestoredPkmnToFullHealth
# 73 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 74 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 75 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 76 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 77 "data/scripts/pkmn_center_nurse.pory"
	return
# 78 "data/scripts/pkmn_center_nurse.pory"

# 79 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn2::
# 80 "data/scripts/pkmn_center_nurse.pory"
	message gText_ThankYouForWaiting
# 81 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 82 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 83 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 84 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 85 "data/scripts/pkmn_center_nurse.pory"
	return
# 86 "data/scripts/pkmn_center_nurse.pory"

# 87 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 88 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
# 89 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
# 90 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 91 "data/scripts/pkmn_center_nurse.pory"
	message CableClub_Text_PlayerIsWaiting
# 92 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 93 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 94 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 95 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 96 "data/scripts/pkmn_center_nurse.pory"
	return
# 97 "data/scripts/pkmn_center_nurse.pory"

# 98 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckPokerus::
# 99 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 100 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
# 101 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 102 "data/scripts/pkmn_center_nurse.pory"
	end
# 103 "data/scripts/pkmn_center_nurse.pory"

# 104 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ExplainPokerus::
# 105 "data/scripts/pkmn_center_nurse.pory"
	message gText_PokerusExplanation
# 106 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
# 107 "data/scripts/pkmn_center_nurse.pory"
	return
# 108 "data/scripts/pkmn_center_nurse.pory"

# 109 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCard::
# 110 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
# 111 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
# 112 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
# 113 "data/scripts/pkmn_center_nurse.pory"
	playse SE_PIN
# 114 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
# 115 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 116 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_Delay48
# 117 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 118 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
# 119 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 120 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 121 "data/scripts/pkmn_center_nurse.pory"
	return
# 122 "data/scripts/pkmn_center_nurse.pory"

# 123 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_AskForUsual::
# 124 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
# 125 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 126 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 127 "data/scripts/pkmn_center_nurse.pory"
	return
# 128 "data/scripts/pkmn_center_nurse.pory"

# 129 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCardHealPkmn::
# 130 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 1
# 131 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn
# 132 "data/scripts/pkmn_center_nurse.pory"
	end
# 133 "data/scripts/pkmn_center_nurse.pory"

# 134 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Bow:
# 135 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 136 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 137 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 138 "data/scripts/pkmn_center_nurse.pory"

# 139 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Turn:
# 140 "data/scripts/pkmn_center_nurse.pory"
	walk_in_place_faster_left
# 141 "data/scripts/pkmn_center_nurse.pory"
	step_end

Common_EventScript_PkmnCenterNurse::
# 146 "data/scripts/pkmn_center_nurse.pory"
	lockall
# 147 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKECENTER, Common_EventScript_PkmnCenterNurse_1
# 150 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_PkmnCenterNurse_Text_0
# 152 "data/scripts/pkmn_center_nurse.pory"
	closemessage
	end

Common_EventScript_PkmnCenterNurse_1:
# 148 "data/scripts/pkmn_center_nurse.pory"
	call Common_EventScript_PkmnCenterNurse2
	return


PokecenterReset::
# 158 "data/scripts/pkmn_center_nurse.pory"
	clearflag FLAG_POKECENTER
	return


# 161 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_up:
# 162 "data/scripts/pkmn_center_nurse.pory"
	walk_up
	step_end

# 165 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_down:
# 166 "data/scripts/pkmn_center_nurse.pory"
	walk_down
	step_end

# 169 "data/scripts/pkmn_center_nurse.pory"
Camera1:
# 170 "data/scripts/pkmn_center_nurse.pory"
	walk_up
# 170 "data/scripts/pkmn_center_nurse.pory"
	walk_up
	step_end

# 173 "data/scripts/pkmn_center_nurse.pory"
Camera2:
# 174 "data/scripts/pkmn_center_nurse.pory"
	walk_down
# 174 "data/scripts/pkmn_center_nurse.pory"
	walk_down
	step_end

Common_EventScript_PkmnCenterNurse_Text_0:
# 150 "data/scripts/pkmn_center_nurse.pory"
	.string "Thank you for waiting. \n"
	.string "Your Pokémon have been fully healed.$"
