##############################
# Country definition for ECU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ECU
  ai                 = "ECU_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2042 # 산 프란시스코 데 키토 
  manpower           = 4
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
    relation = { tag = U08 value = 25 }
    relation = { tag = ENG value = 25 }
  }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }

  nationalprovinces      = { 2007 2008 2010 2033 2040 2041 2042 }
  ownedprovinces         = { 2007 2008 2010 2033 2040 2041 2042 }
  controlledprovinces    = { 2007 2008 2010 2033 2040 2041 2042 }

  techapps               = { 2290 1010 1020 13060 1160 1830 2800 5700 3810 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 1
  }

  landunit = {
    id       = { type = 10800 id = 1 }
    name     = "Ejercito Ecuatoriano"
    location = 2042
    division = {
      id             = { type = 10800 id = 2 }
      name           = "Ejercito Ecuatoriano"
      type           = infantry
      model          = 1
      strength       = 35
    }
  }

  navalunit = {
    id       = { type = 10800 id = 3 }
    name     = "Ecuadorian Fleet"
    location = 2042
    base     = 2042
    division = {
      id             = { type = 10800 id = 4 }
      name           = "1st Flotilla"
      type           = destroyer
      model          = 0
    }
  }
}
