# Playlist Maker
Authors: [Vishal Gondi](https://github.com/vgondi123) [Rachel Danover](https://github.com/RDanover) [Mariam Golwalla](https://github.com/mgolw001) [Seokha Kang](https://github.com/skang121)

## Phase 1 - Project Description
Project Description: Our Project is a Playlist maker where the user can add and delete songs to various playlists. They can also choose to play, skip, and shuffle songs. The user will input the song name and artist, and the playlist they created will be outputted. All these inputs and outputs will take place in the terminal. The user will be able to name the playlist and have the option to see a summary of their music habits (similar to Spotify Wrapped). We are going to be using C++ as our language for the project.The songs will not actually play but will instead say "Now playing \<insert songname>\." Our songs will be held in a vector as pointers make it convenient to add and remove songs, and to change the order for the shuffle feature. We are interested in this project in particular as we all really like to listen to music, so this seems like a project we would enjoy building to kind of learn the code and algortithms behind our favorite streaming services. 
 

## Phase II

Class Diagram
![image](https://user-images.githubusercontent.com/60625627/139507582-d1bb9dbb-16e3-4521-b130-7c872cf56820.png)


Description of diagram: Our project will feature two interfaces, one where the user can see their playlists and choose to delete them or add more, this is also where users will access their playlists. This interface will hold a vector of playlist pointers making it a composition of the playlist class, a playlist can have one user but a user can have 0 to any positive integer number of playlists. Our second interface will be the playlist interface which will allow users to play the songs in their playlist, delete songs, hide them, or add new ones, they will also be able to view analytics about their listening habits. This interface will feature two vectors composed of song object pointers making the playlist class a composition of the song class. The song class is simply a leaf class and will not be directly accessed by the user. A playlist can have 0 to many songs, however (with our implementation) a song will only belong to one playlist.
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
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
 
