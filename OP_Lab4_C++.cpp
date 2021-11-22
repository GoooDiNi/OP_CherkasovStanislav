#include <iostream>
using namespace std;

int main() 
{

	float x, Sum;
	int n, i;

	cout << "\ny = 1 / (sin(x)) + 1 / (4*sin(x)) + ... + 1 / (n*n*sin(x))\n--------";
	cout << "\nDefine x: "; cin >> x;
	cout << "Define n: "; cin >> n;
	Sum = 0;
	for (i = 1; i <= n; i++) 
	{
		Sum += sin(x) / (i * i);
	}
	cout << "--------\ny = " << Sum << "\n";
}