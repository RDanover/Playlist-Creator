#include "../header/Public_Song.hpp"

Public_Song::Public_Song(string n, string a, double l){
        name = n;
        artist = a;
        length = l;
        hidden = false;
        num_time_played = 0;
}

void Public_Song::set_hidden_status(){
        if(hidden){
                hidden = false;
        }
        else{
                hidden = true;
        }
}
