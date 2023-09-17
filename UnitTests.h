#ifndef UNITTESTS_H_INCLUDED
#define UNITTESTS_H_INCLUDED

#include "SolvingPart.h"

struct TestsData
{
    double a, b, c;
    double x1r, x2r;
    int roots_numr;
};

const TestsData sqr_sol[] =
  //{     a,      b,      c,         x1r,       x2r,  roots_numr}
   {{     0,      0,      0,           0,         0,   INF_ROOTS},
    {     0,      0,      1,           0,         0,    NO_ROOTS},
    {     0,      1,      0,           0,         0,    ONE_ROOT},
    {     1,     10,    -39,           3,       -13,   TWO_ROOTS},
    {    89,     49,     21,           0,         0,    NO_ROOTS},
    {    13,    -23,     24,           0,         0,    NO_ROOTS},
    {     1,     -2,      1,           1,         0,    ONE_ROOT},
    {     9,    -12,      3,     0.33333,         1,   TWO_ROOTS},
    {    -9,    -12,     -3,    -0.33333,        -1,   TWO_ROOTS},
    {    28, -207.2, 383.32,         3.7,         0,    ONE_ROOT},
    {    14,      2,    -30,    -1.53702,   1.39416,   TWO_ROOTS},
    {    17,      1,    -32,    -1.40172,   1.34289,   TWO_ROOTS},
    {    58,    -32,-500000,   -92.57222,  93.12394,   TWO_ROOTS},
    {     5,     -2,-502521,  -316.82404, 317.22404,   TWO_ROOTS},
    {     3,      8,     -9,    -3.51915,   0.85248,   TWO_ROOTS},
    {    12,     -7,-124988,  -101.76592, 102.34926,   TWO_ROOTS},
    {0.0001,    -98,     -7,980000.07143,  -0.07143,   TWO_ROOTS},
    {     1,  -4589,   9181,     2.00153,4586.99847,   TWO_ROOTS},
    {  0.12,    493,    -12, -4108.35767, 0.0243406,   TWO_ROOTS},
    {   924,     -3, -12000,    -3.60213,   3.60537,   TWO_ROOTS},
    {     1,      1,      1,           0,         0,    NO_ROOTS},
    {     2,      0,    -50,          -5,         5,   TWO_ROOTS}};

void singleTest(const TestsData *sqr_sol);
bool checkRoots(const TestsData *sqr_sol,
                double root1, double root2,
                int roots_num);
void displayUnitTests();

#endif // UNITTESTS_H_INCLUDED
