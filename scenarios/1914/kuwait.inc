##############################
# Country definition for U91 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U91
  puppet             = ENG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes revolter_set = yes } }
  capital            = 1041 # ������Ʈ 
  manpower           = 7
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 200 access = yes }
    relation = { tag = SAU value = -20 }
    relation = { tag = U91 value = -20 }
    relation = { tag = U50 value = -10 }
    relation = { tag = OTT value = -150 }
    relation = { tag = PER value = -25 }
  }
  SpyInfo                = { country = "U91" NumberOfSpies = 1 }

  nationalprovinces      = { 1041 }
  ownedprovinces         = { 1041 }
  controlledprovinces    = { 1041 }

  techapps               = { 1010 1020 13060 1160 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 3
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 1270021 } # ���ٶ�ũ �� ��� 
  headofgovernment       = { type = 9 id = 1270061 } # ������ ����� 
  foreignminister        = { type = 9 id = 1270023 } # ���ٶ�ũ �� ��� 
  armamentminister       = { type = 9 id = 1270024 } # ���ٶ�ũ �� ��� 
  ministerofsecurity     = { type = 9 id = 1270025 } # ���ٶ�ũ �� ��� 
  ministerofintelligence = { type = 9 id = 1270026 } # ���ٶ�ũ �� ��� 
  chiefofstaff           = { type = 9 id = 1270066 } # �۽� �۽� 
  chiefofarmy            = { type = 9 id = 1270067 } # �۽� �۽� 
  chiefofnavy            = { type = 9 id = 1270068 } # �۽� �۽� 

  landunit = {
    id       = { type = 25300 id = 1 }
    name     = "Kuwaiti army"
    location = 1041
    division = {
      id             = { type = 25300 id = 2 }
      name           = "Kuwaiti army"
      type           = cavalry
      model          = 0
      strength       = 30
    }
  }
}