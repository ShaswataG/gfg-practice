using namespace std;
#include<iostream>

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* start = NULL;

// class Solution
// {
//     public:
//     //Function to sort a linked list of 0s, 1s and 2s.
//     Node* segregate(Node *head) {
//  /*
// TC = O(n)
// SC = O(n)
//  */       
//         // Add code here
//         Node* p = head;
//         Node* q = NULL;
//         Node* r;
//         Node* first = NULL;
//         while (p)
//         {
//             q = new Node(p->data);
//             if (first == NULL)
//             {
//                 q->next = NULL;
//                 first = q;
//             }
//             else
//             {
//                 switch (p->data)
//                 {
//                     case 0 :
//                     {
//                         q->next = first;
//                         first = q;
//                     }
//                     break;
//                     case 1 :
//                     {
//                         r = first;
//                         while (r->next != NULL && r->next->data == 0)
//                         {
//                             r = r->next;
//                         }
//                         q->next = r->next;
//                         r->next = q;
//                         r = nullptr;
//                     }
//                     break;
//                     case 2 :
//                     {
//                         r = first;
//                         while (r->next != NULL && r->next->data == 0)
//                         {
//                             r = r->next;
//                         }
//                         q->next = r->next;
//                         r->next = q;
//                         r = nullptr;
//                     }
//                     break;
//                     default :
//                     break;
//                 }
//             }
//             p = p->next;
//             q = nullptr;
//         }
//         head = first;
//         return head;
//     }
// };

   Node* segregate(Node *head) {
 /*
TC = O(n)
SC = O(n)
 */       
        // Add code here
        Node* temp, * p, * zero, * one, * two, * last;
        Node* firstZero, * firstOne, * firstTwo;
        firstOne = firstTwo = firstTwo = NULL;
        zero = one = two = NULL;
        p = head;
        while (p) {
            temp = p->next;
            switch(p->data) {
                case 0 : {
                    if (!zero) {
                        head = p;
                        zero = p;
                        firstZero = p;
                    } else {
                        zero->next = p;
                        zero = p;
                    }
                }
                break;
                case 1 : {
                    if (!one) {
                        one = p;
                        if (!zero) head = one;
                        firstOne = p;
                    } else {
                        one->next = p;
                        one = p;
                    }
                }
                break;
                case 2 : {
                    if (!two) {
                        two = p;
                        if (!zero && !one) head = two;
                        firstTwo = p;
                    } else {
                        two->next = p;
                        two = p;
                    }    
                }
                break;
            }
            last = p;   /***/
            p = temp;
        }
        if (zero) head = firstZero;
        else if (!zero) {
            if (one) head = firstOne;
            else if (!one && two) head = firstTwo;
        }
        if (zero && firstOne) zero->next = firstOne;
        else if (zero && firstTwo) zero->next = firstTwo;
        if (one && firstTwo) one->next = firstTwo;
        else if (one && !firstTwo) one->next = NULL;
        
        if (two) last = two;
        else if (one) last = one;
        else if (zero) last = zero;
        last->next = NULL;
        return head;
    }

void Create(int a[], int n) {
    Node* t = NULL;
    Node* last = NULL;
    start = new Node(a[0]);
    start->next = NULL;
    last = start;
    for (int i = 1; i < n; i++) {
        t = new Node(a[i]);
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(Node* p) {
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 2, 1, 2, 1};
    Create(arr, 5);
    Display(start);
    Node* final = segregate(start);
    Display(final);
    return 0;
}