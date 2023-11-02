using namespace std;
#include<iostream>

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int getNthFromLast(Node *head, int n)
{
    // Your code here
    int len = 0;
    Node* p = head;
    while (p) {
        len++;
        p = p->next;
    }
    p = head;
    if (n > len) return -1;
    else {
        int pos = len+1-n;
        for (int i = 0; i < pos - 1; i++)
        {
            // if (!p) return -1;
            p = p->next;
        }
        return p->data;        
    }
}

int main() {
    return 0;
}