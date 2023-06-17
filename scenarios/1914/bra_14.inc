##############################
# Country definition for BRA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BRA
  ai                 = "BRA_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2075 # 리우 데 자네이루 
  manpower           = 27
  # Resource Reserves
  energy         = 2040
  metal          = 1020
  rare_materials = 510
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = U08 value = -20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 100 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
    relation = { tag = ENG value = 30 }
  }
  SpyInfo                = { country = "BRA" NumberOfSpies = 5 }

  nationalprovinces      = { 2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006 }
  ownedprovinces         = { 2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076 }
  controlledprovinces    = { 2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076 }

  techapps               = { 1830 1010 1020 13060 1160 5700 3010 3020 3110 3210 3410 3610 3810 6500 6510 8010 8020 8040 8050 8060 8070 8080 8100 8110 8900 8910 8500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 7
    free_market       = 7
    professional_army = 2
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 160140 } # 에르메스 다 폰세카 
  headofgovernment       = { type = 9 id = 160146 } # 벤세즐라우 고메스 
  foreignminister        = { type = 9 id = 160153 } # 라우르 세베리아누 물레르 
  armamentminister       = { type = 9 id = 160162 } # 히바다비아 다 쿠냐 
  ministerofsecurity     = { type = 9 id = 160174 } # 울라디즐라우 지 프레이타스 
  chiefofstaff           = { type = 9 id = 160187 } # 베스파지아누 지 알부케르크 
  chiefofarmy            = { type = 9 id = 160198 } # 베스파지아누 지 알부케르크 
  chiefofnavy            = { type = 9 id = 160203 } # 알레샨드리누 지 알렝카르 
  chiefofair             = { type = 9 id = 160212 } # 히카르두 키르크 

  landunit = {
    id       = { type = 18000 id = 1 }
    name     = "1a Regi? Militar"
    location = 2075
    division = {
      id             = { type = 18000 id = 2 }
      name           = "1a Brigada Mixta"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 18000 id = 3 }
    name     = "2a Regi? Militar"
    location = 2059
    division = {
      id             = { type = 18000 id = 4 }
      name           = "2a Brigada Mixta"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 18000 id = 5 }
    name     = "3a Regi? Militar"
    location = 2058
    division = {
      id             = { type = 18000 id = 6 }
      name           = "3a Brigada Mixta"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 18000 id = 7 }
    name     = "4a Regi? Militar"
    location = 2076
    division = {
      id             = { type = 18000 id = 8 }
      name           = "4a Brigada Mixta"
      type           = infantry
      model          = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 18000 id = 9 }
    name     = "5/6/7a Regi? Militar"
    location = 2071
    division = {
      id             = { type = 18000 id = 10 }
      name           = "5a Brigada Mixta"
      type           = infantry
      model          = 1
      strength       = 25
    }
  }

  navalunit = {
    id       = { type = 18000 id = 500 }
    name     = "Marinha do Brasil"
    location = 2075
    base     = 2075
    division = {
      id             = { type = 18000 id = 499 }
      name           = "Rio de Janeiro"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 501 }
      name           = "Minas Gerais"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 18000 id = 502 }
      name           = "Sao Paulo"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 18000 id = 503 }
      name           = "Marshal Deodoro"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18000 id = 504 }
      name           = "Marshal Floriano"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18000 id = 505 }
      name           = "Bahia"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18000 id = 506 }
      name           = "Rio Grande do Sul"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18000 id = 507 }
      name           = "Almirante Tamandare"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 508 }
      name           = "Benjamin Constant"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 509 }
      name           = "Republica"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 510 }
      name           = "Almirante Barrozo"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 511 }
      name           = "1a Flotilla"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 18000 id = 512 }
      name           = "2a Flotilla"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 18000 id = 513 }
      name           = "Flotilla do Transporte"
      type           = transport
      model          = 0
    }
  }
}
