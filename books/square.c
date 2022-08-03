#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int square(int x){
  return x*x;
}
int main(void)
{
   double radius;
   const double pi = 3.1415926;
   scanf("%lf",&radius);
   printf("%lf\n",square(radius)*pi);
}
