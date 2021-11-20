#ifndef PLAYABLE_HPP
#define PLAYABLE_HPP

#include <string>

using namespace std;

class Playable {
    public:
       virtual string get_name()=0;
       virtual double get_length()=0;
       virtual void display(){}
       virtual void add_song(string,string,double){}
       virtual void delete_song(){}
       virtual void hide_unhide_song(){}
       virtual void play(){}
       virtual void play_song(){}
       virtual void shuffle(){}
       virtual void analytics(){}
       virtual void display_songs{}
       
       virtual void get_artist(){}
       virtual bool get_hidden_status(){}
       virtual int get_num_time_played(){}
       virtual void set_hidden_status(){}
       virtual void increment_time_played(){}
    
};
#endif //PLAYABLE_HPP
