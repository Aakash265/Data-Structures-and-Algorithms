#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n) {
    int res = INT_MIN;
    for (int i = 0; i < n; i++) {
        int currSum = 0;
        for (int j = 0; j < n; j++) {
            int index = (i+j)%n;
            currSum += j*arr[index];
        }
        res = max(res, currSum);
    }
    return res;
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
    int ans = maxSum(arr, n);
    cout<<ans;
}