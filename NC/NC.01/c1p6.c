#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int f(int);

int main()
{
  int i=0;

  while(i<10){
    printf("%d\n",f(i));
    ++i;
  }
}

int f(int x){   
  return(x*x);
}
