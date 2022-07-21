#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void)
{
 int data;
 int sum,count = 0;
 while(scanf("%d",&data)!=EOF){
    sum += data;
    count++;
 }
 printf("%f",sum/(float)count);
 return 0;
}
