#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
void printdigits(int n);
int main(void)
{
 int n;
 scanf("%d",&n);
 printdigits(n);
 return 0;
}
void printdigits(int n){

int max = 40;
int digits[max];
int index = 0;
while(n!=0){
    digits[index] = n%10;
    index++;
    n = n/10;
}
for(int i = index-1;i>=0;i--){
    printf("%d\n",digits[i]);
}

}
