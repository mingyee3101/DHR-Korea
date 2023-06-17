##############################
# Country definition for NEP #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NEP
  puppet             = ENG
  control            = ENG
  ai                 = "NEP_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 1457 # 카트만두 
  manpower           = 7
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 200
  supplies       = 200
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = U08 value = 1 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "NEP" NumberOfSpies = 2 }

  nationalprovinces      = { 1451 1452 1457 }
  ownedprovinces         = { 1457 }
  controlledprovinces    = { 1457 }

  techapps               = { 2290 1010 5700 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 395058 } # 트리부반 비르 비크람 사 
  headofgovernment       = { type = 9 id = 395057 } # 챤드라 숨셰어 라나 

  landunit = {
    id       = { type = 31500 id = 1 }
    name     = "Royal Nepalese Army"
    location = 1457
    division = {
      id             = { type = 31500 id = 2 }
      name           = "Regular Army"
      type           = infantry
      model          = 1
      strength       = 75
    }
    division = {
      id             = { type = 31500 id = 3 }
      name           = "Provincial Forces"
      type           = militia
      model          = 0
      strength       = 100
    }
  }
}
