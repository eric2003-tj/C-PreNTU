#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void posneg(int array[5][5], int result[2]);
int main() {
  int i, j;
  int array[5][5];
  int result[2];
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      scanf("%d", &array[i][j]);

  posneg(array, result);
  printf("%d\n", result[0]);
  printf("%d\n", result[1]);
  return 0;
}
void posneg(int array[5][5], int result[2]){
int pos = 0;
int neg = 0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(array[i][j]>0){
            pos++;
        }else if(array[i][j]<0){
            neg++;
        }
    }
}
result[0] = neg;
result[1] = pos;
}
