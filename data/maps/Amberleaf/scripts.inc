Amberleaf_MapScripts::
	.byte 0


Amberleaf_EventScript_LabSign::
# 6 "data/maps/Amberleaf/scripts.pory"
	lockall
# 7 "data/maps/Amberleaf/scripts.pory"
	msgbox Amberleaf_EventScript_LabSign_Text_0
# 8 "data/maps/Amberleaf/scripts.pory"
	releaseall
	return


Amberleaf_EventScript_HomeSign::
# 12 "data/maps/Amberleaf/scripts.pory"
	lockall
# 13 "data/maps/Amberleaf/scripts.pory"
	msgbox Amberleaf_EventScript_HomeSign_Text_0
# 14 "data/maps/Amberleaf/scripts.pory"
	releaseall
	return


Amberleaf_EventScript_RivalHomeSign::
# 18 "data/maps/Amberleaf/scripts.pory"
	lockall
# 19 "data/maps/Amberleaf/scripts.pory"
	msgbox Amberleaf_EventScript_RivalHomeSign_Text_0
# 20 "data/maps/Amberleaf/scripts.pory"
	releaseall
	return


Amberleaf_EventScript_LabSign_Text_0:
# 7 "data/maps/Amberleaf/scripts.pory"
	.string "Prof. Starmans' Lab$"

Amberleaf_EventScript_HomeSign_Text_0:
# 13 "data/maps/Amberleaf/scripts.pory"
	.string "Your home?$"

Amberleaf_EventScript_RivalHomeSign_Text_0:
# 19 "data/maps/Amberleaf/scripts.pory"
	.string "Rival's home?$"
