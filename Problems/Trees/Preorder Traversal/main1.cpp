using namespace std;
#include<iostream>
#include<vector>

struct Node {
    int data;
    Node* left, * right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void Preorder(vector<int> * v, Node* p) {
    if (p) {
        v->push_back(p->data);
        Preorder(v, p->left);
        Preorder(v, p->right);
    }
}


vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
    Node* p = root;
    Preorder(&v, root);
    return v;
}


