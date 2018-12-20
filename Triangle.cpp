// Nick Wilson
// Lab 6

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

enum triangleType { equilateral = 1, isosceles, scalene, noTriangle };
triangleType triangle;

int triangleShape(int sideOne, int sideTwo, int sideThree);

int main()
{
	int side1, side2, side3;

	cout << "Enter the first side: ";
	cin >> side1;
	cout << endl << "Enter the second side: ";
	cin >> side2;
	cout << endl << "Enter the third side: ";
	cin >> side3;
	cout << endl << endl;

	triangleShape(side1, side2, side3);

	if (triangle == 1)
	{
		cout << "The triangle type is equilateral." << endl;
	}
	else if (triangle == 2)
	{
		cout << "The triangle type is isosceles." << endl;
	}
	else if (triangle == 3)
	{
		cout << "The triangle type is scalene." << endl;
	}
	else
	{
		cout << "This is not a triangle." << endl;
	}

	system("pause");

}

int triangleShape(int sideOne, int sideTwo, int sideThree)
{

	if (sideOne == sideTwo && sideOne == sideThree && sideOne != 0 && sideTwo != 0 && sideThree != 0)
	{
		triangle = equilateral;
		return triangle;
	}
	else if (sideOne == sideTwo && sideOne != sideThree || sideOne == sideThree && sideOne != sideTwo && sideOne != 0 && sideTwo != 0 && sideThree != 0)
	{
		triangle = isosceles;
		return triangle;
	}
	else if (sideOne != sideTwo && sideOne != sideThree && sideTwo != sideThree && sideOne != 0 && sideTwo != 0 && sideThree != 0)
	{
		triangle = scalene;
		return triangle;
	}
	else
	{
		triangle = noTriangle;
		return triangle;
	}

}