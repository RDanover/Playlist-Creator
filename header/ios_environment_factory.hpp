#ifndef __IOS_ENVIRONMENT_FACTORY__
#define __IOS_ENVIRONMENT_FACTORY__

#include <string>

class IOS_Environment_Factory : public Environment_Factory {	
	IOS_Environment_Factory(std::string new_name): Environment_Factory(new_name){
		environment = "IOS";
	}
}

#endif
