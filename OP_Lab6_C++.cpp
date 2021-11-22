#include <iostream>
using namespace std;

int sum_recursive(int a, int d, int n)
{
    int res;
    n -= 1;
    if (n == 0)
    {
        res = a;
    }
    else
    {
        res = a + (d * n) + sum_recursive(a, d, n);
    }
    return res;
};

int main()
{
    int x, y, z, ans;
    cout << "Define the first term: "; cin >> x;
    cout << "Define the difference: "; cin >> y;
    cout << "Define number of terms: "; cin >> z;
    ans = sum_recursive(x, y, z);
    cout << "\nSum of the first nth terms :" << ans << '\n';
}