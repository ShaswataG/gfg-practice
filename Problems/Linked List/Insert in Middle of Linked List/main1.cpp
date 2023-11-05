using namespace std;
#include<iostream>

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* insertInMiddle(Node* head, int x)
{
	// Code here
    Node* p, * q;
    p = q = head;
    while (q) {
        q = q->next;
        if (q) q = q->next;
        if (q) p = p->next; 
    }
    Node* t = new Node(x);
    t->next = p->next;
    p->next = t;
    return head;
}