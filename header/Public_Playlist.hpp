#ifndef PUBLIC_PLAYLIST_HPP
#define PUBLIC_PLAYLIST_HPP
#include "abs_playlist.hpp"
#include <vector>
#include <string>
#include "Public_Song.hpp"

using namespace std;

class Public_Playlist : public Abs_Playlist
{
private:
	vector<Playable *> songs;
	vector<Playable *> shuffled_songs;
	string name;
	double length;

public:
	Public_Playlist(string);
	string get_name() { return name; }
	double get_length() { return length; }
	void display();
	void add_song(string name, string artist, double length);

	void add_song(Playable *song);
	
	void delete_song();
	void hide_unhide_song();
	void play();
	void play_song(string song, string artist);
	void shuffle();
	void analytics();
	void display_songs();
	bool song_exists(Playable *curr);
	void deleteP(); // helper function for delete  playlist
};

#endif // PUBLIC_PLAYLIST_HPP
