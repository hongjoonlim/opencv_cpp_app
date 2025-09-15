#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
    cout << "Hello, OpenCV!" << CV_VERSION << endl;

    Mat img;
    img = imread("lena.png", IMREAD_COLOR);
    if (img.empty()) {
        cerr << "Could not read the image: lena.png" << endl;
        return -1;
    }

    namedWindow("Image", WINDOW_AUTOSIZE);
    imshow("Image", img);
    waitKey(0);
    return 0;
}
