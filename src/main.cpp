#include <iostream>
#include "../header/User_Menu.hpp"
#include "../header/Playlist.hpp"
using namespace std;

int main()
{
	Playlist test("Name");

	test.hide_unhide_song();

	return 0;
}

