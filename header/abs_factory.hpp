#ifndef __ABS_FACTORY__
#define __ABS_FACTORY__

#include <string>

class Abstract_Factory {
	virtual void create_playlist() = 0;
	virtual void create_song() = 0;
}

#endif
