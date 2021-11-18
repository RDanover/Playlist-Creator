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

void Playlist::display_options(){
	//insert implementation
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
	cin.ignore();
	getline(cin,songname);
	cout<<endl;
	
	if(songname.compare("LEAVE")){
		display_options();
		return;
	}
	else{

		for(unsigned i=0;i<songs.size();i++){
			if(songs.at(i)->get_name().compare(songname)){
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
