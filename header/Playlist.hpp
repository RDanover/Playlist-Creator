#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP
#include "Playable.hpp"
#include <vector>
#include <string>
#include "Song.hpp"

using namespace std;

class Playlist : public Playable
{
private:
	vector<Playable *> songs;
	vector<Playable *> shuffled_songs;
	string name;
	double length;

public:
	Playlist(string);
	string get_name() { return name; }
	double get_length() { return length; }
	void display();
  void deleteP(); // helper function for delete  playlist
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
};

#endif // PLAYLIST_HPP

