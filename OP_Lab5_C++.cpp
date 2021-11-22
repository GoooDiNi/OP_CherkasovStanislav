#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	for (a = 1; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a != b)
			{
				for (c = 0; c < 10; c++)
				{
					if (a != c && b != c)
					{
						for (d = 0; d < 10; d++)
						{
							if (a != d && b != d && c != d)
							{
								cout << a << b << c << d << '\n';
							}
						}
					}
				}
			}
		}
	}
}