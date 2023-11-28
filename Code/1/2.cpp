#include <iostream> 

using namespace std;

class Calculator{
    public: 
            int Calculate(int num){
                if (num == 0 || num == 1) {
                    return 1;
                } 
                else {
                    int factorial = 1;
                    for (int i = 1; i <= num; ++i) {
                    factorial *= i;
                    }
                return factorial;
                }
            }
};
int main(){
    Calculator calculator;
    int sum=0;
    for (int i = 0; i <= 10; ++i) {
        if(i%2!=0){
        int factorial = calculator.Calculate(i);
        sum += factorial;
        cout << i << "! = " << factorial << endl;
        }
    }
    cout << "1!+3!+… +9!="<<sum << endl;
    return 0;

}