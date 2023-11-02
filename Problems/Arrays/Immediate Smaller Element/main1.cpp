using namespace std;
#include<iostream>
#include<vector>

class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
/*
TC = O(n)
*/
        int i;
        for (i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                arr[i] = arr[i+1];
            }
            else
            {
                arr[i] = -1;
            }
        }
        arr[i] = -1;
	}

};

int main()
{
    return 0;
}