#include <iostream> 
#include <iomanip>
using namespace std;

class Calculator{
    // public: 
    //         int Calculate(int row, int col){
    //             return row * col;
    //         }
    public: 
            void PrintOne(int row, int col){
                cout<<row<<"*"<<col<<"="<< row*col<<setw(2);
            }
            void PrintOneRow(int row){
                for(int i=1; i<=row; i++){
                    PrintOne(row, i);
                    cout<<" ";
                }
            }
};
int main(){
    Calculator calculator;
    for(int i=1; i<=9; i++){
        calculator.PrintOneRow(i);
        cout<<endl;
    }
    return 0;

}