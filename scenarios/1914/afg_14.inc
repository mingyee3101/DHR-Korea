##############################
# Country definition for AFG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = AFG
  flag_ext           = _14
  ai                 = "AFG_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 2171 # Ä«ºÒ 
  manpower           = 20
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 20 }
    relation = { tag = PER value = 100 }
    relation = { tag = SAU value = 15 }
    relation = { tag = RUS value = -50 }
    relation = { tag = OTT value = 75 }
    relation = { tag = U02 value = 50 }
    relation = { tag = TIB value = 20 }
    relation = { tag = USA value = 5 }
    relation = { tag = U08 value = 30 }
    relation = { tag = UCH value = 35 }
  }
  SpyInfo                = { country = "AFG" NumberOfSpies = 5 }

  nationalprovinces      = { 2168 2169 2170 2171 2172 2173 1529 1537 1538 1104 }
  ownedprovinces         = { 2168 2169 2170 2171 2172 2173 }
  controlledprovinces    = { 2168 2169 2170 2171 2172 2173 }

  techapps               = { 13060 1010 1160 1170 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 2
    free_market       = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 2
  }

  landunit = {
    id       = { type = 10400 id = 1 }
    name     = "Kabul Corps"
    location = 2171
    division = {
      id             = { type = 10400 id = 2 }
      name           = "Royal Afghan Household Division"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 10400 id = 3 }
      name           = "1st Division"
      type           = infantry
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 10400 id = 4 }
      name           = "2nd Division"
      type           = infantry
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10400 id = 5 }
    name     = "3rd 'Kandahar' Division"
    location = 2169
    division = {
      id             = { type = 10400 id = 6 }
      name           = "3rd 'Kandahar' Division"
      type           = infantry
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10400 id = 7 }
    name     = "4th 'Herat' Division"
    location = 2172
    division = {
      id             = { type = 10400 id = 8 }
      name           = "4th 'Herat' Division"
      type           = infantry
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10400 id = 9 }
    name     = "5th 'Mazar-i-Sharif' Brigade"
    location = 2168
    division = {
      id             = { type = 10400 id = 10 }
      name           = "5th 'Mazar-i-Sharif' Brigade"
      type           = infantry
      model          = 0
      strength       = 15
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 10400 id = 11 }
    name     = "Ghazni Military District"
    location = 2171
    division = {
      id             = { type = 10400 id = 12 }
      name           = "Ghazni Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 10400 id = 13 }
    name     = "Kandahar Military District"
    location = 2169
    division = {
      id             = { type = 10400 id = 14 }
      name           = "Kandahar Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 10400 id = 15 }
    name     = "Herat Military District"
    location = 2172
    division = {
      id             = { type = 10400 id = 16 }
      name           = "Herat Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 10400 id = 17 }
    name     = "Turkestan Military District"
    location = 2168
    division = {
      id             = { type = 10400 id = 18 }
      name           = "Turkestan Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 10400 id = 19 }
    name     = "Kadagan & Badakhchan Military District"
    location = 2170
    division = {
      id             = { type = 10400 id = 20 }
      name           = "Kadagan & Badakhchan Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 10400 id = 21 }
    name     = "Maymeneh Military District"
    location = 2172
    division = {
      id             = { type = 10400 id = 22 }
      name           = "Maymeneh Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 10400 id = 23 }
    name     = "The East Military District"
    location = 2170
    division = {
      id             = { type = 10400 id = 24 }
      name           = "The East Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 10400 id = 25 }
    name     = "Farah Military District"
    location = 2172
    division = {
      id             = { type = 10400 id = 26 }
      name           = "Farah Militia"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 100
      experience     = 10
    }
  }
}
