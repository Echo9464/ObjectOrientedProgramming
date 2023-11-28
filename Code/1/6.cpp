#include <iostream>
#include <vector>

class NarcissisticNumber {
public:
    static bool isNarcissistic(int num) {
        int originalNum = num;
        int sum = 0;
        int numOfDigits = countDigits(num);

        while (num > 0) {
            int digit = num % 10;
            sum += pow(digit, numOfDigits);
            num /= 10;
        }

        return sum == originalNum;
    }

    static void printNarcissisticNumbers() {
        std::vector<int> narcissisticNumbers;
        for (int i = 100; i <= 999; ++i) {
            if (isNarcissistic(i)) {
                narcissisticNumbers.push_back(i);
            }
        }

        if (narcissisticNumbers.empty()) {
            std::cout << "未找到水仙花数" << std::endl;
        } else {
            std::cout << "水仙花数有：" << std::endl;
            for (int num : narcissisticNumbers) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    }

private:
    static int countDigits(int num) {
        int count = 0;
        while (num != 0) {
            num /= 10;
            ++count;
        }
        return count;
    }

    static int pow(int base, int exponent) {
        int result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }
};

int main() {
    NarcissisticNumber::printNarcissisticNumbers();
    return 0;
}
