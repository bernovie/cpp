#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;
double highBlue, highGreen=100, highRed=0;
double lowBlue, lowGreen, lowRed;
const int color_slider_max = 255;
int blueSlider, redSlider, greenSlider;
int blueSliderMin, redSliderMin, greenSliderMin;
Mat redOnly;
Mat input, input2;
VideoCapture cap(0), cap2(0);

Mat redFilter(const Mat& src)
{
    assert(src.type() == CV_8UC3);
    
    Mat redOnly;
    inRange(src, Scalar(lowBlue, lowGreen, lowRed), Scalar(highBlue, highGreen, highRed), redOnly);
    
    return redOnly;
}
void blue_trackbar( int, void* )
{
    highBlue = (double) blueSlider;
    cout<<"HighBlue: "<<highBlue;
}
void red_trackbar( int, void* )
{
    highRed = (double) redSlider;
    cout<<" HighRed: "<<highRed;
}
void green_trackbar( int, void* )
{
    highGreen = (double) greenSlider;
    cout<<" HighGreen: "<<highGreen;
}

void blueMin_trackbar( int, void* )
{
    lowBlue = (double) blueSliderMin;
    cout<<" lowBlue: "<<lowBlue;
}
void redMin_trackbar( int, void* )
{
    lowRed = (double) redSliderMin;
    cout<<" lowhRed: "<<lowRed;
}
void greenMin_trackbar( int, void* )
{
    lowGreen = (double) greenSliderMin;
    cout<<" lowGreen: "<<lowGreen<<endl;
}

int main(int argc, char** argv)
{
    
    namedWindow("Colors", WINDOW_NORMAL);
    //cvSetWindowProperty("Original", CV_WND_PROP_FULLSCREEN, CV_WINDOW_FULLSCREEN);
    namedWindow("Values", WINDOW_NORMAL);
    namedWindow("Color Detection", WINDOW_FULLSCREEN);
    
    blueSlider = 0;
    char TrackbarName[50];
    sprintf( TrackbarName, "High Blue x %d", color_slider_max );
    createTrackbar( TrackbarName, "Values", &blueSlider, color_slider_max, blue_trackbar );
    
    sprintf( TrackbarName, "High Red x %d", color_slider_max );
    createTrackbar( TrackbarName, "Values", &redSlider, color_slider_max, red_trackbar );
    sprintf( TrackbarName, "High Green x %d", color_slider_max );
    createTrackbar( TrackbarName, "Values", &greenSlider, color_slider_max, green_trackbar );
    
    sprintf( TrackbarName, "Blue Low x %d", color_slider_max );
    createTrackbar( TrackbarName, "Values", &blueSliderMin, color_slider_max, blueMin_trackbar );
    
    sprintf( TrackbarName, "Red Lowx %d", color_slider_max );
    createTrackbar( TrackbarName, "Values", &redSliderMin, color_slider_max, redMin_trackbar );
    sprintf( TrackbarName, "Green Low x %d", color_slider_max );
    createTrackbar( TrackbarName, "Values", &greenSliderMin, color_slider_max, greenMin_trackbar );
    
    for(;;){
        blue_trackbar( blueSlider, 0 );
        red_trackbar( redSlider, 0 );
        green_trackbar( greenSlider, 0 );
        blueMin_trackbar(blueSliderMin, 0);
        redMin_trackbar(redSliderMin, 0);
        greenMin_trackbar(greenSliderMin, 0);
        cap>> input;
        cap2>> input2;
        
        /*if(c > 100 && c < 1100){
         if(r < 266){
         input2.at<Vec3b>(r,c)[0] = 255;
         }else if(r > 266 && r < 532){
         input2.at<Vec3b>(r,c)[2] = 255;
         }else{
         input2.at<Vec3b>(r,c)[1] = 255;
         }
         }else{
         input2.row(r).col(c) = 0;
         }*/

        for(int r = 0; r < input2.rows; r++){
            for(int c = 0; c < input2.cols; c++){
                
                
                Vec3b BGR =  input2.at<Vec3b>(r,c);
                if(BGR[0] < 72 && BGR[1] < 47 && BGR[2] > 87){
                    BGR[0] = 0;
                    BGR[1] = 0;
                    BGR[2] = 255;
                }else if(BGR[0] < 245 && BGR[1] < 224 && BGR[2] > 197 && BGR[0] > 157 && BGR[1] > 185){
                    BGR[0] = 0;
                    BGR[1] = 255;
                    BGR[2] = 255;
                }else if(BGR[0] < 255 && BGR[1] < 43 && BGR[2] < 36 && BGR[0] > 26){
                    BGR[0] = 255;
                    BGR[1] = 0;
                    BGR[2] = 0;
                }
                /*else if(BGR[0] < 157 && BGR[1] < 207 && BGR[2] < 255 && BGR[0] > 82 && BGR[1] > 78 && BGR[2] > 108 ){
                    BGR[0] = 0; //189
                    BGR[1] = 0;
                    BGR[2] = 0;
                }*/
                else{
                    input2.row(r).col(c) = 0;
                }
            }
            //cout<<endl;
        }
        
        redOnly = redFilter(input);
        imshow("Color Detection", redOnly);
        imshow("Colors", input2);
        waitKey(1);
    }
    
    return 0;
}
