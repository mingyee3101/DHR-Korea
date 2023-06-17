##############################
# Country definition for CHL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHL
  ai                 = "CHL_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 2023 # 산티아고 데 칠레 
  manpower           = 10
  # Resource Reserves
  energy         = 720
  metal          = 360
  rare_materials = 180
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = U08 value = 50 }
    relation = { tag = U09 value = 50 }
    relation = { tag = SPA value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }

  nationalprovinces      = { 2022 2023 2024 2025 2030 2031 2032 2043 }
  ownedprovinces         = { 2022 2023 2024 2025 2030 2031 2032 2043 }
  controlledprovinces    = { 2022 2023 2024 2025 2030 2031 2032 2043 }

  techapps               = { 1010 1020 13060 1160 1830 5700 3010 3020 3030 3410 3610 3110 3120 3210 3810 6500 6510 8010 8020 8040 8050 8060 8070 8080 8100 8110 8900 8910 27480 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 7
    free_market       = 8
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 210140 } # 라몬 바로스 루코 
  headofgovernment       = { type = 9 id = 210145 } # 라몬 바로스 루코 
  foreignminister        = { type = 9 id = 210158 } # 알레한드로 리라 
  armamentminister       = { type = 9 id = 210194 } # 알프레도 바로스 에라수리스 
  ministerofsecurity     = { type = 9 id = 210243 } # 페드로 몬테네그로 오넬 
  ministerofintelligence = { type = 9 id = 210270 } # 호르헤 보넨 리베라 
  chiefofstaff           = { type = 9 id = 210273 } # 호르헤 보넨 리베라 
  chiefofarmy            = { type = 9 id = 210278 } # 호르헤 보넨 리베라 
  chiefofnavy            = { type = 9 id = 210283 } # 루이스 알베르토 심프손 
  chiefofair             = { type = 9 id = 210289 } # 페드로 파블로 다르트넬 

  landunit = {
    id       = { type = 12500 id = 1 }
    name     = "Region militar I"
    location = 2024
    division = {
      id             = { type = 12500 id = 2 }
      name           = "Ia Divisi? de Ejercito"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 12500 id = 3 }
    name     = "Region militar II"
    location = 2023
    division = {
      id             = { type = 12500 id = 4 }
      name           = "IIa Divisi? de Ejercito"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 12500 id = 5 }
    name     = "Region militar III"
    location = 2032
    division = {
      id             = { type = 12500 id = 6 }
      name           = "IIIa Divisi? de Ejercito"
      type           = infantry
      model          = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 12500 id = 7 }
    name     = "Region militar IV"
    location = 2031
    division = {
      id             = { type = 12500 id = 8 }
      name           = "IVa Divisi? de Ejercito"
      type           = infantry
      model          = 1
      strength       = 25
    }
  }

  navalunit = {
    id       = { type = 12500 id = 500 }
    name     = "Chilean Fleet"
    location = 2023
    base     = 2023
    division = {
      id             = { type = 12500 id = 501 }
      name           = "Capitan Prat"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 502 }
      name           = "Esmeralda"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 503 }
      name           = "O'Higgins"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 504 }
      name           = "Presidente Errazuriz"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 505 }
      name           = "Blanco Encalada"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 506 }
      name           = "Ministro Zenteno"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 507 }
      name           = "Chacabuco"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 508 }
      name           = "Flotilla des Destructores nro.1"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 509 }
      name           = "Flotilla des Destructores nro.2"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 510 }
      name           = "Flotilla des Destructores nro.3"
      type           = destroyer
      model          = 0
    }
  }
}
