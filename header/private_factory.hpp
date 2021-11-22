#ifndef __PRIVATE_FACTORY_HPP__
#define __PRIVATE_FACTORY_HPP__
#include "abs_factory.hpp"
#include <string>

class Private_Factory: public Abs_Factory 
{
	virtual void create_playlist(){}
	virtual void create_song(){}
};

#endif
