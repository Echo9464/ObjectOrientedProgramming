#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int id;
    string name;
    static int classNumber;
    static int classSize;

public:
    Student(int studentId, string studentName) : id(studentId), name(studentName) {}

    static void setClass(int number, int size) {
        classNumber = number;
        classSize = size;
    }

    static void getClassInfo() {
        cout << "班级编号: " << classNumber << endl;
        cout << "班级人数: " << classSize << endl;
    }

    void displayInfo() {
        cout << "学生学号: " << id << endl;
        cout << "学生姓名: " << name << endl;
        cout << "学生班级: " << classNumber << endl;
    }

    static void incrementClassSize() {
        classSize++;
    }
};

int Student::classNumber = 0;
int Student::classSize = 0;

int main() {
    Student::setClass(10, 30); // 设置班级信息

    Student student1(101, "小红");
    Student student2(102, "小明");

    student1.displayInfo();
    student2.displayInfo();

    // 验证是否占用同一内存
    cout << "student1 的内存位置: " << &student1 << endl;
    cout << "student2 的内存位置: " << &student2 << endl;

    // 调用静态成员函数增加班级人数
    Student::incrementClassSize();

    // 调用静态成员函数显示班级信息
    Student::getClassInfo();

    return 0;
}
