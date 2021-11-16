#ifndef PLAYABLE_HPP
#define PLAYABLE_HPP

#include <string>

using namespace std;

class Playable {
    public:
       virtual string get_name()=0;
       virtual double get_length()=0;
};
#endif //PLAYABLE_HPP
