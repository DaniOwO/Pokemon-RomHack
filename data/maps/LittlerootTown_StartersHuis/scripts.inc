LittlerootTown_StartersHuis_MapScripts::
# 2 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_StartersHuis_EventScript_BallDefault
	.byte 0


LittlerootTown_StartersHuis_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 0
	return


LittlerootTown_StartersHuis_EventScript_Starmans::
# 10 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN1, LittlerootTown_StartersHuis_EventScript_Starmans_4
LittlerootTown_StartersHuis_EventScript_Starmans_3:
# 56 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Starmans_Text_2, MSGBOX_NPC
LittlerootTown_StartersHuis_EventScript_Starmans_1:
	end

LittlerootTown_StartersHuis_EventScript_Starmans_2:
# 11 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	lock
# 12 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	faceplayer
# 13 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	message LittlerootTown_StartersHuis_EventScript_Starmans_Text_0
# 14 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 15 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	closemessage
# 16 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_10
# 20 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_11
# 24 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_12
# 28 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_13
# 32 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_14
# 36 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_15
# 40 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_16
# 44 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_17
# 48 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Starmans_18
LittlerootTown_StartersHuis_EventScript_Starmans_9:
# 52 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Starmans_Text_1
# 53 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	waitmessage
# 54 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	release
	goto LittlerootTown_StartersHuis_EventScript_Starmans_1

LittlerootTown_StartersHuis_EventScript_Starmans_4:
# 10 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN2, LittlerootTown_StartersHuis_EventScript_Starmans_6
	goto LittlerootTown_StartersHuis_EventScript_Starmans_3

LittlerootTown_StartersHuis_EventScript_Starmans_6:
# 10 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN3, LittlerootTown_StartersHuis_EventScript_Starmans_2
	goto LittlerootTown_StartersHuis_EventScript_Starmans_3

LittlerootTown_StartersHuis_EventScript_Starmans_10:
# 17 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 18 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 0
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_11:
# 21 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 22 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 1
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_12:
# 25 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 26 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 2
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_13:
# 29 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 30 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 3
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_14:
# 33 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 34 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 4
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_15:
# 37 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 38 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 5
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_16:
# 41 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 42 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 6
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_17:
# 45 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 46 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 7
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9

LittlerootTown_StartersHuis_EventScript_Starmans_18:
# 49 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call StarterFade
# 50 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setvar STARTER_LAB, 8
	goto LittlerootTown_StartersHuis_EventScript_Starmans_9


StarterFade::
# 62 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	fadescreen FADE_TO_BLACK
# 63 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	delay 20
# 64 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


LittlerootTown_StartersHuis_EventScript_PokeballOne::
# 68 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	lockall
# 69 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN1, LittlerootTown_StartersHuis_EventScript_PokeballOne_4
LittlerootTown_StartersHuis_EventScript_PokeballOne_3:
# 99 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_PokeballOne_Text_0
LittlerootTown_StartersHuis_EventScript_PokeballOne_1:
# 101 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	waitmessage
# 102 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	releaseall
	end

LittlerootTown_StartersHuis_EventScript_PokeballOne_2:
# 70 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 0
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_9
# 73 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 1
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_10
# 76 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 2
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_11
# 79 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 3
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_12
# 82 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 4
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_13
# 85 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 5
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_14
# 88 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 6
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_15
# 91 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 7
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_16
# 94 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 8
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballOne_17
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_4:
# 69 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN2, LittlerootTown_StartersHuis_EventScript_PokeballOne_6
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_3

LittlerootTown_StartersHuis_EventScript_PokeballOne_6:
# 69 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN3, LittlerootTown_StartersHuis_EventScript_PokeballOne_2
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_3

LittlerootTown_StartersHuis_EventScript_PokeballOne_9:
# 71 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Bulbasaur
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_10:
# 74 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Chikorita
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_11:
# 77 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Treecko
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_12:
# 80 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Turtwig
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_13:
# 83 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Snivy
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_14:
# 86 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Chespin
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_15:
# 89 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Rowlet
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_16:
# 92 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Grookey
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1

LittlerootTown_StartersHuis_EventScript_PokeballOne_17:
# 95 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Sprigatito
	goto LittlerootTown_StartersHuis_EventScript_PokeballOne_1


