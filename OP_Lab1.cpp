#include "math.h"
#include <iostream>
using namespace std;

int main()
{
	float a, b, c, P, p, S, l1, l2, l3, R, r;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;

	if (a < b + c and b < a + c and c < a + b)
	{
		P = a + b + c;
		p = P / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		l1 = sqrt(a * b * P * (a + b - c)) / (a + b);
		l2 = sqrt(b * c * P * (b + c - a)) / (b + c);
		l3 = sqrt(c * a * P * (c + a - b)) / (c + a);
		R = (a * b * c) / (4 * S);
		r = (2 * S) / P;
		cout << "\nThe bisectors:\n";
		printf("l1=%5.3f\n", l1);;
		printf("l2=%5.3f\n", l2);
		printf("l3=%5.3f\n", l3);
		cout << "\nThe radii:\n";
		printf("R=%5.3f\n", R);
		printf("r=%5.3f\n", r);
	}
	
	else
	{
		cout << "\nThe triangle doesn't exist\n";
	}
}
