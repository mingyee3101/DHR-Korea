##############################
# Country definition for LIB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LIB
  puppet             = USA
  control            = USA
  ai                 = "lib_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 969 # 몬로비아 
  dissent            = 3
  manpower           = 1
  # Resource Reserves
  energy         = 120
  metal          = 60
  rare_materials = 30
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = USA value = 200 }
    relation = { tag = ENG value = 50 }
    relation = { tag = U08 value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = HOL value = 20 }
    relation = { tag = DEN value = 20 }
  }
  SpyInfo                = { country = "LIB" NumberOfSpies = 1 }

  nationalprovinces      = { 969 }
  ownedprovinces         = { 969 }
  controlledprovinces    = { 969 }

  techapps               = { 1010 13060 5700 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 1
  }

  landunit = {
    id       = { type = 25500 id = 1 }
    name     = "Liberian Frontier Force"
    location = 969
    division = {
      id             = { type = 25000 id = 2 }
      name           = "Liberian Frontier Force"
      type           = militia
      model          = 1
      strength       = 5
    }
  }
}
