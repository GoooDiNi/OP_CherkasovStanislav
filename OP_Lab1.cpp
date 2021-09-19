#include "stdlib.h"
#include "math.h"
#include <iostream>
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "Ukrainian");
	
	//������� �� ������ ����
	float a, b, c, P, p, S;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;

	//���� ������� ��������� ����:
	if (a < b + c and b < a + c and c < a + b)
	{
		//���������� ����� ���������� �� �������� ������
		P = a + b + c;
		p = P / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));

		//����������� �� ��������� ��������� ����������
		cout << "\n�i�������� ����������:\n";
		printf("l1=%5.3f\n", sqrt(a * b * P * (a + b - c)) / (a + b));
		printf("l2=%5.3f\n", sqrt(b * c * P * (b + c - a)) / (b + c));
		printf("l3=%5.3f\n", sqrt(c * a * P * (c + a - b)) / (c + a));

		//���������� �� �������� ������ ���������� �� ���������� ��
		cout << "\n���i��� ��. �� ��. �i�:\n";
		printf("R=%5.3f\n", (a * b * c) / (4 * S));
		printf("r=%5.3f\n", (2 * S) / P);
	}

	//���� ������� ��������� �� ����:
	else
	{
		cout << "\n��������(�), �� �i��i���� �� ��� ���������� ������";
		return 0;
	}
}