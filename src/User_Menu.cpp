#include "../header/User_Menu.hpp"
#include <iostream>
void User_Menu::display_options(){
  std::string option = "B";
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
      
     if(option == "AD") {
	add_playlist();
     }
     else if(option == "D") {
	delete_playlist();
     }
     else if(option == "AC") {
	access_playlist();	
     }
     else if(option == "E") {
	return;
     }
     else if (option != "E"){
	  cout << "Invalid input, try again." << endl;
     }	

   }
}

Playlist* User_Menu::create_new_playlist(){
	//insert implementation
	string playlist_name;
	cout << "Input the playlist name: ";
        cin >> playlist_name; // should be changed to getline 
	
	while(1){
        	for(int i = 0; i < user_playables.size(); i++) {
            		if(user_playables.at(i)->get_name() == playlist_name) {
               	 		cout << "the name already exists!" << endl;
				return nullptr;
            		}
        	}
		return new Playlist(playlist_name);
	}
	//user_playables.push_back(new Playlist(playlist_name));
}

void User_Menu::delete_playlist(){
	//insert implemenation
}

//Function Name: access_playlist()
//purpose: This function will display all of the users playlists to the user and prompt them for which one they would like to access
//purpose cont.: if input is correct the user willl be directed to the playlist of their choosing 
//purpose cont.: if input is not correct user will be asked to try again or be sent back to the menu
void User_Menu::access_playlist(){
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
		access_playlist();
	}
	else if( input == 0){
		display_options();
	}
	else{
		user_playables.at(input-1)->display();
	}

}

void User_Menu::add_playlist()
{	
	//string playlist_name;
	//cout << "Input the playlist name: ";
	//getline(cin, playlist_name);
	Playlist* new_playlist = create_new_playlist();
	if(new_playlist)
	{
		user_playables.push_back(new_playlist);
	}
	
}

void User_Menu::exit(){
	//insert implementation
	return;
}
