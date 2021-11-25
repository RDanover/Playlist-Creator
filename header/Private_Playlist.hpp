#ifndef PRIVATE_PLAYLIST_HPP
#define PRIVATE_PLAYLIST_HPP
#include "abs_playlist.hpp"
#include <vector>
#include <string>
#include "Private_Song.hpp"

using namespace std;

class Private_Playlist : public Abs_Playlist
{
private:
	vector<Playable *> songs;
	vector<Playable *> shuffled_songs;
	string name;
	double length;

public:
	Private_Playlist(string);
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
	void display_songs();
	bool song_exists(Playable *curr);
};

#endif // PLAYLIST_HPP