LittlerootTown_StartersHuis_EventScript_PokeballTwo::
# 107 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	lockall
# 108 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN1, LittlerootTown_StartersHuis_EventScript_PokeballTwo_4
LittlerootTown_StartersHuis_EventScript_PokeballTwo_3:
# 138 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_PokeballOne_Text_0
LittlerootTown_StartersHuis_EventScript_PokeballTwo_1:
# 140 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	waitmessage
# 141 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	releaseall
	end

LittlerootTown_StartersHuis_EventScript_PokeballTwo_2:
# 109 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 0
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_9
# 112 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 1
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_10
# 115 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 2
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_11
# 118 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 3
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_12
# 121 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 4
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_13
# 124 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 5
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_14
# 127 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 6
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_15
# 130 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 7
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_16
# 133 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 8
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballTwo_17
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_4:
# 108 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN2, LittlerootTown_StartersHuis_EventScript_PokeballTwo_6
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_3

LittlerootTown_StartersHuis_EventScript_PokeballTwo_6:
# 108 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN3, LittlerootTown_StartersHuis_EventScript_PokeballTwo_2
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_3

LittlerootTown_StartersHuis_EventScript_PokeballTwo_9:
# 110 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Charmander
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_10:
# 113 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Cyndaquil
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_11:
# 116 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Torchic
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_12:
# 119 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Chimchar
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_13:
# 122 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Tepig
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_14:
# 125 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Fennekin
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_15:
# 128 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Litten
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_16:
# 131 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Scorbunny
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1

LittlerootTown_StartersHuis_EventScript_PokeballTwo_17:
# 134 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Fuecoco
	goto LittlerootTown_StartersHuis_EventScript_PokeballTwo_1


LittlerootTown_StartersHuis_EventScript_PokeballThree::
# 146 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	lockall
# 147 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN1, LittlerootTown_StartersHuis_EventScript_PokeballThree_4
LittlerootTown_StartersHuis_EventScript_PokeballThree_3:
# 177 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_PokeballOne_Text_0
LittlerootTown_StartersHuis_EventScript_PokeballThree_1:
# 179 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	waitmessage
# 180 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	releaseall
	end

LittlerootTown_StartersHuis_EventScript_PokeballThree_2:
# 148 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 0
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_9
# 151 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 1
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_10
# 154 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 2
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_11
# 157 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 3
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_12
# 160 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 4
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_13
# 163 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 5
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_14
# 166 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 6
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_15
# 169 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 7
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_16
# 172 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare STARTER_LAB, 8
	goto_if_eq LittlerootTown_StartersHuis_EventScript_PokeballThree_17
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_4:
# 147 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN2, LittlerootTown_StartersHuis_EventScript_PokeballThree_6
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_3

LittlerootTown_StartersHuis_EventScript_PokeballThree_6:
# 147 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	goto_if_unset STARTER_GEN3, LittlerootTown_StartersHuis_EventScript_PokeballThree_2
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_3

LittlerootTown_StartersHuis_EventScript_PokeballThree_9:
# 149 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Squirtle
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_10:
# 152 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Totodile
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_11:
# 155 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Mudkip
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_12:
# 158 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Piplup
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_13:
# 161 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Oshawott
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_14:
# 164 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Froakie
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_15:
# 167 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Popplio
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_16:
# 170 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Sobble
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1

LittlerootTown_StartersHuis_EventScript_PokeballThree_17:
# 173 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call LittlerootTown_StartersHuis_EventScript_Quaxly
	goto LittlerootTown_StartersHuis_EventScript_PokeballThree_1


