##############################
# Country definition for U60 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U60
  puppet             = ENG
  ai                 = "U60_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2137 # 세인트 존스 
  manpower           = 2
  # Resource Reserves
  energy         = 405
  metal          = 202
  rare_materials = 101
  oil            = 125
  supplies       = 125
  money          = 5
  transports     = 30

  diplomacy = {
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
    relation = { tag = AST value = 200 }
  }
  SpyInfo                = { country = "U60" NumberOfSpies = 1 }

  nationalprovinces      = { 2136 2137 2138 }
  ownedprovinces         = { 2136 2137 2138 }
  controlledprovinces    = { 2136 2137 2138 }

  techapps               = { 1010 1020 1030 13060 13070 14000 1830 2290 5600 3010 3020 3110 5700 3810 6500 6510 6530 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 1115001 } # 월터 데이비슨 
  headofgovernment       = { type = 9 id = 1115002 } # 에드워드 모리스 
  foreignminister        = { type = 9 id = 1115003 } # 에드워드 모리스 
  armamentminister       = { type = 9 id = 1115004 } # 마이클 캐신 
  ministerofsecurity     = { type = 9 id = 1115005 } # 리차드 스콰이어스 
  ministerofintelligence = { type = 9 id = 1115006 } # 아서 헤도우 
  chiefofstaff           = { type = 9 id = 1115007 } # 존 베넷 
  chiefofarmy            = { type = 9 id = 1115008 } # 아서 헤도우 
  chiefofnavy            = { type = 9 id = 1115009 } # 육군 사령부 통제 
  chiefofair             = { type = 9 id = 1115010 } # 육군 사령부 통제 

  navalunit = {
    id       = { type = 6121 id = 3 }
    name     = "Newfoundland Transport Fleet"
    location = 2137
    base     = 2137
    division = {
      id             = { type = 6121 id = 4 }
      name           = "Newfoundland Transport Squadron"
      type           = transport
      model          = 0
    }
  }
}
