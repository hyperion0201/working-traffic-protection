/* DISCLAIMER :
I use OpenCV API C++ instead of C on image processing, bcoz some C API will not work in case.
For more informations, please go to https://github.com/maelvalais/homebrew-amc/issues/4
*/
#ifndef IMAGEMANAGEMENT
#define IMAGEMANAGEMENT
//#define Path "./App"
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <Windows.h>
#include <opencv2\core.hpp>
#include <opencv2\highgui.hpp>
using namespace cv;
void ImageCapturing(); // function capturing image when have information
bool ImageExist(const char* imagefile);
void RemovingImage(const char* imagefile);
#endif // !IMAGEMANAGEMENT
