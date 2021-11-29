//#include "gtest/gtest.h"
#include <iostream>
#include "../header/User_Menu.hpp"

using namespace std;

int main() {
    User_Menu* menu = new User_Menu();
    User_Menu* menu2 = new User_Menu();
    //Test 1: User Menu Display Options Public
     menu->display_options(0);
    //Input E

    //Test 2: Public Add Playlist
    menu->public_add_playlist();
    cout << menu->end_playlist_name() << endl;
    
    //Test 3: Public Access Playlist
    menu->public_access_playlist();
    //Input E
  
    //Test 4: User Menu Display Options Private
    menu2->display_options(1);
    //Input E

    //Test 5: Private Add Playlist
    menu2-> private_add_playlist();
    cout << menu2->end_playlist_name() << endl;
    
    //Test 6: Private Access Playlist
    menu2->private_access_playlist();
    //Input E

    /*
    //Test 7: Public Delete Playlist
    public_delete_playlist();
    cout << menu->end_playlist_name() << endl;
    
    //Test 8: Private Delete Playlist
    private_delete_playlist();
    cout << menu2->end_playlist_name() << endl;*/
} 
