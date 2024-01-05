#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int sum=0;
    int num = 2;
    while(num<=n){
        if(num%2==0){
          sum=sum+num;
          }
          num++;
    }
    cout<<"sum is"<<sum;
}