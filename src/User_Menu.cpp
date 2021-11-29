#include "../header/User_Menu.hpp"
#include <iostream>

User_Menu::~User_Menu(){
	if(user_playables.size()==0){
		user_playables.clear();
	}
	
	for(int i=0;i<user_playables.size();i++){
		user_playables.at(i)->deleteP();
	}
	user_playables.clear();
}

void User_Menu::display_options(int d){
  std::string option = "B";
  if(d==1){//public
	while (option != "E")
  	{
    		std::cout << endl << "PLAYLIST MENU: ";
     		std::cout << endl << endl;
     		std::cout << "(AD) - ADD NEW PLAYLIST" << std::endl;
    		std::cout << std::endl;
     		std::cout << "(D) - DELETE A PLAYLIST" << std::endl;
     		std::cout << std::endl;
    		std::cout << "(AC) - ACCESS A PLAYLIST" << std::endl;
     		std::cout << std::endl;
     		std::cout << "(E) - EXIT" << std::endl;
     		std::cout << std::endl << std::endl;
     		std::cout << "ENTER OPTION:" << endl;
     		cin >> option;
		cin.ignore();
      
     		if(option == "AD") {
			public_add_playlist();
     		}
     		else if(option == "D") {
			public_delete_playlist();
     		}
     		else if(option == "AC") {
			public_access_playlist();	
     		}
		else if(option == "E") {
			return;
     		}
     		else if (option != "E"){
	  		cout << "Invalid input, try again." << endl;
     		}	

   	}
  } 
  else{//private
	while (option != "E")
  	{
     		std::cout << endl << "PLAYLIST MENU: ";
     		std::cout << endl << endl;
     		std::cout << "(AD) - ADD NEW PLAYLIST" << std::endl;
     		std::cout << std::endl;
     		std::cout << "(D) - DELETE A PLAYLIST" << std::endl;
    		std::cout << std::endl;
     		std::cout << "(AC) - ACCESS A PLAYLIST" << std::endl;
     		std::cout << std::endl;
     		std::cout << "(E) - EXIT" << std::endl;
     		std::cout << std::endl << std::endl;
     		std::cout << "ENTER OPTION:" << endl;
     		cin >> option;
		cin.ignore();
      
     		if(option == "AD") {
			private_add_playlist();
     		}
     		else if(option == "D") {
			private_delete_playlist();
     		}
     		else if(option == "AC") {
			private_access_playlist();	
     		}
     		else if(option == "E") {
			return;
     		}
     		else if (option != "E"){
	  		cout << "Invalid input, try again." << endl;
     		}	

   	}
  }
  
}

Public_Playlist* User_Menu::public_create_new_playlist(){
	string playlist_name;
	cout << "Input the playlist name: ";
        getline(cin,playlist_name);
	
	while(1){
        	for(int i = 0; i < user_playables.size(); i++) {
            		if(user_playables.at(i)->get_name() == playlist_name) {
               	 		cout << "the name already exists!" << endl;
				return nullptr;
            		}
        	}
		return new Public_Playlist(playlist_name);
	}
}

void User_Menu::public_delete_playlist(){
	for(unsigned int i = 0 ; i < user_playables.size(); i++ ){
		cout << i+1 << ". " << user_playables.at(i)->get_name() << endl;
    }
    
    int input = 0;
    cout << "Please type the number next to the playlist you would like to delete, or to return to options press 0 and enter" << endl;
    cin >> input;
    cin.ignore();
    
    if( input < 0 || input > user_playables.size()){
		cout << "Invalid input please try again"<<endl;
		public_delete_playlist();
	}
	
	else if( input == 0) {
		return;
	}
	
	else{
		string n = user_playables.at(input-1)->get_name();
		user_playables.at(input-1)->deleteP();
		user_playables.erase(user_playables.begin()+input-1);
		cout << n << " was deleted" << endl; 
	}
}

