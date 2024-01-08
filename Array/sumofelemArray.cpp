#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5];

    cout << "Enter the elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int ans = sum(arr,5);
    cout << ans ;

    return 0;
}
