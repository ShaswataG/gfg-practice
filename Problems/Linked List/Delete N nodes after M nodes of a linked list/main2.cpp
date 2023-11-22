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
       if(!N||!head)return;
       
       Node* t=head;
       int count=1;
       while(t){
           if(count==M){
               int n=N;
               while(t->next&&n--){
                   t->next=t->next->next;
               }
               count=0;
           }
           count++;
           t=t->next;
       }
       return;
   }
};
int main() {
    return 0;
}