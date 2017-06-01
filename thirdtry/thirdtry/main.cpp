#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
using namespace cv;

int main() {
	const char* tp = "E:\\Users\\jiash\\Documents\\cup.jpg";
	Mat srcImage = imread(tp);
	imshow("origin", srcImage);
	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));
	imshow("out", dstImage);
	waitKey(0);
}