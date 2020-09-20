#pragma once
#include "Image.h"

// Tasks

void part1(string file1, string file2);
void part2(string file1, string file2);
void part3(string file1, string file2, string file3);
void part4(string file1, string file2, string file3);
void part5(string file1, string file2);
void part6(string file);
void part7(string file);
void part8(string file);
void part9(string file1, string file2, string file3);
void part10(string file);
void extraCredit(string file1, string file2, string file3, string file4);

unsigned char multiply(unsigned char one, unsigned char two);
unsigned char subtract(unsigned char one, unsigned char two);
unsigned char add(unsigned char one, int factor);
unsigned char scale(unsigned char one, int factor);
unsigned char screen(unsigned char one, unsigned char two);
unsigned char overlay(unsigned char one, unsigned char two);
Image part1Helper(string file1, string file2);
Image setHeader(Image &old);