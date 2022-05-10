#include <bits/stdc++.h>
using namespace std;

class Node {

       public :
        int data;
        Node* next;

    //   constructor for creating new node
      Node(int data) {
         this -> data = data;
         this -> next = NULL;
      }

    //Desctructor
    ~Node() {
        int value = this ->data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int data){
    //new node created 
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int data){
    //new node created
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &tail, Node* &head, int position, int data){
    //insert at position head
    if(position == 1){
        insertAtHead(head , data);
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
        insertAtTail(tail , data);
        return;
    }

     Node* nodeToInsert = new Node(data);
     nodeToInsert -> next = temp -> next;
     temp -> next = nodeToInsert;

}

void deleteNode(int position, Node* &head){
    //first node or starting point
    if(position == 1){
         Node* temp = head;
         head = head -> next;
         //memory free start node
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
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
  
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
}


bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            cout << "Present on element " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

void removeLoop(Node* head) {

    if( head == NULL)
        return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;

}


int main() {
     Node* node1 = new Node(10);//implementation of node
    //  cout<<node1 -> data <<endl;
    //  cout<<node1 -> next <<endl;

   //head pointed at node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
   
//    insertAtHead(head, 12);
   insertAtTail(tail, 12);

   print(head);

//    insertAtHead(head, 15);
   insertAtTail(tail, 15);

   print(head);

   insertAtPosition(tail,head, 4 ,22);
   print(head);
//    cout<<"head "<<head -> data<<endl;
//    cout<<"tail "<<tail -> data<<endl;

   deleteNode(3,head);
   print(head);
  

     tail -> next = head ->next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    //print(head);

    if(floydDetectLoop(head) != NULL) {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    Node* loop = getStartingNode(head);

    cout << "loop starts at " << loop -> data  << endl;

    removeLoop(head);
    print(head);

    /*
    print(head);
    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
    */

     

return 0;
}