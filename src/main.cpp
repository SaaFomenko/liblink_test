#include <iostream>
#include "arith.h"


int main()
{
    my::arith A;

    std::cout << A.mul(2, 5) << '\n';
    std::cout << A.power(2, 5) << '\n';

    return 0;
}