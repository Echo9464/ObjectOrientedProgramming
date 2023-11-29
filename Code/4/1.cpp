#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846; // 手动定义圆周率

class Shape {
public:
    virtual void show() const = 0;
    virtual double area() const = 0;
    virtual double volume() const = 0;
};

class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    void show() const override {
        cout << "球 - 半径：" << radius << endl;
        cout << "表面积：" << area() << endl;
        cout << "体积：" << volume() << endl;
    }

    double area() const override {
        return 4 * PI * radius * radius;
    }

    double volume() const override {
        return (4.0 / 3) * PI * pow(radius, 3);
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    void show() const override {
        cout << "圆柱 - 底面半径：" << radius << "，高：" << height << endl;
        cout << "表面积：" << area() << endl;
        cout << "体积：" << volume() << endl;
    }

    double area() const override {
        return 2 * PI * radius * (radius + height);
    }

    double volume() const override {
        return PI * radius * radius * height;
    }
};

class Cone : public Shape {
private:
    double radius;
    double height;

public:
    Cone(double r, double h) : radius(r), height(h) {}

    void show() const override {
        cout << "圆锥 - 底面半径：" << radius << "，高：" << height << endl;
        cout << "表面积：" << area() << endl;
        cout << "体积：" << volume() << endl;
    }

    double area() const override {
        double slant_height = sqrt(radius * radius + height * height);
        return PI * radius * (radius + slant_height);
    }

    double volume() const override {
        return (1.0 / 3) * PI * radius * radius * height;
    }
};

int main() {
    Sphere sphere(5.0);
    Cylinder cylinder(3.0, 4.0);
    Cone cone(6.0, 8.0);

    cout << "球的详情：" << endl;
    sphere.show();

    cout << "\n圆柱的详情：" << endl;
    cylinder.show();

    cout << "\n圆锥的详情：" << endl;
    cone.show();

    return 0;
}
