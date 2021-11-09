#include "Playlist.hpp"
#include <iostream>
using namespace std;

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
	string songname = "";
	string response = "";
	int responseInt = 0;
	int indexOfSong = 0;
	cout<<"Please enter the name of the song you would like to hide or unhide, or enter LEAVE, to return to the main menu."<<endl;
	cin.ignore();
	getline(cin,songname);
	cout<<endl;
	
	if(songname.equals("LEAVE")){
		display_options();
		return;
	}
	else{
		vector <int> indexes;
		for(unsigned i<0;i<songs.size();i++){
			if(songs.at(i).get_name().equals(songname)){
				indexes.pushback(i);
			}
		}
		if(indexes.size()<1){
			cout<<"Song not found. Please try again"<<endl;
			hide_unhide_songs();
			return;
		}
		else if(indexes.size() == 1){
			if(songs.at(indexes.at(0)).get_hidden_status()){
				cout << "Would you like to unhide "<< songname<<"? Enter Y for yes, enter N for no."<<endl;
				cin >> response;
				cin.ignore();
				if(response.equals("Y"){
					songs.at(indexes.at(0)).set_hidden_status();
					cout<<songname<<" has been unhidden."<<endl;
					return;
				}
				else{
					cout<<"Unhide aborted."<<endl;
					return;
				}
			}
			else{
				cout << "Would you like to hide "<<songname<<" Enter Y for yes, enter N for no."<<endl;
				cin >>response;
				cin.ignore();
				if(response.equals("Y"){
					songs.at(indexes.at(0)).set_hidden_status();
					cout<<songname<<" had been hidden."<<endl;
					return;
				}
				else{
					cout<<"Hide aborted."<<endl;
					return;
				}
			}
		}
		else{
			cout << "Multiple songs found with that same name:"<<endl;
			for(int j =0;j<indexes.size();j++){
				cout<<j+1<<". "<<songname<<" by "<<songs.at(indexes.at(j)).get_artist()<<endl;
			}
			cout << "Please enter the number that corresponds to the song you would like to hide or unhide. Or enter 0 to return to menu"<<endl;
			cin>>responseInt;
			cin.ignore();
			if(responseInt==0||responseInt>indexes.size()+1){
				cout<<"returning to main menu."
				display_menu();
				return;
			}
			else{
				if(songs.at(indexes.at(responseInt-1)).get_hidden_status()){
                                	cout << "Would you like to unhide "<< songname<<"? Enter Y for yes, enter N for no."<<endl;
                                	cin >> response;
                                	cin.ignore();
                                	if(response.equals("Y"){
                                 	       songs.at(indexes.at(0)).set_hidden_status();
                                 	       cout<<songname<<" has been unhidden."<<endl;
                                 	       return;
                                	}
                                	else{
                                        	cout<<"Unhide aborted."<<endl;
                                        	return;
                                	}
                        	}
                        	else{
                                	cout << "Would you like to hide "<<songname<<" Enter Y for yes, enter N for no."<<endl;
                                	cin >>response;
                                	cin.ignore();
                                	if(response.equals("Y"){
                                        	songs.at(indexes.at(0)).set_hidden_status();
                                        	cout<<songname<<" had been hidden."<<endl;
                                        	return;
                                	}
                                	else{
                                        	cout<<"Hide aborted."<<endl;
                                       		 return;
                                	}
                        	}
			}
				
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
