#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b) {	
	int gc_d = 1;
	int p = 1;

	while (p <= a && p <= b) {
		if (a % p == 0 && b % p == 0) {
			gc_d = p;
		}
		++p;
	}

	return gc_d;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).
	long long p;

	if (n <= 0) {
		return 0;
	}else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

	//1 1 2 3 5 8 13
	return 0;
}
