#include "Image.h"
#include "Tasks.h"
using namespace std;

// Part 1
void part1(string file1, string file2)
{
	Image layer1;
	layer1.readFile(file1);

	Image layer2;
	layer2.readFile(file2);

	Image result;
	result = setHeader(layer1);
	for (unsigned int i = 0; i < layer1.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = multiply(layer1.pixels.at(i).blue, layer2.pixels.at(i).blue);
		resultPix.green = multiply(layer1.pixels.at(i).green, layer2.pixels.at(i).green);
		resultPix.red = multiply(layer1.pixels.at(i).red, layer2.pixels.at(i).red);
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part1.tga");
}

// Part 2
void part2(string file1, string file2)
{
	Image layer1;
	layer1.readFile(file1);

	Image layer2;
	layer2.readFile(file2);

	Image result;
	result = setHeader(layer1);
	for (unsigned int i = 0; i < layer1.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = subtract(layer1.pixels.at(i).blue, layer2.pixels.at(i).blue);
		resultPix.green = subtract(layer1.pixels.at(i).green, layer2.pixels.at(i).green);
		resultPix.red = subtract(layer1.pixels.at(i).red, layer2.pixels.at(i).red);
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part2.tga");
}

// Part 3
void part3(string file1, string file2, string file3)
{
	Image multipliedImg = part1Helper(file1, file2);

	Image layer2;
	layer2.readFile(file3);

	Image result;
	result = setHeader(layer2);
	for (unsigned int i = 0; i < layer2.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = screen(multipliedImg.pixels.at(i).blue, layer2.pixels.at(i).blue);
		resultPix.green = screen(multipliedImg.pixels.at(i).green, layer2.pixels.at(i).green);
		resultPix.red = screen(multipliedImg.pixels.at(i).red, layer2.pixels.at(i).red);
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part3.tga");
}

// Part 4
void part4(string file1, string file2, string file3)
{
	Image multipliedImg = part1Helper(file1, file2);

	Image layer2;
	layer2.readFile(file3);

	Image result;
	result = setHeader(layer2);
	for (unsigned int i = 0; i < layer2.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = subtract(layer2.pixels.at(i).blue, multipliedImg.pixels.at(i).blue);
		resultPix.green = subtract(layer2.pixels.at(i).green, multipliedImg.pixels.at(i).green);
		resultPix.red = subtract(layer2.pixels.at(i).red, multipliedImg.pixels.at(i).red);
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part4.tga");
}

// Part 5
void part5(string file1, string file2)
{
	Image layer1;
	layer1.readFile(file1);

	Image layer2;
	layer2.readFile(file2);

	Image result;
	result = setHeader(layer1);
	for (unsigned int i = 0; i < layer1.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = overlay(layer1.pixels.at(i).blue, layer2.pixels.at(i).blue);
		resultPix.green = overlay(layer1.pixels.at(i).green, layer2.pixels.at(i).green);
		resultPix.red = overlay(layer1.pixels.at(i).red, layer2.pixels.at(i).red);
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part5.tga");
}

// Part 6
void part6(string file)
{
	Image layer;
	layer.readFile(file);

	Image result;
	result = setHeader(layer);
	for (unsigned int i = 0; i < layer.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = layer.pixels.at(i).blue;
		resultPix.green = add(layer.pixels.at(i).green, 200);
		resultPix.red = layer.pixels.at(i).red;
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part6.tga");
}

// Part 7
void part7(string file)
{
	Image layer;
	layer.readFile(file);

	Image result;
	result = setHeader(layer);
	for (unsigned int i = 0; i < layer.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = scale(layer.pixels.at(i).blue, 0);
		resultPix.green = layer.pixels.at(i).green;
		resultPix.red = scale(layer.pixels.at(i).red, 4);
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part7.tga");
}

// Part 8
void part8(string file)
{
	Image layer;
	layer.readFile(file);

	Image result;
	result = setHeader(layer);
	for (unsigned int i = 0; i < layer.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.red = layer.pixels.at(i).blue;
		resultPix.green = layer.pixels.at(i).blue;
		resultPix.blue = layer.pixels.at(i).blue;
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part8_b.tga");

	Image result2;
	result2 = setHeader(layer);
	for (unsigned int i = 0; i < layer.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.red = layer.pixels.at(i).green;
		resultPix.green = layer.pixels.at(i).green;
		resultPix.blue = layer.pixels.at(i).green;
		result2.pixels.push_back(resultPix);
	}
	result2.writeFile("output/part8_g.tga");

	Image result3;
	result3 = setHeader(layer);
	for (unsigned int i = 0; i < layer.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.red = layer.pixels.at(i).red;
		resultPix.green = layer.pixels.at(i).red;
		resultPix.blue = layer.pixels.at(i).red;
		result3.pixels.push_back(resultPix);
	}
	result3.writeFile("output/part8_r.tga");
}

// Part 9
void part9(string file1, string file2, string file3)
{
	Image layer1;
	layer1.readFile(file1);

	Image layer2;
	layer2.readFile(file2);

	Image layer3;
	layer3.readFile(file3);

	Image result;
	result = setHeader(layer1);
	for (unsigned int i = 0; i < layer1.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = layer3.pixels.at(i).blue;
		resultPix.green = layer2.pixels.at(i).green;
		resultPix.red = layer1.pixels.at(i).red;
		result.pixels.push_back(resultPix);
	}
	result.writeFile("output/part9.tga");
}

// Part 10
void part10(string file)
{
	Image layer;
	layer.readFile(file);

	Image result;
	result = setHeader(layer);
	for (unsigned int i = 0; i < layer.pixels.size(); i++)
	{
		result.pixels.push_back(layer.pixels.at(layer.pixels.size() - 1 - i));
	}
	result.writeFile("output/part10.tga");
}

// Extra Credit
void extraCredit(string file1, string file2, string file3, string file4)
{
	Image topLeft;
	topLeft.readFile(file1);

	Image topRight;
	topRight.readFile(file2);

	Image botLeft;
	botLeft.readFile(file3);

	Image botRight;
	botRight.readFile(file4);

	Image result;
	result = setHeader(topLeft);
	result.width = 1024;
	result.height = 1024;

	int pix1Index = 0;
	int pix2Index = 0;
	int pix3Index = 0;
	int pix4Index = 0;
	for (int columnIndex = 0; columnIndex < 1024; columnIndex++)
	{
		if (columnIndex < 512)
		{
			for (int rowIndex = 0; rowIndex < 1024; rowIndex++)
			{
				Image::Pixel resultPix;
				if (rowIndex < 512)
				{
					resultPix.blue = botLeft.pixels.at(pix1Index).blue;
					resultPix.green = botLeft.pixels.at(pix1Index).green;
					resultPix.red = botLeft.pixels.at(pix1Index).red;
					result.pixels.push_back(resultPix);
					pix1Index++;
				}
				else
				{
					resultPix.blue = botRight.pixels.at(pix2Index).blue;
					resultPix.green = botRight.pixels.at(pix2Index).green;
					resultPix.red = botRight.pixels.at(pix2Index).red;
					result.pixels.push_back(resultPix);
					pix2Index++;
				}
			}
		}
		else
		{
			for (int rowIndex = 0; rowIndex < 1024; rowIndex++)
			{
				Image::Pixel resultPix;
				if (rowIndex < 512)
				{
					resultPix.blue = topLeft.pixels.at(pix3Index).blue;
					resultPix.green = topLeft.pixels.at(pix3Index).green;
					resultPix.red = topLeft.pixels.at(pix3Index).red;
					result.pixels.push_back(resultPix);
					pix3Index++;
				}
				else
				{
					resultPix.blue = topRight.pixels.at(pix4Index).blue;
					resultPix.green = topRight.pixels.at(pix4Index).green;
					resultPix.red = topRight.pixels.at(pix4Index).red;
					result.pixels.push_back(resultPix);
					pix4Index++;
				}
			}
		}
	}
	result.writeFile("output/extracredit.tga");
}


// --------------------- Calculations ---------------------

// Multiply
unsigned char multiply(unsigned char one, unsigned char two)
{
	double oneDouble = (double)one;
	double twoDouble = (double)two;
	double product = (255 * ((oneDouble / 255) * (twoDouble / 255))) + 0.5;
	unsigned char result = (unsigned char)product;
	return result;
}

// Subtract
unsigned char subtract(unsigned char one, unsigned char two)
{
	int oneInt = (int)one;
	int twoInt = (int)two;
	int difference = twoInt - oneInt;
	if (difference < 0)
		difference = 0;
	unsigned char result = (unsigned char)difference;
	return result;
}

// Add
unsigned char add(unsigned char one, int factor)
{
	int oneInt = (int)one;
	int sum = factor + oneInt;
	if (sum > 255)
		sum = 255;
	unsigned char result = (unsigned char)sum;
	return result;
}

// Scale
unsigned char scale(unsigned char one, int factor)
{
	int oneInt = (int)one;
	int product = factor * oneInt;
	if (product > 255)
		product = 255;
	else if (product < 0)
		product = 0;
	unsigned char result = (unsigned char)product;
	return result;
}

// Screen
unsigned char screen(unsigned char one, unsigned char two)
{
	double oneDouble = (double)one;
	double twoDouble = (double)two;
	double oneNorm = oneDouble / 255;
	double twoNorm = twoDouble / 255;
	double screen = (255 * (1 - (1 - oneNorm) * (1 - twoNorm))) + 0.5;
	unsigned char result = (unsigned char)screen;
	return result;
}

// Overlay
unsigned char overlay(unsigned char one, unsigned char two)
{
	double overlay;
	double oneDouble = (double)one;
	double twoDouble = (double)two;
	double oneNorm = oneDouble / 255;
	double twoNorm = twoDouble / 255;
	if (twoNorm <= 0.5)
		overlay = 2 * oneNorm * twoNorm;
	else
		overlay = 1 - (2 * (1 - oneNorm) * (1 - twoNorm));
	unsigned char result = (unsigned char)(overlay * 255 + 0.5);
	return result;
}

// Set Header
Image setHeader(Image &old)
{
	Image result;
	result.idLength = old.idLength;
	result.colorMapType = old.colorMapType;
	result.imgType = old.imgType;
	result.colorMapOrigin = old.colorMapOrigin;
	result.colorMapLength = old.colorMapLength;
	result.colorMapDepth = old.colorMapDepth;
	result.xOrigin = old.xOrigin;
	result.yOrigin = old.yOrigin;
	result.width = old.width;
	result.height = old.height;
	result.bitsPerPixel = old.bitsPerPixel;
	result.imgDescriptor = old.imgDescriptor;
	return result;
}

Image part1Helper(string file1, string file2)
{
	Image layer1;
	layer1.readFile(file1);

	Image layer2;
	layer2.readFile(file2);

	Image result;
	result = setHeader(layer1);
	for (unsigned int i = 0; i < layer1.pixels.size(); i++)
	{
		Image::Pixel resultPix;
		resultPix.blue = multiply(layer1.pixels.at(i).blue, layer2.pixels.at(i).blue);
		resultPix.green = multiply(layer1.pixels.at(i).green, layer2.pixels.at(i).green);
		resultPix.red = multiply(layer1.pixels.at(i).red, layer2.pixels.at(i).red);
		result.pixels.push_back(resultPix);
	}
	return result;
}

