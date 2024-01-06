#include <iostream>
using namespace std;

int main()
{
    //array 0
    int array[3] = {5, 7, 11};

    cout << "Value of index 1:" << array[1] << endl;
    
    //array 1
   /*int array1[3] = {0};

    int a = 3;

    for (int i = 0; i < a; i++)
    {
        cout << array1[i] << " ";
    }*/


    //array 2
    int array2[4];

    int b = 4;

    cout << "Enter the values:";
    for (int i = 0; i < b; i++)
    {
        cin >> array2[i] ;
        
    }
     cout << "values are:";
     for (int i = 0; i < b; i++)
    {
        cout << array2[i] << " ";
    }
}