#include <iostream>
using namespace std;

    //struct和class的区别
    //struct 默认权限是 公共 public
    //class 默认权限是 私有 private


class Cc{
    int m_A;//默认私有
};
struct Dd{
    int m_A;//默认公共
};
int main(){
    // 通过类创建对象叫实例化
    Cc c1;
    Dd c2;
    // c1.m_A = 100;//报错，私有属性，类外不能访问
    c2.m_A = 200;
    return 0;
}