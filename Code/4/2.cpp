#include <iostream>
#include <string>

using namespace std;

// 建立基类 Building
class Building {
protected:
    int floors;
    int rooms;
    float footage;

public:
    virtual void inputData() {
        cout << "请输入楼房的层数: ";
        cin >> floors;
        cout << "请输入楼房的房间数: ";
        cin >> rooms;
        cout << "请输入楼房的总面积: ";
        cin >> footage;
    }

    virtual void displayData() const {
        cout << "楼房的基本信息:" << endl;
        cout << "层数: " << floors << endl;
        cout << "房间数: " << rooms << endl;
        cout << "总面积: " << footage << " 平方米" << endl;
    }
};

// 派生类 House
class House : public Building {
private:
    int bedrooms;
    int bathrooms;

public:
    void inputData() override {
        Building::inputData();
        cout << "请输入卧室数量: ";
        cin >> bedrooms;
        cout << "请输入浴室数量: ";
        cin >> bathrooms;
    }

    void displayData() const override {
        Building::displayData();
        cout << "卧室数量: " << bedrooms << endl;
        cout << "浴室数量: " << bathrooms << endl;
    }
};

// 派生类 Office
class Office : public Building {
private:
    int extinguishers;
    int phones;

public:
    void inputData() override {
        Building::inputData();
        cout << "请输入灭火器数量: ";
        cin >> extinguishers;
        cout << "请输入电话数量: ";
        cin >> phones;
    }

    void displayData() const override {
        Building::displayData();
        cout << "灭火器数量: " << extinguishers << endl;
        cout << "电话数量: " << phones << endl;
    }
};

int main() {
    House house;
    Office office;

    cout << "请输入房屋的信息：" << endl;
    cout << "House:" << endl;
    house.inputData();

    cout << "\nOffice:" << endl;
    office.inputData();

    cout << "\n显示房屋的信息：" << endl;
    cout << "House:" << endl;
    house.displayData();

    cout << "\nOffice:" << endl;
    office.displayData();

    return 0;
}
