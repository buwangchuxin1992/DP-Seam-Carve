#include "Find_Seam.hpp"

#define INF INT_MAX

void FIND_SEAM( Mat& eimage, vector<int>& path )
{
    int X = image.rows(), Y = image.cols();
    int DP[X][Y];
    
    for(int i=0; i<Y; i++) DP[0][i] = (int) eimage.at<uchar>(0,i);
    
    for(int i=1; i<X; i++)
    {
        for(int j=0; j<Y; j++)
        {
            int A = INF, B = INF, C = INF;
            if( j>0   ) A = DP[i-1][j-1];
            if( 1     ) B = DP[i-1][j];
            if( j<Y-1 ) C = DP[i-1][j+1];
            DP[i][j] = min( A,min( B,C ) ) + (int) eimage.at<uchar>(i,j);
        }
    }
    
    // Path Retrace
    int mval = INF, idx = -1;
    for(int i=0; i<Y; i++)
    {
        if( mval > DP[X-1][i] )
        mval = DP[X-1][i], idx = i;
    }
    
    int j = idx;
    for(int i=X-1; i>=0; i--)
    {
        path.push_back( j );
        if( i==0 ) break;
        int A = INF, B = INF, C = INF, min3 = INF, id3 = -1;
        if( j>0   && min3>DP[i-1][j-1] ) min3 = DP[i-1][j-1], id3 = j-1;
        if( 1     && min3>DP[i-1][j]   ) min3 = DP[i-1][j],   id3 = j;
        if( j<Y-1 && min3>DP[i-1][j+1] ) min3 = DP[i-1][j+1], id3 = j+1;
        
        j = id3;
    }
}
