#include<opencv.hpp>
using namespace cv;
int main() {
	const char* tp = "E:\\Users\\jiash\\Documents\\cup.jpg";
	Mat img = imread(tp,4);
	imshow("kk", img);
	waitKey(60000);
}