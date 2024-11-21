#include<math.h>

bool isPrime(int n)
{
	// Tc: O(squrt(n))
	// Sc: O(1)
	// n = 7, square root of n is ~2 -> NOT Divisible by 2, return false
	// n = 8, square root of n is ~2 -> Divisible by 2, return true

	// Write your code here.
	if(n == 1) return false;

	for(int i = 2; i < sqrt(n) ; i++) {
		if(n % i == 0) {
			return false;
		}
	}

	return true;
}
