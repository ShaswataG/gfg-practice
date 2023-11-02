using namespace std;
#include<iostream>

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

    //Function to insert a node at the beginning of the linked list.
Node *insertAtBegining(Node *head, int x) {
   // Your code here
/*
TC = O(1)
*/
    Node* t = new Node(x);
    t->next = head;
    head = t;
    return head;
}
    
    
    //Function to insert a node at the end of the linked list.
Node *insertAtEnd(Node *head, int x)  {
    // Your code here
/*
TC = O(n)
*/
    Node* p = head;
    if (!p)
    {
        Node* t = new Node(x);
        head = t;
        head->next = NULL;
    } else {
        while (p->next!= NULL)
        {
            p = p->next;
        }
        Node* t = new Node(x);
        p->next = t;
        t->next = NULL;
    }

    return head;
}

int main() {
    return 0;
}