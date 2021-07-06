#include<iostream>
#include<string>
using namespace std;

//string的赋值操作
void test01()
{
    // 1
    string str1;
    str1 = "hellow word";
    cout<<"str1:    "<<str1<<endl;
    //2.
    string str2;
    str2 = str1;
    cout<<"str2:    "<<str2<<endl;
    //3
    string str3;
    str3 = 'a';
    cout<<"str3:    "<<str3<<endl;
    //4 assign赋值
    string str4;
    str4.assign("hellow word");
    cout<<"str4:    "<<str4<<endl;
    //5         取字符串中的前几个元素
    string str5;
    str5.assign("hellow word",5);
    cout<<"str5:    "<<str5<<endl;//hello
    //6
    string str6;
    str6.assign(str5);
    cout<<"str6:    "<<str6<<endl;//hello
    //7
    string str7;
    str7.assign(10,'w');
    cout<<"str7:    "<<str7<<endl;//hello

}


int main()
{
    test01();
    return 0;
}