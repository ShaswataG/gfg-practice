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

Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* p, * q;
 p = head;
 q = p->next;
 while (q) {
     if (p->data == q->data) {
         p->next = q->next;
         delete q;
         q = p->next;
     } else {
         p = q;
         q = q->next;
     }
 }
 return head;
}