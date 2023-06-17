##############################
# Country definition for PAR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = PAR
  ai                 = "PAR_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2047 # 아순시온 
  manpower           = 2
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
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
    relation = { tag = ENG value = 25 }
    relation = { tag = U08 value = 25 }
  }
  SpyInfo                = { country = "PAR" NumberOfSpies = 4 }

  nationalprovinces      = { 2046 2047 }
  ownedprovinces         = { 2046 2047 }
  controlledprovinces    = { 2046 2047 }

  techapps               = { 1010 1020 13060 1160 5700 6500 6510 1830 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }

  landunit = {
    id       = { type = 15600 id = 60 }
    name     = "Ejercito del Paraguay"
    location = 2047
    division = {
      id             = { type = 15600 id = 6000 }
      name           = "Ejercito del Paraguay"
      type           = infantry
      model          = 0
      strength       = 20
    }
  }
}
