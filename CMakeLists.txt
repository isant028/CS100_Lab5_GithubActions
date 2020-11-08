CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(area
        src/main1.cpp
        src/rectangle.cpp
)

ADD_EXECUTABLE(bigger_area
	src/new_main.cpp
	src/rectangle.cpp
)

ADD_EXECUTABLE(perimeter
	src/mainperimeter.cpp
	src/rectangleperimeter.cpp
)

ADD_EXECUTABLE(c-echo
        main2.cpp
)

ADD_EXECUTABLE(test
        test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

