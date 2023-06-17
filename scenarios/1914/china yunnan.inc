##############################
# Country definition for CYN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CYN
  regular_id         = UCH
  puppet             = UCH
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1390 # Äï¹Ö 
  dissent            = 5
  extra_tc           = 10
  manpower           = 0
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }

  nationalprovinces      = { 1390 1413 1304 1302 1296 1297 1298 1293 1292 1389 1291 1384 1385 1386 1387 1388 1299 1300 1290 1294 }
  ownedprovinces         = { 1389 1390 1384 1385 1387 1386 1388 1291 1292 1293 1290 1294 }
  controlledprovinces    = { 1389 1390 1384 1385 1387 1386 1388 1291 1292 1293 1290 1294 }

  techapps               = { 1010 1020 13060 1160 6500 6510 }
  blueprints             = { 3110 3210 3410 3810 3720 3010 3120 8010 8020 8050 8060 8070 81300 5800 6530 1030 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 2
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 615100 } # ÅÁÁö¾ß¿À 
  headofgovernment       = { type = 9 id = 615101 } # ·±Ä¿Ã» 
  foreignminister        = { type = 9 id = 615102 } # ·îÁø±¤ 
  armamentminister       = { type = 9 id = 615103 } # ·±Ä¿Ã» 
  ministerofsecurity     = { type = 9 id = 615104 } # ÅÁÁö¾ß¿À 
  ministerofintelligence = { type = 9 id = 615105 } # ÅÁÁö¾ß¿À 
  chiefofstaff           = { type = 9 id = 615106 } # ÅÁÁö¾ß¿À 
  chiefofarmy            = { type = 9 id = 615120 } # ÅÁÁö¾ß¿À 
  chiefofnavy            = { type = 9 id = 615108 } # ·±Ä¿Ã» 
  chiefofair             = { type = 9 id = 615109 } # ÅÁÁö¾ß¿À 

  landunit = {
    id       = { type = 22003 id = 10170 }
    name     = "Kunming Ye Quan Jun"
    location = 1390
    division = {
      id             = { type = 22003 id = 10171 }
      name           = "1 YQ Division"
      type           = infantry
      model          = 2
      experience     = 10
    }
    division = {
      id             = { type = 22003 id = 10172 }
      name           = "2 YQ Division"
      type           = infantry
      model          = 1
      experience     = 10
    }
    division = {
      id             = { type = 22003 id = 10173 }
      name           = "3 YQ Division"
      type           = infantry
      model          = 1
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 22003 id = 10180 }
    name     = "Ya'an Ye Quan Jun"
    location = 1292
    division = {
      id             = { type = 22003 id = 10181 }
      name           = "4 YQ Division"
      type           = infantry
      model          = 2
      experience     = 10
    }
    division = {
      id             = { type = 22003 id = 10182 }
      name           = "5 YQ Division"
      type           = infantry
      model          = 1
      experience     = 10
    }
    division = {
      id             = { type = 22003 id = 10183 }
      name           = "6 YQ Division"
      type           = infantry
      model          = 1
      experience     = 10
    }
  }

  landdivision = { dormant = yes id = { type = 22003 id = 10001 } name = "Frontal Division"  type = infantry model = 3 experience = 20 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10002 } name = "Left Division"  type = infantry model = 3 experience = 20 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10003 } name = "Hind Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10004 } name = "Right Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10005 } name = "Middle Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10006 } name = "New Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10011 } name = "Hubei Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10021 } name = "Jiangsu Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10031 } name = "Shanghai Mingbin"  type = militia model = 0 experience = 40 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10041 } name = "Jiangxi Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10051 } name = "1st SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10052 } name = "2nd SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10053 } name = "3rd SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10054 } name = "4th SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10055 } name = "5th SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10056 } name = "6th SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10061 } name = "Zhejiang Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10071 } name = "Sichuan Lujun"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10081 } name = "Congqing Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10091 } name = "1 Shangdong Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10092 } name = "2 Shangdong Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10101 } name = "Fujian Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10111 } name = "Hunan Lujun"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10121 } name = "1 Dongbei Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10122 } name = "2 Dongbei Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10123 } name = "3 Dongbei Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10131 } name = "Guizhou Lujun"  type = infantry model = 2 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10141 } name = "Shanxi Mingbin"  type = militia model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10151 } name = "Shaanxi Mingbin"  type = militia model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10161 } name = "Henan Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10191 } name = "1 GX Division"  type = infantry model = 2 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10192 } name = "2 GX Division"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10193 } name = "3 GX Division"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10201 } name = "1 GD Division"  type = infantry model = 2 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10202 } name = "2 GD Division"  type = infantry model = 2 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10203 } name = "3 GD Division"  type = infantry model = 1 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10204 } name = "4 GD Division"  type = infantry model = 1 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10211 } name = "1 SM Guyongbin"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10212 } name = "2 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10213 } name = "3 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10221 } name = "4 SM Guyongbin"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10222 } name = "5 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10223 } name = "6 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10231 } name = "1 Yuangzhenjun"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22003 id = 10232 } name = "2 Yuangzhenjun"  type = militia model = 0 experience = 10 } 
}
