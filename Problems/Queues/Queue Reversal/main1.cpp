using namespace std;
#include<iostream>
#include<queue>
#include<stack>

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
/*
TC = O(n)
SC = O(n) (creating an extra stack of size same as queue+)
*/
        stack<int> s;
        while(!q.empty()) {
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()) {
            q.push(s.top());
            s.pop();
        }
        return q;
    }
};

int main() {
    return 0;
}