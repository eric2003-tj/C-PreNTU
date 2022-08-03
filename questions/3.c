#include <stdio.h>
void swap(int *a,int*b){
  int temp;
  temp = *b;
  *b = *a;
  *a = temp;
  printf("%d\n%d\n",*a,*b);
}
int main(void) {
  int a,b;
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  return 0;
}
