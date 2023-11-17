using namespace std;
#include<bits/stdc++.h>

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void SortedStack :: sort()
{
   //Your code here
   priority_queue<int, vector<int>, greater<int>> g;
   while(!s.empty()) {
    g.push(s.top());
    s.pop();
   }
   while (!g.empty()) {
    s.push(g.top());
    g.pop();
   }
}

int main() {
    return 0;
}