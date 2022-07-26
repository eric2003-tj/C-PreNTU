#include <stdio.h>
#include <assert.h>

int main(void)
{
    int num;
    printf("請輸入數列長度:");
    scanf("%d",&num);
    int fib[num];
    fib[0] = 0;
    fib[1] = 1;
    for(int i =2;i<num;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    for(int i=0;i<num;i++){
        printf("%d\t",fib[i]);
    }
    return 0;
}
