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
int array[20];
int i;
while(scanf("%d",&array[i])!=NULL){
    i++;
}
for(int j=0;j<i-1;j++){
    int min,max;
    int temp[50];
    int ticker = 0;
    if(array[j]>array[j+1]){
        min=array[j+1];
        max=array[j];
    }else{
        min=array[j];
        max=array[j+1];
    }
    for(int k=1;k*k<=min;k++){
        if(min%k==0){
            temp[ticker] = k;
            temp[ticker+1] = min/k;
            ticker+=2;
        }
    }
    bubble(temp,ticker);
    int gcd;
    for(int k=ticker-1;k>=0;k--){
        if(max%temp[k] ==0){
            gcd = temp[k];
            break;
        }
    }
    int lcm;
    lcm = (min*max)/gcd;
    array[j+1] = lcm;
}
printf("%d",array[i-1]);
}
