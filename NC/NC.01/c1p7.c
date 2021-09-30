#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.141592

int main()
{
  double x=pi;
  double p;

  p = pow(sin(x),2) + cos(x)*cos(x);

  printf("%f\n",p);

}
