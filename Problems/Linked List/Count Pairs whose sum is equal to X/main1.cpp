#include<iostream>

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here 
/*
TC = O(n)
SC = O(n)
where n = maximum element in the list
*/
        int max1, max2;
        max1 = max2 = INT16_MIN;
        struct Node* p;

// finding max value in the first list
        p = head1;
        while (p) {
            if (p->data > max1) max1 = p->data;
            p = p->next;
        }

// finding max value in the second list
        p = head2;
        while (p) {
            if (p->data > max2) max2 = p->data;
            p = p->next;
        }

// creating two hash array of size (max1+1) and (max2+1) respectively and then assigning zero to all elements
        int H1[max1+1] = {0};
        int H2[max2+1] = {0};

// counting each element in the list and thereby incrementing elements of the hash array
        p = head1;
        while (p) {
            H1[p->data]++;
            p = p->next;
        }
        p = head2;
        while (p) {
            H2[p->data]++;
            p = p->next;
        }

//  checking and counting the presence of pairs of elements in both the lists whose sum is equal to x
        int cnt = 0;
        for (int i = 0; i < max1+1; i++) {
            if(H1[i] > 0 && (x-i) <= max2 && (H2[x-i]) > 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    return 0;
}