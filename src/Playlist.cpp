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
			cout << songs.at(i)->get_name() << ", by " << songs.at(i)->get_artist() << endl;
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
		vector<int> v;
	int max = songs.at(0)->get_num_time_played();
	
	for(unsigned int i = 0; i < songs.size(); i++){ // find max time played
		if(songs.at(i)->get_num_time_played() > max)
		max = songs.at(i)->get_num_time_played();	
	}
	
	
	for(unsigned int i = 0; i < songs.size(); i++){ //make a vector to store all the indexes of this max val
		if (songs.at(i)->get_num_time_played() == max)
		v.push_back(i);
	}
	
	if(v.size() == 1){ // if only one instance of max val
		std::cout << "Your most played song is " << songs.at(v.at(0))->get_name() << " by " << songs.at(v.at(0))->get_artist() << endl;
	}
	
	else { //if few instances of highest val
		std::cout << "Your most played songs are : " << endl;
		for(unsigned int i = 0; i < v.size(); i++){
			std::cout << songs.at(v.at(i))->get_name() << " by " << songs.at(v.at(i))->get_artist() << endl; 
		}
			
	}
		
		
	int sum = 0; 
	for(unsigned int i = 0; i < songs.size(); i++){
		sum += songs.at(i)->get_num_time_played() * songs.at(i)->get_length(); 
	}
	
	if (sum%60 == 0)
	std::cout << "You spent " << sum/60 << " minutes listening to this playlist." << endl;
	
	else
	std::cout << "You spent " << sum/60 << " minutes and " << sum%60 << " seconds listening to this playlist." << endl;
}
