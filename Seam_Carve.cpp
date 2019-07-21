#include "seam_carve.hpp"

void seam_carve(Mat &op){
	Mat eimage;
	GET_ENERGY(op,eimage);
	vector<int> path;
	FIND_SEAM(eimage,path);
	
	Mat new_image(op.rows,op.cols-1,CV_8UC3);
	ERASE_SEAM(op,new_image,path);
	op = new_image;
}
