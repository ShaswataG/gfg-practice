#include<iostream>
using namespace std;

class Solution {
   public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int i = l, j = m+1, k = l;
         int b[r+1];
         while (i <= m && j <= r) {
             if (arr[i] < arr[j]) {
                 b[k++] = arr[i++];
             } else {
                 b[k++] = arr[j++];
             }
         }
         while (i <= m) {
             b[k++] = arr[i++];
         }
         while (j <= r) {
             b[k++] = arr[j++];
         }
         for (int i = l; i <= r; i++) {
             arr[i] = b[i];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int mid = (l+r)/2;
        if (l < r) {
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
    }
};

int main() {
    return 0;
}