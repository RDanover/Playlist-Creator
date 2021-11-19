#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input = "";

	while(input.compare("NO")==0||input.compare("YES")==0){

		cout<<"Welcome to our playlist program. In this program you will be able to make multiple playlists and add songs to them. You will then be able to \"listen\" to these songs along with various other features"<<endl;
	
		cout<<"This program has the option of viewing your listening analytics. To do this we will record the amount of times you listen to a song. If you would like to opt out of this feature and not have your listening behavior tracked, Please enter NO, otherwise enter YES."<<endl;
	
		getline(cin,input);
		cout<<endl;
		
		if((input.compare("NO")!=0||input.compare("YES")!=0){
			cout<<"INVALID INPUT. Please try again."<<endl;
		}
	}
	if(input.compare("NO"){
		//implement private factory
	}
	else{
		//implement public factory
	}

	
}
