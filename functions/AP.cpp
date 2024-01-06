#include<iostream>
using namespace std;

int AP(int n){
    int ans = (3*n)+7;
    return ans;

}

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "nth term is:" << AP(n) << endl;


}