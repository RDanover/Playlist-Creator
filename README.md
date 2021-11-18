# Playlist Maker
Authors: [Vishal Gondi](https://github.com/vgondi123), [Rachel Danover](https://github.com/RDanover), [Mariam Golwalla](https://github.com/mgolw001), [Seokha Kang](https://github.com/seokhakangcs)

## Phase 1 - Project Description

### Importance of the Project
Our Project is a Playlist maker where the user can add and delete songs to various playlists. We are interested in this project in particular as we all really like to listen to music, so this seems like a project we would enjoy building to kind of learn the code and algortithms behind our favorite streaming services.

### Language
We are going to be using C++ as our language for the project.

### Tools & Technologies
We are going to use Vim, Visual Studio, Xcode. All inputs and outputs will take place in the terminal.

### Inputs & Outputs
The user will input the song name and artist, and the playlist they created will be outputted. The songs will not actually play but will instead say "Now playing \<insert songname>\."

### Feature
Users can also choose to play, skip, and shuffle songs. In addition, they will be able to name the playlist and have the option to see a summary of their music habits (similar to Spotify Wrapped). Our songs will be held in a vector as pointers make it convenient to add and remove songs, and to change the order for the shuffle feature.

## Phase II

###Class Diagram
![Screenshot (9)](https://user-images.githubusercontent.com/60625627/141907346-1fa2aef5-9921-4990-b61b-513bba0b59cf.png)

### Description of diagram
Our project will feature two interfaces, one where the user can see their playlists and choose to delete them or add more, this is also where users will access their playlists. This interface will hold a vector of playable pointers making it a composition of the playable class, a playlist can have one user but a user can have 0 to any positive integer number of playlists. Our second interface will be the playlist interface which will allow users to play the songs in their playlist, delete songs, hide them, or add new ones, they will also be able to view analytics about their listening habits if they choose to have their data collected. This interface will feature two vectors composed of song object pointers making the playlist class a composition of the song class. The song class is simply a leaf class and will not be directly accessed by the user. A playlist can have 0 to many songs, however (with our implementation) a song will only belong to one playlist. 
 
 ## Phase III
 ### Composite Pattern:
 We chose this pattern as it seemed to best to use with the structure of our project. A playlist is traditionally made up of many songs which is a composition. By using    this design pattern we can have more structural code. It also makes it easier for users to interact with playlists and songs as they are treated the same under the composite pattern. We used composition in both the User_Menu class and in the playlist class to help with organization. 
### Abstract Factory:
 We chose this pattern to solve the ethical issue of collecting data without user consent. We will prompt the user if they would like their data to be collected for use in     displaying their anaylitics. If the user opts out, their data will not be collected and an alternative implementation of playlist and song will be used. By using this     pattern it simplifies and organizes the design by splitting the creation of certain functions based on the user's decision. 

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
