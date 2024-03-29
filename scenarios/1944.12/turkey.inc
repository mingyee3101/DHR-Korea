 
 ############################## 
 # Country definition for TUR # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = TUR
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } } 
	# Resource Reserves 
	energy                 = 1320
	metal                  = 660
	rare_materials         = 330
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	capital                = 1075 
	manpower               = 0

	transports             = 135 
	escorts                = 10 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 6 
     political_left    = 2 
     freedom           = 4 
     free_market       = 6 
     professional_army = 5 
     defense_lobby     = 6 
     interventionism   = 3 
    } 

   nationalprovinces      = {  370 384 385 386 409 1054 1055 1056 1057 1058 1059 1060 1061 1062 1063 1064 1065 1066 1067 1068 1071 1072 1073 1074 1075 1076 1077 1078 1079  } 
   ownedprovinces         = {  409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056  } 
   controlledprovinces    = {  409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056  } 
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = {
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Engineers
1830 1840  
#Basic Armoured Car 
2860 2870 2880 2020
#Tankette
7600 7610 2620 2010 2630 2640
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 1070
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Hospital System
 14000 14010 14020
#Modern Agriculture  
5700 5710 5010
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering
5800 5080 5090 
#Great War Battlecruiser  
3310 3320 3330
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Early Light Cruiser 
3110 3120 3130
#Early Heavy Cruiser
 3210 3220 3230
#Short Range Submarine
 3610 3620
 #Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 5620 
 
 
 
# Land doctrines WWI - Central Powers line: germany, turkey, austr, hun, bul, russia
6500 6510 6530 6590 6600 6610 6680 6620 6690 6700 6650 6710 6670 6550 6910
# Land Doctrines WWII - Manpower Focus
6570 6300
#Naval Doctrines
 8010  8020  8040  8050 

 #Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 
 
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AFG value = 50  } 
     relation = {  tag = BUL value = 75  } 
     relation = {  tag = ENG value = 75  } 
     relation = {  tag = FRA value = 50  } 
     relation = {  tag = GER value = 10  } 
     relation = 
     {  tag        = GRE 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1934  } 
      } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = OMN value = 35  } 
     relation = {  tag = PER value = -50  } 
     relation = 
     {  tag        = ROM 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1934  } 
      } 
     relation = {  tag = SAU value = 50  } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = YEM value = 35  } 
     relation = 
     {  tag        = YUG 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1934  } 
      } 
    } 
   SpyInfo                = {  country = "TUR" NumberOfSpies = 7  } 
   headofstate            = {  type = 9 id = 45011  } 
   headofgovernment       = {  type = 9 id = 45014  } 
   foreignminister        = {  type = 9 id = 45015  } 
   armamentminister       = {  type = 9 id = 45004  } 
   ministerofsecurity     = {  type = 9 id = 45005  } 
   ministerofintelligence = {  type = 9 id = 45043  } 
   chiefofstaff           = {  type = 9 id = 45048  } 
   chiefofarmy            = {  type = 9 id = 45008  } 
   chiefofnavy            = {  type = 9 id = 45053  } 
   chiefofair             = {  type = 9 id = 45010  }
   dormant_ministers      = {  45001  } 
   landunit = 
   {  location = 1075 
     name     = "I. Topluluk" 
     id       = {  type = 11700 id = 8  } 
     Division = 
     {  id           = {  type = 11700 id = 9  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "1. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 10  } 
       type         = infantry 
	   model = 10
       extra        = artillery 
	   brigade_model = 6
       strength     = 100 
       organisation = 30 
       name         = "3. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 409 
     name     = "II. Topluluk" 
     id       = {  type = 11700 id = 11  } 
     Division = 
     {  id           = {  type = 11700 id = 12  } 
       type         = infantry 
	   model = 10
       extra        = anti_air 
	   brigade_model = 1
       strength     = 100 
       organisation = 30 
       name         = "5. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 40  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "23. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1078 
     name     = "III. Topluluk" 
     id       = {  type = 11700 id = 13  } 
     Division = 
     {  id           = {  type = 11700 id = 14  } 
       type         = infantry 
	   model = 10
       strength     = 100 
       organisation = 30 
       name         = "7. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 41  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "25. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1059 
     name     = "IV. Topluluk" 
     id       = {  type = 11700 id = 15  } 
     Division = 
     {  id           = {  type = 11700 id = 16  } 
       type         = infantry 
	   model = 10
       strength     = 100 
       organisation = 30 
       name         = "9. Piyade Dagitim" 
      }
     Division = 
     {  id           = {  type = 11700 id = 1000  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "21. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1067 
     name     = "V. Topluluk" 
     id       = {  type = 11700 id = 17  } 
     Division = 
     {  id           = {  type = 11700 id = 18  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "11. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 42  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "27. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1062 
     name     = "VI. Topluluk" 
     id       = {  type = 11700 id = 19  } 
     Division = 
     {  id           = {  type = 11700 id = 20  } 
       type         = infantry 
	   model = 10
       extra        = anti_air 
	   brigade_model = 1
       strength     = 100 
       organisation = 30 
       name         = "13. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 43  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "29. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1061 
     name     = "VII. Topluluk" 
     id       = {  type = 11700 id = 21  } 
     Division = 
     {  id           = {  type = 11700 id = 22  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "15. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 44  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "31. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1060 
     name     = "VIII. Topluluk" 
     id       = {  type = 11700 id = 23  } 
     Division = 
     {  id           = {  type = 11700 id = 24  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "17. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 45  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "33. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1063 
     name     = "IX. Topluluk" 
     id       = {  type = 11700 id = 25  } 
     Division = 
     {  id           = {  type = 11700 id = 26  } 
       type         = infantry 
	   model = 10
       strength     = 100 
       organisation = 30 
       name         = "19. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 46  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "35. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 386 
     name     = "Dagci Topluluk" 
     id       = {  type = 11700 id = 27  } 
     Division = 
     {  id           = {  type = 11700 id = 28  } 
       type         = bergsjaeger 
	   model = 9
       extra        = artillery 
	   brigade_model = 5
       strength     = 80 
       organisation = 30 
       name         = "1. Dagci Tugay" 
      } 
    } 
   landunit = 
   {  location = 1074 
     name     = "T�rkce S�vari Topluluk" 
     id       = {  type = 11700 id = 29  } 
     Division = 
     {  id           = {  type = 11700 id = 30  } 
       type         = cavalry 
	   model = 10
       extra        = artillery 
	   brigade_model = 6
       strength     = 100 
       organisation = 30 
       name         = "1. S�vari Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 31  } 
       type         = cavalry
		model = 10	   
       strength     = 100 
       organisation = 30 
       name         = "3. S�vari Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 32  } 
       type         = cavalry
		model = 10
       strength     = 50 
       organisation = 30 
       name         = "5. Yedek S�vari Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1075 
     name     = "X. Topluluk" 
     id       = {  type = 11700 id = 47  } 
     Division = 
     {  id           = {  type = 11700 id = 48  } 
       type         = motorized 
	   model = 1
       strength     = 75 
       organisation = 30 
       name         = "1. Zyrly Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 49  } 
       type         = motorized 
	   model = 1
       strength     = 75 
       organisation = 30 
       name         = "2. Zyrly Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1064 
     name     = "XI. Topluluk" 
     id       = {  type = 11700 id = 50  } 
     Division = 
     {  id           = {  type = 11700 id = 51  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "37. Piyade Dagitim" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 52  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "39. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1062 
     name     = "XII. Topluluk" 
     id       = {  type = 11700 id = 53  } 
     Division = 
     {  id           = {  type = 11700 id = 54  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "41. Piyade Dagitim" 
      } 
    } 
   landunit = 
   {  location = 1063 
     name     = "XIII. Topluluk" 
     id       = {  type = 11700 id = 55  } 
     Division = 
     {  id           = {  type = 11700 id = 56  } 
       type         = infantry 
	   model = 9
       strength     = 100 
       organisation = 30 
       name         = "43. Piyade Dagitim" 
      } 
    } 
   # #####Turkey `44 ###### 
	navalunit = { 
		id = { type = 11700 id = 1 } 
		name = "T�rkce Deniz Filosu" 
		location = 1076 
		base = 1076 
		division = { 
			id = { type = 11700 id = 100 } 
			name = "Reschid Pasha K�c�k Filotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 11700 id = 7 } 
			name = "1. Filotilla Torpido Ve Denizalti" 
			type = destroyer 
			model = 3 
			} 
		}  
	navalunit = { 
		id = { type = 11700 id = 2205 } 
		name = "1. T�rk Dz. Kuvvetleri Filosu" 
		location = 1076 
		base = 1076 
		division = { 
			id = { type = 11700 id = 3 } 
			name = "TDT Yavuz" 
			type = battlecruiser 
			model = 1 
			} 
		division = { 
			id = { type = 11700 id = 5 } 
			name = "TDT Medjidieh" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 11700 id = 4 } 
			name = "TDT Hamidieh" 
			type = light_cruiser 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 11700 id = 2434 } 
		name = "2. T�rk Dz. Kuvvetleri Filosu" 
		location = 1076 
		base = 1076 
		division = { 
			id = { type = 11700 id = 6 } 
			name = "1. Filotilla Denizalti K�c�k" 
			type = submarine 
			model = 2 
			} 
		} 
   airunit = 
   {  location = 1075 
     base     = 1075 
     name     = "I. T�rkce Hava Topluluk" 
     id       = {  type = 11700 id = 33  } 
     Division = 
     {  id           = {  type = 25635 id = 34  } 
       type         = interceptor 
       model        = 5
       strength     = 48 
       organisation = 30 
       name         = "1. Avci Ucagi Grup" 
      } 
     Division = 
     {  id           = {  type = 25635 id = 35  } 
       type         = tactical_bomber 
       model        = 4 
       strength     = 52 
       organisation = 30 
       name         = "1. Taktik Bombardiman Ucagi Grup" 
      }
     Division = 
     {  id           = {  type = 25635 id = 36  } 
       type         = interceptor 
       model        = 5
       strength     = 29 
       organisation = 30 
       name         = "2. Avci Ucagi Grup" 
      } 
     Division = 
     {  id           = {  type = 25635 id = 37  } 
       type         = tactical_bomber 
       model        = 4 
       strength     = 62 
       organisation = 30 
       name         = "2. Taktik Bombardiman Ucagi Grup" 
      } 
    } 
  } 
 
