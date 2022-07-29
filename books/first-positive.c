#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int *firstPositive(int*ptr){
while(*ptr<=0){
    ptr++;
}
return ptr;
}
int main(void){
  int array[10];
  for(int i=0;i<10;i++){
    scanf("%d",&array[i]);
  }
  int *iptr = firstPositive(array);
  printf("*iptr = %d\n", *iptr);
  printf("iptr - array = %ld\n", iptr - array);
  iptr = firstPositive(&(array[5]));
  printf("*iptr = %d\n", *iptr);
  printf("iptr - array = %ld\n", iptr - array);
  return 0;
  return 0;
}
