#include <iostream>

using namespace std;

template <typename T, size_t size>
void arrayOperations(T (&arr)[size]) {
    T maxVal = arr[0];
    T minVal = arr[0];
    T sum = arr[0];

    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        sum += arr[i];
    }

    cout << "最大值: " << maxVal << endl;
    cout << "最小值: " << minVal << endl;
    cout << "平均值: " << sum / static_cast<T>(size) << endl;
}

int main() {
    int intArray[] = {5, 2, 9, 1, 7};

    cout << "结果：" << endl;
    arrayOperations(intArray);

    return 0;
}
