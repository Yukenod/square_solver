#ifndef INPUTOUTPUT_H_INCLUDED
#define INPUTOUTPUT_H_INCLUDED

#include "SolvingPart.h"

void coeffsInput(double *a, double *b, double *c);
void safeNumInput(double *coeff, char coeff_name);
bool isInputNormal(double coeff, char coeff_name);
void resultsOutput(RootsNum roots_num, double x1, double x2);
void cleanBuffer();

#endif
