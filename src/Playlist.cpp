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
	cout<<"Welcome to your playlist: "<<name<<endl;
	return;
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
