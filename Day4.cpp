#include<math.h>

bool isPrime(int n)
{
	// Tc: O(squrt(n))
	// Sc: O(1)
	
	// Write your code here.
	if(n == 1) return false;

	for(int i = 2; i < sqrt(n) ; i++) {
		if(n % i == 0) {
			return false;
		}
	}

	return true;
}
