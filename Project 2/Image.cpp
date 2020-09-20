#include "Image.h"
using namespace std;

Image::Image()
{
	idLength = 0;
	colorMapType = 0;
	imgType = 0;
	colorMapOrigin = 0;
	colorMapLength = 0;
	colorMapDepth = 0;
	xOrigin = 0;
	yOrigin = 0;
	width = 0;
	height = 0;
	bitsPerPixel = 0;
	imgDescriptor = 0;
	numPix = 0;
}

void Image::readFile(string fileString)
{
	ifstream file(fileString, ios_base::binary);
	if (file.is_open())
	{
		// HEADER INFO
		
		// ID Length
		file.read((char *)&idLength, 1);

		// Color Map Type
		file.read((char *)&colorMapType, 1);

		// Image Type
		file.read((char *)&imgType, 1);

		// Color Map Origin
		file.read((char *)&colorMapOrigin, 2);

		// Color Map Length
		file.read((char *)&colorMapLength, 2);

		// Color Map Depth
		file.read((char *)&colorMapDepth, 1);

		// X-Origin
		file.read((char *)&xOrigin, 2);

		// Y-Origin
		file.read((char *)&yOrigin, 2);

		// Image Width
		file.read((char *)&width, 2);

		// Image Height
		file.read((char *)&height, 2);

		// Pixel Depth
		file.read((char *)&bitsPerPixel, 1);

		// Image Descriptor
		file.read((char *)&imgDescriptor, 1);

		numPix = width * height;

		// PIXEL INFO
		for (int i = 0; i < numPix; i++)
		{
			Pixel newPixel;
			
			// Blue component
			file.read((char *)&newPixel.blue, 1);

			// Green component
			file.read((char *)&newPixel.green, 1);

			// Red component
			file.read((char *)&newPixel.red, 1);

			pixels.push_back(newPixel);
		}
		file.close();
	}
}

void Image::writeFile(string fileString)
{
	ofstream file(fileString, ios_base::binary);
	if (file.is_open())
	{
		// HEADER INFO

		// ID Length
		file.write((char *)&idLength, 1);

		// Color Map Type
		file.write((char *)&colorMapType, 1);

		// Image Type
		file.write((char *)&imgType, 1);

		// Color Map Origin
		file.write((char *)&colorMapOrigin, 2);

		// Color Map Length
		file.write((char *)&colorMapLength, 2);

		// Color Map Depth
		file.write((char *)&colorMapDepth, 1);

		// X-Origin
		file.write((char *)&xOrigin, 2);

		// Y-Origin
		file.write((char *)&yOrigin, 2);

		// Image Width
		file.write((char *)&width, 2);

		// Image Height
		file.write((char *)&height, 2);

		// Pixel Depth
		file.write((char *)&bitsPerPixel, 1);

		// Image Descriptor
		file.write((char *)&imgDescriptor, 1);

		// PIXEL INFO
		for (int i = 0; i < pixels.size(); i++)
		{
			// Blue component
			file.write((char *)&pixels.at(i).blue, 1);

			// Green component
			file.write((char *)&pixels.at(i).green, 1);

			// Red component
			file.write((char *)&pixels.at(i).red, 1);
		}
		file.close();
	}
}
