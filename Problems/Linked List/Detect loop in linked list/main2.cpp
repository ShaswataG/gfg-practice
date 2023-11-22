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
       while(head)
       {
           head->data=NULL;
           head=head->next;
           if(head!=NULL&&head->data==NULL)return 1;
       }
       return 0;
}
int main() {
    return 0;
}