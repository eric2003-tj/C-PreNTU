#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
void check(int n){
int array[4]={0};
int index = 0;
while(n!=0){
    array[index] = n%10;
    n = n/10;
    index++;
}
if(array[0]%2 == 0){
    printf("yes\t");
}else{
    printf("no\t");
}
if((array[0]+array[1]+array[2]+array[3])%3 == 0){
    printf("yes\t");
}else{
    printf("no\t");
}
if(array[0] == 0||array[0] == 5){
    printf("yes\t");
}else{
    printf("no\t");
}
if(array[0]+array[2]-array[1]-array[3]%11 == 0){
    printf("yes\t");
}else{
    printf("no\t");
}
}
int main(void)
{
    int a;
    while(scanf("%d",&a)!=EOF){
        if(a == -1){
                break;
            }
        check(a);
        printf("\n");
    }
}
