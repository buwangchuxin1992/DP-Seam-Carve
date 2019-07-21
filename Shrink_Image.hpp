#indef Shrink_Image_H
#define Shrink_Image_H

#include<opencv2/opencv.hpp>
#include<isotream>

using namespace cv;
using namespace std;

void Shrink_Image(Mat &image, Mat &output, int old_h, int old_w, int new_h, int new_w);

#endif
