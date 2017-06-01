#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
const int g_nMaxAlphaValue = 100;
int g_nAlphaValueSlider;
double g_dAlphaValue, g_dBetaValue;
Mat g_srcImage1, g_srcImage2, g_dstImage;

void on_Trackbar(int,void *){
	g_dAlphaValue = (double)g_nAlphaValueSlider / g_nMaxAlphaValue;
	g_dBetaValue = (1.0 - g_dAlphaValue);
	addWeighted(g_srcImage1, g_dAlphaValue, g_srcImage2, g_dBetaValue, 0.0, g_dstImage);
	imshow("out", g_dstImage);
}


int main() {
	g_srcImage1 = imread("E:\\pic\\1.jpg");
	g_srcImage2 = imread("E:\\pic\\2.jpg");
	g_nAlphaValueSlider = 70;
	namedWindow("out", WINDOW_AUTOSIZE);
	char TrackbarName[50];
	sprintf(TrackbarName, "Í¸Ã÷Öµ%d", g_nMaxAlphaValue);
	createTrackbar(TrackbarName, "out", &g_nAlphaValueSlider, g_nMaxAlphaValue, on_Trackbar);
	on_Trackbar(g_nAlphaValueSlider, 0);
	waitKey();
	return 0;
}