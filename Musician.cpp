#include <iostream>
#include "Musician.h"

Musician :: Musician(){
    instrument_state = "null";
    year_experiences = 0;
}


Musician :: Musician(std :: string instrument, int experience){
    instrument_state = instrument;
    year_experiences = experience;
}

std :: string Musician :: get_instrument(){return instrument_state;}
int Musician :: get_experience(){return year_experiences;}