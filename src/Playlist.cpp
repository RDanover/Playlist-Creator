#include "Playlist.hpp"
 
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
	if(songs->size()<1){
		cout<<"please add songs before trying to shuffle the plaaylist"<<endl;
		return;
	}
	
	song* temp;
	for(int i=songs.size()-1;i>=0;i--){
		shuffled_songs.push_back(songs.at(i));
	}

	for(int j = 0;j< shuffled_songs.size()-1;j+=2){
		temp = shuffled_songs.at(shuffled_songs.at(j+1);
		shuffled_songs.at(j+1) = shuffled_songs.at(j);
		shuffled_songs.at(j) = temp;
	}
	
	cout<<"songs have been shuffled"<<endl;
	

}

void Playlist::analytics(){
	//insert implementation
}
