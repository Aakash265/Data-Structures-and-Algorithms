#include<bits/stdc++.h>
using namespace std;

void fixArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1 && arr[i] != i) {
            temp = arr[i];
            while (arr[temp] != -1 && arr[temp] != temp) {
                int val = arr[temp];
                arr[temp] = temp;
                temp = val;
            }
            arr[temp] = temp;
            if (arr[i] != i) {
                arr[i] = -1;
            }
        }
    }
}

void print(int arr[], int n) {
    cout<<"New array is: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    fixArray(arr, size);
    print(arr, size);
    return 0;
}