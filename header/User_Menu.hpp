#ifndef USER_MENU_HPP
#define USER_MENU_HPP

#include <vector>
#include <string>
#include "Playlist.hpp"
#include "Playable.hpp"
#include "Song.hpp"

using namespace std;

class User_Menu
{
private:
	vector<Playable *> user_playables;

public:
	User_Menu()
	{
		user_playables.push_back(new Playlist("SICK SONGS"));
		user_playables.push_back(new Playlist("Sad Songs"));
		user_playables.push_back(new Playlist("Happy Songs"));
	}
	void add_playlist(Playable *playable);
	void display_options();
	void create_new_playlist();
	void delete_playlist();
	void access_playlist();
	void exit();
};

#endif // USER_MENU_HPP

