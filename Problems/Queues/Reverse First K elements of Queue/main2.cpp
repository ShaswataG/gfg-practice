using namespace std;
#include<iostream>
#include<queue>

/*
without using extra space
*/

void reverseKelement(queue<int>& q,int k){
    if(k==0){
        return;
    }
    int element = q.front();
    q.pop();
    k--;
    
    reverseKelement(q,k);
    
    q.push(element);
}
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    reverseKelement(q,k);
    
    int cnt=0;
    int n = q.size() - k;
    while(cnt < n){
        int element = q.front();
        q.pop();
        q.push(element);
        cnt++;
    }
    
    return q;
}

int main() {
    return 0;
}