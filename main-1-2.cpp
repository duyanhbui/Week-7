#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"

int main(){
  ApartmentBuilding *a1 = new ApartmentBuilding();
  ApartmentBuilding *a2 = new ApartmentBuilding(3);

  Unit u1(1,2,6.9);
  Unit u2(2,3,9.6);
  Unit u3(3,4,9.9);
  Unit u4(5,6,6.6);

  Unit arr[4] = {u1,u2,u3,u4}; 


  for(int i = 0; i < 4; i++){
    if (a2-> add_unit(arr[i])){
      std :: cout << "Success added" << std :: endl;
    }else{
      std :: cout << "Full!" << std :: endl;
    }
  }


}