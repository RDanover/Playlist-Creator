#include <iostream>
#include "../header/User_Menu.hpp"

using namespace std;

int main()
{
	cout <<endl;
	cout << "Welcome to our playlist program. "; 
	cout << "In this program you will be able to make multiple playlists and add songs to each of them. "; 
	cout << "You will then be able to \"listen\" to these songs along with various other features."<<endl<<endl<<endl;

	User_Menu* menu = new User_Menu();
	while(input.compare("NO")!=0&&input.compare("YES")!=0){

		cout<<"This program has the option of viewing your listening analytics.";
		cout<< "To do this we will record the amount of times you listen to a song.";
		cout<< "If you would like to opt out of this feature and not have your listening behavior tracked, Please enter NO, otherwise enter YES."<<endl;
	
		getline(cin,input);
		cout<<endl;
		
		if((input.compare("NO")!=0&&input.compare("YES")!=0){
			cout<<"INVALID INPUT. Please try again."<<endl;
		}
	}
	if(input.compare("NO"){
		menu->display_options(0);
	}
	else{
		menu->display_options(1);
	}
	//menu->create_new_playlist();
	//menu->display_options();
// 	Playlist* playlist = new Playlist("PlayLists");
//  	Playlist* playlist_2 = new Playlist("Playlists2");
	
//  	Playable* happy_birthday = new Song("Happy Birthday", "Anonymnous", 30);
//  	Playable* so_sick = new Song("So Sick", "Neyo", 180);
//  	Playable* the_star_spangled_banner = new Song("The Star Spangled Banner", "Francis Scott Key", 200);
//  	Playable* hello = new Song("Hello", "Adelle", 192);
//  	Playable* shivers = new Song("Shivers", "Ed Sheeran", 207);
//  	Playable* money = new Song("Money", "Lisa", 228);
//  	Playable* need_to_know = new Song("Need to Know", "Doja Cat", 210);


//  	playlist->add_song(happy_birthday);
//   	playlist->add_song(so_sick);
//   	playlist->add_song(the_star_spangled_banner);
//   	playlist->add_song(hello);
//   	playlist->add_song(shivers);
//   	playlist->add_song(money);
//   	playlist->add_song(need_to_know);

//   	//Display songs.
//   	cout << "===== Display Songs =====" << endl;
//   	playlist->display_songs();
//   	menu->access_playlist();
//   	cout << endl;

//   	// Add songs to the playlist.
//   	cout << "===== Add songs to the playlist =====" << endl;
//   	//menu->add_playlist(playlist);
//   	menu->access_playlist();
//   	cout << endl;

//   	//Check bool song_exists.
//   	cout << "===== Check the function song_exists works well=====" << endl;
//   	if(playlist->song_exists(hello)) {
//     		cout << "True" << endl;
//   	}
//   	else {
//     		cout << "False" << endl;
//   	}
//   	cout << endl;
  

//   	// Shuffle songs in the playlist.
//   	cout << "===== Create songs and shuffle and add them to the playlist =====" << endl;
//   	playlist_2->add_song(new Song("good 4 u", "Olivia Rodrigo", 178));
//   	playlist_2->add_song(new Song("Overpass Graffiti", "Ed Sheeran", 236));
//   	playlist_2->add_song(new Song("My Universe", "Coldplay", 228));
//   	playlist_2->add_song(new Song("Bad Habits", "Ed sheeran", 230));
//   	playlist_2->add_song(new Song("GhostTown", "Benson Boone", 193));
// 	playlist_2->delete_song();
//   	playlist_2->shuffle();
//   	menu->add_playlist();
//   	menu->access_playlist();
	
//   	cout << endl;

  	return 0;
}
