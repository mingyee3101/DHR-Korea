##############################
# Country definition for ROM #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ROM
  ai                 = "ROM_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 316 # 부쿠레슈티 
  manpower           = 4
  # Resource Reserves
  energy         = 1020
  metal          = 510
  rare_materials = 255
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 100

  diplomacy = {
    relation = { tag = BUL value = -15 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = U09 value = -50 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = ITA value = 50 }
    relation = { tag = RUS value = 50 }
    relation = { tag = OTT value = -30 }
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 5 }

  nationalprovinces      = { 285 286 287 288 289 291 292 293 295 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 621 }
  ownedprovinces         = { 297 298 299 307 308 309 310 311 312 313 314 315 316 }
  controlledprovinces    = { 297 298 299 307 308 309 310 311 312 313 314 315 316 }

  techapps               = { 4500 4600 4610 2290 5600 1830 1010 1020 1030 13060 13070 1160 1170 5700 5800 5810 5310 3010 3020 3030 3610 6500 6510 6530 8010 8020 8040 8050 8060 8070 8080 8100 8120 27480 27490 3810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 110158 } # 카롤 1세 
  headofgovernment       = { type = 9 id = 110196 } # 이온 I.C. 브라티아누 
  foreignminister        = { type = 9 id = 110136 } # 에마노일 포룸바루 
  armamentminister       = { type = 9 id = 110164 } # 에밀 코스티네스쿠 
  ministerofsecurity     = { type = 9 id = 110185 } # 바실레 G. 모르툰 
  chiefofstaff           = { type = 9 id = 110127 } # 바실리에 조투 
  chiefofarmy            = { type = 9 id = 110120 } # 페르디난드 1세 

  landunit = {
    id       = { type = 16111 id = 1 }
    name     = "Armata Regala"
    location = 316
    division = {
      id             = { type = 16111 id = 4 }
      name           = "Cartier General"
      type           = hq
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 16111 id = 2 }
      name           = "Divisie 22 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
    division = {
      id             = { type = 16111 id = 3 }
      name           = "Divisie 23 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 16111 id = 5 }
    name     = "Corp 1 Armata"
    location = 315
    division = {
      id             = { type = 16111 id = 6 }
      name           = "Divisie 1 Infanterie"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 7 }
      name           = "Divisie 2 Infanterie"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 8 }
      name           = "Divisie 11 Infanterie"
      type           = infantry
      model          = 1
      strength       = 20
    }
    division = {
      id             = { type = 16111 id = 9 }
      name           = "Armata I"
      type           = hq
      model          = 0
      strength       = 30
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 16111 id = 10 }
    name     = "Corp 2 Armata"
    location = 316
    division = {
      id             = { type = 16111 id = 11 }
      name           = "Divisie 3 Infanterie"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 12 }
      name           = "Divisie 4 Infanterie"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 13 }
      name           = "Divisie 12 Infanterie"
      type           = infantry
      model          = 1
      strength       = 20
    }
    division = {
      id             = { type = 16111 id = 14 }
      name           = "Divisie 1 Cavalerie"
      type           = cavalry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 16111 id = 15 }
      name           = "Armata II"
      type           = hq
      model          = 0
      strength       = 30
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 16111 id = 16 }
    name     = "Corp 3 Armata"
    location = 311
    division = {
      id             = { type = 16111 id = 17 }
      name           = "Divisie 5 Infanterie"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 18 }
      name           = "Divisie 6 Infanterie"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 19 }
      name           = "Divisie 13 Infanterie"
      type           = infantry
      model          = 1
      strength       = 20
    }
    division = {
      id             = { type = 16111 id = 20 }
      name           = "Armata III"
      type           = hq
      model          = 0
      strength       = 30
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 16111 id = 21 }
    name     = "Corp 4 Armata"
    location = 297
    division = {
      id             = { type = 16111 id = 22 }
      name           = "Divisie 7 Infanterie"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 23 }
      name           = "Divisie 8 Infanterie"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 24 }
      name           = "Divisie 14 Infanterie"
      type           = infantry
      model          = 1
      strength       = 20
    }
    division = {
      id             = { type = 16111 id = 25 }
      name           = "Divisie 2 Cavalerie"
      type           = cavalry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 16111 id = 26 }
    name     = "Corp 5 Armata"
    location = 310
    division = {
      id             = { type = 16111 id = 27 }
      name           = "Divisie 9 Infanterie"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 28 }
      name           = "Divisie 10 Infanterie"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 16111 id = 29 }
      name           = "Divisie 15 Infanterie"
      type           = infantry
      model          = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 16111 id = 30 }
    name     = "Corp 6 Armata"
    location = 315
    division = {
      id             = { type = 16111 id = 31 }
      name           = "Divisie 16 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
    division = {
      id             = { type = 16111 id = 32 }
      name           = "Divisie 17 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
    division = {
      id             = { type = 16111 id = 33 }
      name           = "Divisie 18 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 16111 id = 34 }
    name     = "Corp 7 Armata"
    location = 311
    division = {
      id             = { type = 16111 id = 35 }
      name           = "Divisie 19 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
    division = {
      id             = { type = 16111 id = 36 }
      name           = "Divisie 20 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
    division = {
      id             = { type = 16111 id = 37 }
      name           = "Divisie 21 Infanterie"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 16111 id = 500 }
    name     = "Maritime Division"
    location = 310
    base     = 310
    division = {
      id             = { type = 16111 id = 501 }
      name           = "Elisabeta"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 16111 id = 502 }
      name           = "1st Flotilla"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 16111 id = 100 }
    name     = "Corp al Aeronautilor Permanenti"
    location = 316
    base     = 316
    division = {
      id             = { type = 16111 id = 101 }
      name           = "Grup 1"
      type           = tactical_bomber
      model          = 1
      strength       = 30
    }
  }
}
