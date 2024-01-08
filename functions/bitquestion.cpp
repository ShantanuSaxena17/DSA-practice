#include<iostream>
using namespace std;

int count(int n){

    int count=0;
    while (n!=0){
        count+= n& 1;
        n = n >> 1;
    }
    return count;
    
}

int main(){
    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

    count(a);
    count(b);
    int ans = count(a)+count(b);
    cout << "Number of 1 bit is:" << ans << endl;

}