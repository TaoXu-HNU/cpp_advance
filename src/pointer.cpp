# include <pointer.hpp>

Pointer::Pointer()
{


}

Pointer::~Pointer()
{
    // if(p2memory != nullptr)  // 手动释放开辟的堆内存
    // {
    //     free(p2memory);
    //     p2memory = nullptr;
    // }
}

/****************  指针运算 ***********************/
void Pointer::pointer_Compute()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = a;  // 指针变量的类型需要与所指向地址的类型保持一致，才可进行运算

    p2memory = (int *)malloc(10*sizeof(int));  // 开辟堆内存
    
    for(int i=0; i<10; i++)
    {
        // cout<<"p["<<i<<"]的值为: "<<*p<<endl;
        p++;  // 类型相同才可进行加减运算

        *(p2memory+i) = a[i];
        // cout<<"memory["<<i<<"]的值为: "<<*(p2memory+i)<<endl;
    }

}

/***************  指针指向变量 ************************/
void Pointer::pointer_to_Varibles()
{
    int a = 2;
    cout <<"a的值为: " << a << endl;

    int *p = &a;
    *p = 6;
    cout << "a的值为: " << a << endl;
}

/****************  指针指向一片堆内存(需配合pointer_Compute()函数使用) ***********************/
void Pointer::pointer_to_Memory()
{
    for(int i=0; i<10; i++)
    {
        cout<<"Memory["<<i<<"]的值为: "<<*(p2memory + i)<<endl;
    } 
}

/****************  指针指向数组(需配合pointer_Compute()函数使用) ***********************/
void Pointer::pointer_to_Arrays()
{
    int *p2Arrays = p2memory;

    for (int i=0; i<10; i++)
    {
        cout<<"array["<<i<<"]的值为: "<<*(p2Arrays+i)<<endl;
    }
}

/***************** 指针指向函数并实现函数调用 **********************/
int Pointer::pointer_to_Function(int a)
{
    cout<<"a的值为: "<<a<<endl;
}

/*************** 把函数作为参数进行传入(基于指针) ************************/
int  Pointer::pointer_income_Function(int a, int (Pointer::*callback)() )   
{

    Pointer point;

    cout<<"a的值为: "<<a<<endl;

    int ret = (point.*callback)();

    return 0;

}

/************** 把函数作为参数进行传入例程的 辅助函数 **********************/
int Pointer::funcA()
{
    cout<<"This is funcA !"<<endl;

    return 0;
}

int Pointer::funcB()
{
    cout<<"This is funcB !"<<endl;

    return 0;
}

int Pointer::funcC()
{
    cout<<"This is funcC !"<<endl;

    return 0;
}

/**************** 函数返回地址 ************************/
int  * Pointer::function_Return_Pointer()
{
    int array[5] = {0, 1, 2, 3, 4};
    int *p1 = (int *)malloc(5*sizeof(int));

    for(int x=0; x<5; x++)
    {
        *(p1+x) = array[x];
    }
    return p1;
}


int main(int argc, char **argv)
{
    Pointer *pointer = new Pointer();

    // // 指针运算
    // pointer->pointer_Compute();

    // // 指针指向变量
    // pointer->pointer_to_Varibles();

    // // 指针指向一片堆内存
    // pointer->pointer_Compute();
    // pointer->pointer_to_Memory();

    // // 指针指向数组
    // pointer->pointer_Compute();
    // pointer->pointer_to_Arrays();
    
    // // 指针指向函数并实现调用
    // int (Pointer::*funP)(int c) = &Pointer::pointer_to_Function;  // 声明指向函数的指针(指向类中的函数时需要加上“::”符号)
    // int ret = (pointer->*funP)(666);   // 通过指针调用函数

    // 函数作为参数传入(基于指针实现)，属于址传递的范畴
    pointer->pointer_income_Function(888, &Pointer::funcB);

    // // 函数返回一个地址
    // int *func2point = pointer->function_Return_Pointer(); 
    // cout<<*(func2point+3)<<endl;
    // free(func2point);

    delete pointer;

    
}