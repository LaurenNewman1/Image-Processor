#include "Image.h"
#include "Tests.h"
using namespace std;

// Tests
void comparisonTest(string file1, string file2)
{
	Image image1;
	image1.readFile(file1);

	Image image2;
	image2.readFile(file2);

	bool matches = true;
	cout << "Testing if header info matches..." << endl;

	if (
		image1.idLength == image2.idLength &&
		image1.colorMapType == image2.colorMapType &&
		image1.imgType == image2.imgType &&
		image1.colorMapOrigin == image2.colorMapOrigin &&
		image1.colorMapLength == image2.colorMapLength &&
		image1.colorMapDepth == image2.colorMapDepth &&
		image1.xOrigin == image2.xOrigin &&
		image1.yOrigin == image2.yOrigin &&
		image1.width == image2.width &&
		image1.height == image2.height &&
		image1.bitsPerPixel == image2.bitsPerPixel &&
		image1.imgDescriptor == image2.imgDescriptor
		)
		cout << "\tsucceeded" << endl;
	else
		cout << "\tfailed" << endl;

	cout << "Testing if pixels match..." << endl;
	if (image1.pixels.size() < 1)
	{
		cout << "\tfailed" << endl;
		return;
	}
	for (int i = 0; i < image1.pixels.size(); i++)
	{
		if (image1.pixels.at(i).blue != image2.pixels.at(i).blue)
		{
			cout << "\tfailed" << endl;
			matches = false;
			break;
		}
		else if (image1.pixels.at(i).green != image2.pixels.at(i).green)
		{
			cout << "\tfailed" << endl;
			matches = false;
			break;
		}
		else if (image1.pixels.at(i).red != image2.pixels.at(i).red)
		{
			cout << "\tfailed" << endl;
			matches = false;
			break;
		}
	}
	if (matches == true)
		cout << "\tsucceeded" << endl;
}