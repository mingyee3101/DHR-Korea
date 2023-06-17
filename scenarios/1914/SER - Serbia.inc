##############################
# Country definition for SER #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SER
  ai                 = "SER_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes revolter_set = yes } }
  capital            = 338 # 베오그라드 
  manpower           = 30
  # Resource Reserves
  energy         = 720
  metal          = 360
  rare_materials = 180
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 100

  diplomacy = {
    relation = { tag = BUL value = -100 }
    relation = { tag = FRA value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = RUS value = 170 }
    relation = {
      tag        = MTN
      value      = 200
      guaranteed = { year = 1914 month = february day = 11 }
    }
    relation = { tag = GRE value = 100 }
    relation = { tag = U08 value = -10 }
    relation = { tag = OTT value = -125 }
    relation = { tag = ROM value = 100 }
  }
  SpyInfo                = { country = "SER" NumberOfSpies = 4 }

  nationalprovinces      = { 327 329 330 331 335 336 337 338 339 340 342 354 }
  ownedprovinces         = { 327 328 329 330 331 333 334 338 339 340 342 }
  controlledprovinces    = { 327 328 329 330 331 333 334 338 339 340 342 }
  claimedprovinces       = { 328 333 334 353 355 356 357 358 359 361 }

  techapps               = { 2290 1010 1020 1030 13060 13070 13080 1160 1170 1830 5600 3810 5700 5800 5810 5310 6500 6510 6530 6580 4500 4600 27480 27490 27500 27510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 4
    defense_lobby     = 3
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 415093 } # 페테르 1세 
  headofgovernment       = { type = 9 id = 415080 } # 니콜라 파시치 
  foreignminister        = { type = 9 id = 415071 } # 니콜라 파시치 
  armamentminister       = { type = 9 id = 415103 } # 라자르 파쿠 
  ministerofsecurity     = { type = 9 id = 415114 } # 스토얀 프로티치 
  ministerofintelligence = { type = 9 id = 415089 } # 드라구틴 디미트리예비치 
  chiefofstaff           = { type = 9 id = 415054 } # 라도미르 푸트니크 
  chiefofair             = { type = 9 id = 415041 } # 코스타 밀레티치 

  landunit = {
    id       = { type = 10200 id = 1 }
    name     = "1. Moravski Vojni Okrug"
    location = 330
    division = {
      id             = { type = 10200 id = 2 }
      name           = "Moravska divizija I poziva"
      type           = infantry
      model          = 2
      strength       = 25
      experience     = 20
    }
    division = {
      id             = { type = 10200 id = 3 }
      name           = "Moravska divizija II poziva"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10200 id = 4 }
    name     = "2. Drinski Vojni Okrug"
    location = 340
    division = {
      id             = { type = 10200 id = 5 }
      name           = "Drinska divizija I poziva"
      type           = infantry
      model          = 2
      strength       = 25
      experience     = 20
    }
    division = {
      id             = { type = 10200 id = 6 }
      name           = "Drinska divizija II poziva"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10200 id = 7 }
    name     = "3. Dunavski Vojni Okrug"
    location = 338
    leader   = 415050
    division = {
      id             = { type = 10200 id = 8 }
      name           = "Vojska Srbje Generalshtaba"
      type           = hq
      model          = 0
      strength       = 25
      experience     = 20
    }
    division = {
      id             = { type = 10200 id = 9 }
      name           = "Dunavska divizija I poziva"
      type           = infantry
      model          = 2
      strength       = 25
      experience     = 20
    }
    division = {
      id             = { type = 10200 id = 10 }
      name           = "Dunavska divizija II poziva"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
    division = {
      id             = { type = 10200 id = 11 }
      name           = "Konjicka divizija"
      type           = cavalry
      model          = 1
      strength       = 40
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10200 id = 12 }
    name     = "4. Sumadijski Vojni Okrug"
    location = 327
    division = {
      id             = { type = 10200 id = 13 }
      name           = "Sumadijska divizija I poziva"
      type           = infantry
      model          = 2
      strength       = 25
      experience     = 20
    }
    division = {
      id             = { type = 10200 id = 14 }
      name           = "Sumadijska divizija II poziva"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10200 id = 15 }
    name     = "5. Timocki Vojni Okrug"
    location = 331
    division = {
      id             = { type = 10200 id = 16 }
      name           = "Timocka divizija I poziva"
      type           = infantry
      model          = 2
      strength       = 25
      experience     = 20
    }
    division = {
      id             = { type = 10200 id = 17 }
      name           = "Timocka divizija II poziva"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10200 id = 18 }
    name     = "6/7/8/9/10. Vojni Okrug"
    location = 333
    division = {
      id             = { type = 10200 id = 19 }
      name           = "Kombinovana divizija I poziva"
      type           = infantry
      model          = 2
      strength       = 25
    }
  }
}
