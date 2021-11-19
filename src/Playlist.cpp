#include "../header/Playlist.hpp"
#include <stdlib.h>
#include <time.h>
#include <iterator>
 
Playlist::Playlist(string n){
	name = n;
	length = 0;
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
	//insert implementation
}

void Playlist::play(){
	//insert implementation
}

void Playlist::play_song(){
	//insert implementation
}

void Playlist::shuffle(){
	if(songs.size()<1){
		cout<<"Please add songs before trying to shuffle the plaaylist"<<endl;
		return;
	}
	
	shuffled_songs = songs;
	
	vector <Song*> temp;
	temp = songs;
	
	vector<Song*>::iterator ptr;
	
	srand(time(NULL));//setting the seed based on the current time
	
	int randInt=0;
	
	for(int i =0; i<songs.size(); i++){
		randInt = rand()%(temp.size());
		ptr = temp.begin();
		shuffled_songs.at(i) = temp.at(randInt);
		ptr += randInt;
		temp.erase(ptr);
	}	

	cout<<"Songs have been shuffled, now playing playlist"<<endl;	
	for(int i=0; i<shuffled_songs.size();i++){
		if(!shuffled_songs.at(i)->get_hidden_status){
			cout<<"Playing: "<< shuffled_songs.at(i)->get_name()<<" by: "<< shuffled_songs.at(i)->get_artist()<<" for  " <<shuffled_songs.at(i)->get_length()<<" minutes."<<endl;
		}
	}
	return;
}

void Playlist::analytics(){
	//insert implementation
}shuffled_songs = temp;

