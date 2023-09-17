#include <cstdio>
#include <cmath>
#include <cassert>
#include "InputOutput.h"

void coeffsInput(double *a, double *b, double *c)
{
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);

    printf("ax^2 + bx + c = 0\n");

    safeNumInput(a, 'a');
    safeNumInput(b, 'b');
    safeNumInput(c, 'c');
}

void safeNumInput(double *coeff, char coeff_name)
{
    assert(coeff != NULL);

    int symb = 0;

    printf("%c = ", coeff_name);
    scanf("%lg", coeff);

    while(isInputNormal(*coeff, coeff_name) == 0)
    {
        printf("Error. Try once again\n");
        printf("%c = ", coeff_name);
        cleanBuffer();
        scanf("%lg", coeff);
    }
}

bool isInputNormal(double coeff, char coeff_name)
{
    if(!std::isfinite(coeff))
        return false;

    int symb = 0;

    while((symb = getchar()) != '\n')
    {
        if(symb == ' ' || symb == '\t' || symb == EOF)
            continue;

        return false;
    }

    return true;
}

void resultsOutput(RootsNum roots_num, double x1, double x2)
{
    switch(roots_num)
    {
        case NO_ROOTS:
            printf("\nNo real roots\n");
            break;

        case ONE_ROOT:
            printf("\nOne root x = %lg\n", x1);
            break;

        case TWO_ROOTS:
            printf("\nTwo roots x1 = %lg; x2 = %lg\n", x1, x2);
            break;

        case INF_ROOTS:
            printf("\nAny real number is a root\n");
            break;

        default:
            printf("\nError\n");
            break;
    }
}

void cleanBuffer()
{
    while(getchar() != '\n') { }
}
