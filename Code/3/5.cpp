#include <iostream>
#include <cstring>

// 函数模板定义，求出type类型的两个数据a与b中的大者并返回
template<class type>
type max(type a, type b) {
    return (a > b) ? a : b;
}

// 函数重载，求出两个字符串a与b中的大者并返回
char* max(char* a, char* b) {
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main() {
    // 定义数字变量
    int num1 = 5;
    int num2 = 10;
    double num3 = 7.5;
    double num4 = 3.2;

    // 测试函数模板 max
    std::cout << "使用函数模板 max：\n";
    std::cout << num1 << " 和 " << num2 << " 中的最大值: " << max(num1, num2) << std::endl;
    std::cout << num3 << " 和 " << num4 << " 中的最大值: " << max(num3, num4) << std::endl;

    // 测试函数 max
    std::cout << "\n使用字符串的 max 函数：\n";
    char str1[] = "apple";
    char str2[] = "banana";
    std::cout << "\"" << str1 << "\" 和 \"" << str2 << "\" 中的最大值: " << max(str1, str2) << std::endl;

    return 0;
}
//这个程序中不能using namespace std,因为命名空间std中本身就有一个函数名为max,会导致函数重载冲突