LittlerootTown_StartersHuis_EventScript_Bulbasaur::
# 185 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 186 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 187 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Bulbasaur_1
# 209 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 210 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Bulbasaur_1:
# 188 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 189 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Bulbasaur_4
# 196 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Bulbasaur_5
# 204 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 205 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Bulbasaur_4:
# 190 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 191 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_1
# 192 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 193 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 194 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Bulbasaur_5:
# 197 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 198 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_1
# 199 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 200 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 201 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Charmander::
# 215 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 216 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 217 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Charmander_1
# 239 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 240 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Charmander_1:
# 218 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 219 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Charmander_4
# 226 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Charmander_5
# 234 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 235 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Charmander_4:
# 220 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 221 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Charmander_Text_1
# 222 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 223 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 224 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Charmander_5:
# 227 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 228 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Charmander_Text_1
# 229 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 230 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 231 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Squirtle::
# 245 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 246 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 247 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Squirtle_1
# 269 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 270 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Squirtle_1:
# 248 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 249 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Squirtle_4
# 256 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Squirtle_5
# 264 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 265 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Squirtle_4:
# 250 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 251 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Squirtle_Text_1
# 252 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 253 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 254 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Squirtle_5:
# 257 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 258 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Squirtle_Text_1
# 259 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 260 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 261 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Chikorita::
# 275 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 276 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 277 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chikorita_1
# 299 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 300 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Chikorita_1:
# 278 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 279 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chikorita_4
# 286 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chikorita_5
# 294 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 295 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Chikorita_4:
# 280 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 281 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chikorita_Text_1
# 282 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 283 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 284 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Chikorita_5:
# 287 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 288 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chikorita_Text_1
# 289 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 290 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 291 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Cyndaquil::
# 305 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 306 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 307 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Cyndaquil_1
# 329 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 330 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Cyndaquil_1:
# 308 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 309 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Cyndaquil_4
# 316 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Cyndaquil_5
# 324 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 325 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Cyndaquil_4:
# 310 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 311 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Cyndaquil_Text_1
# 312 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 313 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 314 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Cyndaquil_5:
# 317 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 318 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Cyndaquil_Text_1
# 319 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 320 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 321 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Totodile::
# 335 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 336 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 337 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Totodile_1
# 359 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 360 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Totodile_1:
# 338 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 339 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Totodile_4
# 346 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Totodile_5
# 354 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 355 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Totodile_4:
# 340 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 341 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Totodile_Text_1
# 342 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 343 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 344 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Totodile_5:
# 347 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 348 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Totodile_Text_1
# 349 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 350 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 351 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Treecko::
# 365 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 366 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 367 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Treecko_1
# 389 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 390 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Treecko_1:
# 368 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 369 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Treecko_4
# 376 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Treecko_5
# 384 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 385 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Treecko_4:
# 370 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 371 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Treecko_Text_1
# 372 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 373 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 374 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Treecko_5:
# 377 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 378 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Treecko_Text_1
# 379 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 380 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 381 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Torchic::
# 395 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 396 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 397 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Torchic_1
# 419 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 420 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Torchic_1:
# 398 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 399 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Torchic_4
# 406 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Torchic_5
# 414 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 415 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Torchic_4:
# 400 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 401 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Torchic_Text_1
# 402 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 403 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 404 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Torchic_5:
# 407 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 408 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Torchic_Text_1
# 409 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 410 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 411 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Mudkip::
# 425 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 426 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 427 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Mudkip_1
# 449 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 450 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Mudkip_1:
# 428 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 429 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Mudkip_4
# 436 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Mudkip_5
# 444 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 445 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Mudkip_4:
# 430 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 431 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Mudkip_Text_1
# 432 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 433 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 434 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Mudkip_5:
# 437 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 438 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Mudkip_Text_1
# 439 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 440 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 441 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Turtwig::
# 455 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 456 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 457 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Turtwig_1
# 479 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 480 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Turtwig_1:
# 458 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 459 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Turtwig_4
# 466 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Turtwig_5
# 474 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 475 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Turtwig_4:
# 460 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 461 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Turtwig_Text_1
# 462 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 463 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 464 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Turtwig_5:
# 467 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 468 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Turtwig_Text_1
# 469 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 470 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 471 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Chimchar::
# 485 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 486 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 487 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chimchar_1
# 509 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 510 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Chimchar_1:
# 488 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 489 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chimchar_4
# 496 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chimchar_5
# 504 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 505 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Chimchar_4:
# 490 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 491 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chimchar_Text_1
# 492 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 493 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 494 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Chimchar_5:
# 497 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 498 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chimchar_Text_1
# 499 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 500 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 501 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Piplup::
# 515 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 516 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 517 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Piplup_1
# 539 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 540 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Piplup_1:
# 518 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 519 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Piplup_4
# 526 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Piplup_5
# 534 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 535 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Piplup_4:
# 520 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 521 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Piplup_Text_1
# 522 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 523 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 524 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Piplup_5:
# 527 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 528 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Piplup_Text_1
# 529 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 530 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 531 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Snivy::
# 545 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 546 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 547 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Snivy_1
# 569 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 570 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Snivy_1:
# 548 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 549 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Snivy_4
# 556 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Snivy_5
# 564 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 565 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Snivy_4:
# 550 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 551 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Snivy_Text_1
# 552 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 553 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 554 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Snivy_5:
# 557 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 558 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Snivy_Text_1
# 559 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 560 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 561 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Tepig::
# 575 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 576 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 577 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Tepig_1
# 599 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 600 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Tepig_1:
# 578 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 579 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Tepig_4
# 586 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Tepig_5
# 594 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 595 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Tepig_4:
# 580 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 581 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Tepig_Text_1
# 582 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 583 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 584 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Tepig_5:
# 587 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 588 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Tepig_Text_1
# 589 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 590 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 591 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Oshawott::
# 605 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 606 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 607 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Oshawott_1
# 629 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 630 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Oshawott_1:
# 608 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 609 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Oshawott_4
# 616 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Oshawott_5
# 624 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 625 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Oshawott_4:
# 610 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 611 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Oshawott_Text_1
# 612 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 613 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 614 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Oshawott_5:
# 617 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 618 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Oshawott_Text_1
# 619 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 620 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 621 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Chespin::
# 635 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 636 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 637 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chespin_1
# 659 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 660 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Chespin_1:
# 638 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 639 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chespin_4
# 646 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Chespin_5
# 654 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 655 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Chespin_4:
# 640 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 641 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chespin_Text_1
# 642 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 643 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 644 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Chespin_5:
# 647 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 648 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Chespin_Text_1
# 649 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 650 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 651 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Fennekin::
# 665 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 666 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Fennekin_Text_0, MSGBOX_YESNO
# 667 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Fennekin_1
# 689 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 690 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Fennekin_1:
# 668 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 669 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Fennekin_4
# 676 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Fennekin_5
# 684 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 685 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Fennekin_4:
# 670 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 671 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Fennekin_Text_1
# 672 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 673 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 674 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Fennekin_5:
# 677 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 678 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Fennekin_Text_1
# 679 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 680 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 681 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Froakie::
# 695 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 696 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 697 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Froakie_1
# 719 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 720 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Froakie_1:
# 698 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 699 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Froakie_4
# 706 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Froakie_5
# 714 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 715 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Froakie_4:
# 700 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 701 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Froakie_Text_1
# 702 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 703 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 704 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Froakie_5:
# 707 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 708 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Froakie_Text_1
# 709 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 710 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 711 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Rowlet::
# 725 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 726 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 727 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Rowlet_1
# 749 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 750 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Rowlet_1:
# 728 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 729 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Rowlet_4
# 736 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Rowlet_5
# 744 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 745 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Rowlet_4:
# 730 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 731 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Rowlet_Text_1
# 732 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 733 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 734 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Rowlet_5:
# 737 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 738 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Rowlet_Text_1
# 739 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 740 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 741 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Litten::
# 755 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 756 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Litten_Text_0, MSGBOX_YESNO
# 757 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Litten_1
# 779 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 780 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Litten_1:
# 758 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 759 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Litten_4
# 766 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Litten_5
# 774 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 775 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Litten_4:
# 760 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 761 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Litten_Text_1
# 762 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 763 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 764 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Litten_5:
# 767 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 768 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Litten_Text_1
# 769 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 770 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 771 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Popplio::
# 785 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 786 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 787 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Popplio_1
# 809 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 810 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Popplio_1:
# 788 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 789 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Popplio_4
# 796 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Popplio_5
# 804 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 805 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Popplio_4:
# 790 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 791 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Popplio_Text_1
# 792 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 793 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 794 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Popplio_5:
# 797 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 798 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Popplio_Text_1
# 799 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 800 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 801 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Grookey::
# 815 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 816 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 817 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Grookey_1
# 839 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 840 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Grookey_1:
# 818 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 819 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Grookey_4
# 826 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Grookey_5
# 834 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 835 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Grookey_4:
# 820 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 821 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Grookey_Text_1
# 822 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 823 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 824 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Grookey_5:
# 827 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 828 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Grookey_Text_1
# 829 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 830 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 831 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Scorbunny::
# 845 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 846 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
# 847 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Scorbunny_1
# 869 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 870 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Scorbunny_1:
# 848 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 849 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Scorbunny_4
# 856 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Scorbunny_5
# 864 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 865 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Scorbunny_4:
# 850 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 851 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Scorbunny_Text_1
# 852 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 853 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 854 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Scorbunny_5:
# 857 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 858 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Scorbunny_Text_1
# 859 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 860 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 861 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Sobble::
# 875 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 876 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Sobble_Text_0, MSGBOX_YESNO
# 877 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Sobble_1
# 899 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 900 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Sobble_1:
# 878 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 879 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Sobble_4
# 886 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Sobble_5
# 894 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 895 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Sobble_4:
# 880 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 881 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Sobble_Text_1
# 882 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 883 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 884 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Sobble_5:
# 887 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 888 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Sobble_Text_1
# 889 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 890 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 891 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Sprigatito::
# 905 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 906 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 907 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Sprigatito_1
# 929 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 930 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Sprigatito_1:
# 908 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 909 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Sprigatito_4
# 916 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Sprigatito_5
# 924 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 925 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Sprigatito_4:
# 910 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 911 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Sprigatito_Text_1
# 912 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 913 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 914 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Sprigatito_5:
# 917 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 918 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Sprigatito_Text_1
# 919 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 1
# 920 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN1
# 921 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Fuecoco::
# 935 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 936 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 937 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Fuecoco_1
# 959 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 960 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Fuecoco_1:
# 938 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 939 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Fuecoco_4
# 946 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Fuecoco_5
# 954 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 955 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Fuecoco_4:
# 940 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 941 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Fuecoco_Text_1
# 942 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 943 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 944 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Fuecoco_5:
# 947 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 948 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Fuecoco_Text_1
# 949 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 2
# 950 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN2
# 951 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_StartersHuis_EventScript_Quaxly::
# 965 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 966 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 967 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Quaxly_1
# 989 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 990 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_NotChosen
	return

