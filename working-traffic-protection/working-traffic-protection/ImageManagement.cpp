#include "ImageManagement.h"
bool fileExist(const char* imagename) {
	FILE* imageload;
	if (imageload = fopen(imagename, "r")) {
		fclose(imageload);
		return true;
	}
	return false;
}
void ImageCapturing(const char* id) {
	// check if folder exist

	if (DirectoryExists("C:\\TrafficImages\\") == false)
	{
		CreateDirectory("C:\\TrafficImages\\", NULL);
	}

	// full path is required for saving image using imwrite
	const char* extension = ".jpg";
	char* path = (char*)malloc(strlen(id) + strlen(extension) + strlen("C:\\TrafficImages\\"+ 1));
	// copy and merge id and extension into path
	strcpy(path, "C:\\TrafficImages\\");
	strcat(path, id);
	strcat(path, extension);

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
	imwrite(path, frame);
	waitKey(30);
	printf("Them xe thanh cong ! Co muon xem hinh ?");
	printf("\n\t Neu co, nhan y de xem. Sau khi xem, nhan Esc de tat khung hinh.\n");
	while (true)
	{

	}
	// show live and wait for a key to show image
	imshow("Image", frame);
	waitKey(30);
	
	
	cvDestroyAllWindows();
	// release all frame
}
int ImageRemoving(char* imageid)
{	
	char* filename = (char*)malloc(strlen(imageid) + strlen(".jpg")); 
	// allocation new file name to concentrate imageid + .jpg
	// copy imageid to filename
	strcpy(filename, imageid);
	// cat extension to filename
	strcat(filename, ".jpg");
	int rmstatus;
	rmstatus = remove(filename);
	return rmstatus;
}
void ImageShowing(const char* id)
{
	char* path = (char*)malloc(strlen("C:\\TrafficImages\\") + strlen(id) + strlen(".jpg") + 1);
	strcpy(path, "C:\\TrafficImages\\");
	strcat(path, id);
	strcat(path, ".jpg");
	// create Mat class for fetching image 
	/*>0 Return a 3 - channel color image. (same as CV_LOAD_IMAGE_COLOR)

	= 0 Return a grayscale image. (same as CV_LOAD_IMAGE_GRAYSCALE)

	<0 Return the loaded image as is(with alpha channel). (same as CV_LOAD_IMAGE_ANYDEPTH)
	*/
	Mat i = imread(path, 1);
	if (i.empty())
	{
		printf("Image not found!");
		return;
	}
	namedWindow("Image", CV_WINDOW_AUTOSIZE);
	imshow("Image", i);
	waitKey(50);
}
bool DirectoryExists(const char* dirName) {
	DWORD attribs = ::GetFileAttributesA(dirName);
	if (attribs == INVALID_FILE_ATTRIBUTES) {
		return false;
	}
	return (attribs & FILE_ATTRIBUTE_DIRECTORY);
}