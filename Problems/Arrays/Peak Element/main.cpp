using namespace std;
#include<iostream>

int peakElement(int arr[], int n)
{
   // Your code here
    if (n == 1) return 0;
    else if (n == 2) {
        if (arr[0] > arr[1]) return 0;
        else return 1;
    } else {
        for (int i = 0; i < n-1; i++) {
            if (i = 0) {
                if (arr[i] > arr[i+1]) return i;
                else return (i+1);
            } else {
                if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) return i;
            }
        }
    }
    return 0;
}

int main() {
    int a[] = {10, 13, 16, 14, 11, 2, 10, 19, 6, 15, 12, 11, 12, 10, 14, 16, 9, 1, 2};
    cout << peakElement(a, 19) << endl;
    return 0;
}