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
    vector<int> matching(vector<Box> &Tboxes,vector<Box> Oboxes)
    {
        vector<int> result;
        int res_mrd;
        int res_mlu;
        int res_m;
        int res;
        //遍历目标框
        for(int Obox_i = 0;Obox_i<Oboxes.size();Obox_i++)
        {
            res_mrd = 0;
            res_mlu = 0;
            res_m = 0;
            res = 0;
            //遍历所有先验框
            for(int Tbox_i = 0;Tbox_i<Tboxes.size();Tbox_i++)
            {
                if((Tboxes[Tbox_i].minx >= Oboxes[Obox_i].minx)
                    &&(Tboxes[Tbox_i].minx < Oboxes[Obox_i].maxx)
                    &&(Tboxes[Tbox_i].miny >= Oboxes[Obox_i].miny)
                    &&(Tboxes[Tbox_i].miny < Oboxes[Obox_i].maxy))
                {
                    // cout<<"mrd:"<<Tboxes[Tbox_i].minx<<","<<Tboxes[Tbox_i].miny<<endl;
                    res_mrd++;
                }
                if((Tboxes[Tbox_i].maxx > Oboxes[Obox_i].minx)
                    &&(Tboxes[Tbox_i].maxx <= Oboxes[Obox_i].maxx)
                    &&(Tboxes[Tbox_i].maxy > Oboxes[Obox_i].miny)
                    &&(Tboxes[Tbox_i].maxy <= Oboxes[Obox_i].maxy))
                {
                    // cout<<"mlu:"<<Tboxes[Tbox_i].minx<<","<<Tboxes[Tbox_i].miny<<endl;
                    res_mlu++;
                }
                if((Tboxes[Tbox_i].minx >= Oboxes[Obox_i].minx)
                    &&(Tboxes[Tbox_i].maxx <= Oboxes[Obox_i].maxx)
                    &&(Tboxes[Tbox_i].miny >= Oboxes[Obox_i].miny)
                    &&(Tboxes[Tbox_i].maxy <= Oboxes[Obox_i].maxy))
                {
                    // cout<<"m:"<<Tboxes[Tbox_i].minx<<","<<Tboxes[Tbox_i].miny<<endl;
                    res_m++;
                }
            }
            res  = res_mlu + res_mrd -res_m;
            // cout<<res<<endl;
            result.push_back(res);
        }
        return result;
    }
};
int main()
{   
    Solution Sol;
    double w,h,s,t,k,P,Q;
    double X,Y,W,H;

    cout<<"please input 先验框的宽度, 高度和横纵间距：w, h, s, t，目标框的数量k，是幕布的宽高PQ:"<<endl;
    cin>>w>>h>>s>>t>>k>>P>>Q;

    int num_i,num_j;
    num_i = (P-w)/s+1;
    num_j = (Q-h)/t+1;
    //T表示先验  O表示目标
    // 先求出所有先验框的minx,miny,maxx,maxy,存入容器Tboxes中
    double T_minx,T_miny,T_maxx,T_maxy;
    vector<Box> Tboxes;
    Box Tbox;
    for(int i = 0;i < num_i;i++)
    {
        for(int j = 0; j <num_j;j++ )
        {
            Tbox.minx = s * i;
            Tbox.miny = t * j;
            Tbox.maxx = Tbox.minx + w;
            Tbox.maxy = Tbox.miny + h;
            // cout<<Tbox.minx<<","<<Tbox.miny<<"  "<<Tbox.maxx<<","<<Tbox.maxy<<endl;
            Tboxes.push_back(Tbox);
        }
    }
    // cout<<Tboxes[0].maxx<<endl;
    // cout<<Tboxes.size()<<endl;
    // cout<<Tboxes[Tboxes.size()-1].maxx<<endl;

    //再将所有目标框的minx,miny,maxx,maxy,存入容器Oborders中          ####可以设计一个类包含四个点，#####
    double O_minx,O_miny,O_maxx,O_maxy;
    vector<Box> Oboxes;
    Box Obox;
    for(int k_i = 0;k_i<k;k_i++)
    {
        cout<<"please input  第"<<k_i+1<<"个目标框的X, Y, W, H"<<endl;
        cin>>X>>Y>>W>>H;
        Obox.minx = X;
        Obox.miny = Y;
        Obox.maxx = X + W;
        Obox.maxy = Y + H;
        Oboxes.push_back(Obox);
    }
    // cout<<Oboxes[0].maxx<<" "<<Oboxes[0].maxy<<endl;

    vector<int>  results = Sol.matching(Tboxes,Oboxes);
    int result = 0;
    for(int result_i = 0;result_i<results.size();result_i++)
    {
        cout<<results[result_i]<<endl;
        result = result + results[result_i];
    }
    cout<<result<<endl;
    return 0;
}