#include <iostream>
#include <utility>
using namespace std;

/*int main()
{
    int arr[5] = {4, 8, 2, 1, 7};
    cout << "Unsorted array " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
     cout << endl;

    for (int i = 0; i < 4; i++)                                          //loop till n-1 i.e 5-1 = 4 basically 4 passes (0,1,2,3)
    {
        int min = i;
        for (int j = i+1; j < 5; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }

    cout << "Sorted array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}*/


//more detailing :)


/* void enterElement(int arr[],int size){
    cout << "Enter elements:"<<endl;
    for (int i = 0; i < size ; i++)
     {
        cin >> arr[i];
        }

}

void printArray(int arr[], int size){
    cout << "Array is: ";
      for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

}

void selection(int arr[], int size){
    
    for (int i = 0; i < size-1; i++)                                          //loop till n-1 i.e 5-1 = 4 basically 4 passes (0,1,2,3)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main (){
 
    int arr[15];
    enterElement(arr,10);
    printArray(arr,10);

    selection(arr,10);

} */


void selection(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mini = i; 
        for(int j=i+1; j<n; j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    cout<<endl<<"Array after sorting"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[5]={38,27,43,3,9};
    cout<<"Array before sorting"<<endl;
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }

    selection(array,5);

    
}