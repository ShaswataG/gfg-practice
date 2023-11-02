using namespace std;
#include<bits/stdc++.h>

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        int m = floor((s.size()+1)/2);
        stack<int> st;
        int i = sizeOfStack+1;
        while (!s.empty()) {
            i--;
            if (i != m) st.push(s.top());
            s.pop();
        }
        while (!st.empty()) {
            s.push(st.top());
            st.pop();
        }
    }
};

int main() {
    return 0;
}