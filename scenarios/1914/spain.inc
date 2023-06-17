##############################
# Country definition for SPA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SPA
  name               = SPA14
  flag_ext           = _14
  ai                 = "SPA_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 460 # 마드리드 
  dissent            = 30
  manpower           = 84
  # Resource Reserves
  energy         = 2280
  metal          = 1140
  rare_materials = 570
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 200
  escorts        = 27

  diplomacy = {
    relation = { tag = ENG value = -10 }
    relation = { tag = FRA value = 10 }
    relation = { tag = U08 value = -50 }
    relation = { tag = ITA value = -50 }
    relation = { tag = POR value = -50 }
  }
  SpyInfo                = { country = "SPA" NumberOfSpies = 7 }

  nationalprovinces      = { 444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461 348 440 438 436 442 443 475 437 439 452 447 990 991 469 455 448 449 446 462 445 459 473 465 454 450 }
  ownedprovinces         = { 441 444 451 466 453 460 458 472 474 471 470 467 463 468 464 457 461 456 442 443 436 438 440 475 437 439 452 447 990 991 469 715 987 988 913 446 449 448 455 454 465 473 462 459 445 450 989 716 916 }
  controlledprovinces    = { 441 444 451 466 453 460 458 472 474 471 470 467 463 468 464 457 461 456 442 443 436 438 440 475 437 439 452 447 990 991 715 987 988 913 446 469 450 449 448 455 454 465 473 462 459 445 989 716 916 }
  claimedprovinces       = { 715 716 913 916 987 988 989 }

  techapps               = { 4600 2290 1830 3410 3420 3430 3210 3220 3610 3110 3120 3010 3020 3030 1010 1020 1030 13060 13070 1160 1170 5700 3810 5600 6500 6510 6530 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 81300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 4
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 35204 } # 알폰소 13세 
  headofgovernment       = { type = 9 id = 35210 } # 에두아르도 다토 
  foreignminister        = { type = 9 id = 35220 } # 살바도르 데 카스트로 
  armamentminister       = { type = 9 id = 35239 } # 가비노 부가얄 
  ministerofsecurity     = { type = 9 id = 35265 } # 호세 산체스 게라 
  chiefofstaff           = { type = 9 id = 35285 } # 라몬 에챠게 
  chiefofarmy            = { type = 9 id = 35302 } # 라몬 에챠게 
  chiefofnavy            = { type = 9 id = 35320 } # 아우구스토 미란다 
  chiefofair             = { type = 9 id = 35329 } # 알프레도 킨더란 두아니 

  landunit = {
    id       = { type = 28111 id = 3 }
    name     = "1o Cuerpo de Ejercito"
    location = 460
    division = {
      id             = { type = 28111 id = 1 }
      name           = "Cuartel General"
      type           = hq
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 28111 id = 4 }
      name           = "1a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 5 }
      name           = "2a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 2 }
      name           = "1a Divisi? de Caballer?"
      type           = cavalry
      model          = 2
      strength       = 65
    }
  }
  landunit = {
    id       = { type = 28111 id = 6 }
    name     = "2o Cuerpo de Ejercito"
    location = 474
    division = {
      id             = { type = 28111 id = 7 }
      name           = "3a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 8 }
      name           = "4a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 28111 id = 9 }
    name     = "3o Cuerpo de Ejercito"
    location = 464
    division = {
      id             = { type = 28111 id = 10 }
      name           = "5a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 11 }
      name           = "6a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 28111 id = 12 }
    name     = "4o Cuerpo de Ejercito"
    location = 440
    division = {
      id             = { type = 28111 id = 13 }
      name           = "7a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 14 }
      name           = "8a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 28111 id = 15 }
    name     = "5o Cuerpo de Ejercito"
    location = 442
    division = {
      id             = { type = 28111 id = 16 }
      name           = "9a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 17 }
      name           = "10a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 33 }
      name           = "Agrupacion de Montana"
      type           = bergsjaeger
      model          = 2
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 28111 id = 18 }
    name     = "6o Cuerpo de Ejercito"
    location = 451
    division = {
      id             = { type = 28111 id = 19 }
      name           = "11a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 20 }
      name           = "12a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 28111 id = 21 }
    name     = "7o Cuerpo de Ejercito"
    location = 447
    division = {
      id             = { type = 28111 id = 22 }
      name           = "13a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 24 }
      name           = "14a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 28111 id = 25 }
    name     = "8o Cuerpo de Ejercito"
    location = 441
    division = {
      id             = { type = 28111 id = 26 }
      name           = "15a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 28111 id = 23 }
      name           = "16a Divisi? de Infanter?"
      type           = infantry
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 28111 id = 27 }
    name     = "Comandancia General de Baleares"
    location = 475
    division = {
      id             = { type = 28111 id = 28 }
      name           = "Comandancia General de Baleares"
      type           = garrison
      model          = 1
      strength       = 45
      max_strength   = 75
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 28111 id = 29 }
    name     = "Comandancia General de Canarias"
    location = 990
    division = {
      id             = { type = 28111 id = 30 }
      name           = "Comandancia General de Canarias"
      type           = garrison
      model          = 1
      strength       = 30
      max_strength   = 50
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 28111 id = 31 }
    name     = "Fuerzas Regulares Indigenas"
    location = 715
    division = {
      id             = { type = 28111 id = 32 }
      name           = "Fuerzas Regulares Indigenas"
      type           = infantry
      model          = 1
      strength       = 60
      max_strength   = 100
    }
  }

  navalunit = {
    id       = { type = 28111 id = 500 }
    name     = "Armada Espa?la"
    location = 473
    base     = 473
    division = {
      id             = { type = 28111 id = 501 }
      name           = "Espa?"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 28111 id = 502 }
      name           = "Pelayo"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 28111 id = 504 }
      name           = "Emperador Carlos V"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 28111 id = 505 }
      name           = "Princesa de Asturias"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 28111 id = 506 }
      name           = "Catalu?"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 28111 id = 507 }
      name           = "Rio de la Plata"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 28111 id = 508 }
      name           = "Estramadura"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 28111 id = 509 }
      name           = "Reina Regente"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 28111 id = 514 }
      name           = "Alfonso XIII"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 28111 id = 515 }
      name           = "Lepanto"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 28111 id = 516 }
      name           = "1a Flotilla"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 28111 id = 517 }
      name           = "2a Flotilla"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 28111 id = 511 }
      name           = "Flotilla del Transporte"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    name     = "Escuadrilla Expedicionaria"
    location = 715
    base     = 715
    leader   = 35087
    division = {
      id             = { type = 28111 id = 518 }
      name           = "Escuadrilla Expedicionaria"
      type           = tactical_bomber
      model          = 0
      strength       = 30
    }
  }

  division_development = {
    id             = { type = 28111 id = 512 }
    name           = "Alfonso XIII"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = august day = 16 }
  }
  division_development = {
    id             = { type = 28111 id = 513 }
    name           = "Jaime I"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1922 month = may day = 12 }
  }
}
