#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {1, 2, 3, 4, 5};

    swapalternate(even, 6);
    printarray(even, 6);
    cout << endl;
    swapalternate(odd, 5);
    printarray(odd, 5);
}