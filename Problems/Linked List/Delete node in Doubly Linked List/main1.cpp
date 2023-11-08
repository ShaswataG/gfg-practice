#include<iostream>

struct Node {
    int data;
    struct Node* prev, * next;
};

struct Node* deleteNode(struct Node *head_ref, int x) {
    struct Node* p = head_ref;
    struct Node* t;
    if (x == 1) {
        t = head_ref;
        head_ref = head_ref->next;
        delete t;
    } else {
        for (int i = 0; i < x - 2; i++) {
            p = p->next;
        }
        t = p->next;
        if (p->next->next) p->next->next->prev = p;
        p->next = p->next->next;
        delete t;
    }
    return head_ref;
}

int main() {
    return 0;
}