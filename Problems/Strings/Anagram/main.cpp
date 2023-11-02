using namespace std;
#include<iostream>

bool isAnagram(string a, string b){
        
    // Your code here
    int H[26] = {0};
    for (int i = 0; a[i] != '\0'; i++) {
        H[a[i]-97]++;
    }
    for (int i = 0; b[i] != '\0'; i++) {
        H[b[i]-97]--;
    }
    for (int i = 0; i < 26; i++) {
        if (H[i] < 0) return false;
    }
    for (int i = 0; i < 26; i++) {
        H[i] = 0;
    }
    for (int i = 0; b[i] != '\0'; i++) {
        H[b[i]-97]++;
    }
    for (int i = 0; a[i] != '\0'; i++) {
        H[a[i]-97]--;
    }
    for (int i = 0; i < 26; i++) {
        if (H[i] < 0) return false;
    }
    return true;
}
int main() {
    string a = "geeskforgeek", b = "forgeekgeek";
    cout << isAnagram(a, b) << endl;

    return 0;
}