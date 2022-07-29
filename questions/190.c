#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int evaluate_f(int *iptr[], int n, int *index){
    int max = (iptr[0][0])*4-6*(iptr[0][1]);
    for(int i=1;i<n;i++){
        int temp = (iptr[i][0])*4-6*(iptr[i][1]);
        if(temp>max){
            max = temp;
            *index = i;
        }
    }
return max;
}
int main(){
  int a[] = { 9, 7 };
  int b[] = { 3, 2 };
  int c[] = { 3, 2 };
  int d[] = { 9, 7 };
  int *iptr[] = { a, b, c, d };
  int max, index;
  max = evaluate_f(iptr, 4, &index);
  printf("%d %d\n", max, index);
}
