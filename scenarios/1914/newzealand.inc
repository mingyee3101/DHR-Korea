##############################
# Country definition for NZL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NZL
  puppet             = ENG
  ai                 = "NZL_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1721 # À£¸µÅÏ 
  manpower           = 1
  # Resource Reserves
  energy         = 420
  metal          = 210
  rare_materials = 105
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 200
  escorts        = 15

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = U08 value = 25 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "NZL" NumberOfSpies = 2 }

  nationalprovinces      = { 1718 1719 1720 1721 1722 1723 }
  ownedprovinces         = { 1718 1719 1720 1721 1722 1723 1742 1741 1748 }
  controlledprovinces    = { 1718 1719 1720 1721 1722 1723 1742 1741 1748 }

  techapps               = { 1010 1020 1030 13060 13070 1910 1830 2290 3010 3020 3030 3110 3120 5700 6500 6510 6530 8010 8020 8040 8050 8060 8070 8080 8100 8110 8900 3810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 215107 } # ¾Æ¼­ ÆúÀëºê 
  headofgovernment       = { type = 9 id = 215128 } # William Massey
  ministerofsecurity     = { type = 9 id = 215129 } # Alexander Herdman
  chiefofnavy            = { type = 9 id = 215102 } # ÆÛ½Ã¹ú È¦ Åè½¼ 

  landunit = {
    id       = { type = 10600 id = 1 }
    name     = "New Zealand Military Forces"
    location = 1721
    division = {
      id             = { type = 10600 id = 2 }
      name           = "Permanent Force"
      type           = militia
      model          = 1
      strength       = 10
    }
  }

  navalunit = {
    id       = { type = 10600 id = 12 }
    name     = "HM New Zealand Navy"
    location = 1721
    base     = 1721
    division = {
      id             = { type = 10600 id = 14 }
      name           = "HMS Philomel"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 15 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 0
    }
  }
}
