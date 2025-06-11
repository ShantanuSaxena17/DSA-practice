#include <iostream>
using namespace std; 

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class Stack{
    int length;
    Node* top;
    public:
    Stack(){
        top = NULL;
        length = 0; 
    }
    void push(int x){
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        length++;
    }
    void pop(){
        if(top == NULL){
            cout << "Stack Underflow";
            return;
        }
        Node* temp = top;
        top = top->next; 
        delete temp;
        length--;
    }
    int peek(){
        if(top == NULL){
            cout << "Stack is empty";
            return -1; 
        }
        return top->data;
    }
    int size(){
        return length;
    }
};
int main(){
    Stack s;
    cout << s.peek() << endl;
    s.push(4);
    s.push(6);
    s.push(9);
    cout << s.size() << endl;
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.size() << endl;
}