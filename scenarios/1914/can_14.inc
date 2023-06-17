##############################
# Country definition for CAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CAN
  puppet             = ENG
  flag_ext           = _14
  ai                 = "CAN_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2108 # 오타와 
  manpower           = 13
  # Resource Reserves
  energy         = 2460
  metal          = 1230
  rare_materials = 615
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 110
  escorts        = 1

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = HOL value = 80 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 150 }
    relation = { tag = YEM value = 150 }
    relation = { tag = U08 value = -10 }
  }
  SpyInfo                = { country = "CAN" NumberOfSpies = 6 }

  nationalprovinces      = { 2089 2092 2090 2093 2095 2103 2104 2105 2102 2099 2091 2096 2097 2098 2094 2100 2101 2106 2107 2115 2108 2109 2129 2113 2114 2148 2149 2112 2127 2130 2111 2116 2123 2122 2121 2120 2125 2124 2117 2118 2119 2128 2135 2136 2137 2138 2132 2131 2134 2126 2133 }
  ownedprovinces         = { 2090 2089 2092 2105 2102 2099 2093 2091 2095 2094 2096 2103 2104 2101 2100 2097 2098 2107 2115 2106 2110 2129 2113 2114 2148 2149 2112 2127 2130 2108 2111 2109 2119 2117 2116 2123 2122 2121 2120 2125 2124 2128 2132 2131 2134 2126 2133 2118 }
  controlledprovinces    = { 2090 2089 2092 2105 2102 2099 2093 2091 2095 2094 2096 2103 2104 2101 2100 2097 2098 2107 2115 2106 2110 2129 2113 2114 2148 2149 2112 2127 2130 2108 2111 2109 2119 2117 2116 2123 2122 2121 2120 2125 2124 2128 2132 2131 2134 2126 2133 2118 }

  techapps               = { 1010 1020 1030 13060 13070 14000 1830 2290 5600 3010 3020 3110 5700 3810 6500 6510 6530 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 8
    free_market       = 10
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 220165 } # 아서 알버트 윈저 
  headofgovernment       = { type = 9 id = 220160 } # 로버트 레어드 보든 
  foreignminister        = { type = 9 id = 220181 } # 루이 코데르 
  armamentminister       = { type = 9 id = 220172 } # 월리엄 화이트 
  ministerofsecurity     = { type = 9 id = 220179 } # 윌리엄 로슈 
  chiefofstaff           = { type = 9 id = 220180 } # 윌러비 구왓킨 
  chiefofarmy            = { type = 9 id = 220141 } # 윌러비 구왓킨 
  chiefofnavy            = { type = 9 id = 220145 } # 찰스 킹스밀 

  landunit = {
    id       = { type = 20000 id = 1 }
    name     = "Canadian Army"
    location = 2108
    division = {
      id             = { type = 20000 id = 2 }
      name           = "Permanent Force"
      type           = militia
      model          = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 20000 id = 3 }
    name     = "Canadian Expeditionary Force"
    location = 2108
    division = {
      id             = { type = 20000 id = 4 }
      name           = "1st Canadian Infantry Div."
      type           = infantry
      model          = 2
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 20000 id = 500 }
    name     = "Canadian Transport Fleet"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20000 id = 501 }
      name           = "1st Canadian Transport Squadron"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 20000 id = 502 }
      name           = "2nd Canadian Transport Squadron"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 20000 id = 7 }
    name     = "Royal Canadian Navy"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20000 id = 721 }
      name           = "HMCS Rainbow"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 20000 id = 720 }
      name           = "HMCS Niobe"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 20000 id = 8 }
      name           = "Destroyer Flotilla 1"
      type           = destroyer
      model          = 0
      strength       = 100
    }
  }
}
