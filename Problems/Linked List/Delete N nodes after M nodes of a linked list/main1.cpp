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
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
/*
TC = O(n^2)
SC = O(1)
*/
        Node* p, * q, * t;
        p = head;
        while (p) {
            for (int i = 0; p && i < M-1; i++) {
                p = p->next;
            }
            if (p) q = p->next;
            else break;
            for (int i = 0; q && i < N; i++) {
                t = q;
                q = q->next;
                delete t;
            }
            if (p) p->next = q;
            p = q;
        }
    }
};

int main() {
    return 0;
}