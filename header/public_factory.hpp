#ifndef __PUBLIC_FACTORY_HPP__
#define __PUBLIC_FACTORY_HPP__

#include <string>
#include "abs_factory.hpp"

class Public_Factory : public Abstract_Factory
{
	virtual void create_playlist() {}
	virtual void create_song() {}
};
#endif
