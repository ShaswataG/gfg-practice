using namespace std;
#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool detectLoop(Node* head)
{
    // your code here
    Node* p, * q;
    p = q = head;
    while (p && q) {
        q = q->next;
        // if (p && p == q) return 1;
        if (p->next) p = p->next->next;
        else p = p->next;
        if (p && p == q) return 1;
    }
    return 0;
}
int main() {
    return 0;
}