#include <iostream>
using namespace std;
class Test{
    public:
    int* pointer;
    Test(){
    int i=0;
    pointer=&i;
    }
    Test(const Test&p ) {
    int j=0;
    pointer=&j;
    }
};
int main()
{
    Test h;
    Test h2(h);
}

// 分析程序，回答问题

// 问题：
// （1）、对象h和h2是否占用同一块内存；为什么？
// （2）、对象h的pointer与h2的pointer是否占用同一块内存；为什么？
// （3）、 对象h的pointer与h2的pointer的值是否相等，为什么？
// （1）对象h和h2并不会占用同一块内存，因为每个对象都有自己的成员变量，包括指针变量 pointer，在拷贝构造函数中，指针被重新赋值，导致指向不同的内存地址。


// （2）对象h的pointer与h2的pointer会占用同一块内存，因为在拷贝构造函数中没有进行动态内存分配，而是直接将指针指向了另一个局部变量的地址。所以它们指向了不同的内存地址。


// （3）对象h的pointer与h2的pointer的值不相等，因为它们指向不同的局部变量，所以指针存储的地址值也会不同。