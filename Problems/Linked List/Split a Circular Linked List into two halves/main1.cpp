using namespace std;
#include<iostream>

struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
};

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
/*
TC = O(n)
SC = O(1)
*/
    int cnt = 0;
    Node* p = head;
    Node* q = NULL;
    do {
        q = p;
        p = p->next;
        cnt++;
    } while (p != head);
    
    p = head;
    *head1_ref = head;
    if (cnt%2 == 0) {
        for (int i = 0; i < cnt/2-1; i++) {
            p = p->next;
        }
        q->next = p->next;
        p->next= head;
        *head2_ref = q->next;
    } else {
        for (int i = 0; i < cnt/2; i++) {
            p = p->next;
        }
        q->next = p->next;
        p->next = head;
        *head2_ref = q->next;
    }
}

int main() {
    return 0;
}