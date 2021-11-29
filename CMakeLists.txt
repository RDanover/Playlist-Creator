CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test
    tests/test.cpp
    src/User_Menu.cpp
    src/Public_Playlist.cpp
    src/Private_Playlist.cpp
    src/Public_Song.cpp
    src/Private_Song.cpp
)

ADD_EXECUTABLE(output
    src/main.cpp
    src/User_Menu.cpp
    src/Public_Playlist.cpp
    src/Private_Playlist.cpp
    src/Public_Song.cpp
    src/Private_Song.cpp
)
