#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int Evenindex = BinarySearch(even, 6, 8);
    cout << "Index of 8 is:" << Evenindex << endl;

    int Oddindex = BinarySearch(odd, 5, 11);
    cout << "Index of 11 is:" << Oddindex << endl;

    return 0;
}