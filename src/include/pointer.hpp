# include <iostream>
# include <stdlib.h> // 与堆内存有关的头文件

using namespace std;

class Pointer
{
public:
    Pointer();
    ~Pointer();

public:
    void pointer_Compute();  // 指针运算

    void pointer_to_Memory();  // 指针指向堆内存

    void pointer_to_Varibles();  // 指针指向变量

    void pointer_to_Arrays();  // 指针指向数组

    int  pointer_to_Function(int a);  // 指针指向函数并实现函数调用

    int  pointer_income_Function(int a, int (Pointer::*callback)() ); // 把函数作为参数进行传入(基于指针)

    int  *function_Return_Pointer(); // 函数返回地址

    int  funcA();
    int  funcB();
    int  funcC();

private:
    int *p2memory;  // 指向堆内存的指针，需要手动释放
    
};