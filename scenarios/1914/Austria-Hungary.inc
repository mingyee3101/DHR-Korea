##############################
# Country definition for U09 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U09
  ai                 = "U09_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 195 # 빈 
  dissent            = 10
  manpower           = 200
  # Resource Reserves
  energy         = 6480
  metal          = 3240
  rare_materials = 1620
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = -25 }
    relation = { tag = FRA value = -10 }
    relation = { tag = RUS value = -150 }
    relation = {
      tag        = HUN
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = U08 value = 150 access = yes }
    relation = { tag = ITA value = 75 }
    relation = { tag = SCH value = 50 }
    relation = { tag = SER value = -200 }
    relation = { tag = GRE value = -50 }
    relation = { tag = USA value = 50 }
    relation = { tag = JAP value = 0 }
    relation = { tag = ROM value = -75 }
    relation = { tag = MTN value = -75 }
    relation = { tag = ALB value = -10 }
    relation = { tag = OTT value = 25 }
  }
  SpyInfo                = { country = "U09" NumberOfSpies = 6 }

  nationalprovinces      = { 186 187 188 189 190 191 192 193 194 195 200 206 205 197 199 207 198 201 196 212 211 209 213 208 202 210 214 204 215 203 277 284 278 282 280 281 276 283 279 285 286 296 289 295 288 287 291 300 301 241 242 238 240 237 236 239 235 349 346 345 347 357 352 353 344 350 351 356 358 355 354 337 401 402 341 336 292 293 343 403 404 406 }
  ownedprovinces         = { 186 187 188 189 190 191 192 193 194 195 200 206 205 197 199 207 198 201 196 212 211 209 213 208 202 210 214 204 215 203 277 284 278 282 280 281 276 283 279 285 286 296 289 295 288 287 291 300 301 241 242 238 240 237 236 239 235 349 346 345 347 357 352 353 344 350 351 356 358 355 354 337 401 402 341 336 292 293 343 404 403 406 }
  controlledprovinces    = { 186 187 188 189 190 191 192 193 194 195 200 206 205 197 199 207 198 201 196 212 211 209 213 208 202 210 214 204 215 203 277 284 278 282 280 281 276 283 279 285 286 296 289 295 288 287 291 300 301 241 242 238 240 237 236 239 235 349 346 345 347 357 352 353 344 350 351 356 358 355 354 337 401 402 341 336 292 293 343 404 403 406 }

  techapps               = { 1010 1020 1030 13060 13070 13080 1160 1170 1180 1830 1910 1920 2290 2800 2860 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 3440 3310 3610 3620 3810 3720 3730 4500 4600 5600 5700 5800 5080 6500 6510 6530 8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8550 8900 8910 27480 27490 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 7
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 860001 } # 프란츠 요제프 1세 
  headofgovernment       = { type = 9 id = 860005 } # 레오폴트 베르히톨트 
  foreignminister        = { type = 9 id = 860011 } # 레오폴트 베르히톨트 
  armamentminister       = { type = 9 id = 860017 } # 레온 빌린스키 
  ministerofsecurity     = { type = 9 id = 860034 } # 카를 헤이놀트 폰 우딘스키 
  ministerofintelligence = { type = 9 id = 860043 } # 오스카 폰 흐라닐로비치 
  chiefofstaff           = { type = 9 id = 860048 } # 프란츠 콘라드 폰 회첸도르프 
  chiefofarmy            = { type = 9 id = 860054 } # 프리드리히 폰 외스터라이히 
  chiefofnavy            = { type = 9 id = 860058 } # 안톤 하우스 
  chiefofair             = { type = 9 id = 860065 } # 밀란 에밀 우젤라츠 

  landunit = {
    id       = { type = 14000 id = 9000 }
    name     = "I. Korpskommando"
    location = 235
    leader   = 860142
    division = {
      id             = { type = 14000 id = 9001 }
      name           = "7. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9002 }
      name           = "5. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9003 }
      name           = "12. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9004 }
      name           = "1. Armee"
      type           = hq
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 14000 id = 9005 }
      name           = "46. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9006 }
    name     = "II. Korpskommando"
    location = 195
    leader   = 860140
    division = {
      id             = { type = 14000 id = 9007 }
      name           = "4. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9008 }
      name           = "49. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9009 }
      name           = "25. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9010 }
      name           = "3. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9011 }
      name           = "k.u.k. Stabswesen"
      type           = hq
      model          = 0
      strength       = 25
    }
    division = {
      id             = { type = 14000 id = 9012 }
      name           = "13. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 60
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9013 }
    name     = "III. Korpskommando"
    location = 190
    leader   = 860020
    division = {
      id             = { type = 14000 id = 9014 }
      name           = "6. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9015 }
      name           = "28. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9016 }
      name           = "22. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
    division = {
      id             = { type = 14000 id = 9200 }
      name           = "94./122. Infanteriebrigade"
      type           = infantry
      model          = 1
      strength       = 40
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9017 }
    name     = "IV. Korpskommando"
    location = 284
    leader   = 860064
    division = {
      id             = { type = 14000 id = 9018 }
      name           = "31. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9019 }
      name           = "32. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9020 }
      name           = "10. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9021 }
      name           = "4. Armee"
      type           = hq
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 14000 id = 9022 }
      name           = "5. Honv? Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
      max_strength   = 100
    }
    division = {
      id             = { type = 14000 id = 9023 }
      name           = "23. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
    division = {
      id             = { type = 14000 id = 9083 }
      name           = "40. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
    division = {
      id             = { type = 14000 id = 9079 }
      name           = "41. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9024 }
    name     = "V. Korpskommando"
    location = 208
    leader   = 860078
    division = {
      id             = { type = 14000 id = 9025 }
      name           = "14. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9026 }
      name           = "2. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9027 }
      name           = "33. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9028 }
      name           = "37. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9029 }
    name     = "VI. Korpskommando"
    location = 209
    leader   = 860011
    division = {
      id             = { type = 14000 id = 9030 }
      name           = "15. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9031 }
      name           = "27. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9032 }
      name           = "39. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
    division = {
      id             = { type = 14000 id = 9038 }
      name           = "11. Honv? Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9033 }
    name     = "VII. Korpskommando"
    location = 285
    leader   = 860272
    division = {
      id             = { type = 14000 id = 9034 }
      name           = "17. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9035 }
      name           = "1. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9036 }
      name           = "34. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9037 }
      name           = "5. Armee"
      type           = hq
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 14000 id = 9039 }
      name           = "20. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9040 }
    name     = "VIII. Korpskommando"
    location = 207
    leader   = 860070
    division = {
      id             = { type = 14000 id = 9041 }
      name           = "9. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9042 }
      name           = "19. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9043 }
      name           = "21. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
    division = {
      id             = { type = 14000 id = 9044 }
      name           = "95. Landsturm Infanterietruppendivision"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14000 id = 9045 }
    name     = "IX. Korpskommando"
    location = 205
    leader   = 860033
    division = {
      id             = { type = 14000 id = 9046 }
      name           = "10. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9047 }
      name           = "29. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9201 }
      name           = "9. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9048 }
      name           = "26. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
    division = {
      id             = { type = 14000 id = 9049 }
      name           = "106. Landsturm Infanterietruppendivision"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14000 id = 9050 }
    name     = "X. Korpskommando"
    location = 239
    leader   = 860091
    division = {
      id             = { type = 14000 id = 9051 }
      name           = "2. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9052 }
      name           = "6. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9053 }
      name           = "24. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9054 }
      name           = "2. Armee"
      type           = hq
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 14000 id = 9055 }
      name           = "45. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9056 }
    name     = "XI. Korpskommando"
    location = 242
    leader   = 860269
    division = {
      id             = { type = 14000 id = 9057 }
      name           = "11. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9058 }
      name           = "30. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9059 }
      name           = "4. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9060 }
      name           = "8. Kavallerietruppendivision"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9061 }
      name           = "3. Armee"
      type           = hq
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 14000 id = 9062 }
      name           = "43. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9063 }
    name     = "XII. Korpskommando"
    location = 291
    leader   = 860198
    division = {
      id             = { type = 14000 id = 9064 }
      name           = "16. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9065 }
      name           = "35. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9066 }
      name           = "38. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9067 }
    name     = "XIII. Korpskommando"
    location = 352
    leader   = 860115
    division = {
      id             = { type = 14000 id = 9068 }
      name           = "7. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9069 }
      name           = "36. Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9070 }
      name           = "42. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9071 }
    name     = "XIV. Korpskommando"
    location = 189
    leader   = 860054
    division = {
      id             = { type = 14000 id = 9072 }
      name           = "3. Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9073 }
      name           = "8. Infanterietruppendivision"
      type           = bergsjaeger
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9202 }
      name           = "96./121. Infanteriebrigade"
      type           = bergsjaeger
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9074 }
      name           = "44. Landwehr Infanterietruppendivision"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9075 }
    name     = "XV. Korpskommando"
    location = 355
    leader   = 860250
    division = {
      id             = { type = 14000 id = 9076 }
      name           = "48. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9077 }
      name           = "1. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9203 }
      name           = "9./10. Gebirgsbrigade"
      type           = infantry
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9078 }
      name           = "6. Armee"
      type           = hq
      model          = 0
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 14000 id = 9080 }
    name     = "XVI. Korpskommando"
    location = 343
    leader   = 860296
    division = {
      id             = { type = 14000 id = 9081 }
      name           = "18. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9082 }
      name           = "47. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9204 }
      name           = "3./6. Gebirgsbrigade"
      type           = infantry
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 14000 id = 9205 }
      name           = "13./14. Gebirgsbrigade"
      type           = infantry
      model          = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 14000 id = 9206 }
    name     = "I. Reservegruppe"
    location = 195
    division = {
      id             = { type = 14000 id = 9207 }
      name           = "50. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 14000 id = 9208 }
      name           = "52. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 14000 id = 9209 }
      name           = "54. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 14000 id = 9210 }
      name           = "55. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 14000 id = 9211 }
      name           = "56. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 14000 id = 9212 }
      name           = "57. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14000 id = 9213 }
    name     = "II. Reservegruppe"
    location = 284
    division = {
      id             = { type = 14000 id = 9214 }
      name           = "51. Honv? Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 14000 id = 9215 }
      name           = "60. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14000 id = 9216 }
    name     = "III. Reservegruppe"
    location = 195
    division = {
      id             = { type = 14000 id = 9217 }
      name           = "58. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
    division = {
      id             = { type = 14000 id = 9218 }
      name           = "59. Infanterietruppendivision"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 10100 id = 9091 }
    name     = "1. Schwere Division"
    location = 406
    base     = 406
    leader   = 860238
    division = {
      id             = { type = 10100 id = 9092 }
      name           = "SMS Viribus Unitis"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 9093 }
      name           = "SMS Tegetthoff"
      type           = battleship
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9095 }
    name     = "2. Schwere Division"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9096 }
      name           = "SMS Erzherzog Franz Ferdinand"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9097 }
      name           = "SMS Radetzky"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9098 }
      name           = "SMS Zrinyi"
      type           = battleship
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9099 }
    name     = "3. Schwere Division"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9100 }
      name           = "SMS Erzherzog Ferdinand Max"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9101 }
      name           = "SMS Erzherzog Friedrich"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9102 }
      name           = "SMS Erzherzog Karl"
      type           = battleship
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9103 }
    name     = "4. Schwere Division"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9104 }
      name           = "SMS Habsburg"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9105 }
      name           = "SMS Arpad"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9106 }
      name           = "SMS Babenberg"
      type           = battleship
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9107 }
    name     = "5. Schwere Division"
    location = 406
    base     = 406
    leader   = 860264
    division = {
      id             = { type = 10100 id = 9108 }
      name           = "SMS Monarch"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9109 }
      name           = "SMS Wien"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9111 }
      name           = "SMS Budapest"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9147 }
      name           = "SMS Kronprinz Erzherzog Rudolf"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9149 }
      name           = "SMS Kaiser Max"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9151 }
      name           = "SMS Don Juan D'Austria"
      type           = battleship
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9112 }
    name     = "1. Kreuzerdivision"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9113 }
      name           = "SMS Sankt Georg"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9114 }
      name           = "SMS Kaiser Karl IV"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9116 }
      name           = "SMS Aspern"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9117 }
      name           = "SMS Szigetv?"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9118 }
      name           = "SMS Zenta"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9143 }
      name           = "SMS Schwarzenberg"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9144 }
      name           = "SMS Minerva"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9145 }
      name           = "SMS Leopard"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9146 }
      name           = "SMS Lacroma"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9119 }
    name     = "1. Torpedofahrzeugdivision"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9121 }
      name           = "1. Flotille"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10100 id = 9122 }
      name           = "2. Flotille"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9123 }
    name     = "2. Torpedofahrzeugdivision"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9124 }
      name           = "SMS Admiral Spaun"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9125 }
      name           = "3. Flotille"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9126 }
      name           = "4. Flotille"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9127 }
      name           = "5. Flotille"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9128 }
      name           = "6. Flotille"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9129 }
      name           = "7. Flotille"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9130 }
      name           = "8. Flotille"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9131 }
    name     = "Unterseebootsstation"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9132 }
      name           = "1. Flotille"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9134 }
    name     = "SMS Kaiserin Elisabeth"
    location = 1328
    base     = 1328
    division = {
      id             = { type = 10100 id = 9135 }
      name           = "SMS Kaiserin Elisabeth"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10100 id = 9136 }
    name     = "2. Kreuzerdivision"
    location = 406
    base     = 406
    division = {
      id             = { type = 10100 id = 9148 }
      name           = "SMS Kaiserin Maria Theresia"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 9137 }
      name           = "SMS Kaiser Franz Josef I"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9138 }
      name           = "SMS Panther"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10100 id = 9150 }
      name           = "SMS Donau"
      type           = light_cruiser
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 10100 id = 9140 }
    name     = "Luftfahrtruppen"
    location = 195
    base     = 195
    leader   = 860334
    division = {
      id             = { type = 10100 id = 9141 }
      name           = "1. Fliegerkompagnie"
      type           = interceptor
      model          = 0
      strength       = 25
      max_strength   = 75
    }
  }

  division_development = {
    id             = { type = 10100 id = 9139 }
    name           = "SMS Szent Istvan"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = december day = 13 }
  }
  division_development = {
    id             = { type = 10100 id = 9142 }
    name           = "SMS Novara"
    type           = light_cruiser
    model          = 2
    cost           = 0.2
    date           = { year = 1915 month = january day = 10 }
  }
  division_development = {
    id             = { type = 10100 id = 9115 }
    name           = "SMS Helgoland"
    type           = light_cruiser
    model          = 2
    cost           = 0.2
    date           = { year = 1914 month = august day = 29 }
  }
  division_development = {
    id             = { type = 10100 id = 9094 }
    name           = "SMS Prinz Eugen"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1914 month = july day = 8 }
  }
  division_development = {
    id             = { type = 10100 id = 9120 }
    name           = "SMS Saida"
    type           = light_cruiser
    model          = 2
    cost           = 0.2
    date           = { year = 1914 month = august day = 1 }
  }

  landdivision = { dormant = yes id = { type = 14000 id = 1001 } name = "Festung Brixen"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1002 } name = "Festung Maleit"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1003 } name = "Festung Reiff"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1004 } name = "Festung Trient"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1005 } name = "Festung Lafraun"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1006 } name = "Festung Haidenschaft"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1007 } name = "Infanterietruppendivision 'Pustertal'"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1008 } name = "91. Infanterietruppendivision"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1009 } name = "92. Infanterietruppendivision"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1010 } name = "90. Infanterietruppendivision"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1011 } name = "93. Infanterietruppendivision"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14000 id = 1012 } name = "94. Infanterietruppendivision"  type = garrison model = 1 extra = artillery brigade_model = 1 locked = yes } 
}
