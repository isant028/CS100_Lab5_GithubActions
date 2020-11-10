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