CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(output
    src/main.cpp
    src/User_Menu.cpp
    src/Playlist.cpp
    src/Song.cpp
)


