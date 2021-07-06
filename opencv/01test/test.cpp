#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;

using namespace std;
int main( )
{
Mat image;
image = imread("robot.png", 1 );//图像与.cpp文件在同一目录下
if (!image.data)
{
printf("No image data \n");
return -1;
}
    // 文件顺利读取, 首先输出一些基本信息
cout<<"图像宽为"<<image.cols<<",高为"<<image.rows<<",通道数为"<<image.channels()<<endl;

namedWindow("Display Image", WINDOW_AUTOSIZE );
imshow("Display Image", image);
waitKey(0);
return 0;
}
