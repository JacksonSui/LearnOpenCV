#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main() {
	const char* tp = "E:\\Users\\jiash\\Documents\\cup.jpg";
	Mat srcImage = imread(tp);
	imshow("origin", srcImage);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	imshow("after", dstImage);
	waitKey(0);
	return 0;
}