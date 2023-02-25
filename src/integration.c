#include <math.h>
#include "integration.h"

double trapezoid_area(double a, double b, double h)
{
	return h * (a + b) / 2;
}

double integral(double a, double b, double (*f)(double), double delta)
{
	if (delta == 0)
		return NAN;

	if (a > b)
		return -integral(b, a, f, delta);

	delta = fabs(delta);
	double s = 0;

	while (delta <= b - a)
		s += trapezoid_area(f(a), f(a += delta), delta);

	return s + trapezoid_area(f(a), f(b), b - a);
}
