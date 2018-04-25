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
#include <string.h>
using namespace cv;
void ImageCapturing(const char* id); // function capturing image when have information
bool fileExist(const char* imagefile);
int ImageRemoving(char* imageid);
void ImageShowing(const char* id);
bool DirectoryExists(const char* dirName);
#endif // !IMAGEMANAGEMENT
