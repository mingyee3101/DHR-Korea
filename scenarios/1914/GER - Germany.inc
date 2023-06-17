##############################
# Country definition for U08 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U08
  ai                 = "U08_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 163 # 베를린 
  manpower           = 308
  # Resource Reserves
  energy         = 9780
  metal          = 4890
  rare_materials = 2445
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 550
  escorts        = 23

  diplomacy = {
    relation = { tag = U09 value = 150 access = yes }
    relation = { tag = BEL value = 20 }
    relation = { tag = BUL value = 100 }
    relation = { tag = ENG value = -125 }
    relation = { tag = FRA value = -200 }
    relation = { tag = GRE value = 50 }
    relation = { tag = HOL value = 50 }
    relation = { tag = ITA value = 100 }
    relation = { tag = JAP value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = NZL value = 20 }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 1 }
    relation = { tag = SCH value = 50 }
    relation = { tag = RUS value = -20 }
    relation = { tag = SWE value = 100 }
    relation = { tag = OTT value = 100 }
    relation = { tag = SER value = -50 }
  }
  SpyInfo                = { country = "U08" NumberOfSpies = 7 }

  nationalprovinces      = { 126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 134 132 178 175 179 167 164 184 104 107 105 109 182 155 161 185 165 166 168 133 144 160 180 136 139 135 129 128 130 216 181 261 225 224 221 149 110 150 143 140 226 222 }
  ownedprovinces         = { 126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 134 132 178 175 179 167 164 184 133 182 155 161 185 165 166 168 150 143 144 160 180 136 139 135 129 128 130 149 140 105 107 104 181 226 224 225 216 221 261 222 1671 950 948 955 925 928 911 910 909 883 882 886 885 884 849 850 851 848 846 847 1328 1602 1603 1605 1610 1725 1726 1727 1587 1686 1685 1684 1668 1670 1665 1669 1667 1666 1674 1675 1676 1677 1681 1731 1724 110 933 936 924 919 908 1234 1682 }
  controlledprovinces    = { 126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 134 132 178 175 179 167 164 184 133 182 155 161 185 165 166 168 150 143 1671 144 160 180 136 139 135 129 128 130 149 140 105 107 104 181 226 224 225 216 221 261 222 950 948 955 925 928 911 910 909 883 882 886 885 884 849 850 851 848 846 847 1328 1602 1603 1605 1610 1725 1726 1727 1587 1686 1685 1684 1668 1670 1665 1669 1667 1666 1674 1675 1676 1677 1681 1731 1724 110 933 936 924 919 908 1234 1682 }
  claimedprovinces       = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955 1605 1602 1668 1667 1727 1726 1724 1725 1665 1587 1675 1674 1681 1677 1603 1610 1234 1666 1669 1670 1671 1676 1684 1685 1686 1731 1328 1682 }

  techapps               = { 1010 1020 1030 1040 13060 13070 13080 1310 1160 1170 1180 1830 1910 1920 2290 2300 2860 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 3440 3450 3310 3320 3610 3620 3810 3720 4500 4600 4610 4740 5310 5600 5700 5800 5080 5810 6500 6510 6530 6590 6600 27480 27490 27500 27510 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8510 8520 8550 8900 8910 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 4
    free_market       = 6
    professional_army = 6
    defense_lobby     = 9
    interventionism   = 10
  }
  headofstate            = { type = 9 id = 855001 } # 빌헬름 2세 
  headofgovernment       = { type = 9 id = 855004 } # 테오발트 폰 베트만 홀베크 
  foreignminister        = { type = 9 id = 855010 } # 고틀리프 폰 야고우 
  armamentminister       = { type = 9 id = 855050 } # 헤르만 쿤 
  ministerofsecurity     = { type = 9 id = 855056 } # 클레멘스 폰 델브뤽 
  ministerofintelligence = { type = 9 id = 855067 } # 발터 니콜라이 
  chiefofstaff           = { type = 9 id = 855072 } # 헬무트 폰 몰트케 
  chiefofarmy            = { type = 9 id = 855080 } # 헤르만 폰 슈타인 
  chiefofnavy            = { type = 9 id = 855094 } # 휴고 폰 폴 
  chiefofair             = { type = 9 id = 855100 } # 발터 폰 에버하르트 
  dormant_ministers      = { 855200 855201 855202 855203 855204 855205 855206 855207 855208 855209 855210 855211 855212 855213 855214 855215 855216 855217 855218 855219 855220 855221 855222 855223 855224 855225 855226 855227 855228 855229 855230 855231 855232 855233 855234 855235 855236 855237 855238 855239 855240 855241 855242 855243 855244 855245 855246 855247 855248 855249 855250 855251 855252 855253 855254 855255 855256 855257 855258 855259 855260 855261 855262 855263 855264 855265 855266 855267 855268 855269 855300 855301 855302 855303 855304 855305 855306 855307 855308 855309 855310 855311 855312 855313 855314 855315 855316 855317 855318 855319 855320 855321 855322 855323 855324 855325 855326 855327 855328 855329 855330 855331 855332 855333 855334 855335 855336 855337 855338 855339 855340 855341 855342 855343 855344 855345 855346 855347 855348 855349 855350 855351 855352 855353 855354 855355 }

  landunit = {
    id       = { type = 10100 id = 195 }
    name     = "Oberste Heeresleitung"
    location = 163
    leader   = 855020
    division = {
      id             = { type = 10100 id = 196 }
      name           = "Grosser Generalstab"
      type           = hq
      model          = 1
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 10100 id = 1 }
    name     = "1. Armee"
    location = 126
    leader   = 855008
    division = {
      id             = { type = 10100 id = 2 }
      name           = "A.O.K. 1"
      type           = hq
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 10100 id = 3 }
      name           = "3. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 4 }
      name           = "4. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 5 }
      name           = "5. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = engineer
      brigade_model  = 0
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 6 }
      name           = "6. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 7 }
      name           = "7. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 8 }
      name           = "8. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 11 }
      name           = "5. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 12 }
      name           = "6. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 13 }
      name           = "7. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 14 }
      name           = "22. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 15 }
    name     = "2. Armee"
    location = 110
    leader   = 855311
    division = {
      id             = { type = 10100 id = 16 }
      name           = "A.O.K. 2"
      type           = hq
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 10100 id = 17 }
      name           = "1. Garde-Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 18 }
      name           = "2. Garde-Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 19 }
      name           = "13. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = super_heavy_artillery
      brigade_model  = 0
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 20 }
      name           = "14. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 21 }
      name           = "19. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 22 }
      name           = "20. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 23 }
      name           = "3. Garde-Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 24 }
      name           = "1. Garde-Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 25 }
      name           = "13. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 26 }
      name           = "14. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 27 }
      name           = "19. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 28 }
      name           = "2. Reserve-Garde-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 29 }
    name     = "3. Armee"
    location = 129
    leader   = 855009
    division = {
      id             = { type = 10100 id = 30 }
      name           = "A.O.K. 3"
      type           = hq
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 10100 id = 31 }
      name           = "22. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 32 }
      name           = "38. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = engineer
      brigade_model  = 0
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 33 }
      name           = "23. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 34 }
      name           = "32. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 35 }
      name           = "24. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 36 }
      name           = "40. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 37 }
      name           = "23. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 38 }
      name           = "24. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 39 }
    name     = "4. Armee"
    location = 128
    leader   = 855010
    division = {
      id             = { type = 10100 id = 40 }
      name           = "A.O.K. 4"
      type           = hq
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 10100 id = 41 }
      name           = "11. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 42 }
      name           = "12. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = engineer
      brigade_model  = 0
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 43 }
      name           = "15. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 44 }
      name           = "16. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 45 }
      name           = "21. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 46 }
      name           = "25. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 47 }
      name           = "15. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 48 }
      name           = "16. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 49 }
      name           = "21. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 50 }
      name           = "25. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 51 }
      name           = "4. Ersatz-Division"
      type           = infantry
      model          = 0
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 52 }
      name           = "8. Ersatz-Division"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 53 }
    name     = "5. Armee"
    location = 127
    leader   = 855011
    division = {
      id             = { type = 10100 id = 54 }
      name           = "A.O.K. 5"
      type           = hq
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 10100 id = 55 }
      name           = "9. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 56 }
      name           = "10. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = engineer
      brigade_model  = 0
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 57 }
      name           = "26. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 58 }
      name           = "27. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 59 }
      name           = "33. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 60 }
      name           = "34. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 61 }
      name           = "9. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 62 }
      name           = "10. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 63 }
      name           = "11. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 64 }
      name           = "12. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 65 }
      name           = "2. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 66 }
    name     = "6. Armee"
    location = 104
    leader   = 855012
    division = {
      id             = { type = 10100 id = 67 }
      name           = "A.O.K. 6"
      type           = hq
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 10100 id = 68 }
      name           = "31. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = engineer
      brigade_model  = 0
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 69 }
      name           = "42. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 70 }
      name           = "1. bayerische Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 71 }
      name           = "2. bayerische Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 72 }
      name           = "3. bayerische Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 73 }
      name           = "4. bayerische Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 74 }
      name           = "5. bayerische Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 75 }
      name           = "6. bayerische Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 76 }
      name           = "1. bayerische Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 77 }
      name           = "5. bayerische Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 78 }
      name           = "Garde-Ersatz-Division"
      type           = infantry
      model          = 1
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 79 }
      name           = "10. Ersatz-Division"
      type           = infantry
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 80 }
      name           = "19. Ersatz-Division"
      type           = infantry
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 81 }
    name     = "7. Armee"
    location = 107
    leader   = 855013
    division = {
      id             = { type = 10100 id = 82 }
      name           = "A.O.K. 7"
      type           = hq
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 10100 id = 83 }
      name           = "28. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 84 }
      name           = "29. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 85 }
      name           = "30. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 86 }
      name           = "39. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 87 }
      name           = "26. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 88 }
      name           = "28. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 108 }
      name           = "Bayerische Ersatz-Division"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 92 }
    name     = "8. Armee"
    location = 181
    leader   = 855015
    division = {
      id             = { type = 10100 id = 93 }
      name           = "A.O.K. 8"
      type           = hq
      model          = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10100 id = 94 }
    name     = "I. Armeekorps"
    location = 184
    leader   = 855016
    division = {
      id             = { type = 10100 id = 95 }
      name           = "1. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 96 }
      name           = "2. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 10100 id = 99 }
    name     = "XVII. Armeekorps"
    location = 181
    leader   = 855464
    division = {
      id             = { type = 10100 id = 100 }
      name           = "35. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 101 }
      name           = "36. Infanterie-Division"
      type           = infantry
      model          = 3
      extra          = artillery
      brigade_model  = 1
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 10100 id = 102 }
    name     = "XX. Armeekorps"
    location = 185
    leader   = 855103
    division = {
      id             = { type = 10100 id = 103 }
      name           = "37. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 104 }
      name           = "41. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 10100 id = 105 }
    name     = "I. Reservekorps"
    location = 185
    leader   = 855053
    division = {
      id             = { type = 10100 id = 106 }
      name           = "1. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 107 }
      name           = "36. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 109 }
    name     = "Landwehr-Korps"
    location = 224
    leader   = 855018
    division = {
      id             = { type = 10100 id = 110 }
      name           = "3. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 111 }
      name           = "4. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 112 }
    name     = "3. Reserve-Division"
    location = 158
    leader   = 855180
    division = {
      id             = { type = 10100 id = 113 }
      name           = "3. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 114 }
    name     = "1. Landwehr-Division"
    location = 152
    division = {
      id             = { type = 10100 id = 115 }
      name           = "1. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 116 }
    name     = "1. Kavallerie-Division"
    location = 185
    leader   = 855181
    division = {
      id             = { type = 10100 id = 117 }
      name           = "1. Kavallerie-Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10100 id = 120 }
    name     = "H?ere Kavallerie-Kommandeur Nr. 1"
    location = 129
    leader   = 855499
    division = {
      id             = { type = 10100 id = 121 }
      name           = "Garde-Kavallerie Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 122 }
      name           = "5. Kavallerie-Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10100 id = 123 }
    name     = "H?ere Kavallerie-Kommandeur Nr. 2"
    location = 110
    leader   = 855027
    division = {
      id             = { type = 10100 id = 124 }
      name           = "2. Kavallerie-Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 125 }
      name           = "4. Kavallerie-Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 126 }
      name           = "9. Kavallerie-Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10100 id = 127 }
    name     = "H?ere Kavallerie-Kommandeur Nr. 3"
    location = 104
    leader   = 855075
    division = {
      id             = { type = 10100 id = 128 }
      name           = "7. Kavallerie Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 129 }
      name           = "8. (s?hs.) Kavallerie-Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 130 }
      name           = "Bayerische Kavallerie-Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10100 id = 131 }
    name     = "H?ere Kavallerie-Kommandeur Nr. 4"
    location = 127
    leader   = 855167
    division = {
      id             = { type = 10100 id = 132 }
      name           = "3. Kavallerie Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 133 }
      name           = "6. Kavallerie Division"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10100 id = 134 }
    name     = "Festung Stra?urg"
    location = 107
    leader   = 855190
    division = {
      id             = { type = 10100 id = 135 }
      name           = "30. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 136 }
    name     = "Festung Metz"
    location = 104
    division = {
      id             = { type = 10100 id = 137 }
      name           = "33. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 138 }
    name     = "Festung Thorn"
    location = 222
    division = {
      id             = { type = 10100 id = 139 }
      name           = "35. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 140 }
    name     = "IX. Reservekorps"
    location = 152
    leader   = 855056
    division = {
      id             = { type = 10100 id = 141 }
      name           = "17. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 142 }
      name           = "18. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 89 }
    name     = "I. Landwehr-Gruppe"
    location = 163
    division = {
      id             = { type = 10100 id = 90 }
      name           = "18. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 91 }
      name           = "5. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 97 }
      name           = "11. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 98 }
      name           = "16. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 143 }
      name           = "7. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 144 }
      name           = "8. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 145 }
      name           = "9. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 146 }
      name           = "10. Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 147 }
    name     = "I. bayerische Gruppe"
    location = 179
    division = {
      id             = { type = 10100 id = 148 }
      name           = "1. bayerische Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 149 }
      name           = "6. bayerische Landwehr-Division"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 150 }
      name           = "6. bayerische Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 151 }
      name           = "8. bayerische Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 200 }
      name           = "Alpenkorps"
      type           = bergsjaeger
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 152 }
    name     = "I. Reserve-Gruppe"
    location = 163
    division = {
      id             = { type = 10100 id = 153 }
      name           = "39. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 154 }
      name           = "43. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 155 }
      name           = "44. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 156 }
      name           = "45. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 157 }
      name           = "46. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 158 }
      name           = "47. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 159 }
      name           = "48. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 160 }
      name           = "49. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 161 }
      name           = "50. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 162 }
      name           = "51. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 163 }
      name           = "52. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 164 }
      name           = "53. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 165 }
      name           = "54. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 166 }
    name     = "II. Reserve-Gruppe"
    location = 163
    division = {
      id             = { type = 10100 id = 167 }
      name           = "75. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 168 }
      name           = "76. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 171 }
      name           = "77. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 172 }
      name           = "78. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 173 }
      name           = "79. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 174 }
      name           = "80. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 175 }
      name           = "81. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 176 }
      name           = "82. Reserve-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 177 }
    name     = "I. Infanterie-Gruppe"
    location = 163
    division = {
      id             = { type = 10100 id = 178 }
      name           = "83. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 181 }
      name           = "84. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 182 }
      name           = "85. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 183 }
      name           = "86. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 184 }
      name           = "87. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 185 }
      name           = "88. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 186 }
      name           = "89. Infanterie-Division"
      type           = infantry
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 197 }
    name     = "I. Marine-Gruppe"
    location = 147
    division = {
      id             = { type = 10100 id = 198 }
      name           = "1. Marine-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 10100 id = 199 }
      name           = "2. Marine-Division"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 169 }
    name     = "Schutztruppe f? Deutsch-Ostafrika"
    location = 850
    leader   = 855031
    division = {
      id             = { type = 10100 id = 170 }
      name           = "Ostafrikanische Schutztruppe"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 100
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 187 }
    name     = "Schutztruppe f? Deutsch-S?westafrika"
    location = 883
    division = {
      id             = { type = 10100 id = 188 }
      name           = "S?westafrikanische Schutztruppe"
      type           = militia
      model          = 1
      strength       = 25
      max_strength   = 25
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 189 }
    name     = "Schutztruppe f? Kamerun"
    location = 911
    division = {
      id             = { type = 10100 id = 190 }
      name           = "Kamerunische Schutztruppe"
      type           = militia
      model          = 1
      strength       = 30
      max_strength   = 30
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 191 }
    name     = "Schutztruppe f? Togo"
    location = 950
    division = {
      id             = { type = 10100 id = 192 }
      name           = "Togo Schutztruppe"
      type           = militia
      model          = 1
      strength       = 5
      max_strength   = 5
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 193 }
    name     = "Schutztruppe f? S?see"
    location = 1726
    division = {
      id             = { type = 10100 id = 194 }
      name           = "S?see Schutztruppe"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 10
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 179 }
    name     = "Garnison Kiautschou"
    location = 1328
    leader   = 855497
    division = {
      id             = { type = 10100 id = 180 }
      name           = " III. Seebataillon"
      type           = militia
      model          = 1
      strength       = 20
      max_strength   = 20
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 10100 id = 503 }
    name     = "Ostasiengeschwader"
    location = 1328
    base     = 1328
    leader   = 855033
    division = {
      id             = { type = 10100 id = 504 }
      name           = "SMS Scharnhorst"
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 10100 id = 505 }
      name           = "SMS Gneisenau"
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 10100 id = 506 }
      name           = "SMS N?nberg"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 507 }
      name           = "SMS Leipzig"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 508 }
      name           = "SMS Emden"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 509 }
      name           = "S90"
      type           = destroyer
      model          = 0
      strength       = 10
      max_strength   = 10
    }
  }
  navalunit = {
    id       = { type = 10100 id = 510 }
    name     = "SMS Dresden"
    location = 2317
    base     = 152
    division = {
      id             = { type = 10100 id = 511 }
      name           = "SMS Dresden"
      type           = light_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 512 }
    name     = "SMS Karlsruhe"
    location = 2248
    base     = 909
    division = {
      id             = { type = 10100 id = 513 }
      name           = "SMS Karlsruhe"
      type           = light_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 514 }
    name     = "SMS K?igsberg"
    location = 850
    base     = 850
    division = {
      id             = { type = 10100 id = 515 }
      name           = "SMS K?igsberg"
      type           = light_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 516 }
    name     = "K?tenverteidigungsgruppe Ostsee"
    location = 153
    base     = 153
    leader   = 855121
    division = {
      id             = { type = 10100 id = 517 }
      name           = "SMS Friedrich Karl"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 518 }
      name           = "SMS Augsburg"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 519 }
      name           = "SMS Magdeburg"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 520 }
      name           = "SMS L?eck"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 521 }
      name           = "SMS Amazone"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 522 }
      name           = "SMS Undine"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 523 }
      name           = "SMS Thetis"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 524 }
      name           = "SMS Gazelle"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 525 }
      name           = "G 39"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 526 }
      name           = "G 88"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 527 }
    name     = "1. Aufkl?ungsschwadron"
    location = 147
    base     = 147
    leader   = 855034
    division = {
      id             = { type = 10100 id = 528 }
      name           = "SMS Seydlitz"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 529 }
      name           = "SMS Von der Tann"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 530 }
      name           = "SMS Moltke"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 531 }
      name           = "SMS Bl?her"
      type           = heavy_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 532 }
    name     = "2. Aufkl?ungsschwadron"
    location = 147
    base     = 147
    leader   = 855129
    division = {
      id             = { type = 10100 id = 533 }
      name           = "SMS Stra?urg"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 534 }
      name           = "SMS Stralsund"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 536 }
      name           = "SMS Kolberg"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 650 }
      name           = "SMS Mainz"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 651 }
      name           = "SMS C?n"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 537 }
      name           = "V 26"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 538 }
      name           = "Vulkan"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 539 }
    name     = "3. Aufkl?ungsschwadron"
    location = 147
    base     = 147
    division = {
      id             = { type = 10100 id = 540 }
      name           = "SMS M?chen"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 541 }
      name           = "SMS Danzig"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 542 }
      name           = "SMS Stuttgart"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 543 }
      name           = "SMS Hela"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 544 }
      name           = "SMS Frauenlob"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 652 }
      name           = "SMS Rostock"
      type           = light_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 545 }
    name     = "4. Aufkl?ungsschwadron"
    location = 152
    base     = 152
    leader   = 855125
    division = {
      id             = { type = 10100 id = 546 }
      name           = "SMS Roon"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 547 }
      name           = "SMS Yorck"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 548 }
      name           = "SMS Prinz Adalbert"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 549 }
      name           = "SMS Prinz Heinrich"
      type           = heavy_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 550 }
    name     = "5. Aufkl?ungsschwadron"
    location = 153
    base     = 153
    division = {
      id             = { type = 10100 id = 551 }
      name           = "SMS Hansa"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 552 }
      name           = "SMS Victoria Luise"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 553 }
      name           = "SMS Hertha"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 554 }
      name           = "SMS Vineta"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 555 }
    name     = "K?tenverteidigungsschwadron Weser"
    location = 147
    base     = 147
    division = {
      id             = { type = 10100 id = 556 }
      name           = "SMS Berlin"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 557 }
      name           = "SMS Ariadne"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 558 }
      name           = "SMS Niobe"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 559 }
      name           = "V 14"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 560 }
    name     = "K?tenverteidigungsschwadron Elbe"
    location = 147
    base     = 147
    division = {
      id             = { type = 10100 id = 561 }
      name           = "SMS Nymphe"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 562 }
      name           = "SMS Medusa"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 563 }
      name           = "7. Flottille"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 564 }
    name     = "Flottenflaggschiff"
    location = 147
    base     = 147
    leader   = 855035
    division = {
      id             = { type = 10100 id = 565 }
      name           = "SMS Friedrich der Gro?"
      type           = battleship
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 566 }
    name     = "I. Geschwader"
    location = 147
    base     = 147
    leader   = 855219
    division = {
      id             = { type = 10100 id = 572 }
      name           = "SMS Ostfriesland"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 571 }
      name           = "SMS Helgoland"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 573 }
      name           = "SMS Th?ingen"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 574 }
      name           = "SMS Oldenburg"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 567 }
      name           = "SMS Nassau"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 568 }
      name           = "SMS Westfalen"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 569 }
      name           = "SMS Rheinland"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 570 }
      name           = "SMS Posen"
      type           = battleship
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 575 }
    name     = "II. Geschwader"
    location = 147
    base     = 147
    leader   = 855032
    division = {
      id             = { type = 10100 id = 616 }
      name           = "SMS Preu?n"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 576 }
      name           = "SMS Deutschland"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 578 }
      name           = "SMS Hannover"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 653 }
      name           = "SMS Pommern"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 580 }
      name           = "SMS Schleswig-Holstein"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 579 }
      name           = "SMS Schlesien"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 577 }
      name           = "SMS Hessen"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 583 }
      name           = "SMS Lothringen"
      type           = battleship
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 584 }
    name     = "III. Geschwader"
    location = 147
    base     = 147
    division = {
      id             = { type = 10100 id = 588 }
      name           = "SMS Prinzregent Luitpold"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 585 }
      name           = "SMS Kaiser"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 586 }
      name           = "SMS Kaiserin"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 587 }
      name           = "SMS K?ig Albert"
      type           = battleship
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 589 }
    name     = "IV. Geschwader"
    location = 147
    base     = 147
    leader   = 855514
    division = {
      id             = { type = 10100 id = 590 }
      name           = "SMS Wittelsbach"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 591 }
      name           = "SMS Wettin"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 594 }
      name           = "SMS Z?ringen"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 593 }
      name           = "SMS Schwaben"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 592 }
      name           = "SMS Mecklenburg"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 581 }
      name           = "SMS Braunschweig"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 582 }
      name           = "SMS Elsa? type = battleship model = 1  }     "
      type           = 
    }
  }
  navalunit = {
    id       = { type = 10100 id = 595 }
    name     = "V. Geschwader"
    location = 147
    base     = 147
    leader   = 855119
    division = {
      id             = { type = 10100 id = 598 }
      name           = "SMS Kaiser Wilhelm II"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 600 }
      name           = "SMS Kaiser Wilhelm der Gro?"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 599 }
      name           = "SMS Kaiser Barbarossa"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 597 }
      name           = "SMS Kaiser Friedrich III"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 601 }
      name           = "SMS Kaiser Karl der Gro?"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 596 }
      name           = "SMS W?th"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 602 }
      name           = "SMS Brandenburg"
      type           = battleship
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 603 }
    name     = "VI. Geschwader"
    location = 152
    base     = 152
    leader   = 855120
    division = {
      id             = { type = 10100 id = 611 }
      name           = "SMS Hildebrand"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 604 }
      name           = "SMS Beowulf"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 605 }
      name           = "SMS Odin"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 606 }
      name           = "SMS 훕ir"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 607 }
      name           = "SMS Frithjof"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 608 }
      name           = "SMS Siegfried"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 609 }
      name           = "SMS Hagen"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 610 }
      name           = "SMS Heimdall"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 612 }
      name           = "3. Flottille"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 613 }
      name           = "8. Flottille"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 614 }
      name           = "9. Flottille"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 615 }
    name     = "7. Schlachtschwadron"
    location = 152
    base     = 152
    division = {
      id             = { type = 10100 id = 617 }
      name           = "SMS Regensburg"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 619 }
      name           = "SMS Stettin"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 620 }
      name           = "SMS Hamburg"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 621 }
      name           = "SMS F?st Bismarck"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 622 }
      name           = "SMS Freya"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 623 }
      name           = "SMS Albatros"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 624 }
      name           = "SMS Nautilus"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 625 }
      name           = "SMS Gefion"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 626 }
      name           = "SMS Bremen"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 627 }
      name           = "SMS Kaiserin Augusta"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 628 }
      name           = "SMS Arcona"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 629 }
      name           = "10. Flottille"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 630 }
      name           = "11. Flottille"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 631 }
      name           = "12. Flottille"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 632 }
      name           = "13. Flottille"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 633 }
      name           = "14. Flottille"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 634 }
      name           = "15. Flottille"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 635 }
      name           = "16. Flottille"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 636 }
      name           = "17. Flottille"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 637 }
    name     = "U-bootdivision"
    location = 154
    base     = 154
    division = {
      id             = { type = 10100 id = 638 }
      name           = "1. Flottille"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 639 }
      name           = "2. Flottille"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 640 }
      name           = "3. Flottille"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 641 }
    name     = "Mittelmeer-Division"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 642 }
      name           = "SMS Goeben"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 643 }
      name           = "SMS Breslau"
      type           = light_cruiser
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 10100 id = 800 }
    name     = "Luftschifftruppe"
    location = 142
    base     = 142
    leader   = 855208
    division = {
      id             = { type = 10100 id = 801 }
      name           = "Luftschiff-Abteilung 1"
      type           = tactical_bomber
      model          = 1
      strength       = 15
    }
    division = {
      id             = { type = 10100 id = 802 }
      name           = "Luftschiff-Abteilung 2"
      type           = tactical_bomber
      model          = 0
      strength       = 15
    }
  }
  airunit = { 
    id       = { type = 10100 id = 806 }
    name     = "Fliegertruppe - West"
    location = 131
    base     = 131
    division = {
      id             = { type = 10100 id = 807 }
      name           = "Feldflieger-Abteilung 1"
      type           = interceptor
      model          = 0
      strength       = 8
    }
  }
  airunit = { 
    id       = { type = 10100 id = 808 }
    name     = "Fliegertruppe - Ost"
    location = 224
    base     = 224
    division = {
      id             = { type = 10100 id = 809 }
      name           = "Feldflieger-Abteilung 2"
      type           = interceptor
      model          = 0
      strength       = 6
    }
  }
  airunit = { 
    id       = { type = 10100 id = 810 }
    name     = "Seefliegertruppe"
    location = 152
    base     = 152
    division = {
      id             = { type = 10100 id = 811 }
      name           = "I. Seeflieger-Abteilung"
      type           = interceptor
      model          = 0
      strength       = 5
    }
    division = {
      id             = { type = 10100 id = 812 }
      name           = "II. Seeflieger-Abteilung"
      type           = interceptor
      model          = 0
      strength       = 5
    }
  }

  division_development = {
    id             = { type = 10100 id = 644 }
    name           = "SMS Gro?r Kurf?st"
    type           = battleship
    model          = 3
    cost           = 0.4
    date           = { year = 1914 month = july day = 29 }
  }
  division_development = {
    id             = { type = 10100 id = 645 }
    name           = "SMS K?ig"
    type           = battleship
    model          = 3
    cost           = 0.4
    date           = { year = 1914 month = august day = 10 }
  }
  division_development = {
    id             = { type = 10100 id = 646 }
    name           = "SMS Markgraf"
    type           = battleship
    model          = 3
    cost           = 0.4
    date           = { year = 1914 month = october day = 1 }
  }
  division_development = {
    id             = { type = 10100 id = 647 }
    name           = "SMS Kronprinz"
    type           = battleship
    model          = 3
    cost           = 0.4
    date           = { year = 1914 month = november day = 8 }
  }
  division_development = {
    id             = { type = 10100 id = 648 }
    name           = "SMS Derfflinger"
    type           = battlecruiser
    model          = 1
    cost           = 0.4
    date           = { year = 1914 month = september day = 1 }
  }
  division_development = {
    id             = { type = 10100 id = 649 }
    name           = "SMS L?zow"
    type           = battlecruiser
    model          = 1
    cost           = 0.4
    date           = { year = 1916 month = march day = 1 }
  }
  division_development = {
    id             = { type = 10100 id = 1649 }
    name           = "SMS Hindenburg"
    type           = battlecruiser
    model          = 1
    cost           = 0.4
    date           = { year = 1917 month = may day = 10 }
  }
  division_development = {
    id             = { type = 10100 id = 6147 }
    name           = "SMS Bayern"
    type           = battleship
    model          = 4
    cost           = 0.4
    date           = { year = 1916 month = july day = 15 }
  }
  division_development = {
    id             = { type = 10100 id = 6148 }
    name           = "SMS Baden"
    type           = battleship
    model          = 4
    cost           = 0.4
    date           = { year = 1917 month = march day = 14 }
  }
  division_development = {
    id             = { type = 10100 id = 6149 }
    name           = "SMS Sachsen"
    type           = battleship
    model          = 4
    cost           = 0.4
    date           = { year = 1917 month = april day = 14 }
  }
  division_development = {
    id             = { type = 10100 id = 654 }
    name           = "SMS Pillau"
    type           = light_cruiser
    model          = 2
    cost           = 0.2
    date           = { year = 1914 month = december day = 1 }
  }
  division_development = {
    id             = { type = 10100 id = 655 }
    name           = "SMS Graudenz"
    type           = light_cruiser
    model          = 2
    cost           = 0.2
    date           = { year = 1914 month = august day = 1 }
  }
}
