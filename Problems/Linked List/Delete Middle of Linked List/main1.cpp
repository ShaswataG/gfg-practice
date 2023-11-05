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
};

Node* deleteMid(Node* head)
{
    // Your Code Here
/*
TC = O(n)
SC = O(1)
*/
    int len = 0;
    Node* p = head;
    while (p) {
        len++;
        p = p->next;
    }
    p = head;
    if (len == 1) {
        delete p;
    } else {
        for (int i = 1; i < len/2; i++) {
            p = p->next;
        }
        Node* t = p->next;
        p->next = p->next->next;
        delete t;
        t = nullptr;
    }
    if (len == 1) head = NULL;
    return head;
}

int main() {
    return 0;
}