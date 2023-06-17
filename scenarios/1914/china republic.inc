##############################
# Country definition for UCH #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = UCH
  ai                 = "UCH_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 1247 # º£ÀÌÂ¡ 
  dissent            = 10
  manpower           = 200
  # Resource Reserves
  energy         = 4860
  metal          = 2430
  rare_materials = 1215
  oil            = 1000
  supplies       = 1000
  money          = 10
  transports     = 110
  escorts        = 2

  diplomacy = {
    relation = { tag = JAP value = -25 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = U08 value = 25 }
    relation = { tag = RUS value = -25 }
    relation = { tag = U09 value = 25 }
    relation = { tag = U02 value = 50 }
    relation = { tag = TIB value = -25 }
    relation = { tag = MON value = -25 }
    relation = { tag = AST value = 25 }
    relation = { tag = USA value = 25 }
    relation = { tag = SIA value = 25 }
    relation = { tag = U03 value = 10 }
    relation = { tag = ITA value = 10 }
    relation = { tag = BHU value = 15 }
    relation = { tag = NEP value = 15 }
    relation = { tag = HOL value = 15 }
    relation = { tag = AFG value = 15 }
  }
  SpyInfo                = { country = "UCH" NumberOfSpies = 2 }

  nationalprovinces      = { 1333 1261 1303 1339 1323 1321 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1258 1262 1257 1296 1292 1293 1297 1298 1305 1306 1291 1313 1307 1308 1356 1349 1335 1314 1315 1267 1320 1299 1343 1300 1301 1350 1351 1352 1389 1390 1384 1385 1386 1387 1388 1378 1365 1376 1377 1375 1380 1381 1382 1383 1369 1370 1373 1379 1367 1374 1368 1241 1247 1246 1251 1242 1254 1332 1252 1253 1248 1249 1250 1327 1243 1244 1245 1329 1330 1328 1331 1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 1236 1201 1208 1209 1210 1211 1214 1215 1216 1235 1217 1197 1198 1269 1268 1270 1271 1264 1263 1272 1265 1266 1283 1284 1285 1294 1290 1286 1287 1288 1289 1295 1273 1279 1280 1281 1277 1274 1275 1282 1276 1278 1259 1260 1255 1256 1219 1238 1240 1239 1371 1372 1361 1362 1363 1364 1120 1124 1125 1123 1121 1122 1414 1458 1413 1455 }
  ownedprovinces         = { 1356 1333 1261 1303 1339 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1308 1349 1335 1314 1315 1267 1320 1299 1343 1300 1301 1350 1351 1352 1321 1323 1259 1260 1255 1241 1247 1246 1251 1242 1254 1332 1252 1253 1248 1249 1250 1327 1243 1244 1245 1329 1330 1263 1256 1238 1240 1239 1258 1257 1216 1235 1236 1237 1209 1213 1210 1218 }
  controlledprovinces    = { 1356 1333 1261 1303 1339 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1308 1349 1335 1314 1315 1267 1320 1299 1343 1300 1301 1350 1351 1352 1321 1323 1259 1260 1255 1241 1247 1246 1251 1242 1254 1332 1252 1253 1248 1249 1250 1327 1243 1244 1245 1329 1330 1263 1256 1238 1240 1239 1258 1257 }
  claimedprovinces       = { 1563 1562 1564 }

  techapps               = { 1010 1020 1030 13060 13070 1160 5800 3110 3210 3410 3810 3720 6500 6510 8010 8020 8050 8060 8070 81300 }
  blueprints             = { 3010 3120 6530 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 3
    free_market       = 9
    professional_army = 4
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 1325100 } # À§¾È½ºÄ«ÀÌ 
  headofgovernment       = { type = 9 id = 1325101 } # ½¹½Ã¸µ 
  foreignminister        = { type = 9 id = 1325102 } # ¼ø¹Ù¿ÀÄ¡ 
  armamentminister       = { type = 9 id = 1325103 } # ½¹½Ã¸µ 
  ministerofsecurity     = { type = 9 id = 1325105 } # ÁÖÄ¡Ã¾ 
  ministerofintelligence = { type = 9 id = 1325104 } # Àú¿ìÂêÄ¡ 
  chiefofstaff           = { type = 9 id = 1325106 } # µÃÄ¡·çÀÌ 
  chiefofarmy            = { type = 9 id = 1325107 } # µÃÄ¡·çÀÌ 
  chiefofnavy            = { type = 9 id = 1325108 } # ·ù±¤½¹ 
  chiefofair             = { type = 9 id = 1325109 } # µÃÄ¡·çÀÌ 
  dormant_leaders        = { 50368 55375 }

  landunit = {
    id       = { type = 22000 id = 10000 }
    name     = "Wu-wei Jun"
    location = 1247
    division = {
      id             = { type = 22000 id = 10001 }
      name           = "Frontal Division"
      type           = infantry
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 10002 }
      name           = "Left Division"
      type           = infantry
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 10003 }
      name           = "Hind Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10004 }
      name           = "Right Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10005 }
      name           = "Middle Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10006 }
      name           = "New Division"
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 22000 id = 10010 }
    name     = "Hubei Huai-jun"
    location = 1317
    division = {
      id             = { type = 22000 id = 10011 }
      name           = "Hubei Lujun"
      type           = infantry
      model          = 1
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10020 }
    name     = "Jiangsu Huai-jun"
    location = 1337
    division = {
      id             = { type = 22000 id = 10021 }
      name           = "Jiangsu Lujun"
      type           = infantry
      model          = 1
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10030 }
    name     = "Shanghai Mingzhongjituan"
    location = 1338
    division = {
      id             = { type = 22000 id = 10031 }
      name           = "Shanghai Mingbin"
      type           = militia
      model          = 0
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10040 }
    name     = "Jiangxi Difangjun"
    location = 1352
    division = {
      id             = { type = 22000 id = 10041 }
      name           = "Jiangxi Lujun"
      type           = infantry
      model          = 1
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10050 }
    name     = "Second Corps"
    location = 1340
    division = {
      id             = { type = 22000 id = 10051 }
      name           = "1st SC Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10052 }
      name           = "2nd SC Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10053 }
      name           = "3rd SC Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10054 }
      name           = "4th SC Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10055 }
      name           = "5th SC Division"
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 10056 }
      name           = "6th SC Division"
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 22000 id = 10060 }
    name     = "Zhejiang Difangjun"
    location = 1345
    division = {
      id             = { type = 22000 id = 10061 }
      name           = "Zhejiang Lujun"
      type           = infantry
      model          = 1
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10070 }
    name     = "Sichuan Difangjun"
    location = 1297
    division = {
      id             = { type = 22000 id = 10071 }
      name           = "Sichuan Lujun"
      type           = infantry
      model          = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10080 }
    name     = "Chongqing Mingzhongjituan"
    location = 1299
    division = {
      id             = { type = 22000 id = 10081 }
      name           = "Congqing Mingbin"
      type           = militia
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10090 }
    name     = "Shandong Renmingjun"
    location = 1330
    division = {
      id             = { type = 22000 id = 10091 }
      name           = "1 Shangdong Mingbin"
      type           = militia
      model          = 0
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 10092 }
      name           = "2 Shangdong Mingbin"
      type           = militia
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10100 }
    name     = "Fujian Difangjun"
    location = 1360
    division = {
      id             = { type = 22000 id = 10101 }
      name           = "Fujian Mingbin"
      type           = militia
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10110 }
    name     = "Hunan Difangjun"
    location = 1308
    division = {
      id             = { type = 22000 id = 10111 }
      name           = "Hunan Lujun"
      type           = infantry
      model          = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10120 }
    name     = "Dongbei Difangjun"
    location = 1199
    division = {
      id             = { type = 22000 id = 10121 }
      name           = "1 Dongbei Lujun"
      type           = infantry
      model          = 1
      experience     = 5
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 10122 }
      name           = "2 Dongbei Lujun"
      type           = infantry
      model          = 1
      experience     = 5
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 10123 }
      name           = "3 Dongbei Lujun"
      type           = infantry
      model          = 1
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10130 }
    name     = "Guizhou Difangjun"
    location = 1305
    division = {
      id             = { type = 22000 id = 10131 }
      name           = "Guizhou Lujun"
      type           = infantry
      model          = 2
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10140 }
    name     = "Shanxi Mingzhongjituan"
    location = 1252
    division = {
      id             = { type = 22000 id = 10141 }
      name           = "Shanxi Mingbin"
      type           = militia
      model          = 1
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10150 }
    name     = "Shaanxi Mingzhongjituan"
    location = 1258
    division = {
      id             = { type = 22000 id = 10151 }
      name           = "Shaanxi Mingbin"
      type           = militia
      model          = 1
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 10160 }
    name     = "Henan Difangjun"
    location = 1322
    division = {
      id             = { type = 22000 id = 10161 }
      name           = "Henan Lujun"
      type           = infantry
      model          = 1
      experience     = 5
      locked         = yes
    }
  }

  landdivision = { dormant = yes id = { type = 22000 id = 10171 } name = "1 YQ Division"  type = infantry model = 2 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10172 } name = "2 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10173 } name = "3 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10181 } name = "4 YQ Division"  type = infantry model = 2 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10182 } name = "5 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10183 } name = "6 YQ Division"  type = infantry model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10191 } name = "1 GX Division"  type = infantry model = 2 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10192 } name = "2 GX Division"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10193 } name = "3 GX Division"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10201 } name = "1 GD Division"  type = infantry model = 2 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10202 } name = "2 GD Division"  type = infantry model = 2 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10203 } name = "3 GD Division"  type = infantry model = 1 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10204 } name = "4 GD Division"  type = infantry model = 1 experience = 30 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10211 } name = "1 SM Guyongbin"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10212 } name = "2 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10213 } name = "3 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10221 } name = "4 SM Guyongbin"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10222 } name = "5 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10223 } name = "6 SM Guyongbin"  type = militia model = 0 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10231 } name = "1 Yuangzhenjun"  type = militia model = 1 experience = 10 } 
  landdivision = { dormant = yes id = { type = 22000 id = 10232 } name = "2 Yuangzhenjun"  type = militia model = 0 experience = 10 } 
}
