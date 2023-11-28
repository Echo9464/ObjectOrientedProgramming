#include <iostream>
#include <vector>

using namespace std;

class PrimeNumbersFinder {
public:
    vector<int> findPrimesUpTo(int limit) {
        vector<bool> isPrime(limit + 1, true);
        vector<int> primes;

        for (int p = 2; p * p <= limit; ++p) {
            if (isPrime[p]) {
                for (int i = p * p; i <= limit; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        for (int p = 2; p <= limit; ++p) {
            if (isPrime[p]) {
                primes.push_back(p);
            }
        }

        return primes;
    }
};

int main() {
    PrimeNumbersFinder finder;
    int limit = 100;
    vector<int> primes = finder.findPrimesUpTo(limit);

    cout << limit << "以内的素数有：" << endl;
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
