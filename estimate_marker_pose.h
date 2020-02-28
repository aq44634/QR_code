#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>  
using namespace std;           
using namespace cv;     

void myDrawFrameAxes(InputOutputArray image, InputArray cameraMatrix, InputArray distCoeffs,
                   InputArray rvec, InputArray tvec, float length, int thickness);

void myDrawDetectedMarkers(InputOutputArray _image, InputArrayOfArrays _corners,
                         InputArray _ids, Scalar borderColor);

void myGetSingleMarkerObjectPoints(float markerLength, OutputArray _objPoints); 

void myEstimatePoseSingleMarkers(InputArrayOfArrays _corners, float markerLength,
                               InputArray _cameraMatrix, InputArray _distCoeffs,
                               OutputArray _rvecs, OutputArray _tvecs); 
