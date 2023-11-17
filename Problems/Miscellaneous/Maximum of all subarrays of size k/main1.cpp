using namespace std;
#include<iostream>
#include<vector>

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int cnt = 0, j = 1;
        vector<int> v;
        int max = arr[0];
        if (k == 1) {
            for (int i = 0; i < n; i++) {
                v.push_back(arr[i]);
            }
        } else {
            for (int i = 0; i <= n; i++) {
                if (cnt == k) {
                    v.push_back(max);
                    i = j-1;
                    j++;
                    cnt = 0;
                    if (j >= n) break;
                    max = arr[i+1];
                    continue;
                }
                if (arr[i] > max) max = arr[i];
                cnt++;
                if (j >= n) break;
            }            
        }
        return v;
    }
};