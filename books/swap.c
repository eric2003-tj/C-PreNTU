#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
void swap(int *a,int *b);
int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("%d\n%d",a,b);

  return 0;
}
void swap(int *a,int *b){
 int temp;
 temp = *b;
 *b = *a;
 *a = temp;
}
