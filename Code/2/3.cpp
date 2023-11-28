#include <iostream>
using namespace std;

class Test
{
    public:
    int* pointer;
    Test() {
        int i=0;
        pointer = &i;
        }

};

int main(){
    Test h;
    Test h2(h);
}
// 分析程序，回答问题

// （1）对象h和h2是否占用同一块内存；为什么？
// （2）对象h的pointer与h2的pointer是否占用同一块内存；为什么？
// （3）对象h的pointer与h2的pointer的值是否相等，为什么？

// （1）对象h和h2不会占用同一块内存。因为在拷贝构造函数中我们使用了深拷贝，所以h和h2拥有各自独立的指针和指向的内存空间。


// （2）对象h的pointer与h2的pointer不会占用同一块内存。因为深拷贝会创建新的内存空间来存储指针指向的值，所以h和h2的pointer指向不同的内存地址。


// （3）对象h的pointer与h2的pointer的值是相等的。因为在拷贝构造函数中我们进行了深拷贝，所以h和h2的pointer指向的值是相等的。
