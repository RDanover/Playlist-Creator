#include "../header/Private_Playlist.hpp"
#include <stdlib.h>
#include <time.h>
#include <iterator>
#include "../header/Private_Song.hpp"
#include <iostream>

using namespace std;

Private_Playlist::Private_Playlist(string n)
{
   name = n;
}

void Private_Playlist::display()
{
   std::string option = "B";
   while (option != "E")
   {
      std::cout << name << std::endl;
      display_songs();

      std::cout << "(AS) - ADD SONG" << std::endl;
      // std::cout << std::endl;
      std::cout << "(DS) - DELETE SONG" << std::endl;
      // std::cout << std::endl;
      std::cout << "(HS) - HIDE/UNHIDE SONG" << std::endl;
      // std::cout << std::endl;
      std::cout << "(P) - PLAY" << std::endl;
      // std::cout << std::endl;
      std::cout << "(PS) - PLAY SONG" << std::endl;
      // std::cout << std::endl;
      std::cout << "(S) - SHUFFLE" << std::endl;
      // std::cout << std::endl;
      std::cout << "(E) - EXIT" << std::endl;
      cout << endl;
      std::cout << "ENTER OPTION:" << endl;

      std::cin >> option;

      if (option == "AS")
      {
         std::string name;
         std::string artist;
         double length;
         Private_Song *temp = nullptr;
         char duplicate;
         std::cout << endl;
         std::cin.ignore();
         cout << "Enter song name:" << endl;
         std::getline(std::cin, name);
         cout << endl;
         cout << "Enter artist name:" << endl;
         std::getline(std::cin, artist);
         cout << endl;
         cout << "Enter song length (in minutes):" << endl;
         cin >> length;
         cout << endl;
         temp = new Private_Song(name, artist, length);

         if (song_exists(temp))
         {
            cout << "Add song again? - Song already exists in playlist" << endl;
            cout << "Enter (y/n):" << endl;
            cin >> duplicate;
            cout << endl;
            if (duplicate == 'y')
            {
               Playable *new_song = new Private_Song(name, artist, length);
               add_song(new_song);
               delete temp;
            }
         }
         else
         {
            Playable *new_song = new Private_Song(name, artist, length);
            add_song(new_song);
         }
      }

      else if (option == "DS")
      {
         cout << endl;
         delete_song();
      }

      else if (option == "HS")
      {
         cout << endl;
         hide_unhide_song();
      }

      else if (option == "P")
      {
         cout << endl;
         play();
      }
      else if (option == "PS")
      {
         cout << endl;
	 string s;
	 string a;
	 cin.ignore();
	 cout << "Enter song name:" << endl;
         std::getline(std::cin, s);
         cout << endl;
         cout << "Enter artist name:" << endl;
         std::getline(std::cin, a);
         cout << endl;
	      
         play_song(s,a);
      }
      else if (option == "S")
      {
         cout << endl;
         shuffle();
      }
      else if (option != "E")
      {
	  cout << "Invalid input, try again." << endl;
      }
   }
}

bool Private_Playlist::song_exists(Playable *curr)
{
   for (unsigned int i = 0; i < songs.size(); i++)
   {
      if (songs.at(i)->get_artist() == curr->get_artist() && songs.at(i)->get_name() == curr->get_name() && songs.at(i)->get_length() == curr->get_length())
      {
         return true;
      }
   }
   return false;
}

void Private_Playlist::display_songs()
{
   for (unsigned int i = 0; i < songs.size(); i++)
   {
      std::cout << songs.at(i)->get_name() << " - " << songs.at(i)->get_artist() << endl;
   }
   cout << endl;
}

void Private_Playlist::add_song(string name, string artist, double length){
 	Private_Song* temp = new Private_Song(name, artist, length);
    songs.push_back(temp);
}


void Private_Playlist::add_song(Playable *song)
{
   songs.push_back(song);
}

