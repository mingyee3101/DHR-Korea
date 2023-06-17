##############################
# Country definition for YEM #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = YEM
  puppet             = OTT
  ai                 = "YEM_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1050 # �糪 
  manpower           = 5
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10
  SpyInfo                = { country = "YEM" NumberOfSpies = 1 }

  nationalprovinces      = { 1050 1051 1053 840 }
  ownedprovinces         = { 1050 }
  controlledprovinces    = { 1050 }

  techapps               = { 1010 1020 13060 1160 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 9
    free_market       = 8
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 445001 } # �߾� ���ϸ��� �Ϲ̵� �ѵ�
  headofgovernment       = { type = 9 id = 445026 } # ���幫�� �׵� 
  foreignminister        = { type = 9 id = 445003 } # �߾� ���ϸ��� �Ϲ̵� �ѵ�
  armamentminister       = { type = 9 id = 445027 } # �߾� ���ϸ��� �Ϲ̵� �ѵ�
  ministerofsecurity     = { type = 9 id = 445005 } # �߾� ���ϸ��� �Ϲ̵� �ѵ�
  ministerofintelligence = { type = 9 id = 445028 } # �߾� ���ϸ��� �Ϲ̵� �ѵ�
  chiefofstaff           = { type = 9 id = 445007 } # �߾� ���ϸ��� �Ϲ̵� �ѵ�
  chiefofarmy            = { type = 9 id = 445029 } # �߾� ���ϸ��� �Ϲ̵� �ѵ�

  landunit = {
    id       = { type = 15900 id = 1 }
    name     = "Zaydian army"
    location = 1050
    division = {
      id             = { type = 15900 id = 2 }
      name           = "Zaydian bodyguard"
      type           = cavalry
      model          = 0
      strength       = 10
      experience     = 20
    }
    division = {
      id             = { type = 15900 id = 3 }
      name           = "Yemeni tribes"
      type           = cavalry
      model          = 0
      strength       = 10
      experience     = 20
    }
  }
}