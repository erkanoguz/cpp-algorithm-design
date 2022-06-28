#include <gtest/gtest.h>
#include "../lib/mint/mint.hpp"

class MintTest : public ::testing::Test
{

};

TEST_F(MintTest, Less_0_1){
    EXPECT_TRUE( Mint{0} < Mint{1} );
}

TEST_F(MintTest, XLessY){
    EXPECT_FALSE( Mint{1} < Mint{0} );
}

TEST_F(MintTest, Greater_0_1){
    EXPECT_FALSE( Mint{0} > Mint{1} );
}

TEST_F(MintTest, Greater_1_0){
    EXPECT_TRUE( Mint{1} > Mint{0} );
}
