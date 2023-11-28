#include <iostream>
#include <ctime>

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Clock(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void displayTime() {
        std::cout << "当前时间: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    void setTime(int newHours, int newMinutes, int newSeconds) {
        hours = newHours;
        minutes = newMinutes;
        seconds = newSeconds;
        std::cout << "修改后的时间: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};

int main() {
    // 获取系统时间
    time_t currentTime = time(nullptr);
    tm *localTime = localtime(&currentTime);
    int currentHours = localTime->tm_hour;
    int currentMinutes = localTime->tm_min;
    int currentSeconds = localTime->tm_sec;

    // 创建时钟对象并显示当前时间
    Clock clock(currentHours, currentMinutes, currentSeconds);
    clock.displayTime();

    // 修改时、分、秒
    clock.setTime(9, 5, 37);

    return 0;
}