//Function Name: access_playlist()
//purpose: This function will display all of the users playlists to the user and prompt them for which one they would like to access
//purpose cont.: if input is correct the user willl be directed to the playlist of their choosing 
//purpose cont.: if input is not correct user will be asked to try again or be sent back to the menu
void User_Menu::public_access_playlist(){
	if(user_playables.size()==0){
		cout<<"Please add a playlist before attempting to access a playlist."<<endl;
		return;
	}
	//list playlists starting with a number to index them
	for( unsigned i = 0 ; i < user_playables.size(); i++ ){
		cout << i+1 << ". " << user_playables.at(i)->get_name() << endl;
        }

	//ask for user input
	int input = 0;
	cout << "Please type the number next to the playlist you would like to access and hit enter, or to return to options press 0 and hit enter" << endl;
	cin >> input;	
	cin.ignore();//clears the newline left in th stream incase getline is used after this
	//check input then send user to the correct playlist
	if( input < 0 || input > user_playables.size()){
		cout << "Invalid input please try again"<<endl;
		public_access_playlist();
	}
	else if( input == 0){
		return;
	}
	else{
		user_playables.at(input-1)->display();
	}

}

void User_Menu::public_add_playlist()
{	
	Public_Playlist* new_playlist = public_create_new_playlist();
	if(new_playlist)
	{
		user_playables.push_back(new_playlist);
	}
	
}
//END PUBLIC FUNCTIONS

//START PRIVATE FUNCTIONS	
Private_Playlist* User_Menu::private_create_new_playlist(){
	string playlist_name;
	cout << "Input the playlist name: ";
        getline(cin,playlist_name);
	
	while(1){
        	for(int i = 0; i < user_playables.size(); i++) {
            		if(user_playables.at(i)->get_name() == playlist_name) {
               	 		cout << "the name already exists!" << endl;
				return nullptr;
            		}
        	}
		return new Private_Playlist(playlist_name);
	}
}

void User_Menu::private_delete_playlist(){
	for(unsigned int i = 0 ; i < user_playables.size(); i++ ){
		cout << i+1 << ". " << user_playables.at(i)->get_name() << endl;
    }
    
    int input = 0;
    cout << "Please type the number next to the playlist you would like to delete, or to return to options press 0 and enter" << endl;
    cin >> input;
    cin.ignore();
    
    if( input < 0 || input > user_playables.size()){
		cout << "Invalid input please try again"<<endl;
		private_delete_playlist();
	}
	
	else if( input == 0) {
		return;
	}
	
	else{
		string n = user_playables.at(input-1)->get_name();
		user_playables.at(input-1)->deleteP();
		user_playables.erase(user_playables.begin()+input-1);
		cout << n << " was deleted" << endl; 
	}
}

//Function Name: access_playlist()
//purpose: This function will display all of the users playlists to the user and prompt them for which one they would like to access
//purpose cont.: if input is correct the user willl be directed to the playlist of their choosing 
//purpose cont.: if input is not correct user will be asked to try again or be sent back to the menu
void User_Menu::private_access_playlist(){
	if(user_playables.size()==0){
		cout<<"Please add a playlist before attempting to access a playlist."<<endl;
		return;
	}
	//list playlists starting with a number to index them
	for( unsigned i = 0 ; i < user_playables.size(); i++ ){
		cout << i+1 << ". " << user_playables.at(i)->get_name() << endl;
        }

	//ask for user input
	int input = 0;
	cout << "Please type the number next to the playlist you would like to access and hit enter, or to return to options press 0 and hit enter" << endl;
	cin >> input;	
	cin.ignore();//clears the newline left in th stream incase getline is used after this
	//check input then send user to the correct playlist
	if( input < 0 || input > user_playables.size()){
		cout << "Invalid input please try again"<<endl;
		private_access_playlist();
	}
	else if( input == 0){
		return;
	}
	else{
		user_playables.at(input-1)->display();
	}

}

void User_Menu::private_add_playlist()
{	
	Private_Playlist* new_playlist = private_create_new_playlist();
	if(new_playlist)
	{
		user_playables.push_back(new_playlist);
	}
	
}
