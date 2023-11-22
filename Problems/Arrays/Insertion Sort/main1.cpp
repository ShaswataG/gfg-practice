using namespace std;
#include<iostream>

class Solution {
    public:
        void insert(int arr[], int i) {

        }
        void insertionSort(int arr[], int n) {
            int temp;
            int i, j;
            for (i = 1; i < n; i++) {
                temp = arr[i];
                for (j = i-1; j >= 0 && temp < arr[j]; j--) {
                    arr[j+1] = arr[j];
                }
                arr[j+1] = temp;
            }
        }
};

int main() {
    return 0;
}