#include "ImageManagement.h"
bool ImageExist(const char* imagename) {
	FILE* imageload;
	if (imageload = fopen(imagename, "r")) {
		fclose(imageload);
		return true;
	}
	return false;
}
void ImageCapturing() {
	
	Mat frame;
	// Initialize videocapture;
	VideoCapture capture;
	// open the default camera using default API
	 capture.open(0);
	// or advanced usage: select any API backend
	int deviceID = 0;			//	0 = open default camera
	int apiID = CAP_ANY;	//  0 = autodetect default API
								//  open selected camera using selected API
	capture.open(deviceID + apiID);
	// check if succeeded
	if (!capture.isOpened())
	{
		printf("ERROR. Unable to open camera!");
		return;
	}
	// Grab and write loop
	capture.read(frame);
	if (frame.empty()) printf("Error. Blank frame captured.");
	Sleep(5);
	// show live and wait for a key to show image
	imshow("Image", frame);
	waitKey(30);
	imwrite("image.jpg", frame);
	// release all frame
}