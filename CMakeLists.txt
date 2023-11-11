cmake_minimum_required(VERSION 3.10)

# Set some basic project attributes
project (magic_square
        VERSION 0.1
        DESCRIPTION "magic square")


set(SRC tests_main.cpp Matrix.cpp )

# Find path to installed library GTest
find_package(GTest REQUIRED)

# Included dircetory header GTest
include_directories(${GTEST_INCLUDE_DIRS})

# Добавьте исполняемый файл вашего проекта и файлы исходного кода
add_executable(${PROJECT_NAME} ${SRC})

# Свяжите Google Test с вашим исполняемым файлом
target_link_libraries(${PROJECT_NAME} GTest::GTest GTest::Main)

##############
### Testing ##
##############
enable_testing()

file(GLOB TEST_SOURCE_FILES "tests/*.cpp")

add_executable (unit_tests ${TEST_SOURCE_FILES} ${SRC})

target_link_libraries(unit_tests GTest::GTest GTest::Main)
add_test(AllFactTest unitTest)
