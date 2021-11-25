#include <iostream>
using namespace std;

int gcf(int a, int b, int i = 0) {
	if (i == 0) {
		i = max(a, b);
	}
	if (a % i == 0 && b % i == 0) {
		return i;
	}
	else {
		return gcf(a, b, i - 1);
	}
}


int main() {
	int x, y, ans;

	cout << "\nDefine the first term: "; cin >> x;
	cout << "Define the second term: "; cin >> y;
	ans = gcf(x, y);
	cout << "\nThe greatest common factor of " << x << " and " << y << " is " << ans << '\n';
}