##############################
# Country definition for LBY #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LBY
  name               = LBY14
  flag_ext           = _senussi
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes revolter_set = yes } }
  capital            = 770 # ¾Ë ÀÚ±×ºÖ 
  dissent            = 20
  manpower           = 5
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = OTT value = 175 }
    relation = { tag = ITA value = -200 }
  }
  SpyInfo                = { country = "LBY" NumberOfSpies = 1 }

  nationalprovinces      = { 740 741 742 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 778 779 780 781 782 785 799 801 802 804 922 }
  ownedprovinces         = { 754 760 766 769 770 772 773 774 775 777 }
  controlledprovinces    = { 754 760 766 769 770 772 773 774 775 777 }

  techapps               = { 1010 13060 1160 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 7
    free_market       = 8
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 495031 } # ¾ÆÈå¸Þµå »þ¸®ÇÁ ¾Ñ ¼¼´©½Ã 
  headofgovernment       = { type = 9 id = 495032 } # ¾ÆÈå¸Þµå »þ¸®ÇÁ ¾Ñ ¼¼´©½Ã 
  foreignminister        = { type = 9 id = 495033 } # ¾ÆÈå¸Þµå »þ¸®ÇÁ ¾Ñ ¼¼´©½Ã 
  armamentminister       = { type = 9 id = 495034 } # ¾ÆÈå¸Þµå »þ¸®ÇÁ ¾Ñ ¼¼´©½Ã 
  ministerofsecurity     = { type = 9 id = 495035 } # ¾ÆÈå¸Þµå »þ¸®ÇÁ ¾Ñ ¼¼´©½Ã 
  ministerofintelligence = { type = 9 id = 495036 } # ¾ÆÈå¸Þµå »þ¸®ÇÁ ¾Ñ ¼¼´©½Ã 
  dormant_leaders        = { 495040 495041 495042 495043 495044 495045 495046 495047 495048 495049 495050 495051 495052 495053 495054 495055 495056 495057 495058 495059 495060 }
  dormant_ministers      = { 495037 495038 495039 495040 495041 495042 495043 495044 495045 495046 }

  landunit = {
    id       = { type = 25010 id = 1 }
    location = 766
    division = {
      id             = { type = 25010 id = 2 }
      name           = "Abid tribe"
      type           = cavalry
      model          = 0
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 25010 id = 3 }
    location = 760
    division = {
      id             = { type = 25010 id = 4 }
      name           = "Awaqir tribe"
      type           = cavalry
      model          = 0
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 25010 id = 5 }
    location = 772
    leader   = 495039
    division = {
      id             = { type = 25010 id = 6 }
      name           = "Mnifa tribe"
      type           = cavalry
      model          = 0
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 25010 id = 7 }
    location = 772
    division = {
      id             = { type = 25010 id = 8 }
      name           = "Ubaydat tribe"
      type           = cavalry
      model          = 0
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 25010 id = 9 }
    location = 760
    division = {
      id             = { type = 25010 id = 10 }
      name           = "Urfa tribe"
      type           = cavalry
      model          = 0
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 25010 id = 11 }
    location = 760
    division = {
      id             = { type = 25010 id = 12 }
      name           = "Barasa tribe"
      type           = cavalry
      model          = 0
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 25010 id = 13 }
    location = 777
    division = {
      id             = { type = 25010 id = 14 }
      name           = "Zuwaya tribe"
      type           = cavalry
      model          = 0
      strength       = 50
      max_strength   = 50
    }
  }

  landdivision = { dormant = yes id = { type = 25010 id = 15 } name = "Mahamid tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 16 } name = "Ibadi tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 17 } name = "Awlad Busayf tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 18 } name = "Warfalla tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 19 } name = "Awlad Sulayman tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 20 } name = "Jamaat tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 21 } name = "Hutman tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 22 } name = "Riyah tribe"  type = garrison model = 0 strength = 35 max_strength = 35 locked = yes } 
  landdivision = { dormant = yes id = { type = 25010 id = 23 } type = infantry model = 1 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 25010 id = 24 } name = "Dar Fur Rebels"  type = infantry model = 0 strength = 20 max_strength = 30 } 
}
