#include <iostream>

// 定义交换类
class ValueSwapper {
public:
    // 交换函数
    void swapValues(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    using namespace std;

    int num1 = 5;
    int num2 = 10;

    cout << "初始值：" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // 创建交换类对象
    ValueSwapper swapper;

    // 调用交换函数
    swapper.swapValues(num1, num2);

    cout << "交换后：" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
