#include <iostream>
using namespace std; 

class Node{
    public:
    int data; 
    Node *next; 
    
    public:
    Node(int value){
        data = value; 
        next = NULL; 
    }
};

int main() {
    
    int arr[4] = { 3, 6, 1, 4};
    Node *Head = NULL; 
    Node *tail = NULL; 
    
    for(int i = 0; i < 4; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
            tail = Head; 
        }
        else{
            Node *tail  = Head; 
            while(tail->next != NULL){
                tail = tail->next; 
            }
            Node *temp = new Node(arr[i]);
            tail->next = temp; 
            tail = tail -> next; 
        }
    }
    
    //printing
    Node *temp = Head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next; 
    }
    

    return 0;
}