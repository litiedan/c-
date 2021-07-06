//二维数组的案例
//分别计算三位学生的总成绩
//                class1  class2 class3
// zhang       100         100     100
// li                  90              50          100 
// wang        60              70              80
#include <iostream>
using namespace std;

void print2array(int array[3][3])
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout<<array[i][j]<<"    ";
        }
        cout<<endl;
    }
}

void score(int array[3][3])
{
    
    for(int i = 0;i < 3;i++)
    {
        int sum = 0;
        for(int j = 0;j < 3;j++)
        {
            sum = sum + array[i][j];
        }
        cout<<sum<<endl;;
    }
}

int main(int argc, const char * argv[])
{


    int scores[][3] = {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    print2array(scores);
    score(scores);
    return 0;
}