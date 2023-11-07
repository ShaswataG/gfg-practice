using namespace std;
#include<iostream>

struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; 

int GetNth(struct node* head, int index){
    node* p = head;
    for (int i =  1; i < index; i++) {
        p = p->next;
    }
    return p->data;
}

int main() {
    return 0;
}