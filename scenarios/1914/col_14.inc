##############################
# Country definition for COL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = COL
  ai                 = "COL_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1991 # 산타 페 데 보고타 
  manpower           = 4
  # Resource Reserves
  energy         = 660
  metal          = 330
  rare_materials = 165
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = U08 value = 0 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }

  nationalprovinces      = { 1990 1991 1987 1986 1994 2009 1985 1756 }
  ownedprovinces         = { 1756 1985 1986 1987 1990 1991 1994 2009 }
  controlledprovinces    = { 1756 1985 1986 1987 1990 1991 1994 2009 }
  claimedprovinces       = { 2077 2078 889 }

  techapps               = { 1010 1020 13060 5700 3010 3810 5600 6500 6510 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 175180 } # 호세 비센테 콘차 

  landunit = {
    id       = { type = 23000 id = 40 }
    name     = "1a Divisi? de Infanteria"
    location = 1991
    division = {
      id             = { type = 23000 id = 4000 }
      name           = "1a Divisi? de Infanteria"
      type           = infantry
      model          = 0
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 23000 id = 4001 }
    name     = "2a Divisi? de Infanteria"
    location = 1986
    division = {
      id             = { type = 23000 id = 4006 }
      name           = "2a Divisi? de Infanteria"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 23000 id = 4007 }
    name     = "3a Divisi? de Infanteria"
    location = 1985
    division = {
      id             = { type = 23000 id = 4008 }
      name           = "3a Divisi? de Infanteria"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 23000 id = 4002 }
    name     = "Armada de Colombia"
    location = 1990
    base     = 1990
    division = {
      id             = { type = 23000 id = 4004 }
      name           = "Almirante Lezo"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23000 id = 4003 }
      name           = "1a Flotilla de Torpedillos"
      type           = destroyer
      model          = 0
    }
  }
}
