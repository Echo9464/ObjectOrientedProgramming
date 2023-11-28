#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class PascalTriangle {
public:
    PascalTriangle(int rows) : numRows(rows) {}

    void generateTriangle() {
        calculateTriangle();
        int maxDigits = getMaxDigits();

        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j <= i; ++j) {
                cout << setw(maxDigits) << triangle[i][j] << " ";
            }
            cout << endl;
        }
    }

private:
    int numRows;
    vector<vector<int>> triangle;

    void calculateTriangle() {
        triangle.resize(numRows);
        for (int i = 0; i < numRows; ++i) {
            triangle[i].resize(i + 1);
            triangle[i][0] = triangle[i][i] = 1;

            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    int getMaxDigits() {
        int maxDigits = 0;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j <= i; ++j) {
                int digits = countDigits(triangle[i][j]);
                if (digits > maxDigits) {
                    maxDigits = digits;
                }
            }
        }
        return maxDigits;
    }

    int countDigits(int number) {
        int digits = 0;
        while (number != 0) {
            number /= 10;
            ++digits;
        }
        return digits;
    }
};

int main() {
    int rows;

    cout << "请输入杨辉三角的行数：";
    cin >> rows;

    PascalTriangle triangle(rows);
    triangle.generateTriangle();

    return 0;
}
