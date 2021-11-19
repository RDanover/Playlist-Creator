#include "../header/Playlist.hpp"
#include <iostream>

using namespace std;
Playlist::Playlist(string n){
	name = n;
	length = 0;
}

void Playlist::display() {
   std::string option = "B";
   while(option != "E") {
       std::cout << name << std::endl;
       std::cout << std::endl;
       // display_songs();

       std::cout << "(A) - ADD SONG" << std::endl;
       // std::cout << std::endl;
       std::cout << "(D) - DELETE SONG" << std::endl;
       // std::cout << std::endl;
       std::cout << "(H) - HIDE/UNHIDE SONG" << std::endl;
       //std::cout << std::endl;
       std::cout << "(P) - PLAY" << std::endl;
       // std::cout << std::endl;
       std::cout << "(PS) - PLAY SONG" << std::endl;
       // std::cout << std::endl;
       std::cout << "(S) - SHUFFLE" << std::endl;
       // std::cout << std::endl;
       std::cout << "(A) - ANALYTICS" << std::endl;
       // std::cout << endl;
       std::cout << "(E) - EXIT" << std::endl;
       std::cout << "ENTER OPTION:" << endl;

       std::cin >> option;
       
       if (option == "AS") {
       cout << endl;
       //add_song();
       }
    
       else if (option == "DS") {
       cout << endl;
       //delete_song();
       }

       else if(option == "HS") {
       cout << endl;
       //hid_unhide_song();
       }

       else if(option == "P") {
       cout << endl;
       //play();
       }
       else if(option == "PS") {
       cout << endl;
       //play_song();
       }
       else if(option == "S") {
       cout << endl;
       //shuffle();
       }
       else if(option == "A") {
       cout << endl;
       //analytics();
       }

   }       
             
}
       
void Playlist::add_song(){
	//insert implementation
}

void Playlist::delete_song(){
	//insert implementation
}

void Playlist::hide_unhide_song(){
	//insert implementation
}

void Playlist::play(){
	
	if (songs.size() == 0){
		cout << "Please add songs to play" << endl;
		display();
		return;
	}

	if(songs.size() > 0){
		cout << "Now playing: " << songs.at(0)->get_name() << ", by " << songs.at(0)->get_artist() << endl;
	}
	
	if(songs.size() > 1){
		cout << "Upcoming songs: " << endl; 
		for( unsigned i = 1; i < songs.size(); i++){
			cout << songs.at(i)->get_name() << ", by " << songs.at(i)->get_artist << endl;
		}
	}

	
}

void Playlist::play_song(){
	//insert implementation
}

void Playlist::shuffle(){
	//insert implementation
}

void Playlist::analytics(){
	//insert implementation
}
