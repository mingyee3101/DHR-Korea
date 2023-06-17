 
 ############################## 
 # Country definition for HUN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HUN
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } } 
	manpower               = 150 
	capital                = 284 
	# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 100 
    
   
   diplomacy = 
   { relation = {  tag = SLO value = -20  } 
     relation = {  tag = ENG value = -50  } 
     relation = {  tag = FIN value = 75  } 
     relation = {  tag = FRA value = -70  } 
     relation = {  tag = GER value = 150  } 
     relation = {  tag = IRE value = 25  } 
     relation = {  tag = ITA value = 125  } 
     relation = {  tag = ROM value = -50  } 
     relation = {  tag = YUG value = -80  } 
    } 
   SpyInfo                = {  country = "HUN" NumberOfSpies = 7  } 
 nationalprovinces = {  209 210 215 276 277 278 279 280 281 282 283 284 286 288 292 293 296 341 } 
 ownedprovinces = {  276 277 278 279 280 281 282 283 284 215 210 209 213  } 
 controlledprovinces = {  276 277 278 279 280 281 282 283 284 215 210 209 213  } 
 claimedprovinces = { 188 208 211 212 213 214 285 287 289 291 295 } 
	# Eastern Minor Tech '36 
	# Group D 1936 techs 
	# ###################### 
	# GW fighter 
	techapps               = {  
	# Interceptor
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole fighter
	4300 4310 4320 4330
	# Tactical bomber
	4600 4610 4620 4630 4120 4130
	# Strategic bomber
	4800 4810 4820
	# Navalbomber
	4700 4710
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100
	# Supply 
	1910 1920 1930 1940 1950 1960 1970
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	# Motorized Division  
	1396
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240
	# Engineers
	1830 1840 1850 1860
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Tanks
	7600 7610 2620 2010 2630 2640 2646
	# Agriculture  
	5700 5710 5010 5020
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090 
	# Medicine
	5600 5610 5620
	# Hospital System
	14000 14010
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# Manpower Focus People's Army Path (SOV)
	6570 6300
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 1 
     free_market       = 4 
     freedom           = 3 
     professional_army = 5 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 105001  } 
   headofgovernment       = {  type = 9 id = 105024  } 
   foreignminister        = {  type = 9 id = 105038  } 
   armamentminister       = {  type = 9 id = 105052  } 
   ministerofsecurity     = {  type = 9 id = 105066  } 
   ministerofintelligence = {  type = 9 id = 105083  } 
   chiefofstaff           = {  type = 9 id = 105095  } 
   chiefofarmy            = {  type = 9 id = 105103  } 
   chiefofnavy            = {  type = 9 id = 105009  } 
   chiefofair             = {  type = 9 id = 105120  } 
   dormant_ministers      = {  105017 105002 105022 105023 105003 105037 105005 105006 105007 105008 105010 105004  }

   # ROYAL HUNGARIAN ARMY
   landunit = 
   {  id       = {  type = 20500 id = 1  } 
     name     = "Magyar Kir�lyi Honv�ds�g" 
     leader = 105088 # Werth
     location = 284 
	Division = 
     {  id       = {  type = 20500 id = 2  } 
       name     = "Foparancsnoks�g" 
       strength     = 40
       type     = hq
	   model = 2
      } 
     Division = 
     {  id       = {  type = 20500 id = 10  } 
       name     = "1. lovasdand�r" 
       strength     = 40
       type     = cavalry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 11  } 
       name     = "2. lovasdand�r" 
       strength     = 40
       type     = cavalry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 12  } 
       name     = "1. g�pkocsiz� dand�r" 
       strength     = 40
       type     = motorized 
	   model = 0
      } 
     Division = 
     {  id       = {  type = 20500 id = 13  } 
       name     = "2. g�pkocsiz� dand�r" 
       strength     = 40
       type     = motorized 
	   model = 0
      } 
    } 
   # 1st Army
   landunit = 
   {  id       = {  type = 20500 id = 17  } 
     name     = "I. hadtest/I. hadsereg" 
     leader = 105019 # Decleva
     location = 284 
     Division = 
     {  id       = {  type = 20500 id = 3  } 
       name     = "1. gyalogdand�r" 
       strength     = 35
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 4  } 
       name     = "2. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 5  } 
       name     = "3. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 18  } 
     name     = "II. hadtest/I. hadsereg" 
     location = 278 
     Division = 
     {  id       = {  type = 20500 id = 6  } 
       name     = "4. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 7  } 
       name     = "5. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 8  } 
       name     = "6. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 19  } 
     name     = "III. hadtest/I. hadsereg" 
     leader = 105114 # Kiss L
     location = 279 
     Division = 
     {  id       = {  type = 20500 id = 9  } 
       name     = "7. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 20  } 
       name     = "8. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 21  } 
       name     = "9. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   # 2nd Army
   landunit = 
   {  id       = {  type = 20500 id = 24  } 
     name     = "IV. hadtest/II. hadsereg" 
     location = 277 
     Division = 
     {  id       = {  type = 20500 id = 25  } 
       name     = "10. gyalogdand�r" 
       strength     = 35
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 26  } 
       name     = "11. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 27  } 
       name     = "12. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 28  } 
     name     = "V. hadtest/II. hadsereg" 
     location = 280 
     Division = 
     {  id       = {  type = 20500 id = 29  } 
       name     = "13. gyalogdand�r" 
       strength     = 35
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 30  } 
       name     = "14. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 31  } 
       name     = "15. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 32  } 
     name     = "VI. hadtest/II. hadsereg" 
     leader = 105004 # Bajn�czy
     location = 281 
     Division = 
     {  id       = {  type = 20500 id = 33  } 
       name     = "16. gyalogdand�r" 
       strength     = 35
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 34  } 
       name     = "17. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 35  } 
       name     = "18. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   # 3rd Army
   landunit = 
   {  id       = {  type = 20500 id = 38  } 
     name     = "VII. hadtest/III. hadsereg" 
     leader = 105115 # Nagy Gy
     location = 282 
     Division = 
     {  id       = {  type = 20500 id = 39  } 
       name     = "19. gyalogdand�r" 
       strength     = 35
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 40  } 
       name     = "20. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 41  } 
       name     = "21. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 42  } 
     name     = "VIII. hadtest/III. hadsereg" 
     leader = 105073 # Szombathelyi
     location = 209 
     Division = 
     {  id       = {  type = 20500 id = 43  } 
       name     = "22. gyalogdand�r" 
       strength     = 35
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 44  } 
       name     = "23. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 45  } 
       name     = "24. gyalogdand�r" 
       strength     = 35
       type     = infantry 
	   model = 9
      } 
    } 
   
   # 1ST AIR ARMY
   airunit = 
   {  id       = {  type = 20500 id = 50  } 
     name     = "Magyar Kir�lyi Honv�d L�giero" 
     leader = 105191 # H�ry
     location = 284 
     base     = 284 
     Division = 
     {  id       = {  type = 20500 id = 51  } 
       name     = "1. vad�szoszt�ly" 
       type     = interceptor 
       model    = 8
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 20500 id = 52  } 
       name     = "1. bomb�z�oszt�ly" 
       type     = tactical_bomber 
       model    = 6 
       strength = 30 
      } 
    } 
  } 
 