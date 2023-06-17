##############################
# Country definition for HON #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HON
  puppet             = USA
  ai                 = "HON_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2085 # �ױ��ð��� 
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = -15 }
    relation = { tag = USA value = 100 }
    relation = { tag = COS value = 50 }
    relation = { tag = SPA value = 50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = PAN value = 50 }
  }
  SpyInfo                = { country = "HON" NumberOfSpies = 1 }

  nationalprovinces      = { 2084 2085 2086 2087 2088 2079 2080 2082 2081 2083 }
  ownedprovinces         = { 2084 2085 }
  controlledprovinces    = { 2084 2085 }

  techapps               = { 1010 1020 1160 1830 2800 5700 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 355090 } # �����ý��� ����Ʈ�� 
  headofgovernment       = { type = 9 id = 355087 } # �����ý��� ����Ʈ�� 
  foreignminister        = { type = 9 id = 355093 } # ����� ���ٳ� 
  armamentminister       = { type = 9 id = 355094 } # �������� �ڸ����� 
  ministerofsecurity     = { type = 9 id = 355098 } # ��ٵ��� �Ʊⷹ 
  ministerofintelligence = { type = 9 id = 355099 } # ���� �佺Ÿ ī���� 
  chiefofstaff           = { type = 9 id = 355095 } # ��Ƽ�ư� �޻� Į���� 
  chiefofarmy            = { type = 9 id = 355097 } # ���� �佺Ÿ ī���� 
  chiefofnavy            = { type = 9 id = 355096 } # ��Ƽ�ư� �޻� Į���� 

  landunit = {
    id       = { type = 19500 id = 1 }
    name     = "Ejercito de Honduras"
    location = 2085
    division = {
      id             = { type = 19500 id = 2 }
      name           = "Ejercito de Honduras"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }
}