#include <iostream>
using namespace std;

int main() {

    float x, e, Sum, Add;
    int n;
    bool neg_x, neg_n;
    cout << "S = (x + 1)^n\n--------\n";
    cout << "Define x + 1: "; cin >> x;
    cout << "Define n: "; cin >> n;
    cout << "Define e: "; cin >> e;
    Sum = 1;
    Add = 1;
    neg_x = false;
    neg_n = false;

    if (x < 0)
    {
        x *= -1;
        neg_x = true;
    }
    x -= 1;

    if (n < 0)
    {
        n *= -1;
        neg_n = true;
    }

    for (int i = 1; i <= floor(n * e); i++)
    {
        Add *= (x * (n - i + 1)) / i;
        Sum += Add;
    }

    if (neg_n) 
    {
        Sum = 1 / Sum;
    }
                    
    if ((neg_x) && (n % 2 != 0))
    {
        Sum *= -1;
    }
                        
    cout << "--------\nS = " << Sum << "\n";

}