void Private_Playlist::delete_song()
{
   int input;
   string title;
   int order;
   cout << "Enter 1 if you want to delete a song by titles" << endl;
   cout << "Enter 2 if you want to delete a song by order" << endl;
   cin >> input;
   if(input == 1)
   {
	cout << "Enter title: ";
	cin.ignore();
        getline(cin, title);
	for(int i = 0; i < songs.size(); i++) {
	    if(songs.at(i)->get_name() == title) {
		songs.erase(songs.begin()+i);
		return;
	    }
	}
	cout << "Can't find the song" << endl;
   }
   else if(input == 2)
   {
	cout << "Enter the order: ";
	cin >> order;
	if(order < 1 || order > songs.size()){
	    cout << "Invalid order" << endl;
	    return;
	}
	else {
	    songs.erase(songs.begin()+order-1);
	}
   }
   else 
   {
	cout << "Invalid input" << endl;
	return;
   }

   
}

void Private_Playlist::hide_unhide_song()
{
   cin.ignore();
   string songname = "";
   int indexOfSong = -1;
   cout << "Please enter the name of the song you would like to hide or unhide, or enter LEAVE, to return to the main menu." << endl;
   getline(cin, songname);
   cout << endl;
   if (songname.compare("LEAVE") == 0)
   {
      // display_options();
      return;
   }
   else
   {
      for (unsigned i = 0; i < songs.size(); i++)
      {
         if (songs.at(i)->get_name().compare(songname) == 0)
         {
            indexOfSong = i;
         }
      }
      if (indexOfSong == -1)
      {
         cout << "Song not found. Please try again" << endl;
         hide_unhide_song();
         return;
      }
      else
      {
         if (songs.at(indexOfSong)->get_hidden_status())
         {
            songs.at(indexOfSong)->set_hidden_status();
            cout << songs.at(indexOfSong)->get_name() << " Has been unhidden." << endl;
         }
         else
         {
            songs.at(indexOfSong)->set_hidden_status();
            cout << songs.at(indexOfSong)->get_name() << " Has been hidden." << endl;
         }
         return;
      }
   }
}

void Private_Playlist::play(){
	
	if (songs.size() == 0){
  		std::cout << "Please add songs to play" << endl;
  		display();
		return;
	}

	if(songs.size() > 0){
		if (!songs.at(0)->get_hidden_status())
      		{
        		std::cout << "Now playing: " << songs.at(0)->get_name() << ", by " << songs.at(0)->get_artist() << endl;;
      		}

	}
	
	 if(songs.size() > 1){
	  std::cout << "Upcoming songs: " << endl; 
		for( unsigned int i = 1; i < songs.size(); i++){
			if (!songs.at(i)->get_hidden_status())
      			{
         			std::cout << songs.at(i)->get_name() << ", by " << songs.at(i)->get_artist() << endl;

      			}
			
		}
	}

	
}
void Private_Playlist::play_song(string song, string artist){
     bool found = false;
     for (unsigned int i = 0; i < songs.size(); i++) {
           if (songs.at(i)->get_name() == song && songs.at(i)->get_artist() == artist) {
               found = true;
               cout << songs.at(i)->get_name() << " - " << songs.at(i)->get_artist() << " is now playing." << endl;
           }
       }
       if (!found) {
          cout <<  "Song is not found in current playlist." << endl;
       }
	
}

void Private_Playlist::shuffle()
{
   if (songs.size() < 1)
   {
      cout << "Please add songs before trying to shuffle the plaaylist" << endl;
      return;
   }

   shuffled_songs = songs;

   vector<Playable *> temp;
   temp = songs;

   vector<Playable *>::iterator ptr;

   srand(time(NULL)); // setting the seed based on the current time

   int randInt = 0;

   for (int i = 0; i < songs.size(); i++)
   {
      randInt = rand() % (temp.size());
      ptr = temp.begin();
      shuffled_songs.at(i) = temp.at(randInt);
      ptr += randInt;
      temp.erase(ptr);
   }

   cout << "Songs have been shuffled, now playing playlist" << endl;
   for (int i = 0; i < shuffled_songs.size(); i++)
   {
      if (!shuffled_songs.at(i)->get_hidden_status())
      {
         cout << "Playing: " << shuffled_songs.at(i)->get_name() << " by: " << shuffled_songs.at(i)->get_artist() << " for " << shuffled_songs.at(i)->get_length() << " minutes." << endl;
      }
   }
   return;
}

