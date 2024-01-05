#include <iostream>
using namespace std;

int power()
{
    int a;
    int b;
    cout << "Enter the value of base:";
    cin >> a;
    cout << "Enter the value of power:";
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int ans = power();
    cout << "First output " << ans << endl;
    int ans1 = power();
    cout << "Second output " << ans1 << endl;
    int ans2 = power();
    cout << "Third output " << ans2 << endl;
}