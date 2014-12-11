/*
 * test_factorial.cpp
 *
 *  Created on: 11 Ara 2014
 *      Author: selim
 */

#include "gtest/gtest.h"
#include "factorial.h"

TEST(FactorialTest, negative) {
        EXPECT_EQ(1, factorial(-5));
        EXPECT_EQ(1, factorial(-1));
        EXPECT_GT(factorial(-10), 0);
}

TEST(FactorialTest, zero) {
         EXPECT_EQ(1, factorial(0));
}

TEST(FactorialTest, postive) {
         EXPECT_EQ(1, factorial(1));
         EXPECT_EQ(2, factorial(2));
         EXPECT_EQ(6, factorial(3));
         EXPECT_EQ(40320, factorial(8));
}


