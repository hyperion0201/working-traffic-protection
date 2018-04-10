#ifndef IMAGEMANAGEMENT
#define IMAGEMANAGEMENT
#define ImageDir "./App"
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <Windows.h>
#include <opencv/cv.h> // include OpenCV library
#include <opencv/highgui.h>
void ImageCapturing(); // function capturing image when have information
bool ImageExist(const char* imagefile);
void AddingImage();
#endif // !IMAGEMANAGEMENT
