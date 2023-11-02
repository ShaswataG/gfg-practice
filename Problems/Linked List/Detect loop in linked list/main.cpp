using namespace std;
#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool detectLoop(Node* head)
{
    // your code here
    Node* p = head;
    int cnt = 0;
    while (p) {
        if (p == head && cnt == 1) return true;
        cnt++;
        p = p->next;
    }
}
int main() {
    return 0;
}