using namespace std;
#include<iostream>

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};

int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      int cnt = 0;
      Node* p = head;
      while (p) {
          cnt++;
          p = p->next;
      }
      int sum = 0;
      p = head;
      for (int i = 1; p && i <= cnt; i++) {
          if (i > (cnt-n)) {
              sum+= p->data;
          }
          p = p->next;
      }
      return sum;
}

int main() {
    return 0;
}