##############################
# Country definition for U03 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U03
  puppet             = FRA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1395 # 하노이 
  manpower           = 32
  # Resource Reserves
  energy         = 420
  metal          = 210
  rare_materials = 105
  oil            = 500
  supplies       = 2000
  money          = 50
  transports     = 100
  escorts        = 10

  diplomacy = {
    relation = { tag = FRA value = 50 access = yes }
  }
  SpyInfo                = { country = "U03" NumberOfSpies = 3 }

  nationalprovinces      = { }
  ownedprovinces         = { 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 }
  controlledprovinces    = { 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 }

  techapps               = { 1010 13060 1160 1170 2290 3010 3110 3810 1830 8010 6500 6510 6530 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 830202 } # 주스트 반 보옌오벤 

  landunit = {
    id       = { type = 13500 id = 186 }
    name     = "Groupe de l'Indochine"
    location = 1399
    division = {
      id             = { type = 13500 id = 1871 }
      name           = "1?e Division Coloniale"
      type           = infantry
      model          = 1
      strength       = 45
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 1881 }
    name     = "Tirailleurs annamites"
    location = 1397
    division = {
      id             = { type = 13500 id = 1891 }
      name           = "1er Rgt. Tirailleurs Annamites"
      type           = militia
      model          = 1
      strength       = 20
      max_strength   = 40
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 1892 }
    name     = "Tirailleurs tonkinois"
    location = 1395
    division = {
      id             = { type = 13500 id = 1893 }
      name           = "1/2/3/4?e Rgts. Tirailleurs Tonkinois"
      type           = militia
      model          = 1
      strength       = 60
      max_strength   = 100
      experience     = 5
    }
  }
}
