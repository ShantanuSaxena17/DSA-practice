#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
       swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
}


int main()
{

    int array1[5] = {1, 2, 3, 4, 5};
    int array2[6] = {1, 2, 3, 4, 5, 6};

    reverse(array1, 5);
    reverse(array2, 6);

    printArray(array1, 5);
    cout << endl;
    printArray(array2, 6);

    return 0;
}