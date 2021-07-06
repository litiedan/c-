#include<iostream>
using namespace std;

// const修饰指针有三种情况：
// 1.const修饰指针--常量指针      用法： const 数据类型 * 指针常量 = &常量
//  特点：指针的指向可以修改，但是指针指向的值不可以
// 2.const修饰常量--指针常量    用法： 数据类型 * const 指针常量 = &常量
//  特点：指针的指向不可以修改，但是指针指向的值可以
// 3.const既修饰指针又修饰常量      用法： const 数据类型 * const 指针常量 = &常量
//  特点：指针的指向不可以修改，但是指针指向的值也不可以

int main()
{   
    //1.const修饰指针--常量指针 
    int a = 10;
    int b = 20;
    const int * p = & a;
    // *p = 10;//错误
    p = &b;//正确

    // 2.const修饰常量--指针常量
    int * const p2 = & a;
    *p2 = 10;//正确
    // p2 = &b;//错误

    // 3.const既修饰指针又修饰常量
    const int * const p3 = & a;
    // *p3 = 10;//错误
    // p3 = &b;//错误

}