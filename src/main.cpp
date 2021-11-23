#include <iostream>
#include "../header/User_Menu.hpp"

using namespace std;

int main()
{
	cout << "Welcome to our playlist program." << endl; 
	cout << "In this program you will be able to make multiple playlists and add songs to each of them." <<endl;
	cout << "You will then be able to \"listen\" to these songs along with various other features."<<endl<<endl<<endl;

	User_Menu* menu = new User_Menu();
	Playlist* playlist = new Playlist("PlayLists");
 	Playlist* playlist_2 = new Playlist("Playlists2");

 	Playable* happy_birthday = new Song("Happy Birthday", "Anonymnous", 30);
 	Playable* so_sick = new Song("So Sick", "Neyo", 180);
 	Playable* the_star_spangled_banner = new Song("The Star Spangled Banner", "Francis Scott Key", 200);
 	Playable* hello = new Song("Hello", "Adelle", 192);
 	Playable* shivers = new Song("Shivers", "Ed Sheeran", 207);
 	Playable* money = new Song("Money", "Lisa", 228);
 	Playable* need_to_know = new Song("Need to Know", "Doja Cat", 210);


 	playlist->add_song(happy_birthday);
  	playlist->add_song(so_sick);
  	playlist->add_song(the_star_spangled_banner);
  	playlist->add_song(hello);
  	playlist->add_song(shivers);
  	playlist->add_song(money);
  	playlist->add_song(need_to_know);

  	//Display songs.
  	cout << "===== Display Songs =====" << endl;
  	playlist->display_songs();
  	menu->access_playlist();
  	cout << endl;

  	// Add songs to the playlist.
  	cout << "===== Add songs to the playlist =====" << endl;
  	menu->add_playlist(playlist);
  	menu->access_playlist();
  	cout << endl;

  	//Check bool song_exists.
  	cout << "===== Check the function song_exists works well=====" << endl;
  	if(playlist->song_exists(hello)) {
    		cout << "True" << endl;
  	}
  	else {
    		cout << "False" << endl;
  	}
  	cout << endl;
  

  	// Shuffle songs in the playlist.
  	cout << "===== Create songs and shuffle and add them to the playlist =====" << endl;
  	playlist_2->add_song(new Song("good 4 u", "Olivia Rodrigo", 178));
  	playlist_2->add_song(new Song("Overpass Graffiti", "Ed Sheeran", 236));
  	playlist_2->add_song(new Song("My Universe", "Coldplay", 228));
  	playlist_2->add_song(new Song("Bad Habits", "Ed sheeran", 230));
  	playlist_2->add_song(new Song("GhostTown", "Benson Boone", 193));
	playlist_2->delete_song();
  	playlist_2->shuffle();
  	menu->add_playlist(playlist_2);
  	menu->access_playlist();
	
  	cout << endl;

  	return 0;
}
