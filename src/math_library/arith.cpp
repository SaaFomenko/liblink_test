#include <cstddef>
#include "arith.h"


double my::arith::power(double x, int p)
{
    double P = x;
    for (size_t i = 0; i < p - 1; ++i)
    {
        P = P * x;
    }

    return P;
}

double my::arith::mul(double x, double y)
{
    return x * y;
}