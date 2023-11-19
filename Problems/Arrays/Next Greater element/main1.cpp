using namespace std;
#include<iostream>
#include<vector>

class Solution {
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    v.push_back(arr[j]);
                    break;
                } else if (j == n-1 && arr[j] < arr[i]) {
                    v.push_back(-1);
                }
            }
        }
        v.push_back(-1);
        return v;
    }
};