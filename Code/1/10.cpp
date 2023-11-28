#include <iostream>

using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // 构造函数
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // 计算盒子表面积
    double calculateSurfaceArea() {
        return 2 * (length * width + length * height + width * height);
    }

    // 计算盒子体积
    double calculateVolume() {
        return length * width * height;
    }
};

int main() {
    double l, w, h;

    // 提示用户输入盒子的三条边长
    cout << "请输入盒子的长度、宽度和高度（用空格分隔）: ";
    cin >> l >> w >> h;

    // 创建一个盒子对象
    Box myBox(l, w, h);

    // 计算并输出盒子的表面积和体积
    cout << "盒子的表面积为: " << myBox.calculateSurfaceArea() << endl;
    cout << "盒子的体积为: " << myBox.calculateVolume() << endl;

    return 0;
}
