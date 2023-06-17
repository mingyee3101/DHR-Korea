##############################
# Country definition for U52 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U52
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1044 # ÇÏ¿» 
  manpower           = 5
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = SAU value = -200 }
    relation = { tag = ENG value = -50 }
    relation = { tag = YEM value = 25 }
    relation = { tag = FRA value = -15 }
    relation = { tag = ITA value = -15 }
    relation = { tag = OMN value = -125 }
    relation = { tag = PER value = 0 }
    relation = { tag = GRE value = -15 }
    relation = { tag = U02 value = -25 }
    relation = { tag = U08 value = 25 }
    relation = { tag = U09 value = 25 }
    relation = { tag = U53 value = 25 }
    relation = { tag = U91 value = 25 }
    relation = { tag = ETH value = 25 }
  }
  SpyInfo                = { country = "U52" NumberOfSpies = 2 }

  nationalprovinces      = { 1044 1046 1048 1049 1045 1040 1031 1030 1022 1024 1025 1038 1032 }
  ownedprovinces         = { 1044 1046 }
  controlledprovinces    = { 1044 1046 }
  claimedprovinces       = { 1047 1041 }

  techapps               = { 1010 1020 13060 1160 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 7
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 4
  }

  landunit = {
    id       = { type = 25400 id = 1 }
    name     = "Rashidian army"
    location = 1044
    division = {
      id             = { type = 25400 id = 2 }
      name           = "Rashidi bodyguard"
      type           = cavalry
      model          = 0
      strength       = 30
      experience     = 10
    }
    division = {
      id             = { type = 25400 id = 3 }
      name           = "Ujman tribe"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
}
