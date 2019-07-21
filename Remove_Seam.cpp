#include "Remove_Seam.hpp"

void ERASE_SEAM( Mat& img, Mat& outp, vector<int>& path )
{
    int X = img.rows, Y = img.cols;
    for(int i=0; i<X; i++) 
    {
        for(int j=0; j<Y-1; j++)
        {
            outp.at<Vec3b>(i,j) = j<path[i] ? img.at<Vec3b>(i,j) : img.at<Vec3b>(i,j+1);
        }
    }
}
