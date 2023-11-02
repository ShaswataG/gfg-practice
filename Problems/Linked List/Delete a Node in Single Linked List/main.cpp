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

Node* deleteNode(Node *head,int x)
{
    //Your code here
    if (x == 1) {
        head = head->next;
    } else {
        Node* p = head;
        for (int i = 0; i < x-2; i++)
        {
            p = p->next;
        }
        p->next = p->next->next;
    }
    return head;
}

int main() {
    return 0;
}