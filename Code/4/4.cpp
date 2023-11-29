#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> data;

public:
    Matrix(const vector<vector<int>>& input) : data(input) {}

    Matrix operator+(const Matrix& other) const {
        if (data.size() != other.data.size() || data[0].size() != other.data[0].size()) {
            cout << "无法进行加法运算：维度不匹配。" << endl;
            return Matrix(vector<vector<int>>());
        }

        vector<vector<int>> result(data.size(), vector<int>(data[0].size(), 0));
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                result[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return Matrix(result);
    }

    Matrix operator-(const Matrix& other) const {
        if (data.size() != other.data.size() || data[0].size() != other.data[0].size()) {
            cout << "无法进行减法运算：维度不匹配。" << endl;
            return Matrix(vector<vector<int>>());
        }

        vector<vector<int>> result(data.size(), vector<int>(data[0].size(), 0));
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                result[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return Matrix(result);
    }

    void print() const {
        for (const auto& row : data) {
            for (int element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    vector<vector<int>> arr1 = {{1, 2}, {3, 4}};
    vector<vector<int>> arr2 = {{5, 6}, {7, 8}};

    Matrix matrix1(arr1);
    Matrix matrix2(arr2);

    cout << "矩阵1：" << endl;
    matrix1.print();
    cout << endl;

    cout << "矩阵2：" << endl;
    matrix2.print();
    cout << endl;

    // 加法运算
    cout << "矩阵1 + 矩阵2：" << endl;
    Matrix result_add = matrix1 + matrix2;
    result_add.print();
    cout << endl;

    // 减法运算
    cout << "矩阵1 - 矩阵2：" << endl;
    Matrix result_subtract = matrix1 - matrix2;
    result_subtract.print();
    cout << endl;

    return 0;
}
/***
1.友元函数还是成员函数？

通常情况下，对于二元运算符（比如加法、减法、乘法等），将其定义为类的成员函数是更常见的方式。对于类的成员函数，可以更直接地访问类的私有成员变量，并提供更自然的语法。
但有时，如果需要重载的运算符不属于类的成员操作，或者无法直接访问类的私有成员，使用友元函数可能更合适。友元函数能够访问类的私有成员，但它们不是类的成员函数，而是定义在类外部的函数。

2.重载运算符的参数和返回值类型？

对于大部分情况，重载运算符的参数应该使用常量引用（const 引用）。这样可以避免在传递大型对象时产生不必要的复制开销，同时保证不修改传入的对象。
返回值通常也应当是常量引用或普通对象。对于赋值等操作，最好返回对象的副本，避免修改原始对象。
***/