#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    if(n == 1) return 1;

    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i+1]) return 0;
    }
    return 1;
}


int main() {
    int n = 5;
    vector<int> a = {1, 2, 3, 4, 5};
    int ans = isSorted(n, a);
    cout << ans << endl;
    return 0;
}