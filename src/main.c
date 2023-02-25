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
	// integral from 0 to 2 of f(x) dx
	double s = integral(0, 2, f, 0.0000001);
	printf("S = %f\n", s);
	// Expected output: ~10
}
