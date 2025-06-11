#include<iostream>
using namespace std; 


int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low; 
    int j = high; 
    while(i<j){
        while(arr[i]<= pivot && i<= high-1){
            i++;
        }
        while(arr[j]>= pivot && j>= low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j; 
}

void quickSort(int arr[], int low , int high){
    if(low<high){
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}

int main() {
    int arr[]={45, 56, 24, 12, 67};
    
    quickSort(arr, 0, 4);
    
    cout<<"Array after quick sort:"<<endl; 
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" "; 
    }

    return 0;
}