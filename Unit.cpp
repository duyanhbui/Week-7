#include <iostream>
#include "Unit.h"

Unit ::Unit(int unit_val, int num_beds, double unit_size){
  this->unit_val = unit_val;
  this-> num_beds = num_beds;
  area = unit_size;
}

Unit :: Unit(){
  this->unit_val = 0;
  this-> num_beds = 0;
  area = 0.0;
};

int Unit :: get_value(){return area;};
int Unit :: get_num_bedrooms(){return num_beds;};
double Unit :: get_area(){return area;};