LittlerootTown_StartersHuis_EventScript_Quaxly_1:
# 968 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 969 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Quaxly_4
# 976 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StartersHuis_EventScript_Quaxly_5
# 984 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 985 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2
	return

LittlerootTown_StartersHuis_EventScript_Quaxly_4:
# 970 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 971 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Quaxly_Text_1
# 972 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 973 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 974 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_StartersHuis_EventScript_Quaxly_5:
# 977 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 978 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox LittlerootTown_StartersHuis_EventScript_Quaxly_Text_1
# 979 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	removeobject 3
# 980 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag STARTER_GEN3
# 981 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 995 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 996 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 997 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 998 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 999 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1000 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 1007 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1008 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	hidemonpic
# 1009 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1010 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1013 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 1011 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_StartersHuis_EventScript_Starmans_Text_0:
# 13 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Hello, I am Professor Starmans$"

LittlerootTown_StartersHuis_EventScript_Starmans_Text_1:
# 52 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Choose wisely...$"

LittlerootTown_StartersHuis_EventScript_Starmans_Text_2:
# 56 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Take care of your Pokemon$"

LittlerootTown_StartersHuis_EventScript_PokeballOne_Text_0:
# 99 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Don't Take Another$"

LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_0:
# 186 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_1:
# 191 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Bulbasaur$"

