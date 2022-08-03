#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int sum(const int a[],const int n){
int total = 0;
for(int i=0;i<n;i++){
    total+=a[i];
}
return total;
}
int main(void)
{
  int array[5];
  for(int i=0;i<5;i++){
    scanf("%d",&array[i]);
  }
   printf("%d\n",sum(array,5));
}
