#ifndef __ANDROID_ENVIRONMENT_FACTORY__
#define __ANDROID_ENVIRONMENT_FACTORY__
#include <string>

class Android_Environment_Factory : public Environment_Factory {
	Android_Environment_Factory(std::string new_name): Environment_Factory(new_name){
		this.environment = "Android";	
	}
}

#endif
