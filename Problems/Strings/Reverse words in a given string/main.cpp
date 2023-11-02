using namespace std;
#include<iostream>
#include<vector>

string reverseWords(string S) 
{ 
    // code here 
    vector<string> line;
    char word[100];
    int j = 0;
    int l;
    for (l = 0; S[l] != '\0'; l++) {
    }
    for (int i = 0; i <= l; i++) {
    // for (int i = 0; i < 16; i++) {
        if (S[i] == '.' || S[i] == '\0') {
            word[j] = '\0';
            line.push_back(word);
            j = 0;
        } else {
            word[j] = S[i];
            j++;
        }
    }
    for (int i = 0; i < line.size()/2; i++) {
        string temp = line[i];
        line[i] = line[line.size() - 1 - i];
        line[line.size() - 1 - i] = temp;
    }
    for (int i = 0; i < line.size(); i++) {
        if (i == line.size()-1) {
            cout << line[i];
        } else {
            cout << line[i] << ".";
        }
    }
    cout << endl;
    return "hello";
} 
int main() {
    string s = "i.like.this.program.very.much";
    reverseWords(s);
    return 0;
}