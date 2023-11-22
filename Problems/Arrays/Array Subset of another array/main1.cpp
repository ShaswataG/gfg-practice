using namespace std;
#include<iostream>

string isSubset(int a1[], int a2[], int n, int m) {
    unsigned long long int max1 = a1[0], max2 = a2[0];
    for (unsigned long long int i = 0; i < n; i++) {
        if (a1[i] > max1) max1 = a1[i];
    }
    for (unsigned long long int i = 0; i < m; i++) {
        if (a2[i] > max2) max2 = a2[i];
    }
    unsigned long long int H1[max1+1] = {0};
    unsigned long long int H2[max2+1] = {0};
    for (unsigned long long int i = 0; i < n; i++) {
        H1[a1[i]]++;
    }
    for (unsigned long long int i = 0; i < m; i++) {
        H2[a2[i]]++;
    }
    if (max2 > max1) return "No";
    for (unsigned long long int i = 0; i <= max2; i++) {
        if (H2[i] > 0) {
            if (H1[i] < H2[i]) return "No";
        }
    }
    return "Yes";
}

int main() {
    return 0;
}