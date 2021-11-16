#ifndef PLAYABLE_HPP
#define PLAYABLE_HPP

#include <string>

using namespace std;

class Playable {
    public:
       virtual string get_name()=0;
       virtual double get_length()=0;
       virtual void display_options(){}
	
};
#endif //PLAYABLE_HPP
