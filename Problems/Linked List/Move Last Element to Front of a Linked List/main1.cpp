using namespace std;
#include<iostream>

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode* p = head;
        ListNode* q = NULL;
        while (p->next) {
            q = p;
            p = p->next;
        }
        if (q) q->next = NULL;
        if (q && p) p->next = head;
        if (q && p) head = p;
        return head;
    }
};

int main() {
    return 0;
}