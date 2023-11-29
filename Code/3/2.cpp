#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    float score;

public:
    Student(string studentName, float studentScore) : name(studentName), score(studentScore) {}

    friend void compareScores(Student s1, Student s2);
};

void compareScores(Student s1, Student s2) {
    if (s1.score > s2.score) {
        cout << s1.name << "的成绩更高: " << s1.score << endl;
        cout << "最高分学生姓名: " << s1.name << endl;
    } else if (s1.score < s2.score) {
        cout << s2.name << "的成绩更高: " << s2.score << endl;
        cout << "最高分学生姓名: " << s2.name << endl;
    } else {
        cout << "两位学生成绩相同: " << s1.score << endl;
    }
}

int main() {
    Student student1("小红", 85.5);
    Student student2("小明", 92.0);

    compareScores(student1, student2);

    return 0;
}
