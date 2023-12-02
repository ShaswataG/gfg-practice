using namespace std;
#include<iostream>

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node * mergeResult(Node *node1,Node *node2)
{
/*
TC = O(m+n) ~ O(n)  where, m and n are number of nodes in both the lists
SC = O(1)
*/
    // your code goes here
    Node* head, * p, * q, * t;
    p = node1;
    q = node2;
    if (p->data < q->data) {
        head = p;
        t = p->next;
        p->next = NULL;
        p = t;
    } else {
        head = q;
        t = q->next;
        q->next = NULL;
        q = t;
    }
    while (p && q) {
        if (p->data < q->data) {
            t = p->next;
            p->next = head;
            head = p;
            p = t;
        } else {
            t = q->next;
            q->next = head;
            head = q;
            q = t;
        }
    }
    while (p) {
        t = p->next;
        p->next = head;
        head = p;
        p = t;
    }
    while (q) {
        t = q->next;
        q->next = head;
        head = q;
        q = t;
    }
    return head;
}