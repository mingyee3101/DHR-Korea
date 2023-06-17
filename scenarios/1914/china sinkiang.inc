##############################
# Country definition for SIK #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SIK
  regular_id         = UCH
  puppet             = UCH
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1281 # 우루무치 
  dissent            = 25
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 5000
  supplies       = 2000
  money          = 10
  SpyInfo                = { country = "SIK" NumberOfSpies = 1 }

  nationalprovinces      = { 1273 1278 1279 1280 1281 1277 1274 1275 1276 1282 }
  ownedprovinces         = { 1273 1279 1280 1281 1277 1274 1275 1282 1276 }
  controlledprovinces    = { 1273 1279 1280 1281 1277 1274 1275 1282 1276 }

  techapps               = { 1010 1020 13060 13070 1160 1170 6500 6510 }
  blueprints             = { 13080 1030 8010 8020 8050 8060 8070 81300 3110 3210 3410 3810 3720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 3
    free_market       = 9
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }

  landunit = {
    id       = { type = 22004 id = 10230 }
    name     = "Xinjiang Yuangzhenjun"
    location = 1281
    division = {
      id             = { type = 22004 id = 10231 }
      name           = "1 Yuangzhenjun"
      type           = militia
      model          = 1
      experience     = 10
    }
    division = {
      id             = { type = 22004 id = 10232 }
      name           = "2 Yuangzhenjun"
      type           = militia
      model          = 0
      experience     = 10
    }
  }

  landdivision = { dormant = yes id = { type = 22004 id = 10001 } name = "Frontal Division"  type = infantry model = 3 experience = 20 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10002 } name = "Left Division"  type = infantry model = 3 experience = 20 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10003 } name = "Hind Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10004 } name = "Right Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10005 } name = "Middle Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10006 } name = "New Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10011 } name = "Hubei Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10021 } name = "Jiangsu Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10031 } name = "Shanghai Mingbin"  type = militia model = 0 experience = 40 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10041 } name = "Jiangxi Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10051 } name = "1st SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10052 } name = "2nd SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10053 } name = "3rd SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10054 } name = "4th SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10055 } name = "5th SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10056 } name = "6th SC Division"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10061 } name = "Zhejiang Lujun"  type = infantry model = 1 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10071 } name = "Sichuan Lujun"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10081 } name = "Congqing Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10091 } name = "1 Shangdong Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10092 } name = "2 Shangdong Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10101 } name = "Fujian Mingbin"  type = militia model = 0 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10111 } name = "Hunan Lujun"  type = infantry model = 2 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10121 } name = "1 Dongbei Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10122 } name = "2 Dongbei Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10123 } name = "3 Dongbei Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10131 } name = "Guizhou Lujun"  type = infantry model = 2 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10141 } name = "Shanxi Mingbin"  type = militia model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10151 } name = "Shaanxi Mingbin"  type = militia model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10161 } name = "Henan Lujun"  type = infantry model = 1 experience = 5 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10171 } name = "1 YQ Division"  type = infantry model = 2 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10172 } name = "2 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10173 } name = "3 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10181 } name = "4 YQ Division"  type = infantry model = 2 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10182 } name = "5 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10183 } name = "6 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10191 } name = "1 GX Division"  type = infantry model = 2 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10192 } name = "2 GX Division"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10193 } name = "3 GX Division"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10201 } name = "1 GD Division"  type = infantry model = 2 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10202 } name = "2 GD Division"  type = infantry model = 2 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10203 } name = "3 GD Division"  type = infantry model = 1 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10204 } name = "4 GD Division"  type = infantry model = 1 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10211 } name = "1 SM Guyongbin"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10212 } name = "2 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10213 } name = "3 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10221 } name = "4 SM Guyongbin"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10222 } name = "5 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22004 id = 10223 } name = "6 SM Guyongbin"  type = militia model = 0 experience = 10 } 
}
