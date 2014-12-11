/*
 * test_operations.cpp
 *
 *  Created on: 11 Ara 2014
 *      Author: selim
 */

#include "gtest/gtest.h"
#include "operations.h"

TEST(AdditionTest, add) {
        EXPECT_EQ(6, add(4,2));
        EXPECT_EQ(20, add(11,9));
}

TEST(SubtractionTest, sub) {
         EXPECT_EQ(2, sub(4,2));
         EXPECT_EQ(2, sub(11,9));
}

TEST(MultiplicationTest, mul) {
         EXPECT_EQ(8, mul(4,2));
         EXPECT_EQ(99, mul(11,9));
}

TEST(DivitionTest,divv) {
         EXPECT_EQ(2, divv(4,2));
         EXPECT_EQ(5, divv(11,2));
}


