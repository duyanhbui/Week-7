#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"


ApartmentBuilding ::  ApartmentBuilding(){
  nums_unit = 10;
  cur_num_unit = 0;
  unit_list = new Unit[nums_unit];
}
ApartmentBuilding ::  ApartmentBuilding(int capacity){
  nums_unit = capacity;
  cur_num_unit = 0;
  unit_list = new Unit[nums_unit];
};
int ApartmentBuilding :: get_capacity(){
  return nums_unit;
};
int ApartmentBuilding :: get_current_number_of_units(){
  return cur_num_unit;
}; 
Unit *ApartmentBuilding :: get_contents(){
  return unit_list;
};
bool ApartmentBuilding :: add_unit(Unit unit){
  if(cur_num_unit >= nums_unit){
    return false;
  }else{
    unit_list[cur_num_unit] = unit;
    cur_num_unit += 1;
  }
  return true;
};
ApartmentBuilding :: ~ApartmentBuilding(){
  delete unit_list;
};