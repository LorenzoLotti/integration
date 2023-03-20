// Usage example.

#include <stdio.h>
#include <math.h>
#include "integration.h"

// f(x) = x(x^2 - 1)^3
double f(double x)
{
	return x * pow((pow(x, 2) - 1), 3);
}

int main()
{
	// a = 0;  b = 2;  delta = 1/10000000
	double a = 0, b = 2, delta = 0.0000001;

	// n is a natural number; delta = (b - a)/n  =>  n = floor[(b - a)/delta]
	unsigned n = (b - a) / delta;

	// S = integral from a to b of f(x) dx
	double s = integral(a, b, f, n);

	printf("S = %f\n", s);
	// Expected output: ~10
}
