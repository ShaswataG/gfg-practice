using namespace std;
#include<iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int getMiddle(Node *head)
{
    // Your code here
    Node* p, * q;
    p = q = head;
    int len = 0;
    while (p) {
        len++;
        p = p->next;
    }
    p = head;
    while (q) {
        q = q->next;
        if (q) q = q->next;
        if (q) p = p->next;
    }
    if (len%2 == 0) return p->next->data;
    else return p->data;
}