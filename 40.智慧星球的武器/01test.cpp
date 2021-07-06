#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    int weapon(int k ,vector<vector<int>> &borders)
    {
        // for(int i=0;i<k;i++)
        // {
        //         cout<<borders[i][0]<<"  "<<borders[i][1]<<endl;
        // }
        // if(k<1||k>1000)
        // {
        //     return 0;
        // }
        double result = 1.0;
        for(int i=0;i<k;i++)
        {
                if(borders[i][0]==1)
                {
                    result = result + borders[i][1];
                } 
                else if(borders[i][0]==2)
                {
                    result = result * borders[i][1];
                }
                else if(borders[i][0]==3)
                {
                    result = ceil(result/borders[i][1]);
                }
                
        }
        return result;
    }
};
int main()
{   
    Solution s;
    int k ;
    vector<int> border;
    vector<vector<int>>  borders;
    cout<<"please input the number of borders:"<<endl;
    cin>>k;
    int z,p;
    for(int i = 0;i<k;i++)
    {
        cout<<"please input num "<<i+1<<"   border"<<endl;
        cin>>z>>p;
        border.push_back(z);
        border.push_back(p);
        borders.push_back(border);
        border.clear();
    }
    // k = 6;
    // border.push_back(1);
    // border.push_back(6);
    // borders.push_back(border);
    // border.clear();
    // border.push_back(2);
    // border.push_back(3);
    // borders.push_back(border);
    // border.clear();
    // border.push_back(3);
    // border.push_back(3);
    // borders.push_back(border);
    // border.clear();
    // border.push_back(2);
    // border.push_back(3);
    // borders.push_back(border);
    // border.clear();
    // border.push_back(2);
    // border.push_back(3);
    // borders.push_back(border);
    // border.clear();
    // border.push_back(3);
    // border.push_back(7);
    // borders.push_back(border);
    // border.clear();

    int  result = s.weapon(k,borders);
    cout<<"The side length of kill range is :"<<endl;
    cout<<result<<endl;
    return 0;
}