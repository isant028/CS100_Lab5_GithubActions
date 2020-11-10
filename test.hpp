#ifndef __TEST_HPP__
#define __TEST_HPP__

#include "gtest/gtest.h"

#include "header/rectangle.hpp"

TEST(AreaTest, PosPos) {
    double temp1, temp2;
    temp1 = 3;
    temp2 = 4;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.area(),  12);
}

TEST(AreaTest, DecPos) {
    double temp1, temp2;
    temp1 = 3.5;
    temp2 = 2;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.area(),  7);
}
TEST(AreaTest, DecDec) {
    double temp1, temp2;
    temp1 = 2.5;
    temp2 = 3.5;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.area(),  8.75);
}
TEST(AreaTest, ZeroPos) {
    double temp1, temp2;
    temp1 = 0;
    temp2 = 4;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.area(),  0);
}


TEST(PerimeterTest, PosPos) {
    double temp1, temp2;
    temp1 = 3;
    temp2 = 4;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.perimeter(),  14);
}

TEST(PerimeterTest, DecPos) {
    double temp1, temp2;
    temp1 = 3.5;
    temp2 = 4;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.perimeter(),  15);
}
TEST(PerimeterTest, DecDec) {
    double temp1, temp2;
    temp1 = 3.5;
    temp2 = 4.5;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.perimeter(),  16);
}
TEST(PerimeterTest, ZeroPos) {
    double temp1, temp2;
    temp1 = 0;
    temp2 = 4;
    Rectangle rect;
    rect.set_width(temp1);
    rect.set_height(temp2);
    EXPECT_EQ(rect.perimeter(),  8);
}

TEST(ConstructorTest, PosPos) {
    double temp1, temp2;
    temp1 = 3;
    temp2 = 4;
    Rectangle rect(temp1, temp2);
    EXPECT_EQ(rect.getWidth(),  3);
    EXPECT_EQ(rect.getHeight(), 4);
}

TEST(ConstructorTest, DecDec) {
    double temp1, temp2;
    temp1 = 3.5;
    temp2 = 4.5;
    Rectangle rect(temp1, temp2);
    EXPECT_EQ(rect.getWidth(),  3.5);
    EXPECT_EQ(rect.getHeight(), 4.5);
}

TEST(ConstructorTest, PosDec) {
    double temp1, temp2;
    temp1 = 3.5;
    temp2 = 4;
    Rectangle rect(temp1, temp2);
    EXPECT_EQ(rect.getWidth(),  3.5);
    EXPECT_EQ(rect.getHeight(), 4);
}

TEST(ConstructorTest, ZeroPos) {
    double temp1, temp2;
    temp1 = 0;
    temp2 = 4;
    Rectangle rect(temp1, temp2);
    EXPECT_EQ(rect.getWidth(),  0);
    EXPECT_EQ(rect.getHeight(), 4);
}


#endif //__TEST_HPP__
