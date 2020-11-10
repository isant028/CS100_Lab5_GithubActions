#ifndef __TEST_HPP__
#define __TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.cpp"


TEST(AreaTest, TwoInts){
    int temp1, temp2;
    temp1 = 3;
    temp2 = 4;
    EXPECT_EQ(test->area(temp1,temp2), 12)
}

TEST(AreaTest, PosNeg){
    int temp1, temp2;
    temp1 = 3;
    temp2 = -4;
    EXPECT_EQ(test->area(temp1,temp2), -12)
}

TEST(AreaTest, NegNeg){
    int temp1, temp2;
    temp1 = -3;
    temp2 = -4;
    EXPECT_EQ(test->area(temp1,temp2), 12)
}

TEST(AreaTest, DecDec){
    int temp1, temp2;
    temp1 = 3.5;
    temp2 = 4.5;
    EXPECT_EQ(test->area(temp1,temp2), 15.75)
}

TEST(AreaTest, DecPos){
    int temp1, temp2;
    temp1 = 3.5;
    temp2 = 2;
    EXPECT_EQ(test->area(temp1,temp2), 7)
}