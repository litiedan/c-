#include<iostream>
using namespace std;
// //函数的常见形式
// 1.无参无反
void func1()
{
    cout<<"love"<<endl;
}
// 2.有参无返
void func2(int a,int b)
{
    cout<<a+b<<endl;
}
// 3.无参有反
int func3()
{
    cout<<"func3"<<endl;
    return 0;
}
// 4.有参有反
int func4(int a,int b)
{
    return a+b;
}
int main()
{   
    //1.无参无反函数调用
    func1();
    //2.有参无返函数调用
    func2(1,2);
    // 3.无参有反函数调用
    int a = func3();
    cout<<a<<endl;
    // 4.有参有反函数调用
    int b = func4(1,2);
    cout<<b<<endl;
    
    return 0;

}