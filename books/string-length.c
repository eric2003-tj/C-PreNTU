#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void){
  char string[80];
  char *ptr = string;
  scanf("%s",ptr);
  int len = strlen(ptr);
  for(int i=0;i<len/2;i++){
    int temp = ptr[i];
    ptr[i] = ptr[len-i-1];
    ptr[len-i-1] = temp;
  }
  printf("%s",ptr);
}
