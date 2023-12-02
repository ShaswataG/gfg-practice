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

void deleteNode(struct Node **head, int key)
{
/*
TC =O(n)
SC =O(1)
*/
// Your code goes here
    Node* p = *head;
    Node* q = NULL;
    Node* tail;
    Node* t;
    int cnt = 0;
    while ((cnt == 0 && p->data != key) || (p != *head && p->data != key)) {
        q = p;
        p = p->next;
        cnt++;
    }
    if (q) q->next = p->next;
    if (p == *head) {
        t = p;
        *head = p->next;
        while (p->next != t) {
            p = p->next;
        }
        p->next = *head;
    }
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
/*
TC =O(n)
SC =O(1)
*/
// Your code goes here
    Node* p = *head_ref;
    Node* temp;
    Node* last= NULL;
    do {
        temp = p->next;
        p->next = last;
        last = p;
        p = temp;
    } while (p != *head_ref);
    temp->next = last;
    *head_ref = last;
}