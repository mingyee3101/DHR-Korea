##############################
# Country definition for GUA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GUA
  ai                 = "GUA_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2088 # 시우다드 데 과테말라 
  manpower           = 3
  # Resource Reserves
  energy         = 600
  metal          = 300
  rare_materials = 150
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 15 }
    relation = { tag = SAL value = -15 }
    relation = { tag = NIC value = 50 }
    relation = { tag = COS value = 50 }
    relation = { tag = SPA value = 50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = PAN value = 50 }
  }
  SpyInfo                = { country = "GUA" NumberOfSpies = 2 }

  nationalprovinces      = { 2086 2087 2088 2079 2084 2085 2080 2082 2081 2083 }
  ownedprovinces         = { 2087 2088 }
  controlledprovinces    = { 2087 2088 }

  techapps               = { 1010 1020 13060 1160 1170 1830 2800 5700 6500 6510 3810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }

  landunit = {
    id       = { type = 16500 id = 65 }
    name     = "Ejercito de Guatemala"
    location = 2088
    division = {
      id             = { type = 16500 id = 6500 }
      name           = "Ejercito de Guatemala"
      type           = infantry
      model          = 0
      strength       = 45
    }
  }
}
