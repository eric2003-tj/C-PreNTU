#include <stdio.h>
#include <assert.h>
int main(void)
{
    int m;
    scanf("%d",&m);
    int array[m];
    for(int i=0;i<m;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(array[i]>array[j]){
        int temp;
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
        }
    }
    for(int i=0;i<m;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}
