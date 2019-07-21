#ifndef REMOVE_SEAM_H
#define REMOVE_SEAM_H

#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

void ERASE_SEAM( Mat& img, Mat& outp, vector<int>& path );

#endif
