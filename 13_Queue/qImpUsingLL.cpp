#include<iostream>
using namespace std; 

class Node{
    public:
    int data; 
    Node* next; 
    public:
    Node(int x){
        data = x; 
        next = NULL; 
    }
};

class Queue{
    public:
    Node* front = NULL;
    Node* rear = NULL; 
    int curSize = 0; 
    public:
    
    void enqueue(int x){
        Node* temp = new Node(x);
        if(curSize == 0){
            front = temp; 
            rear = temp;  
        }else{
            rear->next = temp; 
            rear = temp; 
        }
        curSize++; 
    }
    void dequeue(){
        Node* temp; 
        if(curSize == 0){
            cout << "queue underflow" << endl; 
            return;  
        }else if(curSize == 1){
            temp = front; 
            front = NULL; 
            rear = NULL; 
            free(temp);
        }
        else{
            temp = front; 
            front = front->next; 
            free(temp);
        }
        curSize--; 
    }
    int top(){
        if(curSize == 0) return -1; 
        return front->data; 
    }
    int size(){
        return curSize;
    }
};

int main(){
    Queue q; 
    //q.dequeue();
    q.enqueue(4);
    q.enqueue(8);
    q.enqueue(9);
    cout << q.top() << " " << q.size() << endl; 
    q.dequeue(); 
    cout << q.top() << " " << q.size() << endl; 
}