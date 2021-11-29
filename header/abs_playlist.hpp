#ifndef ABS_PLAYLIST_HPP
#define ABS_PLAYLIST_HPP
#include "Playable.hpp"
#include <vector>
#include <string>

using namespace std;

class Abs_Playlist : public Playable
{
public:
	virtual string get_name()= 0;
	virtual double get_length()= 0;
	virtual void display()= 0;
	virtual void add_song(string name, string artist, double length) = 0;

	virtual void add_song(Playable *song)=0;	
	virtual void delete_song()=0;
	virtual void hide_unhide_song()=0;
	virtual void play()=0;
	virtual void play_song(string song, string artist)=0;
	virtual void shuffle()=0;
	virtual void analytics(){}
	virtual void display_songs()=0;
	virtual bool song_exists(Playable *curr)=0;
};

#endif // ABS_PLAYLIST_HPP
