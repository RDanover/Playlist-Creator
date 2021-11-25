#ifndef USER_MENU_HPP
#define USER_MENU_HPP

#include <vector>
#include <string>
#include "Public_Playlist.hpp"
#inlcude "Private_Playlist.hpp"
#include "Playable.hpp"
#inlcude "Private_Song.hpp"
#include "Public_Song.hpp"

using namespace std;

class User_Menu
{
private:
	vector<Playable *> user_playables;

public:
	void add_playlist();
	void display_options();
	Playlist* create_new_playlist();
	void delete_playlist();
	void access_playlist();
	void exit();
};

#endif // USER_MENU_HPP

