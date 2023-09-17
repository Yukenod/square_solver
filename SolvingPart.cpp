#include <cstdio>
#include <cmath>
#include <cassert>
#include "SolvingPart.h"
#include "EqualityForRealNums.h"

RootsNum solveSquare(double a, double b, double c, double *x1, double *x2)
{
    assert(x1 != NULL);
    assert(x2 != NULL);

    double D = b*b - 4*a*c;;
    double sqrt_D = sqrt(D);

    if(nearToZero(a))
        return solveLinear(b, c, x1);

    if(nearToZero(D))
    {
        *x1 = -b / (2*a);
        return ONE_ROOT;
    }

    if(D < 0)
        return NO_ROOTS;

    *x1 = (-b + sqrt_D) / (2*a);
    *x2 = (-b - sqrt_D) / (2*a);
    return TWO_ROOTS;
}

RootsNum solveLinear(double b, double c, double *root)
{
    assert(root != NULL);

    if(nearToZero(b))
        if(nearToZero(c))
            return INF_ROOTS;
        else
            return NO_ROOTS;

    *root = - c / b;
    return ONE_ROOT;
}
