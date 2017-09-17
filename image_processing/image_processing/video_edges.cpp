#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
int lowThreshold;
int const max_lowThreshold = 100;
char* window_name = (char*)"Edge Map";

int main(int, char**)
{
    VideoCapture cap(0);
    if(!cap.isOpened()){
        return -1;
    }
    Mat edges;
    
    namedWindow("edges", 1);
    
    for(;;){
        Mat frame;
        cap >> frame;
        cvtColor(frame, edges, COLOR_BGR2GRAY);
        GaussianBlur(edges, edges, Size(7,7),1.5,1.5);
        Canny(edges, edges, 0, 40, 3);
        imshow("edges", edges);
        waitKey(0);
    }
    return 0;
}
