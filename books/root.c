#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
int main(void)
{
 double n,error;
 scanf("%lf%lf",&n,&error);
 double low = 0.0,high = n;
 double x =(low+high)/2;
 while(x*x-n>error||n-x*x>error){
    if(x*x-n>error){
        high = x;
    }else{
        low =x;
    }
    x = (low+high)/2;
 }
 printf("x=%9.8f,error=%9.8f\n",x,x*x-n);
 return 0;
}
