#include <gtest/gtest.h>
#include "../lib/linked_list/linked_list_basic.hpp"

#include <iterator>
#include <vector>


class LinkedListBasicTest : public ::testing::Test
{

};

TEST_F(LinkedListBasicTest, Append_1){

    // Arrange
    Node* root = nullptr;

    // Act
    append(root, 10);
    EXPECT_TRUE( root->value == 10);
}

TEST_F(LinkedListBasicTest, Append_2){

    // Arrange
    Node* root = nullptr;

    // Act
    append(root, 10);
    append(root, 20);

    EXPECT_TRUE(root->value == 20);
    EXPECT_TRUE(root->next->value ==  10);
}

