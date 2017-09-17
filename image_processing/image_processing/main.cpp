#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

Mat detectEdge(Mat &input){
    Mat edges;
    cvtColor(input, edges, CV_BGR2GRAY);
    GaussianBlur(edges, edges, Size(7,7), 1.5,1.5);
    //Canny(edges, edges, 0, 40, 3);
    return edges;
}

int main(){
    VideoCapture cap(0);
    Mat video, edges;
    namedWindow("Window", WINDOW_NORMAL);
    
    for(;;){
        cap >> video;
        imshow("Window", detectEdge(video));
        waitKey(1);
    }
    
    return 0;
}
