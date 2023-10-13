// C++ program to find the prime numbers
// between a given interval
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	// Declare the variables
	int a, b, i, j;

	// Ask user to enter lower value of
	// interval please not interval < 0
	// cannot be prime numbers
	cout << "Enter lower bound of the interval: ";

	// Take input
	cin >> a;

	// Ask user to enter upper value
	// of interval
	cout << "Enter upper bound of the interval: ";

	// Take input
	cin >> b;

	// Print display message
	cout << "Prime numbers between " << a << " and " << b
		<< " are: ";

	// Explicitly handling the cases
	// when a is less than 2 since 0
	// and 1 are not prime numbers
	if (a <= 2) {
		a = 2;
		if (b >= 2) {
			cout << a << " ";
			a++;
		}
	}

	// Making sure that a is odd before
	// beginning the loop
	if (a % 2 == 0)
		a++;

	// NOTE : We traverse through
	// odd numbers only
	for (i = a; i <= b; i = i + 2) {
		// flag variable to tell
		// if i is prime or not
		bool flag = 1;

		// We traverse till square root of j only.
		// (Largest possible value of prime factor)
		for (j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		// flag = 1 means i is prime
		// and flag = 0 means i is
		// not prime
		if (flag == 1) {
			if (i == 1)
				continue;
			else
				cout << i << " ";
		}
	}

	return 0;
}
