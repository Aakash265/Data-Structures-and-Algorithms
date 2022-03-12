#include<bits/stdc++.h>
using namespace std;

int largestSumContigious(int arr[], int n) {
    int max = 0, maxSoFar = INT_MIN;
    for (int i = 0; i < n; i++) {
        max = max + arr[i];
        if (max > maxSoFar){
            maxSoFar = max;
        }
        if (max < 0) {
            max = 0;
        }
    }
    return maxSoFar;
}

void input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    int ans = largestSumContigious(arr, n);
    cout<<ans;
}