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
	CvCapture* image = cvCreateCameraCapture(-1);
	if (!image)
	{
		printf("Error. Can't capture.");
	}
}