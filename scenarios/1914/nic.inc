##############################
# Country definition for NIC #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  puppet             = USA
  ai                 = "NIC_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2080 # 마나과 
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
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }

  nationalprovinces      = { 2080 2082 2084 2085 2086 2087 2088 2079 2081 2083 }
  ownedprovinces         = { 2080 2082 }
  controlledprovinces    = { 2080 2082 }

  techapps               = { 1160 1170 5700 6500 6510 1830 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 315081 } # 아돌포 디아스 
  headofgovernment       = { type = 9 id = 315076 } # 아돌포 디아스 
  foreignminister        = { type = 9 id = 315082 } # 바트롤로메 마르티네스 
  armamentminister       = { type = 9 id = 315083 } # 디에고 마누엘 볼라뇨스 
  ministerofsecurity     = { type = 9 id = 315087 } # 길버트 D. 헤트필드 
  ministerofintelligence = { type = 9 id = 315077 } # 에밀리아노 바르가스 
  chiefofstaff           = { type = 9 id = 315084 } # 에밀리아노 바르가스 
  chiefofarmy            = { type = 9 id = 315085 } # 에밀리아노 바르가스 
  chiefofnavy            = { type = 9 id = 315086 } # 에밀리아노 바르가스 

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "Ejercito de Nicaragua"
    location = 2080
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "1a Division de Infanteria"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }
}
