#ifdef  __WINDOWS_FACTORY__
#define __WINDOWS_FACTORY__

#include <string>
class Windows_Factory {
    Windows window;
    Windows_Factory(std::string new_name){
    virtual Windows create_windows() = 0;
}

#endif
