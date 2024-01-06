#include <iostream>
using namespace std;

void fibonacii(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }
}

int main(){
    int n;
    cout << "Enter the value of n:" ;
    cin >> n ;
    fibonacii(n);
    return 0;
    
}