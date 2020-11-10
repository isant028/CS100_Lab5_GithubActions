<<<<<<< HEAD
#include "gtest/gtest.h"
#include "test.hpp"
#include "c-echo.h"
int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(EchoTest, EmptyString){
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}

