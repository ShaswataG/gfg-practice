using namespace std;
#include<bits/stdc++.h>

stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> s;
   for(int i = n-1; i >= 0; i--) {
    s.push(arr[i]);
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    int min = INT16_MAX;
    vector<int> v;
    while (!s.empty()) {
        while (!s.empty()) {
            v.push_back(s.top());
            s.pop();
        }
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < min) min = v[i];
        }
        for (int i = v.size()-1; i >= 0; i--) {
            s.push(v[i]);
            v.pop_back();
        }
        cout << min << " ";
        s.pop();
    }
}

int main() {
    return 0;
}