#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int nCr = fact(n) / (fact(r) * fact(n - r));
    return nCr;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << "Answer is " << ans << endl;
}