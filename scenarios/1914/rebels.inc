##############################
# Country definition for REB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = REB
  capital            = 1981 # 티후아나 
  manpower           = 0
  # Resource Reserves
  energy         = 0
  metal          = 0
  rare_materials = 0
  oil            = 0
  supplies       = 0
  money          = 0

  nationalprovinces      = { }
  ownedprovinces         = { }
  controlledprovinces    = { 776 1965 1966 1981 1982 }

  landunit = {
    id       = { type = 24100 id = 1 }
    location = 1965
    division = {
      id             = { type = 24100 id = 2 }
      type           = militia
      model          = 0
      strength       = 5
      max_strength   = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 24100 id = 3 }
    location = 1966
    division = {
      id             = { type = 24100 id = 4 }
      type           = militia
      model          = 0
      strength       = 5
      max_strength   = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 24100 id = 5 }
    location = 1981
    division = {
      id             = { type = 24100 id = 6 }
      type           = militia
      model          = 0
      strength       = 5
      max_strength   = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 24100 id = 7 }
    location = 1982
    division = {
      id             = { type = 24100 id = 8 }
      type           = militia
      model          = 0
      strength       = 5
      max_strength   = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 24100 id = 9 }
    location = 776
    division = {
      id             = { type = 24100 id = 10 }
      type           = militia
      model          = 0
      strength       = 1
      max_strength   = 2
      locked         = yes
    }
  }
}
