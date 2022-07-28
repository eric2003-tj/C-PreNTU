#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
void printarray(int array[],int n);
int main(void)
{
 int a[3];
 int b[4];
 for(int i = 0;i<3;i++){
    scanf("%d",&a[i]);
 }
 for(int i = 0;i<4;i++){
    scanf("%d",&b[i]);
 }
 printarray(a,3);
 printf("\n");
 printarray(b,4);
 return 0;
}
void printarray(int array[],int n){
    for(int i = 0; i<n;i++){
        printf("%d\t",array[i]);
    }
}
