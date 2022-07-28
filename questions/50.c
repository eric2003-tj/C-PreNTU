#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
void bubble(int array[],int m){
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
}
int main(void)
{
  int arr[3][4];
  for(int i =0;i<3;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  int a[3];
  for(int i=0;i<3;i++){
    a[i] = (arr[i][2]-arr[i][0])*(arr[i][3]-arr[i][1]);
  }
  int b[3];
int index = 0;
  for(int i =0;i<2;i++){
    for(int j=i+1;j<3;j++){
        if(arr[i][3]<arr[j][1] || arr[i][1]>arr[j][3] || arr[i][2]<arr[j][0] || arr[j][2]<arr[i][0]){
            b[index] = 0;
            index++;
            continue;
        }else{
           int array1[4] = {arr[i][0],arr[i][2],arr[j][0],arr[j][2]};
           bubble(array1,4);
           int array2[4] = {arr[i][1],arr[i][3],arr[j][1],arr[j][3]};
           bubble(array2,4);
           b[index] = (array1[2]-array1[1])*(array2[2]-array2[1]);
           index++;
    }
  }}
  int c;
  bool k = true;
  for(int i = 0;i<3;i++){
    if(b[i] == 0){
        k = false;
        break;
    }
  }
  if(k){
    int array3[6] = {arr[0][0],arr[0][2],arr[1][0],arr[1][2],arr[2][0],arr[2][2]};
    bubble(array3,6);
    int array4[6] = {arr[0][1],arr[0][3],arr[1][1],arr[1][3],arr[2][1],arr[2][3]};
    bubble(array4,6);
    c = (array3[3] - array3[2])*(array4[3] - array4[2]);
  }else{
    c = 0;
  }
  int sum = 0;
  for(int i=0;i<3;i++){
     sum += a[i];
  }
  for(int i=0;i<3;i++){
     sum -= b[i];
  }
  printf("%d\n",c);
  sum += c;
  printf("%d\n",sum);
  return 0;
}
