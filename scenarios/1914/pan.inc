##############################
# Country definition for PAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = PAN
  puppet             = USA
  ai                 = "PAN_1914.ai"
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 2078 # 시우다드 데 파나마 
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
    relation = { tag = ENG value = 50 }
    relation = { tag = U08 value = 50 }
  }
  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }

  nationalprovinces      = { 889 2077 2078 }
  ownedprovinces         = { 2077 2078 }
  controlledprovinces    = { 2077 2078 }

  techapps               = { 1010 5700 5800 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 4
  }
}
