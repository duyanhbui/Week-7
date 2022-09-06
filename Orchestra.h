#pragma once
#include "Musician.h"

class Orchestra{
    private:
        int orchestra_size;
        int cur_size;
        Musician* musician_list;
    public:
        Orchestra();
        Orchestra(int size);
        int get_current_number_of_members(); 
        bool has_instrument(std::string instrument); 
        Musician *get_members();
        bool add_musician(Musician new_musician);

};