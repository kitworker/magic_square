#include <gtest/gtest.h>
#include <list>

using namespace std;

int main(int argc, char **argv) {
	std::list<int> mag1;
	  ::testing::InitGoogleTest(&argc, argv);
	  return RUN_ALL_TESTS();
}
