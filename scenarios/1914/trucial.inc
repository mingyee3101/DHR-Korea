##############################
# Country definition for U53 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U53
  puppet             = ENG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1039 # �ƺ� �ٺ� 
  manpower           = 5
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10
  SpyInfo                = { country = "U53" NumberOfSpies = 1 }

  nationalprovinces      = { 1039 1043 }
  ownedprovinces         = { 1039 }
  controlledprovinces    = { 1039 }

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
  headofstate            = { type = 9 id = 1080001 } # �Ե� �� �ڿ��� �� ���� 
  headofgovernment       = { type = 9 id = 1080002 } # �Ե� �� �ڿ��� �� ���� 
  foreignminister        = { type = 9 id = 1080003 } # �Ե� �� �ڿ��� �� ���� 
  armamentminister       = { type = 9 id = 1080004 } # �Ե� �� �ڿ��� �� ���� 
  ministerofsecurity     = { type = 9 id = 1080005 } # �Ե� �� �ڿ��� �� ���� 
  ministerofintelligence = { type = 9 id = 1080006 } # �Ե� �� �ڿ��� �� ���� 
  chiefofstaff           = { type = 9 id = 1080013 } # �۽� �۽� 
  chiefofarmy            = { type = 9 id = 1080014 } # �۽� �۽� 
  chiefofnavy            = { type = 9 id = 1080015 } # �۽� �۽� 
}