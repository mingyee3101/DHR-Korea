##############################
# Country definition for URU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = URU
  ai                 = "URU_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2052 # 몬테비데오 
  manpower           = 0
  # Resource Reserves
  energy         = 480
  metal          = 240
  rare_materials = 120
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = RUS value = 10 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
    relation = { tag = U08 value = 30 }
    relation = { tag = ENG value = 30 }
  }
  SpyInfo                = { country = "URU" NumberOfSpies = 3 }

  nationalprovinces      = { 2051 2052 }
  ownedprovinces         = { 2051 2052 }
  controlledprovinces    = { 2051 2052 }

  techapps               = { 1010 1020 13060 1160 1170 5700 1830 3810 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 1
  }

  landunit = {
    id       = { type = 13700 id = 40 }
    name     = "Ejercito de Uruguay"
    location = 2052
    division = {
      id             = { type = 13700 id = 4000 }
      name           = "1a Division de Infanteria"
      type           = infantry
      model          = 1
      strength       = 40
    }
  }
}
