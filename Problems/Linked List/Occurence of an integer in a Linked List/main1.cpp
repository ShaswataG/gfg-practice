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
}*head;

class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
    //add your code here
        struct node* p = head;
        int cnt = 0;
        while (p) {
            if (p->data == search_for) cnt++;
            p = p->next;
        }
        return cnt;
    }
};

int main() {

    return 0;
}