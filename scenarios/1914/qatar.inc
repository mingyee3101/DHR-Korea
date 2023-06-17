##############################
# Country definition for U51 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U51
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1038 # ���� 
  manpower           = 5
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10
  SpyInfo                = { country = "U51" NumberOfSpies = 1 }

  nationalprovinces      = { 1038 }
  ownedprovinces         = { 1038 }
  controlledprovinces    = { 1038 }

  techapps               = { 1010 1020 13060 1160 6500 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 9
    free_market       = 8
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 1070001 } # �еѶ� �� �ڽ� �� Ÿ�� 
  headofgovernment       = { type = 9 id = 1070002 } # �еѶ� �� �ڽ� �� Ÿ�� 
  foreignminister        = { type = 9 id = 1070003 } # �еѶ� �� �ڽ� �� Ÿ�� 
  armamentminister       = { type = 9 id = 1070004 } # �еѶ� �� �ڽ� �� Ÿ�� 
  ministerofsecurity     = { type = 9 id = 1070005 } # �еѶ� �� �ڽ� �� Ÿ�� 
  ministerofintelligence = { type = 9 id = 1070006 } # �еѶ� �� �ڽ� �� Ÿ�� 
  chiefofstaff           = { type = 9 id = 1070007 } # �еѶ� �� �ڽ� �� Ÿ�� 
  chiefofarmy            = { type = 9 id = 1070008 } # �еѶ� �� �ڽ� �� Ÿ�� 
}