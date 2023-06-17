##############################
# Country definition for SIA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SIA
  name               = SIA36
  flag_ext           = _14
  ai                 = "SIA_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 1423 # ¹æÄÛ 
  manpower           = 25
  # Resource Reserves
  energy         = 1380
  metal          = 690
  rare_materials = 345
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 15 }
    relation = { tag = FRA value = -25 }
    relation = { tag = JAP value = 25 }
    relation = { tag = UCH value = 40 }
    relation = { tag = U02 value = -10 }
    relation = { tag = U03 value = -10 }
    relation = { tag = DEN value = 15 }
    relation = { tag = USA value = 20 }
  }
  SpyInfo                = { country = "SIA" NumberOfSpies = 2 }

  nationalprovinces      = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 1400 1394 1405 1391 1412 1413 1398 1401 1402 1404 1409 1433 1434 }
  ownedprovinces         = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 }
  controlledprovinces    = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 }

  techapps               = { 2290 1010 1310 1160 1170 1180 3010 3020 3110 3120 3130 3610 3620 8010 8050 1830 3810 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }

  landunit = {
    id       = { type = 23600 id = 1 }
    name     = "1st Division"
    location = 1423
    division = {
      id             = { type = 23600 id = 2 }
      name           = "1st Division"
      type           = infantry
      model          = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 3 }
    name     = "2nd Division"
    location = 1422
    division = {
      id             = { type = 23600 id = 4 }
      name           = "2nd Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 5 }
    name     = "3rd Division"
    location = 1426
    division = {
      id             = { type = 23600 id = 6 }
      name           = "3rd Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 7 }
    name     = "4th Division"
    location = 1427
    division = {
      id             = { type = 23600 id = 8 }
      name           = "4th Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 9 }
    name     = "5th Division"
    location = 1428
    division = {
      id             = { type = 23600 id = 10 }
      name           = "5th Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 11 }
    name     = "6th Division"
    location = 1429
    division = {
      id             = { type = 23600 id = 12 }
      name           = "6th Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 13 }
    name     = "7th Division"
    location = 1430
    division = {
      id             = { type = 23600 id = 14 }
      name           = "7th Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 15 }
    name     = "8th Division"
    location = 1431
    division = {
      id             = { type = 23600 id = 16 }
      name           = "8th Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 17 }
    name     = "9th Division"
    location = 1428
    division = {
      id             = { type = 23600 id = 18 }
      name           = "9th Division"
      type           = infantry
      model          = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 23600 id = 19 }
    name     = "10th Division"
    location = 1423
    division = {
      id             = { type = 23600 id = 20 }
      name           = "10th Division"
      type           = infantry
      model          = 1
      strength       = 40
    }
  }

  navalunit = {
    id       = { type = 23600 id = 500 }
    name     = "Royal Siamese Navy"
    location = 1423
    base     = 1423
    division = {
      id             = { type = 23600 id = 501 }
      name           = "Maha Chakri"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23600 id = 502 }
      name           = "1st Flotilla"
      type           = destroyer
      model          = 0
    }
  }
}
