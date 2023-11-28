#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


using namespace std;

class Circle {
private:
    double radius;
    double x_center;
    double y_center;

public:
    // 构造函数
    Circle(double r, double x, double y) : radius(r), x_center(x), y_center(y) {}

    // 计算圆的面积
    double area() {
        return M_PI * radius * radius;
    }

    // 计算圆的周长
    double circumference() {
        return 2 * M_PI * radius;
    }

    // 判断点与圆的位置关系
    void pointRelation(double x, double y) {
        double distance = sqrt(pow((x - x_center), 2) + pow((y - y_center), 2));
        if (distance < radius) {
            cout << "点(" << x << ", " << y << ") 在圆内部" << endl;
        } else if (distance == radius) {
            cout << "点(" << x << ", " << y << ") 在圆上" << endl;
        } else {
            cout << "点(" << x << ", " << y << ") 在圆外部" << endl;
        }
    }
};

int main() {
    double radius, x_center, y_center;
    cout << "请输入圆的半径: ";
    cin >> radius;
    cout << "请输入圆心的 x 坐标: ";
    cin >> x_center;
    cout << "请输入圆心的 y 坐标: ";
    cin >> y_center;

    Circle circle(radius, x_center, y_center);

    cout << "圆的面积为: " << circle.area() << endl;
    cout << "圆的周长为: " << circle.circumference() << endl;

    double x, y;
    cout << "请输入一个点的 x 坐标: ";
    cin >> x;
    cout << "请输入一个点的 y 坐标: ";
    cin >> y;

    circle.pointRelation(x, y);

    return 0;
}