LittlerootTown_StartersHuis_EventScript_Bulbasaur_Text_2:
# 205 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "No More Room$"

LittlerootTown_StartersHuis_EventScript_Charmander_Text_0:
# 216 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Charmander?$"

LittlerootTown_StartersHuis_EventScript_Charmander_Text_1:
# 221 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Charmander$"

LittlerootTown_StartersHuis_EventScript_Squirtle_Text_0:
# 246 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_StartersHuis_EventScript_Squirtle_Text_1:
# 251 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Squirtle$"

LittlerootTown_StartersHuis_EventScript_Chikorita_Text_0:
# 276 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Chikorita?$"

LittlerootTown_StartersHuis_EventScript_Chikorita_Text_1:
# 281 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Chikorita$"

LittlerootTown_StartersHuis_EventScript_Cyndaquil_Text_0:
# 306 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

LittlerootTown_StartersHuis_EventScript_Cyndaquil_Text_1:
# 311 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Cyndaquil$"

LittlerootTown_StartersHuis_EventScript_Totodile_Text_0:
# 336 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Totodile?$"

LittlerootTown_StartersHuis_EventScript_Totodile_Text_1:
# 341 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Totodile$"

LittlerootTown_StartersHuis_EventScript_Treecko_Text_0:
# 366 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Treecko?$"

LittlerootTown_StartersHuis_EventScript_Treecko_Text_1:
# 371 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Treecko$"

LittlerootTown_StartersHuis_EventScript_Torchic_Text_0:
# 396 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Torchic?$"

LittlerootTown_StartersHuis_EventScript_Torchic_Text_1:
# 401 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Torchic$"

LittlerootTown_StartersHuis_EventScript_Mudkip_Text_0:
# 426 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Mudkip?$"

