#include "InputOutput.h"
#include "SolvingPart.h"

void onlySquareSolver()
{
    double a = 0;
    double b = 0;
    double c = 0;

    coeffsInput(&a, &b, &c);

    double x1 = 0;
    double x2 = 0;
    RootsNum roots_num = solveSquare(a, b, c, &x1, &x2);

    resultsOutput(roots_num, x1, x2);
}
