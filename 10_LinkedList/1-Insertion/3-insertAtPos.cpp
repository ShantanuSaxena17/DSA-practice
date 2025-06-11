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

Node* convertingArray(int arr[]){
    Node*Head = NULL; 
    for(int i = 0; i < 4; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }
        else{
            Node *tail  = Head; 
            while(tail->next != NULL){
                tail = tail->next; 
            }
            Node *temp = new Node(arr[i]);
            tail->next = temp; 
        }
    }
    return Head; 
}

Node* insertAtPos(Node* Head, int pos, int value){
    if(Head == NULL){
        if(pos == 1) return new Node(value);
    }
    if(pos == 1){
        Node* temp = new Node(value);
        temp->next = Head; 
        return temp; 
    }
    int cnt = 0; 
    Node * temp = Head; 
    while(temp != NULL){
        cnt++; 
        if(cnt == pos - 1){
            Node* temp2 = new Node(value);
            temp2->next = temp->next; 
            temp->next = temp2; 
            break; 
        }
        temp = temp -> next; 
    }
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
    
    int arr[4] = { 3, 6, 1, 4};
    Node *Head = NULL; 
    
    Head = convertingArray(arr);
    
    Head = insertAtPos(Head, 5, 5);
    
    printLL(Head);
   
    

    return 0;
}