#include "gtest/gtest.h"
#include <iostream>

using namespace std;

int GetTwo() {
    return 3;
}

// Tests factorial of 0.
TEST(GetTwoTest, Two) {
    EXPECT_EQ(2, GetTwo());
}

int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

