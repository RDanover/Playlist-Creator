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
	User_Menu(){
		playlists.push_back(new Playlist("SICK SONGS"));
		playlists.push_back(new Playlist("Sad Songs"));
		playlists.push_back(new Playlist("Happy Songs"));
	}
	void display_options();
	void create_new_playlist();
	void delete_playlist();
	void access_playlist();
	void exit();
};

#endif // USER_MENU_HPP
