##############################
# Country definition for SAU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SAU
  name               = SAU14
  flag_ext           = _14
  ai                 = "SAU_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1045 # ¸®¾ßµå 
  manpower           = 24
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = AST value = 50 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 15 }
    relation = { tag = OMN value = 100 }
    relation = { tag = PER value = -75 }
    relation = { tag = YEM value = 50 }
    relation = { tag = GRE value = 15 }
    relation = { tag = U02 value = 75 }
    relation = { tag = U08 value = -50 }
    relation = { tag = U09 value = -25 }
    relation = { tag = OTT value = -150 }
    relation = { tag = U53 value = 25 }
    relation = { tag = U91 value = 25 }
  }
  SpyInfo                = { country = "SAU" NumberOfSpies = 3 }

  nationalprovinces      = { 1024 1038 1039 1040 1043 1044 1045 1046 1047 1048 1049 }
  ownedprovinces         = { 1040 1045 1047 }
  controlledprovinces    = { 1040 1045 1047 }
  claimedprovinces       = { 1041 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 1004 1005 1006 1007 1008 1009 1010 1011 1013 1014 1015 1016 1017 1018 1019 1020 1021 1023 1026 1172 1022 1024 1025 1089 }

  techapps               = { 1010 1310 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 4
  }

  landunit = {
    id       = { type = 22600 id = 1 }
    name     = "Saudian Army"
    location = 1045
    division = {
      id             = { type = 22600 id = 2 }
      name           = "Saudi bodyguard"
      type           = cavalry
      model          = 0
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 22600 id = 3 }
      name           = "Ikhwan"
      type           = cavalry
      model          = 0
      strength       = 100
      experience     = 20
    }
  }
}
