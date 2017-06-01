#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
using namespace cv;

int main() {
	const char* tp = "E:\\Users\\jiash\\Documents\\cup.jpg";
	Mat srcImage = imread(tp);
	imshow("origin", srcImage);
	Mat dstImage,edge,grayImage;
	dstImage.create(srcImage.size(), srcImage.type());
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	blur(grayImage, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);
	imshow("out", edge);
	waitKey(0);
}