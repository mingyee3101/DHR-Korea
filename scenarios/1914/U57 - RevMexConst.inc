##############################
# Country definition for U57 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U57
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 1976 # 살티요 
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
  ownedprovinces         = { 1979 1976 1975 1967 1980 }
  controlledprovinces    = { 1979 1976 1975 1967 1980 }

  techapps               = { 1010 1020 1160 13060 3010 3110 1910 5800 5310 5600 5700 5810 6500 6510 6530 8010 8050 27480 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 8
    free_market       = 6
    professional_army = 4
    defense_lobby     = 9
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 1100001 } # 베누스티아노 카란사 
  headofgovernment       = { type = 9 id = 1100002 } # 베누스티아노 카란사 
  foreignminister        = { type = 9 id = 1100004 } # 이시드로 파벨라 알파로 
  armamentminister       = { type = 9 id = 1100013 } # 파스토르 루아익스 
  ministerofsecurity     = { type = 9 id = 1100016 } # 라파엘 수바란 카프마니 
  chiefofstaff           = { type = 9 id = 1100020 } # 하신토 블라스 트레비뇨 
  chiefofarmy            = { type = 9 id = 1100027 } # 하신토 블라스 트레비뇨 
  chiefofnavy            = { type = 9 id = 1100034 } # 하신토 블라스 트레비뇨 
  chiefofair             = { type = 9 id = 1100040 } # 알베르토 살리나스 카란사 

  landunit = {
    id       = { type = 24004 id = 1 }
    name     = "El Cuerpo de Ej?cito del Noroeste"
    location = 1980
    division = {
      id             = { type = 24004 id = 2 }
      type           = infantry
      model          = 1
      strength       = 110
      experience     = 20
    }
    division = {
      id             = { type = 24004 id = 3 }
      type           = infantry
      model          = 1
      strength       = 110
      experience     = 20
    }
    division = {
      id             = { type = 24004 id = 4 }
      type           = infantry
      model          = 2
      strength       = 110
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 24004 id = 5 }
    name     = "El Cuerpo de Ej?cito del Noreste"
    location = 1976
    division = {
      id             = { type = 24004 id = 6 }
      type           = infantry
      model          = 1
      strength       = 110
      experience     = 20
    }
  }
}
