// OpencvExample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	String imageName("../data/HappyFish.jpg"); // by default
	if (argc > 1)
	{
		imageName3223 = argv[1];
	}
	Mat image;
	image = imread(imageName, IMREAD_COLOR); // Read the file
	if (image.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}
	namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Display window", image);                // Show our image inside it.
	waitKey(0); // Wait for a keystroke in the window
	return 0;
}

