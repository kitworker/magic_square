#pragma once

#include <vector>
#include <array>

/**
 *
 * одномерные Массивы как регулярные структуры
 * А поля структур как стек (объемный 3d!) массива
 */
template <int DIM>
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

    using MagX = std::array<std::array<Number, DIM>, DIM>;

public:
    Matrix();

    void addItem(int row, int column, int value);
    Number getItem(int index, int row, int column);
    MagX getMatrix(int index) const;

    std::vector<MagX> getMatrixes() const;

private:
    void addNumber(int row, int column, const Number& number);
    void init();

private:
    std::vector<MagX> m_matrixes;
    int m_index;
    //	std::array<std::array<int>> multiArray;
};
