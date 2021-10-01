#include <iostream>
using namespace std;

int main()
{
	int Min, b, c, Sum;
	cout << "a="; cin >> Min;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	
	Sum = Min + b + c;
	if (Min > b)
	{
		Min = b;
	}
	if (Min > c)
	{
		Min = c;
	}
	Sum -= Min;

	cout << "\nThe sum of 2 largest numbers = " << Sum << "\n";
}