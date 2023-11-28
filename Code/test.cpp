#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class PascalTriangle {
private:
     vector< vector<int>> triangle;

public:
    PascalTriangle(int rows) {
        triangle.resize(rows);
        for (int i = 0; i < rows; ++i) {
            triangle[i].resize(i + 1);
            triangle[i][0] = 1;
            triangle[i][i] = 1;

            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    void displayTriangle() {
        int rows = triangle.size();
        for (int i = 0; i < rows; ++i) {
            // Creating padding for each element to occupy 2 spaces
             cout <<  setw((rows - i) * 3);
            for (int j = 0; j <= i; ++j) {
                 cout <<  setw(2) << triangle[i][j] << "   ";
            }
             cout <<  endl;
        }
    }
};

int main() {
    int rows;
     cout << "请输入预生成的杨辉三角的行数: ";
     cin >> rows;

    PascalTriangle pascal(rows);
    pascal.displayTriangle();

    return 0;
}
