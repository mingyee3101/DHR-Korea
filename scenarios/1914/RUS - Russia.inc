##############################
# Country definition for RUS #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = RUS
  ai                 = "RUS_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 553 # 페트로그라드 
  dissent            = 15
  manpower           = 20
  # Resource Reserves
  energy         = 15060
  metal          = 7530
  rare_materials = 3765
  oil            = 500
  supplies       = 500
  money          = 30
  transports     = 255
  escorts        = 20

  diplomacy = {
    relation = { tag = SER value = 150 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 185 }
    relation = { tag = U08 value = -150 }
    relation = { tag = U09 value = -150 }
    relation = { tag = USA value = -50 }
    relation = { tag = SWE value = -100 }
    relation = { tag = ITA value = 25 }
    relation = { tag = BUL value = 75 }
    relation = { tag = JAP value = -25 }
    relation = { tag = PER value = -100 }
    relation = { tag = OTT value = -125 }
    relation = { tag = PER value = 0 access = yes }
  }
  SpyInfo                = { country = "RUS" NumberOfSpies = 10 }

  nationalprovinces      = { 1191 1193 1192 1196 1195 1190 1187 1188 1175 1174 1541 1189 1176 1180 1181 1182 1183 1184 1194 1179 1178 1168 1177 1169 1164 1163 1162 1167 1166 1186 1165 1150 1154 507 505 498 1153 1152 1145 1146 1147 1158 1156 1157 1144 1143 1129 1142 1140 1148 685 1155 544 546 545 568 615 625 564 621 588 584 500 1138 1139 583 1136 1135 1111 1110 504 1112 1102 1101 1118 502 501 1151 1130 1137 598 1132 1131 1133 1115 1116 503 1117 1114 1113 690 699 632 592 687 689 688 542 686 681 543 547 538 539 537 536 534 535 706 702 704 703 709 708 710 701 696 695 694 691 692 697 698 700 645 659 662 661 660 666 639 1134 665 669 658 668 637 641 640 670 667 675 674 672 664 671 673 684 663 693 618 655 642 651 650 656 638 578 683 682 679 571 680 678 677 676 548 556 554 569 572 570 585 574 540 541 559 561 551 557 549 553 550 552 560 566 599 595 616 611 612 619 620 626 622 624 623 627 628 613 617 608 609 600 596 607 597 601 586 581 587 582 579 657 654 604 580 652 630 631 634 635 636 603 602 647 646 644 643 614 633 649 653 648 1097 1098 1105 1104 1099 1103 1106 1109 1108 1107 567 573 565 590 591 589 594 605 606 610 629 575 577 562 558 563 707 1185 506 1100 711 712 713 1149 1141 499 593 1542 714 576 555 705 270 271 272 273 274 275 264 265 266 267 268 269 259 262 260 244 247 245 255 257 251 248 258 249 256 253 1119 1126 1127 1128 1069 1070 1161 1170 1171 }
  ownedprovinces         = { 1191 1193 1192 1196 1195 1190 1187 1188 1175 1174 1541 1189 1176 1180 1181 1182 1183 1184 1194 1179 1178 1168 1177 1169 1164 1163 1162 1167 1166 1186 1165 1150 1154 507 505 498 1153 1152 1145 1146 1147 1158 1156 1157 1144 1143 1129 1142 1140 1148 685 1155 544 546 545 568 615 625 564 621 588 584 500 1138 1139 583 1136 1135 1111 1110 504 1112 1102 1101 1118 502 501 1151 1130 1137 598 1132 1131 1133 1115 1116 503 1117 1114 1113 690 699 632 592 687 689 688 542 686 681 543 547 538 539 537 536 534 535 706 702 704 703 709 708 710 701 696 695 694 691 692 697 698 700 645 659 662 661 660 666 639 1134 665 669 658 668 637 641 640 670 667 675 674 672 664 671 673 684 663 693 618 655 642 651 650 656 638 578 683 682 679 571 680 678 677 676 548 556 554 569 572 570 585 574 540 541 559 561 551 557 549 553 550 552 560 566 599 595 616 611 612 619 620 626 622 624 623 627 628 613 617 608 609 600 596 607 597 601 586 581 587 582 579 657 654 604 580 652 630 631 634 635 636 603 602 647 646 644 643 614 633 649 653 648 1097 1098 1105 1104 1099 1103 1106 1109 1108 1107 567 573 565 590 591 589 594 605 606 610 629 575 577 562 558 563 707 1185 506 1100 711 712 713 1149 1141 499 593 714 576 555 705 270 271 272 273 274 275 264 265 266 267 268 269 259 262 263 260 233 223 234 230 232 243 244 247 228 254 245 229 252 255 257 227 251 231 248 258 250 246 249 256 253 526 524 525 518 519 521 527 520 516 515 513 511 512 517 523 529 522 528 531 532 533 530 514 1119 386 302 303 304 305 306 1126 1127 1128 1069 1070 1161 1170 1171 }
  controlledprovinces    = { 1191 1193 1192 1196 1195 1190 1187 1188 1175 1174 1541 1189 1176 1180 1181 1182 1183 1184 1194 1179 1178 1168 1177 1169 1164 1163 1162 1167 1166 1186 1165 1150 1154 507 505 498 1153 1152 1145 1146 1147 1158 1156 1157 1144 1143 1129 1142 1140 1148 685 1155 544 546 545 568 615 625 564 621 588 584 500 1138 1139 583 1136 1135 1111 1110 504 1112 1102 1101 1118 502 501 1151 1130 1137 598 1132 1131 1133 1115 1116 503 1117 1114 1113 690 699 632 592 687 689 688 542 686 681 543 547 538 539 537 536 534 535 706 702 704 703 709 708 710 701 696 695 694 691 692 697 698 700 645 659 662 661 660 666 639 1134 665 669 658 668 637 641 640 670 667 675 674 672 664 671 673 684 663 693 618 655 642 651 650 656 638 578 683 682 679 571 680 678 677 676 548 556 554 569 572 570 585 574 540 541 559 561 551 557 549 553 550 552 560 566 599 595 616 611 612 619 620 626 622 624 623 627 628 613 617 608 609 600 596 607 597 601 586 581 587 582 579 657 654 604 580 652 630 631 634 635 636 603 602 647 646 644 643 614 633 649 653 648 1097 1098 1105 1104 1099 1103 1106 1109 1108 1107 567 573 565 590 591 589 594 605 606 610 629 575 577 562 558 563 707 1185 506 1100 711 712 713 1149 1141 499 593 714 576 555 705 270 271 272 273 274 275 264 265 266 267 268 269 259 262 263 260 233 223 234 230 232 243 244 247 228 254 245 229 252 255 257 227 251 231 248 258 250 246 249 256 253 526 524 525 518 519 521 527 520 516 515 513 511 512 517 523 529 522 528 531 532 533 530 514 1119 386 302 303 304 305 306 1126 1127 1128 1069 1070 1161 1170 1171 }
  claimedprovinces       = { 409 230 231 227 223 233 234 243 246 228 232 229 250 254 512 513 511 526 524 525 518 519 521 527 520 516 515 523 529 522 528 531 532 533 530 514 517 252 263 386 1067 1063 302 303 304 305 306 237 235 236 239 242 240 241 238 300 }

  techapps               = { 1010 1020 1030 1160 1170 1180 13060 13070 13080 1830 1910 2860 2290 3010 3020 3030 3110 3120 3210 3220 3230 3310 3320 3330 3410 3420 3430 3440 3610 3620 3810 3720 4500 4600 4610 4800 5600 5700 5800 5080 6500 6510 6530 8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8510 8900 8910 27480 27490 27500 27510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 4
    free_market       = 5
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 7
  }
  headofstate            = { type = 9 id = 515096 } # 니콜라이 2세 
  headofgovernment       = { type = 9 id = 515106 } # 이반 고레미킨 
  foreignminister        = { type = 9 id = 515116 } # 세르게이 사조노프 
  armamentminister       = { type = 9 id = 515123 } # 표트르 바르크 
  ministerofsecurity     = { type = 9 id = 515146 } # 니콜라이 마클라코프 
  ministerofintelligence = { type = 9 id = 515157 } # 니콜라이 몬케비츠 
  chiefofstaff           = { type = 9 id = 515170 } # 니콜라이 야누시케비치 
  chiefofarmy            = { type = 9 id = 515179 } # 니콜라이 로마노프 
  chiefofnavy            = { type = 9 id = 515189 } # 알렉산드르 루신 
  chiefofair             = { type = 9 id = 515193 } # 알렉산드르 미하일로비치 

  landunit = {
    id       = { type = 10848 id = 1 }
    name     = "Gvardeyskiy Korpus"
    location = 553
    leader   = 515619
    division = {
      id             = { type = 10848 id = 8 }
      name           = "Imperatorskaya Glavnaya Kvartira"
      type           = hq
      model          = 0
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 2 }
      name           = "1-ya Gvardeyskaya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 3 }
      name           = "2-ya Gvardeyskaya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 4 }
      name           = "Gvardeyskaya Strelkovaya Brigada"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 5 }
      name           = "1-ya Gvardeyskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 6 }
      name           = "2-ya Gvardeyskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 9 }
    name     = "1-y Armeyskiy Korpus"
    location = 553
    leader   = 515210
    division = {
      id             = { type = 10848 id = 10 }
      name           = "22-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 11 }
      name           = "24-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 12 }
    name     = "18-y Armeyskiy Korpus"
    location = 553
    leader   = 516797
    division = {
      id             = { type = 10848 id = 13 }
      name           = "23-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 14 }
      name           = "37-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 15 }
      name           = "50-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 16 }
    name     = "22-y Armeyskiy Korpus"
    location = 525
    leader   = 516773
    division = {
      id             = { type = 10848 id = 17 }
      name           = "1-ya Finlandskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 18 }
      name           = "2-ya Finlandskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 19 }
      name           = "3-ya Finlandskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 10848 id = 22 }
    name     = "2-y Armeyskiy Korpus"
    location = 255
    leader   = 516429
    division = {
      id             = { type = 10848 id = 23 }
      name           = "26-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 24 }
      name           = "43-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 25 }
      name           = "2-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 26 }
    name     = "3-y Armeyskiy Korpus"
    location = 258
    leader   = 516860
    division = {
      id             = { type = 10848 id = 27 }
      name           = "25-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 28 }
      name           = "27-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 29 }
      name           = "3-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 30 }
      name           = "5-ya Strelkovaya Brigada"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 10848 id = 31 }
    name     = "4-y Armeyskiy Korpus"
    location = 599
    leader   = 515182
    division = {
      id             = { type = 10848 id = 32 }
      name           = "30-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 33 }
      name           = "40-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 34 }
    name     = "20-y Armeyskiy Korpus"
    location = 264
    leader   = 516537
    division = {
      id             = { type = 10848 id = 35 }
      name           = "28-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra1         = artillery
      extra2         = engineer
      brigade_model1 = 1
      brigade_model2 = 0
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 36 }
      name           = "29-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 38 }
    name     = "6-y Armeiskiy Korpus"
    location = 250
    leader   = 515307
    division = {
      id             = { type = 10848 id = 39 }
      name           = "4-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 40 }
      name           = "16-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 41 }
      name           = "4-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 42 }
    name     = "14-y Armeyskiy Korpus"
    location = 243
    leader   = 516762
    division = {
      id             = { type = 10848 id = 43 }
      name           = "18-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 44 }
      name           = "1-ya Strelkovaya Brigada"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 45 }
      name           = "2-ya Strelkovaya Brigada"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 46 }
      name           = "13-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 47 }
      name           = "14-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 48 }
    name     = "15-y Armeyskiy Korpus"
    location = 232
    leader   = 516010
    division = {
      id             = { type = 10848 id = 49 }
      name           = "6-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 50 }
      name           = "8-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 51 }
      name           = "6-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 52 }
      name           = "15-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 53 }
    name     = "19-y Armeyskiy Korpus"
    location = 247
    leader   = 515596
    division = {
      id             = { type = 10848 id = 54 }
      name           = "17-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 55 }
      name           = "38-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 56 }
      name           = "7-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 206 }
      name           = "1-ya Donskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 1
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 57 }
    name     = "23-y Armeyskiy Korpus"
    location = 232
    leader   = 515405
    division = {
      id             = { type = 10848 id = 58 }
      name           = "3-ya Gvardeyskaya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 59 }
      name           = "2-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 61 }
    name     = "9-y Armeyskiy Korpus"
    location = 617
    leader   = 516463
    division = {
      id             = { type = 10848 id = 62 }
      name           = "5-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 63 }
      name           = "42-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 64 }
      name           = "9-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 65 }
    name     = "10-y Armeyskiy Korpus"
    location = 636
    leader   = 516817
    division = {
      id             = { type = 10848 id = 66 }
      name           = "9-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 67 }
      name           = "31-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 68 }
      name           = "10-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 69 }
    name     = "11-y Armeyskiy Korpus"
    location = 244
    leader   = 516404
    division = {
      id             = { type = 10848 id = 70 }
      name           = "11-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 71 }
      name           = "32-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 72 }
      name           = "11-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 73 }
    name     = "12-y Armeyskiy Korpus"
    location = 612
    leader   = 515338
    division = {
      id             = { type = 10848 id = 74 }
      name           = "12-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 75 }
      name           = "19-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 76 }
      name           = "12-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 77 }
      name           = "2-ya Kazach'ya Svodnaya Diviziya"
      type           = cavalry
      model          = 1
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 78 }
      name           = "3-ya Strelkovaya Brigada"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 10848 id = 79 }
    name     = "21-y Armeyskiy Korpus"
    location = 617
    leader   = 516518
    division = {
      id             = { type = 10848 id = 80 }
      name           = "33-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = engineer
      brigade_model  = 0
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 81 }
      name           = "44-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 83 }
    name     = "7-y Armeyskiy Korpus"
    location = 638
    leader   = 515480
    division = {
      id             = { type = 10848 id = 84 }
      name           = "13-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 85 }
      name           = "34-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 87 }
    name     = "8-y Armeyskiy Korpus"
    location = 626
    leader   = 516328
    division = {
      id             = { type = 10848 id = 88 }
      name           = "14-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 89 }
      name           = "15-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 90 }
      name           = "8-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 91 }
      name           = "4-ya Strelkovaya Brigada"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 10848 id = 92 }
    name     = "Grenaderskiy Korpus"
    location = 572
    leader   = 516090
    division = {
      id             = { type = 10848 id = 93 }
      name           = "1-ya Grenaderskaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 94 }
      name           = "2-ya Grenaderskaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 95 }
      name           = "1-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 219 }
      name           = "54-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 96 }
    name     = "5-y Armeyskiy Korpus"
    location = 654
    leader   = 515946
    division = {
      id             = { type = 10848 id = 97 }
      name           = "7-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 98 }
      name           = "10-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 100 }
    name     = "13-y Armeyskiy Korpus"
    location = 589
    leader   = 515175
    division = {
      id             = { type = 10848 id = 101 }
      name           = "1-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 102 }
      name           = "36-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 104 }
    name     = "17-y Armeyskiy Korpus"
    location = 572
    leader   = 516850
    division = {
      id             = { type = 10848 id = 105 }
      name           = "3-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 106 }
      name           = "35-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 107 }
    name     = "25-y Armeyskiy Korpus"
    location = 572
    leader   = 516922
    division = {
      id             = { type = 10848 id = 108 }
      name           = "3-ya Grenaderskaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 109 }
      name           = "46-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 110 }
    name     = "16-y Armeyskiy Korpus"
    location = 672
    leader   = 515554
    division = {
      id             = { type = 10848 id = 111 }
      name           = "41-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 112 }
      name           = "45-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 113 }
      name           = "47-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 114 }
      name           = "5-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 2
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 115 }
    name     = "24-y Armeyskiy Korpus"
    location = 668
    leader   = 515395
    division = {
      id             = { type = 10848 id = 116 }
      name           = "48-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 117 }
      name           = "49-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 118 }
    name     = "1-y Kavkazskiy Korpus"
    location = 711
    leader   = 515291
    division = {
      id             = { type = 10848 id = 119 }
      name           = "20-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 120 }
      name           = "39-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 121 }
      name           = "1-ya Kavkazskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 1
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 122 }
      name           = "1-ya Kavkazskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 216 }
      name           = "4-ya Kavkazskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 123 }
    name     = "2-y Kavkazskii Korpus"
    location = 709
    leader   = 516042
    division = {
      id             = { type = 10848 id = 124 }
      name           = "Kavkazskaya Grenaderskaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 125 }
      name           = "51-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 126 }
      name           = "2-ya Kavkazskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 127 }
      name           = "Kavkazskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 1
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 128 }
      name           = "2-ya Kavkazskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 1
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 217 }
      name           = "5-ya Kavkazskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 129 }
    name     = "3-y Kavkazskii Korpus"
    location = 703
    leader   = 516792
    division = {
      id             = { type = 10848 id = 130 }
      name           = "21-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 131 }
      name           = "52-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 2
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 132 }
      name           = "3-ya Kavkazskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 1
      strength       = 80
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 212 }
      name           = "66-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 218 }
      name           = "Kavkazskaya Reyternaya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 133 }
    name     = "1-y Turkestanskiy Korpus"
    location = 1103
    leader   = 515927
    division = {
      id             = { type = 10848 id = 134 }
      name           = "1-ya Turkestanskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 135 }
      name           = "2-ya Turkestanskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 136 }
      name           = "3-ya Turkestanskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 137 }
      name           = "1 Turkestanskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 1
      strength       = 80
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 138 }
    name     = "2-y Turkestanskiy Korpus"
    location = 1097
    leader   = 516307
    division = {
      id             = { type = 10848 id = 139 }
      name           = "4-ya Turkestanskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 10848 id = 140 }
      name           = "5-ya Turkestanskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 10848 id = 142 }
    name     = "Omskii Voennyi Okrug"
    location = 1138
    leader   = 516434
    division = {
      id             = { type = 10848 id = 143 }
      name           = "11-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 215 }
      name           = "14-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 144 }
    name     = "2-y Sibirskiy Korpus"
    location = 1169
    leader   = 516610
    division = {
      id             = { type = 10848 id = 145 }
      name           = "4-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 146 }
      name           = "5-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 148 }
    name     = "3-y Sibirskiy Korpus"
    location = 1162
    leader   = 516326
    division = {
      id             = { type = 10848 id = 149 }
      name           = "7-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 150 }
      name           = "8-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 213 }
      name           = "12-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 214 }
      name           = "13-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 151 }
    name     = "1-y Sibirskiy Korpus"
    location = 1196
    leader   = 516252
    division = {
      id             = { type = 10848 id = 152 }
      name           = "1-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      extra          = engineer
      brigade_model  = 0
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 153 }
      name           = "2-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 155 }
    name     = "4-y Sibirskiy Korpus"
    location = 1191
    leader   = 516428
    division = {
      id             = { type = 10848 id = 156 }
      name           = "3-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 157 }
      name           = "9-ya Sibirskaya Strelkovaya "
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 158 }
    name     = "5-y Sibirskiy Korpus"
    location = 1190
    leader   = 516831
    division = {
      id             = { type = 10848 id = 159 }
      name           = "6-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 160 }
      name           = "10-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 100
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 86 }
    name     = "Turkestanskii Voennyi Okrug"
    location = 1103
    leader   = 516011
    division = {
      id             = { type = 10848 id = 99 }
      name           = "6-ya Turkestanskaya Strelkovaya Brigada"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 10848 id = 164 }
    name     = "1-ya Armiya"
    location = 258
    leader   = 516806
    division = {
      id             = { type = 10848 id = 20 }
      name           = "1-ya Armiya"
      type           = hq
      model          = 0
      strength       = 90
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 166 }
      name           = "53-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 169 }
      name           = "56-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 170 }
      name           = "57-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 184 }
      name           = "68-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 191 }
      name           = "72-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 192 }
      name           = "73-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 171 }
    name     = "2-ya Armiya"
    location = 232
    leader   = 516413
    division = {
      id             = { type = 10848 id = 37 }
      name           = "2-ya Armiya"
      type           = hq
      model          = 0
      strength       = 90
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 173 }
      name           = "59-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 196 }
      name           = "76-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 197 }
      name           = "77-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 199 }
      name           = "79-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 176 }
    name     = "3-ya Armiya"
    location = 617
    leader   = 516390
    division = {
      id             = { type = 10848 id = 60 }
      name           = "3-ya Armiya"
      type           = hq
      model          = 0
      strength       = 90
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 172 }
      name           = "58-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 174 }
      name           = "60-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 180 }
      name           = "65-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 186 }
      name           = "69-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 198 }
      name           = "78-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 167 }
      name           = "1-ya Kubanskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 211 }
      name           = "2-ya Kubanskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 207 }
      name           = "Terekskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 181 }
    name     = "4-ya Armiya"
    location = 672
    leader   = 515500
    division = {
      id             = { type = 10848 id = 21 }
      name           = "4-ya Armiya"
      type           = hq
      model          = 0
      strength       = 90
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 201 }
      name           = "80-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 203 }
      name           = "82-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 204 }
      name           = "83-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 182 }
      name           = "3-ya Donskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 208 }
      name           = "Uralskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 185 }
    name     = "5-ya Armiya"
    location = 572
    leader   = 516253
    division = {
      id             = { type = 10848 id = 162 }
      name           = "5-ya Armiya"
      type           = hq
      model          = 0
      strength       = 90
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 168 }
      name           = "55-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 175 }
      name           = "61-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 189 }
      name           = "70-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 194 }
      name           = "75-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 202 }
      name           = "81-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 209 }
      name           = "4-ya Donskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 210 }
      name           = "5-ya Donskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 187 }
    name     = "6-ya Armiya"
    location = 553
    leader   = 516702
    division = {
      id             = { type = 10848 id = 163 }
      name           = "6-ya Armiya"
      type           = hq
      model          = 0
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 183 }
      name           = "67-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 193 }
      name           = "74-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 205 }
      name           = "84-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 188 }
      name           = "Orenburgskaya Kazach'ya Diviziya"
      type           = cavalry
      model          = 0
      strength       = 10
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 195 }
    name     = "7-ya Armiya"
    location = 626
    leader   = 516125
    division = {
      id             = { type = 10848 id = 165 }
      name           = "7-ya Armiya"
      type           = hq
      model          = 0
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 177 }
      name           = "62-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 178 }
      name           = "63-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 179 }
      name           = "64-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
    division = {
      id             = { type = 10848 id = 190 }
      name           = "71-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 1
      strength       = 10
      max_strength   = 100
    }
  }

  navalunit = {
    id       = { type = 10848 id = 500 }
    name     = "Imp. Baltiyskiy Flot"
    location = 553
    base     = 553
    leader   = 516781
    division = {
      id             = { type = 10848 id = 501 }
      name           = "Tsesarevich"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 502 }
      name           = "Slava"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 503 }
      name           = "Andrei Pervozvanny"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 504 }
      name           = "Imperator Pavel I"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 505 }
      name           = "Admiral Makarov"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 506 }
      name           = "Bayan II"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 507 }
      name           = "Pallada"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 508 }
      name           = "Rurik"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 509 }
      name           = "Bogatyr"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 510 }
      name           = "Oleg"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 511 }
      name           = "Aurora"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 512 }
      name           = "Diana"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 513 }
      name           = "Rossia"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 514 }
      name           = "Gromoboi"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 515 }
      name           = "1 Flotiliya"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 516 }
      name           = "2 Flotiliya"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 517 }
      name           = "3 Flotiliya"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 518 }
      name           = "4 Flotiliya"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 519 }
      name           = "5 Flotiliya"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 520 }
      name           = "10 Flotiliya"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10848 id = 521 }
    name     = "Baltiyskaya Podvodnaya Flotiliya"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 522 }
      name           = "1 Flotiliya"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10848 id = 523 }
    name     = "Imp. Chernomorskiy Flot"
    location = 641
    base     = 641
    leader   = 515474
    division = {
      id             = { type = 10848 id = 524 }
      name           = "Tri Svititelia"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 525 }
      name           = "Rostislav"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 526 }
      name           = "Panteleimon"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 527 }
      name           = "Evstafi"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 528 }
      name           = "Ioann Zlatoust"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 529 }
      name           = "Kagul"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 530 }
      name           = "Pamiat Merkuria"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 531 }
      name           = "6 Flotiliya"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 532 }
      name           = "7 Flotiliya"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 533 }
      name           = "11 Flotiliya"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 534 }
      name           = "12 Flotiliya"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10848 id = 535 }
    name     = "Chernomorskaya Podvodnaya Flotiliya"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 536 }
      name           = "2 Flotiliya"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10848 id = 537 }
    name     = "Sibirskaya Flotiliya"
    location = 1191
    base     = 1191
    leader   = 515605
    division = {
      id             = { type = 10848 id = 551 }
      name           = "Askold"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 538 }
      name           = "Zhemchug"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 539 }
      name           = "8 Flotiliya"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 540 }
      name           = "9 Flotiliya"
      type           = destroyer
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 10848 id = 700 }
    name     = "1 Imperial Air Service"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 701 }
      name           = "1 Otryady"
      type           = tactical_bomber
      model          = 1
      strength       = 10
      max_strength   = 75
    }
    division = {
      id             = { type = 10848 id = 702 }
      name           = "2 Otryady"
      type           = tactical_bomber
      model          = 0
      strength       = 10
      max_strength   = 75
    }
  }
  airunit = { 
    id       = { type = 10848 id = 703 }
    name     = "2 Imperial Air Service"
    location = 572
    base     = 572
    division = {
      id             = { type = 10848 id = 704 }
      name           = "3 Otryady"
      type           = tactical_bomber
      model          = 1
      strength       = 10
      max_strength   = 75
    }
    division = {
      id             = { type = 10848 id = 705 }
      name           = "4 Otryady"
      type           = tactical_bomber
      model          = 0
      strength       = 10
      max_strength   = 75
    }
  }

  division_development = {
    id             = { type = 10848 id = 543 }
    name           = "Sevastopol"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1914 month = november day = 29 }
  }
  division_development = {
    id             = { type = 10848 id = 544 }
    name           = "Petropavlovsk"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = january day = 5 }
  }
  division_development = {
    id             = { type = 10848 id = 545 }
    name           = "Poltava"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1914 month = december day = 29 }
  }
  division_development = {
    id             = { type = 10848 id = 546 }
    name           = "Gangut"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = january day = 11 }
  }
  division_development = {
    id             = { type = 10848 id = 547 }
    name           = "Imperatritsa Mariya"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = june day = 10 }
  }
  division_development = {
    id             = { type = 10848 id = 548 }
    name           = "Imp. Ekaterina Velikaya"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = october day = 18 }
  }
  division_development = {
    id             = { type = 10848 id = 549 }
    name           = "Imperator Alexander III"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1917 month = july day = 17 }
  }
}
