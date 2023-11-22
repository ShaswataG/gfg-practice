using namespace std;
#include<iostream>
#include<vector>

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        int i, j, l, temp;
        for (i = 1; i < n; i++) {
            temp = arr[i];
            j = i;
            while (j > 0 && temp > arr[j/2]) {
                arr[j] = arr[j/2];
                j /= 2;
            }
            arr[j] = temp;
        }
        int x;
        for (i = n-1; i > 1; i--) {
            x = arr[0];
            arr[0] = arr[i];
            arr[i] = x;
            j = 0, l = 1;
            while (l < i-1) {
                if (arr[l+1] > arr[l]) l++;
                if (arr[j] < arr[l]) {
                    temp = arr[j];
                    arr[j] = arr[l];
                    arr[l] = temp;
                    j = l;
                    l = 2*j;
                } else
                    break;
            }
        }
        
        vector<int> v;
        i = n-1;
        int cnt = 0;
        while (cnt < k) {
            v.push_back(arr[i]);
            i--;
            cnt++;
        }
        return v;
    }
};

int main() {
    return 0;
}