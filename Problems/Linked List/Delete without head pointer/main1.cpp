using namespace std;
#include<iostream>

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       Node* t = del->next;
       del->data = del->next->data;
       del->next = del->next->next;
       delete t;
    }

};

int main() {
    return 0;
}