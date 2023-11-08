using namespace std;
#include<iostream>

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};

void deleteAlt(struct Node *head){
    // Code here
/*
TC = O(n) always
SC = O(1)
*/
    int a = 0;
    struct Node* p = head;
    struct Node* q = NULL;
    struct Node* t;
    while (p) {
        if (a%2 != 0) {
            t = q->next;
            q->next = p->next;
            p = p->next;
            delete t;
        } else {
            q = p;
            p = p->next;
        }
        a++;
    } 
}
int main() {
    return 0;
}