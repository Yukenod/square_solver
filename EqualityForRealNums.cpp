#include <cmath>
#include "EqualityForRealNums.h"

bool realEqual(double real_num1, double real_num2)
{
    return fabs(real_num1 - real_num2) < ACC_NUM;
}

bool nearToZero(double real_num)
{
    return fabs(real_num) < ACC_NUM;
}
