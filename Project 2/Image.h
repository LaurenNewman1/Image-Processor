#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Image
{
	char idLength;    
	char colorMapType;    
	char imgType;    
	short colorMapOrigin;    
	short colorMapLength;    
	char colorMapDepth;    
	short xOrigin;    
	short yOrigin;    
	short width;    
	short height;    
	char bitsPerPixel;     
	char imgDescriptor;
	int numPix;
	
	struct Pixel
	{
		unsigned char red;
		unsigned char green;
		unsigned char blue;

		Pixel()
		{
			red = 0;
			green = 0;
			blue = 0;
		}
	};

	vector<Pixel> pixels;

	// Functions
	Image();
	void readFile(string fileString);
	void writeFile(string fileString);
};