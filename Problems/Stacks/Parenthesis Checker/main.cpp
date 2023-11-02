using namespace std;
#include<bits/stdc++.h>

bool ispar(string x)
{
    // Your code here
    stack<char> s;
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x.length() == 1) return false;
        if (x[i] == '(' || x[i] == '{' || x[i] == '[') s.push(x[i]);
        else if (x[i] == ')' || x[i] == '}' || x[i] == ']')
        {
            if (x[i] == ')' && s.top() == '(') s.pop();
            else if (x[i] == '}' && s.top() == '{') s.pop();
            else if (x[i] == ']' && s.top() == '[') s.pop();
            else return false;
        }
    }
    if (s.empty() == 1) return true;
    else return false;
}
int main() {
    cout << ispar("()") << endl;
    cout << ispar("([]") << endl;

    return 0;
}