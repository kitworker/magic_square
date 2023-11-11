#include <iomanip>
#include <iostream>

#include <boost/foreach.hpp>

#include "../Matrix.h"
#include "gtest/gtest.h"

class MatrixMoc: public Matrix, public ::testing::Test {
public:
	MatrixMoc() :
	Matrix()
	{
	}

    virtual void TestBody()
    {
	}
};

/*
 * Test magic square 4x4
 *
 * 2 3
 * 4 5
 *
 */

TEST_F(MatrixMoc, addItemTest)
{
    addItem(1, 1, 200); addItem(1, 2, 300);
    addItem(2, 1, 400); addItem(2, 2, 500);

	std::cout << "index/frame=0 item00 " << getMatrix(0)[0][0].value << std::endl;
	std::cout << "index/frame=1 item00 " << getMatrix(1)[0][0].value << std::endl;
	std::cout << "index/frame=1 item01 " << getMatrix(1)[0][1].value << std::endl;

    int indexFrame = 1;
    for (const auto& m: getMatrixes())
	{
        EXPECT_EQ(m[0][0], Number(indexFrame, 200));
	}

    EXPECT_EQ(getMatrixes().size(), 4);
    EXPECT_EQ(getItem(indexFrame, 1, 2), Number(indexFrame, 300));
    indexFrame = 2;
    EXPECT_EQ(getItem(indexFrame, 2, 1), Number(indexFrame, 400));
    indexFrame = 3;
    EXPECT_EQ(getItem(indexFrame, 2, 2), Number(indexFrame, 500));
//    EXPECT_EQ(getMatrix(indexFrame)[0][1], Number(indexFrame, 4));
//    indexFrame = 3;
//    EXPECT_EQ(getMatrix(indexFrame)[0][1], Number(indexFrame, 5));


//	EXPECT_EQ(q.size(), 8);
//	Matrix::Number expectValue = Number{ 1, 1 };
//	Matrix::Number currentValue = q[1][1];
//
//	EXPECT_EQ(currentValue, expectValue);
}


