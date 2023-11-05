using namespace std;
#include<iostream>

struct StackNode {
    int data;
    StackNode* next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
    private:
        StackNode* top;

    public:
        void push(int);
        int pop();
        MyStack() {top = NULL;}
};


void MyStack::push(int x) {
/*
TC = O(1)
SC = O(1)
*/
    StackNode* t = new StackNode(x);
    t->next = top;
    top = t;
}

int MyStack::pop() {
/*
TC = O(1)
SC = O(1)
*/
    int x = -1;
    if (top) {
        x = top->data;
        StackNode* p = top;
        top = top->next;
        delete p;
    }
    return x;
}

int main() {

    return 0;
}