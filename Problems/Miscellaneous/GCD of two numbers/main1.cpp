#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        // vector<int> factors_a;
        // vector<int> factors_b;
        // for (int i = 2; i < sqrt(a); i++)
        // {
        //     if ()
        // }
    }
    int isPrime(int N){
        // code here
        if (N == 1) return false;
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};