using namespace std;
#include<iostream>

class Solution {
public:
    int searchInSorted(int arr[], int N, int K) {
        int l, r, mid;
        l = 0, r = N-1;
        while (l <= r) {
            mid = (l+r)/2;
            if (K == arr[mid]) return 1;
            else if (K < arr[mid]) r = mid-1;
            else l = mid+1; 
        }
        return -1;
    }
};

int main() {
    return 0;
}