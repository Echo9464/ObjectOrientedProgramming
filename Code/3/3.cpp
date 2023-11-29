#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    float x, y;

public:
    Point(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}

    friend float calculateDistance(Point p1, Point p2);
};

float calculateDistance(Point p1, Point p2) {
    float distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return distance;
}

int main() {
    Point point1(1.0, 4.0);
    Point point2(6.0, 8.0);

    float dist = calculateDistance(point1, point2);

    cout << "两点之间的距离为: " << dist << endl;

    return 0;
}
