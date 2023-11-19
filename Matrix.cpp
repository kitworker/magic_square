/*
* Matrix.cpp
*
 *  Created on: 10 авг. 2023 г.
 *      Author: knik
 */

#include "Matrix.h"

#include <algorithm>

template <int DIM>
Matrix<DIM>::Matrix()
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

template <int DIM>
void Matrix<DIM>::addNumber(int row, int column, const Number& number)
{
    MagX magX;
	if (m_matrixes.empty())
	{
        magX[row][column] = number;
	}
	else
	{
        magX = m_matrixes.back();
        magX[row][column] = number;
	}

    m_matrixes.push_back(magX);
}

template <int DIM>
void Matrix<DIM>::addItem(int row, int column, int value)
{
	addNumber(row - 1, column - 1, Number(m_index, value));
    ++m_index;
}

template  <int DIM>
typename Matrix<DIM>::Number Matrix<DIM>::getItem(int index, int row, int column)
{
    return getMatrix(index)[row - 1][column - 1];
}

template  <int DIM>
typename Matrix<DIM>::MagX Matrix<DIM>::getMatrix(int index) const
{
	return m_matrixes[index];
}

template  <int DIM>
void Matrix<DIM>::init() {
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

template  <int DIM>
std::vector<typename Matrix<DIM>::MagX> Matrix<DIM>::getMatrixes() const
{
    return m_matrixes;
}

template class Matrix<2>;
template class Matrix<3>;
