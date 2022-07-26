#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
int main(void)
{
    int row1,col1,row2,col2;
    scanf("%d%d%d%d",&row1,&col1,&row2,&col2);
    bool k = false;
    if (col1 == row2){
        k = true;
    }
    while(k){
        int arr1[row1][col1];
        int arr2[row2][col2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                scanf("%d",&arr1[i][j]);
            }
        }
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        int arr3[row1][col2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                    int sum =0;
                for(int k =0;k<col1;k++){
                  sum += arr1[i][k]*arr2[k][j];
                }
                 arr3[i][j] = sum;
            }
        }
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }
        break;

}
 return 0;}
