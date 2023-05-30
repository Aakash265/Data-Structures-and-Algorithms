// Time complexity - O(N)
// Space complexity - O(1)

#include<bits/stdc++.h>
using namespace std;

int linear (int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 13, 15, 1, 7, 90, 33};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    int index = linear(arr, n, key);
    if (index != -1)
        cout<<"Element is present at "<<index<<" index.";
    else
        cout<<"Element is not present.";
    
    return 0;
}