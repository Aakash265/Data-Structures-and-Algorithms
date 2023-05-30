// Time complexity - O(log(N))
// Space complexity - O(1)

#include<bits/stdc++.h>
using namespace std;

int binary (int arr[], int n, int key) {
    int s = 0;
    int e = n-1;
    
    while (s <= e) {
        int mid = (s+e)/2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            e = mid-1;
        else
            s = mid+1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 13, 15, 1, 7, 90, 33};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;
    sort(arr, arr+n); // {1, 7, 10, 13, 15, 33, 90}
    int index = binary(arr, n, key);
    if (index != -1)
        cout<<"Element is present at "<<index<<" index.";
    else
        cout<<"Element is not present.";
    
    return 0;
}