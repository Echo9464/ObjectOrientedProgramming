#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator-(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);

    void print() const {
        cout << numerator << "/" << denominator;
    }
};

// 加法重载友元函数
Fraction operator+(const Fraction& f1, const Fraction& f2) {
    int num = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    int denom = f1.denominator * f2.denominator;
    return Fraction(num, denom);
}

// 减法重载友元函数
Fraction operator-(const Fraction& f1, const Fraction& f2) {
    int num = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    int denom = f1.denominator * f2.denominator;
    return Fraction(num, denom);
}

// 乘法重载友元函数
Fraction operator*(const Fraction& f1, const Fraction& f2) {
    int num = f1.numerator * f2.numerator;
    int denom = f1.denominator * f2.denominator;
    return Fraction(num, denom);
}

int main() {
    Fraction fraction1(2, 3);
    Fraction fraction2(4, 5);

    // 加法
    Fraction result_add = fraction1 + fraction2;
    fraction1.print();
    cout << " + ";
    fraction2.print();
    cout << " = ";
    result_add.print();
    cout << endl;

    // 减法
    Fraction result_subtract = fraction1 - fraction2;
    fraction1.print();
    cout << " - ";
    fraction2.print();
    cout << " = ";
    result_subtract.print();
    cout << endl;

    // 乘法
    Fraction result_multiply = fraction1 * fraction2;
    fraction1.print();
    cout << " * ";
    fraction2.print();
    cout << " = ";
    result_multiply.print();
    cout << endl;

    return 0;
}
