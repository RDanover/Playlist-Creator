#include "../header/User_Menu.hpp"
#include <iostream>
void User_Menu::display_options(){
}

void User_Menu::create_new_playlist(){
	//insert implementation
}

void User_Menu::delete_playlist(){
for(unsigned int i = 0 ; i < user_playables.size(); i++ ){
		cout << i+1 << ". " << user_playables.at(i)->get_name() << endl;
    }
    
    int input = 0;
    cout << "Please type the number next to the playlist you would like to delete, or to return to options press 0 and enter" << endl;
    cin >> input;
    cin.ignore();
    
    if( input < 0 || input > user_playables.size()){
		cout << "Invalid input please try again"<<endl;
		delete_playlist();
	}
	
	else if( input == 0) {
		display_options();
	}
	
	else{
		string n = user_playables.at(input-1)->get_name();
		for(unsigned int i = 0; i < user_playables.at(input-1)->get_length(); i++){
			delete user_playables.at(input-1).at(i); //wrong syntax
			}
			delete user_playables.at(input-1);
		cout << n << " was deleted" << endl; 
	}
}


//Function Name: access_playlist()
//purpose: This function will display all of the users playlists to the user and prompt them for which one they would like to access
//purpose cont.: if input is correct the user willl be directed to the playlist of their choosing 
//purpose cont.: if input is not correct user will be asked to try again or be sent back to the menu
void User_Menu::access_playlist(){

	//list playlists starting with a number to index them
	for( unsigned int i = 0 ; i < user_playables.size(); i++ ){
		cout << i+1 << ". " << user_playables.at(i)->get_name() << endl;
        }

	//ask for user input
	int input = 0;
	cout << "Please type the number next to the playlist you would like to acess and hit enter, or to return to options press 0 and hit enter" << endl;
	cin >> input;	
	cin.ignore();//clears the newline left in th stream incase getline is used after this
	//check input then send user to the correct playlist
	if( input < 0 || input > user_playables.size()){
		cout << "Invalid input please try again"<<endl;
		access_playlist();
	}
	else if( input == 0){
		display_options();
	}
	else{
		user_playables.at(input-1)->display_options();
	}

}

void User_Menu::exit(){
	//insert implementation
}
