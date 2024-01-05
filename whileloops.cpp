#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int sum=0;
    int num = 1;
    while (num<=n){
        sum=sum+num;
        num++;
    }
    cout<<"Sum is :"<<sum;
}