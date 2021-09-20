// Lab_03_1.cpp
// Комоній Іштван Іштванович
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	cout << "x = "; cin >> x;

	A = 2 * abs(5- x);

	if (x <= -1)
		B = exp(abs(2 + x));
	if (-1 <= x && x <= 1)
		B = sin(1 / (abs(2 + x))) * sin(1 / (abs(2 + x)));
	if (x >= 1)
		B = (cos(x) * cos(x)) / (1 + abs(sin(x)));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;

	if (x <= -1)
		B = exp(abs(2 + x));
	else
		if (x >= 1)
			B = (cos(x) * cos(x)) / (1 + abs(sin(x)));
		else
			B = sin(1 / (abs(2 + x))) * sin(1 / (abs(2 + x)));
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}