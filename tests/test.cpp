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
    
            cout<<"Test four: if user inputs valid value"<<endl;
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
    cout<<"TESTS COMPLETED"<<endl;
    cout<<"====================="<<endl;
    
    return 0;
}
