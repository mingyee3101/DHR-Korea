##############################
# Country definition for NOR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NOR
  ai                 = "NOR_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 483 # ������ 
  manpower           = 3
  # Resource Reserves
  energy         = 600
  metal          = 300
  rare_materials = 150
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 200
  escorts        = 5

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
    relation = { tag = U08 value = 100 }
    relation = { tag = RUS value = 50 }
  }
  SpyInfo                = { country = "NOR" NumberOfSpies = 3 }

  nationalprovinces      = { 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497 }
  ownedprovinces         = { 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497 }
  controlledprovinces    = { 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497 }

  techapps               = { 2290 1010 1020 13060 13070 1160 1170 1180 5700 5600 1830 3010 3110 3120 3210 3410 3610 3810 6500 6510 8010 8020 8040 8050 8060 8070 8080 8100 8110 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 65108 } # ȣ�� 7�� 
  headofgovernment       = { type = 9 id = 65131 } # ������ ũ���弾 
  foreignminister        = { type = 9 id = 65098 } # �ҽ� �Ϸ� 
  armamentminister       = { type = 9 id = 65132 } # ũ����Ƽ�� �׿����� ȦƮ��Ʈ 
  ministerofsecurity     = { type = 9 id = 65117 } # �󸣽� �ƺ���Լ� 
  ministerofintelligence = { type = 9 id = 65106 } # Ʈ���׺� �������� 
  chiefofstaff           = { type = 9 id = 65097 } # ũ����Ƽ�� ȦƮ��Ʈ 
  chiefofarmy            = { type = 9 id = 65133 } # ���̳��� ũ�� 
  chiefofnavy            = { type = 9 id = 65135 } # Į �����帮�� ������ 
  chiefofair             = { type = 9 id = 65136 } # ���̳��� ũ�� 

  landunit = {
    id       = { type = 12600 id = 1 }
    name     = "1. Divisjon"
    location = 484
    division = {
      id             = { type = 12600 id = 2 }
      name           = "1. Infanteridivisjon"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 12600 id = 3 }
    name     = "2. Divisjon"
    location = 489
    division = {
      id             = { type = 12600 id = 4 }
      name           = "2. Infanteridivisjon"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 12600 id = 5 }
    name     = "3. Divisjon"
    location = 485
    division = {
      id             = { type = 12600 id = 6 }
      name           = "3. Infanteridivisjon"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12600 id = 7 }
    name     = "4. Divisjon"
    location = 488
    division = {
      id             = { type = 12600 id = 8 }
      name           = "4. Infanteridivisjon"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12600 id = 9 }
    name     = "5. Divisjon"
    location = 493
    division = {
      id             = { type = 12600 id = 10 }
      name           = "5. Infanteridivisjon"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 12600 id = 11 }
    name     = "6. Divisjon"
    location = 497
    division = {
      id             = { type = 12600 id = 12 }
      name           = "6. Infanteridivisjon"
      type           = infantry
      model          = 1
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 12600 id = 20 }
    name     = "1. Kystvaktdistrikt"
    location = 491
    base     = 491
    division = {
      id             = { type = 12600 id = 21 }
      name           = "1. Undervannsb?eskadre"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 22 }
      name           = "2. Undervannsb?eskadre"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12600 id = 25 }
    name     = "3. Kystvaktdistrikt"
    location = 495
    base     = 495
    division = {
      id             = { type = 12600 id = 26 }
      name           = "KNM Norge"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12600 id = 30 }
      name           = "KNM Eidsvold"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12600 id = 31 }
      name           = "KNM Harald Haarfagre"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12600 id = 32 }
      name           = "KNM Tordenskjold"
      type           = heavy_cruiser
      model          = 1
    }
  }
}