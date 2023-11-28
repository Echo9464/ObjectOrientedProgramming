#include <iostream>
using namespace std;
class HowMany{
    static int count;
    string name;
public:
    HowMany():name("hello"){
        count ++;
        cout << "HowMany()" << endl;
    }
    static void print(){
        cout << "Now ="<<count << endl;
    }
    ~HowMany(){
        count--;
        cout<<"~HowMany()" << endl;
    }
};
int HowMany::count=0;
HowMany f(HowMany x){
    x.print();
    return x;
}
int main(){
    HowMany h;
    HowMany::print();
    HowMany h2=f(h);
    HowMany::print();
}
// 输出结果：
// HowMany()
// Now =1
// Now =1
// ~HowMany()
// Now =0
// ~HowMany()
// ~HowMany()