using namespace std;
#include<iostream>

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node* reverseDLL(Node * head)
{
    //Your code here
    Node* p, * t;
    p = head;
    while (p) {
        t = p->prev;
        p->prev = p->next;
        p->next = t;
        if (!p->prev) head = p;
        p = p->prev;
    }
    return head;
}

int main() {
    return 0;
}