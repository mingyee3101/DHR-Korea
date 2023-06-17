##############################
# Country definition for COS #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = COS
  ai                 = "cos_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2081 # 산 호세 
  manpower           = 1
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = USA value = 100 }
    relation = { tag = U08 value = 25 }
    relation = { tag = ENG value = 25 }
    relation = { tag = PAN value = 75 }
    relation = { tag = NIC value = 50 }
    relation = { tag = SAL value = 50 }
    relation = { tag = HON value = 50 }
    relation = { tag = GUA value = 50 }
    relation = { tag = MEX value = 10 }
    relation = { tag = SPA value = 25 }
  }
  SpyInfo                = { country = "COS" NumberOfSpies = 1 }

  nationalprovinces      = { 2081 2083 }
  ownedprovinces         = { 2081 2083 }
  controlledprovinces    = { 2081 2083 }

  techapps               = { 2290 1010 1020 13060 5700 1830 3810 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 310112 } # 알프레드 곤살레스 
  headofgovernment       = { type = 9 id = 310106 } # 알프레드 곤살레스 
  foreignminister        = { type = 9 id = 310118 } # 마누엘 카스트로 케사다 
  armamentminister       = { type = 9 id = 310119 } # 리카르도 히메네스 
  ministerofsecurity     = { type = 9 id = 310117 } # 프란시스코 아길라르 
  ministerofintelligence = { type = 9 id = 310111 } # 후안 키로스 세구라 
  chiefofstaff           = { type = 9 id = 310105 } # 페데리코 티노코 그라나도스 
  chiefofarmy            = { type = 9 id = 310101 } # 페데리코 티노코 그라나도스 
  chiefofnavy            = { type = 9 id = 310103 } # 페데리코 티노코 그라나도스 

  landunit = {
    id       = { type = 25000 id = 60 }
    name     = "Ejercito de Costa Rica"
    location = 2081
    division = {
      id             = { type = 25000 id = 6000 }
      name           = "Ejercito de Costa Rica"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
}
