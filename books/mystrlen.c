#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int mystrlen(char*string){
int i =0;
while(i<80 && string[i]!='\0'){
    i++;
}
return i;
}
int main(void){
   char string[80];
  scanf("%s", string);
  printf("%s\n", string);
  int length = mystrlen(string);
  printf("%d\n", length);
  return 0;
}
