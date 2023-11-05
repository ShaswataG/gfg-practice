using namespace std;
#include<iostream>
#include<stack>
#include<queue>

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here
/*
TC = O(n)
SC = O(n)   (size of s = k, size of q1, n-k, so total extra space required = k + (n-k) = n)
*/
    stack<int> s;
    queue<int> q1;
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }
    while (!q.empty()) {
        q1.push(q.front());
        q.pop();
    }
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    while (!q1.empty()) {
        q.push(q1.front());
        q1.pop();
    }
    return q;
}

int main() {
    return 0;
}