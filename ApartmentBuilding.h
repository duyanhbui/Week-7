#pragma once
#include "Unit.h"
class ApartmentBuilding{
  private:
    int nums_unit;
    int cur_num_unit;
    Unit *unit_list;
  public:
  ApartmentBuilding();
  ApartmentBuilding(int capacity);
  int get_capacity();
  int get_current_number_of_units(); 
  Unit * get_contents();
  bool add_unit(Unit unit);
  ~ApartmentBuilding();
};