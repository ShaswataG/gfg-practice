using namespace std;
#include<iostream>
#include<vector>

vector<int> duplicates(long long arr[], int n) {
    // code here
    vector<int> r;
    int found = 0;
    int H[n] = {0};
    for (int i = 0; i < n; i++) {
        H[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (H[i] > 1) {
            r.push_back(i);
            found = 1;
        }
    }
    if (found == 0) {
        r.push_back(-1);
        return r;
    } else
        return r;
}

int main() {
    long long arr[7] = {0, 5, 4, 1, 2, 5, 2};
    long long arr1[4] = {0, 3, 1, 2};
    // vector<int> v = duplicates(arr, 7);
    vector<int> v = duplicates(arr1, 4);
    for (int i = 0; i <v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}