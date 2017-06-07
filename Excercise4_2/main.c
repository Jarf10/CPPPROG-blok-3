/*
 * • result1 = (−3−i)*(5−2i) = -17+1i
 * • result2 = (1−i)/(i+3)
 * • result3 = −3e^(0.5πi)
 */

#include <stdio.h>
#include <complex.h>
#include <tgmath.h>

int main(void)
{
   double complex result1 = (-3.0-1.0*I)*(5.0-2.0*I);
   double complex result2 = (1.0-1.0*I)/(1.0*I+3.0);
   double complex result3 = -3.0*pow(10.0,0.5*I*acos(-1));
   printf("(−3−i)*(5−2i)\t= %6.2f%+6.2fi\n", creal(result1), cimag(result1));
   printf("(1−i)/(i+3)\t= %6.2f%+6.2fi\n", creal(result2), cimag(result2));
   printf("−3e^(0.5πi)\t= %6.2f%+6.2fi\n", creal(result3), cimag(result3));
   return 0;
}
