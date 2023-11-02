using namespace std;
#include<iostream>

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        Node* p, * q, *r, * t;
        p = head;
        q = r = NULL;
        int cnt = 0;
        while (p && p->next != NULL) {
            r = q;
            q = p;
            p = p->next;
            q->next = p->next;
            p->next = q;
            if (r != NULL) r->next = p;
            if (cnt == 0) head = p;
            p = q->next;
            cnt++;
        }
        return head;
    }
};