#include<opencv2/opencv.hpp>
#include<vector>
using namespace cv;
using namespace std;

int main() {
	VideoCapture capture(0);
	vector<int> compression_params;
	compression_params.push_back(CV_IMWRITE_JPEG_QUALITY);
	compression_params.push_back(95);
	for (int i = 0; i < 20;i++) {
		Mat frame;
		char tp[15];
		sprintf(tp, "toupai%d.jpg", i);
		capture >> frame;
		imwrite(tp, frame, compression_params);
		waitKey();
	}
	return 0;
}