#include <math.h>
#include "integration.h"

double integral(double a, double b, double (*f)(double), unsigned n)
{
	if (n == 0)
		return NAN;

	if (a > b)
		return -integral(b, a, f, n);

	double delta = (b - a) / n;
	double s = (f(a) + f(b)) / 2;

	while (b - a > delta)
		s += f(a += delta);

	return s * delta;
}
