#include <iostream>
using namespace std;
class Stack{
    int top =  -1; 
    int st[10];
    public:
    void push(int x){
         if(top >= 10){
            cout << "stack overflow" << endl; 
         }
         top = top+1;
         st[top] = x; 
    }
    void pop(){
        if(top == -1){
            cout << "Stack underflow" << endl; 
        }
        top = top - 1; 
    }
    int peek(){
        if(top == -1) cout << "stack empty" << endl;
        return st[top];
    }
    int size(){
        return top+1; 
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(59);
    s.push(38);
    s.pop();
    cout << s.peek() << endl; 
    cout << s.size() << endl; 
}