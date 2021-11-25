#ifndef ABS_SONG_HPP
#define ABS_SONG_HPP

#include "Playable.hpp"
#include <string>

using namespace std;

class Abs_Song : public Playable
{
public:
	virtual Song(string, string, double)= 0;
	virtual string get_name()= 0;
	virtual string get_artist() = 0;
	virtual double get_length() = 0; 
	virtual bool get_hidden_status() = 0;
	virtual int get_num_time_played() {return -1; }
	virtual void set_hidden_status() = 0;
	virtual void increment_time_played() {}
};

#endif // ABS_SONG_HPP

