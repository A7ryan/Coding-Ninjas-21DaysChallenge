#include<iostream>
using namespace std;

int countDigits(int n){
	// Time Constraint: 0(log n)
	// Space Constraint: 0(1)
	int temp = 0;
	while(n > 0) {
		n /= 10;
		++temp;
	}
	return temp;
}

int main() {
    // Just generated random numbers from 0 to Max_rand() - using cpp inbuilt function.
    int n = rand();
    int ans = countDigits(n);
    cout << ans << endl;
    return 0;
}
