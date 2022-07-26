#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
int main(void)
{
 float x;
 float xx;
 int n = 10;
 scanf("%f",&x);
 double e = 1;
 xx = x;
 int fac =1;
 for(int i = 1;i<=n;i++){
    e+=(xx/fac);
    xx = xx*x;
    fac = fac*(i+1);
 }
 printf("%lf",e);
 return 0;
}
