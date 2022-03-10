#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
 
void rotate(int arr[], int d, int n)
{
    d = d % n;
    int g = gcd(d, n);
    for (int i = 0; i < g; i++) {
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
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

    rotate(arr, d, n);
    print(arr, n);
}
