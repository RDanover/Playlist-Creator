#include <iostream>
#include "../header/User_Menu.hpp"

using namespace std;

int main()
{
    cout<<"====================="<<endl;
    cout<<"RUNNING PROGRAM TESTS"<<endl;
    cout<<"====================="<<endl;
    
        cout<<"====================="<<endl;
        cout<<"RUNNING ACCESS_PLAYLIST TESTS"<<endl;
        cout<<"====================="<<endl;
            
            cout<<"Test one: No playlists have been added"<<endl;
            User_Menu* access_playlist_test_one = new User_Menu();
            int access_playlist_test_one_result = access_playlist_test_one.access_playlist();
            cout<<"Test Result: <<";
            if(access_playlist_test_one_result == 1){
                cout<<"PASSED: user was printed error message and was returned to options"<<endl;
            }
            else{
                cout<<"FAILED: undefined behavior"<<endl;
            }
            cout<<"End test one."<<endl;
    
    
    
    cout<<"====================="<<endl;
    cout<<"TESTS COMPLETED"<<endl;
    cout<<"====================="<<endl;
    
    return 0;
}
