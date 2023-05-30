// Time Complexity - O(N^2)

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int pos = 0; pos <= n-2; pos++) {
        int curr = arr[pos];
        int minPos = pos;
        // Loop to find out the minimum element
        for (int j = pos; j < n; j++) {
            if (arr[j] < arr[minPos]) {
                minPos = j;
            }
        }
        //Swap outside the loop
        swap(arr[minPos], arr[pos]);
    }
}

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,2};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    for (auto x : arr)
        cout<<x<<", ";
    return 0;
}