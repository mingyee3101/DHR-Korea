##############################
# Country definition for MTN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MTN
  flag_ext           = _14
  ai                 = "MTN_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes revolter_set = yes } }
  capital            = 338 # 베오그라드 
  manpower           = 3
  # Resource Reserves
  energy         = 60
  metal          = 30
  rare_materials = 15
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 100

  diplomacy = {
    relation = { tag = SER value = 150 }
    relation = { tag = ALB value = -100 }
    relation = { tag = BUL value = -100 }
    relation = { tag = FRA value = 25 }
    relation = { tag = U08 value = -15 }
    relation = { tag = ITA value = 75 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
  }
  SpyInfo                = { country = "MTN" NumberOfSpies = 2 }

  nationalprovinces      = { 332 335 361 }
  ownedprovinces         = { 332 335 }
  controlledprovinces    = { 332 335 }

  techapps               = { 2290 1010 5700 6500 1830 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 3
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 390056 } # 니콜라 1세 
  headofgovernment       = { type = 9 id = 390047 } # 얀코 부코티치 
  foreignminister        = { type = 9 id = 390043 } # 페타르 플라메냑 
  armamentminister       = { type = 9 id = 390057 } # 리스토 포포비치 
  ministerofsecurity     = { type = 9 id = 390061 } # 사보 블레티치 
  chiefofstaff           = { type = 9 id = 390040 } # 보지다르 얀코비치 
  chiefofarmy            = { type = 9 id = 390035 } # 얀코 부코티치 

  landunit = {
    id       = { type = 10300 id = 1 }
    name     = "Lovcenski Odred"
    location = 332
    leader   = 390049
    division = {
      id             = { type = 10300 id = 2 }
      name           = "1. Cetinjska divizija"
      type           = infantry
      model          = 1
      strength       = 15
      experience     = 20
    }
    division = {
      id             = { type = 10300 id = 3 }
      name           = "2. Podgoricka divizija"
      type           = infantry
      model          = 1
      strength       = 15
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10300 id = 4 }
    name     = "Hercegovacki Odred"
    location = 332
    leader   = 390048
    division = {
      id             = { type = 10300 id = 5 }
      name           = "3. Niksicka divizija"
      type           = infantry
      model          = 1
      strength       = 15
      experience     = 20
    }
    division = {
      id             = { type = 10300 id = 6 }
      name           = "4. Kolasinska divizija"
      type           = infantry
      model          = 0
      strength       = 10
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10300 id = 7 }
    name     = "Pljevljski Odred"
    location = 335
    leader   = 390051
    division = {
      id             = { type = 10300 id = 8 }
      name           = "5. Pljevljska divizija"
      type           = infantry
      model          = 0
      strength       = 10
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10300 id = 9 }
    name     = "Lovcenski Odred"
    location = 335
    leader   = 390052
    division = {
      id             = { type = 10300 id = 10 }
      name           = "6. Pecka divizija"
      type           = infantry
      model          = 1
      strength       = 15
      experience     = 20
    }
  }
}
