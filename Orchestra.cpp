#include "Musician.h"
#include "Orchestra.h"

Orchestra :: Orchestra(){
    orchestra_size = 0;
    cur_size = 0;
    musician_list = new Musician[orchestra_size];
}

Orchestra :: Orchestra(int size){
    orchestra_size =size;
    cur_size = 0;
    musician_list = new Musician[orchestra_size];
}

int Orchestra :: get_current_number_of_members(){return cur_size;}

Musician *Orchestra :: get_members(){
    return musician_list;
}

bool Orchestra :: has_instrument(std::string instrument){
    for(int i = 0; i < cur_size;i++){
        if((musician_list + i)->get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

bool Orchestra :: add_musician(Musician new_musician){
    if(cur_size >= orchestra_size){
        return false;
    }else{
        *(musician_list + cur_size) = new_musician;
        cur_size += 1;
        return true;
    }
}
