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

bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
/*
TC = O(n)
SC = O(1)
*/
    Node* p = head1, * q = head2;
    while (p && q) {
        if (p->data != q->data) return 0;
        else {
            p = p->next;
            q = q->next;
        }
    }
    if ((!p && q) || (p && !q)) return 0;
    else return 1;
}

int main() {
    return 0;
}