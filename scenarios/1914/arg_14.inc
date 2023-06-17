##############################
# Country definition for ARG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ARG
  ai                 = "ARG_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2050 # 부에노스 아이레스 
  manpower           = 15
  # Resource Reserves
  energy         = 1620
  metal          = 810
  rare_materials = 405
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 50 }
    relation = { tag = ECU value = 10 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
    relation = { tag = U08 value = 75 }
  }
  SpyInfo                = { country = "ARG" NumberOfSpies = 6 }

  nationalprovinces      = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2043 2044 2045 2048 2049 2050 2053 2054 2055 2056 }
  ownedprovinces         = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056 }
  controlledprovinces    = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056 }

  techapps               = { 2860 2290 1010 1020 13060 1160 1170 1830 5810 5800 5310 54010 5600 5700 3010 3020 3030 3110 3120 3210 3220 3410 3420 3610 3810 27480 6500 6510 8010 8020 8040 8050 8060 8070 8100 8900 8910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    freedom           = 6
    free_market       = 8
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 165216 } # 로케 사엔스 페냐 
  headofgovernment       = { type = 9 id = 165212 } # 로케 사엔스 페냐 
  foreignminister        = { type = 9 id = 165207 } # 호세 루이스 무라토레 

  landunit = {
    id       = { type = 12000 id = 1 }
    name     = "1o Cuerpo de Ejercito"
    location = 2050
    division = {
      id             = { type = 12000 id = 2 }
      name           = "Divisi? de Infanter? 1"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 20
    }
    division = {
      id             = { type = 12000 id = 3 }
      name           = "Divisi? de Infanter? 2"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 12000 id = 4 }
    name     = "2o Cuerpo de Ejercito"
    location = 2049
    division = {
      id             = { type = 12000 id = 5 }
      name           = "Divisi? de Infanter? 3"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 12000 id = 6 }
    name     = "3o Cuerpo de Ejercito"
    location = 2027
    division = {
      id             = { type = 12000 id = 7 }
      name           = "Divisi? de Infanter? 4"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 20
    }
    division = {
      id             = { type = 12000 id = 8 }
      name           = "Divisi? de Infanter? 5"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 12000 id = 9 }
    name     = "Divisi? de Caballer?"
    location = 2056
    division = {
      id             = { type = 12000 id = 10 }
      name           = "Divisi? de Caballer?"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }

  navalunit = {
    id       = { type = 12000 id = 500 }
    name     = "Argentine Fleet"
    location = 2050
    base     = 2050
    division = {
      id             = { type = 12000 id = 501 }
      name           = "Almirante Brown"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 502 }
      name           = "Independencia"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 503 }
      name           = "Libertad"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 504 }
      name           = "25 de Mayo"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 505 }
      name           = "9 de Julio"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 506 }
      name           = "Buenos Aires"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 507 }
      name           = "General Garibaldi"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 508 }
      name           = "General Belgrano"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 509 }
      name           = "General San Martin"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 510 }
      name           = "General Pueyrredon"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 511 }
      name           = "1a Flotilla"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 512 }
      name           = "Flotilla del Transporte"
      type           = transport
      model          = 0
    }
  }

  division_development = {
    id             = { type = 12000 id = 513 }
    name           = "Rivadavia"
    type           = battleship
    model          = 0
    cost           = 0.4
    date           = { year = 1914 month = december day = 15 }
  }
  division_development = {
    id             = { type = 12000 id = 514 }
    name           = "Moreno"
    type           = battleship
    model          = 0
    cost           = 0.4
    date           = { year = 1915 month = march day = 15 }
  }
}
