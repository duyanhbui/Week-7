#include <iostream>
#include "Musician.h"

int main(){
    Musician* m1 = new Musician();
    Musician* m2 = new Musician("Piano",10);


    std :: cout << m1->get_experience() << std :: endl;
    std :: cout << m1-> get_instrument() << std :: endl;
    
    std :: cout << m2->get_experience() << std :: endl;
    std :: cout << m2-> get_instrument() << std :: endl;
    
}