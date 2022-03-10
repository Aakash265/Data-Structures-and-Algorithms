#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int x, int y) {
    int temp;
    while (x < y) {
        temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;
        y--;
    }
}

void reversalArray(int arr[], int d, int n) {
    if (d == 0)
        return;
    
    d = d%n;
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

void print(int arr[], int n) {
    cout<<"Rotated array is: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n; // array length
    cin>>n;
    int d; // rotation length
    cin>>d;

    int arr[n]; // array declaration

    // enter array
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    reversalArray(arr, d, n);
    print(arr, n);
}
