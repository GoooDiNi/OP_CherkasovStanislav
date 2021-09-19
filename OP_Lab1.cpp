#include "stdlib.h"
#include "math.h"
#include <iostream>
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "Ukrainian");
	
	//вводимо та задаємо змінні
	float a, b, c, P, p, S;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;

	//якщо заданий трикутник існує:
	if (a < b + c and b < a + c and c < a + b)
	{
		//обраховуємо площу трикутника за формулою Герона
		P = a + b + c;
		p = P / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));

		//обраховуэмо та вивиодимо бісектриси трикутника
		cout << "\nБiсектриси трикутника:\n";
		printf("l1=%5.3f\n", sqrt(a * b * P * (a + b - c)) / (a + b));
		printf("l2=%5.3f\n", sqrt(b * c * P * (b + c - a)) / (b + c));
		printf("l3=%5.3f\n", sqrt(c * a * P * (c + a - b)) / (c + a));

		//обраховуємо та виводимо радіуси вписанного та описанного кіл
		cout << "\nРадiуси вп. та оп. кiл:\n";
		printf("R=%5.3f\n", (a * b * c) / (4 * S));
		printf("r=%5.3f\n", (2 * S) / P);
	}

	//якщо заданий трикутник не існує:
	else
	{
		cout << "\nШановний(а), ви вiдвiдуєте не той навчальний заклад";
		return 0;
	}
}