#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data;
      Node* prev;
      Node* next;

      //constructor
      Node(int d){
         this -> data = d;
         this -> prev = NULL;
         this -> next = NULL;
      }

      //destructor
      ~Node(){
          int val = this -> data;
          if(next != NULL){
              delete next;
              next = NULL; 
          }
          cout<<"Memory is free with data "<<val<<endl;
      }
};

//traversing of Linkedlist
void print(Node* &head){
    Node* temp = head;

    while( temp != NULL){
       cout << temp -> data<<" ";
       temp = temp -> next;
    }
    cout << endl;
}

//Get the length of Linkedlist
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;

    while( temp != NULL){
       len++;
       temp = temp -> next;
    }
   return len;
}

//insertAtHead
void insertAtHead(Node* &tail, Node* &head, int d){
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
   
}

//insertAtHead
void insertAtTail(Node* &tail, Node* &head, int d){
    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
       Node* temp = new Node(d);
       tail -> next = temp;
       temp -> prev = tail;
       tail = temp;
    }
    
}

//insert at position
void insertAtPosition(Node* &tail, Node* &head, int position, int data){
    //insert at position head
    if(position == 1){
        insertAtHead(tail, head , data);
        return;
    }

      //new node created
    Node* temp = head;
    int cnt = 1;
     while(cnt < position - 1){
         temp = temp -> next;
         cnt++;
     }

   //insert at position tail
    if(temp -> next == NULL){
        insertAtTail(tail ,head, data);
        return;
    }

     Node* nodeToInsert = new Node(data);
     nodeToInsert -> next = temp -> next;
     temp -> next -> prev  = nodeToInsert;
     temp -> next = nodeToInsert;
     nodeToInsert -> prev = temp;

}

//Deletion
void deleteNode(int position, Node* &head){
    //first node or starting point
    if(position == 1){
         Node* temp = head;
         temp -> next -> prev = NULL;
         head = temp -> next;
         temp -> next = NULL; 
         delete temp;

    }else{
       Node* curr = head;
       Node* prev = NULL;

       int cnt = 1;
       while(cnt < position){
           prev = curr;
           curr = curr -> next;
           cnt++;
       }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
  
}

int main(){
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(tail, head, 15);
    print(head);

    insertAtHead(tail, head, 18);
    print(head);

    insertAtHead(tail, head, 25);
    print(head);

    insertAtTail(tail, head, 34);
    print(head);

    insertAtPosition(tail, head, 2, 150);
    print(head);

    deleteNode(3, head);
    print(head);
    return 0;
}