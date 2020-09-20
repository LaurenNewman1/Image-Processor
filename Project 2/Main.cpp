#include "Image.h"
#include "Tests.h"
#include "Tasks.h"
using namespace std;

int main ()
{
	// Part 1
	cout << "Executing part 1..." << endl;
	part1("input/layer1.tga", "input/pattern1.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part1.tga", "examples/EXAMPLE_part1.tga");

	// Part 2
	cout << endl << "Executing part 2..." << endl;
	part2("input/layer2.tga", "input/car.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part2.tga", "examples/EXAMPLE_part2.tga");

	// Part 3
	cout << endl << "Executing part 3..." << endl;
	part3("input/layer1.tga", "input/pattern2.tga", "input/text.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part3.tga", "examples/EXAMPLE_part3.tga");

	// Part 4
	cout << endl << "Executing part 4..." << endl;
	part4("input/layer2.tga", "input/circles.tga", "input/pattern2.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part4.tga", "examples/EXAMPLE_part4.tga");

	// Part 5
	cout << endl << "Executing part 5..." << endl;
	part5("input/layer1.tga", "input/pattern1.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part5.tga", "examples/EXAMPLE_part5.tga");

	// Part 6
	cout << endl << "Executing part 6..." << endl;
	part6("input/car.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part6.tga", "examples/EXAMPLE_part6.tga");

	// Part 7
	cout << endl << "Executing part 7..." << endl;
	part7("input/car.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part7.tga", "examples/EXAMPLE_part7.tga");

	// Part 8
	cout << endl << "Executing part 8..." << endl;
	part8("input/car.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part8_b.tga", "examples/EXAMPLE_part8_b.tga");
	comparisonTest("output/part8_g.tga", "examples/EXAMPLE_part8_g.tga");
	comparisonTest("output/part8_r.tga", "examples/EXAMPLE_part8_r.tga");

	// Part 9
	cout << endl << "Executing part 9..." << endl;
	part9("input/layer_red.tga", "input/layer_green.tga", "input/layer_blue.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part9.tga", "examples/EXAMPLE_part9.tga");

	// Part 10
	cout << endl << "Executing part 10..." << endl;
	part10("input/text2.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/part10.tga", "examples/EXAMPLE_part10.tga");

	// Extra Credit
	cout << endl << "Executing extra credit..." << endl;
	extraCredit("input/car.tga", "input/circles.tga", "input/text.tga", "input/pattern1.tga");
	cout << "\tcompleted" << endl;
	comparisonTest("output/extracredit.tga", "examples/EXAMPLE_extraCredit.tga");

	// Final Testing
	cout << endl << "Conducting final testing..." << endl;

	cout << endl << "Testing part 1..." << endl;
	comparisonTest("output/part1.tga", "examples/EXAMPLE_part1.tga");
	cout << "Score: 11/135" << endl;

	cout << endl << "Testing part 2..." << endl;
	comparisonTest("output/part2.tga", "examples/EXAMPLE_part2.tga");
	cout << "Score: 22/135" << endl;

	cout << endl << "Testing part 3..." << endl;
	comparisonTest("output/part3.tga", "examples/EXAMPLE_part3.tga");
	cout << "Score: 33/135" << endl;

	cout << endl << "Testing part 4..." << endl;
	comparisonTest("output/part4.tga", "examples/EXAMPLE_part4.tga");
	cout << "Score: 44/135" << endl;

	cout << endl << "Testing part 5..." << endl;
	comparisonTest("output/part5.tga", "examples/EXAMPLE_part5.tga");
	cout << "Score: 55/135" << endl;

	cout << endl << "Testing part 6..." << endl;
	comparisonTest("output/part6.tga", "examples/EXAMPLE_part6.tga");
	cout << "Score: 66/135" << endl;

	cout << endl << "Testing part 7..." << endl;
	comparisonTest("output/part7.tga", "examples/EXAMPLE_part7.tga");
	cout << "Score: 77/135" << endl;

	cout << endl << "Testing part 8..." << endl;
	comparisonTest("output/part8_b.tga", "examples/EXAMPLE_part8_b.tga");
	comparisonTest("output/part8_g.tga", "examples/EXAMPLE_part8_g.tga");
	comparisonTest("output/part8_r.tga", "examples/EXAMPLE_part8_r.tga");
	cout << "Score: 88/135" << endl;

	cout << endl << "Testing part 9..." << endl;
	comparisonTest("output/part9.tga", "examples/EXAMPLE_part9.tga");
	cout << "Score: 99/135" << endl;

	cout << endl << "Testing part 10..." << endl;
	comparisonTest("output/part10.tga", "examples/EXAMPLE_part10.tga");
	cout << "Score: 110/135" << endl;

	cout << endl << "All parts and tests completed..." << endl;
	cout << "Score: 125/135" << endl;

	cout << endl << "Contains makefile.." << endl;
	cout << "Score: 135/135" << endl;

	cout << endl << "Testing extra credit..." << endl;
	comparisonTest("output/extracredit.tga", "examples/EXAMPLE_extraCredit.tga");
	cout << "Score: 140/135" << endl;
	return 0;
}