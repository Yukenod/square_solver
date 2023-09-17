#include <cstdio>
#include <cassert>
#include "SolvingPart.h"
#include "UnitTests.h"
#include "EqualityForRealNums.h"

void singleTest(const TestsData *sqr_sol)
{
    assert(sqr_sol != NULL);

    double x1 = 0;
    double x2 = 0;
    int roots_num = solveSquare(sqr_sol->a, sqr_sol->b, sqr_sol->c, &x1, &x2);

    if(checkRoots(sqr_sol, x1, x2, roots_num))
        printf("Success\n");
    else
        printf("Fail: a = %lg, b = %lg, c = %lg,"
               " x1r = %lg, x2r = %lg, roots_numr = %d,"
               " x1 = %lg, x2 = %lg, roots_num = %d\n",
                sqr_sol->a, sqr_sol->b, sqr_sol->c,
                sqr_sol->x1r, sqr_sol->x2r, sqr_sol->roots_numr,
                x1, x2, roots_num);
}

bool checkRoots(const TestsData *sqr_sol,
                double root1, double root2,
                int roots_num)
{
    return (realEqual(sqr_sol->x1r, root1) || realEqual(sqr_sol->x2r, root1)) &&
           (realEqual(sqr_sol->x1r, root2) || realEqual(sqr_sol->x2r, root2)) &&
           sqr_sol->roots_numr == roots_num;
}

void displayUnitTests()
{
    const int TESTS_NUM = sizeof(sqr_sol) / sizeof(sqr_sol[0]);

    for(size_t i = 0; i < TESTS_NUM; i++)
    {
        printf("%d:", i + 1);
        singleTest(&sqr_sol[i]);
    }
}
