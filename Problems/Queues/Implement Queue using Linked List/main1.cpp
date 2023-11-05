using namespace std;
#include<iostream>

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

class MyQueue {
    public:
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
    void display();
};

//Function to push an element into the queue.
void MyQueue::push(int x)
{
    QueueNode* t = new QueueNode(x);
    if (front == NULL) {
        front = t;
        rear = t;       
    }
    if (rear) t->next = rear->next;
    if (rear) rear->next = t;
    rear = t;
}

//Function to pop front element from the queue.
int MyQueue::pop()
{
        // Your Code
        int x = -1;
        if (front) {
            x = front->data;
            QueueNode* p = front;
            front = front->next;
            delete p;
        }
        return x;
}

void MyQueue::display() {
    QueueNode* p = front;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.pop();
    q.pop();
    q.display();
    return 0;
}