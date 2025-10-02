#include "calculator.h"
#include <cmath>

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

double Calculator::Sqrt (double a)
{
    if (a < 0)
        return 0;
    return std::sqrt(a);
}
