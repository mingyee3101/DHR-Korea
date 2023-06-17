##############################
# Country definition for ETH #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ETH
  flag_ext           = _14
  ai                 = "ETH_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 825 # 아디스 아바바 
  manpower           = 10
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
    relation = { tag = OTT value = 75 }
    relation = { tag = U08 value = 50 }
  }
  SpyInfo                = { country = "ETH" NumberOfSpies = 2 }

  nationalprovinces      = { 815 816 817 818 819 820 821 822 823 824 825 826 827 828 829 830 831 }
  ownedprovinces         = { 818 819 820 821 822 823 824 825 826 827 828 829 830 831 }
  controlledprovinces    = { 818 819 820 821 822 823 824 825 826 827 828 829 830 831 }

  techapps               = { 1010 1020 13060 1160 1170 5700 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 245075 } # 이야수 5세 
  headofgovernment       = { type = 9 id = 245077 } # 미카엘 월로 
  foreignminister        = { type = 9 id = 245072 } # 데자즈마크 베예네 
  armamentminister       = { type = 9 id = 245076 } # 기오르기스 디네그데 
  ministerofsecurity     = { type = 9 id = 245079 } # 기오르기스 디네그데 
  ministerofintelligence = { type = 9 id = 245078 } # 기오르기스 디네그데 
  chiefofstaff           = { type = 9 id = 245068 } # 기오르기스 디네그데 
  chiefofarmy            = { type = 9 id = 245065 } # 기오르기스 디네그데 
  chiefofnavy            = { type = 9 id = 245081 } # 기오르기스 디네그데 
  chiefofair             = { type = 9 id = 245080 } # 기오르기스 디네그데 

  landunit = {
    id       = { type = 31000 id = 1 }
    name     = "Imperial Guard"
    location = 825
    division = {
      id             = { type = 31000 id = 2 }
      name           = "Kebur Zabangna"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 31000 id = 3 }
    name     = "Arusi Provincial Forces"
    location = 831
    division = {
      id             = { type = 31000 id = 4 }
      name           = "Arusi Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 5 }
      name           = "Kula Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 6 }
    name     = "Bale Provincial Forces"
    location = 826
    division = {
      id             = { type = 31000 id = 7 }
      name           = "Bale Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 8 }
    name     = "Begemder Provincial Forces"
    location = 823
    division = {
      id             = { type = 31000 id = 9 }
      name           = "Begemder Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 10 }
      name           = "Om Hajer Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 11 }
      name           = "Sela Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 12 }
      name           = "Semien Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 13 }
      name           = "Wolqayt Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 14 }
    name     = "Gemu Gofa Provincial Forces"
    location = 830
    division = {
      id             = { type = 31000 id = 15 }
      name           = "Gemu Gofa Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 16 }
      name           = "Mui Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 17 }
      name           = "Sodo Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 18 }
    name     = "Gojjam Provincial Forces"
    location = 822
    division = {
      id             = { type = 31000 id = 19 }
      name           = "Gojjam Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 20 }
      name           = "Gubba Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 21 }
    name     = "Hararghe Provincial Forces"
    location = 828
    division = {
      id             = { type = 31000 id = 22 }
      name           = "Hararghe Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 23 }
      name           = "Ifrata Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 24 }
      name           = "Ogaden Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 25 }
    name     = "Illubabor Provincial Forces"
    location = 829
    division = {
      id             = { type = 31000 id = 26 }
      name           = "Illubabor Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 27 }
    name     = "Kaffa Provincial Forces"
    location = 829
    division = {
      id             = { type = 31000 id = 28 }
      name           = "Kaffa Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 29 }
      name           = "Gurage Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 30 }
      name           = "Jimma Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 31 }
    name     = "Shoa Provincial Forces"
    location = 825
    division = {
      id             = { type = 31000 id = 32 }
      name           = "Shoa Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 33 }
      name           = "Amino Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 34 }
    name     = "Sidamo Provincial Forces"
    location = 830
    division = {
      id             = { type = 31000 id = 35 }
      name           = "Sidamo Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 36 }
    name     = "Tigray Provincial Forces"
    location = 821
    division = {
      id             = { type = 31000 id = 37 }
      name           = "Tigray Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 38 }
      name           = "Yejju Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 39 }
    name     = "Welega Provincial Forces"
    location = 824
    division = {
      id             = { type = 31000 id = 40 }
      name           = "Welega Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 41 }
      name           = "Ardjo Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 31000 id = 42 }
    name     = "Wollo Provincial Forces"
    location = 820
    division = {
      id             = { type = 31000 id = 43 }
      name           = "Wollo Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 44 }
      name           = "Danakil Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 45 }
      name           = "Lasta Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 31000 id = 46 }
      name           = "Wag Sefari"
      type           = militia
      model          = 0
      strength       = 10
    }
  }
}
