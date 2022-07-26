#include <stdio.h>
#include <assert.h>
int main(void)
{
    int prime;
    printf("請輸入欲檢驗的數:");
    scanf("%d",&prime);
    int arr[prime];
    for(int i=2;i<=prime;i++){
        arr[i] = 1;
    }

    int i = 2;
    while(i*i<prime){
        while(!arr[i]){
            i++;
        }
        for(int j=2*i;j<=prime;j+=i){
            arr[j] = 0;
        }
        i++;
    }
    for(int j=2;j<=prime;j++){
        if(arr[j]==1){
            printf("%d\n",j);
        }
    }
    return 0;
}
