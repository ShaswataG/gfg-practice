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

class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
/*
TC = O(n^2)
SC = O(1)
*/
        Node* r, * p, * q;
        r = NULL;
        p = q = head;
        while (q) {
            while (p && p->data <= q->data) {
                p = p->next;
            }
            if (p) {
                if (r) r->next = q->next;
                if (q == head) head = q->next;
            } else {
                r = q;
            }
            q = q->next;
            p = q;
        }
        return head;
    }
    
};