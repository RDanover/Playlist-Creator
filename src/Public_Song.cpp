#include "../header/Public_Song.hpp"

Song::Song(string n, string a, double l){
        name = n;
        artist = a;
        length = l;
        hidden = false;
        num_time_played = 0;
}

void Song::set_hidden_status(){
        if(hidden){
                hidden = false;
        }
        else{
                hidden = true;
        }
}
