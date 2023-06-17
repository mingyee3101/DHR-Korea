##############################
# Country definition for SAF #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SAF
  puppet             = ENG
  flag_ext           = _14
  ai                 = "SAF_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 873 # 프리토리아 
  manpower           = 4
  # Resource Reserves
  energy         = 660
  metal          = 330
  rare_materials = 165
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = U08 value = 1 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "SAF" NumberOfSpies = 3 }

  nationalprovinces      = { 872 873 875 876 878 879 880 881 }
  ownedprovinces         = { 872 873 875 876 878 879 880 881 }
  controlledprovinces    = { 872 873 875 876 878 879 880 881 }
  claimedprovinces       = { 882 883 884 885 886 }

  techapps               = { 1830 2290 1010 1020 1030 13060 13070 5700 9010 8010 14000 1910 3010 3020 5600 3810 6500 6510 6530 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 425111 } # 허버트 글래드스톤 
  headofgovernment       = { type = 9 id = 425105 } # 루이스 보타 
  armamentminister       = { type = 9 id = 425115 } # 얀 스뮈츠 
  chiefofstaff           = { type = 9 id = 425097 } # 크리스티안 베이어르스 

  landunit = {
    id       = { type = 27111 id = 43 }
    name     = "Union Defence Forces"
    location = 880
    division = {
      id             = { type = 27111 id = 44 }
      name           = "1st-5th S.A. Mounted Rifles"
      type           = cavalry
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 27111 id = 45 }
    name     = "Active Citizen Force"
    location = 876
    division = {
      id             = { type = 27111 id = 46 }
      name           = "1st-20th A.C.F. Mounted Rifles"
      type           = cavalry
      model          = 1
      strength       = 30
    }
    division = {
      id             = { type = 27111 id = 47 }
      name           = "1st-14th A.C.F. Dismntd. Rifles"
      type           = infantry
      model          = 1
      strength       = 30
    }
    division = {
      id             = { type = 27111 id = 48 }
      name           = "1st-12th A.C.F. Infantry"
      type           = infantry
      model          = 1
      strength       = 50
    }
  }
}
