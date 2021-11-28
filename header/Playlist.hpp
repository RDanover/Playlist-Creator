#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP
#include "Playable.hpp"
#include <vector>
#include <string>
#include "Song.hpp"

using namespace std;

class Playlist: public Playable{
    private:
	vector<Song*> songs;
	vector<Song*> shuffled_songs;      
	string name;
	double length;  
    public:
        Playlist(string);
        string get_name(){return name;}
	double get_length(){return length;}
	void display();
	void deleteP(); // helper function for delete  playlist
	void add_song();
	void delete_song();
	void hide_unhide_song();
	void play();
	void play_song();
	void shuffle();
	void analytics();
};

#endif // PLAYLIST_HPP
