#include <stdio.h>
#include <assert.h>
int main(void)
{
    int prime;
    printf("請輸入欲檢驗的數:");
    scanf("%d",&prime);
    int k = 1;
    for(int i=2;i*i<prime;i++){
        if(prime%i==0){
            k = 0;
            break;
        }
    }
    if(k==1){
        printf("質數");
    }else{
        printf("合數");
    }
    return 0;
}
