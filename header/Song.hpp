#ifndef SONG_HPP
#define SONG_HPP

#include <string>

using namespace std;

class Song {
    private:
	string name;
	string artist;
	double length;
	bool hidden;
	int num_time_played;    
    public:
	Song(string,string,double);
        string get_name(){return name;}
	string get_artist(){return artist;
	double get_length(){return length;}
	bool get_hidden_status(){return hidden;}
	int get_num_time_played(){return num_time_played;}
	void set_hidden_status();
	void increment_time_played(){num_time_played++;}
};

#endif // SONG_HPP
