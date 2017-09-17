#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <math.h>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main1( int argc, char** argv)
{
    string imageName("../data/HappyFish.jpg"); // by default
    
    if( argc > 1)
    {
        imageName = argv[1];
    }
    
    Mat image;
    
    image = imread(imageName.c_str(), 1);
    
    if( image.empty() )                      // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    cout<<endl<<"M = "<<endl<<image<<endl<<endl;
    namedWindow("Display Window", WINDOW_AUTOSIZE);
    
    imshow("Display Window", image);
    
    try {
        imwrite("fordlandia.png", image);
    }
    catch (runtime_error& ex) {
        fprintf(stderr, "Exception converting image to PNG format: %s\n", ex.what());
        return 1;
    }
    
    waitKey(0);
    return 0;
}

/*Mat A, C;
 A = imread(argv[1], IMREAD_COLOR);
 
 Mat B(A);
 C = A;
 
 Mat D (A, Rect(10, 10, 100, 100));
 Mat E = A(Range::all(), Range(1,3));*/
