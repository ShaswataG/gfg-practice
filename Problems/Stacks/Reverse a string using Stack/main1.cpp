using namespace std;
#include<iostream>
#include<stack>

char* reverse(char *S, int len)
{
    //code here
/*
TC = O(n)
SC = O(n)
*/
    stack<char> s;
    for (int i = 0; S[i] != '\0'; i++) {
        s.push(S[i]);
    }
    for (int i = 0; S[i] != '\0'; i++) {
        S[i] = s.top();
        s.pop();
    }
    return S;
}

int main() {
    return 0;
}