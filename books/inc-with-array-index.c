#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void){
  int a[5];
  for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  int *ptr = a;
  for(int i=0;i<2;i++){
    ptr[i] += 3;
  }
  for(int i=0;i<5;i++){
    printf("a[%d] = %d\n",i,a[i]);
  }
  ptr = &(a[2]);
  for(int i=0;i<2;i++){
    ptr[i] += 3;
  }
  for(int i=0;i<5;i++){
    printf("a[%d] = %d\n",i,a[i]);
  }
  return 0;
}
