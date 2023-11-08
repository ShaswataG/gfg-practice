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

class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
/*
TC = O(n)   (always since even while inserting at the beginning, we need to traverse through the whole list for modifying the last node's next pointer as it is a circular list)
SC = O(1)
*/
       //Your code here
       struct Node* p, * q, * r, * t;
       p = r = head;
       q = NULL;
       int cnt = 0;
       t = new Node(data);
       if (data < p->data) {
        t->next = p;
        head = t;
        while (r->next != p) {
            r = r->next;
        }
        r->next = head;
        return head;
       }
       while ((cnt == 0 && data >= p->data)||(p != head && data >= p->data)) {
        q = p;
        p = p->next;
        cnt++;
       }
        t->next = p;
        q->next = t;
       return head;
    }
};

int main() {
    return 0;
}