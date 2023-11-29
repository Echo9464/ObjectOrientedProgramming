#include <iostream>

using namespace std;

template<class T, int n>
class reverseOutput {
    T data[n];

public:
    void inData() {
        cout << "输入 " << n << " 元素:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> data[i];
        }
    }

    void outData() {
        cout << "结果输出 " << n << " 元素:" << endl;
        for (int i = n - 1; i >= 0; --i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    reverseOutput<int, 5> reverseInt;

    reverseInt.inData();
    reverseInt.outData();

    return 0;
}
