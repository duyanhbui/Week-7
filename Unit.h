#pragma once

class Unit{
  private:
    int unit_val;
    int num_beds;
    double area;
  public:
  Unit();
  Unit(int unit_val, int num_beds, double unit_size);
  int get_num_bedrooms();
  int get_value();
  double get_area();   
};