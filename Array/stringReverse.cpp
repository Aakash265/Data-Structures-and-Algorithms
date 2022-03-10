#include<bits/stdc++.h>
using namespace std;

string reverse(string str) {
    int start = 0;
    int end = str.size()-1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}


int main() {
    string str;
    cin>>str;
    str = reverse(str);
    cout<<str;
}