##############################
# Country definition for MON #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MON
  flag_ext           = _14
  ai                 = "mon_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 1124 # 울란바토르 
  manpower           = 7
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 200
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = UCH value = -150 }
    relation = { tag = TIB value = 150 }
    relation = { tag = RUS value = 100 }
    relation = { tag = JAP value = 50 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }

  nationalprovinces      = { 1120 1121 1122 1123 1124 1125 1270 1272 1238 1239 1240 1206 1209 1162 1169 1268 1265 1119 }
  ownedprovinces         = { 1120 1121 1122 1123 1124 1125 }
  controlledprovinces    = { 1120 1121 1122 1123 1124 1125 }

  techapps               = { 1010 13060 5700 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 5
    free_market       = 3
    professional_army = 3
    defense_lobby     = 3
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 300110 } # 복드 칸 
  headofgovernment       = { type = 9 id = 300097 } # 투그 오치링 남난수렌 
  foreignminister        = { type = 9 id = 300096 } # 발링글린 체렌도르지 

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "Armija Mongol Nayramdakh"
    location = 1124
    division = {
      id             = { type = 30500 id = 5 }
      name           = "1. Nayramdakh Opolcheniya Div."
      type           = militia
      model          = 1
      strength       = 20
    }
    division = {
      id             = { type = 30500 id = 6 }
      name           = "2. Nayramdakh Opolcheniya Div."
      type           = militia
      model          = 0
      strength       = 20
    }
    division = {
      id             = { type = 30500 id = 7 }
      name           = "4. Nayramdakh Opolcheniya Div."
      type           = cavalry
      model          = 0
      strength       = 20
      experience     = 5
    }
  }
}
