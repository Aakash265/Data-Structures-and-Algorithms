// Time Complexity - O(N^2)

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i <= n-1; i++) {
        int curr = arr[i];
        int prev = i-1;
        
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev = prev-1;
        }
        arr[prev+1] = curr;
    }
}

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,2};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);
    for (auto x : arr)
        cout<<x<<", ";
    return 0;
}