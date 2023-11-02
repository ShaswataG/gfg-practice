using namespace std;
#include<iostream>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* reverseList(struct Node *head) {
    Node* p = head;
    Node* q = NULL, * r = NULL;
    while(p) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q; 
}