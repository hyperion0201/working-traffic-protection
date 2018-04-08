#include <stdio.h>

#include <opencv/cv.h> // Include the OpenCV library
#include <opencv/highgui.h> // Include interfaces for video capturing

void main(int argc, char* argv)
{
	cvNamedWindow("Window", CV_WINDOW_AUTOSIZE);
	CvCapture* capture = cvCreateCameraCapture(-1);
	if (!capture) {
		printf("Error. Cannot capture.");
	}
	else {
		cvNamedWindow("Window", CV_WINDOW_AUTOSIZE);

		while (1) {
			IplImage* frame = cvQueryFrame(capture);
			if (!frame) {
				printf("Error. Cannot get the frame.");
				break;
			}
			cvShowImage("Window", frame);
			cvWaitKey(30);
		}
		
		cvReleaseCapture(&capture);
		cvDestroyWindow("Window");
		
	}
}