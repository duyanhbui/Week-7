#include <iostream>
#include "Orchestra.h"
#include "Musician.h"

int main(){
    Orchestra o1;
    Orchestra o2 = Orchestra(3);

    Musician m1 = Musician("Piano",69);
    Musician m2 = Musician("Violin", 96);
    Musician m3 = Musician("Bass",6);

    if (o1.add_musician(m1) == false){
        std :: cout << "Nah bro" << std :: endl;
    }

    o2.add_musician(m1);
    o2.add_musician(m2);
    o2.add_musician(m3);

    std :: cout << o2.get_current_number_of_members() << std :: endl;
    std :: cout << o2.has_instrument("Piano") << std :: endl;
    for(int i = 0; i < o2.get_current_number_of_members();i++){
        (o2.get_members()+i)->get_instrument();
        (o2.get_members()+i)->get_experience();

    }

    
}