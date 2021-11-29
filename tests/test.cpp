#include <iostream>
#include "../header/User_Menu.hpp"

using namespace std;

int main()
{
    cout<<"====================="<<endl;
    cout<<"RUNNING PROGRAM TESTS"<<endl;
    cout<<"====================="<<endl;
    cout<<endl;
    
        cout<<"====================="<<endl;
        cout<<"RUNNING ACCESS_PLAYLIST TESTS"<<endl;
        cout<<"====================="<<endl;
        cout<<endl;
    
            //Access Playlist Test One
            cout<<"Test one: No playlists have been added"<<endl;
            User_Menu* access_playlist_test_one = new User_Menu();
            int access_playlist_test_one_result = access_playlist_test_one->access_playlist(1,0);
            cout<<"Test Result: ";
            if(access_playlist_test_one_result == 1){
                cout<<"PASSED: user was printed error message and was returned to options"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
    
            //Access Playlist Test Two
            cout<<"Test two: check that all playlists are printed to the user"<<endl;
            User_Menu* access_playlist_test_two = new User_Menu();
            int access_playlist_test_two_num = 3;//change this number to change number of playlists must be >=1
            for(int access_playlist_test_two_num_i=0;access_playlist_test_two_num_i<access_playlist_test_two_num;access_playlist_test_two_num_i++){
                access_playlist_test_two->add_playlist();
            }
            int access_playlist_test_two_result = access_playlist_test_two->access_playlist(2,0);
            cout<<"Test Result: ";
            if(access_playlist_test_two_result == access_playlist_test_two_num){
                cout<<"PASSED: user was printed all playlists"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
            
            //Access Playlist Test Three
            cout<<"Test three: if user inputs number too high or too low"<<endl;
            User_Menu* access_playlist_test_three = new User_Menu();
            int access_playlist_test_three_num = 3;//change this number to change number of playlists must be >=1
            for(int access_playlist_test_three_num_i=0;access_playlist_test_three_num_i<access_playlist_test_three_num;access_playlist_test_three_num_i++){
                access_playlist_test_three->add_playlist();
            }
            int access_playlist_test_three_result_low = access_playlist_test_three->access_playlist(3,-1);
            int access_playlist_test_three_result_high = access_playlist_test_three->access_playlist(3,access_playlist_test_three_num+5);
            cout<<"Test Result: ";
            if(access_playlist_test_three_result_low == 3 && access_playlist_test_three_result_high == 3){
                cout<<"PASSED: user was printed an error message and asked to try again. function was then called again"<<endl;
            }
            else if (access_playlist_test_three_result_low != 3 && access_playlist_test_three_result_high == 3){
                cout<<"FAILED: low test failed, high test passed"<<endl;
            }
            else if (access_playlist_test_three_result_low == 3 && access_playlist_test_three_result_high != 3){
                cout<<"FAILED: high test failed, low test passed"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
    
            //Access Playlist Test Four
            cout<<"Test four: if user inputs 0"<<endl;
            User_Menu* access_playlist_test_four = new User_Menu();
            int access_playlist_test_four_num = 3;//change this number to change number of playlists must be >=1
            for(int access_playlist_test_four_num_i=0;access_playlist_test_four_num_i<access_playlist_test_four_num;access_playlist_test_four_num_i++){
                access_playlist_test_four->add_playlist();
            }
            int access_playlist_test_four_result = access_playlist_test_four->access_playlist(4,0);
            cout<<"Test Result: ";
            if(access_playlist_test_four_result == 4 ){
                cout<<"PASSED: user was returned to menu"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
            
            //Access Playlist Test Five
            cout<<"Test five: if user inputs valid value"<<endl;
            User_Menu* access_playlist_test_five = new User_Menu();
            int access_playlist_test_five_num = 3;//change this number to change number of playlists must be >=1
            for(int access_playlist_test_five_num_i=0;access_playlist_test_five_num_i<access_playlist_test_five_num;access_playlist_test_five_num_i++){
                access_playlist_test_five->add_playlist();
            }
            int access_playlist_test_five_result = access_playlist_test_five->access_playlist(5,access_playlist_test_five_num-1);
            cout<<"Test Result: ";
            if(access_playlist_test_five_result == 5 ){
                cout<<"PASSED: user was sent to the playlist of their choosing"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
    
        cout<<"====================="<<endl;
        cout<<"FINSIHED ACCESS_PLAYLIST TESTS"<<endl;
        cout<<"====================="<<endl;
        cout<<endl;
    
        cout<<"====================="<<endl;
        cout<<"RUNNING HIDE_UNHIDE_SONG TESTS"<<endl;
        cout<<"====================="<<endl;
        cout<<endl;
    
            //Hide unhide song Test One
            cout<<"Test one: if user responds with LEAVE"<<endl;
            Public_Playlist* Hide_Unhide_test_one = new Public_Playlist("n")
            int Hide_Unhide_test_one_result = Hide_Unhide_test_one->hide_unhide_song(1,"LEAVE");
            cout<<"Test Result: ";
            if( Hide_Unhide_test_one_result == 1){
                cout<<"PASSED: user was returned to main menu "<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
    
            //Hide unhide song Test Two
            cout<<"Test two: song is not found"<<endl;
            Public_Playlist* Hide_Unhide_test_two = new Public_Playlist("n")
            int Hide_Unhide_test_two_result = Hide_Unhide_test_two->hide_unhide_song(2,"");
            cout<<"Test Result: ";
            if( Hide_Unhide_test_two_result == 2 ){
                cout<<"PASSED: user was printed song not found and asked to try again, function was then called again"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
    
            //Hide unhide song Test Three
            cout<<"Test three: song was found "<<endl;
            Public_Playlist* Hide_Unhide_test_three = new Public_Playlist("n")
            int Hide_Unhide_test_three_result = Hide_Unhide_test_three->hide_unhide_song(3,"");
            cout<<"Test Result: ";
            if( Hide_Unhide_test_three_resul == 3){
                cout<<"PASSED: song was hidden or unhidden based on its previous status and user was sent to the menu"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<endl;
            
    
        cout<<"====================="<<endl;
        cout<<"FINSIHED HIDE_UNHIDE_SONG TESTS"<<endl;
        cout<<"====================="<<endl;
        cout<<endl;
    
    cout<<endl;
    cout<<"====================="<<endl;
    cout<<"TESTS COMPLETED"<<endl;
    cout<<"====================="<<endl;
    
    return 0;
}
