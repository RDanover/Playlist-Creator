#ifndef __ENVIRONMENT__
#define __ENVIRONMENT__
#include <string>
class Enviroment{
    std::string environment;
    virtual void create_environment(std::string new_environment){
	this.environment = new_environment;
}
#endif
