#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
int main(void)
{
    int array[] = {3,4,5,6,8,9,0};
    int num;
    num = sizeof(array)/sizeof(1);
    bool k = false;
    int key;
    scanf("%d",&key);
    for(int i = 0;i<num;i++){
        if(array[i] == key){
            k = true;
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}
