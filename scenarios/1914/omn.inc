##############################
# Country definition for OMN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = OMN
  puppet             = ENG
  ai                 = "OMN_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 1052 # 무스카트 
  dissent            = 10
  manpower           = 8
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 200
  supplies       = 200
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AST value = 40 }
    relation = { tag = BHU value = 40 }
    relation = { tag = CAN value = 40 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 50 }
    relation = { tag = U08 value = 1 }
    relation = { tag = U91 value = 125 }
    relation = { tag = ITA value = 15 }
    relation = { tag = NEP value = 5 }
    relation = { tag = NZL value = 25 }
    relation = { tag = SAF value = 25 }
    relation = { tag = SAU value = -15 }
    relation = { tag = OTT value = -35 }
    relation = { tag = USA value = 15 }
    relation = { tag = YEM value = 50 }
    relation = { tag = U53 value = -10 }
    relation = { tag = U51 value = 10 }
    relation = { tag = PER value = -15 }
  }
  SpyInfo                = { country = "OMN" NumberOfSpies = 1 }

  nationalprovinces      = { 840 1043 1052 }
  ownedprovinces         = { 1043 1052 }
  controlledprovinces    = { 1043 1052 }

  techapps               = { 1010 5700 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 400029 } # 타이무르 빈 페이살 
  headofgovernment       = { type = 9 id = 400030 } # 로버트 아서 벤 
  foreignminister        = { type = 9 id = 400031 } # 타이무르 빈 페이살 
  armamentminister       = { type = 9 id = 400032 } # 타이무르 빈 페이살 
  ministerofsecurity     = { type = 9 id = 400033 } # 타이무르 빈 페이살 
  ministerofintelligence = { type = 9 id = 400034 } # 타이무르 빈 페이살 
  chiefofstaff           = { type = 9 id = 400035 } # 퍼시 콕스 
  chiefofarmy            = { type = 9 id = 400036 } # 퍼시 콕스 
  chiefofnavy            = { type = 9 id = 400037 } # 퍼시 콕스 

  landunit = {
    id       = { type = 11114 id = 1 }
    name     = "Royal Omani Army"
    location = 1052
    division = {
      id             = { type = 11114 id = 2 }
      name           = "Royal Omani Bodyguard"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
}
