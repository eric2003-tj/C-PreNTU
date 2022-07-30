#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void){
  char zodiac[12][40],*zptr[12];
  for(int i=0;i<12;i++){
    scanf("%s",zodiac[i]);
    zptr[i] = zodiac[i];
  }
  for(int i=0;i<11;i++){
    for(int j=i+1;j<12;j++){
        if(strcmp(zodiac[i],zodiac[j])>0){
            char *temp;
            temp = zptr[i];
            zptr[i] = zptr[j];
            zptr[j] = temp;
        }
    }
  }
  for(int i=0;i<12;i++){
    printf("%s\n",zptr[i]);
  }
  return 0;
}
