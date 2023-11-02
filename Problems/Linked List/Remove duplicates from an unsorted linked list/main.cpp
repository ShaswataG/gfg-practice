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

Node * removeDuplicates( Node *head) 
{
 // your code goes here
         Node* p, * q;
    p = head;
    int max = p->data;
    while (p) {
        if(p->data > max) max = p->data;
        p = p->next;
    }
    p = head;
    q = p->next;
    int H[max+1] = {0};
    H[p->data]++;
    while(q) {
        H[q->data]++;
        if (H[q->data] > 1) {
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