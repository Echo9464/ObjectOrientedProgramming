#include <iostream>
#include <vector>

int main() {
    // 建立动态数组
    std::vector<int> dynamicArray;

    // 为动态数组的元素赋值
    dynamicArray.push_back(10);
    dynamicArray.push_back(20);
    dynamicArray.push_back(30);

    // 显示动态数组的值
    std::cout << "动态数组的值为：";
    for (size_t i = 0; i < dynamicArray.size(); ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // 删除动态数组（不是必须，因为在程序结束时会自动销毁）
    dynamicArray.clear();

    return 0;
}
