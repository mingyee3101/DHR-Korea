##############################
# Country definition for DOM #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = DOM
  ai                 = "DOM_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1780 # 시우다드 트루히요 
  manpower           = 1
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  SpyInfo                = { country = "DOM" NumberOfSpies = 1 }

  nationalprovinces      = { 1780 }
  ownedprovinces         = { 1780 }
  controlledprovinces    = { 1780 }

  techapps               = { 1010 1020 13060 1160 5700 6500 6510 3810 1830 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 5
    free_market       = 8
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 1
  }

  landunit = {
    id       = { type = 28000 id = 75 }
    name     = "Ejercito de Rep. Dominicana"
    location = 1780
    division = {
      id             = { type = 28000 id = 7500 }
      name           = "Ejercito Nacional"
      type           = infantry
      model          = 0
      strength       = 5
    }
  }
}
