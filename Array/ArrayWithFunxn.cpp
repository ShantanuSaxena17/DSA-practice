#include <iostream>
using namespace std;

int printArray(int a[], int size){
    cout << "printing the array: " << endl ;
    for(int i=0; i<size ;i++){
        cout << a[i] << " " << endl;
    }
}

int main(){
    int array[5] = {9, 4, 3, 5, 6};
    printArray(array,5);
}