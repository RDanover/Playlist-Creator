#ifndef USER_MENU_HPP
#define USER_MENU_HPP

#include <vector>
#include <string>
#include "Public_Playlist.hpp"
#include "Private_Playlist.hpp"
#include "Playable.hpp"
#include "Private_Song.hpp"
#include "Public_Song.hpp"

using namespace std;

class User_Menu
{
private:
	vector<Playable *> user_playables;

public:
	~User_Menu();
	void display_options(int);
	void public_add_playlist();
	Public_Playlist* public_create_new_playlist();
	void public_delete_playlist();
	void public_access_playlist();
	
	void private_add_playlist();
	Private_Playlist* private_create_new_playlist();
	void private_delete_playlist();
	void private_access_playlist();
	
	int access_playlist(int,int); //testing purposes only
	void add_playlist(); //testing purposes only
};

#endif // USER_MENU_HPP

