##############################
# Country definition for DEN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = DEN
  ai                 = "DEN_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 294 # 코펜하겐 
  manpower           = 5
  # Resource Reserves
  energy         = 660
  metal          = 330
  rare_materials = 165
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = U08 value = 25 }
    relation = { tag = U09 value = 15 }
    relation = { tag = RUS value = 25 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }

  nationalprovinces      = { 1 2 3 216 217 218 219 220 294 1783 }
  ownedprovinces         = { 1 2 3 217 218 219 220 294 1783 }
  controlledprovinces    = { 1 2 3 217 218 219 220 294 1783 }
  claimedprovinces       = { 150 }

  techapps               = { 2290 2800 2450 1010 1020 1030 13060 13070 1830 5700 6500 6510 8010 8020 8040 8050 8060 8070 8080 8100 3010 3020 3110 3120 3210 3610 3620 5600 3810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 6
    freedom           = 9
    free_market       = 10
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 75134 } # 크리스티안 10세 
  headofgovernment       = { type = 9 id = 75128 } # 카를 잘레 
  foreignminister        = { type = 9 id = 75117 } # 에리크 수에니우스 
  armamentminister       = { type = 9 id = 75159 } # 페테르 문크 
  ministerofsecurity     = { type = 9 id = 75156 } # 오베 로데 
  ministerofintelligence = { type = 9 id = 75157 } # 발데마르 헨리크 멘센 
  chiefofstaff           = { type = 9 id = 75160 } # 팔레 베르텔센 
  chiefofarmy            = { type = 9 id = 75158 } # 크리스티안 10세 
  chiefofnavy            = { type = 9 id = 75110 } # 오토 코푀드 한센 
  chiefofair             = { type = 9 id = 75161 } # 크리스티안 10세 

  landunit = {
    id       = { type = 27000 id = 40 }
    name     = "Den Danske H?"
    location = 294
    division = {
      id             = { type = 27000 id = 41 }
      name           = "1. Division"
      type           = infantry
      model          = 2
      strength       = 30
    }
    division = {
      id             = { type = 27000 id = 43 }
      name           = "2. Division"
      type           = infantry
      model          = 2
      strength       = 20
    }
    division = {
      id             = { type = 27000 id = 44 }
      name           = "3. Division"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }

  navalunit = {
    id       = { type = 27000 id = 500 }
    name     = "S??net"
    location = 294
    base     = 294
    division = {
      id             = { type = 27000 id = 501 }
      name           = "Peder Skram"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27000 id = 502 }
      name           = "Herluf Trolle"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27000 id = 503 }
      name           = "Olfert Fischer"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27000 id = 504 }
      name           = "Iver Hvitfeldt"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27000 id = 505 }
      name           = "Heimdal"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 506 }
      name           = "Geiser"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 507 }
      name           = "Hekla"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 508 }
      name           = "Valkyrien"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 509 }
      name           = "1:e Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 510 }
      name           = "2:e Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 27000 id = 511 }
    name     = "Ubaatsflottiljen"
    location = 294
    base     = 294
    division = {
      id             = { type = 27000 id = 512 }
      name           = "1:e Ubaatsflottiljen"
      type           = submarine
      model          = 1
    }
  }
}
