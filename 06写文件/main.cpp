#include<iostream>
#include <string>
#include <vector>
#include <fstream>  //文件流库函数
 
using namespace std;
 
 
int main()
{  
    ofstream outfile;   //输出流
     double x,y,z;
     x = 1;
     y = 2;
     z = 3;
    string file_name = "/home/lzq/file/c++/06/coordinates_map_chair.txt";
    outfile.open(file_name, ios::out);   //app每次写都定位的文件结尾，不会丢失原来的内容，用out则会丢失原来的内容
    if(!outfile.is_open ())
        cout << "Open file failure" << endl;
    outfile << x << "\t" << y << "\t" << z << endl;  //在result.txt中写入结果
    outfile.close();
    return 0;
    while (1);
}