#include "../header/Playlist.hpp"
#include <iostream>

using namespace std;
Playlist::Playlist(string n){
	name = n;
	length = 0;
	songs.push_back(new Song("imagine","rebekah",1));
	songs.push_back(new Song("Hello","world",2));
	songs.push_back(new Song("claudia kishi", "The Lindas lindas",3.6));
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
	
	string songname = "";
	int indexOfSong = -1;
	cout<<"Please enter the name of the song you would like to hide or unhide, or enter LEAVE, to return to the main menu."<<endl;
	getline(cin,songname);
	cout<<endl;
	if(songname.compare("LEAVE")==0){
		display_options();
		return;
	}
	else{
		for(unsigned i=0;i<songs.size();i++){
			if(songs.at(i)->get_name().compare(songname)==0){
				indexOfSong = i;	
			}
		}
		if(indexOfSong==-1){
			cout<<"Song not found. Please try again"<<endl;
			hide_unhide_song();
			return;
		}
		else {
			if(songs.at(indexOfSong)->get_hidden_status()){
				songs.at(indexOfSong)->set_hidden_status();
				cout<<songs.at(indexOfSong)->get_name()<<" Has been unhidden."<<endl;
			}
			else{
				songs.at(indexOfSong)->set_hidden_status();
				cout<<songs.at(indexOfSong)->get_name()<<" Has been hidden."<<endl;
			}
			return;
		
		}	
	}
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
