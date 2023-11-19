using namespace std;
#include<iostream>

struct Node {
	int data;
	struct Node* prev, *next;
};

Node* sortedInsert(Node * head, int x)
{
	// Code here
    Node* p,* q,* t;
    p = head;
    q = NULL;
    t = new Node;
    t->data = x;
    t->next = t->prev = NULL;
    while (p && x > p->data) {
        q = p;
        p = p->next;
    }
    // t->prev = p->prev;
    // t->next = p;
    // p->prev = t;

    // // last
    if (q) q->next = t;
    t->prev = q;
    t->next = p;
    if (p) p->prev = t;

    if (p == head) head = t;
    return head;
};

int main() {
    return 0;
}