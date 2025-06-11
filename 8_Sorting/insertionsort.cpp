#include<iostream>
#include<utility>
using namespace std;


void insertion(int arr[], int n){
    for(int i=0; i<n; i++){
        int j=i; 
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int arr[5]={38, 27, 43, 3, 9};
    cout<<"Array before sorting"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    insertion(arr, 5);

    cout<<endl<<"Array after sorting"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}