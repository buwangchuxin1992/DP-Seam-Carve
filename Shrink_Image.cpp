#include "Shrink_Image.hpp"
#include "Seam_Carve.hpp"

void Shrink_Image(Mat &image, Mat &output, int old_h, int old_w, int new_h, int new_w){
	output = image;
	for(int i=0; i< new_w - old_w; i++)
		seam_carve(output);
	rotate(output,output,ROTATE_90_CLOCKWISE);
	for(int i=0; i< new_h - old_h; i++)
		seam_carve(output);
	rotate(output,output,ROTATE_90_COUNTERCLOCKWISE);
}
