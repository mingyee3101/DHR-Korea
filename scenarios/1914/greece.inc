##############################
# Country definition for GRE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GRE
  ai                 = "GRE_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 377 # 아테네 
  manpower           = 0
  # Resource Reserves
  energy         = 900
  metal          = 450
  rare_materials = 225
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 240
  escorts        = 15

  diplomacy = {
    relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 20 }
    relation = { tag = U08 value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = ALB value = -50 }
    relation = { tag = SER value = 75 }
    relation = { tag = U09 value = -25 }
    relation = { tag = OTT value = -75 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
  }
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }

  nationalprovinces      = { 328 333 360 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383 384 387 388 409 1077 }
  ownedprovinces         = { 360 364 365 366 367 368 369 371 372 373 374 375 376 377 380 381 382 383 }
  controlledprovinces    = { 360 364 365 366 367 368 369 371 372 373 374 375 376 377 380 381 382 383 }
  claimedprovinces       = { 1057 1076 1078 1079 }

  techapps               = { 2290 1830 1010 1020 13060 1160 1170 5700 5800 5810 5310 5600 6500 6510 6530 6580 3010 3020 3030 3110 3120 3130 3210 3220 3410 3610 8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8510 81300 81310 3810 4500 4600 27480 27490 27500 27510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 90213 } # 콘스탄디노스 1세 
  headofgovernment       = { type = 9 id = 90195 } # 엘레프테리오스 베니젤로스 
  foreignminister        = { type = 9 id = 90187 } # 엘레프테리오스 베니젤로스 
  armamentminister       = { type = 9 id = 90214 } # 알렉산드로스 디오미디스 
  ministerofsecurity     = { type = 9 id = 90228 } # 에마누일 레풀리스 
  ministerofintelligence = { type = 9 id = 90237 } # 엑사다틸로스 아타나시오스 
  chiefofstaff           = { type = 9 id = 90238 } # 이오아니스 메탁사스 
  chiefofarmy            = { type = 9 id = 90239 } # 콘스탄디노스 1세 
  chiefofnavy            = { type = 9 id = 90240 } # 마르크 케어르 

  landunit = {
    id       = { type = 19111 id = 24 }
    name     = "Vasilikos Ellinikos Stratos"
    location = 377
    leader   = 90066
    division = {
      id             = { type = 19111 id = 25 }
      name           = "Vasilikos Ellinikos Stratos"
      type           = hq
      model          = 0
      strength       = 75
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 1 }
    name     = "A Soma Stratou"
    location = 377
    leader   = 90077
    division = {
      id             = { type = 19111 id = 2 }
      name           = "I Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 3 }
      name           = "II Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 4 }
      name           = "XIII Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 5 }
    name     = "B Soma Stratou"
    location = 372
    leader   = 90065
    division = {
      id             = { type = 19111 id = 6 }
      name           = "III Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 7 }
      name           = "IV Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 8 }
      name           = "XIV Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 9 }
    name     = "C Soma Stratou"
    location = 365
    leader   = 90067
    division = {
      id             = { type = 19111 id = 10 }
      name           = "X Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 11 }
      name           = "XI Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 12 }
      name           = "XII Merarchia"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 19111 id = 13 }
    name     = "D Soma Stratou"
    location = 364
    leader   = 90076
    division = {
      id             = { type = 19111 id = 14 }
      name           = "V Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 15 }
      name           = "VI Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 16 }
      name           = "VII Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 17 }
    name     = "E Soma Stratou"
    location = 367
    division = {
      id             = { type = 19111 id = 18 }
      name           = "VIII Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 19 }
      name           = "IX Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 19111 id = 500 }
    name     = "Basilikos Stolos"
    location = 377
    base     = 377
    leader   = 90070
    division = {
      id             = { type = 19111 id = 501 }
      name           = "Kilkis"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 502 }
      name           = "Limnos"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 503 }
      name           = "BEN Georgios Averoff"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 504 }
      name           = "BEN Helle"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 505 }
      name           = "BEN Hydra"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 506 }
      name           = "BEN Spetsai"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 507 }
      name           = "BEN Psara"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 508 }
      name           = "1. Torpilakatos"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 509 }
      name           = "2. Torpilakatos"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 510 }
      name           = "3. Torpilakatos"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 511 }
      name           = "4. Torpilakatos"
      type           = destroyer
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 19111 id = 50 }
    name     = "Lochos Aeroporon"
    location = 377
    base     = 377
    division = {
      id             = { type = 19111 id = 51 }
      name           = "1. Sygkrotima"
      type           = tactical_bomber
      model          = 1
      strength       = 10
      max_strength   = 20
    }
  }
}
