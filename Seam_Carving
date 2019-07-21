#include<opencv2/opencv.hpp>
#include<iostream>
#include<vector>

using namespace std;
using namespace cv;

int main(){
    Mat image = imread(""); // write address of the image in quotes, example: "C:/Documents/photo.jpg"
    if(image.empty()) {
        cout<<"No image found\n";
        cin.get();
        return -1;
    }
    cout<<"Height of the image is: "<<image.rows()<<"\n";
    cout<<"Width of the image is: "<<image.cols()<<"\n\n";
    
    int new_Height, new_Width;
    cout<<"Enter new Height: "; cin>>new_Height;
    cout<<"Enter new Width: "; cin>>new_Width;
    
    Mat output;
    Shrink_Image(image,output,image.rows(),image.cols(),new_Height,new_Width);
    bool is_saved = imwrite("",output); // write the address where you wanna store your image with its name, in the quotes, example: "C:/Documents/photo1.jpg"
    if(!is_saved){
        cout<<"Failed to save the image\n";
        cin.get();
        return -1;
    }
    namedWindow("Seam-Carved Image", WINDOW_NORMAL);
    imshow("Seam-Carved Image",output);
    cout<<"Successfully saved the image!\nHave a Great Day :)";
    return 0;
}
