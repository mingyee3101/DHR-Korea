##############################
# Country definition for BEL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BEL
  ai                 = "BEL_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 116 # 브뤼셀 
  manpower           = 3
  # Resource Reserves
  energy         = 1980
  metal          = 990
  rare_materials = 495
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 20

  diplomacy = {
    relation = { tag = AST value = 50 }
    relation = { tag = CAN value = 50 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = U08 value = -75 }
    relation = { tag = HOL value = 175 }
    relation = { tag = ITA value = 0 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -50 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 50 }
  }
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }

  nationalprovinces      = { 108 110 111 112 113 114 115 116 117 }
  ownedprovinces         = { 114 115 116 112 113 108 117 111 894 901 904 903 905 906 902 898 897 899 }
  controlledprovinces    = { 114 115 116 112 113 108 117 111 894 901 904 903 905 906 902 898 897 899 }
  claimedprovinces       = { 846 847 894 897 898 899 901 902 903 904 905 906 }

  techapps               = { 4500 2860 2290 2800 1010 1020 1030 13060 13070 13080 1160 1830 1910 27480 27490 4600 4610 5810 5800 5310 54010 5600 5080 3810 6500 6510 8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 81300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 8
    free_market       = 9
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 70187 } # 알베르 1세 
  headofgovernment       = { type = 9 id = 70172 } # 샤를 드 브로크빌 
  foreignminister        = { type = 9 id = 70164 } # 쥘 다비뇽 
  armamentminister       = { type = 9 id = 70190 } # 알로이스 반 더 비버러 
  ministerofsecurity     = { type = 9 id = 70196 } # P. 베리에르 
  ministerofintelligence = { type = 9 id = 70183 } # 샤를 드 브로크빌 
  chiefofstaff           = { type = 9 id = 70158 } # 리더르 더 셀리어르스 
  chiefofarmy            = { type = 9 id = 70156 } # 알베르 1세 
  chiefofnavy            = { type = 9 id = 70206 } # 샤를 드 브로크빌 
  chiefofair             = { type = 9 id = 70152 } # 클레멍 드 생마르크 

  landunit = {
    id       = { type = 18150 id = 1 }
    name     = "1?e Division d'Arm?"
    location = 114
    leader   = 70058
    division = {
      id             = { type = 18150 id = 2 }
      name           = "1?e Division d'Arm?"
      type           = infantry
      model          = 2
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 18150 id = 3 }
    name     = "2?e Division d'Arm?"
    location = 115
    leader   = 70059
    division = {
      id             = { type = 18150 id = 4 }
      name           = "2?e Division d'Arm?"
      type           = infantry
      model          = 2
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 18150 id = 6 }
    name     = "3?e Division d'Arm?"
    location = 108
    leader   = 70060
    division = {
      id             = { type = 18150 id = 7 }
      name           = "3?e Division d'Arm?"
      type           = infantry
      model          = 2
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 18150 id = 9 }
    name     = "4?e Division d'Arm?"
    location = 113
    leader   = 70061
    division = {
      id             = { type = 18150 id = 10 }
      name           = "4?e Division d'Arm?"
      type           = infantry
      model          = 2
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 18150 id = 12 }
    name     = "5?e Division d'Arm?"
    location = 112
    leader   = 70062
    division = {
      id             = { type = 18150 id = 13 }
      name           = "5?e Division d'Arm?"
      type           = infantry
      model          = 2
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 18150 id = 14 }
    name     = "6?e Division d'Arm?"
    location = 116
    leader   = 70053
    division = {
      id             = { type = 18150 id = 15 }
      name           = "6?e Division d'Arm?"
      type           = infantry
      model          = 2
      strength       = 55
    }
    division = {
      id             = { type = 18150 id = 16 }
      name           = "Division de Cavalerie"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 18150 id = 17 }
    name     = "Troupes du Congo-Kasa?"
    location = 899
    division = {
      id             = { type = 18150 id = 18 }
      name           = "Troupes du Congo-Kasa?"
      type           = militia
      model          = 1
      strength       = 45
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 19 }
    name     = "Troupes de l'Equateur"
    location = 906
    division = {
      id             = { type = 18150 id = 20 }
      name           = "Troupes de l'Equateur"
      type           = militia
      model          = 1
      strength       = 35
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 21 }
    name     = "Troupes de la province orientale"
    location = 905
    division = {
      id             = { type = 18150 id = 22 }
      name           = "Troupes de la province orientale"
      type           = militia
      model          = 1
      strength       = 45
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 23 }
    name     = "Troupes du Katanga"
    location = 898
    division = {
      id             = { type = 18150 id = 24 }
      name           = "Troupes du Katanga"
      type           = militia
      model          = 1
      strength       = 50
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 27 }
    name     = "Force Publique"
    location = 899
    division = {
      id             = { type = 18150 id = 28 }
      name           = "Garnison de L?poldville"
      type           = garrison
      model          = 1
      strength       = 20
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 18150 id = 201 }
    name     = "1ste Transportatie Smaldeel"
    location = 114
    base     = 114
    division = {
      id             = { type = 11500 id = 202 }
      name           = "1er Transport Naval"
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 18150 id = 101 }
    name     = "Aviation Militaire/Militar Vliegwezen"
    location = 116
    base     = 116
    leader   = 70109
    division = {
      id             = { type = 18150 id = 102 }
      name           = "1. Escadrille"
      type           = tactical_bomber
      model          = 1
      strength       = 15
      max_strength   = 25
    }
  }
}
