#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
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

int main(void){
int temp[2];
int array[100][2];
int index = 0;
while(scanf("%d%d",&temp[0],&temp[1])!=EOF){
    array[index][0] = temp[0];
    array[index][1] = temp[1];
    index++;
}
int xlabel[index];
int ylabel[index];
for(int i = 0;i<index;i++){
    xlabel[i] = array[i][0];
    ylabel[i] = array[i][1];
}
bubble(xlabel,index);
bubble(ylabel,index);
int xmin = xlabel[index-1]-xlabel[0];
int ymin = ylabel[index-1]-ylabel[0];
int area = xmin*ymin;
printf("%d\n",area);
}
