#ifndef USER_MENU_HPP
#define USER_MENU_HPP

#include <vector>
#include <string>
#include "Playlist.hpp"

using namespace std;

class User_Menu {
    private:
	vector<Playlist*> playlists;	        
    public:
	void display_options();
	void create_new_playlist();
	void delete_playlist();
	void access_playlist();
	void exit();
};

#endif // USER_MENU_HPP
