##############################
# Country definition for U58 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U58
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 1977 # 시우다드 후아레스 
  manpower           = 185
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 30

  diplomacy = {
    relation = { tag = USA value = -100 }
    relation = { tag = MEX value = -200 }
  }

  nationalprovinces      = { 1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 }
  ownedprovinces         = { 1977 1978 }
  controlledprovinces    = { 1977 1978 }

  techapps               = { 1010 1020 1160 13060 3010 3110 1910 5800 5310 5600 5700 5810 6500 6510 6530 8010 8050 27480 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 9
    freedom           = 8
    free_market       = 3
    professional_army = 4
    defense_lobby     = 9
    interventionism   = 8
  }

  landunit = {
    id       = { type = 24001 id = 1 }
    name     = "La Division del Norte"
    location = 1978
    division = {
      id             = { type = 24001 id = 2 }
      type           = cavalry
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 24001 id = 3 }
      type           = infantry
      model          = 2
      extra          = artillery
      experience     = 20
    }
    division = {
      id             = { type = 24001 id = 4 }
      type           = infantry
      model          = 2
      experience     = 20
    }
  }
}
