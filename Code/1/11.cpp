#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        std::cout << "开始时间: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    void modify(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
        std::cout << "竞赛时间已修改为: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    ~Time() {
        std::cout << "结束时间: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};

int main() {
    // 初始化时间为10:30:00
    Time startTime(10, 30, 0);
    // 假设比赛时间修改为11:15:45
    startTime.modify(11, 15, 45);
    // 在main函数结束时会自动调用析构函数记录结束时间
    return 0;
}
