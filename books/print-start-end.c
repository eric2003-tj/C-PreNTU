#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
void printnumbers(int start,int end);
int main(void)
{
 int a,b;
 scanf("%d%d",&a,&b);
 assert(a<=b);
 printnumbers(a,b);
 return 0;
}
void printnumbers(int start,int end){
for(int i = start;i<=end;i++){
    printf("%d\n",i);
}
}
