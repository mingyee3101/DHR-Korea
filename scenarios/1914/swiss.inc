##############################
# Country definition for SCH #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SCH
  ai                 = "SCH_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 392 # 베른 
  manpower           = 9
  # Resource Reserves
  energy         = 840
  metal          = 420
  rare_materials = 210
  oil            = 500
  supplies       = 500
  money          = 25
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = U08 value = 50 }
    relation = { tag = U09 value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "SCH" NumberOfSpies = 5 }

  nationalprovinces      = { 389 390 391 392 }
  ownedprovinces         = { 389 390 391 392 }
  controlledprovinces    = { 389 390 391 392 }

  techapps               = { 2290 13060 13070 13080 1310 1910 1010 1020 1160 1170 1180 1830 5700 5600 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 80137 } # 아르투어 호프만 
  headofgovernment       = { type = 9 id = 80156 } # 한스 샤츠만 
  foreignminister        = { type = 9 id = 80128 } # 아르투어 호프만 
  armamentminister       = { type = 9 id = 80148 } # 주세페 모타 
  ministerofsecurity     = { type = 9 id = 80157 } # 에두아르드 뮐러 
  ministerofintelligence = { type = 9 id = 80158 } # 카미유 드코페 
  chiefofstaff           = { type = 9 id = 80159 } # 테오필 폰 베르네그 
  chiefofarmy            = { type = 9 id = 80123 } # 울리히 빌레 
  chiefofnavy            = { type = 9 id = 80160 } # 울리히 빌레 
  chiefofair             = { type = 9 id = 80118 } # 테오도어 레알 

  landunit = {
    id       = { type = 30600 id = 1 }
    name     = "1. Infanterie-Division"
    location = 391
    division = {
      id             = { type = 30600 id = 2 }
      name           = "1. Infanterie-Division"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 3 }
      name           = "1./2. Gebirgs-Brigade"
      type           = bergsjaeger
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 4 }
    name     = "2. Infanterie-Division"
    location = 391
    division = {
      id             = { type = 30600 id = 5 }
      name           = "2. Infanterie-Division"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 6 }
      name           = "13./14. Infanterie-Brigade"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 7 }
    name     = "3. Infanterie-Division"
    location = 392
    division = {
      id             = { type = 30600 id = 8 }
      name           = "3. Infanterie-Division"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 9 }
      name           = "1./2. Landwehr-Brigade"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 10 }
    name     = "4. Infanterie-Division"
    location = 389
    division = {
      id             = { type = 30600 id = 11 }
      name           = "4. Infanterie-Division"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 12 }
      name           = "3./4. Landwehr-Brigade"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 13 }
    name     = "5. Infanterie-Division"
    location = 389
    division = {
      id             = { type = 30600 id = 14 }
      name           = "5. Infanterie-Division"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 15 }
      name           = "3./4. Gebirgs-Brigade"
      type           = bergsjaeger
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 16 }
    name     = "6. Infanterie-Division"
    location = 389
    division = {
      id             = { type = 30600 id = 17 }
      name           = "6. Infanterie-Division"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 18 }
      name           = "5./6. Landwehr-Brigade"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
}
