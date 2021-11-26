#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b > 0){
	    int c;
	    c = a % b;
	    a = b;
	    b = c;
	}
	return(a);
}


int main() {
	int x, y, z, ans;

	cout << "\nDefine the first term: "; cin >> x;
	cout << "Define the second term: "; cin >> y;
	cout << "Define the third term: "; cin >> z;
	ans = gcd(z, gcd(abs(x), abs(y)));
	cout << "\nThe greatest common divisor of " << x << ", " << y << " and " << z << " is " << ans << '\n';
}