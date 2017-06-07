#include <stdio.h>

void average2D(double *pdouble1, double *pdouble2);

int main(void)
{   
   double a = 10;
   double b = 1;
   average2D(&a, &b);

   a = 20;
   b = 10;
   average2D(&a, &b);

   a = 126.4;
   b = 17.5;
   average2D(&a, &b);

   return 0;
}

void average2D(double *pdouble1, double *pdouble2)
{
   double temp = *pdouble1 + *pdouble2;
   double answer = temp / 2;
   *pdouble1 = answer;
   *pdouble2 = answer;
}
