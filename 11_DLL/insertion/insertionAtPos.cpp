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
        next = nullptr; 
        prev = nullptr; 
    }
};
Node *convertArr2DLL(int arr[]){
    Node* head = new Node(arr[0]);
    Node* back = head; 
    for(int i = 1; i < 5; i++){
        Node *temp = new Node(arr[i], nullptr, back);
        back -> next = temp; 
        back = temp; 
    }
    return head; 
}

Node *insertBeforePos(Node*head, int value, int k){
    if(k == 1){
        Node *temp = new Node(value, head, NULL);
        head->prev = temp; 
        return temp; 
    }
    Node *temp = head; 
    int cnt = 0; 
    while(temp!=NULL){
        cnt++; 
        if(cnt == k) break; 
        temp = temp -> next; 
    }
    Node *back = temp -> prev; 
    Node *newNode = new Node(value, temp, back);
    back->next = newNode; 
    temp->prev = newNode; 
    return head; 
}
void printDLL(Node *head){
    Node *temp = head; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
}
int main() {
   int arr[5] = {4, 6, 2, 8, 1};
   Node *head; 
   head = convertArr2DLL(arr);
   head = insertBeforePos(head, 7,4);
   printDLL(head);

    return 0;
}