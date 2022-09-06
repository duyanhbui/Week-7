#pragma once
#include <string>

class Musician{
    private:
        std :: string instrument_state;
        int year_experiences;
    public:
        Musician();
        Musician(std :: string instrument, int experience);
        std::string get_instrument();
        int get_experience();
};