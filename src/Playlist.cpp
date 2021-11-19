#include "../header/Playlist.hpp"
#include "../header/Song.hpp"
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
       display_songs();

       std::cout << "(AS) - ADD SONG" << std::endl;
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
       cout << endl;
       std::cout << "ENTER OPTION:" << endl;

       std::cin >> option;
       
       if (option == "AS") {
       std::string name;
       std::string artist;
       double length;
       Song* temp = nullptr;
       char duplicate;
       std::cout << endl;
       std::cin.ignore();
       cout << "Enter song name:" << endl;
       std::getline(std::cin, name);
       cout << endl;
       cout << "Enter artist name:" << endl;
       std::getline(std::cin, artist);
       cout << endl;
       cout << "Enter song length:" << endl;
       cin >> length;
       cout << endl;
       temp = new Song(name, artist, length);
       if (song_exists(temp)) {
          cout << "Add song again? - Song already exists in playlist" << endl;
          cout << "Enter (y/n):" << endl;
          cin >> duplicate;
          cout << endl;
          if (duplicate == 'y') {
             add_song(name, artist, length);
             delete temp;
          }
       }
       else {
           add_song(name, artist, length);
       }
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

bool Playlist::song_exists(Song* curr) {
     for (unsigned int i = 0; i < songs.size(); i++) {
         if (songs.at(i)->get_artist() == curr->get_artist() && songs.at(i)->get_name() == curr->get_name() && songs.at(i)->get_length() == curr->get_length()) {
             return true;
         }
     }
     return false;
}

void Playlist::display_songs() {
     for (unsigned int i = 0; i < songs.size(); i++) {
        std::cout << songs.at(i)->get_name() << " - " << songs.at(i)->get_artist() << endl;
     }   
     cout << endl;
} 
       
void Playlist::add_song(string name, string artist, double length){
	Song* temp = new Song(name, artist, length);
        songs.push_back(temp);
}

void Playlist::delete_song(){
	//insert implementation
}

void Playlist::hide_unhide_song(){
	//insert implementation
}

void Playlist::play(){
	//insert implementation
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
