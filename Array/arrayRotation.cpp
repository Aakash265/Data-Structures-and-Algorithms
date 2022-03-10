#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int d) {
    int temp;
    d = d%n; // if d >= n
    int first = arr[0];
    for (int i = 0; i < n; i++) {
        temp = arr[i];
        int j = i;
        int k = j + d;
        
        // if rotation is equal to array length
        if (k == i) {
            break;
        }
        // last round
        if (k >= n) {
            k = n-1;
        }
        // general rotation or swap
        if (i == n-2) {
            if (arr[i] != first) {
                arr[j] = arr[n-1];
                arr[n-1] = temp;
                break;
            }
            else {
                break;
            }
        }
        arr[j] = arr[k];
        arr[k] = temp;
    }
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

    rotate(arr, n, d);
    print(arr, n);
}
