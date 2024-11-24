#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int &n)
{
	// Write your code here.
	// Tc: O(log(n))
	// Sc: O(1)
	int t = 0;
	while(n > 0) {
		int a = n % 10; // get last digit
		t = t * 10 + a;
		n /= 10;
	}
	return t;
}

int main() {
    int n = 123;
    int ans = reverseNumber(n);
    cout << ans << endl;
    return 0;
}