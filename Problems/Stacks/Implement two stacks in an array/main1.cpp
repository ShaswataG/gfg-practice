using namespace std;
#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node* p, * q, *t;
        t = new Node(data);
        t->data = data;
        p = head;
        q = NULL;
        
        while (p && p->data < data) {
            q = p;
            p = p->next;
        }
        if (p == head) {
            t->next = p;
            head = t;
        } else {
            t->next = q->next;
            q->next = t;
        }
        return head;
    }
};