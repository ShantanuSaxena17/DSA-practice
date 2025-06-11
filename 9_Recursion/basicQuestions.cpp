#include <iostream>
using namespace std;

/***************************************  Printing name N times *************************************************/

/* int nameNtimes(int i, int n, string s){
    if(i>n) return false;
    cout << s<< " ";
    nameNtimes(i+1,n,s);
}

int main(){
    int n;
    string s;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the name to be printed:";
    cin>>s;
    nameNtimes(1, n, s);
} */

/***************************************  Printing 1 to N times *************************************************/

/* int oneToN(int i, int n){
    if(i>n) return false;
    cout<<i << " ";
    oneToN(i+1,n);
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    oneToN(1,n);
} */

/***************************************  Printing 1 to N times with backtracking *************************************************/

/* int nToOne(int i, int n){
    if(i<1) return false;

    nToOne(i-1,n);
    cout<<i << " ";
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    nToOne(n,n);
}  */

/***************************************  Printing sum of N terms *************************************************/

/* int sumfn(int n){
   if (n==0) return 0;
   return n + sumfn(n-1);
}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    cout << sumfn(n);

}  */

/***************************************  Printing factorial of N terms  *************************************************/

/* int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);

}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    cout << fact(n);

} */

/***************************************  Reverse an array  *************************************************/

int reverse(int i, int arr[], int n)
{
    if (i >= n / 2)
        return 0;
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

int main()
{
    //int n=5;
    //cout << "enter the number of elements n:";
    //cin >> n;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    reverse(0, arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
}
