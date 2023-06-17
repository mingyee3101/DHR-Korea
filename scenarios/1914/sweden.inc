##############################
# Country definition for SWE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SWE
  ai                 = "SWE_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 2159 # ����Ȧ�� 
  manpower           = 15
  # Resource Reserves
  energy         = 1320
  metal          = 660
  rare_materials = 330
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = U08 value = 100 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
    relation = { tag = RUS value = 25 }
  }
  SpyInfo                = { country = "SWE" NumberOfSpies = 5 }

  nationalprovinces      = { 526 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  ownedprovinces         = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  controlledprovinces    = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }

  techapps               = { 1830 2290 3210 3220 1010 1020 1160 1170 1180 5700 3010 3020 3030 3110 3120 3610 3310 3320 3410 3420 5600 3810 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 40157 } # ����Ÿ�� 5�� 
  headofgovernment       = { type = 9 id = 40138 } # �⸶�� �Ը������� 
  foreignminister        = { type = 9 id = 40120 } # ũ��Ʈ �߷����� 
  armamentminister       = { type = 9 id = 40166 } # �Ǽ� ���׸����� 
  ministerofsecurity     = { type = 9 id = 40186 } # ������ �ϼ�����Ʈ 
  chiefofstaff           = { type = 9 id = 40106 } # ũ��Ʈ �Ͻ� ��Ʈ 
  chiefofarmy            = { type = 9 id = 40094 } # ����Ÿ�� 5�� 
  chiefofnavy            = { type = 9 id = 40102 } # ����� �õ�׸� 

  landunit = {
    id       = { type = 12111 id = 1 }
    name     = "I. Distrikt"
    location = 2152
    division = {
      id             = { type = 12111 id = 2 }
      name           = "I. Arm??delning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 3 }
    name     = "II. Distrikt"
    location = 2157
    division = {
      id             = { type = 12111 id = 4 }
      name           = "II. Arm??delning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 5 }
    name     = "III. Distrikt"
    location = 2161
    division = {
      id             = { type = 12111 id = 6 }
      name           = "III. Arm??delning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 7 }
    name     = "IV. Distrikt"
    location = 2159
    division = {
      id             = { type = 12111 id = 8 }
      name           = "IV. Arm??delning"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 9 }
    name     = "V. Distrikt"
    location = 2158
    division = {
      id             = { type = 12111 id = 10 }
      name           = "V. Arm??delning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 11 }
    name     = "VI. Distrikt"
    location = 2164
    division = {
      id             = { type = 12111 id = 12 }
      name           = "VI. Arm??delning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 13 }
    name     = "Norrland Milit?t Omrade"
    location = 2166
    division = {
      id             = { type = 12111 id = 14 }
      name           = "Bodens Trupper"
      type           = garrison
      model          = 1
      strength       = 20
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 12111 id = 15 }
    name     = "Gotland Milit?t Omrade"
    location = 2156
    division = {
      id             = { type = 12111 id = 16 }
      name           = "Gotlands Trupper"
      type           = garrison
      model          = 1
      strength       = 20
      max_strength   = 100
    }
  }

  navalunit = {
    id       = { type = 12111 id = 500 }
    name     = "Svenska Flottan"
    location = 2155
    base     = 2155
    division = {
      id             = { type = 12111 id = 501 }
      name           = "Svea"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 502 }
      name           = "G?a"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 503 }
      name           = "Thule"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 504 }
      name           = "Oden"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 505 }
      name           = "Thor"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 506 }
      name           = "Niord"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 507 }
      name           = "Dristigheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 508 }
      name           = "�ran"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 509 }
      name           = "Wasa"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 510 }
      name           = "Tapperheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 511 }
      name           = "Manligheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 512 }
      name           = "Oscar II"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 513 }
      name           = "Fylgia"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 514 }
      name           = "1:a Jagarflottiljen"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 515 }
      name           = "2:a Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 516 }
      name           = "3:e Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 517 }
      name           = "4:e Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 518 }
      name           = "Transportflottiljen"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12111 id = 519 }
    name     = "Ub?sflottiljen"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 12111 id = 520 }
      name           = "1:a Ub?sflottiljen"
      type           = submarine
      model          = 1
    }
  }

  division_development = {
    id             = { type = 12111 id = 521 }
    name           = "Sverige"
    type           = battleship
    model          = 0
    cost           = 0.4
    date           = { year = 1917 month = may day = 10 }
  }
}