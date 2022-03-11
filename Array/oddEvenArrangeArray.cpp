// Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i
// https://ide.geeksforgeeks.org/2KXsoIdPZC
#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n) {
    int tempArr[n];
    for (int i = 0; i < n; i++) {
        tempArr[i] = arr[i];
    }
    sort(tempArr, tempArr + n);
    int mid;
    int even = 1, odd = 1;
    if (n%2 == 0) {
        mid = (n/2) - 1;
        arr[0] = tempArr[mid];
        for (int i = 1; i < n; i++) {
            if (i%2 == 0) {
                arr[i] = tempArr[mid-even];
                even++;
            }
            else {
                arr[i] = tempArr[mid+odd];
                odd++;
            }
        }
    }
    else {
        mid = n/2;
        arr[0] = tempArr[mid];
        for (int i = 1; i < n; i++) {
            if (i%2 == 0) {
                arr[i] = tempArr[mid-even];
                even++;
            }
            else {
                arr[i] = tempArr[mid+odd];
                odd++;
            }
        }
    }
}

void input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
}

void print(int arr[], int n) {
    cout<<"Rearranged array is: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    arrange(arr, n);
    print(arr, n);
}