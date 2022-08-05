#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
int sum(int n){
  if(n==1){
    return n*n;
  }else{
    return n*n+sum(n-1);
  }
}
#define STRINGLEN 128
int main(void)
{
  int n;
  scanf("%d",&n);
  int x = sum(n);
  printf("%d\n",x);
  return 0;
}
