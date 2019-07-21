#include "Energy_Val.hpp"

void GET_ENERGY( Mat& inp, Mat& out )
{
    Mat dx, dy;
    Sobel( inp,dx,CV_64F,1,0 );
    Sobel( inp,dy,CV_64F,0,1 );
    magnitude( dx,dy,out );
    
    double minV, maxV, Z;
    minMaxLoc( out, &minV, &maxV );
    Z = ( 1/maxV ) * 255;
    out = out*Z;
    out.convertTo( out,CV_8U );
}
