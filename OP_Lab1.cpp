#include "stdlib.h"
#include "math.h"
#include <iostream>
using namespace std;
int main(void)
{
	//input
	float a, b, c, P, p, S;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;

	//if the triangle exists
	if (a < b + c and b < a + c and c < a + b)
	{
		//calculate the area
		P = a + b + c;
		p = P / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));

		//calculate and output the bisectors
		cout << "\nThe bisectors:\n";
		printf("l1=%5.3f\n", sqrt(a * b * P * (a + b - c)) / (a + b));
		printf("l2=%5.3f\n", sqrt(b * c * P * (b + c - a)) / (b + c));
		printf("l3=%5.3f\n", sqrt(c * a * P * (c + a - b)) / (c + a));

		//calculate and output the radii
		cout << "\nThe radii:\n";
		printf("R=%5.3f\n", (a * b * c) / (4 * S));
		printf("r=%5.3f\n", (2 * S) / P);
	}

	//if the triangle doesn't exist
	else
	{
		cout << "The triangle doesn't exist";
		return 0;
	}
}
