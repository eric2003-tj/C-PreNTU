#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int find(char *string,char *table[]){
int index = 0;
while(table[index] != NULL){
    if(strcmp(string,table[index]) == 0){
        return index;
    }
    index++;
}
return -1;
}
int main(void){
  char *table[] =
    {"+", "-", "*", "/", "%", "==", "!=",
     "<", ">", "<=", ">=", NULL};
  char string[80];
  while (scanf("%s", string) != EOF)
    printf("%d\n", find(string, table));
  return 0;
}
