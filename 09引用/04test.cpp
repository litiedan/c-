#include<iostream>
using namespace std;
// 引用的本质，在c++内部实现是一个指针常量
//引用的本质是指针常量，但是所有的指针操作由编译器做了，所以推荐使用
void func()
{

}
int main()
{
    int a = 10;
    int &ref = a;
    //系统自动转化为 
    // int * const ref  = & a;
    // 指针常量是指针指向不可改，所以引用不可改
    ref = 20;
    //系统发现是引用，自动转为  * ref  = 20;

    //例如
    int  aa  = 100;
    int * const reff  = & aa;
    * reff  = 20;

    cout<<a<<endl;
    cout<<aa<<endl;
    return 0;
}