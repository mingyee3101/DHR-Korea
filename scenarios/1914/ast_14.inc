##############################
# Country definition for AST #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = AST
  puppet             = ENG
  ai                 = "AST_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1708 # 멜버른 
  manpower           = 7
  # Resource Reserves
  energy         = 1620
  metal          = 810
  rare_materials = 405
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 120
  escorts        = 1

  diplomacy = {
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = U08 value = 75 }
    relation = { tag = ITA value = -5 }
    relation = { tag = NEP value = 175 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 175 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "AST" NumberOfSpies = 6 }

  nationalprovinces      = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1718 1719 1720 1721 1722 1723 }
  ownedprovinces         = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1604 1606 1607 1608 1609 }
  controlledprovinces    = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1604 1606 1607 1608 1609 }

  techapps               = { 1010 1020 1030 13060 13070 2860 2290 1830 3010 3020 3030 3110 3120 3210 5810 5800 5310 54010 5600 5700 3810 6500 6510 6530 8010 8020 8040 8050 8060 8070 8100 8110 8150 8900 8910 27480 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 7
    free_market       = 8
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 225175 } # 로날드 먼로 퍼거슨 
  headofgovernment       = { type = 9 id = 225167 } # 조셉 쿡 
  foreignminister        = { type = 9 id = 225163 } # 패트릭 글린 
  armamentminister       = { type = 9 id = 225170 } # 존 포레스트 
  ministerofsecurity     = { type = 9 id = 225174 } # 조셉 쿡 
  ministerofintelligence = { type = 9 id = 225168 } # 해롤드 존스 
  chiefofstaff           = { type = 9 id = 225159 } # 고든 레그 
  chiefofarmy            = { type = 9 id = 225176 } # 월리엄 트로스비 브리지스 
  chiefofnavy            = { type = 9 id = 225157 } # W.R. 크레스웰 
  chiefofair             = { type = 9 id = 225177 } # 헨리 페트로 

  landunit = {
    id       = { type = 27111 id = 250 }
    name     = "Permanent Force"
    location = 1708
    division = {
      id             = { type = 27111 id = 251 }
      name           = "Permanent Force"
      type           = militia
      model          = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 27111 id = 253 }
    name     = "Australian Imperial Force"
    location = 1705
    division = {
      id             = { type = 27111 id = 254 }
      name           = "1st Australian Division"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 27111 id = 721 }
    name     = "Royal Australian Navy"
    location = 1705
    base     = 1705
    division = {
      id             = { type = 27111 id = 722 }
      name           = "HMAS Australia"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 27111 id = 723 }
      name           = "HMAS Sydney"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27111 id = 724 }
      name           = "HMAS Melbourne"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27111 id = 725 }
      name           = "HMAS Encounter"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27111 id = 726 }
      name           = "HMAS Pioneer"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 27111 id = 756 }
    name     = "Australian Transport Flotilla"
    location = 1705
    base     = 1705
    division = {
      id             = { type = 27111 id = 757 }
      name           = "1st Australian Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 27111 id = 758 }
      name           = "2nd Australian Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 27111 id = 759 }
      name           = "3rd Australian Transport Flotilla"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 27111 id = 950 }
    name     = "Melbourne Flotilla"
    location = 1708
    base     = 1708
    division = {
      id             = { type = 27111 id = 952 }
      name           = "Victorian and Tasmanian Flotilla"
      type           = destroyer
      model          = 0
    }
  }

  division_development = {
    id             = { type = 27111 id = 953 }
    name           = "HMAS Brisbane"
    type           = light_cruiser
    model          = 2
    cost           = 0.2
    date           = { year = 1916 month = october day = 29 }
  }
}
