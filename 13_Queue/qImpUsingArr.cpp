#include<iostream>
using namespace std; 

class Queue{
    int* arr;
    int length, front, rear;
    int curSize = 0;  
    public:
    Queue(int n){
        arr = new int[n];
        length = n; 
        front = rear = -1; 
    }
    void enqueue(int x){
        if(curSize == length){
            cout << "Queue overflow" << endl; 
            return; 
        }
        else if(curSize == 0){
            front = rear = 0;  
        }
        else{
            rear = (rear+1)%length; 
        }
        arr[rear] = x; 
        curSize++;
    }
    int dequeue(){
        int el; 
        if(curSize == 0){
            cout << "Queue underflow"; 
            return -1;
        }
        //int el = arr[front]; 
        else if(curSize == 1){
            el = arr[front]; 
            front = rear = -1; 
            
        }
        else{
            el = arr[front]; 
            front = (front+1)%length; 
        }
        curSize--;
        return el; 
    }
    int top(){
        if(curSize == 0) return -1; 
        return arr[front]; 
    }
    int size(){
        return curSize; 
    }
};

int main(){
    Queue q(4);
    cout << q.dequeue() << endl; 
    q.enqueue(4); 
    q.enqueue(6); 
    q.enqueue(8);
    q.enqueue(10);
    cout << q.top() << " " << q.size() << endl; 
    cout << q.dequeue() <<  endl; 
    cout << q.top() << " " << q.size() << endl; 

}