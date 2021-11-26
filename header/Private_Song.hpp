#ifndef PRIVATE_SONG_HPP
#define PRIVATE_SONG_HPP

#include "abs_song.hpp"
#include <string>

using namespace std;

class Private_Song : public Abs_Song
{
private:
	string name;
	string artist;
	double length;
	bool hidden;
	
public:
	Private_Song(string, string, double);
	string get_name() { return name; }
	string get_artist() { return artist; }
	double get_length() { return length; }
	bool get_hidden_status() { return hidden; }
	void set_hidden_status();
	};

#endif // PRIVATE_SONG_HPP
