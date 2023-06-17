##############################
# Country definition for U59 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U59
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1972 # 아카풀코 데 후아레스 
  manpower           = 50
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 10

  diplomacy = {
    relation = { tag = USA value = -100 }
    relation = { tag = MEX value = -200 }
    relation = { tag = U57 value = 100 }
  }

  nationalprovinces      = { 1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 }
  ownedprovinces         = { 1971 1972 }
  controlledprovinces    = { 1971 1972 }

  techapps               = { 1010 1020 1160 1170 13060 13070 3010 1910 5800 5310 5600 5700 5810 6500 6510 6530 13080 1310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 7
    freedom           = 9
    free_market       = 6
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 1110001 } # 에밀리아노 사파타 
  headofgovernment       = { type = 9 id = 1110002 } # 에밀리아노 사파타 
  foreignminister        = { type = 9 id = 1110008 } # 길다르도 마가냐 세르다 
  ministerofintelligence = { type = 9 id = 1110039 } # 에밀리아노 사파타 
  chiefofstaff           = { type = 9 id = 1110015 } # 오틸로 몬타뇨 산체스 
  chiefofarmy            = { type = 9 id = 1110011 } # 아마도르 살라사르 
  chiefofnavy            = { type = 9 id = 1110005 } # 마누엘 팔라폭스 
  chiefofair             = { type = 9 id = 1110006 } # 마누엘 팔라폭스 

  landunit = {
    id       = { type = 24002 id = 1 }
    name     = "Ej?cito Libertador del Sur"
    location = 1972
    leader   = 1110050
    division = {
      id             = { type = 24002 id = 2 }
      name           = "Emiliano Zapata"
      type           = bergsjaeger
      model          = 1
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 24002 id = 3 }
      name           = "2nd Division"
      type           = militia
      model          = 1
      strength       = 15
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 24002 id = 4 }
    name     = "3rd Division"
    location = 1971
    division = {
      id             = { type = 24002 id = 5 }
      name           = "3rd Division"
      type           = militia
      model          = 1
      strength       = 15
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 24002 id = 6 }
    name     = "4th Division"
    location = 1972
    division = {
      id             = { type = 24002 id = 7 }
      name           = "4th Division"
      type           = cavalry
      model          = 1
      strength       = 15
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 24002 id = 8 }
    name     = "5th Division"
    location = 1971
    division = {
      id             = { type = 24002 id = 9 }
      name           = "5th Division"
      type           = cavalry
      model          = 1
      strength       = 10
      experience     = 5
    }
  }
}
