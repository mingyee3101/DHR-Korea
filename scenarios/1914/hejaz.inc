##############################
# Country definition for U50 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U50
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 1048 # ¸Þµð³ª 
  manpower           = 5
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = OTT value = -15 }
    relation = { tag = SAU value = -120 }
    relation = { tag = ENG value = 125 }
    relation = { tag = YEM value = -25 }
    relation = { tag = FRA value = 15 }
    relation = { tag = ITA value = 15 }
    relation = { tag = OMN value = 100 }
    relation = { tag = PER value = -25 }
    relation = { tag = GRE value = 15 }
    relation = { tag = U02 value = 50 }
    relation = { tag = U08 value = 15 }
    relation = { tag = U09 value = 15 }
    relation = { tag = U53 value = 25 }
    relation = { tag = U91 value = 25 }
    relation = { tag = ETH value = 25 }
  }
  SpyInfo                = { country = "U50" NumberOfSpies = 3 }

  nationalprovinces      = { 1048 1049 1045 1047 1040 1044 1046 1039 1043 1038 }
  ownedprovinces         = { 1048 1049 }
  controlledprovinces    = { 1048 1049 }
  claimedprovinces       = { 1050 1053 }

  techapps               = { 1010 1020 13060 1160 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 4
  }

  landunit = {
    id       = { type = 18600 id = 1 }
    name     = "Sharifian army"
    location = 1048
    division = {
      id             = { type = 18600 id = 2 }
      name           = "Sharifian army"
      type           = cavalry
      model          = 0
      strength       = 40
    }
  }
}
