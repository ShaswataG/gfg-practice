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

bool isCircular(Node* head) {
    bool circular = 0;
    if (!head) circular = 1;
    else {
        Node* p = head;
        while (p && p->next != head) {
            p = p->next;
        }
        if (p && p->next == head) circular = 1;
    }
    return circular;
}

int main() {
    return 0;
}