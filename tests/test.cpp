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

TEST(PerimeterTest, PosPos){
    int temp1, temp2;
    temp1 = 5;
    temp2 = 6;
    EXPECT_EQ(test->perimeter(temp1, temp2), 22)
}

TEST(PerimeterTest, DecDec){
    int temp1, temp2;
    temp1 = 5.5;
    temp2 = 6.5;
    EXPECT_EQ(test->perimeter(temp1, temp2), 24)
}

TEST(PerimeterTest, PosDec){
    int temp1, temp2;
    temp1 = 5;
    temp2 = 6.5;
    EXPECT_EQ(test->perimeter(temp1, temp2), 23)
}

TEST(ConstructorTest, PosPos){
    int temp1, temp2;
    temp1 = 5;
    temp2 = 6.5;
    Rectangle rect = new Rectangle(temp1, temp2)
    EXPECT_EQ(test->getWidth(), 5)
    EXPECT_EQ(test->getLength(), 6.5)
}