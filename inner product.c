#include <stdio.h>
#include <assert.h>

int main(void)
{
    int num;
    printf("請輸入向量長度:");
    scanf("%d",&num);
    printf("請輸入向量:");
    int arr1[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr1[i]);
    }
    printf("請輸入向量:");
    int arr2[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr2[i]);
    }
    int sum = 0;
    for(int i=0;i<num;i++){
        sum+=arr1[i]*arr2[i];
    }
    printf("%d",sum);
    return 0;
}