LittlerootTown_StartersHuis_EventScript_Mudkip_Text_1:
# 431 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Mudkip$"

LittlerootTown_StartersHuis_EventScript_Turtwig_Text_0:
# 456 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Turtwig?$"

LittlerootTown_StartersHuis_EventScript_Turtwig_Text_1:
# 461 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Turtwig$"

LittlerootTown_StartersHuis_EventScript_Chimchar_Text_0:
# 486 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Chimchar?$"

LittlerootTown_StartersHuis_EventScript_Chimchar_Text_1:
# 491 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Chimchar$"

LittlerootTown_StartersHuis_EventScript_Piplup_Text_0:
# 516 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Piplup?$"

LittlerootTown_StartersHuis_EventScript_Piplup_Text_1:
# 521 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Piplup$"

LittlerootTown_StartersHuis_EventScript_Snivy_Text_0:
# 546 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Snivy?$"

LittlerootTown_StartersHuis_EventScript_Snivy_Text_1:
# 551 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Snivy$"

LittlerootTown_StartersHuis_EventScript_Tepig_Text_0:
# 576 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Tepig?$"

LittlerootTown_StartersHuis_EventScript_Tepig_Text_1:
# 581 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Tepig$"

LittlerootTown_StartersHuis_EventScript_Oshawott_Text_0:
# 606 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Oshawott?$"

LittlerootTown_StartersHuis_EventScript_Oshawott_Text_1:
# 611 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Oshawott$"

LittlerootTown_StartersHuis_EventScript_Chespin_Text_0:
# 636 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Chespin?$"

LittlerootTown_StartersHuis_EventScript_Chespin_Text_1:
# 641 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Chespin$"

LittlerootTown_StartersHuis_EventScript_Fennekin_Text_0:
# 666 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Fennekin?$"

LittlerootTown_StartersHuis_EventScript_Fennekin_Text_1:
# 671 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Fennekin$"

LittlerootTown_StartersHuis_EventScript_Froakie_Text_0:
# 696 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Froakie?$"

LittlerootTown_StartersHuis_EventScript_Froakie_Text_1:
# 701 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Froakie$"

LittlerootTown_StartersHuis_EventScript_Rowlet_Text_0:
# 726 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Rowlet?$"

LittlerootTown_StartersHuis_EventScript_Rowlet_Text_1:
# 731 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Rowlet$"

LittlerootTown_StartersHuis_EventScript_Litten_Text_0:
# 756 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Litten?$"

LittlerootTown_StartersHuis_EventScript_Litten_Text_1:
# 761 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Litten$"

LittlerootTown_StartersHuis_EventScript_Popplio_Text_0:
# 786 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Popplio?$"

LittlerootTown_StartersHuis_EventScript_Popplio_Text_1:
# 791 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Popplio$"

LittlerootTown_StartersHuis_EventScript_Grookey_Text_0:
# 816 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Grookey?$"

LittlerootTown_StartersHuis_EventScript_Grookey_Text_1:
# 821 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Grookey$"

LittlerootTown_StartersHuis_EventScript_Scorbunny_Text_0:
# 846 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

LittlerootTown_StartersHuis_EventScript_Scorbunny_Text_1:
# 851 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Scorbunny$"

LittlerootTown_StartersHuis_EventScript_Sobble_Text_0:
# 876 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Sobble?$"

LittlerootTown_StartersHuis_EventScript_Sobble_Text_1:
# 881 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Sobble$"

LittlerootTown_StartersHuis_EventScript_Sprigatito_Text_0:
# 906 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

LittlerootTown_StartersHuis_EventScript_Sprigatito_Text_1:
# 911 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Sprigatito$"

LittlerootTown_StartersHuis_EventScript_Fuecoco_Text_0:
# 936 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

LittlerootTown_StartersHuis_EventScript_Fuecoco_Text_1:
# 941 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Fuecoco$"

LittlerootTown_StartersHuis_EventScript_Quaxly_Text_0:
# 966 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Do you want to choose Quaxly?$"

LittlerootTown_StartersHuis_EventScript_Quaxly_Text_1:
# 971 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Recieved Quaxly$"

NicknamePartyMon_Text_0:
# 995 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 1013 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "Transferred to PC$"

LittlerootTown_StartersHuis_NotChosen::
# 1016 "data/maps/LittlerootTown_StartersHuis/scripts.pory"
	.string "You did not choose the Pokemon$"
