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

Node* sortedMerge(Node* head1, Node* head2)  
{  
    struct Node* head, * last;
    if (head1->data < head2->data) {
        head = last = head1;
        head1 = head1->next;
    } else {
        head = last = head2;
        head2 = head2->next;
    }
    while (head1 && head2) {
        if (head1->data < head2->data) {
            last->next = head1;
            last = head1;
            head1 = head1->next;
        } else {
            last->next = head2;
            last = head2;
            head2 = head2->next;
        }
    }
    if (head1) last->next = head1;
    if (head2) last->next = head2;
    return head;
}  

int main() {
    return 0;
}