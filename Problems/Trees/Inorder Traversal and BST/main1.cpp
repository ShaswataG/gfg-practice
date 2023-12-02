#include<iostream>
using namespace std;

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        int last = arr[0];
        for (int i = 1; i < N; i++) {
            if (arr[i] < last) return 0;
            last = arr[i];
        }
        return 1;
    }
};