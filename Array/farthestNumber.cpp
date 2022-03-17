#include<bits/stdc++.h>
using namespace std;

void farthest(int arr[], int n) {

    int suffix_min[n];
    suffix_min[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix_min[i] = min(suffix_min[i + 1], arr[i]);
    }
 
    for (int i = 0; i < n; i++) {
        int low = i + 1, high = n - 1, ans = -1;
 
        while (low <= high) {
            int mid = (low + high) / 2;

            if (suffix_min[mid] < arr[i]) {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        cout << ans << " ";
    }
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
    farthest(arr, n);
}