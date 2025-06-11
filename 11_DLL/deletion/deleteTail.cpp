#include <iostream>
using namespace std; 

class Node{
    public:
    int data; 
    Node *next; 
    Node *prev; 
    
    public:
    Node(int value, Node *next1, Node *prev1){
        data = value; 
        next = next1; 
        prev = prev1; 
    }
    Node(int value){
        data = value; 
        next = NULL; 
        prev = NULL; 
    }
};

Node* convertArr2DLL(int arr[], int size){
    Node *head = new Node(arr[0]);
    Node *back = head; 
    for(int i = 1; i < size; i++){
        Node *temp = new Node(arr[i], NULL, back);
        back -> next = temp; 
        back = back -> next; 
    }
    return head; 
}

Node* deleteTail(Node *head){
    if(head == NULL || head->next == NULL) return NULL; 
    Node *tail = head; 
    while(tail->next!=NULL){
        tail= tail->next; 
    }
    Node *newtail = tail->prev;
    newtail->next = NULL; 
    tail->prev = NULL; 
    free(tail);
    return head; 
}
void printDLL(Node *head){
    if(head == NULL) cout<< head; 
    Node *temp = head; 
    while(temp!=NULL){
        cout<<temp->data<<" "; 
        temp = temp->next; 
    }
}

int main() {
    int arr[5] = { 2, 6, 3, 7, 9};
    Node *head = convertArr2DLL(arr, 5);
    head = deleteTail(head);
    printDLL(head);

    return 0;
}