#include <iostream>
#include "Unit.h"

int main(){
  Unit *u1 = new Unit();
  Unit *u2 = new Unit(100,2,69.96);

  std :: cout << u1->get_area() << std :: endl;
  std :: cout << u1->get_num_bedrooms() << std :: endl;
  std :: cout << u1->get_value() << std :: endl;

  std :: cout << u2->get_area() << std :: endl;
  std :: cout << u2->get_num_bedrooms() << std :: endl;
  std :: cout << u2->get_value() << std :: endl;



}