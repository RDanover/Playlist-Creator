#include "../header/Private_Song.hpp"

Private_Song::Private_Song(string n, string a, double l){
        name = n;
        artist = a;
        length = l;
}

void Private_Song::set_hidden_status(){
        if(hidden){
                hidden = false;
        }
        else{
                hidden = true;
        }
}
