#include<iostream>
#include<utility>
using namespace std;

/* int main(){
        int arr[5] = { 8, 1, 4, 7, 6};
    cout << "Unsorted array " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    for (int i = 1; i < 4; i++){                                            //
        for (int j = 0; j< 5 - i;j++){
            if (arr[j+1] < arr[j]){
              swap(arr[j],arr[j+1]);  
            }
        }
    } 


    cout << "Sorted array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

} */


void bubble(int arr[], int n){
    for(int i=1; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
}

int main(){
    int arr[5]={38, 27, 43, 3, 9};
    cout<<"Array before sorting"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    bubble(arr, 5);

    cout<<endl<<"Array after sorting"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}
