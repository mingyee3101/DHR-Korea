##############################
# Country definition for BHU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BHU
  puppet             = ENG
  ai                 = "BHU_1914.ai"
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 1456 # Çª³ªÄ« 
  manpower           = 0
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = U08 value = 20 }
    relation = { tag = ITA value = 20 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 25 }
    relation = { tag = YEM value = 150 }
    relation = { tag = TIB value = 175 }
  }
  SpyInfo                = { country = "BHU" NumberOfSpies = 1 }

  nationalprovinces      = { 1456 }
  ownedprovinces         = { 1456 }
  controlledprovinces    = { 1456 }

  techapps               = { 1010 1020 13060 1160 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 2
  }
}
