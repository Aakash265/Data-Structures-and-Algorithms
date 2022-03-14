#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    sort(arr, arr + n);
    return arr[k-1];
}

void input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
}

int main() {
    int n, k;
    cin>>n;
    int arr[n];
    input(arr, n);
    cin>>k;
    int ans = kthSmallest(arr, n, k);
    cout<<ans;
}