#ifndef PLAYABLE_HPP
#define PLAYABLE_HPP

#include <string>

using namespace std;

class Playable {
    public:
       virtural void display_options()=0;
       virtural string get_name()=0;
       virtural double get_length()=0;
};
#endif //PLAYABLE_HPP
