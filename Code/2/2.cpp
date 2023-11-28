#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 学生类
class Student {
public:
    int studentID;
    string name;

    Student(int id, const string& n) : studentID(id), name(n) {}
};

// 课程类
class Course {
public:
    string courseName;
    string courseID; // 课程号

    Course(const string& cn, const string& cid) : courseName(cn), courseID(cid) {}
};

// 成绩类
class Score {
public:
    int studentID;
    string courseName; // 课程名
    int score;

    Score(int id, const string& cn, int s) : studentID(id), courseName(cn), score(s) {}
};

// 根据学号查找对应的姓名
string findName(int studentID, const vector<Student>& students) {
    for (const auto& student : students) {
        if (student.studentID == studentID) {
            return student.name;
        }
    }
    return "未知姓名";
}

int main() {
    // 动态创建学生对象并赋值
    vector<Student> students;
    students.push_back(Student(20112001, "王雪"));
    students.push_back(Student(20112003, "卢萌"));

    // 动态创建课程对象并赋值（包括课程号）
    vector<Course> courses;
    courses.push_back(Course("数据结构", "c001"));
    courses.push_back(Course("操作系统", "c002"));
    courses.push_back(Course("数据库原理", "c003"));

    // 动态创建成绩对象并赋值
    vector<Score> scores;
    scores.push_back(Score(20112001, "数据结构", 92));
    scores.push_back(Score(20112001, "操作系统", 89));
    scores.push_back(Score(20112003, "操作系统", 90));

    // 输出学生的成绩信息
    cout << "学号     \t姓名      \t课程名称 \t分数" << endl;
    for (const auto& score : scores) {
        cout << score.studentID << "\t" << findName(score.studentID, students) << "\t\t"
             << score.courseName << "\t" << score.score << endl;
    }

    return 0;
}
