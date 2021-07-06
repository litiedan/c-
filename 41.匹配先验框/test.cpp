#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Box
{
public:
    double minx,miny,maxx,maxy;
};
class Solution {
public:
    int matching(double w,double h,double s, double t,double k,double P,double Q,vector<vector<int>> &borders)
    {
        double result = 1.0;
        for(int i=0;i<k;i++)
        {
                
                
        }
        return result;
    }
};
int main()
{   
    Solution Sol;
    double w,h,s,t,k,P,Q;

    double X,Y,W,H;



    vector<int> Tborder,Oborder;//T表示先验  O表示目标
    vector<vector<int>>  Tborders,Oborders;


    // Box Tbox[2];//需要求
    // Box Obox[k];//看看怎么动态定义
    int k ;
    int boxes;
    cin>>k>>boxes;

    // 先求出所有先验框的minx,miny,maxx,maxy,存入容器Tborders中
    double T_minx,T_miny,T_maxx,T_maxy;


    //再将所有目标框的minx,miny,maxx,maxy,存入容器Oborders中          ####可以设计一个类包含四个点，#####
    double O_minx,O_miny,O_maxx,O_maxy;
    for(int i = 0;i<k;i++)
    {
        cout<<"please input  第"<<i+1<<"个目标框的X, Y, W, H"<<endl;
        cin>>X>>Y>>W>>H;
        Oborder.push_back(O_minx);
        Oborder.push_back(O_miny);
        Oborder.push_back(O_maxx);
        Oborder.push_back(O_maxy);
        Oborders.push_back(Oborder);
        Oborder.clear();
    }
    int  result = Sol.matching(w,h,s,t,k,P,Q,borders);
    // cout<<"The side length of kill range is :"<<endl;
    // cout<<result<<endl;
    return 0;
}