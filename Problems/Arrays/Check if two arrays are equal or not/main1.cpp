using namespace std;
#include<bits/stdc++.h>

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, ll N) {
        //code here
        if (A.size() != B.size()) return 0;
        ll max1 = INT32_MIN, max2 = INT32_MIN;        
        for (ll i = 0; i < A.size(); i++) {
            if (A[i] > max1) max1 = A[i];
        }
        for (ll i = 0; i < A.size(); i++) {
            if (B[i] > max2) max2 = B[i];
        }
        if (max1 != max2) return 0;
        ll H1[max1+1] = {0}, H2[max2+1] = {0};
        for (ll i = 0; i < A.size(); i++) {
            H1[A[i]]++;
        }
        for (ll i = 0; i < B.size(); i++){
            H2[B[i]]++;
        }
        for (ll i = 0; i <= max1; i++) {
            if (H1[i] != H2[i]) return 0;
        }
        return 1;
    }
};

ll main() {
    return 0;
}