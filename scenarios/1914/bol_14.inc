##############################
# Country definition for BOL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BOL
  ai                 = "BOL_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2020 # ¶ó ÆÄ½º 
  manpower           = 0
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = U08 value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 100 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
    relation = { tag = ENG value = 15 }
  }
  SpyInfo                = { country = "BOL" NumberOfSpies = 3 }

  nationalprovinces      = { 2019 2020 2021 2063 2064 2046 2002 2025 }
  ownedprovinces         = { 2019 2020 2021 2063 2064 }
  controlledprovinces    = { 2019 2020 2021 2063 2064 }

  techapps               = { 1010 1020 13060 1160 5700 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 5
  }

  landunit = {
    id       = { type = 17000 id = 40 }
    name     = "Ejercito Boliviano"
    location = 2020
    division = {
      id             = { type = 17000 id = 4000 }
      name           = "Ejercito Boliviano"
      type           = infantry
      model          = 1
      strength       = 30
    }
  }
}
