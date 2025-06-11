#include <iostream>
using namespace std; 

class Node{
    public:
    int data; 
    Node* next; 
    
    public:
    Node(int value){
        data = value; 
        next = NULL; 
    }
};

Node* convertToLL(int arr[]){
    Node* Head = NULL;
    Node* Tail = NULL; 
    for(int i = 0; i < 5; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head; 
        }
        else{
            Node* Tail = Head; 
            while(Tail -> next != NULL){
                Tail = Tail ->next; 
            }
            Node*temp = new Node(arr[i]);
            Tail ->next = temp; 
            Tail = Tail -> next; 
        }
    }
    return Head; 
}

Node* deletefirst(Node* Head){
    if(Head == NULL) return Head; 
    Node* temp = Head; 
    Head = Head ->next; 
    free(temp); 
    return Head; 
}

void printLL(Node *Head){
    Node *temp = Head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next; 
    }
}

int main() {
    // Write C++ code here
    int arr[] = {5, 9, 8, 7, 2};
    
    Node* Head = NULL; 
    Head = convertToLL(arr);
    
    Head = deletefirst(Head);
    
    printLL(Head);
    

    return 0;
}