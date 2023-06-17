##############################
# Country definition for SAL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SAL
  ai                 = "SAL_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2079 # 산 살바도르 
  manpower           = 2
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
    relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 50 }
    relation = { tag = NIC value = 50 }
    relation = { tag = COS value = 50 }
    relation = { tag = SPA value = 50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = PAN value = 50 }
  }
  SpyInfo                = { country = "SAL" NumberOfSpies = 2 }

  nationalprovinces      = { 2079 2084 2085 2086 2087 2088 2080 2082 2081 2083 }
  ownedprovinces         = { 2079 }
  controlledprovinces    = { 2079 }

  techapps               = { 4500 2290 2300 1010 1020 13060 1160 5700 6500 6510 1830 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 345066 } # 알폰소 퀴뇨네스 몰리나 
  headofgovernment       = { type = 9 id = 345062 } # 알폰소 퀴뇨네스 몰리나 
  foreignminister        = { type = 9 id = 345070 } # 프란시스코 수아레스 
  armamentminister       = { type = 9 id = 345069 } # 피오 로메로 보스케 
  ministerofsecurity     = { type = 9 id = 345071 } # 카를로스 멜렌데스 
  ministerofintelligence = { type = 9 id = 345065 } # 움베르토 아베를레 
  chiefofstaff           = { type = 9 id = 345074 } # 호세 페랄타 라고스 
  chiefofarmy            = { type = 9 id = 345072 } # 호세 페랄타 라고스 
  chiefofnavy            = { type = 9 id = 345073 } # 호세 페랄타 라고스 

  landunit = {
    id       = { type = 21600 id = 70 }
    name     = "Ejercito del Salvador"
    location = 2079
    division = {
      id             = { type = 21600 id = 7000 }
      name           = "I Brigada de Infanter?"
      type           = infantry
      model          = 0
      strength       = 20
    }
  }
}
