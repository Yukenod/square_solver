#ifndef SOLVING_PART_H_INCLUDED
#define SOLVING_PART_H_INCLUDED

enum RootsNum {NO_ROOTS, ONE_ROOT, TWO_ROOTS, INF_ROOTS};

RootsNum solveSquare(double a, double b, double c, double *x1, double *x2);
RootsNum solveLinear(double b, double c, double *root);

#endif
