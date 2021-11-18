#include "gtest/gtest.h"
#incldue "Playlist.hpp"

TEST(Playlist, PlaylistDisplay) {
    Playlist* Playlist = new Playlist("My Playlist");
    
    EXPECT_EQ(       
}

 
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
