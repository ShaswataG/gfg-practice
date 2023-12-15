#include<iostream>
using namespace std;

class Solution {
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        int j;
        if (low < high) {
            j = partition(arr, low, high);
            quickSort(arr, low, j-1);
            quickSort(arr, j+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int i = low, j = high;
       int temp;
       int pivot = arr[low];
       while (i < j) {
        while (arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
       }
       temp = arr[low];
       arr[low] = arr[j];
       arr[j] = temp;
       return j; 
    }  
};