/*
* Matrix.cpp
*
 *  Created on: 10 авг. 2023 г.
 *      Author: knik
 */

#include "Matrix.h"

Matrix::Matrix()
	: m_index(0)
{

//int mag8[8][8] = {
//	1, 0, 0, 4, 5, 0, 0, 8,
//	0, 0, 0, 0, 0, 0, 0, 0,
//	0, 0, 0, 0, 0, 0, 0, 0,
//	0, 0, 0, 0, 0, 0, 0, 0,
//	0, 0, 0, 0, 0, 0, 0, 0,
//	0, 0, 0, 0, 0, 0, 0, 0,
//	0, 0, 0, 0, 0, 0, 0, 0,
//	0, 0, 0, 0, 0, 0, 0, 0,
//};2
}

void Matrix::addNumber(int row, int column, const Number& number)
{
	MagX mag8;
	if (m_matrixes.empty())
	{
		mag8[row][column] = number;
	}
	else
	{
		mag8 = m_matrixes.back();
		mag8[row][column] = number;
	}

	m_matrixes.push_back(mag8);
}

void Matrix::addItem(int row, int column, int value)
{
	addNumber(row - 1, column - 1, Number(m_index, value));
    ++m_index;
}

Matrix::Number Matrix::getItem(int index, int row, int column)
{
    return getMatrix(index)[row - 1][column - 1];
}

Matrix::MagX Matrix::getMatrix(int index) const
{
	return m_matrixes[index];
}

void Matrix::init() {
//	int mag8[8][8];//  = {
//		1, 0, 0, 4, 5, 0, 0, 8,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//	};

//	m_matrixes.bush_back(mag8);

}

std::vector<Matrix::MagX> Matrix::getMatrixes() const
{
    return m_matrixes;
}
