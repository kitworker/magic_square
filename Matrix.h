#pragma once

#include <vector>
#include <array>

/**
 *
 * одномерные Массивы как регулярные стркутуры
 * А поля структур как стек (объемынй3!) массива
 */
class Matrix
{
public:
    struct Number
    {
        int index;
        int value;
        Number() = default; // @suppress("Class members should be properly initialized")
        explicit Number(int index, int value)
            : index(index)
            , value(value)
        {

        }

        bool operator==(const Number& num) const
        {
            return num.value == value;
        }
    };

    //	using Mag8 = std::array<int>; // int[8][8];
    //const int DIM = 2;
    using MagX = std::array<std::array<Number, 2>, 2>;
public:
    Matrix();

    void addItem(int row, int column, int value);
    Number getItem(int index, int row, int column);
    MagX getMatrix(int index) const;

    std::vector<MagX> m_matrixes;
private:
    void addNumber(int row, int column, const Number& number);
    void init();

    //private:
    //	std::vector<Mag8> m_matrixes;
    int m_index;
    // using stack replace list

    //	std::array<std::array<int>> multiArray;
};
