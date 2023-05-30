// Time Complexity - O(NlogN) => sort()

#include<bits/stdc++.h>
using namespace std;

// Comparator
bool compare (int a, int b) {
    cout<<"Comparing "<<a<<" and "<<b<<endl;
    return a > b;
}

int main() {
    int arr[] = {10,9,7,4,2,43,67,8,1,90,3};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n, compare);
    // reverse(arr, arr+n);

    for (int x : arr) {
        cout<<x<<' ';
    }
}