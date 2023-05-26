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

    void pointer_to_Function(); // 指针指向函数

    void pointer_Return_Function(); // 函数返回指针


    
};