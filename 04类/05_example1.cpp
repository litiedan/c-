#include <iostream>
#include <string>
using namespace std;

    //成员属性设置为私有
    //1.可以自己控制读写权限
    //2.对于写可以检测数据的有效性

class Cube{
//成员属性设置为私有，类外不可以访问。但是可以通过设置公共的成员函数来实现对成员属性的访问。
public:
    float m_H,m_L,m_W;
    //输入长宽高
    void setLWH(float L,float W,float H)
    {
        m_L = L;
        m_W = W;
        m_H = H;
    }
    //求面积
    float getS()
    {
        return 2*(m_L * m_W + m_L * m_H + m_W * m_H);
    }
    //求体积
    float getV()
    {
        return m_L * m_W * m_H;
    }
    //利用成员函数判断两个立方体是否相等
    void isSameByClass(Cube c)
    {
        if(m_L == c.m_L && m_W == c.m_W && m_H == c.m_H)
        {
            cout<<"same"<<endl;
        }
        else
        {
            cout<<"not same"<<endl;
        }
    }
    // void panduan()
// private:
    
//     float m_H,m_L,m_W;
};
void isSame(Cube &a,Cube &b)//全局函数要写在主函数前面
{
    if(a.m_L == b.m_L && a.m_W == b.m_W && a.m_H == b.m_H)
    {
        cout<<"same"<<endl;
    } 
    else
    {
        cout<<"not same"<<endl;
    }
}
int main(){
    // 通过类创建对象叫实例化
    Cube c1,c2;
    c1.setLWH(1,2,3);
    
    cout<<c1.getS()<<endl;
    cout<<c1.getV()<<endl;
    c2.setLWH(1,2,3);
    cout<<c2.getS()<<endl;
    cout<<c2.getV()<<endl;
    isSame(c1,c2);//调用全局函数，函数必须写在主函数前
    c1.isSameByClass(c2);//c1调用成员函数，参数为c2,判断是否相等
    return 0;
}
