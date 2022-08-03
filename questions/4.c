#include <stdio.h>
void sum(int a,int b,int c){
  printf("%d\n",a+b+c);
}
int main(void) {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  sum(a,b,c);
  return 0;
}
